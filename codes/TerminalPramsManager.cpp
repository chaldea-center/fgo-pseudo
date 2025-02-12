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
  void *v16; // x1
  struct TerminalPramsManager_StaticFields *v17; // x0
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

  if ( (byte_4BB1C89 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int___ctor__, v1);
    sub_1C13D24(&System_Collections_Generic_HashSet_int__TypeInfo, v2);
    sub_1C13D24(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1C13D24(&float___TypeInfo, v5);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v6);
    sub_1C13D24(&StringLiteral_1/*""*/, v7);
    byte_4BB1C89 = 1;
  }
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_1C13F70(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_34E02D8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->loginQuestNotifiedList = v8;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&static_fields->loginQuestNotifiedList,
    (int64_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_1/*""*/;
  v17 = TerminalPramsManager_TypeInfo->static_fields;
  v17->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v17->mTerminalWarStartedIds, (int64_t)v16, v18, v19, v20, v21, v22, v23);
  *(_OWORD *)&TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = xmmword_BF68D0;
  v24 = sub_1C13DCC(float___TypeInfo, 3LL);
  v25 = TerminalPramsManager_TypeInfo->static_fields;
  v25->TipsArchiveScrollValueList = (struct System_Single_array *)v24;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v25->TipsArchiveScrollValueList, v24, v26, v27, v28, v29, v30, v31);
  TerminalPramsManager_TypeInfo->static_fields->joinGroupId = -1;
  v32 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  p_eventScriptMessages = (PartyOrganizationUtility_o *)&TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  p_eventScriptMessages->klass = (PartyOrganizationUtility_c *)v32;
  sub_1C13CC8(p_eventScriptMessages, (int64_t)v32, v34, v35, v36, v37, v38, v39);
  v40 = TerminalPramsManager_TypeInfo->static_fields;
  *(_QWORD *)&v40->EVENT_POINT_EFFECT_STATE_SUB = 0xFFFFFFFFLL;
  v40->EVENT_POINT_EFFECT_STATE_ADD = 1;
  *(_QWORD *)&v40->_ShopFocusItemId_k__BackingField = 0LL;
  v40->isInvisibleConnectAndLoad = 0;
  *(_QWORD *)&v40->ConnectMarkEventId = 0LL;
  v40->meSceneStatus = 0;
  v40->isCheckHomeExpirationDateEventMap = 1;
  *(_WORD *)&v40->IsEventMapLoading = 0;
  v40->_MasterMissionTargetType_k__BackingField = -1;
}


void __fastcall TerminalPramsManager__AddNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_4BB1C69 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__Add__, method);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v3);
    byte_4BB1C69 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v4->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1C13F80(0LL, method);
  System_Collections_Generic_HashSet_int___Add(
    loginQuestNotifiedList,
    questId,
    (const MethodInfo_34E14DC *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall TerminalPramsManager__AutoOff(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4BB1C2B & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C2B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF54B )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BAF54B = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 0;
  if ( !byte_4BB1806 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4BB1806 = 1;
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

  if ( (byte_4BB1C5D & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11620/*"Russian"*/, v2);
    byte_4BB1C5D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CAB )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1CAB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11620/*"Russian"*/,
    v3->static_fields->_BlankEarthRank_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__BlankEarthSpotId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BB1C5C & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11621/*"Russian (Russia)"*/, v2);
    byte_4BB1C5C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1169 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1169 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11621/*"Russian (Russia)"*/,
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

  if ( (byte_4BB1C5B & 1) == 0 )
  {
    sub_1C13D24(&CommonUI_CampaignDirectBonusData___TypeInfo, v1);
    sub_1C13D24(&JsonManager_TypeInfo, v2);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v3);
    sub_1C13D24(&StringLiteral_11622/*"S"*/, v4);
    byte_4BB1C5B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF377 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BAF377 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_obj = &v5->static_fields->_CampaignDirectBonus_k__BackingField->obj;
  if ( !p_obj )
    p_obj = (Il2CppObject *)sub_1C13DCC(CommonUI_CampaignDirectBonusData___TypeInfo, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__toJson(p_obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11622/*"S"*/, v7, 0LL);
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

  if ( (byte_4BB1C77 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_SpotMaster___, v4);
    sub_1C13D24(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v5);
    sub_1C13D24(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BB1C77 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_SpotMaster___);
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
          (const MethodInfo_3238670 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v13 )
LABEL_16:
    sub_1C13F80(Instance, v9);
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
            HIDWORD(v13[1].klass),
            (const MethodInfo_2FA7350 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall TerminalPramsManager__CheckClearSelectedStoryQuestId(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4BB1C5E & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C5E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB19CB )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB19CB = 1;
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
    if ( !byte_4BB19CB )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
      byte_4BB19CB = 1;
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
      if ( !byte_4BB15BB )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
        byte_4BB15BB = 1;
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

  if ( (byte_4BB1C46 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_13834/*"Terminal/EarthCore/{0:D2}"*/, v1);
    sub_1C13D24(&StringLiteral_13835/*"Terminal/Effect"*/, v2);
    byte_4BB1C46 = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13834/*"Terminal/EarthCore/{0:D2}"*/, 0LL)
      && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13835/*"Terminal/Effect"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckEventSubmarinePointSaveData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BB1C48 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_13836/*"Terminal/EventFolder/Capter{0:D4}"*/, v1);
    byte_4BB1C48 = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13836/*"Terminal/EventFolder/Capter{0:D4}"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckIsOrdealCallWarClear(WarEntity_o *warEntity, const MethodInfo *method)
{
  int32_t parentWarId; // w19
  BalanceConfig_c *v4; // x0

  if ( (byte_4BB1C84 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    byte_4BB1C84 = 1;
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

  if ( (byte_4BB1C62 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_string__TypeInfo, v1);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_string___, v2);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__ForEach__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Remove__, v4);
    sub_1C13D24(&ScrTerminalListTop_TypeInfo, v5);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v6);
    sub_1C13D24(&Method_TerminalPramsManager___c__DisplayClass684_0__CheckResumeEffectNT2_b__0__, v7);
    sub_1C13D24(&TerminalPramsManager___c__DisplayClass684_0_TypeInfo, v8);
    sub_1C13D24(&StringLiteral_43/*"\n"*/, v9);
    sub_1C13D24(&StringLiteral_89/*"\r\n"*/, v10);
    sub_1C13D24(&StringLiteral_1/*""*/, v11);
    byte_4BB1C62 = 1;
  }
  v46 = 0;
  v12 = sub_1C13F70(TerminalPramsManager___c__DisplayClass684_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass684_0___ctor((TerminalPramsManager___c__DisplayClass684_0_o *)v12, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CA9 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v13);
    byte_4BB1CA9 = 1;
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
        if ( !byte_4BB1CA9 )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v21);
          byte_4BB1CA9 = 1;
        }
        v23 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v23 = TerminalPramsManager_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v23->static_fields->_PlayedTerminalEffects_k__BackingField;
        if ( !PlayedTerminalEffects_k__BackingField
          || (PlayedTerminalEffects_k__BackingField = System_String__Replace_62987572(
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
                                                                            (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL)
          || (v26 = (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
              PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Collections_Generic_List_object___Remove(
                                                                           (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
                                                                           v22,
                                                                           (const MethodInfo_362E6F4 *)Method_System_Collections_Generic_List_string__Remove__),
              !v12) )
        {
          sub_1C13F80(PlayedTerminalEffects_k__BackingField, v21);
        }
        v33 = StringLiteral_1/*""*/;
        *(_QWORD *)(v12 + 16) = StringLiteral_1/*""*/;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)v33, v27, v28, v29, v30, v31, v32);
        v34 = (System_Action_object__o *)sub_1C13F70(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v34,
          (Il2CppObject *)v12,
          Method_TerminalPramsManager___c__DisplayClass684_0__CheckResumeEffectNT2_b__0__,
          0LL);
        System_Collections_Generic_List_object___ForEach(
          v26,
          (System_Action_T__o *)v34,
          (const MethodInfo_362DC0C *)Method_System_Collections_Generic_List_string__ForEach__);
        v42 = *(_QWORD *)(v12 + 16);
        if ( !byte_4BB1C9A )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v35);
          byte_4BB1C9A = 1;
        }
        v43 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v43 = TerminalPramsManager_TypeInfo;
        }
        p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v43->static_fields->_PlayedTerminalEffects_k__BackingField;
        p_PlayedTerminalEffects_k__BackingField->klass = (PartyOrganizationUtility_c *)v42;
        sub_1C13CC8(p_PlayedTerminalEffects_k__BackingField, v42, v36, v37, v38, v39, v40, v41);
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

  if ( (byte_4BB1C56 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11623/*"S256"*/, v2);
    byte_4BB1C56 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB124F )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB124F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11623/*"S256"*/,
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

  if ( (byte_4BB1C55 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11625/*"S>"*/, v2);
    sub_1C13D24(&StringLiteral_11624/*"S="*/, v3);
    byte_4BB1C55 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11625/*"S>"*/, v4->static_fields->ConnectMarkEventId, 0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11624/*"S="*/,
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

  if ( (byte_4BB1C7A & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v2);
    sub_1C13D24(&StringLiteral_1/*""*/, v3);
    byte_4BB1C7A = 1;
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
  if ( !byte_4BB1CBD )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    byte_4BB1CBD = 1;
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->lastPlayBgmName, (int64_t)v14, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4BB1C39 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11628/*"SAME_SVTEQUIP_COMBINE"*/, v2);
    sub_1C13D24(&StringLiteral_13838/*"Terminal/LoginBonus/FortuneBonus"*/, v3);
    sub_1C13D24(&StringLiteral_5313/*"Debug_GuestNPCInfoList"*/, v4);
    sub_1C13D24(&StringLiteral_11634/*"SAVEKEY_ClearEventQuestIds"*/, v5);
    sub_1C13D24(&StringLiteral_13834/*"Terminal/EarthCore/{0:D2}"*/, v6);
    sub_1C13D24(&StringLiteral_11622/*"S"*/, v7);
    sub_1C13D24(&StringLiteral_11629/*"SAMPLERANGE_{0}"*/, v8);
    sub_1C13D24(&StringLiteral_11639/*"SAVEKEY_LastPlayBgmName"*/, v9);
    sub_1C13D24(&StringLiteral_13839/*"Terminal/LoginBonus/LoginBonusWithTransition"*/, v10);
    sub_1C13D24(&StringLiteral_5309/*"Debug TypeDescriptor."*/, v11);
    sub_1C13D24(&StringLiteral_13836/*"Terminal/EventFolder/Capter{0:D4}"*/, v12);
    sub_1C13D24(&StringLiteral_13845/*"TerminalBaseMap"*/, v13);
    sub_1C13D24(&StringLiteral_11638/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v14);
    sub_1C13D24(&StringLiteral_13853/*"TerminalLastPanelEventPoint"*/, v15);
    sub_1C13D24(&StringLiteral_13837/*"Terminal/Info"*/, v16);
    sub_1C13D24(&StringLiteral_11631/*"SAVEKEY_BlankEarthRank"*/, v17);
    sub_1C13D24(&StringLiteral_13840/*"Terminal/MapImgs/"*/, v18);
    sub_1C13D24(&StringLiteral_11630/*"SAVEKEY_"*/, v19);
    sub_1C13D24(&StringLiteral_11635/*"SAVEKEY_ConnectMarkAnimationId"*/, v20);
    sub_1C13D24(&StringLiteral_11640/*"SAVEKEY_LastPlayQuestConsumeType"*/, v21);
    sub_1C13D24(&StringLiteral_11623/*"S256"*/, v22);
    sub_1C13D24(&StringLiteral_11632/*"SAVEKEY_BlankEarthSpotId"*/, v23);
    sub_1C13D24(&StringLiteral_5314/*"Debug_IsBuildInfoDisp"*/, v24);
    sub_1C13D24(&StringLiteral_5311/*"DebugTestScene"*/, v25);
    sub_1C13D24(&StringLiteral_13848/*"TerminalBeforeEventSubmarinePointData"*/, v26);
    sub_1C13D24(&StringLiteral_11637/*"SAVEKEY_DataLostBattleAutoReset"*/, v27);
    sub_1C13D24(&StringLiteral_11643/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v28);
    sub_1C13D24(&StringLiteral_13852/*"TerminalIsDoneShortcut"*/, v29);
    sub_1C13D24(&StringLiteral_13857/*"TerminalPhaseCnt"*/, v30);
    sub_1C13D24(&StringLiteral_13850/*"TerminalEndTime"*/, v31);
    sub_1C13D24(&StringLiteral_13854/*"TerminalLastPlayedFreeQuestSpotId"*/, v32);
    sub_1C13D24(&StringLiteral_13835/*"Terminal/Effect"*/, v33);
    sub_1C13D24(&StringLiteral_11621/*"Russian (Russia)"*/, v34);
    sub_1C13D24(&StringLiteral_11626/*"SAME_CLASS_MULI_EXP"*/, v35);
    sub_1C13D24(&StringLiteral_5312/*"Debug_BattleEnemyList"*/, v36);
    sub_1C13D24(&StringLiteral_13858/*"TerminalPlayerIcon"*/, v37);
    sub_1C13D24(&StringLiteral_5308/*"Debug"*/, v38);
    sub_1C13D24(&StringLiteral_11625/*"S>"*/, v39);
    sub_1C13D24(&StringLiteral_13856/*"TerminalOffset"*/, v40);
    sub_1C13D24(&StringLiteral_11624/*"S="*/, v41);
    sub_1C13D24(&StringLiteral_11633/*"SAVEKEY_CampaignDirectBonus"*/, v42);
    sub_1C13D24(&StringLiteral_13843/*"Terminal/QuestMap/Capter{0:D4}"*/, v43);
    sub_1C13D24(&StringLiteral_5310/*"DebugLogHandler"*/, v44);
    sub_1C13D24(&StringLiteral_13855/*"TerminalLastPlayedQuestId"*/, v45);
    sub_1C13D24(&StringLiteral_11642/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v46);
    byte_4BB1C39 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13837/*"Terminal/Info"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13857/*"TerminalPhaseCnt"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13850/*"TerminalEndTime"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13848/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13843/*"Terminal/QuestMap/Capter{0:D4}"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13845/*"TerminalBaseMap"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13838/*"Terminal/LoginBonus/FortuneBonus"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13840/*"Terminal/MapImgs/"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13858/*"TerminalPlayerIcon"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5314/*"Debug_IsBuildInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5311/*"DebugTestScene"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5310/*"DebugLogHandler"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5312/*"Debug_BattleEnemyList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5313/*"Debug_GuestNPCInfoList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5308/*"Debug"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5309/*"Debug TypeDescriptor."*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13853/*"TerminalLastPanelEventPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13854/*"TerminalLastPlayedFreeQuestSpotId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13839/*"Terminal/LoginBonus/LoginBonusWithTransition"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13852/*"TerminalIsDoneShortcut"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13855/*"TerminalLastPlayedQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13856/*"TerminalOffset"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13834/*"Terminal/EarthCore/{0:D2}"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13835/*"Terminal/Effect"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13836/*"Terminal/EventFolder/Capter{0:D4}"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11638/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11637/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11639/*"SAVEKEY_LastPlayBgmName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11640/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11628/*"SAME_SVTEQUIP_COMBINE"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11629/*"SAMPLERANGE_{0}"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11634/*"SAVEKEY_ClearEventQuestIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11631/*"SAVEKEY_BlankEarthRank"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11632/*"SAVEKEY_BlankEarthSpotId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11633/*"SAVEKEY_CampaignDirectBonus"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11643/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11625/*"S>"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11624/*"S="*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11642/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11623/*"S256"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11630/*"SAVEKEY_"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11626/*"SAME_CLASS_MULI_EXP"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11635/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11622/*"S"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11621/*"Russian (Russia)"*/, 0LL);
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

  if ( (byte_4BB1C7B & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11627/*"SAME_SERVANT"*/, v8);
    byte_4BB1C7B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CBE )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1CBE = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  p_EventRaidDefeatedEffectInfo_k__BackingField = (PartyOrganizationUtility_o *)&v9->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  p_EventRaidDefeatedEffectInfo_k__BackingField->klass = 0LL;
  sub_1C13CC8(p_EventRaidDefeatedEffectInfo_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11627/*"SAME_SERVANT"*/, 0LL);
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

  if ( (byte_4BB1C80 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11636/*"SAVEKEY_ConnectMarkEventId"*/, v8);
    byte_4BB1C80 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CC0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1CC0 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  p_QuestRandomGroupList_k__BackingField = (PartyOrganizationUtility_o *)&v9->static_fields->_QuestRandomGroupList_k__BackingField;
  p_QuestRandomGroupList_k__BackingField->klass = 0LL;
  sub_1C13CC8(p_QuestRandomGroupList_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11636/*"SAVEKEY_ConnectMarkEventId"*/, 0LL);
}


