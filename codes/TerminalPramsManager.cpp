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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  struct System_Collections_Generic_List_string__o **p_eventScriptMessages; // x0
  TerminalPramsManager_c *v13; // x8

  if ( (byte_41846A2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v1);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v2);
    sub_B2C35C(&float___TypeInfo, v3);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_41846A2 = 1;
  }
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  v7 = StringLiteral_1/*""*/;
  static_fields->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&static_fields->mTerminalWarStartedIds, v7);
  v8 = TerminalPramsManager_TypeInfo;
  TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = -1;
  v8->static_fields->clearBattleRaidId = -1;
  v8->static_fields->TipsArchiveEventUiId = 0;
  v8->static_fields->TipsArchiveCurrrentTab = 0;
  v9 = sub_B2C374(float___TypeInfo, 3LL);
  v10 = TerminalPramsManager_TypeInfo->static_fields;
  v10->TipsArchiveScrollValueList = (struct System_Single_array *)v9;
  sub_B2C2F8(&v10->TipsArchiveScrollValueList, v9);
  TerminalPramsManager_TypeInfo->static_fields->joinGroupId = -1;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  p_eventScriptMessages = &TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  *p_eventScriptMessages = (struct System_Collections_Generic_List_string__o *)v11;
  sub_B2C2F8(p_eventScriptMessages, v11);
  v13 = TerminalPramsManager_TypeInfo;
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->EVENT_POINT_EFFECT_STATE_SUB = 0xFFFFFFFFLL;
  v13->static_fields->EVENT_POINT_EFFECT_STATE_ADD = 1;
  v13->static_fields->isInvisibleConnectAndLoad = 0;
  v13->static_fields->ConnectMarkEventId = 0;
  v13->static_fields->ConnectMarkAnimationId = 0;
  v13->static_fields->meSceneStatus = 0;
  v13->static_fields->isCheckHomeExpirationDateEventMap = 1;
  v13->static_fields->IsEventMapLoading = 0;
  v13->static_fields->IsjumbleRaidHomeTopRequest = 0;
}


void __fastcall TerminalPramsManager__AutoOff(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4184656 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184656 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C70 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4183C70 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 0;
  if ( !byte_4183C77 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4183C77 = 1;
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

  if ( (byte_4184681 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11553/*"SAVEKEY_BlankEarthRank"*/, v2);
    byte_4184681 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184731 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184731 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11553/*"SAVEKEY_BlankEarthRank"*/,
    v3->static_fields->_BlankEarthRank_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__BlankEarthSpotId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4184680 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11554/*"SAVEKEY_BlankEarthSpotId"*/, v2);
    byte_4184680 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C6A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4183C6A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11554/*"SAVEKEY_BlankEarthSpotId"*/,
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

  if ( (byte_418467F & 1) == 0 )
  {
    sub_B2C35C(&CommonUI_CampaignDirectBonusData___TypeInfo, v1);
    sub_B2C35C(&JsonManager_TypeInfo, v2);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_11555/*"SAVEKEY_CampaignDirectBonus"*/, v4);
    byte_418467F = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184730 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184730 = 1;
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
    p_obj = (Il2CppObject *)sub_B2C374(CommonUI_CampaignDirectBonusData___TypeInfo, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__toJson(p_obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11555/*"SAVEKEY_CampaignDirectBonus"*/, v7, 0LL);
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
  __int64 v9; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x19
  WarEntity_o *v13; // [xsp+0h] [xbp-20h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4184693 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_SpotMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4184693 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !entity )
    goto LABEL_17;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0LL);
  if ( !v10 )
    goto LABEL_17;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v10,
          &v13,
          (int32_t)Instance,
          (const MethodInfo_24E412C *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v13 )
LABEL_17:
    sub_B2C434(Instance, v9);
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
            *(&v13->fields.id + 1),
            (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall TerminalPramsManager__CheckClearSelectedStoryQuestId(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4184682 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184682 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184729 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184729 = 1;
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
    if ( !byte_4184729 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
      byte_4184729 = 1;
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
      if ( !byte_4183C6D )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
        byte_4183C6D = 1;
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

  if ( (byte_418466C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_13612/*"TerminalBeforeEventActivityPoint"*/, v1);
    sub_B2C35C(&StringLiteral_13613/*"TerminalBeforeEventActivityPointGauge"*/, v2);
    byte_418466C = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13612/*"TerminalBeforeEventActivityPoint"*/, 0LL)
      && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13613/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckEventSubmarinePointSaveData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418466E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_13614/*"TerminalBeforeEventSubmarinePointData"*/, v1);
    byte_418466E = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13614/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckIsOrdealCallWarClear(WarEntity_o *warEntity, const MethodInfo *method)
{
  int32_t parentWarId; // w19
  BalanceConfig_c *v4; // x0

  if ( (byte_41846A0 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    byte_41846A0 = 1;
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
  TerminalPramsManager___c__DisplayClass598_0_o *v14; // x19
  const MethodInfo *v15; // x1
  TerminalPramsManager_c *v16; // x0
  ScrTerminalListTop_c *v17; // x8
  int32_t NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // w20
  const MethodInfo *v19; // x1
  ScrTerminalListTop_c *v20; // x0
  int32_t NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // w20
  ScrTerminalListTop_c *v22; // x0
  System_String_o *v23; // x1
  System_String_o *v24; // x20
  TerminalPramsManager_c *v25; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  System_String_o *v27; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v29; // x21
  void *v30; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v31; // x22
  __int64 v32; // x1
  struct System_String_o *effectIdsStr; // x19
  TerminalPramsManager_c *v34; // x0
  struct System_String_o **p_PlayedTerminalEffects_k__BackingField; // x0
  const MethodInfo *v36; // x0
  __int64 v37; // x0
  int32_t v38; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4184686 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string___ctor__, v1);
    sub_B2C35C(&System_Action_string__TypeInfo, v2);
    sub_B2C35C(&char___TypeInfo, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_string___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ForEach__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Remove__, v6);
    sub_B2C35C(&ScrTerminalListTop_TypeInfo, v7);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    sub_B2C35C(&Method_TerminalPramsManager___c__DisplayClass598_0__CheckResumeEffectNT2_b__0__, v9);
    sub_B2C35C(&TerminalPramsManager___c__DisplayClass598_0_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v11);
    sub_B2C35C(&StringLiteral_68/*"\r\n"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_4184686 = 1;
  }
  v38 = 0;
  v14 = (TerminalPramsManager___c__DisplayClass598_0_o *)sub_B2C42C(TerminalPramsManager___c__DisplayClass598_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass598_0___ctor(v14, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184727 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
    byte_4184727 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  if ( v16->static_fields->_PlayedTerminalEffects_k__BackingField )
  {
    v17 = ScrTerminalListTop_TypeInfo;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v17 = ScrTerminalListTop_TypeInfo;
      v16 = TerminalPramsManager_TypeInfo;
    }
    NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v17->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v16);
    if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID, v15) )
    {
      v20 = ScrTerminalListTop_TypeInfo;
      if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v20 = ScrTerminalListTop_TypeInfo;
      }
      NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID = v20->static_fields->NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID, v19) )
      {
        v22 = ScrTerminalListTop_TypeInfo;
        if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
          v22 = ScrTerminalListTop_TypeInfo;
        }
        v38 = v22->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
        v24 = System_Int32__ToString((int32_t)&v38, 0LL);
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4184727 )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v23);
          byte_4184727 = 1;
        }
        v25 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v25 = TerminalPramsManager_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v25->static_fields->_PlayedTerminalEffects_k__BackingField;
        if ( !PlayedTerminalEffects_k__BackingField )
          goto LABEL_50;
        v27 = System_String__Replace_44312768(
                PlayedTerminalEffects_k__BackingField,
                (System_String_o *)StringLiteral_68/*"\r\n"*/,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                0LL);
        PlayedTerminalEffects_k__BackingField = (System_String_o *)sub_B2C374(char___TypeInfo, 1LL);
        if ( !PlayedTerminalEffects_k__BackingField )
          goto LABEL_50;
        v23 = PlayedTerminalEffects_k__BackingField;
        if ( !LODWORD(PlayedTerminalEffects_k__BackingField[1].klass) )
        {
          v37 = sub_B2C460(PlayedTerminalEffects_k__BackingField);
          sub_B2C400(v37, 0LL);
        }
        LOWORD(PlayedTerminalEffects_k__BackingField[1].monitor) = 10;
        if ( !v27
          || (v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                           v27,
                                                                           (System_Char_array *)PlayedTerminalEffects_k__BackingField,
                                                                           0LL),
              (PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                            v28,
                                                                            (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL)
          || (v29 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)PlayedTerminalEffects_k__BackingField,
              PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)PlayedTerminalEffects_k__BackingField,
                                                                           (WarBoardManager_TaskList_o *)v24,
                                                                           (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__),
              !v14) )
        {
LABEL_50:
          sub_B2C434(PlayedTerminalEffects_k__BackingField, v23);
        }
        v30 = StringLiteral_1/*""*/;
        v14->fields.effectIdsStr = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_B2C2F8(&v14->fields, v30);
        v31 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_string__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v31,
          (Il2CppObject *)v14,
          Method_TerminalPramsManager___c__DisplayClass598_0__CheckResumeEffectNT2_b__0__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_string___ctor__);
        System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          v29,
          (System_Action_T__o *)v31,
          (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_string__ForEach__);
        effectIdsStr = v14->fields.effectIdsStr;
        if ( !byte_418470C )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v32);
          byte_418470C = 1;
        }
        v34 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v34 = TerminalPramsManager_TypeInfo;
        }
        p_PlayedTerminalEffects_k__BackingField = &v34->static_fields->_PlayedTerminalEffects_k__BackingField;
        *p_PlayedTerminalEffects_k__BackingField = effectIdsStr;
        sub_B2C2F8(p_PlayedTerminalEffects_k__BackingField, effectIdsStr);
        TerminalPramsManager__Save_SaveData(v36);
      }
    }
  }
}


