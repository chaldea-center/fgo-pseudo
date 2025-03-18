void __fastcall TerminalPramsManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_HashSet_int__o *v8; // x19
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct TerminalPramsManager_StaticFields *v16; // x0
  void *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x0
  struct TerminalPramsManager_StaticFields *v25; // x8
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_List_object__o *v32; // x19
  PartyOrganizationUtility_o *p_eventScriptMessages; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct TerminalPramsManager_StaticFields *v40; // x8

  if ( (byte_4C1F4CB & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int___ctor__, v1);
    sub_1C3B764(&System_Collections_Generic_HashSet_int__TypeInfo, v2);
    sub_1C3B764(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1C3B764(&float___TypeInfo, v5);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_1/*""*/, v7);
    byte_4C1F4CB = 1;
  }
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_1C3B9B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_35415FC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->loginQuestNotifiedList = v8;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->loginQuestNotifiedList,
    (int64_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = TerminalPramsManager_TypeInfo->static_fields;
  v16->_IsMainInterludeWarClear_k__BackingField = 0;
  v17 = StringLiteral_1/*""*/;
  v16->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v16->mTerminalWarStartedIds, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  *(_OWORD *)&TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = xmmword_C0D8A0;
  v24 = sub_1C3B80C(float___TypeInfo, 3LL);
  v25 = TerminalPramsManager_TypeInfo->static_fields;
  v25->TipsArchiveScrollValueList = (struct System_Single_array *)v24;
  sub_1C3B708((PartyOrganizationUtility_o *)&v25->TipsArchiveScrollValueList, v24, v26, v27, v28, v29, v30, v31);
  TerminalPramsManager_TypeInfo->static_fields->joinGroupId = -1;
  v32 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
  p_eventScriptMessages = (PartyOrganizationUtility_o *)&TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  p_eventScriptMessages->klass = (PartyOrganizationUtility_c *)v32;
  sub_1C3B708(p_eventScriptMessages, (int64_t)v32, v34, v35, v36, v37, v38, v39);
  v40 = TerminalPramsManager_TypeInfo->static_fields;
  *(_QWORD *)&v40->EVENT_POINT_EFFECT_STATE_SUB = 0xFFFFFFFFLL;
  v40->EVENT_POINT_EFFECT_STATE_ADD = 1;
  *(_QWORD *)&v40->_ShopFocusItemId_k__BackingField = 0LL;
  v40->_CurrentWaveNum_k__BackingField = 0;
  v40->isInvisibleConnectAndLoad = 0;
  *(_QWORD *)&v40->ConnectMarkEventId = 0LL;
  v40->meSceneStatus = 0;
  v40->isCheckHomeExpirationDateEventMap = 1;
  v40->_IsMoveFolderByQuestAfterAction_k__BackingField = 0;
  *(_WORD *)&v40->IsEventMapLoading = 0;
  v40->_MasterMissionTargetType_k__BackingField = -1;
}


void __fastcall TerminalPramsManager__AddNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_4C1F4AB & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int__Add__, method);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v3);
    byte_4C1F4AB = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v4->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1C3B9C0(0LL, method);
  System_Collections_Generic_HashSet_int___Add(
    loginQuestNotifiedList,
    questId,
    (const MethodInfo_3542800 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall TerminalPramsManager__AutoOff(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F46D & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F46D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CCCA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1CCCA = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 0;
  if ( !byte_4C1F042 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4C1F042 = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  static_fields->_IsAutoShortcut_k__BackingField = 0;
  static_fields->mIsAutoOpenMasterMission = 0;
}


void __fastcall TerminalPramsManager__BlankEarthRank_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F49F & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11658/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, v2);
    byte_4C1F49F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F4EE )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F4EE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11658/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/,
    v3->static_fields->_BlankEarthRank_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__BlankEarthSpotId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F49E & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11659/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, v2);
    byte_4C1F49E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1E99E )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1E99E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11659/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/,
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

  if ( (byte_4C1F49D & 1) == 0 )
  {
    sub_1C3B764(&CommonUI_CampaignDirectBonusData___TypeInfo, v1);
    sub_1C3B764(&JsonManager_TypeInfo, v2);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_11660/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, v4);
    byte_4C1F49D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CAE4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1CAE4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_obj = &v5->static_fields->_CampaignDirectBonus_k__BackingField->obj;
  if ( !p_obj )
    p_obj = (Il2CppObject *)sub_1C3B80C(CommonUI_CampaignDirectBonusData___TypeInfo, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__toJson(p_obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11660/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, v7, 0LL);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  Il2CppObject *v13; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C1F4B9 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_SpotMaster___, v4);
    sub_1C3B764(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v5);
    sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C1F4B9 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !entity )
    goto LABEL_16;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0LL);
  if ( !v10 )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v10,
          &v13,
          (int32_t)Instance,
          (const MethodInfo_329AE94 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v13 )
LABEL_16:
    sub_1C3B9C0(Instance, v9);
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
            HIDWORD(v13[1].klass),
            (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall TerminalPramsManager__CheckClearSelectedStoryQuestId(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4C1F4A0 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F4A0 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F209 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F209 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->_SelectedStoryQuestId_k__BackingField >= 1 )
  {
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( !byte_4C1F209 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
      byte_4C1F209 = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    if ( v4->static_fields->_SelectedStoryQuestId_k__BackingField != questId )
    {
      if ( !v4->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v4);
      if ( !byte_4C1EDF6 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
        byte_4C1EDF6 = 1;
      }
      v5 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v5 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
      }
      *((_DWORD *)v5[2].virtualMethodPointer + 8) = 0;
      TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(v5);
    }
  }
}


bool __fastcall TerminalPramsManager__CheckEventActivityPointSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_4C1F488 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_13895/*"The string for white space contains an invalid character."*/, v1);
    sub_1C3B764(&StringLiteral_13896/*"The string must be null-terminated."*/, v2);
    byte_4C1F488 = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13895/*"The string for white space contains an invalid character."*/, 0LL)
      && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13896/*"The string must be null-terminated."*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckEventSubmarinePointSaveData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C1F48A & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_13897/*"The string was being parsed as an unsigned number and could not have a negative sign."*/, v1);
    byte_4C1F48A = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13897/*"The string was being parsed as an unsigned number and could not have a negative sign."*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckIsOrdealCallWarClear(WarEntity_o *warEntity, const MethodInfo *method)
{
  int32_t parentWarId; // w19
  BalanceConfig_c *v4; // x0

  if ( (byte_4C1F4C6 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    byte_4C1F4C6 = 1;
  }
  if ( !warEntity )
    return 0;
  parentWarId = warEntity->fields.parentWarId;
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
  __int64 v12; // x19
  const MethodInfo *v13; // x1
  TerminalPramsManager_c *v14; // x0
  ScrTerminalListTop_c *v15; // x8
  int32_t NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // w20
  const MethodInfo *v17; // x1
  ScrTerminalListTop_c *v18; // x0
  int32_t NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // w20
  ScrTerminalListTop_c *v20; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x20
  TerminalPramsManager_c *v23; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_List_object__o *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  void *v33; // x1
  System_Action_object__o *v34; // x22
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x19
  TerminalPramsManager_c *v43; // x0
  PartyOrganizationUtility_o *p_PlayedTerminalEffects_k__BackingField; // x0
  const MethodInfo *v45; // x0
  int32_t v46; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C1F4A4 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_string__TypeInfo, v1);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_string___, v2);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__ForEach__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Remove__, v4);
    sub_1C3B764(&ScrTerminalListTop_TypeInfo, v5);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    sub_1C3B764(&Method_TerminalPramsManager___c__DisplayClass696_0__CheckResumeEffectNT2_b__0__, v7);
    sub_1C3B764(&TerminalPramsManager___c__DisplayClass696_0_TypeInfo, v8);
    sub_1C3B764(&StringLiteral_43/*"\n"*/, v9);
    sub_1C3B764(&StringLiteral_89/*"\r\n"*/, v10);
    sub_1C3B764(&StringLiteral_1/*""*/, v11);
    byte_4C1F4A4 = 1;
  }
  v46 = 0;
  v12 = sub_1C3B9B0(TerminalPramsManager___c__DisplayClass696_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass696_0___ctor((TerminalPramsManager___c__DisplayClass696_0_o *)v12, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F4EC )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v13);
    byte_4C1F4EC = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( v14->static_fields->_PlayedTerminalEffects_k__BackingField )
  {
    v15 = ScrTerminalListTop_TypeInfo;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v15 = ScrTerminalListTop_TypeInfo;
      v14 = TerminalPramsManager_TypeInfo;
    }
    NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v15->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
    if ( !v14->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v14);
    if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID, v13) )
    {
      v18 = ScrTerminalListTop_TypeInfo;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v18 = ScrTerminalListTop_TypeInfo;
      }
      NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID = v18->static_fields->NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID, v17) )
      {
        v20 = ScrTerminalListTop_TypeInfo;
        if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
          v20 = ScrTerminalListTop_TypeInfo;
        }
        v46 = v20->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
        v22 = (Il2CppObject *)System_Int32__ToString((int32_t)&v46, 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1F4EC )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v21);
          byte_4C1F4EC = 1;
        }
        v23 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v23 = TerminalPramsManager_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v23->static_fields->_PlayedTerminalEffects_k__BackingField;
        if ( !PlayedTerminalEffects_k__BackingField
          || (PlayedTerminalEffects_k__BackingField = System_String__Replace_63388240(
                                                        PlayedTerminalEffects_k__BackingField,
                                                        (System_String_o *)StringLiteral_89/*"\r\n"*/,
                                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                                        0LL)) == 0LL
          || (v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                           PlayedTerminalEffects_k__BackingField,
                                                                           0xAu,
                                                                           0,
                                                                           0LL),
              (PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Linq_Enumerable__ToList_object_(
                                                                            v25,
                                                                            (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL)
          || (v26 = (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
              PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Collections_Generic_List_object___Remove(
                                                                           (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
                                                                           v22,
                                                                           (const MethodInfo_368D194 *)Method_System_Collections_Generic_List_string__Remove__),
              !v12) )
        {
          sub_1C3B9C0(PlayedTerminalEffects_k__BackingField, v21);
        }
        v33 = StringLiteral_1/*""*/;
        *(_QWORD *)(v12 + 16) = StringLiteral_1/*""*/;
        sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)v33, v27, v28, v29, v30, v31, v32);
        v34 = (System_Action_object__o *)sub_1C3B9B0(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v34,
          (Il2CppObject *)v12,
          Method_TerminalPramsManager___c__DisplayClass696_0__CheckResumeEffectNT2_b__0__,
          0LL);
        System_Collections_Generic_List_object___ForEach(
          v26,
          (System_Action_T__o *)v34,
          (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_string__ForEach__);
        v42 = *(_QWORD *)(v12 + 16);
        if ( !byte_4C1F4DD )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v35);
          byte_4C1F4DD = 1;
        }
        v43 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v43 = TerminalPramsManager_TypeInfo;
        }
        p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v43->static_fields->_PlayedTerminalEffects_k__BackingField;
        p_PlayedTerminalEffects_k__BackingField->klass = (PartyOrganizationUtility_c *)v42;
        sub_1C3B708(p_PlayedTerminalEffects_k__BackingField, v42, v36, v37, v38, v39, v40, v41);
        TerminalPramsManager__Save_SaveData(v45);
      }
    }
  }
}


void __fastcall TerminalPramsManager__ClearEventQuestIds_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F498 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11661/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, v2);
    byte_4C1F498 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA87 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1EA87 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11661/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/,
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

  if ( (byte_4C1F497 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11663/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, v2);
    sub_1C3B764(&StringLiteral_11662/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, v3);
    byte_4C1F497 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11663/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, v4->static_fields->ConnectMarkEventId, 0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11662/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/,
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  TerminalPramsManager_c *v12; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  void *v14; // x1

  if ( (byte_4C1F4BC & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v2);
    sub_1C3B764(&StringLiteral_1/*""*/, v3);
    byte_4C1F4BC = 1;
  }
  v4 = TerminalPramsManager_ClearData_TypeInfo;
  if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
    v4 = TerminalPramsManager_ClearData_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v4->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F500 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    byte_4C1F500 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v12->static_fields;
  static_fields->_isQuestRewardSetted_k__BackingField = 0;
  v14 = StringLiteral_1/*""*/;
  static_fields->lastPlayBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->lastPlayBgmName, (int64_t)v14, v6, v7, v8, v9, v10, v11);
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
  __int64 v46; // x1
  TerminalPramsManager_c *v47; // x0
  const MethodInfo *v48; // x0
  const MethodInfo *v49; // x0
  const MethodInfo *v50; // x0

  if ( (byte_4C1F47B & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11666/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/, v2);
    sub_1C3B764(&StringLiteral_13899/*"The supplied DateTime includes a TimeOfDay setting.   This is not supported."*/, v3);
    sub_1C3B764(&StringLiteral_5315/*"Duplicate name not allowed."*/, v4);
    sub_1C3B764(&StringLiteral_11672/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/, v5);
    sub_1C3B764(&StringLiteral_13895/*"The string for white space contains an invalid character."*/, v6);
    sub_1C3B764(&StringLiteral_11660/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, v7);
    sub_1C3B764(&StringLiteral_11667/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/, v8);
    sub_1C3B764(&StringLiteral_11677/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/, v9);
    sub_1C3B764(&StringLiteral_13900/*"The supplied DateTime must have the Kind property set to DateTimeKind.Unspecified or DateTimeKind.Utc."*/, v10);
    sub_1C3B764(&StringLiteral_5311/*"Duplicate AttributeUsageAttribute cannot be specified on an attribute type."*/, v11);
    sub_1C3B764(&StringLiteral_13897/*"The string was being parsed as an unsigned number and could not have a negative sign."*/, v12);
    sub_1C3B764(&StringLiteral_13906/*"The supplied {0} is an invalid size for the {1} end point."*/, v13);
    sub_1C3B764(&StringLiteral_11676/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, v14);
    sub_1C3B764(&StringLiteral_13914/*"The targetNamespace '{0}' of included/redefined schema should be the same as the targetNamespace '{1}' of the including schema."*/, v15);
    sub_1C3B764(&StringLiteral_13898/*"The sum of the BaseUtcOffset and DaylightDelta properties must within plus or minus 14.0 hours."*/, v16);
    sub_1C3B764(&StringLiteral_11669/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/, v17);
    sub_1C3B764(&StringLiteral_13901/*"The supplied DateTime must have the Kind property set to DateTimeKind.Unspecified."*/, v18);
    sub_1C3B764(&StringLiteral_11668/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/, v19);
    sub_1C3B764(&StringLiteral_11673/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/, v20);
    sub_1C3B764(&StringLiteral_11678/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, v21);
    sub_1C3B764(&StringLiteral_11661/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, v22);
    sub_1C3B764(&StringLiteral_11670/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/, v23);
    sub_1C3B764(&StringLiteral_5316/*"Duplicated declaration '{0}'."*/, v24);
    sub_1C3B764(&StringLiteral_5313/*"Duplicate attribute : "*/, v25);
    sub_1C3B764(&StringLiteral_13909/*"The table ({0}) cannot be the child table to itself in a nested relation: the DataSet name conflicts with the table name."*/, v26);
    sub_1C3B764(&StringLiteral_11675/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, v27);
    sub_1C3B764(&StringLiteral_11681/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/, v28);
    sub_1C3B764(&StringLiteral_13913/*"The target namespace of an attribute declaration, whether local or global, must not match http://www.w3.org/2001/XMLSchema-instance."*/, v29);
    sub_1C3B764(&StringLiteral_13918/*"The tasks argument contains no tasks."*/, v30);
    sub_1C3B764(&StringLiteral_13911/*"The table [{0}] involved in more than one relation. You must explicitly mention a relation name in the expression '{1}'."*/, v31);
    sub_1C3B764(&StringLiteral_13915/*"The targetNamespace attribute cannot have empty string as its value."*/, v32);
    sub_1C3B764(&StringLiteral_13896/*"The string must be null-terminated."*/, v33);
    sub_1C3B764(&StringLiteral_11659/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, v34);
    sub_1C3B764(&StringLiteral_11664/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, v35);
    sub_1C3B764(&StringLiteral_5314/*"Duplicate attribute."*/, v36);
    sub_1C3B764(&StringLiteral_13919/*"The tasks argument included a null value."*/, v37);
    sub_1C3B764(&StringLiteral_5310/*"Dup"*/, v38);
    sub_1C3B764(&StringLiteral_11663/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, v39);
    sub_1C3B764(&StringLiteral_13917/*"The task has been disposed."*/, v40);
    sub_1C3B764(&StringLiteral_11662/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, v41);
    sub_1C3B764(&StringLiteral_11671/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/, v42);
    sub_1C3B764(&StringLiteral_13904/*"The supplied schema contains particles other than Sequence and Choice. Only schemas generated by this tool are supported."*/, v43);
    sub_1C3B764(&StringLiteral_5312/*"Duplicate ID attribute."*/, v44);
    sub_1C3B764(&StringLiteral_13916/*"The targetNamespace parameter '{0}' should be the same value as the targetNamespace '{1}' of the schema."*/, v45);
    sub_1C3B764(&StringLiteral_11680/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, v46);
    byte_4C1F47B = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13898/*"The sum of the BaseUtcOffset and DaylightDelta properties must within plus or minus 14.0 hours."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13918/*"The tasks argument contains no tasks."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13911/*"The table [{0}] involved in more than one relation. You must explicitly mention a relation name in the expression '{1}'."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13909/*"The table ({0}) cannot be the child table to itself in a nested relation: the DataSet name conflicts with the table name."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13904/*"The supplied schema contains particles other than Sequence and Choice. Only schemas generated by this tool are supported."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13906/*"The supplied {0} is an invalid size for the {1} end point."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13899/*"The supplied DateTime includes a TimeOfDay setting.   This is not supported."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13901/*"The supplied DateTime must have the Kind property set to DateTimeKind.Unspecified."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13919/*"The tasks argument included a null value."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5316/*"Duplicated declaration '{0}'."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5313/*"Duplicate attribute : "*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5312/*"Duplicate ID attribute."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5314/*"Duplicate attribute."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5315/*"Duplicate name not allowed."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5310/*"Dup"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5311/*"Duplicate AttributeUsageAttribute cannot be specified on an attribute type."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13914/*"The targetNamespace '{0}' of included/redefined schema should be the same as the targetNamespace '{1}' of the including schema."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13915/*"The targetNamespace attribute cannot have empty string as its value."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13900/*"The supplied DateTime must have the Kind property set to DateTimeKind.Unspecified or DateTimeKind.Utc."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13913/*"The target namespace of an attribute declaration, whether local or global, must not match http://www.w3.org/2001/XMLSchema-instance."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13916/*"The targetNamespace parameter '{0}' should be the same value as the targetNamespace '{1}' of the schema."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13917/*"The task has been disposed."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13895/*"The string for white space contains an invalid character."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13896/*"The string must be null-terminated."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13897/*"The string was being parsed as an unsigned number and could not have a negative sign."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11676/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11675/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11677/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11678/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11666/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11667/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11672/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11669/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11670/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11671/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11681/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11663/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11662/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11680/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11661/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11668/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11664/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11673/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11660/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11659/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, 0LL);
  v47 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__InitParameter((const MethodInfo *)v47);
  TerminalPramsManager__DeleteClearDatas(v48);
  TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(v49);
  TerminalPramsManager__DeleteQuestRandomGroupList(v50);
}


void __fastcall TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  PartyOrganizationUtility_o *p_EventRaidDefeatedEffectInfo_k__BackingField; // x0

  if ( (byte_4C1F4BD & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11665/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/, v8);
    byte_4C1F4BD = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F501 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F501 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  p_EventRaidDefeatedEffectInfo_k__BackingField = (PartyOrganizationUtility_o *)&v9->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  p_EventRaidDefeatedEffectInfo_k__BackingField->klass = 0LL;
  sub_1C3B708(p_EventRaidDefeatedEffectInfo_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11665/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/, 0LL);
}


void __fastcall TerminalPramsManager__DeleteQuestRandomGroupList(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  PartyOrganizationUtility_o *p_QuestRandomGroupList_k__BackingField; // x0

  if ( (byte_4C1F4C2 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11674/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/, v8);
    byte_4C1F4C2 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F503 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F503 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  p_QuestRandomGroupList_k__BackingField = (PartyOrganizationUtility_o *)&v9->static_fields->_QuestRandomGroupList_k__BackingField;
  p_QuestRandomGroupList_k__BackingField->klass = 0LL;
  sub_1C3B708(p_QuestRandomGroupList_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11674/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/, 0LL);
}


bool __fastcall TerminalPramsManager__EnableResumeToBlankEarthMap(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C1F4C9 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, method);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v3);
    byte_4C1F4C9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsBlankEarthWarByWarId(warId, method) )
    return 1;
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__ExistBlankEarthTutorial((const MethodInfo *)v4) )
    return 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v6);
  return QuestTree__IsActiveWar((QuestTree_o *)Instance, warId, 0LL);
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

  if ( (byte_4C1F484 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_13900/*"The supplied DateTime must have the Kind property set to DateTimeKind.Unspecified or DateTimeKind.Utc."*/, v2);
    sub_1C3B764(&StringLiteral_13913/*"The target namespace of an attribute declaration, whether local or global, must not match http://www.w3.org/2001/XMLSchema-instance."*/, v3);
    byte_4C1F484 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F4E8 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F4E8 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13900/*"The supplied DateTime must have the Kind property set to DateTimeKind.Unspecified or DateTimeKind.Utc."*/,
    v4->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4C1F4E9 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    byte_4C1F4E9 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  BeforeTimeEventDailyPoint_k__BackingField = v6->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v7 = System_Int64__ToString((int64_t)&BeforeTimeEventDailyPoint_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13913/*"The target namespace of an attribute declaration, whether local or global, must not match http://www.w3.org/2001/XMLSchema-instance."*/, v7, 0LL);
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

  if ( (byte_4C1F483 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_13914/*"The targetNamespace '{0}' of included/redefined schema should be the same as the targetNamespace '{1}' of the including schema."*/, v2);
    sub_1C3B764(&StringLiteral_13915/*"The targetNamespace attribute cannot have empty string as its value."*/, v3);
    byte_4C1F483 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F204 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F204 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13914/*"The targetNamespace '{0}' of included/redefined schema should be the same as the targetNamespace '{1}' of the including schema."*/,
    v4->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_4C1F205 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    byte_4C1F205 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13915/*"The targetNamespace attribute cannot have empty string as its value."*/,
    v6->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall TerminalPramsManager__ExistBlankEarthTutorial(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  System_Collections_ICollection_o *AvailableTutorialArray; // x0

  if ( (byte_4C1F4C8 & 1) == 0 )
  {
    sub_1C3B764(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v1);
    byte_4C1F4C8 = 1;
  }
  v2 = sub_1C3B9B0(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v2, 0LL);
  if ( !v2 )
    sub_1C3B9C0(v3, v4);
  *(_QWORD *)(v2 + 16) = 0x5300000000LL;
  AvailableTutorialArray = (System_Collections_ICollection_o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                                 (EventTutorialMaster_EventTutorialArgs_o *)v2,
                                                                 0LL);
  return !BasicHelper__IsNullOrEmpty(AvailableTutorialArray, 0LL);
}


float __fastcall TerminalPramsManager__GetAutoIntpTime(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t targetFrameRate; // w0

  if ( (byte_4C1F476 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Application_TypeInfo, v1);
    byte_4C1F476 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
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
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C1F4A9 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, method);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v3);
    byte_4C1F4A9 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  value = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  folderLastIdxs = v4->static_fields->folderLastIdxs;
  if ( !folderLastIdxs )
    return 0;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs;
    if ( !folderLastIdxs )
      sub_1C3B9C0(v6, v7);
  }
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         folderLastIdxs,
         warId,
         &value,
         (const MethodInfo_32ED764 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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

  if ( (byte_4C1F477 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v2);
    byte_4C1F477 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA90 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v2);
    byte_4C1EA90 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( !v4->static_fields->_IsAutoResume_k__BackingField )
    return time;
  if ( !v4->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v4);
  if ( !byte_4C1F05C )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v2);
    byte_4C1F05C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( v5->static_fields->_IsMapReturnFolder_k__BackingField )
    return time;
  if ( !v5->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v5);
  return TerminalPramsManager__GetAutoIntpTime((const MethodInfo *)v5);
}


int32_t __fastcall TerminalPramsManager__GetQuestReleasedFocusState(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v5; // x1

  if ( (byte_4C1F4AF & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F4AF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v3);
  if ( !QuestFocusStateManager )
    sub_1C3B9C0(0LL, v5);
  return QuestFocusStateManager__GetFocusState(QuestFocusStateManager, questId, 0LL);
}


void __fastcall TerminalPramsManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F47D & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F47D = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__InitParameter((const MethodInfo *)v2);
}


void __fastcall TerminalPramsManager__InitMessageWindowData(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  struct System_String_o *v10; // x20
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  TerminalPramsManager_c *v19; // x0
  struct TerminalPramsManager_StaticFields *v20; // x0

  if ( (byte_4C1F4A7 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_1/*""*/, v8);
    byte_4C1F4A7 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1DCA6 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1DCA6 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsDispOnly_k__BackingField = 0;
  v10 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4C1F045 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C1F045 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = v10;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_QuestWindowMessage_k__BackingField,
    (int64_t)v10,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_4C1F044 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v12);
    byte_4C1F044 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v19->static_fields->_MessageDispType_k__BackingField = 0;
  if ( !byte_4C1DCA5 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v12);
    v19 = TerminalPramsManager_TypeInfo;
    byte_4C1DCA5 = 1;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v20 = v19->static_fields;
  v20->_BattleSetupKeep_k__BackingField = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&v20->_BattleSetupKeep_k__BackingField, 0LL, v13, v14, v15, v16, v17, v18);
}


void __fastcall TerminalPramsManager__InitParameter(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  TerminalPramsManager_c *v18; // x0
  struct TerminalPramsManager_StaticFields *v19; // x0
  void *v20; // x1
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  TerminalPramsManager_c *v28; // x0
  PartyOrganizationUtility_o *p_timeStatusRecord_k__BackingField; // x0
  __int64 v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  TerminalPramsManager_c *v37; // x0
  PartyOrganizationUtility_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  void *v39; // x1
  PartyOrganizationUtility_o *p_lastPlayBgmName; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  TerminalPramsManager_c *v54; // x0
  struct TerminalPramsManager_StaticFields *v55; // x0
  __int64 v56; // x1
  TerminalPramsManager_c *v57; // x0
  const MethodInfo *v58; // x0
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  TerminalPramsManager_c *v66; // x0
  PartyOrganizationUtility_c *v67; // x20
  PartyOrganizationUtility_o *p_PlayedTerminalEffects_k__BackingField; // x0
  __int64 v69; // x1
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  TerminalPramsManager_c *v76; // x0
  struct TerminalPramsManager_StaticFields *v77; // x8
  PartyOrganizationUtility_c *v78; // x20
  PartyOrganizationUtility_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  __int64 v80; // x1
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  TerminalPramsManager_c *v87; // x0
  struct TerminalPramsManager_StaticFields *v88; // x0
  __int64 v89; // x1
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  TerminalPramsManager_c *v96; // x0
  struct TerminalPramsManager_StaticFields *v97; // x0
  __int64 v98; // x1
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  TerminalPramsManager_c *v105; // x0
  struct System_String_o *v106; // x20
  struct TerminalPramsManager_StaticFields *v107; // x8

  if ( (byte_4C1F47C & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_1/*""*/, v8);
    byte_4C1F47C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA8F )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1EA8F = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4C1EA8E )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C1EA8E = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_SpotId_k__BackingField = 0;
  if ( !byte_4C1EA89 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C1EA89 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_QuestId_k__BackingField = 0;
  if ( !byte_4C1ECD9 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C1ECD9 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_LastPlayedQuestId_k__BackingField = 0;
  if ( !byte_4C1F4D3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C1F4D3 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
  if ( !byte_4C1ECDA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C1ECDA = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = 0;
  if ( !byte_4C1ECD5 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C1ECD5 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_AfterActionFocusQuestId_k__BackingField = 0;
  if ( !byte_4C1EDF6 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C1EDF6 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
  if ( !byte_4C1DEB2 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C1DEB2 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  if ( !byte_4C1EDF7 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C1EDF7 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
  if ( !byte_4C1F073 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C1F073 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 0;
  if ( !byte_4C1F071 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C1F071 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
  if ( !byte_4C1E64E )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C1E64E = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    0LL,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_4C1EA8D )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v11);
    byte_4C1EA8D = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_PhaseCnt_k__BackingField = 0;
  if ( !byte_4C1EA8A )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v11);
    v18 = TerminalPramsManager_TypeInfo;
    byte_4C1EA8A = 1;
  }
  if ( !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_EndTime_k__BackingField = 0LL;
  if ( !byte_4C1EA8C )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v11);
    v18 = TerminalPramsManager_TypeInfo;
    byte_4C1EA8C = 1;
  }
  if ( !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v19 = v18->static_fields;
  v19->_IsDoneShortcut_k__BackingField = 0;
  v20 = StringLiteral_1/*""*/;
  v19->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v19->mTerminalWarStartedIds, (int64_t)v20, v12, v13, v14, v15, v16, v17);
  if ( !byte_4C1F4D4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v21);
    byte_4C1F4D4 = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->mDebug_IsQuestReleaseAll = 0;
  if ( !byte_4C1F4D5 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v21);
    v28 = TerminalPramsManager_TypeInfo;
    byte_4C1F4D5 = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->mDebug_IsDummyErrorSelect = 0;
  if ( !byte_4C1F4D6 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v21);
    v28 = TerminalPramsManager_TypeInfo;
    byte_4C1F4D6 = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->mDebug_IsBuildInfoDisp = 0;
  if ( !byte_4C1F078 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v21);
    v28 = TerminalPramsManager_TypeInfo;
    byte_4C1F078 = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->_TimeStatusEventId_k__BackingField = 0;
  if ( !byte_4C1F079 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v21);
    v28 = TerminalPramsManager_TypeInfo;
    byte_4C1F079 = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->_TimeStatusLoopCount_k__BackingField = 0;
  if ( !byte_4C1F4D7 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v21);
    v28 = TerminalPramsManager_TypeInfo;
    byte_4C1F4D7 = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = TerminalPramsManager_TypeInfo;
  }
  p_timeStatusRecord_k__BackingField = (PartyOrganizationUtility_o *)&v28->static_fields->_timeStatusRecord_k__BackingField;
  p_timeStatusRecord_k__BackingField->klass = 0LL;
  sub_1C3B708(p_timeStatusRecord_k__BackingField, 0LL, v22, v23, v24, v25, v26, v27);
  if ( !byte_4C1F4D8 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v30);
    byte_4C1F4D8 = 1;
  }
  v37 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v37 = TerminalPramsManager_TypeInfo;
  }
  v37->static_fields->_EventDailyPointEventId_k__BackingField = 0;
  if ( !byte_4C1F4D9 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v30);
    v37 = TerminalPramsManager_TypeInfo;
    byte_4C1F4D9 = 1;
  }
  if ( !v37->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v37);
    v37 = TerminalPramsManager_TypeInfo;
  }
  v37->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = 0LL;
  if ( !byte_4C1F4DA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v30);
    v37 = TerminalPramsManager_TypeInfo;
    byte_4C1F4DA = 1;
  }
  if ( !v37->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v37);
    v37 = TerminalPramsManager_TypeInfo;
  }
  v37->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
  if ( !byte_4C1F4DB )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v30);
    v37 = TerminalPramsManager_TypeInfo;
    byte_4C1F4DB = 1;
  }
  if ( !v37->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v37);
    v37 = TerminalPramsManager_TypeInfo;
  }
  v37->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
  if ( !byte_4C1EB7D )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v30);
    v37 = TerminalPramsManager_TypeInfo;
    byte_4C1EB7D = 1;
  }
  if ( !v37->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v37);
    v37 = TerminalPramsManager_TypeInfo;
  }
  p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v37->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  p_BeforeEventSubmarineSaveData_k__BackingField->klass = 0LL;
  sub_1C3B708(p_BeforeEventSubmarineSaveData_k__BackingField, 0LL, v31, v32, v33, v34, v35, v36);
  v39 = StringLiteral_1/*""*/;
  p_lastPlayBgmName = (PartyOrganizationUtility_o *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayBgmName;
  p_lastPlayBgmName->klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  sub_1C3B708(p_lastPlayBgmName, (int64_t)v39, v41, v42, v43, v44, v45, v46);
  v54 = TerminalPramsManager_TypeInfo;
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayQuestConsumeAp = 0LL;
  if ( !byte_4C1F4DC )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v47);
    v54 = TerminalPramsManager_TypeInfo;
    byte_4C1F4DC = 1;
  }
  if ( !v54->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v54);
    v54 = TerminalPramsManager_TypeInfo;
  }
  v55 = v54->static_fields;
  v55->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v55->_SpecifiedChangeSceneInfo_k__BackingField,
    0LL,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  if ( !byte_4C1F216 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v56);
    byte_4C1F216 = 1;
  }
  v57 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v57->static_fields->_EventBoardGameSquareIndex_k__BackingField = 0;
  if ( !byte_4C1F218 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v56);
    v57 = TerminalPramsManager_TypeInfo;
    byte_4C1F218 = 1;
  }
  if ( !v57->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v57);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v57->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = 0;
  if ( !byte_4C1F21A )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v56);
    v57 = TerminalPramsManager_TypeInfo;
    byte_4C1F21A = 1;
  }
  if ( !v57->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v57);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v57->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
  if ( !byte_4C1F4D0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v56);
    v57 = TerminalPramsManager_TypeInfo;
    byte_4C1F4D0 = 1;
  }
  if ( !v57->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v57);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v57->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v57);
  TerminalPramsManager__ResetResumeScriptWithMap(v58);
  if ( !byte_4C1F063 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v59);
    byte_4C1F063 = 1;
  }
  v66 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v66 = TerminalPramsManager_TypeInfo;
  }
  v66->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
  v67 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( !byte_4C1F4DD )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v59);
    v66 = TerminalPramsManager_TypeInfo;
    byte_4C1F4DD = 1;
  }
  if ( !v66->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v66);
    v66 = TerminalPramsManager_TypeInfo;
  }
  p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v66->static_fields->_PlayedTerminalEffects_k__BackingField;
  p_PlayedTerminalEffects_k__BackingField->klass = v67;
  sub_1C3B708(p_PlayedTerminalEffects_k__BackingField, (int64_t)v67, v60, v61, v62, v63, v64, v65);
  if ( !byte_4C1F2F5 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v69);
    byte_4C1F2F5 = 1;
  }
  v76 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = 0;
  if ( !byte_4C1F2F6 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4C1F2F6 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = 0;
  if ( !byte_4C1F207 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4C1F207 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v77 = v76->static_fields;
  v77->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  *(_QWORD *)&v77->ConnectMarkEventId = 0LL;
  if ( !byte_4C1F4DE )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4C1F4DE = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_isFortificationCheck_k__BackingField = 0;
  if ( !byte_4C1F4DF )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4C1F4DF = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !byte_4C1F4E0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4C1F4E0 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !byte_4C1F20F )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4C1F20F = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4C1F069 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4C1F069 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_4C1F20D )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4C1F20D = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_4C1F20E )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4C1F20E = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_4C1F20C )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4C1F20C = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_4C1F20F )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4C1F20F = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4C1F201 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4C1F201 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 0.0;
  if ( !byte_4C1F4E1 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4C1F4E1 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  if ( !byte_4C1EDF4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4C1EDF4 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_4C1D2FC )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4C1D2FC = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_PlayerGenderType_k__BackingField = 0;
  if ( !byte_4C1F4E2 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4C1F4E2 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  v78 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( !byte_4C1F214 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4C1F214 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  p_SceneMoveQuestClearedInfo_k__BackingField = (PartyOrganizationUtility_o *)&v76->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
  p_SceneMoveQuestClearedInfo_k__BackingField->klass = v78;
  sub_1C3B708(p_SceneMoveQuestClearedInfo_k__BackingField, (int64_t)v78, v70, v71, v72, v73, v74, v75);
  if ( !byte_4C1F4E3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v80);
    byte_4C1F4E3 = 1;
  }
  v87 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v87 = TerminalPramsManager_TypeInfo;
  }
  v88 = v87->static_fields;
  v88->_CampaignBonus_k__BackingField = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&v88->_CampaignBonus_k__BackingField, 0LL, v81, v82, v83, v84, v85, v86);
  if ( !byte_4C1F4E4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v89);
    byte_4C1F4E4 = 1;
  }
  v96 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v96 = TerminalPramsManager_TypeInfo;
  }
  v97 = v96->static_fields;
  v97->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v97->_CampaignDirectBonus_k__BackingField,
    0LL,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  if ( !byte_4C1F4E5 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v98);
    byte_4C1F4E5 = 1;
  }
  v105 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v105 = TerminalPramsManager_TypeInfo;
  }
  v105->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
  v106 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4C1CAE6 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v98);
    v105 = TerminalPramsManager_TypeInfo;
    byte_4C1CAE6 = 1;
  }
  if ( !v105->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v105);
    v105 = TerminalPramsManager_TypeInfo;
  }
  v107 = v105->static_fields;
  v107->_TransitionScrollTabName_k__BackingField = v106;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v107->_TransitionScrollTabName_k__BackingField,
    (int64_t)v106,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
}


void __fastcall TerminalPramsManager__InitTipsArchiveScrollValueList(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  unsigned __int64 i; // x20
  struct System_Single_array *TipsArchiveScrollValueList; // x8
  struct System_Single_array *v5; // x8
  char *v6; // x8

  if ( (byte_4C1F4CA & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F4CA = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  for ( i = 0LL; ; ++i )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      v2 = TerminalPramsManager_TypeInfo;
    }
    TipsArchiveScrollValueList = v2->static_fields->TipsArchiveScrollValueList;
    if ( !TipsArchiveScrollValueList )
LABEL_14:
      sub_1C3B9C0(v2, v1);
    if ( (__int64)i >= (int)TipsArchiveScrollValueList->max_length )
      break;
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      v2 = TerminalPramsManager_TypeInfo;
    }
    v5 = v2->static_fields->TipsArchiveScrollValueList;
    if ( !v5 )
      goto LABEL_14;
    if ( i >= v5->max_length )
      sub_1C3B9C8(v2, v1);
    v6 = (char *)v5 + 4 * i;
    *((_DWORD *)v6 + 8) = 0;
  }
}


bool __fastcall TerminalPramsManager__IsAuto(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4C1F46A & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F46A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA90 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1EA90 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( v2->static_fields->_IsAutoResume_k__BackingField )
    return 1;
  if ( !v2->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v2);
  if ( !byte_4C1F4CD )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F4CD = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v14; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C1F46C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventDetailMaster___, v1);
    sub_1C3B764(&Method_DataManager_GetMasterData_WarMaster___, v2);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_1C3B764(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    byte_4C1F46C = 1;
  }
  entity = 0LL;
  v14 = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA90 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1EA90 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( !v7->static_fields->_IsAutoResume_k__BackingField )
    return 0;
  if ( !v7->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v7);
  if ( !byte_4C1EA88 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1EA88 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_WarId_k__BackingField < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA88 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v10);
    byte_4C1EA88 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_34;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 4LL),
          (const MethodInfo_329AE94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !entity)
    || !Instance )
  {
LABEL_34:
    sub_1C3B9C0(Instance, v10);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v14,
          (int32_t)entity[6].klass,
          (const MethodInfo_329AE94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)v14;
  if ( !v14 )
    goto LABEL_34;
  return EventDetailEntity__IsTimeProgressEvent((EventDetailEntity_o *)v14, 0LL);
}


bool __fastcall TerminalPramsManager__IsBlankEarthWarByWarId(int32_t targetWarId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  void *WarInfoByWarID; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w1
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v13; // 0:x0.8

  if ( (byte_4C1F4C7 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&Method_System_Nullable_int__GetValueOrDefault__, v3);
    sub_1C3B764(&Method_System_Nullable_int___ctor__, v4);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    byte_4C1F4C7 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( v6->static_fields->OrdealCallWarId == targetWarId )
  {
    LOBYTE(WarInfoByWarID) = 1;
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      sub_1C3B9C0(0LL, v9);
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, targetWarId, 0LL);
    if ( WarInfoByWarID )
    {
      WarInfoByWarID = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)WarInfoByWarID, 0LL);
      if ( WarInfoByWarID )
      {
        v10 = *((_DWORD *)WarInfoByWarID + 31);
        v13 = (System_Nullable_int__o)&v12;
        v12 = 0LL;
        System_Nullable_int____ctor(v13, v10, (const MethodInfo_37A8420 *)Method_System_Nullable_int___ctor__);
        LOBYTE(WarInfoByWarID) = HIDWORD(v12) != 0;
      }
    }
  }
  return (char)WarInfoByWarID;
}


void __fastcall TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F49A & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11664/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, v2);
    byte_4C1F49A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F20B )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F20B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11664/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/,
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
  QuestMaster_o *Master_object; // x0
  __int64 v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  int klass_high; // w19
  BalanceConfig_c *v11; // x0
  Il2CppObject *v13; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C1F4C5 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestMaster___, v4);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v6);
    byte_4C1F4C5 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_20;
  if ( !QuestMaster__TryGetQuestEntity(Master_object, &entity, questId, 0LL) )
    return 0;
  Master_object = (QuestMaster_o *)entity;
  if ( !entity )
    goto LABEL_20;
  if ( QuestEntity__GetTypeFlag(entity, 0LL) != 4 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !entity
    || (v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
        Master_object = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0LL),
        !v9) )
  {
LABEL_20:
    sub_1C3B9C0(Master_object, v8);
  }
  Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v9,
                                     &v13,
                                     (int32_t)Master_object,
                                     (const MethodInfo_329AE94 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  if ( !v13 )
    goto LABEL_20;
  klass_high = HIDWORD(v13[1].klass);
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  return klass_high == v11->static_fields->OrdealCallWarId;
}


bool __fastcall TerminalPramsManager__IsMainStory(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C1F4B7 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_WarMaster___, v3);
    sub_1C3B764(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C1F4B7 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  entity = 0LL;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( static_fields->FesWarId != warId )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    if ( !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
            warId,
            (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_WarMaster___);
        if ( Instance )
        {
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       &entity,
                                       warId,
                                       (const MethodInfo_329AE94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( entity )
            return LODWORD(entity[6].klass) == 0;
        }
      }
      sub_1C3B9C0(Instance, v11);
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
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  int32_t klass_high; // w19
  Il2CppObject *v13; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C1F4B8 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_SpotMaster___, v3);
    sub_1C3B764(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    byte_4C1F4B8 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_SpotMaster___),
        !entity)
    || (v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (Il2CppObject *)QuestEntity__getSpotId(entity, 0LL),
        !v9) )
  {
LABEL_16:
    sub_1C3B9C0(Instance, v8);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               v9,
                               &v13,
                               (int32_t)Instance,
                               (const MethodInfo_329AE94 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !v13 )
    goto LABEL_16;
  klass_high = HIDWORD(v13[1].klass);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStory(klass_high, v8);
}


bool __fastcall TerminalPramsManager__IsMustPlayMainStory(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C1F4B6 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, v3);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v4);
    byte_4C1F4B6 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  if ( System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v5->static_fields->NotRequiredPlayWarIds,
         warId,
         (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return 0;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStory(warId, v6);
}


bool __fastcall TerminalPramsManager__IsNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_4C1F4AA & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int__Contains__, method);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v3);
    byte_4C1F4AA = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v4->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1C3B9C0(0LL, method);
  return System_Collections_Generic_HashSet_int___Contains(
           loginQuestNotifiedList,
           questId,
           (const MethodInfo_3541CF0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F493 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11670/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/, v2);
    byte_4C1F493 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F067 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F067 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11670/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/,
    v3->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F492 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11669/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/, v2);
    byte_4C1F492 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F066 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F066 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11669/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/,
    v3->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectNt2AfterAction_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F494 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11671/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/, v2);
    byte_4C1F494 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F206 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F206 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11671/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/,
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
  System_Collections_Generic_Dictionary_int__object__o *v7; // x0
  __int64 v8; // x8
  char v9; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C1F4C1 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, *(_QWORD *)&day);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    byte_4C1F4C1 = 1;
  }
  value = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F502 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    byte_4C1F502 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_QWORD *)&v7[2].fields._entries->m_Items[17].fields.hashCode;
  if ( !v8 || (v7 = *(System_Collections_Generic_Dictionary_int__object__o **)(v8 + 16)) == 0LL )
    sub_1C3B9C0(v7, *(_QWORD *)&day);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         v7,
         eventId,
         &value,
         (const MethodInfo_32F6328 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v9 = (char)value;
    if ( value )
      v9 = System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             day,
             (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__);
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
  ScrTerminalListTop_c *v4; // x0
  int32_t NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // w19
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  clsQuestCheck_o *v8; // x19
  clsQuestCheck_o *v9; // x19
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0
  ScrTerminalListTop_c *v12; // x8
  int32_t QuestId_k__BackingField; // w19
  TerminalPramsManager_c *v14; // x0

  if ( (byte_4C1F4A3 & 1) == 0 )
  {
    sub_1C3B764(&ScrTerminalListTop_TypeInfo, v1);
    sub_1C3B764(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v2);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v3);
    byte_4C1F4A3 = 1;
  }
  v4 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v4 = ScrTerminalListTop_TypeInfo;
  }
  NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID = v4->static_fields->NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID, v1) )
    return 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v8 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v8 )
    goto LABEL_34;
  if ( !clsQuestCheck__IsQuestClear(
          v8,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0LL) )
    return 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v9 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v9 )
LABEL_34:
    sub_1C3B9C0(Instance, v7);
  if ( !clsQuestCheck__IsWarClear(
          v9,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
          0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1CBC4 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v10);
      byte_4C1CBC4 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v12 = ScrTerminalListTop_TypeInfo;
    QuestId_k__BackingField = v11->static_fields->_QuestId_k__BackingField;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v12 = ScrTerminalListTop_TypeInfo;
    }
    if ( QuestId_k__BackingField == v12->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1CBC3 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v10);
        byte_4C1CBC3 = 1;
      }
      v14 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  TerminalPramsManager_c *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x19
  TerminalPramsManager_c *v7; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  System_String_c *klass; // x8
  System_String_o *v10; // x20
  unsigned __int64 v11; // x21
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = effectId;
  if ( (byte_4C1F4A1 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_43/*"\n"*/, v2);
    sub_1C3B764(&StringLiteral_89/*"\r\n"*/, v3);
    byte_4C1F4A1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F4EC )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F4EC = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( !v4->static_fields->_PlayedTerminalEffects_k__BackingField )
    goto LABEL_25;
  v6 = System_Int32__ToString((int32_t)&v13, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F4EC )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    byte_4C1F4EC = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  PlayedTerminalEffects_k__BackingField = v7->static_fields->_PlayedTerminalEffects_k__BackingField;
  if ( !PlayedTerminalEffects_k__BackingField
    || (PlayedTerminalEffects_k__BackingField = System_String__Replace_63388240(
                                                  PlayedTerminalEffects_k__BackingField,
                                                  (System_String_o *)StringLiteral_89/*"\r\n"*/,
                                                  (System_String_o *)StringLiteral_43/*"\n"*/,
                                                  0LL)) == 0LL
    || (PlayedTerminalEffects_k__BackingField = (System_String_o *)System_String__Split(
                                                                     PlayedTerminalEffects_k__BackingField,
                                                                     0xAu,
                                                                     0,
                                                                     0LL)) == 0LL )
  {
    sub_1C3B9C0(PlayedTerminalEffects_k__BackingField, v5);
  }
  klass = PlayedTerminalEffects_k__BackingField[1].klass;
  v10 = PlayedTerminalEffects_k__BackingField;
  if ( (int)klass >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)klass )
        sub_1C3B9C8(PlayedTerminalEffects_k__BackingField, v5);
      PlayedTerminalEffects_k__BackingField = (System_String_o *)System_String__op_Equality(
                                                                   *((System_String_o **)&v10[1].monitor + v11),
                                                                   v6,
                                                                   0LL);
      if ( ((unsigned __int8)PlayedTerminalEffects_k__BackingField & 1) != 0 )
        break;
      LODWORD(klass) = v10[1].klass;
      ++v11;
    }
    while ( (__int64)v11 < (int)klass );
  }
  else
  {
LABEL_25:
    LOBYTE(PlayedTerminalEffects_k__BackingField) = 0;
  }
  return (unsigned __int8)PlayedTerminalEffects_k__BackingField & 1;
}


bool __fastcall TerminalPramsManager__IsWarStartedId(int32_t war_id, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  System_String_o *mTerminalWarStartedIds; // x0
  System_String_c *klass; // x8
  System_String_o *v7; // x19
  bool v8; // w21
  unsigned __int64 v9; // x22
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  v13 = war_id;
  if ( (byte_4C1F4A5 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_43/*"\n"*/, v2);
    sub_1C3B764(&StringLiteral_89/*"\r\n"*/, v3);
    byte_4C1F4A5 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  mTerminalWarStartedIds = v4->static_fields->mTerminalWarStartedIds;
  if ( !mTerminalWarStartedIds
    || (mTerminalWarStartedIds = System_String__Replace_63388240(
                                   mTerminalWarStartedIds,
                                   (System_String_o *)StringLiteral_89/*"\r\n"*/,
                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                   0LL)) == 0LL
    || (mTerminalWarStartedIds = (System_String_o *)System_String__Split(mTerminalWarStartedIds, 0xAu, 0, 0LL)) == 0LL )
  {
    sub_1C3B9C0(mTerminalWarStartedIds, method);
  }
  klass = mTerminalWarStartedIds[1].klass;
  v7 = mTerminalWarStartedIds;
  v8 = (int)klass > 0;
  if ( (int)klass >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)klass )
        sub_1C3B9C8(mTerminalWarStartedIds, method);
      v10 = (System_String_o *)*((_QWORD *)&v7[1].monitor + v9);
      v11 = System_Int32__ToString((int32_t)&v13, 0LL);
      mTerminalWarStartedIds = (System_String_o *)System_String__op_Equality(v10, v11, 0LL);
      if ( ((unsigned __int8)mTerminalWarStartedIds & 1) != 0 )
        break;
      LODWORD(klass) = v7[1].klass;
      v8 = (__int64)++v9 < (int)klass;
    }
    while ( (__int64)v9 < (int)klass );
  }
  return v8;
}


void __fastcall TerminalPramsManager__LastPanelEventPointSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F491 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_13902/*"The supplied DateTime must have the Year, Month, and Day properties set to 1.  The time cannot be specified more precisely than whole milliseconds."*/, v2);
    byte_4C1F491 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13902/*"The supplied DateTime must have the Year, Month, and Day properties set to 1.  The time cannot be specified more precisely than whole milliseconds."*/, v3->static_fields->panelEventPoint, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayBgmNameSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F48F & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11666/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/, v2);
    byte_4C1F48F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11666/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/, v3->static_fields->lastPlayBgmName, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F490 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11667/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/, v2);
    byte_4C1F490 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11667/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/,
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
  Il2CppObject *String_71081024; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  Il2CppObject *v15; // x19
  TerminalPramsManager_c *v16; // x0
  PartyOrganizationUtility_o *p_mQuestClearHeroineInfo; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppClass *klass; // x8
  const char *name; // x9
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  QuestClearHeroineInfo_o *Load; // x20
  TerminalPramsManager_c *v35; // x0
  PartyOrganizationUtility_o *v36; // x0
  __int64 v37; // x0
  char monitor; // w20
  TerminalPramsManager_c *v39; // x8
  char v40; // w21
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  _QWORD *v42; // x10
  int64_t v43; // x20
  __int64 v44; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  Il2CppClass *v52; // x8
  TerminalPramsManager_c *v53; // x0
  int64_t v54; // x20
  PartyOrganizationUtility_o *p_mQuestPhaseRewardInfos; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  TerminalPramsManager_c *v64; // x8
  struct TerminalPramsManager_StaticFields *v65; // x9
  _QWORD *v66; // x9
  int64_t v67; // x20
  TerminalPramsManager_c *v68; // x0
  struct TerminalPramsManager_StaticFields *v69; // x0
  __int64 v70; // x0
  __int64 v71; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  Il2CppClass *v78; // x8
  int64_t v79; // x20
  TerminalPramsManager_c *v80; // x0
  struct TerminalPramsManager_StaticFields *v81; // x0
  __int64 v82; // x0
  __int64 v83; // x1
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int *v90; // x8
  int64_t v91; // x20
  TerminalPramsManager_c *v92; // x0
  PartyOrganizationUtility_o *p_eventPointWinReward_k__BackingField; // x0
  __int64 v94; // x0
  __int64 v95; // x1
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int32_t v102; // w20
  TerminalPramsManager_c *v103; // x8
  int *v104; // x9
  int64_t v105; // x20
  TerminalPramsManager_c *v106; // x0
  PartyOrganizationUtility_o *p_eventRaceBoost_k__BackingField; // x0
  __int64 v108; // x0
  __int64 v109; // x1
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  Il2CppClass *v116; // x8
  int64_t v117; // x20
  TerminalPramsManager_c *v118; // x0
  PartyOrganizationUtility_o *p_questClearCostumeRelease_k__BackingField; // x0
  __int64 v120; // x0
  __int64 v121; // x1
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  _QWORD *v128; // x8
  int64_t v129; // x20
  TerminalPramsManager_c *v130; // x0
  PartyOrganizationUtility_o *p_questClearCostumeGet_k__BackingField; // x0
  __int64 v132; // x0
  __int64 v133; // x1
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  Il2CppClass *v140; // x8
  int64_t v141; // x20
  TerminalPramsManager_c *v142; // x0
  PartyOrganizationUtility_o *p_eventTowerReward_k__BackingField; // x0
  __int64 v144; // x0
  __int64 v145; // x1
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  _QWORD *v152; // x8
  __int64 v153; // x9
  __int64 v154; // x9
  int64_t v155; // x20
  TerminalPramsManager_c *v156; // x0
  PartyOrganizationUtility_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  __int64 v158; // x0
  __int64 v159; // x1
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  Il2CppClass *v166; // x8
  int64_t v167; // x20
  TerminalPramsManager_c *v168; // x0
  PartyOrganizationUtility_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  __int64 v170; // x0
  __int64 v171; // x1
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  _QWORD *v178; // x8
  int64_t v179; // x20
  TerminalPramsManager_c *v180; // x0
  PartyOrganizationUtility_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  __int64 v182; // x0
  __int64 v183; // x1
  int64_t v184; // x2
  int32_t v185; // w3
  System_String_o *v186; // x4
  BattleSetupInfo_o *v187; // x5
  FollowerInfo_o *v188; // x6
  PartyListViewItem_o *v189; // x7
  char v190; // w20
  TerminalPramsManager_c *v191; // x8
  _QWORD *v192; // x9
  int64_t v193; // x20
  TerminalPramsManager_c *v194; // x0
  PartyOrganizationUtility_o *p_warClearReward_k__BackingField; // x0
  __int64 v196; // x0
  __int64 v197; // x1
  int64_t v198; // x2
  int32_t v199; // w3
  System_String_o *v200; // x4
  BattleSetupInfo_o *v201; // x5
  FollowerInfo_o *v202; // x6
  PartyListViewItem_o *v203; // x7
  int32_t v204; // w20
  TerminalPramsManager_c *v205; // x8
  char v206; // w21
  struct TerminalPramsManager_StaticFields *v207; // x9
  _QWORD *v208; // x10
  int64_t v209; // x20
  __int64 v210; // x0
  __int64 v211; // x1
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7
  Il2CppClass *v218; // x8
  TerminalPramsManager_c *v219; // x0
  int64_t v220; // x20
  PartyOrganizationUtility_o *p_mResultEventPanelRewardInfos; // x0
  __int64 v222; // x1
  int64_t v223; // x2
  int32_t v224; // w3
  System_String_o *v225; // x4
  BattleSetupInfo_o *v226; // x5
  FollowerInfo_o *v227; // x6
  PartyListViewItem_o *v228; // x7
  TerminalPramsManager_c *v229; // x0
  int64_t v230; // x20
  PartyOrganizationUtility_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v232; // x1
  int64_t v233; // x2
  int32_t v234; // w3
  System_String_o *v235; // x4
  BattleSetupInfo_o *v236; // x5
  FollowerInfo_o *v237; // x6
  PartyListViewItem_o *v238; // x7
  char v239; // w20
  TerminalPramsManager_c *v240; // x0
  int32_t monitor_high; // w21
  int32_t v242; // w21
  char v243; // w21
  int64_t v244; // x20
  PartyOrganizationUtility_o *p_OldUserEventPoint_k__BackingField; // x0
  __int64 v246; // x0
  __int64 v247; // x1
  int64_t v248; // x2
  int32_t v249; // w3
  System_String_o *v250; // x4
  BattleSetupInfo_o *v251; // x5
  FollowerInfo_o *v252; // x6
  PartyListViewItem_o *v253; // x7
  Il2CppClass *v254; // x8
  int64_t v255; // x20
  TerminalPramsManager_c *v256; // x0
  PartyOrganizationUtility_o *p_UseAddRewardItemRewardInfos_k__BackingField; // x0
  __int64 v258; // x1
  TerminalPramsManager_c *v259; // x0
  TerminalPramsManager_c *v260; // x8
  TerminalPramsManager_c *v261; // x0

  if ( (byte_4C1F4BB & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_1C3B764(&Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___, v2);
    sub_1C3B764(&JsonManager_TypeInfo, v3);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v4);
    byte_4C1F4BB = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F058 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F058 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->_isQuestRewardSetted_k__BackingField )
  {
    v6 = TerminalPramsManager_ClearData_TypeInfo;
    if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
      v6 = TerminalPramsManager_ClearData_TypeInfo;
    }
    if ( UnityEngine_PlayerPrefs__HasKey(v6->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0LL) )
    {
      v7 = TerminalPramsManager_ClearData_TypeInfo;
      if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
        v7 = TerminalPramsManager_ClearData_TypeInfo;
      }
      String_71081024 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71081024(
                                          v7->static_fields->SAVEKEY_CLEAR_REWARD_DISP,
                                          0LL);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v15 = JsonManager__Deserialize_object_(
              String_71081024,
              (const MethodInfo_3058B98 *)Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
      v16 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestClearHeroineInfo = (PartyOrganizationUtility_o *)&v16->static_fields->mQuestClearHeroineInfo;
      p_mQuestClearHeroineInfo->klass = 0LL;
      sub_1C3B708(p_mQuestClearHeroineInfo, 0LL, v9, v10, v11, v12, v13, v14);
      if ( !v15 )
        sub_1C3B9C0(v18, v19);
      klass = v15[1].klass;
      if ( !klass )
        sub_1C3B9C0(v18, v19);
      name = klass->_1.name;
      if ( name && *((int *)name + 8) >= 1 )
      {
        Load = TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(
                 (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)v15[1].klass,
                 0LL);
        v35 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v35 = TerminalPramsManager_TypeInfo;
        }
        v36 = (PartyOrganizationUtility_o *)&v35->static_fields->mQuestClearHeroineInfo;
        v36->klass = (PartyOrganizationUtility_c *)Load;
        sub_1C3B708(v36, (int64_t)Load, v28, v29, v30, v31, v32, v33);
      }
      v37 = (__int64)TerminalPramsManager_TypeInfo;
      monitor = (char)v15[2].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1ECCA )
      {
        v37 = sub_1C3B764(&TerminalPramsManager_TypeInfo, v19);
        byte_4C1ECCA = 1;
      }
      v39 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v39 = TerminalPramsManager_TypeInfo;
      }
      v39->static_fields->_IsQuestClear_k__BackingField = monitor;
      v40 = BYTE1(v15[2].monitor);
      if ( !byte_4C1ECCB )
      {
        v37 = sub_1C3B764(&TerminalPramsManager_TypeInfo, v19);
        v39 = TerminalPramsManager_TypeInfo;
        byte_4C1ECCB = 1;
      }
      if ( !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        v39 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v39->static_fields;
      static_fields->_IsPhaseClear_k__BackingField = v40;
      v42 = v15[1].monitor;
      if ( !v42 )
        sub_1C3B9C0(v37, v19);
      if ( v42[3] )
        v43 = (int64_t)v15[1].monitor;
      else
        v43 = 0LL;
      if ( !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        static_fields = TerminalPramsManager_TypeInfo->static_fields;
      }
      static_fields->mQuestRewardInfos = (struct QuestRewardInfo_array *)v43;
      sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->mQuestRewardInfos, v43, v20, v21, v22, v23, v24, v25);
      v52 = v15[2].klass;
      if ( !v52 )
        sub_1C3B9C0(v44, v45);
      v53 = TerminalPramsManager_TypeInfo;
      if ( v52->_1.namespaze )
        v54 = (int64_t)v15[2].klass;
      else
        v54 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v53 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestPhaseRewardInfos = (PartyOrganizationUtility_o *)&v53->static_fields->mQuestPhaseRewardInfos;
      p_mQuestPhaseRewardInfos->klass = (PartyOrganizationUtility_c *)v54;
      sub_1C3B708(p_mQuestPhaseRewardInfos, v54, v46, v47, v48, v49, v50, v51);
      v64 = TerminalPramsManager_TypeInfo;
      v65 = TerminalPramsManager_TypeInfo->static_fields;
      *(_QWORD *)&v65->clearLastBattleRaidId = *(void **)((char *)&v15[2].monitor + 4);
      v65->joinGroupId = HIDWORD(v15[3].klass);
      v66 = v15[3].monitor;
      if ( !v66 )
        sub_1C3B9C0(v56, v57);
      if ( v66[3] )
        v67 = (int64_t)v15[3].monitor;
      else
        v67 = 0LL;
      if ( !v64->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v64);
      if ( !byte_4C1F4F8 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v57);
        byte_4C1F4F8 = 1;
      }
      v68 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v68 = TerminalPramsManager_TypeInfo;
      }
      v69 = v68->static_fields;
      v69->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v67;
      sub_1C3B708((PartyOrganizationUtility_o *)&v69->_oldSuperBoss_k__BackingField, v67, v58, v59, v60, v61, v62, v63);
      v78 = v15[4].klass;
      if ( !v78 )
        sub_1C3B9C0(v70, v71);
      if ( v78->_1.namespaze )
        v79 = (int64_t)v15[4].klass;
      else
        v79 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1F4F9 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v71);
        byte_4C1F4F9 = 1;
      }
      v80 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v80 = TerminalPramsManager_TypeInfo;
      }
      v81 = v80->static_fields;
      v81->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v79;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v81->_oldPersonalBoss_k__BackingField,
        v79,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77);
      v90 = (int *)v15[4].monitor;
      if ( !v90 )
        sub_1C3B9C0(v82, v83);
      if ( v90[4] <= 0 )
        v91 = 0LL;
      else
        v91 = (int64_t)v15[4].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1F4F2 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v83);
        byte_4C1F4F2 = 1;
      }
      v92 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v92 = TerminalPramsManager_TypeInfo;
      }
      p_eventPointWinReward_k__BackingField = (PartyOrganizationUtility_o *)&v92->static_fields->_eventPointWinReward_k__BackingField;
      p_eventPointWinReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v91;
      sub_1C3B708(p_eventPointWinReward_k__BackingField, v91, v84, v85, v86, v87, v88, v89);
      v102 = (int32_t)v15[5].klass;
      if ( !byte_4C1F4F3 )
      {
        v94 = sub_1C3B764(&TerminalPramsManager_TypeInfo, v95);
        byte_4C1F4F3 = 1;
      }
      v103 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v103 = TerminalPramsManager_TypeInfo;
      }
      v103->static_fields->_eventPointWinType_k__BackingField = v102;
      v104 = (int *)v15[5].monitor;
      if ( !v104 )
        sub_1C3B9C0(v94, v95);
      if ( v104[4] <= 0 )
        v105 = 0LL;
      else
        v105 = (int64_t)v15[5].monitor;
      if ( !v103->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v103);
      if ( !byte_4C1F215 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v95);
        byte_4C1F215 = 1;
      }
      v106 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v106 = TerminalPramsManager_TypeInfo;
      }
      p_eventRaceBoost_k__BackingField = (PartyOrganizationUtility_o *)&v106->static_fields->_eventRaceBoost_k__BackingField;
      p_eventRaceBoost_k__BackingField->klass = (PartyOrganizationUtility_c *)v105;
      sub_1C3B708(p_eventRaceBoost_k__BackingField, v105, v96, v97, v98, v99, v100, v101);
      v116 = v15[6].klass;
      if ( !v116 )
        sub_1C3B9C0(v108, v109);
      if ( v116->_1.namespaze )
        v117 = (int64_t)v15[6].klass;
      else
        v117 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1F2F4 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v109);
        byte_4C1F2F4 = 1;
      }
      v118 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v118 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeRelease_k__BackingField = (PartyOrganizationUtility_o *)&v118->static_fields->_questClearCostumeRelease_k__BackingField;
      p_questClearCostumeRelease_k__BackingField->klass = (PartyOrganizationUtility_c *)v117;
      sub_1C3B708(p_questClearCostumeRelease_k__BackingField, v117, v110, v111, v112, v113, v114, v115);
      v128 = v15[6].monitor;
      if ( !v128 )
        sub_1C3B9C0(v120, v121);
      if ( v128[3] )
        v129 = (int64_t)v15[6].monitor;
      else
        v129 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1F055 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v121);
        byte_4C1F055 = 1;
      }
      v130 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v130 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeGet_k__BackingField = (PartyOrganizationUtility_o *)&v130->static_fields->_questClearCostumeGet_k__BackingField;
      p_questClearCostumeGet_k__BackingField->klass = (PartyOrganizationUtility_c *)v129;
      sub_1C3B708(p_questClearCostumeGet_k__BackingField, v129, v122, v123, v124, v125, v126, v127);
      v140 = v15[7].klass;
      if ( !v140 )
        sub_1C3B9C0(v132, v133);
      if ( SLODWORD(v140->_1.name) <= 0 )
        v141 = 0LL;
      else
        v141 = (int64_t)v15[7].klass;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1F4F6 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v133);
        byte_4C1F4F6 = 1;
      }
      v142 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v142 = TerminalPramsManager_TypeInfo;
      }
      p_eventTowerReward_k__BackingField = (PartyOrganizationUtility_o *)&v142->static_fields->_eventTowerReward_k__BackingField;
      p_eventTowerReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v141;
      sub_1C3B708(p_eventTowerReward_k__BackingField, v141, v134, v135, v136, v137, v138, v139);
      v152 = v15[7].monitor;
      if ( !v152 )
        sub_1C3B9C0(v144, v145);
      v153 = v152[3];
      if ( v153 )
      {
        if ( !(_DWORD)v153 )
          sub_1C3B9C8(v144, v145);
        v154 = v152[4];
        if ( !v154 )
          sub_1C3B9C0(v144, v145);
        if ( *(__int64 *)(v154 + 32) <= 0 )
          v155 = 0LL;
        else
          v155 = (int64_t)v15[7].monitor;
      }
      else
      {
        v155 = 0LL;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1F4F7 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v145);
        byte_4C1F4F7 = 1;
      }
      v156 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v156 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventTowerRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v156->static_fields->_resultEventTowerRewardInfo_k__BackingField;
      p_resultEventTowerRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v155;
      sub_1C3B708(p_resultEventTowerRewardInfo_k__BackingField, v155, v146, v147, v148, v149, v150, v151);
      v166 = v15[8].klass;
      if ( !v166 )
        sub_1C3B9C0(v158, v159);
      if ( v166->_1.namespaze )
        v167 = (int64_t)v15[8].klass;
      else
        v167 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1F04F )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v159);
        byte_4C1F04F = 1;
      }
      v168 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v168 = TerminalPramsManager_TypeInfo;
      }
      p_resultBoostItemRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v168->static_fields->_resultBoostItemRewardInfo_k__BackingField;
      p_resultBoostItemRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v167;
      sub_1C3B708(p_resultBoostItemRewardInfo_k__BackingField, v167, v160, v161, v162, v163, v164, v165);
      v178 = v15[8].monitor;
      if ( !v178 )
        sub_1C3B9C0(v170, v171);
      if ( v178[3] )
        v179 = (int64_t)v15[8].monitor;
      else
        v179 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1F050 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v171);
        byte_4C1F050 = 1;
      }
      v180 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v180 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventBoardGameTokenRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v180->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
      p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v179;
      sub_1C3B708(p_resultEventBoardGameTokenRewardInfo_k__BackingField, v179, v172, v173, v174, v175, v176, v177);
      v190 = (char)v15[9].klass;
      if ( !byte_4C1DCA6 )
      {
        v182 = sub_1C3B764(&TerminalPramsManager_TypeInfo, v183);
        byte_4C1DCA6 = 1;
      }
      v191 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v191 = TerminalPramsManager_TypeInfo;
      }
      v191->static_fields->_IsDispOnly_k__BackingField = v190;
      v192 = v15[9].monitor;
      if ( !v192 )
        sub_1C3B9C0(v182, v183);
      if ( v192[3] )
        v193 = (int64_t)v15[9].monitor;
      else
        v193 = 0LL;
      if ( !v191->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v191);
      if ( !byte_4C1F05A )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v183);
        byte_4C1F05A = 1;
      }
      v194 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v194 = TerminalPramsManager_TypeInfo;
      }
      p_warClearReward_k__BackingField = (PartyOrganizationUtility_o *)&v194->static_fields->_warClearReward_k__BackingField;
      p_warClearReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v193;
      sub_1C3B708(p_warClearReward_k__BackingField, v193, v184, v185, v186, v187, v188, v189);
      v204 = (int32_t)v15[10].klass;
      if ( !byte_4C1CCC8 )
      {
        v196 = sub_1C3B764(&TerminalPramsManager_TypeInfo, v197);
        byte_4C1CCC8 = 1;
      }
      v205 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v205 = TerminalPramsManager_TypeInfo;
      }
      v205->static_fields->_EventActivityPointEffectState_k__BackingField = v204;
      v206 = BYTE4(v15[10].klass);
      if ( !byte_4C1F057 )
      {
        v196 = sub_1C3B764(&TerminalPramsManager_TypeInfo, v197);
        v205 = TerminalPramsManager_TypeInfo;
        byte_4C1F057 = 1;
      }
      if ( !v205->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v205);
        v205 = TerminalPramsManager_TypeInfo;
      }
      v207 = v205->static_fields;
      v207->_IsWarBoardClear_k__BackingField = v206;
      v208 = v15[10].monitor;
      if ( !v208 )
        sub_1C3B9C0(v196, v197);
      if ( v208[3] )
        v209 = (int64_t)v15[10].monitor;
      else
        v209 = 0LL;
      if ( !v205->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v205);
        v207 = TerminalPramsManager_TypeInfo->static_fields;
      }
      v207->mQuestResultAfterEventRewardInfos = (struct BattleDropItem_array *)v209;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v207->mQuestResultAfterEventRewardInfos,
        v209,
        v198,
        v199,
        v200,
        v201,
        v202,
        v203);
      v218 = v15[11].klass;
      if ( !v218 )
        sub_1C3B9C0(v210, v211);
      v219 = TerminalPramsManager_TypeInfo;
      if ( v218->_1.namespaze )
        v220 = (int64_t)v15[11].klass;
      else
        v220 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v219 = TerminalPramsManager_TypeInfo;
      }
      p_mResultEventPanelRewardInfos = (PartyOrganizationUtility_o *)&v219->static_fields->mResultEventPanelRewardInfos;
      p_mResultEventPanelRewardInfos->klass = (PartyOrganizationUtility_c *)v220;
      sub_1C3B708(p_mResultEventPanelRewardInfos, v220, v212, v213, v214, v215, v216, v217);
      v229 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = (int32_t)v15[11].monitor;
      v230 = (int64_t)v15[12].klass;
      if ( !byte_4C1F053 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v222);
        v229 = TerminalPramsManager_TypeInfo;
        byte_4C1F053 = 1;
      }
      if ( !v229->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v229);
        v229 = TerminalPramsManager_TypeInfo;
      }
      p_limitImageAnnounces_k__BackingField = (PartyOrganizationUtility_o *)&v229->static_fields->_limitImageAnnounces_k__BackingField;
      p_limitImageAnnounces_k__BackingField->klass = (PartyOrganizationUtility_c *)v230;
      sub_1C3B708(p_limitImageAnnounces_k__BackingField, v230, v223, v224, v225, v226, v227, v228);
      v239 = (char)v15[12].monitor;
      if ( !byte_4C1ECCE )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v232);
        byte_4C1ECCE = 1;
      }
      v240 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v240 = TerminalPramsManager_TypeInfo;
      }
      v240->static_fields->_IsOrdealCallWarClear_k__BackingField = v239;
      monitor_high = HIDWORD(v15[12].monitor);
      if ( !byte_4C1F04A )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v232);
        v240 = TerminalPramsManager_TypeInfo;
        byte_4C1F04A = 1;
      }
      if ( !v240->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v240);
        v240 = TerminalPramsManager_TypeInfo;
      }
      v240->static_fields->_EventMuralId_k__BackingField = monitor_high;
      v242 = (int32_t)v15[13].klass;
      if ( !byte_4C1F212 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v232);
        v240 = TerminalPramsManager_TypeInfo;
        byte_4C1F212 = 1;
      }
      if ( !v240->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v240);
        v240 = TerminalPramsManager_TypeInfo;
      }
      v240->static_fields->_EventActionQuestId_k__BackingField = v242;
      v243 = BYTE4(v15[13].klass);
      if ( !byte_4C1F04C )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v232);
        v240 = TerminalPramsManager_TypeInfo;
        byte_4C1F04C = 1;
      }
      if ( !v240->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v240);
        v240 = TerminalPramsManager_TypeInfo;
      }
      v240->static_fields->_PlayHappinessCounterEffect_k__BackingField = v243;
      v244 = (int64_t)v15[13].monitor;
      if ( !byte_4C1F4F0 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v232);
        v240 = TerminalPramsManager_TypeInfo;
        byte_4C1F4F0 = 1;
      }
      if ( !v240->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v240);
        v240 = TerminalPramsManager_TypeInfo;
      }
      p_OldUserEventPoint_k__BackingField = (PartyOrganizationUtility_o *)&v240->static_fields->_OldUserEventPoint_k__BackingField;
      p_OldUserEventPoint_k__BackingField->klass = (PartyOrganizationUtility_c *)v244;
      sub_1C3B708(p_OldUserEventPoint_k__BackingField, v244, v233, v234, v235, v236, v237, v238);
      v254 = v15[14].klass;
      if ( !v254 )
        sub_1C3B9C0(v246, v247);
      if ( v254->_1.namespaze )
        v255 = (int64_t)v15[14].klass;
      else
        v255 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1CBC7 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v247);
        byte_4C1CBC7 = 1;
      }
      v256 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v256 = TerminalPramsManager_TypeInfo;
      }
      p_UseAddRewardItemRewardInfos_k__BackingField = (PartyOrganizationUtility_o *)&v256->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
      p_UseAddRewardItemRewardInfos_k__BackingField->klass = (PartyOrganizationUtility_c *)v255;
      sub_1C3B708(p_UseAddRewardItemRewardInfos_k__BackingField, v255, v248, v249, v250, v251, v252, v253);
      v259 = TerminalPramsManager_TypeInfo;
      if ( BYTE1(v15[2].monitor) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1CCCA )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v258);
          byte_4C1CCCA = 1;
        }
        v259 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v259 = TerminalPramsManager_TypeInfo;
        }
        v259->static_fields->_IsAutoResume_k__BackingField = 1;
      }
      if ( !v259->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v259);
      if ( !byte_4C1F059 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v258);
        byte_4C1F059 = 1;
      }
      v260 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v260 = TerminalPramsManager_TypeInfo;
      }
      if ( v260->static_fields->_warClearReward_k__BackingField )
        goto LABEL_276;
      if ( !v260->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v260);
      if ( !byte_4C1F056 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v258);
        byte_4C1F056 = 1;
      }
      v260 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v260 = TerminalPramsManager_TypeInfo;
      }
      if ( v260->static_fields->_IsPlayScriptWithMap_k__BackingField )
      {
LABEL_276:
        if ( !v260->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v260);
        if ( !byte_4C1F500 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v258);
          byte_4C1F500 = 1;
        }
        v261 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v261 = TerminalPramsManager_TypeInfo;
        }
        v261->static_fields->_isQuestRewardSetted_k__BackingField = 1;
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
  const MethodInfo *v8; // x2
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  TerminalPramsManager_c *v16; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F4BE & 1) == 0 )
  {
    sub_1C3B764(&EventRaidDefeatedEffectInfo_TypeInfo, v1);
    sub_1C3B764(&string_TypeInfo, v2);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_11665/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/, v4);
    byte_4C1F4BE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F502 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F502 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_11665/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v7 = (EventRaidDefeatedEffectInfo_o *)sub_1C3B9B0(EventRaidDefeatedEffectInfo_TypeInfo);
    EventRaidDefeatedEffectInfo___ctor(v7, String, v8);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F501 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v9);
      byte_4C1F501 = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v16->static_fields;
    static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = v7;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
      (int64_t)v7,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
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
  TerminalPramsManager_c *v7; // x0
  System_String_o *String; // x20
  System_Collections_Generic_Dictionary_int__int__o *v9; // x19
  System_String_array *v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int max_length; // w8
  System_String_array *v19; // x20
  unsigned int v20; // w23
  System_String_array *v21; // x21
  TerminalPramsManager_c *v22; // x0
  PartyOrganizationUtility_o *p_QuestRandomGroupList_k__BackingField; // x0
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C1F4C3 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v1);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v2);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1C3B764(&string_TypeInfo, v4);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_11674/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/, v6);
    byte_4C1F4C3 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA85 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1EA85 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( !v7->static_fields->_QuestRandomGroupList_k__BackingField )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_11674/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v9,
      (const MethodInfo_32EB708 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *(_QWORD *)result = 0LL;
    if ( !String )
      goto LABEL_35;
    v10 = System_String__Split(String, 0x2Cu, 0, 0LL);
    if ( !v10 )
      goto LABEL_35;
    max_length = v10->max_length;
    v19 = v10;
    if ( max_length >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        if ( v20 >= max_length )
LABEL_36:
          sub_1C3B9C8(v10, v11);
        v10 = (System_String_array *)v19->m_Items[v20];
        if ( !v10 )
          break;
        v10 = System_String__Split((System_String_o *)v10, 0x3Au, 0, 0LL);
        if ( !v10 )
          break;
        v21 = v10;
        if ( (int)v10->max_length >= 2 )
        {
          v10 = (System_String_array *)System_Int32__TryParse(v10->m_Items[0], &result[1], 0LL);
          if ( result[1] >= 1 && ((unsigned __int8)v10 & 1) != 0 )
          {
            if ( v21->max_length <= 1 )
              goto LABEL_36;
            v10 = (System_String_array *)System_Int32__TryParse(v21->m_Items[1], result, 0LL);
            v12 = (unsigned int)result[0];
            if ( result[0] >= 1 && ((unsigned __int8)v10 & 1) != 0 )
            {
              if ( !v9 )
                break;
              System_Collections_Generic_Dictionary_int__int___Add(
                v9,
                result[1],
                result[0],
                (const MethodInfo_32EC0CC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
        }
        max_length = v19->max_length;
        if ( (int)++v20 >= max_length )
          goto LABEL_27;
      }
LABEL_35:
      sub_1C3B9C0(v10, v11);
    }
LABEL_27:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F503 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v11);
      byte_4C1F503 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    p_QuestRandomGroupList_k__BackingField = (PartyOrganizationUtility_o *)&v22->static_fields->_QuestRandomGroupList_k__BackingField;
    p_QuestRandomGroupList_k__BackingField->klass = (PartyOrganizationUtility_c *)v9;
    sub_1C3B708(p_QuestRandomGroupList_k__BackingField, (int64_t)v9, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall TerminalPramsManager__LoadQuestReleasedFocusState(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x0

  if ( (byte_4C1F4AC & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F4AC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v2);
  if ( !QuestFocusStateManager
    || (QuestFocusStateManager__ClearQuestFocusStateDataList(QuestFocusStateManager, 0LL),
        (QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager(v5)) == 0LL) )
  {
    sub_1C3B9C0(QuestFocusStateManager, v4);
  }
  QuestFocusStateManager__ReadData(QuestFocusStateManager, 0LL);
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
  int32_t Int_71080456; // w19
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
  System_String_o *String_71081024; // x20
  __int64 v78; // x1
  int64_t v79; // x19
  TerminalPramsManager_c *v80; // x0
  System_String_o *v81; // x19
  __int64 v82; // x1
  int32_t v83; // w19
  TerminalPramsManager_c *v84; // x0
  System_String_o *v85; // x19
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  System_String_o *v92; // x19
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
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  Il2CppObject *v141; // x19
  TerminalPramsManager_c *v142; // x0
  PartyOrganizationUtility_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  System_String_o *v144; // x19
  __int64 v145; // x1
  const MethodInfo *v146; // x2
  int32_t v147; // w20
  TerminalPramsManager_c *v148; // x0
  int32_t WarId_k__BackingField; // w20
  System_String_o *v150; // x19
  Il2CppObject *v151; // x19
  int64_t v152; // x2
  int32_t v153; // w3
  System_String_o *v154; // x4
  BattleSetupInfo_o *v155; // x5
  FollowerInfo_o *v156; // x6
  PartyListViewItem_o *v157; // x7
  Il2CppObject *v158; // x19
  TerminalPramsManager_c *v159; // x8
  PartyOrganizationUtility_o *p_eventConquestInfos; // x0
  System_String_o *v161; // x19
  int32_t v162; // w19
  TerminalPramsManager_c *v163; // x8
  System_String_o *v164; // x19
  int32_t v165; // w19
  TerminalPramsManager_c *v166; // x8
  System_String_o *v167; // x19
  Il2CppObject *v168; // x19
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  Il2CppObject *v175; // x19
  TerminalPramsManager_c *v176; // x8
  PartyOrganizationUtility_o *p_eventHarvestGrowthInfo; // x0
  System_String_o *v178; // x19
  int64_t v179; // x2
  int32_t v180; // w3
  System_String_o *v181; // x4
  BattleSetupInfo_o *v182; // x5
  FollowerInfo_o *v183; // x6
  PartyListViewItem_o *v184; // x7
  System_String_o *v185; // x19
  TerminalPramsManager_c *v186; // x8
  PartyOrganizationUtility_o *p_lastPlayBgmName; // x0
  System_String_o *v188; // x19
  int32_t v189; // w19
  TerminalPramsManager_c *v190; // x8
  System_String_o *v191; // x19
  __int64 v192; // x1
  int32_t v193; // w19
  TerminalPramsManager_c *v194; // x0
  System_String_o *v195; // x19
  int32_t v196; // w19
  TerminalPramsManager_c *v197; // x8
  System_String_o *v198; // x19
  __int64 v199; // x1
  int64_t v200; // x2
  int32_t v201; // w3
  System_String_o *v202; // x4
  BattleSetupInfo_o *v203; // x5
  FollowerInfo_o *v204; // x6
  PartyListViewItem_o *v205; // x7
  System_String_o *v206; // x19
  TerminalPramsManager_c *v207; // x0
  PartyOrganizationUtility_o *p_PlayedTerminalEffects_k__BackingField; // x0
  System_String_o *v209; // x19
  __int64 v210; // x1
  int32_t v211; // w19
  TerminalPramsManager_c *v212; // x0
  System_String_o *v213; // x19
  __int64 v214; // x1
  int32_t v215; // w19
  TerminalPramsManager_c *v216; // x0
  System_String_o *v217; // x19
  __int64 v218; // x1
  int32_t v219; // w19
  TerminalPramsManager_c *v220; // x0
  System_String_o *v221; // x19
  __int64 v222; // x1
  int32_t v223; // w19
  TerminalPramsManager_c *v224; // x0
  System_String_o *v225; // x19
  int32_t v226; // w19
  TerminalPramsManager_c *v227; // x8
  System_String_o *v228; // x19
  int32_t v229; // w19
  TerminalPramsManager_c *v230; // x8
  System_String_o *v231; // x19
  __int64 v232; // x1
  int32_t v233; // w19
  TerminalPramsManager_c *v234; // x0
  System_String_o *v235; // x19
  __int64 v236; // x1
  int64_t v237; // x2
  int32_t v238; // w3
  System_String_o *v239; // x4
  BattleSetupInfo_o *v240; // x5
  FollowerInfo_o *v241; // x6
  PartyListViewItem_o *v242; // x7
  System_String_o *v243; // x19
  TerminalPramsManager_c *v244; // x0
  PartyOrganizationUtility_o *p_ClearEventQuestIds_k__BackingField; // x0
  System_String_o *v246; // x19
  System_String_o *v247; // x19
  System_String_array *IsNullOrEmpty; // x0
  __int64 v249; // x1
  __int64 v250; // x8
  System_String_array *v251; // x19
  int32_t v252; // w20
  TerminalPramsManager_c *v253; // x8
  int32_t v254; // w0
  int32_t v255; // w19
  TerminalPramsManager_c *v256; // x0
  System_String_o *v257; // x19
  __int64 v258; // x1
  int32_t v259; // w19
  TerminalPramsManager_c *v260; // x0
  System_String_o *v261; // x19
  __int64 v262; // x1
  int32_t v263; // w19
  TerminalPramsManager_c *v264; // x0
  System_String_o *v265; // x19
  Il2CppObject *v266; // x19
  __int64 v267; // x1
  int64_t v268; // x2
  int32_t v269; // w3
  System_String_o *v270; // x4
  BattleSetupInfo_o *v271; // x5
  FollowerInfo_o *v272; // x6
  PartyListViewItem_o *v273; // x7
  Il2CppObject *v274; // x19
  TerminalPramsManager_c *v275; // x0
  struct TerminalPramsManager_StaticFields *v276; // x0
  System_String_o *v277; // x19
  __int64 v278; // x1
  int32_t v279; // w19
  TerminalPramsManager_c *v280; // x0
  System_String_o *v281; // x19
  __int64 v282; // x1
  int32_t v283; // w19
  TerminalPramsManager_c *v284; // x0

  if ( (byte_4C1F47E & 1) == 0 )
  {
    sub_1C3B764(&System_Convert_TypeInfo, v1);
    sub_1C3B764(&Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____, v2);
    sub_1C3B764(&Method_JsonManager_Deserialize_EventConquestInfo_____, v3);
    sub_1C3B764(&Method_JsonManager_Deserialize_EventHarvestGrowthInfo___, v4);
    sub_1C3B764(&Method_JsonManager_Deserialize_EventSaveData___, v5);
    sub_1C3B764(&JsonManager_TypeInfo, v6);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_11666/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/, v8);
    sub_1C3B764(&StringLiteral_13899/*"The supplied DateTime includes a TimeOfDay setting.   This is not supported."*/, v9);
    sub_1C3B764(&StringLiteral_11672/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/, v10);
    sub_1C3B764(&StringLiteral_13895/*"The string for white space contains an invalid character."*/, v11);
    sub_1C3B764(&StringLiteral_11660/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, v12);
    sub_1C3B764(&StringLiteral_11667/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/, v13);
    sub_1C3B764(&StringLiteral_11679/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/, v14);
    sub_1C3B764(&StringLiteral_11677/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/, v15);
    sub_1C3B764(&StringLiteral_13900/*"The supplied DateTime must have the Kind property set to DateTimeKind.Unspecified or DateTimeKind.Utc."*/, v16);
    sub_1C3B764(&StringLiteral_13897/*"The string was being parsed as an unsigned number and could not have a negative sign."*/, v17);
    sub_1C3B764(&StringLiteral_13906/*"The supplied {0} is an invalid size for the {1} end point."*/, v18);
    sub_1C3B764(&StringLiteral_11676/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, v19);
    sub_1C3B764(&StringLiteral_13914/*"The targetNamespace '{0}' of included/redefined schema should be the same as the targetNamespace '{1}' of the including schema."*/, v20);
    sub_1C3B764(&StringLiteral_13898/*"The sum of the BaseUtcOffset and DaylightDelta properties must within plus or minus 14.0 hours."*/, v21);
    sub_1C3B764(&StringLiteral_11669/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/, v22);
    sub_1C3B764(&StringLiteral_13901/*"The supplied DateTime must have the Kind property set to DateTimeKind.Unspecified."*/, v23);
    sub_1C3B764(&StringLiteral_11668/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/, v24);
    sub_1C3B764(&StringLiteral_11673/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/, v25);
    sub_1C3B764(&StringLiteral_11658/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, v26);
    sub_1C3B764(&StringLiteral_13902/*"The supplied DateTime must have the Year, Month, and Day properties set to 1.  The time cannot be specified more precisely than whole milliseconds."*/, v27);
    sub_1C3B764(&StringLiteral_11678/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, v28);
    sub_1C3B764(&StringLiteral_11661/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, v29);
    sub_1C3B764(&StringLiteral_11670/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/, v30);
    sub_1C3B764(&StringLiteral_5316/*"Duplicated declaration '{0}'."*/, v31);
    sub_1C3B764(&StringLiteral_5313/*"Duplicate attribute : "*/, v32);
    sub_1C3B764(&StringLiteral_13909/*"The table ({0}) cannot be the child table to itself in a nested relation: the DataSet name conflicts with the table name."*/, v33);
    sub_1C3B764(&StringLiteral_11675/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, v34);
    sub_1C3B764(&StringLiteral_11681/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/, v35);
    sub_1C3B764(&StringLiteral_13913/*"The target namespace of an attribute declaration, whether local or global, must not match http://www.w3.org/2001/XMLSchema-instance."*/, v36);
    sub_1C3B764(&StringLiteral_13918/*"The tasks argument contains no tasks."*/, v37);
    sub_1C3B764(&StringLiteral_13911/*"The table [{0}] involved in more than one relation. You must explicitly mention a relation name in the expression '{1}'."*/, v38);
    sub_1C3B764(&StringLiteral_13915/*"The targetNamespace attribute cannot have empty string as its value."*/, v39);
    sub_1C3B764(&StringLiteral_13896/*"The string must be null-terminated."*/, v40);
    sub_1C3B764(&StringLiteral_11659/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, v41);
    sub_1C3B764(&StringLiteral_11664/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, v42);
    sub_1C3B764(&StringLiteral_13919/*"The tasks argument included a null value."*/, v43);
    sub_1C3B764(&StringLiteral_11663/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, v44);
    sub_1C3B764(&StringLiteral_13903/*"The supplied DateTime represents an invalid time.  For example, when the clock is adjusted forward, any time in the period that is skipped is invalid."*/, v45);
    sub_1C3B764(&StringLiteral_11662/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, v46);
    sub_1C3B764(&StringLiteral_11671/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/, v47);
    sub_1C3B764(&StringLiteral_1/*""*/, v48);
    sub_1C3B764(&StringLiteral_13904/*"The supplied schema contains particles other than Sequence and Choice. Only schemas generated by this tool are supported."*/, v49);
    sub_1C3B764(&StringLiteral_5312/*"Duplicate ID attribute."*/, v50);
    sub_1C3B764(&StringLiteral_11680/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, v51);
    byte_4C1F47E = 1;
  }
  v52 = (System_String_o *)StringLiteral_13898/*"The sum of the BaseUtcOffset and DaylightDelta properties must within plus or minus 14.0 hours."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13898/*"The sum of the BaseUtcOffset and DaylightDelta properties must within plus or minus 14.0 hours."*/, 0LL) )
  {
    Int_71080456 = UnityEngine_PlayerPrefs__GetInt_71080456(v52, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EA8B )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v53);
      byte_4C1EA8B = 1;
    }
    v55 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v55 = TerminalPramsManager_TypeInfo;
    }
    v55->static_fields->_DispState_k__BackingField = Int_71080456;
  }
  v56 = (System_String_o *)StringLiteral_13918/*"The tasks argument contains no tasks."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13918/*"The tasks argument contains no tasks."*/, 0LL) )
  {
    v58 = UnityEngine_PlayerPrefs__GetInt_71080456(v56, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EA8F )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v57);
      byte_4C1EA8F = 1;
    }
    v59 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v59 = TerminalPramsManager_TypeInfo;
    }
    v59->static_fields->_WarId_k__BackingField = v58;
  }
  v60 = (System_String_o *)StringLiteral_13911/*"The table [{0}] involved in more than one relation. You must explicitly mention a relation name in the expression '{1}'."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13911/*"The table [{0}] involved in more than one relation. You must explicitly mention a relation name in the expression '{1}'."*/, 0LL) )
  {
    v62 = UnityEngine_PlayerPrefs__GetInt_71080456(v60, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EA8E )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v61);
      byte_4C1EA8E = 1;
    }
    v63 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v63 = TerminalPramsManager_TypeInfo;
    }
    v63->static_fields->_SpotId_k__BackingField = v62;
  }
  v64 = (System_String_o *)StringLiteral_13909/*"The table ({0}) cannot be the child table to itself in a nested relation: the DataSet name conflicts with the table name."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13909/*"The table ({0}) cannot be the child table to itself in a nested relation: the DataSet name conflicts with the table name."*/, 0LL) )
  {
    v66 = UnityEngine_PlayerPrefs__GetInt_71080456(v64, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EA89 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v65);
      byte_4C1EA89 = 1;
    }
    v67 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v67 = TerminalPramsManager_TypeInfo;
    }
    v67->static_fields->_QuestId_k__BackingField = v66;
  }
  v68 = (System_String_o *)StringLiteral_13904/*"The supplied schema contains particles other than Sequence and Choice. Only schemas generated by this tool are supported."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13904/*"The supplied schema contains particles other than Sequence and Choice. Only schemas generated by this tool are supported."*/, 0LL) )
  {
    v70 = UnityEngine_PlayerPrefs__GetInt_71080456(v68, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1ECD9 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v69);
      byte_4C1ECD9 = 1;
    }
    v71 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v71 = TerminalPramsManager_TypeInfo;
    }
    v71->static_fields->_LastPlayedQuestId_k__BackingField = v70;
  }
  v72 = (System_String_o *)StringLiteral_13906/*"The supplied {0} is an invalid size for the {1} end point."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13906/*"The supplied {0} is an invalid size for the {1} end point."*/, 0LL) )
  {
    v74 = UnityEngine_PlayerPrefs__GetInt_71080456(v72, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EA8D )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v73);
      byte_4C1EA8D = 1;
    }
    v75 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v75 = TerminalPramsManager_TypeInfo;
    }
    v75->static_fields->_PhaseCnt_k__BackingField = v74;
  }
  v76 = (System_String_o *)StringLiteral_13899/*"The supplied DateTime includes a TimeOfDay setting.   This is not supported."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13899/*"The supplied DateTime includes a TimeOfDay setting.   This is not supported."*/, 0LL) )
  {
    String_71081024 = UnityEngine_PlayerPrefs__GetString_71081024(v76, 0LL);
    v79 = 0LL;
    if ( System_String__op_Inequality(String_71081024, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v79 = System_Convert__ToInt64_64027900(String_71081024, 0LL);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EA8A )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v78);
      byte_4C1EA8A = 1;
    }
    v80 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v80 = TerminalPramsManager_TypeInfo;
    }
    v80->static_fields->_EndTime_k__BackingField = v79;
  }
  v81 = (System_String_o *)StringLiteral_13901/*"The supplied DateTime must have the Kind property set to DateTimeKind.Unspecified."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13901/*"The supplied DateTime must have the Kind property set to DateTimeKind.Unspecified."*/, 0LL) )
  {
    v83 = UnityEngine_PlayerPrefs__GetInt_71080456(v81, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EA8C )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v82);
      byte_4C1EA8C = 1;
    }
    v84 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v84 = TerminalPramsManager_TypeInfo;
    }
    v84->static_fields->_IsDoneShortcut_k__BackingField = v83 != 0;
  }
  v85 = (System_String_o *)StringLiteral_13919/*"The tasks argument included a null value."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13919/*"The tasks argument included a null value."*/, 0LL) )
  {
    v92 = UnityEngine_PlayerPrefs__GetString_71081024(v85, 0LL);
    v93 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v93 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v93->static_fields;
    static_fields->mTerminalWarStartedIds = v92;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->mTerminalWarStartedIds,
      (int64_t)v92,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
  }
  v95 = (System_String_o *)StringLiteral_5316/*"Duplicated declaration '{0}'."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5316/*"Duplicated declaration '{0}'."*/, 0LL) )
  {
    v97 = UnityEngine_PlayerPrefs__GetInt_71080456(v95, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F4D4 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v96);
      byte_4C1F4D4 = 1;
    }
    v98 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v98 = TerminalPramsManager_TypeInfo;
    }
    v98->static_fields->mDebug_IsQuestReleaseAll = v97 != 0;
  }
  v99 = (System_String_o *)StringLiteral_5313/*"Duplicate attribute : "*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5313/*"Duplicate attribute : "*/, 0LL) )
  {
    v101 = UnityEngine_PlayerPrefs__GetInt_71080456(v99, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F4D5 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v100);
      byte_4C1F4D5 = 1;
    }
    v102 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v102 = TerminalPramsManager_TypeInfo;
    }
    v102->static_fields->mDebug_IsDummyErrorSelect = v101 != 0;
  }
  v103 = (System_String_o *)StringLiteral_5312/*"Duplicate ID attribute."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5312/*"Duplicate ID attribute."*/, 0LL) )
  {
    v105 = UnityEngine_PlayerPrefs__GetInt_71080456(v103, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F4D6 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v104);
      byte_4C1F4D6 = 1;
    }
    v106 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v106 = TerminalPramsManager_TypeInfo;
    }
    v106->static_fields->mDebug_IsBuildInfoDisp = v105 != 0;
  }
  v107 = (System_String_o *)StringLiteral_13914/*"The targetNamespace '{0}' of included/redefined schema should be the same as the targetNamespace '{1}' of the including schema."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13914/*"The targetNamespace '{0}' of included/redefined schema should be the same as the targetNamespace '{1}' of the including schema."*/, 0LL) )
  {
    v109 = UnityEngine_PlayerPrefs__GetInt_71080456(v107, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F078 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v108);
      byte_4C1F078 = 1;
    }
    v110 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v110 = TerminalPramsManager_TypeInfo;
    }
    v110->static_fields->_TimeStatusEventId_k__BackingField = v109;
  }
  v111 = (System_String_o *)StringLiteral_13915/*"The targetNamespace attribute cannot have empty string as its value."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13915/*"The targetNamespace attribute cannot have empty string as its value."*/, 0LL) )
  {
    v113 = UnityEngine_PlayerPrefs__GetInt_71080456(v111, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F079 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v112);
      byte_4C1F079 = 1;
    }
    v114 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v114 = TerminalPramsManager_TypeInfo;
    }
    v114->static_fields->_TimeStatusLoopCount_k__BackingField = v113;
  }
  v115 = (System_String_o *)StringLiteral_13900/*"The supplied DateTime must have the Kind property set to DateTimeKind.Unspecified or DateTimeKind.Utc."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13900/*"The supplied DateTime must have the Kind property set to DateTimeKind.Unspecified or DateTimeKind.Utc."*/, 0LL) )
  {
    v117 = UnityEngine_PlayerPrefs__GetInt_71080456(v115, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F4D8 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v116);
      byte_4C1F4D8 = 1;
    }
    v118 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v118 = TerminalPramsManager_TypeInfo;
    }
    v118->static_fields->_EventDailyPointEventId_k__BackingField = v117;
  }
  v119 = (System_String_o *)StringLiteral_13913/*"The target namespace of an attribute declaration, whether local or global, must not match http://www.w3.org/2001/XMLSchema-instance."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13913/*"The target namespace of an attribute declaration, whether local or global, must not match http://www.w3.org/2001/XMLSchema-instance."*/, 0LL) )
  {
    v120 = UnityEngine_PlayerPrefs__GetString_71081024(v119, 0LL);
    v122 = 0LL;
    if ( !System_String__op_Equality(v120, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v122 = System_Convert__ToInt64_64027900(v120, 0LL);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F4D9 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v121);
      byte_4C1F4D9 = 1;
    }
    v123 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v123 = TerminalPramsManager_TypeInfo;
    }
    v123->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = v122;
  }
  v124 = (System_String_o *)StringLiteral_13895/*"The string for white space contains an invalid character."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13895/*"The string for white space contains an invalid character."*/, 0LL) )
  {
    v126 = UnityEngine_PlayerPrefs__GetInt_71080456(v124, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F4DA )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v125);
      byte_4C1F4DA = 1;
    }
    v127 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v127 = TerminalPramsManager_TypeInfo;
    }
    v127->static_fields->_BeforeEventActivityPoint_k__BackingField = v126;
  }
  v128 = (System_String_o *)StringLiteral_13896/*"The string must be null-terminated."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13896/*"The string must be null-terminated."*/, 0LL) )
  {
    v130 = UnityEngine_PlayerPrefs__GetInt_71080456(v128, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F4DB )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v129);
      byte_4C1F4DB = 1;
    }
    v131 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v131 = TerminalPramsManager_TypeInfo;
    }
    v131->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v130;
  }
  v132 = (System_String_o *)StringLiteral_13897/*"The string was being parsed as an unsigned number and could not have a negative sign."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13897/*"The string was being parsed as an unsigned number and could not have a negative sign."*/, 0LL) )
  {
    v133 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71081024(v132, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v141 = JsonManager__Deserialize_object_(
             v133,
             (const MethodInfo_3058B98 *)Method_JsonManager_Deserialize_EventSaveData___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EB7D )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v134);
      byte_4C1EB7D = 1;
    }
    v142 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v142 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v142->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (PartyOrganizationUtility_c *)v141;
    sub_1C3B708(p_BeforeEventSubmarineSaveData_k__BackingField, (int64_t)v141, v135, v136, v137, v138, v139, v140);
  }
  v144 = (System_String_o *)StringLiteral_11679/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11679/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/, 0LL) )
  {
    v147 = UnityEngine_PlayerPrefs__GetInt_71080456(v144, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F4D3 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v145);
      byte_4C1F4D3 = 1;
    }
    v148 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v148 = TerminalPramsManager_TypeInfo;
    }
    v148->static_fields->_LastSelectQuestIndex_k__BackingField = v147;
    if ( !byte_4C1EA88 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v145);
      v148 = TerminalPramsManager_TypeInfo;
      byte_4C1EA88 = 1;
    }
    if ( !v148->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v148);
      v148 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v148->static_fields->_WarId_k__BackingField;
    if ( !byte_4C1F4E6 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v145);
      v148 = TerminalPramsManager_TypeInfo;
      byte_4C1F4E6 = 1;
    }
    if ( !v148->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v148);
      v148 = TerminalPramsManager_TypeInfo;
    }
    TerminalPramsManager__SetFolderLastClickedIdx(
      WarId_k__BackingField,
      v148->static_fields->_LastSelectQuestIndex_k__BackingField,
      v146);
  }
  v150 = (System_String_o *)StringLiteral_11676/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11676/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, 0LL) )
  {
    v151 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71081024(v150, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v158 = JsonManager__Deserialize_object_(
             v151,
             (const MethodInfo_3058B98 *)Method_JsonManager_Deserialize_EventConquestInfo_____);
    v159 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v159 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = (PartyOrganizationUtility_o *)&v159->static_fields->eventConquestInfos;
    p_eventConquestInfos->klass = (PartyOrganizationUtility_c *)v158;
    sub_1C3B708(p_eventConquestInfos, (int64_t)v158, v152, v153, v154, v155, v156, v157);
  }
  v161 = (System_String_o *)StringLiteral_11675/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11675/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, 0LL) )
  {
    v162 = UnityEngine_PlayerPrefs__GetInt_71080456(v161, 0LL);
    v163 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v163 = TerminalPramsManager_TypeInfo;
    }
    v163->static_fields->eventConquestInfoDisp = v162 != 0;
  }
  v164 = (System_String_o *)StringLiteral_11677/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11677/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/, 0LL) )
  {
    v165 = UnityEngine_PlayerPrefs__GetInt_71080456(v164, 0LL);
    v166 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v166 = TerminalPramsManager_TypeInfo;
    }
    v166->static_fields->eventCraftInfoDisp = v165 != 0;
  }
  v167 = (System_String_o *)StringLiteral_11678/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11678/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, 0LL) )
  {
    v168 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71081024(v167, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v175 = JsonManager__Deserialize_object_(
             v168,
             (const MethodInfo_3058B98 *)Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    v176 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v176 = TerminalPramsManager_TypeInfo;
    }
    p_eventHarvestGrowthInfo = (PartyOrganizationUtility_o *)&v176->static_fields->eventHarvestGrowthInfo;
    p_eventHarvestGrowthInfo->klass = (PartyOrganizationUtility_c *)v175;
    sub_1C3B708(p_eventHarvestGrowthInfo, (int64_t)v175, v169, v170, v171, v172, v173, v174);
  }
  v178 = (System_String_o *)StringLiteral_11666/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11666/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/, 0LL) )
  {
    v185 = UnityEngine_PlayerPrefs__GetString_71081024(v178, 0LL);
    v186 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v186 = TerminalPramsManager_TypeInfo;
    }
    p_lastPlayBgmName = (PartyOrganizationUtility_o *)&v186->static_fields->lastPlayBgmName;
    p_lastPlayBgmName->klass = (PartyOrganizationUtility_c *)v185;
    sub_1C3B708(p_lastPlayBgmName, (int64_t)v185, v179, v180, v181, v182, v183, v184);
  }
  v188 = (System_String_o *)StringLiteral_11667/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11667/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/, 0LL) )
  {
    v189 = UnityEngine_PlayerPrefs__GetInt_71080456(v188, 0LL);
    v190 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v190 = TerminalPramsManager_TypeInfo;
    }
    v190->static_fields->lastPlayQuestConsumeAp = v189;
  }
  v191 = (System_String_o *)StringLiteral_13903/*"The supplied DateTime represents an invalid time.  For example, when the clock is adjusted forward, any time in the period that is skipped is invalid."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13903/*"The supplied DateTime represents an invalid time.  For example, when the clock is adjusted forward, any time in the period that is skipped is invalid."*/, 0LL) )
  {
    v193 = UnityEngine_PlayerPrefs__GetInt_71080456(v191, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1ECDA )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v192);
      byte_4C1ECDA = 1;
    }
    v194 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v194 = TerminalPramsManager_TypeInfo;
    }
    v194->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = v193;
  }
  v195 = (System_String_o *)StringLiteral_13902/*"The supplied DateTime must have the Year, Month, and Day properties set to 1.  The time cannot be specified more precisely than whole milliseconds."*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13902/*"The supplied DateTime must have the Year, Month, and Day properties set to 1.  The time cannot be specified more precisely than whole milliseconds."*/, 0LL) )
  {
    v196 = UnityEngine_PlayerPrefs__GetInt_71080456(v195, 0LL);
    v197 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v197 = TerminalPramsManager_TypeInfo;
    }
    v197->static_fields->panelEventPoint = v196;
  }
  v198 = (System_String_o *)StringLiteral_11672/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11672/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/, 0LL) )
  {
    v206 = UnityEngine_PlayerPrefs__GetString_71081024(v198, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F4DD )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v199);
      byte_4C1F4DD = 1;
    }
    v207 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v207 = TerminalPramsManager_TypeInfo;
    }
    p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v207->static_fields->_PlayedTerminalEffects_k__BackingField;
    p_PlayedTerminalEffects_k__BackingField->klass = (PartyOrganizationUtility_c *)v206;
    sub_1C3B708(p_PlayedTerminalEffects_k__BackingField, (int64_t)v206, v200, v201, v202, v203, v204, v205);
  }
  v209 = (System_String_o *)StringLiteral_11669/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11669/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/, 0LL) )
  {
    v211 = UnityEngine_PlayerPrefs__GetInt_71080456(v209, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F2F5 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v210);
      byte_4C1F2F5 = 1;
    }
    v212 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v212 = TerminalPramsManager_TypeInfo;
    }
    v212->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = v211 != 0;
  }
  v213 = (System_String_o *)StringLiteral_11670/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11670/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/, 0LL) )
  {
    v215 = UnityEngine_PlayerPrefs__GetInt_71080456(v213, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F2F6 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v214);
      byte_4C1F2F6 = 1;
    }
    v216 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v216 = TerminalPramsManager_TypeInfo;
    }
    v216->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = v215;
  }
  v217 = (System_String_o *)StringLiteral_11671/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11671/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/, 0LL) )
  {
    v219 = UnityEngine_PlayerPrefs__GetInt_71080456(v217, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F207 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v218);
      byte_4C1F207 = 1;
    }
    v220 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v220 = TerminalPramsManager_TypeInfo;
    }
    v220->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = v219 != 0;
  }
  v221 = (System_String_o *)StringLiteral_11681/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11681/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/, 0LL) )
  {
    v223 = UnityEngine_PlayerPrefs__GetInt_71080456(v221, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EDF6 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v222);
      byte_4C1EDF6 = 1;
    }
    v224 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v224 = TerminalPramsManager_TypeInfo;
    }
    v224->static_fields->_SelectedStoryQuestId_k__BackingField = v223;
  }
  v225 = (System_String_o *)StringLiteral_11663/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11663/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, 0LL) )
  {
    v226 = UnityEngine_PlayerPrefs__GetInt_71080456(v225, 0LL);
    v227 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v227 = TerminalPramsManager_TypeInfo;
    }
    v227->static_fields->ConnectMarkEventId = v226;
  }
  v228 = (System_String_o *)StringLiteral_11662/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11662/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, 0LL) )
  {
    v229 = UnityEngine_PlayerPrefs__GetInt_71080456(v228, 0LL);
    v230 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v230 = TerminalPramsManager_TypeInfo;
    }
    v230->static_fields->ConnectMarkAnimationId = v229;
  }
  v231 = (System_String_o *)StringLiteral_11680/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11680/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, 0LL) )
  {
    v233 = UnityEngine_PlayerPrefs__GetInt_71080456(v231, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1DEB2 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v232);
      byte_4C1DEB2 = 1;
    }
    v234 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v234 = TerminalPramsManager_TypeInfo;
    }
    v234->static_fields->_SelectedRecollectionWarId_k__BackingField = v233;
  }
  v235 = (System_String_o *)StringLiteral_11661/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11661/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, 0LL) )
  {
    v243 = UnityEngine_PlayerPrefs__GetString_71081024(v235, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EA86 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v236);
      byte_4C1EA86 = 1;
    }
    v244 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v244 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (PartyOrganizationUtility_o *)&v244->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (PartyOrganizationUtility_c *)v243;
    sub_1C3B708(p_ClearEventQuestIds_k__BackingField, (int64_t)v243, v237, v238, v239, v240, v241, v242);
  }
  v246 = (System_String_o *)StringLiteral_11668/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11668/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/, 0LL) )
  {
    v247 = UnityEngine_PlayerPrefs__GetString_71081024(v246, 0LL);
    IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(v247, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v247 || (IsNullOrEmpty = System_String__Split(v247, 0x2Cu, 0, 0LL)) == 0LL )
        sub_1C3B9C0(IsNullOrEmpty, v249);
      v250 = *(_QWORD *)&IsNullOrEmpty->max_length;
      v251 = IsNullOrEmpty;
      if ( v250 )
      {
        if ( !(_DWORD)v250 )
          sub_1C3B9C8(IsNullOrEmpty, v249);
        v252 = System_Int32__Parse(IsNullOrEmpty->m_Items[0], 0LL);
      }
      else
      {
        v252 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1F4DF )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v249);
        byte_4C1F4DF = 1;
      }
      v253 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v253 = TerminalPramsManager_TypeInfo;
      }
      v253->static_fields->_MapModelClearQuestId_k__BackingField = v252;
      if ( (int)v251->max_length < 2 )
      {
        v255 = 0;
      }
      else
      {
        v254 = System_Int32__Parse(v251->m_Items[1], 0LL);
        v253 = TerminalPramsManager_TypeInfo;
        v255 = v254;
      }
      if ( !v253->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v253);
      if ( !byte_4C1F4E0 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v249);
        byte_4C1F4E0 = 1;
      }
      v256 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v256 = TerminalPramsManager_TypeInfo;
      }
      v256->static_fields->_MapModelClearPhaseCount_k__BackingField = v255;
    }
  }
  v257 = (System_String_o *)StringLiteral_11664/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11664/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, 0LL) )
  {
    v259 = UnityEngine_PlayerPrefs__GetInt_71080456(v257, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F20F )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v258);
      byte_4C1F20F = 1;
    }
    v260 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v260 = TerminalPramsManager_TypeInfo;
    }
    v260->static_fields->_IsDataLostBattleAutoReset_k__BackingField = v259 != 0;
  }
  v261 = (System_String_o *)StringLiteral_11673/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11673/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/, 0LL) )
  {
    v263 = UnityEngine_PlayerPrefs__GetInt_71080456(v261, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1D2FC )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v262);
      byte_4C1D2FC = 1;
    }
    v264 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v264 = TerminalPramsManager_TypeInfo;
    }
    v264->static_fields->_PlayerGenderType_k__BackingField = v263;
  }
  v265 = (System_String_o *)StringLiteral_11660/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11660/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, 0LL) )
  {
    v266 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71081024(v265, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v274 = JsonManager__Deserialize_object_(
             v266,
             (const MethodInfo_3058B98 *)Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F4E4 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v267);
      byte_4C1F4E4 = 1;
    }
    v275 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v275 = TerminalPramsManager_TypeInfo;
    }
    v276 = v275->static_fields;
    v276->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)v274;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&v276->_CampaignDirectBonus_k__BackingField,
      (int64_t)v274,
      v268,
      v269,
      v270,
      v271,
      v272,
      v273);
  }
  v277 = (System_String_o *)StringLiteral_11659/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11659/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, 0LL) )
  {
    v279 = UnityEngine_PlayerPrefs__GetInt_71080456(v277, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1E9A2 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v278);
      byte_4C1E9A2 = 1;
    }
    v280 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v280 = TerminalPramsManager_TypeInfo;
    }
    v280->static_fields->_BlankEarthSpotId_k__BackingField = v279;
  }
  v281 = (System_String_o *)StringLiteral_11658/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11658/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, 0LL) )
  {
    v283 = UnityEngine_PlayerPrefs__GetInt_71080456(v281, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F4E7 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v282);
      byte_4C1F4E7 = 1;
    }
    v284 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v284 = TerminalPramsManager_TypeInfo;
    }
    v284->static_fields->_BlankEarthRank_k__BackingField = v283;
  }
}


TerminalTransitionInfo_o *__fastcall TerminalPramsManager__Load_TerminalTransitionInfoData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *v4; // x20
  __int64 v5; // x19
  int32_t Int_71080456; // w0
  int32_t v7; // w20
  const MethodInfo *v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  System_String_o *String_71081024; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4C1F47F & 1) == 0 )
  {
    sub_1C3B764(&TerminalTransitionInfo_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_13917/*"The task has been disposed."*/, v2);
    sub_1C3B764(&StringLiteral_13916/*"The targetNamespace parameter '{0}' should be the same value as the targetNamespace '{1}' of the schema."*/, v3);
    byte_4C1F47F = 1;
  }
  v4 = (System_String_o *)StringLiteral_13916/*"The targetNamespace parameter '{0}' should be the same value as the targetNamespace '{1}' of the schema."*/;
  v5 = 0LL;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13916/*"The targetNamespace parameter '{0}' should be the same value as the targetNamespace '{1}' of the schema."*/, 0LL) )
  {
    Int_71080456 = UnityEngine_PlayerPrefs__GetInt_71080456(v4, 0LL);
    if ( Int_71080456 < 1 )
    {
      return 0LL;
    }
    else
    {
      v7 = Int_71080456;
      v5 = sub_1C3B9B0(TerminalTransitionInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0LL);
      TerminalTransitionInfo__Init((TerminalTransitionInfo_o *)v5, v8);
      if ( !v5 )
        sub_1C3B9C0(v9, v10);
      *(_DWORD *)(v5 + 16) = v7;
      v11 = (System_String_o *)StringLiteral_13917/*"The task has been disposed."*/;
      if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13917/*"The task has been disposed."*/, 0LL) )
      {
        String_71081024 = UnityEngine_PlayerPrefs__GetString_71081024(v11, 0LL);
        *(_QWORD *)(v5 + 40) = String_71081024;
        sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)String_71081024, v13, v14, v15, v16, v17, v18);
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
  int32_t MapModelClearQuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C1F499 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11668/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/, v2);
    sub_1C3B764(&StringLiteral_845/*", line {0}, position {1}"*/, v3);
    byte_4C1F499 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EC65 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1EC65 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v4->static_fields->_MapModelClearQuestId_k__BackingField;
  v6 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_4C1EC66 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    byte_4C1EC66 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v7->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v8 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v9 = System_String__Concat_63379872(v6, (System_String_o *)StringLiteral_845/*", line {0}, position {1}"*/, v8, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11668/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/, v9, 0LL);
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

  if ( (byte_4C1F485 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11679/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/, v2);
    sub_1C3B764(&StringLiteral_13903/*"The supplied DateTime represents an invalid time.  For example, when the clock is adjusted forward, any time in the period that is skipped is invalid."*/, v3);
    sub_1C3B764(&StringLiteral_13904/*"The supplied schema contains particles other than Sequence and Choice. Only schemas generated by this tool are supported."*/, v4);
    byte_4C1F485 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1ED27 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1ED27 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13904/*"The supplied schema contains particles other than Sequence and Choice. Only schemas generated by this tool are supported."*/,
    v5->static_fields->_LastPlayedQuestId_k__BackingField,
    0LL);
  if ( !byte_4C1F4E6 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    byte_4C1F4E6 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11679/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/,
    v7->static_fields->_LastSelectQuestIndex_k__BackingField,
    0LL);
  if ( !byte_4C1E9A4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
    byte_4C1E9A4 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13903/*"The supplied DateTime represents an invalid time.  For example, when the clock is adjusted forward, any time in the period that is skipped is invalid."*/,
    v9->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__PlaySystemSE(int32_t seKind, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0
  _BOOL4 IsAutoNoSe_k__BackingField; // w21
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4C1F47A & 1) == 0 )
  {
    sub_1C3B764(&Method_TerminalPramsManager_PlaySystemSE__, method);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v3);
    byte_4C1F47A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F4D1 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F4D1 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( TerminalPramsManager_TypeInfo->static_fields->_IsAutoNoSe_k__BackingField )
    {
LABEL_9:
      if ( !byte_4C1F4D2 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
        byte_4C1F4D2 = 1;
      }
      v5 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v5 = TerminalPramsManager_TypeInfo;
      }
      v5->static_fields->_IsAutoNoSe_k__BackingField = 0;
      return;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    IsAutoNoSe_k__BackingField = TerminalPramsManager_TypeInfo->static_fields->_IsAutoNoSe_k__BackingField;
    if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      if ( TerminalPramsManager_TypeInfo->static_fields->_IsAutoNoSe_k__BackingField )
        goto LABEL_9;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( IsAutoNoSe_k__BackingField )
        goto LABEL_9;
    }
  }
  if ( !TerminalPramsManager__IsAuto((const MethodInfo *)v4) )
  {
    v7 = Method_TerminalPramsManager_PlaySystemSE__;
    if ( (*((_BYTE *)Method_TerminalPramsManager_PlaySystemSE__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C3B77C(Method_TerminalPramsManager_PlaySystemSE__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C3B748(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, seKind, 0, 0LL);
  }
}


void __fastcall TerminalPramsManager__PlayedTerminalEffectsSave_SaveData(int32_t effectId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  TerminalPramsManager_c *v12; // x0
  PartyOrganizationUtility_c *v13; // x19
  TerminalPramsManager_c *v14; // x0
  PartyOrganizationUtility_o *p_PlayedTerminalEffects_k__BackingField; // x0
  TerminalPramsManager_c *v16; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x19
  System_String_o *v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_String_o *v26; // x19
  TerminalPramsManager_c *v27; // x0
  PartyOrganizationUtility_o *v28; // x0
  const MethodInfo *v29; // x0
  int32_t v30; // [xsp+Ch] [xbp-24h] BYREF

  v30 = effectId;
  if ( (byte_4C1F4A2 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_43/*"\n"*/, v3);
    sub_1C3B764(&StringLiteral_1/*""*/, v4);
    byte_4C1F4A2 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsTerminalEffectPlayed(effectId, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F4EC )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
      byte_4C1F4EC = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    if ( !v12->static_fields->_PlayedTerminalEffects_k__BackingField )
    {
      if ( !v12->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v12);
      v13 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
      if ( !byte_4C1F4DD )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
        byte_4C1F4DD = 1;
      }
      v14 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v14 = TerminalPramsManager_TypeInfo;
      }
      p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v14->static_fields->_PlayedTerminalEffects_k__BackingField;
      p_PlayedTerminalEffects_k__BackingField->klass = v13;
      sub_1C3B708(p_PlayedTerminalEffects_k__BackingField, (int64_t)v13, v6, v7, v8, v9, v10, v11);
      v12 = TerminalPramsManager_TypeInfo;
    }
    if ( !v12->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v12);
    if ( !byte_4C1F4EC )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
      byte_4C1F4EC = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    PlayedTerminalEffects_k__BackingField = v16->static_fields->_PlayedTerminalEffects_k__BackingField;
    v18 = System_Int32__ToString((int32_t)&v30, 0LL);
    v26 = System_String__Concat_63379872(
            PlayedTerminalEffects_k__BackingField,
            v18,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            0LL);
    if ( !byte_4C1F4DD )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v19);
      byte_4C1F4DD = 1;
    }
    v27 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v27 = TerminalPramsManager_TypeInfo;
    }
    v28 = (PartyOrganizationUtility_o *)&v27->static_fields->_PlayedTerminalEffects_k__BackingField;
    v28->klass = (PartyOrganizationUtility_c *)v26;
    sub_1C3B708(v28, (int64_t)v26, v20, v21, v22, v23, v24, v25);
    TerminalPramsManager__Save_SaveData(v29);
  }
}


void __fastcall TerminalPramsManager__PlayerGenderType_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F49B & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11673/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/, v2);
    byte_4C1F49B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F4ED )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F4ED = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11673/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/,
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
  BattleResultComponent_resultData_array *v4; // x21
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
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  BattleResultComponent_resultData_o *v62; // x8
  struct UserServantCollectionEntity_array *oldUserSvtCollection; // x8
  _DWORD *v64; // x23
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  BattleResultComponent_resultData_o *v71; // x28
  int eventEndTitle; // w8
  __int64 *v73; // x26
  UserServantCollectionMaster_o *v74; // x20
  unsigned int v75; // w29
  __int64 v76; // x19
  __int64 v77; // x25
  __int64 v78; // x26
  struct DeckData_o *myDeck; // x24
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  UserServantCollectionEntity_o *v81; // x25
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  _DWORD *v88; // x24
  PartyOrganizationUtility_o *v89; // x24
  PartyOrganizationUtility_c *klass; // x8
  PartyOrganizationUtility_c *v91; // x8
  TerminalPramsManager_c *v92; // x0
  PartyOrganizationUtility_o *p_mQuestClearHeroineInfo; // x0
  __int64 v94; // x8
  BattleResultComponent_resultData_o *v95; // x9
  struct System_String_o *v96; // x10
  struct System_String_o *eventEndMessage; // x19
  __int128 v98; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v99; // x24
  UserServantEntity_o *v100; // x25
  int64_t v101; // x24
  void **p_monitor; // x19
  void *v103; // x26
  void *monitor; // t1
  void *v105; // x22
  __int64 v106; // x1
  Il2CppObject *MasterData_object; // x26
  NetworkManager_c *v108; // x0
  __int64 v109; // x22
  __int64 v110; // x28
  int64_t userIdNumber; // x27
  int v112; // w9
  UserServantCollectionEntity_o *v113; // x27
  int v114; // w8
  UserServantCollectionEntity_o *v115; // x26
  struct DeckData_o *userId; // x21
  int32_t SvtId; // w0
  __int64 v118; // x22
  __int64 v119; // x29
  int32_t v120; // w28
  int64_t v121; // x23
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  bool v134; // w9
  Il2CppObject *Master_object; // x0
  __int64 v136; // x22
  __int64 v137; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v138; // x24
  int klass_high; // w8
  int32_t friendshipExceedCount; // w9
  TerminalPramsManager_c *v141; // x0
  PartyOrganizationUtility_o *v142; // x0
  BattleResultComponent_resultData_o *v143; // x22
  BattleResultComponent_resultData_o *v144; // x8
  struct System_String_o *v145; // x9
  UserQuestEntity_o *v146; // x23
  int32_t questId; // w21
  TerminalPramsManager_c *v148; // x0
  __int64 v149; // x1
  int32_t QuestPhase; // w24
  TerminalPramsManager_c *v151; // x0
  int32_t v152; // w24
  Il2CppObject *v153; // x25
  UserQuestEntity_o *v154; // x0
  UserQuestEntity_o *v155; // x26
  int32_t v156; // w25
  __int64 v157; // x1
  bool v158; // w21
  TerminalPramsManager_c *v159; // x0
  const MethodInfo *v160; // x2
  TerminalPramsManager_c *v161; // x0
  System_String_o *ValidMessage; // x0
  const MethodInfo *v163; // x2
  TerminalPramsManager_c *v164; // x8
  TerminalPramsManager_c *v165; // x0
  TerminalPramsManager_c *v166; // x0
  const MethodInfo *v167; // x0
  char *v168; // x21
  TerminalPramsManager_c *v169; // x8
  int32_t v170; // w24
  const MethodInfo *v171; // x1
  WarEntity_o *v172; // x25
  BalanceConfig_c *v173; // x0
  TerminalPramsManager_c *v174; // x0
  TerminalPramsManager_c *v175; // x0
  bool v176; // w22
  TerminalPramsManager_c *v177; // x0
  char v178; // w8
  const MethodInfo *v179; // x1
  bool HasFlag; // w0
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  int64_t v188; // x2
  int32_t v189; // w3
  System_String_o *v190; // x4
  BattleSetupInfo_o *v191; // x5
  FollowerInfo_o *v192; // x6
  PartyListViewItem_o *v193; // x7
  int64_t v194; // x24
  TerminalPramsManager_c *v195; // x0
  PartyOrganizationUtility_o *p_mResultEventPanelRewardInfos; // x0
  TerminalPramsManager_c *v197; // x0
  PartyOrganizationUtility_o *p_eventConquestInfos; // x0
  int64_t v199; // x2
  int32_t v200; // w3
  System_String_o *v201; // x4
  BattleSetupInfo_o *v202; // x5
  FollowerInfo_o *v203; // x6
  PartyListViewItem_o *v204; // x7
  int64_t v205; // x24
  TerminalPramsManager_c *v206; // x0
  PartyOrganizationUtility_o *v207; // x0
  bool Farm; // w19
  TerminalPramsManager_c *v209; // x0
  char v210; // w19
  int32_t v211; // w24
  WarEntity_o *v212; // x0
  __int64 v213; // x1
  int32_t id; // w19
  TerminalPramsManager_c *v215; // x0
  TerminalPramsManager_c *v216; // x0
  Il2CppObject *v217; // x24
  int64_t v218; // x2
  int32_t v219; // w3
  System_String_o *v220; // x4
  BattleSetupInfo_o *v221; // x5
  FollowerInfo_o *v222; // x6
  PartyListViewItem_o *v223; // x7
  int64_t v224; // x2
  int32_t v225; // w3
  System_String_o *v226; // x4
  BattleSetupInfo_o *v227; // x5
  FollowerInfo_o *v228; // x6
  PartyListViewItem_o *v229; // x7
  int64_t v230; // x25
  TerminalPramsManager_c *v231; // x0
  PartyOrganizationUtility_o *p_OldUserEventPoint_k__BackingField; // x0
  signed int max_length; // w9
  BattleResultComponent_resultData_array *v234; // x25
  int v235; // w8
  Il2CppClass **v236; // x8
  Il2CppClass *v237; // x26
  int32_t RaidGroupDeadQuestId; // w27
  signed int v239; // w9
  BattleResultComponent_resultData_array *v240; // x27
  int v241; // w8
  int v242; // w21
  struct TerminalPramsManager_StaticFields *v243; // x8
  int32_t name_high; // w21
  signed int v245; // w9
  BattleResultComponent_resultData_array *v246; // x25
  int v247; // w8
  BattleResultComponent_resultData_o *v248; // x19
  int32_t RaidDeadQuestId; // w26
  struct TerminalPramsManager_StaticFields *v250; // x8
  int32_t v251; // w19
  TerminalPramsManager_c *v252; // x0
  TerminalPramsManager_c *v253; // x8
  bool v254; // w19
  TerminalPramsManager_c *v255; // x0
  int32_t v256; // w19
  int32_t v257; // w21
  Il2CppObject *v258; // x24
  int32_t eventId; // w25
  bool v260; // w24
  TerminalPramsManager_c *v261; // x0
  char *v262; // x21
  BattleResultComponent_resultData_o *v263; // x8
  int v264; // w9
  int v265; // w11
  __int64 v266; // x19
  int32_t bounds_high; // w24
  bool IsUserEventStatus; // w0
  TerminalPramsManager_c *v269; // x0
  TerminalPramsManager_c *v270; // x0
  TerminalPramsManager_c *v271; // x0
  Il2CppObject *v272; // x24
  __int64 v273; // x1
  int64_t v274; // x2
  int32_t v275; // w3
  System_String_o *v276; // x4
  BattleSetupInfo_o *v277; // x5
  FollowerInfo_o *v278; // x6
  PartyListViewItem_o *v279; // x7
  TerminalPramsManager_c *v280; // x0
  PartyOrganizationUtility_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  struct System_String_o *ultimateGetQpText; // x8
  struct System_String_o *v283; // x8
  signed int v284; // w8
  System_String_o **v285; // x9
  System_String_o *v286; // x26
  System_String_o **v287; // x9
  System_String_o *v288; // x21
  void **v289; // x8
  int32_t v290; // w22
  System_Collections_Generic_List_object__o *v291; // x27
  TerminalPramsManager___c_c *v292; // x8
  System_Predicate_object__o *_9__708_0; // x25
  Il2CppObject *v294; // x22
  struct TerminalPramsManager___c_StaticFields *v295; // x0
  int64_t v296; // x2
  int32_t v297; // w3
  System_String_o *v298; // x4
  BattleSetupInfo_o *v299; // x5
  FollowerInfo_o *v300; // x6
  PartyListViewItem_o *v301; // x7
  __int64 v302; // x1
  TerminalPramsManager_c *v303; // x0
  TerminalPramsManager_c *v304; // x0
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x27
  System_String_o *v306; // x22
  int64_t v307; // x2
  int32_t v308; // w3
  System_String_o *v309; // x4
  BattleSetupInfo_o *v310; // x5
  FollowerInfo_o *v311; // x6
  PartyListViewItem_o *v312; // x7
  TerminalPramsManager_c *v313; // x0
  int32_t v314; // w24
  int32_t PhaseCnt_k__BackingField; // w25
  _BOOL4 IsQuestClear_k__BackingField; // w19
  TerminalPramsManager_c *v317; // x0
  __int64 *v318; // x26
  Il2CppObject *v319; // x24
  TerminalPramsManager_c *v320; // x0
  Il2CppObject *v321; // x24
  int v322; // w21
  TerminalPramsManager_c *v323; // x0
  PartyOrganizationUtility_o *p_questClearCostumeRelease_k__BackingField; // x0
  int64_t v325; // x2
  int32_t v326; // w3
  System_String_o *v327; // x4
  BattleSetupInfo_o *v328; // x5
  FollowerInfo_o *v329; // x6
  PartyListViewItem_o *v330; // x7
  BattleResultComponent_resultData_o *v331; // x8
  int64_t v332; // x24
  TerminalPramsManager_c *v333; // x0
  PartyOrganizationUtility_o *v334; // x0
  TerminalPramsManager_c *v335; // x0
  PartyOrganizationUtility_o *p_questClearCostumeGet_k__BackingField; // x0
  int64_t v337; // x2
  int32_t v338; // w3
  System_String_o *v339; // x4
  BattleSetupInfo_o *v340; // x5
  FollowerInfo_o *v341; // x6
  PartyListViewItem_o *v342; // x7
  int64_t v343; // x24
  TerminalPramsManager_c *v344; // x0
  PartyOrganizationUtility_o *v345; // x0
  TerminalPramsManager_c *v346; // x0
  PartyOrganizationUtility_o *p_eventPointWinReward_k__BackingField; // x0
  int64_t v348; // x2
  int32_t v349; // w3
  System_String_o *v350; // x4
  BattleSetupInfo_o *v351; // x5
  FollowerInfo_o *v352; // x6
  PartyListViewItem_o *v353; // x7
  TerminalPramsManager_c *v354; // x0
  int32_t v355; // w24
  QuestGroupMaster_o *v356; // x25
  int32_t GroupId; // w0
  TerminalPramsManager_c *v358; // x8
  int32_t v359; // w26
  int v360; // w25
  Il2CppObject *v361; // x26
  EventPointEntity_o *v362; // x25
  int32_t v363; // w24
  struct TerminalPramsManager_StaticFields *v364; // x8
  BattleResultComponent_resultData_o *v365; // x8
  struct System_String_o *v366; // x9
  int64_t v367; // x24
  TerminalPramsManager_c *v368; // x0
  PartyOrganizationUtility_o *v369; // x0
  int32_t v370; // w19
  TerminalPramsManager_c *v371; // x0
  TerminalPramsManager_c *v372; // x0
  PartyOrganizationUtility_o *p_eventRaceBoost_k__BackingField; // x0
  int64_t v374; // x2
  int32_t v375; // w3
  System_String_o *v376; // x4
  BattleSetupInfo_o *v377; // x5
  FollowerInfo_o *v378; // x6
  PartyListViewItem_o *v379; // x7
  __int64 v380; // x8
  int64_t v381; // x23
  TerminalPramsManager_c *v382; // x0
  PartyOrganizationUtility_o *v383; // x0
  __int64 v384; // x19
  BattleResultComponent_resultData_o *v385; // x9
  struct System_String_o *v386; // x10
  int64_t v387; // x23
  TerminalPramsManager_c *v388; // x0
  PartyOrganizationUtility_o *p_eventTowerReward_k__BackingField; // x0
  int64_t v390; // x2
  int32_t v391; // w3
  System_String_o *v392; // x4
  BattleSetupInfo_o *v393; // x5
  FollowerInfo_o *v394; // x6
  PartyListViewItem_o *v395; // x7
  int64_t v396; // x23
  TerminalPramsManager_c *v397; // x0
  PartyOrganizationUtility_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  int64_t v399; // x23
  TerminalPramsManager_c *v400; // x0
  PartyOrganizationUtility_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  int64_t v402; // x23
  TerminalPramsManager_c *v403; // x0
  PartyOrganizationUtility_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  int64_t v405; // x23
  TerminalPramsManager_c *v406; // x0
  PartyOrganizationUtility_o *p_warClearReward_k__BackingField; // x0
  TerminalPramsManager_c *v408; // x0
  struct TerminalPramsManager_StaticFields *v409; // x0
  __int64 v410; // x1
  int64_t v411; // x2
  int32_t v412; // w3
  System_String_o *v413; // x4
  BattleSetupInfo_o *v414; // x5
  FollowerInfo_o *v415; // x6
  PartyListViewItem_o *v416; // x7
  TerminalPramsManager_c *v417; // x0
  struct TerminalPramsManager_StaticFields *v418; // x0
  Il2CppObject *Instance; // x23
  int32_t WarID_ByQuestID; // w22
  WarEntity_o *WarEntityByWarID; // x0
  int32_t v422; // w23
  int64_t v423; // x2
  int32_t v424; // w3
  System_String_o *v425; // x4
  BattleSetupInfo_o *v426; // x5
  FollowerInfo_o *v427; // x6
  PartyListViewItem_o *v428; // x7
  __int64 v429; // x8
  int64_t v430; // x22
  TerminalPramsManager_c *v431; // x0
  struct TerminalPramsManager_StaticFields *v432; // x0
  PartyOrganizationUtility_o *p_oldPersonalBoss_k__BackingField; // x0
  TerminalPramsManager_c *v434; // x0
  struct TerminalPramsManager_StaticFields *v435; // x0
  struct EventTowerReward_array *eventTowerReward; // x8
  bool v437; // w19
  BalanceConfig_c *v438; // x8
  int32_t v439; // w19
  TerminalPramsManager_c *v440; // x0
  __int64 v441; // x1
  TerminalPramsManager_c *v442; // x0
  BalanceConfig_c *v443; // x8
  int32_t v444; // w19
  TerminalPramsManager_c *v445; // x0
  BalanceConfig_c *v446; // x8
  int32_t v447; // w19
  TerminalPramsManager_c *v448; // x0
  BalanceConfig_c *v449; // x8
  int32_t v450; // w19
  Il2CppObject *v451; // x22
  struct DeckData_o *v452; // x21
  int64_t v453; // x2
  int32_t v454; // w3
  System_String_o *v455; // x4
  BattleSetupInfo_o *v456; // x5
  FollowerInfo_o *v457; // x6
  PartyListViewItem_o *v458; // x7
  UserSuperBossEntity_o *v459; // x22
  BattleResultComponent_resultData_array *v460; // x21
  __int64 v461; // x1
  int64_t v462; // x2
  int32_t v463; // w3
  System_String_o *v464; // x4
  BattleSetupInfo_o *v465; // x5
  FollowerInfo_o *v466; // x6
  PartyListViewItem_o *v467; // x7
  TerminalPramsManager_c *v468; // x0
  struct TerminalPramsManager_StaticFields *v469; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v471; // x21
  Il2CppObject *v472; // x22
  int32_t ScriptQuestId; // w22
  __int64 v474; // x1
  Il2CppObject *v475; // x23
  TerminalPramsManager_c *v476; // x0
  int32_t v477; // w26
  int32_t winResult; // w24
  int64_t v479; // x2
  int32_t v480; // w3
  System_String_o *v481; // x4
  BattleSetupInfo_o *v482; // x5
  FollowerInfo_o *v483; // x6
  PartyListViewItem_o *v484; // x7
  __int64 v485; // x1
  Il2CppObject *v486; // x23
  TerminalPramsManager_c *v487; // x0
  int32_t v488; // w24
  int32_t v489; // w21
  TerminalPramsManager_c *v490; // x0
  void *v491; // x1
  PartyOrganizationUtility_o *p_lastPlayBgmName; // x0
  const MethodInfo *v493; // x0
  Il2CppObject *v494; // x21
  int32_t v495; // w22
  int64_t v496; // x2
  int32_t v497; // w3
  System_String_o *v498; // x4
  BattleSetupInfo_o *v499; // x5
  FollowerInfo_o *v500; // x6
  PartyListViewItem_o *v501; // x7
  TerminalPramsManager_c *v502; // x0
  il2cpp_array_size_t *v503; // x0
  int32_t v504; // w22
  TerminalPramsManager_c *v505; // x0
  int32_t v506; // w23
  __int64 v507; // x1
  int64_t v508; // x2
  int32_t v509; // w3
  System_String_o *v510; // x4
  BattleSetupInfo_o *v511; // x5
  FollowerInfo_o *v512; // x6
  PartyListViewItem_o *v513; // x7
  SpecifiedSceneInfo_o *SpecifiedSceneInfo; // x22
  TerminalPramsManager_c *v515; // x0
  struct TerminalPramsManager_StaticFields *v516; // x0
  const MethodInfo *v517; // x0
  int64_t v518; // x2
  int32_t v519; // w3
  System_String_o *v520; // x4
  BattleSetupInfo_o *v521; // x5
  FollowerInfo_o *v522; // x6
  PartyListViewItem_o *v523; // x7
  int32_t v524; // w19
  TerminalPramsManager_c *v525; // x0
  PartyOrganizationUtility_o *p_eventHarvestGrowthInfo; // x0
  __int64 v527; // x1
  TerminalPramsManager_c *v528; // x0
  BattleResultComponent_resultData_array *v529; // x22
  int32_t ScriptIntParam; // w24
  int32_t v531; // w0
  int32_t v532; // w25
  int64_t v533; // x23
  int64_t v534; // x2
  int32_t v535; // w3
  System_String_o *v536; // x4
  BattleSetupInfo_o *v537; // x5
  FollowerInfo_o *v538; // x6
  PartyListViewItem_o *v539; // x7
  Il2CppArrayBounds *bounds; // d0
  TerminalPramsManager_c *v541; // x0
  PartyOrganizationUtility_o *v542; // x0
  Il2CppObject *v543; // x22
  QuestEntity_o *QuestEntity; // x0
  int64_t v545; // x2
  int32_t v546; // w3
  System_String_o *v547; // x4
  BattleSetupInfo_o *v548; // x5
  FollowerInfo_o *v549; // x6
  PartyListViewItem_o *v550; // x7
  QuestEntity_o *v551; // x22
  TerminalPramsManager_c *v552; // x0
  int32_t SpotId; // w21
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v555; // x21
  TerminalPramsManager_c *v556; // x0
  struct EventAreaImproveResultInfo_o *eventAreaImproveResultInfo; // x8
  TerminalPramsManager_c *v558; // x0
  __int64 v559; // x1
  System_String_o *v560; // x21
  TerminalPramsManager_c *v561; // x0
  System_String_o *v562; // x0
  __int64 v563; // x1
  int64_t v564; // x2
  int32_t v565; // w3
  System_String_o *v566; // x4
  BattleSetupInfo_o *v567; // x5
  FollowerInfo_o *v568; // x6
  PartyListViewItem_o *v569; // x7
  System_String_o *v570; // x21
  TerminalPramsManager_c *v571; // x0
  PartyOrganizationUtility_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  int64_t v573; // x21
  TerminalPramsManager_c *v574; // x0
  PartyOrganizationUtility_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v576; // x1
  __int64 v577; // x21
  TerminalPramsManager_c *v578; // x0
  int64_t v579; // x2
  int32_t v580; // w3
  System_String_o *v581; // x4
  BattleSetupInfo_o *v582; // x5
  FollowerInfo_o *v583; // x6
  PartyListViewItem_o *v584; // x7
  int64_t v585; // x2
  int32_t v586; // w3
  System_String_o *v587; // x4
  BattleSetupInfo_o *v588; // x5
  FollowerInfo_o *v589; // x6
  PartyListViewItem_o *v590; // x7
  void *v591; // x1
  __int64 v592; // x1
  TerminalPramsManager_c *v593; // x0
  int64_t v594; // x2
  int32_t v595; // w3
  System_String_o *v596; // x4
  BattleSetupInfo_o *v597; // x5
  FollowerInfo_o *v598; // x6
  PartyListViewItem_o *v599; // x7
  int64_t v600; // x2
  int32_t v601; // w3
  System_String_o *v602; // x4
  BattleSetupInfo_o *v603; // x5
  FollowerInfo_o *v604; // x6
  PartyListViewItem_o *v605; // x7
  void *v606; // x1
  __int64 v607; // x1
  TerminalPramsManager_c *v608; // x0
  int64_t v609; // x2
  int32_t v610; // w3
  System_String_o *v611; // x4
  BattleSetupInfo_o *v612; // x5
  FollowerInfo_o *v613; // x6
  PartyListViewItem_o *v614; // x7
  int64_t v615; // x2
  int32_t v616; // w3
  System_String_o *v617; // x4
  BattleSetupInfo_o *v618; // x5
  FollowerInfo_o *v619; // x6
  PartyListViewItem_o *v620; // x7
  void *v621; // x1
  __int64 v622; // x1
  TerminalPramsManager_c *v623; // x0
  int64_t v624; // x2
  int32_t v625; // w3
  System_String_o *v626; // x4
  BattleSetupInfo_o *v627; // x5
  FollowerInfo_o *v628; // x6
  PartyListViewItem_o *v629; // x7
  System_String_o *v630; // x0
  const MethodInfo *v631; // x1
  const MethodInfo *v632; // x0
  const MethodInfo *v633; // x0
  const MethodInfo *v634; // x0
  const MethodInfo *v635; // x0
  const MethodInfo *v636; // x0
  const MethodInfo *v637; // x0
  __int64 v638; // x1
  TerminalPramsManager_c *v639; // x0
  __int64 v640; // x0
  System_String_o *isLastGoalPlayed; // [xsp+18h] [xbp-138h]
  bool v642; // [xsp+24h] [xbp-12Ch]
  BattleResultComponent_resultData_array *resulta; // [xsp+28h] [xbp-128h]
  il2cpp_array_size_t *p_max_length; // [xsp+30h] [xbp-120h]
  BattleResultComponent_resultData_array **m_Items; // [xsp+38h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v646; // [xsp+40h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v647; // [xsp+60h] [xbp-F0h]
  __int128 v648; // [xsp+80h] [xbp-D0h]
  char v649[4]; // [xsp+9Ch] [xbp-B4h] BYREF
  UserSuperBossEntity_o *v650; // [xsp+A0h] [xbp-B0h] BYREF
  Il2CppObject *v651; // [xsp+A8h] [xbp-A8h] BYREF
  Il2CppObject *v652; // [xsp+B0h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *v653; // [xsp+B8h] [xbp-98h] BYREF
  int QuestId_k__BackingField; // [xsp+C4h] [xbp-8Ch] BYREF
  Il2CppObject *v655; // [xsp+C8h] [xbp-88h] BYREF
  Il2CppObject *v656; // [xsp+D0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+D8h] [xbp-78h] BYREF
  int v658; // [xsp+E4h] [xbp-6Ch] BYREF
  QuestPhaseEntity_o *v659; // [xsp+E8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v660; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v661; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v662; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v663; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v664; // 0:x0.16

  v4 = result;
  if ( (byte_4C1F4B0 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, isWin);
    sub_1C3B764(&bool_TypeInfo, v5);
    sub_1C3B764(&CondType_TypeInfo, v6);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventPointMaster___, v8);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventRaidMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestGroupMaster___, v10);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMessageMaster___, v12);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v14);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestMaster___, v15);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v16);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, v17);
    sub_1C3B764(&Method_DataManager_GetMasterData_WarMaster___, v18);
    sub_1C3B764(&Method_DataManager_GetMaster_EventDetailMaster___, v19);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestPhaseMaster___, v20);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantMaster___, v21);
    sub_1C3B764(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v22);
    sub_1C3B764(&Method_DataManager_GetMaster_UserSuperBossMaster___, v23);
    sub_1C3B764(&Method_DataManager_GetMaster_WarMaster___, v24);
    sub_1C3B764(&DataManager_TypeInfo, v25);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v26);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v27);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v28);
    sub_1C3B764(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v29);
    sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, v30);
    sub_1C3B764(&EventHarvestGrowthInfo_TypeInfo, v31);
    sub_1C3B764(&EventSaveData_TypeInfo, v32);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v33);
    sub_1C3B764(&NetworkManager_TypeInfo, v34);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v36);
    sub_1C3B764(&System_Predicate_QuestReleaseEntity__TypeInfo, v37);
    sub_1C3B764(&QuestClearHeroineInfo_TypeInfo, v38);
    sub_1C3B764(&ScriptManager_TypeInfo, v39);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v40);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41);
    sub_1C3B764(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v42);
    sub_1C3B764(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v43);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v44);
    sub_1C3B764(&string___TypeInfo, v45);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v46);
    sub_1C3B764(&TitleInfoEventRaidBossComponent_TypeInfo, v47);
    sub_1C3B764(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v48);
    sub_1C3B764(&Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__708_0__, v49);
    sub_1C3B764(&TerminalPramsManager___c_TypeInfo, v50);
    sub_1C3B764(&UserServantCollectionEntity___TypeInfo, v51);
    sub_1C3B764(&UserServantCollectionEntity_TypeInfo, v52);
    sub_1C3B764(&UserServantEntity_TypeInfo, v53);
    sub_1C3B764(&UserSuperBossEntity___TypeInfo, v54);
    sub_1C3B764(&StringLiteral_20275/*"import"*/, v55);
    sub_1C3B764(&StringLiteral_17032/*"bottomRight"*/, v56);
    sub_1C3B764(&StringLiteral_845/*", line {0}, position {1}"*/, v57);
    sub_1C3B764(&StringLiteral_20276/*"importance"*/, v58);
    sub_1C3B764(&StringLiteral_1/*""*/, v59);
    sub_1C3B764(&StringLiteral_6769/*"FullScreen/FSUtilityList"*/, v60);
    result = (BattleResultComponent_resultData_array *)sub_1C3B764(&StringLiteral_1191/*"1.0"*/, v61);
    byte_4C1F4B0 = 1;
  }
  v659 = 0LL;
  v658 = 0;
  v656 = 0LL;
  entity = 0LL;
  v655 = 0LL;
  QuestId_k__BackingField = 0;
  v652 = 0LL;
  v653 = 0LL;
  v650 = 0LL;
  v651 = 0LL;
  v649[0] = 0;
  if ( !v4 )
    goto LABEL_1189;
  p_max_length = &v4->max_length;
  if ( !v4->max_length )
    goto LABEL_1190;
  v62 = v4->m_Items[0];
  m_Items = (BattleResultComponent_resultData_array **)v4->m_Items;
  if ( !v62 )
    goto LABEL_1189;
  oldUserSvtCollection = v62->fields.oldUserSvtCollection;
  if ( !oldUserSvtCollection )
    goto LABEL_1189;
  v64 = (_DWORD *)sub_1C3B80C(UserServantCollectionEntity___TypeInfo, oldUserSvtCollection->max_length);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1189;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v71 = (*m_Items)->m_Items[11];
  v642 = isWin;
  resulta = v4;
  v658 = 0;
  if ( !v71 )
    goto LABEL_1189;
  eventEndTitle = (int)v71->fields.eventEndTitle;
  v73 = &qword_4C1C000;
  if ( eventEndTitle >= 1 )
  {
    v74 = (UserServantCollectionMaster_o *)result;
    v75 = 0;
    while ( v75 < eventEndTitle )
    {
      v76 = *((_QWORD *)&v71->fields.eventEndMessage + (int)v75);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !*((_BYTE *)v73 + 2389) )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, isWin);
        *((_BYTE *)v73 + 2389) = 1;
      }
      result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
      }
      if ( !v76 )
        goto LABEL_1189;
      v78 = *(_QWORD *)(v76 + 24);
      v77 = *(_QWORD *)(v76 + 32);
      myDeck = result->m_Items[19]->fields.myDeck;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v660.fields.currentCryptoKey = v78;
      *(_QWORD *)&v660.fields.fakeValue = v77;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                           v660,
                                                           0LL);
      if ( !v74 )
        goto LABEL_1189;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v74, (int64_t)myDeck, (int32_t)result, 0LL);
      v81 = (UserServantCollectionEntity_o *)sub_1C3B9B0(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor_41641948(v81, EntityDefinitely, 0LL);
      v73 = &qword_4C1C000;
      if ( !v64 )
        goto LABEL_1189;
      if ( v81 )
      {
        result = (BattleResultComponent_resultData_array *)sub_1C3B8A0(v81, *(_QWORD *)(*(_QWORD *)v64 + 64LL));
        if ( !result )
          goto LABEL_1191;
      }
      if ( v75 >= v64[6] )
        break;
      v88 = &v64[2 * v75];
      *((_QWORD *)v88 + 4) = v81;
      v89 = (PartyOrganizationUtility_o *)(v88 + 8);
      sub_1C3B708(v89, (int64_t)v81, v82, v83, v84, v85, v86, v87);
      if ( v75 >= v64[6] )
        break;
      klass = v89->klass;
      *(_OWORD *)&v647.fields.currentCryptoKey = *(_OWORD *)(v76 + 84);
      if ( !klass )
        goto LABEL_1189;
      *(_OWORD *)((char *)&klass->_1.declaringType + 4) = *(_OWORD *)&v647.fields.currentCryptoKey;
      if ( v75 >= v64[6] )
        break;
      v91 = v89->klass;
      v648 = *(_OWORD *)(v76 + 100);
      if ( !v91 )
        goto LABEL_1189;
      *(_OWORD *)((char *)&v91->_1.generic_class + 4) = v648;
      if ( v75 >= v64[6] )
        break;
      if ( !v89->klass )
        goto LABEL_1189;
      ++v75;
      HIDWORD(v89->klass->_1.interopData) = *(_DWORD *)(v76 + 116);
      v658 = v75;
      eventEndTitle = (int)v71->fields.eventEndTitle;
      if ( (int)v75 >= eventEndTitle )
        goto LABEL_35;
    }
LABEL_1190:
    sub_1C3B9C8(result, isWin);
  }
LABEL_35:
  v92 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v92 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestClearHeroineInfo = (PartyOrganizationUtility_o *)&v92->static_fields->mQuestClearHeroineInfo;
  p_mQuestClearHeroineInfo->klass = 0LL;
  sub_1C3B708(p_mQuestClearHeroineInfo, 0LL, v65, v66, v67, v68, v69, v70);
  v94 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v95 = (*m_Items)->m_Items[5];
  if ( v95 )
  {
    v96 = v95->fields.eventEndTitle;
    if ( v96 )
    {
      if ( !(_DWORD)v96 )
        goto LABEL_1190;
      eventEndMessage = v95->fields.eventEndMessage;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1189;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !eventEndMessage )
        goto LABEL_1189;
      v98 = *(_OWORD *)&eventEndMessage[1].monitor;
      v99 = (DataMasterBase_TMaster__TEntity__PKType__o *)result;
      *(_OWORD *)&v647.fields.currentCryptoKey = *(_OWORD *)&eventEndMessage->fields._stringLength;
      *(_OWORD *)&v647.fields.fakeValue = v98;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v646 = v647;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(
                                                           &v646,
                                                           0LL);
      if ( !v99 )
        goto LABEL_1189;
      v100 = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                      v99,
                                      (int64_t)result,
                                      (const MethodInfo_329D3A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v101 = sub_1C3B9B0(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_41667060((UserServantEntity_o *)v101, v100, 0LL);
      v648 = *(_OWORD *)&eventEndMessage[4].klass;
      if ( !v101 )
        goto LABEL_1189;
      *(_OWORD *)(v101 + 96) = v648;
      *(_DWORD *)(v101 + 256) = eventEndMessage[10].fields._stringLength;
      *(_QWORD *)(v101 + 292) = *(System_String_c **)((char *)&eventEndMessage[12].klass + 4);
      monitor = eventEndMessage[5].monitor;
      p_monitor = &eventEndMessage[5].monitor;
      v103 = monitor;
      v105 = p_monitor[1];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v661.fields.currentCryptoKey = v103;
      *(_QWORD *)&v661.fields.fakeValue = v105;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v661, 0LL) >= 1 )
        *(_OWORD *)(v101 + 128) = *(_OWORD *)p_monitor;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1189;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)result,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v106);
        byte_4C1C955 = 1;
      }
      v108 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v108 = NetworkManager_TypeInfo;
      }
      v110 = *(_QWORD *)(v101 + 80);
      v109 = *(_QWORD *)(v101 + 88);
      userIdNumber = v108->static_fields->userIdNumber;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v662.fields.currentCryptoKey = v110;
      *(_QWORD *)&v662.fields.fakeValue = v109;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                           v662,
                                                           0LL);
      if ( !MasterData_object )
        goto LABEL_1189;
      result = (BattleResultComponent_resultData_array *)UserServantCollectionMaster__GetEntityDefinitely(
                                                           (UserServantCollectionMaster_o *)MasterData_object,
                                                           userIdNumber,
                                                           (int32_t)result,
                                                           0LL);
      v658 = 0;
      if ( !v64 )
        goto LABEL_1189;
      v112 = v64[6];
      v113 = (UserServantCollectionEntity_o *)result;
      if ( v112 >= 1 )
      {
        v114 = 0;
        while ( v114 < (unsigned int)v112 )
        {
          v115 = *(UserServantCollectionEntity_o **)&v64[2 * v114 + 8];
          if ( !v115 )
            goto LABEL_1189;
          userId = (struct DeckData_o *)v115->fields.userId;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C1C955 )
          {
            sub_1C3B764(&NetworkManager_TypeInfo, isWin);
            byte_4C1C955 = 1;
          }
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          }
          if ( userId == result->m_Items[19]->fields.myDeck )
          {
            SvtId = UserServantCollectionEntity__getSvtId(v115, 0LL);
            v118 = *(_QWORD *)(v101 + 80);
            v119 = *(_QWORD *)(v101 + 88);
            v120 = SvtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v663.fields.currentCryptoKey = v118;
            *(_QWORD *)&v663.fields.fakeValue = v119;
            result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                                 v663,
                                                                 0LL);
            if ( v120 == (_DWORD)result )
              goto LABEL_79;
          }
          v114 = v658 + 1;
          v658 = v114;
          v112 = v64[6];
          if ( v114 >= v112 )
            goto LABEL_78;
        }
        goto LABEL_1190;
      }
LABEL_78:
      v115 = 0LL;
LABEL_79:
      v121 = sub_1C3B9B0(QuestClearHeroineInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v121, 0LL);
      if ( !v121 )
        goto LABEL_1189;
      *(_QWORD *)(v121 + 16) = v101;
      sub_1C3B708((PartyOrganizationUtility_o *)(v121 + 16), v101, v122, v123, v124, v125, v126, v127);
      result = (BattleResultComponent_resultData_array *)UserServantEntity__getLimitCount(
                                                           (UserServantEntity_o *)v101,
                                                           0LL);
      if ( !v100 )
        goto LABEL_1189;
      v134 = (_DWORD)result != UserServantEntity__getLimitCount(v100, 0LL);
      *(_BYTE *)(v121 + 25) = 0;
      *(_DWORD *)(v121 + 28) = 0;
      *(_DWORD *)(v121 + 32) = 0;
      *(_BYTE *)(v121 + 40) = 0;
      *(_DWORD *)(v121 + 36) = -1;
      *(_BYTE *)(v121 + 24) = v134;
      *(_BYTE *)(v121 + 41) = *(_DWORD *)(v101 + 296) != v100->fields.exceedCount;
      if ( v115 )
      {
        result = (BattleResultComponent_resultData_array *)UserServantCollectionEntity__getFriendShipRank(v115, 0LL);
        if ( !v113 )
          goto LABEL_1189;
        if ( (_DWORD)result != UserServantCollectionEntity__getFriendShipRank(v113, 0LL) )
          *(_DWORD *)(v121 + 36) = UserServantCollectionEntity__getFriendShipRank(v115, 0LL);
        if ( v115->fields.friendshipExceedCount != v113->fields.friendshipExceedCount )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantMaster___);
          v137 = *(_QWORD *)(v101 + 80);
          v136 = *(_QWORD *)(v101 + 88);
          v138 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v664.fields.currentCryptoKey = v137;
          *(_QWORD *)&v664.fields.fakeValue = v136;
          result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                               v664,
                                                               0LL);
          if ( !v138 )
            goto LABEL_1189;
          result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                               v138,
                                                               &entity,
                                                               (int32_t)result,
                                                               (const MethodInfo_329AE94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_1189;
            klass_high = HIDWORD(entity[6].klass);
            friendshipExceedCount = v115->fields.friendshipExceedCount;
            *(_BYTE *)(v121 + 40) = 1;
            *(_DWORD *)(v121 + 36) = friendshipExceedCount + klass_high;
          }
        }
      }
      v141 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v141 = TerminalPramsManager_TypeInfo;
      }
      v73 = &qword_4C1C000;
      v142 = (PartyOrganizationUtility_o *)&v141->static_fields->mQuestClearHeroineInfo;
      v142->klass = (PartyOrganizationUtility_c *)v121;
      sub_1C3B708(v142, v121, v128, v129, v130, v131, v132, v133);
      v94 = *(_QWORD *)p_max_length;
    }
  }
  if ( !(_DWORD)v94 )
    goto LABEL_1190;
  v143 = (BattleResultComponent_resultData_o *)*m_Items;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetBattleResultCampaignBonus(v143, (const MethodInfo *)isWin);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v144 = (*m_Items)->m_Items[9];
  if ( v144 && (v145 = v144->fields.eventEndTitle) != 0LL )
  {
    if ( !(_DWORD)v145 )
      goto LABEL_1190;
    v146 = (UserQuestEntity_o *)v144->fields.eventEndMessage;
  }
  else
  {
    v146 = 0LL;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1ECCB )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    byte_4C1ECCB = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE6(result->m_Items[19]->fields.oldUserGame) = v146 != 0LL;
  if ( !byte_4C1ECCA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4C1ECCA = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE5(result->m_Items[19]->fields.oldUserGame) = 0;
  if ( !byte_4C1EDF4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4C1EDF4 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE1(result->m_Items[19]->fields.resultDamageRewardInfos) = 0;
  if ( !byte_4C1ECC9 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4C1ECC9 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( BYTE6(result->m_Items[19]->fields.oldUserGame) )
  {
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_4C1CBC4 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1CBC4 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( result->m_Items[19]->fields.eventId )
    {
      if ( !v146 )
        goto LABEL_1189;
    }
    else
    {
      if ( !v146 )
        goto LABEL_1189;
      questId = v146->fields.questId;
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4C1EA89 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
        byte_4C1EA89 = 1;
      }
      v148 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v148 = TerminalPramsManager_TypeInfo;
      }
      v148->static_fields->_QuestId_k__BackingField = questId;
      QuestPhase = UserQuestEntity__getQuestPhase(v146, 0LL);
      if ( !byte_4C1EA8D )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v149);
        byte_4C1EA8D = 1;
      }
      v151 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v151 = TerminalPramsManager_TypeInfo;
      }
      v151->static_fields->_PhaseCnt_k__BackingField = QuestPhase;
    }
    v152 = v146->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1189;
    v153 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !*((_BYTE *)v73 + 2389) )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, isWin);
      *((_BYTE *)v73 + 2389) = 1;
    }
    result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    }
    if ( !v153 )
      goto LABEL_1189;
    v154 = UserQuestMaster__GetEntity((UserQuestMaster_o *)v153, (int64_t)result->m_Items[19]->fields.myDeck, v152, 0LL);
    if ( v154 )
    {
      v155 = v154;
      v156 = UserQuestEntity__getQuestPhase(v154, 0LL);
      if ( UserQuestEntity__getClearNum(v146, 0LL) || UserQuestEntity__getClearNum(v155, 0LL) != 1 )
        v158 = UserQuestEntity__IsResetStatus(v146, 0LL) && !UserQuestEntity__IsResetStatus(v155, 0LL);
      else
        v158 = 1;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1ECCA )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v157);
        byte_4C1ECCA = 1;
      }
      v159 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v159 = TerminalPramsManager_TypeInfo;
      }
      v159->static_fields->_IsQuestClear_k__BackingField = v158;
      if ( !byte_4C1F4E2 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v157);
        v159 = TerminalPramsManager_TypeInfo;
        byte_4C1F4E2 = 1;
      }
      if ( !v159->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v159);
        v159 = TerminalPramsManager_TypeInfo;
      }
      v159->static_fields->_EventUIEffectClearQuestId_k__BackingField = v152;
      if ( !byte_4C1F4DF )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v157);
        v159 = TerminalPramsManager_TypeInfo;
        byte_4C1F4DF = 1;
      }
      if ( !v159->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v159);
        v159 = TerminalPramsManager_TypeInfo;
      }
      v159->static_fields->_MapModelClearQuestId_k__BackingField = v152;
      if ( !byte_4C1F4E0 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v157);
        v159 = TerminalPramsManager_TypeInfo;
        byte_4C1F4E0 = 1;
      }
      if ( !v159->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v159);
        v159 = TerminalPramsManager_TypeInfo;
      }
      v159->static_fields->_MapModelClearPhaseCount_k__BackingField = v156;
      TerminalPramsManager__MapModelClearQuestInfo_SaveData((const MethodInfo *)v159);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !result )
        goto LABEL_1189;
      AdManager__TrackEvent((AdManager_o *)result, 4, 1, v152, v156, 0LL, 0LL);
      TerminalPramsManager__SendClearQuestToAdManager(v152, v156, v160);
    }
    else
    {
      v156 = 0;
    }
    v161 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v161);
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1189;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
    if ( !result )
      goto LABEL_1189;
    ValidMessage = QuestMessageMaster__GetValidMessage((QuestMessageMaster_o *)result, v152, v156, 3, 0LL);
    v164 = TerminalPramsManager_TypeInfo;
    if ( ValidMessage )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1DCA6 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
        byte_4C1DCA6 = 1;
      }
      v164 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v164 = TerminalPramsManager_TypeInfo;
      }
      v164->static_fields->_IsDispOnly_k__BackingField = 1;
    }
    if ( !v164->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v164);
    if ( !byte_4C1F4EF )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1F4EF = 1;
    }
    v165 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v165 = TerminalPramsManager_TypeInfo;
    }
    if ( v165->static_fields->_QuestReleaseFocusQuestId_k__BackingField >= 1 )
    {
      if ( !v165->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v165);
      if ( !byte_4C1F4EF )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
        byte_4C1F4EF = 1;
      }
      v166 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v166 = TerminalPramsManager_TypeInfo;
      }
      TerminalPramsManager__SetQuestReleasedFocusState(
        v166->static_fields->_QuestReleaseFocusQuestId_k__BackingField,
        1,
        v163);
      TerminalPramsManager__SaveQuestReleasedFocusState(v167);
      if ( !byte_4C1F071 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
        byte_4C1F071 = 1;
      }
      v165 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v165 = TerminalPramsManager_TypeInfo;
      }
      v165->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
    }
    if ( !v165->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v165);
    if ( !byte_4C1F212 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1F212 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(result->m_Items[19]->fields.eventPointWinReward) = v152;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  v168 = &byte_4C1E000;
  if ( !byte_4C1ECCC )
  {
    result = (BattleResultComponent_resultData_array *)sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    byte_4C1ECCC = 1;
  }
  v169 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v169 = TerminalPramsManager_TypeInfo;
  }
  if ( v169->static_fields->_IsQuestClear_k__BackingField )
  {
    if ( !v146 )
      goto LABEL_1189;
    v170 = v146->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1189;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !result )
      goto LABEL_1189;
    v172 = WarMaster__getByLastQuestId((WarMaster_o *)result, v170, 0LL);
    if ( v172 )
    {
      v173 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v173 = BalanceConfig_TypeInfo;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v173->static_fields->MainInterludeMapReturnWarIds,
             v172->fields.id,
             (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1ECCD )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v171);
          byte_4C1ECCD = 1;
        }
        v174 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v174 = TerminalPramsManager_TypeInfo;
        }
        v172 = 0LL;
        v174->static_fields->_IsWarClear_k__BackingField = 0;
      }
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1ECCD )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v171);
      byte_4C1ECCD = 1;
    }
    v175 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v175 = TerminalPramsManager_TypeInfo;
    }
    v175->static_fields->_IsWarClear_k__BackingField = v172 != 0LL;
    v176 = TerminalPramsManager__CheckIsOrdealCallWarClear(v172, v171);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v176 )
    {
      if ( !byte_4C1ECCE )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
        byte_4C1ECCE = 1;
      }
      v177 = TerminalPramsManager_TypeInfo;
      v168 = &byte_4C1E000;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v177 = TerminalPramsManager_TypeInfo;
      }
      v178 = 1;
    }
    else
    {
      if ( !byte_4C1ECCE )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
        byte_4C1ECCE = 1;
      }
      v177 = TerminalPramsManager_TypeInfo;
      v168 = &byte_4C1E000;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v177 = TerminalPramsManager_TypeInfo;
      }
      v178 = 0;
    }
    v177->static_fields->_IsOrdealCallWarClear_k__BackingField = v178;
    if ( !v177->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v177);
    if ( !byte_4C1ECCF )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1ECCF = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE3(result->m_Items[19]->fields.oldUserEvent) )
    {
      if ( !v172 )
        goto LABEL_1189;
      if ( !WarEntity__IsEvent(v172, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( !result )
          goto LABEL_1189;
        AdManager__TrackEvent((AdManager_o *)result, 6, 1, v172->fields.id, -1, 0LL, 0LL);
      }
    }
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !result )
      goto LABEL_1189;
    AdManager__TrackEvent((AdManager_o *)result, 5, 1, v170, -1, 0LL, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SendOpenedQuestIdToAdManager(v170, v179);
    if ( !byte_4C1ECCF )
    {
      result = (BattleResultComponent_resultData_array *)sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1ECCF = 1;
    }
    v169 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v169 = TerminalPramsManager_TypeInfo;
    }
    if ( v169->static_fields->_IsWarClear_k__BackingField )
    {
      if ( !v172 )
        goto LABEL_1189;
      HasFlag = WarEntity__HasFlag(v172, 128, 0LL);
      v169 = TerminalPramsManager_TypeInfo;
      if ( HasFlag )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1F063 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
          byte_4C1F063 = 1;
        }
        v169 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v169 = TerminalPramsManager_TypeInfo;
        }
        v169->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
        if ( !byte_4C1EDF4 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
          v169 = TerminalPramsManager_TypeInfo;
          byte_4C1EDF4 = 1;
        }
        if ( !v169->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v169);
          v169 = TerminalPramsManager_TypeInfo;
        }
        v169->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
      }
    }
  }
  if ( !v169->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v169);
  TerminalPramsManager__SetQuestRewardInfo(resulta, (const MethodInfo *)isWin);
  if ( !resulta->max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->panelEventPoint = HIDWORD((*m_Items)->m_Items[2]);
  static_fields->mResultEventPanelRewardInfos = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->mResultEventPanelRewardInfos,
    0LL,
    v181,
    v182,
    v183,
    v184,
    v185,
    v186);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v194 = (int64_t)(*m_Items)->m_Items[19];
  if ( v194 && *(_QWORD *)(v194 + 24) )
  {
    v195 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v195 = TerminalPramsManager_TypeInfo;
    }
    p_mResultEventPanelRewardInfos = (PartyOrganizationUtility_o *)&v195->static_fields->mResultEventPanelRewardInfos;
    p_mResultEventPanelRewardInfos->klass = (PartyOrganizationUtility_c *)v194;
    sub_1C3B708(p_mResultEventPanelRewardInfos, v194, v188, v189, v190, v191, v192, v193);
  }
  v197 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v197 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = (PartyOrganizationUtility_o *)&v197->static_fields->eventConquestInfos;
  p_eventConquestInfos->klass = 0LL;
  sub_1C3B708(p_eventConquestInfos, 0LL, v188, v189, v190, v191, v192, v193);
  TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items || !result )
    goto LABEL_1189;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v656,
                                                       HIDWORD((*m_Items)->bounds),
                                                       (const MethodInfo_329AE94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v205 = (int64_t)(*m_Items)->m_Items[43];
  if ( v205 && *(_QWORD *)(v205 + 24) )
  {
    v206 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v206 = TerminalPramsManager_TypeInfo;
    }
    v207 = (PartyOrganizationUtility_o *)&v206->static_fields->eventConquestInfos;
    v207->klass = (PartyOrganizationUtility_c *)v205;
    sub_1C3B708(v207, v205, v199, v200, v201, v202, v203, v204);
    if ( v656 )
      Farm = EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v656, 0LL);
    else
      Farm = 0;
    v209 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v209 = TerminalPramsManager_TypeInfo;
    }
    v209->static_fields->eventConquestInfoDisp = !Farm;
  }
  result = (BattleResultComponent_resultData_array *)v656;
  if ( v656 )
  {
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v656, 0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v168[3276] )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
        v168[3276] = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
      {
        v210 = 1;
      }
      else
      {
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_4C1ECC9 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
          byte_4C1ECC9 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        v210 = BYTE6(result->m_Items[19]->fields.oldUserGame);
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      BYTE1(result->m_Items[19][1].fields.eventPointWinReward) = v210;
    }
  }
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  if ( LOBYTE((*m_Items)->m_Items[46]) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F2F5 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1F2F5 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(result->m_Items[19][1].klass) = 1;
    if ( !v168[3276] )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      v168[3276] = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      if ( !v146 )
        goto LABEL_1189;
      v211 = v146->fields.questId;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1189;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !result )
        goto LABEL_1189;
      v212 = WarMaster__getByLastQuestId((WarMaster_o *)result, v211, 0LL);
      if ( v212 )
      {
        id = v212->fields.id;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1F2F6 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v213);
          byte_4C1F2F6 = 1;
        }
        v215 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v215 = TerminalPramsManager_TypeInfo;
        }
        v215->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = id;
      }
    }
  }
  v216 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v216 = TerminalPramsManager_TypeInfo;
  }
  *(_QWORD *)&v216->static_fields->clearLastBattleRaidId = -1LL;
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1189;
  v217 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1189;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items || !result )
    goto LABEL_1189;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)result,
          &v655,
          HIDWORD((*m_Items)->bounds),
          (const MethodInfo_329AE94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_621;
  result = (BattleResultComponent_resultData_array *)v655;
  if ( !v655 )
    goto LABEL_1189;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPoint((EventDetailEntity_o *)v655, 0LL);
  v230 = 0LL;
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !*p_max_length )
      goto LABEL_1190;
    if ( !*m_Items )
      goto LABEL_1189;
    v230 = (int64_t)(*m_Items)->m_Items[10];
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F4F0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    byte_4C1F4F0 = 1;
  }
  v231 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v231 = TerminalPramsManager_TypeInfo;
  }
  p_OldUserEventPoint_k__BackingField = (PartyOrganizationUtility_o *)&v231->static_fields->_OldUserEventPoint_k__BackingField;
  p_OldUserEventPoint_k__BackingField->klass = (PartyOrganizationUtility_c *)v230;
  sub_1C3B708(p_OldUserEventPoint_k__BackingField, v230, v224, v225, v226, v227, v228, v229);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items || !v217 )
    goto LABEL_1189;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidGorupMax(
                                                       (EventRaidMaster_o *)v217,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0LL);
  if ( (int)result >= 1 )
  {
    if ( !*p_max_length )
      goto LABEL_1190;
    if ( !*m_Items )
      goto LABEL_1189;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                         (EventRaidMaster_o *)v217,
                                                         HIDWORD((*m_Items)->bounds),
                                                         0LL);
    v658 = 0;
    if ( !result )
      goto LABEL_1189;
    max_length = result->max_length;
    v234 = result;
    if ( max_length < 1 )
      goto LABEL_621;
    v235 = 0;
    while ( 1 )
    {
      if ( v235 >= (unsigned int)max_length )
        goto LABEL_1190;
      v236 = &v234->obj.klass + v235;
      v237 = v236[4];
      if ( !v237 )
        goto LABEL_1189;
      result = (BattleResultComponent_resultData_array *)EventRaidEntity__IsJumbleSingleRaid(
                                                           (EventRaidEntity_o *)v236[4],
                                                           0LL);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !*p_max_length )
          goto LABEL_1190;
        if ( !*m_Items )
          goto LABEL_1189;
        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                 (EventRaidMaster_o *)v217,
                                 HIDWORD((*m_Items)->bounds),
                                 (int32_t)v237->_1.namespaze,
                                 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1CBC4 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
          byte_4C1CBC4 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( RaidGroupDeadQuestId == result->m_Items[19]->fields.eventId )
        {
          result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !result )
            goto LABEL_1189;
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
        goto LABEL_1190;
      if ( !*m_Items )
        goto LABEL_1189;
      result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidAliveQuestIds(
                                                           (EventRaidMaster_o *)v217,
                                                           HIDWORD((*m_Items)->bounds),
                                                           HIDWORD(v237->_1.name),
                                                           0LL);
      QuestId_k__BackingField = 0;
      if ( !result )
        goto LABEL_1189;
      v239 = result->max_length;
      v240 = result;
      if ( v239 >= 1 )
      {
        v241 = 0;
        while ( 1 )
        {
          if ( v241 >= (unsigned int)v239 )
            goto LABEL_1190;
          v242 = *((_DWORD *)v240->m_Items + v241);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C1CBC4 )
          {
            sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
            byte_4C1CBC4 = 1;
          }
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          }
          v243 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
          if ( v242 == v243->_QuestId_k__BackingField )
            break;
          v241 = QuestId_k__BackingField + 1;
          QuestId_k__BackingField = v241;
          v239 = v240->max_length;
          if ( v241 >= v239 )
            goto LABEL_427;
        }
        name_high = HIDWORD(v237->_1.name);
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          v243 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v243->clearBattleRaidId = name_high;
      }
LABEL_427:
      v235 = v658 + 1;
      v658 = v235;
      max_length = v234->max_length;
      if ( v235 >= max_length )
        goto LABEL_621;
    }
    v255 = TerminalPramsManager_TypeInfo;
    v256 = HIDWORD(v237->_1.name);
    goto LABEL_476;
  }
  result = (BattleResultComponent_resultData_array *)v655;
  if ( !v655 )
    goto LABEL_1189;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__isRaidDefeatCount(
                                                       (EventDetailEntity_o *)v655,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_array *)v655;
    if ( !v655 )
      goto LABEL_1189;
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventActivityPoint(
                                                         (EventDetailEntity_o *)v655,
                                                         0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !*p_max_length )
        goto LABEL_1190;
      if ( !*m_Items )
        goto LABEL_1189;
      v251 = (int32_t)(*m_Items)->m_Items[42];
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1CCC8 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
        byte_4C1CCC8 = 1;
      }
      v252 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v252 = TerminalPramsManager_TypeInfo;
      }
      v252->static_fields->_EventActivityPointEffectState_k__BackingField = v251;
    }
    else
    {
      result = (BattleResultComponent_resultData_array *)v655;
      if ( !v655 )
        goto LABEL_1189;
      if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v655, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1F4F1 )
        {
          result = (BattleResultComponent_resultData_array *)sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
          byte_4C1F4F1 = 1;
        }
        v253 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v253 = TerminalPramsManager_TypeInfo;
        }
        if ( v253->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField )
        {
          v254 = 0;
        }
        else
        {
          if ( !*p_max_length )
            goto LABEL_1190;
          if ( !*m_Items )
            goto LABEL_1189;
          bounds_high = HIDWORD((*m_Items)->bounds);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsUserEventStatus = CondType__IsUserEventStatus(bounds_high, 7, 0LL);
          v253 = TerminalPramsManager_TypeInfo;
          v254 = IsUserEventStatus;
        }
        if ( !v253->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v253);
        if ( !byte_4C1F21A )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
          byte_4C1F21A = 1;
        }
        v269 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v269 = TerminalPramsManager_TypeInfo;
        }
        v269->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = v254;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)v655;
        if ( !v655 )
          goto LABEL_1189;
        if ( !EventDetailEntity__IsEventHappiness((EventDetailEntity_o *)v655, 0LL) )
          goto LABEL_503;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v258 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1CBC4 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
          byte_4C1CBC4 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        eventId = result->m_Items[19]->fields.eventId;
        if ( !byte_4C1CBC3 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          byte_4C1CBC3 = 1;
        }
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( !v258 )
          goto LABEL_1189;
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)v258,
               &v653,
               eventId,
               LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
               0LL) )
        {
          result = (BattleResultComponent_resultData_array *)v653;
          if ( !v653 )
            goto LABEL_1189;
          v260 = QuestPhaseEntity__PlayHappinessCounterEffect(v653, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C1F04C )
          {
            sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
            byte_4C1F04C = 1;
          }
          v261 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v261 = TerminalPramsManager_TypeInfo;
          }
          v261->static_fields->_PlayHappinessCounterEffect_k__BackingField = v260;
        }
        else
        {
LABEL_503:
          result = (BattleResultComponent_resultData_array *)v655;
          if ( !v655 )
            goto LABEL_1189;
          result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPanel(
                                                               (EventDetailEntity_o *)v655,
                                                               0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !*p_max_length )
              goto LABEL_1190;
            v262 = &byte_4C1E000;
            if ( !*m_Items )
              goto LABEL_1189;
            v263 = (*m_Items)->m_Items[10];
            v658 = 0;
            if ( !v263 )
              goto LABEL_1189;
            v264 = (int)v263->fields.eventEndTitle;
            if ( v264 >= 1 )
            {
              v265 = 0;
              while ( 1 )
              {
                if ( v264 == v265 )
                  goto LABEL_1190;
                if ( !v655 )
                  goto LABEL_1189;
                v266 = *((_QWORD *)&v263->fields.eventEndMessage + v265);
                if ( !v266 )
                  goto LABEL_1189;
                if ( LODWORD(v655[1].klass) == *(_DWORD *)(v266 + 24) )
                  break;
                v658 = ++v265;
                if ( v264 == v265 )
                  goto LABEL_602;
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4C1EB7C )
              {
                sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
                byte_4C1EB7C = 1;
              }
              v271 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v271 = TerminalPramsManager_TypeInfo;
              }
              if ( !v271->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
              {
                v272 = (Il2CppObject *)sub_1C3B9B0(EventSaveData_TypeInfo);
                System_Object___ctor(v272, 0LL);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4C1EB7D )
                {
                  sub_1C3B764(&TerminalPramsManager_TypeInfo, v273);
                  byte_4C1EB7D = 1;
                }
                v280 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v280 = TerminalPramsManager_TypeInfo;
                }
                p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v280->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
                p_BeforeEventSubmarineSaveData_k__BackingField->klass = (PartyOrganizationUtility_c *)v272;
                sub_1C3B708(
                  p_BeforeEventSubmarineSaveData_k__BackingField,
                  (int64_t)v272,
                  v274,
                  v275,
                  v276,
                  v277,
                  v278,
                  v279);
                v271 = TerminalPramsManager_TypeInfo;
              }
              if ( !v271->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v271);
              if ( !byte_4C1EB7C )
              {
                sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
                byte_4C1EB7C = 1;
              }
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              ultimateGetQpText = result->m_Items[19]->fields.ultimateGetQpText;
              if ( !ultimateGetQpText )
                goto LABEL_1189;
              ultimateGetQpText->fields._stringLength = *(_DWORD *)(v266 + 24);
              if ( !byte_4C1EB7C )
              {
                sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
                byte_4C1EB7C = 1;
              }
              if ( !LODWORD(result->m_Items[24]) )
              {
                j_il2cpp_runtime_class_init_0(result);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              v283 = result->m_Items[19]->fields.ultimateGetQpText;
              if ( !v283 )
                goto LABEL_1189;
              result = (BattleResultComponent_resultData_array *)v283[1].klass;
              if ( result
                && (result = (BattleResultComponent_resultData_array *)System_String__Split(
                                                                         (System_String_o *)result,
                                                                         0x2Cu,
                                                                         0,
                                                                         0LL)) != 0LL )
              {
                v284 = result->max_length;
                v285 = (System_String_o **)&result->m_Items[1];
                if ( v284 <= 1 )
                  v285 = (System_String_o **)&StringLiteral_1191/*"1.0"*/;
                v286 = *v285;
                v287 = v284 <= 2 ? (System_String_o **)&StringLiteral_1191/*"1.0"*/ : (System_String_o **)&result->m_Items[2];
                v288 = *v287;
                v289 = v284 <= 3 ? &StringLiteral_6769/*"FullScreen/FSUtilityList"*/ : (void **)&result->m_Items[3];
              }
              else
              {
                v288 = (System_String_o *)StringLiteral_1191/*"1.0"*/;
                v289 = &StringLiteral_6769/*"FullScreen/FSUtilityList"*/;
                v286 = (System_String_o *)StringLiteral_1191/*"1.0"*/;
              }
              if ( !v655 )
                goto LABEL_1189;
              v290 = (int32_t)v655[1].klass;
              isLastGoalPlayed = (System_String_o *)*v289;
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
                                                                   v290,
                                                                   0LL);
              v291 = (System_Collections_Generic_List_object__o *)result;
              v292 = TerminalPramsManager___c_TypeInfo;
              if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
                v292 = TerminalPramsManager___c_TypeInfo;
              }
              _9__708_0 = (System_Predicate_object__o *)v292->static_fields->__9__708_0;
              if ( !_9__708_0 )
              {
                if ( !v292->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v292);
                  v292 = TerminalPramsManager___c_TypeInfo;
                }
                v294 = (Il2CppObject *)v292->static_fields->__9;
                _9__708_0 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_QuestReleaseEntity__TypeInfo);
                System_Predicate_object____ctor(
                  _9__708_0,
                  v294,
                  Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__708_0__,
                  0LL);
                v295 = TerminalPramsManager___c_TypeInfo->static_fields;
                v295->__9__708_0 = (struct System_Predicate_QuestReleaseEntity__o *)_9__708_0;
                sub_1C3B708(
                  (PartyOrganizationUtility_o *)&v295->__9__708_0,
                  (int64_t)_9__708_0,
                  v296,
                  v297,
                  v298,
                  v299,
                  v300,
                  v301);
              }
              if ( !v291 )
                goto LABEL_1189;
              if ( System_Collections_Generic_List_object___Find(
                     v291,
                     (System_Predicate_T__o *)_9__708_0,
                     (const MethodInfo_368C2D4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4C1CBC4 )
                {
                  sub_1C3B764(&TerminalPramsManager_TypeInfo, v302);
                  byte_4C1CBC4 = 1;
                }
                v303 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v303 = TerminalPramsManager_TypeInfo;
                }
                QuestId_k__BackingField = v303->static_fields->_QuestId_k__BackingField;
                v286 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4C1EB7C )
              {
                sub_1C3B764(&TerminalPramsManager_TypeInfo, v302);
                byte_4C1EB7C = 1;
              }
              v304 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v304 = TerminalPramsManager_TypeInfo;
              }
              BeforeEventSubmarineSaveData_k__BackingField = v304->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
              v306 = System_Int64__ToString(v266 + 32, 0LL);
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_38499832(
                                                                   v306,
                                                                   v286,
                                                                   v288,
                                                                   isLastGoalPlayed,
                                                                   0LL);
              if ( !BeforeEventSubmarineSaveData_k__BackingField )
                goto LABEL_1189;
              BeforeEventSubmarineSaveData_k__BackingField->fields.value = (struct System_String_o *)result;
              sub_1C3B708(
                (PartyOrganizationUtility_o *)&BeforeEventSubmarineSaveData_k__BackingField->fields.value,
                (int64_t)result,
                v307,
                v308,
                v309,
                v310,
                v311,
                v312);
              v262 = &byte_4C1E000;
            }
LABEL_602:
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C1CBC4 )
            {
              sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
              byte_4C1CBC4 = 1;
            }
            v313 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v313 = TerminalPramsManager_TypeInfo;
            }
            v314 = v313->static_fields->_QuestId_k__BackingField;
            if ( !byte_4C1CBC3 )
            {
              sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
              v313 = TerminalPramsManager_TypeInfo;
              byte_4C1CBC3 = 1;
            }
            if ( !v313->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v313);
              v313 = TerminalPramsManager_TypeInfo;
            }
            PhaseCnt_k__BackingField = v313->static_fields->_PhaseCnt_k__BackingField;
            if ( !v262[3276] )
            {
              sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
              v313 = TerminalPramsManager_TypeInfo;
              v262[3276] = 1;
            }
            if ( !v313->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v313);
              v313 = TerminalPramsManager_TypeInfo;
            }
            IsQuestClear_k__BackingField = v313->static_fields->_IsQuestClear_k__BackingField;
            if ( !byte_4C1ECC9 )
            {
              sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
              v313 = TerminalPramsManager_TypeInfo;
              byte_4C1ECC9 = 1;
            }
            if ( !v313->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v313);
              v313 = TerminalPramsManager_TypeInfo;
            }
            SubmarineSaveParamsManager__SaveClearQuestInfo(
              v314,
              PhaseCnt_k__BackingField,
              IsQuestClear_k__BackingField,
              v313->static_fields->_IsPhaseClear_k__BackingField,
              0LL);
          }
          else
          {
            result = (BattleResultComponent_resultData_array *)v655;
            if ( !v655 )
              goto LABEL_1189;
            if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)v655, 0LL) )
            {
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4C1F4E5 )
              {
                sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
                byte_4C1F4E5 = 1;
              }
              v270 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v270 = TerminalPramsManager_TypeInfo;
              }
              v270->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
            }
          }
        }
      }
    }
    goto LABEL_621;
  }
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                       (EventRaidMaster_o *)v217,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0LL);
  v658 = 0;
  if ( !result )
    goto LABEL_1189;
  v245 = result->max_length;
  v246 = result;
  if ( v245 >= 1 )
  {
    v247 = 0;
    while ( 1 )
    {
      if ( v247 >= (unsigned int)v245 || !*p_max_length )
        goto LABEL_1190;
      if ( !*m_Items )
        goto LABEL_1189;
      v248 = v246->m_Items[v247];
      if ( !v248 )
        goto LABEL_1189;
      RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                          (EventRaidMaster_o *)v217,
                          HIDWORD((*m_Items)->bounds),
                          v248->fields.eventId,
                          0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1CBC4 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
        byte_4C1CBC4 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v250 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( RaidDeadQuestId == v250->_QuestId_k__BackingField )
        break;
      v247 = v658 + 1;
      v658 = v247;
      v245 = v246->max_length;
      if ( v247 >= v245 )
        goto LABEL_621;
    }
    v257 = v248->fields.eventId;
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      v250 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v250->clearBattleRaidId = v257;
    result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !result )
      goto LABEL_1189;
    if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)result, RaidDeadQuestId, 0, 0LL) )
    {
      v255 = TerminalPramsManager_TypeInfo;
      v256 = v248->fields.eventId;
LABEL_476:
      if ( !v255->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v255);
        v255 = TerminalPramsManager_TypeInfo;
      }
      v255->static_fields->clearLastBattleRaidId = v256;
    }
  }
LABEL_621:
  v317 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v317 = TerminalPramsManager_TypeInfo;
  }
  v318 = &qword_4C1C000;
  if ( v317->static_fields->clearLastBattleRaidId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v319 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EA88 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1EA88 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v319 )
      goto LABEL_1189;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v319,
           &v652,
           HIDWORD(result->m_Items[19]->klass),
           (const MethodInfo_329AE94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      result = (BattleResultComponent_resultData_array *)v652;
      if ( !v652 )
        goto LABEL_1189;
      if ( WarEntity__IsFolder((WarEntity_o *)v652, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)TitleInfoEventRaidBossComponent_TypeInfo;
        if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TitleInfoEventRaidBossComponent_TypeInfo;
        }
        if ( !*p_max_length )
          goto LABEL_1190;
        if ( !*m_Items )
          goto LABEL_1189;
        UnityEngine_PlayerPrefs__SetInt(result->m_Items[19]->fields.eventEndTitle, HIDWORD((*m_Items)->bounds), 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F057 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    byte_4C1F057 = 1;
  }
  v320 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v320 = TerminalPramsManager_TypeInfo;
  }
  v320->static_fields->_IsWarBoardClear_k__BackingField = 0;
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    v320 = TerminalPramsManager_TypeInfo;
    byte_4C1CBC4 = 1;
  }
  if ( !v320->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v320);
    v320 = TerminalPramsManager_TypeInfo;
  }
  if ( v320->static_fields->_QuestId_k__BackingField >= 1 )
  {
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1189;
    v321 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1CBC4 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1CBC4 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v321 )
      goto LABEL_1189;
    result = (BattleResultComponent_resultData_array *)QuestMaster__getQuestEntity(
                                                         (QuestMaster_o *)v321,
                                                         result->m_Items[19]->fields.eventId,
                                                         0LL);
    if ( !result )
      goto LABEL_1189;
    v322 = (int)result->m_Items[1];
    if ( !byte_4C1F057 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1F057 = 1;
    }
    v320 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v320 = TerminalPramsManager_TypeInfo;
    }
    v320->static_fields->_IsWarBoardClear_k__BackingField = v322 == 7;
  }
  if ( !v320->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v320);
  if ( !byte_4C1F2F4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    byte_4C1F2F4 = 1;
  }
  v323 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v323 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeRelease_k__BackingField = (PartyOrganizationUtility_o *)&v323->static_fields->_questClearCostumeRelease_k__BackingField;
  p_questClearCostumeRelease_k__BackingField->klass = 0LL;
  sub_1C3B708(p_questClearCostumeRelease_k__BackingField, 0LL, v218, v219, v220, v221, v222, v223);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v331 = (*m_Items)->m_Items[22];
  if ( v331 && v331->fields.eventEndTitle )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F048 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1F048 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !LOBYTE(result->m_Items[19]->fields.resultQuestPhaseRewardInfos) )
    {
      if ( !*p_max_length )
        goto LABEL_1190;
      if ( !*m_Items )
        goto LABEL_1189;
      v332 = (int64_t)(*m_Items)->m_Items[22];
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4C1F2F4 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
        byte_4C1F2F4 = 1;
      }
      v333 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v333 = TerminalPramsManager_TypeInfo;
      }
      v334 = (PartyOrganizationUtility_o *)&v333->static_fields->_questClearCostumeRelease_k__BackingField;
      v334->klass = (PartyOrganizationUtility_c *)v332;
      sub_1C3B708(v334, v332, v325, v326, v327, v328, v329, v330);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F055 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    byte_4C1F055 = 1;
  }
  v335 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v335 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeGet_k__BackingField = (PartyOrganizationUtility_o *)&v335->static_fields->_questClearCostumeGet_k__BackingField;
  p_questClearCostumeGet_k__BackingField->klass = 0LL;
  sub_1C3B708(p_questClearCostumeGet_k__BackingField, 0LL, v325, v326, v327, v328, v329, v330);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v343 = (int64_t)(*m_Items)->m_Items[23];
  if ( v343 && *(_QWORD *)(v343 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F055 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1F055 = 1;
    }
    v344 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v344 = TerminalPramsManager_TypeInfo;
    }
    v345 = (PartyOrganizationUtility_o *)&v344->static_fields->_questClearCostumeGet_k__BackingField;
    v345->klass = (PartyOrganizationUtility_c *)v343;
    sub_1C3B708(v345, v343, v337, v338, v339, v340, v341, v342);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F4F2 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    byte_4C1F4F2 = 1;
  }
  v346 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v346 = TerminalPramsManager_TypeInfo;
  }
  p_eventPointWinReward_k__BackingField = (PartyOrganizationUtility_o *)&v346->static_fields->_eventPointWinReward_k__BackingField;
  p_eventPointWinReward_k__BackingField->klass = 0LL;
  sub_1C3B708(p_eventPointWinReward_k__BackingField, 0LL, v337, v338, v339, v340, v341, v342);
  if ( !byte_4C1F4F3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    byte_4C1F4F3 = 1;
  }
  v354 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v354 = TerminalPramsManager_TypeInfo;
  }
  v354->static_fields->_eventPointWinType_k__BackingField = 0;
  if ( v146 && v655 && HIDWORD(v655[9].klass) == 4 )
  {
    v355 = v146->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1189;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !result )
      goto LABEL_1189;
    v356 = (QuestGroupMaster_o *)result;
    GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)result, v355, 4, 0LL);
    v358 = TerminalPramsManager_TypeInfo;
    v359 = GroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v358 = TerminalPramsManager_TypeInfo;
    }
    v358->static_fields->joinGroupId = v359;
    v360 = QuestGroupMaster__GetGroupId(v356, v355, 3, 0LL);
    if ( !byte_4C1ECCC )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1ECCC = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    v318 = &qword_4C1C000;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( v360 >= 1 && BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1189;
      v361 = DataManager__GetMasterData_object_(
               (DataManager_o *)result,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1189;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventPointMaster___);
      if ( !*p_max_length )
        goto LABEL_1190;
      if ( !*m_Items || !result )
        goto LABEL_1189;
      result = (BattleResultComponent_resultData_array *)EventPointMaster__GetEntity(
                                                           (EventPointMaster_o *)result,
                                                           v360,
                                                           HIDWORD((*m_Items)->bounds),
                                                           0LL);
      v362 = (EventPointEntity_o *)result;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v362 )
        goto LABEL_1189;
      result = (BattleResultComponent_resultData_array *)EventPointEntity__IsGroupOnGroup1(
                                                           v362,
                                                           TerminalPramsManager_TypeInfo->static_fields->joinGroupId,
                                                           0LL);
      if ( !v361 )
        goto LABEL_1189;
      v363 = QuestReleaseMaster__EventPointWinActionType(
               (QuestReleaseMaster_o *)v361,
               v355,
               (unsigned __int8)result & 1,
               0LL);
      if ( !byte_4C1F4F3 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
        byte_4C1F4F3 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      v318 = &qword_4C1C000;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(result->m_Items[19]->fields.warClearReward) = v363;
      if ( !byte_4C1F4F4 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        byte_4C1F4F4 = 1;
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v364 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( v364->_eventPointWinType_k__BackingField )
      {
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          v364 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v364->joinGroupId = -1;
      }
    }
    if ( !*p_max_length )
      goto LABEL_1190;
    if ( !*m_Items )
      goto LABEL_1189;
    v365 = (*m_Items)->m_Items[20];
    if ( v365 )
    {
      v366 = v365->fields.eventEndTitle;
      if ( v366 )
      {
        if ( !(_DWORD)v366 )
          goto LABEL_1190;
        v367 = (int64_t)v365->fields.eventEndMessage;
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_4C1F4F2 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
          byte_4C1F4F2 = 1;
        }
        v368 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v368 = TerminalPramsManager_TypeInfo;
        }
        v369 = (PartyOrganizationUtility_o *)&v368->static_fields->_eventPointWinReward_k__BackingField;
        v369->klass = (PartyOrganizationUtility_c *)v367;
        sub_1C3B708(v369, v367, v348, v349, v350, v351, v352, v353);
      }
    }
  }
  if ( v146 && v655 && HIDWORD(v655[9].klass) == 6 )
  {
    v370 = v146->fields.questId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F4F5 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1F4F5 = 1;
    }
    v371 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v371 = TerminalPramsManager_TypeInfo;
    }
    v371->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = v370;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F215 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    byte_4C1F215 = 1;
  }
  v372 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v372 = TerminalPramsManager_TypeInfo;
  }
  p_eventRaceBoost_k__BackingField = (PartyOrganizationUtility_o *)&v372->static_fields->_eventRaceBoost_k__BackingField;
  p_eventRaceBoost_k__BackingField->klass = 0LL;
  sub_1C3B708(p_eventRaceBoost_k__BackingField, 0LL, v348, v349, v350, v351, v352, v353);
  v380 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v381 = (int64_t)(*m_Items)->m_Items[21];
  if ( v381 && *(int *)(v381 + 16) >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F215 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1F215 = 1;
    }
    v382 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v382 = TerminalPramsManager_TypeInfo;
    }
    v383 = (PartyOrganizationUtility_o *)&v382->static_fields->_eventRaceBoost_k__BackingField;
    v383->klass = (PartyOrganizationUtility_c *)v381;
    sub_1C3B708(v383, v381, v374, v375, v376, v377, v378, v379);
    if ( !byte_4C1F1FC )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1F1FC = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v384 = *(_QWORD *)&result->m_Items[19]->fields.followerType;
    if ( !byte_4C1CBC4 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4C1CBC4 = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v384 )
      goto LABEL_1189;
    *(_DWORD *)(v384 + 28) = result->m_Items[19]->fields.eventId;
    v380 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v380 )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v385 = (*m_Items)->m_Items[24];
  if ( v385 )
  {
    v386 = v385->fields.eventEndTitle;
    if ( v386 )
    {
      if ( !(_DWORD)v386 )
        goto LABEL_1190;
      v387 = (int64_t)v385->fields.eventEndMessage;
      if ( !v387 )
        goto LABEL_1189;
      if ( *(int *)(v387 + 16) >= 1 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1F4F6 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
          byte_4C1F4F6 = 1;
        }
        v388 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v388 = TerminalPramsManager_TypeInfo;
        }
        p_eventTowerReward_k__BackingField = (PartyOrganizationUtility_o *)&v388->static_fields->_eventTowerReward_k__BackingField;
        p_eventTowerReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v387;
        sub_1C3B708(p_eventTowerReward_k__BackingField, v387, v374, v375, v376, v377, v378, v379);
        if ( !*p_max_length )
          goto LABEL_1190;
        if ( !*m_Items )
          goto LABEL_1189;
        v396 = (int64_t)(*m_Items)->m_Items[25];
        if ( !byte_4C1F4F7 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
          byte_4C1F4F7 = 1;
        }
        v397 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v397 = TerminalPramsManager_TypeInfo;
        }
        p_resultEventTowerRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v397->static_fields->_resultEventTowerRewardInfo_k__BackingField;
        p_resultEventTowerRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v396;
        sub_1C3B708(p_resultEventTowerRewardInfo_k__BackingField, v396, v390, v391, v392, v393, v394, v395);
        v380 = *(_QWORD *)p_max_length;
      }
    }
  }
  if ( !(_DWORD)v380 )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v399 = (int64_t)(*m_Items)->m_Items[26];
  if ( v399 && *(_QWORD *)(v399 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F04F )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1F04F = 1;
    }
    v400 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v400 = TerminalPramsManager_TypeInfo;
    }
    p_resultBoostItemRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v400->static_fields->_resultBoostItemRewardInfo_k__BackingField;
    p_resultBoostItemRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v399;
    sub_1C3B708(p_resultBoostItemRewardInfo_k__BackingField, v399, v374, v375, v376, v377, v378, v379);
    v380 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v380 )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v402 = (int64_t)(*m_Items)->m_Items[27];
  if ( v402 && *(_QWORD *)(v402 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F050 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1F050 = 1;
    }
    v403 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v403 = TerminalPramsManager_TypeInfo;
    }
    p_resultEventBoardGameTokenRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v403->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
    p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v402;
    sub_1C3B708(p_resultEventBoardGameTokenRewardInfo_k__BackingField, v402, v374, v375, v376, v377, v378, v379);
    v380 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v380 )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v405 = (int64_t)(*m_Items)->m_Items[28];
  if ( v405 && *(_QWORD *)(v405 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F05A )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1F05A = 1;
    }
    v406 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v406 = TerminalPramsManager_TypeInfo;
    }
    p_warClearReward_k__BackingField = (PartyOrganizationUtility_o *)&v406->static_fields->_warClearReward_k__BackingField;
    p_warClearReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v405;
    sub_1C3B708(p_warClearReward_k__BackingField, v405, v374, v375, v376, v377, v378, v379);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F4F8 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    byte_4C1F4F8 = 1;
  }
  v408 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v408 = TerminalPramsManager_TypeInfo;
  }
  v409 = v408->static_fields;
  v409->_oldSuperBoss_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v409->_oldSuperBoss_k__BackingField,
    0LL,
    v374,
    v375,
    v376,
    v377,
    v378,
    v379);
  if ( !byte_4C1F4F9 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v410);
    byte_4C1F4F9 = 1;
  }
  v417 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v417 = TerminalPramsManager_TypeInfo;
  }
  v418 = v417->static_fields;
  v418->_oldPersonalBoss_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v418->_oldPersonalBoss_k__BackingField,
    0LL,
    v411,
    v412,
    v413,
    v414,
    v415,
    v416);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    byte_4C1CBC4 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_1189;
  WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, result->m_Items[19]->fields.eventId, 0LL);
  result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !result )
    goto LABEL_1189;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)result, WarID_ByQuestID, 0LL);
  if ( WarEntityByWarID )
    v422 = WarEntityByWarID->fields.eventId;
  else
    v422 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !result )
    goto LABEL_1189;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v651,
                                                       v422,
                                                       (const MethodInfo_329AE94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( v642 )
    goto LABEL_1194;
  if ( !*p_max_length )
    goto LABEL_1190;
  result = *m_Items;
  if ( !*m_Items )
    goto LABEL_1189;
  result = (BattleResultComponent_resultData_array *)BattleResultComponent_resultData__checkResultDispFlag(
                                                       (BattleResultComponent_resultData_o *)result,
                                                       256,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
LABEL_1194:
    v429 = *(_QWORD *)p_max_length;
    if ( !(unsigned int)*(_QWORD *)p_max_length )
      goto LABEL_1190;
    if ( !*m_Items )
      goto LABEL_1189;
    if ( (*m_Items)->m_Items[41] )
    {
      result = (BattleResultComponent_resultData_array *)v651;
      if ( v651
        && (result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsPersonalBoss(
                                                                 (EventDetailEntity_o *)v651,
                                                                 0LL),
            v429 = *(_QWORD *)p_max_length,
            ((unsigned __int8)result & 1) != 0) )
      {
        if ( !(_DWORD)v429 )
          goto LABEL_1190;
        if ( !*m_Items )
          goto LABEL_1189;
        v430 = (int64_t)(*m_Items)->m_Items[41];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1F4F9 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
          byte_4C1F4F9 = 1;
        }
        v431 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v431 = TerminalPramsManager_TypeInfo;
        }
        v432 = v431->static_fields;
        v432->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v430;
        p_oldPersonalBoss_k__BackingField = (PartyOrganizationUtility_o *)&v432->_oldPersonalBoss_k__BackingField;
      }
      else
      {
        if ( !(_DWORD)v429 )
          goto LABEL_1190;
        if ( !*m_Items )
          goto LABEL_1189;
        v430 = (int64_t)(*m_Items)->m_Items[41];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1F4F8 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
          byte_4C1F4F8 = 1;
        }
        v434 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v434 = TerminalPramsManager_TypeInfo;
        }
        v435 = v434->static_fields;
        v435->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v430;
        p_oldPersonalBoss_k__BackingField = (PartyOrganizationUtility_o *)&v435->_oldSuperBoss_k__BackingField;
      }
      sub_1C3B708(p_oldPersonalBoss_k__BackingField, v430, v423, v424, v425, v426, v427, v428);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F4FA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    byte_4C1F4FA = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !result->m_Items[19]->fields.eventTowerReward )
    goto LABEL_1195;
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4C1F4FA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    byte_4C1F4FA = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  eventTowerReward = result->m_Items[19]->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_1189;
  if ( *(_QWORD *)&eventTowerReward->max_length )
  {
    v437 = 1;
  }
  else
  {
LABEL_1195:
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_4C1CBC4 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1CBC4 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v438 = BalanceConfig_TypeInfo;
    v439 = result->m_Items[19]->fields.eventId;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v438 = BalanceConfig_TypeInfo;
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v437 = v439 == v438->static_fields->OrtFirstQuestId;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4C1F069 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    byte_4C1F069 = 1;
  }
  v440 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v440 = TerminalPramsManager_TypeInfo;
  }
  v440->static_fields->_isIncomingCall_k__BackingField = v437;
  if ( v651 && EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)v651, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1CBC4 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v441);
      byte_4C1CBC4 = 1;
    }
    v442 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v442 = TerminalPramsManager_TypeInfo;
    }
    v443 = BalanceConfig_TypeInfo;
    v444 = v442->static_fields->_QuestId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v443 = BalanceConfig_TypeInfo;
    }
    if ( v444 == v443->static_fields->OrtLateQuestId )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1CBC3 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v441);
        byte_4C1CBC3 = 1;
      }
      v445 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v445 = TerminalPramsManager_TypeInfo;
      }
      v446 = BalanceConfig_TypeInfo;
      v447 = v445->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v446 = BalanceConfig_TypeInfo;
      }
      if ( v447 + 1 == v446->static_fields->OrtLatePhaseBreak )
        goto LABEL_1196;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1CBC3 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v441);
        byte_4C1CBC3 = 1;
      }
      v448 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v448 = TerminalPramsManager_TypeInfo;
      }
      v449 = BalanceConfig_TypeInfo;
      v450 = v448->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v449 = BalanceConfig_TypeInfo;
      }
      if ( v450 + 1 == v449->static_fields->OrtLatePhaseDead )
      {
LABEL_1196:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v451 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserSuperBossMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !*((_BYTE *)v318 + 2389) )
        {
          sub_1C3B764(&NetworkManager_TypeInfo, isWin);
          *((_BYTE *)v318 + 2389) = 1;
        }
        result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        }
        v452 = result->m_Items[19]->fields.myDeck;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v451 )
          goto LABEL_1189;
        if ( UserSuperBossMaster__TryGetEntity(
               (UserSuperBossMaster_o *)v451,
               &v650,
               (int64_t)v452,
               v422,
               BalanceConfig_TypeInfo->static_fields->OrtThirdFormId,
               0LL) )
        {
          result = (BattleResultComponent_resultData_array *)sub_1C3B80C(UserSuperBossEntity___TypeInfo, 1LL);
          if ( !result )
            goto LABEL_1189;
          v459 = v650;
          v460 = result;
          if ( v650 )
          {
            result = (BattleResultComponent_resultData_array *)sub_1C3B8A0(v650, result->obj.klass->_1.element_class);
            if ( !result )
            {
LABEL_1191:
              v640 = sub_1C3B9E4();
              sub_1C3B88C(v640, 0LL);
            }
          }
          if ( !v460->max_length )
            goto LABEL_1190;
          v460->m_Items[0] = (BattleResultComponent_resultData_o *)v459;
          sub_1C3B708((PartyOrganizationUtility_o *)v460->m_Items, (int64_t)v459, v453, v454, v455, v456, v457, v458);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C1F4F9 )
          {
            sub_1C3B764(&TerminalPramsManager_TypeInfo, v461);
            byte_4C1F4F9 = 1;
          }
          v468 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v468 = TerminalPramsManager_TypeInfo;
          }
          v469 = v468->static_fields;
          v469->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v460;
          sub_1C3B708(
            (PartyOrganizationUtility_o *)&v469->_oldPersonalBoss_k__BackingField,
            (int64_t)v460,
            v462,
            v463,
            v464,
            v465,
            v466,
            v467);
        }
      }
    }
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  TalkResumeInfo = ScriptManager__GetTalkResumeInfo(0LL);
  if ( TalkResumeInfo )
  {
    v471 = TalkResumeInfo;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1189;
    v472 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1CBC4 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1CBC4 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v472 )
      goto LABEL_1189;
    ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)v472, result->m_Items[19]->fields.eventId, 0LL);
    v475 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !byte_4C1CBC3 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v474);
      byte_4C1CBC3 = 1;
    }
    v476 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v476 = TerminalPramsManager_TypeInfo;
    }
    v477 = v476->static_fields->_PhaseCnt_k__BackingField;
    winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v471, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd2(
                                                         ScriptQuestId,
                                                         v477 + 1,
                                                         winResult,
                                                         0LL);
    if ( !v475 )
      goto LABEL_1189;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v475, (System_String_o *)result, 0LL) )
      goto LABEL_1016;
    v486 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1CBC3 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v485);
      byte_4C1CBC3 = 1;
    }
    v487 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v487 = TerminalPramsManager_TypeInfo;
    }
    v488 = v487->static_fields->_PhaseCnt_k__BackingField;
    v489 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v471, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd(
                                                         ScriptQuestId,
                                                         v488 + 1,
                                                         v489,
                                                         0LL);
    if ( !v486 )
      goto LABEL_1189;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v486, (System_String_o *)result, 0LL) )
    {
LABEL_1016:
      v490 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v490 = TerminalPramsManager_TypeInfo;
      }
      v491 = StringLiteral_1/*""*/;
      p_lastPlayBgmName = (PartyOrganizationUtility_o *)&v490->static_fields->lastPlayBgmName;
      p_lastPlayBgmName->klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
      sub_1C3B708(p_lastPlayBgmName, (int64_t)v491, v479, v480, v481, v482, v483, v484);
      TerminalPramsManager__LastPlayBgmNameSave_SaveData(v493);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1189;
  v494 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    byte_4C1CBC4 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v495 = result->m_Items[19]->fields.eventId;
  if ( !byte_4C1CBC3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4C1CBC3 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v494 )
    goto LABEL_1189;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)v494,
    &v659,
    v495,
    LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
    0LL);
  if ( !byte_4C1F4FB )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    byte_4C1F4FB = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( result->m_Items[19]->fields.costumeReleaseAnnounce )
  {
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_4C1F4FB )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1F4FB = 1;
    }
    v502 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v502 = TerminalPramsManager_TypeInfo;
    }
    result = (BattleResultComponent_resultData_array *)v502->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
    if ( !result )
      goto LABEL_1189;
    *(_QWORD *)&result->max_length = 0LL;
    v503 = &result->max_length;
    *((_QWORD *)v503 - 1) = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)v503, 0LL, v496, v497, v498, v499, v500, v501);
  }
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v504 = HIDWORD((*m_Items)->bounds);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    byte_4C1CBC4 = 1;
  }
  v505 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v505 = TerminalPramsManager_TypeInfo;
  }
  v506 = v505->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C1CBC3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    v505 = TerminalPramsManager_TypeInfo;
    byte_4C1CBC3 = 1;
  }
  if ( !v505->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v505);
    v505 = TerminalPramsManager_TypeInfo;
  }
  SpecifiedSceneInfo = QuestPhaseMaster__GetSpecifiedSceneInfo(
                         (QuestPhaseMaster_o *)v494,
                         v504,
                         v506,
                         v505->static_fields->_PhaseCnt_k__BackingField + 1,
                         0LL);
  if ( !byte_4C1F4DC )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v507);
    byte_4C1F4DC = 1;
  }
  v515 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v515 = TerminalPramsManager_TypeInfo;
  }
  v516 = v515->static_fields;
  v516->_SpecifiedChangeSceneInfo_k__BackingField = SpecifiedSceneInfo;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v516->_SpecifiedChangeSceneInfo_k__BackingField,
    (int64_t)SpecifiedSceneInfo,
    v508,
    v509,
    v510,
    v511,
    v512,
    v513);
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId = 0LL;
  TerminalPramsManager__InitTipsArchiveScrollValueList(v517);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v524 = (int32_t)(*m_Items)->m_Items[52];
  v525 = TerminalPramsManager_TypeInfo;
  if ( v524 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F04A )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1F04A = 1;
    }
    v525 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v525 = TerminalPramsManager_TypeInfo;
    }
    v525->static_fields->_EventMuralId_k__BackingField = v524;
  }
  if ( !v525->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v525);
    v525 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = (PartyOrganizationUtility_o *)&v525->static_fields->eventHarvestGrowthInfo;
  p_eventHarvestGrowthInfo->klass = 0LL;
  sub_1C3B708(p_eventHarvestGrowthInfo, 0LL, v518, v519, v520, v521, v522, v523);
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v527);
    byte_4C1CBC4 = 1;
  }
  v528 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v528 = TerminalPramsManager_TypeInfo;
  }
  result = (BattleResultComponent_resultData_array *)QuestPhaseMaster__GetEntity(
                                                       (QuestPhaseMaster_o *)v494,
                                                       v528->static_fields->_QuestId_k__BackingField,
                                                       1,
                                                       0LL);
  if ( !result )
    goto LABEL_1189;
  v529 = result;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(
                     (QuestPhaseEntity_o *)result,
                     (System_String_o *)StringLiteral_20276/*"importance"*/,
                     -1,
                     0LL);
  v531 = QuestPhaseEntity__getScriptIntParam(
           (QuestPhaseEntity_o *)v529,
           (System_String_o *)StringLiteral_20275/*"import"*/,
           -1,
           0LL);
  if ( ScriptIntParam >= 1 )
  {
    v532 = v531;
    if ( v531 >= 1 )
    {
      v533 = sub_1C3B9B0(EventHarvestGrowthInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v533, 0LL);
      if ( !v533 )
        goto LABEL_1189;
      bounds = v529->bounds;
      *(_DWORD *)(v533 + 24) = ScriptIntParam;
      *(_DWORD *)(v533 + 28) = v532;
      *(_QWORD *)(v533 + 16) = bounds;
      v541 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v541 = TerminalPramsManager_TypeInfo;
      }
      v542 = (PartyOrganizationUtility_o *)&v541->static_fields->eventHarvestGrowthInfo;
      v542->klass = (PartyOrganizationUtility_c *)v533;
      sub_1C3B708(v542, v533, v534, v535, v536, v537, v538, v539);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1189;
  v543 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
    byte_4C1CBC4 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v543 )
    goto LABEL_1189;
  QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)v543, result->m_Items[19]->fields.eventId, 0LL);
  if ( QuestEntity )
  {
    v551 = QuestEntity;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1CBC4 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1CBC4 = 1;
    }
    v552 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v552 = TerminalPramsManager_TypeInfo;
    }
    if ( QuestPhaseMaster__IsAreaImproveQuest(
           (QuestPhaseMaster_o *)v494,
           v552->static_fields->_QuestId_k__BackingField,
           0LL) )
    {
      SpotId = QuestEntity__getSpotId(v551, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
      if ( !*p_max_length )
        goto LABEL_1190;
      if ( !*m_Items || !result )
        goto LABEL_1189;
      CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                             (UserEventCooltimeRewardMaster_o *)result,
                             HIDWORD((*m_Items)->bounds),
                             SpotId,
                             0LL);
      if ( CurrentLevelEntity )
      {
        v555 = CurrentLevelEntity;
        v556 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v556 = TerminalPramsManager_TypeInfo;
        }
        eventAreaImproveResultInfo = v556->static_fields->eventAreaImproveResultInfo;
        if ( eventAreaImproveResultInfo )
        {
          if ( !v556->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v556);
            eventAreaImproveResultInfo = TerminalPramsManager_TypeInfo->static_fields->eventAreaImproveResultInfo;
            if ( !eventAreaImproveResultInfo )
              goto LABEL_1189;
          }
          eventAreaImproveResultInfo->fields.afterLevel = v555->fields.lv;
        }
      }
    }
  }
  result = (BattleResultComponent_resultData_array *)v659;
  if ( v659 )
  {
    result = (BattleResultComponent_resultData_array *)QuestPhaseEntity__GetMoveSceneInfo(v659, 0LL);
    if ( !result )
      goto LABEL_1189;
    if ( *(_QWORD *)&result->max_length )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1CBC4 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
        byte_4C1CBC4 = 1;
      }
      v558 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v558 = TerminalPramsManager_TypeInfo;
      }
      v658 = v558->static_fields->_QuestId_k__BackingField;
      v560 = System_Int32__ToString((int32_t)&v658, 0LL);
      if ( !byte_4C1CBC3 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v559);
        byte_4C1CBC3 = 1;
      }
      v561 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v561 = TerminalPramsManager_TypeInfo;
      }
      v658 = v561->static_fields->_PhaseCnt_k__BackingField + 1;
      v562 = System_Int32__ToString((int32_t)&v658, 0LL);
      v570 = System_String__Concat_63379872(v560, (System_String_o *)StringLiteral_845/*", line {0}, position {1}"*/, v562, 0LL);
      if ( !byte_4C1F214 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v563);
        byte_4C1F214 = 1;
      }
      v571 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v571 = TerminalPramsManager_TypeInfo;
      }
      p_SceneMoveQuestClearedInfo_k__BackingField = (PartyOrganizationUtility_o *)&v571->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
      p_SceneMoveQuestClearedInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v570;
      sub_1C3B708(p_SceneMoveQuestClearedInfo_k__BackingField, (int64_t)v570, v564, v565, v566, v567, v568, v569);
    }
  }
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v573 = (int64_t)(*m_Items)->m_Items[47];
  if ( v573 && *(_QWORD *)(v573 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F053 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, isWin);
      byte_4C1F053 = 1;
    }
    v574 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v574 = TerminalPramsManager_TypeInfo;
    }
    p_limitImageAnnounces_k__BackingField = (PartyOrganizationUtility_o *)&v574->static_fields->_limitImageAnnounces_k__BackingField;
    p_limitImageAnnounces_k__BackingField->klass = (PartyOrganizationUtility_c *)v573;
    sub_1C3B708(p_limitImageAnnounces_k__BackingField, v573, v545, v546, v547, v548, v549, v550);
  }
  v577 = sub_1C3B80C(string___TypeInfo, 7LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v576);
    byte_4C1CBC4 = 1;
  }
  v578 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v578 = TerminalPramsManager_TypeInfo;
  }
  v658 = v578->static_fields->_QuestId_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v658, 0LL);
  if ( !v577 )
LABEL_1189:
    sub_1C3B9C0(result, isWin);
  if ( !*(_DWORD *)(v577 + 24) )
    goto LABEL_1190;
  *(_QWORD *)(v577 + 32) = result;
  sub_1C3B708((PartyOrganizationUtility_o *)(v577 + 32), (int64_t)result, v579, v580, v581, v582, v583, v584);
  if ( *(_DWORD *)(v577 + 24) <= 1u )
    goto LABEL_1190;
  v591 = StringLiteral_845/*", line {0}, position {1}"*/;
  *(_QWORD *)(v577 + 40) = StringLiteral_845/*", line {0}, position {1}"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v577 + 40), (int64_t)v591, v585, v586, v587, v588, v589, v590);
  if ( !byte_4C1CBC3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v592);
    byte_4C1CBC3 = 1;
  }
  v593 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v593 = TerminalPramsManager_TypeInfo;
  }
  v658 = v593->static_fields->_PhaseCnt_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v658, 0LL);
  if ( *(_DWORD *)(v577 + 24) <= 2u )
    goto LABEL_1190;
  *(_QWORD *)(v577 + 48) = result;
  sub_1C3B708((PartyOrganizationUtility_o *)(v577 + 48), (int64_t)result, v594, v595, v596, v597, v598, v599);
  if ( *(_DWORD *)(v577 + 24) <= 3u )
    goto LABEL_1190;
  v606 = StringLiteral_845/*", line {0}, position {1}"*/;
  *(_QWORD *)(v577 + 56) = StringLiteral_845/*", line {0}, position {1}"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v577 + 56), (int64_t)v606, v600, v601, v602, v603, v604, v605);
  if ( !byte_4C1ECCC )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v607);
    byte_4C1ECCC = 1;
  }
  v608 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v608 = TerminalPramsManager_TypeInfo;
  }
  v649[0] = v608->static_fields->_IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v649, 0LL);
  if ( *(_DWORD *)(v577 + 24) <= 4u )
    goto LABEL_1190;
  *(_QWORD *)(v577 + 64) = result;
  sub_1C3B708((PartyOrganizationUtility_o *)(v577 + 64), (int64_t)result, v609, v610, v611, v612, v613, v614);
  if ( *(_DWORD *)(v577 + 24) <= 5u )
    goto LABEL_1190;
  v621 = StringLiteral_845/*", line {0}, position {1}"*/;
  *(_QWORD *)(v577 + 72) = StringLiteral_845/*", line {0}, position {1}"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v577 + 72), (int64_t)v621, v615, v616, v617, v618, v619, v620);
  if ( !byte_4C1ECC9 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v622);
    byte_4C1ECC9 = 1;
  }
  v623 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v623 = TerminalPramsManager_TypeInfo;
  }
  v649[0] = v623->static_fields->_IsPhaseClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v649, 0LL);
  if ( *(_DWORD *)(v577 + 24) <= 6u )
    goto LABEL_1190;
  *(_QWORD *)(v577 + 80) = result;
  sub_1C3B708((PartyOrganizationUtility_o *)(v577 + 80), (int64_t)result, v624, v625, v626, v627, v628, v629);
  v630 = System_String__Concat_63382140((System_String_array *)v577, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_17032/*"bottomRight"*/, v630, 0LL);
  TerminalPramsManager__SaveClearDatas(resulta, v631);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v632);
  TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(v633);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v634);
  TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(v635);
  TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(v636);
  if ( TerminalPramsManager__IsTerminalEffectNT2BoardOpen(v637) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EA8F )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v638);
      byte_4C1EA8F = 1;
    }
    v639 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v639 = TerminalPramsManager_TypeInfo;
    }
    v639->static_fields->_WarId_k__BackingField = 0;
    if ( !byte_4C1CCCA )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v638);
      v639 = TerminalPramsManager_TypeInfo;
      byte_4C1CCCA = 1;
    }
    if ( !v639->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v639);
      v639 = TerminalPramsManager_TypeInfo;
    }
    v639->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4C1F03D )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v638);
      v639 = TerminalPramsManager_TypeInfo;
      byte_4C1F03D = 1;
    }
    if ( !v639->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v639);
      v639 = TerminalPramsManager_TypeInfo;
    }
    v639->static_fields->_IsMapReturnFolder_k__BackingField = 0;
    if ( !byte_4C1F207 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v638);
      v639 = TerminalPramsManager_TypeInfo;
      byte_4C1F207 = 1;
    }
    if ( !v639->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v639);
      v639 = TerminalPramsManager_TypeInfo;
    }
    v639->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData((const MethodInfo *)v639);
  }
}


void __fastcall TerminalPramsManager__ResetBlankEarthSpotInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  const MethodInfo *v2; // x0

  if ( (byte_4C1F46B & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F46B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1E9A2 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1E9A2 = 1;
  }
  v2 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_DWORD *)v2[2].virtualMethodPointer + 127) = 0;
  TerminalPramsManager__BlankEarthSpotId_SaveData(v2);
}


void __fastcall TerminalPramsManager__ResetResumeScriptWithMap(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v8; // x0
  PartyOrganizationUtility_o *p_TalkScriptInfo_k__BackingField; // x0
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0

  if ( (byte_4C1F475 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F475 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F4CE )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F4CE = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_QuestMessageScriptQuestId_k__BackingField = -1;
  if ( !byte_4C1F4CF )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4C1F4CF = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = -1;
  if ( !byte_4C1F2F8 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4C1F2F8 = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  p_TalkScriptInfo_k__BackingField = (PartyOrganizationUtility_o *)&v8->static_fields->_TalkScriptInfo_k__BackingField;
  p_TalkScriptInfo_k__BackingField->klass = 0LL;
  sub_1C3B708(p_TalkScriptInfo_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !byte_4C1F4D0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v10);
    byte_4C1F4D0 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x22
  QuestRewardInfo_array *UseAddRewardItemRewardInfos_k__BackingField; // x20
  BattleResultComponent_resultData_o *v8; // x0
  TerminalPramsManager_c *v9; // x0
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct TerminalPramsManager_StaticFields *v12; // x8
  _BOOL4 IsPhaseClear_k__BackingField; // w29
  _BOOL4 IsDispOnly_k__BackingField; // w27
  struct TerminalPramsManager_StaticFields *v15; // x8
  _BOOL4 IsWarBoardClear_k__BackingField; // w25
  LimitImageAnnounce_array *limitImageAnnounces; // x21
  _BOOL4 IsOrdealCallWarClear_k__BackingField; // w26
  int32_t eventMuralId; // w28
  bool isOrdealCallWarClear; // w20
  bool isWarBoardClear; // w23
  bool v22; // zf
  int32_t eventActionQuestId; // w29
  bool v24; // w26
  TerminalPramsManager_ClearData_o *v25; // x25
  __int64 v26; // x1
  TerminalPramsManager_c *v27; // x0
  TerminalPramsManager_ClearData_c *v28; // x0
  System_String_o *SAVEKEY_CLEAR_REWARD_DISP; // x19
  System_String_o *v30; // x1
  int32_t panelEventPoint; // [xsp+C4h] [xbp-FCh]
  BattleDropItem_array *mResultEventPanelRewardInfos; // [xsp+C8h] [xbp-F8h]
  BattleDropItem_array *questResultAfterEventRewardInfos; // [xsp+D0h] [xbp-F0h]
  int32_t eventActivityPointEffectState; // [xsp+DCh] [xbp-E4h]
  WarClearReward_array *warClearRewardIn; // [xsp+E0h] [xbp-E0h]
  QuestRewardInfo_array *resultEventTowerRewardInfo_k__BackingField; // [xsp+E8h] [xbp-D8h]
  EventTowerReward_o *evTowerReward; // [xsp+F0h] [xbp-D0h]
  CostumeReleaseAnnounce_array *questClearCostumeGet_k__BackingField; // [xsp+F8h] [xbp-C8h]
  CostumeReleaseAnnounce_array *questClearCostumeRelease; // [xsp+100h] [xbp-C0h]
  EventRaceBoostInfo_o *evRace; // [xsp+108h] [xbp-B8h]
  int32_t evpWinType; // [xsp+114h] [xbp-ACh]
  EventPointWinReward_o *eventPointWinReward_k__BackingField; // [xsp+118h] [xbp-A8h]
  UserSuperBossEntity_array *oldPersonalBoss; // [xsp+120h] [xbp-A0h]
  UserSuperBossEntity_array *oldSuperBoss; // [xsp+128h] [xbp-98h]
  int32_t groupjoin; // [xsp+130h] [xbp-90h]
  int32_t lastRaidId; // [xsp+134h] [xbp-8Ch]
  int32_t raidId; // [xsp+138h] [xbp-88h]
  _BOOL4 IsQuestClear_k__BackingField; // [xsp+13Ch] [xbp-84h]
  QuestClearHeroineInfo_o *mQuestClearHeroineInfo; // [xsp+140h] [xbp-80h]
  QuestRewardInfo_array *mQuestPhaseRewardInfos; // [xsp+148h] [xbp-78h]
  QuestRewardInfo_array *useAddRewardItemRewardInfos; // [xsp+150h] [xbp-70h]

  if ( (byte_4C1F4BA & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_ClearData_TypeInfo, method);
    sub_1C3B764(&JsonManager_TypeInfo, v3);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v4);
    byte_4C1F4BA = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v5->static_fields->mQuestRewardInfos;
  if ( !byte_4C1CBC6 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4C1CBC6 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UseAddRewardItemRewardInfos_k__BackingField = v5->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
  if ( result )
  {
    if ( !result->max_length )
      sub_1C3B9C8(v5, method);
    v8 = result->m_Items[0];
    if ( !v8 )
      sub_1C3B9C0(0LL, method);
    if ( BattleResultComponent_resultData__checkResultDispFlag(v8, 2048, 0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1CBC4 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
        byte_4C1CBC4 = 1;
      }
      v9 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v9 = TerminalPramsManager_TypeInfo;
      }
      UseAddRewardItemRewardInfos_k__BackingField = 0LL;
      if ( TerminalPramsManager__IsFreeQuestOnOrdealCall(v9->static_fields->_QuestId_k__BackingField, method) )
        mQuestRewardInfos = 0LL;
    }
  }
  v10 = TerminalPramsManager_TypeInfo;
  useAddRewardItemRewardInfos = UseAddRewardItemRewardInfos_k__BackingField;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  mQuestClearHeroineInfo = static_fields->mQuestClearHeroineInfo;
  mQuestPhaseRewardInfos = static_fields->mQuestPhaseRewardInfos;
  if ( !byte_4C1ECCC )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C1ECCC = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  IsQuestClear_k__BackingField = v10->static_fields->_IsQuestClear_k__BackingField;
  if ( !byte_4C1ECC9 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C1ECC9 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v12 = v10->static_fields;
  IsPhaseClear_k__BackingField = v12->_IsPhaseClear_k__BackingField;
  lastRaidId = v12->clearLastBattleRaidId;
  raidId = v12->clearBattleRaidId;
  groupjoin = v12->joinGroupId;
  if ( !byte_4C1F4FC )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C1F4FC = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  oldSuperBoss = v10->static_fields->_oldSuperBoss_k__BackingField;
  if ( !byte_4C1F4FA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C1F4FA = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss = v10->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !byte_4C1F4FD )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C1F4FD = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventPointWinReward_k__BackingField = v10->static_fields->_eventPointWinReward_k__BackingField;
  if ( !byte_4C1F4F4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C1F4F4 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evpWinType = v10->static_fields->_eventPointWinType_k__BackingField;
  if ( !byte_4C1F1FC )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C1F1FC = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evRace = v10->static_fields->_eventRaceBoost_k__BackingField;
  if ( !byte_4C1F051 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C1F051 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeRelease = v10->static_fields->_questClearCostumeRelease_k__BackingField;
  if ( !byte_4C1F047 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C1F047 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeGet_k__BackingField = v10->static_fields->_questClearCostumeGet_k__BackingField;
  if ( !byte_4C1F04D )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C1F04D = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evTowerReward = v10->static_fields->_eventTowerReward_k__BackingField;
  if ( !byte_4C1F4FE )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C1F4FE = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v10->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  if ( !byte_4C1DCA3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C1DCA3 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  IsDispOnly_k__BackingField = v10->static_fields->_IsDispOnly_k__BackingField;
  if ( !byte_4C1F059 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C1F059 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  warClearRewardIn = v10->static_fields->_warClearReward_k__BackingField;
  if ( !byte_4C1F4FF )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C1F4FF = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventActivityPointEffectState = v10->static_fields->_EventActivityPointEffectState_k__BackingField;
  if ( !byte_4C1F048 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C1F048 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v15 = v10->static_fields;
  IsWarBoardClear_k__BackingField = v15->_IsWarBoardClear_k__BackingField;
  mResultEventPanelRewardInfos = v15->mResultEventPanelRewardInfos;
  questResultAfterEventRewardInfos = v15->mQuestResultAfterEventRewardInfos;
  panelEventPoint = v15->panelEventPoint;
  if ( !byte_4C1F052 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C1F052 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  limitImageAnnounces = v10->static_fields->_limitImageAnnounces_k__BackingField;
  if ( !byte_4C1E9A1 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C1E9A1 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  IsOrdealCallWarClear_k__BackingField = v10->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4C1F049 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C1F049 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventMuralId = v10->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_4C1F20A )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C1F20A = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  isOrdealCallWarClear = IsOrdealCallWarClear_k__BackingField;
  isWarBoardClear = IsWarBoardClear_k__BackingField;
  v22 = !IsPhaseClear_k__BackingField;
  eventActionQuestId = v10->static_fields->_EventActionQuestId_k__BackingField;
  v24 = !v22;
  v25 = (TerminalPramsManager_ClearData_o *)sub_1C3B9B0(TerminalPramsManager_ClearData_TypeInfo);
  TerminalPramsManager_ClearData___ctor_36083880(
    v25,
    mQuestClearHeroineInfo,
    mQuestRewardInfos,
    mQuestPhaseRewardInfos,
    IsQuestClear_k__BackingField,
    v24,
    lastRaidId,
    raidId,
    groupjoin,
    oldSuperBoss,
    oldPersonalBoss,
    eventPointWinReward_k__BackingField,
    evpWinType,
    evRace,
    questClearCostumeRelease,
    questClearCostumeGet_k__BackingField,
    evTowerReward,
    resultEventTowerRewardInfo_k__BackingField,
    IsDispOnly_k__BackingField,
    warClearRewardIn,
    eventActivityPointEffectState,
    isWarBoardClear,
    questResultAfterEventRewardInfos,
    mResultEventPanelRewardInfos,
    panelEventPoint,
    limitImageAnnounces,
    isOrdealCallWarClear,
    eventMuralId,
    eventActionQuestId,
    useAddRewardItemRewardInfos,
    0LL);
  if ( !byte_4C1F500 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v26);
    byte_4C1F500 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  v27->static_fields->_isQuestRewardSetted_k__BackingField = 1;
  v28 = TerminalPramsManager_ClearData_TypeInfo;
  if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
    v28 = TerminalPramsManager_ClearData_TypeInfo;
  }
  SAVEKEY_CLEAR_REWARD_DISP = v28->static_fields->SAVEKEY_CLEAR_REWARD_DISP;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v30 = JsonManager__toJson((Il2CppObject *)v25, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString(SAVEKEY_CLEAR_REWARD_DISP, v30, 0LL);
}


void __fastcall TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  EventRaidDefeatedEffectInfo_o *EventRaidDefeatedEffectInfo_k__BackingField; // x0
  System_String_o *v5; // x0

  if ( (byte_4C1F4C0 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11665/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/, v2);
    byte_4C1F4C0 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F502 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F502 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EventRaidDefeatedEffectInfo_k__BackingField = v3->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  if ( !EventRaidDefeatedEffectInfo_k__BackingField )
    sub_1C3B9C0(0LL, v1);
  v5 = EventRaidDefeatedEffectInfo__ConvertToStringData(EventRaidDefeatedEffectInfo_k__BackingField, v1);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11665/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/, v5, 0LL);
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

  if ( (byte_4C1F482 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_13906/*"The supplied {0} is an invalid size for the {1} end point."*/, v2);
    sub_1C3B764(&StringLiteral_13909/*"The table ({0}) cannot be the child table to itself in a nested relation: the DataSet name conflicts with the table name."*/, v3);
    byte_4C1F482 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1CBC4 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13909/*"The table ({0}) cannot be the child table to itself in a nested relation: the DataSet name conflicts with the table name."*/,
    v4->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4C1CBC3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    byte_4C1CBC3 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13906/*"The supplied {0} is an invalid size for the {1} end point."*/,
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
  int key_high; // w27
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x20
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x2
  System_String_o *v26; // x1
  int v27; // [xsp+Ch] [xbp-94h] BYREF
  __int128 v28[2]; // [xsp+10h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C1F4C4 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v1);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v2);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v4);
    sub_1C3B764(&int_TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v7);
    sub_1C3B764(&string_TypeInfo, v8);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_11674/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/, v10);
    sub_1C3B764(&StringLiteral_25590, v11);
    sub_1C3B764(&StringLiteral_845/*", line {0}, position {1}"*/, v12);
    byte_4C1F4C4 = 1;
  }
  memset(&v29, 0, 32);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA85 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1EA85 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestRandomGroupList_k__BackingField = v14->static_fields->_QuestRandomGroupList_k__BackingField;
  if ( !QuestRandomGroupList_k__BackingField )
    sub_1C3B9C0(0LL, v1);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v28,
    QuestRandomGroupList_k__BackingField,
    (const MethodInfo_32EC4A4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v29.fields._dictionary = v28[0];
  v29.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v28[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v29,
            (const MethodInfo_3441FEC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int)v29.fields._current.fields.key;
    key_high = HIDWORD(v29.fields._current.fields.key);
    if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
      Empty = System_String__Concat_63368612(Empty, (System_String_o *)StringLiteral_845/*", line {0}, position {1}"*/, 0LL);
    LODWORD(v28[0]) = key;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v28, v18, v19, v20);
    v27 = key_high;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v22, v23, v24);
    v26 = System_String__Format_63382984((System_String_o *)StringLiteral_25590, v21, v25, 0LL);
    Empty = System_String__Concat_63368612(Empty, v26, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v29,
    (const MethodInfo_34420EC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11674/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestReleasedFocusState(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v4; // x1

  if ( (byte_4C1F4AD & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F4AD = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v2);
  if ( !QuestFocusStateManager )
    sub_1C3B9C0(0LL, v4);
  QuestFocusStateManager__WriteData(QuestFocusStateManager, 0LL);
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
  __int64 v29; // x1
  TerminalPramsManager_c *v30; // x0
  __int64 v31; // x1
  TerminalPramsManager_c *v32; // x0
  __int64 v33; // x1
  TerminalPramsManager_c *v34; // x0
  __int64 v35; // x1
  TerminalPramsManager_c *v36; // x0
  __int64 v37; // x1
  TerminalPramsManager_c *v38; // x0
  __int64 v39; // x1
  TerminalPramsManager_c *v40; // x0
  __int64 v41; // x1
  TerminalPramsManager_c *v42; // x0
  System_String_o *v43; // x0
  __int64 v44; // x1
  TerminalPramsManager_c *v45; // x0
  TerminalPramsManager_c *v46; // x0
  __int64 v47; // x1
  TerminalPramsManager_c *v48; // x0
  __int64 v49; // x1
  TerminalPramsManager_c *v50; // x0
  __int64 v51; // x1
  TerminalPramsManager_c *v52; // x0
  __int64 v53; // x1
  TerminalPramsManager_c *v54; // x0
  System_String_o *v55; // x0
  __int64 v56; // x1
  TerminalPramsManager_c *v57; // x0
  __int64 v58; // x1
  TerminalPramsManager_c *v59; // x0
  __int64 v60; // x1
  TerminalPramsManager_c *v61; // x0
  __int64 v62; // x1
  TerminalPramsManager_c *v63; // x0
  __int64 v64; // x1
  TerminalPramsManager_c *v65; // x0
  __int64 v66; // x1
  TerminalPramsManager_c *v67; // x0
  __int64 v68; // x1
  TerminalPramsManager_c *v69; // x0
  __int64 v70; // x1
  TerminalPramsManager_c *v71; // x0
  __int64 v72; // x1
  TerminalPramsManager_c *v73; // x0
  __int64 v74; // x1
  TerminalPramsManager_c *v75; // x0
  __int64 v76; // x1
  System_String_o *v77; // x19
  TerminalPramsManager_c *v78; // x0
  System_String_o *v79; // x0
  System_String_o *v80; // x0
  __int64 v81; // x1
  TerminalPramsManager_c *v82; // x0
  __int64 v83; // x1
  TerminalPramsManager_c *v84; // x0
  int32_t MapModelClearQuestId_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF
  int64_t EndTime_k__BackingField; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C1F480 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_13899/*"The supplied DateTime includes a TimeOfDay setting.   This is not supported."*/, v2);
    sub_1C3B764(&StringLiteral_11672/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/, v3);
    sub_1C3B764(&StringLiteral_13895/*"The string for white space contains an invalid character."*/, v4);
    sub_1C3B764(&StringLiteral_13900/*"The supplied DateTime must have the Kind property set to DateTimeKind.Unspecified or DateTimeKind.Utc."*/, v5);
    sub_1C3B764(&StringLiteral_13906/*"The supplied {0} is an invalid size for the {1} end point."*/, v6);
    sub_1C3B764(&StringLiteral_13914/*"The targetNamespace '{0}' of included/redefined schema should be the same as the targetNamespace '{1}' of the including schema."*/, v7);
    sub_1C3B764(&StringLiteral_13898/*"The sum of the BaseUtcOffset and DaylightDelta properties must within plus or minus 14.0 hours."*/, v8);
    sub_1C3B764(&StringLiteral_11669/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/, v9);
    sub_1C3B764(&StringLiteral_13901/*"The supplied DateTime must have the Kind property set to DateTimeKind.Unspecified."*/, v10);
    sub_1C3B764(&StringLiteral_11668/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/, v11);
    sub_1C3B764(&StringLiteral_11673/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/, v12);
    sub_1C3B764(&StringLiteral_11661/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, v13);
    sub_1C3B764(&StringLiteral_11670/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/, v14);
    sub_1C3B764(&StringLiteral_13909/*"The table ({0}) cannot be the child table to itself in a nested relation: the DataSet name conflicts with the table name."*/, v15);
    sub_1C3B764(&StringLiteral_11681/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/, v16);
    sub_1C3B764(&StringLiteral_13913/*"The target namespace of an attribute declaration, whether local or global, must not match http://www.w3.org/2001/XMLSchema-instance."*/, v17);
    sub_1C3B764(&StringLiteral_13918/*"The tasks argument contains no tasks."*/, v18);
    sub_1C3B764(&StringLiteral_13911/*"The table [{0}] involved in more than one relation. You must explicitly mention a relation name in the expression '{1}'."*/, v19);
    sub_1C3B764(&StringLiteral_13915/*"The targetNamespace attribute cannot have empty string as its value."*/, v20);
    sub_1C3B764(&StringLiteral_13896/*"The string must be null-terminated."*/, v21);
    sub_1C3B764(&StringLiteral_11659/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, v22);
    sub_1C3B764(&StringLiteral_11664/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, v23);
    sub_1C3B764(&StringLiteral_13919/*"The tasks argument included a null value."*/, v24);
    sub_1C3B764(&StringLiteral_11663/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, v25);
    sub_1C3B764(&StringLiteral_845/*", line {0}, position {1}"*/, v26);
    sub_1C3B764(&StringLiteral_11662/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, v27);
    sub_1C3B764(&StringLiteral_11671/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/, v28);
    sub_1C3B764(&StringLiteral_11680/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, v29);
    byte_4C1F480 = 1;
  }
  EndTime_k__BackingField = 0LL;
  MapModelClearQuestId_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EC64 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1EC64 = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13898/*"The sum of the BaseUtcOffset and DaylightDelta properties must within plus or minus 14.0 hours."*/,
    v30->static_fields->_DispState_k__BackingField,
    0LL);
  if ( !byte_4C1EA88 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v31);
    byte_4C1EA88 = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13918/*"The tasks argument contains no tasks."*/,
    v32->static_fields->_WarId_k__BackingField,
    0LL);
  if ( !byte_4C1EC68 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v33);
    byte_4C1EC68 = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13911/*"The table [{0}] involved in more than one relation. You must explicitly mention a relation name in the expression '{1}'."*/,
    v34->static_fields->_SpotId_k__BackingField,
    0LL);
  if ( !byte_4C1E99E )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v35);
    byte_4C1E99E = 1;
  }
  v36 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v36 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11659/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/,
    v36->static_fields->_BlankEarthSpotId_k__BackingField,
    0LL);
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v37);
    byte_4C1CBC4 = 1;
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v38 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13909/*"The table ({0}) cannot be the child table to itself in a nested relation: the DataSet name conflicts with the table name."*/,
    v38->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4C1CBC3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v39);
    byte_4C1CBC3 = 1;
  }
  v40 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v40 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13906/*"The supplied {0} is an invalid size for the {1} end point."*/,
    v40->static_fields->_PhaseCnt_k__BackingField,
    0LL);
  if ( !byte_4C1EC69 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v41);
    byte_4C1EC69 = 1;
  }
  v42 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v42 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v42->static_fields->_EndTime_k__BackingField;
  v43 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13899/*"The supplied DateTime includes a TimeOfDay setting.   This is not supported."*/, v43, 0LL);
  if ( !byte_4C1F074 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v44);
    byte_4C1F074 = 1;
  }
  v45 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v45 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13901/*"The supplied DateTime must have the Kind property set to DateTimeKind.Unspecified."*/,
    v45->static_fields->_IsDoneShortcut_k__BackingField,
    0LL);
  v46 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v46 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_13919/*"The tasks argument included a null value."*/,
    v46->static_fields->mTerminalWarStartedIds,
    0LL);
  if ( !byte_4C1F204 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v47);
    byte_4C1F204 = 1;
  }
  v48 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v48 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13914/*"The targetNamespace '{0}' of included/redefined schema should be the same as the targetNamespace '{1}' of the including schema."*/,
    v48->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_4C1F205 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v49);
    byte_4C1F205 = 1;
  }
  v50 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v50 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13915/*"The targetNamespace attribute cannot have empty string as its value."*/,
    v50->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  if ( !byte_4C1F4E8 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v51);
    byte_4C1F4E8 = 1;
  }
  v52 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v52 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13900/*"The supplied DateTime must have the Kind property set to DateTimeKind.Unspecified or DateTimeKind.Utc."*/,
    v52->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4C1F4E9 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v53);
    byte_4C1F4E9 = 1;
  }
  v54 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v54 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v54->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v55 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13913/*"The target namespace of an attribute declaration, whether local or global, must not match http://www.w3.org/2001/XMLSchema-instance."*/, v55, 0LL);
  if ( !byte_4C1F4EA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v56);
    byte_4C1F4EA = 1;
  }
  v57 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13895/*"The string for white space contains an invalid character."*/,
    v57->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_4C1F4EB )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v58);
    byte_4C1F4EB = 1;
  }
  v59 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v59 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13896/*"The string must be null-terminated."*/,
    v59->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  if ( !byte_4C1F4EC )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v60);
    byte_4C1F4EC = 1;
  }
  v61 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v61 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11672/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/,
    v61->static_fields->_PlayedTerminalEffects_k__BackingField,
    0LL);
  if ( !byte_4C1F066 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v62);
    byte_4C1F066 = 1;
  }
  v63 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v63 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11669/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/,
    v63->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F067 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v64);
    byte_4C1F067 = 1;
  }
  v65 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v65 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11670/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/,
    v65->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  if ( !byte_4C1F206 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v66);
    byte_4C1F206 = 1;
  }
  v67 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11671/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/,
    v67->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F209 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v68);
    byte_4C1F209 = 1;
  }
  v69 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v69 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11681/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/,
    v69->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11663/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11662/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  if ( !byte_4C1F03F )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v70);
    byte_4C1F03F = 1;
  }
  v71 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v71 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11680/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/,
    v71->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  if ( !byte_4C1EA87 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v72);
    byte_4C1EA87 = 1;
  }
  v73 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v73 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11661/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/,
    v73->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  if ( !byte_4C1EC65 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v74);
    byte_4C1EC65 = 1;
  }
  v75 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v75 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v75->static_fields->_MapModelClearQuestId_k__BackingField;
  v77 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_4C1EC66 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v76);
    byte_4C1EC66 = 1;
  }
  v78 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v78 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v78->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v79 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v80 = System_String__Concat_63379872(v77, (System_String_o *)StringLiteral_845/*", line {0}, position {1}"*/, v79, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11668/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/, v80, 0LL);
  if ( !byte_4C1F20B )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v81);
    byte_4C1F20B = 1;
  }
  v82 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v82 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11664/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/,
    v82->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F4ED )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v83);
    byte_4C1F4ED = 1;
  }
  v84 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v84 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11673/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/,
    v84->static_fields->_PlayerGenderType_k__BackingField,
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
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w1

  if ( (byte_4C1F4B4 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    byte_4C1F4B4 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v6);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1C3B9C0(0LL, v9);
    if ( IsMainStoryForQuestId )
      v10 = 10;
    else
      v10 = 9;
    AdManager__TrackEvent((AdManager_o *)Instance, v10, 10, questId, questPhase, 0LL, 0LL);
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
  __int64 v28; // x20
  int64_t Instance; // x0
  const MethodInfo *v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x21
  int32_t klass_high; // w21
  Il2CppObject *MasterData_object; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *QuestIdsByTargetAndOpenCondType; // x19
  TerminalPramsManager___c_c *v47; // x8
  System_Func_int__bool__o *_9__713_0; // x21
  Il2CppObject *v49; // x22
  struct TerminalPramsManager___c_StaticFields *static_fields; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x19
  System_Func_T__TResult__o *v58; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x19
  System_Func_object__bool__o *v60; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  TerminalPramsManager___c_c *v62; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x19
  System_Func_object__int__o *_9__713_3; // x20
  Il2CppObject *v65; // x21
  struct TerminalPramsManager___c_StaticFields *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v73; // x0
  TerminalPramsManager___c_c *v74; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x19
  System_Func_int__int__o *_9__713_4; // x20
  Il2CppObject *v77; // x21
  struct TerminalPramsManager___c_StaticFields *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x0
  int32_t v86; // w0
  int32_t v87; // w19
  Il2CppObject *v88; // [xsp+0h] [xbp-40h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C1F4B5 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_SpotMaster___, v4);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_1C3B764(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v6);
    sub_1C3B764(&Method_System_Linq_Enumerable_FirstOrDefault_int___, v7);
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderByDescending_int__int___, v8);
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_int__QuestEntity___, v9);
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_QuestEntity__int___, v10);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_int___, v11);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_QuestEntity___, v12);
    sub_1C3B764(&System_Func_int__int__TypeInfo, v13);
    sub_1C3B764(&System_Func_int__bool__TypeInfo, v14);
    sub_1C3B764(&System_Func_QuestEntity__int__TypeInfo, v15);
    sub_1C3B764(&System_Func_QuestEntity__bool__TypeInfo, v16);
    sub_1C3B764(&System_Func_int__QuestEntity__TypeInfo, v17);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v18);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v20);
    sub_1C3B764(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__713_0__, v21);
    sub_1C3B764(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__713_3__, v22);
    sub_1C3B764(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__713_4__, v23);
    sub_1C3B764(&Method_TerminalPramsManager___c__DisplayClass713_0__SendOpenedQuestIdToAdManager_b__1__, v24);
    sub_1C3B764(&Method_TerminalPramsManager___c__DisplayClass713_0__SendOpenedQuestIdToAdManager_b__2__, v25);
    sub_1C3B764(&TerminalPramsManager___c__DisplayClass713_0_TypeInfo, v26);
    sub_1C3B764(&TerminalPramsManager___c_TypeInfo, v27);
    byte_4C1F4B5 = 1;
  }
  v88 = 0LL;
  entity = 0LL;
  v28 = sub_1C3B9B0(TerminalPramsManager___c__DisplayClass713_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass713_0___ctor((TerminalPramsManager___c__DisplayClass713_0_o *)v28, 0LL);
  if ( clearedQuestId >= 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !v28 )
      goto LABEL_43;
    *(_QWORD *)(v28 + 16) = Instance;
    sub_1C3B708((PartyOrganizationUtility_o *)(v28 + 16), Instance, v31, v32, v33, v34, v35, v36);
    Instance = *(_QWORD *)(v28 + 16);
    if ( !Instance )
      goto LABEL_43;
    if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, clearedQuestId, 0LL) )
      return;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_SpotMaster___);
    if ( !entity )
      goto LABEL_43;
    v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = QuestEntity__getSpotId(entity, 0LL);
    if ( !v37 )
      goto LABEL_43;
    Instance = DataMasterBase_object__object__int___TryGetEntity(
                 v37,
                 &v88,
                 Instance,
                 (const MethodInfo_329AE94 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return;
    if ( !v88 )
      goto LABEL_43;
    klass_high = HIDWORD(v88[1].klass);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( TerminalPramsManager__IsMustPlayMainStory(klass_high, v30) )
    {
      Instance = (int64_t)entity;
      if ( !entity )
        goto LABEL_43;
      if ( QuestEntity__GetTypeFlag(entity, 0LL) != 2 )
        return;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v28 + 24) = MasterData_object;
      sub_1C3B708((PartyOrganizationUtility_o *)(v28 + 24), (int64_t)MasterData_object, v40, v41, v42, v43, v44, v45);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      if ( !Instance )
        goto LABEL_43;
      QuestIdsByTargetAndOpenCondType = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
                                                                                               (QuestReleaseMaster_o *)Instance,
                                                                                               clearedQuestId,
                                                                                               1,
                                                                                               0LL);
      v47 = TerminalPramsManager___c_TypeInfo;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v47 = TerminalPramsManager___c_TypeInfo;
      }
      _9__713_0 = v47->static_fields->__9__713_0;
      if ( !_9__713_0 )
      {
        if ( !v47->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v47);
          v47 = TerminalPramsManager___c_TypeInfo;
        }
        v49 = (Il2CppObject *)v47->static_fields->__9;
        _9__713_0 = (System_Func_int__bool__o *)sub_1C3B9B0(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__713_0,
          v49,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__713_0__,
          0LL);
        static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
        static_fields->__9__713_0 = _9__713_0;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&static_fields->__9__713_0,
          (int64_t)_9__713_0,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
      }
      v57 = System_Linq_Enumerable__Where_int_(
              QuestIdsByTargetAndOpenCondType,
              (System_Func_TSource__bool__o *)_9__713_0,
              (const MethodInfo_3030908 *)Method_System_Linq_Enumerable_Where_int___);
      v58 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_int__QuestEntity__TypeInfo);
      System_Func_int__object____ctor(
        v58,
        (Il2CppObject *)v28,
        Method_TerminalPramsManager___c__DisplayClass713_0__SendOpenedQuestIdToAdManager_b__1__,
        0LL);
      v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v57,
                                                                   (System_Func_TSource__TResult__o *)v58,
                                                                   (const MethodInfo_30203C8 *)Method_System_Linq_Enumerable_Select_int__QuestEntity___);
      v60 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v60,
        (Il2CppObject *)v28,
        Method_TerminalPramsManager___c__DisplayClass713_0__SendOpenedQuestIdToAdManager_b__2__,
        0LL);
      v61 = System_Linq_Enumerable__Where_object_(
              v59,
              (System_Func_TSource__bool__o *)v60,
              (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v62 = TerminalPramsManager___c_TypeInfo;
      v63 = v61;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v62 = TerminalPramsManager___c_TypeInfo;
      }
      _9__713_3 = (System_Func_object__int__o *)v62->static_fields->__9__713_3;
      if ( !_9__713_3 )
      {
        if ( !v62->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v62);
          v62 = TerminalPramsManager___c_TypeInfo;
        }
        v65 = (Il2CppObject *)v62->static_fields->__9;
        _9__713_3 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_QuestEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__713_3,
          v65,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__713_3__,
          0LL);
        v66 = TerminalPramsManager___c_TypeInfo->static_fields;
        v66->__9__713_3 = (struct System_Func_QuestEntity__int__o *)_9__713_3;
        sub_1C3B708((PartyOrganizationUtility_o *)&v66->__9__713_3, (int64_t)_9__713_3, v67, v68, v69, v70, v71, v72);
      }
      v73 = System_Linq_Enumerable__Select_object__int_(
              v63,
              (System_Func_TSource__TResult__o *)_9__713_3,
              (const MethodInfo_30221C0 *)Method_System_Linq_Enumerable_Select_QuestEntity__int___);
      v74 = TerminalPramsManager___c_TypeInfo;
      v75 = (System_Collections_Generic_IEnumerable_TSource__o *)v73;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v74 = TerminalPramsManager___c_TypeInfo;
      }
      _9__713_4 = v74->static_fields->__9__713_4;
      if ( !_9__713_4 )
      {
        if ( !v74->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v74);
          v74 = TerminalPramsManager___c_TypeInfo;
        }
        v77 = (Il2CppObject *)v74->static_fields->__9;
        _9__713_4 = (System_Func_int__int__o *)sub_1C3B9B0(System_Func_int__int__TypeInfo);
        System_Func_int__int____ctor(
          _9__713_4,
          v77,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__713_4__,
          0LL);
        v78 = TerminalPramsManager___c_TypeInfo->static_fields;
        v78->__9__713_4 = _9__713_4;
        sub_1C3B708((PartyOrganizationUtility_o *)&v78->__9__713_4, (int64_t)_9__713_4, v79, v80, v81, v82, v83, v84);
      }
      v85 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_int__int_(
                                                                   v75,
                                                                   (System_Func_TSource__TKey__o *)_9__713_4,
                                                                   (const MethodInfo_301A63C *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
      v86 = System_Linq_Enumerable__FirstOrDefault_int_(
              v85,
              (const MethodInfo_3012AD8 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      if ( v86 )
      {
        v87 = v86;
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetOpenedStoryQuest((AdManager_o *)Instance, v87, 0LL);
          return;
        }
LABEL_43:
        sub_1C3B9C0(Instance, v30);
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
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w1

  if ( (byte_4C1F4B3 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    byte_4C1F4B3 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v6);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1C3B9C0(0LL, v9);
    if ( IsMainStoryForQuestId )
      v10 = 10;
    else
      v10 = 9;
    AdManager__TrackEvent((AdManager_o *)Instance, v10, 9, questId, questPhase, 0LL, 0LL);
  }
}


void __fastcall TerminalPramsManager__SetAutoResumeByQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0
  QuestTree_o *Instance; // x0
  __int64 v13; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v15; // x1
  MapControl_QuestInfo_o *v16; // x20
  int32_t warId; // w21
  TerminalPramsManager_c *v18; // x0
  Il2CppObject *Master_object; // x21
  bool v20; // w22
  __int64 v21; // x1
  TerminalPramsManager_c *v22; // x0
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  int32_t parentBlankEarthSpotId; // w1
  unsigned __int64 v26; // x21
  TerminalPramsManager_c *v27; // x0
  int32_t v28; // w21
  TerminalPramsManager_c *v29; // x0
  int32_t questPhase; // w21
  int64_t endTime; // x20
  __int64 v32; // x1
  Il2CppObject *v33; // x20
  WarEntity_o *WarEntityByWarID; // x0
  bool IsFolder; // w20
  TerminalPramsManager_c *v36; // x0
  int v37; // w8
  TerminalSceneComponent_c *v38; // x0
  UnityEngine_Object_o *mInstance; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *klass; // x8
  UnityEngine_Object_o *v41; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v42; // x8
  ScrTerminalListTop_o *v43; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v44; // x8
  UnityEngine_Object_o *v45; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v46; // x8
  const MethodInfo *v47; // x0
  unsigned __int64 v48; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_int__o v50; // 0:x0.8

  if ( (byte_4C1F472 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    sub_1C3B764(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v4);
    sub_1C3B764(&Method_System_Nullable_int__GetValueOrDefault__, v5);
    sub_1C3B764(&Method_System_Nullable_int___ctor__, v6);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v9);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v10);
    byte_4C1F472 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1ECCE )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1ECCE = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    QuestInfo = QuestTree__GetQuestInfo(Instance, questId, 0LL);
    if ( !QuestInfo )
      return;
    v16 = QuestInfo;
    warId = QuestInfo->fields.warId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EA8F )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v15);
      byte_4C1EA8F = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    v18->static_fields->_WarId_k__BackingField = warId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    Instance = (QuestTree_o *)MapControl_QuestInfo__GetSpotID(v16, 0LL);
    if ( !Master_object )
      goto LABEL_148;
    v20 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            (int32_t)Instance,
            (const MethodInfo_329AE94 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    LODWORD(Master_object) = MapControl_QuestInfo__GetSpotID(v16, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v20 )
    {
      if ( byte_4C1E9A2 )
        goto LABEL_38;
    }
    else
    {
      if ( !byte_4C1EA8E )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v21);
        byte_4C1EA8E = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
      }
      v22->static_fields->_SpotId_k__BackingField = (int)Master_object;
      WarInfo_k__BackingField = v16->fields._WarInfo_k__BackingField;
      if ( WarInfo_k__BackingField && (Mine = MapControl_WarInfo__GetMine(WarInfo_k__BackingField, 0LL)) != 0LL )
      {
        parentBlankEarthSpotId = Mine->fields.parentBlankEarthSpotId;
        v50 = (System_Nullable_int__o)&v48;
        v48 = 0LL;
        System_Nullable_int____ctor(
          v50,
          parentBlankEarthSpotId,
          (const MethodInfo_37A8420 *)Method_System_Nullable_int___ctor__);
        v26 = v48;
      }
      else
      {
        v26 = 0LL;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (Il2CppObject *)HIDWORD(v26);
      if ( byte_4C1E9A2 )
      {
LABEL_38:
        v27 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v27 = TerminalPramsManager_TypeInfo;
        }
        v27->static_fields->_BlankEarthSpotId_k__BackingField = (int)Master_object;
        v28 = v16->fields.questId;
        if ( !v27->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v27);
        if ( !byte_4C1EA89 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v21);
          byte_4C1EA89 = 1;
        }
        v29 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_QuestId_k__BackingField = v28;
        questPhase = v16->fields.questPhase;
        if ( !byte_4C1EA8D )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v21);
          v29 = TerminalPramsManager_TypeInfo;
          byte_4C1EA8D = 1;
        }
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_PhaseCnt_k__BackingField = questPhase;
        endTime = v16->fields.endTime;
        if ( !byte_4C1EA8A )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v21);
          v29 = TerminalPramsManager_TypeInfo;
          byte_4C1EA8A = 1;
        }
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_EndTime_k__BackingField = endTime;
        if ( !byte_4C1F073 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v21);
          v29 = TerminalPramsManager_TypeInfo;
          byte_4C1F073 = 1;
        }
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 1;
        if ( !SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
          goto LABEL_151;
        v33 = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1EA88 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v13);
          byte_4C1EA88 = 1;
        }
        Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !v33 )
          goto LABEL_148;
        WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(
                             (QuestTree_o *)v33,
                             HIDWORD(Instance[1].fields.questReleaseEntList->klass),
                             0LL);
        if ( WarEntityByWarID )
        {
          IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( IsFolder )
          {
            if ( !byte_4C1EA8B )
            {
              sub_1C3B764(&TerminalPramsManager_TypeInfo, v32);
              byte_4C1EA8B = 1;
            }
            v36 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v36 = TerminalPramsManager_TypeInfo;
            }
            v37 = 3;
          }
          else
          {
            if ( !byte_4C1EA8B )
            {
              sub_1C3B764(&TerminalPramsManager_TypeInfo, v32);
              byte_4C1EA8B = 1;
            }
            v36 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v36 = TerminalPramsManager_TypeInfo;
            }
            v37 = 2;
          }
        }
        else
        {
LABEL_151:
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C1EA8B )
          {
            sub_1C3B764(&TerminalPramsManager_TypeInfo, v32);
            byte_4C1EA8B = 1;
          }
          v36 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v36 = TerminalPramsManager_TypeInfo;
          }
          v37 = 1;
        }
        v36->static_fields->_DispState_k__BackingField = v37;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C1CAE3 )
        {
          sub_1C3B764(&TerminalSceneComponent_TypeInfo, v32);
          byte_4C1CAE3 = 1;
        }
        v38 = TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v38 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = (UnityEngine_Object_o *)v38->static_fields->mInstance;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
          goto LABEL_140;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C1CAE3 )
        {
          sub_1C3B764(&TerminalSceneComponent_TypeInfo, v13);
          byte_4C1CAE3 = 1;
        }
        Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        }
        klass = Instance[1].fields.questReleaseEntList->klass;
        if ( klass )
        {
          v41 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4C1CAE3 )
            {
              sub_1C3B764(&TerminalSceneComponent_TypeInfo, v13);
              byte_4C1CAE3 = 1;
            }
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            }
            v42 = Instance[1].fields.questReleaseEntList->klass;
            if ( !v42 )
              goto LABEL_148;
            v43 = *(ScrTerminalListTop_o **)&v42->_2.static_fields_size;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C1EA88 )
            {
              sub_1C3B764(&TerminalPramsManager_TypeInfo, v13);
              byte_4C1EA88 = 1;
            }
            Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
            }
            if ( !v43 )
              goto LABEL_148;
            ScrTerminalListTop__RequestChangeTerminalListBG(
              v43,
              HIDWORD(Instance[1].fields.questReleaseEntList->klass),
              0LL);
          }
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4C1CAE3 )
          {
            sub_1C3B764(&TerminalSceneComponent_TypeInfo, v13);
            byte_4C1CAE3 = 1;
          }
          Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
          }
          v44 = Instance[1].fields.questReleaseEntList->klass;
          if ( v44 )
          {
            v45 = *(UnityEngine_Object_o **)&v44->_2.instance_size;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
              goto LABEL_140;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4C1CAE3 )
            {
              sub_1C3B764(&TerminalSceneComponent_TypeInfo, v13);
              byte_4C1CAE3 = 1;
            }
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            }
            v46 = Instance[1].fields.questReleaseEntList->klass;
            if ( v46 )
            {
              Instance = *(QuestTree_o **)&v46->_2.instance_size;
              if ( Instance )
              {
                TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)Instance, 0LL);
LABEL_140:
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4C1CCCA )
                {
                  sub_1C3B764(&TerminalPramsManager_TypeInfo, v13);
                  byte_4C1CCCA = 1;
                }
                v47 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v47 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                }
                *((_BYTE *)v47[2].virtualMethodPointer + 717) = 1;
                TerminalPramsManager__Save_SaveData(v47);
                return;
              }
            }
          }
        }
LABEL_148:
        sub_1C3B9C0(Instance, v13);
      }
    }
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v21);
    byte_4C1E9A2 = 1;
    goto LABEL_38;
  }
}


void __fastcall TerminalPramsManager__SetAutoResumeByWarId(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x20
  TitleInfoControl_o *v10; // x0
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v12; // x20
  bool IsFolder; // w21
  TerminalPramsManager_c *v14; // x0
  int v15; // w8
  int32_t parentBlankEarthSpotId; // w20
  TerminalPramsManager_c *v17; // x0
  TerminalSceneComponent_c *v18; // x0
  UnityEngine_Object_o *mInstance; // x20
  ExUITexture_c *klass; // x8
  UnityEngine_Object_o *v21; // x20
  ExUITexture_c *v22; // x8
  ScrTerminalListTop_o *v23; // x20
  ExUITexture_c *v24; // x8
  UnityEngine_Object_o *v25; // x20
  ExUITexture_c *v26; // x8
  const MethodInfo *v27; // x0

  if ( (byte_4C1F473 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v4);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v5);
    byte_4C1F473 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1ECCE )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1ECCE = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4C1EA8F )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4C1EA8F = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_WarId_k__BackingField = warId;
  if ( !SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
    goto LABEL_112;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA88 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
    byte_4C1EA88 = 1;
  }
  v10 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_109;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(
                       (QuestTree_o *)Instance,
                       HIDWORD(v10->fields.mEventBgTexture->klass),
                       0LL);
  if ( WarEntityByWarID )
  {
    v12 = WarEntityByWarID;
    IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( IsFolder )
    {
      if ( !byte_4C1EA8B )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v7);
        byte_4C1EA8B = 1;
      }
      v14 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v14 = TerminalPramsManager_TypeInfo;
      }
      v15 = 3;
    }
    else
    {
      if ( !byte_4C1EA8B )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v7);
        byte_4C1EA8B = 1;
      }
      v14 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v14 = TerminalPramsManager_TypeInfo;
      }
      v15 = 2;
    }
    v14->static_fields->_DispState_k__BackingField = v15;
    parentBlankEarthSpotId = v12->fields.parentBlankEarthSpotId;
  }
  else
  {
LABEL_112:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EA8B )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v7);
      byte_4C1EA8B = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = TerminalPramsManager_TypeInfo;
    }
    parentBlankEarthSpotId = 0;
    v14->static_fields->_DispState_k__BackingField = 1;
  }
  if ( !v14->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v14);
  if ( !byte_4C1E9A2 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v7);
    byte_4C1E9A2 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_BlankEarthSpotId_k__BackingField = parentBlankEarthSpotId;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v7);
    byte_4C1CAE3 = 1;
  }
  v18 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v18 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v18->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C1CAE3 )
    {
      sub_1C3B764(&TerminalSceneComponent_TypeInfo, v8);
      byte_4C1CAE3 = 1;
    }
    v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v10->fields.mEventBgTexture->klass;
    if ( !klass )
      goto LABEL_109;
    v21 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C1CAE3 )
      {
        sub_1C3B764(&TerminalSceneComponent_TypeInfo, v8);
        byte_4C1CAE3 = 1;
      }
      v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      }
      v22 = v10->fields.mEventBgTexture->klass;
      if ( !v22 )
        goto LABEL_109;
      v23 = *(ScrTerminalListTop_o **)&v22->_2.static_fields_size;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1EA88 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
        byte_4C1EA88 = 1;
      }
      v10 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v10 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v23 )
        goto LABEL_109;
      ScrTerminalListTop__RequestChangeTerminalListBG(v23, HIDWORD(v10->fields.mEventBgTexture->klass), 0LL);
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C1CAE3 )
    {
      sub_1C3B764(&TerminalSceneComponent_TypeInfo, v8);
      byte_4C1CAE3 = 1;
    }
    v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    v24 = v10->fields.mEventBgTexture->klass;
    if ( !v24 )
      goto LABEL_109;
    v25 = *(UnityEngine_Object_o **)&v24->_2.instance_size;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C1CAE3 )
      {
        sub_1C3B764(&TerminalSceneComponent_TypeInfo, v8);
        byte_4C1CAE3 = 1;
      }
      v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      }
      v26 = v10->fields.mEventBgTexture->klass;
      if ( v26 )
      {
        v10 = *(TitleInfoControl_o **)&v26->_2.instance_size;
        if ( v10 )
        {
          TitleInfoControl__CloseEventBannerWindow(v10, 0LL);
          goto LABEL_102;
        }
      }
LABEL_109:
      sub_1C3B9C0(v10, v8);
    }
  }
LABEL_102:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CCCA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
    byte_4C1CCCA = 1;
  }
  v27 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_BYTE *)v27[2].virtualMethodPointer + 717) = 1;
  TerminalPramsManager__Save_SaveData(v27);
}


void __fastcall TerminalPramsManager__SetAutoResumeForFolder(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  TerminalPramsManager_c *v13; // x0
  int32_t PrioredParentId; // w20
  Il2CppObject *v15; // x0
  TerminalPramsManager_c *v16; // x0
  __int64 v17; // x1
  TerminalPramsManager_c *v18; // x0
  int32_t monitor_high; // w20
  TerminalPramsManager_c *v20; // x0
  TerminalSceneComponent_c *v21; // x0
  UnityEngine_Object_o *mInstance; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *klass; // x8
  UnityEngine_Object_o *v24; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v25; // x8
  ScrTerminalListTop_o *v26; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v27; // x8
  UnityEngine_Object_o *v28; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v29; // x8
  const MethodInfo *v30; // x0
  WarEntity_o *WarEntityByWarID; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C1F474 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_WarMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    sub_1C3B764(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v7);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v8);
    byte_4C1F474 = 1;
  }
  WarEntityByWarID = 0LL;
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1ECCE )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1ECCE = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4C1EA8F )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C1EA8F = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4C1EA8B )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C1EA8B = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_DispState_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( Instance )
  {
    entity = (Il2CppObject *)QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0LL);
    if ( entity )
      goto LABEL_25;
  }
  else
  {
    entity = 0LL;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_125;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    warId,
    (const MethodInfo_329AE94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( !entity )
    return;
LABEL_25:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F065 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v11);
    byte_4C1F065 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField = warId;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_125;
  PrioredParentId = WarEntity__GetPrioredParentId((WarEntity_o *)entity, 0LL);
  v15 = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( v15 )
  {
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)v15, PrioredParentId, 0LL);
    if ( WarEntityByWarID )
      goto LABEL_40;
  }
  else
  {
    WarEntityByWarID = 0LL;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_125;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    (Il2CppObject **)&WarEntityByWarID,
    PrioredParentId,
    (const MethodInfo_329AE94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( !WarEntityByWarID )
    return;
LABEL_40:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA8F )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v11);
    byte_4C1EA8F = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_WarId_k__BackingField = PrioredParentId;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarEntityByWarID;
  if ( !WarEntityByWarID )
    goto LABEL_125;
  if ( WarEntity__IsFolder(WarEntityByWarID, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EA8B )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v17);
      byte_4C1EA8B = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    v18->static_fields->_DispState_k__BackingField = 3;
  }
  if ( entity )
    monitor_high = HIDWORD(entity[7].monitor);
  else
    monitor_high = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1E9A2 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v17);
    byte_4C1E9A2 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  v20->static_fields->_BlankEarthSpotId_k__BackingField = monitor_high;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v17);
    byte_4C1CAE3 = 1;
  }
  v21 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v21 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v21->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
    goto LABEL_117;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v11);
    byte_4C1CAE3 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Master_object[2].fields.list->klass;
  if ( !klass )
    goto LABEL_125;
  v24 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C1CAE3 )
    {
      sub_1C3B764(&TerminalSceneComponent_TypeInfo, v11);
      byte_4C1CAE3 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v25 = Master_object[2].fields.list->klass;
    if ( !v25 )
      goto LABEL_125;
    v26 = *(ScrTerminalListTop_o **)&v25->_2.static_fields_size;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EA88 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v11);
      byte_4C1EA88 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v26 )
      goto LABEL_125;
    ScrTerminalListTop__RequestChangeTerminalListBG(v26, HIDWORD(Master_object[2].fields.list->klass), 0LL);
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v11);
    byte_4C1CAE3 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v27 = Master_object[2].fields.list->klass;
  if ( !v27 )
    goto LABEL_125;
  v28 = *(UnityEngine_Object_o **)&v27->_2.instance_size;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
    goto LABEL_117;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v11);
    byte_4C1CAE3 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v29 = Master_object[2].fields.list->klass;
  if ( !v29 || (Master_object = *(DataMasterBase_TMaster__TEntity__PKType__o **)&v29->_2.instance_size) == 0LL )
LABEL_125:
    sub_1C3B9C0(Master_object, v11);
  TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)Master_object, 0LL);
LABEL_117:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CCCA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v11);
    byte_4C1CCCA = 1;
  }
  v30 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_BYTE *)v30[2].virtualMethodPointer + 717) = 1;
  TerminalPramsManager__Save_SaveData(v30);
}


void __fastcall TerminalPramsManager__SetBattleResultCampaignBonus(
        BattleResultComponent_resultData_o *result,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleResultComponent_resultData_o *v8; // x19
  int64_t campaignDirectBonus; // x20
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  const MethodInfo *v12; // x0
  struct CommonUI_CampaignBonusData_array *campaignbonus; // x19

  v8 = result;
  if ( (byte_4C1F4B1 & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_o *)sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F4B1 = 1;
  }
  if ( !v8 )
    sub_1C3B9C0(result, method);
  campaignDirectBonus = (int64_t)v8->fields.campaignDirectBonus;
  if ( campaignDirectBonus && *(_QWORD *)(campaignDirectBonus + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F4E4 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
      byte_4C1F4E4 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)campaignDirectBonus;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
      campaignDirectBonus,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    TerminalPramsManager__CampaignDirectBonus_SaveData(v12);
  }
  campaignbonus = v8->fields.campaignbonus;
  if ( campaignbonus && *(_QWORD *)&campaignbonus->max_length )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SetCampaignBonus(campaignbonus, method);
  }
}


void __fastcall TerminalPramsManager__SetCampaignBonus(
        CommonUI_CampaignBonusData_array *campaignBonuses,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C1F49C & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F49C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F4E3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F4E3 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignBonus_k__BackingField = campaignBonuses;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_CampaignBonus_k__BackingField,
    (int64_t)campaignBonuses,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  TerminalPramsManager_c *v17; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x0
  __int64 v20; // x1
  TerminalPramsManager_c *v21; // x0

  if ( (byte_4C1F4A8 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&idx);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v6);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v7);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
    byte_4C1F4A8 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( !v9->static_fields->folderLastIdxs )
  {
    v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v10,
      (const MethodInfo_32EB708 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v17->static_fields;
    static_fields->folderLastIdxs = v10;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->folderLastIdxs,
      (int64_t)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  folderLastIdxs = v9->static_fields->folderLastIdxs;
  if ( !folderLastIdxs
    || (System_Collections_Generic_Dictionary_int__int___Remove(
          folderLastIdxs,
          warId,
          (const MethodInfo_32ED484 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__),
        (folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs) == 0LL) )
  {
    sub_1C3B9C0(folderLastIdxs, *(_QWORD *)&idx);
  }
  System_Collections_Generic_Dictionary_int__int___Add(
    folderLastIdxs,
    warId,
    idx,
    (const MethodInfo_32EC0CC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !byte_4C1F4D3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v20);
    byte_4C1F4D3 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  v21->static_fields->_LastSelectQuestIndex_k__BackingField = idx;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalPramsManager__SetQuestReleasedFocusState(
        int32_t questId,
        int32_t state,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v7; // x1

  if ( (byte_4C1F4AE & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, *(_QWORD *)&state);
    byte_4C1F4AE = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v5);
  if ( !QuestFocusStateManager )
    sub_1C3B9C0(0LL, v7);
  QuestFocusStateManager__SetFocusState(QuestFocusStateManager, questId, state, 0LL);
}


void __fastcall TerminalPramsManager__SetQuestRewardInfo(
        BattleResultComponent_resultData_array *result,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  PartyOrganizationUtility_o *p_mQuestRewardInfos; // x0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  BattleResultComponent_resultData_o *v19; // x8
  int64_t rewardInfos; // x20
  TerminalPramsManager_c *v21; // x0
  PartyOrganizationUtility_o *v22; // x0
  TerminalPramsManager_c *v23; // x0
  PartyOrganizationUtility_o *p_mQuestPhaseRewardInfos; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  BattleResultComponent_resultData_o *v31; // x8
  int64_t resultQuestPhaseRewardInfos; // x20
  TerminalPramsManager_c *v33; // x0
  PartyOrganizationUtility_o *v34; // x0
  TerminalPramsManager_c *v35; // x0
  PartyOrganizationUtility_o *p_mQuestResultAfterEventRewardInfos; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x8
  BattleResultComponent_resultData_o *v44; // x9
  int64_t resultAfterEventRewardInfos; // x20
  TerminalPramsManager_c *v46; // x0
  PartyOrganizationUtility_o *v47; // x0
  BattleResultComponent_resultData_o *v48; // x8
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t resultUseRewardAddItemRewardInfos; // x20
  BattleResultComponent_resultData_o *v56; // x8
  TerminalPramsManager_c *v57; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F4B2 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F4B2 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (PartyOrganizationUtility_o *)&v9->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0LL;
  sub_1C3B708(p_mQuestRewardInfos, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !result )
    goto LABEL_44;
  if ( !result->max_length )
    goto LABEL_45;
  v19 = result->m_Items[0];
  if ( !v19 )
    goto LABEL_44;
  rewardInfos = (int64_t)v19->fields.rewardInfos;
  if ( rewardInfos && *(_QWORD *)(rewardInfos + 24) )
  {
    v21 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v21 = TerminalPramsManager_TypeInfo;
    }
    v22 = (PartyOrganizationUtility_o *)&v21->static_fields->mQuestRewardInfos;
    v22->klass = (PartyOrganizationUtility_c *)rewardInfos;
    sub_1C3B708(v22, rewardInfos, v13, v14, v15, v16, v17, v18);
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = (PartyOrganizationUtility_o *)&v23->static_fields->mQuestPhaseRewardInfos;
  p_mQuestPhaseRewardInfos->klass = 0LL;
  sub_1C3B708(p_mQuestPhaseRewardInfos, 0LL, v13, v14, v15, v16, v17, v18);
  if ( !result->max_length )
    goto LABEL_45;
  v31 = result->m_Items[0];
  if ( !v31 )
    goto LABEL_44;
  resultQuestPhaseRewardInfos = (int64_t)v31->fields.resultQuestPhaseRewardInfos;
  if ( resultQuestPhaseRewardInfos && *(_QWORD *)(resultQuestPhaseRewardInfos + 24) )
  {
    v33 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v33 = TerminalPramsManager_TypeInfo;
    }
    v34 = (PartyOrganizationUtility_o *)&v33->static_fields->mQuestPhaseRewardInfos;
    v34->klass = (PartyOrganizationUtility_c *)resultQuestPhaseRewardInfos;
    sub_1C3B708(v34, resultQuestPhaseRewardInfos, v25, v26, v27, v28, v29, v30);
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestResultAfterEventRewardInfos = (PartyOrganizationUtility_o *)&v35->static_fields->mQuestResultAfterEventRewardInfos;
  p_mQuestResultAfterEventRewardInfos->klass = 0LL;
  sub_1C3B708(p_mQuestResultAfterEventRewardInfos, 0LL, v25, v26, v27, v28, v29, v30);
  v43 = *(_QWORD *)&result->max_length;
  if ( !(_DWORD)v43 )
    goto LABEL_45;
  v44 = result->m_Items[0];
  if ( !v44 )
    goto LABEL_44;
  resultAfterEventRewardInfos = (int64_t)v44->fields.resultAfterEventRewardInfos;
  if ( resultAfterEventRewardInfos && *(_QWORD *)(resultAfterEventRewardInfos + 24) )
  {
    v46 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v46 = TerminalPramsManager_TypeInfo;
    }
    v47 = (PartyOrganizationUtility_o *)&v46->static_fields->mQuestResultAfterEventRewardInfos;
    v47->klass = (PartyOrganizationUtility_c *)resultAfterEventRewardInfos;
    sub_1C3B708(v47, resultAfterEventRewardInfos, v37, v38, v39, v40, v41, v42);
    v43 = *(_QWORD *)&result->max_length;
  }
  if ( !(_DWORD)v43 )
    goto LABEL_45;
  v48 = result->m_Items[0];
  if ( !v48 )
    goto LABEL_44;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)v48->fields.resultUseRewardAddItemRewardInfos,
                    0LL);
  resultUseRewardAddItemRewardInfos = 0LL;
  if ( IsNullOrEmpty )
    goto LABEL_37;
  if ( !result->max_length )
LABEL_45:
    sub_1C3B9C8(IsNullOrEmpty, v12);
  v56 = result->m_Items[0];
  if ( !v56 )
LABEL_44:
    sub_1C3B9C0(IsNullOrEmpty, v12);
  resultUseRewardAddItemRewardInfos = (int64_t)v56->fields.resultUseRewardAddItemRewardInfos;
LABEL_37:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CBC7 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v12);
    byte_4C1CBC7 = 1;
  }
  v57 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v57->static_fields;
  static_fields->_UseAddRewardItemRewardInfos_k__BackingField = (struct QuestRewardInfo_array *)resultUseRewardAddItemRewardInfos;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_UseAddRewardItemRewardInfos_k__BackingField,
    resultUseRewardAddItemRewardInfos,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
}


void __fastcall TerminalPramsManager__SetWarStartedId(int32_t war_id, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  System_String_o *mTerminalWarStartedIds; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v16 = war_id;
  if ( (byte_4C1F4A6 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_43/*"\n"*/, v3);
    byte_4C1F4A6 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsWarStartedId(war_id, method) )
  {
    v4 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    mTerminalWarStartedIds = v4->static_fields->mTerminalWarStartedIds;
    v6 = System_Int32__ToString((int32_t)&v16, 0LL);
    v7 = System_String__Concat_63379872(mTerminalWarStartedIds, v6, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
    static_fields->mTerminalWarStartedIds = v7;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->mTerminalWarStartedIds,
      (int64_t)v7,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    TerminalPramsManager__Save_SaveData(v15);
  }
}


void __fastcall TerminalPramsManager__SpotIdSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F481 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_13911/*"The table [{0}] involved in more than one relation. You must explicitly mention a relation name in the expression '{1}'."*/, v2);
    byte_4C1F481 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EC68 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1EC68 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13911/*"The table [{0}] involved in more than one relation. You must explicitly mention a relation name in the expression '{1}'."*/,
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

  if ( (byte_4C1F487 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_13895/*"The string for white space contains an invalid character."*/, v2);
    sub_1C3B764(&StringLiteral_13896/*"The string must be null-terminated."*/, v3);
    byte_4C1F487 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F4EA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F4EA = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13895/*"The string for white space contains an invalid character."*/,
    v4->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_4C1F4EB )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    byte_4C1F4EB = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13896/*"The string must be null-terminated."*/,
    v6->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfoDispSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F48C & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11675/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, v2);
    byte_4C1F48C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11675/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, v3->static_fields->eventConquestInfoDisp, 0LL);
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

  if ( (byte_4C1F48B & 1) == 0 )
  {
    sub_1C3B764(&EventConquestInfo___TypeInfo, v1);
    sub_1C3B764(&JsonManager_TypeInfo, v2);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_11676/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, v4);
    sub_1C3B764(&StringLiteral_11675/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, v5);
    byte_4C1F48B = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = v6->static_fields->eventConquestInfos;
  if ( eventConquestInfos )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      eventConquestInfos = TerminalPramsManager_TypeInfo->static_fields->eventConquestInfos;
    }
  }
  else
  {
    eventConquestInfos = (struct EventConquestInfo_array *)sub_1C3B80C(EventConquestInfo___TypeInfo, 0LL);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(&eventConquestInfos->obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11676/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, v8, 0LL);
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11675/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, v9->static_fields->eventConquestInfoDisp, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F48D & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11677/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/, v2);
    byte_4C1F48D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11677/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/, v3->static_fields->eventCraftInfoDisp, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  Il2CppObject *eventHarvestGrowthInfo; // x19
  System_String_o *v7; // x0

  if ( (byte_4C1F48E & 1) == 0 )
  {
    sub_1C3B764(&EventHarvestGrowthInfo_TypeInfo, v1);
    sub_1C3B764(&JsonManager_TypeInfo, v2);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_11678/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, v4);
    byte_4C1F48E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  eventHarvestGrowthInfo = (Il2CppObject *)v5->static_fields->eventHarvestGrowthInfo;
  if ( eventHarvestGrowthInfo )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      eventHarvestGrowthInfo = (Il2CppObject *)TerminalPramsManager_TypeInfo->static_fields->eventHarvestGrowthInfo;
    }
  }
  else
  {
    eventHarvestGrowthInfo = (Il2CppObject *)sub_1C3B9B0(EventHarvestGrowthInfo_TypeInfo);
    System_Object___ctor(eventHarvestGrowthInfo, 0LL);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__toJson(eventHarvestGrowthInfo, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11678/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, v7, 0LL);
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

  if ( (byte_4C1F489 & 1) == 0 )
  {
    sub_1C3B764(&JsonManager_TypeInfo, v1);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v2);
    sub_1C3B764(&StringLiteral_13897/*"The string was being parsed as an unsigned number and could not have a negative sign."*/, v3);
    byte_4C1F489 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EB7C )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1EB7C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
  {
    if ( !v4->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v4);
    if ( !byte_4C1EB7C )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
      byte_4C1EB7C = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    BeforeEventSubmarineSaveData_k__BackingField = (Il2CppObject *)v5->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v7 = JsonManager__toJson(BeforeEventSubmarineSaveData_k__BackingField, 0, 0, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13897/*"The string was being parsed as an unsigned number and could not have a negative sign."*/, v7, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F496 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11680/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, v2);
    byte_4C1F496 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F03F )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F03F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11680/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/,
    v3->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F495 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11681/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/, v2);
    byte_4C1F495 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F209 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F209 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11681/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/,
    v3->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalTransitionInfoSave_SaveData(
        TerminalTransitionInfo_o *terminalTransitionInfo,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4C1F486 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_13917/*"The task has been disposed."*/, method);
    sub_1C3B764(&StringLiteral_13916/*"The targetNamespace parameter '{0}' should be the same value as the targetNamespace '{1}' of the schema."*/, v3);
    byte_4C1F486 = 1;
  }
  if ( terminalTransitionInfo )
  {
    UnityEngine_PlayerPrefs__SetInt(
      (System_String_o *)StringLiteral_13916/*"The targetNamespace parameter '{0}' should be the same value as the targetNamespace '{1}' of the schema."*/,
      terminalTransitionInfo->fields.missionId,
      0LL);
    UnityEngine_PlayerPrefs__SetString(
      (System_String_o *)StringLiteral_13917/*"The task has been disposed."*/,
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
  System_Collections_Generic_Dictionary_int__object__o *v11; // x0
  __int64 v12; // x8
  System_Collections_Generic_List_int__o *v13; // x21
  __int64 v14; // x8
  Il2CppClass *klass; // x8
  _QWORD *v16; // x9
  __int64 entries_low; // x10
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C1F4BF & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, *(_QWORD *)&day);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v10);
    byte_4C1F4BF = 1;
  }
  value = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F502 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    byte_4C1F502 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  }
  v12 = *(_QWORD *)&v11[2].fields._entries->m_Items[17].fields.hashCode;
  if ( !v12 )
    goto LABEL_30;
  v11 = *(System_Collections_Generic_Dictionary_int__object__o **)(v12 + 16);
  if ( !v11 )
    goto LABEL_30;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          v11,
          eventId,
          &value,
          (const MethodInfo_32F6328 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v13 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v13,
      (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
    value = (Il2CppObject *)v13;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F502 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
      byte_4C1F502 = 1;
    }
    v11 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
    }
    v14 = *(_QWORD *)&v11[2].fields._entries->m_Items[17].fields.hashCode;
    if ( v14 )
    {
      v11 = *(System_Collections_Generic_Dictionary_int__object__o **)(v14 + 16);
      if ( v11 )
      {
        System_Collections_Generic_Dictionary_int__object___Add(
          v11,
          eventId,
          value,
          (const MethodInfo_32F4B9C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        goto LABEL_24;
      }
    }
LABEL_30:
    sub_1C3B9C0(v11, *(_QWORD *)&day);
  }
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)value,
         day,
         (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return;
  }
LABEL_24:
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  klass = value[1].klass;
  v16 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(value[1].monitor);
  if ( !klass )
    goto LABEL_30;
  entries_low = SLODWORD(v11->fields._entries);
  if ( (unsigned int)entries_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)v11,
      day,
      *(const MethodInfo_366EC48 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(v11->fields._entries) = entries_low + 1;
    *((_DWORD *)&klass->_1.byval_arg.data + entries_low) = day;
  }
}


int32_t __fastcall TerminalPramsManager__get_AfterActionFocusQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F380 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F380 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3A2 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3A2 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  int32_t *p_QuestId_k__BackingField; // x8
  TerminalPramsManager_c *v11; // x0

  if ( (byte_4C1F3DA & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v2);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v3);
    byte_4C1F3DA = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__checkNowScene(Instance, 34, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C1CAE3 )
    {
      sub_1C3B764(&TerminalSceneComponent_TypeInfo, v5);
      byte_4C1CAE3 = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
    }
    v6 = **(_QWORD **)&Instance[1].fields.fadeType;
    if ( !v6 )
      goto LABEL_31;
    v7 = *(_QWORD *)(v6 + 264);
    if ( !v7 )
      goto LABEL_31;
    if ( *(_DWORD *)(v7 + 420) )
    {
      if ( !Instance[2].fields.m_CachedPtr )
        j_il2cpp_runtime_class_init_0(Instance);
      if ( !byte_4C1CAE3 )
      {
        sub_1C3B764(&TerminalSceneComponent_TypeInfo, v5);
        byte_4C1CAE3 = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v8 = **(_QWORD **)&Instance[1].fields.fadeType;
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 264);
        if ( v9 )
        {
          p_QuestId_k__BackingField = (int32_t *)(v9 + 420);
          return *p_QuestId_k__BackingField;
        }
      }
LABEL_31:
      sub_1C3B9C0(Instance, v5);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    byte_4C1CBC4 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3F5 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3F5 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3F7 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3F7 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3FB & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3FB = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BeforeQuestStartWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F460 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F460 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_BeforeQuestStartWarId_k__BackingField;
}


int64_t __fastcall TerminalPramsManager__get_BeforeTimeEventDailyPoint(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F3E9 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3E9 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F41B & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F41B = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F41F & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F41F = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F419 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F419 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F41D & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F41D = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_BlankEarthTransformData_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_CaldeaGateFolderFocusWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F42F & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F42F = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField;
}


CommonUI_CampaignBonusData_array *__fastcall TerminalPramsManager__get_CampaignBonus(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F3C0 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3C0 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_CampaignBonus_k__BackingField;
}


CommonUI_CampaignDirectBonusData_array *__fastcall TerminalPramsManager__get_CampaignDirectBonus(
        const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F3C2 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3C2 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3F3 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3F3 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_ClearEventQuestIds_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_CurrentWaveNum(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F431 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F431 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_CurrentWaveNum_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_DataLostBattleEventId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F3AE & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3AE = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3B6 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3B6 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3B0 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3B0 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F35E & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F35E = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3A4 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3A4 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_EndTime_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventActionQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F3C4 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3C4 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_EventActionQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventActivityPointEffectState(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F3F9 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3F9 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F401 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F401 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3EB & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3EB = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3E7 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3E7 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F38E & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F38E = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3FD & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3FD = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F425 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F425 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_EventUIEffectClearQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventUiWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F462 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F462 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_EventUiWarId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_FriendshipQuestDialogOpenId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F456 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F456 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_FriendshipQuestDialogOpenId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoFolder(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F444 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F444 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F448 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F448 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F46E & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F46E = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F43E & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F43E = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F440 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F440 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsAutoShortcut_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsBackQuestBoardDisable(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F45E & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F45E = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsBackQuestBoardDisable_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsBlankEarthShortcutMoving(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F421 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F421 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F44A & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F44A = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3AC & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3AC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3B8 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3B8 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3B4 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3B4 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDirectTransition(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F42B & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F42B = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsDirectTransition_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispDone_AutoWebView(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F382 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F382 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F384 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F384 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F396 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F396 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F386 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F386 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F36C & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F36C = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsDoneShortcut_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsErrorDialogReturnTerminal(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F466 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F466 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsErrorDialogReturnTerminal_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsEventBoardGameDiceBtnActive(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F403 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F403 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F374 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F374 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F372 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F372 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F436 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F436 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->isInvisibleConnectAndLoad;
}


bool __fastcall TerminalPramsManager__get_IsMainInterludeWarClear(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F38C & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F38C = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsMainInterludeWarClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsMapReturnFolder(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F442 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F442 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsMapReturnFolder_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsMoveFolderByQuestAfterAction(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F446 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F446 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsOrdealCallWarClear(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F38A & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F38A = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F394 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F394 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F39A & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F39A = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F405 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F405 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayGetEffect(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F3BC & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3BC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsPlayGetEffect_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayScriptWithMap(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F398 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F398 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F413 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F413 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F415 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F415 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F417 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F417 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3BA & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3BA = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F392 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F392 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F39C & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F39C = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsScriptDisp_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsSkipNoticeLoginQuestAtOnce(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F45C & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F45C = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsStopMasterFaceOverwrite(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F3B2 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3B2 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F44C & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F44C = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsTransOrdealCall(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F429 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F429 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsTransOrdealCall_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsWarBoardClear(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F3A6 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3A6 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F388 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F388 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F37C & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F37C = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F37A & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F37A = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F37E & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F37E = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_LastSelectQuestIndex_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_LimitCountUnSealQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F458 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F458 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_LimitCountUnSealQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MapModelClearPhaseCount(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F3AA & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3AA = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3A8 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3A8 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_MapModelClearQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MasterMissionTargetType(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F470 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F470 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_MasterMissionTargetType_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MessageDispType(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F39E & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F39E = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F423 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F423 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_NoticeLastModified_k__BackingField;
}


UserEventPointEntity_array *__fastcall TerminalPramsManager__get_OldUserEventPoint(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F433 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F433 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_OldUserEventPoint_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_PhaseCnt(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F36A & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F36A = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_PhaseCnt_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_PlayHappinessCounterEffect(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F390 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F390 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_PlayHappinessCounterEffect_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_PlayedTerminalEffects(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F411 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F411 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3BE & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3BE = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_PlayerGenderType_k__BackingField;
}


QuestFocusStateManager_o *__fastcall TerminalPramsManager__get_QuestFocusStateManager(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  QuestFocusStateManager_o *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  TerminalPramsManager_c *v11; // x0
  PartyOrganizationUtility_o *p_questFocusStateManager; // x0

  if ( (byte_4C1F435 & 1) == 0 )
  {
    sub_1C3B764(&QuestFocusStateManager_TypeInfo, v1);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v2);
    byte_4C1F435 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->questFocusStateManager )
  {
    v4 = (QuestFocusStateManager_o *)sub_1C3B9B0(QuestFocusStateManager_TypeInfo);
    QuestFocusStateManager___ctor(v4, 0LL);
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    p_questFocusStateManager = (PartyOrganizationUtility_o *)&v11->static_fields->questFocusStateManager;
    p_questFocusStateManager->klass = (PartyOrganizationUtility_c *)v4;
    sub_1C3B708(p_questFocusStateManager, (int64_t)v4, v5, v6, v7, v8, v9, v10);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->questFocusStateManager;
}


int32_t __fastcall TerminalPramsManager__get_QuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F368 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F368 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F44E & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F44E = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F450 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F450 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F40F & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F40F = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_QuestRandomGroupList_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_QuestReleaseFocusQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F376 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F376 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_QuestReleaseFocusQuestId_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_QuestWindowMessage(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F3A0 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3A0 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F427 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F427 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F378 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F378 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F370 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F370 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F36E & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F36E = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_SelectedStoryQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_ShopFocusItemId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F42D & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F42D = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_ShopFocusItemId_k__BackingField;
}


SpecifiedSceneInfo_o *__fastcall TerminalPramsManager__get_SpecifiedChangeSceneInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F3C8 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3C8 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F366 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F366 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_SpotId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SummonId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F364 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F364 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_SummonId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SummonType(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F362 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F362 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F452 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F452 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3EF & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3EF = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3F1 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3F1 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_TimeStatusLoopCount_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_TransitionScrollTabName(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F464 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F464 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_TransitionScrollTabName_k__BackingField;
}


QuestRewardInfo_array *__fastcall TerminalPramsManager__get_UseAddRewardItemRewardInfos(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F468 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F468 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
}


WarBoardDataEntity_o *__fastcall TerminalPramsManager__get_WarBoardData(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F407 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F407 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F360 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F360 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  float ZOOM_DEFAULT; // s8

  if ( (byte_4C1F3C6 & 1) == 0 )
  {
    sub_1C3B764(&MapZoom_TypeInfo, v1);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v2);
    byte_4C1F3C6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->mZoomSize <= 0.0 )
  {
    v4 = MapZoom_TypeInfo;
    if ( !MapZoom_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
      v4 = MapZoom_TypeInfo;
      v3 = TerminalPramsManager_TypeInfo;
    }
    ZOOM_DEFAULT = v4->static_fields->ZOOM_DEFAULT;
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = TerminalPramsManager_TypeInfo;
    }
    v3->static_fields->mZoomSize = ZOOM_DEFAULT;
  }
  if ( !v3->_2.cctor_finished )
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

  if ( (byte_4C1F3E5 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3E5 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3D0 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3D0 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3CE & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3CE = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3D2 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3D2 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3DB & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3DB = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_eventTowerReward_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isFortificationCheck(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F40B & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F40B = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3FF & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3FF = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F40D & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F40D = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_isPlayRiverActionCheck_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isQuestRewardSetted(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F43C & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F43C = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F409 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F409 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_isWarBoardPlay_k__BackingField;
}


LimitImageAnnounce_array *__fastcall TerminalPramsManager__get_limitImageAnnounces(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C1F454 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F454 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3CC & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3CC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3D8 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3D8 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3CA & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3CA = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3D6 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3D6 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3D4 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3D4 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3DF & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3DF = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3E1 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3E1 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3DD & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3DD = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3E3 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3E3 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F45A & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F45A = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3ED & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F3ED = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F479 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v1);
    byte_4C1F479 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->meSceneStatus;
}


void __fastcall TerminalPramsManager__mfSetSceneStatus(int32_t eSceneStatus, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F478 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F478 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->meSceneStatus = eSceneStatus;
}


void __fastcall TerminalPramsManager__set_AfterActionFocusQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F381 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F381 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_AfterActionFocusQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BattleSetupKeep(BattleSetupInfo_o *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C1F3A3 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3A3 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BattleSetupKeep_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_BattleSetupKeep_k__BackingField,
    (int64_t)value,
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

  if ( (byte_4C1F3F6 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3F6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeEventActivityPoint_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BeforeEventActivityPointGauge(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F3F8 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3F8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F3FC & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3FC = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BeforeEventSubmarineSaveData_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_BeforeEventSubmarineSaveData_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_BeforeQuestStartWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F461 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F461 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeQuestStartWarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BeforeTimeEventDailyPoint(int64_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F3EA & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3EA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BlankEarthAfterActionFocusSpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F41C & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F41C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BlankEarthRank(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F420 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F420 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BlankEarthRank_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BlankEarthSpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F41A & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F41A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F41E & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F41E = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BlankEarthTransformData_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_BlankEarthTransformData_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_CaldeaGateFolderFocusWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F430 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F430 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_CampaignBonus(
        CommonUI_CampaignBonusData_array *value,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C1F3C1 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3C1 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignBonus_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_CampaignBonus_k__BackingField,
    (int64_t)value,
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C1F3C3 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3C3 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_ClearEventQuestIds(System_String_o *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F3F4 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3F4 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_ClearEventQuestIds_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_ClearEventQuestIds_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_CurrentWaveNum(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F432 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F432 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_CurrentWaveNum_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_DataLostBattleEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F3AF & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3AF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3B7 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v2);
    byte_4C1F3B7 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_DataLostBattleWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F3B1 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3B1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DataLostBattleWarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_Debug_IsBuildInfoDisp(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F43B & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F43B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mDebug_IsBuildInfoDisp = value;
}


void __fastcall TerminalPramsManager__set_Debug_IsDummyErrorSelect(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F43A & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F43A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mDebug_IsDummyErrorSelect = value;
}


void __fastcall TerminalPramsManager__set_Debug_IsQuestReleaseAll(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F438 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F438 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mDebug_IsQuestReleaseAll = value;
}


void __fastcall TerminalPramsManager__set_Debug_IsWarStartActionSkip(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F439 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F439 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mDebug_IsWarStartActionSkip = value;
}


void __fastcall TerminalPramsManager__set_DispState(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F35F & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F35F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DispState_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EndTime(int64_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F3A5 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3A5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EndTime_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventActionQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F3C5 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3C5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventActionQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventActivityPointEffectState(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F3FA & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3FA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventActivityPointEffectState_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventBoardGameSquareIndex(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F402 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F402 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventBoardGameSquareIndex_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventDailyPointEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F3EC & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3EC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventDailyPointEventId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventDailyPointItem(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F3E8 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3E8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventDailyPointItem_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventMuralId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F38F & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F38F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F3FE & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3FE = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
    (int64_t)value,
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

  if ( (byte_4C1F426 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F426 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventUIEffectClearQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventUiWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F463 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F463 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventUiWarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_FriendshipQuestDialogOpenId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F457 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F457 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_FriendshipQuestDialogOpenId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsAutoFolder(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F445 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F445 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoFolder_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsAutoNoSe(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F449 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F449 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoNoSe_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsAutoOpenMasterMission(bool value, const MethodInfo *method)
{
  bool v3; // w19
  TerminalPramsManager_c *v4; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F46F & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F46F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v3 = value;
  if ( !byte_4C1CCCA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1CCCA = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  static_fields->_IsAutoResume_k__BackingField = v3;
  static_fields->mIsAutoOpenMasterMission = v3;
}


void __fastcall TerminalPramsManager__set_IsAutoResume(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F43F & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F43F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsAutoShortcut(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F441 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F441 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoShortcut_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsBackQuestBoardDisable(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F45F & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F45F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsBackQuestBoardDisable_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsBlankEarthShortcutMoving(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F422 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F422 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsBlankEarthShortcutMoving_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsCheckHomeExpirationDateEventMap(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F44B & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F44B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->isCheckHomeExpirationDateEventMap = value;
}


void __fastcall TerminalPramsManager__set_IsDataLostBattleAutoReset(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F3AD & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3AD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDataLostBattleAutoReset_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDataLostBattleNoticePause(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F3B9 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3B9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDataLostBattleNoticePause_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDataLostBattleResetFadeIn(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F3B5 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3B5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDirectTransition(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F42C & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F42C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDirectTransition_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDispDone_AutoWebView(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F383 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F383 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispDone_AutoWebView_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDispDone_UIStandFigure(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F385 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F385 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispDone_UIStandFigure_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDispOnly(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F397 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F397 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispOnly_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDispUIStandFigure(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F387 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F387 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispUIStandFigure_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDoneShortcut(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F36D & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F36D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDoneShortcut_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsErrorDialogReturnTerminal(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F467 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F467 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsErrorDialogReturnTerminal_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsEventBoardGameDiceBtnActive(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F404 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F404 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsForceFocusTerminalQuestId(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F375 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F375 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsFromRecollectionBoard(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F373 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F373 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsFromRecollectionBoard_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsInvisibleConnectAndLoad(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F437 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F437 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->isInvisibleConnectAndLoad = value;
}


void __fastcall TerminalPramsManager__set_IsMainInterludeWarClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F38D & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F38D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsMainInterludeWarClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsMapReturnFolder(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F443 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F443 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsMapReturnFolder_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsMoveFolderByQuestAfterAction(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F447 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F447 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsOrdealCallWarClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F38B & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F38B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPhaseClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F395 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F395 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPhaseClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayEventBoardGameArrivalEffectAuto(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F39B & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F39B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayEventBoardGameDiceBtnActiveEffect(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F406 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F406 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayGetEffect(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F3BD & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3BD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayGetEffect_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayScriptWithMap(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F399 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F399 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayScriptWithMap_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayTerminalEffectDisappear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F414 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F414 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayTerminalEffectDisappearWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F416 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F416 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayTerminalEffectNt2AfterAction(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F418 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F418 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayedEntryBanner(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F3BB & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3BB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayedEntryBanner_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsQuestClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F393 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F393 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsQuestClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsScriptDisp(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F39D & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F39D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsScriptDisp_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsSkipNoticeLoginQuestAtOnce(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F45D & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F45D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsStopMasterFaceOverwrite(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F3B3 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3B3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsTopLastIdxNextBoardRequest(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F44D & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F44D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsTransOrdealCall(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F42A & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F42A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsTransOrdealCall_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsWarBoardClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F3A7 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3A7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsWarBoardClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsWarClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F389 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F389 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsWarClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_LastPlayedFreeQuestSpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F37D & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F37D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_LastPlayedQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F37B & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F37B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayedQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_LastSelectQuestIndex(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F37F & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F37F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastSelectQuestIndex_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_LimitCountUnSealQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F459 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F459 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LimitCountUnSealQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_MapModelClearPhaseCount(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F3AB & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3AB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_MapModelClearPhaseCount_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_MapModelClearQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F3A9 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3A9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_MapModelClearQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_MasterMissionTargetType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F471 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F471 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_MasterMissionTargetType_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_MessageDispType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F39F & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F39F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_MessageDispType_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_NoticeLastModified(System_String_o *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F424 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F424 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_NoticeLastModified_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_NoticeLastModified_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_OldUserEventPoint(
        UserEventPointEntity_array *value,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F434 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F434 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_OldUserEventPoint_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_OldUserEventPoint_k__BackingField,
    (int64_t)value,
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

  if ( (byte_4C1F36B & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F36B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_PhaseCnt_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_PlayHappinessCounterEffect(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F391 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F391 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_PlayHappinessCounterEffect_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_PlayedTerminalEffects(System_String_o *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F412 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F412 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_PlayedTerminalEffects_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_PlayedTerminalEffects_k__BackingField,
    (int64_t)value,
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

  if ( (byte_4C1F3BF & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3BF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_PlayerGenderType_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_QuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F369 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F369 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_QuestMessageScriptQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F44F & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F44F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestMessageScriptQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_QuestMessageScriptQuestPhase(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F451 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F451 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F410 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F410 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_QuestRandomGroupList_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_QuestRandomGroupList_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_QuestReleaseFocusQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F377 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F377 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestReleaseFocusQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_QuestWindowMessage(System_String_o *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C1F3A1 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3A1 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_QuestWindowMessage_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_SceneMoveQuestClearedInfo(System_String_o *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F428 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F428 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SceneMoveQuestClearedInfo_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_SceneMoveQuestClearedInfo_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_SelectedBannerEntity(BannerEntity_o *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C1F379 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F379 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    (int64_t)value,
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

  if ( (byte_4C1F371 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F371 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SelectedRecollectionWarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_SelectedStoryQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F36F & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F36F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SelectedStoryQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_ShopFocusItemId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F42E & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F42E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_ShopFocusItemId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_SpecifiedChangeSceneInfo(
        SpecifiedSceneInfo_o *value,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C1F3C9 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3C9 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SpecifiedChangeSceneInfo_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
    (int64_t)value,
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

  if ( (byte_4C1F367 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F367 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SpotId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_SummonId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F365 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F365 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SummonId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_SummonType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F363 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F363 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F453 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F453 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_TalkScriptInfo_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_TalkScriptInfo_k__BackingField,
    (int64_t)value,
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

  if ( (byte_4C1F3F0 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3F0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_TimeStatusEventId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_TimeStatusLoopCount(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F3F2 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3F2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_TimeStatusLoopCount_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_TransitionScrollTabName(System_String_o *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F465 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F465 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_TransitionScrollTabName_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_TransitionScrollTabName_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_UseAddRewardItemRewardInfos(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F469 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F469 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_UseAddRewardItemRewardInfos_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_UseAddRewardItemRewardInfos_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_WarBoardData(WarBoardDataEntity_o *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F408 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F408 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_WarBoardData_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_WarBoardData_k__BackingField,
    (int64_t)value,
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

  if ( (byte_4C1F361 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F361 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C1F3C7 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v2);
    byte_4C1F3C7 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->mZoomSize = value;
}


void __fastcall TerminalPramsManager__set_eventDailyPoint(EventDailyPoint_o *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F3E6 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3E6 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventDailyPoint_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_eventDailyPoint_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_eventPointWinReward(EventPointWinReward_o *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F3D1 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3D1 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventPointWinReward_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_eventPointWinReward_k__BackingField,
    (int64_t)value,
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

  if ( (byte_4C1F3CF & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3CF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_eventPointWinType_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_eventRaceBoost(EventRaceBoostInfo_o *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F3D3 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3D3 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventRaceBoost_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_eventRaceBoost_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_eventTowerReward(EventTowerReward_o *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F3DC & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3DC = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventTowerReward_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_eventTowerReward_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_isFortificationCheck(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F40C & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F40C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isFortificationCheck_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isIncomingCall(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F400 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F400 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isIncomingCall_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isPlayRiverActionCheck(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F40E & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F40E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isPlayRiverActionCheck_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isQuestRewardSetted(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F43D & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F43D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isQuestRewardSetted_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isWarBoardPlay(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C1F40A & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F40A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isWarBoardPlay_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_limitImageAnnounces(
        LimitImageAnnounce_array *value,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F455 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F455 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_limitImageAnnounces_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_limitImageAnnounces_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_oldPersonalBoss(UserSuperBossEntity_array *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C1F3CD & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3CD = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_oldPersonalBoss_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_oldPersonalBoss_k__BackingField,
    (int64_t)value,
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

  if ( (byte_4C1F3D9 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3D9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_oldSuperBoss(UserSuperBossEntity_array *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C1F3CB & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3CB = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_oldSuperBoss_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_oldSuperBoss_k__BackingField,
    (int64_t)value,
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F3D7 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3D7 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_questClearCostumeGet_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_questClearCostumeGet_k__BackingField,
    (int64_t)value,
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F3D5 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3D5 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_questClearCostumeRelease_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_questClearCostumeRelease_k__BackingField,
    (int64_t)value,
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F3E0 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3E0 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_resultBoostItemRewardInfo_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_resultBoostItemRewardInfo_k__BackingField,
    (int64_t)value,
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  PartyOrganizationUtility_o *static_fields; // x8

  if ( (byte_4C1F3E2 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3E2 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (PartyOrganizationUtility_o *)v9->static_fields;
  static_fields[2].klass = (PartyOrganizationUtility_c *)value;
  sub_1C3B708(static_fields + 2, (int64_t)value, v2, v3, v4, v5, v6, v7);
}


void __fastcall TerminalPramsManager__set_resultEventTowerRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F3DE & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3DE = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_resultEventTowerRewardInfo_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_resultEventTowerRewardInfo_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_timeStatusRecord(TimeStatusRecord_o *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F3E4 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3E4 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_timeStatusRecord_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_timeStatusRecord_k__BackingField,
    (int64_t)value,
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F45B & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F45B = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_updateProfileInfoEntity_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_updateProfileInfoEntity_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_warClearReward(WarClearReward_array *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C1F3EE & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F3EE = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_warClearReward_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->_warClearReward_k__BackingField,
    (int64_t)value,
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4C1F50A & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_13572/*"The XmlReader should not be on a node of type {0}."*/, v8);
    byte_4C1F50A = 1;
  }
  TerminalPramsManager_ClearData_TypeInfo->static_fields->SAVEKEY_CLEAR_REWARD_DISP = (struct System_String_o *)StringLiteral_13572/*"The XmlReader should not be on a node of type {0}."*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)TerminalPramsManager_ClearData_TypeInfo->static_fields,
    StringLiteral_13572/*"The XmlReader should not be on a node of type {0}."*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager_ClearData___ctor(TerminalPramsManager_ClearData_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  TerminalPramsManager_c *v93; // x0
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7

  if ( (byte_4C1F508 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F508 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.qClearHeroineInfo = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.questRewardInfos = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.questRewardInfos, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.questPhaseRewardInfos = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.questPhaseRewardInfos, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.questResultAfterEventRewardInfos = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.questResultAfterEventRewardInfos,
    0LL,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.resultEventPanelRewardInfos = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.resultEventPanelRewardInfos,
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mOldSuperBoss, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.oldPersonalBoss = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.oldPersonalBoss, 0LL, v39, v40, v41, v42, v43, v44);
  this->fields.evPointWinReward = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.evPointWinReward, 0LL, v45, v46, v47, v48, v49, v50);
  this->fields.evPointWinType = 0;
  this->fields.evRaceBoost = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.evRaceBoost, 0LL, v51, v52, v53, v54, v55, v56);
  this->fields.questClearCostume = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.questClearCostume, 0LL, v57, v58, v59, v60, v61, v62);
  this->fields.questClearCostumeGetInfo = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.questClearCostumeGetInfo, 0LL, v63, v64, v65, v66, v67, v68);
  this->fields.eventTowerReward = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.eventTowerReward, 0LL, v69, v70, v71, v72, v73, v74);
  this->fields.resultEventTowerRewardInfo = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.resultEventTowerRewardInfo, 0LL, v75, v76, v77, v78, v79, v80);
  this->fields.warClearReward = 0LL;
  this->fields.isDispOnly = 0;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.warClearReward, 0LL, v81, v82, v83, v84, v85, v86);
  v93 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v93 = TerminalPramsManager_TypeInfo;
  }
  this->fields.EventActivityPointEffectState = v93->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  this->fields.limitImageAnnounces = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.limitImageAnnounces, 0LL, v87, v88, v89, v90, v91, v92);
  this->fields.isOrdealCallWarClear = 0;
  this->fields.eventMuralId = 0;
  this->fields.playHappinessCounterEffect = 0;
  this->fields.oldUserEventPoint = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.oldUserEventPoint, 0LL, v94, v95, v96, v97, v98, v99);
  this->fields.UseAddRewardItemRewardInfos = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.UseAddRewardItemRewardInfos,
    0LL,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
}


void __fastcall TerminalPramsManager_ClearData___ctor_36083880(
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
        int32_t eventActionQuestId,
        QuestRewardInfo_array *useAddRewardItemRewardInfos,
        const MethodInfo *method)
{
  struct UserSuperBossEntity_array *v31; // x24
  struct CostumeReleaseAnnounce_array *v38; // x28
  struct CostumeReleaseAnnounce_array *v39; // x25
  struct UserSuperBossEntity_array *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v49; // x0
  const MethodInfo *v50; // x2
  int64_t v51; // x26
  __int64 v52; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  bool v60; // w29
  bool v61; // w23
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  struct QuestRewardInfo_array *v122; // x1
  __int64 v123; // x1
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  TerminalPramsManager_c *v130; // x0
  TerminalPramsManager_c *v131; // x0
  struct QuestRewardInfo_array *resultBoostItemRewardInfo_k__BackingField; // x1
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  __int64 v139; // x1
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  TerminalPramsManager_c *v146; // x0
  TerminalPramsManager_c *v147; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo_k__BackingField; // x1
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  struct WarClearReward_array *v155; // x1
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  struct BattleDropItem_array *v162; // x1
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  struct BattleDropItem_array *v169; // x1
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  struct LimitImageAnnounce_array *v176; // x1
  __int64 v177; // x1
  int64_t v178; // x2
  int32_t v179; // w3
  System_String_o *v180; // x4
  BattleSetupInfo_o *v181; // x5
  FollowerInfo_o *v182; // x6
  PartyListViewItem_o *v183; // x7
  TerminalPramsManager_c *v184; // x0
  struct QuestRewardInfo_array *v185; // x20
  struct UserEventPointEntity_array *OldUserEventPoint_k__BackingField; // x1
  int64_t v187; // x2
  int32_t v188; // w3
  System_String_o *v189; // x4
  BattleSetupInfo_o *v190; // x5
  FollowerInfo_o *v191; // x6
  PartyListViewItem_o *v192; // x7
  long double inited; // q0
  _QWORD *v194; // x20
  __int64 v195; // x8
  __int64 v196; // x0
  __int64 v197; // x0

  v31 = oldSuperBoss;
  v38 = questClearCostumeGet;
  v39 = questClearCostumeRelease;
  v40 = oldPersonalBoss;
  if ( (byte_4C1F509 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_Empty_QuestRewardInfo___, qcrHeroineInfo);
    sub_1C3B764(&BattleDropItem___TypeInfo, v41);
    sub_1C3B764(&CostumeReleaseAnnounce___TypeInfo, v42);
    sub_1C3B764(&LimitImageAnnounce___TypeInfo, v43);
    sub_1C3B764(&TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo, v44);
    sub_1C3B764(&QuestRewardInfo___TypeInfo, v45);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v46);
    sub_1C3B764(&UserSuperBossEntity___TypeInfo, v47);
    sub_1C3B764(&WarClearReward___TypeInfo, v48);
    byte_4C1F509 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v49 = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)sub_1C3B9B0(TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
  v51 = (int64_t)v49;
  if ( qcrHeroineInfo )
  {
    TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_36083108(v49, qcrHeroineInfo, v50);
    if ( this )
      goto LABEL_5;
LABEL_34:
    sub_1C3B9C0(v52, v53);
  }
  System_Object___ctor((Il2CppObject *)v49, 0LL);
  *(_QWORD *)(v51 + 16) = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)(v51 + 16), 0LL, v133, v134, v135, v136, v137, v138);
  if ( !this )
    goto LABEL_34;
LABEL_5:
  this->fields.qClearHeroineInfo = (struct TerminalPramsManager_QuestClearHeroineInfoForSave_o *)v51;
  v60 = qClear;
  v61 = pclear;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, v51, v54, v55, v56, v57, v58, v59);
  if ( !qri )
    qri = (QuestRewardInfo_array *)sub_1C3B80C(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.questRewardInfos = qri;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.questRewardInfos, (int64_t)qri, v62, v63, v64, v65, v66, v67);
  if ( !questPhaseRewardInfos )
    questPhaseRewardInfos = (QuestRewardInfo_array *)sub_1C3B80C(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.questPhaseRewardInfos = questPhaseRewardInfos;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.questPhaseRewardInfos,
    (int64_t)questPhaseRewardInfos,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  this->fields.questClear = v60;
  this->fields.phaseClear = v61;
  this->fields.clearedLastBattleRaidId = lastRaidId;
  this->fields.clearedBattleRaidId = raidId;
  this->fields.joinGroup = groupjoin;
  if ( !oldSuperBoss )
    v31 = (struct UserSuperBossEntity_array *)sub_1C3B80C(UserSuperBossEntity___TypeInfo, 0LL);
  this->fields.mOldSuperBoss = v31;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mOldSuperBoss, (int64_t)v31, v74, v75, v76, v77, v78, v79);
  if ( !oldPersonalBoss )
    v40 = (struct UserSuperBossEntity_array *)sub_1C3B80C(UserSuperBossEntity___TypeInfo, 0LL);
  this->fields.oldPersonalBoss = v40;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.oldPersonalBoss, (int64_t)v40, v80, v81, v82, v83, v84, v85);
  this->fields.evPointWinReward = evpWinReward;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.evPointWinReward,
    (int64_t)evpWinReward,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  this->fields.evRaceBoost = evRace;
  this->fields.evPointWinType = evpWinType;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.evRaceBoost, (int64_t)evRace, v92, v93, v94, v95, v96, v97);
  if ( !questClearCostumeRelease )
    v39 = (struct CostumeReleaseAnnounce_array *)sub_1C3B80C(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostume = v39;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.questClearCostume,
    (int64_t)v39,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
  if ( !questClearCostumeGet )
    v38 = (struct CostumeReleaseAnnounce_array *)sub_1C3B80C(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostumeGetInfo = v38;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.questClearCostumeGetInfo,
    (int64_t)v38,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  this->fields.eventTowerReward = evTowerReward;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.eventTowerReward,
    (int64_t)evTowerReward,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  v122 = resultEvTowerRewardInfo;
  if ( !resultEvTowerRewardInfo )
    v122 = (struct QuestRewardInfo_array *)sub_1C3B80C(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.resultEventTowerRewardInfo = v122;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.resultEventTowerRewardInfo,
    (int64_t)v122,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F04E )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v123);
    byte_4C1F04E = 1;
  }
  v130 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v130 = TerminalPramsManager_TypeInfo;
  }
  if ( v130->static_fields->_resultBoostItemRewardInfo_k__BackingField )
  {
    if ( !v130->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v130);
    if ( !byte_4C1F04E )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v123);
      byte_4C1F04E = 1;
    }
    v131 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v131 = TerminalPramsManager_TypeInfo;
    }
    resultBoostItemRewardInfo_k__BackingField = v131->static_fields->_resultBoostItemRewardInfo_k__BackingField;
  }
  else
  {
    resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1C3B80C(
                                                                                  QuestRewardInfo___TypeInfo,
                                                                                  0LL);
  }
  this->fields.resultBoostItemRewardInfo = resultBoostItemRewardInfo_k__BackingField;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.resultBoostItemRewardInfo,
    (int64_t)resultBoostItemRewardInfo_k__BackingField,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F046 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v139);
    byte_4C1F046 = 1;
  }
  v146 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v146 = TerminalPramsManager_TypeInfo;
  }
  if ( v146->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField )
  {
    if ( !v146->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v146);
    if ( !byte_4C1F046 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v139);
      byte_4C1F046 = 1;
    }
    v147 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v147 = TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfo_k__BackingField = v147->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
  }
  else
  {
    resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1C3B80C(
                                                                                            QuestRewardInfo___TypeInfo,
                                                                                            0LL);
  }
  this->fields.resultEventBoardGameTokenRewardInfo = resultEventBoardGameTokenRewardInfo_k__BackingField;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.resultEventBoardGameTokenRewardInfo,
    (int64_t)resultEventBoardGameTokenRewardInfo_k__BackingField,
    v140,
    v141,
    v142,
    v143,
    v144,
    v145);
  v155 = warClearRewardIn;
  this->fields.isDispOnly = dispOnly;
  if ( !warClearRewardIn )
    v155 = (struct WarClearReward_array *)sub_1C3B80C(WarClearReward___TypeInfo, 0LL);
  this->fields.warClearReward = v155;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.warClearReward,
    (int64_t)v155,
    v149,
    v150,
    v151,
    v152,
    v153,
    v154);
  v162 = questResultAfterEventRewardInfos;
  this->fields.isWarBoardClear = isWarBoardClear;
  this->fields.EventActivityPointEffectState = eventActivityPointEffectState;
  if ( !questResultAfterEventRewardInfos )
    v162 = (struct BattleDropItem_array *)sub_1C3B80C(BattleDropItem___TypeInfo, 0LL);
  this->fields.questResultAfterEventRewardInfos = v162;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.questResultAfterEventRewardInfos,
    (int64_t)v162,
    v156,
    v157,
    v158,
    v159,
    v160,
    v161);
  v169 = resultEventPanelRewardInfos;
  if ( !resultEventPanelRewardInfos )
    v169 = (struct BattleDropItem_array *)sub_1C3B80C(BattleDropItem___TypeInfo, 0LL);
  this->fields.resultEventPanelRewardInfos = v169;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.resultEventPanelRewardInfos,
    (int64_t)v169,
    v163,
    v164,
    v165,
    v166,
    v167,
    v168);
  v176 = limitImageAnnounces;
  this->fields.panelEventPoint = panelEventPoint;
  if ( !limitImageAnnounces )
    v176 = (struct LimitImageAnnounce_array *)sub_1C3B80C(LimitImageAnnounce___TypeInfo, 0LL);
  this->fields.limitImageAnnounces = v176;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.limitImageAnnounces,
    (int64_t)v176,
    v170,
    v171,
    v172,
    v173,
    v174,
    v175);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1E9A1 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v177);
    byte_4C1E9A1 = 1;
  }
  v184 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v184 = TerminalPramsManager_TypeInfo;
  }
  this->fields.isOrdealCallWarClear = v184->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4C1F049 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v177);
    v184 = TerminalPramsManager_TypeInfo;
    byte_4C1F049 = 1;
  }
  if ( !v184->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v184);
    v184 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventMuralId = v184->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_4C1F20A )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v177);
    v184 = TerminalPramsManager_TypeInfo;
    byte_4C1F20A = 1;
  }
  if ( !v184->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v184);
    v184 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventActionQuestId = v184->static_fields->_EventActionQuestId_k__BackingField;
  if ( !byte_4C1F04B )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v177);
    v184 = TerminalPramsManager_TypeInfo;
    byte_4C1F04B = 1;
  }
  if ( !v184->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v184);
    v184 = TerminalPramsManager_TypeInfo;
  }
  this->fields.playHappinessCounterEffect = v184->static_fields->_PlayHappinessCounterEffect_k__BackingField;
  if ( !byte_4C1EA91 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v177);
    v184 = TerminalPramsManager_TypeInfo;
    byte_4C1EA91 = 1;
  }
  if ( !v184->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v184);
    v184 = TerminalPramsManager_TypeInfo;
  }
  v185 = useAddRewardItemRewardInfos;
  OldUserEventPoint_k__BackingField = v184->static_fields->_OldUserEventPoint_k__BackingField;
  this->fields.oldUserEventPoint = OldUserEventPoint_k__BackingField;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.oldUserEventPoint,
    (int64_t)OldUserEventPoint_k__BackingField,
    v178,
    v179,
    v180,
    v181,
    v182,
    v183);
  if ( !useAddRewardItemRewardInfos )
  {
    v194 = Method_System_Array_Empty_QuestRewardInfo___;
    v195 = *((_QWORD *)Method_System_Array_Empty_QuestRewardInfo___ + 7);
    if ( !v195 )
    {
      sub_1C8D69C(Method_System_Array_Empty_QuestRewardInfo___);
      v195 = v194[7];
    }
    v196 = *(_QWORD *)(v195 + 16);
    if ( (*(_BYTE *)(v196 + 309) & 1) == 0 )
      v196 = sub_1C8D640(inited);
    if ( !*(_DWORD *)(v196 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v196);
    v197 = *(_QWORD *)(v194[7] + 16LL);
    if ( (*(_BYTE *)(v197 + 309) & 1) == 0 )
      v197 = sub_1C8D640(inited);
    v185 = **(struct QuestRewardInfo_array ***)(v197 + 184);
  }
  this->fields.UseAddRewardItemRewardInfos = v185;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.UseAddRewardItemRewardInfos,
    (int64_t)v185,
    v187,
    v188,
    v189,
    v190,
    v191,
    v192);
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor_36082344(
        TerminalPramsManager_OldHeroineLawData_o *this,
        UserServantEntity_o *uSvtEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  __int128 v8; // q1
  __int128 v9; // q1
  __int64 v10; // x21
  __int64 v11; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4C1F504 & 1) == 0 )
  {
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, uSvtEnt);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4C1F504 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !uSvtEnt )
    sub_1C3B9C0(v6, v7);
  v8 = *(_OWORD *)&uSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  this->fields.id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v13, 0LL);
  v9 = *(_OWORD *)&uSvtEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v9;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v12, 0LL);
  v11 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v15, 0LL);
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                              uSvtEnt->fields.limitCount,
                              0LL);
  this->fields.imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                   uSvtEnt->fields.imageLimitCount,
                                   0LL);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                  uSvtEnt->fields.dispLimitCount,
                                  0LL);
  this->fields.commandCardLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                         uSvtEnt->fields.commandCardLimitCount,
                                         0LL);
  this->fields.iconLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                  uSvtEnt->fields.iconLimitCount,
                                  0LL);
  *(_OWORD *)&this->fields.lv = *(_OWORD *)&uSvtEnt->fields.lv;
  *(_OWORD *)&this->fields.adjustAtk = *(_OWORD *)&uSvtEnt->fields.adjustAtk;
  *(_OWORD *)&this->fields.skillLv3 = *(_OWORD *)&uSvtEnt->fields.skillLv3;
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
  __int128 v9; // q0
  __int128 v10; // q0
  int32_t svtId; // w21
  UserServantEntity_o *result; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+40h] [xbp-50h]

  if ( (byte_4C1F505 & 1) == 0 )
  {
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_1C3B764(&UserServantEntity_TypeInfo, v4);
    byte_4C1F505 = 1;
  }
  v5 = sub_1C3B9B0(UserServantEntity_TypeInfo);
  UserServantEntity___ctor((UserServantEntity_o *)v5, 0LL);
  id = this->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v14, id, 0LL);
  v15 = v14;
  if ( !v5 )
    sub_1C3B9C0(v7, v8);
  v9 = *(_OWORD *)&v15.fields.fakeValue;
  *(_OWORD *)(v5 + 16) = *(_OWORD *)&v15.fields.currentCryptoKey;
  *(_OWORD *)(v5 + 32) = v9;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v13, this->fields.userId, 0LL);
  v10 = *(_OWORD *)&v13.fields.fakeValue;
  v14 = v13;
  *(_OWORD *)(v5 + 48) = *(_OWORD *)&v13.fields.currentCryptoKey;
  *(_OWORD *)(v5 + 64) = v10;
  svtId = this->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
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
  *(_OWORD *)(v5 + 256) = *(_OWORD *)&this->fields.lv;
  *(_OWORD *)(v5 + 272) = *(_OWORD *)&this->fields.adjustAtk;
  *(_OWORD *)(v5 + 288) = *(_OWORD *)&this->fields.skillLv3;
  *(_QWORD *)(v5 + 304) = this->fields.createdAt;
  return result;
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.oldUsrSvtData = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_36083108(
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C1F506 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_OldHeroineLawData_TypeInfo, qClearHeroineInfo);
    byte_4C1F506 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !qClearHeroineInfo )
    sub_1C3B9C0(v5, v6);
  oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
  v8 = (TerminalPramsManager_OldHeroineLawData_o *)sub_1C3B9B0(TerminalPramsManager_OldHeroineLawData_TypeInfo);
  TerminalPramsManager_OldHeroineLawData___ctor_36082344(v8, oldUsrSvtData, v9);
  this->fields.oldUsrSvtData = v8;
  p_fields = &this->fields;
  sub_1C3B708((PartyOrganizationUtility_o *)p_fields, (int64_t)v8, v11, v12, v13, v14, v15, v16);
  p_fields->isChangeLimitcnt = qClearHeroineInfo->fields.isChangeLimitcnt;
  p_fields->isChangeTreasureDvc = qClearHeroineInfo->fields.isChangeTreasureDvc;
  *(_QWORD *)&p_fields->treasureDvcId = *(_QWORD *)&qClearHeroineInfo->fields.treasureDvcId;
  p_fields->oldFriendShipRank = qClearHeroineInfo->fields.oldFriendShipRank;
  p_fields->isFriendShipExceed = qClearHeroineInfo->fields.isFriendShipExceed;
  p_fields->isExceed = qClearHeroineInfo->fields.isExceed;
}


QuestClearHeroineInfo_o *__fastcall TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  TerminalPramsManager_OldHeroineLawData_o *oldUsrSvtData; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  QuestClearHeroineInfo_o *result; // x0

  if ( (byte_4C1F507 & 1) == 0 )
  {
    sub_1C3B764(&QuestClearHeroineInfo_TypeInfo, method);
    byte_4C1F507 = 1;
  }
  v3 = sub_1C3B9B0(QuestClearHeroineInfo_TypeInfo);
  QuestClearHeroineInfo___ctor((QuestClearHeroineInfo_o *)v3, 0LL);
  oldUsrSvtData = this->fields.oldUsrSvtData;
  if ( !oldUsrSvtData
    || (oldUsrSvtData = (TerminalPramsManager_OldHeroineLawData_o *)TerminalPramsManager_OldHeroineLawData__GetLoad(
                                                                      oldUsrSvtData,
                                                                      v4),
        !v3) )
  {
    sub_1C3B9C0(oldUsrSvtData, v4);
  }
  *(_QWORD *)(v3 + 16) = oldUsrSvtData;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)oldUsrSvtData, v6, v7, v8, v9, v10, v11);
  result = (QuestClearHeroineInfo_o *)v3;
  *(_BYTE *)(v3 + 24) = this->fields.isChangeLimitcnt;
  *(_BYTE *)(v3 + 25) = this->fields.isChangeTreasureDvc;
  *(_QWORD *)(v3 + 28) = *(_QWORD *)&this->fields.treasureDvcId;
  *(_DWORD *)(v3 + 36) = this->fields.oldFriendShipRank;
  *(_BYTE *)(v3 + 40) = this->fields.isFriendShipExceed;
  *(_BYTE *)(v3 + 41) = this->fields.isExceed;
  return result;
}


void __fastcall TerminalPramsManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C1F50B & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager___c_TypeInfo, v1);
    byte_4C1F50B = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(TerminalPramsManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalPramsManager___c_TypeInfo->static_fields->__9 = (struct TerminalPramsManager___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)TerminalPramsManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall TerminalPramsManager___c___ctor(TerminalPramsManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TerminalPramsManager___c___ReceiveQuestEndResultInfo_b__708_0(
        TerminalPramsManager___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  int32_t questId; // w19
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4C1F50C & 1) == 0 )
  {
    this = (TerminalPramsManager___c_o *)sub_1C3B764(&TerminalPramsManager_TypeInfo, n);
    byte_4C1F50C = 1;
  }
  if ( !n )
    sub_1C3B9C0(this, n);
  questId = n->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, n);
    byte_4C1CBC4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  return questId == v5->static_fields->_QuestId_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__713_0(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  if ( (byte_4C1F50D & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, *(_QWORD *)&v);
    byte_4C1F50D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStoryForQuestId(v, 0LL);
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__713_3(
        TerminalPramsManager___c_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C3B9C0(this, 0LL);
  return v->fields.id;
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__713_4(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  return v;
}


void __fastcall TerminalPramsManager___c__DisplayClass696_0___ctor(
        TerminalPramsManager___c__DisplayClass696_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager___c__DisplayClass696_0___CheckResumeEffectNT2_b__0(
        TerminalPramsManager___c__DisplayClass696_0_o *this,
        System_String_o *effectId,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_fields; // x19
  System_String_o *effectIdsStr; // t1
  System_String_o *v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4C1F50E & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_43/*"\n"*/, effectId);
    byte_4C1F50E = 1;
  }
  effectIdsStr = this->fields.effectIdsStr;
  p_fields = (PartyOrganizationUtility_o *)&this->fields;
  v7 = System_String__Concat_63379872(effectIdsStr, effectId, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  p_fields->klass = (PartyOrganizationUtility_c *)v7;
  sub_1C3B708(p_fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall TerminalPramsManager___c__DisplayClass713_0___ctor(
        TerminalPramsManager___c__DisplayClass713_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


QuestEntity_o *__fastcall TerminalPramsManager___c__DisplayClass713_0___SendOpenedQuestIdToAdManager_b__1(
        TerminalPramsManager___c__DisplayClass713_0_o *this,
        int32_t v,
        const MethodInfo *method)
{
  QuestMaster_o *questMaster; // x0

  questMaster = this->fields.questMaster;
  if ( !questMaster )
    sub_1C3B9C0(0LL, v);
  return QuestMaster__getQuestEntity(questMaster, v, 0LL);
}


bool __fastcall TerminalPramsManager___c__DisplayClass713_0___SendOpenedQuestIdToAdManager_b__2(
        TerminalPramsManager___c__DisplayClass713_0_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  UserQuestMaster_o *userQuestMaster; // x20
  NetworkManager_c *v6; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C1F50F & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v);
    byte_4C1F50F = 1;
  }
  entity = 0LL;
  userQuestMaster = this->fields.userQuestMaster;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v);
    byte_4C1C955 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  if ( !v || !userQuestMaster )
    goto LABEL_15;
  v6 = (NetworkManager_c *)UserQuestMaster__TryGetEntity(
                             userQuestMaster,
                             &entity,
                             v6->static_fields->userIdNumber,
                             v->fields.id,
                             0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    if ( entity )
      return entity->fields.clearNum == 0;
LABEL_15:
    sub_1C3B9C0(v6, v);
  }
  return 1;
}