bool __fastcall TerminalPramsManager__EnableResumeToBlankEarthMap(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BB1C87 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonTemplate_QuestTree__get_Instance__, method);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v3);
    byte_4BB1C87 = 1;
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v6);
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

  if ( (byte_4BB1C42 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_13839/*"Terminal/LoginBonus/LoginBonusWithTransition"*/, v2);
    sub_1C13D24(&StringLiteral_13852/*"TerminalIsDoneShortcut"*/, v3);
    byte_4BB1C42 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CA5 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1CA5 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13839/*"Terminal/LoginBonus/LoginBonusWithTransition"*/,
    v4->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4BB1CA6 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    byte_4BB1CA6 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  BeforeTimeEventDailyPoint_k__BackingField = v6->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v7 = System_Int64__ToString((int64_t)&BeforeTimeEventDailyPoint_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13852/*"TerminalIsDoneShortcut"*/, v7, 0LL);
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

  if ( (byte_4BB1C41 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_13853/*"TerminalLastPanelEventPoint"*/, v2);
    sub_1C13D24(&StringLiteral_13854/*"TerminalLastPlayedFreeQuestSpotId"*/, v3);
    byte_4BB1C41 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB19C6 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB19C6 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13853/*"TerminalLastPanelEventPoint"*/,
    v4->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_4BB19C7 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    byte_4BB19C7 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13854/*"TerminalLastPlayedFreeQuestSpotId"*/,
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

  if ( (byte_4BB1C86 & 1) == 0 )
  {
    sub_1C13D24(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v1);
    byte_4BB1C86 = 1;
  }
  v2 = sub_1C13F70(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v2, 0LL);
  if ( !v2 )
    sub_1C13F80(v3, v4);
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

  if ( (byte_4BB1C34 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Application_TypeInfo, v1);
    byte_4BB1C34 = 1;
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

  if ( (byte_4BB1C67 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, method);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v3);
    byte_4BB1C67 = 1;
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
      sub_1C13F80(v6, v7);
  }
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         folderLastIdxs,
         warId,
         &value,
         (const MethodInfo_328AE70 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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

  if ( (byte_4BB1C35 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v2);
    byte_4BB1C35 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1258 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v2);
    byte_4BB1258 = 1;
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
  if ( !byte_4BB1820 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v2);
    byte_4BB1820 = 1;
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

  if ( (byte_4BB1C6D & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C6D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v3);
  if ( !QuestFocusStateManager )
    sub_1C13F80(0LL, v5);
  return QuestFocusStateManager__GetFocusState(QuestFocusStateManager, questId, 0LL);
}


void __fastcall TerminalPramsManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4BB1C3B & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C3B = 1;
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

  if ( (byte_4BB1C65 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_1/*""*/, v8);
    byte_4BB1C65 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB04AF )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB04AF = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsDispOnly_k__BackingField = 0;
  v10 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4BB1809 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BB1809 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = v10;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&static_fields->_QuestWindowMessage_k__BackingField,
    (int64_t)v10,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_4BB1808 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v12);
    byte_4BB1808 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v19->static_fields->_MessageDispType_k__BackingField = 0;
  if ( !byte_4BB04AE )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v12);
    v19 = TerminalPramsManager_TypeInfo;
    byte_4BB04AE = 1;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v20 = v19->static_fields;
  v20->_BattleSetupKeep_k__BackingField = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v20->_BattleSetupKeep_k__BackingField, 0LL, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4BB1C3A & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_1/*""*/, v8);
    byte_4BB1C3A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1257 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1257 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4BB1256 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BB1256 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_SpotId_k__BackingField = 0;
  if ( !byte_4BB1251 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BB1251 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_QuestId_k__BackingField = 0;
  if ( !byte_4BB14A6 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BB14A6 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_LastPlayedQuestId_k__BackingField = 0;
  if ( !byte_4BB1C90 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BB1C90 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
  if ( !byte_4BB14A7 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BB14A7 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = 0;
  if ( !byte_4BB14A3 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BB14A3 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_AfterActionFocusQuestId_k__BackingField = 0;
  if ( !byte_4BB15BB )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BB15BB = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
  if ( !byte_4BB06E2 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BB06E2 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  if ( !byte_4BB15BC )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BB15BC = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
  if ( !byte_4BB1837 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BB1837 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 0;
  if ( !byte_4BB1835 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BB1835 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
  if ( !byte_4BB0E1A )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BB0E1A = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    0LL,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_4BB1255 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v11);
    byte_4BB1255 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_PhaseCnt_k__BackingField = 0;
  if ( !byte_4BB1252 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v11);
    v18 = TerminalPramsManager_TypeInfo;
    byte_4BB1252 = 1;
  }
  if ( !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_EndTime_k__BackingField = 0LL;
  if ( !byte_4BB1254 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v11);
    v18 = TerminalPramsManager_TypeInfo;
    byte_4BB1254 = 1;
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&v19->mTerminalWarStartedIds, (int64_t)v20, v12, v13, v14, v15, v16, v17);
  if ( !byte_4BB1C91 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v21);
    byte_4BB1C91 = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->mDebug_IsQuestReleaseAll = 0;
  if ( !byte_4BB1C92 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v21);
    v28 = TerminalPramsManager_TypeInfo;
    byte_4BB1C92 = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->mDebug_IsDummyErrorSelect = 0;
  if ( !byte_4BB1C93 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v21);
    v28 = TerminalPramsManager_TypeInfo;
    byte_4BB1C93 = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->mDebug_IsBuildInfoDisp = 0;
  if ( !byte_4BB183A )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v21);
    v28 = TerminalPramsManager_TypeInfo;
    byte_4BB183A = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->_TimeStatusEventId_k__BackingField = 0;
  if ( !byte_4BB183B )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v21);
    v28 = TerminalPramsManager_TypeInfo;
    byte_4BB183B = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->_TimeStatusLoopCount_k__BackingField = 0;
  if ( !byte_4BB1C94 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v21);
    v28 = TerminalPramsManager_TypeInfo;
    byte_4BB1C94 = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = TerminalPramsManager_TypeInfo;
  }
  p_timeStatusRecord_k__BackingField = (PartyOrganizationUtility_o *)&v28->static_fields->_timeStatusRecord_k__BackingField;
  p_timeStatusRecord_k__BackingField->klass = 0LL;
  sub_1C13CC8(p_timeStatusRecord_k__BackingField, 0LL, v22, v23, v24, v25, v26, v27);
  if ( !byte_4BB1C95 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v30);
    byte_4BB1C95 = 1;
  }
  v37 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v37 = TerminalPramsManager_TypeInfo;
  }
  v37->static_fields->_EventDailyPointEventId_k__BackingField = 0;
  if ( !byte_4BB1C96 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v30);
    v37 = TerminalPramsManager_TypeInfo;
    byte_4BB1C96 = 1;
  }
  if ( !v37->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v37);
    v37 = TerminalPramsManager_TypeInfo;
  }
  v37->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = 0LL;
  if ( !byte_4BB1C97 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v30);
    v37 = TerminalPramsManager_TypeInfo;
    byte_4BB1C97 = 1;
  }
  if ( !v37->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v37);
    v37 = TerminalPramsManager_TypeInfo;
  }
  v37->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
  if ( !byte_4BB1C98 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v30);
    v37 = TerminalPramsManager_TypeInfo;
    byte_4BB1C98 = 1;
  }
  if ( !v37->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v37);
    v37 = TerminalPramsManager_TypeInfo;
  }
  v37->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
  if ( !byte_4BB1345 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v30);
    v37 = TerminalPramsManager_TypeInfo;
    byte_4BB1345 = 1;
  }
  if ( !v37->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v37);
    v37 = TerminalPramsManager_TypeInfo;
  }
  p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v37->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  p_BeforeEventSubmarineSaveData_k__BackingField->klass = 0LL;
  sub_1C13CC8(p_BeforeEventSubmarineSaveData_k__BackingField, 0LL, v31, v32, v33, v34, v35, v36);
  v39 = StringLiteral_1/*""*/;
  p_lastPlayBgmName = (PartyOrganizationUtility_o *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayBgmName;
  p_lastPlayBgmName->klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  sub_1C13CC8(p_lastPlayBgmName, (int64_t)v39, v41, v42, v43, v44, v45, v46);
  v54 = TerminalPramsManager_TypeInfo;
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayQuestConsumeAp = 0LL;
  if ( !byte_4BB1C99 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v47);
    v54 = TerminalPramsManager_TypeInfo;
    byte_4BB1C99 = 1;
  }
  if ( !v54->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v54);
    v54 = TerminalPramsManager_TypeInfo;
  }
  v55 = v54->static_fields;
  v55->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v55->_SpecifiedChangeSceneInfo_k__BackingField,
    0LL,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  if ( !byte_4BB19D8 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v56);
    byte_4BB19D8 = 1;
  }
  v57 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v57->static_fields->_EventBoardGameSquareIndex_k__BackingField = 0;
  if ( !byte_4BB19DA )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v56);
    v57 = TerminalPramsManager_TypeInfo;
    byte_4BB19DA = 1;
  }
  if ( !v57->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v57);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v57->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = 0;
  if ( !byte_4BB19DC )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v56);
    v57 = TerminalPramsManager_TypeInfo;
    byte_4BB19DC = 1;
  }
  if ( !v57->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v57);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v57->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
  if ( !byte_4BB1C8D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v56);
    v57 = TerminalPramsManager_TypeInfo;
    byte_4BB1C8D = 1;
  }
  if ( !v57->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v57);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v57->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v57);
  TerminalPramsManager__ResetResumeScriptWithMap(v58);
  if ( !byte_4BB1827 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v59);
    byte_4BB1827 = 1;
  }
  v66 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v66 = TerminalPramsManager_TypeInfo;
  }
  v66->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
  v67 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( !byte_4BB1C9A )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v59);
    v66 = TerminalPramsManager_TypeInfo;
    byte_4BB1C9A = 1;
  }
  if ( !v66->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v66);
    v66 = TerminalPramsManager_TypeInfo;
  }
  p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v66->static_fields->_PlayedTerminalEffects_k__BackingField;
  p_PlayedTerminalEffects_k__BackingField->klass = v67;
  sub_1C13CC8(p_PlayedTerminalEffects_k__BackingField, (int64_t)v67, v60, v61, v62, v63, v64, v65);
  if ( !byte_4BB1AB9 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
    byte_4BB1AB9 = 1;
  }
  v76 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = 0;
  if ( !byte_4BB1ABA )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4BB1ABA = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = 0;
  if ( !byte_4BB19C9 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4BB19C9 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v77 = v76->static_fields;
  v77->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  *(_QWORD *)&v77->ConnectMarkEventId = 0LL;
  if ( !byte_4BAF376 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4BAF376 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField = 0;
  if ( !byte_4BB1C9B )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4BB1C9B = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_isFortificationCheck_k__BackingField = 0;
  if ( !byte_4BB1C9C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4BB1C9C = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !byte_4BB1C9D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4BB1C9D = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !byte_4BB19D1 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4BB19D1 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4BB182D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4BB182D = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_4BB19CF )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4BB19CF = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_4BB19D0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4BB19D0 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_4BB19CE )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4BB19CE = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_4BB19D1 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4BB19D1 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4BB19C3 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4BB19C3 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 0.0;
  if ( !byte_4BB1C9E )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4BB1C9E = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  if ( !byte_4BB15B9 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4BB15B9 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_4BAFB72 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4BAFB72 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_PlayerGenderType_k__BackingField = 0;
  if ( !byte_4BB1C9F )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4BB1C9F = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  v78 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( !byte_4BB19D6 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4BB19D6 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  p_SceneMoveQuestClearedInfo_k__BackingField = (PartyOrganizationUtility_o *)&v76->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
  p_SceneMoveQuestClearedInfo_k__BackingField->klass = v78;
  sub_1C13CC8(p_SceneMoveQuestClearedInfo_k__BackingField, (int64_t)v78, v70, v71, v72, v73, v74, v75);
  if ( !byte_4BB1CA0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v80);
    byte_4BB1CA0 = 1;
  }
  v87 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v87 = TerminalPramsManager_TypeInfo;
  }
  v88 = v87->static_fields;
  v88->_CampaignBonus_k__BackingField = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v88->_CampaignBonus_k__BackingField, 0LL, v81, v82, v83, v84, v85, v86);
  if ( !byte_4BB1CA1 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v89);
    byte_4BB1CA1 = 1;
  }
  v96 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v96 = TerminalPramsManager_TypeInfo;
  }
  v97 = v96->static_fields;
  v97->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v97->_CampaignDirectBonus_k__BackingField,
    0LL,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  if ( !byte_4BB1CA2 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v98);
    byte_4BB1CA2 = 1;
  }
  v105 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v105 = TerminalPramsManager_TypeInfo;
  }
  v105->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
  v106 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4BAF379 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v98);
    v105 = TerminalPramsManager_TypeInfo;
    byte_4BAF379 = 1;
  }
  if ( !v105->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v105);
    v105 = TerminalPramsManager_TypeInfo;
  }
  v107 = v105->static_fields;
  v107->_TransitionScrollTabName_k__BackingField = v106;
  sub_1C13CC8(
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

  if ( (byte_4BB1C88 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C88 = 1;
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
      sub_1C13F80(v2, v1);
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
      sub_1C13F88(v2, v1);
    v6 = (char *)v5 + 4 * i;
    *((_DWORD *)v6 + 8) = 0;
  }
}


bool __fastcall TerminalPramsManager__IsAuto(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4BB1C28 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C28 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1258 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1258 = 1;
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
  if ( !byte_4BB1C8A )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C8A = 1;
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

  if ( (byte_4BB1C2A & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventDetailMaster___, v1);
    sub_1C13D24(&Method_DataManager_GetMasterData_WarMaster___, v2);
    sub_1C13D24(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_1C13D24(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v6);
    byte_4BB1C2A = 1;
  }
  entity = 0LL;
  v14 = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1258 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1258 = 1;
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
  if ( !byte_4BB1250 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1250 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_WarId_k__BackingField < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1250 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
    byte_4BB1250 = 1;
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
          (const MethodInfo_3238670 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !entity)
    || !Instance )
  {
LABEL_34:
    sub_1C13F80(Instance, v10);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v14,
          (int32_t)entity[6].klass,
          (const MethodInfo_3238670 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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

  if ( (byte_4BB1C85 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&Method_System_Nullable_int__GetValueOrDefault__, v3);
    sub_1C13D24(&Method_System_Nullable_int___ctor__, v4);
    sub_1C13D24(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    byte_4BB1C85 = 1;
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      sub_1C13F80(0LL, v9);
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, targetWarId, 0LL);
    if ( WarInfoByWarID )
    {
      WarInfoByWarID = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)WarInfoByWarID, 0LL);
      if ( WarInfoByWarID )
      {
        v10 = *((_DWORD *)WarInfoByWarID + 31);
        v13 = (System_Nullable_int__o)&v12;
        v12 = 0LL;
        System_Nullable_int____ctor(v13, v10, (const MethodInfo_37493FC *)Method_System_Nullable_int___ctor__);
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

  if ( (byte_4BB1C58 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11626/*"SAME_CLASS_MULI_EXP"*/, v2);
    byte_4BB1C58 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB19CD )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB19CD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11626/*"SAME_CLASS_MULI_EXP"*/,
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

  if ( (byte_4BB1C83 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestMaster___, v4);
    sub_1C13D24(&DataManager_TypeInfo, v5);
    sub_1C13D24(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v6);
    byte_4BB1C83 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestMaster___);
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
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !entity
    || (v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
        Master_object = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0LL),
        !v9) )
  {
LABEL_20:
    sub_1C13F80(Master_object, v8);
  }
  Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v9,
                                     &v13,
                                     (int32_t)Master_object,
                                     (const MethodInfo_3238670 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
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

  if ( (byte_4BB1C75 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_WarMaster___, v3);
    sub_1C13D24(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_1C13D24(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BB1C75 = 1;
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
            (const MethodInfo_2FA7350 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_WarMaster___);
        if ( Instance )
        {
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       &entity,
                                       warId,
                                       (const MethodInfo_3238670 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( entity )
            return LODWORD(entity[6].klass) == 0;
        }
      }
      sub_1C13F80(Instance, v11);
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

  if ( (byte_4BB1C76 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_SpotMaster___, v3);
    sub_1C13D24(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v6);
    byte_4BB1C76 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_SpotMaster___),
        !entity)
    || (v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (Il2CppObject *)QuestEntity__getSpotId(entity, 0LL),
        !v9) )
  {
LABEL_16:
    sub_1C13F80(Instance, v8);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               v9,
                               &v13,
                               (int32_t)Instance,
                               (const MethodInfo_3238670 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
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

  if ( (byte_4BB1C74 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_Contains_int___, v3);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v4);
    byte_4BB1C74 = 1;
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
         (const MethodInfo_2FA7350 *)Method_System_Linq_Enumerable_Contains_int___) )
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

  if ( (byte_4BB1C68 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__Contains__, method);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v3);
    byte_4BB1C68 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v4->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1C13F80(0LL, method);
  return System_Collections_Generic_HashSet_int___Contains(
           loginQuestNotifiedList,
           questId,
           (const MethodInfo_34E09CC *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BB1C51 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11632/*"SAVEKEY_BlankEarthSpotId"*/, v2);
    byte_4BB1C51 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB182B )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB182B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11632/*"SAVEKEY_BlankEarthSpotId"*/,
    v3->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BB1C50 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11631/*"SAVEKEY_BlankEarthRank"*/, v2);
    byte_4BB1C50 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB182A )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB182A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11631/*"SAVEKEY_BlankEarthRank"*/,
    v3->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectNt2AfterAction_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BB1C52 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11633/*"SAVEKEY_CampaignDirectBonus"*/, v2);
    byte_4BB1C52 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB19C8 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB19C8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11633/*"SAVEKEY_CampaignDirectBonus"*/,
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

  if ( (byte_4BB1C7F & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, *(_QWORD *)&day);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v6);
    byte_4BB1C7F = 1;
  }
  value = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CBF )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    byte_4BB1CBF = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_QWORD *)&v7[2].fields._entries->m_Items[17].fields.hashCode;
  if ( !v8 || (v7 = *(System_Collections_Generic_Dictionary_int__object__o **)(v8 + 16)) == 0LL )
    sub_1C13F80(v7, *(_QWORD *)&day);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         v7,
         eventId,
         &value,
         (const MethodInfo_3293A34 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v9 = (char)value;
    if ( value )
      v9 = System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             day,
             (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__);
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

  if ( (byte_4BB1C61 & 1) == 0 )
  {
    sub_1C13D24(&ScrTerminalListTop_TypeInfo, v1);
    sub_1C13D24(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v2);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v3);
    byte_4BB1C61 = 1;
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v9 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v9 )
LABEL_34:
    sub_1C13F80(Instance, v7);
  if ( !clsQuestCheck__IsWarClear(
          v9,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
          0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BAF44D )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
      byte_4BAF44D = 1;
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
      if ( !byte_4BAF44C )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
        byte_4BAF44C = 1;
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
  if ( (byte_4BB1C5F & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_43/*"\n"*/, v2);
    sub_1C13D24(&StringLiteral_89/*"\r\n"*/, v3);
    byte_4BB1C5F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CA9 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1CA9 = 1;
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
  if ( !byte_4BB1CA9 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    byte_4BB1CA9 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  PlayedTerminalEffects_k__BackingField = v7->static_fields->_PlayedTerminalEffects_k__BackingField;
  if ( !PlayedTerminalEffects_k__BackingField
    || (PlayedTerminalEffects_k__BackingField = System_String__Replace_62987572(
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
    sub_1C13F80(PlayedTerminalEffects_k__BackingField, v5);
  }
  klass = PlayedTerminalEffects_k__BackingField[1].klass;
  v10 = PlayedTerminalEffects_k__BackingField;
  if ( (int)klass >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)klass )
        sub_1C13F88(PlayedTerminalEffects_k__BackingField, v5);
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
  if ( (byte_4BB1C63 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_43/*"\n"*/, v2);
    sub_1C13D24(&StringLiteral_89/*"\r\n"*/, v3);
    byte_4BB1C63 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  mTerminalWarStartedIds = v4->static_fields->mTerminalWarStartedIds;
  if ( !mTerminalWarStartedIds
    || (mTerminalWarStartedIds = System_String__Replace_62987572(
                                   mTerminalWarStartedIds,
                                   (System_String_o *)StringLiteral_89/*"\r\n"*/,
                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                   0LL)) == 0LL
    || (mTerminalWarStartedIds = (System_String_o *)System_String__Split(mTerminalWarStartedIds, 0xAu, 0, 0LL)) == 0LL )
  {
    sub_1C13F80(mTerminalWarStartedIds, method);
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
        sub_1C13F88(mTerminalWarStartedIds, method);
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

  if ( (byte_4BB1C4F & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_13841/*"Terminal/MapModels/{0:D4}_{1}"*/, v2);
    byte_4BB1C4F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13841/*"Terminal/MapModels/{0:D4}_{1}"*/, v3->static_fields->panelEventPoint, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayBgmNameSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BB1C4D & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11628/*"SAME_SVTEQUIP_COMBINE"*/, v2);
    byte_4BB1C4D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11628/*"SAME_SVTEQUIP_COMBINE"*/, v3->static_fields->lastPlayBgmName, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BB1C4E & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11629/*"SAMPLERANGE_{0}"*/, v2);
    byte_4BB1C4E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11629/*"SAMPLERANGE_{0}"*/,
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
  Il2CppObject *String_70680264; // x19
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
  __int64 v246; // x1
  TerminalPramsManager_c *v247; // x0
  TerminalPramsManager_c *v248; // x8
  TerminalPramsManager_c *v249; // x0

  if ( (byte_4BB1C79 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_1C13D24(&Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___, v2);
    sub_1C13D24(&JsonManager_TypeInfo, v3);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v4);
    byte_4BB1C79 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB181C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB181C = 1;
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
      String_70680264 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70680264(
                                          v7->static_fields->SAVEKEY_CLEAR_REWARD_DISP,
                                          0LL);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v15 = JsonManager__Deserialize_object_(
              String_70680264,
              (const MethodInfo_2FF6B7C *)Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
      v16 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestClearHeroineInfo = (PartyOrganizationUtility_o *)&v16->static_fields->mQuestClearHeroineInfo;
      p_mQuestClearHeroineInfo->klass = 0LL;
      sub_1C13CC8(p_mQuestClearHeroineInfo, 0LL, v9, v10, v11, v12, v13, v14);
      if ( !v15 )
        sub_1C13F80(v18, v19);
      klass = v15[1].klass;
      if ( !klass )
        sub_1C13F80(v18, v19);
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
        sub_1C13CC8(v36, (int64_t)Load, v28, v29, v30, v31, v32, v33);
      }
      v37 = (__int64)TerminalPramsManager_TypeInfo;
      monitor = (char)v15[2].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BB1498 )
      {
        v37 = sub_1C13D24(&TerminalPramsManager_TypeInfo, v19);
        byte_4BB1498 = 1;
      }
      v39 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v39 = TerminalPramsManager_TypeInfo;
      }
      v39->static_fields->_IsQuestClear_k__BackingField = monitor;
      v40 = BYTE1(v15[2].monitor);
      if ( !byte_4BB1499 )
      {
        v37 = sub_1C13D24(&TerminalPramsManager_TypeInfo, v19);
        v39 = TerminalPramsManager_TypeInfo;
        byte_4BB1499 = 1;
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
        sub_1C13F80(v37, v19);
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
      sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->mQuestRewardInfos, v43, v20, v21, v22, v23, v24, v25);
      v52 = v15[2].klass;
      if ( !v52 )
        sub_1C13F80(v44, v45);
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
      sub_1C13CC8(p_mQuestPhaseRewardInfos, v54, v46, v47, v48, v49, v50, v51);
      v64 = TerminalPramsManager_TypeInfo;
      v65 = TerminalPramsManager_TypeInfo->static_fields;
      *(_QWORD *)&v65->clearLastBattleRaidId = *(void **)((char *)&v15[2].monitor + 4);
      v65->joinGroupId = HIDWORD(v15[3].klass);
      v66 = v15[3].monitor;
      if ( !v66 )
        sub_1C13F80(v56, v57);
      if ( v66[3] )
        v67 = (int64_t)v15[3].monitor;
      else
        v67 = 0LL;
      if ( !v64->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v64);
      if ( !byte_4BB1CB5 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v57);
        byte_4BB1CB5 = 1;
      }
      v68 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v68 = TerminalPramsManager_TypeInfo;
      }
      v69 = v68->static_fields;
      v69->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v67;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v69->_oldSuperBoss_k__BackingField, v67, v58, v59, v60, v61, v62, v63);
      v78 = v15[4].klass;
      if ( !v78 )
        sub_1C13F80(v70, v71);
      if ( v78->_1.namespaze )
        v79 = (int64_t)v15[4].klass;
      else
        v79 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BB1CB6 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v71);
        byte_4BB1CB6 = 1;
      }
      v80 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v80 = TerminalPramsManager_TypeInfo;
      }
      v81 = v80->static_fields;
      v81->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v79;
      sub_1C13CC8(
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
        sub_1C13F80(v82, v83);
      if ( v90[4] <= 0 )
        v91 = 0LL;
      else
        v91 = (int64_t)v15[4].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BB1CAF )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v83);
        byte_4BB1CAF = 1;
      }
      v92 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v92 = TerminalPramsManager_TypeInfo;
      }
      p_eventPointWinReward_k__BackingField = (PartyOrganizationUtility_o *)&v92->static_fields->_eventPointWinReward_k__BackingField;
      p_eventPointWinReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v91;
      sub_1C13CC8(p_eventPointWinReward_k__BackingField, v91, v84, v85, v86, v87, v88, v89);
      v102 = (int32_t)v15[5].klass;
      if ( !byte_4BB1CB0 )
      {
        v94 = sub_1C13D24(&TerminalPramsManager_TypeInfo, v95);
        byte_4BB1CB0 = 1;
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
        sub_1C13F80(v94, v95);
      if ( v104[4] <= 0 )
        v105 = 0LL;
      else
        v105 = (int64_t)v15[5].monitor;
      if ( !v103->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v103);
      if ( !byte_4BB19D7 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v95);
        byte_4BB19D7 = 1;
      }
      v106 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v106 = TerminalPramsManager_TypeInfo;
      }
      p_eventRaceBoost_k__BackingField = (PartyOrganizationUtility_o *)&v106->static_fields->_eventRaceBoost_k__BackingField;
      p_eventRaceBoost_k__BackingField->klass = (PartyOrganizationUtility_c *)v105;
      sub_1C13CC8(p_eventRaceBoost_k__BackingField, v105, v96, v97, v98, v99, v100, v101);
      v116 = v15[6].klass;
      if ( !v116 )
        sub_1C13F80(v108, v109);
      if ( v116->_1.namespaze )
        v117 = (int64_t)v15[6].klass;
      else
        v117 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BB1AB8 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v109);
        byte_4BB1AB8 = 1;
      }
      v118 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v118 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeRelease_k__BackingField = (PartyOrganizationUtility_o *)&v118->static_fields->_questClearCostumeRelease_k__BackingField;
      p_questClearCostumeRelease_k__BackingField->klass = (PartyOrganizationUtility_c *)v117;
      sub_1C13CC8(p_questClearCostumeRelease_k__BackingField, v117, v110, v111, v112, v113, v114, v115);
      v128 = v15[6].monitor;
      if ( !v128 )
        sub_1C13F80(v120, v121);
      if ( v128[3] )
        v129 = (int64_t)v15[6].monitor;
      else
        v129 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BB1819 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v121);
        byte_4BB1819 = 1;
      }
      v130 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v130 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeGet_k__BackingField = (PartyOrganizationUtility_o *)&v130->static_fields->_questClearCostumeGet_k__BackingField;
      p_questClearCostumeGet_k__BackingField->klass = (PartyOrganizationUtility_c *)v129;
      sub_1C13CC8(p_questClearCostumeGet_k__BackingField, v129, v122, v123, v124, v125, v126, v127);
      v140 = v15[7].klass;
      if ( !v140 )
        sub_1C13F80(v132, v133);
      if ( SLODWORD(v140->_1.name) <= 0 )
        v141 = 0LL;
      else
        v141 = (int64_t)v15[7].klass;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BB1CB3 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v133);
        byte_4BB1CB3 = 1;
      }
      v142 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v142 = TerminalPramsManager_TypeInfo;
      }
      p_eventTowerReward_k__BackingField = (PartyOrganizationUtility_o *)&v142->static_fields->_eventTowerReward_k__BackingField;
      p_eventTowerReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v141;
      sub_1C13CC8(p_eventTowerReward_k__BackingField, v141, v134, v135, v136, v137, v138, v139);
      v152 = v15[7].monitor;
      if ( !v152 )
        sub_1C13F80(v144, v145);
      v153 = v152[3];
      if ( v153 )
      {
        if ( !(_DWORD)v153 )
          sub_1C13F88(v144, v145);
        v154 = v152[4];
        if ( !v154 )
          sub_1C13F80(v144, v145);
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
      if ( !byte_4BB1CB4 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v145);
        byte_4BB1CB4 = 1;
      }
      v156 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v156 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventTowerRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v156->static_fields->_resultEventTowerRewardInfo_k__BackingField;
      p_resultEventTowerRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v155;
      sub_1C13CC8(p_resultEventTowerRewardInfo_k__BackingField, v155, v146, v147, v148, v149, v150, v151);
      v166 = v15[8].klass;
      if ( !v166 )
        sub_1C13F80(v158, v159);
      if ( v166->_1.namespaze )
        v167 = (int64_t)v15[8].klass;
      else
        v167 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BB1813 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v159);
        byte_4BB1813 = 1;
      }
      v168 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v168 = TerminalPramsManager_TypeInfo;
      }
      p_resultBoostItemRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v168->static_fields->_resultBoostItemRewardInfo_k__BackingField;
      p_resultBoostItemRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v167;
      sub_1C13CC8(p_resultBoostItemRewardInfo_k__BackingField, v167, v160, v161, v162, v163, v164, v165);
      v178 = v15[8].monitor;
      if ( !v178 )
        sub_1C13F80(v170, v171);
      if ( v178[3] )
        v179 = (int64_t)v15[8].monitor;
      else
        v179 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BB1814 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v171);
        byte_4BB1814 = 1;
      }
      v180 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v180 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventBoardGameTokenRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v180->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
      p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v179;
      sub_1C13CC8(p_resultEventBoardGameTokenRewardInfo_k__BackingField, v179, v172, v173, v174, v175, v176, v177);
      v190 = (char)v15[9].klass;
      if ( !byte_4BB04AF )
      {
        v182 = sub_1C13D24(&TerminalPramsManager_TypeInfo, v183);
        byte_4BB04AF = 1;
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
        sub_1C13F80(v182, v183);
      if ( v192[3] )
        v193 = (int64_t)v15[9].monitor;
      else
        v193 = 0LL;
      if ( !v191->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v191);
      if ( !byte_4BB181E )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v183);
        byte_4BB181E = 1;
      }
      v194 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v194 = TerminalPramsManager_TypeInfo;
      }
      p_warClearReward_k__BackingField = (PartyOrganizationUtility_o *)&v194->static_fields->_warClearReward_k__BackingField;
      p_warClearReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v193;
      sub_1C13CC8(p_warClearReward_k__BackingField, v193, v184, v185, v186, v187, v188, v189);
      v204 = (int32_t)v15[10].klass;
      if ( !byte_4BAF549 )
      {
        v196 = sub_1C13D24(&TerminalPramsManager_TypeInfo, v197);
        byte_4BAF549 = 1;
      }
      v205 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v205 = TerminalPramsManager_TypeInfo;
      }
      v205->static_fields->_EventActivityPointEffectState_k__BackingField = v204;
      v206 = BYTE4(v15[10].klass);
      if ( !byte_4BB181B )
      {
        v196 = sub_1C13D24(&TerminalPramsManager_TypeInfo, v197);
        v205 = TerminalPramsManager_TypeInfo;
        byte_4BB181B = 1;
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
        sub_1C13F80(v196, v197);
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
      sub_1C13CC8(
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
        sub_1C13F80(v210, v211);
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
      sub_1C13CC8(p_mResultEventPanelRewardInfos, v220, v212, v213, v214, v215, v216, v217);
      v229 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = (int32_t)v15[11].monitor;
      v230 = (int64_t)v15[12].klass;
      if ( !byte_4BB1817 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v222);
        v229 = TerminalPramsManager_TypeInfo;
        byte_4BB1817 = 1;
      }
      if ( !v229->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v229);
        v229 = TerminalPramsManager_TypeInfo;
      }
      p_limitImageAnnounces_k__BackingField = (PartyOrganizationUtility_o *)&v229->static_fields->_limitImageAnnounces_k__BackingField;
      p_limitImageAnnounces_k__BackingField->klass = (PartyOrganizationUtility_c *)v230;
      sub_1C13CC8(p_limitImageAnnounces_k__BackingField, v230, v223, v224, v225, v226, v227, v228);
      v239 = (char)v15[12].monitor;
      if ( !byte_4BB149C )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v232);
        byte_4BB149C = 1;
      }
      v240 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v240 = TerminalPramsManager_TypeInfo;
      }
      v240->static_fields->_IsOrdealCallWarClear_k__BackingField = v239;
      monitor_high = HIDWORD(v15[12].monitor);
      if ( !byte_4BB180E )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v232);
        v240 = TerminalPramsManager_TypeInfo;
        byte_4BB180E = 1;
      }
      if ( !v240->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v240);
        v240 = TerminalPramsManager_TypeInfo;
      }
      v240->static_fields->_EventMuralId_k__BackingField = monitor_high;
      v242 = (int32_t)v15[13].klass;
      if ( !byte_4BB19D4 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v232);
        v240 = TerminalPramsManager_TypeInfo;
        byte_4BB19D4 = 1;
      }
      if ( !v240->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v240);
        v240 = TerminalPramsManager_TypeInfo;
      }
      v240->static_fields->_EventActionQuestId_k__BackingField = v242;
      v243 = BYTE4(v15[13].klass);
      if ( !byte_4BB1810 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v232);
        v240 = TerminalPramsManager_TypeInfo;
        byte_4BB1810 = 1;
      }
      if ( !v240->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v240);
        v240 = TerminalPramsManager_TypeInfo;
      }
      v240->static_fields->_PlayHappinessCounterEffect_k__BackingField = v243;
      v244 = (int64_t)v15[13].monitor;
      if ( !byte_4BB1CAD )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v232);
        v240 = TerminalPramsManager_TypeInfo;
        byte_4BB1CAD = 1;
      }
      if ( !v240->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v240);
        v240 = TerminalPramsManager_TypeInfo;
      }
      p_OldUserEventPoint_k__BackingField = (PartyOrganizationUtility_o *)&v240->static_fields->_OldUserEventPoint_k__BackingField;
      p_OldUserEventPoint_k__BackingField->klass = (PartyOrganizationUtility_c *)v244;
      sub_1C13CC8(p_OldUserEventPoint_k__BackingField, v244, v233, v234, v235, v236, v237, v238);
      v247 = TerminalPramsManager_TypeInfo;
      if ( BYTE1(v15[2].monitor) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BAF54B )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v246);
          byte_4BAF54B = 1;
        }
        v247 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v247 = TerminalPramsManager_TypeInfo;
        }
        v247->static_fields->_IsAutoResume_k__BackingField = 1;
      }
      if ( !v247->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v247);
      if ( !byte_4BB181D )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v246);
        byte_4BB181D = 1;
      }
      v248 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v248 = TerminalPramsManager_TypeInfo;
      }
      if ( v248->static_fields->_warClearReward_k__BackingField )
        goto LABEL_265;
      if ( !v248->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v248);
      if ( !byte_4BB181A )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v246);
        byte_4BB181A = 1;
      }
      v248 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v248 = TerminalPramsManager_TypeInfo;
      }
      if ( v248->static_fields->_IsPlayScriptWithMap_k__BackingField )
      {
LABEL_265:
        if ( !v248->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v248);
        if ( !byte_4BB1CBD )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v246);
          byte_4BB1CBD = 1;
        }
        v249 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v249 = TerminalPramsManager_TypeInfo;
        }
        v249->static_fields->_isQuestRewardSetted_k__BackingField = 1;
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

  if ( (byte_4BB1C7C & 1) == 0 )
  {
    sub_1C13D24(&EventRaidDefeatedEffectInfo_TypeInfo, v1);
    sub_1C13D24(&string_TypeInfo, v2);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v3);
    sub_1C13D24(&StringLiteral_11627/*"SAME_SERVANT"*/, v4);
    byte_4BB1C7C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CBF )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1CBF = 1;
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
               (System_String_o *)StringLiteral_11627/*"SAME_SERVANT"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v7 = (EventRaidDefeatedEffectInfo_o *)sub_1C13F70(EventRaidDefeatedEffectInfo_TypeInfo);
    EventRaidDefeatedEffectInfo___ctor(v7, String, v8);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1CBE )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v9);
      byte_4BB1CBE = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v16->static_fields;
    static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = v7;
    sub_1C13CC8(
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

  if ( (byte_4BB1C81 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v1);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v2);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1C13D24(&string_TypeInfo, v4);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_11636/*"SAVEKEY_ConnectMarkEventId"*/, v6);
    byte_4BB1C81 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB124D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB124D = 1;
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
               (System_String_o *)StringLiteral_11636/*"SAVEKEY_ConnectMarkEventId"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v9,
      (const MethodInfo_3288E14 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
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
          sub_1C13F88(v10, v11);
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
                (const MethodInfo_32897D8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
        }
        max_length = v19->max_length;
        if ( (int)++v20 >= max_length )
          goto LABEL_27;
      }
LABEL_35:
      sub_1C13F80(v10, v11);
    }
LABEL_27:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1CC0 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v11);
      byte_4BB1CC0 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    p_QuestRandomGroupList_k__BackingField = (PartyOrganizationUtility_o *)&v22->static_fields->_QuestRandomGroupList_k__BackingField;
    p_QuestRandomGroupList_k__BackingField->klass = (PartyOrganizationUtility_c *)v9;
    sub_1C13CC8(p_QuestRandomGroupList_k__BackingField, (int64_t)v9, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall TerminalPramsManager__LoadQuestReleasedFocusState(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x0

  if ( (byte_4BB1C6A & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C6A = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v2);
  if ( !QuestFocusStateManager
    || (QuestFocusStateManager__ClearQuestFocusStateDataList(QuestFocusStateManager, 0LL),
        (QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager(v5)) == 0LL) )
  {
    sub_1C13F80(QuestFocusStateManager, v4);
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
  int32_t Int_70679696; // w19
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
  System_String_o *String_70680264; // x20
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

  if ( (byte_4BB1C3C & 1) == 0 )
  {
    sub_1C13D24(&System_Convert_TypeInfo, v1);
    sub_1C13D24(&Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____, v2);
    sub_1C13D24(&Method_JsonManager_Deserialize_EventConquestInfo_____, v3);
    sub_1C13D24(&Method_JsonManager_Deserialize_EventHarvestGrowthInfo___, v4);
    sub_1C13D24(&Method_JsonManager_Deserialize_EventSaveData___, v5);
    sub_1C13D24(&JsonManager_TypeInfo, v6);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_11628/*"SAME_SVTEQUIP_COMBINE"*/, v8);
    sub_1C13D24(&StringLiteral_13838/*"Terminal/LoginBonus/FortuneBonus"*/, v9);
    sub_1C13D24(&StringLiteral_11634/*"SAVEKEY_ClearEventQuestIds"*/, v10);
    sub_1C13D24(&StringLiteral_13834/*"Terminal/EarthCore/{0:D2}"*/, v11);
    sub_1C13D24(&StringLiteral_11622/*"S"*/, v12);
    sub_1C13D24(&StringLiteral_11629/*"SAMPLERANGE_{0}"*/, v13);
    sub_1C13D24(&StringLiteral_11641/*"SAVEKEY_MapModelClearQuestInfo"*/, v14);
    sub_1C13D24(&StringLiteral_11639/*"SAVEKEY_LastPlayBgmName"*/, v15);
    sub_1C13D24(&StringLiteral_13839/*"Terminal/LoginBonus/LoginBonusWithTransition"*/, v16);
    sub_1C13D24(&StringLiteral_13836/*"Terminal/EventFolder/Capter{0:D4}"*/, v17);
    sub_1C13D24(&StringLiteral_13845/*"TerminalBaseMap"*/, v18);
    sub_1C13D24(&StringLiteral_11638/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v19);
    sub_1C13D24(&StringLiteral_13853/*"TerminalLastPanelEventPoint"*/, v20);
    sub_1C13D24(&StringLiteral_13837/*"Terminal/Info"*/, v21);
    sub_1C13D24(&StringLiteral_11631/*"SAVEKEY_BlankEarthRank"*/, v22);
    sub_1C13D24(&StringLiteral_13840/*"Terminal/MapImgs/"*/, v23);
    sub_1C13D24(&StringLiteral_11630/*"SAVEKEY_"*/, v24);
    sub_1C13D24(&StringLiteral_11635/*"SAVEKEY_ConnectMarkAnimationId"*/, v25);
    sub_1C13D24(&StringLiteral_11620/*"Russian"*/, v26);
    sub_1C13D24(&StringLiteral_13841/*"Terminal/MapModels/{0:D4}_{1}"*/, v27);
    sub_1C13D24(&StringLiteral_11640/*"SAVEKEY_LastPlayQuestConsumeType"*/, v28);
    sub_1C13D24(&StringLiteral_11623/*"S256"*/, v29);
    sub_1C13D24(&StringLiteral_11632/*"SAVEKEY_BlankEarthSpotId"*/, v30);
    sub_1C13D24(&StringLiteral_5314/*"Debug_IsBuildInfoDisp"*/, v31);
    sub_1C13D24(&StringLiteral_5311/*"DebugTestScene"*/, v32);
    sub_1C13D24(&StringLiteral_13848/*"TerminalBeforeEventSubmarinePointData"*/, v33);
    sub_1C13D24(&StringLiteral_11637/*"SAVEKEY_DataLostBattleAutoReset"*/, v34);
    sub_1C13D24(&StringLiteral_11643/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v35);
    sub_1C13D24(&StringLiteral_13852/*"TerminalIsDoneShortcut"*/, v36);
    sub_1C13D24(&StringLiteral_13857/*"TerminalPhaseCnt"*/, v37);
    sub_1C13D24(&StringLiteral_13850/*"TerminalEndTime"*/, v38);
    sub_1C13D24(&StringLiteral_13854/*"TerminalLastPlayedFreeQuestSpotId"*/, v39);
    sub_1C13D24(&StringLiteral_13835/*"Terminal/Effect"*/, v40);
    sub_1C13D24(&StringLiteral_11621/*"Russian (Russia)"*/, v41);
    sub_1C13D24(&StringLiteral_11626/*"SAME_CLASS_MULI_EXP"*/, v42);
    sub_1C13D24(&StringLiteral_13858/*"TerminalPlayerIcon"*/, v43);
    sub_1C13D24(&StringLiteral_11625/*"S>"*/, v44);
    sub_1C13D24(&StringLiteral_13842/*"Terminal/OrdealCall"*/, v45);
    sub_1C13D24(&StringLiteral_11624/*"S="*/, v46);
    sub_1C13D24(&StringLiteral_11633/*"SAVEKEY_CampaignDirectBonus"*/, v47);
    sub_1C13D24(&StringLiteral_1/*""*/, v48);
    sub_1C13D24(&StringLiteral_13843/*"Terminal/QuestMap/Capter{0:D4}"*/, v49);
    sub_1C13D24(&StringLiteral_5310/*"DebugLogHandler"*/, v50);
    sub_1C13D24(&StringLiteral_11642/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v51);
    byte_4BB1C3C = 1;
  }
  v52 = (System_String_o *)StringLiteral_13837/*"Terminal/Info"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13837/*"Terminal/Info"*/, 0LL) )
  {
    Int_70679696 = UnityEngine_PlayerPrefs__GetInt_70679696(v52, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1253 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v53);
      byte_4BB1253 = 1;
    }
    v55 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v55 = TerminalPramsManager_TypeInfo;
    }
    v55->static_fields->_DispState_k__BackingField = Int_70679696;
  }
  v56 = (System_String_o *)StringLiteral_13857/*"TerminalPhaseCnt"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13857/*"TerminalPhaseCnt"*/, 0LL) )
  {
    v58 = UnityEngine_PlayerPrefs__GetInt_70679696(v56, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1257 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v57);
      byte_4BB1257 = 1;
    }
    v59 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v59 = TerminalPramsManager_TypeInfo;
    }
    v59->static_fields->_WarId_k__BackingField = v58;
  }
  v60 = (System_String_o *)StringLiteral_13850/*"TerminalEndTime"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13850/*"TerminalEndTime"*/, 0LL) )
  {
    v62 = UnityEngine_PlayerPrefs__GetInt_70679696(v60, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1256 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v61);
      byte_4BB1256 = 1;
    }
    v63 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v63 = TerminalPramsManager_TypeInfo;
    }
    v63->static_fields->_SpotId_k__BackingField = v62;
  }
  v64 = (System_String_o *)StringLiteral_13848/*"TerminalBeforeEventSubmarinePointData"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13848/*"TerminalBeforeEventSubmarinePointData"*/, 0LL) )
  {
    v66 = UnityEngine_PlayerPrefs__GetInt_70679696(v64, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1251 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v65);
      byte_4BB1251 = 1;
    }
    v67 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v67 = TerminalPramsManager_TypeInfo;
    }
    v67->static_fields->_QuestId_k__BackingField = v66;
  }
  v68 = (System_String_o *)StringLiteral_13843/*"Terminal/QuestMap/Capter{0:D4}"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13843/*"Terminal/QuestMap/Capter{0:D4}"*/, 0LL) )
  {
    v70 = UnityEngine_PlayerPrefs__GetInt_70679696(v68, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB14A6 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
      byte_4BB14A6 = 1;
    }
    v71 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v71 = TerminalPramsManager_TypeInfo;
    }
    v71->static_fields->_LastPlayedQuestId_k__BackingField = v70;
  }
  v72 = (System_String_o *)StringLiteral_13845/*"TerminalBaseMap"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13845/*"TerminalBaseMap"*/, 0LL) )
  {
    v74 = UnityEngine_PlayerPrefs__GetInt_70679696(v72, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1255 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v73);
      byte_4BB1255 = 1;
    }
    v75 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v75 = TerminalPramsManager_TypeInfo;
    }
    v75->static_fields->_PhaseCnt_k__BackingField = v74;
  }
  v76 = (System_String_o *)StringLiteral_13838/*"Terminal/LoginBonus/FortuneBonus"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13838/*"Terminal/LoginBonus/FortuneBonus"*/, 0LL) )
  {
    String_70680264 = UnityEngine_PlayerPrefs__GetString_70680264(v76, 0LL);
    v79 = 0LL;
    if ( System_String__op_Inequality(String_70680264, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v79 = System_Convert__ToInt64_63627232(String_70680264, 0LL);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1252 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v78);
      byte_4BB1252 = 1;
    }
    v80 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v80 = TerminalPramsManager_TypeInfo;
    }
    v80->static_fields->_EndTime_k__BackingField = v79;
  }
  v81 = (System_String_o *)StringLiteral_13840/*"Terminal/MapImgs/"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13840/*"Terminal/MapImgs/"*/, 0LL) )
  {
    v83 = UnityEngine_PlayerPrefs__GetInt_70679696(v81, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1254 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v82);
      byte_4BB1254 = 1;
    }
    v84 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v84 = TerminalPramsManager_TypeInfo;
    }
    v84->static_fields->_IsDoneShortcut_k__BackingField = v83 != 0;
  }
  v85 = (System_String_o *)StringLiteral_13858/*"TerminalPlayerIcon"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13858/*"TerminalPlayerIcon"*/, 0LL) )
  {
    v92 = UnityEngine_PlayerPrefs__GetString_70680264(v85, 0LL);
    v93 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v93 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v93->static_fields;
    static_fields->mTerminalWarStartedIds = v92;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->mTerminalWarStartedIds,
      (int64_t)v92,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
  }
  v95 = (System_String_o *)StringLiteral_5314/*"Debug_IsBuildInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5314/*"Debug_IsBuildInfoDisp"*/, 0LL) )
  {
    v97 = UnityEngine_PlayerPrefs__GetInt_70679696(v95, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1C91 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v96);
      byte_4BB1C91 = 1;
    }
    v98 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v98 = TerminalPramsManager_TypeInfo;
    }
    v98->static_fields->mDebug_IsQuestReleaseAll = v97 != 0;
  }
  v99 = (System_String_o *)StringLiteral_5311/*"DebugTestScene"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5311/*"DebugTestScene"*/, 0LL) )
  {
    v101 = UnityEngine_PlayerPrefs__GetInt_70679696(v99, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1C92 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v100);
      byte_4BB1C92 = 1;
    }
    v102 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v102 = TerminalPramsManager_TypeInfo;
    }
    v102->static_fields->mDebug_IsDummyErrorSelect = v101 != 0;
  }
  v103 = (System_String_o *)StringLiteral_5310/*"DebugLogHandler"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5310/*"DebugLogHandler"*/, 0LL) )
  {
    v105 = UnityEngine_PlayerPrefs__GetInt_70679696(v103, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1C93 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v104);
      byte_4BB1C93 = 1;
    }
    v106 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v106 = TerminalPramsManager_TypeInfo;
    }
    v106->static_fields->mDebug_IsBuildInfoDisp = v105 != 0;
  }
  v107 = (System_String_o *)StringLiteral_13853/*"TerminalLastPanelEventPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13853/*"TerminalLastPanelEventPoint"*/, 0LL) )
  {
    v109 = UnityEngine_PlayerPrefs__GetInt_70679696(v107, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB183A )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v108);
      byte_4BB183A = 1;
    }
    v110 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v110 = TerminalPramsManager_TypeInfo;
    }
    v110->static_fields->_TimeStatusEventId_k__BackingField = v109;
  }
  v111 = (System_String_o *)StringLiteral_13854/*"TerminalLastPlayedFreeQuestSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13854/*"TerminalLastPlayedFreeQuestSpotId"*/, 0LL) )
  {
    v113 = UnityEngine_PlayerPrefs__GetInt_70679696(v111, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB183B )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v112);
      byte_4BB183B = 1;
    }
    v114 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v114 = TerminalPramsManager_TypeInfo;
    }
    v114->static_fields->_TimeStatusLoopCount_k__BackingField = v113;
  }
  v115 = (System_String_o *)StringLiteral_13839/*"Terminal/LoginBonus/LoginBonusWithTransition"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13839/*"Terminal/LoginBonus/LoginBonusWithTransition"*/, 0LL) )
  {
    v117 = UnityEngine_PlayerPrefs__GetInt_70679696(v115, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1C95 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v116);
      byte_4BB1C95 = 1;
    }
    v118 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v118 = TerminalPramsManager_TypeInfo;
    }
    v118->static_fields->_EventDailyPointEventId_k__BackingField = v117;
  }
  v119 = (System_String_o *)StringLiteral_13852/*"TerminalIsDoneShortcut"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13852/*"TerminalIsDoneShortcut"*/, 0LL) )
  {
    v120 = UnityEngine_PlayerPrefs__GetString_70680264(v119, 0LL);
    v122 = 0LL;
    if ( !System_String__op_Equality(v120, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v122 = System_Convert__ToInt64_63627232(v120, 0LL);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1C96 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v121);
      byte_4BB1C96 = 1;
    }
    v123 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v123 = TerminalPramsManager_TypeInfo;
    }
    v123->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = v122;
  }
  v124 = (System_String_o *)StringLiteral_13834/*"Terminal/EarthCore/{0:D2}"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13834/*"Terminal/EarthCore/{0:D2}"*/, 0LL) )
  {
    v126 = UnityEngine_PlayerPrefs__GetInt_70679696(v124, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1C97 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v125);
      byte_4BB1C97 = 1;
    }
    v127 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v127 = TerminalPramsManager_TypeInfo;
    }
    v127->static_fields->_BeforeEventActivityPoint_k__BackingField = v126;
  }
  v128 = (System_String_o *)StringLiteral_13835/*"Terminal/Effect"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13835/*"Terminal/Effect"*/, 0LL) )
  {
    v130 = UnityEngine_PlayerPrefs__GetInt_70679696(v128, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1C98 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v129);
      byte_4BB1C98 = 1;
    }
    v131 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v131 = TerminalPramsManager_TypeInfo;
    }
    v131->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v130;
  }
  v132 = (System_String_o *)StringLiteral_13836/*"Terminal/EventFolder/Capter{0:D4}"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13836/*"Terminal/EventFolder/Capter{0:D4}"*/, 0LL) )
  {
    v133 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70680264(v132, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v141 = JsonManager__Deserialize_object_(
             v133,
             (const MethodInfo_2FF6B7C *)Method_JsonManager_Deserialize_EventSaveData___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1345 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v134);
      byte_4BB1345 = 1;
    }
    v142 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v142 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v142->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (PartyOrganizationUtility_c *)v141;
    sub_1C13CC8(p_BeforeEventSubmarineSaveData_k__BackingField, (int64_t)v141, v135, v136, v137, v138, v139, v140);
  }
  v144 = (System_String_o *)StringLiteral_11641/*"SAVEKEY_MapModelClearQuestInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11641/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL) )
  {
    v147 = UnityEngine_PlayerPrefs__GetInt_70679696(v144, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1C90 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v145);
      byte_4BB1C90 = 1;
    }
    v148 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v148 = TerminalPramsManager_TypeInfo;
    }
    v148->static_fields->_LastSelectQuestIndex_k__BackingField = v147;
    if ( !byte_4BB1250 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v145);
      v148 = TerminalPramsManager_TypeInfo;
      byte_4BB1250 = 1;
    }
    if ( !v148->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v148);
      v148 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v148->static_fields->_WarId_k__BackingField;
    if ( !byte_4BB1CA3 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v145);
      v148 = TerminalPramsManager_TypeInfo;
      byte_4BB1CA3 = 1;
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
  v150 = (System_String_o *)StringLiteral_11638/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11638/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, 0LL) )
  {
    v151 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70680264(v150, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v158 = JsonManager__Deserialize_object_(
             v151,
             (const MethodInfo_2FF6B7C *)Method_JsonManager_Deserialize_EventConquestInfo_____);
    v159 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v159 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = (PartyOrganizationUtility_o *)&v159->static_fields->eventConquestInfos;
    p_eventConquestInfos->klass = (PartyOrganizationUtility_c *)v158;
    sub_1C13CC8(p_eventConquestInfos, (int64_t)v158, v152, v153, v154, v155, v156, v157);
  }
  v161 = (System_String_o *)StringLiteral_11637/*"SAVEKEY_DataLostBattleAutoReset"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11637/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL) )
  {
    v162 = UnityEngine_PlayerPrefs__GetInt_70679696(v161, 0LL);
    v163 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v163 = TerminalPramsManager_TypeInfo;
    }
    v163->static_fields->eventConquestInfoDisp = v162 != 0;
  }
  v164 = (System_String_o *)StringLiteral_11639/*"SAVEKEY_LastPlayBgmName"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11639/*"SAVEKEY_LastPlayBgmName"*/, 0LL) )
  {
    v165 = UnityEngine_PlayerPrefs__GetInt_70679696(v164, 0LL);
    v166 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v166 = TerminalPramsManager_TypeInfo;
    }
    v166->static_fields->eventCraftInfoDisp = v165 != 0;
  }
  v167 = (System_String_o *)StringLiteral_11640/*"SAVEKEY_LastPlayQuestConsumeType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11640/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL) )
  {
    v168 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70680264(v167, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v175 = JsonManager__Deserialize_object_(
             v168,
             (const MethodInfo_2FF6B7C *)Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    v176 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v176 = TerminalPramsManager_TypeInfo;
    }
    p_eventHarvestGrowthInfo = (PartyOrganizationUtility_o *)&v176->static_fields->eventHarvestGrowthInfo;
    p_eventHarvestGrowthInfo->klass = (PartyOrganizationUtility_c *)v175;
    sub_1C13CC8(p_eventHarvestGrowthInfo, (int64_t)v175, v169, v170, v171, v172, v173, v174);
  }
  v178 = (System_String_o *)StringLiteral_11628/*"SAME_SVTEQUIP_COMBINE"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11628/*"SAME_SVTEQUIP_COMBINE"*/, 0LL) )
  {
    v185 = UnityEngine_PlayerPrefs__GetString_70680264(v178, 0LL);
    v186 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v186 = TerminalPramsManager_TypeInfo;
    }
    p_lastPlayBgmName = (PartyOrganizationUtility_o *)&v186->static_fields->lastPlayBgmName;
    p_lastPlayBgmName->klass = (PartyOrganizationUtility_c *)v185;
    sub_1C13CC8(p_lastPlayBgmName, (int64_t)v185, v179, v180, v181, v182, v183, v184);
  }
  v188 = (System_String_o *)StringLiteral_11629/*"SAMPLERANGE_{0}"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11629/*"SAMPLERANGE_{0}"*/, 0LL) )
  {
    v189 = UnityEngine_PlayerPrefs__GetInt_70679696(v188, 0LL);
    v190 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v190 = TerminalPramsManager_TypeInfo;
    }
    v190->static_fields->lastPlayQuestConsumeAp = v189;
  }
  v191 = (System_String_o *)StringLiteral_13842/*"Terminal/OrdealCall"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13842/*"Terminal/OrdealCall"*/, 0LL) )
  {
    v193 = UnityEngine_PlayerPrefs__GetInt_70679696(v191, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB14A7 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v192);
      byte_4BB14A7 = 1;
    }
    v194 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v194 = TerminalPramsManager_TypeInfo;
    }
    v194->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = v193;
  }
  v195 = (System_String_o *)StringLiteral_13841/*"Terminal/MapModels/{0:D4}_{1}"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13841/*"Terminal/MapModels/{0:D4}_{1}"*/, 0LL) )
  {
    v196 = UnityEngine_PlayerPrefs__GetInt_70679696(v195, 0LL);
    v197 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v197 = TerminalPramsManager_TypeInfo;
    }
    v197->static_fields->panelEventPoint = v196;
  }
  v198 = (System_String_o *)StringLiteral_11634/*"SAVEKEY_ClearEventQuestIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11634/*"SAVEKEY_ClearEventQuestIds"*/, 0LL) )
  {
    v206 = UnityEngine_PlayerPrefs__GetString_70680264(v198, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1C9A )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v199);
      byte_4BB1C9A = 1;
    }
    v207 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v207 = TerminalPramsManager_TypeInfo;
    }
    p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v207->static_fields->_PlayedTerminalEffects_k__BackingField;
    p_PlayedTerminalEffects_k__BackingField->klass = (PartyOrganizationUtility_c *)v206;
    sub_1C13CC8(p_PlayedTerminalEffects_k__BackingField, (int64_t)v206, v200, v201, v202, v203, v204, v205);
  }
  v209 = (System_String_o *)StringLiteral_11631/*"SAVEKEY_BlankEarthRank"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11631/*"SAVEKEY_BlankEarthRank"*/, 0LL) )
  {
    v211 = UnityEngine_PlayerPrefs__GetInt_70679696(v209, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1AB9 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v210);
      byte_4BB1AB9 = 1;
    }
    v212 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v212 = TerminalPramsManager_TypeInfo;
    }
    v212->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = v211 != 0;
  }
  v213 = (System_String_o *)StringLiteral_11632/*"SAVEKEY_BlankEarthSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11632/*"SAVEKEY_BlankEarthSpotId"*/, 0LL) )
  {
    v215 = UnityEngine_PlayerPrefs__GetInt_70679696(v213, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1ABA )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v214);
      byte_4BB1ABA = 1;
    }
    v216 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v216 = TerminalPramsManager_TypeInfo;
    }
    v216->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = v215;
  }
  v217 = (System_String_o *)StringLiteral_11633/*"SAVEKEY_CampaignDirectBonus"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11633/*"SAVEKEY_CampaignDirectBonus"*/, 0LL) )
  {
    v219 = UnityEngine_PlayerPrefs__GetInt_70679696(v217, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB19C9 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v218);
      byte_4BB19C9 = 1;
    }
    v220 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v220 = TerminalPramsManager_TypeInfo;
    }
    v220->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = v219 != 0;
  }
  v221 = (System_String_o *)StringLiteral_11643/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11643/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL) )
  {
    v223 = UnityEngine_PlayerPrefs__GetInt_70679696(v221, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB15BB )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v222);
      byte_4BB15BB = 1;
    }
    v224 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v224 = TerminalPramsManager_TypeInfo;
    }
    v224->static_fields->_SelectedStoryQuestId_k__BackingField = v223;
  }
  v225 = (System_String_o *)StringLiteral_11625/*"S>"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11625/*"S>"*/, 0LL) )
  {
    v226 = UnityEngine_PlayerPrefs__GetInt_70679696(v225, 0LL);
    v227 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v227 = TerminalPramsManager_TypeInfo;
    }
    v227->static_fields->ConnectMarkEventId = v226;
  }
  v228 = (System_String_o *)StringLiteral_11624/*"S="*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11624/*"S="*/, 0LL) )
  {
    v229 = UnityEngine_PlayerPrefs__GetInt_70679696(v228, 0LL);
    v230 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v230 = TerminalPramsManager_TypeInfo;
    }
    v230->static_fields->ConnectMarkAnimationId = v229;
  }
  v231 = (System_String_o *)StringLiteral_11642/*"SAVEKEY_PlayTerminalEffectDisappear"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11642/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL) )
  {
    v233 = UnityEngine_PlayerPrefs__GetInt_70679696(v231, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB06E2 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v232);
      byte_4BB06E2 = 1;
    }
    v234 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v234 = TerminalPramsManager_TypeInfo;
    }
    v234->static_fields->_SelectedRecollectionWarId_k__BackingField = v233;
  }
  v235 = (System_String_o *)StringLiteral_11623/*"S256"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11623/*"S256"*/, 0LL) )
  {
    v243 = UnityEngine_PlayerPrefs__GetString_70680264(v235, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB124E )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v236);
      byte_4BB124E = 1;
    }
    v244 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v244 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (PartyOrganizationUtility_o *)&v244->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (PartyOrganizationUtility_c *)v243;
    sub_1C13CC8(p_ClearEventQuestIds_k__BackingField, (int64_t)v243, v237, v238, v239, v240, v241, v242);
  }
  v246 = (System_String_o *)StringLiteral_11630/*"SAVEKEY_"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11630/*"SAVEKEY_"*/, 0LL) )
  {
    v247 = UnityEngine_PlayerPrefs__GetString_70680264(v246, 0LL);
    IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(v247, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v247 || (IsNullOrEmpty = System_String__Split(v247, 0x2Cu, 0, 0LL)) == 0LL )
        sub_1C13F80(IsNullOrEmpty, v249);
      v250 = *(_QWORD *)&IsNullOrEmpty->max_length;
      v251 = IsNullOrEmpty;
      if ( v250 )
      {
        if ( !(_DWORD)v250 )
          sub_1C13F88(IsNullOrEmpty, v249);
        v252 = System_Int32__Parse(IsNullOrEmpty->m_Items[0], 0LL);
      }
      else
      {
        v252 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BB1C9C )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v249);
        byte_4BB1C9C = 1;
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
      if ( !byte_4BB1C9D )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v249);
        byte_4BB1C9D = 1;
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
  v257 = (System_String_o *)StringLiteral_11626/*"SAME_CLASS_MULI_EXP"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11626/*"SAME_CLASS_MULI_EXP"*/, 0LL) )
  {
    v259 = UnityEngine_PlayerPrefs__GetInt_70679696(v257, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB19D1 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v258);
      byte_4BB19D1 = 1;
    }
    v260 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v260 = TerminalPramsManager_TypeInfo;
    }
    v260->static_fields->_IsDataLostBattleAutoReset_k__BackingField = v259 != 0;
  }
  v261 = (System_String_o *)StringLiteral_11635/*"SAVEKEY_ConnectMarkAnimationId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11635/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL) )
  {
    v263 = UnityEngine_PlayerPrefs__GetInt_70679696(v261, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BAFB72 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v262);
      byte_4BAFB72 = 1;
    }
    v264 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v264 = TerminalPramsManager_TypeInfo;
    }
    v264->static_fields->_PlayerGenderType_k__BackingField = v263;
  }
  v265 = (System_String_o *)StringLiteral_11622/*"S"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11622/*"S"*/, 0LL) )
  {
    v266 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70680264(v265, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v274 = JsonManager__Deserialize_object_(
             v266,
             (const MethodInfo_2FF6B7C *)Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1CA1 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v267);
      byte_4BB1CA1 = 1;
    }
    v275 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v275 = TerminalPramsManager_TypeInfo;
    }
    v276 = v275->static_fields;
    v276->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)v274;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&v276->_CampaignDirectBonus_k__BackingField,
      (int64_t)v274,
      v268,
      v269,
      v270,
      v271,
      v272,
      v273);
  }
  v277 = (System_String_o *)StringLiteral_11621/*"Russian (Russia)"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11621/*"Russian (Russia)"*/, 0LL) )
  {
    v279 = UnityEngine_PlayerPrefs__GetInt_70679696(v277, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB116D )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v278);
      byte_4BB116D = 1;
    }
    v280 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v280 = TerminalPramsManager_TypeInfo;
    }
    v280->static_fields->_BlankEarthSpotId_k__BackingField = v279;
  }
  v281 = (System_String_o *)StringLiteral_11620/*"Russian"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11620/*"Russian"*/, 0LL) )
  {
    v283 = UnityEngine_PlayerPrefs__GetInt_70679696(v281, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1CA4 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v282);
      byte_4BB1CA4 = 1;
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
  int32_t Int_70679696; // w0
  int32_t v7; // w20
  const MethodInfo *v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  System_String_o *String_70680264; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BB1C3D & 1) == 0 )
  {
    sub_1C13D24(&TerminalTransitionInfo_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_13856/*"TerminalOffset"*/, v2);
    sub_1C13D24(&StringLiteral_13855/*"TerminalLastPlayedQuestId"*/, v3);
    byte_4BB1C3D = 1;
  }
  v4 = (System_String_o *)StringLiteral_13855/*"TerminalLastPlayedQuestId"*/;
  v5 = 0LL;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13855/*"TerminalLastPlayedQuestId"*/, 0LL) )
  {
    Int_70679696 = UnityEngine_PlayerPrefs__GetInt_70679696(v4, 0LL);
    if ( Int_70679696 < 1 )
    {
      return 0LL;
    }
    else
    {
      v7 = Int_70679696;
      v5 = sub_1C13F70(TerminalTransitionInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0LL);
      TerminalTransitionInfo__Init((TerminalTransitionInfo_o *)v5, v8);
      if ( !v5 )
        sub_1C13F80(v9, v10);
      *(_DWORD *)(v5 + 16) = v7;
      v11 = (System_String_o *)StringLiteral_13856/*"TerminalOffset"*/;
      if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13856/*"TerminalOffset"*/, 0LL) )
      {
        String_70680264 = UnityEngine_PlayerPrefs__GetString_70680264(v11, 0LL);
        *(_QWORD *)(v5 + 40) = String_70680264;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)String_70680264, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4BB1C57 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11630/*"SAVEKEY_"*/, v2);
    sub_1C13D24(&StringLiteral_866/*","*/, v3);
    byte_4BB1C57 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB142D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB142D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v4->static_fields->_MapModelClearQuestId_k__BackingField;
  v6 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_4BB142E )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    byte_4BB142E = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v7->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v8 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v9 = System_String__Concat_62979204(v6, (System_String_o *)StringLiteral_866/*","*/, v8, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11630/*"SAVEKEY_"*/, v9, 0LL);
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

  if ( (byte_4BB1C43 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11641/*"SAVEKEY_MapModelClearQuestInfo"*/, v2);
    sub_1C13D24(&StringLiteral_13842/*"Terminal/OrdealCall"*/, v3);
    sub_1C13D24(&StringLiteral_13843/*"Terminal/QuestMap/Capter{0:D4}"*/, v4);
    byte_4BB1C43 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB14F2 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB14F2 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13843/*"Terminal/QuestMap/Capter{0:D4}"*/,
    v5->static_fields->_LastPlayedQuestId_k__BackingField,
    0LL);
  if ( !byte_4BB1CA3 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v6);
    byte_4BB1CA3 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11641/*"SAVEKEY_MapModelClearQuestInfo"*/,
    v7->static_fields->_LastSelectQuestIndex_k__BackingField,
    0LL);
  if ( !byte_4BB116F )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v8);
    byte_4BB116F = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13842/*"Terminal/OrdealCall"*/,
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

  if ( (byte_4BB1C38 & 1) == 0 )
  {
    sub_1C13D24(&Method_TerminalPramsManager_PlaySystemSE__, method);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v3);
    byte_4BB1C38 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1C8E )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C8E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( TerminalPramsManager_TypeInfo->static_fields->_IsAutoNoSe_k__BackingField )
    {
LABEL_9:
      if ( !byte_4BB1C8F )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
        byte_4BB1C8F = 1;
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
      v7 = (_QWORD *)sub_1C13D3C(Method_TerminalPramsManager_PlaySystemSE__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C13D08(v7, v7[4]);
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
  if ( (byte_4BB1C60 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_43/*"\n"*/, v3);
    sub_1C13D24(&StringLiteral_1/*""*/, v4);
    byte_4BB1C60 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsTerminalEffectPlayed(effectId, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1CA9 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
      byte_4BB1CA9 = 1;
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
      if ( !byte_4BB1C9A )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
        byte_4BB1C9A = 1;
      }
      v14 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v14 = TerminalPramsManager_TypeInfo;
      }
      p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v14->static_fields->_PlayedTerminalEffects_k__BackingField;
      p_PlayedTerminalEffects_k__BackingField->klass = v13;
      sub_1C13CC8(p_PlayedTerminalEffects_k__BackingField, (int64_t)v13, v6, v7, v8, v9, v10, v11);
      v12 = TerminalPramsManager_TypeInfo;
    }
    if ( !v12->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v12);
    if ( !byte_4BB1CA9 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
      byte_4BB1CA9 = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    PlayedTerminalEffects_k__BackingField = v16->static_fields->_PlayedTerminalEffects_k__BackingField;
    v18 = System_Int32__ToString((int32_t)&v30, 0LL);
    v26 = System_String__Concat_62979204(
            PlayedTerminalEffects_k__BackingField,
            v18,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            0LL);
    if ( !byte_4BB1C9A )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v19);
      byte_4BB1C9A = 1;
    }
    v27 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v27 = TerminalPramsManager_TypeInfo;
    }
    v28 = (PartyOrganizationUtility_o *)&v27->static_fields->_PlayedTerminalEffects_k__BackingField;
    v28->klass = (PartyOrganizationUtility_c *)v26;
    sub_1C13CC8(v28, (int64_t)v26, v20, v21, v22, v23, v24, v25);
    TerminalPramsManager__Save_SaveData(v29);
  }
}