void __fastcall TerminalPramsManager__ClearEventQuestIds_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_418467B & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11556/*"SAVEKEY_ClearEventQuestIds"*/, v2);
    byte_418467B = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418472A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418472A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11556/*"SAVEKEY_ClearEventQuestIds"*/,
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

  if ( (byte_418467A & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11558/*"SAVEKEY_ConnectMarkEventId"*/, v2);
    sub_B2C35C(&StringLiteral_11557/*"SAVEKEY_ConnectMarkAnimationId"*/, v3);
    byte_418467A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11558/*"SAVEKEY_ConnectMarkEventId"*/, v4->static_fields->ConnectMarkEventId, 0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11557/*"SAVEKEY_ConnectMarkAnimationId"*/,
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

  if ( (byte_4184696 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_4184696 = 1;
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
  if ( !byte_4184747 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    byte_4184747 = 1;
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
  sub_B2C2F8(p_lastPlayBgmName, v8);
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

  if ( (byte_418465F & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11561/*"SAVEKEY_LastPlayBgmName"*/, v2);
    sub_B2C35C(&StringLiteral_13616/*"TerminalEndTime"*/, v3);
    sub_B2C35C(&StringLiteral_5197/*"Debug_IsOriginalGuestNPC"*/, v4);
    sub_B2C35C(&StringLiteral_11567/*"SAVEKEY_PlayedTerminalEffects"*/, v5);
    sub_B2C35C(&StringLiteral_13612/*"TerminalBeforeEventActivityPoint"*/, v6);
    sub_B2C35C(&StringLiteral_11555/*"SAVEKEY_CampaignDirectBonus"*/, v7);
    sub_B2C35C(&StringLiteral_11562/*"SAVEKEY_LastPlayQuestConsumeType"*/, v8);
    sub_B2C35C(&StringLiteral_13617/*"TerminalEventDailyPointEventId"*/, v9);
    sub_B2C35C(&StringLiteral_5193/*"Debug_GuestNPCInfoList"*/, v10);
    sub_B2C35C(&StringLiteral_13614/*"TerminalBeforeEventSubmarinePointData"*/, v11);
    sub_B2C35C(&StringLiteral_13623/*"TerminalPhaseCnt"*/, v12);
    sub_B2C35C(&StringLiteral_11571/*"SAVEKEY_TerminalConquestInfos"*/, v13);
    sub_B2C35C(&StringLiteral_13631/*"TerminalTimeStatusEventId"*/, v14);
    sub_B2C35C(&StringLiteral_13615/*"TerminalDispState"*/, v15);
    sub_B2C35C(&StringLiteral_11564/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v16);
    sub_B2C35C(&StringLiteral_13618/*"TerminalIsDoneShortcut"*/, v17);
    sub_B2C35C(&StringLiteral_11563/*"SAVEKEY_MapModelClearQuestInfo"*/, v18);
    sub_B2C35C(&StringLiteral_11568/*"SAVEKEY_PlayerGenderType"*/, v19);
    sub_B2C35C(&StringLiteral_11572/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v20);
    sub_B2C35C(&StringLiteral_11556/*"SAVEKEY_ClearEventQuestIds"*/, v21);
    sub_B2C35C(&StringLiteral_11565/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v22);
    sub_B2C35C(&StringLiteral_5198/*"Debug_IsQuestReleaseAll"*/, v23);
    sub_B2C35C(&StringLiteral_5195/*"Debug_IsDummyErrorSelect"*/, v24);
    sub_B2C35C(&StringLiteral_13626/*"TerminalQuestId"*/, v25);
    sub_B2C35C(&StringLiteral_11570/*"SAVEKEY_TerminalConquestInfoDisp"*/, v26);
    sub_B2C35C(&StringLiteral_11575/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v27);
    sub_B2C35C(&StringLiteral_13630/*"TerminalTimeStatusEventDailyPoint"*/, v28);
    sub_B2C35C(&StringLiteral_13635/*"TerminalWarId"*/, v29);
    sub_B2C35C(&StringLiteral_13628/*"TerminalSpotId"*/, v30);
    sub_B2C35C(&StringLiteral_13632/*"TerminalTimeStatusLoopCount"*/, v31);
    sub_B2C35C(&StringLiteral_13613/*"TerminalBeforeEventActivityPointGauge"*/, v32);
    sub_B2C35C(&StringLiteral_11554/*"SAVEKEY_BlankEarthSpotId"*/, v33);
    sub_B2C35C(&StringLiteral_11559/*"SAVEKEY_DataLostBattleAutoReset"*/, v34);
    sub_B2C35C(&StringLiteral_5196/*"Debug_IsOriginalBattle"*/, v35);
    sub_B2C35C(&StringLiteral_13636/*"TerminalWarStartedIds"*/, v36);
    sub_B2C35C(&StringLiteral_5192/*"Debug_BattleEnemyList"*/, v37);
    sub_B2C35C(&StringLiteral_11558/*"SAVEKEY_ConnectMarkEventId"*/, v38);
    sub_B2C35C(&StringLiteral_13634/*"TerminalTransitionInfoVoiceAssetName"*/, v39);
    sub_B2C35C(&StringLiteral_11557/*"SAVEKEY_ConnectMarkAnimationId"*/, v40);
    sub_B2C35C(&StringLiteral_11566/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v41);
    sub_B2C35C(&StringLiteral_13621/*"TerminalLastPlayedQuestId"*/, v42);
    sub_B2C35C(&StringLiteral_5194/*"Debug_IsBuildInfoDisp"*/, v43);
    sub_B2C35C(&StringLiteral_13633/*"TerminalTransitionInfoMissionId"*/, v44);
    sub_B2C35C(&StringLiteral_11574/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v45);
    byte_418465F = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13615/*"TerminalDispState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13635/*"TerminalWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13628/*"TerminalSpotId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13626/*"TerminalQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13621/*"TerminalLastPlayedQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13623/*"TerminalPhaseCnt"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13616/*"TerminalEndTime"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13618/*"TerminalIsDoneShortcut"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13636/*"TerminalWarStartedIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5198/*"Debug_IsQuestReleaseAll"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5195/*"Debug_IsDummyErrorSelect"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5194/*"Debug_IsBuildInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5196/*"Debug_IsOriginalBattle"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5197/*"Debug_IsOriginalGuestNPC"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5192/*"Debug_BattleEnemyList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5193/*"Debug_GuestNPCInfoList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13631/*"TerminalTimeStatusEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13632/*"TerminalTimeStatusLoopCount"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13617/*"TerminalEventDailyPointEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13630/*"TerminalTimeStatusEventDailyPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13633/*"TerminalTransitionInfoMissionId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13634/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13612/*"TerminalBeforeEventActivityPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13613/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13614/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11571/*"SAVEKEY_TerminalConquestInfos"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11570/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11572/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11561/*"SAVEKEY_LastPlayBgmName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11562/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11567/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11564/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11565/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11566/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11575/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11558/*"SAVEKEY_ConnectMarkEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11557/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11574/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11556/*"SAVEKEY_ClearEventQuestIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11563/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11559/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11568/*"SAVEKEY_PlayerGenderType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11555/*"SAVEKEY_CampaignDirectBonus"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11554/*"SAVEKEY_BlankEarthSpotId"*/, 0LL);
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

  if ( (byte_4184697 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11560/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v2);
    byte_4184697 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184748 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184748 = 1;
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
  sub_B2C2F8(p_EventRaidDefeatedEffectInfo_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11560/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, 0LL);
}


void __fastcall TerminalPramsManager__DeleteQuestRandomGroupList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  struct System_Collections_Generic_Dictionary_int__int__o **p_QuestRandomGroupList_k__BackingField; // x0

  if ( (byte_418469C & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11569/*"SAVEKEY_QuestRandomGroupList"*/, v2);
    byte_418469C = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418474A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418474A = 1;
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
  sub_B2C2F8(p_QuestRandomGroupList_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11569/*"SAVEKEY_QuestRandomGroupList"*/, 0LL);
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

  if ( (byte_4184668 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_13617/*"TerminalEventDailyPointEventId"*/, v2);
    sub_B2C35C(&StringLiteral_13630/*"TerminalTimeStatusEventDailyPoint"*/, v3);
    byte_4184668 = 1;
  }
  BeforeTimeEventDailyPoint_k__BackingField = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184723 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184723 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13617/*"TerminalEventDailyPointEventId"*/,
    v4->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4184724 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    byte_4184724 = 1;
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
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13630/*"TerminalTimeStatusEventDailyPoint"*/, v7, 0LL);
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

  if ( (byte_4184667 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_13631/*"TerminalTimeStatusEventId"*/, v2);
    sub_B2C35C(&StringLiteral_13632/*"TerminalTimeStatusLoopCount"*/, v3);
    byte_4184667 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184721 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184721 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13631/*"TerminalTimeStatusEventId"*/,
    v4->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_4184722 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    byte_4184722 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13632/*"TerminalTimeStatusLoopCount"*/,
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
  __int64 v7; // x1
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418468B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, method);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v3);
    byte_418468B = 1;
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
      sub_B2C434(v6, v7);
  }
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         folderLastIdxs,
         warId,
         &value,
         (const MethodInfo_2E26150 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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

  if ( (byte_418465B & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v2);
    byte_418465B = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C8F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v2);
    byte_4183C8F = 1;
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
    if ( !byte_4183C9B )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v2);
      byte_4183C9B = 1;
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

  if ( (byte_4184661 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184661 = 1;
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

  if ( (byte_4184689 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_1/*""*/, v2);
    byte_4184689 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184732 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184732 = 1;
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
  if ( !byte_4183C7E )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4183C7E = 1;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = v4;
  sub_B2C2F8(&static_fields->_QuestWindowMessage_k__BackingField, v4);
  if ( !byte_4183C7D )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    byte_4183C7D = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_MessageDispType_k__BackingField = 0;
  if ( !byte_4184733 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4184733 = 1;
  }
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v8 = v7->static_fields;
  v8->_BattleSetupKeep_k__BackingField = 0LL;
  sub_B2C2F8(&v8->_BattleSetupKeep_k__BackingField, 0LL);
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

  if ( (byte_4184660 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_1/*""*/, v2);
    byte_4184660 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C69 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4183C69 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4183C9C )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4183C9C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SpotId_k__BackingField = 0;
  if ( !byte_4183C6B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4183C6B = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_QuestId_k__BackingField = 0;
  if ( !byte_4183CBD )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4183CBD = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_LastPlayedQuestId_k__BackingField = 0;
  if ( !byte_41846FD )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_41846FD = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
  if ( !byte_4183CBE )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4183CBE = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = 0;
  if ( !byte_4183CB3 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4183CB3 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_AfterActionFocusQuestId_k__BackingField = 0;
  if ( !byte_4183C6D )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4183C6D = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
  if ( !byte_4183C6E )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4183C6E = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  if ( !byte_41846FE )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_41846FE = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
  if ( !byte_4183CAF )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4183CAF = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 0;
  if ( !byte_4183CB5 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4183CB5 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_B2C2F8(&static_fields->_SelectedBannerEntity_k__BackingField, 0LL);
  if ( !byte_4183C6C )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    byte_4183C6C = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_PhaseCnt_k__BackingField = 0;
  if ( !byte_4183CB6 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4183CB6 = 1;
  }
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_EndTime_k__BackingField = 0LL;
  if ( !byte_4183C72 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4183C72 = 1;
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
  sub_B2C2F8(&v8->mTerminalWarStartedIds, v9);
  if ( !byte_41846FF )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
    byte_41846FF = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->mDebug_IsQuestReleaseAll = 0;
  if ( !byte_4184700 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4184700 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->mDebug_IsDummyErrorSelect = 0;
  if ( !byte_4184701 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4184701 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->mDebug_IsBuildInfoDisp = 0;
  if ( !byte_4183CB8 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4183CB8 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_TimeStatusEventId_k__BackingField = 0;
  if ( !byte_4183CB9 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4183CB9 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_TimeStatusLoopCount_k__BackingField = 0;
  if ( !byte_4184702 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4184702 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  p_timeStatusRecord_k__BackingField = &v11->static_fields->_timeStatusRecord_k__BackingField;
  *p_timeStatusRecord_k__BackingField = 0LL;
  sub_B2C2F8(p_timeStatusRecord_k__BackingField, 0LL);
  if ( !byte_4184703 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
    byte_4184703 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_EventDailyPointEventId_k__BackingField = 0;
  if ( !byte_4184704 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4184704 = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = 0LL;
  if ( !byte_4184705 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4184705 = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
  if ( !byte_4184706 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4184706 = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
  if ( !byte_4184707 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4184707 = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  p_BeforeEventSubmarineSaveData_k__BackingField = &v14->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  *p_BeforeEventSubmarineSaveData_k__BackingField = 0LL;
  sub_B2C2F8(p_BeforeEventSubmarineSaveData_k__BackingField, 0LL);
  v16 = StringLiteral_1/*""*/;
  p_lastPlayBgmName = &TerminalPramsManager_TypeInfo->static_fields->lastPlayBgmName;
  *p_lastPlayBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(p_lastPlayBgmName, v16);
  v19 = TerminalPramsManager_TypeInfo;
  TerminalPramsManager_TypeInfo->static_fields->lastPlayQuestConsumeAp = 0;
  v19->static_fields->panelEventPoint = 0;
  if ( !byte_4184708 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v18);
    v19 = TerminalPramsManager_TypeInfo;
    byte_4184708 = 1;
  }
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v20 = v19->static_fields;
  v20->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
  sub_B2C2F8(&v20->_SpecifiedChangeSceneInfo_k__BackingField, 0LL);
  if ( !byte_4184709 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v21);
    byte_4184709 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  v22->static_fields->_EventBoardGameSquareIndex_k__BackingField = 0;
  if ( !byte_418470A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v21);
    v22 = TerminalPramsManager_TypeInfo;
    byte_418470A = 1;
  }
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = TerminalPramsManager_TypeInfo;
  }
  v22->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = 0;
  if ( !byte_418470B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v21);
    v22 = TerminalPramsManager_TypeInfo;
    byte_418470B = 1;
  }
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = TerminalPramsManager_TypeInfo;
  }
  v22->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
  if ( !byte_41846FB )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v21);
    v22 = TerminalPramsManager_TypeInfo;
    byte_41846FB = 1;
  }
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = TerminalPramsManager_TypeInfo;
  }
  v22->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v22);
  TerminalPramsManager__ResetResumeScriptWithMap(v23);
  if ( !byte_4183CA5 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v24);
    byte_4183CA5 = 1;
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
  if ( !byte_418470C )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v24);
    v25 = TerminalPramsManager_TypeInfo;
    byte_418470C = 1;
  }
  if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v25);
    v25 = TerminalPramsManager_TypeInfo;
  }
  p_PlayedTerminalEffects_k__BackingField = &v25->static_fields->_PlayedTerminalEffects_k__BackingField;
  *p_PlayedTerminalEffects_k__BackingField = v26;
  sub_B2C2F8(p_PlayedTerminalEffects_k__BackingField, v26);
  if ( !byte_418470D )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    byte_418470D = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = 0;
  if ( !byte_418470E )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_418470E = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = 0;
  if ( !byte_418470F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_418470F = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  v29->static_fields->ConnectMarkEventId = 0;
  v29->static_fields->ConnectMarkAnimationId = 0;
  if ( !byte_4183FE4 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4183FE4 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField = 0;
  if ( !byte_4184710 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4184710 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_isFortificationCheck_k__BackingField = 0;
  if ( !byte_4184711 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4184711 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !byte_4184712 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4184712 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !byte_4184713 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4184713 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4183CA9 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4183CA9 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_4184714 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4184714 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_4184715 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4184715 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_4184716 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4184716 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_4184713 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4184713 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4184717 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4184717 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 0.0;
  if ( !byte_4184718 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4184718 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  if ( !byte_4184719 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4184719 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_418471A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_418471A = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_PlayerGenderType_k__BackingField = 0;
  if ( !byte_418471B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_418471B = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  v30 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_418471C )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_418471C = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  p_SceneMoveQuestClearedInfo_k__BackingField = &v29->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
  *p_SceneMoveQuestClearedInfo_k__BackingField = v30;
  sub_B2C2F8(p_SceneMoveQuestClearedInfo_k__BackingField, v30);
  if ( !byte_418471D )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v32);
    byte_418471D = 1;
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
  sub_B2C2F8(&v34->_CampaignDirectBonus_k__BackingField, 0LL);
}


void __fastcall TerminalPramsManager__InitTipsArchiveScrollValueList(const MethodInfo *method)
{
  __int64 v1; // x1
  unsigned __int64 i; // x19
  TerminalPramsManager_c *v3; // x0
  struct System_Single_array *TipsArchiveScrollValueList; // x8
  char *v5; // x8
  __int64 v6; // x0

  if ( (byte_41846A1 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41846A1 = 1;
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
      sub_B2C434(v3, v1);
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
      v6 = sub_B2C460(v3);
      sub_B2C400(v6, 0LL);
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

  if ( (byte_4184653 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184653 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C8F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4183C8F = 1;
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
  if ( !byte_41846F6 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41846F6 = 1;
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

  if ( (byte_4184655 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v1);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, v2);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    byte_4184655 = 1;
  }
  v14 = 0LL;
  entity = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C8F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4183C8F = 1;
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
  if ( !byte_4183C67 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4183C67 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C67 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
    byte_4183C67 = 1;
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
          (const MethodInfo_24E412C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !entity)
    || !Instance )
  {
LABEL_40:
    sub_B2C434(Instance, v10);
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          (WarEntity_o **)&v14,
          entity->fields.eventId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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

  if ( (byte_418467D & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11559/*"SAVEKEY_DataLostBattleAutoReset"*/, v2);
    byte_418467D = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418472B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418472B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11559/*"SAVEKEY_DataLostBattleAutoReset"*/,
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
  __int64 v8; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x19
  int v10; // w19
  BalanceConfig_c *v11; // x0
  WarEntity_o *v13; // [xsp+0h] [xbp-20h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418469F & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v6);
    byte_418469F = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestMaster___);
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
  Master_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !entity
    || (v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
        Master_WarQuestSelectionMaster = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0LL),
        !v9) )
  {
LABEL_23:
    sub_B2C434(Master_WarQuestSelectionMaster, v8);
  }
  Master_WarQuestSelectionMaster = (QuestMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                      v9,
                                                      &v13,
                                                      (int32_t)Master_WarQuestSelectionMaster,
                                                      (const MethodInfo_24E412C *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    return 0;
  if ( !v13 )
    goto LABEL_23;
  v10 = *(&v13->fields.id + 1);
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  return v10 == v11->static_fields->OrdealCallWarId;
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
  __int64 v11; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4184691 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4184691 = 1;
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
            (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        &entity,
                                        warId,
                                        (const MethodInfo_24E412C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( entity )
            return entity->fields.eventId == 0;
        }
      }
      sub_B2C434(Instance, v11);
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
  const MethodInfo *v8; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x19
  int32_t v10; // w19
  WarEntity_o *v13; // [xsp+0h] [xbp-20h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4184692 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_SpotMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    byte_4184692 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SpotMaster___),
        !entity)
    || (v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0LL),
        !v9) )
  {
LABEL_17:
    sub_B2C434(Instance, v8);
  }
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                v9,
                                &v13,
                                (int32_t)Instance,
                                (const MethodInfo_24E412C *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
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
  return TerminalPramsManager__IsMainStory(v10, v8);
}


bool __fastcall TerminalPramsManager__IsMustPlayMainStory(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4184690 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v3);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v4);
    byte_4184690 = 1;
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
         (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___) )
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

  if ( (byte_4184676 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11565/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v2);
    byte_4184676 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183CA7 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4183CA7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11565/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v3->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4184675 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11564/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v2);
    byte_4184675 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183CA6 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4183CA6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11564/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v3->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectNt2AfterAction_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4184677 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11566/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v2);
    byte_4184677 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184728 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184728 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11566/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
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

  if ( (byte_418469B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, *(_QWORD *)&day);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    byte_418469B = 1;
  }
  value = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184749 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    byte_4184749 = 1;
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
    sub_B2C434(v7, *(_QWORD *)&day);
  }
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         v7,
         eventId,
         &value,
         (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v9 = (char)value;
    if ( value )
      v9 = System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             day,
             (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
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
  __int64 v8; // x1
  clsQuestCheck_o *v9; // x19
  clsQuestCheck_o *v10; // x19
  __int64 v11; // x1
  TerminalPramsManager_c *v12; // x0
  ScrTerminalListTop_c *v13; // x8
  int32_t QuestId_k__BackingField; // w19
  TerminalPramsManager_c *v15; // x0

  if ( (byte_4184685 & 1) == 0 )
  {
    sub_B2C35C(&ScrTerminalListTop_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v2);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v3);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v4);
    byte_4184685 = 1;
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
  v7 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v9 = v7;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v9 )
    goto LABEL_49;
  if ( !clsQuestCheck__IsQuestClear(
          v9,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0LL) )
    return 0;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v7 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v10 = v7;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v10 )
LABEL_49:
    sub_B2C434(v7, v8);
  if ( !clsQuestCheck__IsWarClear(
          v10,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
          0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C7A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v11);
      byte_4183C7A = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v13 = ScrTerminalListTop_TypeInfo;
    QuestId_k__BackingField = v12->static_fields->_QuestId_k__BackingField;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v13 = ScrTerminalListTop_TypeInfo;
    }
    if ( QuestId_k__BackingField == v13->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183C7B )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v11);
        byte_4183C7B = 1;
      }
      v15 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
      }
      if ( v15->static_fields->_PhaseCnt_k__BackingField == 2 )
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
  System_String_o *v6; // x1
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
  if ( (byte_4184683 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v3);
    sub_B2C35C(&StringLiteral_68/*"\r\n"*/, v4);
    byte_4184683 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184727 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184727 = 1;
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
  if ( !byte_4184727 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    byte_4184727 = 1;
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
  v10 = System_String__Replace_44312768(
          PlayedTerminalEffects_k__BackingField,
          (System_String_o *)StringLiteral_68/*"\r\n"*/,
          (System_String_o *)StringLiteral_26/*"\n"*/,
          0LL);
  PlayedTerminalEffects_k__BackingField = (System_String_o *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !PlayedTerminalEffects_k__BackingField )
    goto LABEL_34;
  v6 = PlayedTerminalEffects_k__BackingField;
  if ( !LODWORD(PlayedTerminalEffects_k__BackingField[1].klass) )
  {
LABEL_33:
    v15 = sub_B2C460(PlayedTerminalEffects_k__BackingField);
    sub_B2C400(v15, 0LL);
  }
  LOWORD(PlayedTerminalEffects_k__BackingField[1].monitor) = 10;
  if ( !v10
    || (PlayedTerminalEffects_k__BackingField = (System_String_o *)System_String__Split(
                                                                     v10,
                                                                     (System_Char_array *)PlayedTerminalEffects_k__BackingField,
                                                                     0LL)) == 0LL )
  {
LABEL_34:
    sub_B2C434(PlayedTerminalEffects_k__BackingField, v6);
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
  if ( (byte_4184687 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v3);
    sub_B2C35C(&StringLiteral_68/*"\r\n"*/, v4);
    byte_4184687 = 1;
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
  v7 = System_String__Replace_44312768(
         mTerminalWarStartedIds,
         (System_String_o *)StringLiteral_68/*"\r\n"*/,
         (System_String_o *)StringLiteral_26/*"\n"*/,
         0LL);
  mTerminalWarStartedIds = (System_String_o *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !mTerminalWarStartedIds )
    goto LABEL_20;
  method = (const MethodInfo *)mTerminalWarStartedIds;
  if ( !LODWORD(mTerminalWarStartedIds[1].klass) )
  {
LABEL_19:
    v14 = sub_B2C460(mTerminalWarStartedIds);
    sub_B2C400(v14, 0LL);
  }
  LOWORD(mTerminalWarStartedIds[1].monitor) = 10;
  if ( !v7
    || (mTerminalWarStartedIds = (System_String_o *)System_String__Split(
                                                      v7,
                                                      (System_Char_array *)mTerminalWarStartedIds,
                                                      0LL)) == 0LL )
  {
LABEL_20:
    sub_B2C434(mTerminalWarStartedIds, method);
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

  if ( (byte_4184674 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_13619/*"TerminalLastPanelEventPoint"*/, v2);
    byte_4184674 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13619/*"TerminalLastPanelEventPoint"*/, v3->static_fields->panelEventPoint, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayBgmNameSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4184672 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11561/*"SAVEKEY_LastPlayBgmName"*/, v2);
    byte_4184672 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11561/*"SAVEKEY_LastPlayBgmName"*/, v3->static_fields->lastPlayBgmName, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4184673 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11562/*"SAVEKEY_LastPlayQuestConsumeType"*/, v2);
    byte_4184673 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11562/*"SAVEKEY_LastPlayQuestConsumeType"*/,
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
  Il2CppObject *String_35342888; // x19
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
  __int64 v28; // x1
  struct QuestRewardInfo_array *questPhaseRewardInfos; // x8
  TerminalPramsManager_c *v30; // x0
  struct QuestRewardInfo_array *v31; // x20
  struct QuestRewardInfo_array **p_mQuestPhaseRewardInfos; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  TerminalPramsManager_c *v35; // x8
  struct UserSuperBossEntity_array *mOldSuperBoss; // x9
  struct UserSuperBossEntity_array *v37; // x20
  TerminalPramsManager_c *v38; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  struct UserSuperBossEntity_array *oldPersonalBoss; // x8
  struct UserSuperBossEntity_array *v43; // x20
  TerminalPramsManager_c *v44; // x0
  struct TerminalPramsManager_StaticFields *v45; // x0
  __int64 v46; // x0
  __int64 v47; // x1
  struct EventPointWinReward_o *evPointWinReward; // x8
  struct EventPointWinReward_o *v49; // x20
  TerminalPramsManager_c *v50; // x0
  struct TerminalPramsManager_StaticFields *v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  int32_t evPointWinType; // w20
  TerminalPramsManager_c *v55; // x8
  struct EventRaceBoostInfo_o *evRaceBoost; // x9
  struct EventRaceBoostInfo_o *v57; // x20
  TerminalPramsManager_c *v58; // x0
  struct TerminalPramsManager_StaticFields *v59; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  struct CostumeReleaseAnnounce_array *questClearCostume; // x8
  struct CostumeReleaseAnnounce_array *v63; // x20
  TerminalPramsManager_c *v64; // x0
  struct CostumeReleaseAnnounce_array **p_questClearCostumeRelease_k__BackingField; // x0
  __int64 v66; // x0
  __int64 v67; // x1
  struct CostumeReleaseAnnounce_array *questClearCostumeGetInfo; // x8
  struct CostumeReleaseAnnounce_array *v69; // x20
  TerminalPramsManager_c *v70; // x0
  struct CostumeReleaseAnnounce_array **p_questClearCostumeGet_k__BackingField; // x0
  __int64 v72; // x0
  __int64 v73; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  struct EventTowerReward_o *v75; // x20
  TerminalPramsManager_c *v76; // x0
  struct EventTowerReward_o **p_eventTowerReward_k__BackingField; // x0
  __int64 v78; // x0
  __int64 v79; // x1
  struct QuestRewardInfo_array *resultEventTowerRewardInfo; // x8
  __int64 v81; // x9
  QuestRewardInfo_o *v82; // x9
  struct QuestRewardInfo_array *v83; // x20
  TerminalPramsManager_c *v84; // x0
  struct QuestRewardInfo_array **p_resultEventTowerRewardInfo_k__BackingField; // x0
  __int64 v86; // x0
  __int64 v87; // x1
  struct QuestRewardInfo_array *resultBoostItemRewardInfo; // x8
  struct QuestRewardInfo_array *v89; // x20
  TerminalPramsManager_c *v90; // x0
  struct QuestRewardInfo_array **p_resultBoostItemRewardInfo_k__BackingField; // x0
  __int64 v92; // x0
  __int64 v93; // x1
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo; // x8
  struct QuestRewardInfo_array *v95; // x20
  TerminalPramsManager_c *v96; // x0
  struct QuestRewardInfo_array **p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  __int64 v98; // x0
  __int64 v99; // x1
  bool isDispOnly; // w20
  TerminalPramsManager_c *v101; // x8
  struct WarClearReward_array *warClearReward; // x9
  struct WarClearReward_array *v103; // x20
  TerminalPramsManager_c *v104; // x0
  struct WarClearReward_array **p_warClearReward_k__BackingField; // x0
  __int64 v106; // x0
  __int64 v107; // x1
  int32_t EventActivityPointEffectState; // w20
  TerminalPramsManager_c *v109; // x8
  bool isWarBoardClear; // w21
  struct TerminalPramsManager_StaticFields **v111; // x9
  struct BattleDropItem_array *questResultAfterEventRewardInfos; // x10
  struct BattleDropItem_array *v113; // x20
  struct BattleDropItem_array **p_mQuestResultAfterEventRewardInfos; // x0
  __int64 v115; // x0
  __int64 v116; // x1
  struct BattleDropItem_array *resultEventPanelRewardInfos; // x8
  TerminalPramsManager_c *v118; // x0
  struct BattleDropItem_array *v119; // x20
  struct BattleDropItem_array **p_mResultEventPanelRewardInfos; // x0
  __int64 v121; // x1
  TerminalPramsManager_c *v122; // x0
  struct LimitImageAnnounce_array *limitImageAnnounces; // x20
  struct LimitImageAnnounce_array **p_limitImageAnnounces_k__BackingField; // x0
  __int64 v125; // x1
  bool isOrdealCallWarClear; // w20
  TerminalPramsManager_c *v127; // x8
  int32_t eventMuralId; // w21
  TerminalPramsManager_c *v129; // x8
  TerminalPramsManager_c *v130; // x0
  __int64 v131; // x0

  if ( (byte_4184695 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_B2C35C(&Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___, v2);
    sub_B2C35C(&JsonManager_TypeInfo, v3);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v4);
    byte_4184695 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C98 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4183C98 = 1;
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
      String_35342888 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35342888(
                                          v7->static_fields->SAVEKEY_CLEAR_REWARD_DISP,
                                          0LL);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v9 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
             String_35342888,
             (const MethodInfo_1AACF6C *)Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
      v10 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v10 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestClearHeroineInfo = &v10->static_fields->mQuestClearHeroineInfo;
      *p_mQuestClearHeroineInfo = 0LL;
      sub_B2C2F8(p_mQuestClearHeroineInfo, 0LL);
      if ( !v9 )
        sub_B2C434(v12, v13);
      qClearHeroineInfo = v9->fields.qClearHeroineInfo;
      if ( !qClearHeroineInfo )
        sub_B2C434(v12, v13);
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
        sub_B2C2F8(v18, Load);
      }
      v19 = (__int64)TerminalPramsManager_TypeInfo;
      questClear = v9->fields.questClear;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183C95 )
      {
        v19 = sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
        byte_4183C95 = 1;
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
      if ( !byte_4183C96 )
      {
        v19 = sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
        v21 = TerminalPramsManager_TypeInfo;
        byte_4183C96 = 1;
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
        sub_B2C434(v19, v13);
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
      sub_B2C2F8(p_mQuestRewardInfos, v25);
      questPhaseRewardInfos = v9->fields.questPhaseRewardInfos;
      if ( !questPhaseRewardInfos )
        sub_B2C434(v27, v28);
      v30 = TerminalPramsManager_TypeInfo;
      if ( *(_QWORD *)&questPhaseRewardInfos->max_length )
        v31 = v9->fields.questPhaseRewardInfos;
      else
        v31 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v30 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestPhaseRewardInfos = &v30->static_fields->mQuestPhaseRewardInfos;
      *p_mQuestPhaseRewardInfos = v31;
      sub_B2C2F8(p_mQuestPhaseRewardInfos, v31);
      v35 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = v9->fields.clearedLastBattleRaidId;
      v35->static_fields->clearBattleRaidId = v9->fields.clearedBattleRaidId;
      v35->static_fields->joinGroupId = v9->fields.joinGroup;
      mOldSuperBoss = v9->fields.mOldSuperBoss;
      if ( !mOldSuperBoss )
        sub_B2C434(v33, v34);
      if ( *(_QWORD *)&mOldSuperBoss->max_length )
        v37 = v9->fields.mOldSuperBoss;
      else
        v37 = 0LL;
      if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v35);
      if ( !byte_418473F )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v34);
        byte_418473F = 1;
      }
      v38 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v38 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v38->static_fields;
      static_fields->_oldSuperBoss_k__BackingField = v37;
      sub_B2C2F8(&static_fields->_oldSuperBoss_k__BackingField, v37);
      oldPersonalBoss = v9->fields.oldPersonalBoss;
      if ( !oldPersonalBoss )
        sub_B2C434(v40, v41);
      if ( *(_QWORD *)&oldPersonalBoss->max_length )
        v43 = v9->fields.oldPersonalBoss;
      else
        v43 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4184740 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v41);
        byte_4184740 = 1;
      }
      v44 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v44 = TerminalPramsManager_TypeInfo;
      }
      v45 = v44->static_fields;
      v45->_oldPersonalBoss_k__BackingField = v43;
      sub_B2C2F8(&v45->_oldPersonalBoss_k__BackingField, v43);
      evPointWinReward = v9->fields.evPointWinReward;
      if ( !evPointWinReward )
        sub_B2C434(v46, v47);
      if ( evPointWinReward->fields.id <= 0 )
        v49 = 0LL;
      else
        v49 = v9->fields.evPointWinReward;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4184737 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v47);
        byte_4184737 = 1;
      }
      v50 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v50 = TerminalPramsManager_TypeInfo;
      }
      v51 = v50->static_fields;
      v51->_eventPointWinReward_k__BackingField = v49;
      sub_B2C2F8(&v51->_eventPointWinReward_k__BackingField, v49);
      evPointWinType = v9->fields.evPointWinType;
      if ( !byte_4184738 )
      {
        v52 = sub_B2C35C(&TerminalPramsManager_TypeInfo, v53);
        byte_4184738 = 1;
      }
      v55 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v55 = TerminalPramsManager_TypeInfo;
      }
      v55->static_fields->_eventPointWinType_k__BackingField = evPointWinType;
      evRaceBoost = v9->fields.evRaceBoost;
      if ( !evRaceBoost )
        sub_B2C434(v52, v53);
      if ( evRaceBoost->fields.termId <= 0 )
        v57 = 0LL;
      else
        v57 = v9->fields.evRaceBoost;
      if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v55);
      if ( !byte_418473B )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v53);
        byte_418473B = 1;
      }
      v58 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v58 = TerminalPramsManager_TypeInfo;
      }
      v59 = v58->static_fields;
      v59->_eventRaceBoost_k__BackingField = v57;
      sub_B2C2F8(&v59->_eventRaceBoost_k__BackingField, v57);
      questClearCostume = v9->fields.questClearCostume;
      if ( !questClearCostume )
        sub_B2C434(v60, v61);
      if ( *(_QWORD *)&questClearCostume->max_length )
        v63 = v9->fields.questClearCostume;
      else
        v63 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4184736 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v61);
        byte_4184736 = 1;
      }
      v64 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v64 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeRelease_k__BackingField = &v64->static_fields->_questClearCostumeRelease_k__BackingField;
      *p_questClearCostumeRelease_k__BackingField = v63;
      sub_B2C2F8(p_questClearCostumeRelease_k__BackingField, v63);
      questClearCostumeGetInfo = v9->fields.questClearCostumeGetInfo;
      if ( !questClearCostumeGetInfo )
        sub_B2C434(v66, v67);
      if ( *(_QWORD *)&questClearCostumeGetInfo->max_length )
        v69 = v9->fields.questClearCostumeGetInfo;
      else
        v69 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183C93 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v67);
        byte_4183C93 = 1;
      }
      v70 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v70 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeGet_k__BackingField = &v70->static_fields->_questClearCostumeGet_k__BackingField;
      *p_questClearCostumeGet_k__BackingField = v69;
      sub_B2C2F8(p_questClearCostumeGet_k__BackingField, v69);
      eventTowerReward = v9->fields.eventTowerReward;
      if ( !eventTowerReward )
        sub_B2C434(v72, v73);
      if ( eventTowerReward->fields.eventId <= 0 )
        v75 = 0LL;
      else
        v75 = v9->fields.eventTowerReward;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_418473D )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v73);
        byte_418473D = 1;
      }
      v76 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v76 = TerminalPramsManager_TypeInfo;
      }
      p_eventTowerReward_k__BackingField = &v76->static_fields->_eventTowerReward_k__BackingField;
      *p_eventTowerReward_k__BackingField = v75;
      sub_B2C2F8(p_eventTowerReward_k__BackingField, v75);
      resultEventTowerRewardInfo = v9->fields.resultEventTowerRewardInfo;
      if ( !resultEventTowerRewardInfo )
        sub_B2C434(v78, v79);
      v81 = *(_QWORD *)&resultEventTowerRewardInfo->max_length;
      if ( v81 )
      {
        if ( !(_DWORD)v81 )
        {
          v131 = sub_B2C460(v78);
          sub_B2C400(v131, 0LL);
        }
        v82 = resultEventTowerRewardInfo->m_Items[0];
        if ( !v82 )
          sub_B2C434(v78, v79);
        if ( v82->fields.userSvtId <= 0 )
          v83 = 0LL;
        else
          v83 = v9->fields.resultEventTowerRewardInfo;
      }
      else
      {
        v83 = 0LL;
      }
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_418473E )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v79);
        byte_418473E = 1;
      }
      v84 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v84 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventTowerRewardInfo_k__BackingField = &v84->static_fields->_resultEventTowerRewardInfo_k__BackingField;
      *p_resultEventTowerRewardInfo_k__BackingField = v83;
      sub_B2C2F8(p_resultEventTowerRewardInfo_k__BackingField, v83);
      resultBoostItemRewardInfo = v9->fields.resultBoostItemRewardInfo;
      if ( !resultBoostItemRewardInfo )
        sub_B2C434(v86, v87);
      if ( *(_QWORD *)&resultBoostItemRewardInfo->max_length )
        v89 = v9->fields.resultBoostItemRewardInfo;
      else
        v89 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183C89 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v87);
        byte_4183C89 = 1;
      }
      v90 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v90 = TerminalPramsManager_TypeInfo;
      }
      p_resultBoostItemRewardInfo_k__BackingField = &v90->static_fields->_resultBoostItemRewardInfo_k__BackingField;
      *p_resultBoostItemRewardInfo_k__BackingField = v89;
      sub_B2C2F8(p_resultBoostItemRewardInfo_k__BackingField, v89);
      resultEventBoardGameTokenRewardInfo = v9->fields.resultEventBoardGameTokenRewardInfo;
      if ( !resultEventBoardGameTokenRewardInfo )
        sub_B2C434(v92, v93);
      if ( *(_QWORD *)&resultEventBoardGameTokenRewardInfo->max_length )
        v95 = v9->fields.resultEventBoardGameTokenRewardInfo;
      else
        v95 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183C8A )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v93);
        byte_4183C8A = 1;
      }
      v96 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v96 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventBoardGameTokenRewardInfo_k__BackingField = &v96->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
      *p_resultEventBoardGameTokenRewardInfo_k__BackingField = v95;
      sub_B2C2F8(p_resultEventBoardGameTokenRewardInfo_k__BackingField, v95);
      isDispOnly = v9->fields.isDispOnly;
      if ( !byte_4184732 )
      {
        v98 = sub_B2C35C(&TerminalPramsManager_TypeInfo, v99);
        byte_4184732 = 1;
      }
      v101 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v101 = TerminalPramsManager_TypeInfo;
      }
      v101->static_fields->_IsDispOnly_k__BackingField = isDispOnly;
      warClearReward = v9->fields.warClearReward;
      if ( !warClearReward )
        sub_B2C434(v98, v99);
      if ( *(_QWORD *)&warClearReward->max_length )
        v103 = v9->fields.warClearReward;
      else
        v103 = 0LL;
      if ( (BYTE3(v101->vtable._0_Equals.methodPtr) & 4) != 0 && !v101->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v101);
      if ( !byte_4183C9A )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v99);
        byte_4183C9A = 1;
      }
      v104 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v104 = TerminalPramsManager_TypeInfo;
      }
      p_warClearReward_k__BackingField = &v104->static_fields->_warClearReward_k__BackingField;
      *p_warClearReward_k__BackingField = v103;
      sub_B2C2F8(p_warClearReward_k__BackingField, v103);
      EventActivityPointEffectState = v9->fields.EventActivityPointEffectState;
      if ( !byte_4184734 )
      {
        v106 = sub_B2C35C(&TerminalPramsManager_TypeInfo, v107);
        byte_4184734 = 1;
      }
      v109 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v109 = TerminalPramsManager_TypeInfo;
      }
      v109->static_fields->_EventActivityPointEffectState_k__BackingField = EventActivityPointEffectState;
      isWarBoardClear = v9->fields.isWarBoardClear;
      if ( !byte_4183C97 )
      {
        v106 = sub_B2C35C(&TerminalPramsManager_TypeInfo, v107);
        v109 = TerminalPramsManager_TypeInfo;
        byte_4183C97 = 1;
      }
      if ( (BYTE3(v109->vtable._0_Equals.methodPtr) & 4) != 0 && !v109->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v109);
        v109 = TerminalPramsManager_TypeInfo;
      }
      v111 = &v109->static_fields;
      v109->static_fields->_IsWarBoardClear_k__BackingField = isWarBoardClear;
      questResultAfterEventRewardInfos = v9->fields.questResultAfterEventRewardInfos;
      if ( !questResultAfterEventRewardInfos )
        sub_B2C434(v106, v107);
      if ( *(_QWORD *)&questResultAfterEventRewardInfos->max_length )
        v113 = v9->fields.questResultAfterEventRewardInfos;
      else
        v113 = 0LL;
      if ( (BYTE3(v109->vtable._0_Equals.methodPtr) & 4) != 0 && !v109->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v109);
        v111 = &TerminalPramsManager_TypeInfo->static_fields;
      }
      p_mQuestResultAfterEventRewardInfos = &(*v111)->mQuestResultAfterEventRewardInfos;
      *p_mQuestResultAfterEventRewardInfos = v113;
      sub_B2C2F8(p_mQuestResultAfterEventRewardInfos, v113);
      resultEventPanelRewardInfos = v9->fields.resultEventPanelRewardInfos;
      if ( !resultEventPanelRewardInfos )
        sub_B2C434(v115, v116);
      v118 = TerminalPramsManager_TypeInfo;
      if ( *(_QWORD *)&resultEventPanelRewardInfos->max_length )
        v119 = v9->fields.resultEventPanelRewardInfos;
      else
        v119 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v118 = TerminalPramsManager_TypeInfo;
      }
      p_mResultEventPanelRewardInfos = &v118->static_fields->mResultEventPanelRewardInfos;
      *p_mResultEventPanelRewardInfos = v119;
      sub_B2C2F8(p_mResultEventPanelRewardInfos, v119);
      v122 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = v9->fields.panelEventPoint;
      limitImageAnnounces = v9->fields.limitImageAnnounces;
      if ( !byte_4183C8E )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v121);
        v122 = TerminalPramsManager_TypeInfo;
        byte_4183C8E = 1;
      }
      if ( (BYTE3(v122->vtable._0_Equals.methodPtr) & 4) != 0 && !v122->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v122);
        v122 = TerminalPramsManager_TypeInfo;
      }
      p_limitImageAnnounces_k__BackingField = &v122->static_fields->_limitImageAnnounces_k__BackingField;
      *p_limitImageAnnounces_k__BackingField = limitImageAnnounces;
      sub_B2C2F8(p_limitImageAnnounces_k__BackingField, limitImageAnnounces);
      isOrdealCallWarClear = v9->fields.isOrdealCallWarClear;
      if ( !byte_4183CB1 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v125);
        byte_4183CB1 = 1;
      }
      v127 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v127 = TerminalPramsManager_TypeInfo;
      }
      v127->static_fields->_IsOrdealCallWarClear_k__BackingField = isOrdealCallWarClear;
      eventMuralId = v9->fields.eventMuralId;
      if ( !byte_4183C86 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v125);
        v127 = TerminalPramsManager_TypeInfo;
        byte_4183C86 = 1;
      }
      if ( (BYTE3(v127->vtable._0_Equals.methodPtr) & 4) != 0 && !v127->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v127);
        v127 = TerminalPramsManager_TypeInfo;
      }
      v127->static_fields->_EventMuralId_k__BackingField = eventMuralId;
      if ( v9->fields.phaseClear )
      {
        if ( (BYTE3(v127->vtable._0_Equals.methodPtr) & 4) != 0 && !v127->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v127);
        if ( !byte_4183C70 )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v125);
          byte_4183C70 = 1;
        }
        v127 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v127 = TerminalPramsManager_TypeInfo;
        }
        v127->static_fields->_IsAutoResume_k__BackingField = 1;
      }
      if ( (BYTE3(v127->vtable._0_Equals.methodPtr) & 4) != 0 && !v127->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v127);
      if ( !byte_4183C99 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v125);
        byte_4183C99 = 1;
      }
      v129 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v129 = TerminalPramsManager_TypeInfo;
      }
      if ( v129->static_fields->_warClearReward_k__BackingField )
        goto LABEL_304;
      if ( (BYTE3(v129->vtable._0_Equals.methodPtr) & 4) != 0 && !v129->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v129);
      if ( !byte_4183C94 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v125);
        byte_4183C94 = 1;
      }
      v129 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v129 = TerminalPramsManager_TypeInfo;
      }
      if ( v129->static_fields->_IsPlayScriptWithMap_k__BackingField )
      {
LABEL_304:
        if ( (BYTE3(v129->vtable._0_Equals.methodPtr) & 4) != 0 && !v129->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v129);
        if ( !byte_4184747 )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v125);
          byte_4184747 = 1;
        }
        v130 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v130 = TerminalPramsManager_TypeInfo;
        }
        v130->static_fields->_isQuestRewardSetted_k__BackingField = 1;
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
  EventRaidDefeatedEffectInfo_o *v7; // x19
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4184698 & 1) == 0 )
  {
    sub_B2C35C(&EventRaidDefeatedEffectInfo_TypeInfo, v1);
    sub_B2C35C(&string_TypeInfo, v2);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_11560/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v4);
    byte_4184698 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184749 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184749 = 1;
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
               (System_String_o *)StringLiteral_11560/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v7 = (EventRaidDefeatedEffectInfo_o *)sub_B2C42C(EventRaidDefeatedEffectInfo_TypeInfo);
    EventRaidDefeatedEffectInfo___ctor(v7, String, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184748 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
      byte_4184748 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = v7;
    sub_B2C2F8(&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField, v7);
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
  System_Collections_Generic_Dictionary_int__int__o *v10; // x19
  System_String_array *v11; // x0
  System_String_array *v12; // x1
  int max_length; // w8
  System_String_array *v14; // x20
  unsigned int v15; // w24
  System_String_o *v16; // x21
  System_String_array *v17; // x21
  TerminalPramsManager_c *v18; // x0
  struct System_Collections_Generic_Dictionary_int__int__o **p_QuestRandomGroupList_k__BackingField; // x0
  __int64 v20; // x0
  int32_t result[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418469D & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4);
    sub_B2C35C(&string_TypeInfo, v5);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_11569/*"SAVEKEY_QuestRandomGroupList"*/, v7);
    byte_418469D = 1;
  }
  *(_QWORD *)result = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418474B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418474B = 1;
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
               (System_String_o *)StringLiteral_11569/*"SAVEKEY_QuestRandomGroupList"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v10,
      (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *(_QWORD *)result = 0LL;
    v11 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !v11 )
      goto LABEL_42;
    v12 = v11;
    if ( !v11->max_length )
      goto LABEL_43;
    LOWORD(v11->m_Items[0]) = 44;
    if ( !String || (v11 = System_String__Split(String, (System_Char_array *)v11, 0LL)) == 0LL )
LABEL_42:
      sub_B2C434(v11, v12);
    max_length = v11->max_length;
    v14 = v11;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( v15 < max_length )
      {
        v16 = v14->m_Items[v15];
        v11 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
        if ( !v11 )
          goto LABEL_42;
        v12 = v11;
        if ( !v11->max_length )
          break;
        LOWORD(v11->m_Items[0]) = 58;
        if ( !v16 )
          goto LABEL_42;
        v11 = System_String__Split(v16, (System_Char_array *)v11, 0LL);
        if ( !v11 )
          goto LABEL_42;
        v17 = v11;
        if ( (int)v11->max_length >= 2 )
        {
          v11 = (System_String_array *)System_Int32__TryParse(v11->m_Items[0], &result[1], 0LL);
          if ( result[1] >= 1 && ((unsigned __int8)v11 & 1) != 0 )
          {
            if ( v17->max_length <= 1 )
              break;
            v11 = (System_String_array *)System_Int32__TryParse(v17->m_Items[1], result, 0LL);
            if ( result[0] >= 1 && ((unsigned __int8)v11 & 1) != 0 )
            {
              if ( !v10 )
                goto LABEL_42;
              System_Collections_Generic_Dictionary_int__int___Add(
                v10,
                result[1],
                result[0],
                (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
        }
        max_length = v14->max_length;
        if ( (int)++v15 >= max_length )
          goto LABEL_32;
      }
LABEL_43:
      v20 = sub_B2C460(v11);
      sub_B2C400(v20, 0LL);
    }
LABEL_32:
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_418474A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
      byte_418474A = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    p_QuestRandomGroupList_k__BackingField = &v18->static_fields->_QuestRandomGroupList_k__BackingField;
    *p_QuestRandomGroupList_k__BackingField = v10;
    sub_B2C2F8(p_QuestRandomGroupList_k__BackingField, v10);
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
  int32_t Int_35342280; // w19
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
  System_String_o *String_35342888; // x20
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
  System_String_array *v204; // x1
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

  if ( (byte_4184662 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, v1);
    sub_B2C35C(&System_Convert_TypeInfo, v2);
    sub_B2C35C(&Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____, v3);
    sub_B2C35C(&Method_JsonManager_Deserialize_EventConquestInfo_____, v4);
    sub_B2C35C(&Method_JsonManager_Deserialize_EventHarvestGrowthInfo___, v5);
    sub_B2C35C(&Method_JsonManager_Deserialize_EventSaveData___, v6);
    sub_B2C35C(&JsonManager_TypeInfo, v7);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_11561/*"SAVEKEY_LastPlayBgmName"*/, v9);
    sub_B2C35C(&StringLiteral_13616/*"TerminalEndTime"*/, v10);
    sub_B2C35C(&StringLiteral_11567/*"SAVEKEY_PlayedTerminalEffects"*/, v11);
    sub_B2C35C(&StringLiteral_13612/*"TerminalBeforeEventActivityPoint"*/, v12);
    sub_B2C35C(&StringLiteral_11555/*"SAVEKEY_CampaignDirectBonus"*/, v13);
    sub_B2C35C(&StringLiteral_11562/*"SAVEKEY_LastPlayQuestConsumeType"*/, v14);
    sub_B2C35C(&StringLiteral_11573/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, v15);
    sub_B2C35C(&StringLiteral_13617/*"TerminalEventDailyPointEventId"*/, v16);
    sub_B2C35C(&StringLiteral_13614/*"TerminalBeforeEventSubmarinePointData"*/, v17);
    sub_B2C35C(&StringLiteral_13623/*"TerminalPhaseCnt"*/, v18);
    sub_B2C35C(&StringLiteral_11571/*"SAVEKEY_TerminalConquestInfos"*/, v19);
    sub_B2C35C(&StringLiteral_13631/*"TerminalTimeStatusEventId"*/, v20);
    sub_B2C35C(&StringLiteral_13615/*"TerminalDispState"*/, v21);
    sub_B2C35C(&StringLiteral_11564/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v22);
    sub_B2C35C(&StringLiteral_13618/*"TerminalIsDoneShortcut"*/, v23);
    sub_B2C35C(&StringLiteral_11563/*"SAVEKEY_MapModelClearQuestInfo"*/, v24);
    sub_B2C35C(&StringLiteral_11568/*"SAVEKEY_PlayerGenderType"*/, v25);
    sub_B2C35C(&StringLiteral_11553/*"SAVEKEY_BlankEarthRank"*/, v26);
    sub_B2C35C(&StringLiteral_13619/*"TerminalLastPanelEventPoint"*/, v27);
    sub_B2C35C(&StringLiteral_11572/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v28);
    sub_B2C35C(&StringLiteral_11556/*"SAVEKEY_ClearEventQuestIds"*/, v29);
    sub_B2C35C(&StringLiteral_11565/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v30);
    sub_B2C35C(&StringLiteral_5198/*"Debug_IsQuestReleaseAll"*/, v31);
    sub_B2C35C(&StringLiteral_5195/*"Debug_IsDummyErrorSelect"*/, v32);
    sub_B2C35C(&StringLiteral_13626/*"TerminalQuestId"*/, v33);
    sub_B2C35C(&StringLiteral_11570/*"SAVEKEY_TerminalConquestInfoDisp"*/, v34);
    sub_B2C35C(&StringLiteral_11575/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v35);
    sub_B2C35C(&StringLiteral_13630/*"TerminalTimeStatusEventDailyPoint"*/, v36);
    sub_B2C35C(&StringLiteral_13635/*"TerminalWarId"*/, v37);
    sub_B2C35C(&StringLiteral_13628/*"TerminalSpotId"*/, v38);
    sub_B2C35C(&StringLiteral_13632/*"TerminalTimeStatusLoopCount"*/, v39);
    sub_B2C35C(&StringLiteral_13613/*"TerminalBeforeEventActivityPointGauge"*/, v40);
    sub_B2C35C(&StringLiteral_11554/*"SAVEKEY_BlankEarthSpotId"*/, v41);
    sub_B2C35C(&StringLiteral_11559/*"SAVEKEY_DataLostBattleAutoReset"*/, v42);
    sub_B2C35C(&StringLiteral_13636/*"TerminalWarStartedIds"*/, v43);
    sub_B2C35C(&StringLiteral_11558/*"SAVEKEY_ConnectMarkEventId"*/, v44);
    sub_B2C35C(&StringLiteral_13620/*"TerminalLastPlayedFreeQuestSpotId"*/, v45);
    sub_B2C35C(&StringLiteral_11557/*"SAVEKEY_ConnectMarkAnimationId"*/, v46);
    sub_B2C35C(&StringLiteral_11566/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v47);
    sub_B2C35C(&StringLiteral_1/*""*/, v48);
    sub_B2C35C(&StringLiteral_13621/*"TerminalLastPlayedQuestId"*/, v49);
    sub_B2C35C(&StringLiteral_5194/*"Debug_IsBuildInfoDisp"*/, v50);
    sub_B2C35C(&StringLiteral_11574/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v51);
    byte_4184662 = 1;
  }
  v52 = (System_String_o *)StringLiteral_13615/*"TerminalDispState"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13615/*"TerminalDispState"*/, 0LL) )
  {
    Int_35342280 = UnityEngine_PlayerPrefs__GetInt_35342280(v52, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C6F )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v53);
      byte_4183C6F = 1;
    }
    v55 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v55 = TerminalPramsManager_TypeInfo;
    }
    v55->static_fields->_DispState_k__BackingField = Int_35342280;
  }
  v56 = (System_String_o *)StringLiteral_13635/*"TerminalWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13635/*"TerminalWarId"*/, 0LL) )
  {
    v58 = UnityEngine_PlayerPrefs__GetInt_35342280(v56, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C69 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v57);
      byte_4183C69 = 1;
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
  v60 = (System_String_o *)StringLiteral_13628/*"TerminalSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13628/*"TerminalSpotId"*/, 0LL) )
  {
    v62 = UnityEngine_PlayerPrefs__GetInt_35342280(v60, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C9C )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v61);
      byte_4183C9C = 1;
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
  v64 = (System_String_o *)StringLiteral_13626/*"TerminalQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13626/*"TerminalQuestId"*/, 0LL) )
  {
    v66 = UnityEngine_PlayerPrefs__GetInt_35342280(v64, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C6B )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v65);
      byte_4183C6B = 1;
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
  v68 = (System_String_o *)StringLiteral_13621/*"TerminalLastPlayedQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13621/*"TerminalLastPlayedQuestId"*/, 0LL) )
  {
    v70 = UnityEngine_PlayerPrefs__GetInt_35342280(v68, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183CBD )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v69);
      byte_4183CBD = 1;
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
  v72 = (System_String_o *)StringLiteral_13623/*"TerminalPhaseCnt"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13623/*"TerminalPhaseCnt"*/, 0LL) )
  {
    v74 = UnityEngine_PlayerPrefs__GetInt_35342280(v72, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C6C )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v73);
      byte_4183C6C = 1;
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
  v76 = (System_String_o *)StringLiteral_13616/*"TerminalEndTime"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13616/*"TerminalEndTime"*/, 0LL) )
  {
    String_35342888 = UnityEngine_PlayerPrefs__GetString_35342888(v76, 0LL);
    v79 = 0LL;
    if ( System_String__op_Inequality(String_35342888, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v79 = System_Convert__ToInt64_42135412(String_35342888, 0LL);
    }
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183CB6 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v78);
      byte_4183CB6 = 1;
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
  v81 = (System_String_o *)StringLiteral_13618/*"TerminalIsDoneShortcut"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13618/*"TerminalIsDoneShortcut"*/, 0LL) )
  {
    v83 = UnityEngine_PlayerPrefs__GetInt_35342280(v81, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C72 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v82);
      byte_4183C72 = 1;
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
  v85 = (System_String_o *)StringLiteral_13636/*"TerminalWarStartedIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13636/*"TerminalWarStartedIds"*/, 0LL) )
  {
    v86 = UnityEngine_PlayerPrefs__GetString_35342888(v85, 0LL);
    v87 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v87 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v87->static_fields;
    static_fields->mTerminalWarStartedIds = v86;
    sub_B2C2F8(&static_fields->mTerminalWarStartedIds, v86);
  }
  v89 = (System_String_o *)StringLiteral_5198/*"Debug_IsQuestReleaseAll"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5198/*"Debug_IsQuestReleaseAll"*/, 0LL) )
  {
    v91 = UnityEngine_PlayerPrefs__GetInt_35342280(v89, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_41846FF )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v90);
      byte_41846FF = 1;
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
  v93 = (System_String_o *)StringLiteral_5195/*"Debug_IsDummyErrorSelect"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5195/*"Debug_IsDummyErrorSelect"*/, 0LL) )
  {
    v95 = UnityEngine_PlayerPrefs__GetInt_35342280(v93, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184700 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v94);
      byte_4184700 = 1;
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
  v97 = (System_String_o *)StringLiteral_5194/*"Debug_IsBuildInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5194/*"Debug_IsBuildInfoDisp"*/, 0LL) )
  {
    v99 = UnityEngine_PlayerPrefs__GetInt_35342280(v97, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184701 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v98);
      byte_4184701 = 1;
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
  v101 = (System_String_o *)StringLiteral_13631/*"TerminalTimeStatusEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13631/*"TerminalTimeStatusEventId"*/, 0LL) )
  {
    v103 = UnityEngine_PlayerPrefs__GetInt_35342280(v101, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183CB8 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v102);
      byte_4183CB8 = 1;
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
  v105 = (System_String_o *)StringLiteral_13632/*"TerminalTimeStatusLoopCount"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13632/*"TerminalTimeStatusLoopCount"*/, 0LL) )
  {
    v107 = UnityEngine_PlayerPrefs__GetInt_35342280(v105, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183CB9 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v106);
      byte_4183CB9 = 1;
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
  v109 = (System_String_o *)StringLiteral_13617/*"TerminalEventDailyPointEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13617/*"TerminalEventDailyPointEventId"*/, 0LL) )
  {
    v111 = UnityEngine_PlayerPrefs__GetInt_35342280(v109, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184703 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v110);
      byte_4184703 = 1;
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
  v113 = (System_String_o *)StringLiteral_13630/*"TerminalTimeStatusEventDailyPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13630/*"TerminalTimeStatusEventDailyPoint"*/, 0LL) )
  {
    v114 = UnityEngine_PlayerPrefs__GetString_35342888(v113, 0LL);
    v116 = 0LL;
    if ( !System_String__op_Equality(v114, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v116 = System_Convert__ToInt64_42135412(v114, 0LL);
    }
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184704 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v115);
      byte_4184704 = 1;
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
  v118 = (System_String_o *)StringLiteral_13612/*"TerminalBeforeEventActivityPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13612/*"TerminalBeforeEventActivityPoint"*/, 0LL) )
  {
    v120 = UnityEngine_PlayerPrefs__GetInt_35342280(v118, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184705 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v119);
      byte_4184705 = 1;
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
  v122 = (System_String_o *)StringLiteral_13613/*"TerminalBeforeEventActivityPointGauge"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13613/*"TerminalBeforeEventActivityPointGauge"*/, 0LL) )
  {
    v124 = UnityEngine_PlayerPrefs__GetInt_35342280(v122, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184706 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v123);
      byte_4184706 = 1;
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
  v126 = (System_String_o *)StringLiteral_13614/*"TerminalBeforeEventSubmarinePointData"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13614/*"TerminalBeforeEventSubmarinePointData"*/, 0LL) )
  {
    v127 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35342888(v126, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v129 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
             v127,
             (const MethodInfo_1AACF6C *)Method_JsonManager_Deserialize_EventSaveData___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184707 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v128);
      byte_4184707 = 1;
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
    sub_B2C2F8(p_BeforeEventSubmarineSaveData_k__BackingField, v129);
  }
  v132 = (System_String_o *)StringLiteral_11573/*"SAVEKEY_TerminalLastSelectQuestIndex"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11573/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, 0LL) )
  {
    v135 = UnityEngine_PlayerPrefs__GetInt_35342280(v132, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_41846FD )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v133);
      byte_41846FD = 1;
    }
    v136 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v136 = TerminalPramsManager_TypeInfo;
    }
    v136->static_fields->_LastSelectQuestIndex_k__BackingField = v135;
    if ( !byte_4183C67 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v133);
      v136 = TerminalPramsManager_TypeInfo;
      byte_4183C67 = 1;
    }
    if ( (BYTE3(v136->vtable._0_Equals.methodPtr) & 4) != 0 && !v136->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v136);
      v136 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v136->static_fields->_WarId_k__BackingField;
    if ( !byte_418471E )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v133);
      v136 = TerminalPramsManager_TypeInfo;
      byte_418471E = 1;
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
  v138 = (System_String_o *)StringLiteral_11571/*"SAVEKEY_TerminalConquestInfos"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11571/*"SAVEKEY_TerminalConquestInfos"*/, 0LL) )
  {
    v139 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35342888(v138, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v140 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
             v139,
             (const MethodInfo_1AACF6C *)Method_JsonManager_Deserialize_EventConquestInfo_____);
    v141 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v141 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = &v141->static_fields->eventConquestInfos;
    *p_eventConquestInfos = v140;
    sub_B2C2F8(p_eventConquestInfos, v140);
  }
  v143 = (System_String_o *)StringLiteral_11570/*"SAVEKEY_TerminalConquestInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11570/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL) )
  {
    v144 = UnityEngine_PlayerPrefs__GetInt_35342280(v143, 0LL);
    v145 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v145 = TerminalPramsManager_TypeInfo;
    }
    v145->static_fields->eventConquestInfoDisp = v144 != 0;
  }
  v146 = (System_String_o *)StringLiteral_11572/*"SAVEKEY_TerminalHarvestGrowthInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11572/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL) )
  {
    v147 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35342888(v146, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v148 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
             v147,
             (const MethodInfo_1AACF6C *)Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    v149 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v149 = TerminalPramsManager_TypeInfo;
    }
    p_eventHarvestGrowthInfo = &v149->static_fields->eventHarvestGrowthInfo;
    *p_eventHarvestGrowthInfo = v148;
    sub_B2C2F8(p_eventHarvestGrowthInfo, v148);
  }
  v151 = (System_String_o *)StringLiteral_11561/*"SAVEKEY_LastPlayBgmName"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11561/*"SAVEKEY_LastPlayBgmName"*/, 0LL) )
  {
    v152 = UnityEngine_PlayerPrefs__GetString_35342888(v151, 0LL);
    v153 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v153 = TerminalPramsManager_TypeInfo;
    }
    p_lastPlayBgmName = &v153->static_fields->lastPlayBgmName;
    *p_lastPlayBgmName = v152;
    sub_B2C2F8(p_lastPlayBgmName, v152);
  }
  v155 = (System_String_o *)StringLiteral_11562/*"SAVEKEY_LastPlayQuestConsumeType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11562/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL) )
  {
    v156 = UnityEngine_PlayerPrefs__GetInt_35342280(v155, 0LL);
    v157 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v157 = TerminalPramsManager_TypeInfo;
    }
    v157->static_fields->lastPlayQuestConsumeAp = v156;
  }
  v158 = (System_String_o *)StringLiteral_13620/*"TerminalLastPlayedFreeQuestSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13620/*"TerminalLastPlayedFreeQuestSpotId"*/, 0LL) )
  {
    v160 = UnityEngine_PlayerPrefs__GetInt_35342280(v158, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183CBE )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v159);
      byte_4183CBE = 1;
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
  v162 = (System_String_o *)StringLiteral_13619/*"TerminalLastPanelEventPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13619/*"TerminalLastPanelEventPoint"*/, 0LL) )
  {
    v163 = UnityEngine_PlayerPrefs__GetInt_35342280(v162, 0LL);
    v164 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v164 = TerminalPramsManager_TypeInfo;
    }
    v164->static_fields->panelEventPoint = v163;
  }
  v165 = (System_String_o *)StringLiteral_11567/*"SAVEKEY_PlayedTerminalEffects"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11567/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL) )
  {
    v167 = UnityEngine_PlayerPrefs__GetString_35342888(v165, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_418470C )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v166);
      byte_418470C = 1;
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
    sub_B2C2F8(p_PlayedTerminalEffects_k__BackingField, v167);
  }
  v170 = (System_String_o *)StringLiteral_11564/*"SAVEKEY_PlayTerminalEffectDisappear"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11564/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL) )
  {
    v172 = UnityEngine_PlayerPrefs__GetInt_35342280(v170, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_418470D )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v171);
      byte_418470D = 1;
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
  v174 = (System_String_o *)StringLiteral_11565/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11565/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL) )
  {
    v176 = UnityEngine_PlayerPrefs__GetInt_35342280(v174, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_418470E )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v175);
      byte_418470E = 1;
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
  v178 = (System_String_o *)StringLiteral_11566/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11566/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL) )
  {
    v180 = UnityEngine_PlayerPrefs__GetInt_35342280(v178, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_418470F )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v179);
      byte_418470F = 1;
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
  v182 = (System_String_o *)StringLiteral_11575/*"SAVEKEY_TerminalSelectedStoryQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11575/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL) )
  {
    v184 = UnityEngine_PlayerPrefs__GetInt_35342280(v182, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C6D )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v183);
      byte_4183C6D = 1;
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
  v186 = (System_String_o *)StringLiteral_11558/*"SAVEKEY_ConnectMarkEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11558/*"SAVEKEY_ConnectMarkEventId"*/, 0LL) )
  {
    v187 = UnityEngine_PlayerPrefs__GetInt_35342280(v186, 0LL);
    v188 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v188 = TerminalPramsManager_TypeInfo;
    }
    v188->static_fields->ConnectMarkEventId = v187;
  }
  v189 = (System_String_o *)StringLiteral_11557/*"SAVEKEY_ConnectMarkAnimationId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11557/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL) )
  {
    v190 = UnityEngine_PlayerPrefs__GetInt_35342280(v189, 0LL);
    v191 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v191 = TerminalPramsManager_TypeInfo;
    }
    v191->static_fields->ConnectMarkAnimationId = v190;
  }
  v192 = (System_String_o *)StringLiteral_11574/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11574/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL) )
  {
    v194 = UnityEngine_PlayerPrefs__GetInt_35342280(v192, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C6E )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v193);
      byte_4183C6E = 1;
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
  v196 = (System_String_o *)StringLiteral_11556/*"SAVEKEY_ClearEventQuestIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11556/*"SAVEKEY_ClearEventQuestIds"*/, 0LL) )
  {
    v198 = UnityEngine_PlayerPrefs__GetString_35342888(v196, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_418471F )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v197);
      byte_418471F = 1;
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
    sub_B2C2F8(p_ClearEventQuestIds_k__BackingField, v198);
  }
  v201 = (System_String_o *)StringLiteral_11563/*"SAVEKEY_MapModelClearQuestInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11563/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL) )
  {
    v202 = UnityEngine_PlayerPrefs__GetString_35342888(v201, 0LL);
    if ( !System_String__IsNullOrEmpty(v202, 0LL) )
    {
      v203 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
      if ( v203 )
      {
        v204 = v203;
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
              if ( !byte_4184711 )
              {
                sub_B2C35C(&TerminalPramsManager_TypeInfo, v204);
                byte_4184711 = 1;
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
              if ( !byte_4184712 )
              {
                sub_B2C35C(&TerminalPramsManager_TypeInfo, v204);
                byte_4184712 = 1;
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
            v234 = sub_B2C460(v203);
            sub_B2C400(v234, 0LL);
          }
        }
      }
      sub_B2C434(v203, v204);
    }
  }
LABEL_377:
  v212 = (System_String_o *)StringLiteral_11559/*"SAVEKEY_DataLostBattleAutoReset"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11559/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL) )
  {
    v214 = UnityEngine_PlayerPrefs__GetInt_35342280(v212, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184713 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v213);
      byte_4184713 = 1;
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
  v216 = (System_String_o *)StringLiteral_11568/*"SAVEKEY_PlayerGenderType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11568/*"SAVEKEY_PlayerGenderType"*/, 0LL) )
  {
    v218 = UnityEngine_PlayerPrefs__GetInt_35342280(v216, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_418471A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v217);
      byte_418471A = 1;
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
  v220 = (System_String_o *)StringLiteral_11555/*"SAVEKEY_CampaignDirectBonus"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11555/*"SAVEKEY_CampaignDirectBonus"*/, 0LL) )
  {
    v221 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35342888(v220, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v223 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
             v221,
             (const MethodInfo_1AACF6C *)Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_418471D )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v222);
      byte_418471D = 1;
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
    sub_B2C2F8(&v225->_CampaignDirectBonus_k__BackingField, v223);
  }
  v226 = (System_String_o *)StringLiteral_11554/*"SAVEKEY_BlankEarthSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11554/*"SAVEKEY_BlankEarthSpotId"*/, 0LL) )
  {
    v228 = UnityEngine_PlayerPrefs__GetInt_35342280(v226, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_41846F7 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v227);
      byte_41846F7 = 1;
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
  v230 = (System_String_o *)StringLiteral_11553/*"SAVEKEY_BlankEarthRank"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11553/*"SAVEKEY_BlankEarthRank"*/, 0LL) )
  {
    v232 = UnityEngine_PlayerPrefs__GetInt_35342280(v230, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184720 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v231);
      byte_4184720 = 1;
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
  int32_t Int_35342280; // w0
  int32_t v7; // w20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  System_String_o *String_35342888; // x0

  if ( (byte_4184663 & 1) == 0 )
  {
    sub_B2C35C(&TerminalTransitionInfo_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_13634/*"TerminalTransitionInfoVoiceAssetName"*/, v2);
    sub_B2C35C(&StringLiteral_13633/*"TerminalTransitionInfoMissionId"*/, v3);
    byte_4184663 = 1;
  }
  v4 = (System_String_o *)StringLiteral_13633/*"TerminalTransitionInfoMissionId"*/;
  v5 = 0LL;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13633/*"TerminalTransitionInfoMissionId"*/, 0LL) )
  {
    Int_35342280 = UnityEngine_PlayerPrefs__GetInt_35342280(v4, 0LL);
    if ( Int_35342280 < 1 )
    {
      return 0LL;
    }
    else
    {
      v7 = Int_35342280;
      v5 = (TerminalTransitionInfo_o *)sub_B2C42C(TerminalTransitionInfo_TypeInfo);
      TerminalTransitionInfo___ctor(v5, 0LL);
      if ( !v5 )
        sub_B2C434(v8, v9);
      v5->fields.missionId = v7;
      v10 = (System_String_o *)StringLiteral_13634/*"TerminalTransitionInfoVoiceAssetName"*/;
      if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13634/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL) )
      {
        String_35342888 = UnityEngine_PlayerPrefs__GetString_35342888(v10, 0LL);
        v5->fields.voiceAssetName = String_35342888;
        sub_B2C2F8(&v5->fields.voiceAssetName, String_35342888);
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

  if ( (byte_418467C & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11563/*"SAVEKEY_MapModelClearQuestInfo"*/, v2);
    sub_B2C35C(&StringLiteral_699/*","*/, v3);
    byte_418467C = 1;
  }
  MapModelClearQuestId_k__BackingField = 0;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C90 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4183C90 = 1;
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
  if ( !byte_4183C91 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    byte_4183C91 = 1;
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
  v9 = System_String__Concat_44307816(v6, (System_String_o *)StringLiteral_699/*","*/, v8, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11563/*"SAVEKEY_MapModelClearQuestInfo"*/, v9, 0LL);
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

  if ( (byte_4184669 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11573/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, v2);
    sub_B2C35C(&StringLiteral_13620/*"TerminalLastPlayedFreeQuestSpotId"*/, v3);
    sub_B2C35C(&StringLiteral_13621/*"TerminalLastPlayedQuestId"*/, v4);
    byte_4184669 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418472D )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418472D = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13621/*"TerminalLastPlayedQuestId"*/,
    v5->static_fields->_LastPlayedQuestId_k__BackingField,
    0LL);
  if ( !byte_418471E )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    byte_418471E = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11573/*"SAVEKEY_TerminalLastSelectQuestIndex"*/,
    v7->static_fields->_LastSelectQuestIndex_k__BackingField,
    0LL);
  if ( !byte_418472E )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    byte_418472E = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13620/*"TerminalLastPlayedFreeQuestSpotId"*/,
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

  if ( (byte_418465E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v3);
    byte_418465E = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_41846FC )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41846FC = 1;
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
    if ( !byte_4184248 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
      byte_4184248 = 1;
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
  if ( (byte_4184684 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4184684 = 1;
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
    if ( !byte_4184727 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
      byte_4184727 = 1;
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
      if ( !byte_418470C )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
        byte_418470C = 1;
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
      sub_B2C2F8(p_PlayedTerminalEffects_k__BackingField, v7);
      v6 = TerminalPramsManager_TypeInfo;
    }
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v6);
    if ( !byte_4184727 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
      byte_4184727 = 1;
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
    v14 = System_String__Concat_44307816(
            PlayedTerminalEffects_k__BackingField,
            v12,
            (System_String_o *)StringLiteral_26/*"\n"*/,
            0LL);
    if ( !byte_418470C )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
      byte_418470C = 1;
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
    sub_B2C2F8(v16, v14);
    TerminalPramsManager__Save_SaveData(v17);
  }
}


void __fastcall TerminalPramsManager__PlayerGenderType_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_418467E & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11568/*"SAVEKEY_PlayerGenderType"*/, v2);
    byte_418467E = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418472C )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418472C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11568/*"SAVEKEY_PlayerGenderType"*/,
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
  UserServantCollectionEntity_o *v72; // x24
  _DWORD *v73; // x23
  _DWORD *v74; // x23
  TerminalPramsManager_c *v75; // x0
  BattleResultComponent_resultData_array **v76; // x27
  struct QuestClearHeroineInfo_o **p_mQuestClearHeroineInfo; // x0
  __int64 v78; // x8
  BattleResultComponent_resultData_o *v79; // x9
  struct System_String_o *eventEndTitle; // x10
  struct System_String_o *eventEndMessage; // x19
  __int128 v82; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v83; // x23
  UserServantEntity_o *v84; // x24
  __int64 v85; // x23
  System_String_Fields fields; // x25
  void *monitor; // x26
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int64_t UserId; // x0
  __int64 v90; // x27
  __int64 v91; // x28
  int64_t v92; // x26
  int v93; // w8
  UserServantCollectionEntity_o *v94; // x26
  int v95; // w9
  UserServantCollectionEntity_o *v96; // x25
  BattleResultComponent_resultData_array *v97; // x21
  int32_t SvtId; // w0
  __int64 v99; // x21
  __int64 v100; // x28
  int32_t v101; // w27
  bool v102; // zf
  QuestClearHeroineInfo_o *v103; // x22
  bool v104; // w9
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v106; // x21
  __int64 v107; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v108; // x23
  int32_t lastQuestId; // w8
  int32_t friendshipExceedCount; // w9
  TerminalPramsManager_c *v111; // x0
  struct QuestClearHeroineInfo_o **v112; // x0
  BattleResultComponent_resultData_o *v113; // x8
  struct System_String_o *v114; // x9
  UserQuestEntity_o *v115; // x28
  TerminalPramsManager_c *v116; // x8
  int32_t questId; // w19
  TerminalPramsManager_c *v118; // x0
  __int64 v119; // x1
  int32_t QuestPhase; // w23
  TerminalPramsManager_c *v121; // x0
  int32_t v122; // w23
  UserQuestMaster_o *v123; // x24
  UserQuestEntity_o *v124; // x0
  UserQuestEntity_o *v125; // x25
  int32_t v126; // w24
  __int64 v127; // x1
  bool v128; // w19
  TerminalPramsManager_c *v129; // x0
  const MethodInfo *v130; // x2
  TerminalPramsManager_c *v131; // x0
  TerminalPramsManager_c *v132; // x8
  int32_t v133; // w24
  const MethodInfo *v134; // x1
  WarEntity_o *v135; // x23
  TerminalPramsManager_c *v136; // x0
  TerminalPramsManager_c *v137; // x0
  char v138; // w8
  const MethodInfo *v139; // x1
  bool HasFlag; // w0
  __int64 v141; // x1
  struct QuestRewardInfo_array **p_mQuestRewardInfos; // x0
  BattleResultComponent_resultData_o *v143; // x23
  TerminalPramsManager_c *v144; // x0
  struct QuestRewardInfo_array **v145; // x0
  TerminalPramsManager_c *v146; // x0
  struct QuestRewardInfo_array **p_mQuestPhaseRewardInfos; // x0
  BattleResultComponent_resultData_o *v148; // x23
  TerminalPramsManager_c *v149; // x0
  struct QuestRewardInfo_array **v150; // x0
  TerminalPramsManager_c *v151; // x0
  struct BattleDropItem_array **p_mQuestResultAfterEventRewardInfos; // x0
  __int64 v153; // x8
  BattleResultComponent_resultData_o *v154; // x23
  TerminalPramsManager_c *v155; // x0
  struct BattleDropItem_array **v156; // x0
  TerminalPramsManager_c *v157; // x0
  int32_t v158; // w19
  struct BattleDropItem_array **p_mResultEventPanelRewardInfos; // x0
  BattleResultComponent_resultData_o *v160; // x23
  TerminalPramsManager_c *v161; // x0
  struct BattleDropItem_array **v162; // x0
  TerminalPramsManager_c *v163; // x0
  struct EventConquestInfo_array **p_eventConquestInfos; // x0
  struct TerminalPramsManager_StaticFields **p_static_fields; // x8
  __int64 v166; // x9
  BattleResultComponent_resultData_o *v167; // x23
  struct EventConquestInfo_array **v168; // x0
  int32_t v169; // w23
  WarEntity_o *v170; // x0
  __int64 v171; // x1
  int32_t id; // w19
  EventRaidMaster_o *v173; // x23
  signed int v174; // w9
  BattleResultComponent_resultData_array *v175; // x24
  int v176; // w8
  Il2CppClass **v177; // x8
  Il2CppClass *v178; // x25
  int32_t RaidGroupDeadQuestId; // w26
  signed int v180; // w9
  BattleResultComponent_resultData_array *v181; // x26
  int v182; // w8
  int v183; // w22
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t name_high; // w22
  signed int v186; // w9
  BattleResultComponent_resultData_array *v187; // x24
  int v188; // w8
  BattleResultComponent_resultData_o *v189; // x19
  int32_t RaidDeadQuestId; // w25
  struct TerminalPramsManager_StaticFields *v191; // x8
  int32_t v192; // w19
  TerminalPramsManager_c *v193; // x0
  TerminalPramsManager_c *v194; // x8
  bool v195; // w19
  TerminalPramsManager_c *v196; // x0
  int32_t v197; // w19
  int32_t eventId; // w21
  BattleResultComponent_resultData_o *v199; // x8
  int v200; // w9
  __int64 *v201; // x21
  __int64 *v202; // x22
  int v203; // w11
  __int64 v204; // x28
  int32_t bounds_high; // w23
  bool IsUserEventStatus; // w0
  TerminalPramsManager_c *v207; // x0
  TerminalPramsManager_c *v208; // x0
  EventSaveData_o *v209; // x23
  __int64 v210; // x1
  TerminalPramsManager_c *v211; // x0
  struct EventSaveData_o **p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  struct LimitImageAnnounce_array *limitImageAnnounces; // x8
  signed int v214; // w8
  System_String_o **v215; // x9
  System_String_o *v216; // x25
  System_String_o **v217; // x9
  System_String_o *v218; // x23
  __int64 *v219; // x8
  int32_t v220; // w21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v221; // x26
  TerminalPramsManager___c_c *v222; // x8
  struct TerminalPramsManager___c_StaticFields *v223; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__604_0; // x24
  Il2CppObject *v225; // x21
  struct TerminalPramsManager___c_StaticFields *v226; // x0
  __int64 v227; // x1
  TerminalPramsManager_c *v228; // x0
  TerminalPramsManager_c *v229; // x0
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x26
  System_String_o *v231; // x21
  TerminalPramsManager_c *v232; // x0
  int32_t v233; // w23
  int32_t PhaseCnt_k__BackingField; // w24
  _BOOL4 IsQuestClear_k__BackingField; // w19
  TerminalPramsManager_c *v236; // x0
  BattleResultComponent_resultData_array **v237; // x22
  UserQuestEntity_o *v238; // x24
  QuestMaster_o *v239; // x23
  int v240; // w21
  TerminalPramsManager_c *v241; // x0
  struct CostumeReleaseAnnounce_array **p_questClearCostumeRelease_k__BackingField; // x0
  BattleResultComponent_resultData_o *v243; // x8
  struct CostumeReleaseAnnounce_array *v244; // x23
  TerminalPramsManager_c *v245; // x0
  struct CostumeReleaseAnnounce_array **v246; // x0
  TerminalPramsManager_c *v247; // x0
  struct CostumeReleaseAnnounce_array **p_questClearCostumeGet_k__BackingField; // x0
  BattleResultComponent_resultData_o *v249; // x23
  TerminalPramsManager_c *v250; // x0
  struct CostumeReleaseAnnounce_array **v251; // x0
  TerminalPramsManager_c *v252; // x0
  struct TerminalPramsManager_StaticFields *v253; // x0
  bool v254; // w28
  int32_t v255; // w23
  QuestGroupMaster_o *v256; // x24
  int32_t GroupId; // w0
  TerminalPramsManager_c *v258; // x8
  int32_t v259; // w25
  int v260; // w24
  QuestReleaseMaster_o *v261; // x25
  EventPointEntity_o *v262; // x24
  int32_t v263; // w23
  struct TerminalPramsManager_StaticFields *v264; // x8
  BattleResultComponent_resultData_o *v265; // x8
  struct System_String_o *v266; // x9
  struct System_String_o *v267; // x23
  TerminalPramsManager_c *v268; // x0
  struct TerminalPramsManager_StaticFields *v269; // x0
  bool v270; // w9
  BattleResultComponent_resultData_array **v271; // x28
  int32_t v272; // w19
  TerminalPramsManager_c *v273; // x0
  TerminalPramsManager_c *v274; // x0
  struct TerminalPramsManager_StaticFields *v275; // x0
  __int64 v276; // x8
  BattleResultComponent_resultData_o *v277; // x22
  TerminalPramsManager_c *v278; // x0
  struct TerminalPramsManager_StaticFields *v279; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfos; // x19
  BattleResultComponent_resultData_o *v281; // x9
  struct System_String_o *v282; // x10
  struct EventTowerReward_o *v283; // x22
  TerminalPramsManager_c *v284; // x0
  struct EventTowerReward_o **p_eventTowerReward_k__BackingField; // x0
  BattleResultComponent_resultData_o *v286; // x22
  TerminalPramsManager_c *v287; // x0
  struct QuestRewardInfo_array **p_resultEventTowerRewardInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v289; // x22
  TerminalPramsManager_c *v290; // x0
  struct QuestRewardInfo_array **p_resultBoostItemRewardInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v292; // x22
  TerminalPramsManager_c *v293; // x0
  struct QuestRewardInfo_array **p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v295; // x22
  TerminalPramsManager_c *v296; // x0
  struct WarClearReward_array **p_warClearReward_k__BackingField; // x0
  TerminalPramsManager_c *v298; // x0
  struct TerminalPramsManager_StaticFields *v299; // x0
  __int64 v300; // x1
  TerminalPramsManager_c *v301; // x0
  struct TerminalPramsManager_StaticFields *v302; // x0
  QuestTree_o *v303; // x22
  int32_t WarID_ByQuestID; // w21
  WarEntity_o *WarEntityByWarID; // x0
  int32_t v306; // w22
  __int64 v307; // x8
  BattleResultComponent_resultData_o *v308; // x21
  TerminalPramsManager_c *v309; // x0
  struct TerminalPramsManager_StaticFields *v310; // x0
  struct UserSuperBossEntity_array **p_oldPersonalBoss_k__BackingField; // x0
  TerminalPramsManager_c *v312; // x0
  struct TerminalPramsManager_StaticFields *v313; // x0
  struct EventRaceBoostInfo_o *raceResult; // x8
  bool v315; // w19
  BalanceConfig_c *v316; // x8
  int32_t battleId; // w19
  TerminalPramsManager_c *v318; // x0
  __int64 v319; // x1
  TerminalPramsManager_c *v320; // x0
  BalanceConfig_c *v321; // x8
  int32_t v322; // w21
  TerminalPramsManager_c *v323; // x0
  BalanceConfig_c *v324; // x8
  int32_t v325; // w23
  TerminalPramsManager_c *v326; // x0
  BalanceConfig_c *v327; // x8
  int32_t v328; // w21
  UserSuperBossMaster_o *v329; // x21
  BattleResultComponent_resultData_array *v330; // x23
  UserSuperBossEntity_o *v331; // x22
  BattleResultComponent_resultData_array *v332; // x21
  __int64 v333; // x1
  TerminalPramsManager_c *v334; // x0
  struct TerminalPramsManager_StaticFields *v335; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v337; // x21
  QuestMaster_o *v338; // x22
  int32_t ScriptQuestId; // w22
  __int64 v340; // x1
  WebViewManager_o *Instance; // x23
  TerminalPramsManager_c *v342; // x0
  int32_t v343; // w28
  int32_t winResult; // w24
  __int64 v345; // x1
  WebViewManager_o *v346; // x23
  TerminalPramsManager_c *v347; // x0
  int32_t v348; // w24
  int32_t v349; // w21
  TerminalPramsManager_c *v350; // x0
  struct System_String_o **p_lastPlayBgmName; // x0
  void *v352; // x1
  const MethodInfo *v353; // x0
  QuestPhaseMaster_o *v354; // x21
  int32_t v355; // w22
  TerminalPramsManager_c *v356; // x0
  int32_t v357; // w22
  TerminalPramsManager_c *v358; // x0
  int32_t v359; // w23
  __int64 v360; // x1
  SpecifiedSceneInfo_o *SpecifiedSceneInfo; // x22
  TerminalPramsManager_c *v362; // x0
  struct TerminalPramsManager_StaticFields *v363; // x0
  TerminalPramsManager_c *v364; // x8
  const MethodInfo *v365; // x0
  int32_t v366; // w19
  TerminalPramsManager_c *v367; // x0
  struct EventHarvestGrowthInfo_o **p_eventHarvestGrowthInfo; // x0
  __int64 v369; // x1
  TerminalPramsManager_c *v370; // x0
  QuestPhaseEntity_o *v371; // x22
  int32_t ScriptIntParam; // w24
  int32_t v373; // w0
  int32_t v374; // w25
  EventHarvestGrowthInfo_o *v375; // x23
  int32_t phase; // w8
  TerminalPramsManager_c *v377; // x0
  struct EventHarvestGrowthInfo_o **v378; // x0
  QuestMaster_o *v379; // x22
  QuestEntity_o *QuestEntity; // x0
  QuestEntity_o *v381; // x22
  TerminalPramsManager_c *v382; // x0
  int32_t SpotId; // w21
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v385; // x21
  TerminalPramsManager_c *v386; // x0
  struct EventAreaImproveResultInfo_o *eventAreaImproveResultInfo; // x8
  TerminalPramsManager_c *v388; // x0
  __int64 v389; // x1
  System_String_o *v390; // x21
  TerminalPramsManager_c *v391; // x0
  System_String_o *v392; // x0
  __int64 v393; // x1
  System_String_o *v394; // x21
  TerminalPramsManager_c *v395; // x0
  struct System_String_o **p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v397; // x21
  TerminalPramsManager_c *v398; // x0
  struct LimitImageAnnounce_array **p_limitImageAnnounces_k__BackingField; // x0
  __int64 v400; // x1
  System_String_array *v401; // x21
  TerminalPramsManager_c *v402; // x0
  __int64 *v403; // x24
  BattleResultComponent_resultData_array *v404; // x22
  __int64 v405; // x1
  __int64 v406; // x1
  TerminalPramsManager_c *v407; // x0
  BattleResultComponent_resultData_array *v408; // x22
  __int64 v409; // x1
  __int64 v410; // x1
  TerminalPramsManager_c *v411; // x0
  BattleResultComponent_resultData_array *v412; // x22
  __int64 v413; // x1
  __int64 v414; // x1
  TerminalPramsManager_c *v415; // x0
  BattleResultComponent_resultData_array *v416; // x22
  System_String_o *v417; // x0
  const MethodInfo *v418; // x1
  const MethodInfo *v419; // x0
  const MethodInfo *v420; // x0
  const MethodInfo *v421; // x0
  const MethodInfo *v422; // x0
  const MethodInfo *v423; // x0
  __int64 v424; // x1
  TerminalPramsManager_c *v425; // x0
  TerminalPramsManager_c *v426; // x0
  __int64 v427; // x0
  __int64 v428; // x0
  __int64 v429; // x0
  __int64 v430; // x0
  System_String_o *isLastGoalPlayed; // [xsp+0h] [xbp-110h]
  bool v432; // [xsp+Ch] [xbp-104h]
  BattleResultComponent_resultData_array *resulta; // [xsp+10h] [xbp-100h]
  UserQuestEntity_o *v434; // [xsp+18h] [xbp-F8h]
  BattleResultComponent_resultData_array **v435; // [xsp+20h] [xbp-F0h]
  il2cpp_array_size_t *p_max_length; // [xsp+28h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v437; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v438; // [xsp+50h] [xbp-C0h]
  char v439[4]; // [xsp+7Ch] [xbp-94h] BYREF
  UserSuperBossEntity_o *v440; // [xsp+80h] [xbp-90h] BYREF
  WarEntity_o *v441; // [xsp+88h] [xbp-88h] BYREF
  int QuestId_k__BackingField; // [xsp+94h] [xbp-7Ch] BYREF
  WarEntity_o *v443; // [xsp+98h] [xbp-78h] BYREF
  WarEntity_o *entity; // [xsp+A0h] [xbp-70h] BYREF
  int v445; // [xsp+ACh] [xbp-64h] BYREF
  QuestPhaseEntity_o *v446; // [xsp+B0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v447; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v448; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v449; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v450; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v451; // 0:x0.16

  v4 = result;
  if ( (byte_418468C & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, isWin);
    sub_B2C35C(&CondType_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPointMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMessageMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMaster_EventDetailMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v20);
    sub_B2C35C(&Method_DataManager_GetMaster_UserSuperBossMaster___, v21);
    sub_B2C35C(&DataManager_TypeInfo, v22);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v23);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v24);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v25);
    sub_B2C35C(&EventHarvestGrowthInfo_TypeInfo, v26);
    sub_B2C35C(&EventSaveData_TypeInfo, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v28);
    sub_B2C35C(&NetworkManager_TypeInfo, v29);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31);
    sub_B2C35C(&Method_System_Predicate_QuestReleaseEntity___ctor__, v32);
    sub_B2C35C(&System_Predicate_QuestReleaseEntity__TypeInfo, v33);
    sub_B2C35C(&QuestClearHeroineInfo_TypeInfo, v34);
    sub_B2C35C(&ScriptManager_TypeInfo, v35);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v36);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v37);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v39);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v40);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v41);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v42);
    sub_B2C35C(&string___TypeInfo, v43);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v44);
    sub_B2C35C(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v45);
    sub_B2C35C(&Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__604_0__, v46);
    sub_B2C35C(&TerminalPramsManager___c_TypeInfo, v47);
    sub_B2C35C(&UserServantCollectionEntity___TypeInfo, v48);
    sub_B2C35C(&UserServantCollectionEntity_TypeInfo, v49);
    sub_B2C35C(&UserServantEntity_TypeInfo, v50);
    sub_B2C35C(&UserSuperBossEntity___TypeInfo, v51);
    sub_B2C35C(&StringLiteral_19110/*"harvestGrowthAfterQuestId"*/, v52);
    sub_B2C35C(&StringLiteral_16287/*"afterActionBk"*/, v53);
    sub_B2C35C(&StringLiteral_699/*","*/, v54);
    sub_B2C35C(&StringLiteral_19111/*"harvestGrowthBeforeQuestId"*/, v55);
    sub_B2C35C(&StringLiteral_1/*""*/, v56);
    sub_B2C35C(&StringLiteral_6584/*"False"*/, v57);
    result = (BattleResultComponent_resultData_array *)sub_B2C35C(&StringLiteral_953/*"0"*/, v58);
    byte_418468C = 1;
  }
  v446 = 0LL;
  v445 = 0;
  v443 = 0LL;
  entity = 0LL;
  QuestId_k__BackingField = 0;
  v440 = 0LL;
  v441 = 0LL;
  v439[0] = 0;
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
  v62 = (_DWORD *)sub_B2C374(UserServantCollectionEntity___TypeInfo, oldUserSvtCollection->max_length);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1319;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_max_length )
    goto LABEL_1318;
  if ( !*m_Items )
    goto LABEL_1319;
  v435 = (BattleResultComponent_resultData_array **)v4->m_Items;
  v63 = (*m_Items)->fields.oldUserSvtCollection;
  v432 = isWin;
  v445 = 0;
  if ( !v63 )
    goto LABEL_1319;
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
        goto LABEL_1319;
      v68 = result;
      v70 = *(_QWORD *)&v67->fields.svtId.fields.currentCryptoKey;
      v69 = *(_QWORD *)&v67->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v447.fields.currentCryptoKey = v70;
      *(_QWORD *)&v447.fields.fakeValue = v69;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                           v447,
                                                           0LL);
      if ( !v65 )
        goto LABEL_1319;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v65, (int64_t)v68, (int32_t)result, 0LL);
      v72 = (UserServantCollectionEntity_o *)sub_B2C42C(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor_21609996(v72, EntityDefinitely, 0LL);
      if ( !v62 )
        goto LABEL_1319;
      if ( v72 )
      {
        result = (BattleResultComponent_resultData_array *)sub_B2C41C(v72, *(_QWORD *)(*(_QWORD *)v62 + 64LL));
        if ( !result )
        {
          v429 = sub_B2C454();
          sub_B2C400(v429, 0LL);
        }
      }
      if ( (unsigned int)v66 >= v62[6] )
        break;
      v73 = &v62[2 * (int)v66];
      *((_QWORD *)v73 + 4) = v72;
      v74 = v73 + 8;
      sub_B2C2F8(v74, v72);
      if ( (unsigned int)v66 >= v62[6] )
        break;
      if ( !*(_QWORD *)v74 )
        goto LABEL_1319;
      *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*(_QWORD *)v74 + 84LL) = v67->fields.friendship;
      if ( (unsigned int)v66 >= v62[6] )
        break;
      if ( !*(_QWORD *)v74 )
        goto LABEL_1319;
      *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*(_QWORD *)v74 + 100LL) = v67->fields.friendshipRank;
      if ( (unsigned int)v66 >= v62[6] )
        break;
      if ( !*(_QWORD *)v74 )
        goto LABEL_1319;
      ++v66;
      *(_DWORD *)(*(_QWORD *)v74 + 116LL) = v67->fields.friendshipExceedCount;
      v445 = v66;
      max_length = v63->max_length;
      if ( (int)v66 >= max_length )
        goto LABEL_33;
    }
LABEL_1318:
    v427 = sub_B2C460(result);
    sub_B2C400(v427, 0LL);
  }
LABEL_33:
  v75 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v76 = v435;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v75 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v76 = v435;
  }
  p_mQuestClearHeroineInfo = &v75->static_fields->mQuestClearHeroineInfo;
  *p_mQuestClearHeroineInfo = 0LL;
  sub_B2C2F8(p_mQuestClearHeroineInfo, 0LL);
  v78 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1318;
  if ( !*v76 )
    goto LABEL_1319;
  v79 = (*v76)->m_Items[5];
  if ( v79 )
  {
    eventEndTitle = v79->fields.eventEndTitle;
    if ( eventEndTitle )
    {
      if ( !(_DWORD)eventEndTitle )
        goto LABEL_1318;
      eventEndMessage = v79->fields.eventEndMessage;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1319;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !eventEndMessage )
        goto LABEL_1319;
      v82 = *(_OWORD *)&eventEndMessage[1].monitor;
      v83 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)result;
      *(_OWORD *)&v438.fields.currentCryptoKey = *(_OWORD *)&eventEndMessage->fields.m_stringLength;
      *(_OWORD *)&v438.fields.fakeValue = v82;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v437 = v438;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                           &v437,
                                                           0LL);
      if ( !v83 )
        goto LABEL_1319;
      v84 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
              v83,
              (int64_t)result,
              (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v85 = sub_B2C42C(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_21638868((UserServantEntity_o *)v85, v84, 0LL);
      if ( !v85 )
        goto LABEL_1319;
      *(_OWORD *)(v85 + 96) = *(_OWORD *)&eventEndMessage[4].klass;
      *(_DWORD *)(v85 + 256) = eventEndMessage[10].fields.m_stringLength;
      *(_DWORD *)(v85 + 292) = HIDWORD(eventEndMessage[12].klass);
      *(_DWORD *)(v85 + 296) = eventEndMessage[12].monitor;
      monitor = eventEndMessage[5].monitor;
      fields = eventEndMessage[5].fields;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v448.fields.currentCryptoKey = monitor;
      *(System_String_Fields *)&v448.fields.fakeValue = fields;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v448, 0LL) >= 1 )
        *(_OWORD *)(v85 + 128) = *(_OWORD *)&eventEndMessage[5].monitor;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1319;
      MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)result,
                                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v91 = *(_QWORD *)(v85 + 80);
      v90 = *(_QWORD *)(v85 + 88);
      v92 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v449.fields.currentCryptoKey = v91;
      *(_QWORD *)&v449.fields.fakeValue = v90;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                           v449,
                                                           0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_1319;
      result = (BattleResultComponent_resultData_array *)UserServantCollectionMaster__GetEntityDefinitely(
                                                           MasterData_WarQuestSelectionMaster,
                                                           v92,
                                                           (int32_t)result,
                                                           0LL);
      v76 = v435;
      v445 = 0;
      if ( !v62 )
        goto LABEL_1319;
      v93 = v62[6];
      v94 = (UserServantCollectionEntity_o *)result;
      if ( v93 >= 1 )
      {
        v95 = 0;
        while ( v95 < (unsigned int)v93 )
        {
          v96 = *(UserServantCollectionEntity_o **)&v62[2 * v95 + 8];
          if ( !v96 )
            goto LABEL_1319;
          v97 = (BattleResultComponent_resultData_array *)v96->fields.userId;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
          if ( v97 == result )
          {
            SvtId = UserServantCollectionEntity__getSvtId(v96, 0LL);
            v99 = *(_QWORD *)(v85 + 80);
            v100 = *(_QWORD *)(v85 + 88);
            v101 = SvtId;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v450.fields.currentCryptoKey = v99;
            *(_QWORD *)&v450.fields.fakeValue = v100;
            result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                 v450,
                                                                 0LL);
            v102 = v101 == (_DWORD)result;
            v76 = v435;
            if ( v102 )
              goto LABEL_77;
          }
          v95 = v445 + 1;
          v445 = v95;
          v93 = v62[6];
          if ( v95 >= v93 )
            goto LABEL_76;
        }
        goto LABEL_1318;
      }