void __fastcall TerminalPramsManager__PlayerGenderType_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BB1C59 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11635/*"SAVEKEY_ConnectMarkAnimationId"*/, v2);
    byte_4BB1C59 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CAA )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1CAA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11635/*"SAVEKEY_ConnectMarkAnimationId"*/,
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
  BattleResultComponent_resultData_o *v61; // x8
  struct UserServantCollectionEntity_array *oldUserSvtCollection; // x8
  _DWORD *v63; // x23
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  BattleResultComponent_resultData_o *v70; // x28
  int eventEndTitle; // w8
  __int64 *v72; // x26
  UserServantCollectionMaster_o *v73; // x20
  unsigned int v74; // w29
  __int64 v75; // x19
  __int64 v76; // x25
  __int64 v77; // x26
  struct DeckData_o *myDeck; // x24
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  UserServantCollectionEntity_o *v80; // x25
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  _DWORD *v87; // x24
  PartyOrganizationUtility_o *v88; // x24
  PartyOrganizationUtility_c *klass; // x8
  PartyOrganizationUtility_c *v90; // x8
  TerminalPramsManager_c *v91; // x0
  PartyOrganizationUtility_o *p_mQuestClearHeroineInfo; // x0
  __int64 v93; // x8
  BattleResultComponent_resultData_o *v94; // x9
  struct System_String_o *v95; // x10
  struct System_String_o *eventEndMessage; // x19
  __int128 v97; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v98; // x24
  UserServantEntity_o *v99; // x25
  int64_t v100; // x24
  void **p_monitor; // x19
  void *v102; // x26
  void *monitor; // t1
  void *v104; // x22
  __int64 v105; // x1
  Il2CppObject *MasterData_object; // x26
  NetworkManager_c *v107; // x0
  __int64 v108; // x22
  __int64 v109; // x28
  int64_t userIdNumber; // x27
  int v111; // w9
  UserServantCollectionEntity_o *v112; // x27
  int v113; // w8
  UserServantCollectionEntity_o *v114; // x26
  struct DeckData_o *userId; // x21
  int32_t SvtId; // w0
  __int64 v117; // x22
  __int64 v118; // x29
  int32_t v119; // w28
  int64_t v120; // x23
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  bool v133; // w9
  Il2CppObject *Master_object; // x0
  __int64 v135; // x22
  __int64 v136; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v137; // x24
  int klass_high; // w8
  int32_t friendshipExceedCount; // w9
  TerminalPramsManager_c *v140; // x0
  PartyOrganizationUtility_o *v141; // x0
  BattleResultComponent_resultData_o *v142; // x22
  BattleResultComponent_resultData_o *v143; // x8
  struct System_String_o *v144; // x9
  UserQuestEntity_o *v145; // x23
  int32_t questId; // w21
  TerminalPramsManager_c *v147; // x0
  __int64 v148; // x1
  int32_t QuestPhase; // w24
  TerminalPramsManager_c *v150; // x0
  int32_t v151; // w24
  Il2CppObject *v152; // x25
  UserQuestEntity_o *v153; // x0
  UserQuestEntity_o *v154; // x26
  int32_t v155; // w25
  __int64 v156; // x1
  bool v157; // w21
  TerminalPramsManager_c *v158; // x0
  const MethodInfo *v159; // x2
  TerminalPramsManager_c *v160; // x0
  System_String_o *ValidMessage; // x0
  const MethodInfo *v162; // x2
  TerminalPramsManager_c *v163; // x8
  TerminalPramsManager_c *v164; // x0
  TerminalPramsManager_c *v165; // x0
  const MethodInfo *v166; // x0
  char *v167; // x21
  TerminalPramsManager_c *v168; // x8
  int32_t v169; // w25
  const MethodInfo *v170; // x1
  WarEntity_o *v171; // x24
  TerminalPramsManager_c *v172; // x0
  bool v173; // w22
  TerminalPramsManager_c *v174; // x0
  char v175; // w8
  const MethodInfo *v176; // x1
  bool HasFlag; // w0
  int64_t v178; // x2
  int32_t v179; // w3
  System_String_o *v180; // x4
  BattleSetupInfo_o *v181; // x5
  FollowerInfo_o *v182; // x6
  PartyListViewItem_o *v183; // x7
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  int64_t v185; // x2
  int32_t v186; // w3
  System_String_o *v187; // x4
  BattleSetupInfo_o *v188; // x5
  FollowerInfo_o *v189; // x6
  PartyListViewItem_o *v190; // x7
  int64_t v191; // x24
  TerminalPramsManager_c *v192; // x0
  PartyOrganizationUtility_o *p_mResultEventPanelRewardInfos; // x0
  TerminalPramsManager_c *v194; // x0
  PartyOrganizationUtility_o *p_eventConquestInfos; // x0
  int64_t v196; // x2
  int32_t v197; // w3
  System_String_o *v198; // x4
  BattleSetupInfo_o *v199; // x5
  FollowerInfo_o *v200; // x6
  PartyListViewItem_o *v201; // x7
  int64_t v202; // x24
  TerminalPramsManager_c *v203; // x0
  PartyOrganizationUtility_o *v204; // x0
  bool Farm; // w19
  TerminalPramsManager_c *v206; // x0
  char v207; // w19
  int32_t v208; // w24
  WarEntity_o *v209; // x0
  __int64 v210; // x1
  int32_t id; // w19
  TerminalPramsManager_c *v212; // x0
  TerminalPramsManager_c *v213; // x0
  Il2CppObject *v214; // x24
  int64_t v215; // x2
  int32_t v216; // w3
  System_String_o *v217; // x4
  BattleSetupInfo_o *v218; // x5
  FollowerInfo_o *v219; // x6
  PartyListViewItem_o *v220; // x7
  int64_t v221; // x2
  int32_t v222; // w3
  System_String_o *v223; // x4
  BattleSetupInfo_o *v224; // x5
  FollowerInfo_o *v225; // x6
  PartyListViewItem_o *v226; // x7
  int64_t v227; // x25
  TerminalPramsManager_c *v228; // x0
  PartyOrganizationUtility_o *p_OldUserEventPoint_k__BackingField; // x0
  signed int max_length; // w9
  BattleResultComponent_resultData_array *v231; // x25
  int v232; // w8
  Il2CppClass **v233; // x8
  Il2CppClass *v234; // x26
  int32_t RaidGroupDeadQuestId; // w27
  signed int v236; // w9
  BattleResultComponent_resultData_array *v237; // x27
  int v238; // w8
  int v239; // w21
  struct TerminalPramsManager_StaticFields *v240; // x8
  int32_t name_high; // w21
  signed int v242; // w9
  BattleResultComponent_resultData_array *v243; // x25
  int v244; // w8
  BattleResultComponent_resultData_o *v245; // x19
  int32_t RaidDeadQuestId; // w26
  struct TerminalPramsManager_StaticFields *v247; // x8
  int32_t v248; // w19
  TerminalPramsManager_c *v249; // x0
  TerminalPramsManager_c *v250; // x8
  bool v251; // w19
  TerminalPramsManager_c *v252; // x0
  int32_t v253; // w19
  int32_t v254; // w21
  Il2CppObject *v255; // x24
  int32_t eventId; // w25
  bool v257; // w24
  TerminalPramsManager_c *v258; // x0
  char *v259; // x21
  BattleResultComponent_resultData_o *v260; // x8
  int v261; // w9
  int v262; // w11
  __int64 v263; // x19
  int32_t bounds_high; // w24
  bool IsUserEventStatus; // w0
  TerminalPramsManager_c *v266; // x0
  TerminalPramsManager_c *v267; // x0
  TerminalPramsManager_c *v268; // x0
  Il2CppObject *v269; // x24
  __int64 v270; // x1
  int64_t v271; // x2
  int32_t v272; // w3
  System_String_o *v273; // x4
  BattleSetupInfo_o *v274; // x5
  FollowerInfo_o *v275; // x6
  PartyListViewItem_o *v276; // x7
  TerminalPramsManager_c *v277; // x0
  PartyOrganizationUtility_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  struct System_String_o *ultimateGetQpText; // x8
  struct System_String_o *v280; // x8
  signed int v281; // w8
  System_String_o **v282; // x9
  System_String_o *v283; // x26
  System_String_o **v284; // x9
  System_String_o *v285; // x21
  void **v286; // x8
  int32_t v287; // w22
  System_Collections_Generic_List_object__o *v288; // x27
  TerminalPramsManager___c_c *v289; // x8
  System_Predicate_object__o *_9__696_0; // x25
  Il2CppObject *v291; // x22
  struct TerminalPramsManager___c_StaticFields *v292; // x0
  int64_t v293; // x2
  int32_t v294; // w3
  System_String_o *v295; // x4
  BattleSetupInfo_o *v296; // x5
  FollowerInfo_o *v297; // x6
  PartyListViewItem_o *v298; // x7
  __int64 v299; // x1
  TerminalPramsManager_c *v300; // x0
  TerminalPramsManager_c *v301; // x0
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x27
  System_String_o *v303; // x22
  int64_t v304; // x2
  int32_t v305; // w3
  System_String_o *v306; // x4
  BattleSetupInfo_o *v307; // x5
  FollowerInfo_o *v308; // x6
  PartyListViewItem_o *v309; // x7
  TerminalPramsManager_c *v310; // x0
  int32_t v311; // w24
  int32_t PhaseCnt_k__BackingField; // w25
  _BOOL4 IsQuestClear_k__BackingField; // w19
  TerminalPramsManager_c *v314; // x0
  __int64 *v315; // x26
  Il2CppObject *v316; // x24
  TerminalPramsManager_c *v317; // x0
  Il2CppObject *v318; // x24
  int v319; // w21
  TerminalPramsManager_c *v320; // x0
  PartyOrganizationUtility_o *p_questClearCostumeRelease_k__BackingField; // x0
  int64_t v322; // x2
  int32_t v323; // w3
  System_String_o *v324; // x4
  BattleSetupInfo_o *v325; // x5
  FollowerInfo_o *v326; // x6
  PartyListViewItem_o *v327; // x7
  BattleResultComponent_resultData_o *v328; // x8
  int64_t v329; // x24
  TerminalPramsManager_c *v330; // x0
  PartyOrganizationUtility_o *v331; // x0
  TerminalPramsManager_c *v332; // x0
  PartyOrganizationUtility_o *p_questClearCostumeGet_k__BackingField; // x0
  int64_t v334; // x2
  int32_t v335; // w3
  System_String_o *v336; // x4
  BattleSetupInfo_o *v337; // x5
  FollowerInfo_o *v338; // x6
  PartyListViewItem_o *v339; // x7
  int64_t v340; // x24
  TerminalPramsManager_c *v341; // x0
  PartyOrganizationUtility_o *v342; // x0
  TerminalPramsManager_c *v343; // x0
  PartyOrganizationUtility_o *p_eventPointWinReward_k__BackingField; // x0
  int64_t v345; // x2
  int32_t v346; // w3
  System_String_o *v347; // x4
  BattleSetupInfo_o *v348; // x5
  FollowerInfo_o *v349; // x6
  PartyListViewItem_o *v350; // x7
  TerminalPramsManager_c *v351; // x0
  int32_t v352; // w24
  QuestGroupMaster_o *v353; // x25
  int32_t GroupId; // w0
  TerminalPramsManager_c *v355; // x8
  int32_t v356; // w26
  int v357; // w25
  Il2CppObject *v358; // x26
  EventPointEntity_o *v359; // x25
  int32_t v360; // w24
  struct TerminalPramsManager_StaticFields *v361; // x8
  BattleResultComponent_resultData_o *v362; // x8
  struct System_String_o *v363; // x9
  int64_t v364; // x24
  TerminalPramsManager_c *v365; // x0
  PartyOrganizationUtility_o *v366; // x0
  int32_t v367; // w19
  TerminalPramsManager_c *v368; // x0
  TerminalPramsManager_c *v369; // x0
  PartyOrganizationUtility_o *p_eventRaceBoost_k__BackingField; // x0
  int64_t v371; // x2
  int32_t v372; // w3
  System_String_o *v373; // x4
  BattleSetupInfo_o *v374; // x5
  FollowerInfo_o *v375; // x6
  PartyListViewItem_o *v376; // x7
  __int64 v377; // x8
  int64_t v378; // x23
  TerminalPramsManager_c *v379; // x0
  PartyOrganizationUtility_o *v380; // x0
  __int64 v381; // x19
  BattleResultComponent_resultData_o *v382; // x9
  struct System_String_o *v383; // x10
  int64_t v384; // x23
  TerminalPramsManager_c *v385; // x0
  PartyOrganizationUtility_o *p_eventTowerReward_k__BackingField; // x0
  int64_t v387; // x2
  int32_t v388; // w3
  System_String_o *v389; // x4
  BattleSetupInfo_o *v390; // x5
  FollowerInfo_o *v391; // x6
  PartyListViewItem_o *v392; // x7
  int64_t v393; // x23
  TerminalPramsManager_c *v394; // x0
  PartyOrganizationUtility_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  int64_t v396; // x23
  TerminalPramsManager_c *v397; // x0
  PartyOrganizationUtility_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  int64_t v399; // x23
  TerminalPramsManager_c *v400; // x0
  PartyOrganizationUtility_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  int64_t v402; // x23
  TerminalPramsManager_c *v403; // x0
  PartyOrganizationUtility_o *p_warClearReward_k__BackingField; // x0
  TerminalPramsManager_c *v405; // x0
  struct TerminalPramsManager_StaticFields *v406; // x0
  __int64 v407; // x1
  int64_t v408; // x2
  int32_t v409; // w3
  System_String_o *v410; // x4
  BattleSetupInfo_o *v411; // x5
  FollowerInfo_o *v412; // x6
  PartyListViewItem_o *v413; // x7
  TerminalPramsManager_c *v414; // x0
  struct TerminalPramsManager_StaticFields *v415; // x0
  Il2CppObject *Instance; // x23
  int32_t WarID_ByQuestID; // w22
  WarEntity_o *WarEntityByWarID; // x0
  int32_t v419; // w23
  int64_t v420; // x2
  int32_t v421; // w3
  System_String_o *v422; // x4
  BattleSetupInfo_o *v423; // x5
  FollowerInfo_o *v424; // x6
  PartyListViewItem_o *v425; // x7
  __int64 v426; // x8
  int64_t v427; // x22
  TerminalPramsManager_c *v428; // x0
  struct TerminalPramsManager_StaticFields *v429; // x0
  PartyOrganizationUtility_o *p_oldPersonalBoss_k__BackingField; // x0
  TerminalPramsManager_c *v431; // x0
  struct TerminalPramsManager_StaticFields *v432; // x0
  struct EventTowerReward_array *eventTowerReward; // x8
  bool v434; // w21
  BalanceConfig_c *v435; // x8
  int32_t v436; // w21
  TerminalPramsManager_c *v437; // x0
  __int64 v438; // x1
  TerminalPramsManager_c *v439; // x0
  BalanceConfig_c *v440; // x8
  int32_t v441; // w21
  TerminalPramsManager_c *v442; // x0
  BalanceConfig_c *v443; // x8
  int32_t v444; // w21
  TerminalPramsManager_c *v445; // x0
  BalanceConfig_c *v446; // x8
  int32_t v447; // w21
  Il2CppObject *v448; // x22
  struct DeckData_o *v449; // x21
  int64_t v450; // x2
  int32_t v451; // w3
  System_String_o *v452; // x4
  BattleSetupInfo_o *v453; // x5
  FollowerInfo_o *v454; // x6
  PartyListViewItem_o *v455; // x7
  UserSuperBossEntity_o *v456; // x22
  BattleResultComponent_resultData_array *v457; // x21
  __int64 v458; // x1
  int64_t v459; // x2
  int32_t v460; // w3
  System_String_o *v461; // x4
  BattleSetupInfo_o *v462; // x5
  FollowerInfo_o *v463; // x6
  PartyListViewItem_o *v464; // x7
  TerminalPramsManager_c *v465; // x0
  struct TerminalPramsManager_StaticFields *v466; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v468; // x21
  Il2CppObject *v469; // x22
  int32_t ScriptQuestId; // w22
  __int64 v471; // x1
  Il2CppObject *v472; // x23
  TerminalPramsManager_c *v473; // x0
  int32_t v474; // w26
  int32_t winResult; // w24
  int64_t v476; // x2
  int32_t v477; // w3
  System_String_o *v478; // x4
  BattleSetupInfo_o *v479; // x5
  FollowerInfo_o *v480; // x6
  PartyListViewItem_o *v481; // x7
  __int64 v482; // x1
  Il2CppObject *v483; // x23
  TerminalPramsManager_c *v484; // x0
  int32_t v485; // w24
  int32_t v486; // w21
  TerminalPramsManager_c *v487; // x0
  void *v488; // x1
  PartyOrganizationUtility_o *p_lastPlayBgmName; // x0
  const MethodInfo *v490; // x0
  Il2CppObject *v491; // x21
  int32_t v492; // w22
  int64_t v493; // x2
  int32_t v494; // w3
  System_String_o *v495; // x4
  BattleSetupInfo_o *v496; // x5
  FollowerInfo_o *v497; // x6
  PartyListViewItem_o *v498; // x7
  TerminalPramsManager_c *v499; // x0
  il2cpp_array_size_t *v500; // x0
  int32_t v501; // w22
  TerminalPramsManager_c *v502; // x0
  int32_t v503; // w23
  __int64 v504; // x1
  int64_t v505; // x2
  int32_t v506; // w3
  System_String_o *v507; // x4
  BattleSetupInfo_o *v508; // x5
  FollowerInfo_o *v509; // x6
  PartyListViewItem_o *v510; // x7
  SpecifiedSceneInfo_o *SpecifiedSceneInfo; // x22
  TerminalPramsManager_c *v512; // x0
  struct TerminalPramsManager_StaticFields *v513; // x0
  const MethodInfo *v514; // x0
  int64_t v515; // x2
  int32_t v516; // w3
  System_String_o *v517; // x4
  BattleSetupInfo_o *v518; // x5
  FollowerInfo_o *v519; // x6
  PartyListViewItem_o *v520; // x7
  int32_t v521; // w19
  TerminalPramsManager_c *v522; // x0
  PartyOrganizationUtility_o *p_eventHarvestGrowthInfo; // x0
  __int64 v524; // x1
  TerminalPramsManager_c *v525; // x0
  BattleResultComponent_resultData_array *v526; // x22
  int32_t ScriptIntParam; // w24
  int32_t v528; // w0
  int32_t v529; // w25
  int64_t v530; // x23
  int64_t v531; // x2
  int32_t v532; // w3
  System_String_o *v533; // x4
  BattleSetupInfo_o *v534; // x5
  FollowerInfo_o *v535; // x6
  PartyListViewItem_o *v536; // x7
  Il2CppArrayBounds *bounds; // d0
  TerminalPramsManager_c *v538; // x0
  PartyOrganizationUtility_o *v539; // x0
  Il2CppObject *v540; // x22
  QuestEntity_o *QuestEntity; // x0
  int64_t v542; // x2
  int32_t v543; // w3
  System_String_o *v544; // x4
  BattleSetupInfo_o *v545; // x5
  FollowerInfo_o *v546; // x6
  PartyListViewItem_o *v547; // x7
  QuestEntity_o *v548; // x22
  TerminalPramsManager_c *v549; // x0
  int32_t SpotId; // w21
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v552; // x21
  TerminalPramsManager_c *v553; // x0
  struct EventAreaImproveResultInfo_o *eventAreaImproveResultInfo; // x8
  TerminalPramsManager_c *v555; // x0
  __int64 v556; // x1
  System_String_o *v557; // x21
  TerminalPramsManager_c *v558; // x0
  System_String_o *v559; // x0
  __int64 v560; // x1
  int64_t v561; // x2
  int32_t v562; // w3
  System_String_o *v563; // x4
  BattleSetupInfo_o *v564; // x5
  FollowerInfo_o *v565; // x6
  PartyListViewItem_o *v566; // x7
  System_String_o *v567; // x21
  TerminalPramsManager_c *v568; // x0
  PartyOrganizationUtility_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  int64_t v570; // x21
  TerminalPramsManager_c *v571; // x0
  PartyOrganizationUtility_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v573; // x1
  __int64 v574; // x21
  TerminalPramsManager_c *v575; // x0
  int64_t v576; // x2
  int32_t v577; // w3
  System_String_o *v578; // x4
  BattleSetupInfo_o *v579; // x5
  FollowerInfo_o *v580; // x6
  PartyListViewItem_o *v581; // x7
  int64_t v582; // x2
  int32_t v583; // w3
  System_String_o *v584; // x4
  BattleSetupInfo_o *v585; // x5
  FollowerInfo_o *v586; // x6
  PartyListViewItem_o *v587; // x7
  void *v588; // x1
  __int64 v589; // x1
  TerminalPramsManager_c *v590; // x0
  int64_t v591; // x2
  int32_t v592; // w3
  System_String_o *v593; // x4
  BattleSetupInfo_o *v594; // x5
  FollowerInfo_o *v595; // x6
  PartyListViewItem_o *v596; // x7
  int64_t v597; // x2
  int32_t v598; // w3
  System_String_o *v599; // x4
  BattleSetupInfo_o *v600; // x5
  FollowerInfo_o *v601; // x6
  PartyListViewItem_o *v602; // x7
  void *v603; // x1
  __int64 v604; // x1
  TerminalPramsManager_c *v605; // x0
  int64_t v606; // x2
  int32_t v607; // w3
  System_String_o *v608; // x4
  BattleSetupInfo_o *v609; // x5
  FollowerInfo_o *v610; // x6
  PartyListViewItem_o *v611; // x7
  int64_t v612; // x2
  int32_t v613; // w3
  System_String_o *v614; // x4
  BattleSetupInfo_o *v615; // x5
  FollowerInfo_o *v616; // x6
  PartyListViewItem_o *v617; // x7
  void *v618; // x1
  __int64 v619; // x1
  TerminalPramsManager_c *v620; // x0
  int64_t v621; // x2
  int32_t v622; // w3
  System_String_o *v623; // x4
  BattleSetupInfo_o *v624; // x5
  FollowerInfo_o *v625; // x6
  PartyListViewItem_o *v626; // x7
  System_String_o *v627; // x0
  const MethodInfo *v628; // x1
  const MethodInfo *v629; // x0
  const MethodInfo *v630; // x0
  const MethodInfo *v631; // x0
  const MethodInfo *v632; // x0
  const MethodInfo *v633; // x0
  const MethodInfo *v634; // x0
  __int64 v635; // x1
  TerminalPramsManager_c *v636; // x0
  __int64 v637; // x0
  System_String_o *isLastGoalPlayed; // [xsp+18h] [xbp-138h]
  bool v639; // [xsp+24h] [xbp-12Ch]
  BattleResultComponent_resultData_array *resulta; // [xsp+28h] [xbp-128h]
  il2cpp_array_size_t *p_max_length; // [xsp+30h] [xbp-120h]
  BattleResultComponent_resultData_array **m_Items; // [xsp+38h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v643; // [xsp+40h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v644; // [xsp+60h] [xbp-F0h]
  __int128 v645; // [xsp+80h] [xbp-D0h]
  char v646[4]; // [xsp+9Ch] [xbp-B4h] BYREF
  UserSuperBossEntity_o *v647; // [xsp+A0h] [xbp-B0h] BYREF
  Il2CppObject *v648; // [xsp+A8h] [xbp-A8h] BYREF
  Il2CppObject *v649; // [xsp+B0h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *v650; // [xsp+B8h] [xbp-98h] BYREF
  int QuestId_k__BackingField; // [xsp+C4h] [xbp-8Ch] BYREF
  Il2CppObject *v652; // [xsp+C8h] [xbp-88h] BYREF
  Il2CppObject *v653; // [xsp+D0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+D8h] [xbp-78h] BYREF
  int v655; // [xsp+E4h] [xbp-6Ch] BYREF
  QuestPhaseEntity_o *v656; // [xsp+E8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v657; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v658; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v659; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v660; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v661; // 0:x0.16

  v4 = result;
  if ( (byte_4BB1C6E & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, isWin);
    sub_1C13D24(&bool_TypeInfo, v5);
    sub_1C13D24(&CondType_TypeInfo, v6);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventPointMaster___, v8);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventRaidMaster___, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestGroupMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestMessageMaster___, v12);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v14);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserQuestMaster___, v15);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v16);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v17);
    sub_1C13D24(&Method_DataManager_GetMasterData_WarMaster___, v18);
    sub_1C13D24(&Method_DataManager_GetMaster_EventDetailMaster___, v19);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestPhaseMaster___, v20);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantMaster___, v21);
    sub_1C13D24(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v22);
    sub_1C13D24(&Method_DataManager_GetMaster_UserSuperBossMaster___, v23);
    sub_1C13D24(&Method_DataManager_GetMaster_WarMaster___, v24);
    sub_1C13D24(&DataManager_TypeInfo, v25);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v26);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v27);
    sub_1C13D24(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v28);
    sub_1C13D24(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v29);
    sub_1C13D24(&EventHarvestGrowthInfo_TypeInfo, v30);
    sub_1C13D24(&EventSaveData_TypeInfo, v31);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v32);
    sub_1C13D24(&NetworkManager_TypeInfo, v33);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35);
    sub_1C13D24(&System_Predicate_QuestReleaseEntity__TypeInfo, v36);
    sub_1C13D24(&QuestClearHeroineInfo_TypeInfo, v37);
    sub_1C13D24(&ScriptManager_TypeInfo, v38);
    sub_1C13D24(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v39);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40);
    sub_1C13D24(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v41);
    sub_1C13D24(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v42);
    sub_1C13D24(&Method_SingletonTemplate_QuestTree__get_Instance__, v43);
    sub_1C13D24(&string___TypeInfo, v44);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v45);
    sub_1C13D24(&TitleInfoEventRaidBossComponent_TypeInfo, v46);
    sub_1C13D24(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v47);
    sub_1C13D24(&Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__696_0__, v48);
    sub_1C13D24(&TerminalPramsManager___c_TypeInfo, v49);
    sub_1C13D24(&UserServantCollectionEntity___TypeInfo, v50);
    sub_1C13D24(&UserServantCollectionEntity_TypeInfo, v51);
    sub_1C13D24(&UserServantEntity_TypeInfo, v52);
    sub_1C13D24(&UserSuperBossEntity___TypeInfo, v53);
    sub_1C13D24(&StringLiteral_20200/*"gutsTextColor"*/, v54);
    sub_1C13D24(&StringLiteral_16965/*"advPrepare"*/, v55);
    sub_1C13D24(&StringLiteral_866/*","*/, v56);
    sub_1C13D24(&StringLiteral_20201/*"gzip"*/, v57);
    sub_1C13D24(&StringLiteral_1/*""*/, v58);
    sub_1C13D24(&StringLiteral_6762/*"Fake description - "*/, v59);
    result = (BattleResultComponent_resultData_array *)sub_1C13D24(&StringLiteral_1212/*"0"*/, v60);
    byte_4BB1C6E = 1;
  }
  v656 = 0LL;
  v655 = 0;
  v653 = 0LL;
  entity = 0LL;
  v652 = 0LL;
  QuestId_k__BackingField = 0;
  v649 = 0LL;
  v650 = 0LL;
  v647 = 0LL;
  v648 = 0LL;
  v646[0] = 0;
  if ( !v4 )
    goto LABEL_1178;
  p_max_length = &v4->max_length;
  if ( !v4->max_length )
    goto LABEL_1179;
  v61 = v4->m_Items[0];
  m_Items = (BattleResultComponent_resultData_array **)v4->m_Items;
  if ( !v61 )
    goto LABEL_1178;
  oldUserSvtCollection = v61->fields.oldUserSvtCollection;
  if ( !oldUserSvtCollection )
    goto LABEL_1178;
  v63 = (_DWORD *)sub_1C13DCC(UserServantCollectionEntity___TypeInfo, oldUserSvtCollection->max_length);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1178;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_max_length )
    goto LABEL_1179;
  if ( !*m_Items )
    goto LABEL_1178;
  v70 = (*m_Items)->m_Items[11];
  v639 = isWin;
  resulta = v4;
  v655 = 0;
  if ( !v70 )
    goto LABEL_1178;
  eventEndTitle = (int)v70->fields.eventEndTitle;
  v72 = &qword_4BAF000;
  if ( eventEndTitle >= 1 )
  {
    v73 = (UserServantCollectionMaster_o *)result;
    v74 = 0;
    while ( v74 < eventEndTitle )
    {
      v75 = *((_QWORD *)&v70->fields.eventEndMessage + (int)v74);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !*((_BYTE *)v72 + 485) )
      {
        sub_1C13D24(&NetworkManager_TypeInfo, isWin);
        *((_BYTE *)v72 + 485) = 1;
      }
      result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
      }
      if ( !v75 )
        goto LABEL_1178;
      v77 = *(_QWORD *)(v75 + 24);
      v76 = *(_QWORD *)(v75 + 32);
      myDeck = result->m_Items[19]->fields.myDeck;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v657.fields.currentCryptoKey = v77;
      *(_QWORD *)&v657.fields.fakeValue = v76;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                           v657,
                                                           0LL);
      if ( !v73 )
        goto LABEL_1178;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v73, (int64_t)myDeck, (int32_t)result, 0LL);
      v80 = (UserServantCollectionEntity_o *)sub_1C13F70(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor_41332348(v80, EntityDefinitely, 0LL);
      v72 = &qword_4BAF000;
      if ( !v63 )
        goto LABEL_1178;
      if ( v80 )
      {
        result = (BattleResultComponent_resultData_array *)sub_1C13E60(v80, *(_QWORD *)(*(_QWORD *)v63 + 64LL));
        if ( !result )
          goto LABEL_1180;
      }
      if ( v74 >= v63[6] )
        break;
      v87 = &v63[2 * v74];
      *((_QWORD *)v87 + 4) = v80;
      v88 = (PartyOrganizationUtility_o *)(v87 + 8);
      sub_1C13CC8(v88, (int64_t)v80, v81, v82, v83, v84, v85, v86);
      if ( v74 >= v63[6] )
        break;
      klass = v88->klass;
      *(_OWORD *)&v644.fields.currentCryptoKey = *(_OWORD *)(v75 + 84);
      if ( !klass )
        goto LABEL_1178;
      *(_OWORD *)((char *)&klass->_1.declaringType + 4) = *(_OWORD *)&v644.fields.currentCryptoKey;
      if ( v74 >= v63[6] )
        break;
      v90 = v88->klass;
      v645 = *(_OWORD *)(v75 + 100);
      if ( !v90 )
        goto LABEL_1178;
      *(_OWORD *)((char *)&v90->_1.generic_class + 4) = v645;
      if ( v74 >= v63[6] )
        break;
      if ( !v88->klass )
        goto LABEL_1178;
      ++v74;
      HIDWORD(v88->klass->_1.interopData) = *(_DWORD *)(v75 + 116);
      v655 = v74;
      eventEndTitle = (int)v70->fields.eventEndTitle;
      if ( (int)v74 >= eventEndTitle )
        goto LABEL_35;
    }