LABEL_76:
      v96 = 0LL;
LABEL_77:
      v103 = (QuestClearHeroineInfo_o *)sub_B2C42C(QuestClearHeroineInfo_TypeInfo);
      QuestClearHeroineInfo___ctor(v103, 0LL);
      if ( !v103 )
        goto LABEL_1319;
      v103->fields.oldUsrSvtData = (struct UserServantEntity_o *)v85;
      sub_B2C2F8(&v103->fields, v85);
      result = (BattleResultComponent_resultData_array *)UserServantEntity__getLimitCount(
                                                           (UserServantEntity_o *)v85,
                                                           0LL);
      if ( !v84 )
        goto LABEL_1319;
      v104 = (_DWORD)result != UserServantEntity__getLimitCount(v84, 0LL);
      v103->fields.isChangeTreasureDvc = 0;
      v103->fields.treasureDvcId = 0;
      v103->fields.treasureDvcLv = 0;
      v103->fields.isFriendShipExceed = 0;
      v103->fields.oldFriendShipRank = -1;
      v103->fields.isChangeLimitcnt = v104;
      v103->fields.isExceed = *(_DWORD *)(v85 + 296) != v84->fields.exceedCount;
      if ( v96 )
      {
        result = (BattleResultComponent_resultData_array *)UserServantCollectionEntity__getFriendShipRank(v96, 0LL);
        if ( !v94 )
          goto LABEL_1319;
        if ( (_DWORD)result != UserServantCollectionEntity__getFriendShipRank(v94, 0LL) )
          v103->fields.oldFriendShipRank = UserServantCollectionEntity__getFriendShipRank(v96, 0LL);
        if ( v96->fields.friendshipExceedCount != v94->fields.friendshipExceedCount )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
          v106 = *(_QWORD *)(v85 + 80);
          v107 = *(_QWORD *)(v85 + 88);
          v108 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v451.fields.currentCryptoKey = v106;
          *(_QWORD *)&v451.fields.fakeValue = v107;
          result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                               v451,
                                                               0LL);
          if ( !v108 )
            goto LABEL_1319;
          result = (BattleResultComponent_resultData_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                               v108,
                                                               &entity,
                                                               (int32_t)result,
                                                               (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_1319;
            lastQuestId = entity->fields.lastQuestId;
            friendshipExceedCount = v96->fields.friendshipExceedCount;
            v103->fields.isFriendShipExceed = 1;
            v103->fields.oldFriendShipRank = friendshipExceedCount + lastQuestId;
          }
        }
      }
      v111 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v111 = TerminalPramsManager_TypeInfo;
      }
      v112 = &v111->static_fields->mQuestClearHeroineInfo;
      *v112 = v103;
      sub_B2C2F8(v112, v103);
      v78 = *(_QWORD *)p_max_length;
    }
  }
  if ( !(_DWORD)v78 )
    goto LABEL_1318;
  if ( !*v76 )
    goto LABEL_1319;
  v113 = (*v76)->m_Items[9];
  if ( v113 && (v114 = v113->fields.eventEndTitle) != 0LL )
  {
    if ( !(_DWORD)v114 )
      goto LABEL_1318;
    v115 = (UserQuestEntity_o *)v113->fields.eventEndMessage;
  }
  else
  {
    v115 = 0LL;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C96 )
  {
    result = (BattleResultComponent_resultData_array *)sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    byte_4183C96 = 1;
  }
  v116 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v116 = TerminalPramsManager_TypeInfo;
  }
  v116->static_fields->_IsPhaseClear_k__BackingField = v115 != 0LL;
  if ( !byte_4183C95 )
  {
    result = (BattleResultComponent_resultData_array *)sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    v116 = TerminalPramsManager_TypeInfo;
    byte_4183C95 = 1;
  }
  if ( (BYTE3(v116->vtable._0_Equals.methodPtr) & 4) != 0 && !v116->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v116);
    v116 = TerminalPramsManager_TypeInfo;
  }
  v116->static_fields->_IsQuestClear_k__BackingField = 0;
  if ( !byte_4184719 )
  {
    result = (BattleResultComponent_resultData_array *)sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    v116 = TerminalPramsManager_TypeInfo;
    byte_4184719 = 1;
  }
  if ( (BYTE3(v116->vtable._0_Equals.methodPtr) & 4) != 0 && !v116->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v116);
    v116 = TerminalPramsManager_TypeInfo;
  }
  v116->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_4183C7C )
  {
    result = (BattleResultComponent_resultData_array *)sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    v116 = TerminalPramsManager_TypeInfo;
    byte_4183C7C = 1;
  }
  if ( (BYTE3(v116->vtable._0_Equals.methodPtr) & 4) != 0 && !v116->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v116);
    v116 = TerminalPramsManager_TypeInfo;
  }
  if ( v116->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( (BYTE3(v116->vtable._0_Equals.methodPtr) & 4) != 0 && !v116->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v116);
    if ( !byte_4183C7A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_4183C7A = 1;
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
      if ( !v115 )
        goto LABEL_1319;
    }
    else
    {
      if ( !v115 )
        goto LABEL_1319;
      questId = v115->fields.questId;
      if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4183C6B )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
        byte_4183C6B = 1;
      }
      v118 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v118 = TerminalPramsManager_TypeInfo;
      }
      v118->static_fields->_QuestId_k__BackingField = questId;
      QuestPhase = UserQuestEntity__getQuestPhase(v115, 0LL);
      if ( !byte_4183C6C )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v119);
        byte_4183C6C = 1;
      }
      v121 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v121 = TerminalPramsManager_TypeInfo;
      }
      v121->static_fields->_PhaseCnt_k__BackingField = QuestPhase;
    }
    v122 = v115->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1319;
    v123 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)result,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
    if ( !v123 )
      goto LABEL_1319;
    v124 = UserQuestMaster__GetEntity(v123, (int64_t)result, v122, 0LL);
    if ( v124 )
    {
      v125 = v124;
      v126 = UserQuestEntity__getQuestPhase(v124, 0LL);
      if ( UserQuestEntity__getClearNum(v115, 0LL) || UserQuestEntity__getClearNum(v125, 0LL) != 1 )
        v128 = UserQuestEntity__IsResetStatus(v115, 0LL) && !UserQuestEntity__IsResetStatus(v125, 0LL);
      else
        v128 = 1;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183C95 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v127);
        byte_4183C95 = 1;
      }
      v129 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v129 = TerminalPramsManager_TypeInfo;
      }
      v129->static_fields->_IsQuestClear_k__BackingField = v128;
      if ( !byte_418471B )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v127);
        v129 = TerminalPramsManager_TypeInfo;
        byte_418471B = 1;
      }
      if ( (BYTE3(v129->vtable._0_Equals.methodPtr) & 4) != 0 && !v129->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v129);
        v129 = TerminalPramsManager_TypeInfo;
      }
      v129->static_fields->_EventUIEffectClearQuestId_k__BackingField = v122;
      if ( !byte_4184711 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v127);
        v129 = TerminalPramsManager_TypeInfo;
        byte_4184711 = 1;
      }
      if ( (BYTE3(v129->vtable._0_Equals.methodPtr) & 4) != 0 && !v129->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v129);
        v129 = TerminalPramsManager_TypeInfo;
      }
      v129->static_fields->_MapModelClearQuestId_k__BackingField = v122;
      if ( !byte_4184712 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v127);
        v129 = TerminalPramsManager_TypeInfo;
        byte_4184712 = 1;
      }
      if ( (BYTE3(v129->vtable._0_Equals.methodPtr) & 4) != 0 && !v129->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v129);
        v129 = TerminalPramsManager_TypeInfo;
      }
      v129->static_fields->_MapModelClearPhaseCount_k__BackingField = v126;
      TerminalPramsManager__MapModelClearQuestInfo_SaveData((const MethodInfo *)v129);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !result )
        goto LABEL_1319;
      AdManager__TrackEvent((AdManager_o *)result, 4, 1, v122, v126, 0LL, 0LL);
      TerminalPramsManager__SendClearQuestToAdManager(v122, v126, v130);
    }
    else
    {
      v126 = 0;
    }
    v131 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v131);
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1319;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMessageMaster___);
    if ( !result )
      goto LABEL_1319;
    result = (BattleResultComponent_resultData_array *)QuestMessageMaster__GetValidMessage(
                                                         (QuestMessageMaster_o *)result,
                                                         v122,
                                                         v126,
                                                         3,
                                                         0LL);
    v116 = TerminalPramsManager_TypeInfo;
    if ( result )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4184732 )
      {
        result = (BattleResultComponent_resultData_array *)sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
        byte_4184732 = 1;
      }
      v116 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v116 = TerminalPramsManager_TypeInfo;
      }
      v116->static_fields->_IsDispOnly_k__BackingField = 1;
    }
  }
  if ( (BYTE3(v116->vtable._0_Equals.methodPtr) & 4) != 0 && !v116->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v116);
  if ( !byte_4183C8C )
  {
    result = (BattleResultComponent_resultData_array *)sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    byte_4183C8C = 1;
  }
  v132 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v132 = TerminalPramsManager_TypeInfo;
  }
  if ( v132->static_fields->_IsQuestClear_k__BackingField )
  {
    if ( !v115 )
      goto LABEL_1319;
    v133 = v115->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1319;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !result )
      goto LABEL_1319;
    v135 = WarMaster__getByLastQuestId((WarMaster_o *)result, v133, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C82 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v134);
      byte_4183C82 = 1;
    }
    v136 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v136 = TerminalPramsManager_TypeInfo;
    }
    v136->static_fields->_IsWarClear_k__BackingField = v135 != 0LL;
    if ( TerminalPramsManager__CheckIsOrdealCallWarClear(v135, v134) )
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183CB1 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
        byte_4183CB1 = 1;
      }
      v137 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v137 = TerminalPramsManager_TypeInfo;
      }
      v138 = 1;
    }
    else
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183CB1 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
        byte_4183CB1 = 1;
      }
      v137 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v137 = TerminalPramsManager_TypeInfo;
      }
      v138 = 0;
    }
    v137->static_fields->_IsOrdealCallWarClear_k__BackingField = v138;
    if ( (BYTE3(v137->vtable._0_Equals.methodPtr) & 4) != 0 && !v137->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v137);
    if ( !byte_4183C80 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_4183C80 = 1;
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
      if ( !v135 )
        goto LABEL_1319;
      if ( !WarEntity__IsEvent(v135, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( !result )
          goto LABEL_1319;
        AdManager__TrackEvent((AdManager_o *)result, 6, 1, v135->fields.id, -1, 0LL, 0LL);
      }
    }
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !result )
      goto LABEL_1319;
    AdManager__TrackEvent((AdManager_o *)result, 5, 1, v133, -1, 0LL, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    TerminalPramsManager__SendOpenedQuestIdToAdManager(v133, v139);
    if ( !byte_4183C80 )
    {
      result = (BattleResultComponent_resultData_array *)sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_4183C80 = 1;
    }
    v132 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v132 = TerminalPramsManager_TypeInfo;
    }
    if ( v132->static_fields->_IsWarClear_k__BackingField )
    {
      if ( !v135 )
        goto LABEL_1319;
      HasFlag = WarEntity__HasFlag(v135, 128, 0LL);
      v132 = TerminalPramsManager_TypeInfo;
      if ( HasFlag )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4183CA5 )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v141);
          byte_4183CA5 = 1;
        }
        v132 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v132 = TerminalPramsManager_TypeInfo;
        }
        v132->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
        if ( !byte_4184719 )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v141);
          v132 = TerminalPramsManager_TypeInfo;
          byte_4184719 = 1;
        }
        if ( (BYTE3(v132->vtable._0_Equals.methodPtr) & 4) != 0 && !v132->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v132);
          v132 = TerminalPramsManager_TypeInfo;
        }
        v132->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
      }
    }
  }
  if ( (BYTE3(v132->vtable._0_Equals.methodPtr) & 4) != 0 && !v132->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v132);
    v132 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = &v132->static_fields->mQuestRewardInfos;
  *p_mQuestRewardInfos = 0LL;
  sub_B2C2F8(p_mQuestRewardInfos, 0LL);
  if ( !*p_max_length )
    goto LABEL_1318;
  if ( !*v76 )
    goto LABEL_1319;
  v143 = (*v76)->m_Items[12];
  if ( v143 && v143->fields.eventEndTitle )
  {
    v144 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v144 = TerminalPramsManager_TypeInfo;
    }
    v145 = &v144->static_fields->mQuestRewardInfos;
    *v145 = (struct QuestRewardInfo_array *)v143;
    sub_B2C2F8(v145, v143);
  }
  v146 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v146 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = &v146->static_fields->mQuestPhaseRewardInfos;
  *p_mQuestPhaseRewardInfos = 0LL;
  sub_B2C2F8(p_mQuestPhaseRewardInfos, 0LL);
  if ( !*p_max_length )
    goto LABEL_1318;
  if ( !*v76 )
    goto LABEL_1319;
  v148 = (*v76)->m_Items[13];
  if ( v148 && v148->fields.eventEndTitle )
  {
    v149 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v149 = TerminalPramsManager_TypeInfo;
    }
    v150 = &v149->static_fields->mQuestPhaseRewardInfos;
    *v150 = (struct QuestRewardInfo_array *)v148;
    sub_B2C2F8(v150, v148);
  }
  v151 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v151 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestResultAfterEventRewardInfos = &v151->static_fields->mQuestResultAfterEventRewardInfos;
  *p_mQuestResultAfterEventRewardInfos = 0LL;
  sub_B2C2F8(p_mQuestResultAfterEventRewardInfos, 0LL);
  v153 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1318;
  if ( !*v76 )
    goto LABEL_1319;
  v154 = (*v76)->m_Items[18];
  if ( v154 && v154->fields.eventEndTitle )
  {
    v155 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v155 = TerminalPramsManager_TypeInfo;
    }
    v156 = &v155->static_fields->mQuestResultAfterEventRewardInfos;
    *v156 = (struct BattleDropItem_array *)v154;
    sub_B2C2F8(v156, v154);
    v153 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v153 )
    goto LABEL_1318;
  if ( !*v76 )
    goto LABEL_1319;
  v157 = TerminalPramsManager_TypeInfo;
  v158 = HIDWORD((*v76)->m_Items[2]);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v157 = TerminalPramsManager_TypeInfo;
  }
  v157->static_fields->panelEventPoint = v158;
  p_mResultEventPanelRewardInfos = &v157->static_fields->mResultEventPanelRewardInfos;
  *p_mResultEventPanelRewardInfos = 0LL;
  sub_B2C2F8(p_mResultEventPanelRewardInfos, 0LL);
  if ( !*p_max_length )
    goto LABEL_1318;
  if ( !*v76 )
    goto LABEL_1319;
  v160 = (*v76)->m_Items[19];
  if ( v160 && v160->fields.eventEndTitle )
  {
    v161 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v161 = TerminalPramsManager_TypeInfo;
    }
    v162 = &v161->static_fields->mResultEventPanelRewardInfos;
    *v162 = (struct BattleDropItem_array *)v160;
    sub_B2C2F8(v162, v160);
  }
  v163 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v163 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = &v163->static_fields->eventConquestInfos;
  *p_eventConquestInfos = 0LL;
  sub_B2C2F8(p_eventConquestInfos, 0LL);
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  p_static_fields = &TerminalPramsManager_TypeInfo->static_fields;
  TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 0;
  v166 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1318;
  if ( !*v76 )
    goto LABEL_1319;
  v167 = (*v76)->m_Items[43];
  if ( v167 && v167->fields.eventEndTitle )
  {
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      p_static_fields = &TerminalPramsManager_TypeInfo->static_fields;
    }
    v168 = &(*p_static_fields)->eventConquestInfos;
    *v168 = (struct EventConquestInfo_array *)v167;
    sub_B2C2F8(v168, v167);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 1;
    v166 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v166 )
    goto LABEL_1318;
  if ( !*v76 )
    goto LABEL_1319;
  if ( LOBYTE((*v76)->m_Items[46]) )
  {
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_418470D )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_418470D = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(result->m_Items[19][1].klass) = 1;
    if ( !byte_4183C8C )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4183C8C = 1;
    }
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE4(result->m_Items[19]->fields.oldUserEquip) )
    {
      if ( !v115 )
        goto LABEL_1319;
      v169 = v115->fields.questId;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1319;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !result )
        goto LABEL_1319;
      v170 = WarMaster__getByLastQuestId((WarMaster_o *)result, v169, 0LL);
      if ( v170 )
      {
        id = v170->fields.id;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_418470E )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v171);
          byte_418470E = 1;
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
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1319;
  v173 = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)result,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1319;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1318;
  if ( !*v76 )
    goto LABEL_1319;
  v434 = v115;
  if ( !result )
    goto LABEL_1319;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)result,
                                                       &v443,
                                                       HIDWORD((*v76)->bounds),
                                                       (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)result & 1) == 0 )
    goto LABEL_627;
  if ( !*p_max_length )
    goto LABEL_1318;
  if ( !*v435 || !v173 )
    goto LABEL_1319;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidGorupMax(
                                                       v173,
                                                       HIDWORD((*v435)->bounds),
                                                       0LL);
  if ( (int)result >= 1 )
  {
    if ( !*p_max_length )
      goto LABEL_1318;
    if ( !*v435 )
      goto LABEL_1319;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                         v173,
                                                         HIDWORD((*v435)->bounds),
                                                         0LL);
    v445 = 0;
    if ( !result )
      goto LABEL_1319;
    v174 = result->max_length;
    v175 = result;
    if ( v174 < 1 )
      goto LABEL_627;
    v176 = 0;
    while ( 1 )
    {
      if ( v176 >= (unsigned int)v174 )
        goto LABEL_1318;
      v177 = &v175->obj.klass + v176;
      v178 = v177[4];
      if ( !v178 )
        goto LABEL_1319;
      result = (BattleResultComponent_resultData_array *)EventRaidEntity__IsJumbleSingleRaid(
                                                           (EventRaidEntity_o *)v177[4],
                                                           0LL);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !*p_max_length )
          goto LABEL_1318;
        if ( !*v435 )
          goto LABEL_1319;
        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                 v173,
                                 HIDWORD((*v435)->bounds),
                                 (int32_t)v178->_1.namespaze,
                                 0LL);
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4183C7A )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
          byte_4183C7A = 1;
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
          result = (BattleResultComponent_resultData_array *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !result )
            goto LABEL_1319;
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
        goto LABEL_1318;
      if ( !*v435 )
        goto LABEL_1319;
      result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidAliveQuestIds(
                                                           v173,
                                                           HIDWORD((*v435)->bounds),
                                                           HIDWORD(v178->_1.name),
                                                           0LL);
      QuestId_k__BackingField = 0;
      if ( !result )
        goto LABEL_1319;
      v180 = result->max_length;
      v181 = result;
      if ( v180 >= 1 )
      {
        v182 = 0;
        while ( 1 )
        {
          if ( v182 >= (unsigned int)v180 )
            goto LABEL_1318;
          v183 = *((_DWORD *)v181->m_Items + v182);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4183C7A )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
            byte_4183C7A = 1;
          }
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          }
          static_fields = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
          if ( v183 == static_fields->_QuestId_k__BackingField )
            break;
          v182 = QuestId_k__BackingField + 1;
          QuestId_k__BackingField = v182;
          v180 = v181->max_length;
          if ( v182 >= v180 )
            goto LABEL_433;
        }
        name_high = HIDWORD(v178->_1.name);
        if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          static_fields = TerminalPramsManager_TypeInfo->static_fields;
        }
        static_fields->clearBattleRaidId = name_high;
      }
LABEL_433:
      v176 = v445 + 1;
      v445 = v176;
      v174 = v175->max_length;
      if ( v176 >= v174 )
        goto LABEL_627;
    }
    v196 = TerminalPramsManager_TypeInfo;
    v197 = HIDWORD(v178->_1.name);
    goto LABEL_492;
  }
  result = (BattleResultComponent_resultData_array *)v443;
  if ( !v443 )
    goto LABEL_1319;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__isRaidDefeatCount(
                                                       (EventDetailEntity_o *)v443,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_array *)v443;
    if ( !v443 )
      goto LABEL_1319;
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventActivityPoint(
                                                         (EventDetailEntity_o *)v443,
                                                         0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !*p_max_length )
        goto LABEL_1318;
      if ( !*v435 )
        goto LABEL_1319;
      v192 = (int32_t)(*v435)->m_Items[42];
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4184734 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
        byte_4184734 = 1;
      }
      v193 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v193 = TerminalPramsManager_TypeInfo;
      }
      v193->static_fields->_EventActivityPointEffectState_k__BackingField = v192;
    }
    else
    {
      result = (BattleResultComponent_resultData_array *)v443;
      if ( !v443 )
        goto LABEL_1319;
      if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v443, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4184735 )
        {
          result = (BattleResultComponent_resultData_array *)sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
          byte_4184735 = 1;
        }
        v194 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v194 = TerminalPramsManager_TypeInfo;
        }
        if ( v194->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField )
        {
          v195 = 0;
        }
        else
        {
          if ( !*p_max_length )
            goto LABEL_1318;
          if ( !*v435 )
            goto LABEL_1319;
          bounds_high = HIDWORD((*v435)->bounds);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsUserEventStatus = CondType__IsUserEventStatus(bounds_high, 7, 0LL);
          v194 = TerminalPramsManager_TypeInfo;
          v195 = IsUserEventStatus;
        }
        if ( (BYTE3(v194->vtable._0_Equals.methodPtr) & 4) != 0 && !v194->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v194);
        if ( !byte_418470B )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
          byte_418470B = 1;
        }
        v207 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v207 = TerminalPramsManager_TypeInfo;
        }
        v207->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = v195;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)v443;
        if ( !v443 )
          goto LABEL_1319;
        result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPanel(
                                                             (EventDetailEntity_o *)v443,
                                                             0LL);
        if ( ((unsigned __int8)result & 1) != 0 )
        {
          if ( !*p_max_length )
            goto LABEL_1318;
          if ( !*v435 )
            goto LABEL_1319;
          v199 = (*v435)->m_Items[10];
          v445 = 0;
          if ( !v199 )
            goto LABEL_1319;
          v200 = (int)v199->fields.eventEndTitle;
          v201 = &qword_4183000;
          v202 = &qword_4183000;
          if ( v200 >= 1 )
          {
            v203 = 0;
            v201 = &qword_4183000;
            while ( 1 )
            {
              if ( v203 >= (unsigned int)v200 )
                goto LABEL_1318;
              if ( !v443 )
                goto LABEL_1319;
              v204 = *((_QWORD *)&v199->fields.eventEndMessage + v203);
              if ( !v204 )
                goto LABEL_1319;
              if ( v443->fields.id == *(_DWORD *)(v204 + 24) )
                break;
              v445 = ++v203;
              if ( v203 >= v200 )
                goto LABEL_603;
            }
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_418472F )
            {
              sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
              byte_418472F = 1;
            }
            v208 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v208 = TerminalPramsManager_TypeInfo;
            }
            if ( !v208->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
            {
              v209 = (EventSaveData_o *)sub_B2C42C(EventSaveData_TypeInfo);
              EventSaveData___ctor(v209, 0LL);
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_4184707 )
              {
                sub_B2C35C(&TerminalPramsManager_TypeInfo, v210);
                byte_4184707 = 1;
              }
              v211 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v211 = TerminalPramsManager_TypeInfo;
              }
              p_BeforeEventSubmarineSaveData_k__BackingField = &v211->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
              *p_BeforeEventSubmarineSaveData_k__BackingField = v209;
              sub_B2C2F8(p_BeforeEventSubmarineSaveData_k__BackingField, v209);
              v208 = TerminalPramsManager_TypeInfo;
            }
            if ( (BYTE3(v208->vtable._0_Equals.methodPtr) & 4) != 0 && !v208->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v208);
            if ( !byte_418472F )
            {
              sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
              byte_418472F = 1;
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
              goto LABEL_1319;
            LODWORD(limitImageAnnounces->bounds) = *(_DWORD *)(v204 + 24);
            if ( !byte_418472F )
            {
              sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              byte_418472F = 1;
            }
            if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
            {
              j_il2cpp_runtime_class_init_0(result);
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
            }
            result = (BattleResultComponent_resultData_array *)result->m_Items[19]->fields.limitImageAnnounces;
            if ( !result )
              goto LABEL_1319;
            result = (BattleResultComponent_resultData_array *)EventSaveData__GetValueByArray(
                                                                 (EventSaveData_o *)result,
                                                                 0x2Cu,
                                                                 0LL);
            if ( result )
            {
              v214 = result->max_length;
              v215 = (System_String_o **)&result->m_Items[1];
              if ( v214 <= 1 )
                v215 = (System_String_o **)&StringLiteral_953/*"0"*/;
              v216 = *v215;
              v217 = v214 <= 2 ? (System_String_o **)&StringLiteral_953/*"0"*/ : (System_String_o **)&result->m_Items[2];
              v218 = *v217;
              v219 = v214 <= 3 ? &StringLiteral_6584/*"False"*/ : (__int64 *)&result->m_Items[3];
            }
            else
            {
              v218 = (System_String_o *)StringLiteral_953/*"0"*/;
              v219 = &StringLiteral_6584/*"False"*/;
              v216 = (System_String_o *)StringLiteral_953/*"0"*/;
            }
            if ( !v443 )
              goto LABEL_1319;
            v220 = v443->fields.id;
            isLastGoalPlayed = (System_String_o *)*v219;
            if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
            }
            result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
                                                                 v220,
                                                                 0LL);
            v221 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)result;
            v222 = TerminalPramsManager___c_TypeInfo;
            if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
              v222 = TerminalPramsManager___c_TypeInfo;
            }
            v223 = v222->static_fields;
            _9__604_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v223->__9__604_0;
            if ( !_9__604_0 )
            {
              if ( (BYTE3(v222->vtable._0_Equals.methodPtr) & 4) != 0 && !v222->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v222);
                v223 = TerminalPramsManager___c_TypeInfo->static_fields;
              }
              v225 = (Il2CppObject *)v223->__9;
              _9__604_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_QuestReleaseEntity__TypeInfo);
              System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                _9__604_0,
                v225,
                Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__604_0__,
                (const MethodInfo_2952BE4 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
              v226 = TerminalPramsManager___c_TypeInfo->static_fields;
              v226->__9__604_0 = (struct System_Predicate_QuestReleaseEntity__o *)_9__604_0;
              sub_B2C2F8(&v226->__9__604_0, _9__604_0);
            }
            if ( !v221 )
              goto LABEL_1319;
            if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                   v221,
                   (System_Predicate_T__o *)_9__604_0,
                   (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
            {
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_4183C7A )
              {
                sub_B2C35C(&TerminalPramsManager_TypeInfo, v227);
                byte_4183C7A = 1;
              }
              v228 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v228 = TerminalPramsManager_TypeInfo;
              }
              QuestId_k__BackingField = v228->static_fields->_QuestId_k__BackingField;
              v216 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
            }
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_418472F )
            {
              sub_B2C35C(&TerminalPramsManager_TypeInfo, v227);
              byte_418472F = 1;
            }
            v229 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v229 = TerminalPramsManager_TypeInfo;
            }
            BeforeEventSubmarineSaveData_k__BackingField = v229->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
            v231 = System_Int64__ToString(v204 + 32, 0LL);
            if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
            }
            result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_22175660(
                                                                 v231,
                                                                 v216,
                                                                 v218,
                                                                 isLastGoalPlayed,
                                                                 0LL);
            v201 = &qword_4183000;
            if ( !BeforeEventSubmarineSaveData_k__BackingField )
              goto LABEL_1319;
            BeforeEventSubmarineSaveData_k__BackingField->fields.value = (struct System_String_o *)result;
            sub_B2C2F8(&BeforeEventSubmarineSaveData_k__BackingField->fields.value, result);
            v202 = &qword_4183000;
          }
LABEL_603:
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4183C7A )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
            byte_4183C7A = 1;
          }
          v232 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v232 = TerminalPramsManager_TypeInfo;
          }
          v233 = v232->static_fields->_QuestId_k__BackingField;
          if ( !byte_4183C7B )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
            v232 = TerminalPramsManager_TypeInfo;
            byte_4183C7B = 1;
          }
          if ( (BYTE3(v232->vtable._0_Equals.methodPtr) & 4) != 0 && !v232->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v232);
            v232 = TerminalPramsManager_TypeInfo;
          }
          PhaseCnt_k__BackingField = v232->static_fields->_PhaseCnt_k__BackingField;
          if ( !*((_BYTE *)v202 + 3212) )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
            v232 = TerminalPramsManager_TypeInfo;
            *((_BYTE *)v202 + 3212) = 1;
          }
          if ( (BYTE3(v232->vtable._0_Equals.methodPtr) & 4) != 0 && !v232->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v232);
            v232 = TerminalPramsManager_TypeInfo;
          }
          IsQuestClear_k__BackingField = v232->static_fields->_IsQuestClear_k__BackingField;
          if ( !*((_BYTE *)v201 + 3196) )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
            v232 = TerminalPramsManager_TypeInfo;
            *((_BYTE *)v201 + 3196) = 1;
          }
          if ( (BYTE3(v232->vtable._0_Equals.methodPtr) & 4) != 0 && !v232->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v232);
            v232 = TerminalPramsManager_TypeInfo;
          }
          SubmarineSaveParamsManager__SaveClearQuestInfo(
            v233,
            PhaseCnt_k__BackingField,
            IsQuestClear_k__BackingField,
            v232->static_fields->_IsPhaseClear_k__BackingField,
            0LL);
        }
      }
    }
    goto LABEL_627;
  }
  if ( !*p_max_length )
    goto LABEL_1318;
  if ( !*v435 )
    goto LABEL_1319;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                       v173,
                                                       HIDWORD((*v435)->bounds),
                                                       0LL);
  v445 = 0;
  if ( !result )
    goto LABEL_1319;
  v186 = result->max_length;
  v187 = result;
  if ( v186 >= 1 )
  {
    v188 = 0;
    while ( 1 )
    {
      if ( v188 >= (unsigned int)v186 || !*p_max_length )
        goto LABEL_1318;
      if ( !*v435 )
        goto LABEL_1319;
      v189 = v187->m_Items[v188];
      if ( !v189 )
        goto LABEL_1319;
      RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(v173, HIDWORD((*v435)->bounds), v189->fields.eventId, 0LL);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183C7A )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
        byte_4183C7A = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v191 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( RaidDeadQuestId == v191->_QuestId_k__BackingField )
        break;
      v188 = v445 + 1;
      v445 = v188;
      v186 = v187->max_length;
      if ( v188 >= v186 )
        goto LABEL_627;
    }
    eventId = v189->fields.eventId;
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      v191 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v191->clearBattleRaidId = eventId;
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    result = (BattleResultComponent_resultData_array *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !result )
      goto LABEL_1319;
    if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)result, RaidDeadQuestId, 0, 0LL) )
    {
      v196 = TerminalPramsManager_TypeInfo;
      v197 = v189->fields.eventId;
LABEL_492:
      if ( (BYTE3(v196->vtable._0_Equals.methodPtr) & 4) != 0 && !v196->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v196);
        v196 = TerminalPramsManager_TypeInfo;
      }
      v196->static_fields->clearLastBattleRaidId = v197;
    }
  }
LABEL_627:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C97 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    byte_4183C97 = 1;
  }
  v236 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v238 = v434;
    v237 = v435;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v236 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v238 = v434;
    v237 = v435;
  }
  v236->static_fields->_IsWarBoardClear_k__BackingField = 0;
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    v236 = TerminalPramsManager_TypeInfo;
    byte_4183C7A = 1;
  }
  if ( (BYTE3(v236->vtable._0_Equals.methodPtr) & 4) != 0 && !v236->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v236);
    v236 = TerminalPramsManager_TypeInfo;
  }
  if ( v236->static_fields->_QuestId_k__BackingField >= 1 )
  {
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1319;
    v239 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)result,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C7A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_4183C7A = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v239 )
      goto LABEL_1319;
    result = (BattleResultComponent_resultData_array *)QuestMaster__getQuestEntity(
                                                         v239,
                                                         result->m_Items[19]->fields.battleId,
                                                         0LL);
    if ( !result )
      goto LABEL_1319;
    v240 = (int)result->m_Items[1];
    if ( !byte_4183C97 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_4183C97 = 1;
    }
    v236 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v236 = TerminalPramsManager_TypeInfo;
    }
    v236->static_fields->_IsWarBoardClear_k__BackingField = v240 == 7;
  }
  if ( (BYTE3(v236->vtable._0_Equals.methodPtr) & 4) != 0 && !v236->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v236);
  if ( !byte_4184736 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    byte_4184736 = 1;
  }
  v241 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v241 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeRelease_k__BackingField = &v241->static_fields->_questClearCostumeRelease_k__BackingField;
  *p_questClearCostumeRelease_k__BackingField = 0LL;
  sub_B2C2F8(p_questClearCostumeRelease_k__BackingField, 0LL);
  if ( !*p_max_length )
    goto LABEL_1318;
  if ( !*v237 )
    goto LABEL_1319;
  v243 = (*v237)->m_Items[22];
  if ( v243 && v243->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C84 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_4183C84 = 1;
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
      if ( !*v237 )
        goto LABEL_1319;
      v244 = (struct CostumeReleaseAnnounce_array *)(*v237)->m_Items[22];
      if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4184736 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
        byte_4184736 = 1;
      }
      v245 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v245 = TerminalPramsManager_TypeInfo;
      }
      v246 = &v245->static_fields->_questClearCostumeRelease_k__BackingField;
      *v246 = v244;
      sub_B2C2F8(v246, v244);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C93 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    byte_4183C93 = 1;
  }
  v247 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v247 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeGet_k__BackingField = &v247->static_fields->_questClearCostumeGet_k__BackingField;
  *p_questClearCostumeGet_k__BackingField = 0LL;
  sub_B2C2F8(p_questClearCostumeGet_k__BackingField, 0LL);
  if ( !*p_max_length )
    goto LABEL_1318;
  if ( !*v237 )
    goto LABEL_1319;
  v249 = (*v237)->m_Items[23];
  if ( v249 && v249->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C93 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_4183C93 = 1;
    }
    v250 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v250 = TerminalPramsManager_TypeInfo;
    }
    v251 = &v250->static_fields->_questClearCostumeGet_k__BackingField;
    *v251 = (struct CostumeReleaseAnnounce_array *)v249;
    sub_B2C2F8(v251, v249);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184737 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    byte_4184737 = 1;
  }
  v252 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v252 = TerminalPramsManager_TypeInfo;
  }
  v253 = v252->static_fields;
  v253->_eventPointWinReward_k__BackingField = 0LL;
  sub_B2C2F8(&v253->_eventPointWinReward_k__BackingField, 0LL);
  if ( !byte_4184738 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    byte_4184738 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v254 = v238 == 0LL;
  HIDWORD(result->m_Items[19]->fields.resultEventTowerRewardInfos) = 0;
  if ( v443 && v238 && *(&v443[1].fields.id + 1) == 4 )
  {
    if ( !v434 )
      goto LABEL_1319;
    v255 = v434->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1319;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !result )
      goto LABEL_1319;
    v256 = (QuestGroupMaster_o *)result;
    GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)result, v255, 4, 0LL);
    v258 = TerminalPramsManager_TypeInfo;
    v259 = GroupId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v258 = TerminalPramsManager_TypeInfo;
    }
    v258->static_fields->joinGroupId = v259;
    v260 = QuestGroupMaster__GetGroupId(v256, v255, 3, 0LL);
    if ( !byte_4183C8C )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_4183C8C = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( v260 >= 1 && BYTE4(result->m_Items[19]->fields.oldUserEquip) )
    {
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1319;
      v261 = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)result,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1319;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPointMaster___);
      if ( !*p_max_length )
        goto LABEL_1318;
      if ( !*v435 || !result )
        goto LABEL_1319;
      result = (BattleResultComponent_resultData_array *)EventPointMaster__GetEntity(
                                                           (EventPointMaster_o *)result,
                                                           v260,
                                                           HIDWORD((*v435)->bounds),
                                                           0LL);
      v262 = (EventPointEntity_o *)result;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !v262 )
        goto LABEL_1319;
      result = (BattleResultComponent_resultData_array *)EventPointEntity__IsGroupOnGroup1(
                                                           v262,
                                                           TerminalPramsManager_TypeInfo->static_fields->joinGroupId,
                                                           0LL);
      if ( !v261 )
        goto LABEL_1319;
      v263 = QuestReleaseMaster__EventPointWinActionType(v261, v255, (unsigned __int8)result & 1, 0LL);
      if ( !byte_4184738 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
        byte_4184738 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(result->m_Items[19]->fields.resultEventTowerRewardInfos) = v263;
      if ( !byte_4184739 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        byte_4184739 = 1;
      }
      if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v264 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( v264->_eventPointWinType_k__BackingField )
      {
        if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          v264 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v264->joinGroupId = -1;
      }
    }
    if ( !*p_max_length )
      goto LABEL_1318;
    if ( *v435 )
    {
      v265 = (*v435)->m_Items[20];
      if ( v265 )
      {
        v266 = v265->fields.eventEndTitle;
        if ( v266 )
        {
          if ( !(_DWORD)v266 )
            goto LABEL_1318;
          v267 = v265->fields.eventEndMessage;
          if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
            j_il2cpp_runtime_class_init_0(result);
          if ( !byte_4184737 )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
            byte_4184737 = 1;
          }
          v268 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v268 = TerminalPramsManager_TypeInfo;
          }
          v269 = v268->static_fields;
          v269->_eventPointWinReward_k__BackingField = (struct EventPointWinReward_o *)v267;
          sub_B2C2F8(&v269->_eventPointWinReward_k__BackingField, v267);
        }
      }
      goto LABEL_780;
    }
LABEL_1319:
    sub_B2C434(result, isWin);
  }
LABEL_780:
  v270 = v443 == 0LL || v254;
  v271 = v435;
  if ( !v270 && *(&v443[1].fields.id + 1) == 6 )
  {
    if ( !v434 )
      goto LABEL_1319;
    v272 = v434->fields.questId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_418473A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_418473A = 1;
    }
    v273 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v273 = TerminalPramsManager_TypeInfo;
    }
    v273->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = v272;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418473B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    byte_418473B = 1;
  }
  v274 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v274 = TerminalPramsManager_TypeInfo;
  }
  v275 = v274->static_fields;
  v275->_eventRaceBoost_k__BackingField = 0LL;
  sub_B2C2F8(&v275->_eventRaceBoost_k__BackingField, 0LL);
  v276 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1318;
  if ( !*v435 )
    goto LABEL_1319;
  v277 = (*v435)->m_Items[21];
  if ( v277 && v277->fields.battleId >= 1 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_418473B )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_418473B = 1;
    }
    v278 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v278 = TerminalPramsManager_TypeInfo;
    }
    v279 = v278->static_fields;
    v279->_eventRaceBoost_k__BackingField = (struct EventRaceBoostInfo_o *)v277;
    sub_B2C2F8(&v279->_eventRaceBoost_k__BackingField, v277);
    if ( !byte_418473C )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_418473C = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfos = result->m_Items[19]->fields.resultEventBoardGameTokenRewardInfos;
    if ( !byte_4183C7A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4183C7A = 1;
    }
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !resultEventBoardGameTokenRewardInfos )
      goto LABEL_1319;
    *(&resultEventBoardGameTokenRewardInfos->max_length + 1) = result->m_Items[19]->fields.battleId;
    v276 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v276 )
    goto LABEL_1318;
  if ( !*v435 )
    goto LABEL_1319;
  v281 = (*v435)->m_Items[24];
  if ( v281 )
  {
    v282 = v281->fields.eventEndTitle;
    if ( v282 )
    {
      if ( !(_DWORD)v282 )
        goto LABEL_1318;
      v283 = (struct EventTowerReward_o *)v281->fields.eventEndMessage;
      if ( !v283 )
        goto LABEL_1319;
      if ( v283->fields.eventId >= 1 )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_418473D )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
          byte_418473D = 1;
        }
        v284 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v284 = TerminalPramsManager_TypeInfo;
        }
        p_eventTowerReward_k__BackingField = &v284->static_fields->_eventTowerReward_k__BackingField;
        *p_eventTowerReward_k__BackingField = v283;
        sub_B2C2F8(p_eventTowerReward_k__BackingField, v283);
        if ( !*p_max_length )
          goto LABEL_1318;
        if ( *v435 )
        {
          v286 = (*v435)->m_Items[25];
          if ( !byte_418473E )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
            byte_418473E = 1;
          }
          v287 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v287 = TerminalPramsManager_TypeInfo;
          }
          p_resultEventTowerRewardInfo_k__BackingField = &v287->static_fields->_resultEventTowerRewardInfo_k__BackingField;
          *p_resultEventTowerRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)v286;
          sub_B2C2F8(p_resultEventTowerRewardInfo_k__BackingField, v286);
          v276 = *(_QWORD *)p_max_length;
          goto LABEL_847;
        }
        goto LABEL_1319;
      }
    }
  }