LABEL_1179:
    sub_1C13F88(result, isWin);
  }
LABEL_35:
  v91 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v91 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestClearHeroineInfo = (PartyOrganizationUtility_o *)&v91->static_fields->mQuestClearHeroineInfo;
  p_mQuestClearHeroineInfo->klass = 0LL;
  sub_1C13CC8(p_mQuestClearHeroineInfo, 0LL, v64, v65, v66, v67, v68, v69);
  v93 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1179;
  if ( !*m_Items )
    goto LABEL_1178;
  v94 = (*m_Items)->m_Items[5];
  if ( v94 )
  {
    v95 = v94->fields.eventEndTitle;
    if ( v95 )
    {
      if ( !(_DWORD)v95 )
        goto LABEL_1179;
      eventEndMessage = v94->fields.eventEndMessage;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1178;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !eventEndMessage )
        goto LABEL_1178;
      v97 = *(_OWORD *)&eventEndMessage[1].monitor;
      v98 = (DataMasterBase_TMaster__TEntity__PKType__o *)result;
      *(_OWORD *)&v644.fields.currentCryptoKey = *(_OWORD *)&eventEndMessage->fields._stringLength;
      *(_OWORD *)&v644.fields.fakeValue = v97;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v643 = v644;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(
                                                           &v643,
                                                           0LL);
      if ( !v98 )
        goto LABEL_1178;
      v99 = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                     v98,
                                     (int64_t)result,
                                     (const MethodInfo_323AB80 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v100 = sub_1C13F70(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_41357996((UserServantEntity_o *)v100, v99, 0LL);
      v645 = *(_OWORD *)&eventEndMessage[4].klass;
      if ( !v100 )
        goto LABEL_1178;
      *(_OWORD *)(v100 + 96) = v645;
      *(_DWORD *)(v100 + 256) = eventEndMessage[10].fields._stringLength;
      *(_QWORD *)(v100 + 292) = *(System_String_c **)((char *)&eventEndMessage[12].klass + 4);
      monitor = eventEndMessage[5].monitor;
      p_monitor = &eventEndMessage[5].monitor;
      v102 = monitor;
      v104 = p_monitor[1];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v658.fields.currentCryptoKey = v102;
      *(_QWORD *)&v658.fields.fakeValue = v104;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v658, 0LL) >= 1 )
        *(_OWORD *)(v100 + 128) = *(_OWORD *)p_monitor;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1178;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)result,
                            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BAF1E5 )
      {
        sub_1C13D24(&NetworkManager_TypeInfo, v105);
        byte_4BAF1E5 = 1;
      }
      v107 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v107 = NetworkManager_TypeInfo;
      }
      v109 = *(_QWORD *)(v100 + 80);
      v108 = *(_QWORD *)(v100 + 88);
      userIdNumber = v107->static_fields->userIdNumber;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v659.fields.currentCryptoKey = v109;
      *(_QWORD *)&v659.fields.fakeValue = v108;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                           v659,
                                                           0LL);
      if ( !MasterData_object )
        goto LABEL_1178;
      result = (BattleResultComponent_resultData_array *)UserServantCollectionMaster__GetEntityDefinitely(
                                                           (UserServantCollectionMaster_o *)MasterData_object,
                                                           userIdNumber,
                                                           (int32_t)result,
                                                           0LL);
      v655 = 0;
      if ( !v63 )
        goto LABEL_1178;
      v111 = v63[6];
      v112 = (UserServantCollectionEntity_o *)result;
      if ( v111 >= 1 )
      {
        v113 = 0;
        while ( v113 < (unsigned int)v111 )
        {
          v114 = *(UserServantCollectionEntity_o **)&v63[2 * v113 + 8];
          if ( !v114 )
            goto LABEL_1178;
          userId = (struct DeckData_o *)v114->fields.userId;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BAF1E5 )
          {
            sub_1C13D24(&NetworkManager_TypeInfo, isWin);
            byte_4BAF1E5 = 1;
          }
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          }
          if ( userId == result->m_Items[19]->fields.myDeck )
          {
            SvtId = UserServantCollectionEntity__getSvtId(v114, 0LL);
            v117 = *(_QWORD *)(v100 + 80);
            v118 = *(_QWORD *)(v100 + 88);
            v119 = SvtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v660.fields.currentCryptoKey = v117;
            *(_QWORD *)&v660.fields.fakeValue = v118;
            result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                                 v660,
                                                                 0LL);
            if ( v119 == (_DWORD)result )
              goto LABEL_79;
          }
          v113 = v655 + 1;
          v655 = v113;
          v111 = v63[6];
          if ( v113 >= v111 )
            goto LABEL_78;
        }
        goto LABEL_1179;
      }
LABEL_78:
      v114 = 0LL;
LABEL_79:
      v120 = sub_1C13F70(QuestClearHeroineInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v120, 0LL);
      if ( !v120 )
        goto LABEL_1178;
      *(_QWORD *)(v120 + 16) = v100;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v120 + 16), v100, v121, v122, v123, v124, v125, v126);
      result = (BattleResultComponent_resultData_array *)UserServantEntity__getLimitCount(
                                                           (UserServantEntity_o *)v100,
                                                           0LL);
      if ( !v99 )
        goto LABEL_1178;
      v133 = (_DWORD)result != UserServantEntity__getLimitCount(v99, 0LL);
      *(_BYTE *)(v120 + 25) = 0;
      *(_DWORD *)(v120 + 28) = 0;
      *(_DWORD *)(v120 + 32) = 0;
      *(_BYTE *)(v120 + 40) = 0;
      *(_DWORD *)(v120 + 36) = -1;
      *(_BYTE *)(v120 + 24) = v133;
      *(_BYTE *)(v120 + 41) = *(_DWORD *)(v100 + 296) != v99->fields.exceedCount;
      if ( v114 )
      {
        result = (BattleResultComponent_resultData_array *)UserServantCollectionEntity__getFriendShipRank(v114, 0LL);
        if ( !v112 )
          goto LABEL_1178;
        if ( (_DWORD)result != UserServantCollectionEntity__getFriendShipRank(v112, 0LL) )
          *(_DWORD *)(v120 + 36) = UserServantCollectionEntity__getFriendShipRank(v114, 0LL);
        if ( v114->fields.friendshipExceedCount != v112->fields.friendshipExceedCount )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantMaster___);
          v136 = *(_QWORD *)(v100 + 80);
          v135 = *(_QWORD *)(v100 + 88);
          v137 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v661.fields.currentCryptoKey = v136;
          *(_QWORD *)&v661.fields.fakeValue = v135;
          result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                               v661,
                                                               0LL);
          if ( !v137 )
            goto LABEL_1178;
          result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                               v137,
                                                               &entity,
                                                               (int32_t)result,
                                                               (const MethodInfo_3238670 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_1178;
            klass_high = HIDWORD(entity[6].klass);
            friendshipExceedCount = v114->fields.friendshipExceedCount;
            *(_BYTE *)(v120 + 40) = 1;
            *(_DWORD *)(v120 + 36) = friendshipExceedCount + klass_high;
          }
        }
      }
      v140 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v140 = TerminalPramsManager_TypeInfo;
      }
      v72 = &qword_4BAF000;
      v141 = (PartyOrganizationUtility_o *)&v140->static_fields->mQuestClearHeroineInfo;
      v141->klass = (PartyOrganizationUtility_c *)v120;
      sub_1C13CC8(v141, v120, v127, v128, v129, v130, v131, v132);
      v93 = *(_QWORD *)p_max_length;
    }
  }
  if ( !(_DWORD)v93 )
    goto LABEL_1179;
  v142 = (BattleResultComponent_resultData_o *)*m_Items;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetBattleResultCampaignBonus(v142, (const MethodInfo *)isWin);
  if ( !*p_max_length )
    goto LABEL_1179;
  if ( !*m_Items )
    goto LABEL_1178;
  v143 = (*m_Items)->m_Items[9];
  if ( v143 && (v144 = v143->fields.eventEndTitle) != 0LL )
  {
    if ( !(_DWORD)v144 )
      goto LABEL_1179;
    v145 = (UserQuestEntity_o *)v143->fields.eventEndMessage;
  }
  else
  {
    v145 = 0LL;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1499 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    byte_4BB1499 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE6(result->m_Items[19]->fields.oldUserGame) = v145 != 0LL;
  if ( !byte_4BB1498 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4BB1498 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE5(result->m_Items[19]->fields.oldUserGame) = 0;
  if ( !byte_4BB15B9 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4BB15B9 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE1(result->m_Items[19]->fields.resultDamageRewardInfos) = 0;
  if ( !byte_4BB1497 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4BB1497 = 1;
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
    if ( !byte_4BAF44D )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BAF44D = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( result->m_Items[19]->fields.eventId )
    {
      if ( !v145 )
        goto LABEL_1178;
    }
    else
    {
      if ( !v145 )
        goto LABEL_1178;
      questId = v145->fields.questId;
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4BB1251 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
        byte_4BB1251 = 1;
      }
      v147 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v147 = TerminalPramsManager_TypeInfo;
      }
      v147->static_fields->_QuestId_k__BackingField = questId;
      QuestPhase = UserQuestEntity__getQuestPhase(v145, 0LL);
      if ( !byte_4BB1255 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v148);
        byte_4BB1255 = 1;
      }
      v150 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v150 = TerminalPramsManager_TypeInfo;
      }
      v150->static_fields->_PhaseCnt_k__BackingField = QuestPhase;
    }
    v151 = v145->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1178;
    v152 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !*((_BYTE *)v72 + 485) )
    {
      sub_1C13D24(&NetworkManager_TypeInfo, isWin);
      *((_BYTE *)v72 + 485) = 1;
    }
    result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    }
    if ( !v152 )
      goto LABEL_1178;
    v153 = UserQuestMaster__GetEntity((UserQuestMaster_o *)v152, (int64_t)result->m_Items[19]->fields.myDeck, v151, 0LL);
    if ( v153 )
    {
      v154 = v153;
      v155 = UserQuestEntity__getQuestPhase(v153, 0LL);
      if ( UserQuestEntity__getClearNum(v145, 0LL) || UserQuestEntity__getClearNum(v154, 0LL) != 1 )
        v157 = UserQuestEntity__IsResetStatus(v145, 0LL) && !UserQuestEntity__IsResetStatus(v154, 0LL);
      else
        v157 = 1;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BB1498 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v156);
        byte_4BB1498 = 1;
      }
      v158 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->_IsQuestClear_k__BackingField = v157;
      if ( !byte_4BB1C9F )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v156);
        v158 = TerminalPramsManager_TypeInfo;
        byte_4BB1C9F = 1;
      }
      if ( !v158->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v158);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->_EventUIEffectClearQuestId_k__BackingField = v151;
      if ( !byte_4BB1C9C )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v156);
        v158 = TerminalPramsManager_TypeInfo;
        byte_4BB1C9C = 1;
      }
      if ( !v158->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v158);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->_MapModelClearQuestId_k__BackingField = v151;
      if ( !byte_4BB1C9D )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v156);
        v158 = TerminalPramsManager_TypeInfo;
        byte_4BB1C9D = 1;
      }
      if ( !v158->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v158);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->_MapModelClearPhaseCount_k__BackingField = v155;
      TerminalPramsManager__MapModelClearQuestInfo_SaveData((const MethodInfo *)v158);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !result )
        goto LABEL_1178;
      AdManager__TrackEvent((AdManager_o *)result, 4, 1, v151, v155, 0LL, 0LL);
      TerminalPramsManager__SendClearQuestToAdManager(v151, v155, v159);
    }
    else
    {
      v155 = 0;
    }
    v160 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v160);
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1178;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMessageMaster___);
    if ( !result )
      goto LABEL_1178;
    ValidMessage = QuestMessageMaster__GetValidMessage((QuestMessageMaster_o *)result, v151, v155, 3, 0LL);
    v163 = TerminalPramsManager_TypeInfo;
    if ( ValidMessage )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BB04AF )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
        byte_4BB04AF = 1;
      }
      v163 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v163 = TerminalPramsManager_TypeInfo;
      }
      v163->static_fields->_IsDispOnly_k__BackingField = 1;
    }
    if ( !v163->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v163);
    if ( !byte_4BB1CAC )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BB1CAC = 1;
    }
    v164 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v164 = TerminalPramsManager_TypeInfo;
    }
    if ( v164->static_fields->_QuestReleaseFocusQuestId_k__BackingField >= 1 )
    {
      if ( !v164->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v164);
      if ( !byte_4BB1CAC )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
        byte_4BB1CAC = 1;
      }
      v165 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v165 = TerminalPramsManager_TypeInfo;
      }
      TerminalPramsManager__SetQuestReleasedFocusState(
        v165->static_fields->_QuestReleaseFocusQuestId_k__BackingField,
        1,
        v162);
      TerminalPramsManager__SaveQuestReleasedFocusState(v166);
      if ( !byte_4BB1835 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
        byte_4BB1835 = 1;
      }
      v164 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v164 = TerminalPramsManager_TypeInfo;
      }
      v164->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
    }
    if ( !v164->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v164);
    if ( !byte_4BB19D4 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BB19D4 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(result->m_Items[19]->fields.eventPointWinReward) = v151;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  v167 = &byte_4BB1000;
  if ( !byte_4BB149A )
  {
    result = (BattleResultComponent_resultData_array *)sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    byte_4BB149A = 1;
  }
  v168 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v168 = TerminalPramsManager_TypeInfo;
  }
  if ( v168->static_fields->_IsQuestClear_k__BackingField )
  {
    if ( !v145 )
      goto LABEL_1178;
    v169 = v145->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1178;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !result )
      goto LABEL_1178;
    v171 = WarMaster__getByLastQuestId((WarMaster_o *)result, v169, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB149B )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v170);
      byte_4BB149B = 1;
    }
    v172 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v172 = TerminalPramsManager_TypeInfo;
    }
    v172->static_fields->_IsWarClear_k__BackingField = v171 != 0LL;
    v173 = TerminalPramsManager__CheckIsOrdealCallWarClear(v171, v170);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v173 )
    {
      if ( !byte_4BB149C )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
        byte_4BB149C = 1;
      }
      v174 = TerminalPramsManager_TypeInfo;
      v167 = &byte_4BB1000;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v174 = TerminalPramsManager_TypeInfo;
      }
      v175 = 1;
    }
    else
    {
      if ( !byte_4BB149C )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
        byte_4BB149C = 1;
      }
      v174 = TerminalPramsManager_TypeInfo;
      v167 = &byte_4BB1000;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v174 = TerminalPramsManager_TypeInfo;
      }
      v175 = 0;
    }
    v174->static_fields->_IsOrdealCallWarClear_k__BackingField = v175;
    if ( !v174->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v174);
    if ( !byte_4BB149D )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BB149D = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE3(result->m_Items[19]->fields.oldUserEvent) )
    {
      if ( !v171 )
        goto LABEL_1178;
      if ( !WarEntity__IsEvent(v171, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( !result )
          goto LABEL_1178;
        AdManager__TrackEvent((AdManager_o *)result, 6, 1, v171->fields.id, -1, 0LL, 0LL);
      }
    }
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !result )
      goto LABEL_1178;
    AdManager__TrackEvent((AdManager_o *)result, 5, 1, v169, -1, 0LL, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SendOpenedQuestIdToAdManager(v169, v176);
    if ( !byte_4BB149D )
    {
      result = (BattleResultComponent_resultData_array *)sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BB149D = 1;
    }
    v168 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v168 = TerminalPramsManager_TypeInfo;
    }
    if ( v168->static_fields->_IsWarClear_k__BackingField )
    {
      if ( !v171 )
        goto LABEL_1178;
      HasFlag = WarEntity__HasFlag(v171, 128, 0LL);
      v168 = TerminalPramsManager_TypeInfo;
      if ( HasFlag )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BB1827 )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
          byte_4BB1827 = 1;
        }
        v168 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v168 = TerminalPramsManager_TypeInfo;
        }
        v168->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
        if ( !byte_4BB15B9 )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
          v168 = TerminalPramsManager_TypeInfo;
          byte_4BB15B9 = 1;
        }
        if ( !v168->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v168);
          v168 = TerminalPramsManager_TypeInfo;
        }
        v168->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
      }
    }
  }
  if ( !v168->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v168);
  TerminalPramsManager__SetQuestRewardInfo(resulta, (const MethodInfo *)isWin);
  if ( !resulta->max_length )
    goto LABEL_1179;
  if ( !*m_Items )
    goto LABEL_1178;
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->panelEventPoint = HIDWORD((*m_Items)->m_Items[2]);
  static_fields->mResultEventPanelRewardInfos = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&static_fields->mResultEventPanelRewardInfos,
    0LL,
    v178,
    v179,
    v180,
    v181,
    v182,
    v183);
  if ( !*p_max_length )
    goto LABEL_1179;
  if ( !*m_Items )
    goto LABEL_1178;
  v191 = (int64_t)(*m_Items)->m_Items[19];
  if ( v191 && *(_QWORD *)(v191 + 24) )
  {
    v192 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v192 = TerminalPramsManager_TypeInfo;
    }
    p_mResultEventPanelRewardInfos = (PartyOrganizationUtility_o *)&v192->static_fields->mResultEventPanelRewardInfos;
    p_mResultEventPanelRewardInfos->klass = (PartyOrganizationUtility_c *)v191;
    sub_1C13CC8(p_mResultEventPanelRewardInfos, v191, v185, v186, v187, v188, v189, v190);
  }
  v194 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v194 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = (PartyOrganizationUtility_o *)&v194->static_fields->eventConquestInfos;
  p_eventConquestInfos->klass = 0LL;
  sub_1C13CC8(p_eventConquestInfos, 0LL, v185, v186, v187, v188, v189, v190);
  TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1179;
  if ( !*m_Items || !result )
    goto LABEL_1178;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v653,
                                                       HIDWORD((*m_Items)->bounds),
                                                       (const MethodInfo_3238670 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( !*p_max_length )
    goto LABEL_1179;
  if ( !*m_Items )
    goto LABEL_1178;
  v202 = (int64_t)(*m_Items)->m_Items[43];
  if ( v202 && *(_QWORD *)(v202 + 24) )
  {
    v203 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v203 = TerminalPramsManager_TypeInfo;
    }
    v204 = (PartyOrganizationUtility_o *)&v203->static_fields->eventConquestInfos;
    v204->klass = (PartyOrganizationUtility_c *)v202;
    sub_1C13CC8(v204, v202, v196, v197, v198, v199, v200, v201);
    if ( v653 )
      Farm = EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v653, 0LL);
    else
      Farm = 0;
    v206 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v206 = TerminalPramsManager_TypeInfo;
    }
    v206->static_fields->eventConquestInfoDisp = !Farm;
  }
  result = (BattleResultComponent_resultData_array *)v653;
  if ( v653 )
  {
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v653, 0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v167[1178] )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
        v167[1178] = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
      {
        v207 = 1;
      }
      else
      {
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_4BB1497 )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
          byte_4BB1497 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        v207 = BYTE6(result->m_Items[19]->fields.oldUserGame);
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      BYTE1(result->m_Items[19][1].fields.raceResult) = v207;
    }
  }
  if ( !*p_max_length )
    goto LABEL_1179;
  if ( !*m_Items )
    goto LABEL_1178;
  if ( LOBYTE((*m_Items)->m_Items[46]) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1AB9 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BB1AB9 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(result->m_Items[19][1].monitor) = 1;
    if ( !v167[1178] )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      v167[1178] = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      if ( !v145 )
        goto LABEL_1178;
      v208 = v145->fields.questId;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1178;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !result )
        goto LABEL_1178;
      v209 = WarMaster__getByLastQuestId((WarMaster_o *)result, v208, 0LL);
      if ( v209 )
      {
        id = v209->fields.id;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BB1ABA )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v210);
          byte_4BB1ABA = 1;
        }
        v212 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v212 = TerminalPramsManager_TypeInfo;
        }
        v212->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = id;
      }
    }
  }
  v213 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v213 = TerminalPramsManager_TypeInfo;
  }
  *(_QWORD *)&v213->static_fields->clearLastBattleRaidId = -1LL;
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1178;
  v214 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1178;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1179;
  if ( !*m_Items || !result )
    goto LABEL_1178;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)result,
          &v652,
          HIDWORD((*m_Items)->bounds),
          (const MethodInfo_3238670 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_610;
  result = (BattleResultComponent_resultData_array *)v652;
  if ( !v652 )
    goto LABEL_1178;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPoint((EventDetailEntity_o *)v652, 0LL);
  v227 = 0LL;
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !*p_max_length )
      goto LABEL_1179;
    if ( !*m_Items )
      goto LABEL_1178;
    v227 = (int64_t)(*m_Items)->m_Items[10];
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CAD )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    byte_4BB1CAD = 1;
  }
  v228 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v228 = TerminalPramsManager_TypeInfo;
  }
  p_OldUserEventPoint_k__BackingField = (PartyOrganizationUtility_o *)&v228->static_fields->_OldUserEventPoint_k__BackingField;
  p_OldUserEventPoint_k__BackingField->klass = (PartyOrganizationUtility_c *)v227;
  sub_1C13CC8(p_OldUserEventPoint_k__BackingField, v227, v221, v222, v223, v224, v225, v226);
  if ( !*p_max_length )
    goto LABEL_1179;
  if ( !*m_Items || !v214 )
    goto LABEL_1178;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidGorupMax(
                                                       (EventRaidMaster_o *)v214,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0LL);
  if ( (int)result >= 1 )
  {
    if ( !*p_max_length )
      goto LABEL_1179;
    if ( !*m_Items )
      goto LABEL_1178;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                         (EventRaidMaster_o *)v214,
                                                         HIDWORD((*m_Items)->bounds),
                                                         0LL);
    v655 = 0;
    if ( !result )
      goto LABEL_1178;
    max_length = result->max_length;
    v231 = result;
    if ( max_length < 1 )
      goto LABEL_610;
    v232 = 0;
    while ( 1 )
    {
      if ( v232 >= (unsigned int)max_length )
        goto LABEL_1179;
      v233 = &v231->obj.klass + v232;
      v234 = v233[4];
      if ( !v234 )
        goto LABEL_1178;
      result = (BattleResultComponent_resultData_array *)EventRaidEntity__IsJumbleSingleRaid(
                                                           (EventRaidEntity_o *)v233[4],
                                                           0LL);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !*p_max_length )
          goto LABEL_1179;
        if ( !*m_Items )
          goto LABEL_1178;
        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                 (EventRaidMaster_o *)v214,
                                 HIDWORD((*m_Items)->bounds),
                                 (int32_t)v234->_1.namespaze,
                                 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BAF44D )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
          byte_4BAF44D = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( RaidGroupDeadQuestId == result->m_Items[19]->fields.eventId )
        {
          result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !result )
            goto LABEL_1178;
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
        goto LABEL_1179;
      if ( !*m_Items )
        goto LABEL_1178;
      result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidAliveQuestIds(
                                                           (EventRaidMaster_o *)v214,
                                                           HIDWORD((*m_Items)->bounds),
                                                           HIDWORD(v234->_1.name),
                                                           0LL);
      QuestId_k__BackingField = 0;
      if ( !result )
        goto LABEL_1178;
      v236 = result->max_length;
      v237 = result;
      if ( v236 >= 1 )
      {
        v238 = 0;
        while ( 1 )
        {
          if ( v238 >= (unsigned int)v236 )
            goto LABEL_1179;
          v239 = *((_DWORD *)v237->m_Items + v238);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BAF44D )
          {
            sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
            byte_4BAF44D = 1;
          }
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          }
          v240 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
          if ( v239 == v240->_QuestId_k__BackingField )
            break;
          v238 = QuestId_k__BackingField + 1;
          QuestId_k__BackingField = v238;
          v236 = v237->max_length;
          if ( v238 >= v236 )
            goto LABEL_416;
        }
        name_high = HIDWORD(v234->_1.name);
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          v240 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v240->clearBattleRaidId = name_high;
      }