LABEL_847:
  if ( !(_DWORD)v276 )
    goto LABEL_1321;
  if ( !*v435 )
    goto LABEL_1320;
  v289 = (*v435)->m_Items[26];
  if ( v289 && v289->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C89 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_4183C89 = 1;
    }
    v290 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v290 = TerminalPramsManager_TypeInfo;
    }
    p_resultBoostItemRewardInfo_k__BackingField = &v290->static_fields->_resultBoostItemRewardInfo_k__BackingField;
    *p_resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)v289;
    sub_B2C2F8(p_resultBoostItemRewardInfo_k__BackingField, v289);
    v276 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v276 )
    goto LABEL_1321;
  if ( !*v435 )
    goto LABEL_1320;
  v292 = (*v435)->m_Items[27];
  if ( v292 && v292->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C8A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_4183C8A = 1;
    }
    v293 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v293 = TerminalPramsManager_TypeInfo;
    }
    p_resultEventBoardGameTokenRewardInfo_k__BackingField = &v293->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
    *p_resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)v292;
    sub_B2C2F8(p_resultEventBoardGameTokenRewardInfo_k__BackingField, v292);
    v276 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v276 )
    goto LABEL_1321;
  if ( !*v435 )
    goto LABEL_1320;
  v295 = (*v435)->m_Items[28];
  if ( v295 && v295->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C9A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_4183C9A = 1;
    }
    v296 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v296 = TerminalPramsManager_TypeInfo;
    }
    p_warClearReward_k__BackingField = &v296->static_fields->_warClearReward_k__BackingField;
    *p_warClearReward_k__BackingField = (struct WarClearReward_array *)v295;
    sub_B2C2F8(p_warClearReward_k__BackingField, v295);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418473F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    byte_418473F = 1;
  }
  v298 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v298 = TerminalPramsManager_TypeInfo;
  }
  v299 = v298->static_fields;
  v299->_oldSuperBoss_k__BackingField = 0LL;
  sub_B2C2F8(&v299->_oldSuperBoss_k__BackingField, 0LL);
  if ( !byte_4184740 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v300);
    byte_4184740 = 1;
  }
  v301 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v301 = TerminalPramsManager_TypeInfo;
  }
  v302 = v301->static_fields;
  v302->_oldPersonalBoss_k__BackingField = 0LL;
  sub_B2C2F8(&v302->_oldPersonalBoss_k__BackingField, 0LL);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v303 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    byte_4183C7A = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v303 )
    goto LABEL_1320;
  WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(v303, result->m_Items[19]->fields.battleId, 0LL);
  result = (BattleResultComponent_resultData_array *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !result )
    goto LABEL_1320;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)result, WarID_ByQuestID, 0LL);
  if ( WarEntityByWarID )
    v306 = WarEntityByWarID->fields.eventId;
  else
    v306 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !result )
    goto LABEL_1320;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)result,
                                                       &v441,
                                                       v306,
                                                       (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( v432 )
    goto LABEL_1326;
  if ( !*p_max_length )
    goto LABEL_1321;
  result = *v435;
  if ( !*v435 )
    goto LABEL_1320;
  result = (BattleResultComponent_resultData_array *)BattleResultComponent_resultData__checkResultDispFlag(
                                                       (BattleResultComponent_resultData_o *)result,
                                                       256,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
LABEL_1326:
    v307 = *(_QWORD *)p_max_length;
    if ( !(unsigned int)*(_QWORD *)p_max_length )
      goto LABEL_1321;
    if ( !*v435 )
      goto LABEL_1320;
    if ( (*v435)->m_Items[41] )
    {
      result = (BattleResultComponent_resultData_array *)v441;
      if ( v441
        && (result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsPersonalBoss(
                                                                 (EventDetailEntity_o *)v441,
                                                                 0LL),
            v307 = *(_QWORD *)p_max_length,
            ((unsigned __int8)result & 1) != 0) )
      {
        if ( !(_DWORD)v307 )
          goto LABEL_1321;
        if ( !*v435 )
          goto LABEL_1320;
        v308 = (*v435)->m_Items[41];
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4184740 )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
          byte_4184740 = 1;
        }
        v309 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v309 = TerminalPramsManager_TypeInfo;
        }
        v310 = v309->static_fields;
        v310->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v308;
        p_oldPersonalBoss_k__BackingField = &v310->_oldPersonalBoss_k__BackingField;
      }
      else
      {
        if ( !(_DWORD)v307 )
          goto LABEL_1321;
        if ( !*v435 )
          goto LABEL_1320;
        v308 = (*v435)->m_Items[41];
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_418473F )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
          byte_418473F = 1;
        }
        v312 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v312 = TerminalPramsManager_TypeInfo;
        }
        v313 = v312->static_fields;
        v313->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v308;
        p_oldPersonalBoss_k__BackingField = &v313->_oldSuperBoss_k__BackingField;
      }
      sub_B2C2F8(p_oldPersonalBoss_k__BackingField, v308);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184741 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    byte_4184741 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !result->m_Items[19]->fields.raceResult )
    goto LABEL_1327;
  if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4184741 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    byte_4184741 = 1;
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
    goto LABEL_1320;
  if ( *(_QWORD *)&raceResult->fields.addPoint )
  {
    v315 = 1;
  }
  else
  {
LABEL_1327:
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_4183C7A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_4183C7A = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v316 = BalanceConfig_TypeInfo;
    battleId = result->m_Items[19]->fields.battleId;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v316 = BalanceConfig_TypeInfo;
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v315 = battleId == v316->static_fields->OrtFirstQuestId;
  }
  if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4183CA9 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    byte_4183CA9 = 1;
  }
  v318 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v318 = TerminalPramsManager_TypeInfo;
  }
  v318->static_fields->_isIncomingCall_k__BackingField = v315;
  if ( v441 && EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)v441, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C7A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v319);
      byte_4183C7A = 1;
    }
    v320 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v320 = TerminalPramsManager_TypeInfo;
    }
    v321 = BalanceConfig_TypeInfo;
    v322 = v320->static_fields->_QuestId_k__BackingField;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v321 = BalanceConfig_TypeInfo;
    }
    if ( v322 == v321->static_fields->OrtLateQuestId )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183C7B )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v319);
        byte_4183C7B = 1;
      }
      v323 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v323 = TerminalPramsManager_TypeInfo;
      }
      v324 = BalanceConfig_TypeInfo;
      v325 = v323->static_fields->_PhaseCnt_k__BackingField;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v324 = BalanceConfig_TypeInfo;
      }
      if ( v325 + 1 == v324->static_fields->OrtLatePhaseBreak )
        goto LABEL_1328;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183C7B )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v319);
        byte_4183C7B = 1;
      }
      v326 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v326 = TerminalPramsManager_TypeInfo;
      }
      v327 = BalanceConfig_TypeInfo;
      v328 = v326->static_fields->_PhaseCnt_k__BackingField;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v327 = BalanceConfig_TypeInfo;
      }
      if ( v328 + 1 == v327->static_fields->OrtLatePhaseDead )
      {
LABEL_1328:
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v329 = (UserSuperBossMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserSuperBossMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
        v330 = result;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        }
        if ( !v329 )
          goto LABEL_1320;
        if ( UserSuperBossMaster__TryGetEntity(
               v329,
               &v440,
               (int64_t)v330,
               v306,
               BalanceConfig_TypeInfo->static_fields->OrtThirdFormId,
               0LL) )
        {
          result = (BattleResultComponent_resultData_array *)sub_B2C374(UserSuperBossEntity___TypeInfo, 1LL);
          if ( !result )
            goto LABEL_1320;
          v331 = v440;
          v332 = result;
          if ( v440 )
          {
            result = (BattleResultComponent_resultData_array *)sub_B2C41C(v440, result->obj.klass->_1.element_class);
            if ( !result )
              goto LABEL_1323;
          }
          if ( !v332->max_length )
            goto LABEL_1321;
          v332->m_Items[0] = (BattleResultComponent_resultData_o *)v331;
          sub_B2C2F8(v332->m_Items, v331);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4184740 )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, v333);
            byte_4184740 = 1;
          }
          v334 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v334 = TerminalPramsManager_TypeInfo;
          }
          v335 = v334->static_fields;
          v335->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v332;
          sub_B2C2F8(&v335->_oldPersonalBoss_k__BackingField, v332);
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
    v337 = TalkResumeInfo;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1320;
    v338 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)result,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C7A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_4183C7A = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v338 )
      goto LABEL_1320;
    ScriptQuestId = QuestMaster__getScriptQuestId(v338, result->m_Items[19]->fields.battleId, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !byte_4183C7B )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v340);
      byte_4183C7B = 1;
    }
    v342 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v342 = TerminalPramsManager_TypeInfo;
    }
    v343 = v342->static_fields->_PhaseCnt_k__BackingField;
    winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v337, 0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd2(
                                                         ScriptQuestId,
                                                         v343 + 1,
                                                         winResult,
                                                         0LL);
    if ( !Instance )
      goto LABEL_1320;
    v271 = v435;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)Instance, (System_String_o *)result, 0LL) )
      goto LABEL_1087;
    v346 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C7B )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v345);
      byte_4183C7B = 1;
    }
    v347 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v347 = TerminalPramsManager_TypeInfo;
    }
    v348 = v347->static_fields->_PhaseCnt_k__BackingField;
    v349 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v337, 0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd(
                                                         ScriptQuestId,
                                                         v348 + 1,
                                                         v349,
                                                         0LL);
    if ( !v346 )
      goto LABEL_1320;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v346, (System_String_o *)result, 0LL) )
    {
LABEL_1087:
      v350 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v350 = TerminalPramsManager_TypeInfo;
      }
      p_lastPlayBgmName = &v350->static_fields->lastPlayBgmName;
      v352 = StringLiteral_1/*""*/;
      *p_lastPlayBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B2C2F8(p_lastPlayBgmName, v352);
      TerminalPramsManager__LastPlayBgmNameSave_SaveData(v353);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1320;
  v354 = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)result,
                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    byte_4183C7A = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v355 = result->m_Items[19]->fields.battleId;
  if ( !byte_4183C7B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4183C7B = 1;
  }
  if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v354 )
    goto LABEL_1320;
  QuestPhaseMaster__TryGetEntity(v354, &v446, v355, result->m_Items[19]->fields.eventId + 1, 0LL);
  if ( !byte_4184742 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    byte_4184742 = 1;
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
    if ( !byte_4184742 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_4184742 = 1;
    }
    v356 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v356 = TerminalPramsManager_TypeInfo;
    }
    result = (BattleResultComponent_resultData_array *)v356->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
    if ( !result )
      goto LABEL_1320;
    SpecifiedSceneInfo__InitParameter((SpecifiedSceneInfo_o *)result, 0LL);
  }
  if ( !*p_max_length )
    goto LABEL_1321;
  if ( !*v271 )
LABEL_1320:
    sub_B2C434(result, isWin);
  v357 = HIDWORD((*v271)->bounds);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    byte_4183C7A = 1;
  }
  v358 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v358 = TerminalPramsManager_TypeInfo;
  }
  v359 = v358->static_fields->_QuestId_k__BackingField;
  if ( !byte_4183C7B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    v358 = TerminalPramsManager_TypeInfo;
    byte_4183C7B = 1;
  }
  if ( (BYTE3(v358->vtable._0_Equals.methodPtr) & 4) != 0 && !v358->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v358);
    v358 = TerminalPramsManager_TypeInfo;
  }
  SpecifiedSceneInfo = QuestPhaseMaster__GetSpecifiedSceneInfo(
                         v354,
                         v357,
                         v359,
                         v358->static_fields->_PhaseCnt_k__BackingField + 1,
                         0LL);
  if ( !byte_4184708 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v360);
    byte_4184708 = 1;
  }
  v362 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v362 = TerminalPramsManager_TypeInfo;
  }
  v363 = v362->static_fields;
  v363->_SpecifiedChangeSceneInfo_k__BackingField = SpecifiedSceneInfo;
  sub_B2C2F8(&v363->_SpecifiedChangeSceneInfo_k__BackingField, SpecifiedSceneInfo);
  v364 = TerminalPramsManager_TypeInfo;
  TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId = 0;
  v364->static_fields->TipsArchiveCurrrentTab = 0;
  TerminalPramsManager__InitTipsArchiveScrollValueList(v365);
  if ( !*p_max_length )
    goto LABEL_1321;
  if ( !*v271 )
    goto LABEL_1320;
  v366 = (int32_t)(*v271)->m_Items[52];
  v367 = TerminalPramsManager_TypeInfo;
  if ( v366 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C86 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_4183C86 = 1;
    }
    v367 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v367 = TerminalPramsManager_TypeInfo;
    }
    v367->static_fields->_EventMuralId_k__BackingField = v366;
  }
  if ( (BYTE3(v367->vtable._0_Equals.methodPtr) & 4) != 0 && !v367->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v367);
    v367 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = &v367->static_fields->eventHarvestGrowthInfo;
  *p_eventHarvestGrowthInfo = 0LL;
  sub_B2C2F8(p_eventHarvestGrowthInfo, 0LL);
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v369);
    byte_4183C7A = 1;
  }
  v370 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v370 = TerminalPramsManager_TypeInfo;
  }
  result = (BattleResultComponent_resultData_array *)QuestPhaseMaster__GetEntity(
                                                       v354,
                                                       v370->static_fields->_QuestId_k__BackingField,
                                                       1,
                                                       0LL);
  if ( !result )
    goto LABEL_1320;
  v371 = (QuestPhaseEntity_o *)result;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(
                     (QuestPhaseEntity_o *)result,
                     (System_String_o *)StringLiteral_19111/*"harvestGrowthBeforeQuestId"*/,
                     -1,
                     0LL);
  v373 = QuestPhaseEntity__getScriptIntParam(v371, (System_String_o *)StringLiteral_19110/*"harvestGrowthAfterQuestId"*/, -1, 0LL);
  if ( ScriptIntParam >= 1 )
  {
    v374 = v373;
    if ( v373 >= 1 )
    {
      v375 = (EventHarvestGrowthInfo_o *)sub_B2C42C(EventHarvestGrowthInfo_TypeInfo);
      EventHarvestGrowthInfo___ctor(v375, 0LL);
      if ( !v375 )
        goto LABEL_1320;
      v375->fields.questId = v371->fields.questId;
      phase = v371->fields.phase;
      v375->fields.afterQuestId = v374;
      v375->fields.phase = phase;
      v375->fields.beforeQuestId = ScriptIntParam;
      v377 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v377 = TerminalPramsManager_TypeInfo;
      }
      v378 = &v377->static_fields->eventHarvestGrowthInfo;
      *v378 = v375;
      sub_B2C2F8(v378, v375);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1320;
  v379 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)result,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
    byte_4183C7A = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v379 )
    goto LABEL_1320;
  QuestEntity = QuestMaster__getQuestEntity(v379, result->m_Items[19]->fields.battleId, 0LL);
  if ( QuestEntity )
  {
    v381 = QuestEntity;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C7A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_4183C7A = 1;
    }
    v382 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v382 = TerminalPramsManager_TypeInfo;
    }
    if ( QuestPhaseMaster__IsAreaImproveQuest(v354, v382->static_fields->_QuestId_k__BackingField, 0LL) )
    {
      SpotId = QuestEntity__getSpotId(v381, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
      if ( *p_max_length )
      {
        if ( !*v271 || !result )
          goto LABEL_1320;
        CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                               (UserEventCooltimeRewardMaster_o *)result,
                               HIDWORD((*v271)->bounds),
                               SpotId,
                               0LL);
        if ( CurrentLevelEntity )
        {
          v385 = CurrentLevelEntity;
          v386 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v386 = TerminalPramsManager_TypeInfo;
          }
          eventAreaImproveResultInfo = v386->static_fields->eventAreaImproveResultInfo;
          if ( eventAreaImproveResultInfo )
          {
            if ( (BYTE3(v386->vtable._0_Equals.methodPtr) & 4) != 0 && !v386->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v386);
              eventAreaImproveResultInfo = TerminalPramsManager_TypeInfo->static_fields->eventAreaImproveResultInfo;
              if ( !eventAreaImproveResultInfo )
                goto LABEL_1320;
            }
            eventAreaImproveResultInfo->fields.afterLevel = v385->fields.lv;
          }
        }
        goto LABEL_1205;
      }
LABEL_1321:
      v428 = sub_B2C460(result);
      sub_B2C400(v428, 0LL);
    }
  }
LABEL_1205:
  result = (BattleResultComponent_resultData_array *)v446;
  if ( v446 )
  {
    result = (BattleResultComponent_resultData_array *)QuestPhaseEntity__GetMoveSceneInfo(v446, 0LL);
    if ( !result )
      goto LABEL_1320;
    if ( *(_QWORD *)&result->max_length )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183C7A )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
        byte_4183C7A = 1;
      }
      v388 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v388 = TerminalPramsManager_TypeInfo;
      }
      v445 = v388->static_fields->_QuestId_k__BackingField;
      v390 = System_Int32__ToString((int32_t)&v445, 0LL);
      if ( !byte_4183C7B )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v389);
        byte_4183C7B = 1;
      }
      v391 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v391 = TerminalPramsManager_TypeInfo;
      }
      v445 = v391->static_fields->_PhaseCnt_k__BackingField + 1;
      v392 = System_Int32__ToString((int32_t)&v445, 0LL);
      v394 = System_String__Concat_44307816(v390, (System_String_o *)StringLiteral_699/*","*/, v392, 0LL);
      if ( !byte_418471C )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v393);
        byte_418471C = 1;
      }
      v395 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v395 = TerminalPramsManager_TypeInfo;
      }
      p_SceneMoveQuestClearedInfo_k__BackingField = &v395->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
      *p_SceneMoveQuestClearedInfo_k__BackingField = v394;
      sub_B2C2F8(p_SceneMoveQuestClearedInfo_k__BackingField, v394);
    }
  }
  if ( !*p_max_length )
    goto LABEL_1321;
  if ( !*v271 )
    goto LABEL_1320;
  v397 = (*v271)->m_Items[47];
  if ( v397 && v397->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C8E )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isWin);
      byte_4183C8E = 1;
    }
    v398 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v398 = TerminalPramsManager_TypeInfo;
    }
    p_limitImageAnnounces_k__BackingField = &v398->static_fields->_limitImageAnnounces_k__BackingField;
    *p_limitImageAnnounces_k__BackingField = (struct LimitImageAnnounce_array *)v397;
    sub_B2C2F8(p_limitImageAnnounces_k__BackingField, v397);
  }
  v401 = (System_String_array *)sub_B2C374(string___TypeInfo, 7LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v400);
    byte_4183C7A = 1;
  }
  v402 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v403 = &qword_4183000;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v402 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v403 = &qword_4183000;
  }
  v445 = v402->static_fields->_QuestId_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v445, 0LL);
  if ( !v401 )
    goto LABEL_1320;
  v404 = result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B2C41C(result, v401->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1323;
  }
  if ( !v401->max_length )
    goto LABEL_1321;
  v401->m_Items[0] = (System_String_o *)v404;
  sub_B2C2F8(v401->m_Items, v404);
  result = (BattleResultComponent_resultData_array *)StringLiteral_699/*","*/;
  if ( StringLiteral_699/*","*/ )
  {
    result = (BattleResultComponent_resultData_array *)sub_B2C41C(StringLiteral_699/*","*/, v401->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1323;
    v405 = StringLiteral_699/*","*/;
  }
  else
  {
    v405 = 0LL;
  }
  if ( v401->max_length <= 1 )
    goto LABEL_1321;
  v401->m_Items[1] = (System_String_o *)v405;
  sub_B2C2F8(&v401->m_Items[1], v405);
  if ( !byte_4183C7B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v406);
    byte_4183C7B = 1;
  }
  v407 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v407 = TerminalPramsManager_TypeInfo;
  }
  v445 = v407->static_fields->_PhaseCnt_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v445, 0LL);
  v408 = result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B2C41C(result, v401->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1323;
  }
  if ( v401->max_length <= 2 )
    goto LABEL_1321;
  v401->m_Items[2] = (System_String_o *)v408;
  sub_B2C2F8(&v401->m_Items[2], v408);
  result = (BattleResultComponent_resultData_array *)StringLiteral_699/*","*/;
  if ( StringLiteral_699/*","*/ )
  {
    result = (BattleResultComponent_resultData_array *)sub_B2C41C(StringLiteral_699/*","*/, v401->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1323;
    v409 = StringLiteral_699/*","*/;
  }
  else
  {
    v409 = 0LL;
  }
  if ( v401->max_length <= 3 )
    goto LABEL_1321;
  v401->m_Items[3] = (System_String_o *)v409;
  sub_B2C2F8(&v401->m_Items[3], v409);
  if ( !*((_BYTE *)v403 + 3212) )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v410);
    *((_BYTE *)v403 + 3212) = 1;
  }
  v411 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v411 = TerminalPramsManager_TypeInfo;
  }
  v439[0] = v411->static_fields->_IsQuestClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v439, 0LL);
  v412 = result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B2C41C(result, v401->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1323;
  }
  if ( v401->max_length <= 4 )
    goto LABEL_1321;
  v401->m_Items[4] = (System_String_o *)v412;
  sub_B2C2F8(&v401->m_Items[4], v412);
  result = (BattleResultComponent_resultData_array *)StringLiteral_699/*","*/;
  if ( StringLiteral_699/*","*/ )
  {
    result = (BattleResultComponent_resultData_array *)sub_B2C41C(StringLiteral_699/*","*/, v401->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1323;
    v413 = StringLiteral_699/*","*/;
  }
  else
  {
    v413 = 0LL;
  }
  if ( v401->max_length <= 5 )
    goto LABEL_1321;
  v401->m_Items[5] = (System_String_o *)v413;
  sub_B2C2F8(&v401->m_Items[5], v413);
  if ( !byte_4183C7C )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v414);
    byte_4183C7C = 1;
  }
  v415 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v415 = TerminalPramsManager_TypeInfo;
  }
  v439[0] = v415->static_fields->_IsPhaseClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v439, 0LL);
  v416 = result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B2C41C(result, v401->obj.klass->_1.element_class);
    if ( !result )
    {
LABEL_1323:
      v430 = sub_B2C454();
      sub_B2C400(v430, 0LL);
    }
  }
  if ( v401->max_length <= 6 )
    goto LABEL_1321;
  v401->m_Items[6] = (System_String_o *)v416;
  sub_B2C2F8(&v401->m_Items[6], v416);
  v417 = System_String__Concat_44385656(v401, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_16287/*"afterActionBk"*/, v417, 0LL);
  TerminalPramsManager__SaveClearDatas(resulta, v418);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v419);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v420);
  TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(v421);
  TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(v422);
  if ( TerminalPramsManager__IsTerminalEffectNT2BoardOpen(v423) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C69 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v424);
      byte_4183C69 = 1;
    }
    v425 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v425 = TerminalPramsManager_TypeInfo;
    }
    v425->static_fields->_WarId_k__BackingField = 0;
    if ( !byte_4183C70 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v424);
      byte_4183C70 = 1;
    }
    v426 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v426 = TerminalPramsManager_TypeInfo;
    }
    v426->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4183C71 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v424);
      v426 = TerminalPramsManager_TypeInfo;
      byte_4183C71 = 1;
    }
    if ( (BYTE3(v426->vtable._0_Equals.methodPtr) & 4) != 0 && !v426->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v426);
      v426 = TerminalPramsManager_TypeInfo;
    }
    v426->static_fields->_IsMapReturnFolder_k__BackingField = 0;
    if ( !byte_418470F )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v424);
      v426 = TerminalPramsManager_TypeInfo;
      byte_418470F = 1;
    }
    if ( (BYTE3(v426->vtable._0_Equals.methodPtr) & 4) != 0 && !v426->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v426);
      v426 = TerminalPramsManager_TypeInfo;
    }
    v426->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData((const MethodInfo *)v426);
  }
}


void __fastcall TerminalPramsManager__ResetBlankEarthSpotInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  const MethodInfo *v2; // x0

  if ( (byte_4184654 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184654 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_41846F7 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41846F7 = 1;
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

  if ( (byte_418465A & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418465A = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_41846F8 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41846F8 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_QuestMessageScriptQuestId_k__BackingField = -1;
  if ( !byte_41846F9 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    v2 = TerminalPramsManager_TypeInfo;
    byte_41846F9 = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = -1;
  if ( !byte_41846FA )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    v2 = TerminalPramsManager_TypeInfo;
    byte_41846FA = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  p_TalkScriptInfo_k__BackingField = &v2->static_fields->_TalkScriptInfo_k__BackingField;
  *p_TalkScriptInfo_k__BackingField = 0LL;
  sub_B2C2F8(p_TalkScriptInfo_k__BackingField, 0LL);
  if ( !byte_41846FB )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v4);
    byte_41846FB = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x22
  TerminalPramsManager_c *v7; // x0
  _BOOL8 v8; // x0
  BattleResultComponent_resultData_o *v9; // x0
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct TerminalPramsManager_StaticFields *v12; // x8
  _BOOL4 IsPhaseClear_k__BackingField; // w21
  _BOOL4 IsDispOnly_k__BackingField; // w27
  struct TerminalPramsManager_StaticFields *v15; // x8
  _BOOL4 IsWarBoardClear_k__BackingField; // w25
  _BOOL4 IsOrdealCallWarClear_k__BackingField; // w24
  QuestRewardInfo_array *v18; // x23
  bool isWarBoardClear; // w19
  bool v20; // zf
  int32_t eventMuralId; // w21
  bool v22; // w26
  TerminalPramsManager_ClearData_o *v23; // x25
  __int64 v24; // x1
  TerminalPramsManager_c *v25; // x0
  TerminalPramsManager_ClearData_c *v26; // x0
  System_String_o *SAVEKEY_CLEAR_REWARD_DISP; // x19
  System_String_o *v28; // x1
  __int64 v29; // x0
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

  if ( (byte_4184694 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_ClearData_TypeInfo, method);
    sub_B2C35C(&JsonManager_TypeInfo, v3);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v4);
    byte_4184694 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v5->static_fields->mQuestRewardInfos;
  if ( result )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    if ( !byte_4183C7A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
      byte_4183C7A = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v8 = TerminalPramsManager__IsFreeQuestOnOrdealCall(v7->static_fields->_QuestId_k__BackingField, method);
    if ( v8 )
    {
      if ( !result->max_length )
      {
        v29 = sub_B2C460(v8);
        sub_B2C400(v29, 0LL);
      }
      v9 = result->m_Items[0];
      if ( !v9 )
        sub_B2C434(0LL, method);
      if ( BattleResultComponent_resultData__checkResultDispFlag(v9, 2048, 0LL) )
        mQuestRewardInfos = 0LL;
    }
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  mQuestClearHeroineInfo = static_fields->mQuestClearHeroineInfo;
  mQuestPhaseRewardInfos = static_fields->mQuestPhaseRewardInfos;
  if ( !byte_4183C8C )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4183C8C = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  IsQuestClear_k__BackingField = v10->static_fields->_IsQuestClear_k__BackingField;
  if ( !byte_4183C7C )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4183C7C = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v12 = v10->static_fields;
  IsPhaseClear_k__BackingField = v12->_IsPhaseClear_k__BackingField;
  clearLastBattleRaidId = v12->clearLastBattleRaidId;
  clearBattleRaidId = v12->clearBattleRaidId;
  groupjoin = v12->joinGroupId;
  if ( !byte_4184743 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4184743 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  oldSuperBoss = v10->static_fields->_oldSuperBoss_k__BackingField;
  if ( !byte_4184741 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4184741 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss = v10->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !byte_4184744 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4184744 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evpWinReward = v10->static_fields->_eventPointWinReward_k__BackingField;
  if ( !byte_4184739 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4184739 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evpWinType = v10->static_fields->_eventPointWinType_k__BackingField;
  if ( !byte_418473C )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_418473C = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evRace = v10->static_fields->_eventRaceBoost_k__BackingField;
  if ( !byte_4183C8B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4183C8B = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeRelease = v10->static_fields->_questClearCostumeRelease_k__BackingField;
  if ( !byte_4183C83 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4183C83 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeGet = v10->static_fields->_questClearCostumeGet_k__BackingField;
  if ( !byte_4183C87 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4183C87 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evTowerReward = v10->static_fields->_eventTowerReward_k__BackingField;
  if ( !byte_4184745 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4184745 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  resultEvTowerRewardInfo = v10->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  if ( !byte_4183C79 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4183C79 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  IsDispOnly_k__BackingField = v10->static_fields->_IsDispOnly_k__BackingField;
  if ( !byte_4183C99 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4183C99 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  warClearRewardIn = v10->static_fields->_warClearReward_k__BackingField;
  if ( !byte_4184746 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4184746 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventActivityPointEffectState = v10->static_fields->_EventActivityPointEffectState_k__BackingField;
  if ( !byte_4183C84 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4183C84 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v15 = v10->static_fields;
  IsWarBoardClear_k__BackingField = v15->_IsWarBoardClear_k__BackingField;
  questResultAfterEventRewardInfos = v15->mQuestResultAfterEventRewardInfos;
  resultEventPanelRewardInfos = v15->mResultEventPanelRewardInfos;
  panelEventPoint = v15->panelEventPoint;
  if ( !byte_4183C8D )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4183C8D = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  limitImageAnnounces = v10->static_fields->_limitImageAnnounces_k__BackingField;
  if ( !byte_4183C81 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4183C81 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  IsOrdealCallWarClear_k__BackingField = v10->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4183C85 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4183C85 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v18 = mQuestRewardInfos;
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v18 = mQuestRewardInfos;
  }
  isWarBoardClear = IsWarBoardClear_k__BackingField;
  v20 = !IsPhaseClear_k__BackingField;
  eventMuralId = v10->static_fields->_EventMuralId_k__BackingField;
  v22 = !v20;
  v23 = (TerminalPramsManager_ClearData_o *)sub_B2C42C(TerminalPramsManager_ClearData_TypeInfo);
  TerminalPramsManager_ClearData___ctor_18938712(
    v23,
    mQuestClearHeroineInfo,
    v18,
    mQuestPhaseRewardInfos,
    IsQuestClear_k__BackingField,
    v22,
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
  if ( !byte_4184747 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v24);
    byte_4184747 = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  v25->static_fields->_isQuestRewardSetted_k__BackingField = 1;
  v26 = TerminalPramsManager_ClearData_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_ClearData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
    v26 = TerminalPramsManager_ClearData_TypeInfo;
  }
  SAVEKEY_CLEAR_REWARD_DISP = v26->static_fields->SAVEKEY_CLEAR_REWARD_DISP;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v28 = JsonManager__toJson((Il2CppObject *)v23, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString(SAVEKEY_CLEAR_REWARD_DISP, v28, 0LL);
}


void __fastcall TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  EventRaidDefeatedEffectInfo_o *EventRaidDefeatedEffectInfo_k__BackingField; // x0
  System_String_o *v5; // x0

  if ( (byte_418469A & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11560/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v2);
    byte_418469A = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184749 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184749 = 1;
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
    sub_B2C434(0LL, v1);
  v5 = EventRaidDefeatedEffectInfo__ConvertToStringData(EventRaidDefeatedEffectInfo_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11560/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v5, 0LL);
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

  if ( (byte_4184666 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_13623/*"TerminalPhaseCnt"*/, v2);
    sub_B2C35C(&StringLiteral_13626/*"TerminalQuestId"*/, v3);
    byte_4184666 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4183C7A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13626/*"TerminalQuestId"*/,
    v4->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4183C7B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    byte_4183C7B = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13623/*"TerminalPhaseCnt"*/,
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

  if ( (byte_418469E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v1);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v7);
    sub_B2C35C(&string_TypeInfo, v8);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_11569/*"SAVEKEY_QuestRandomGroupList"*/, v10);
    sub_B2C35C(&StringLiteral_23626/*"{0}:{1}"*/, v11);
    sub_B2C35C(&StringLiteral_699/*","*/, v12);
    byte_418469E = 1;
  }
  memset(&v22, 0, 32);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418474B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418474B = 1;
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
    sub_B2C434(0LL, v1);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v21,
    QuestRandomGroupList_k__BackingField,
    (const MethodInfo_2E24AB4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v22.fields.dictionary = v21[0];
  v22.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v21[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v22,
            (const MethodInfo_256852C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int)v22.fields.current.fields.key;
    key_high = HIDWORD(v22.fields.current.fields.key);
    if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
      Empty = System_String__Concat_44305532(Empty, (System_String_o *)StringLiteral_699/*","*/, 0LL);
    LODWORD(v21[0]) = key;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v21);
    v23 = key_high;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v20 = System_String__Format_44301068((System_String_o *)StringLiteral_23626/*"{0}:{1}"*/, v18, v19, 0LL);
    Empty = System_String__Concat_44305532(Empty, v20, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v22,
    (const MethodInfo_2568674 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11569/*"SAVEKEY_QuestRandomGroupList"*/, Empty, 0LL);
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

  if ( (byte_4184664 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_13616/*"TerminalEndTime"*/, v2);
    sub_B2C35C(&StringLiteral_11567/*"SAVEKEY_PlayedTerminalEffects"*/, v3);
    sub_B2C35C(&StringLiteral_13612/*"TerminalBeforeEventActivityPoint"*/, v4);
    sub_B2C35C(&StringLiteral_13617/*"TerminalEventDailyPointEventId"*/, v5);
    sub_B2C35C(&StringLiteral_13623/*"TerminalPhaseCnt"*/, v6);
    sub_B2C35C(&StringLiteral_13631/*"TerminalTimeStatusEventId"*/, v7);
    sub_B2C35C(&StringLiteral_13615/*"TerminalDispState"*/, v8);
    sub_B2C35C(&StringLiteral_11564/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v9);
    sub_B2C35C(&StringLiteral_13618/*"TerminalIsDoneShortcut"*/, v10);
    sub_B2C35C(&StringLiteral_11563/*"SAVEKEY_MapModelClearQuestInfo"*/, v11);
    sub_B2C35C(&StringLiteral_11568/*"SAVEKEY_PlayerGenderType"*/, v12);
    sub_B2C35C(&StringLiteral_11556/*"SAVEKEY_ClearEventQuestIds"*/, v13);
    sub_B2C35C(&StringLiteral_11565/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v14);
    sub_B2C35C(&StringLiteral_13626/*"TerminalQuestId"*/, v15);
    sub_B2C35C(&StringLiteral_11575/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v16);
    sub_B2C35C(&StringLiteral_13630/*"TerminalTimeStatusEventDailyPoint"*/, v17);
    sub_B2C35C(&StringLiteral_13635/*"TerminalWarId"*/, v18);
    sub_B2C35C(&StringLiteral_13628/*"TerminalSpotId"*/, v19);
    sub_B2C35C(&StringLiteral_13632/*"TerminalTimeStatusLoopCount"*/, v20);
    sub_B2C35C(&StringLiteral_13613/*"TerminalBeforeEventActivityPointGauge"*/, v21);
    sub_B2C35C(&StringLiteral_11559/*"SAVEKEY_DataLostBattleAutoReset"*/, v22);
    sub_B2C35C(&StringLiteral_13636/*"TerminalWarStartedIds"*/, v23);
    sub_B2C35C(&StringLiteral_11558/*"SAVEKEY_ConnectMarkEventId"*/, v24);
    sub_B2C35C(&StringLiteral_699/*","*/, v25);
    sub_B2C35C(&StringLiteral_11557/*"SAVEKEY_ConnectMarkAnimationId"*/, v26);
    sub_B2C35C(&StringLiteral_11566/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v27);
    sub_B2C35C(&StringLiteral_11574/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v28);
    byte_4184664 = 1;
  }
  EndTime_k__BackingField = 0LL;
  MapModelClearQuestId_k__BackingField = 0;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C66 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4183C66 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13615/*"TerminalDispState"*/,
    v29->static_fields->_DispState_k__BackingField,
    0LL);
  if ( !byte_4183C67 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v30);
    byte_4183C67 = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13635/*"TerminalWarId"*/,
    v31->static_fields->_WarId_k__BackingField,
    0LL);
  if ( !byte_4183C76 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v32);
    byte_4183C76 = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13628/*"TerminalSpotId"*/,
    v33->static_fields->_SpotId_k__BackingField,
    0LL);
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v34);
    byte_4183C7A = 1;
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13626/*"TerminalQuestId"*/,
    v35->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4183C7B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v36);
    byte_4183C7B = 1;
  }
  v37 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v37 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13623/*"TerminalPhaseCnt"*/,
    v37->static_fields->_PhaseCnt_k__BackingField,
    0LL);
  if ( !byte_4184250 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v38);
    byte_4184250 = 1;
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
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13616/*"TerminalEndTime"*/, v40, 0LL);
  if ( !byte_4183CB0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v41);
    byte_4183CB0 = 1;
  }
  v42 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v42 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13618/*"TerminalIsDoneShortcut"*/,
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
    (System_String_o *)StringLiteral_13636/*"TerminalWarStartedIds"*/,
    v43->static_fields->mTerminalWarStartedIds,
    0LL);
  if ( !byte_4184721 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v44);
    byte_4184721 = 1;
  }
  v45 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v45 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13631/*"TerminalTimeStatusEventId"*/,
    v45->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_4184722 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v46);
    byte_4184722 = 1;
  }
  v47 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v47 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13632/*"TerminalTimeStatusLoopCount"*/,
    v47->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  if ( !byte_4184723 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v48);
    byte_4184723 = 1;
  }
  v49 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v49 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13617/*"TerminalEventDailyPointEventId"*/,
    v49->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4184724 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v50);
    byte_4184724 = 1;
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
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13630/*"TerminalTimeStatusEventDailyPoint"*/, v52, 0LL);
  if ( !byte_4184725 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v53);
    byte_4184725 = 1;
  }
  v54 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v54 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13612/*"TerminalBeforeEventActivityPoint"*/,
    v54->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_4184726 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v55);
    byte_4184726 = 1;
  }
  v56 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v56 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13613/*"TerminalBeforeEventActivityPointGauge"*/,
    v56->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  if ( !byte_4184727 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v57);
    byte_4184727 = 1;
  }
  v58 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v58 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11567/*"SAVEKEY_PlayedTerminalEffects"*/,
    v58->static_fields->_PlayedTerminalEffects_k__BackingField,
    0LL);
  if ( !byte_4183CA6 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v59);
    byte_4183CA6 = 1;
  }
  v60 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v60 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11564/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v60->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183CA7 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v61);
    byte_4183CA7 = 1;
  }
  v62 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v62 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11565/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v62->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  if ( !byte_4184728 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v63);
    byte_4184728 = 1;
  }
  v64 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v64 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11566/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v64->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184729 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v65);
    byte_4184729 = 1;
  }
  v66 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v66 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11575/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v66->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11558/*"SAVEKEY_ConnectMarkEventId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11557/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  if ( !byte_4183C73 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v67);
    byte_4183C73 = 1;
  }
  v68 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v68 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11574/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v68->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  if ( !byte_418472A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v69);
    byte_418472A = 1;
  }
  v70 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v70 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11556/*"SAVEKEY_ClearEventQuestIds"*/,
    v70->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  if ( !byte_4183C90 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v71);
    byte_4183C90 = 1;
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
  if ( !byte_4183C91 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v73);
    byte_4183C91 = 1;
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
  v77 = System_String__Concat_44307816(v74, (System_String_o *)StringLiteral_699/*","*/, v76, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11563/*"SAVEKEY_MapModelClearQuestInfo"*/, v77, 0LL);
  if ( !byte_418472B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v78);
    byte_418472B = 1;
  }
  v79 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v79 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11559/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v79->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418472C )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v80);
    byte_418472C = 1;
  }
  v81 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v81 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11568/*"SAVEKEY_PlayerGenderType"*/,
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
  __int64 v9; // x1
  int32_t v10; // w1

  if ( (byte_418468E & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    byte_418468E = 1;
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
    Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v9);
    if ( IsMainStoryForQuestId )
      v10 = 10;
    else
      v10 = 9;
    AdManager__TrackEvent(Instance, v10, 10, questId, questPhase, 0LL, 0LL);
  }
}


void __fastcall TerminalPramsManager__SendOpenedQuestIdToAdManager(int32_t clearedQuestId, const MethodInfo *method)
{
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
  TerminalPramsManager___c__DisplayClass607_0_o *v33; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v35; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v36; // x21
  int32_t v37; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_TSource__o *QuestIdsByTargetAndOpenCondType; // x19
  TerminalPramsManager___c_c *v40; // x8
  struct TerminalPramsManager___c_StaticFields *static_fields; // x9
  System_Func_int__bool__o *_9__607_0; // x21
  Il2CppObject *v43; // x22
  struct TerminalPramsManager___c_StaticFields *v44; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x19
  System_Func_int__BattleActionData_SideEffectData__o *v46; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v48; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  TerminalPramsManager___c_c *v50; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x19
  struct TerminalPramsManager___c_StaticFields *v52; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__607_3; // x20
  Il2CppObject *v54; // x21
  struct TerminalPramsManager___c_StaticFields *v55; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v56; // x0
  TerminalPramsManager___c_c *v57; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x19
  struct TerminalPramsManager___c_StaticFields *v59; // x9
  System_Func_int__int__o *_9__607_4; // x20
  Il2CppObject *v61; // x21
  struct TerminalPramsManager___c_StaticFields *v62; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  int32_t v64; // w0
  int32_t v65; // w19
  WarEntity_o *v66; // [xsp+8h] [xbp-38h] BYREF
  QuestEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_418468F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_SpotMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_int___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderByDescending_int__int___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_int__QuestEntity___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_QuestEntity__int___, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_int___, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_QuestEntity___, v12);
    sub_B2C35C(&Method_System_Func_QuestEntity__int___ctor__, v13);
    sub_B2C35C(&Method_System_Func_QuestEntity__bool___ctor__, v14);
    sub_B2C35C(&Method_System_Func_int__int___ctor__, v15);
    sub_B2C35C(&Method_System_Func_int__QuestEntity___ctor__, v16);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v17);
    sub_B2C35C(&System_Func_QuestEntity__int__TypeInfo, v18);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v19);
    sub_B2C35C(&System_Func_int__QuestEntity__TypeInfo, v20);
    sub_B2C35C(&System_Func_QuestEntity__bool__TypeInfo, v21);
    sub_B2C35C(&System_Func_int__int__TypeInfo, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v25);
    sub_B2C35C(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__607_0__, v26);
    sub_B2C35C(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__607_3__, v27);
    sub_B2C35C(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__607_4__, v28);
    sub_B2C35C(&Method_TerminalPramsManager___c__DisplayClass607_0__SendOpenedQuestIdToAdManager_b__1__, v29);
    sub_B2C35C(&Method_TerminalPramsManager___c__DisplayClass607_0__SendOpenedQuestIdToAdManager_b__2__, v30);
    sub_B2C35C(&TerminalPramsManager___c__DisplayClass607_0_TypeInfo, v31);
    sub_B2C35C(&TerminalPramsManager___c_TypeInfo, v32);
    byte_418468F = 1;
  }
  entity = 0LL;
  v66 = 0LL;
  v33 = (TerminalPramsManager___c__DisplayClass607_0_o *)sub_B2C42C(TerminalPramsManager___c__DisplayClass607_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass607_0___ctor(v33, 0LL);
  if ( clearedQuestId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !v33 )
      goto LABEL_50;
    v33->fields.questMaster = (struct QuestMaster_o *)Instance;
    sub_B2C2F8(&v33->fields, Instance);
    Instance = (DataManager_o *)v33->fields.questMaster;
    if ( !Instance )
      goto LABEL_50;
    if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, clearedQuestId, 0LL) )
      return;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SpotMaster___);
    if ( !entity )
      goto LABEL_50;
    v36 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0LL);
    if ( !v36 )
      goto LABEL_50;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  v36,
                                  &v66,
                                  (int32_t)Instance,
                                  (const MethodInfo_24E412C *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      return;
    if ( !v66 )
      goto LABEL_50;
    v37 = *(&v66->fields.id + 1);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( TerminalPramsManager__IsMustPlayMainStory(v37, v35) )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_50;
      if ( QuestEntity__GetTypeFlag(entity, 0LL) != 2 )
        return;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_50;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             Instance,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v33->fields.userQuestMaster = (struct UserQuestMaster_o *)MasterData_WarQuestSelectionMaster;
      sub_B2C2F8(&v33->fields.userQuestMaster, MasterData_WarQuestSelectionMaster);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_50;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      if ( !Instance )
        goto LABEL_50;
      QuestIdsByTargetAndOpenCondType = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
                                                                                               (QuestReleaseMaster_o *)Instance,
                                                                                               clearedQuestId,
                                                                                               1,
                                                                                               0LL);
      v40 = TerminalPramsManager___c_TypeInfo;
      if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v40 = TerminalPramsManager___c_TypeInfo;
      }
      static_fields = v40->static_fields;
      _9__607_0 = static_fields->__9__607_0;
      if ( !_9__607_0 )
      {
        if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40);
          static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
        }
        v43 = (Il2CppObject *)static_fields->__9;
        _9__607_0 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__607_0,
          v43,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__607_0__,
          (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
        v44 = TerminalPramsManager___c_TypeInfo->static_fields;
        v44->__9__607_0 = _9__607_0;
        sub_B2C2F8(&v44->__9__607_0, _9__607_0);
      }
      v45 = System_Linq_Enumerable__Where_int_(
              QuestIdsByTargetAndOpenCondType,
              (System_Func_TSource__bool__o *)_9__607_0,
              (const MethodInfo_1A9F150 *)Method_System_Linq_Enumerable_Where_int___);
      v46 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B2C42C(System_Func_int__QuestEntity__TypeInfo);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        v46,
        (Il2CppObject *)v33,
        Method_TerminalPramsManager___c__DisplayClass607_0__SendOpenedQuestIdToAdManager_b__1__,
        (const MethodInfo_270D828 *)Method_System_Func_int__QuestEntity___ctor__);
      v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                   v45,
                                                                   (System_Func_TSource__TResult__o *)v46,
                                                                   (const MethodInfo_1A95A8C *)Method_System_Linq_Enumerable_Select_int__QuestEntity___);
      v48 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v48,
        (Il2CppObject *)v33,
        Method_TerminalPramsManager___c__DisplayClass607_0__SendOpenedQuestIdToAdManager_b__2__,
        (const MethodInfo_2711C04 *)Method_System_Func_QuestEntity__bool___ctor__);
      v49 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              v47,
              (System_Func_TSource__bool__o *)v48,
              (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v50 = TerminalPramsManager___c_TypeInfo;
      v51 = v49;
      if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v50 = TerminalPramsManager___c_TypeInfo;
      }
      v52 = v50->static_fields;
      _9__607_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v52->__9__607_3;
      if ( !_9__607_3 )
      {
        if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v50);
          v52 = TerminalPramsManager___c_TypeInfo->static_fields;
        }
        v54 = (Il2CppObject *)v52->__9;
        _9__607_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_QuestEntity__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__607_3,
          v54,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__607_3__,
          (const MethodInfo_27127B0 *)Method_System_Func_QuestEntity__int___ctor__);
        v55 = TerminalPramsManager___c_TypeInfo->static_fields;
        v55->__9__607_3 = (struct System_Func_QuestEntity__int__o *)_9__607_3;
        sub_B2C2F8(&v55->__9__607_3, _9__607_3);
      }
      v56 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
              v51,
              (System_Func_TSource__TResult__o *)_9__607_3,
              (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_QuestEntity__int___);
      v57 = TerminalPramsManager___c_TypeInfo;
      v58 = (System_Collections_Generic_IEnumerable_TSource__o *)v56;
      if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v57 = TerminalPramsManager___c_TypeInfo;
      }
      v59 = v57->static_fields;
      _9__607_4 = v59->__9__607_4;
      if ( !_9__607_4 )
      {
        if ( (BYTE3(v57->vtable._0_Equals.methodPtr) & 4) != 0 && !v57->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v57);
          v59 = TerminalPramsManager___c_TypeInfo->static_fields;
        }
        v61 = (Il2CppObject *)v59->__9;
        _9__607_4 = (System_Func_int__int__o *)sub_B2C42C(System_Func_int__int__TypeInfo);
        System_Func_int__int____ctor(
          _9__607_4,
          v61,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__607_4__,
          (const MethodInfo_270CF34 *)Method_System_Func_int__int___ctor__);
        v62 = TerminalPramsManager___c_TypeInfo->static_fields;
        v62->__9__607_4 = _9__607_4;
        sub_B2C2F8(&v62->__9__607_4, _9__607_4);
      }
      v63 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_int__int_(
                                                                   v58,
                                                                   (System_Func_TSource__TKey__o *)_9__607_4,
                                                                   (const MethodInfo_1A9391C *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
      v64 = System_Linq_Enumerable__FirstOrDefault_int_(
              v63,
              (const MethodInfo_1A90238 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      if ( v64 )
      {
        v65 = v64;
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetOpenedStoryQuest((AdManager_o *)Instance, v65, 0LL);
          return;
        }
LABEL_50:
        sub_B2C434(Instance, v35);
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
  __int64 v9; // x1
  int32_t v10; // w1

  if ( (byte_418468D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    byte_418468D = 1;
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
    Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v9);
    if ( IsMainStoryForQuestId )
      v10 = 10;
    else
      v10 = 9;
    AdManager__TrackEvent(Instance, v10, 9, questId, questPhase, 0LL, 0LL);
  }
}


void __fastcall TerminalPramsManager__SetAutoResumeByQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  QuestTree_o *v7; // x0
  __int64 v8; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v10; // x1
  MapControl_QuestInfo_o *v11; // x20
  int32_t warId; // w21
  TerminalPramsManager_c *v13; // x0
  __int64 v14; // x1
  int32_t SpotID; // w21
  TerminalPramsManager_c *v16; // x0
  int32_t v17; // w21
  int32_t questPhase; // w21
  int64_t endTime; // x20
  __int64 v20; // x1
  QuestTree_o *v21; // x20
  WarEntity_o *WarEntityByWarID; // x0
  TerminalPramsManager_c *v23; // x0
  int v24; // w8
  TerminalSceneComponent_c *v25; // x0
  UnityEngine_Object_o *mInstance; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *klass; // x8
  UnityEngine_Object_o *v28; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v29; // x8
  ScrTerminalListTop_o *v30; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v31; // x8
  UnityEngine_Object_o *genericContainerHandle; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v33; // x8
  const MethodInfo *v34; // x0

  if ( (byte_4184659 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v4);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v6);
    byte_4184659 = 1;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  if ( SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__) )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    v7 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( v7 )
    {
      QuestInfo = QuestTree__GetQuestInfo(v7, questId, 0LL);
      if ( !QuestInfo )
        return;
      v11 = QuestInfo;
      warId = QuestInfo->fields.warId;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183C69 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
        byte_4183C69 = 1;
      }
      v13 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v13 = TerminalPramsManager_TypeInfo;
      }
      v13->static_fields->_WarId_k__BackingField = warId;
      SpotID = MapControl_QuestInfo__GetSpotID(v11, 0LL);
      if ( !byte_4183C9C )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v14);
        byte_4183C9C = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      v16->static_fields->_SpotId_k__BackingField = SpotID;
      v17 = v11->fields.questId;
      if ( !byte_4183C6B )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v14);
        v16 = TerminalPramsManager_TypeInfo;
        byte_4183C6B = 1;
      }
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = TerminalPramsManager_TypeInfo;
      }
      v16->static_fields->_QuestId_k__BackingField = v17;
      questPhase = v11->fields.questPhase;
      if ( !byte_4183C6C )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v14);
        v16 = TerminalPramsManager_TypeInfo;
        byte_4183C6C = 1;
      }
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = TerminalPramsManager_TypeInfo;
      }
      v16->static_fields->_PhaseCnt_k__BackingField = questPhase;
      endTime = v11->fields.endTime;
      if ( !byte_4183CB6 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v14);
        v16 = TerminalPramsManager_TypeInfo;
        byte_4183CB6 = 1;
      }
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = TerminalPramsManager_TypeInfo;
      }
      v16->static_fields->_EndTime_k__BackingField = endTime;
      if ( !byte_4183CAF )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v14);
        v16 = TerminalPramsManager_TypeInfo;
        byte_4183CAF = 1;
      }
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = TerminalPramsManager_TypeInfo;
      }
      v16->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 1;
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      if ( !SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__) )
        goto LABEL_171;
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      v21 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183C67 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
        byte_4183C67 = 1;
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
          if ( !byte_4183C6F )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, v20);
            byte_4183C6F = 1;
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
          if ( !byte_4183C6F )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, v20);
            byte_4183C6F = 1;
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
        if ( !byte_4183C6F )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v20);
          byte_4183C6F = 1;
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
      if ( !byte_4183C65 )
      {
        sub_B2C35C(&TerminalSceneComponent_TypeInfo, v20);
        byte_4183C65 = 1;
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
      if ( !byte_4183C65 )
      {
        sub_B2C35C(&TerminalSceneComponent_TypeInfo, v8);
        byte_4183C65 = 1;
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
        v28 = *(UnityEngine_Object_o **)&klass->_2.element_size;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
        {
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_4183C65 )
          {
            sub_B2C35C(&TerminalSceneComponent_TypeInfo, v8);
            byte_4183C65 = 1;
          }
          v7 = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v7 = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
          }
          v29 = v7[1].fields.questReleaseEntList->klass;
          if ( !v29 )
            goto LABEL_168;
          v30 = *(ScrTerminalListTop_o **)&v29->_2.element_size;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4183C67 )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
            byte_4183C67 = 1;
          }
          v7 = (QuestTree_o *)TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v7 = (QuestTree_o *)TerminalPramsManager_TypeInfo;
          }
          if ( !v30 )
            goto LABEL_168;
          ScrTerminalListTop__RequestChangeTerminalListBG(v30, HIDWORD(v7[1].fields.questReleaseEntList->klass), 0LL);
        }
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_4183C65 )
        {
          sub_B2C35C(&TerminalSceneComponent_TypeInfo, v8);
          byte_4183C65 = 1;
        }
        v7 = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v7 = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        }
        v31 = v7[1].fields.questReleaseEntList->klass;
        if ( v31 )
        {
          genericContainerHandle = (UnityEngine_Object_o *)v31->_2.genericContainerHandle;
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
          if ( !byte_4183C65 )
          {
            sub_B2C35C(&TerminalSceneComponent_TypeInfo, v8);
            byte_4183C65 = 1;
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
            v7 = (QuestTree_o *)v33->_2.genericContainerHandle;
            if ( v7 )
            {
              TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)v7, 0LL);
LABEL_159:
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_4183C70 )
              {
                sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
                byte_4183C70 = 1;
              }
              v34 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v34 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
              }
              BYTE6(v34[2].klass->vtable[22].methodPtr) = 1;
              TerminalPramsManager__Save_SaveData(v34);
              return;
            }
          }
        }
      }
    }
LABEL_168:
    sub_B2C434(v7, v8);
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

  if ( (byte_418468A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&idx);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v7);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    byte_418468A = 1;
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
    v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v10,
      (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v11 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->folderLastIdxs = v10;
    sub_B2C2F8(&static_fields->folderLastIdxs, v10);
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
          (const MethodInfo_2E25E38 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__),
        (folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs) == 0LL) )
  {
    sub_B2C434(folderLastIdxs, *(_QWORD *)&idx);
  }
  System_Collections_Generic_Dictionary_int__int___Add(
    folderLastIdxs,
    warId,
    idx,
    (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !byte_41846FD )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v14);
    byte_41846FD = 1;
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
  if ( (byte_4184688 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v3);
    byte_4184688 = 1;
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
    v7 = System_String__Concat_44307816(mTerminalWarStartedIds, v6, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
    static_fields->mTerminalWarStartedIds = v7;
    sub_B2C2F8(&static_fields->mTerminalWarStartedIds, v7);
    TerminalPramsManager__Save_SaveData(v9);
  }
}


void __fastcall TerminalPramsManager__SpotIdSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4184665 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_13628/*"TerminalSpotId"*/, v2);
    byte_4184665 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C76 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4183C76 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13628/*"TerminalSpotId"*/,
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

  if ( (byte_418466B & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_13612/*"TerminalBeforeEventActivityPoint"*/, v2);
    sub_B2C35C(&StringLiteral_13613/*"TerminalBeforeEventActivityPointGauge"*/, v3);
    byte_418466B = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184725 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184725 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13612/*"TerminalBeforeEventActivityPoint"*/,
    v4->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_4184726 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    byte_4184726 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13613/*"TerminalBeforeEventActivityPointGauge"*/,
    v6->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfoDispSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4184670 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11570/*"SAVEKEY_TerminalConquestInfoDisp"*/, v2);
    byte_4184670 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11570/*"SAVEKEY_TerminalConquestInfoDisp"*/, v3->static_fields->eventConquestInfoDisp, 0LL);
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

  if ( (byte_418466F & 1) == 0 )
  {
    sub_B2C35C(&EventConquestInfo___TypeInfo, v1);
    sub_B2C35C(&JsonManager_TypeInfo, v2);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_11571/*"SAVEKEY_TerminalConquestInfos"*/, v4);
    sub_B2C35C(&StringLiteral_11570/*"SAVEKEY_TerminalConquestInfoDisp"*/, v5);
    byte_418466F = 1;
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
    eventConquestInfos = (struct EventConquestInfo_array *)sub_B2C374(EventConquestInfo___TypeInfo, 0LL);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(&eventConquestInfos->obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11571/*"SAVEKEY_TerminalConquestInfos"*/, v8, 0LL);
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11570/*"SAVEKEY_TerminalConquestInfoDisp"*/, v9->static_fields->eventConquestInfoDisp, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  EventHarvestGrowthInfo_o *eventHarvestGrowthInfo; // x19
  System_String_o *v7; // x0

  if ( (byte_4184671 & 1) == 0 )
  {
    sub_B2C35C(&EventHarvestGrowthInfo_TypeInfo, v1);
    sub_B2C35C(&JsonManager_TypeInfo, v2);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_11572/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v4);
    byte_4184671 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  eventHarvestGrowthInfo = v5->static_fields->eventHarvestGrowthInfo;
  if ( eventHarvestGrowthInfo )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      eventHarvestGrowthInfo = TerminalPramsManager_TypeInfo->static_fields->eventHarvestGrowthInfo;
    }
  }
  else
  {
    eventHarvestGrowthInfo = (EventHarvestGrowthInfo_o *)sub_B2C42C(EventHarvestGrowthInfo_TypeInfo);
    EventHarvestGrowthInfo___ctor(eventHarvestGrowthInfo, 0LL);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__toJson((Il2CppObject *)eventHarvestGrowthInfo, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11572/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v7, 0LL);
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

  if ( (byte_418466D & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, v1);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_13614/*"TerminalBeforeEventSubmarinePointData"*/, v3);
    byte_418466D = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418472F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418472F = 1;
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
    if ( !byte_418472F )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
      byte_418472F = 1;
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
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13614/*"TerminalBeforeEventSubmarinePointData"*/, v7, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4184679 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11574/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v2);
    byte_4184679 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C73 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4183C73 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11574/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v3->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4184678 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11575/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v2);
    byte_4184678 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184729 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184729 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11575/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v3->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalTransitionInfoSave_SaveData(
        TerminalTransitionInfo_o *terminalTransitionInfo,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_418466A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_13634/*"TerminalTransitionInfoVoiceAssetName"*/, method);
    sub_B2C35C(&StringLiteral_13633/*"TerminalTransitionInfoMissionId"*/, v3);
    byte_418466A = 1;
  }
  if ( terminalTransitionInfo )
  {
    UnityEngine_PlayerPrefs__SetInt(
      (System_String_o *)StringLiteral_13633/*"TerminalTransitionInfoMissionId"*/,
      terminalTransitionInfo->fields.missionId,
      0LL);
    UnityEngine_PlayerPrefs__SetString(
      (System_String_o *)StringLiteral_13634/*"TerminalTransitionInfoVoiceAssetName"*/,
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
  System_Collections_Generic_List_int__o *v13; // x21
  __int64 v14; // x8
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4184699 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, *(_QWORD *)&day);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
    byte_4184699 = 1;
  }
  value = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184749 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    byte_4184749 = 1;
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
          (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v13 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v13,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    value = (WarBoardEvalValueSquare_CalcEval_o *)v13;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184749 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
      byte_4184749 = 1;
    }
    v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)TerminalPramsManager_TypeInfo;
    }
    v14 = *(_QWORD *)&v11[2].fields.entries->m_Items[16].fields.hashCode;
    if ( !v14 )
      goto LABEL_30;
    v11 = *(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)(v14 + 16);
    if ( !v11 )
      goto LABEL_30;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v11,
      eventId,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)value,
      (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    goto LABEL_28;
  }
  v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)value;
  if ( !value )
    goto LABEL_30;
  if ( !System_Collections_Generic_List_int___Contains(
          (System_Collections_Generic_List_int__o *)value,
          day,
          (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
  {
LABEL_28:
    v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)value;
    if ( value )
    {
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)value,
        day,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      return;
    }
LABEL_30:
    sub_B2C434(v11, *(_QWORD *)&day);
  }
}