LABEL_416:
      v232 = v655 + 1;
      v655 = v232;
      max_length = v231->max_length;
      if ( v232 >= max_length )
        goto LABEL_610;
    }
    v252 = TerminalPramsManager_TypeInfo;
    v253 = HIDWORD(v234->_1.name);
    goto LABEL_465;
  }
  result = (BattleResultComponent_resultData_array *)v652;
  if ( !v652 )
    goto LABEL_1178;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__isRaidDefeatCount(
                                                       (EventDetailEntity_o *)v652,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_array *)v652;
    if ( !v652 )
      goto LABEL_1178;
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventActivityPoint(
                                                         (EventDetailEntity_o *)v652,
                                                         0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !*p_max_length )
        goto LABEL_1179;
      if ( !*m_Items )
        goto LABEL_1178;
      v248 = (int32_t)(*m_Items)->m_Items[42];
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BAF549 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
        byte_4BAF549 = 1;
      }
      v249 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v249 = TerminalPramsManager_TypeInfo;
      }
      v249->static_fields->_EventActivityPointEffectState_k__BackingField = v248;
    }
    else
    {
      result = (BattleResultComponent_resultData_array *)v652;
      if ( !v652 )
        goto LABEL_1178;
      if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v652, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BB1CAE )
        {
          result = (BattleResultComponent_resultData_array *)sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
          byte_4BB1CAE = 1;
        }
        v250 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v250 = TerminalPramsManager_TypeInfo;
        }
        if ( v250->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField )
        {
          v251 = 0;
        }
        else
        {
          if ( !*p_max_length )
            goto LABEL_1179;
          if ( !*m_Items )
            goto LABEL_1178;
          bounds_high = HIDWORD((*m_Items)->bounds);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsUserEventStatus = CondType__IsUserEventStatus(bounds_high, 7, 0LL);
          v250 = TerminalPramsManager_TypeInfo;
          v251 = IsUserEventStatus;
        }
        if ( !v250->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v250);
        if ( !byte_4BB19DC )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
          byte_4BB19DC = 1;
        }
        v266 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v266 = TerminalPramsManager_TypeInfo;
        }
        v266->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = v251;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)v652;
        if ( !v652 )
          goto LABEL_1178;
        if ( !EventDetailEntity__IsEventHappiness((EventDetailEntity_o *)v652, 0LL) )
          goto LABEL_492;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v255 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BAF44D )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
          byte_4BAF44D = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        eventId = result->m_Items[19]->fields.eventId;
        if ( !byte_4BAF44C )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          byte_4BAF44C = 1;
        }
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( !v255 )
          goto LABEL_1178;
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)v255,
               &v650,
               eventId,
               LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
               0LL) )
        {
          result = (BattleResultComponent_resultData_array *)v650;
          if ( !v650 )
            goto LABEL_1178;
          v257 = QuestPhaseEntity__PlayHappinessCounterEffect(v650, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BB1810 )
          {
            sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
            byte_4BB1810 = 1;
          }
          v258 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v258 = TerminalPramsManager_TypeInfo;
          }
          v258->static_fields->_PlayHappinessCounterEffect_k__BackingField = v257;
        }
        else
        {
LABEL_492:
          result = (BattleResultComponent_resultData_array *)v652;
          if ( !v652 )
            goto LABEL_1178;
          result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPanel(
                                                               (EventDetailEntity_o *)v652,
                                                               0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !*p_max_length )
              goto LABEL_1179;
            v259 = &byte_4BB1000;
            if ( !*m_Items )
              goto LABEL_1178;
            v260 = (*m_Items)->m_Items[10];
            v655 = 0;
            if ( !v260 )
              goto LABEL_1178;
            v261 = (int)v260->fields.eventEndTitle;
            if ( v261 >= 1 )
            {
              v262 = 0;
              while ( 1 )
              {
                if ( v261 == v262 )
                  goto LABEL_1179;
                if ( !v652 )
                  goto LABEL_1178;
                v263 = *((_QWORD *)&v260->fields.eventEndMessage + v262);
                if ( !v263 )
                  goto LABEL_1178;
                if ( LODWORD(v652[1].klass) == *(_DWORD *)(v263 + 24) )
                  break;
                v655 = ++v262;
                if ( v261 == v262 )
                  goto LABEL_591;
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4BB1344 )
              {
                sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
                byte_4BB1344 = 1;
              }
              v268 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v268 = TerminalPramsManager_TypeInfo;
              }
              if ( !v268->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
              {
                v269 = (Il2CppObject *)sub_1C13F70(EventSaveData_TypeInfo);
                System_Object___ctor(v269, 0LL);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4BB1345 )
                {
                  sub_1C13D24(&TerminalPramsManager_TypeInfo, v270);
                  byte_4BB1345 = 1;
                }
                v277 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v277 = TerminalPramsManager_TypeInfo;
                }
                p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v277->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
                p_BeforeEventSubmarineSaveData_k__BackingField->klass = (PartyOrganizationUtility_c *)v269;
                sub_1C13CC8(
                  p_BeforeEventSubmarineSaveData_k__BackingField,
                  (int64_t)v269,
                  v271,
                  v272,
                  v273,
                  v274,
                  v275,
                  v276);
                v268 = TerminalPramsManager_TypeInfo;
              }
              if ( !v268->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v268);
              if ( !byte_4BB1344 )
              {
                sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
                byte_4BB1344 = 1;
              }
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              ultimateGetQpText = result->m_Items[19]->fields.ultimateGetQpText;
              if ( !ultimateGetQpText )
                goto LABEL_1178;
              ultimateGetQpText->fields._stringLength = *(_DWORD *)(v263 + 24);
              if ( !byte_4BB1344 )
              {
                sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
                byte_4BB1344 = 1;
              }
              if ( !LODWORD(result->m_Items[24]) )
              {
                j_il2cpp_runtime_class_init_0(result);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              v280 = result->m_Items[19]->fields.ultimateGetQpText;
              if ( !v280 )
                goto LABEL_1178;
              result = (BattleResultComponent_resultData_array *)v280[1].klass;
              if ( result
                && (result = (BattleResultComponent_resultData_array *)System_String__Split(
                                                                         (System_String_o *)result,
                                                                         0x2Cu,
                                                                         0,
                                                                         0LL)) != 0LL )
              {
                v281 = result->max_length;
                v282 = (System_String_o **)&result->m_Items[1];
                if ( v281 <= 1 )
                  v282 = (System_String_o **)&StringLiteral_1212/*"0"*/;
                v283 = *v282;
                v284 = v281 <= 2 ? (System_String_o **)&StringLiteral_1212/*"0"*/ : (System_String_o **)&result->m_Items[2];
                v285 = *v284;
                v286 = v281 <= 3 ? &StringLiteral_6762/*"Fake description - "*/ : (void **)&result->m_Items[3];
              }
              else
              {
                v285 = (System_String_o *)StringLiteral_1212/*"0"*/;
                v286 = &StringLiteral_6762/*"Fake description - "*/;
                v283 = (System_String_o *)StringLiteral_1212/*"0"*/;
              }
              if ( !v652 )
                goto LABEL_1178;
              v287 = (int32_t)v652[1].klass;
              isLastGoalPlayed = (System_String_o *)*v286;
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
                                                                   v287,
                                                                   0LL);
              v288 = (System_Collections_Generic_List_object__o *)result;
              v289 = TerminalPramsManager___c_TypeInfo;
              if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
                v289 = TerminalPramsManager___c_TypeInfo;
              }
              _9__696_0 = (System_Predicate_object__o *)v289->static_fields->__9__696_0;
              if ( !_9__696_0 )
              {
                if ( !v289->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v289);
                  v289 = TerminalPramsManager___c_TypeInfo;
                }
                v291 = (Il2CppObject *)v289->static_fields->__9;
                _9__696_0 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_QuestReleaseEntity__TypeInfo);
                System_Predicate_object____ctor(
                  _9__696_0,
                  v291,
                  Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__696_0__,
                  0LL);
                v292 = TerminalPramsManager___c_TypeInfo->static_fields;
                v292->__9__696_0 = (struct System_Predicate_QuestReleaseEntity__o *)_9__696_0;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)&v292->__9__696_0,
                  (int64_t)_9__696_0,
                  v293,
                  v294,
                  v295,
                  v296,
                  v297,
                  v298);
              }
              if ( !v288 )
                goto LABEL_1178;
              if ( System_Collections_Generic_List_object___Find(
                     v288,
                     (System_Predicate_T__o *)_9__696_0,
                     (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4BAF44D )
                {
                  sub_1C13D24(&TerminalPramsManager_TypeInfo, v299);
                  byte_4BAF44D = 1;
                }
                v300 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v300 = TerminalPramsManager_TypeInfo;
                }
                QuestId_k__BackingField = v300->static_fields->_QuestId_k__BackingField;
                v283 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4BB1344 )
              {
                sub_1C13D24(&TerminalPramsManager_TypeInfo, v299);
                byte_4BB1344 = 1;
              }
              v301 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v301 = TerminalPramsManager_TypeInfo;
              }
              BeforeEventSubmarineSaveData_k__BackingField = v301->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
              v303 = System_Int64__ToString(v263 + 32, 0LL);
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_38225248(
                                                                   v303,
                                                                   v283,
                                                                   v285,
                                                                   isLastGoalPlayed,
                                                                   0LL);
              if ( !BeforeEventSubmarineSaveData_k__BackingField )
                goto LABEL_1178;
              BeforeEventSubmarineSaveData_k__BackingField->fields.value = (struct System_String_o *)result;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)&BeforeEventSubmarineSaveData_k__BackingField->fields.value,
                (int64_t)result,
                v304,
                v305,
                v306,
                v307,
                v308,
                v309);
              v259 = &byte_4BB1000;
            }
LABEL_591:
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4BAF44D )
            {
              sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
              byte_4BAF44D = 1;
            }
            v310 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v310 = TerminalPramsManager_TypeInfo;
            }
            v311 = v310->static_fields->_QuestId_k__BackingField;
            if ( !byte_4BAF44C )
            {
              sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
              v310 = TerminalPramsManager_TypeInfo;
              byte_4BAF44C = 1;
            }
            if ( !v310->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v310);
              v310 = TerminalPramsManager_TypeInfo;
            }
            PhaseCnt_k__BackingField = v310->static_fields->_PhaseCnt_k__BackingField;
            if ( !v259[1178] )
            {
              sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
              v310 = TerminalPramsManager_TypeInfo;
              v259[1178] = 1;
            }
            if ( !v310->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v310);
              v310 = TerminalPramsManager_TypeInfo;
            }
            IsQuestClear_k__BackingField = v310->static_fields->_IsQuestClear_k__BackingField;
            if ( !byte_4BB1497 )
            {
              sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
              v310 = TerminalPramsManager_TypeInfo;
              byte_4BB1497 = 1;
            }
            if ( !v310->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v310);
              v310 = TerminalPramsManager_TypeInfo;
            }
            SubmarineSaveParamsManager__SaveClearQuestInfo(
              v311,
              PhaseCnt_k__BackingField,
              IsQuestClear_k__BackingField,
              v310->static_fields->_IsPhaseClear_k__BackingField,
              0LL);
          }
          else
          {
            result = (BattleResultComponent_resultData_array *)v652;
            if ( !v652 )
              goto LABEL_1178;
            if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)v652, 0LL) )
            {
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4BB1CA2 )
              {
                sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
                byte_4BB1CA2 = 1;
              }
              v267 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v267 = TerminalPramsManager_TypeInfo;
              }
              v267->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
            }
          }
        }
      }
    }
    goto LABEL_610;
  }
  if ( !*p_max_length )
    goto LABEL_1179;
  if ( !*m_Items )
    goto LABEL_1178;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                       (EventRaidMaster_o *)v214,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0LL);
  v655 = 0;
  if ( !result )
    goto LABEL_1178;
  v242 = result->max_length;
  v243 = result;
  if ( v242 >= 1 )
  {
    v244 = 0;
    while ( 1 )
    {
      if ( v244 >= (unsigned int)v242 || !*p_max_length )
        goto LABEL_1179;
      if ( !*m_Items )
        goto LABEL_1178;
      v245 = v243->m_Items[v244];
      if ( !v245 )
        goto LABEL_1178;
      RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                          (EventRaidMaster_o *)v214,
                          HIDWORD((*m_Items)->bounds),
                          v245->fields.eventId,
                          0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BAF44D )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
        byte_4BAF44D = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v247 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( RaidDeadQuestId == v247->_QuestId_k__BackingField )
        break;
      v244 = v655 + 1;
      v655 = v244;
      v242 = v243->max_length;
      if ( v244 >= v242 )
        goto LABEL_610;
    }
    v254 = v245->fields.eventId;
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      v247 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v247->clearBattleRaidId = v254;
    result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !result )
      goto LABEL_1178;
    if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)result, RaidDeadQuestId, 0, 0LL) )
    {
      v252 = TerminalPramsManager_TypeInfo;
      v253 = v245->fields.eventId;
LABEL_465:
      if ( !v252->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v252);
        v252 = TerminalPramsManager_TypeInfo;
      }
      v252->static_fields->clearLastBattleRaidId = v253;
    }
  }
LABEL_610:
  v314 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v314 = TerminalPramsManager_TypeInfo;
  }
  v315 = &qword_4BAF000;
  if ( v314->static_fields->clearLastBattleRaidId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v316 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1250 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BB1250 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v316 )
      goto LABEL_1178;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v316,
           &v649,
           HIDWORD(result->m_Items[19]->klass),
           (const MethodInfo_3238670 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      result = (BattleResultComponent_resultData_array *)v649;
      if ( !v649 )
        goto LABEL_1178;
      if ( WarEntity__IsFolder((WarEntity_o *)v649, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)TitleInfoEventRaidBossComponent_TypeInfo;
        if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TitleInfoEventRaidBossComponent_TypeInfo;
        }
        if ( !*p_max_length )
          goto LABEL_1179;
        if ( !*m_Items )
          goto LABEL_1178;
        UnityEngine_PlayerPrefs__SetInt(result->m_Items[19]->fields.eventEndTitle, HIDWORD((*m_Items)->bounds), 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB181B )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    byte_4BB181B = 1;
  }
  v317 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v317 = TerminalPramsManager_TypeInfo;
  }
  v317->static_fields->_IsWarBoardClear_k__BackingField = 0;
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    v317 = TerminalPramsManager_TypeInfo;
    byte_4BAF44D = 1;
  }
  if ( !v317->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v317);
    v317 = TerminalPramsManager_TypeInfo;
  }
  if ( v317->static_fields->_QuestId_k__BackingField >= 1 )
  {
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1178;
    v318 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BAF44D )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BAF44D = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v318 )
      goto LABEL_1178;
    result = (BattleResultComponent_resultData_array *)QuestMaster__getQuestEntity(
                                                         (QuestMaster_o *)v318,
                                                         result->m_Items[19]->fields.eventId,
                                                         0LL);
    if ( !result )
      goto LABEL_1178;
    v319 = (int)result->m_Items[1];
    if ( !byte_4BB181B )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BB181B = 1;
    }
    v317 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v317 = TerminalPramsManager_TypeInfo;
    }
    v317->static_fields->_IsWarBoardClear_k__BackingField = v319 == 7;
  }
  if ( !v317->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v317);
  if ( !byte_4BB1AB8 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    byte_4BB1AB8 = 1;
  }
  v320 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v320 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeRelease_k__BackingField = (PartyOrganizationUtility_o *)&v320->static_fields->_questClearCostumeRelease_k__BackingField;
  p_questClearCostumeRelease_k__BackingField->klass = 0LL;
  sub_1C13CC8(p_questClearCostumeRelease_k__BackingField, 0LL, v215, v216, v217, v218, v219, v220);
  if ( !*p_max_length )
    goto LABEL_1179;
  if ( !*m_Items )
    goto LABEL_1178;
  v328 = (*m_Items)->m_Items[22];
  if ( v328 && v328->fields.eventEndTitle )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB180C )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BB180C = 1;
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
        goto LABEL_1179;
      if ( !*m_Items )
        goto LABEL_1178;
      v329 = (int64_t)(*m_Items)->m_Items[22];
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4BB1AB8 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
        byte_4BB1AB8 = 1;
      }
      v330 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v330 = TerminalPramsManager_TypeInfo;
      }
      v331 = (PartyOrganizationUtility_o *)&v330->static_fields->_questClearCostumeRelease_k__BackingField;
      v331->klass = (PartyOrganizationUtility_c *)v329;
      sub_1C13CC8(v331, v329, v322, v323, v324, v325, v326, v327);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1819 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    byte_4BB1819 = 1;
  }
  v332 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v332 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeGet_k__BackingField = (PartyOrganizationUtility_o *)&v332->static_fields->_questClearCostumeGet_k__BackingField;
  p_questClearCostumeGet_k__BackingField->klass = 0LL;
  sub_1C13CC8(p_questClearCostumeGet_k__BackingField, 0LL, v322, v323, v324, v325, v326, v327);
  if ( !*p_max_length )
    goto LABEL_1179;
  if ( !*m_Items )
    goto LABEL_1178;
  v340 = (int64_t)(*m_Items)->m_Items[23];
  if ( v340 && *(_QWORD *)(v340 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1819 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BB1819 = 1;
    }
    v341 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v341 = TerminalPramsManager_TypeInfo;
    }
    v342 = (PartyOrganizationUtility_o *)&v341->static_fields->_questClearCostumeGet_k__BackingField;
    v342->klass = (PartyOrganizationUtility_c *)v340;
    sub_1C13CC8(v342, v340, v334, v335, v336, v337, v338, v339);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CAF )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    byte_4BB1CAF = 1;
  }
  v343 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v343 = TerminalPramsManager_TypeInfo;
  }
  p_eventPointWinReward_k__BackingField = (PartyOrganizationUtility_o *)&v343->static_fields->_eventPointWinReward_k__BackingField;
  p_eventPointWinReward_k__BackingField->klass = 0LL;
  sub_1C13CC8(p_eventPointWinReward_k__BackingField, 0LL, v334, v335, v336, v337, v338, v339);
  if ( !byte_4BB1CB0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    byte_4BB1CB0 = 1;
  }
  v351 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v351 = TerminalPramsManager_TypeInfo;
  }
  v351->static_fields->_eventPointWinType_k__BackingField = 0;
  if ( v145 && v652 && HIDWORD(v652[9].klass) == 4 )
  {
    v352 = v145->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1178;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !result )
      goto LABEL_1178;
    v353 = (QuestGroupMaster_o *)result;
    GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)result, v352, 4, 0LL);
    v355 = TerminalPramsManager_TypeInfo;
    v356 = GroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v355 = TerminalPramsManager_TypeInfo;
    }
    v355->static_fields->joinGroupId = v356;
    v357 = QuestGroupMaster__GetGroupId(v353, v352, 3, 0LL);
    if ( !byte_4BB149A )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BB149A = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    v315 = &qword_4BAF000;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( v357 >= 1 && BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1178;
      v358 = DataManager__GetMasterData_object_(
               (DataManager_o *)result,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1178;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventPointMaster___);
      if ( !*p_max_length )
        goto LABEL_1179;
      if ( !*m_Items || !result )
        goto LABEL_1178;
      result = (BattleResultComponent_resultData_array *)EventPointMaster__GetEntity(
                                                           (EventPointMaster_o *)result,
                                                           v357,
                                                           HIDWORD((*m_Items)->bounds),
                                                           0LL);
      v359 = (EventPointEntity_o *)result;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v359 )
        goto LABEL_1178;
      result = (BattleResultComponent_resultData_array *)EventPointEntity__IsGroupOnGroup1(
                                                           v359,
                                                           TerminalPramsManager_TypeInfo->static_fields->joinGroupId,
                                                           0LL);
      if ( !v358 )
        goto LABEL_1178;
      v360 = QuestReleaseMaster__EventPointWinActionType(
               (QuestReleaseMaster_o *)v358,
               v352,
               (unsigned __int8)result & 1,
               0LL);
      if ( !byte_4BB1CB0 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
        byte_4BB1CB0 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      v315 = &qword_4BAF000;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(result->m_Items[19]->fields.warClearReward) = v360;
      if ( !byte_4BB1CB1 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        byte_4BB1CB1 = 1;
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v361 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( v361->_eventPointWinType_k__BackingField )
      {
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          v361 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v361->joinGroupId = -1;
      }
    }
    if ( !*p_max_length )
      goto LABEL_1179;
    if ( !*m_Items )
      goto LABEL_1178;
    v362 = (*m_Items)->m_Items[20];
    if ( v362 )
    {
      v363 = v362->fields.eventEndTitle;
      if ( v363 )
      {
        if ( !(_DWORD)v363 )
          goto LABEL_1179;
        v364 = (int64_t)v362->fields.eventEndMessage;
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_4BB1CAF )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
          byte_4BB1CAF = 1;
        }
        v365 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v365 = TerminalPramsManager_TypeInfo;
        }
        v366 = (PartyOrganizationUtility_o *)&v365->static_fields->_eventPointWinReward_k__BackingField;
        v366->klass = (PartyOrganizationUtility_c *)v364;
        sub_1C13CC8(v366, v364, v345, v346, v347, v348, v349, v350);
      }
    }
  }
  if ( v145 && v652 && HIDWORD(v652[9].klass) == 6 )
  {
    v367 = v145->fields.questId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1CB2 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BB1CB2 = 1;
    }
    v368 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v368 = TerminalPramsManager_TypeInfo;
    }
    v368->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = v367;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB19D7 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    byte_4BB19D7 = 1;
  }
  v369 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v369 = TerminalPramsManager_TypeInfo;
  }
  p_eventRaceBoost_k__BackingField = (PartyOrganizationUtility_o *)&v369->static_fields->_eventRaceBoost_k__BackingField;
  p_eventRaceBoost_k__BackingField->klass = 0LL;
  sub_1C13CC8(p_eventRaceBoost_k__BackingField, 0LL, v345, v346, v347, v348, v349, v350);
  v377 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1179;
  if ( !*m_Items )
    goto LABEL_1178;
  v378 = (int64_t)(*m_Items)->m_Items[21];
  if ( v378 && *(int *)(v378 + 16) >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB19D7 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BB19D7 = 1;
    }
    v379 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v379 = TerminalPramsManager_TypeInfo;
    }
    v380 = (PartyOrganizationUtility_o *)&v379->static_fields->_eventRaceBoost_k__BackingField;
    v380->klass = (PartyOrganizationUtility_c *)v378;
    sub_1C13CC8(v380, v378, v371, v372, v373, v374, v375, v376);
    if ( !byte_4BB19BE )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BB19BE = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v381 = *(_QWORD *)&result->m_Items[19]->fields.followerType;
    if ( !byte_4BAF44D )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4BAF44D = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v381 )
      goto LABEL_1178;
    *(_DWORD *)(v381 + 28) = result->m_Items[19]->fields.eventId;
    v377 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v377 )
    goto LABEL_1179;
  if ( !*m_Items )
    goto LABEL_1178;
  v382 = (*m_Items)->m_Items[24];
  if ( v382 )
  {
    v383 = v382->fields.eventEndTitle;
    if ( v383 )
    {
      if ( !(_DWORD)v383 )
        goto LABEL_1179;
      v384 = (int64_t)v382->fields.eventEndMessage;
      if ( !v384 )
        goto LABEL_1178;
      if ( *(int *)(v384 + 16) >= 1 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BB1CB3 )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
          byte_4BB1CB3 = 1;
        }
        v385 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v385 = TerminalPramsManager_TypeInfo;
        }
        p_eventTowerReward_k__BackingField = (PartyOrganizationUtility_o *)&v385->static_fields->_eventTowerReward_k__BackingField;
        p_eventTowerReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v384;
        sub_1C13CC8(p_eventTowerReward_k__BackingField, v384, v371, v372, v373, v374, v375, v376);
        if ( !*p_max_length )
          goto LABEL_1179;
        if ( !*m_Items )
          goto LABEL_1178;
        v393 = (int64_t)(*m_Items)->m_Items[25];
        if ( !byte_4BB1CB4 )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
          byte_4BB1CB4 = 1;
        }
        v394 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v394 = TerminalPramsManager_TypeInfo;
        }
        p_resultEventTowerRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v394->static_fields->_resultEventTowerRewardInfo_k__BackingField;
        p_resultEventTowerRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v393;
        sub_1C13CC8(p_resultEventTowerRewardInfo_k__BackingField, v393, v387, v388, v389, v390, v391, v392);
        v377 = *(_QWORD *)p_max_length;
      }
    }
  }
  if ( !(_DWORD)v377 )
    goto LABEL_1179;
  if ( !*m_Items )
    goto LABEL_1178;
  v396 = (int64_t)(*m_Items)->m_Items[26];
  if ( v396 && *(_QWORD *)(v396 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1813 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BB1813 = 1;
    }
    v397 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v397 = TerminalPramsManager_TypeInfo;
    }
    p_resultBoostItemRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v397->static_fields->_resultBoostItemRewardInfo_k__BackingField;
    p_resultBoostItemRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v396;
    sub_1C13CC8(p_resultBoostItemRewardInfo_k__BackingField, v396, v371, v372, v373, v374, v375, v376);
    v377 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v377 )
    goto LABEL_1179;
  if ( !*m_Items )
    goto LABEL_1178;
  v399 = (int64_t)(*m_Items)->m_Items[27];
  if ( v399 && *(_QWORD *)(v399 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1814 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BB1814 = 1;
    }
    v400 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v400 = TerminalPramsManager_TypeInfo;
    }
    p_resultEventBoardGameTokenRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v400->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
    p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v399;
    sub_1C13CC8(p_resultEventBoardGameTokenRewardInfo_k__BackingField, v399, v371, v372, v373, v374, v375, v376);
    v377 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v377 )
    goto LABEL_1179;
  if ( !*m_Items )
    goto LABEL_1178;
  v402 = (int64_t)(*m_Items)->m_Items[28];
  if ( v402 && *(_QWORD *)(v402 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB181E )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BB181E = 1;
    }
    v403 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v403 = TerminalPramsManager_TypeInfo;
    }
    p_warClearReward_k__BackingField = (PartyOrganizationUtility_o *)&v403->static_fields->_warClearReward_k__BackingField;
    p_warClearReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v402;
    sub_1C13CC8(p_warClearReward_k__BackingField, v402, v371, v372, v373, v374, v375, v376);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CB5 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    byte_4BB1CB5 = 1;
  }
  v405 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v405 = TerminalPramsManager_TypeInfo;
  }
  v406 = v405->static_fields;
  v406->_oldSuperBoss_k__BackingField = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v406->_oldSuperBoss_k__BackingField,
    0LL,
    v371,
    v372,
    v373,
    v374,
    v375,
    v376);
  if ( !byte_4BB1CB6 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v407);
    byte_4BB1CB6 = 1;
  }
  v414 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v414 = TerminalPramsManager_TypeInfo;
  }
  v415 = v414->static_fields;
  v415->_oldPersonalBoss_k__BackingField = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v415->_oldPersonalBoss_k__BackingField,
    0LL,
    v408,
    v409,
    v410,
    v411,
    v412,
    v413);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    byte_4BAF44D = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_1178;
  WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, result->m_Items[19]->fields.eventId, 0LL);
  result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !result )
    goto LABEL_1178;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)result, WarID_ByQuestID, 0LL);
  if ( WarEntityByWarID )
    v419 = WarEntityByWarID->fields.eventId;
  else
    v419 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !result )
    goto LABEL_1178;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v648,
                                                       v419,
                                                       (const MethodInfo_3238670 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( v639 )
    goto LABEL_1183;
  if ( !*p_max_length )
    goto LABEL_1179;
  result = *m_Items;
  if ( !*m_Items )
    goto LABEL_1178;
  result = (BattleResultComponent_resultData_array *)BattleResultComponent_resultData__checkResultDispFlag(
                                                       (BattleResultComponent_resultData_o *)result,
                                                       256,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
LABEL_1183:
    v426 = *(_QWORD *)p_max_length;
    if ( !(unsigned int)*(_QWORD *)p_max_length )
      goto LABEL_1179;
    if ( !*m_Items )
      goto LABEL_1178;
    if ( (*m_Items)->m_Items[41] )
    {
      result = (BattleResultComponent_resultData_array *)v648;
      if ( v648
        && (result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsPersonalBoss(
                                                                 (EventDetailEntity_o *)v648,
                                                                 0LL),
            v426 = *(_QWORD *)p_max_length,
            ((unsigned __int8)result & 1) != 0) )
      {
        if ( !(_DWORD)v426 )
          goto LABEL_1179;
        if ( !*m_Items )
          goto LABEL_1178;
        v427 = (int64_t)(*m_Items)->m_Items[41];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BB1CB6 )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
          byte_4BB1CB6 = 1;
        }
        v428 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v428 = TerminalPramsManager_TypeInfo;
        }
        v429 = v428->static_fields;
        v429->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v427;
        p_oldPersonalBoss_k__BackingField = (PartyOrganizationUtility_o *)&v429->_oldPersonalBoss_k__BackingField;
      }
      else
      {
        if ( !(_DWORD)v426 )
          goto LABEL_1179;
        if ( !*m_Items )
          goto LABEL_1178;
        v427 = (int64_t)(*m_Items)->m_Items[41];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BB1CB5 )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
          byte_4BB1CB5 = 1;
        }
        v431 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v431 = TerminalPramsManager_TypeInfo;
        }
        v432 = v431->static_fields;
        v432->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v427;
        p_oldPersonalBoss_k__BackingField = (PartyOrganizationUtility_o *)&v432->_oldSuperBoss_k__BackingField;
      }
      sub_1C13CC8(p_oldPersonalBoss_k__BackingField, v427, v420, v421, v422, v423, v424, v425);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CB7 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    byte_4BB1CB7 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !result->m_Items[19]->fields.eventTowerReward )
    goto LABEL_1184;
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4BB1CB7 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    byte_4BB1CB7 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  eventTowerReward = result->m_Items[19]->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_1178;
  if ( *(_QWORD *)&eventTowerReward->max_length )
  {
    v434 = 1;
  }
  else
  {
LABEL_1184:
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_4BAF44D )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BAF44D = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v435 = BalanceConfig_TypeInfo;
    v436 = result->m_Items[19]->fields.eventId;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v435 = BalanceConfig_TypeInfo;
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v434 = v436 == v435->static_fields->OrtFirstQuestId;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4BB182D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    byte_4BB182D = 1;
  }
  v437 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v437 = TerminalPramsManager_TypeInfo;
  }
  v437->static_fields->_isIncomingCall_k__BackingField = v434;
  if ( v648 && EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)v648, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BAF44D )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v438);
      byte_4BAF44D = 1;
    }
    v439 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v439 = TerminalPramsManager_TypeInfo;
    }
    v440 = BalanceConfig_TypeInfo;
    v441 = v439->static_fields->_QuestId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v440 = BalanceConfig_TypeInfo;
    }
    if ( v441 == v440->static_fields->OrtLateQuestId )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BAF44C )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v438);
        byte_4BAF44C = 1;
      }
      v442 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v442 = TerminalPramsManager_TypeInfo;
      }
      v443 = BalanceConfig_TypeInfo;
      v444 = v442->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v443 = BalanceConfig_TypeInfo;
      }
      if ( v444 + 1 == v443->static_fields->OrtLatePhaseBreak )
        goto LABEL_1185;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BAF44C )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v438);
        byte_4BAF44C = 1;
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
      if ( v447 + 1 == v446->static_fields->OrtLatePhaseDead )
      {
LABEL_1185:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v448 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserSuperBossMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !*((_BYTE *)v315 + 485) )
        {
          sub_1C13D24(&NetworkManager_TypeInfo, isWin);
          *((_BYTE *)v315 + 485) = 1;
        }
        result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        }
        v449 = result->m_Items[19]->fields.myDeck;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v448 )
          goto LABEL_1178;
        if ( UserSuperBossMaster__TryGetEntity(
               (UserSuperBossMaster_o *)v448,
               &v647,
               (int64_t)v449,
               v419,
               BalanceConfig_TypeInfo->static_fields->OrtThirdFormId,
               0LL) )
        {
          result = (BattleResultComponent_resultData_array *)sub_1C13DCC(UserSuperBossEntity___TypeInfo, 1LL);
          if ( !result )
            goto LABEL_1178;
          v456 = v647;
          v457 = result;
          if ( v647 )
          {
            result = (BattleResultComponent_resultData_array *)sub_1C13E60(v647, result->obj.klass->_1.element_class);
            if ( !result )
            {
LABEL_1180:
              v637 = sub_1C13FA4();
              sub_1C13E4C(v637, 0LL);
            }
          }
          if ( !v457->max_length )
            goto LABEL_1179;
          v457->m_Items[0] = (BattleResultComponent_resultData_o *)v456;
          sub_1C13CC8((PartyOrganizationUtility_o *)v457->m_Items, (int64_t)v456, v450, v451, v452, v453, v454, v455);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BB1CB6 )
          {
            sub_1C13D24(&TerminalPramsManager_TypeInfo, v458);
            byte_4BB1CB6 = 1;
          }
          v465 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v465 = TerminalPramsManager_TypeInfo;
          }
          v466 = v465->static_fields;
          v466->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v457;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&v466->_oldPersonalBoss_k__BackingField,
            (int64_t)v457,
            v459,
            v460,
            v461,
            v462,
            v463,
            v464);
        }
      }
    }
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  TalkResumeInfo = ScriptManager__GetTalkResumeInfo(0LL);
  if ( TalkResumeInfo )
  {
    v468 = TalkResumeInfo;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1178;
    v469 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BAF44D )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BAF44D = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v469 )
      goto LABEL_1178;
    ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)v469, result->m_Items[19]->fields.eventId, 0LL);
    v472 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !byte_4BAF44C )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v471);
      byte_4BAF44C = 1;
    }
    v473 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v473 = TerminalPramsManager_TypeInfo;
    }
    v474 = v473->static_fields->_PhaseCnt_k__BackingField;
    winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v468, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd2(
                                                         ScriptQuestId,
                                                         v474 + 1,
                                                         winResult,
                                                         0LL);
    if ( !v472 )
      goto LABEL_1178;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v472, (System_String_o *)result, 0LL) )
      goto LABEL_1005;
    v483 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BAF44C )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v482);
      byte_4BAF44C = 1;
    }
    v484 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v484 = TerminalPramsManager_TypeInfo;
    }
    v485 = v484->static_fields->_PhaseCnt_k__BackingField;
    v486 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v468, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd(
                                                         ScriptQuestId,
                                                         v485 + 1,
                                                         v486,
                                                         0LL);
    if ( !v483 )
      goto LABEL_1178;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v483, (System_String_o *)result, 0LL) )
    {
LABEL_1005:
      v487 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v487 = TerminalPramsManager_TypeInfo;
      }
      v488 = StringLiteral_1/*""*/;
      p_lastPlayBgmName = (PartyOrganizationUtility_o *)&v487->static_fields->lastPlayBgmName;
      p_lastPlayBgmName->klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
      sub_1C13CC8(p_lastPlayBgmName, (int64_t)v488, v476, v477, v478, v479, v480, v481);
      TerminalPramsManager__LastPlayBgmNameSave_SaveData(v490);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1178;
  v491 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    byte_4BAF44D = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v492 = result->m_Items[19]->fields.eventId;
  if ( !byte_4BAF44C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4BAF44C = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v491 )
    goto LABEL_1178;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)v491,
    &v656,
    v492,
    LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
    0LL);
  if ( !byte_4BB1CB8 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    byte_4BB1CB8 = 1;
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
    if ( !byte_4BB1CB8 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BB1CB8 = 1;
    }
    v499 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v499 = TerminalPramsManager_TypeInfo;
    }
    result = (BattleResultComponent_resultData_array *)v499->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
    if ( !result )
      goto LABEL_1178;
    *(_QWORD *)&result->max_length = 0LL;
    v500 = &result->max_length;
    *((_QWORD *)v500 - 1) = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)v500, 0LL, v493, v494, v495, v496, v497, v498);
  }
  if ( !*p_max_length )
    goto LABEL_1179;
  if ( !*m_Items )
    goto LABEL_1178;
  v501 = HIDWORD((*m_Items)->bounds);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    byte_4BAF44D = 1;
  }
  v502 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v502 = TerminalPramsManager_TypeInfo;
  }
  v503 = v502->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BAF44C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    v502 = TerminalPramsManager_TypeInfo;
    byte_4BAF44C = 1;
  }
  if ( !v502->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v502);
    v502 = TerminalPramsManager_TypeInfo;
  }
  SpecifiedSceneInfo = QuestPhaseMaster__GetSpecifiedSceneInfo(
                         (QuestPhaseMaster_o *)v491,
                         v501,
                         v503,
                         v502->static_fields->_PhaseCnt_k__BackingField + 1,
                         0LL);
  if ( !byte_4BB1C99 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v504);
    byte_4BB1C99 = 1;
  }
  v512 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v512 = TerminalPramsManager_TypeInfo;
  }
  v513 = v512->static_fields;
  v513->_SpecifiedChangeSceneInfo_k__BackingField = SpecifiedSceneInfo;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v513->_SpecifiedChangeSceneInfo_k__BackingField,
    (int64_t)SpecifiedSceneInfo,
    v505,
    v506,
    v507,
    v508,
    v509,
    v510);
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId = 0LL;
  TerminalPramsManager__InitTipsArchiveScrollValueList(v514);
  if ( !*p_max_length )
    goto LABEL_1179;
  if ( !*m_Items )
    goto LABEL_1178;
  v521 = (int32_t)(*m_Items)->m_Items[52];
  v522 = TerminalPramsManager_TypeInfo;
  if ( v521 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB180E )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BB180E = 1;
    }
    v522 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v522 = TerminalPramsManager_TypeInfo;
    }
    v522->static_fields->_EventMuralId_k__BackingField = v521;
  }
  if ( !v522->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v522);
    v522 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = (PartyOrganizationUtility_o *)&v522->static_fields->eventHarvestGrowthInfo;
  p_eventHarvestGrowthInfo->klass = 0LL;
  sub_1C13CC8(p_eventHarvestGrowthInfo, 0LL, v515, v516, v517, v518, v519, v520);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v524);
    byte_4BAF44D = 1;
  }
  v525 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v525 = TerminalPramsManager_TypeInfo;
  }
  result = (BattleResultComponent_resultData_array *)QuestPhaseMaster__GetEntity(
                                                       (QuestPhaseMaster_o *)v491,
                                                       v525->static_fields->_QuestId_k__BackingField,
                                                       1,
                                                       0LL);
  if ( !result )
    goto LABEL_1178;
  v526 = result;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(
                     (QuestPhaseEntity_o *)result,
                     (System_String_o *)StringLiteral_20201/*"gzip"*/,
                     -1,
                     0LL);
  v528 = QuestPhaseEntity__getScriptIntParam(
           (QuestPhaseEntity_o *)v526,
           (System_String_o *)StringLiteral_20200/*"gutsTextColor"*/,
           -1,
           0LL);
  if ( ScriptIntParam >= 1 )
  {
    v529 = v528;
    if ( v528 >= 1 )
    {
      v530 = sub_1C13F70(EventHarvestGrowthInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v530, 0LL);
      if ( !v530 )
        goto LABEL_1178;
      bounds = v526->bounds;
      *(_DWORD *)(v530 + 24) = ScriptIntParam;
      *(_DWORD *)(v530 + 28) = v529;
      *(_QWORD *)(v530 + 16) = bounds;
      v538 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v538 = TerminalPramsManager_TypeInfo;
      }
      v539 = (PartyOrganizationUtility_o *)&v538->static_fields->eventHarvestGrowthInfo;
      v539->klass = (PartyOrganizationUtility_c *)v530;
      sub_1C13CC8(v539, v530, v531, v532, v533, v534, v535, v536);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1178;
  v540 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
    byte_4BAF44D = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v540 )
    goto LABEL_1178;
  QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)v540, result->m_Items[19]->fields.eventId, 0LL);
  if ( QuestEntity )
  {
    v548 = QuestEntity;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BAF44D )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BAF44D = 1;
    }
    v549 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v549 = TerminalPramsManager_TypeInfo;
    }
    if ( QuestPhaseMaster__IsAreaImproveQuest(
           (QuestPhaseMaster_o *)v491,
           v549->static_fields->_QuestId_k__BackingField,
           0LL) )
    {
      SpotId = QuestEntity__getSpotId(v548, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
      if ( !*p_max_length )
        goto LABEL_1179;
      if ( !*m_Items || !result )
        goto LABEL_1178;
      CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                             (UserEventCooltimeRewardMaster_o *)result,
                             HIDWORD((*m_Items)->bounds),
                             SpotId,
                             0LL);
      if ( CurrentLevelEntity )
      {
        v552 = CurrentLevelEntity;
        v553 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v553 = TerminalPramsManager_TypeInfo;
        }
        eventAreaImproveResultInfo = v553->static_fields->eventAreaImproveResultInfo;
        if ( eventAreaImproveResultInfo )
        {
          if ( !v553->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v553);
            eventAreaImproveResultInfo = TerminalPramsManager_TypeInfo->static_fields->eventAreaImproveResultInfo;
            if ( !eventAreaImproveResultInfo )
              goto LABEL_1178;
          }
          eventAreaImproveResultInfo->fields.afterLevel = v552->fields.lv;
        }
      }
    }
  }
  result = (BattleResultComponent_resultData_array *)v656;
  if ( v656 )
  {
    result = (BattleResultComponent_resultData_array *)QuestPhaseEntity__GetMoveSceneInfo(v656, 0LL);
    if ( !result )
      goto LABEL_1178;
    if ( *(_QWORD *)&result->max_length )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BAF44D )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
        byte_4BAF44D = 1;
      }
      v555 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v555 = TerminalPramsManager_TypeInfo;
      }
      v655 = v555->static_fields->_QuestId_k__BackingField;
      v557 = System_Int32__ToString((int32_t)&v655, 0LL);
      if ( !byte_4BAF44C )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v556);
        byte_4BAF44C = 1;
      }
      v558 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v558 = TerminalPramsManager_TypeInfo;
      }
      v655 = v558->static_fields->_PhaseCnt_k__BackingField + 1;
      v559 = System_Int32__ToString((int32_t)&v655, 0LL);
      v567 = System_String__Concat_62979204(v557, (System_String_o *)StringLiteral_866/*","*/, v559, 0LL);
      if ( !byte_4BB19D6 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v560);
        byte_4BB19D6 = 1;
      }
      v568 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v568 = TerminalPramsManager_TypeInfo;
      }
      p_SceneMoveQuestClearedInfo_k__BackingField = (PartyOrganizationUtility_o *)&v568->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
      p_SceneMoveQuestClearedInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v567;
      sub_1C13CC8(p_SceneMoveQuestClearedInfo_k__BackingField, (int64_t)v567, v561, v562, v563, v564, v565, v566);
    }
  }
  if ( !*p_max_length )
    goto LABEL_1179;
  if ( !*m_Items )
    goto LABEL_1178;
  v570 = (int64_t)(*m_Items)->m_Items[47];
  if ( v570 && *(_QWORD *)(v570 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1817 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, isWin);
      byte_4BB1817 = 1;
    }
    v571 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v571 = TerminalPramsManager_TypeInfo;
    }
    p_limitImageAnnounces_k__BackingField = (PartyOrganizationUtility_o *)&v571->static_fields->_limitImageAnnounces_k__BackingField;
    p_limitImageAnnounces_k__BackingField->klass = (PartyOrganizationUtility_c *)v570;
    sub_1C13CC8(p_limitImageAnnounces_k__BackingField, v570, v542, v543, v544, v545, v546, v547);
  }
  v574 = sub_1C13DCC(string___TypeInfo, 7LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v573);
    byte_4BAF44D = 1;
  }
  v575 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v575 = TerminalPramsManager_TypeInfo;
  }
  v655 = v575->static_fields->_QuestId_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v655, 0LL);
  if ( !v574 )