int32_t __fastcall TerminalPramsManager__get_AfterActionFocusQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4184590 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184590 = 1;
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

  if ( (byte_41845AE & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845AE = 1;
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

  if ( (byte_41845E0 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v2);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v3);
    byte_41845E0 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  if ( AvalonSceneManager__checkNowScene(Instance, 34, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, v5);
      byte_4183C65 = 1;
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
      if ( !byte_4183C65 )
      {
        sub_B2C35C(&TerminalSceneComponent_TypeInfo, v5);
        byte_4183C65 = 1;
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
      sub_B2C434(Instance, v5);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    byte_4183C7A = 1;
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

  if ( (byte_41845FB & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845FB = 1;
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

  if ( (byte_41845FD & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845FD = 1;
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

  if ( (byte_4184601 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184601 = 1;
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

  if ( (byte_41845EF & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845EF = 1;
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

  if ( (byte_418461F & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418461F = 1;
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

  if ( (byte_4184623 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184623 = 1;
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

  if ( (byte_418461D & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418461D = 1;
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

  if ( (byte_4184621 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184621 = 1;
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

  if ( (byte_41845CA & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845CA = 1;
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

  if ( (byte_41845F9 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845F9 = 1;
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

  if ( (byte_41845BA & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845BA = 1;
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

  if ( (byte_41845C2 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845C2 = 1;
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

  if ( (byte_41845BC & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845BC = 1;
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

  if ( (byte_4184572 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184572 = 1;
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

  if ( (byte_41845B0 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845B0 = 1;
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

  if ( (byte_41845FF & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845FF = 1;
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

  if ( (byte_4184607 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184607 = 1;
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

  if ( (byte_41845F1 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845F1 = 1;
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

  if ( (byte_41845ED & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845ED = 1;
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

  if ( (byte_418459C & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418459C = 1;
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

  if ( (byte_4184603 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184603 = 1;
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

  if ( (byte_4184629 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184629 = 1;
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

  if ( (byte_418463D & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418463D = 1;
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

  if ( (byte_418463F & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418463F = 1;
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

  if ( (byte_4184657 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184657 = 1;
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

  if ( (byte_4184637 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184637 = 1;
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

  if ( (byte_4184639 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184639 = 1;
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

  if ( (byte_4184625 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184625 = 1;
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

  if ( (byte_4184641 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184641 = 1;
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

  if ( (byte_41845B8 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845B8 = 1;
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

  if ( (byte_41845C4 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845C4 = 1;
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

  if ( (byte_41845C0 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845C0 = 1;
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

  if ( (byte_4184592 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184592 = 1;
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

  if ( (byte_4184594 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184594 = 1;
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

  if ( (byte_41845A2 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845A2 = 1;
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

  if ( (byte_4184596 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184596 = 1;
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

  if ( (byte_418457E & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418457E = 1;
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

  if ( (byte_4184609 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184609 = 1;
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

  if ( (byte_4184586 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184586 = 1;
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

  if ( (byte_4184584 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184584 = 1;
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

  if ( (byte_418462D & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418462D = 1;
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

  if ( (byte_418463B & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418463B = 1;
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

  if ( (byte_418459A & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418459A = 1;
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

  if ( (byte_41845A0 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845A0 = 1;
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

  if ( (byte_41845A6 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845A6 = 1;
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

  if ( (byte_418460B & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418460B = 1;
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

  if ( (byte_41845A4 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845A4 = 1;
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

  if ( (byte_4184617 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184617 = 1;
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

  if ( (byte_4184619 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184619 = 1;
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

  if ( (byte_418461B & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418461B = 1;
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

  if ( (byte_41845C6 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845C6 = 1;
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

  if ( (byte_418459E & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418459E = 1;
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

  if ( (byte_41845A8 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845A8 = 1;
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

  if ( (byte_41845BE & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845BE = 1;
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

  if ( (byte_4184643 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184643 = 1;
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

  if ( (byte_41845B2 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845B2 = 1;
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

  if ( (byte_4184598 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184598 = 1;
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

  if ( (byte_418458C & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418458C = 1;
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

  if ( (byte_418458A & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418458A = 1;
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

  if ( (byte_418458E & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418458E = 1;
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

  if ( (byte_41845B6 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845B6 = 1;
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

  if ( (byte_41845B4 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845B4 = 1;
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

  if ( (byte_41845AA & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845AA = 1;
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

  if ( (byte_4184627 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184627 = 1;
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

  if ( (byte_418457C & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418457C = 1;
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

  if ( (byte_4184615 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184615 = 1;
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

  if ( (byte_41845C8 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845C8 = 1;
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

  if ( (byte_418457A & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418457A = 1;
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

  if ( (byte_4184645 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184645 = 1;
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

  if ( (byte_4184647 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184647 = 1;
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

  if ( (byte_4184613 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184613 = 1;
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

  if ( (byte_41845AC & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845AC = 1;
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

  if ( (byte_418462B & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418462B = 1;
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

  if ( (byte_4184588 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184588 = 1;
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

  if ( (byte_4184582 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184582 = 1;
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

  if ( (byte_4184580 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184580 = 1;
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

  if ( (byte_41845CE & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845CE = 1;
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

  if ( (byte_4184578 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184578 = 1;
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

  if ( (byte_4184576 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184576 = 1;
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

  if ( (byte_4184649 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184649 = 1;
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

  if ( (byte_41845F5 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845F5 = 1;
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

  if ( (byte_41845F7 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845F7 = 1;
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

  if ( (byte_418460D & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418460D = 1;
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

  if ( (byte_4184574 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184574 = 1;
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

  if ( (byte_41845CC & 1) == 0 )
  {
    sub_B2C35C(&MapZoom_TypeInfo, v1);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v2);
    byte_41845CC = 1;
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

  if ( (byte_41845EB & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845EB = 1;
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

  if ( (byte_41845D6 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845D6 = 1;
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

  if ( (byte_41845D4 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845D4 = 1;
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

  if ( (byte_41845D8 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845D8 = 1;
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

  if ( (byte_41845E1 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845E1 = 1;
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

  if ( (byte_418464D & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418464D = 1;
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

  if ( (byte_4184611 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184611 = 1;
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

  if ( (byte_4184605 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184605 = 1;
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

  if ( (byte_4184635 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184635 = 1;
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

  if ( (byte_4184633 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184633 = 1;
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

  if ( (byte_418460F & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418460F = 1;
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

  if ( (byte_418464F & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418464F = 1;
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

  if ( (byte_418464B & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418464B = 1;
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

  if ( (byte_41845D2 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845D2 = 1;
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

  if ( (byte_41845DE & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845DE = 1;
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

  if ( (byte_41845D0 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845D0 = 1;
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

  if ( (byte_41845DC & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845DC = 1;
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

  if ( (byte_41845DA & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845DA = 1;
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

  if ( (byte_41845E5 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845E5 = 1;
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

  if ( (byte_41845E7 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845E7 = 1;
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

  if ( (byte_41845E3 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845E3 = 1;
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

  if ( (byte_41845E9 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845E9 = 1;
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

  if ( (byte_4184651 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_4184651 = 1;
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

  if ( (byte_41845F3 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_41845F3 = 1;
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

  if ( (byte_418465D & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v1);
    byte_418465D = 1;
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

  if ( (byte_418465C & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418465C = 1;
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

  if ( (byte_4184591 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184591 = 1;
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

  if ( (byte_41845AF & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845AF = 1;
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
  sub_B2C2F8(&static_fields->_BattleSetupKeep_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_BeforeEventActivityPoint(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_41845FC & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845FC = 1;
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

  if ( (byte_41845FE & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845FE = 1;
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

  if ( (byte_4184602 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184602 = 1;
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
  sub_B2C2F8(&static_fields->_BeforeEventSubmarineSaveData_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_BeforeTimeEventDailyPoint(int64_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_41845F0 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845F0 = 1;
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

  if ( (byte_4184620 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184620 = 1;
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

  if ( (byte_4184624 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184624 = 1;
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

  if ( (byte_418461E & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418461E = 1;
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

  if ( (byte_4184622 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184622 = 1;
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
  sub_B2C2F8(&static_fields->_BlankEarthTransformData_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_CampaignDirectBonus(
        CommonUI_CampaignDirectBonusData_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_41845CB & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845CB = 1;
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
  sub_B2C2F8(&static_fields->_CampaignDirectBonus_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_ClearEventQuestIds(System_String_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_41845FA & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845FA = 1;
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
  sub_B2C2F8(&static_fields->_ClearEventQuestIds_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_DataLostBattleEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_41845BB & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845BB = 1;
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

  if ( (byte_41845C3 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v2);
    byte_41845C3 = 1;
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

  if ( (byte_41845BD & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845BD = 1;
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

  if ( (byte_4184632 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184632 = 1;
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

  if ( (byte_4184631 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184631 = 1;
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

  if ( (byte_418462F & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418462F = 1;
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

  if ( (byte_4184630 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184630 = 1;
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

  if ( (byte_4184573 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184573 = 1;
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

  if ( (byte_41845B1 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845B1 = 1;
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

  if ( (byte_4184600 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184600 = 1;
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

  if ( (byte_4184608 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184608 = 1;
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

  if ( (byte_41845F2 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845F2 = 1;
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

  if ( (byte_41845EE & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845EE = 1;
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

  if ( (byte_418459D & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418459D = 1;
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

  if ( (byte_4184604 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184604 = 1;
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
  sub_B2C2F8(&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_EventUIEffectClearQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_418462A & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418462A = 1;
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

  if ( (byte_418463E & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418463E = 1;
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

  if ( (byte_4184640 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184640 = 1;
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

  if ( (byte_4184658 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184658 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C70 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4183C70 = 1;
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

  if ( (byte_4184638 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184638 = 1;
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

  if ( (byte_418463A & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418463A = 1;
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

  if ( (byte_4184626 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184626 = 1;
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

  if ( (byte_4184642 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184642 = 1;
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

  if ( (byte_41845B9 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845B9 = 1;
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

  if ( (byte_41845C5 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845C5 = 1;
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

  if ( (byte_41845C1 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845C1 = 1;
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

  if ( (byte_4184593 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184593 = 1;
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

  if ( (byte_4184595 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184595 = 1;
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

  if ( (byte_41845A3 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845A3 = 1;
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

  if ( (byte_4184597 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184597 = 1;
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

  if ( (byte_418457F & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418457F = 1;
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

  if ( (byte_418460A & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418460A = 1;
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

  if ( (byte_4184587 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184587 = 1;
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

  if ( (byte_4184585 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184585 = 1;
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

  if ( (byte_418462E & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418462E = 1;
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

  if ( (byte_418463C & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418463C = 1;
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

  if ( (byte_418459B & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418459B = 1;
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

  if ( (byte_41845A1 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845A1 = 1;
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

  if ( (byte_41845A7 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845A7 = 1;
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

  if ( (byte_418460C & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418460C = 1;
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

  if ( (byte_41845A5 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845A5 = 1;
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

  if ( (byte_4184618 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184618 = 1;
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

  if ( (byte_418461A & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418461A = 1;
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

  if ( (byte_418461C & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418461C = 1;
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

  if ( (byte_41845C7 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845C7 = 1;
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

  if ( (byte_418459F & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418459F = 1;
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

  if ( (byte_41845A9 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845A9 = 1;
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

  if ( (byte_41845BF & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845BF = 1;
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

  if ( (byte_4184644 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184644 = 1;
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

  if ( (byte_41845B3 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845B3 = 1;
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

  if ( (byte_4184599 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184599 = 1;
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

  if ( (byte_418458D & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418458D = 1;
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

  if ( (byte_418458B & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418458B = 1;
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

  if ( (byte_418458F & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418458F = 1;
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

  if ( (byte_41845B7 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845B7 = 1;
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

  if ( (byte_41845B5 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845B5 = 1;
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

  if ( (byte_41845AB & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845AB = 1;
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

  if ( (byte_4184628 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184628 = 1;
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
  sub_B2C2F8(&static_fields->_NoticeLastModified_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_PhaseCnt(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_418457D & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418457D = 1;
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

  if ( (byte_4184616 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184616 = 1;
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
  sub_B2C2F8(&static_fields->_PlayedTerminalEffects_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_PlayerGenderType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_41845C9 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845C9 = 1;
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

  if ( (byte_418457B & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418457B = 1;
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

  if ( (byte_4184646 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184646 = 1;
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

  if ( (byte_4184648 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184648 = 1;
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

  if ( (byte_4184614 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184614 = 1;
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
  sub_B2C2F8(&static_fields->_QuestRandomGroupList_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_QuestWindowMessage(System_String_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_41845AD & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845AD = 1;
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
  sub_B2C2F8(&static_fields->_QuestWindowMessage_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_SceneMoveQuestClearedInfo(System_String_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_418462C & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418462C = 1;
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
  sub_B2C2F8(&static_fields->_SceneMoveQuestClearedInfo_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_SelectedBannerEntity(BannerEntity_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4184589 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184589 = 1;
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
  sub_B2C2F8(&static_fields->_SelectedBannerEntity_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_SelectedRecollectionWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4184583 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184583 = 1;
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

  if ( (byte_4184581 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184581 = 1;
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

  if ( (byte_41845CF & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845CF = 1;
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
  sub_B2C2F8(&static_fields->_SpecifiedChangeSceneInfo_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_SpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4184579 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184579 = 1;
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

  if ( (byte_4184577 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184577 = 1;
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

  if ( (byte_418464A & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418464A = 1;
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
  sub_B2C2F8(&static_fields->_TalkScriptInfo_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_TimeStatusEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_41845F6 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845F6 = 1;
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

  if ( (byte_41845F8 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845F8 = 1;
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

  if ( (byte_418460E & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418460E = 1;
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
  sub_B2C2F8(&static_fields->_WarBoardData_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_WarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4184575 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184575 = 1;
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

  if ( (byte_41845CD & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v2);
    byte_41845CD = 1;
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

  if ( (byte_41845EC & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845EC = 1;
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
  sub_B2C2F8(&static_fields->_eventDailyPoint_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_eventPointWinReward(EventPointWinReward_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_41845D7 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845D7 = 1;
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
  sub_B2C2F8(&static_fields->_eventPointWinReward_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_eventPointWinType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_41845D5 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845D5 = 1;
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

  if ( (byte_41845D9 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845D9 = 1;
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
  sub_B2C2F8(&static_fields->_eventRaceBoost_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_eventTowerReward(EventTowerReward_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_41845E2 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845E2 = 1;
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
  sub_B2C2F8(&static_fields->_eventTowerReward_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_friendshipQuestDialogOpenId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_418464E & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418464E = 1;
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

  if ( (byte_4184612 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184612 = 1;
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

  if ( (byte_4184606 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184606 = 1;
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

  if ( (byte_4184636 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184636 = 1;
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

  if ( (byte_4184634 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184634 = 1;
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

  if ( (byte_4184610 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184610 = 1;
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

  if ( (byte_4184650 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184650 = 1;
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

  if ( (byte_418464C & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_418464C = 1;
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
  sub_B2C2F8(&static_fields->_limitImageAnnounces_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_oldPersonalBoss(UserSuperBossEntity_array *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_41845D3 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845D3 = 1;
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
  sub_B2C2F8(&static_fields->_oldPersonalBoss_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_oldQuestIdForHeaderEvent(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_41845DF & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845DF = 1;
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

  if ( (byte_41845D1 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845D1 = 1;
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
  sub_B2C2F8(&static_fields->_oldSuperBoss_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_questClearCostumeGet(
        CostumeReleaseAnnounce_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_41845DD & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845DD = 1;
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
  sub_B2C2F8(&static_fields->_questClearCostumeGet_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_questClearCostumeRelease(
        CostumeReleaseAnnounce_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_41845DB & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845DB = 1;
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
  sub_B2C2F8(&static_fields->_questClearCostumeRelease_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_resultBoostItemRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_41845E6 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845E6 = 1;
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
  sub_B2C2F8(&static_fields->_resultBoostItemRewardInfo_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_resultEventBoardGameTokenRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_41845E8 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845E8 = 1;
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
  sub_B2C2F8(&static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_resultEventTowerRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_41845E4 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845E4 = 1;
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
  sub_B2C2F8(&static_fields->_resultEventTowerRewardInfo_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_timeStatusRecord(TimeStatusRecord_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_41845EA & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845EA = 1;
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
  sub_B2C2F8(&static_fields->_timeStatusRecord_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_updateProfileInfoEntity(
        UpdateProfileDialogInfoEntity_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4184652 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184652 = 1;
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
  sub_B2C2F8(&static_fields->_updateProfileInfoEntity_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_warClearReward(WarClearReward_array *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_41845F4 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41845F4 = 1;
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
  sub_B2C2F8(&static_fields->_warClearReward_k__BackingField, value);
}


void __fastcall TerminalPramsManager_ClearData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct TerminalPramsManager_ClearData_StaticFields *static_fields; // x0
  __int64 v4; // x1

  if ( (byte_41847FC & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_13346/*"TERMINAL_CLEAR_REWARD_DISP"*/, v2);
    byte_41847FC = 1;
  }
  static_fields = TerminalPramsManager_ClearData_TypeInfo->static_fields;
  v4 = StringLiteral_13346/*"TERMINAL_CLEAR_REWARD_DISP"*/;
  static_fields->SAVEKEY_CLEAR_REWARD_DISP = (struct System_String_o *)StringLiteral_13346/*"TERMINAL_CLEAR_REWARD_DISP"*/;
  sub_B2C2F8(static_fields, v4);
}


void __fastcall TerminalPramsManager_ClearData___ctor(TerminalPramsManager_ClearData_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t EVENT_POINT_EFFECT_STATE_NONE; // w8
  struct LimitImageAnnounce_array **p_limitImageAnnounces; // x19

  if ( (byte_41847FA & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41847FA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.qClearHeroineInfo = 0LL;
  sub_B2C2F8(&this->fields, 0LL);
  this->fields.questRewardInfos = 0LL;
  sub_B2C2F8(&this->fields.questRewardInfos, 0LL);
  this->fields.questPhaseRewardInfos = 0LL;
  sub_B2C2F8(&this->fields.questPhaseRewardInfos, 0LL);
  this->fields.questResultAfterEventRewardInfos = 0LL;
  sub_B2C2F8(&this->fields.questResultAfterEventRewardInfos, 0LL);
  this->fields.resultEventPanelRewardInfos = 0LL;
  sub_B2C2F8(&this->fields.resultEventPanelRewardInfos, 0LL);
  this->fields.panelEventPoint = 0;
  *(_QWORD *)&this->fields.clearedLastBattleRaidId = -1LL;
  this->fields.joinGroup = -1;
  this->fields.mOldSuperBoss = 0LL;
  sub_B2C2F8(&this->fields.mOldSuperBoss, 0LL);
  this->fields.oldPersonalBoss = 0LL;
  sub_B2C2F8(&this->fields.oldPersonalBoss, 0LL);
  this->fields.evPointWinReward = 0LL;
  sub_B2C2F8(&this->fields.evPointWinReward, 0LL);
  this->fields.evPointWinType = 0;
  this->fields.evRaceBoost = 0LL;
  sub_B2C2F8(&this->fields.evRaceBoost, 0LL);
  this->fields.questClearCostume = 0LL;
  sub_B2C2F8(&this->fields.questClearCostume, 0LL);
  this->fields.questClearCostumeGetInfo = 0LL;
  sub_B2C2F8(&this->fields.questClearCostumeGetInfo, 0LL);
  this->fields.eventTowerReward = 0LL;
  sub_B2C2F8(&this->fields.eventTowerReward, 0LL);
  this->fields.resultEventTowerRewardInfo = 0LL;
  sub_B2C2F8(&this->fields.resultEventTowerRewardInfo, 0LL);
  this->fields.warClearReward = 0LL;
  this->fields.isDispOnly = 0;
  sub_B2C2F8(&this->fields.warClearReward, 0LL);
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
  sub_B2C2F8(p_limitImageAnnounces, 0LL);
  *((_BYTE *)p_limitImageAnnounces + 8) = 0;
  *((_DWORD *)p_limitImageAnnounces + 3) = 0;
}


void __fastcall TerminalPramsManager_ClearData___ctor_18938712(
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
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v44; // x0
  const MethodInfo *v45; // x2
  struct TerminalPramsManager_QuestClearHeroineInfoForSave_o *v46; // x27
  __int64 v47; // x0
  __int64 v48; // x1
  struct UserSuperBossEntity_array *v49; // x26
  struct UserSuperBossEntity_array *v50; // x25
  struct CostumeReleaseAnnounce_array *v51; // x20
  struct CostumeReleaseAnnounce_array *v52; // x21
  struct QuestRewardInfo_array *v53; // x22
  __int64 v54; // x1
  TerminalPramsManager_c *v55; // x0
  TerminalPramsManager_c *v56; // x0
  struct QuestRewardInfo_array *resultBoostItemRewardInfo_k__BackingField; // x1
  __int64 v58; // x1
  TerminalPramsManager_c *v59; // x0
  struct WarClearReward_array *v60; // x21
  TerminalPramsManager_c *v61; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo_k__BackingField; // x1
  struct BattleDropItem_array *v63; // x22
  struct BattleDropItem_array *v64; // x23
  struct LimitImageAnnounce_array *v65; // x21
  __int64 v66; // x1
  TerminalPramsManager_c *v67; // x0

  if ( (byte_41847FB & 1) == 0 )
  {
    sub_B2C35C(&BattleDropItem___TypeInfo, qcrHeroineInfo);
    sub_B2C35C(&CostumeReleaseAnnounce___TypeInfo, v37);
    sub_B2C35C(&LimitImageAnnounce___TypeInfo, v38);
    sub_B2C35C(&TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo, v39);
    sub_B2C35C(&QuestRewardInfo___TypeInfo, v40);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v41);
    sub_B2C35C(&UserSuperBossEntity___TypeInfo, v42);
    sub_B2C35C(&WarClearReward___TypeInfo, v43);
    byte_41847FB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v44 = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)sub_B2C42C(TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
  v46 = v44;
  if ( qcrHeroineInfo )
  {
    TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_18940288(v44, qcrHeroineInfo, v45);
    if ( this )
      goto LABEL_5;
LABEL_38:
    sub_B2C434(v47, v48);
  }
  System_Object___ctor((Il2CppObject *)v44, 0LL);
  v46->fields.oldUsrSvtData = 0LL;
  sub_B2C2F8(&v46->fields, 0LL);
  if ( !this )
    goto LABEL_38;
LABEL_5:
  this->fields.qClearHeroineInfo = v46;
  sub_B2C2F8(&this->fields, v46);
  if ( !qri )
    qri = (QuestRewardInfo_array *)sub_B2C374(QuestRewardInfo___TypeInfo, 0LL);
  v49 = oldSuperBoss;
  this->fields.questRewardInfos = qri;
  sub_B2C2F8(&this->fields.questRewardInfos, qri);
  if ( !questPhaseRewardInfos )
    questPhaseRewardInfos = (QuestRewardInfo_array *)sub_B2C374(QuestRewardInfo___TypeInfo, 0LL);
  v50 = oldPersonalBoss;
  this->fields.questPhaseRewardInfos = questPhaseRewardInfos;
  sub_B2C2F8(&this->fields.questPhaseRewardInfos, questPhaseRewardInfos);
  this->fields.clearedLastBattleRaidId = lastRaidId;
  this->fields.clearedBattleRaidId = raidId;
  this->fields.questClear = qClear;
  this->fields.phaseClear = pclear;
  this->fields.joinGroup = groupjoin;
  if ( !oldSuperBoss )
    v49 = (struct UserSuperBossEntity_array *)sub_B2C374(UserSuperBossEntity___TypeInfo, 0LL);
  v51 = questClearCostumeRelease;
  this->fields.mOldSuperBoss = v49;
  sub_B2C2F8(&this->fields.mOldSuperBoss, v49);
  if ( !oldPersonalBoss )
    v50 = (struct UserSuperBossEntity_array *)sub_B2C374(UserSuperBossEntity___TypeInfo, 0LL);
  v52 = questClearCostumeGet;
  this->fields.oldPersonalBoss = v50;
  sub_B2C2F8(&this->fields.oldPersonalBoss, v50);
  this->fields.evPointWinReward = evpWinReward;
  sub_B2C2F8(&this->fields.evPointWinReward, evpWinReward);
  this->fields.evRaceBoost = evRace;
  this->fields.evPointWinType = evpWinType;
  sub_B2C2F8(&this->fields.evRaceBoost, evRace);
  if ( !questClearCostumeRelease )
    v51 = (struct CostumeReleaseAnnounce_array *)sub_B2C374(CostumeReleaseAnnounce___TypeInfo, 0LL);
  v53 = resultEvTowerRewardInfo;
  this->fields.questClearCostume = v51;
  sub_B2C2F8(&this->fields.questClearCostume, v51);
  if ( !questClearCostumeGet )
    v52 = (struct CostumeReleaseAnnounce_array *)sub_B2C374(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostumeGetInfo = v52;
  sub_B2C2F8(&this->fields.questClearCostumeGetInfo, v52);
  this->fields.eventTowerReward = evTowerReward;
  sub_B2C2F8(&this->fields.eventTowerReward, evTowerReward);
  if ( !resultEvTowerRewardInfo )
    v53 = (struct QuestRewardInfo_array *)sub_B2C374(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.resultEventTowerRewardInfo = v53;
  sub_B2C2F8(&this->fields.resultEventTowerRewardInfo, v53);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C88 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v54);
    byte_4183C88 = 1;
  }
  v55 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v55 = TerminalPramsManager_TypeInfo;
  }
  if ( v55->static_fields->_resultBoostItemRewardInfo_k__BackingField )
  {
    if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v55);
    if ( !byte_4183C88 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v54);
      byte_4183C88 = 1;
    }
    v56 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v56 = TerminalPramsManager_TypeInfo;
    }
    resultBoostItemRewardInfo_k__BackingField = v56->static_fields->_resultBoostItemRewardInfo_k__BackingField;
  }
  else
  {
    resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_B2C374(
                                                                                  QuestRewardInfo___TypeInfo,
                                                                                  0LL);
  }
  this->fields.resultBoostItemRewardInfo = resultBoostItemRewardInfo_k__BackingField;
  sub_B2C2F8(&this->fields.resultBoostItemRewardInfo, resultBoostItemRewardInfo_k__BackingField);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v58);
    byte_4183C7F = 1;
  }
  v59 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v59 = TerminalPramsManager_TypeInfo;
  }
  v60 = warClearRewardIn;
  if ( v59->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField )
  {
    if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v59);
    if ( !byte_4183C7F )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v58);
      byte_4183C7F = 1;
    }
    v61 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v61 = TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfo_k__BackingField = v61->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
  }
  else
  {
    resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_B2C374(
                                                                                            QuestRewardInfo___TypeInfo,
                                                                                            0LL);
  }
  v63 = questResultAfterEventRewardInfos;
  this->fields.resultEventBoardGameTokenRewardInfo = resultEventBoardGameTokenRewardInfo_k__BackingField;
  sub_B2C2F8(&this->fields.resultEventBoardGameTokenRewardInfo, resultEventBoardGameTokenRewardInfo_k__BackingField);
  this->fields.isDispOnly = dispOnly;
  if ( !warClearRewardIn )
    v60 = (struct WarClearReward_array *)sub_B2C374(WarClearReward___TypeInfo, 0LL);
  v64 = resultEventPanelRewardInfos;
  this->fields.warClearReward = v60;
  sub_B2C2F8(&this->fields.warClearReward, v60);
  this->fields.EventActivityPointEffectState = eventActivityPointEffectState;
  this->fields.isWarBoardClear = isWarBoardClear;
  if ( !questResultAfterEventRewardInfos )
    v63 = (struct BattleDropItem_array *)sub_B2C374(BattleDropItem___TypeInfo, 0LL);
  v65 = limitImageAnnounces;
  this->fields.questResultAfterEventRewardInfos = v63;
  sub_B2C2F8(&this->fields.questResultAfterEventRewardInfos, v63);
  if ( !resultEventPanelRewardInfos )
    v64 = (struct BattleDropItem_array *)sub_B2C374(BattleDropItem___TypeInfo, 0LL);
  this->fields.resultEventPanelRewardInfos = v64;
  sub_B2C2F8(&this->fields.resultEventPanelRewardInfos, v64);
  this->fields.panelEventPoint = panelEventPoint;
  if ( !limitImageAnnounces )
    v65 = (struct LimitImageAnnounce_array *)sub_B2C374(LimitImageAnnounce___TypeInfo, 0LL);
  this->fields.limitImageAnnounces = v65;
  sub_B2C2F8(&this->fields.limitImageAnnounces, v65);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C81 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v66);
    byte_4183C81 = 1;
  }
  v67 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
  }
  this->fields.isOrdealCallWarClear = v67->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4183C85 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v66);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4183C85 = 1;
  }
  if ( (BYTE3(v67->vtable._0_Equals.methodPtr) & 4) != 0 && !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventMuralId = v67->static_fields->_EventMuralId_k__BackingField;
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor_18940640(
        TerminalPramsManager_OldHeroineLawData_o *this,
        UserServantEntity_o *uSvtEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  __int128 v8; // q1
  __int128 v9; // q0
  __int64 v10; // x21
  __int64 v11; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_41847FD & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, uSvtEnt);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_41847FD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !uSvtEnt )
    sub_B2C434(v6, v7);
  v8 = *(_OWORD *)&uSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v13 = v14;
  this->fields.id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v13, 0LL);
  v9 = *(_OWORD *)&uSvtEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v9;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v12, 0LL);
  v11 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL);
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                              uSvtEnt->fields.limitCount,
                              0LL);
  this->fields.imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                   uSvtEnt->fields.imageLimitCount,
                                   0LL);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                  uSvtEnt->fields.dispLimitCount,
                                  0LL);
  this->fields.commandCardLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                         uSvtEnt->fields.commandCardLimitCount,
                                         0LL);
  this->fields.iconLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  int64_t id; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v7; // x0
  __int64 v8; // x1
  __int128 v9; // q1
  __int128 v10; // q1
  int32_t svtId; // w21
  UserServantEntity_o *result; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-40h]

  if ( (byte_41847FE & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_B2C35C(&UserServantEntity_TypeInfo, v4);
    byte_41847FE = 1;
  }
  v5 = sub_B2C42C(UserServantEntity_TypeInfo);
  UserServantEntity___ctor((UserServantEntity_o *)v5, 0LL);
  id = this->fields.id;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v13, id, 0LL);
  v14 = v13;
  if ( !v5 )
    sub_B2C434(v7, v8);
  v9 = *(_OWORD *)&v14.fields.fakeValue;
  *(_OWORD *)(v5 + 16) = *(_OWORD *)&v14.fields.currentCryptoKey;
  *(_OWORD *)(v5 + 32) = v9;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v13, this->fields.userId, 0LL);
  v10 = *(_OWORD *)&v13.fields.fakeValue;
  *(_OWORD *)(v5 + 48) = *(_OWORD *)&v13.fields.currentCryptoKey;
  *(_OWORD *)(v5 + 64) = v10;
  svtId = this->fields.svtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v5 + 80) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                    svtId,
                                                                    0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v5 + 96) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                    this->fields.limitCount,
                                                                    0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v5 + 112) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.imageLimitCount,
                                                                     0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v5 + 128) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.dispLimitCount,
                                                                     0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v5 + 144) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.commandCardLimitCount,
                                                                     0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v5 + 160) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.iconLimitCount,
                                                                     0LL);
  result = (UserServantEntity_o *)v5;
  *(_DWORD *)(v5 + 256) = this->fields.lv;
  *(_DWORD *)(v5 + 260) = this->fields.exp;
  *(_DWORD *)(v5 + 264) = this->fields.atk;
  *(_DWORD *)(v5 + 268) = this->fields.hp;
  *(_DWORD *)(v5 + 272) = this->fields.adjustAtk;
  *(_DWORD *)(v5 + 276) = this->fields.adjustHp;
  *(_DWORD *)(v5 + 280) = this->fields.skillLv1;
  *(_DWORD *)(v5 + 284) = this->fields.skillLv2;
  *(_DWORD *)(v5 + 288) = this->fields.skillLv3;
  *(_DWORD *)(v5 + 292) = this->fields.treasureDeviceLv1;
  *(_DWORD *)(v5 + 296) = this->fields.exceedCount;
  *(_DWORD *)(v5 + 300) = this->fields.status;
  *(_QWORD *)(v5 + 304) = this->fields.createdAt;
  return result;
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.oldUsrSvtData = 0LL;
  sub_B2C2F8(&this->fields, 0LL);
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_18940288(
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

  if ( (byte_41847FF & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_OldHeroineLawData_TypeInfo, qClearHeroineInfo);
    byte_41847FF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !qClearHeroineInfo )
    sub_B2C434(v5, v6);
  oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
  v8 = (TerminalPramsManager_OldHeroineLawData_o *)sub_B2C42C(TerminalPramsManager_OldHeroineLawData_TypeInfo);
  TerminalPramsManager_OldHeroineLawData___ctor_18940640(v8, oldUsrSvtData, v9);
  this->fields.oldUsrSvtData = v8;
  p_fields = &this->fields;
  sub_B2C2F8(p_fields, v8);
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

  if ( (byte_4184800 & 1) == 0 )
  {
    sub_B2C35C(&QuestClearHeroineInfo_TypeInfo, method);
    byte_4184800 = 1;
  }
  v3 = (QuestClearHeroineInfo_o *)sub_B2C42C(QuestClearHeroineInfo_TypeInfo);
  QuestClearHeroineInfo___ctor(v3, 0LL);
  oldUsrSvtData = this->fields.oldUsrSvtData;
  if ( !oldUsrSvtData
    || (oldUsrSvtData = (TerminalPramsManager_OldHeroineLawData_o *)TerminalPramsManager_OldHeroineLawData__GetLoad(
                                                                      oldUsrSvtData,
                                                                      v4),
        !v3) )
  {
    sub_B2C434(oldUsrSvtData, v4);
  }
  v3->fields.oldUsrSvtData = (struct UserServantEntity_o *)oldUsrSvtData;
  sub_B2C2F8(&v3->fields, oldUsrSvtData);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct TerminalPramsManager___c_StaticFields *static_fields; // x0

  if ( (byte_41847F5 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager___c_TypeInfo, v1);
    byte_41847F5 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(TerminalPramsManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TerminalPramsManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall TerminalPramsManager___c___ctor(TerminalPramsManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TerminalPramsManager___c___ReceiveQuestEndResultInfo_b__604_0(
        TerminalPramsManager___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  int32_t questId; // w19
  TerminalPramsManager_c *v5; // x0

  if ( (byte_41847F6 & 1) == 0 )
  {
    this = (TerminalPramsManager___c_o *)sub_B2C35C(&TerminalPramsManager_TypeInfo, n);
    byte_41847F6 = 1;
  }
  if ( !n )
    sub_B2C434(this, n);
  questId = n->fields.questId;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, n);
    byte_4183C7A = 1;
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
bool __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__607_0(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  if ( (byte_41847F7 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, *(_QWORD *)&v);
    byte_41847F7 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  return TerminalPramsManager__IsMainStoryForQuestId(v, 0LL);
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__607_3(
        TerminalPramsManager___c_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_B2C434(this, 0LL);
  return v->fields.id;
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__607_4(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  return v;
}


void __fastcall TerminalPramsManager___c__DisplayClass598_0___ctor(
        TerminalPramsManager___c__DisplayClass598_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager___c__DisplayClass598_0___CheckResumeEffectNT2_b__0(
        TerminalPramsManager___c__DisplayClass598_0_o *this,
        System_String_o *effectId,
        const MethodInfo *method)
{
  TerminalPramsManager___c__DisplayClass598_0_Fields *p_fields; // x19
  System_String_o *effectIdsStr; // t1
  System_String_o *v7; // x0

  if ( (byte_41847F8 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_26/*"\n"*/, effectId);
    byte_41847F8 = 1;
  }
  effectIdsStr = this->fields.effectIdsStr;
  p_fields = &this->fields;
  v7 = System_String__Concat_44307816(effectIdsStr, effectId, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
  p_fields->effectIdsStr = v7;
  sub_B2C2F8(p_fields, v7);
}


void __fastcall TerminalPramsManager___c__DisplayClass607_0___ctor(
        TerminalPramsManager___c__DisplayClass607_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


QuestEntity_o *__fastcall TerminalPramsManager___c__DisplayClass607_0___SendOpenedQuestIdToAdManager_b__1(
        TerminalPramsManager___c__DisplayClass607_0_o *this,
        int32_t v,
        const MethodInfo *method)
{
  QuestMaster_o *questMaster; // x0

  questMaster = this->fields.questMaster;
  if ( !questMaster )
    sub_B2C434(0LL, v);
  return QuestMaster__getQuestEntity(questMaster, v, 0LL);
}


bool __fastcall TerminalPramsManager___c__DisplayClass607_0___SendOpenedQuestIdToAdManager_b__2(
        TerminalPramsManager___c__DisplayClass607_0_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  UserQuestMaster_o *userQuestMaster; // x20
  int64_t UserId; // x0
  __int64 v7; // x1
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41847F9 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v);
    byte_41847F9 = 1;
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
    sub_B2C434(UserId, v7);
  }
  return 1;
}