LABEL_1178:
    sub_1C13F80(result, isWin);
  if ( !*(_DWORD *)(v574 + 24) )
    goto LABEL_1179;
  *(_QWORD *)(v574 + 32) = result;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v574 + 32), (int64_t)result, v576, v577, v578, v579, v580, v581);
  if ( *(_DWORD *)(v574 + 24) <= 1u )
    goto LABEL_1179;
  v588 = StringLiteral_866/*","*/;
  *(_QWORD *)(v574 + 40) = StringLiteral_866/*","*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v574 + 40), (int64_t)v588, v582, v583, v584, v585, v586, v587);
  if ( !byte_4BAF44C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v589);
    byte_4BAF44C = 1;
  }
  v590 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v590 = TerminalPramsManager_TypeInfo;
  }
  v655 = v590->static_fields->_PhaseCnt_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v655, 0LL);
  if ( *(_DWORD *)(v574 + 24) <= 2u )
    goto LABEL_1179;
  *(_QWORD *)(v574 + 48) = result;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v574 + 48), (int64_t)result, v591, v592, v593, v594, v595, v596);
  if ( *(_DWORD *)(v574 + 24) <= 3u )
    goto LABEL_1179;
  v603 = StringLiteral_866/*","*/;
  *(_QWORD *)(v574 + 56) = StringLiteral_866/*","*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v574 + 56), (int64_t)v603, v597, v598, v599, v600, v601, v602);
  if ( !byte_4BB149A )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v604);
    byte_4BB149A = 1;
  }
  v605 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v605 = TerminalPramsManager_TypeInfo;
  }
  v646[0] = v605->static_fields->_IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v646, 0LL);
  if ( *(_DWORD *)(v574 + 24) <= 4u )
    goto LABEL_1179;
  *(_QWORD *)(v574 + 64) = result;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v574 + 64), (int64_t)result, v606, v607, v608, v609, v610, v611);
  if ( *(_DWORD *)(v574 + 24) <= 5u )
    goto LABEL_1179;
  v618 = StringLiteral_866/*","*/;
  *(_QWORD *)(v574 + 72) = StringLiteral_866/*","*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v574 + 72), (int64_t)v618, v612, v613, v614, v615, v616, v617);
  if ( !byte_4BB1497 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v619);
    byte_4BB1497 = 1;
  }
  v620 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v620 = TerminalPramsManager_TypeInfo;
  }
  v646[0] = v620->static_fields->_IsPhaseClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v646, 0LL);
  if ( *(_DWORD *)(v574 + 24) <= 6u )
    goto LABEL_1179;
  *(_QWORD *)(v574 + 80) = result;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v574 + 80), (int64_t)result, v621, v622, v623, v624, v625, v626);
  v627 = System_String__Concat_62981472((System_String_array *)v574, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_16965/*"advPrepare"*/, v627, 0LL);
  TerminalPramsManager__SaveClearDatas(resulta, v628);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v629);
  TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(v630);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v631);
  TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(v632);
  TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(v633);
  if ( TerminalPramsManager__IsTerminalEffectNT2BoardOpen(v634) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1257 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v635);
      byte_4BB1257 = 1;
    }
    v636 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v636 = TerminalPramsManager_TypeInfo;
    }
    v636->static_fields->_WarId_k__BackingField = 0;
    if ( !byte_4BAF54B )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v635);
      v636 = TerminalPramsManager_TypeInfo;
      byte_4BAF54B = 1;
    }
    if ( !v636->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v636);
      v636 = TerminalPramsManager_TypeInfo;
    }
    v636->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4BB1801 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v635);
      v636 = TerminalPramsManager_TypeInfo;
      byte_4BB1801 = 1;
    }
    if ( !v636->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v636);
      v636 = TerminalPramsManager_TypeInfo;
    }
    v636->static_fields->_IsMapReturnFolder_k__BackingField = 0;
    if ( !byte_4BB19C9 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v635);
      v636 = TerminalPramsManager_TypeInfo;
      byte_4BB19C9 = 1;
    }
    if ( !v636->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v636);
      v636 = TerminalPramsManager_TypeInfo;
    }
    v636->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData((const MethodInfo *)v636);
  }
}


void __fastcall TerminalPramsManager__ResetBlankEarthSpotInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  const MethodInfo *v2; // x0

  if ( (byte_4BB1C29 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C29 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB116D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB116D = 1;
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

  if ( (byte_4BB1C33 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C33 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1C8B )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C8B = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_QuestMessageScriptQuestId_k__BackingField = -1;
  if ( !byte_4BB1C8C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4BB1C8C = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = -1;
  if ( !byte_4BB1ABC )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4BB1ABC = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  p_TalkScriptInfo_k__BackingField = (PartyOrganizationUtility_o *)&v8->static_fields->_TalkScriptInfo_k__BackingField;
  p_TalkScriptInfo_k__BackingField->klass = 0LL;
  sub_1C13CC8(p_TalkScriptInfo_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !byte_4BB1C8D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
    byte_4BB1C8D = 1;
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
  QuestRewardInfo_array *mQuestRewardInfos; // x29
  TerminalPramsManager_c *v7; // x0
  _BOOL8 v8; // x0
  BattleResultComponent_resultData_o *v9; // x0
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct TerminalPramsManager_StaticFields *v12; // x8
  _BOOL4 IsDispOnly_k__BackingField; // w27
  struct TerminalPramsManager_StaticFields *v14; // x8
  _BOOL4 IsWarBoardClear_k__BackingField; // w25
  _BOOL4 IsOrdealCallWarClear_k__BackingField; // w26
  int32_t eventMuralId; // w22
  int32_t eventActionQuestId; // w20
  bool isWarBoardClear; // w24
  TerminalPramsManager_ClearData_o *v20; // x25
  __int64 v21; // x1
  TerminalPramsManager_c *v22; // x0
  TerminalPramsManager_ClearData_c *v23; // x0
  System_String_o *SAVEKEY_CLEAR_REWARD_DISP; // x19
  System_String_o *v25; // x1
  LimitImageAnnounce_array *limitImageAnnounces; // [xsp+C0h] [xbp-100h]
  int32_t panelEventPoint; // [xsp+CCh] [xbp-F4h]
  BattleDropItem_array *mResultEventPanelRewardInfos; // [xsp+D0h] [xbp-F0h]
  BattleDropItem_array *questResultAfterEventRewardInfos; // [xsp+D8h] [xbp-E8h]
  int32_t eventActivityPointEffectState; // [xsp+E4h] [xbp-DCh]
  WarClearReward_array *warClearRewardIn; // [xsp+E8h] [xbp-D8h]
  QuestRewardInfo_array *resultEventTowerRewardInfo_k__BackingField; // [xsp+F0h] [xbp-D0h]
  EventTowerReward_o *evTowerReward; // [xsp+F8h] [xbp-C8h]
  CostumeReleaseAnnounce_array *questClearCostumeGet_k__BackingField; // [xsp+100h] [xbp-C0h]
  CostumeReleaseAnnounce_array *questClearCostumeRelease; // [xsp+108h] [xbp-B8h]
  EventRaceBoostInfo_o *evRace; // [xsp+110h] [xbp-B0h]
  int32_t evpWinType; // [xsp+11Ch] [xbp-A4h]
  EventPointWinReward_o *eventPointWinReward_k__BackingField; // [xsp+120h] [xbp-A0h]
  UserSuperBossEntity_array *oldPersonalBoss; // [xsp+128h] [xbp-98h]
  UserSuperBossEntity_array *oldSuperBoss; // [xsp+130h] [xbp-90h]
  _BOOL4 IsPhaseClear_k__BackingField; // [xsp+13Ch] [xbp-84h]
  int32_t groupjoin; // [xsp+140h] [xbp-80h]
  int32_t lastRaidId; // [xsp+144h] [xbp-7Ch]
  int32_t raidId; // [xsp+148h] [xbp-78h]
  _BOOL4 IsQuestClear_k__BackingField; // [xsp+14Ch] [xbp-74h]
  QuestClearHeroineInfo_o *mQuestClearHeroineInfo; // [xsp+150h] [xbp-70h]
  QuestRewardInfo_array *mQuestPhaseRewardInfos; // [xsp+158h] [xbp-68h]

  if ( (byte_4BB1C78 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_ClearData_TypeInfo, method);
    sub_1C13D24(&JsonManager_TypeInfo, v3);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v4);
    byte_4BB1C78 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v5->static_fields->mQuestRewardInfos;
  if ( result )
  {
    if ( !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    if ( !byte_4BAF44D )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
      byte_4BAF44D = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v8 = TerminalPramsManager__IsFreeQuestOnOrdealCall(v7->static_fields->_QuestId_k__BackingField, method);
    if ( v8 )
    {
      if ( !result->max_length )
        sub_1C13F88(v8, method);
      v9 = result->m_Items[0];
      if ( !v9 )
        sub_1C13F80(0LL, method);
      if ( BattleResultComponent_resultData__checkResultDispFlag(v9, 2048, 0LL) )
        mQuestRewardInfos = 0LL;
    }
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  mQuestClearHeroineInfo = static_fields->mQuestClearHeroineInfo;
  mQuestPhaseRewardInfos = static_fields->mQuestPhaseRewardInfos;
  if ( !byte_4BB149A )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4BB149A = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  IsQuestClear_k__BackingField = v10->static_fields->_IsQuestClear_k__BackingField;
  if ( !byte_4BB1497 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4BB1497 = 1;
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
  if ( !byte_4BB1CB9 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4BB1CB9 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  oldSuperBoss = v10->static_fields->_oldSuperBoss_k__BackingField;
  if ( !byte_4BB1CB7 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4BB1CB7 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss = v10->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !byte_4BB1CBA )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4BB1CBA = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventPointWinReward_k__BackingField = v10->static_fields->_eventPointWinReward_k__BackingField;
  if ( !byte_4BB1CB1 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4BB1CB1 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evpWinType = v10->static_fields->_eventPointWinType_k__BackingField;
  if ( !byte_4BB19BE )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4BB19BE = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evRace = v10->static_fields->_eventRaceBoost_k__BackingField;
  if ( !byte_4BB1815 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4BB1815 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeRelease = v10->static_fields->_questClearCostumeRelease_k__BackingField;
  if ( !byte_4BB180B )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4BB180B = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeGet_k__BackingField = v10->static_fields->_questClearCostumeGet_k__BackingField;
  if ( !byte_4BB1811 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4BB1811 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evTowerReward = v10->static_fields->_eventTowerReward_k__BackingField;
  if ( !byte_4BB1CBB )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4BB1CBB = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v10->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  if ( !byte_4BB04AC )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4BB04AC = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  IsDispOnly_k__BackingField = v10->static_fields->_IsDispOnly_k__BackingField;
  if ( !byte_4BB181D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4BB181D = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  warClearRewardIn = v10->static_fields->_warClearReward_k__BackingField;
  if ( !byte_4BB1CBC )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4BB1CBC = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventActivityPointEffectState = v10->static_fields->_EventActivityPointEffectState_k__BackingField;
  if ( !byte_4BB180C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4BB180C = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v14 = v10->static_fields;
  IsWarBoardClear_k__BackingField = v14->_IsWarBoardClear_k__BackingField;
  mResultEventPanelRewardInfos = v14->mResultEventPanelRewardInfos;
  questResultAfterEventRewardInfos = v14->mQuestResultAfterEventRewardInfos;
  panelEventPoint = v14->panelEventPoint;
  if ( !byte_4BB1816 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4BB1816 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  limitImageAnnounces = v10->static_fields->_limitImageAnnounces_k__BackingField;
  if ( !byte_4BB116C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4BB116C = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  IsOrdealCallWarClear_k__BackingField = v10->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4BB180D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4BB180D = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventMuralId = v10->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_4BB19CC )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4BB19CC = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventActionQuestId = v10->static_fields->_EventActionQuestId_k__BackingField;
  isWarBoardClear = IsWarBoardClear_k__BackingField;
  v20 = (TerminalPramsManager_ClearData_o *)sub_1C13F70(TerminalPramsManager_ClearData_TypeInfo);
  TerminalPramsManager_ClearData___ctor_35827956(
    v20,
    mQuestClearHeroineInfo,
    mQuestRewardInfos,
    mQuestPhaseRewardInfos,
    IsQuestClear_k__BackingField,
    IsPhaseClear_k__BackingField,
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
    IsOrdealCallWarClear_k__BackingField,
    eventMuralId,
    eventActionQuestId,
    0LL);
  if ( !byte_4BB1CBD )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v21);
    byte_4BB1CBD = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  v22->static_fields->_isQuestRewardSetted_k__BackingField = 1;
  v23 = TerminalPramsManager_ClearData_TypeInfo;
  if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
    v23 = TerminalPramsManager_ClearData_TypeInfo;
  }
  SAVEKEY_CLEAR_REWARD_DISP = v23->static_fields->SAVEKEY_CLEAR_REWARD_DISP;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v25 = JsonManager__toJson((Il2CppObject *)v20, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString(SAVEKEY_CLEAR_REWARD_DISP, v25, 0LL);
}


void __fastcall TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  EventRaidDefeatedEffectInfo_o *EventRaidDefeatedEffectInfo_k__BackingField; // x0
  System_String_o *v5; // x0

  if ( (byte_4BB1C7E & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11627/*"SAME_SERVANT"*/, v2);
    byte_4BB1C7E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CBF )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1CBF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EventRaidDefeatedEffectInfo_k__BackingField = v3->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  if ( !EventRaidDefeatedEffectInfo_k__BackingField )
    sub_1C13F80(0LL, v1);
  v5 = EventRaidDefeatedEffectInfo__ConvertToStringData(EventRaidDefeatedEffectInfo_k__BackingField, v1);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11627/*"SAME_SERVANT"*/, v5, 0LL);
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

  if ( (byte_4BB1C40 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_13845/*"TerminalBaseMap"*/, v2);
    sub_1C13D24(&StringLiteral_13848/*"TerminalBeforeEventSubmarinePointData"*/, v3);
    byte_4BB1C40 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BAF44D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13848/*"TerminalBeforeEventSubmarinePointData"*/,
    v4->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4BAF44C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    byte_4BAF44C = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13845/*"TerminalBaseMap"*/,
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

  if ( (byte_4BB1C82 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v1);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v2);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v4);
    sub_1C13D24(&int_TypeInfo, v5);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v7);
    sub_1C13D24(&string_TypeInfo, v8);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_11636/*"SAVEKEY_ConnectMarkEventId"*/, v10);
    sub_1C13D24(&StringLiteral_25476/*"{0}/{1}"*/, v11);
    sub_1C13D24(&StringLiteral_866/*","*/, v12);
    byte_4BB1C82 = 1;
  }
  memset(&v29, 0, 32);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB124D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB124D = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestRandomGroupList_k__BackingField = v14->static_fields->_QuestRandomGroupList_k__BackingField;
  if ( !QuestRandomGroupList_k__BackingField )
    sub_1C13F80(0LL, v1);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v28,
    QuestRandomGroupList_k__BackingField,
    (const MethodInfo_3289BB0 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v29.fields._dictionary = v28[0];
  v29.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v28[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v29,
            (const MethodInfo_33E0810 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int)v29.fields._current.fields.key;
    key_high = HIDWORD(v29.fields._current.fields.key);
    if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
      Empty = System_String__Concat_62967944(Empty, (System_String_o *)StringLiteral_866/*","*/, 0LL);
    LODWORD(v28[0]) = key;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v28, v18, v19, v20);
    v27 = key_high;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v22, v23, v24);
    v26 = System_String__Format_62982316((System_String_o *)StringLiteral_25476/*"{0}/{1}"*/, v21, v25, 0LL);
    Empty = System_String__Concat_62967944(Empty, v26, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v29,
    (const MethodInfo_33E0910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11636/*"SAVEKEY_ConnectMarkEventId"*/, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestReleasedFocusState(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v4; // x1

  if ( (byte_4BB1C6B & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C6B = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v2);
  if ( !QuestFocusStateManager )
    sub_1C13F80(0LL, v4);
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

  if ( (byte_4BB1C3E & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_13838/*"Terminal/LoginBonus/FortuneBonus"*/, v2);
    sub_1C13D24(&StringLiteral_11634/*"SAVEKEY_ClearEventQuestIds"*/, v3);
    sub_1C13D24(&StringLiteral_13834/*"Terminal/EarthCore/{0:D2}"*/, v4);
    sub_1C13D24(&StringLiteral_13839/*"Terminal/LoginBonus/LoginBonusWithTransition"*/, v5);
    sub_1C13D24(&StringLiteral_13845/*"TerminalBaseMap"*/, v6);
    sub_1C13D24(&StringLiteral_13853/*"TerminalLastPanelEventPoint"*/, v7);
    sub_1C13D24(&StringLiteral_13837/*"Terminal/Info"*/, v8);
    sub_1C13D24(&StringLiteral_11631/*"SAVEKEY_BlankEarthRank"*/, v9);
    sub_1C13D24(&StringLiteral_13840/*"Terminal/MapImgs/"*/, v10);
    sub_1C13D24(&StringLiteral_11630/*"SAVEKEY_"*/, v11);
    sub_1C13D24(&StringLiteral_11635/*"SAVEKEY_ConnectMarkAnimationId"*/, v12);
    sub_1C13D24(&StringLiteral_11623/*"S256"*/, v13);
    sub_1C13D24(&StringLiteral_11632/*"SAVEKEY_BlankEarthSpotId"*/, v14);
    sub_1C13D24(&StringLiteral_13848/*"TerminalBeforeEventSubmarinePointData"*/, v15);
    sub_1C13D24(&StringLiteral_11643/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v16);
    sub_1C13D24(&StringLiteral_13852/*"TerminalIsDoneShortcut"*/, v17);
    sub_1C13D24(&StringLiteral_13857/*"TerminalPhaseCnt"*/, v18);
    sub_1C13D24(&StringLiteral_13850/*"TerminalEndTime"*/, v19);
    sub_1C13D24(&StringLiteral_13854/*"TerminalLastPlayedFreeQuestSpotId"*/, v20);
    sub_1C13D24(&StringLiteral_13835/*"Terminal/Effect"*/, v21);
    sub_1C13D24(&StringLiteral_11621/*"Russian (Russia)"*/, v22);
    sub_1C13D24(&StringLiteral_11626/*"SAME_CLASS_MULI_EXP"*/, v23);
    sub_1C13D24(&StringLiteral_13858/*"TerminalPlayerIcon"*/, v24);
    sub_1C13D24(&StringLiteral_11625/*"S>"*/, v25);
    sub_1C13D24(&StringLiteral_866/*","*/, v26);
    sub_1C13D24(&StringLiteral_11624/*"S="*/, v27);
    sub_1C13D24(&StringLiteral_11633/*"SAVEKEY_CampaignDirectBonus"*/, v28);
    sub_1C13D24(&StringLiteral_11642/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v29);
    byte_4BB1C3E = 1;
  }
  EndTime_k__BackingField = 0LL;
  MapModelClearQuestId_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB142C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB142C = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13837/*"Terminal/Info"*/,
    v30->static_fields->_DispState_k__BackingField,
    0LL);
  if ( !byte_4BB1250 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v31);
    byte_4BB1250 = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13857/*"TerminalPhaseCnt"*/,
    v32->static_fields->_WarId_k__BackingField,
    0LL);
  if ( !byte_4BB1430 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v33);
    byte_4BB1430 = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13850/*"TerminalEndTime"*/,
    v34->static_fields->_SpotId_k__BackingField,
    0LL);
  if ( !byte_4BB1169 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v35);
    byte_4BB1169 = 1;
  }
  v36 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v36 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11621/*"Russian (Russia)"*/,
    v36->static_fields->_BlankEarthSpotId_k__BackingField,
    0LL);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v37);
    byte_4BAF44D = 1;
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v38 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13848/*"TerminalBeforeEventSubmarinePointData"*/,
    v38->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4BAF44C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v39);
    byte_4BAF44C = 1;
  }
  v40 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v40 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13845/*"TerminalBaseMap"*/,
    v40->static_fields->_PhaseCnt_k__BackingField,
    0LL);
  if ( !byte_4BB1431 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v41);
    byte_4BB1431 = 1;
  }
  v42 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v42 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v42->static_fields->_EndTime_k__BackingField;
  v43 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13838/*"Terminal/LoginBonus/FortuneBonus"*/, v43, 0LL);
  if ( !byte_4BB1838 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v44);
    byte_4BB1838 = 1;
  }
  v45 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v45 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13840/*"Terminal/MapImgs/"*/,
    v45->static_fields->_IsDoneShortcut_k__BackingField,
    0LL);
  v46 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v46 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_13858/*"TerminalPlayerIcon"*/,
    v46->static_fields->mTerminalWarStartedIds,
    0LL);
  if ( !byte_4BB19C6 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v47);
    byte_4BB19C6 = 1;
  }
  v48 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v48 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13853/*"TerminalLastPanelEventPoint"*/,
    v48->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_4BB19C7 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v49);
    byte_4BB19C7 = 1;
  }
  v50 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v50 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13854/*"TerminalLastPlayedFreeQuestSpotId"*/,
    v50->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  if ( !byte_4BB1CA5 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v51);
    byte_4BB1CA5 = 1;
  }
  v52 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v52 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13839/*"Terminal/LoginBonus/LoginBonusWithTransition"*/,
    v52->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4BB1CA6 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v53);
    byte_4BB1CA6 = 1;
  }
  v54 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v54 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v54->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v55 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13852/*"TerminalIsDoneShortcut"*/, v55, 0LL);
  if ( !byte_4BB1CA7 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v56);
    byte_4BB1CA7 = 1;
  }
  v57 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13834/*"Terminal/EarthCore/{0:D2}"*/,
    v57->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_4BB1CA8 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v58);
    byte_4BB1CA8 = 1;
  }
  v59 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v59 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13835/*"Terminal/Effect"*/,
    v59->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  if ( !byte_4BB1CA9 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v60);
    byte_4BB1CA9 = 1;
  }
  v61 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v61 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11634/*"SAVEKEY_ClearEventQuestIds"*/,
    v61->static_fields->_PlayedTerminalEffects_k__BackingField,
    0LL);
  if ( !byte_4BB182A )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v62);
    byte_4BB182A = 1;
  }
  v63 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v63 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11631/*"SAVEKEY_BlankEarthRank"*/,
    v63->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB182B )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v64);
    byte_4BB182B = 1;
  }
  v65 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v65 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11632/*"SAVEKEY_BlankEarthSpotId"*/,
    v65->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  if ( !byte_4BB19C8 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v66);
    byte_4BB19C8 = 1;
  }
  v67 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11633/*"SAVEKEY_CampaignDirectBonus"*/,
    v67->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB19CB )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v68);
    byte_4BB19CB = 1;
  }
  v69 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v69 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11643/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v69->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11625/*"S>"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11624/*"S="*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  if ( !byte_4BB1803 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v70);
    byte_4BB1803 = 1;
  }
  v71 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v71 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11642/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v71->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  if ( !byte_4BB124F )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v72);
    byte_4BB124F = 1;
  }
  v73 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v73 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11623/*"S256"*/,
    v73->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  if ( !byte_4BB142D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v74);
    byte_4BB142D = 1;
  }
  v75 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v75 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v75->static_fields->_MapModelClearQuestId_k__BackingField;
  v77 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_4BB142E )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v76);
    byte_4BB142E = 1;
  }
  v78 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v78 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v78->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v79 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v80 = System_String__Concat_62979204(v77, (System_String_o *)StringLiteral_866/*","*/, v79, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11630/*"SAVEKEY_"*/, v80, 0LL);
  if ( !byte_4BB19CD )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v81);
    byte_4BB19CD = 1;
  }
  v82 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v82 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11626/*"SAME_CLASS_MULI_EXP"*/,
    v82->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CAA )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v83);
    byte_4BB1CAA = 1;
  }
  v84 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v84 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11635/*"SAVEKEY_ConnectMarkAnimationId"*/,
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

  if ( (byte_4BB1C72 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    byte_4BB1C72 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v6);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1C13F80(0LL, v9);
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
  System_Func_int__bool__o *_9__701_0; // x21
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
  System_Func_object__int__o *_9__701_3; // x20
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
  System_Func_int__int__o *_9__701_4; // x20
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

  if ( (byte_4BB1C73 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_SpotMaster___, v4);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_1C13D24(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v6);
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_int___, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_OrderByDescending_int__int___, v8);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_int__QuestEntity___, v9);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_QuestEntity__int___, v10);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_int___, v11);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_QuestEntity___, v12);
    sub_1C13D24(&System_Func_int__int__TypeInfo, v13);
    sub_1C13D24(&System_Func_int__bool__TypeInfo, v14);
    sub_1C13D24(&System_Func_QuestEntity__int__TypeInfo, v15);
    sub_1C13D24(&System_Func_QuestEntity__bool__TypeInfo, v16);
    sub_1C13D24(&System_Func_int__QuestEntity__TypeInfo, v17);
    sub_1C13D24(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v18);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v20);
    sub_1C13D24(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__701_0__, v21);
    sub_1C13D24(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__701_3__, v22);
    sub_1C13D24(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__701_4__, v23);
    sub_1C13D24(&Method_TerminalPramsManager___c__DisplayClass701_0__SendOpenedQuestIdToAdManager_b__1__, v24);
    sub_1C13D24(&Method_TerminalPramsManager___c__DisplayClass701_0__SendOpenedQuestIdToAdManager_b__2__, v25);
    sub_1C13D24(&TerminalPramsManager___c__DisplayClass701_0_TypeInfo, v26);
    sub_1C13D24(&TerminalPramsManager___c_TypeInfo, v27);
    byte_4BB1C73 = 1;
  }
  v88 = 0LL;
  entity = 0LL;
  v28 = sub_1C13F70(TerminalPramsManager___c__DisplayClass701_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass701_0___ctor((TerminalPramsManager___c__DisplayClass701_0_o *)v28, 0LL);
  if ( clearedQuestId >= 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !v28 )
      goto LABEL_43;
    *(_QWORD *)(v28 + 16) = Instance;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v28 + 16), Instance, v31, v32, v33, v34, v35, v36);
    Instance = *(_QWORD *)(v28 + 16);
    if ( !Instance )
      goto LABEL_43;
    if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, clearedQuestId, 0LL) )
      return;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_SpotMaster___);
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
                 (const MethodInfo_3238670 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v28 + 24) = MasterData_object;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v28 + 24), (int64_t)MasterData_object, v40, v41, v42, v43, v44, v45);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
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
      _9__701_0 = v47->static_fields->__9__701_0;
      if ( !_9__701_0 )
      {
        if ( !v47->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v47);
          v47 = TerminalPramsManager___c_TypeInfo;
        }
        v49 = (Il2CppObject *)v47->static_fields->__9;
        _9__701_0 = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__701_0,
          v49,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__701_0__,
          0LL);
        static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
        static_fields->__9__701_0 = _9__701_0;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&static_fields->__9__701_0,
          (int64_t)_9__701_0,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
      }
      v57 = System_Linq_Enumerable__Where_int_(
              QuestIdsByTargetAndOpenCondType,
              (System_Func_TSource__bool__o *)_9__701_0,
              (const MethodInfo_2FCE8EC *)Method_System_Linq_Enumerable_Where_int___);
      v58 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_int__QuestEntity__TypeInfo);
      System_Func_int__object____ctor(
        v58,
        (Il2CppObject *)v28,
        Method_TerminalPramsManager___c__DisplayClass701_0__SendOpenedQuestIdToAdManager_b__1__,
        0LL);
      v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v57,
                                                                   (System_Func_TSource__TResult__o *)v58,
                                                                   (const MethodInfo_2FBE434 *)Method_System_Linq_Enumerable_Select_int__QuestEntity___);
      v60 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v60,
        (Il2CppObject *)v28,
        Method_TerminalPramsManager___c__DisplayClass701_0__SendOpenedQuestIdToAdManager_b__2__,
        0LL);
      v61 = System_Linq_Enumerable__Where_object_(
              v59,
              (System_Func_TSource__bool__o *)v60,
              (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v62 = TerminalPramsManager___c_TypeInfo;
      v63 = v61;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v62 = TerminalPramsManager___c_TypeInfo;
      }
      _9__701_3 = (System_Func_object__int__o *)v62->static_fields->__9__701_3;
      if ( !_9__701_3 )
      {
        if ( !v62->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v62);
          v62 = TerminalPramsManager___c_TypeInfo;
        }
        v65 = (Il2CppObject *)v62->static_fields->__9;
        _9__701_3 = (System_Func_object__int__o *)sub_1C13F70(System_Func_QuestEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__701_3,
          v65,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__701_3__,
          0LL);
        v66 = TerminalPramsManager___c_TypeInfo->static_fields;
        v66->__9__701_3 = (struct System_Func_QuestEntity__int__o *)_9__701_3;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v66->__9__701_3, (int64_t)_9__701_3, v67, v68, v69, v70, v71, v72);
      }
      v73 = System_Linq_Enumerable__Select_object__int_(
              v63,
              (System_Func_TSource__TResult__o *)_9__701_3,
              (const MethodInfo_2FC022C *)Method_System_Linq_Enumerable_Select_QuestEntity__int___);
      v74 = TerminalPramsManager___c_TypeInfo;
      v75 = (System_Collections_Generic_IEnumerable_TSource__o *)v73;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v74 = TerminalPramsManager___c_TypeInfo;
      }
      _9__701_4 = v74->static_fields->__9__701_4;
      if ( !_9__701_4 )
      {
        if ( !v74->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v74);
          v74 = TerminalPramsManager___c_TypeInfo;
        }
        v77 = (Il2CppObject *)v74->static_fields->__9;
        _9__701_4 = (System_Func_int__int__o *)sub_1C13F70(System_Func_int__int__TypeInfo);
        System_Func_int__int____ctor(
          _9__701_4,
          v77,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__701_4__,
          0LL);
        v78 = TerminalPramsManager___c_TypeInfo->static_fields;
        v78->__9__701_4 = _9__701_4;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v78->__9__701_4, (int64_t)_9__701_4, v79, v80, v81, v82, v83, v84);
      }
      v85 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_int__int_(
                                                                   v75,
                                                                   (System_Func_TSource__TKey__o *)_9__701_4,
                                                                   (const MethodInfo_2FB8884 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
      v86 = System_Linq_Enumerable__FirstOrDefault_int_(
              v85,
              (const MethodInfo_2FB1370 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      if ( v86 )
      {
        v87 = v86;
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetOpenedStoryQuest((AdManager_o *)Instance, v87, 0LL);
          return;
        }
LABEL_43:
        sub_1C13F80(Instance, v30);
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

  if ( (byte_4BB1C71 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    byte_4BB1C71 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v6);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1C13F80(0LL, v9);
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

  if ( (byte_4BB1C30 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    sub_1C13D24(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v4);
    sub_1C13D24(&Method_System_Nullable_int__GetValueOrDefault__, v5);
    sub_1C13D24(&Method_System_Nullable_int___ctor__, v6);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v9);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v10);
    byte_4BB1C30 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB149C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB149C = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    QuestInfo = QuestTree__GetQuestInfo(Instance, questId, 0LL);
    if ( !QuestInfo )
      return;
    v16 = QuestInfo;
    warId = QuestInfo->fields.warId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1257 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v15);
      byte_4BB1257 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    Instance = (QuestTree_o *)MapControl_QuestInfo__GetSpotID(v16, 0LL);
    if ( !Master_object )
      goto LABEL_148;
    v20 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            (int32_t)Instance,
            (const MethodInfo_3238670 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    LODWORD(Master_object) = MapControl_QuestInfo__GetSpotID(v16, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v20 )
    {
      if ( byte_4BB116D )
        goto LABEL_38;
    }
    else
    {
      if ( !byte_4BB1256 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v21);
        byte_4BB1256 = 1;
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
          (const MethodInfo_37493FC *)Method_System_Nullable_int___ctor__);
        v26 = v48;
      }
      else
      {
        v26 = 0LL;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (Il2CppObject *)HIDWORD(v26);
      if ( byte_4BB116D )
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
        if ( !byte_4BB1251 )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v21);
          byte_4BB1251 = 1;
        }
        v29 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_QuestId_k__BackingField = v28;
        questPhase = v16->fields.questPhase;
        if ( !byte_4BB1255 )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v21);
          v29 = TerminalPramsManager_TypeInfo;
          byte_4BB1255 = 1;
        }
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_PhaseCnt_k__BackingField = questPhase;
        endTime = v16->fields.endTime;
        if ( !byte_4BB1252 )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v21);
          v29 = TerminalPramsManager_TypeInfo;
          byte_4BB1252 = 1;
        }
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_EndTime_k__BackingField = endTime;
        if ( !byte_4BB1837 )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v21);
          v29 = TerminalPramsManager_TypeInfo;
          byte_4BB1837 = 1;
        }
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 1;
        if ( !SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
          goto LABEL_151;
        v33 = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BB1250 )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v13);
          byte_4BB1250 = 1;
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
            if ( !byte_4BB1253 )
            {
              sub_1C13D24(&TerminalPramsManager_TypeInfo, v32);
              byte_4BB1253 = 1;
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
            if ( !byte_4BB1253 )
            {
              sub_1C13D24(&TerminalPramsManager_TypeInfo, v32);
              byte_4BB1253 = 1;
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
          if ( !byte_4BB1253 )
          {
            sub_1C13D24(&TerminalPramsManager_TypeInfo, v32);
            byte_4BB1253 = 1;
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
        if ( !byte_4BAF374 )
        {
          sub_1C13D24(&TerminalSceneComponent_TypeInfo, v32);
          byte_4BAF374 = 1;
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
        if ( !byte_4BAF374 )
        {
          sub_1C13D24(&TerminalSceneComponent_TypeInfo, v13);
          byte_4BAF374 = 1;
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
            if ( !byte_4BAF374 )
            {
              sub_1C13D24(&TerminalSceneComponent_TypeInfo, v13);
              byte_4BAF374 = 1;
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
            if ( !byte_4BB1250 )
            {
              sub_1C13D24(&TerminalPramsManager_TypeInfo, v13);
              byte_4BB1250 = 1;
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
          if ( !byte_4BAF374 )
          {
            sub_1C13D24(&TerminalSceneComponent_TypeInfo, v13);
            byte_4BAF374 = 1;
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
            if ( !byte_4BAF374 )
            {
              sub_1C13D24(&TerminalSceneComponent_TypeInfo, v13);
              byte_4BAF374 = 1;
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
                if ( !byte_4BAF54B )
                {
                  sub_1C13D24(&TerminalPramsManager_TypeInfo, v13);
                  byte_4BAF54B = 1;
                }
                v47 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v47 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                }
                *((_BYTE *)v47[2].virtualMethodPointer + 718) = 1;
                TerminalPramsManager__Save_SaveData(v47);
                return;
              }
            }
          }
        }
LABEL_148:
        sub_1C13F80(Instance, v13);
      }
    }
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v21);
    byte_4BB116D = 1;
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

  if ( (byte_4BB1C31 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    sub_1C13D24(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v4);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v5);
    byte_4BB1C31 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB149C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB149C = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4BB1257 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4BB1257 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_WarId_k__BackingField = warId;
  if ( !SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
    goto LABEL_112;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1250 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v8);
    byte_4BB1250 = 1;
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
      if ( !byte_4BB1253 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v7);
        byte_4BB1253 = 1;
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
      if ( !byte_4BB1253 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v7);
        byte_4BB1253 = 1;
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
    if ( !byte_4BB1253 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v7);
      byte_4BB1253 = 1;
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
  if ( !byte_4BB116D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v7);
    byte_4BB116D = 1;
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
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v7);
    byte_4BAF374 = 1;
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
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
      byte_4BAF374 = 1;
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
      if ( !byte_4BAF374 )
      {
        sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
        byte_4BAF374 = 1;
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
      if ( !byte_4BB1250 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v8);
        byte_4BB1250 = 1;
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
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
      byte_4BAF374 = 1;
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
      if ( !byte_4BAF374 )
      {
        sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
        byte_4BAF374 = 1;
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
      sub_1C13F80(v10, v8);
    }
  }
LABEL_102:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF54B )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v8);
    byte_4BAF54B = 1;
  }
  v27 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_BYTE *)v27[2].virtualMethodPointer + 718) = 1;
  TerminalPramsManager__Save_SaveData(v27);
}


void __fastcall TerminalPramsManager__SetAutoResumeForFolder(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  Il2CppObject *Instance; // x0
  WarEntity_o *WarEntityByWarID; // x0
  __int64 v9; // x1
  WarEntity_o *v10; // x21
  TerminalPramsManager_c *v11; // x0
  int32_t PrioredParentId; // w20
  Il2CppObject *v13; // x0
  WarEntity_o *v14; // x0
  __int64 v15; // x1
  WarEntity_o *v16; // x22
  TerminalPramsManager_c *v17; // x0
  __int64 v18; // x1
  TerminalPramsManager_c *v19; // x0
  int32_t parentBlankEarthSpotId; // w20
  TerminalPramsManager_c *v21; // x0
  TerminalSceneComponent_c *v22; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v24; // x1
  TitleInfoControl_o *v25; // x0
  ExUITexture_c *klass; // x8
  UnityEngine_Object_o *v27; // x20
  ExUITexture_c *v28; // x8
  ScrTerminalListTop_o *v29; // x20
  ExUITexture_c *v30; // x8
  UnityEngine_Object_o *v31; // x20
  ExUITexture_c *v32; // x8
  const MethodInfo *v33; // x0

  if ( (byte_4BB1C32 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    sub_1C13D24(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v4);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v5);
    byte_4BB1C32 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB149C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB149C = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4BB1257 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4BB1257 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4BB1253 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4BB1253 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_DispState_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( Instance )
  {
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0LL);
    if ( WarEntityByWarID )
    {
      v10 = WarEntityByWarID;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BB1829 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v9);
        byte_4BB1829 = 1;
      }
      v11 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v11 = TerminalPramsManager_TypeInfo;
      }
      v11->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField = warId;
      PrioredParentId = WarEntity__GetPrioredParentId(v10, 0LL);
      v13 = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( v13 )
      {
        v14 = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)v13, PrioredParentId, 0LL);
        if ( v14 )
        {
          v16 = v14;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BB1257 )
          {
            sub_1C13D24(&TerminalPramsManager_TypeInfo, v15);
            byte_4BB1257 = 1;
          }
          v17 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v17 = TerminalPramsManager_TypeInfo;
          }
          v17->static_fields->_WarId_k__BackingField = PrioredParentId;
          if ( WarEntity__IsFolder(v16, 0LL) )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4BB1253 )
            {
              sub_1C13D24(&TerminalPramsManager_TypeInfo, v18);
              byte_4BB1253 = 1;
            }
            v19 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v19 = TerminalPramsManager_TypeInfo;
            }
            v19->static_fields->_DispState_k__BackingField = 3;
          }
          parentBlankEarthSpotId = v10->fields.parentBlankEarthSpotId;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BB116D )
          {
            sub_1C13D24(&TerminalPramsManager_TypeInfo, v18);
            byte_4BB116D = 1;
          }
          v21 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v21 = TerminalPramsManager_TypeInfo;
          }
          v21->static_fields->_BlankEarthSpotId_k__BackingField = parentBlankEarthSpotId;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4BAF374 )
          {
            sub_1C13D24(&TerminalSceneComponent_TypeInfo, v18);
            byte_4BAF374 = 1;
          }
          v22 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v22 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_Object_o *)v22->static_fields->mInstance;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
            goto LABEL_100;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4BAF374 )
          {
            sub_1C13D24(&TerminalSceneComponent_TypeInfo, v24);
            byte_4BAF374 = 1;
          }
          v25 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v25 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
          }
          klass = v25->fields.mEventBgTexture->klass;
          if ( klass )
          {
            v27 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
            {
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4BAF374 )
              {
                sub_1C13D24(&TerminalSceneComponent_TypeInfo, v24);
                byte_4BAF374 = 1;
              }
              v25 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v25 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
              }
              v28 = v25->fields.mEventBgTexture->klass;
              if ( !v28 )
                goto LABEL_108;
              v29 = *(ScrTerminalListTop_o **)&v28->_2.static_fields_size;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4BB1250 )
              {
                sub_1C13D24(&TerminalPramsManager_TypeInfo, v24);
                byte_4BB1250 = 1;
              }
              v25 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v25 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
              }
              if ( !v29 )
                goto LABEL_108;
              ScrTerminalListTop__RequestChangeTerminalListBG(v29, HIDWORD(v25->fields.mEventBgTexture->klass), 0LL);
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BAF374 )
            {
              sub_1C13D24(&TerminalSceneComponent_TypeInfo, v24);
              byte_4BAF374 = 1;
            }
            v25 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v25 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
            }
            v30 = v25->fields.mEventBgTexture->klass;
            if ( v30 )
            {
              v31 = *(UnityEngine_Object_o **)&v30->_2.instance_size;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
                goto LABEL_100;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4BAF374 )
              {
                sub_1C13D24(&TerminalSceneComponent_TypeInfo, v24);
                byte_4BAF374 = 1;
              }
              v25 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v25 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
              }
              v32 = v25->fields.mEventBgTexture->klass;
              if ( v32 )
              {
                v25 = *(TitleInfoControl_o **)&v32->_2.instance_size;
                if ( v25 )
                {
                  TitleInfoControl__CloseEventBannerWindow(v25, 0LL);
LABEL_100:
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  if ( !byte_4BAF54B )
                  {
                    sub_1C13D24(&TerminalPramsManager_TypeInfo, v24);
                    byte_4BAF54B = 1;
                  }
                  v33 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    v33 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                  }
                  *((_BYTE *)v33[2].virtualMethodPointer + 718) = 1;
                  TerminalPramsManager__Save_SaveData(v33);
                  return;
                }
              }
            }
          }
LABEL_108:
          sub_1C13F80(v25, v24);
        }
      }
    }
  }
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
  if ( (byte_4BB1C6F & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_o *)sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C6F = 1;
  }
  if ( !v8 )
    sub_1C13F80(result, method);
  campaignDirectBonus = (int64_t)v8->fields.campaignDirectBonus;
  if ( campaignDirectBonus && *(_QWORD *)(campaignDirectBonus + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1CA1 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
      byte_4BB1CA1 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)campaignDirectBonus;
    sub_1C13CC8(
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

  if ( (byte_4BB1C5A & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C5A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CA0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1CA0 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignBonus_k__BackingField = campaignBonuses;
  sub_1C13CC8(
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

  if ( (byte_4BB1C66 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&idx);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v6);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v7);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v8);
    byte_4BB1C66 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( !v9->static_fields->folderLastIdxs )
  {
    v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v10,
      (const MethodInfo_3288E14 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v17->static_fields;
    static_fields->folderLastIdxs = v10;
    sub_1C13CC8(
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
          (const MethodInfo_328AB90 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__),
        (folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs) == 0LL) )
  {
    sub_1C13F80(folderLastIdxs, *(_QWORD *)&idx);
  }
  System_Collections_Generic_Dictionary_int__int___Add(
    folderLastIdxs,
    warId,
    idx,
    (const MethodInfo_32897D8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !byte_4BB1C90 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v20);
    byte_4BB1C90 = 1;
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

  if ( (byte_4BB1C6C & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, *(_QWORD *)&state);
    byte_4BB1C6C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v5);
  if ( !QuestFocusStateManager )
    sub_1C13F80(0LL, v7);
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
  __int64 v11; // x0
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
  BattleResultComponent_resultData_o *v43; // x8
  int64_t resultAfterEventRewardInfos; // x19
  TerminalPramsManager_c *v45; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4BB1C70 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C70 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (PartyOrganizationUtility_o *)&v9->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0LL;
  sub_1C13CC8(p_mQuestRewardInfos, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !result )
    goto LABEL_32;
  if ( !result->max_length )
    goto LABEL_33;
  v19 = result->m_Items[0];
  if ( !v19 )
    goto LABEL_32;
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
    sub_1C13CC8(v22, rewardInfos, v13, v14, v15, v16, v17, v18);
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = (PartyOrganizationUtility_o *)&v23->static_fields->mQuestPhaseRewardInfos;
  p_mQuestPhaseRewardInfos->klass = 0LL;
  sub_1C13CC8(p_mQuestPhaseRewardInfos, 0LL, v13, v14, v15, v16, v17, v18);
  if ( !result->max_length )
    goto LABEL_33;
  v31 = result->m_Items[0];
  if ( !v31 )
    goto LABEL_32;
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
    sub_1C13CC8(v34, resultQuestPhaseRewardInfos, v25, v26, v27, v28, v29, v30);
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestResultAfterEventRewardInfos = (PartyOrganizationUtility_o *)&v35->static_fields->mQuestResultAfterEventRewardInfos;
  p_mQuestResultAfterEventRewardInfos->klass = 0LL;
  sub_1C13CC8(p_mQuestResultAfterEventRewardInfos, 0LL, v25, v26, v27, v28, v29, v30);
  if ( !result->max_length )
LABEL_33:
    sub_1C13F88(v11, v12);
  v43 = result->m_Items[0];
  if ( !v43 )
LABEL_32:
    sub_1C13F80(v11, v12);
  resultAfterEventRewardInfos = (int64_t)v43->fields.resultAfterEventRewardInfos;
  if ( resultAfterEventRewardInfos && *(_QWORD *)(resultAfterEventRewardInfos + 24) )
  {
    v45 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v45 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v45->static_fields;
    static_fields->mQuestResultAfterEventRewardInfos = (struct BattleDropItem_array *)resultAfterEventRewardInfos;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->mQuestResultAfterEventRewardInfos,
      resultAfterEventRewardInfos,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
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
  if ( (byte_4BB1C64 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_43/*"\n"*/, v3);
    byte_4BB1C64 = 1;
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
    v7 = System_String__Concat_62979204(mTerminalWarStartedIds, v6, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
    static_fields->mTerminalWarStartedIds = v7;
    sub_1C13CC8(
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

  if ( (byte_4BB1C3F & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_13850/*"TerminalEndTime"*/, v2);
    byte_4BB1C3F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1430 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1430 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13850/*"TerminalEndTime"*/,
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

  if ( (byte_4BB1C45 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_13834/*"Terminal/EarthCore/{0:D2}"*/, v2);
    sub_1C13D24(&StringLiteral_13835/*"Terminal/Effect"*/, v3);
    byte_4BB1C45 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CA7 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1CA7 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13834/*"Terminal/EarthCore/{0:D2}"*/,
    v4->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_4BB1CA8 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    byte_4BB1CA8 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13835/*"Terminal/Effect"*/,
    v6->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfoDispSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BB1C4A & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11637/*"SAVEKEY_DataLostBattleAutoReset"*/, v2);
    byte_4BB1C4A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11637/*"SAVEKEY_DataLostBattleAutoReset"*/, v3->static_fields->eventConquestInfoDisp, 0LL);
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

  if ( (byte_4BB1C49 & 1) == 0 )
  {
    sub_1C13D24(&EventConquestInfo___TypeInfo, v1);
    sub_1C13D24(&JsonManager_TypeInfo, v2);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v3);
    sub_1C13D24(&StringLiteral_11638/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v4);
    sub_1C13D24(&StringLiteral_11637/*"SAVEKEY_DataLostBattleAutoReset"*/, v5);
    byte_4BB1C49 = 1;
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
    eventConquestInfos = (struct EventConquestInfo_array *)sub_1C13DCC(EventConquestInfo___TypeInfo, 0LL);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(&eventConquestInfos->obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11638/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v8, 0LL);
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11637/*"SAVEKEY_DataLostBattleAutoReset"*/, v9->static_fields->eventConquestInfoDisp, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BB1C4B & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11639/*"SAVEKEY_LastPlayBgmName"*/, v2);
    byte_4BB1C4B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11639/*"SAVEKEY_LastPlayBgmName"*/, v3->static_fields->eventCraftInfoDisp, 0LL);
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

  if ( (byte_4BB1C4C & 1) == 0 )
  {
    sub_1C13D24(&EventHarvestGrowthInfo_TypeInfo, v1);
    sub_1C13D24(&JsonManager_TypeInfo, v2);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v3);
    sub_1C13D24(&StringLiteral_11640/*"SAVEKEY_LastPlayQuestConsumeType"*/, v4);
    byte_4BB1C4C = 1;
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
    eventHarvestGrowthInfo = (Il2CppObject *)sub_1C13F70(EventHarvestGrowthInfo_TypeInfo);
    System_Object___ctor(eventHarvestGrowthInfo, 0LL);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__toJson(eventHarvestGrowthInfo, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11640/*"SAVEKEY_LastPlayQuestConsumeType"*/, v7, 0LL);
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

  if ( (byte_4BB1C47 & 1) == 0 )
  {
    sub_1C13D24(&JsonManager_TypeInfo, v1);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v2);
    sub_1C13D24(&StringLiteral_13836/*"Terminal/EventFolder/Capter{0:D4}"*/, v3);
    byte_4BB1C47 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1344 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1344 = 1;
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
    if ( !byte_4BB1344 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
      byte_4BB1344 = 1;
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
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13836/*"Terminal/EventFolder/Capter{0:D4}"*/, v7, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BB1C54 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11642/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v2);
    byte_4BB1C54 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1803 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1803 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11642/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v3->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BB1C53 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_11643/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v2);
    byte_4BB1C53 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB19CB )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB19CB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11643/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v3->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalTransitionInfoSave_SaveData(
        TerminalTransitionInfo_o *terminalTransitionInfo,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4BB1C44 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_13856/*"TerminalOffset"*/, method);
    sub_1C13D24(&StringLiteral_13855/*"TerminalLastPlayedQuestId"*/, v3);
    byte_4BB1C44 = 1;
  }
  if ( terminalTransitionInfo )
  {
    UnityEngine_PlayerPrefs__SetInt(
      (System_String_o *)StringLiteral_13855/*"TerminalLastPlayedQuestId"*/,
      terminalTransitionInfo->fields.missionId,
      0LL);
    UnityEngine_PlayerPrefs__SetString(
      (System_String_o *)StringLiteral_13856/*"TerminalOffset"*/,
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

  if ( (byte_4BB1C7D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, *(_QWORD *)&day);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
    byte_4BB1C7D = 1;
  }
  value = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1CBF )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    byte_4BB1CBF = 1;
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
          (const MethodInfo_3293A34 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v13 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v13,
      (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
    value = (Il2CppObject *)v13;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1CBF )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
      byte_4BB1CBF = 1;
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
          (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        goto LABEL_24;
      }
    }
LABEL_30:
    sub_1C13F80(v11, *(_QWORD *)&day);
  }
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)value,
         day,
         (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__) )
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
      *(const MethodInfo_36101A8 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
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

  if ( (byte_4BB1B44 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B44 = 1;
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

  if ( (byte_4BB1B64 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B64 = 1;
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

  if ( (byte_4BB1B9C & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v2);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v3);
    byte_4BB1B9C = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__checkNowScene(Instance, 34, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, v5);
      byte_4BAF374 = 1;
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
      if ( !byte_4BAF374 )
      {
        sub_1C13D24(&TerminalSceneComponent_TypeInfo, v5);
        byte_4BAF374 = 1;
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
      sub_1C13F80(Instance, v5);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    byte_4BAF44D = 1;
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

  if ( (byte_4BB1BB7 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BB7 = 1;
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

  if ( (byte_4BB1BB9 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BB9 = 1;
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

  if ( (byte_4BB1BBD & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BBD = 1;
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

  if ( (byte_4BB1C20 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C20 = 1;
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

  if ( (byte_4BB1BAB & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BAB = 1;
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

  if ( (byte_4BB1BDD & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BDD = 1;
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

  if ( (byte_4BB1BE1 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BE1 = 1;
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

  if ( (byte_4BB1BDB & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BDB = 1;
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

  if ( (byte_4BB1BDF & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BDF = 1;
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

  if ( (byte_4BB1BF1 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BF1 = 1;
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

  if ( (byte_4BB1B82 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B82 = 1;
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

  if ( (byte_4BB1B84 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B84 = 1;
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

  if ( (byte_4BB1BB5 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BB5 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4BB1B70 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B70 = 1;
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

  if ( (byte_4BB1B78 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B78 = 1;
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

  if ( (byte_4BB1B72 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B72 = 1;
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

  if ( (byte_4BB1B22 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B22 = 1;
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

  if ( (byte_4BB1B66 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B66 = 1;
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

  if ( (byte_4BB1B86 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B86 = 1;
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

  if ( (byte_4BB1BBB & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BBB = 1;
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

  if ( (byte_4BB1BC3 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BC3 = 1;
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

  if ( (byte_4BB1BAD & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BAD = 1;
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

  if ( (byte_4BB1BA9 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BA9 = 1;
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

  if ( (byte_4BB1B50 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B50 = 1;
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

  if ( (byte_4BB1BBF & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BBF = 1;
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

  if ( (byte_4BB1BE7 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BE7 = 1;
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

  if ( (byte_4BB1C22 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C22 = 1;
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

  if ( (byte_4BB1C16 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C16 = 1;
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

  if ( (byte_4BB1C06 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C06 = 1;
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

  if ( (byte_4BB1C08 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C08 = 1;
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

  if ( (byte_4BB1C2C & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C2C = 1;
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

  if ( (byte_4BB1C00 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C00 = 1;
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

  if ( (byte_4BB1C02 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C02 = 1;
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

  if ( (byte_4BB1C1E & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C1E = 1;
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

  if ( (byte_4BB1BE3 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BE3 = 1;
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

  if ( (byte_4BB1C0A & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C0A = 1;
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

  if ( (byte_4BB1B6E & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B6E = 1;
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

  if ( (byte_4BB1B7A & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B7A = 1;
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

  if ( (byte_4BB1B76 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B76 = 1;
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

  if ( (byte_4BB1BED & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BED = 1;
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

  if ( (byte_4BB1B46 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B46 = 1;
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

  if ( (byte_4BB1B48 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B48 = 1;
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

  if ( (byte_4BB1B58 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B58 = 1;
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

  if ( (byte_4BB1B4A & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B4A = 1;
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

  if ( (byte_4BB1B30 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B30 = 1;
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

  if ( (byte_4BB1C26 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C26 = 1;
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

  if ( (byte_4BB1BC5 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BC5 = 1;
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

  if ( (byte_4BB1B38 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B38 = 1;
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

  if ( (byte_4BB1B36 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B36 = 1;
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

  if ( (byte_4BB1BF6 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BF6 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4BB1C04 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C04 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4BB1B4E & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B4E = 1;
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

  if ( (byte_4BB1B56 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B56 = 1;
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

  if ( (byte_4BB1B5C & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B5C = 1;
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

  if ( (byte_4BB1BC7 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BC7 = 1;
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

  if ( (byte_4BB1B7E & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B7E = 1;
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

  if ( (byte_4BB1B5A & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B5A = 1;
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

  if ( (byte_4BB1BD5 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BD5 = 1;
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

  if ( (byte_4BB1BD7 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BD7 = 1;
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

  if ( (byte_4BB1BD9 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BD9 = 1;
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

  if ( (byte_4BB1B7C & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B7C = 1;
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

  if ( (byte_4BB1B54 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B54 = 1;
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

  if ( (byte_4BB1B5E & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B5E = 1;
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

  if ( (byte_4BB1C1C & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C1C = 1;
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

  if ( (byte_4BB1B74 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B74 = 1;
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

  if ( (byte_4BB1C0C & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C0C = 1;
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

  if ( (byte_4BB1BEB & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BEB = 1;
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

  if ( (byte_4BB1B68 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B68 = 1;
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

  if ( (byte_4BB1B4C & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B4C = 1;
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

  if ( (byte_4BB1B40 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B40 = 1;
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

  if ( (byte_4BB1B3E & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B3E = 1;
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

  if ( (byte_4BB1B42 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B42 = 1;
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

  if ( (byte_4BB1C18 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C18 = 1;
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

  if ( (byte_4BB1B6C & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B6C = 1;
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

  if ( (byte_4BB1B6A & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B6A = 1;
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

  if ( (byte_4BB1C2E & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C2E = 1;
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

  if ( (byte_4BB1B60 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B60 = 1;
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

  if ( (byte_4BB1BE5 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BE5 = 1;
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

  if ( (byte_4BB1BF3 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BF3 = 1;
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

  if ( (byte_4BB1B2E & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B2E = 1;
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

  if ( (byte_4BB1B52 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B52 = 1;
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

  if ( (byte_4BB1BD3 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BD3 = 1;
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

  if ( (byte_4BB1B80 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B80 = 1;
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

  if ( (byte_4BB1BF5 & 1) == 0 )
  {
    sub_1C13D24(&QuestFocusStateManager_TypeInfo, v1);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v2);
    byte_4BB1BF5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->questFocusStateManager )
  {
    v4 = (QuestFocusStateManager_o *)sub_1C13F70(QuestFocusStateManager_TypeInfo);
    QuestFocusStateManager___ctor(v4, 0LL);
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    p_questFocusStateManager = (PartyOrganizationUtility_o *)&v11->static_fields->questFocusStateManager;
    p_questFocusStateManager->klass = (PartyOrganizationUtility_c *)v4;
    sub_1C13CC8(p_questFocusStateManager, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4BB1B2C & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B2C = 1;
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

  if ( (byte_4BB1C0E & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C0E = 1;
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

  if ( (byte_4BB1C10 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C10 = 1;
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

  if ( (byte_4BB1BD1 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BD1 = 1;
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

  if ( (byte_4BB1B3A & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B3A = 1;
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

  if ( (byte_4BB1B62 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B62 = 1;
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

  if ( (byte_4BB1BE9 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BE9 = 1;
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

  if ( (byte_4BB1B3C & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B3C = 1;
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

  if ( (byte_4BB1B34 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B34 = 1;
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

  if ( (byte_4BB1B32 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B32 = 1;
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

  if ( (byte_4BB1BEF & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BEF = 1;
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

  if ( (byte_4BB1B8A & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B8A = 1;
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

  if ( (byte_4BB1B2A & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B2A = 1;
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

  if ( (byte_4BB1B28 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B28 = 1;
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

  if ( (byte_4BB1B26 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B26 = 1;
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

  if ( (byte_4BB1C12 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C12 = 1;
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

  if ( (byte_4BB1BB1 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BB1 = 1;
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

  if ( (byte_4BB1BB3 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BB3 = 1;
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

  if ( (byte_4BB1C24 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C24 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_TransitionScrollTabName_k__BackingField;
}


WarBoardDataEntity_o *__fastcall TerminalPramsManager__get_WarBoardData(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4BB1BC9 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BC9 = 1;
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

  if ( (byte_4BB1B24 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B24 = 1;
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

  if ( (byte_4BB1B88 & 1) == 0 )
  {
    sub_1C13D24(&MapZoom_TypeInfo, v1);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v2);
    byte_4BB1B88 = 1;
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

  if ( (byte_4BB1BA7 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BA7 = 1;
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

  if ( (byte_4BB1B92 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B92 = 1;
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

  if ( (byte_4BB1B90 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B90 = 1;
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

  if ( (byte_4BB1B94 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B94 = 1;
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

  if ( (byte_4BB1B9D & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B9D = 1;
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

  if ( (byte_4BB1BCD & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BCD = 1;
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

  if ( (byte_4BB1BC1 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BC1 = 1;
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

  if ( (byte_4BB1BCF & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BCF = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4BB1BFE & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BFE = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4BB1BFC & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BFC = 1;
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

  if ( (byte_4BB1BCB & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BCB = 1;
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

  if ( (byte_4BB1C14 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C14 = 1;
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

  if ( (byte_4BB1B8E & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B8E = 1;
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

  if ( (byte_4BB1B9A & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B9A = 1;
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

  if ( (byte_4BB1B8C & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B8C = 1;
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

  if ( (byte_4BB1B98 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B98 = 1;
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

  if ( (byte_4BB1B96 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B96 = 1;
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

  if ( (byte_4BB1BA1 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BA1 = 1;
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

  if ( (byte_4BB1BA3 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BA3 = 1;
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

  if ( (byte_4BB1B9F & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1B9F = 1;
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

  if ( (byte_4BB1BA5 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BA5 = 1;
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

  if ( (byte_4BB1C1A & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C1A = 1;
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

  if ( (byte_4BB1BAF & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1BAF = 1;
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

  if ( (byte_4BB1C37 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v1);
    byte_4BB1C37 = 1;
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

  if ( (byte_4BB1C36 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C36 = 1;
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

  if ( (byte_4BB1B45 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B45 = 1;
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

  if ( (byte_4BB1B65 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B65 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BattleSetupKeep_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1BB8 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BB8 = 1;
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

  if ( (byte_4BB1BBA & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BBA = 1;
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

  if ( (byte_4BB1BBE & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BBE = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BeforeEventSubmarineSaveData_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1C21 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C21 = 1;
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

  if ( (byte_4BB1BAC & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BAC = 1;
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

  if ( (byte_4BB1BDE & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BDE = 1;
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

  if ( (byte_4BB1BE2 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BE2 = 1;
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

  if ( (byte_4BB1BDC & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BDC = 1;
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

  if ( (byte_4BB1BE0 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BE0 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BlankEarthTransformData_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1BF2 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BF2 = 1;
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

  if ( (byte_4BB1B83 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B83 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignBonus_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1B85 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B85 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1BB6 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BB6 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_ClearEventQuestIds_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&static_fields->_ClearEventQuestIds_k__BackingField,
    (int64_t)value,
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

  if ( (byte_4BB1B71 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B71 = 1;
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

  if ( (byte_4BB1B79 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v2);
    byte_4BB1B79 = 1;
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

  if ( (byte_4BB1B73 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B73 = 1;
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

  if ( (byte_4BB1BFB & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BFB = 1;
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

  if ( (byte_4BB1BFA & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BFA = 1;
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

  if ( (byte_4BB1BF8 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BF8 = 1;
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

  if ( (byte_4BB1BF9 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BF9 = 1;
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

  if ( (byte_4BB1B23 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B23 = 1;
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

  if ( (byte_4BB1B67 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B67 = 1;
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

  if ( (byte_4BB1B87 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B87 = 1;
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

  if ( (byte_4BB1BBC & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BBC = 1;
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

  if ( (byte_4BB1BC4 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BC4 = 1;
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

  if ( (byte_4BB1BAE & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BAE = 1;
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

  if ( (byte_4BB1BAA & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BAA = 1;
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

  if ( (byte_4BB1B51 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B51 = 1;
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

  if ( (byte_4BB1BC0 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BC0 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1BE8 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BE8 = 1;
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

  if ( (byte_4BB1C23 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C23 = 1;
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

  if ( (byte_4BB1C17 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C17 = 1;
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

  if ( (byte_4BB1C07 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C07 = 1;
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

  if ( (byte_4BB1C09 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C09 = 1;
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

  if ( (byte_4BB1C2D & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C2D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v3 = value;
  if ( !byte_4BAF54B )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BAF54B = 1;
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

  if ( (byte_4BB1C01 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C01 = 1;
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

  if ( (byte_4BB1C03 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C03 = 1;
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

  if ( (byte_4BB1C1F & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C1F = 1;
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

  if ( (byte_4BB1BE4 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BE4 = 1;
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

  if ( (byte_4BB1C0B & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C0B = 1;
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

  if ( (byte_4BB1B6F & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B6F = 1;
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

  if ( (byte_4BB1B7B & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B7B = 1;
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

  if ( (byte_4BB1B77 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B77 = 1;
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

  if ( (byte_4BB1BEE & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BEE = 1;
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

  if ( (byte_4BB1B47 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B47 = 1;
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

  if ( (byte_4BB1B49 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B49 = 1;
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

  if ( (byte_4BB1B59 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B59 = 1;
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

  if ( (byte_4BB1B4B & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B4B = 1;
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

  if ( (byte_4BB1B31 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B31 = 1;
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

  if ( (byte_4BB1C27 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C27 = 1;
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

  if ( (byte_4BB1BC6 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BC6 = 1;
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

  if ( (byte_4BB1B39 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B39 = 1;
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

  if ( (byte_4BB1B37 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B37 = 1;
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

  if ( (byte_4BB1BF7 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BF7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->isInvisibleConnectAndLoad = value;
}


void __fastcall TerminalPramsManager__set_IsMapReturnFolder(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BB1C05 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C05 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsMapReturnFolder_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsOrdealCallWarClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BB1B4F & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B4F = 1;
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

  if ( (byte_4BB1B57 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B57 = 1;
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

  if ( (byte_4BB1B5D & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B5D = 1;
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

  if ( (byte_4BB1BC8 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BC8 = 1;
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

  if ( (byte_4BB1B7F & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B7F = 1;
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

  if ( (byte_4BB1B5B & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B5B = 1;
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

  if ( (byte_4BB1BD6 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BD6 = 1;
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

  if ( (byte_4BB1BD8 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BD8 = 1;
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

  if ( (byte_4BB1BDA & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BDA = 1;
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

  if ( (byte_4BB1B7D & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B7D = 1;
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

  if ( (byte_4BB1B55 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B55 = 1;
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

  if ( (byte_4BB1B5F & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B5F = 1;
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

  if ( (byte_4BB1C1D & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C1D = 1;
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

  if ( (byte_4BB1B75 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B75 = 1;
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

  if ( (byte_4BB1C0D & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C0D = 1;
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

  if ( (byte_4BB1BEC & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BEC = 1;
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

  if ( (byte_4BB1B69 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B69 = 1;
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

  if ( (byte_4BB1B4D & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B4D = 1;
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

  if ( (byte_4BB1B41 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B41 = 1;
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

  if ( (byte_4BB1B3F & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B3F = 1;
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

  if ( (byte_4BB1B43 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B43 = 1;
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

  if ( (byte_4BB1C19 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C19 = 1;
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

  if ( (byte_4BB1B6D & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B6D = 1;
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

  if ( (byte_4BB1B6B & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B6B = 1;
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

  if ( (byte_4BB1C2F & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C2F = 1;
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

  if ( (byte_4BB1B61 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B61 = 1;
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

  if ( (byte_4BB1BE6 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BE6 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_NoticeLastModified_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1BF4 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BF4 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_OldUserEventPoint_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1B2F & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B2F = 1;
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

  if ( (byte_4BB1B53 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B53 = 1;
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

  if ( (byte_4BB1BD4 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BD4 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_PlayedTerminalEffects_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1B81 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B81 = 1;
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

  if ( (byte_4BB1B2D & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B2D = 1;
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

  if ( (byte_4BB1C0F & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C0F = 1;
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

  if ( (byte_4BB1C11 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C11 = 1;
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
  PartyOrganizationUtility_o *static_fields; // x8

  if ( (byte_4BB1BD2 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BD2 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (PartyOrganizationUtility_o *)v9->static_fields;
  static_fields[3].klass = (PartyOrganizationUtility_c *)value;
  sub_1C13CC8(static_fields + 3, (int64_t)value, v2, v3, v4, v5, v6, v7);
}


void __fastcall TerminalPramsManager__set_QuestReleaseFocusQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BB1B3B & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B3B = 1;
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

  if ( (byte_4BB1B63 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B63 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1BEA & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BEA = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SceneMoveQuestClearedInfo_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1B3D & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B3D = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1B35 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B35 = 1;
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

  if ( (byte_4BB1B33 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B33 = 1;
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

  if ( (byte_4BB1BF0 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BF0 = 1;
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

  if ( (byte_4BB1B8B & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B8B = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SpecifiedChangeSceneInfo_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1B2B & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B2B = 1;
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

  if ( (byte_4BB1B29 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B29 = 1;
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

  if ( (byte_4BB1B27 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B27 = 1;
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

  if ( (byte_4BB1C13 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C13 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_TalkScriptInfo_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1BB2 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BB2 = 1;
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

  if ( (byte_4BB1BB4 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BB4 = 1;
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

  if ( (byte_4BB1C25 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C25 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_TransitionScrollTabName_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&static_fields->_TransitionScrollTabName_k__BackingField,
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

  if ( (byte_4BB1BCA & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BCA = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_WarBoardData_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1B25 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B25 = 1;
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

  if ( (byte_4BB1B89 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v2);
    byte_4BB1B89 = 1;
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

  if ( (byte_4BB1BA8 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BA8 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventDailyPoint_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1B93 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B93 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventPointWinReward_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1B91 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B91 = 1;
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

  if ( (byte_4BB1B95 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B95 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventRaceBoost_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1B9E & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B9E = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventTowerReward_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1BCE & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BCE = 1;
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

  if ( (byte_4BB1BC2 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BC2 = 1;
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

  if ( (byte_4BB1BD0 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BD0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isPlayRiverActionCheck_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isPlayingQuestPhaseRewardEffect(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BB1BFF & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BFF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isQuestRewardSetted(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BB1BFD & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BFD = 1;
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

  if ( (byte_4BB1BCC & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BCC = 1;
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

  if ( (byte_4BB1C15 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C15 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_limitImageAnnounces_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1B8F & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B8F = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_oldPersonalBoss_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1B9B & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B9B = 1;
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

  if ( (byte_4BB1B8D & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B8D = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_oldSuperBoss_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1B99 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B99 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_questClearCostumeGet_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1B97 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1B97 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_questClearCostumeRelease_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1BA2 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BA2 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_resultBoostItemRewardInfo_k__BackingField = value;
  sub_1C13CC8(
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
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4BB1BA4 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BA4 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField,
    (int64_t)value,
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  PartyOrganizationUtility_o *static_fields; // x8

  if ( (byte_4BB1BA0 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BA0 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (PartyOrganizationUtility_o *)v9->static_fields;
  static_fields[2].klass = (PartyOrganizationUtility_c *)value;
  sub_1C13CC8(static_fields + 2, (int64_t)value, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4BB1BA6 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BA6 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_timeStatusRecord_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1C1B & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1C1B = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_updateProfileInfoEntity_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1BB0 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1BB0 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_warClearReward_k__BackingField = value;
  sub_1C13CC8(
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

  if ( (byte_4BB1CC7 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_13511/*"TAMAMOCAT_STUN_BUFF_ID"*/, v8);
    byte_4BB1CC7 = 1;
  }
  TerminalPramsManager_ClearData_TypeInfo->static_fields->SAVEKEY_CLEAR_REWARD_DISP = (struct System_String_o *)StringLiteral_13511/*"TAMAMOCAT_STUN_BUFF_ID"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)TerminalPramsManager_ClearData_TypeInfo->static_fields,
    StringLiteral_13511/*"TAMAMOCAT_STUN_BUFF_ID"*/,
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
  struct UserEventPointEntity_array **p_oldUserEventPoint; // x19
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7

  if ( (byte_4BB1CC5 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1CC5 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.qClearHeroineInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.questRewardInfos = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.questRewardInfos, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.questPhaseRewardInfos = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.questPhaseRewardInfos, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.questResultAfterEventRewardInfos = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.questResultAfterEventRewardInfos,
    0LL,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.resultEventPanelRewardInfos = 0LL;
  sub_1C13CC8(
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.mOldSuperBoss, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.oldPersonalBoss = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.oldPersonalBoss, 0LL, v39, v40, v41, v42, v43, v44);
  this->fields.evPointWinReward = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.evPointWinReward, 0LL, v45, v46, v47, v48, v49, v50);
  this->fields.evPointWinType = 0;
  this->fields.evRaceBoost = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.evRaceBoost, 0LL, v51, v52, v53, v54, v55, v56);
  this->fields.questClearCostume = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.questClearCostume, 0LL, v57, v58, v59, v60, v61, v62);
  this->fields.questClearCostumeGetInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.questClearCostumeGetInfo, 0LL, v63, v64, v65, v66, v67, v68);
  this->fields.eventTowerReward = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.eventTowerReward, 0LL, v69, v70, v71, v72, v73, v74);
  this->fields.resultEventTowerRewardInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.resultEventTowerRewardInfo, 0LL, v75, v76, v77, v78, v79, v80);
  this->fields.warClearReward = 0LL;
  this->fields.isDispOnly = 0;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.warClearReward, 0LL, v81, v82, v83, v84, v85, v86);
  v93 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v93 = TerminalPramsManager_TypeInfo;
  }
  this->fields.EventActivityPointEffectState = v93->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  this->fields.limitImageAnnounces = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.limitImageAnnounces, 0LL, v87, v88, v89, v90, v91, v92);
  this->fields.oldUserEventPoint = 0LL;
  p_oldUserEventPoint = &this->fields.oldUserEventPoint;
  *((_BYTE *)p_oldUserEventPoint - 16) = 0;
  *((_DWORD *)p_oldUserEventPoint - 3) = 0;
  *((_BYTE *)p_oldUserEventPoint - 4) = 0;
  sub_1C13CC8((PartyOrganizationUtility_o *)p_oldUserEventPoint, 0LL, v95, v96, v97, v98, v99, v100);
}


void __fastcall TerminalPramsManager_ClearData___ctor_35827956(
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
        const MethodInfo *method)
{
  struct UserSuperBossEntity_array *v30; // x23
  struct CostumeReleaseAnnounce_array *v37; // x27
  struct CostumeReleaseAnnounce_array *v38; // x24
  struct UserSuperBossEntity_array *v39; // x20
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v47; // x0
  const MethodInfo *v48; // x2
  int64_t v49; // x25
  __int64 v50; // x0
  __int64 v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  bool v58; // w28
  bool v59; // w22
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  struct QuestRewardInfo_array *v120; // x1
  __int64 v121; // x1
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  TerminalPramsManager_c *v128; // x0
  TerminalPramsManager_c *v129; // x0
  struct QuestRewardInfo_array *resultBoostItemRewardInfo_k__BackingField; // x1
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  __int64 v137; // x1
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  TerminalPramsManager_c *v144; // x0
  TerminalPramsManager_c *v145; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo_k__BackingField; // x1
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  struct WarClearReward_array *v153; // x1
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  struct BattleDropItem_array *v160; // x1
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
  struct BattleDropItem_array *v167; // x1
  int64_t v168; // x2
  int32_t v169; // w3
  System_String_o *v170; // x4
  BattleSetupInfo_o *v171; // x5
  FollowerInfo_o *v172; // x6
  PartyListViewItem_o *v173; // x7
  struct LimitImageAnnounce_array *v174; // x1
  __int64 v175; // x1
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  TerminalPramsManager_c *v182; // x0
  struct UserEventPointEntity_array *OldUserEventPoint_k__BackingField; // x1

  v30 = oldSuperBoss;
  v37 = questClearCostumeGet;
  v38 = questClearCostumeRelease;
  v39 = oldPersonalBoss;
  if ( (byte_4BB1CC6 & 1) == 0 )
  {
    sub_1C13D24(&BattleDropItem___TypeInfo, qcrHeroineInfo);
    sub_1C13D24(&CostumeReleaseAnnounce___TypeInfo, v40);
    sub_1C13D24(&LimitImageAnnounce___TypeInfo, v41);
    sub_1C13D24(&TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo, v42);
    sub_1C13D24(&QuestRewardInfo___TypeInfo, v43);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v44);
    sub_1C13D24(&UserSuperBossEntity___TypeInfo, v45);
    sub_1C13D24(&WarClearReward___TypeInfo, v46);
    byte_4BB1CC6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v47 = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)sub_1C13F70(TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
  v49 = (int64_t)v47;
  if ( qcrHeroineInfo )
  {
    TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_35827200(v47, qcrHeroineInfo, v48);
    if ( this )
      goto LABEL_5;
LABEL_34:
    sub_1C13F80(v50, v51);
  }
  System_Object___ctor((Il2CppObject *)v47, 0LL);
  *(_QWORD *)(v49 + 16) = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v49 + 16), 0LL, v131, v132, v133, v134, v135, v136);
  if ( !this )
    goto LABEL_34;
LABEL_5:
  this->fields.qClearHeroineInfo = (struct TerminalPramsManager_QuestClearHeroineInfoForSave_o *)v49;
  v58 = qClear;
  v59 = pclear;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, v49, v52, v53, v54, v55, v56, v57);
  if ( !qri )
    qri = (QuestRewardInfo_array *)sub_1C13DCC(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.questRewardInfos = qri;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.questRewardInfos, (int64_t)qri, v60, v61, v62, v63, v64, v65);
  if ( !questPhaseRewardInfos )
    questPhaseRewardInfos = (QuestRewardInfo_array *)sub_1C13DCC(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.questPhaseRewardInfos = questPhaseRewardInfos;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.questPhaseRewardInfos,
    (int64_t)questPhaseRewardInfos,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  this->fields.questClear = v58;
  this->fields.phaseClear = v59;
  this->fields.clearedLastBattleRaidId = lastRaidId;
  this->fields.clearedBattleRaidId = raidId;
  this->fields.joinGroup = groupjoin;
  if ( !oldSuperBoss )
    v30 = (struct UserSuperBossEntity_array *)sub_1C13DCC(UserSuperBossEntity___TypeInfo, 0LL);
  this->fields.mOldSuperBoss = v30;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.mOldSuperBoss, (int64_t)v30, v72, v73, v74, v75, v76, v77);
  if ( !oldPersonalBoss )
    v39 = (struct UserSuperBossEntity_array *)sub_1C13DCC(UserSuperBossEntity___TypeInfo, 0LL);
  this->fields.oldPersonalBoss = v39;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.oldPersonalBoss, (int64_t)v39, v78, v79, v80, v81, v82, v83);
  this->fields.evPointWinReward = evpWinReward;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.evPointWinReward,
    (int64_t)evpWinReward,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  this->fields.evRaceBoost = evRace;
  this->fields.evPointWinType = evpWinType;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.evRaceBoost, (int64_t)evRace, v90, v91, v92, v93, v94, v95);
  if ( !questClearCostumeRelease )
    v38 = (struct CostumeReleaseAnnounce_array *)sub_1C13DCC(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostume = v38;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.questClearCostume,
    (int64_t)v38,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  if ( !questClearCostumeGet )
    v37 = (struct CostumeReleaseAnnounce_array *)sub_1C13DCC(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostumeGetInfo = v37;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.questClearCostumeGetInfo,
    (int64_t)v37,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  this->fields.eventTowerReward = evTowerReward;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.eventTowerReward,
    (int64_t)evTowerReward,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  v120 = resultEvTowerRewardInfo;
  if ( !resultEvTowerRewardInfo )
    v120 = (struct QuestRewardInfo_array *)sub_1C13DCC(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.resultEventTowerRewardInfo = v120;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.resultEventTowerRewardInfo,
    (int64_t)v120,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1812 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v121);
    byte_4BB1812 = 1;
  }
  v128 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v128 = TerminalPramsManager_TypeInfo;
  }
  if ( v128->static_fields->_resultBoostItemRewardInfo_k__BackingField )
  {
    if ( !v128->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v128);
    if ( !byte_4BB1812 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v121);
      byte_4BB1812 = 1;
    }
    v129 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v129 = TerminalPramsManager_TypeInfo;
    }
    resultBoostItemRewardInfo_k__BackingField = v129->static_fields->_resultBoostItemRewardInfo_k__BackingField;
  }
  else
  {
    resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1C13DCC(
                                                                                  QuestRewardInfo___TypeInfo,
                                                                                  0LL);
  }
  this->fields.resultBoostItemRewardInfo = resultBoostItemRewardInfo_k__BackingField;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.resultBoostItemRewardInfo,
    (int64_t)resultBoostItemRewardInfo_k__BackingField,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB180A )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v137);
    byte_4BB180A = 1;
  }
  v144 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v144 = TerminalPramsManager_TypeInfo;
  }
  if ( v144->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField )
  {
    if ( !v144->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v144);
    if ( !byte_4BB180A )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v137);
      byte_4BB180A = 1;
    }
    v145 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v145 = TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfo_k__BackingField = v145->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
  }
  else
  {
    resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1C13DCC(
                                                                                            QuestRewardInfo___TypeInfo,
                                                                                            0LL);
  }
  this->fields.resultEventBoardGameTokenRewardInfo = resultEventBoardGameTokenRewardInfo_k__BackingField;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.resultEventBoardGameTokenRewardInfo,
    (int64_t)resultEventBoardGameTokenRewardInfo_k__BackingField,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  v153 = warClearRewardIn;
  this->fields.isDispOnly = dispOnly;
  if ( !warClearRewardIn )
    v153 = (struct WarClearReward_array *)sub_1C13DCC(WarClearReward___TypeInfo, 0LL);
  this->fields.warClearReward = v153;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.warClearReward,
    (int64_t)v153,
    v147,
    v148,
    v149,
    v150,
    v151,
    v152);
  v160 = questResultAfterEventRewardInfos;
  this->fields.isWarBoardClear = isWarBoardClear;
  this->fields.EventActivityPointEffectState = eventActivityPointEffectState;
  if ( !questResultAfterEventRewardInfos )
    v160 = (struct BattleDropItem_array *)sub_1C13DCC(BattleDropItem___TypeInfo, 0LL);
  this->fields.questResultAfterEventRewardInfos = v160;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.questResultAfterEventRewardInfos,
    (int64_t)v160,
    v154,
    v155,
    v156,
    v157,
    v158,
    v159);
  v167 = resultEventPanelRewardInfos;
  if ( !resultEventPanelRewardInfos )
    v167 = (struct BattleDropItem_array *)sub_1C13DCC(BattleDropItem___TypeInfo, 0LL);
  this->fields.resultEventPanelRewardInfos = v167;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.resultEventPanelRewardInfos,
    (int64_t)v167,
    v161,
    v162,
    v163,
    v164,
    v165,
    v166);
  v174 = limitImageAnnounces;
  this->fields.panelEventPoint = panelEventPoint;
  if ( !limitImageAnnounces )
    v174 = (struct LimitImageAnnounce_array *)sub_1C13DCC(LimitImageAnnounce___TypeInfo, 0LL);
  this->fields.limitImageAnnounces = v174;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.limitImageAnnounces,
    (int64_t)v174,
    v168,
    v169,
    v170,
    v171,
    v172,
    v173);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB116C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v175);
    byte_4BB116C = 1;
  }
  v182 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v182 = TerminalPramsManager_TypeInfo;
  }
  this->fields.isOrdealCallWarClear = v182->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4BB180D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v175);
    v182 = TerminalPramsManager_TypeInfo;
    byte_4BB180D = 1;
  }
  if ( !v182->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v182);
    v182 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventMuralId = v182->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_4BB19CC )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v175);
    v182 = TerminalPramsManager_TypeInfo;
    byte_4BB19CC = 1;
  }
  if ( !v182->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v182);
    v182 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventActionQuestId = v182->static_fields->_EventActionQuestId_k__BackingField;
  if ( !byte_4BB180F )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v175);
    v182 = TerminalPramsManager_TypeInfo;
    byte_4BB180F = 1;
  }
  if ( !v182->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v182);
    v182 = TerminalPramsManager_TypeInfo;
  }
  this->fields.playHappinessCounterEffect = v182->static_fields->_PlayHappinessCounterEffect_k__BackingField;
  if ( !byte_4BB1259 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v175);
    v182 = TerminalPramsManager_TypeInfo;
    byte_4BB1259 = 1;
  }
  if ( !v182->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v182);
    v182 = TerminalPramsManager_TypeInfo;
  }
  OldUserEventPoint_k__BackingField = v182->static_fields->_OldUserEventPoint_k__BackingField;
  this->fields.oldUserEventPoint = OldUserEventPoint_k__BackingField;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.oldUserEventPoint,
    (int64_t)OldUserEventPoint_k__BackingField,
    v176,
    v177,
    v178,
    v179,
    v180,
    v181);
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor_35826436(
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

  if ( (byte_4BB1CC1 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, uSvtEnt);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4BB1CC1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !uSvtEnt )
    sub_1C13F80(v6, v7);
  v8 = *(_OWORD *)&uSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  this->fields.id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v13, 0LL);
  v9 = *(_OWORD *)&uSvtEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v9;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v12, 0LL);
  v11 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v15, 0LL);
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                              uSvtEnt->fields.limitCount,
                              0LL);
  this->fields.imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                   uSvtEnt->fields.imageLimitCount,
                                   0LL);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                  uSvtEnt->fields.dispLimitCount,
                                  0LL);
  this->fields.commandCardLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                         uSvtEnt->fields.commandCardLimitCount,
                                         0LL);
  this->fields.iconLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
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

  if ( (byte_4BB1CC2 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_1C13D24(&UserServantEntity_TypeInfo, v4);
    byte_4BB1CC2 = 1;
  }
  v5 = sub_1C13F70(UserServantEntity_TypeInfo);
  UserServantEntity___ctor((UserServantEntity_o *)v5, 0LL);
  id = this->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v14, id, 0LL);
  v15 = v14;
  if ( !v5 )
    sub_1C13F80(v7, v8);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_35827200(
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

  if ( (byte_4BB1CC3 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_OldHeroineLawData_TypeInfo, qClearHeroineInfo);
    byte_4BB1CC3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !qClearHeroineInfo )
    sub_1C13F80(v5, v6);
  oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
  v8 = (TerminalPramsManager_OldHeroineLawData_o *)sub_1C13F70(TerminalPramsManager_OldHeroineLawData_TypeInfo);
  TerminalPramsManager_OldHeroineLawData___ctor_35826436(v8, oldUsrSvtData, v9);
  this->fields.oldUsrSvtData = v8;
  p_fields = &this->fields;
  sub_1C13CC8((PartyOrganizationUtility_o *)p_fields, (int64_t)v8, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_4BB1CC4 & 1) == 0 )
  {
    sub_1C13D24(&QuestClearHeroineInfo_TypeInfo, method);
    byte_4BB1CC4 = 1;
  }
  v3 = sub_1C13F70(QuestClearHeroineInfo_TypeInfo);
  QuestClearHeroineInfo___ctor((QuestClearHeroineInfo_o *)v3, 0LL);
  oldUsrSvtData = this->fields.oldUsrSvtData;
  if ( !oldUsrSvtData
    || (oldUsrSvtData = (TerminalPramsManager_OldHeroineLawData_o *)TerminalPramsManager_OldHeroineLawData__GetLoad(
                                                                      oldUsrSvtData,
                                                                      v4),
        !v3) )
  {
    sub_1C13F80(oldUsrSvtData, v4);
  }
  *(_QWORD *)(v3 + 16) = oldUsrSvtData;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)oldUsrSvtData, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4BB1CC8 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager___c_TypeInfo, v1);
    byte_4BB1CC8 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(TerminalPramsManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalPramsManager___c_TypeInfo->static_fields->__9 = (struct TerminalPramsManager___c_o *)v2;
  sub_1C13CC8(
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


bool __fastcall TerminalPramsManager___c___ReceiveQuestEndResultInfo_b__696_0(
        TerminalPramsManager___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  int32_t questId; // w19
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4BB1CC9 & 1) == 0 )
  {
    this = (TerminalPramsManager___c_o *)sub_1C13D24(&TerminalPramsManager_TypeInfo, n);
    byte_4BB1CC9 = 1;
  }
  if ( !n )
    sub_1C13F80(this, n);
  questId = n->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, n);
    byte_4BAF44D = 1;
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
bool __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__701_0(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  if ( (byte_4BB1CCA & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, *(_QWORD *)&v);
    byte_4BB1CCA = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStoryForQuestId(v, 0LL);
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__701_3(
        TerminalPramsManager___c_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C13F80(this, 0LL);
  return v->fields.id;
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__701_4(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  return v;
}


void __fastcall TerminalPramsManager___c__DisplayClass684_0___ctor(
        TerminalPramsManager___c__DisplayClass684_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager___c__DisplayClass684_0___CheckResumeEffectNT2_b__0(
        TerminalPramsManager___c__DisplayClass684_0_o *this,
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

  if ( (byte_4BB1CCB & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_43/*"\n"*/, effectId);
    byte_4BB1CCB = 1;
  }
  effectIdsStr = this->fields.effectIdsStr;
  p_fields = (PartyOrganizationUtility_o *)&this->fields;
  v7 = System_String__Concat_62979204(effectIdsStr, effectId, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  p_fields->klass = (PartyOrganizationUtility_c *)v7;
  sub_1C13CC8(p_fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall TerminalPramsManager___c__DisplayClass701_0___ctor(
        TerminalPramsManager___c__DisplayClass701_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


QuestEntity_o *__fastcall TerminalPramsManager___c__DisplayClass701_0___SendOpenedQuestIdToAdManager_b__1(
        TerminalPramsManager___c__DisplayClass701_0_o *this,
        int32_t v,
        const MethodInfo *method)
{
  QuestMaster_o *questMaster; // x0

  questMaster = this->fields.questMaster;
  if ( !questMaster )
    sub_1C13F80(0LL, v);
  return QuestMaster__getQuestEntity(questMaster, v, 0LL);
}


bool __fastcall TerminalPramsManager___c__DisplayClass701_0___SendOpenedQuestIdToAdManager_b__2(
        TerminalPramsManager___c__DisplayClass701_0_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  UserQuestMaster_o *userQuestMaster; // x20
  NetworkManager_c *v6; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB1CCC & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v);
    byte_4BB1CCC = 1;
  }
  entity = 0LL;
  userQuestMaster = this->fields.userQuestMaster;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v);
    byte_4BAF1E5 = 1;
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
    sub_1C13F80(v6, v);
  }
  return 1;
}