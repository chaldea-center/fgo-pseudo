void __fastcall TerminalPramsManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_HashSet_int__o *v16; // x19
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  void *v24; // x1
  struct TerminalPramsManager_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x0
  struct TerminalPramsManager_StaticFields *v33; // x8
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_List_object__o *v43; // x19
  PartyOrganizationUtility_o *p_eventScriptMessages; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct TerminalPramsManager_StaticFields *v51; // x8

  if ( (byte_4B137D7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v8, v9);
    sub_1BCA7E0(&float___TypeInfo, v10, v11);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B137D7 = 1;
  }
  v16 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v1,
                                                       v2,
                                                       v3);
  System_Collections_Generic_HashSet_int____ctor(
    v16,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->loginQuestNotifiedList = v16;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->loginQuestNotifiedList,
    (int64_t)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_1/*""*/;
  v25 = TerminalPramsManager_TypeInfo->static_fields;
  v25->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v25->mTerminalWarStartedIds, (int64_t)v24, v26, v27, v28, v29, v30, v31);
  *(_OWORD *)&TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = xmmword_BD2B40;
  v32 = sub_1BCA888(float___TypeInfo, 3LL);
  v33 = TerminalPramsManager_TypeInfo->static_fields;
  v33->TipsArchiveScrollValueList = (struct System_Single_array *)v32;
  sub_1BCA784((PartyOrganizationUtility_o *)&v33->TipsArchiveScrollValueList, v32, v34, v35, v36, v37, v38, v39);
  TerminalPramsManager_TypeInfo->static_fields->joinGroupId = -1;
  v43 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v40,
                                                       v41,
                                                       v42);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  p_eventScriptMessages = (PartyOrganizationUtility_o *)&TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  p_eventScriptMessages->klass = (PartyOrganizationUtility_c *)v43;
  sub_1BCA784(p_eventScriptMessages, (int64_t)v43, v45, v46, v47, v48, v49, v50);
  v51 = TerminalPramsManager_TypeInfo->static_fields;
  *(_QWORD *)&v51->EVENT_POINT_EFFECT_STATE_SUB = 0xFFFFFFFFLL;
  v51->EVENT_POINT_EFFECT_STATE_ADD = 1;
  *(_QWORD *)&v51->_ShopFocusItemId_k__BackingField = 0LL;
  v51->isInvisibleConnectAndLoad = 0;
  *(_QWORD *)&v51->ConnectMarkEventId = 0LL;
  v51->meSceneStatus = 0;
  v51->isCheckHomeExpirationDateEventMap = 1;
  *(_WORD *)&v51->IsEventMapLoading = 0;
  v51->_MasterMissionTargetType_k__BackingField = -1;
}


void __fastcall TerminalPramsManager__AddNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalPramsManager_c *v6; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_4B137B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v4, v5);
    byte_4B137B8 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v6->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_HashSet_int___Add(
    loginQuestNotifiedList,
    questId,
    (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall TerminalPramsManager__AutoOff(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4B1377A & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1377A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B11139 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B11139 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = 0;
  if ( !byte_4B1336F )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4B1336F = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_IsAutoShortcut_k__BackingField = 0;
  static_fields->mIsAutoOpenMasterMission = 0;
}


void __fastcall TerminalPramsManager__BlankEarthRank_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B137AC & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11561/*"SAVEKEY_BlankEarthRank"*/, v3, v4);
    byte_4B137AC = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B13814 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13814 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11561/*"SAVEKEY_BlankEarthRank"*/,
    v5->static_fields->_BlankEarthRank_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__BlankEarthSpotId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B137AB & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11562/*"SAVEKEY_BlankEarthSpotId"*/, v3, v4);
    byte_4B137AB = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B12CDE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B12CDE = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11562/*"SAVEKEY_BlankEarthSpotId"*/,
    v5->static_fields->_BlankEarthSpotId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__CampaignDirectBonus_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  TerminalPramsManager_c *v9; // x0
  Il2CppObject *p_obj; // x19
  System_String_o *v11; // x0

  if ( (byte_4B137AA & 1) == 0 )
  {
    sub_1BCA7E0(&CommonUI_CampaignDirectBonusData___TypeInfo, v1, v2);
    sub_1BCA7E0(&JsonManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_11563/*"SAVEKEY_CampaignDirectBonus"*/, v7, v8);
    byte_4B137AA = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B13813 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13813 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
  }
  p_obj = &v9->static_fields->_CampaignDirectBonus_k__BackingField->obj;
  if ( !p_obj )
    p_obj = (Il2CppObject *)sub_1BCA888(CommonUI_CampaignDirectBonusData___TypeInfo, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v1);
  v11 = JsonManager__toJson(p_obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11563/*"SAVEKEY_CampaignDirectBonus"*/, v11, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall TerminalPramsManager__CanSendTrackEvent(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x19
  Il2CppObject *v19; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B137C6 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SpotMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B137C6 = 1;
  }
  v19 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !entity )
    goto LABEL_16;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0LL);
  if ( !v16 )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v16,
          &v19,
          (int32_t)Instance,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15);
  if ( !v19 )
LABEL_16:
    sub_1BCAA3C(Instance, v15);
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
            HIDWORD(v19[1].klass),
            (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall TerminalPramsManager__CheckClearSelectedStoryQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0
  const MethodInfo *v6; // x0

  if ( (byte_4B137AD & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B137AD = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B13534 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13534 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_SelectedStoryQuestId_k__BackingField >= 1 )
  {
    if ( !v4->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v4, method);
    if ( !byte_4B13534 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
      byte_4B13534 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v5 = TerminalPramsManager_TypeInfo;
    }
    if ( v5->static_fields->_SelectedStoryQuestId_k__BackingField != questId )
    {
      if ( !v5->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v5, method);
      if ( !byte_4B1312E )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
        byte_4B1312E = 1;
      }
      v6 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
        v6 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
      }
      *((_DWORD *)v6[2].virtualMethodPointer + 8) = 0;
      TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(v6);
    }
  }
}


bool __fastcall TerminalPramsManager__CheckEventActivityPointSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B13795 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13763/*"TerminalBeforeEventActivityPoint"*/, v1, v2);
    sub_1BCA7E0(&StringLiteral_13764/*"TerminalBeforeEventActivityPointGauge"*/, v3, v4);
    byte_4B13795 = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13763/*"TerminalBeforeEventActivityPoint"*/, 0LL)
      && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13764/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckEventSubmarinePointSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B13797 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13765/*"TerminalBeforeEventSubmarinePointData"*/, v1, v2);
    byte_4B13797 = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13765/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckIsOrdealCallWarClear(WarEntity_o *warEntity, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t parentWarId; // w19
  BalanceConfig_c *v5; // x0

  if ( (byte_4B137D3 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B137D3 = 1;
  }
  if ( !warEntity )
    return 0;
  parentWarId = warEntity->fields.parentWarId;
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v5 = BalanceConfig_TypeInfo;
  }
  return parentWarId == v5->static_fields->OrdealCallWarId;
}


void __fastcall TerminalPramsManager__CheckResumeEffectNT2(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x19
  const MethodInfo *v25; // x1
  __int64 v26; // x2
  TerminalPramsManager_c *v27; // x0
  ScrTerminalListTop_c *v28; // x8
  int32_t NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // w20
  const MethodInfo *v30; // x1
  ScrTerminalListTop_c *v31; // x0
  int32_t NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // w20
  __int64 v33; // x1
  ScrTerminalListTop_c *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  Il2CppObject *v37; // x20
  TerminalPramsManager_c *v38; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Collections_Generic_List_object__o *v41; // x21
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  void *v48; // x1
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Action_object__o *v52; // x22
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x19
  TerminalPramsManager_c *v61; // x0
  PartyOrganizationUtility_o *p_PlayedTerminalEffects_k__BackingField; // x0
  const MethodInfo *v63; // x0
  int32_t v64; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B137B1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_string___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ForEach__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Remove__, v8, v9);
    sub_1BCA7E0(&ScrTerminalListTop_TypeInfo, v10, v11);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_TerminalPramsManager___c__DisplayClass676_0__CheckResumeEffectNT2_b__0__, v14, v15);
    sub_1BCA7E0(&TerminalPramsManager___c__DisplayClass676_0_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_88/*"\r\n"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v22, v23);
    byte_4B137B1 = 1;
  }
  v64 = 0;
  v24 = sub_1BCAA2C(TerminalPramsManager___c__DisplayClass676_0_TypeInfo, v1, v2, v3);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
  if ( !byte_4B13811 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v25, v26);
    byte_4B13811 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
    v27 = TerminalPramsManager_TypeInfo;
  }
  if ( v27->static_fields->_PlayedTerminalEffects_k__BackingField )
  {
    v28 = ScrTerminalListTop_TypeInfo;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v25);
      v28 = ScrTerminalListTop_TypeInfo;
      v27 = TerminalPramsManager_TypeInfo;
    }
    NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v28->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
    if ( !v27->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v27, v25);
    if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID, v25) )
    {
      v31 = ScrTerminalListTop_TypeInfo;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v30);
        v31 = ScrTerminalListTop_TypeInfo;
      }
      NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID = v31->static_fields->NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v30);
      if ( !TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID, v30) )
      {
        v34 = ScrTerminalListTop_TypeInfo;
        if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v33);
          v34 = ScrTerminalListTop_TypeInfo;
        }
        v64 = v34->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
        v37 = (Il2CppObject *)System_Int32__ToString((int32_t)&v64, 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v35);
        if ( !byte_4B13811 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v35, v36);
          byte_4B13811 = 1;
        }
        v38 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v35);
          v38 = TerminalPramsManager_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v38->static_fields->_PlayedTerminalEffects_k__BackingField;
        if ( !PlayedTerminalEffects_k__BackingField
          || (PlayedTerminalEffects_k__BackingField = System_String__Replace_62420848(
                                                        PlayedTerminalEffects_k__BackingField,
                                                        (System_String_o *)StringLiteral_88/*"\r\n"*/,
                                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                                        0LL)) == 0LL
          || (v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                           PlayedTerminalEffects_k__BackingField,
                                                                           0xAu,
                                                                           0,
                                                                           0LL),
              (PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Linq_Enumerable__ToList_object_(
                                                                            v40,
                                                                            (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL)
          || (v41 = (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
              PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Collections_Generic_List_object___Remove(
                                                                           (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
                                                                           v37,
                                                                           (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__),
              !v24) )
        {
          sub_1BCAA3C(PlayedTerminalEffects_k__BackingField, v35);
        }
        v48 = StringLiteral_1/*""*/;
        *(_QWORD *)(v24 + 16) = StringLiteral_1/*""*/;
        sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)v48, v42, v43, v44, v45, v46, v47);
        v52 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, v49, v50, v51);
        System_Action_object____ctor(
          v52,
          (Il2CppObject *)v24,
          Method_TerminalPramsManager___c__DisplayClass676_0__CheckResumeEffectNT2_b__0__,
          0LL);
        System_Collections_Generic_List_object___ForEach(
          v41,
          (System_Action_T__o *)v52,
          (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_string__ForEach__);
        v60 = *(_QWORD *)(v24 + 16);
        if ( !byte_4B13802 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v53, v54);
          byte_4B13802 = 1;
        }
        v61 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v53);
          v61 = TerminalPramsManager_TypeInfo;
        }
        p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v61->static_fields->_PlayedTerminalEffects_k__BackingField;
        p_PlayedTerminalEffects_k__BackingField->klass = (PartyOrganizationUtility_c *)v60;
        sub_1BCA784(p_PlayedTerminalEffects_k__BackingField, v60, v54, v55, v56, v57, v58, v59);
        TerminalPramsManager__Save_SaveData(v63);
      }
    }
  }
}


void __fastcall TerminalPramsManager__ClearEventQuestIds_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B137A5 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11564/*"SAVEKEY_ClearEventQuestIds"*/, v3, v4);
    byte_4B137A5 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B12DC5 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B12DC5 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11564/*"SAVEKEY_ClearEventQuestIds"*/,
    v5->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__ConnectMark_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4B137A4 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11566/*"SAVEKEY_ConnectMarkEventId"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_11565/*"SAVEKEY_ConnectMarkAnimationId"*/, v5, v6);
    byte_4B137A4 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11566/*"SAVEKEY_ConnectMarkEventId"*/, v7->static_fields->ConnectMarkEventId, 0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11565/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__DeleteClearDatas(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  TerminalPramsManager_ClearData_c *v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  TerminalPramsManager_c *v15; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  void *v17; // x1

  if ( (byte_4B137C9 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_ClearData_TypeInfo, v1, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B137C9 = 1;
  }
  v7 = TerminalPramsManager_ClearData_TypeInfo;
  if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo, v1);
    v7 = TerminalPramsManager_ClearData_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v7->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
  if ( !byte_4B13826 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    byte_4B13826 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
    v15 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v15->static_fields;
  static_fields->_isQuestRewardSetted_k__BackingField = 0;
  v17 = StringLiteral_1/*""*/;
  static_fields->lastPlayBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->lastPlayBgmName, (int64_t)v17, v9, v10, v11, v12, v13, v14);
}


void __fastcall TerminalPramsManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
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
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  TerminalPramsManager_c *v94; // x0
  const MethodInfo *v95; // x0
  const MethodInfo *v96; // x0
  const MethodInfo *v97; // x0

  if ( (byte_4B13788 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11569/*"SAVEKEY_LastPlayBgmName"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_13767/*"TerminalEndTime"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_5292/*"Debug_IsOriginalGuestNPC"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_11575/*"SAVEKEY_PlayedTerminalEffects"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_13763/*"TerminalBeforeEventActivityPoint"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11563/*"SAVEKEY_CampaignDirectBonus"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11570/*"SAVEKEY_LastPlayQuestConsumeType"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11580/*"SAVEKEY_TerminalCraftInfoDisp"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_13768/*"TerminalEventDailyPointEventId"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_5288/*"Debug_GuestNPCInfoList"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_13765/*"TerminalBeforeEventSubmarinePointData"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_13774/*"TerminalPhaseCnt"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_11579/*"SAVEKEY_TerminalConquestInfos"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_13782/*"TerminalTimeStatusEventId"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_13766/*"TerminalDispState"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_11572/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_13769/*"TerminalIsDoneShortcut"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_11571/*"SAVEKEY_MapModelClearQuestInfo"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_11576/*"SAVEKEY_PlayerGenderType"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_11581/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_11564/*"SAVEKEY_ClearEventQuestIds"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_11573/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_5293/*"Debug_IsQuestReleaseAll"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_5290/*"Debug_IsDummyErrorSelect"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_13777/*"TerminalQuestId"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_11578/*"SAVEKEY_TerminalConquestInfoDisp"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_11584/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_13781/*"TerminalTimeStatusEventDailyPoint"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_13786/*"TerminalWarId"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_13779/*"TerminalSpotId"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_13783/*"TerminalTimeStatusLoopCount"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_13764/*"TerminalBeforeEventActivityPointGauge"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_11562/*"SAVEKEY_BlankEarthSpotId"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_11567/*"SAVEKEY_DataLostBattleAutoReset"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_5291/*"Debug_IsOriginalBattle"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_13787/*"TerminalWarStartedIds"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_5287/*"Debug_BattleEnemyList"*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_11566/*"SAVEKEY_ConnectMarkEventId"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_13785/*"TerminalTransitionInfoVoiceAssetName"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_11565/*"SAVEKEY_ConnectMarkAnimationId"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_11574/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_13772/*"TerminalLastPlayedQuestId"*/, v85, v86);
    sub_1BCA7E0(&StringLiteral_5289/*"Debug_IsBuildInfoDisp"*/, v87, v88);
    sub_1BCA7E0(&StringLiteral_13784/*"TerminalTransitionInfoMissionId"*/, v89, v90);
    sub_1BCA7E0(&StringLiteral_11583/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v91, v92);
    byte_4B13788 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13766/*"TerminalDispState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13786/*"TerminalWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13779/*"TerminalSpotId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13777/*"TerminalQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13772/*"TerminalLastPlayedQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13774/*"TerminalPhaseCnt"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13767/*"TerminalEndTime"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13769/*"TerminalIsDoneShortcut"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13787/*"TerminalWarStartedIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5293/*"Debug_IsQuestReleaseAll"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5290/*"Debug_IsDummyErrorSelect"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5289/*"Debug_IsBuildInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5291/*"Debug_IsOriginalBattle"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5292/*"Debug_IsOriginalGuestNPC"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5287/*"Debug_BattleEnemyList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5288/*"Debug_GuestNPCInfoList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13782/*"TerminalTimeStatusEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13783/*"TerminalTimeStatusLoopCount"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13768/*"TerminalEventDailyPointEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13781/*"TerminalTimeStatusEventDailyPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13784/*"TerminalTransitionInfoMissionId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13785/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13763/*"TerminalBeforeEventActivityPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13764/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13765/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11579/*"SAVEKEY_TerminalConquestInfos"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11578/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11580/*"SAVEKEY_TerminalCraftInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11581/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11569/*"SAVEKEY_LastPlayBgmName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11570/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11575/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11572/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11573/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11574/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11584/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11566/*"SAVEKEY_ConnectMarkEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11565/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11583/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11564/*"SAVEKEY_ClearEventQuestIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11571/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11567/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11576/*"SAVEKEY_PlayerGenderType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11563/*"SAVEKEY_CampaignDirectBonus"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11562/*"SAVEKEY_BlankEarthSpotId"*/, 0LL);
  v94 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v93);
  TerminalPramsManager__InitParameter((const MethodInfo *)v94);
  TerminalPramsManager__DeleteClearDatas(v95);
  TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(v96);
  TerminalPramsManager__DeleteQuestRandomGroupList(v97);
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
  __int64 v9; // x2
  TerminalPramsManager_c *v10; // x0
  PartyOrganizationUtility_o *p_EventRaidDefeatedEffectInfo_k__BackingField; // x0

  if ( (byte_4B137CA & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11568/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v8, v9);
    byte_4B137CA = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B13827 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13827 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v10 = TerminalPramsManager_TypeInfo;
  }
  p_EventRaidDefeatedEffectInfo_k__BackingField = (PartyOrganizationUtility_o *)&v10->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  p_EventRaidDefeatedEffectInfo_k__BackingField->klass = 0LL;
  sub_1BCA784(p_EventRaidDefeatedEffectInfo_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11568/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, 0LL);
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
  __int64 v9; // x2
  TerminalPramsManager_c *v10; // x0
  PartyOrganizationUtility_o *p_QuestRandomGroupList_k__BackingField; // x0

  if ( (byte_4B137CF & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11577/*"SAVEKEY_QuestRandomGroupList"*/, v8, v9);
    byte_4B137CF = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B13829 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13829 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v10 = TerminalPramsManager_TypeInfo;
  }
  p_QuestRandomGroupList_k__BackingField = (PartyOrganizationUtility_o *)&v10->static_fields->_QuestRandomGroupList_k__BackingField;
  p_QuestRandomGroupList_k__BackingField->klass = 0LL;
  sub_1BCA784(p_QuestRandomGroupList_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11577/*"SAVEKEY_QuestRandomGroupList"*/, 0LL);
}


void __fastcall TerminalPramsManager__EventDailyPointSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  TerminalPramsManager_c *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  TerminalPramsManager_c *v10; // x0
  System_String_o *v11; // x0
  int64_t BeforeTimeEventDailyPoint_k__BackingField; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B13791 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_13768/*"TerminalEventDailyPointEventId"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_13781/*"TerminalTimeStatusEventDailyPoint"*/, v5, v6);
    byte_4B13791 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B1380D )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1380D = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13768/*"TerminalEventDailyPointEventId"*/,
    v7->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4B1380E )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    byte_4B1380E = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
    v10 = TerminalPramsManager_TypeInfo;
  }
  BeforeTimeEventDailyPoint_k__BackingField = v10->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v11 = System_Int64__ToString((int64_t)&BeforeTimeEventDailyPoint_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13781/*"TerminalTimeStatusEventDailyPoint"*/, v11, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__EventStatusSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  TerminalPramsManager_c *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  TerminalPramsManager_c *v10; // x0

  if ( (byte_4B13790 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_13782/*"TerminalTimeStatusEventId"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_13783/*"TerminalTimeStatusLoopCount"*/, v5, v6);
    byte_4B13790 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B1352F )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1352F = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13782/*"TerminalTimeStatusEventId"*/,
    v7->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_4B13530 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    byte_4B13530 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
    v10 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13783/*"TerminalTimeStatusLoopCount"*/,
    v10->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall TerminalPramsManager__ExistBlankEarthTutorial(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  System_Collections_ICollection_o *AvailableTutorialArray; // x0

  if ( (byte_4B137D5 & 1) == 0 )
  {
    sub_1BCA7E0(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v1, v2);
    byte_4B137D5 = 1;
  }
  v4 = sub_1BCAA2C(EventTutorialMaster_EventTutorialArgs_TypeInfo, v1, v2, v3);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v4, 0LL);
  if ( !v4 )
    sub_1BCAA3C(v5, v6);
  *(_QWORD *)(v4 + 16) = 0x5300000000LL;
  AvailableTutorialArray = (System_Collections_ICollection_o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                                 (EventTutorialMaster_EventTutorialArgs_o *)v4,
                                                                 0LL);
  return !BasicHelper__IsNullOrEmpty(AvailableTutorialArray, 0LL);
}


float __fastcall TerminalPramsManager__GetAutoIntpTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  int32_t targetFrameRate; // w0

  if ( (byte_4B13783 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, v1, v2);
    byte_4B13783 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v1);
  targetFrameRate = UnityEngine_Application__get_targetFrameRate(0LL);
  return (float)(1.0 / (float)targetFrameRate) + (float)(1.0 / (float)targetFrameRate);
}


int32_t __fastcall TerminalPramsManager__GetFolderLastClickedIdx(int32_t warId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalPramsManager_c *v6; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x8
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B137B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v4, v5);
    byte_4B137B6 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  value = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
  }
  folderLastIdxs = v6->static_fields->folderLastIdxs;
  if ( !folderLastIdxs )
    return 0;
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6, method);
    folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs;
    if ( !folderLastIdxs )
      sub_1BCAA3C(v8, v9);
  }
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         folderLastIdxs,
         warId,
         &value,
         (const MethodInfo_31FE90C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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
  __int64 v3; // x2
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_c *v6; // x0

  if ( (byte_4B13784 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v2, v3);
    byte_4B13784 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v2);
  if ( !byte_4B12DCF )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v2, v3);
    byte_4B12DCF = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v2);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->_IsAutoResume_k__BackingField )
    return time;
  if ( !v5->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v5, v2);
  if ( !byte_4B13388 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v2, v3);
    byte_4B13388 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v2);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( v6->static_fields->_IsMapReturnFolder_k__BackingField )
    return time;
  if ( !v6->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v6, v2);
  return TerminalPramsManager__GetAutoIntpTime((const MethodInfo *)v6);
}


int32_t __fastcall TerminalPramsManager__GetQuestReleasedFocusState(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v6; // x1

  if ( (byte_4B137BC & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B137BC = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v4);
  if ( !QuestFocusStateManager )
    sub_1BCAA3C(0LL, v6);
  return QuestFocusStateManager__GetFocusState(QuestFocusStateManager, questId, 0LL);
}


void __fastcall TerminalPramsManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1378A & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1378A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  TerminalPramsManager__InitParameter((const MethodInfo *)v3);
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
  __int64 v9; // x2
  TerminalPramsManager_c *v10; // x0
  struct System_String_o *v11; // x20
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  TerminalPramsManager_c *v20; // x0
  struct TerminalPramsManager_StaticFields *v21; // x0

  if ( (byte_4B137B4 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B137B4 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B12057 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B12057 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_IsDispOnly_k__BackingField = 0;
  v11 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4B13372 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B13372 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, v1);
    v10 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = v11;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->_QuestWindowMessage_k__BackingField,
    (int64_t)v11,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_4B13371 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v14);
    byte_4B13371 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
    v20 = TerminalPramsManager_TypeInfo;
  }
  v20->static_fields->_MessageDispType_k__BackingField = 0;
  if ( !byte_4B12056 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v14);
    v20 = TerminalPramsManager_TypeInfo;
    byte_4B12056 = 1;
  }
  if ( !v20->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v20, v13);
    v20 = TerminalPramsManager_TypeInfo;
  }
  v21 = v20->static_fields;
  v21->_BattleSetupKeep_k__BackingField = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v21->_BattleSetupKeep_k__BackingField, 0LL, v14, v15, v16, v17, v18, v19);
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
  __int64 v9; // x2
  TerminalPramsManager_c *v10; // x0
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
  void *v21; // x1
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  TerminalPramsManager_c *v29; // x0
  PartyOrganizationUtility_o *p_timeStatusRecord_k__BackingField; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  TerminalPramsManager_c *v38; // x0
  PartyOrganizationUtility_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  void *v40; // x1
  PartyOrganizationUtility_o *p_lastPlayBgmName; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  TerminalPramsManager_c *v55; // x0
  struct TerminalPramsManager_StaticFields *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  TerminalPramsManager_c *v59; // x0
  const MethodInfo *v60; // x0
  __int64 v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  TerminalPramsManager_c *v68; // x0
  PartyOrganizationUtility_c *v69; // x20
  PartyOrganizationUtility_o *p_PlayedTerminalEffects_k__BackingField; // x0
  __int64 v71; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  TerminalPramsManager_c *v78; // x0
  struct TerminalPramsManager_StaticFields *v79; // x8
  PartyOrganizationUtility_c *v80; // x20
  PartyOrganizationUtility_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  __int64 v82; // x1
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  TerminalPramsManager_c *v89; // x0
  struct TerminalPramsManager_StaticFields *v90; // x0
  __int64 v91; // x1
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  TerminalPramsManager_c *v98; // x0
  struct TerminalPramsManager_StaticFields *v99; // x0
  __int64 v100; // x1
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  TerminalPramsManager_c *v107; // x0
  struct System_String_o *v108; // x20
  struct TerminalPramsManager_StaticFields *v109; // x8

  if ( (byte_4B13789 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B13789 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B12DCD )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B12DCD = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4B12DCC )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B12DCC = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, v1);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_SpotId_k__BackingField = 0;
  if ( !byte_4B12DC7 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B12DC7 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, v1);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_QuestId_k__BackingField = 0;
  if ( !byte_4B13022 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B13022 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, v1);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_LastPlayedQuestId_k__BackingField = 0;
  if ( !byte_4B137F8 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B137F8 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, v1);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
  if ( !byte_4B13023 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B13023 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, v1);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = 0;
  if ( !byte_4B1301F )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B1301F = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, v1);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_AfterActionFocusQuestId_k__BackingField = 0;
  if ( !byte_4B1312E )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B1312E = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, v1);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
  if ( !byte_4B12270 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B12270 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, v1);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  if ( !byte_4B1312F )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B1312F = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, v1);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
  if ( !byte_4B1339E )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B1339E = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, v1);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 0;
  if ( !byte_4B1339C )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B1339C = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, v1);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
  if ( !byte_4B129A0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B129A0 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, v1);
    v10 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    0LL,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_4B12DCB )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v12, v13);
    byte_4B12DCB = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v19->static_fields->_PhaseCnt_k__BackingField = 0;
  if ( !byte_4B12DC8 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v12, v13);
    v19 = TerminalPramsManager_TypeInfo;
    byte_4B12DC8 = 1;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19, v12);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v19->static_fields->_EndTime_k__BackingField = 0LL;
  if ( !byte_4B12DCA )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v12, v13);
    v19 = TerminalPramsManager_TypeInfo;
    byte_4B12DCA = 1;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19, v12);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v20 = v19->static_fields;
  v20->_IsDoneShortcut_k__BackingField = 0;
  v21 = StringLiteral_1/*""*/;
  v20->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v20->mTerminalWarStartedIds, (int64_t)v21, v13, v14, v15, v16, v17, v18);
  if ( !byte_4B137F9 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v23);
    byte_4B137F9 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->mDebug_IsQuestReleaseAll = 0;
  if ( !byte_4B137FA )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v23);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4B137FA = 1;
  }
  if ( !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29, v22);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->mDebug_IsDummyErrorSelect = 0;
  if ( !byte_4B137FB )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v23);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4B137FB = 1;
  }
  if ( !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29, v22);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->mDebug_IsBuildInfoDisp = 0;
  if ( !byte_4B133A1 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v23);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4B133A1 = 1;
  }
  if ( !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29, v22);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_TimeStatusEventId_k__BackingField = 0;
  if ( !byte_4B133A2 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v23);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4B133A2 = 1;
  }
  if ( !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29, v22);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_TimeStatusLoopCount_k__BackingField = 0;
  if ( !byte_4B137FC )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v23);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4B137FC = 1;
  }
  if ( !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29, v22);
    v29 = TerminalPramsManager_TypeInfo;
  }
  p_timeStatusRecord_k__BackingField = (PartyOrganizationUtility_o *)&v29->static_fields->_timeStatusRecord_k__BackingField;
  p_timeStatusRecord_k__BackingField->klass = 0LL;
  sub_1BCA784(p_timeStatusRecord_k__BackingField, 0LL, v23, v24, v25, v26, v27, v28);
  if ( !byte_4B137FD )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v31, v32);
    byte_4B137FD = 1;
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v31);
    v38 = TerminalPramsManager_TypeInfo;
  }
  v38->static_fields->_EventDailyPointEventId_k__BackingField = 0;
  if ( !byte_4B137FE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v31, v32);
    v38 = TerminalPramsManager_TypeInfo;
    byte_4B137FE = 1;
  }
  if ( !v38->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v38, v31);
    v38 = TerminalPramsManager_TypeInfo;
  }
  v38->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = 0LL;
  if ( !byte_4B137FF )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v31, v32);
    v38 = TerminalPramsManager_TypeInfo;
    byte_4B137FF = 1;
  }
  if ( !v38->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v38, v31);
    v38 = TerminalPramsManager_TypeInfo;
  }
  v38->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
  if ( !byte_4B13800 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v31, v32);
    v38 = TerminalPramsManager_TypeInfo;
    byte_4B13800 = 1;
  }
  if ( !v38->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v38, v31);
    v38 = TerminalPramsManager_TypeInfo;
  }
  v38->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
  if ( !byte_4B12EBC )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v31, v32);
    v38 = TerminalPramsManager_TypeInfo;
    byte_4B12EBC = 1;
  }
  if ( !v38->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v38, v31);
    v38 = TerminalPramsManager_TypeInfo;
  }
  p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v38->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  p_BeforeEventSubmarineSaveData_k__BackingField->klass = 0LL;
  sub_1BCA784(p_BeforeEventSubmarineSaveData_k__BackingField, 0LL, v32, v33, v34, v35, v36, v37);
  v40 = StringLiteral_1/*""*/;
  p_lastPlayBgmName = (PartyOrganizationUtility_o *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayBgmName;
  p_lastPlayBgmName->klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  sub_1BCA784(p_lastPlayBgmName, (int64_t)v40, v42, v43, v44, v45, v46, v47);
  v55 = TerminalPramsManager_TypeInfo;
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayQuestConsumeAp = 0LL;
  if ( !byte_4B13801 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v48, v49);
    v55 = TerminalPramsManager_TypeInfo;
    byte_4B13801 = 1;
  }
  if ( !v55->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v55, v48);
    v55 = TerminalPramsManager_TypeInfo;
  }
  v56 = v55->static_fields;
  v56->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v56->_SpecifiedChangeSceneInfo_k__BackingField,
    0LL,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  if ( !byte_4B1353F )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v57, v58);
    byte_4B1353F = 1;
  }
  v59 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v57);
    v59 = TerminalPramsManager_TypeInfo;
  }
  v59->static_fields->_EventBoardGameSquareIndex_k__BackingField = 0;
  if ( !byte_4B13541 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v57, v58);
    v59 = TerminalPramsManager_TypeInfo;
    byte_4B13541 = 1;
  }
  if ( !v59->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v59, v57);
    v59 = TerminalPramsManager_TypeInfo;
  }
  v59->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = 0;
  if ( !byte_4B13543 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v57, v58);
    v59 = TerminalPramsManager_TypeInfo;
    byte_4B13543 = 1;
  }
  if ( !v59->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v59, v57);
    v59 = TerminalPramsManager_TypeInfo;
  }
  v59->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
  if ( !byte_4B137F5 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v57, v58);
    v59 = TerminalPramsManager_TypeInfo;
    byte_4B137F5 = 1;
  }
  if ( !v59->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v59, v57);
    v59 = TerminalPramsManager_TypeInfo;
  }
  v59->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v59);
  TerminalPramsManager__ResetResumeScriptWithMap(v60);
  if ( !byte_4B1338F )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v61, v62);
    byte_4B1338F = 1;
  }
  v68 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v61);
    v68 = TerminalPramsManager_TypeInfo;
  }
  v68->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
  v69 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( !byte_4B13802 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v61, v62);
    v68 = TerminalPramsManager_TypeInfo;
    byte_4B13802 = 1;
  }
  if ( !v68->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v68, v61);
    v68 = TerminalPramsManager_TypeInfo;
  }
  p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v68->static_fields->_PlayedTerminalEffects_k__BackingField;
  p_PlayedTerminalEffects_k__BackingField->klass = v69;
  sub_1BCA784(p_PlayedTerminalEffects_k__BackingField, (int64_t)v69, v62, v63, v64, v65, v66, v67);
  if ( !byte_4B1361E )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v71, v72);
    byte_4B1361E = 1;
  }
  v78 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v71);
    v78 = TerminalPramsManager_TypeInfo;
  }
  v78->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = 0;
  if ( !byte_4B1361F )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v71, v72);
    v78 = TerminalPramsManager_TypeInfo;
    byte_4B1361F = 1;
  }
  if ( !v78->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v78, v71);
    v78 = TerminalPramsManager_TypeInfo;
  }
  v78->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = 0;
  if ( !byte_4B13532 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v71, v72);
    v78 = TerminalPramsManager_TypeInfo;
    byte_4B13532 = 1;
  }
  if ( !v78->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v78, v71);
    v78 = TerminalPramsManager_TypeInfo;
  }
  v79 = v78->static_fields;
  v79->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  *(_QWORD *)&v79->ConnectMarkEventId = 0LL;
  if ( !byte_4B10F85 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v71, v72);
    v78 = TerminalPramsManager_TypeInfo;
    byte_4B10F85 = 1;
  }
  if ( !v78->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v78, v71);
    v78 = TerminalPramsManager_TypeInfo;
  }
  v78->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField = 0;
  if ( !byte_4B13803 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v71, v72);
    v78 = TerminalPramsManager_TypeInfo;
    byte_4B13803 = 1;
  }
  if ( !v78->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v78, v71);
    v78 = TerminalPramsManager_TypeInfo;
  }
  v78->static_fields->_isFortificationCheck_k__BackingField = 0;
  if ( !byte_4B13804 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v71, v72);
    v78 = TerminalPramsManager_TypeInfo;
    byte_4B13804 = 1;
  }
  if ( !v78->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v78, v71);
    v78 = TerminalPramsManager_TypeInfo;
  }
  v78->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !byte_4B13805 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v71, v72);
    v78 = TerminalPramsManager_TypeInfo;
    byte_4B13805 = 1;
  }
  if ( !v78->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v78, v71);
    v78 = TerminalPramsManager_TypeInfo;
  }
  v78->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !byte_4B13539 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v71, v72);
    v78 = TerminalPramsManager_TypeInfo;
    byte_4B13539 = 1;
  }
  if ( !v78->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v78, v71);
    v78 = TerminalPramsManager_TypeInfo;
  }
  v78->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4B13395 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v71, v72);
    v78 = TerminalPramsManager_TypeInfo;
    byte_4B13395 = 1;
  }
  if ( !v78->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v78, v71);
    v78 = TerminalPramsManager_TypeInfo;
  }
  v78->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_4B13537 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v71, v72);
    v78 = TerminalPramsManager_TypeInfo;
    byte_4B13537 = 1;
  }
  if ( !v78->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v78, v71);
    v78 = TerminalPramsManager_TypeInfo;
  }
  v78->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_4B13538 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v71, v72);
    v78 = TerminalPramsManager_TypeInfo;
    byte_4B13538 = 1;
  }
  if ( !v78->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v78, v71);
    v78 = TerminalPramsManager_TypeInfo;
  }
  v78->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_4B13536 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v71, v72);
    v78 = TerminalPramsManager_TypeInfo;
    byte_4B13536 = 1;
  }
  if ( !v78->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v78, v71);
    v78 = TerminalPramsManager_TypeInfo;
  }
  v78->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_4B13539 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v71, v72);
    v78 = TerminalPramsManager_TypeInfo;
    byte_4B13539 = 1;
  }
  if ( !v78->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v78, v71);
    v78 = TerminalPramsManager_TypeInfo;
  }
  v78->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4B1352C )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v71, v72);
    v78 = TerminalPramsManager_TypeInfo;
    byte_4B1352C = 1;
  }
  if ( !v78->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v78, v71);
    v78 = TerminalPramsManager_TypeInfo;
  }
  v78->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 0.0;
  if ( !byte_4B13806 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v71, v72);
    v78 = TerminalPramsManager_TypeInfo;
    byte_4B13806 = 1;
  }
  if ( !v78->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v78, v71);
    v78 = TerminalPramsManager_TypeInfo;
  }
  v78->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  if ( !byte_4B1312C )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v71, v72);
    v78 = TerminalPramsManager_TypeInfo;
    byte_4B1312C = 1;
  }
  if ( !v78->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v78, v71);
    v78 = TerminalPramsManager_TypeInfo;
  }
  v78->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_4B1175D )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v71, v72);
    v78 = TerminalPramsManager_TypeInfo;
    byte_4B1175D = 1;
  }
  if ( !v78->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v78, v71);
    v78 = TerminalPramsManager_TypeInfo;
  }
  v78->static_fields->_PlayerGenderType_k__BackingField = 0;
  if ( !byte_4B13807 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v71, v72);
    v78 = TerminalPramsManager_TypeInfo;
    byte_4B13807 = 1;
  }
  if ( !v78->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v78, v71);
    v78 = TerminalPramsManager_TypeInfo;
  }
  v78->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  v80 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( !byte_4B1353D )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v71, v72);
    v78 = TerminalPramsManager_TypeInfo;
    byte_4B1353D = 1;
  }
  if ( !v78->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v78, v71);
    v78 = TerminalPramsManager_TypeInfo;
  }
  p_SceneMoveQuestClearedInfo_k__BackingField = (PartyOrganizationUtility_o *)&v78->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
  p_SceneMoveQuestClearedInfo_k__BackingField->klass = v80;
  sub_1BCA784(p_SceneMoveQuestClearedInfo_k__BackingField, (int64_t)v80, v72, v73, v74, v75, v76, v77);
  if ( !byte_4B13808 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v82, v83);
    byte_4B13808 = 1;
  }
  v89 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v82);
    v89 = TerminalPramsManager_TypeInfo;
  }
  v90 = v89->static_fields;
  v90->_CampaignBonus_k__BackingField = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v90->_CampaignBonus_k__BackingField, 0LL, v83, v84, v85, v86, v87, v88);
  if ( !byte_4B13809 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v91, v92);
    byte_4B13809 = 1;
  }
  v98 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v91);
    v98 = TerminalPramsManager_TypeInfo;
  }
  v99 = v98->static_fields;
  v99->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v99->_CampaignDirectBonus_k__BackingField,
    0LL,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
  if ( !byte_4B1380A )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v100, v101);
    byte_4B1380A = 1;
  }
  v107 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v100);
    v107 = TerminalPramsManager_TypeInfo;
  }
  v107->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
  v108 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4B10F87 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v100, v101);
    v107 = TerminalPramsManager_TypeInfo;
    byte_4B10F87 = 1;
  }
  if ( !v107->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v107, v100);
    v107 = TerminalPramsManager_TypeInfo;
  }
  v109 = v107->static_fields;
  v109->_TransitionScrollTabName_k__BackingField = v108;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v109->_TransitionScrollTabName_k__BackingField,
    (int64_t)v108,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
}


void __fastcall TerminalPramsManager__InitTipsArchiveScrollValueList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  unsigned __int64 i; // x20
  struct System_Single_array *TipsArchiveScrollValueList; // x8
  struct System_Single_array *v6; // x8
  char *v7; // x8

  if ( (byte_4B137D6 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B137D6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  for ( i = 0LL; ; ++i )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3, v1);
      v3 = TerminalPramsManager_TypeInfo;
    }
    TipsArchiveScrollValueList = v3->static_fields->TipsArchiveScrollValueList;
    if ( !TipsArchiveScrollValueList )
LABEL_14:
      sub_1BCAA3C(v3, v1);
    if ( (__int64)i >= (int)TipsArchiveScrollValueList->max_length )
      break;
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3, v1);
      v3 = TerminalPramsManager_TypeInfo;
    }
    v6 = v3->static_fields->TipsArchiveScrollValueList;
    if ( !v6 )
      goto LABEL_14;
    if ( i >= v6->max_length )
      sub_1BCAA44(v3, v1);
    v7 = (char *)v6 + 4 * i;
    *((_DWORD *)v7 + 8) = 0;
  }
}


bool __fastcall TerminalPramsManager__IsAuto(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B13777 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13777 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B12DCF )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B12DCF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->_IsAutoResume_k__BackingField )
    return 1;
  if ( !v3->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v3, v1);
  if ( !byte_4B137F2 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B137F2 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  return v5->static_fields->_IsAutoShortcut_k__BackingField;
}


bool __fastcall TerminalPramsManager__IsAutoForTimeProgressEvents(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  TerminalPramsManager_c *v13; // x0
  TerminalPramsManager_c *v14; // x0
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v21; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B13779 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v1, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, v3, v4);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v11, v12);
    byte_4B13779 = 1;
  }
  entity = 0LL;
  v21 = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B12DCF )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B12DCF = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v13 = TerminalPramsManager_TypeInfo;
  }
  if ( !v13->static_fields->_IsAutoResume_k__BackingField )
    return 0;
  if ( !v13->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v13, v1);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B12DC6 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( v14->static_fields->_WarId_k__BackingField < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v16, v17);
    byte_4B12DC6 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_34;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 4LL),
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !entity)
    || !Instance )
  {
LABEL_34:
    sub_1BCAA3C(Instance, v16);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v21,
          (int32_t)entity[6].klass,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)v21;
  if ( !v21 )
    goto LABEL_34;
  return EventDetailEntity__IsTimeProgressEvent((EventDetailEntity_o *)v21, 0LL);
}


bool __fastcall TerminalPramsManager__IsBlankEarthWarByWarId(int32_t targetWarId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BalanceConfig_c *v10; // x0
  void *WarInfoByWarID; // x0
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  int32_t v14; // w1
  __int64 v16; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v17; // 0:x0.8

  if ( (byte_4B137D4 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Nullable_int__GetValueOrDefault__, v4, v5);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v6, v7);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v8, v9);
    byte_4B137D4 = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v10 = BalanceConfig_TypeInfo;
  }
  if ( v10->static_fields->OrdealCallWarId == targetWarId )
  {
    LOBYTE(WarInfoByWarID) = 1;
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v13);
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, targetWarId, 0LL);
    if ( WarInfoByWarID )
    {
      WarInfoByWarID = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)WarInfoByWarID, 0LL);
      if ( WarInfoByWarID )
      {
        v14 = *((_DWORD *)WarInfoByWarID + 31);
        v17 = (System_Nullable_int__o)&v16;
        v16 = 0LL;
        System_Nullable_int____ctor(v17, v14, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
        LOBYTE(WarInfoByWarID) = HIDWORD(v16) != 0;
      }
    }
  }
  return (char)WarInfoByWarID;
}


void __fastcall TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B137A7 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11567/*"SAVEKEY_DataLostBattleAutoReset"*/, v3, v4);
    byte_4B137A7 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B13535 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13535 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11567/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v5->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall TerminalPramsManager__IsFreeQuestOnOrdealCall(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  QuestMaster_o *Master_object; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x19
  int klass_high; // w19
  BalanceConfig_c *v17; // x0
  Il2CppObject *v19; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B137D2 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v10, v11);
    byte_4B137D2 = 1;
  }
  v19 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !entity
    || (v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
        Master_object = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0LL),
        !v15) )
  {
LABEL_20:
    sub_1BCAA3C(Master_object, v13);
  }
  Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v15,
                                     &v19,
                                     (int32_t)Master_object,
                                     (const MethodInfo_31B2E94 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  if ( !v19 )
    goto LABEL_20;
  klass_high = HIDWORD(v19[1].klass);
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13);
    v17 = BalanceConfig_TypeInfo;
  }
  return klass_high == v17->static_fields->OrdealCallWarId;
}


bool __fastcall TerminalPramsManager__IsMainStory(int32_t warId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  BalanceConfig_c *v12; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B137C4 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B137C4 = 1;
  }
  v12 = BalanceConfig_TypeInfo;
  entity = 0LL;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v12 = BalanceConfig_TypeInfo;
  }
  static_fields = v12->static_fields;
  if ( static_fields->FesWarId != warId )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12, method);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    if ( !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
            warId,
            (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___);
        if ( Instance )
        {
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       &entity,
                                       warId,
                                       (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( entity )
            return LODWORD(entity[6].klass) == 0;
        }
      }
      sub_1BCAA3C(Instance, v16);
    }
  }
  return 1;
}


bool __fastcall TerminalPramsManager__IsMainStoryForQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v13; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x19
  int32_t klass_high; // w19
  Il2CppObject *v18; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B137C5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SpotMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    byte_4B137C5 = 1;
  }
  v18 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SpotMaster___),
        !entity)
    || (v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (Il2CppObject *)QuestEntity__getSpotId(entity, 0LL),
        !v14) )
  {
LABEL_16:
    sub_1BCAA3C(Instance, v13);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               v14,
                               &v18,
                               (int32_t)Instance,
                               (const MethodInfo_31B2E94 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !v18 )
    goto LABEL_16;
  klass_high = HIDWORD(v18[1].klass);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
  return TerminalPramsManager__IsMainStory(klass_high, v13);
}


bool __fastcall TerminalPramsManager__IsMustPlayMainStory(int32_t warId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BalanceConfig_c *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B137C3 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    byte_4B137C3 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v8 = BalanceConfig_TypeInfo;
  }
  if ( System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v8->static_fields->NotRequiredPlayWarIds,
         warId,
         (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return 0;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
  return TerminalPramsManager__IsMainStory(warId, v9);
}


bool __fastcall TerminalPramsManager__IsNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalPramsManager_c *v6; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_4B137B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Contains__, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v4, v5);
    byte_4B137B7 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v6->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1BCAA3C(0LL, method);
  return System_Collections_Generic_HashSet_int___Contains(
           loginQuestNotifiedList,
           questId,
           (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B137A0 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11573/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v3, v4);
    byte_4B137A0 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B13393 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13393 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11573/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v5->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B1379F & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11572/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v3, v4);
    byte_4B1379F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B13392 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13392 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11572/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v5->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectNt2AfterAction_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B137A1 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11574/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v3, v4);
    byte_4B137A1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B13531 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13531 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11574/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v5->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_int__object__o *v9; // x0
  __int64 v10; // x8
  char v11; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B137CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, *(_QWORD *)&day, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v5, v6);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v7, v8);
    byte_4B137CE = 1;
  }
  value = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
  if ( !byte_4B13828 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day, method);
    byte_4B13828 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    v9 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  }
  v10 = *(_QWORD *)&v9[2].fields._entries->m_Items[17].fields.hashCode;
  if ( !v10 || (v9 = *(System_Collections_Generic_Dictionary_int__object__o **)(v10 + 16)) == 0LL )
    sub_1BCAA3C(v9, *(_QWORD *)&day);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         v9,
         eventId,
         &value,
         (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v11 = (char)value;
    if ( value )
      v11 = System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)value,
              day,
              (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  else
  {
    v11 = 0;
  }
  return v11 & 1;
}


bool __fastcall TerminalPramsManager__IsTerminalEffectNT2BoardOpen(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  ScrTerminalListTop_c *v7; // x0
  int32_t NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // w19
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  clsQuestCheck_o *v11; // x19
  clsQuestCheck_o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  TerminalPramsManager_c *v15; // x0
  ScrTerminalListTop_c *v16; // x8
  int32_t QuestId_k__BackingField; // w19
  TerminalPramsManager_c *v18; // x0

  if ( (byte_4B137B0 & 1) == 0 )
  {
    sub_1BCA7E0(&ScrTerminalListTop_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v3, v4);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    byte_4B137B0 = 1;
  }
  v7 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v1);
    v7 = ScrTerminalListTop_TypeInfo;
  }
  NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID = v7->static_fields->NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID, v1) )
    return 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v11 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v10);
  if ( !v11 )
    goto LABEL_34;
  if ( !clsQuestCheck__IsQuestClear(
          v11,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0LL) )
    return 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v12 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v10);
  if ( !v12 )
LABEL_34:
    sub_1BCAA3C(Instance, v10);
  if ( !clsQuestCheck__IsWarClear(
          v12,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
          0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v14);
      byte_4B12DC3 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v16 = ScrTerminalListTop_TypeInfo;
    QuestId_k__BackingField = v15->static_fields->_QuestId_k__BackingField;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v13);
      v16 = ScrTerminalListTop_TypeInfo;
    }
    if ( QuestId_k__BackingField == v16->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
      if ( !byte_4B12DCE )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v14);
        byte_4B12DCE = 1;
      }
      v18 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
        v18 = TerminalPramsManager_TypeInfo;
      }
      if ( v18->static_fields->_PhaseCnt_k__BackingField == 2 )
        return 1;
    }
  }
  return 0;
}


bool __fastcall TerminalPramsManager__IsTerminalEffectPlayed(int32_t effectId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  TerminalPramsManager_c *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x19
  TerminalPramsManager_c *v11; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  System_String_c *klass; // x8
  System_String_o *v14; // x20
  unsigned __int64 v15; // x21
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v17 = effectId;
  if ( (byte_4B137AE & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_88/*"\r\n"*/, v5, v6);
    byte_4B137AE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B13811 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13811 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( !v7->static_fields->_PlayedTerminalEffects_k__BackingField )
    goto LABEL_25;
  v10 = System_Int32__ToString((int32_t)&v17, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
  if ( !byte_4B13811 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    byte_4B13811 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
    v11 = TerminalPramsManager_TypeInfo;
  }
  PlayedTerminalEffects_k__BackingField = v11->static_fields->_PlayedTerminalEffects_k__BackingField;
  if ( !PlayedTerminalEffects_k__BackingField
    || (PlayedTerminalEffects_k__BackingField = System_String__Replace_62420848(
                                                  PlayedTerminalEffects_k__BackingField,
                                                  (System_String_o *)StringLiteral_88/*"\r\n"*/,
                                                  (System_String_o *)StringLiteral_43/*"\n"*/,
                                                  0LL)) == 0LL
    || (PlayedTerminalEffects_k__BackingField = (System_String_o *)System_String__Split(
                                                                     PlayedTerminalEffects_k__BackingField,
                                                                     0xAu,
                                                                     0,
                                                                     0LL)) == 0LL )
  {
    sub_1BCAA3C(PlayedTerminalEffects_k__BackingField, v8);
  }
  klass = PlayedTerminalEffects_k__BackingField[1].klass;
  v14 = PlayedTerminalEffects_k__BackingField;
  if ( (int)klass >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)klass )
        sub_1BCAA44(PlayedTerminalEffects_k__BackingField, v8);
      PlayedTerminalEffects_k__BackingField = (System_String_o *)System_String__op_Equality(
                                                                   *((System_String_o **)&v14[1].monitor + v15),
                                                                   v10,
                                                                   0LL);
      if ( ((unsigned __int8)PlayedTerminalEffects_k__BackingField & 1) != 0 )
        break;
      LODWORD(klass) = v14[1].klass;
      ++v15;
    }
    while ( (__int64)v15 < (int)klass );
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  TerminalPramsManager_c *v7; // x0
  System_String_o *mTerminalWarStartedIds; // x0
  System_String_c *klass; // x8
  System_String_o *v10; // x19
  bool v11; // w21
  unsigned __int64 v12; // x22
  System_String_o *v13; // x20
  System_String_o *v14; // x0
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  v16 = war_id;
  if ( (byte_4B137B2 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_88/*"\r\n"*/, v5, v6);
    byte_4B137B2 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v7 = TerminalPramsManager_TypeInfo;
  }
  mTerminalWarStartedIds = v7->static_fields->mTerminalWarStartedIds;
  if ( !mTerminalWarStartedIds
    || (mTerminalWarStartedIds = System_String__Replace_62420848(
                                   mTerminalWarStartedIds,
                                   (System_String_o *)StringLiteral_88/*"\r\n"*/,
                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                   0LL)) == 0LL
    || (mTerminalWarStartedIds = (System_String_o *)System_String__Split(mTerminalWarStartedIds, 0xAu, 0, 0LL)) == 0LL )
  {
    sub_1BCAA3C(mTerminalWarStartedIds, method);
  }
  klass = mTerminalWarStartedIds[1].klass;
  v10 = mTerminalWarStartedIds;
  v11 = (int)klass > 0;
  if ( (int)klass >= 1 )
  {
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)klass )
        sub_1BCAA44(mTerminalWarStartedIds, method);
      v13 = (System_String_o *)*((_QWORD *)&v10[1].monitor + v12);
      v14 = System_Int32__ToString((int32_t)&v16, 0LL);
      mTerminalWarStartedIds = (System_String_o *)System_String__op_Equality(v13, v14, 0LL);
      if ( ((unsigned __int8)mTerminalWarStartedIds & 1) != 0 )
        break;
      LODWORD(klass) = v10[1].klass;
      v11 = (__int64)++v12 < (int)klass;
    }
    while ( (__int64)v12 < (int)klass );
  }
  return v11;
}


void __fastcall TerminalPramsManager__LastPanelEventPointSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B1379E & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_13770/*"TerminalLastPanelEventPoint"*/, v3, v4);
    byte_4B1379E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13770/*"TerminalLastPanelEventPoint"*/, v5->static_fields->panelEventPoint, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayBgmNameSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B1379C & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11569/*"SAVEKEY_LastPlayBgmName"*/, v3, v4);
    byte_4B1379C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11569/*"SAVEKEY_LastPlayBgmName"*/, v5->static_fields->lastPlayBgmName, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B1379D & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11570/*"SAVEKEY_LastPlayQuestConsumeType"*/, v3, v4);
    byte_4B1379D = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11570/*"SAVEKEY_LastPlayQuestConsumeType"*/,
    v5->static_fields->lastPlayQuestConsumeAp,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LoadClearDatas(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  TerminalPramsManager_c *v9; // x0
  TerminalPramsManager_ClearData_c *v10; // x0
  __int64 v11; // x1
  TerminalPramsManager_ClearData_c *v12; // x0
  __int64 v13; // x1
  Il2CppObject *String_70112520; // x19
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppObject *v22; // x19
  TerminalPramsManager_c *v23; // x0
  PartyOrganizationUtility_o *p_mQuestClearHeroineInfo; // x0
  __int64 v25; // x0
  const MethodInfo *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  Il2CppClass *klass; // x8
  const char *name; // x9
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  QuestClearHeroineInfo_o *Load; // x20
  TerminalPramsManager_c *v43; // x0
  PartyOrganizationUtility_o *v44; // x0
  __int64 v45; // x0
  char monitor; // w20
  TerminalPramsManager_c *v47; // x8
  char v48; // w21
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  _QWORD *v50; // x10
  int64_t v51; // x20
  __int64 v52; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  Il2CppClass *v60; // x8
  TerminalPramsManager_c *v61; // x0
  int64_t v62; // x20
  PartyOrganizationUtility_o *p_mQuestPhaseRewardInfos; // x0
  __int64 v64; // x0
  __int64 v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  TerminalPramsManager_c *v72; // x8
  struct TerminalPramsManager_StaticFields *v73; // x9
  _QWORD *v74; // x9
  int64_t v75; // x20
  TerminalPramsManager_c *v76; // x0
  struct TerminalPramsManager_StaticFields *v77; // x0
  __int64 v78; // x0
  __int64 v79; // x1
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  Il2CppClass *v86; // x8
  int64_t v87; // x20
  TerminalPramsManager_c *v88; // x0
  struct TerminalPramsManager_StaticFields *v89; // x0
  __int64 v90; // x0
  __int64 v91; // x1
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int *v98; // x8
  int64_t v99; // x20
  TerminalPramsManager_c *v100; // x0
  PartyOrganizationUtility_o *p_eventPointWinReward_k__BackingField; // x0
  __int64 v102; // x0
  __int64 v103; // x1
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  int32_t v110; // w20
  TerminalPramsManager_c *v111; // x8
  int *v112; // x9
  int64_t v113; // x20
  TerminalPramsManager_c *v114; // x0
  PartyOrganizationUtility_o *p_eventRaceBoost_k__BackingField; // x0
  __int64 v116; // x0
  __int64 v117; // x1
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  Il2CppClass *v124; // x8
  int64_t v125; // x20
  TerminalPramsManager_c *v126; // x0
  PartyOrganizationUtility_o *p_questClearCostumeRelease_k__BackingField; // x0
  __int64 v128; // x0
  __int64 v129; // x1
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  _QWORD *v136; // x8
  int64_t v137; // x20
  TerminalPramsManager_c *v138; // x0
  PartyOrganizationUtility_o *p_questClearCostumeGet_k__BackingField; // x0
  __int64 v140; // x0
  __int64 v141; // x1
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  Il2CppClass *v148; // x8
  int64_t v149; // x20
  TerminalPramsManager_c *v150; // x0
  PartyOrganizationUtility_o *p_eventTowerReward_k__BackingField; // x0
  __int64 v152; // x0
  __int64 v153; // x1
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  _QWORD *v160; // x8
  __int64 v161; // x9
  __int64 v162; // x9
  int64_t v163; // x20
  TerminalPramsManager_c *v164; // x0
  PartyOrganizationUtility_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  __int64 v166; // x0
  __int64 v167; // x1
  int64_t v168; // x2
  int32_t v169; // w3
  System_String_o *v170; // x4
  BattleSetupInfo_o *v171; // x5
  FollowerInfo_o *v172; // x6
  PartyListViewItem_o *v173; // x7
  Il2CppClass *v174; // x8
  int64_t v175; // x20
  TerminalPramsManager_c *v176; // x0
  PartyOrganizationUtility_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  __int64 v178; // x0
  __int64 v179; // x1
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  _QWORD *v186; // x8
  int64_t v187; // x20
  TerminalPramsManager_c *v188; // x0
  PartyOrganizationUtility_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  __int64 v190; // x0
  __int64 v191; // x1
  int64_t v192; // x2
  int32_t v193; // w3
  System_String_o *v194; // x4
  BattleSetupInfo_o *v195; // x5
  FollowerInfo_o *v196; // x6
  PartyListViewItem_o *v197; // x7
  char v198; // w20
  TerminalPramsManager_c *v199; // x8
  _QWORD *v200; // x9
  int64_t v201; // x20
  TerminalPramsManager_c *v202; // x0
  PartyOrganizationUtility_o *p_warClearReward_k__BackingField; // x0
  __int64 v204; // x0
  __int64 v205; // x1
  int64_t v206; // x2
  int32_t v207; // w3
  System_String_o *v208; // x4
  BattleSetupInfo_o *v209; // x5
  FollowerInfo_o *v210; // x6
  PartyListViewItem_o *v211; // x7
  int32_t v212; // w20
  TerminalPramsManager_c *v213; // x8
  char v214; // w21
  struct TerminalPramsManager_StaticFields *v215; // x9
  _QWORD *v216; // x10
  int64_t v217; // x20
  __int64 v218; // x0
  __int64 v219; // x1
  int64_t v220; // x2
  int32_t v221; // w3
  System_String_o *v222; // x4
  BattleSetupInfo_o *v223; // x5
  FollowerInfo_o *v224; // x6
  PartyListViewItem_o *v225; // x7
  Il2CppClass *v226; // x8
  TerminalPramsManager_c *v227; // x0
  int64_t v228; // x20
  PartyOrganizationUtility_o *p_mResultEventPanelRewardInfos; // x0
  __int64 v230; // x1
  int64_t v231; // x2
  int32_t v232; // w3
  System_String_o *v233; // x4
  BattleSetupInfo_o *v234; // x5
  FollowerInfo_o *v235; // x6
  PartyListViewItem_o *v236; // x7
  TerminalPramsManager_c *v237; // x0
  int64_t v238; // x20
  PartyOrganizationUtility_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v240; // x1
  int64_t v241; // x2
  int32_t v242; // w3
  System_String_o *v243; // x4
  BattleSetupInfo_o *v244; // x5
  FollowerInfo_o *v245; // x6
  PartyListViewItem_o *v246; // x7
  char v247; // w20
  TerminalPramsManager_c *v248; // x0
  int32_t monitor_high; // w21
  char v250; // w21
  int64_t v251; // x20
  PartyOrganizationUtility_o *p_OldUserEventPoint_k__BackingField; // x0
  __int64 v253; // x1
  __int64 v254; // x2
  TerminalPramsManager_c *v255; // x0
  TerminalPramsManager_c *v256; // x8
  TerminalPramsManager_c *v257; // x0

  if ( (byte_4B137C8 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_ClearData_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___, v3, v4);
    sub_1BCA7E0(&JsonManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v7, v8);
    byte_4B137C8 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B13385 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13385 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( !v9->static_fields->_isQuestRewardSetted_k__BackingField )
  {
    v10 = TerminalPramsManager_ClearData_TypeInfo;
    if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo, v1);
      v10 = TerminalPramsManager_ClearData_TypeInfo;
    }
    if ( UnityEngine_PlayerPrefs__HasKey(v10->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0LL) )
    {
      v12 = TerminalPramsManager_ClearData_TypeInfo;
      if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo, v11);
        v12 = TerminalPramsManager_ClearData_TypeInfo;
      }
      String_70112520 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70112520(
                                          v12->static_fields->SAVEKEY_CLEAR_REWARD_DISP,
                                          0LL);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v13);
      v22 = JsonManager__Deserialize_object_(
              String_70112520,
              (const MethodInfo_2F79634 *)Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
      v23 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15);
        v23 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestClearHeroineInfo = (PartyOrganizationUtility_o *)&v23->static_fields->mQuestClearHeroineInfo;
      p_mQuestClearHeroineInfo->klass = 0LL;
      sub_1BCA784(p_mQuestClearHeroineInfo, 0LL, v16, v17, v18, v19, v20, v21);
      if ( !v22 )
        sub_1BCAA3C(v25, v26);
      klass = v22[1].klass;
      if ( !klass )
        sub_1BCAA3C(v25, v26);
      name = klass->_1.name;
      if ( name && *((int *)name + 8) >= 1 )
      {
        Load = TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(
                 (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)v22[1].klass,
                 v26);
        v43 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v35);
          v43 = TerminalPramsManager_TypeInfo;
        }
        v44 = (PartyOrganizationUtility_o *)&v43->static_fields->mQuestClearHeroineInfo;
        v44->klass = (PartyOrganizationUtility_c *)Load;
        sub_1BCA784(v44, (int64_t)Load, v36, v37, v38, v39, v40, v41);
      }
      v45 = (__int64)TerminalPramsManager_TypeInfo;
      monitor = (char)v22[2].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26);
      if ( !byte_4B13014 )
      {
        v45 = sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v26, v27);
        byte_4B13014 = 1;
      }
      v47 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26);
        v47 = TerminalPramsManager_TypeInfo;
      }
      v47->static_fields->_IsQuestClear_k__BackingField = monitor;
      v48 = BYTE1(v22[2].monitor);
      if ( !byte_4B13015 )
      {
        v45 = sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v26, v27);
        v47 = TerminalPramsManager_TypeInfo;
        byte_4B13015 = 1;
      }
      if ( !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47, v26);
        v47 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v47->static_fields;
      static_fields->_IsPhaseClear_k__BackingField = v48;
      v50 = v22[1].monitor;
      if ( !v50 )
        sub_1BCAA3C(v45, v26);
      if ( v50[3] )
        v51 = (int64_t)v22[1].monitor;
      else
        v51 = 0LL;
      if ( !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47, v26);
        static_fields = TerminalPramsManager_TypeInfo->static_fields;
      }
      static_fields->mQuestRewardInfos = (struct QuestRewardInfo_array *)v51;
      sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->mQuestRewardInfos, v51, v27, v28, v29, v30, v31, v32);
      v60 = v22[2].klass;
      if ( !v60 )
        sub_1BCAA3C(v52, v53);
      v61 = TerminalPramsManager_TypeInfo;
      if ( v60->_1.namespaze )
        v62 = (int64_t)v22[2].klass;
      else
        v62 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v53);
        v61 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestPhaseRewardInfos = (PartyOrganizationUtility_o *)&v61->static_fields->mQuestPhaseRewardInfos;
      p_mQuestPhaseRewardInfos->klass = (PartyOrganizationUtility_c *)v62;
      sub_1BCA784(p_mQuestPhaseRewardInfos, v62, v54, v55, v56, v57, v58, v59);
      v72 = TerminalPramsManager_TypeInfo;
      v73 = TerminalPramsManager_TypeInfo->static_fields;
      *(_QWORD *)&v73->clearLastBattleRaidId = *(void **)((char *)&v22[2].monitor + 4);
      v73->joinGroupId = HIDWORD(v22[3].klass);
      v74 = v22[3].monitor;
      if ( !v74 )
        sub_1BCAA3C(v64, v65);
      if ( v74[3] )
        v75 = (int64_t)v22[3].monitor;
      else
        v75 = 0LL;
      if ( !v72->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v72, v65);
      if ( !byte_4B1381E )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v65, v66);
        byte_4B1381E = 1;
      }
      v76 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v65);
        v76 = TerminalPramsManager_TypeInfo;
      }
      v77 = v76->static_fields;
      v77->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v75;
      sub_1BCA784((PartyOrganizationUtility_o *)&v77->_oldSuperBoss_k__BackingField, v75, v66, v67, v68, v69, v70, v71);
      v86 = v22[4].klass;
      if ( !v86 )
        sub_1BCAA3C(v78, v79);
      if ( v86->_1.namespaze )
        v87 = (int64_t)v22[4].klass;
      else
        v87 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v79);
      if ( !byte_4B1381F )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v79, v80);
        byte_4B1381F = 1;
      }
      v88 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v79);
        v88 = TerminalPramsManager_TypeInfo;
      }
      v89 = v88->static_fields;
      v89->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v87;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v89->_oldPersonalBoss_k__BackingField,
        v87,
        v80,
        v81,
        v82,
        v83,
        v84,
        v85);
      v98 = (int *)v22[4].monitor;
      if ( !v98 )
        sub_1BCAA3C(v90, v91);
      if ( v98[4] <= 0 )
        v99 = 0LL;
      else
        v99 = (int64_t)v22[4].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v91);
      if ( !byte_4B13818 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v91, v92);
        byte_4B13818 = 1;
      }
      v100 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v91);
        v100 = TerminalPramsManager_TypeInfo;
      }
      p_eventPointWinReward_k__BackingField = (PartyOrganizationUtility_o *)&v100->static_fields->_eventPointWinReward_k__BackingField;
      p_eventPointWinReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v99;
      sub_1BCA784(p_eventPointWinReward_k__BackingField, v99, v92, v93, v94, v95, v96, v97);
      v110 = (int32_t)v22[5].klass;
      if ( !byte_4B13819 )
      {
        v102 = sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v103, v104);
        byte_4B13819 = 1;
      }
      v111 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v103);
        v111 = TerminalPramsManager_TypeInfo;
      }
      v111->static_fields->_eventPointWinType_k__BackingField = v110;
      v112 = (int *)v22[5].monitor;
      if ( !v112 )
        sub_1BCAA3C(v102, v103);
      if ( v112[4] <= 0 )
        v113 = 0LL;
      else
        v113 = (int64_t)v22[5].monitor;
      if ( !v111->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v111, v103);
      if ( !byte_4B1353E )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v103, v104);
        byte_4B1353E = 1;
      }
      v114 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v103);
        v114 = TerminalPramsManager_TypeInfo;
      }
      p_eventRaceBoost_k__BackingField = (PartyOrganizationUtility_o *)&v114->static_fields->_eventRaceBoost_k__BackingField;
      p_eventRaceBoost_k__BackingField->klass = (PartyOrganizationUtility_c *)v113;
      sub_1BCA784(p_eventRaceBoost_k__BackingField, v113, v104, v105, v106, v107, v108, v109);
      v124 = v22[6].klass;
      if ( !v124 )
        sub_1BCAA3C(v116, v117);
      if ( v124->_1.namespaze )
        v125 = (int64_t)v22[6].klass;
      else
        v125 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v117);
      if ( !byte_4B1361D )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v117, v118);
        byte_4B1361D = 1;
      }
      v126 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v117);
        v126 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeRelease_k__BackingField = (PartyOrganizationUtility_o *)&v126->static_fields->_questClearCostumeRelease_k__BackingField;
      p_questClearCostumeRelease_k__BackingField->klass = (PartyOrganizationUtility_c *)v125;
      sub_1BCA784(p_questClearCostumeRelease_k__BackingField, v125, v118, v119, v120, v121, v122, v123);
      v136 = v22[6].monitor;
      if ( !v136 )
        sub_1BCAA3C(v128, v129);
      if ( v136[3] )
        v137 = (int64_t)v22[6].monitor;
      else
        v137 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v129);
      if ( !byte_4B13382 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v129, v130);
        byte_4B13382 = 1;
      }
      v138 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v129);
        v138 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeGet_k__BackingField = (PartyOrganizationUtility_o *)&v138->static_fields->_questClearCostumeGet_k__BackingField;
      p_questClearCostumeGet_k__BackingField->klass = (PartyOrganizationUtility_c *)v137;
      sub_1BCA784(p_questClearCostumeGet_k__BackingField, v137, v130, v131, v132, v133, v134, v135);
      v148 = v22[7].klass;
      if ( !v148 )
        sub_1BCAA3C(v140, v141);
      if ( SLODWORD(v148->_1.name) <= 0 )
        v149 = 0LL;
      else
        v149 = (int64_t)v22[7].klass;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v141);
      if ( !byte_4B1381C )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v141, v142);
        byte_4B1381C = 1;
      }
      v150 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v141);
        v150 = TerminalPramsManager_TypeInfo;
      }
      p_eventTowerReward_k__BackingField = (PartyOrganizationUtility_o *)&v150->static_fields->_eventTowerReward_k__BackingField;
      p_eventTowerReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v149;
      sub_1BCA784(p_eventTowerReward_k__BackingField, v149, v142, v143, v144, v145, v146, v147);
      v160 = v22[7].monitor;
      if ( !v160 )
        sub_1BCAA3C(v152, v153);
      v161 = v160[3];
      if ( v161 )
      {
        if ( !(_DWORD)v161 )
          sub_1BCAA44(v152, v153);
        v162 = v160[4];
        if ( !v162 )
          sub_1BCAA3C(v152, v153);
        if ( *(__int64 *)(v162 + 32) <= 0 )
          v163 = 0LL;
        else
          v163 = (int64_t)v22[7].monitor;
      }
      else
      {
        v163 = 0LL;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v153);
      if ( !byte_4B1381D )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v153, v154);
        byte_4B1381D = 1;
      }
      v164 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v153);
        v164 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventTowerRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v164->static_fields->_resultEventTowerRewardInfo_k__BackingField;
      p_resultEventTowerRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v163;
      sub_1BCA784(p_resultEventTowerRewardInfo_k__BackingField, v163, v154, v155, v156, v157, v158, v159);
      v174 = v22[8].klass;
      if ( !v174 )
        sub_1BCAA3C(v166, v167);
      if ( v174->_1.namespaze )
        v175 = (int64_t)v22[8].klass;
      else
        v175 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v167);
      if ( !byte_4B1337C )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v167, v168);
        byte_4B1337C = 1;
      }
      v176 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v167);
        v176 = TerminalPramsManager_TypeInfo;
      }
      p_resultBoostItemRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v176->static_fields->_resultBoostItemRewardInfo_k__BackingField;
      p_resultBoostItemRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v175;
      sub_1BCA784(p_resultBoostItemRewardInfo_k__BackingField, v175, v168, v169, v170, v171, v172, v173);
      v186 = v22[8].monitor;
      if ( !v186 )
        sub_1BCAA3C(v178, v179);
      if ( v186[3] )
        v187 = (int64_t)v22[8].monitor;
      else
        v187 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v179);
      if ( !byte_4B1337D )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v179, v180);
        byte_4B1337D = 1;
      }
      v188 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v179);
        v188 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventBoardGameTokenRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v188->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
      p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v187;
      sub_1BCA784(p_resultEventBoardGameTokenRewardInfo_k__BackingField, v187, v180, v181, v182, v183, v184, v185);
      v198 = (char)v22[9].klass;
      if ( !byte_4B12057 )
      {
        v190 = sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v191, v192);
        byte_4B12057 = 1;
      }
      v199 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v191);
        v199 = TerminalPramsManager_TypeInfo;
      }
      v199->static_fields->_IsDispOnly_k__BackingField = v198;
      v200 = v22[9].monitor;
      if ( !v200 )
        sub_1BCAA3C(v190, v191);
      if ( v200[3] )
        v201 = (int64_t)v22[9].monitor;
      else
        v201 = 0LL;
      if ( !v199->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v199, v191);
      if ( !byte_4B13387 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v191, v192);
        byte_4B13387 = 1;
      }
      v202 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v191);
        v202 = TerminalPramsManager_TypeInfo;
      }
      p_warClearReward_k__BackingField = (PartyOrganizationUtility_o *)&v202->static_fields->_warClearReward_k__BackingField;
      p_warClearReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v201;
      sub_1BCA784(p_warClearReward_k__BackingField, v201, v192, v193, v194, v195, v196, v197);
      v212 = (int32_t)v22[10].klass;
      if ( !byte_4B11137 )
      {
        v204 = sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v205, v206);
        byte_4B11137 = 1;
      }
      v213 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v205);
        v213 = TerminalPramsManager_TypeInfo;
      }
      v213->static_fields->_EventActivityPointEffectState_k__BackingField = v212;
      v214 = BYTE4(v22[10].klass);
      if ( !byte_4B13384 )
      {
        v204 = sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v205, v206);
        v213 = TerminalPramsManager_TypeInfo;
        byte_4B13384 = 1;
      }
      if ( !v213->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v213, v205);
        v213 = TerminalPramsManager_TypeInfo;
      }
      v215 = v213->static_fields;
      v215->_IsWarBoardClear_k__BackingField = v214;
      v216 = v22[10].monitor;
      if ( !v216 )
        sub_1BCAA3C(v204, v205);
      if ( v216[3] )
        v217 = (int64_t)v22[10].monitor;
      else
        v217 = 0LL;
      if ( !v213->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v213, v205);
        v215 = TerminalPramsManager_TypeInfo->static_fields;
      }
      v215->mQuestResultAfterEventRewardInfos = (struct BattleDropItem_array *)v217;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v215->mQuestResultAfterEventRewardInfos,
        v217,
        v206,
        v207,
        v208,
        v209,
        v210,
        v211);
      v226 = v22[11].klass;
      if ( !v226 )
        sub_1BCAA3C(v218, v219);
      v227 = TerminalPramsManager_TypeInfo;
      if ( v226->_1.namespaze )
        v228 = (int64_t)v22[11].klass;
      else
        v228 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v219);
        v227 = TerminalPramsManager_TypeInfo;
      }
      p_mResultEventPanelRewardInfos = (PartyOrganizationUtility_o *)&v227->static_fields->mResultEventPanelRewardInfos;
      p_mResultEventPanelRewardInfos->klass = (PartyOrganizationUtility_c *)v228;
      sub_1BCA784(p_mResultEventPanelRewardInfos, v228, v220, v221, v222, v223, v224, v225);
      v237 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = (int32_t)v22[11].monitor;
      v238 = (int64_t)v22[12].klass;
      if ( !byte_4B13380 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v230, v231);
        v237 = TerminalPramsManager_TypeInfo;
        byte_4B13380 = 1;
      }
      if ( !v237->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v237, v230);
        v237 = TerminalPramsManager_TypeInfo;
      }
      p_limitImageAnnounces_k__BackingField = (PartyOrganizationUtility_o *)&v237->static_fields->_limitImageAnnounces_k__BackingField;
      p_limitImageAnnounces_k__BackingField->klass = (PartyOrganizationUtility_c *)v238;
      sub_1BCA784(p_limitImageAnnounces_k__BackingField, v238, v231, v232, v233, v234, v235, v236);
      v247 = (char)v22[12].monitor;
      if ( !byte_4B13018 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v240, v241);
        byte_4B13018 = 1;
      }
      v248 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v240);
        v248 = TerminalPramsManager_TypeInfo;
      }
      v248->static_fields->_IsOrdealCallWarClear_k__BackingField = v247;
      monitor_high = HIDWORD(v22[12].monitor);
      if ( !byte_4B13377 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v240, v241);
        v248 = TerminalPramsManager_TypeInfo;
        byte_4B13377 = 1;
      }
      if ( !v248->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v248, v240);
        v248 = TerminalPramsManager_TypeInfo;
      }
      v248->static_fields->_EventMuralId_k__BackingField = monitor_high;
      v250 = (char)v22[13].klass;
      if ( !byte_4B13379 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v240, v241);
        v248 = TerminalPramsManager_TypeInfo;
        byte_4B13379 = 1;
      }
      if ( !v248->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v248, v240);
        v248 = TerminalPramsManager_TypeInfo;
      }
      v248->static_fields->_PlayHappinessCounterEffect_k__BackingField = v250;
      v251 = (int64_t)v22[13].monitor;
      if ( !byte_4B13816 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v240, v241);
        v248 = TerminalPramsManager_TypeInfo;
        byte_4B13816 = 1;
      }
      if ( !v248->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v248, v240);
        v248 = TerminalPramsManager_TypeInfo;
      }
      p_OldUserEventPoint_k__BackingField = (PartyOrganizationUtility_o *)&v248->static_fields->_OldUserEventPoint_k__BackingField;
      p_OldUserEventPoint_k__BackingField->klass = (PartyOrganizationUtility_c *)v251;
      sub_1BCA784(p_OldUserEventPoint_k__BackingField, v251, v241, v242, v243, v244, v245, v246);
      v255 = TerminalPramsManager_TypeInfo;
      if ( BYTE1(v22[2].monitor) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v253);
        if ( !byte_4B11139 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v253, v254);
          byte_4B11139 = 1;
        }
        v255 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v253);
          v255 = TerminalPramsManager_TypeInfo;
        }
        v255->static_fields->_IsAutoResume_k__BackingField = 1;
      }
      if ( !v255->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v255, v253);
      if ( !byte_4B13386 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v253, v254);
        byte_4B13386 = 1;
      }
      v256 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v253);
        v256 = TerminalPramsManager_TypeInfo;
      }
      if ( v256->static_fields->_warClearReward_k__BackingField )
        goto LABEL_261;
      if ( !v256->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v256, v253);
      if ( !byte_4B13383 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v253, v254);
        byte_4B13383 = 1;
      }
      v256 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v253);
        v256 = TerminalPramsManager_TypeInfo;
      }
      if ( v256->static_fields->_IsPlayScriptWithMap_k__BackingField )
      {
LABEL_261:
        if ( !v256->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v256, v253);
        if ( !byte_4B13826 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v253, v254);
          byte_4B13826 = 1;
        }
        v257 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v253);
          v257 = TerminalPramsManager_TypeInfo;
        }
        v257->static_fields->_isQuestRewardSetted_k__BackingField = 1;
      }
    }
  }
}


void __fastcall TerminalPramsManager__LoadEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  TerminalPramsManager_c *v9; // x0
  System_String_o *String; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  EventRaidDefeatedEffectInfo_o *v14; // x19
  const MethodInfo *v15; // x2
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  TerminalPramsManager_c *v23; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4B137CB & 1) == 0 )
  {
    sub_1BCA7E0(&EventRaidDefeatedEffectInfo_TypeInfo, v1, v2);
    sub_1BCA7E0(&string_TypeInfo, v3, v4);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_11568/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v7, v8);
    byte_4B137CB = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B13828 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13828 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( !v9->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_11568/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v14 = (EventRaidDefeatedEffectInfo_o *)sub_1BCAA2C(EventRaidDefeatedEffectInfo_TypeInfo, v11, v12, v13);
    EventRaidDefeatedEffectInfo___ctor(v14, String, v15);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
    if ( !byte_4B13827 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v16, v17);
      byte_4B13827 = 1;
    }
    v23 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
      v23 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v23->static_fields;
    static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = v14;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
      (int64_t)v14,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
}


void __fastcall TerminalPramsManager__LoadQuestRandomGroupList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  TerminalPramsManager_c *v13; // x0
  System_String_o *String; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Collections_Generic_Dictionary_int__int__o *v18; // x19
  System_String_array *v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int max_length; // w8
  System_String_array *v28; // x20
  unsigned int v29; // w23
  System_String_array *v30; // x21
  TerminalPramsManager_c *v31; // x0
  PartyOrganizationUtility_o *p_QuestRandomGroupList_k__BackingField; // x0
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B137D0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v3, v4);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&string_TypeInfo, v7, v8);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_11577/*"SAVEKEY_QuestRandomGroupList"*/, v11, v12);
    byte_4B137D0 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B12DC2 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B12DC2 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v13 = TerminalPramsManager_TypeInfo;
  }
  if ( !v13->static_fields->_QuestRandomGroupList_k__BackingField )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_11577/*"SAVEKEY_QuestRandomGroupList"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v18 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v15,
                                                                 v16,
                                                                 v17);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v18,
      (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *(_QWORD *)result = 0LL;
    if ( !String )
      goto LABEL_35;
    v19 = System_String__Split(String, 0x2Cu, 0, 0LL);
    if ( !v19 )
      goto LABEL_35;
    max_length = v19->max_length;
    v28 = v19;
    if ( max_length >= 1 )
    {
      v29 = 0;
      while ( 1 )
      {
        if ( v29 >= max_length )
LABEL_36:
          sub_1BCAA44(v19, v20);
        v19 = (System_String_array *)v28->m_Items[v29];
        if ( !v19 )
          break;
        v19 = System_String__Split((System_String_o *)v19, 0x3Au, 0, 0LL);
        if ( !v19 )
          break;
        v30 = v19;
        if ( (int)v19->max_length >= 2 )
        {
          v19 = (System_String_array *)System_Int32__TryParse(v19->m_Items[0], &result[1], 0LL);
          if ( result[1] >= 1 && ((unsigned __int8)v19 & 1) != 0 )
          {
            if ( v30->max_length <= 1 )
              goto LABEL_36;
            v19 = (System_String_array *)System_Int32__TryParse(v30->m_Items[1], result, 0LL);
            v21 = (unsigned int)result[0];
            if ( result[0] >= 1 && ((unsigned __int8)v19 & 1) != 0 )
            {
              if ( !v18 )
                break;
              System_Collections_Generic_Dictionary_int__int___Add(
                v18,
                result[1],
                result[0],
                (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
        }
        max_length = v28->max_length;
        if ( (int)++v29 >= max_length )
          goto LABEL_27;
      }
LABEL_35:
      sub_1BCAA3C(v19, v20);
    }
LABEL_27:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
    if ( !byte_4B13829 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v20, v21);
      byte_4B13829 = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
      v31 = TerminalPramsManager_TypeInfo;
    }
    p_QuestRandomGroupList_k__BackingField = (PartyOrganizationUtility_o *)&v31->static_fields->_QuestRandomGroupList_k__BackingField;
    p_QuestRandomGroupList_k__BackingField->klass = (PartyOrganizationUtility_c *)v18;
    sub_1BCA784(p_QuestRandomGroupList_k__BackingField, (int64_t)v18, v21, v22, v23, v24, v25, v26);
  }
}


void __fastcall TerminalPramsManager__LoadQuestReleasedFocusState(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x0

  if ( (byte_4B137B9 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B137B9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v3);
  if ( !QuestFocusStateManager
    || (QuestFocusStateManager__ClearQuestFocusStateDataList(QuestFocusStateManager, 0LL),
        (QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager(v6)) == 0LL) )
  {
    sub_1BCAA3C(QuestFocusStateManager, v5);
  }
  QuestFocusStateManager__ReadData(QuestFocusStateManager, 0LL);
}


void __fastcall TerminalPramsManager__Load_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
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
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  System_String_o *v103; // x19
  __int64 v104; // x1
  __int64 v105; // x2
  int32_t Int_70111952; // w19
  TerminalPramsManager_c *v107; // x0
  System_String_o *v108; // x19
  __int64 v109; // x1
  __int64 v110; // x2
  int32_t v111; // w19
  TerminalPramsManager_c *v112; // x0
  System_String_o *v113; // x19
  __int64 v114; // x1
  __int64 v115; // x2
  int32_t v116; // w19
  TerminalPramsManager_c *v117; // x0
  System_String_o *v118; // x19
  __int64 v119; // x1
  __int64 v120; // x2
  int32_t v121; // w19
  TerminalPramsManager_c *v122; // x0
  System_String_o *v123; // x19
  __int64 v124; // x1
  __int64 v125; // x2
  int32_t v126; // w19
  TerminalPramsManager_c *v127; // x0
  System_String_o *v128; // x19
  __int64 v129; // x1
  __int64 v130; // x2
  int32_t v131; // w19
  TerminalPramsManager_c *v132; // x0
  System_String_o *v133; // x19
  System_String_o *String_70112520; // x20
  __int64 v135; // x1
  __int64 v136; // x2
  int64_t v137; // x19
  TerminalPramsManager_c *v138; // x0
  System_String_o *v139; // x19
  __int64 v140; // x1
  __int64 v141; // x2
  int32_t v142; // w19
  TerminalPramsManager_c *v143; // x0
  System_String_o *v144; // x19
  __int64 v145; // x1
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  System_String_o *v152; // x19
  TerminalPramsManager_c *v153; // x8
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_o *v155; // x19
  __int64 v156; // x1
  __int64 v157; // x2
  int32_t v158; // w19
  TerminalPramsManager_c *v159; // x0
  System_String_o *v160; // x19
  __int64 v161; // x1
  __int64 v162; // x2
  int32_t v163; // w19
  TerminalPramsManager_c *v164; // x0
  System_String_o *v165; // x19
  __int64 v166; // x1
  __int64 v167; // x2
  int32_t v168; // w19
  TerminalPramsManager_c *v169; // x0
  System_String_o *v170; // x19
  __int64 v171; // x1
  __int64 v172; // x2
  int32_t v173; // w19
  TerminalPramsManager_c *v174; // x0
  System_String_o *v175; // x19
  __int64 v176; // x1
  __int64 v177; // x2
  int32_t v178; // w19
  TerminalPramsManager_c *v179; // x0
  System_String_o *v180; // x19
  __int64 v181; // x1
  __int64 v182; // x2
  int32_t v183; // w19
  TerminalPramsManager_c *v184; // x0
  System_String_o *v185; // x19
  System_String_o *v186; // x20
  __int64 v187; // x1
  __int64 v188; // x2
  int64_t v189; // x19
  TerminalPramsManager_c *v190; // x0
  System_String_o *v191; // x19
  __int64 v192; // x1
  __int64 v193; // x2
  int32_t v194; // w19
  TerminalPramsManager_c *v195; // x0
  System_String_o *v196; // x19
  __int64 v197; // x1
  __int64 v198; // x2
  int32_t v199; // w19
  TerminalPramsManager_c *v200; // x0
  System_String_o *v201; // x19
  __int64 v202; // x1
  Il2CppObject *v203; // x19
  __int64 v204; // x1
  int64_t v205; // x2
  int32_t v206; // w3
  System_String_o *v207; // x4
  BattleSetupInfo_o *v208; // x5
  FollowerInfo_o *v209; // x6
  PartyListViewItem_o *v210; // x7
  Il2CppObject *v211; // x19
  TerminalPramsManager_c *v212; // x0
  PartyOrganizationUtility_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  System_String_o *v214; // x19
  __int64 v215; // x1
  const MethodInfo *v216; // x2
  int32_t v217; // w20
  TerminalPramsManager_c *v218; // x0
  int32_t WarId_k__BackingField; // w20
  System_String_o *v220; // x19
  __int64 v221; // x1
  Il2CppObject *v222; // x19
  __int64 v223; // x1
  int64_t v224; // x2
  int32_t v225; // w3
  System_String_o *v226; // x4
  BattleSetupInfo_o *v227; // x5
  FollowerInfo_o *v228; // x6
  PartyListViewItem_o *v229; // x7
  Il2CppObject *v230; // x19
  TerminalPramsManager_c *v231; // x8
  PartyOrganizationUtility_o *p_eventConquestInfos; // x0
  System_String_o *v233; // x19
  __int64 v234; // x1
  int32_t v235; // w19
  TerminalPramsManager_c *v236; // x8
  System_String_o *v237; // x19
  __int64 v238; // x1
  int32_t v239; // w19
  TerminalPramsManager_c *v240; // x8
  System_String_o *v241; // x19
  __int64 v242; // x1
  Il2CppObject *v243; // x19
  __int64 v244; // x1
  int64_t v245; // x2
  int32_t v246; // w3
  System_String_o *v247; // x4
  BattleSetupInfo_o *v248; // x5
  FollowerInfo_o *v249; // x6
  PartyListViewItem_o *v250; // x7
  Il2CppObject *v251; // x19
  TerminalPramsManager_c *v252; // x8
  PartyOrganizationUtility_o *p_eventHarvestGrowthInfo; // x0
  System_String_o *v254; // x19
  __int64 v255; // x1
  int64_t v256; // x2
  int32_t v257; // w3
  System_String_o *v258; // x4
  BattleSetupInfo_o *v259; // x5
  FollowerInfo_o *v260; // x6
  PartyListViewItem_o *v261; // x7
  System_String_o *v262; // x19
  TerminalPramsManager_c *v263; // x8
  PartyOrganizationUtility_o *p_lastPlayBgmName; // x0
  System_String_o *v265; // x19
  __int64 v266; // x1
  int32_t v267; // w19
  TerminalPramsManager_c *v268; // x8
  System_String_o *v269; // x19
  __int64 v270; // x1
  __int64 v271; // x2
  int32_t v272; // w19
  TerminalPramsManager_c *v273; // x0
  System_String_o *v274; // x19
  __int64 v275; // x1
  int32_t v276; // w19
  TerminalPramsManager_c *v277; // x8
  System_String_o *v278; // x19
  __int64 v279; // x1
  int64_t v280; // x2
  int32_t v281; // w3
  System_String_o *v282; // x4
  BattleSetupInfo_o *v283; // x5
  FollowerInfo_o *v284; // x6
  PartyListViewItem_o *v285; // x7
  System_String_o *v286; // x19
  TerminalPramsManager_c *v287; // x0
  PartyOrganizationUtility_o *p_PlayedTerminalEffects_k__BackingField; // x0
  System_String_o *v289; // x19
  __int64 v290; // x1
  __int64 v291; // x2
  int32_t v292; // w19
  TerminalPramsManager_c *v293; // x0
  System_String_o *v294; // x19
  __int64 v295; // x1
  __int64 v296; // x2
  int32_t v297; // w19
  TerminalPramsManager_c *v298; // x0
  System_String_o *v299; // x19
  __int64 v300; // x1
  __int64 v301; // x2
  int32_t v302; // w19
  TerminalPramsManager_c *v303; // x0
  System_String_o *v304; // x19
  __int64 v305; // x1
  __int64 v306; // x2
  int32_t v307; // w19
  TerminalPramsManager_c *v308; // x0
  System_String_o *v309; // x19
  __int64 v310; // x1
  int32_t v311; // w19
  TerminalPramsManager_c *v312; // x8
  System_String_o *v313; // x19
  __int64 v314; // x1
  int32_t v315; // w19
  TerminalPramsManager_c *v316; // x8
  System_String_o *v317; // x19
  __int64 v318; // x1
  __int64 v319; // x2
  int32_t v320; // w19
  TerminalPramsManager_c *v321; // x0
  System_String_o *v322; // x19
  __int64 v323; // x1
  int64_t v324; // x2
  int32_t v325; // w3
  System_String_o *v326; // x4
  BattleSetupInfo_o *v327; // x5
  FollowerInfo_o *v328; // x6
  PartyListViewItem_o *v329; // x7
  System_String_o *v330; // x19
  TerminalPramsManager_c *v331; // x0
  PartyOrganizationUtility_o *p_ClearEventQuestIds_k__BackingField; // x0
  System_String_o *v333; // x19
  System_String_o *v334; // x19
  System_String_array *IsNullOrEmpty; // x0
  __int64 v336; // x1
  __int64 v337; // x2
  __int64 v338; // x8
  System_String_array *v339; // x19
  int32_t v340; // w20
  TerminalPramsManager_c *v341; // x8
  int32_t v342; // w0
  int32_t v343; // w19
  TerminalPramsManager_c *v344; // x0
  System_String_o *v345; // x19
  __int64 v346; // x1
  __int64 v347; // x2
  int32_t v348; // w19
  TerminalPramsManager_c *v349; // x0
  System_String_o *v350; // x19
  __int64 v351; // x1
  __int64 v352; // x2
  int32_t v353; // w19
  TerminalPramsManager_c *v354; // x0
  System_String_o *v355; // x19
  __int64 v356; // x1
  Il2CppObject *v357; // x19
  __int64 v358; // x1
  int64_t v359; // x2
  int32_t v360; // w3
  System_String_o *v361; // x4
  BattleSetupInfo_o *v362; // x5
  FollowerInfo_o *v363; // x6
  PartyListViewItem_o *v364; // x7
  Il2CppObject *v365; // x19
  TerminalPramsManager_c *v366; // x0
  struct TerminalPramsManager_StaticFields *v367; // x0
  System_String_o *v368; // x19
  __int64 v369; // x1
  __int64 v370; // x2
  int32_t v371; // w19
  TerminalPramsManager_c *v372; // x0
  System_String_o *v373; // x19
  __int64 v374; // x1
  __int64 v375; // x2
  int32_t v376; // w19
  TerminalPramsManager_c *v377; // x0

  if ( (byte_4B1378B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____, v3, v4);
    sub_1BCA7E0(&Method_JsonManager_Deserialize_EventConquestInfo_____, v5, v6);
    sub_1BCA7E0(&Method_JsonManager_Deserialize_EventHarvestGrowthInfo___, v7, v8);
    sub_1BCA7E0(&Method_JsonManager_Deserialize_EventSaveData___, v9, v10);
    sub_1BCA7E0(&JsonManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_11569/*"SAVEKEY_LastPlayBgmName"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_13767/*"TerminalEndTime"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11575/*"SAVEKEY_PlayedTerminalEffects"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_13763/*"TerminalBeforeEventActivityPoint"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_11563/*"SAVEKEY_CampaignDirectBonus"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_11570/*"SAVEKEY_LastPlayQuestConsumeType"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_11582/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_11580/*"SAVEKEY_TerminalCraftInfoDisp"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_13768/*"TerminalEventDailyPointEventId"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_13765/*"TerminalBeforeEventSubmarinePointData"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_13774/*"TerminalPhaseCnt"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_11579/*"SAVEKEY_TerminalConquestInfos"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_13782/*"TerminalTimeStatusEventId"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_13766/*"TerminalDispState"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_11572/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_13769/*"TerminalIsDoneShortcut"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_11571/*"SAVEKEY_MapModelClearQuestInfo"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_11576/*"SAVEKEY_PlayerGenderType"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_11561/*"SAVEKEY_BlankEarthRank"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_13770/*"TerminalLastPanelEventPoint"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_11581/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_11564/*"SAVEKEY_ClearEventQuestIds"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_11573/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_5293/*"Debug_IsQuestReleaseAll"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_5290/*"Debug_IsDummyErrorSelect"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_13777/*"TerminalQuestId"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_11578/*"SAVEKEY_TerminalConquestInfoDisp"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_11584/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_13781/*"TerminalTimeStatusEventDailyPoint"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_13786/*"TerminalWarId"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_13779/*"TerminalSpotId"*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_13783/*"TerminalTimeStatusLoopCount"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_13764/*"TerminalBeforeEventActivityPointGauge"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_11562/*"SAVEKEY_BlankEarthSpotId"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_11567/*"SAVEKEY_DataLostBattleAutoReset"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_13787/*"TerminalWarStartedIds"*/, v85, v86);
    sub_1BCA7E0(&StringLiteral_11566/*"SAVEKEY_ConnectMarkEventId"*/, v87, v88);
    sub_1BCA7E0(&StringLiteral_13771/*"TerminalLastPlayedFreeQuestSpotId"*/, v89, v90);
    sub_1BCA7E0(&StringLiteral_11565/*"SAVEKEY_ConnectMarkAnimationId"*/, v91, v92);
    sub_1BCA7E0(&StringLiteral_11574/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v93, v94);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v95, v96);
    sub_1BCA7E0(&StringLiteral_13772/*"TerminalLastPlayedQuestId"*/, v97, v98);
    sub_1BCA7E0(&StringLiteral_5289/*"Debug_IsBuildInfoDisp"*/, v99, v100);
    sub_1BCA7E0(&StringLiteral_11583/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v101, v102);
    byte_4B1378B = 1;
  }
  v103 = (System_String_o *)StringLiteral_13766/*"TerminalDispState"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13766/*"TerminalDispState"*/, 0LL) )
  {
    Int_70111952 = UnityEngine_PlayerPrefs__GetInt_70111952(v103, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v104);
    if ( !byte_4B12DC9 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v104, v105);
      byte_4B12DC9 = 1;
    }
    v107 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v104);
      v107 = TerminalPramsManager_TypeInfo;
    }
    v107->static_fields->_DispState_k__BackingField = Int_70111952;
  }
  v108 = (System_String_o *)StringLiteral_13786/*"TerminalWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13786/*"TerminalWarId"*/, 0LL) )
  {
    v111 = UnityEngine_PlayerPrefs__GetInt_70111952(v108, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v109);
    if ( !byte_4B12DCD )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v109, v110);
      byte_4B12DCD = 1;
    }
    v112 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v109);
      v112 = TerminalPramsManager_TypeInfo;
    }
    v112->static_fields->_WarId_k__BackingField = v111;
  }
  v113 = (System_String_o *)StringLiteral_13779/*"TerminalSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13779/*"TerminalSpotId"*/, 0LL) )
  {
    v116 = UnityEngine_PlayerPrefs__GetInt_70111952(v113, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v114);
    if ( !byte_4B12DCC )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v114, v115);
      byte_4B12DCC = 1;
    }
    v117 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v114);
      v117 = TerminalPramsManager_TypeInfo;
    }
    v117->static_fields->_SpotId_k__BackingField = v116;
  }
  v118 = (System_String_o *)StringLiteral_13777/*"TerminalQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13777/*"TerminalQuestId"*/, 0LL) )
  {
    v121 = UnityEngine_PlayerPrefs__GetInt_70111952(v118, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v119);
    if ( !byte_4B12DC7 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v119, v120);
      byte_4B12DC7 = 1;
    }
    v122 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v119);
      v122 = TerminalPramsManager_TypeInfo;
    }
    v122->static_fields->_QuestId_k__BackingField = v121;
  }
  v123 = (System_String_o *)StringLiteral_13772/*"TerminalLastPlayedQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13772/*"TerminalLastPlayedQuestId"*/, 0LL) )
  {
    v126 = UnityEngine_PlayerPrefs__GetInt_70111952(v123, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v124);
    if ( !byte_4B13022 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v124, v125);
      byte_4B13022 = 1;
    }
    v127 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v124);
      v127 = TerminalPramsManager_TypeInfo;
    }
    v127->static_fields->_LastPlayedQuestId_k__BackingField = v126;
  }
  v128 = (System_String_o *)StringLiteral_13774/*"TerminalPhaseCnt"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13774/*"TerminalPhaseCnt"*/, 0LL) )
  {
    v131 = UnityEngine_PlayerPrefs__GetInt_70111952(v128, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v129);
    if ( !byte_4B12DCB )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v129, v130);
      byte_4B12DCB = 1;
    }
    v132 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v129);
      v132 = TerminalPramsManager_TypeInfo;
    }
    v132->static_fields->_PhaseCnt_k__BackingField = v131;
  }
  v133 = (System_String_o *)StringLiteral_13767/*"TerminalEndTime"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13767/*"TerminalEndTime"*/, 0LL) )
  {
    String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520(v133, 0LL);
    v137 = 0LL;
    if ( System_String__op_Inequality(String_70112520, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v135);
      v137 = System_Convert__ToInt64_63060508(String_70112520, 0LL);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v135);
    if ( !byte_4B12DC8 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v135, v136);
      byte_4B12DC8 = 1;
    }
    v138 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v135);
      v138 = TerminalPramsManager_TypeInfo;
    }
    v138->static_fields->_EndTime_k__BackingField = v137;
  }
  v139 = (System_String_o *)StringLiteral_13769/*"TerminalIsDoneShortcut"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13769/*"TerminalIsDoneShortcut"*/, 0LL) )
  {
    v142 = UnityEngine_PlayerPrefs__GetInt_70111952(v139, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v140);
    if ( !byte_4B12DCA )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v140, v141);
      byte_4B12DCA = 1;
    }
    v143 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v140);
      v143 = TerminalPramsManager_TypeInfo;
    }
    v143->static_fields->_IsDoneShortcut_k__BackingField = v142 != 0;
  }
  v144 = (System_String_o *)StringLiteral_13787/*"TerminalWarStartedIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13787/*"TerminalWarStartedIds"*/, 0LL) )
  {
    v152 = UnityEngine_PlayerPrefs__GetString_70112520(v144, 0LL);
    v153 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v145);
      v153 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v153->static_fields;
    static_fields->mTerminalWarStartedIds = v152;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->mTerminalWarStartedIds,
      (int64_t)v152,
      v146,
      v147,
      v148,
      v149,
      v150,
      v151);
  }
  v155 = (System_String_o *)StringLiteral_5293/*"Debug_IsQuestReleaseAll"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5293/*"Debug_IsQuestReleaseAll"*/, 0LL) )
  {
    v158 = UnityEngine_PlayerPrefs__GetInt_70111952(v155, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v156);
    if ( !byte_4B137F9 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v156, v157);
      byte_4B137F9 = 1;
    }
    v159 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v156);
      v159 = TerminalPramsManager_TypeInfo;
    }
    v159->static_fields->mDebug_IsQuestReleaseAll = v158 != 0;
  }
  v160 = (System_String_o *)StringLiteral_5290/*"Debug_IsDummyErrorSelect"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5290/*"Debug_IsDummyErrorSelect"*/, 0LL) )
  {
    v163 = UnityEngine_PlayerPrefs__GetInt_70111952(v160, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v161);
    if ( !byte_4B137FA )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v161, v162);
      byte_4B137FA = 1;
    }
    v164 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v161);
      v164 = TerminalPramsManager_TypeInfo;
    }
    v164->static_fields->mDebug_IsDummyErrorSelect = v163 != 0;
  }
  v165 = (System_String_o *)StringLiteral_5289/*"Debug_IsBuildInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5289/*"Debug_IsBuildInfoDisp"*/, 0LL) )
  {
    v168 = UnityEngine_PlayerPrefs__GetInt_70111952(v165, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v166);
    if ( !byte_4B137FB )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v166, v167);
      byte_4B137FB = 1;
    }
    v169 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v166);
      v169 = TerminalPramsManager_TypeInfo;
    }
    v169->static_fields->mDebug_IsBuildInfoDisp = v168 != 0;
  }
  v170 = (System_String_o *)StringLiteral_13782/*"TerminalTimeStatusEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13782/*"TerminalTimeStatusEventId"*/, 0LL) )
  {
    v173 = UnityEngine_PlayerPrefs__GetInt_70111952(v170, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v171);
    if ( !byte_4B133A1 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v171, v172);
      byte_4B133A1 = 1;
    }
    v174 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v171);
      v174 = TerminalPramsManager_TypeInfo;
    }
    v174->static_fields->_TimeStatusEventId_k__BackingField = v173;
  }
  v175 = (System_String_o *)StringLiteral_13783/*"TerminalTimeStatusLoopCount"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13783/*"TerminalTimeStatusLoopCount"*/, 0LL) )
  {
    v178 = UnityEngine_PlayerPrefs__GetInt_70111952(v175, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v176);
    if ( !byte_4B133A2 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v176, v177);
      byte_4B133A2 = 1;
    }
    v179 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v176);
      v179 = TerminalPramsManager_TypeInfo;
    }
    v179->static_fields->_TimeStatusLoopCount_k__BackingField = v178;
  }
  v180 = (System_String_o *)StringLiteral_13768/*"TerminalEventDailyPointEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13768/*"TerminalEventDailyPointEventId"*/, 0LL) )
  {
    v183 = UnityEngine_PlayerPrefs__GetInt_70111952(v180, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v181);
    if ( !byte_4B137FD )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v181, v182);
      byte_4B137FD = 1;
    }
    v184 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v181);
      v184 = TerminalPramsManager_TypeInfo;
    }
    v184->static_fields->_EventDailyPointEventId_k__BackingField = v183;
  }
  v185 = (System_String_o *)StringLiteral_13781/*"TerminalTimeStatusEventDailyPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13781/*"TerminalTimeStatusEventDailyPoint"*/, 0LL) )
  {
    v186 = UnityEngine_PlayerPrefs__GetString_70112520(v185, 0LL);
    v189 = 0LL;
    if ( !System_String__op_Equality(v186, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v187);
      v189 = System_Convert__ToInt64_63060508(v186, 0LL);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v187);
    if ( !byte_4B137FE )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v187, v188);
      byte_4B137FE = 1;
    }
    v190 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v187);
      v190 = TerminalPramsManager_TypeInfo;
    }
    v190->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = v189;
  }
  v191 = (System_String_o *)StringLiteral_13763/*"TerminalBeforeEventActivityPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13763/*"TerminalBeforeEventActivityPoint"*/, 0LL) )
  {
    v194 = UnityEngine_PlayerPrefs__GetInt_70111952(v191, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v192);
    if ( !byte_4B137FF )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v192, v193);
      byte_4B137FF = 1;
    }
    v195 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v192);
      v195 = TerminalPramsManager_TypeInfo;
    }
    v195->static_fields->_BeforeEventActivityPoint_k__BackingField = v194;
  }
  v196 = (System_String_o *)StringLiteral_13764/*"TerminalBeforeEventActivityPointGauge"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13764/*"TerminalBeforeEventActivityPointGauge"*/, 0LL) )
  {
    v199 = UnityEngine_PlayerPrefs__GetInt_70111952(v196, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v197);
    if ( !byte_4B13800 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v197, v198);
      byte_4B13800 = 1;
    }
    v200 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v197);
      v200 = TerminalPramsManager_TypeInfo;
    }
    v200->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v199;
  }
  v201 = (System_String_o *)StringLiteral_13765/*"TerminalBeforeEventSubmarinePointData"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13765/*"TerminalBeforeEventSubmarinePointData"*/, 0LL) )
  {
    v203 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70112520(v201, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v202);
    v211 = JsonManager__Deserialize_object_(
             v203,
             (const MethodInfo_2F79634 *)Method_JsonManager_Deserialize_EventSaveData___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v204);
    if ( !byte_4B12EBC )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v204, v205);
      byte_4B12EBC = 1;
    }
    v212 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v204);
      v212 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v212->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (PartyOrganizationUtility_c *)v211;
    sub_1BCA784(p_BeforeEventSubmarineSaveData_k__BackingField, (int64_t)v211, v205, v206, v207, v208, v209, v210);
  }
  v214 = (System_String_o *)StringLiteral_11582/*"SAVEKEY_TerminalLastSelectQuestIndex"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11582/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, 0LL) )
  {
    v217 = UnityEngine_PlayerPrefs__GetInt_70111952(v214, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v215);
    if ( !byte_4B137F8 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v215, v216);
      byte_4B137F8 = 1;
    }
    v218 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v215);
      v218 = TerminalPramsManager_TypeInfo;
    }
    v218->static_fields->_LastSelectQuestIndex_k__BackingField = v217;
    if ( !byte_4B12DC6 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v215, v216);
      v218 = TerminalPramsManager_TypeInfo;
      byte_4B12DC6 = 1;
    }
    if ( !v218->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v218, v215);
      v218 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v218->static_fields->_WarId_k__BackingField;
    if ( !byte_4B1380B )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v215, v216);
      v218 = TerminalPramsManager_TypeInfo;
      byte_4B1380B = 1;
    }
    if ( !v218->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v218, v215);
      v218 = TerminalPramsManager_TypeInfo;
    }
    TerminalPramsManager__SetFolderLastClickedIdx(
      WarId_k__BackingField,
      v218->static_fields->_LastSelectQuestIndex_k__BackingField,
      v216);
  }
  v220 = (System_String_o *)StringLiteral_11579/*"SAVEKEY_TerminalConquestInfos"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11579/*"SAVEKEY_TerminalConquestInfos"*/, 0LL) )
  {
    v222 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70112520(v220, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v221);
    v230 = JsonManager__Deserialize_object_(
             v222,
             (const MethodInfo_2F79634 *)Method_JsonManager_Deserialize_EventConquestInfo_____);
    v231 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v223);
      v231 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = (PartyOrganizationUtility_o *)&v231->static_fields->eventConquestInfos;
    p_eventConquestInfos->klass = (PartyOrganizationUtility_c *)v230;
    sub_1BCA784(p_eventConquestInfos, (int64_t)v230, v224, v225, v226, v227, v228, v229);
  }
  v233 = (System_String_o *)StringLiteral_11578/*"SAVEKEY_TerminalConquestInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11578/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL) )
  {
    v235 = UnityEngine_PlayerPrefs__GetInt_70111952(v233, 0LL);
    v236 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v234);
      v236 = TerminalPramsManager_TypeInfo;
    }
    v236->static_fields->eventConquestInfoDisp = v235 != 0;
  }
  v237 = (System_String_o *)StringLiteral_11580/*"SAVEKEY_TerminalCraftInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11580/*"SAVEKEY_TerminalCraftInfoDisp"*/, 0LL) )
  {
    v239 = UnityEngine_PlayerPrefs__GetInt_70111952(v237, 0LL);
    v240 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v238);
      v240 = TerminalPramsManager_TypeInfo;
    }
    v240->static_fields->eventCraftInfoDisp = v239 != 0;
  }
  v241 = (System_String_o *)StringLiteral_11581/*"SAVEKEY_TerminalHarvestGrowthInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11581/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL) )
  {
    v243 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70112520(v241, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v242);
    v251 = JsonManager__Deserialize_object_(
             v243,
             (const MethodInfo_2F79634 *)Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    v252 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v244);
      v252 = TerminalPramsManager_TypeInfo;
    }
    p_eventHarvestGrowthInfo = (PartyOrganizationUtility_o *)&v252->static_fields->eventHarvestGrowthInfo;
    p_eventHarvestGrowthInfo->klass = (PartyOrganizationUtility_c *)v251;
    sub_1BCA784(p_eventHarvestGrowthInfo, (int64_t)v251, v245, v246, v247, v248, v249, v250);
  }
  v254 = (System_String_o *)StringLiteral_11569/*"SAVEKEY_LastPlayBgmName"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11569/*"SAVEKEY_LastPlayBgmName"*/, 0LL) )
  {
    v262 = UnityEngine_PlayerPrefs__GetString_70112520(v254, 0LL);
    v263 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v255);
      v263 = TerminalPramsManager_TypeInfo;
    }
    p_lastPlayBgmName = (PartyOrganizationUtility_o *)&v263->static_fields->lastPlayBgmName;
    p_lastPlayBgmName->klass = (PartyOrganizationUtility_c *)v262;
    sub_1BCA784(p_lastPlayBgmName, (int64_t)v262, v256, v257, v258, v259, v260, v261);
  }
  v265 = (System_String_o *)StringLiteral_11570/*"SAVEKEY_LastPlayQuestConsumeType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11570/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL) )
  {
    v267 = UnityEngine_PlayerPrefs__GetInt_70111952(v265, 0LL);
    v268 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v266);
      v268 = TerminalPramsManager_TypeInfo;
    }
    v268->static_fields->lastPlayQuestConsumeAp = v267;
  }
  v269 = (System_String_o *)StringLiteral_13771/*"TerminalLastPlayedFreeQuestSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13771/*"TerminalLastPlayedFreeQuestSpotId"*/, 0LL) )
  {
    v272 = UnityEngine_PlayerPrefs__GetInt_70111952(v269, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v270);
    if ( !byte_4B13023 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v270, v271);
      byte_4B13023 = 1;
    }
    v273 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v270);
      v273 = TerminalPramsManager_TypeInfo;
    }
    v273->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = v272;
  }
  v274 = (System_String_o *)StringLiteral_13770/*"TerminalLastPanelEventPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13770/*"TerminalLastPanelEventPoint"*/, 0LL) )
  {
    v276 = UnityEngine_PlayerPrefs__GetInt_70111952(v274, 0LL);
    v277 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v275);
      v277 = TerminalPramsManager_TypeInfo;
    }
    v277->static_fields->panelEventPoint = v276;
  }
  v278 = (System_String_o *)StringLiteral_11575/*"SAVEKEY_PlayedTerminalEffects"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11575/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL) )
  {
    v286 = UnityEngine_PlayerPrefs__GetString_70112520(v278, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v279);
    if ( !byte_4B13802 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v279, v280);
      byte_4B13802 = 1;
    }
    v287 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v279);
      v287 = TerminalPramsManager_TypeInfo;
    }
    p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v287->static_fields->_PlayedTerminalEffects_k__BackingField;
    p_PlayedTerminalEffects_k__BackingField->klass = (PartyOrganizationUtility_c *)v286;
    sub_1BCA784(p_PlayedTerminalEffects_k__BackingField, (int64_t)v286, v280, v281, v282, v283, v284, v285);
  }
  v289 = (System_String_o *)StringLiteral_11572/*"SAVEKEY_PlayTerminalEffectDisappear"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11572/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL) )
  {
    v292 = UnityEngine_PlayerPrefs__GetInt_70111952(v289, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v290);
    if ( !byte_4B1361E )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v290, v291);
      byte_4B1361E = 1;
    }
    v293 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v290);
      v293 = TerminalPramsManager_TypeInfo;
    }
    v293->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = v292 != 0;
  }
  v294 = (System_String_o *)StringLiteral_11573/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11573/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL) )
  {
    v297 = UnityEngine_PlayerPrefs__GetInt_70111952(v294, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v295);
    if ( !byte_4B1361F )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v295, v296);
      byte_4B1361F = 1;
    }
    v298 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v295);
      v298 = TerminalPramsManager_TypeInfo;
    }
    v298->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = v297;
  }
  v299 = (System_String_o *)StringLiteral_11574/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11574/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL) )
  {
    v302 = UnityEngine_PlayerPrefs__GetInt_70111952(v299, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v300);
    if ( !byte_4B13532 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v300, v301);
      byte_4B13532 = 1;
    }
    v303 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v300);
      v303 = TerminalPramsManager_TypeInfo;
    }
    v303->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = v302 != 0;
  }
  v304 = (System_String_o *)StringLiteral_11584/*"SAVEKEY_TerminalSelectedStoryQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11584/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL) )
  {
    v307 = UnityEngine_PlayerPrefs__GetInt_70111952(v304, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v305);
    if ( !byte_4B1312E )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v305, v306);
      byte_4B1312E = 1;
    }
    v308 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v305);
      v308 = TerminalPramsManager_TypeInfo;
    }
    v308->static_fields->_SelectedStoryQuestId_k__BackingField = v307;
  }
  v309 = (System_String_o *)StringLiteral_11566/*"SAVEKEY_ConnectMarkEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11566/*"SAVEKEY_ConnectMarkEventId"*/, 0LL) )
  {
    v311 = UnityEngine_PlayerPrefs__GetInt_70111952(v309, 0LL);
    v312 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v310);
      v312 = TerminalPramsManager_TypeInfo;
    }
    v312->static_fields->ConnectMarkEventId = v311;
  }
  v313 = (System_String_o *)StringLiteral_11565/*"SAVEKEY_ConnectMarkAnimationId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11565/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL) )
  {
    v315 = UnityEngine_PlayerPrefs__GetInt_70111952(v313, 0LL);
    v316 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v314);
      v316 = TerminalPramsManager_TypeInfo;
    }
    v316->static_fields->ConnectMarkAnimationId = v315;
  }
  v317 = (System_String_o *)StringLiteral_11583/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11583/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL) )
  {
    v320 = UnityEngine_PlayerPrefs__GetInt_70111952(v317, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v318);
    if ( !byte_4B12270 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v318, v319);
      byte_4B12270 = 1;
    }
    v321 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v318);
      v321 = TerminalPramsManager_TypeInfo;
    }
    v321->static_fields->_SelectedRecollectionWarId_k__BackingField = v320;
  }
  v322 = (System_String_o *)StringLiteral_11564/*"SAVEKEY_ClearEventQuestIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11564/*"SAVEKEY_ClearEventQuestIds"*/, 0LL) )
  {
    v330 = UnityEngine_PlayerPrefs__GetString_70112520(v322, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v323);
    if ( !byte_4B12DC4 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v323, v324);
      byte_4B12DC4 = 1;
    }
    v331 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v323);
      v331 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (PartyOrganizationUtility_o *)&v331->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (PartyOrganizationUtility_c *)v330;
    sub_1BCA784(p_ClearEventQuestIds_k__BackingField, (int64_t)v330, v324, v325, v326, v327, v328, v329);
  }
  v333 = (System_String_o *)StringLiteral_11571/*"SAVEKEY_MapModelClearQuestInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11571/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL) )
  {
    v334 = UnityEngine_PlayerPrefs__GetString_70112520(v333, 0LL);
    IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(v334, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v334 || (IsNullOrEmpty = System_String__Split(v334, 0x2Cu, 0, 0LL)) == 0LL )
        sub_1BCAA3C(IsNullOrEmpty, v336);
      v338 = *(_QWORD *)&IsNullOrEmpty->max_length;
      v339 = IsNullOrEmpty;
      if ( v338 )
      {
        if ( !(_DWORD)v338 )
          sub_1BCAA44(IsNullOrEmpty, v336);
        v340 = System_Int32__Parse(IsNullOrEmpty->m_Items[0], 0LL);
      }
      else
      {
        v340 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v336);
      if ( !byte_4B13804 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v336, v337);
        byte_4B13804 = 1;
      }
      v341 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v336);
        v341 = TerminalPramsManager_TypeInfo;
      }
      v341->static_fields->_MapModelClearQuestId_k__BackingField = v340;
      if ( (int)v339->max_length < 2 )
      {
        v343 = 0;
      }
      else
      {
        v342 = System_Int32__Parse(v339->m_Items[1], 0LL);
        v341 = TerminalPramsManager_TypeInfo;
        v343 = v342;
      }
      if ( !v341->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v341, v336);
      if ( !byte_4B13805 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v336, v337);
        byte_4B13805 = 1;
      }
      v344 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v336);
        v344 = TerminalPramsManager_TypeInfo;
      }
      v344->static_fields->_MapModelClearPhaseCount_k__BackingField = v343;
    }
  }
  v345 = (System_String_o *)StringLiteral_11567/*"SAVEKEY_DataLostBattleAutoReset"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11567/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL) )
  {
    v348 = UnityEngine_PlayerPrefs__GetInt_70111952(v345, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v346);
    if ( !byte_4B13539 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v346, v347);
      byte_4B13539 = 1;
    }
    v349 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v346);
      v349 = TerminalPramsManager_TypeInfo;
    }
    v349->static_fields->_IsDataLostBattleAutoReset_k__BackingField = v348 != 0;
  }
  v350 = (System_String_o *)StringLiteral_11576/*"SAVEKEY_PlayerGenderType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11576/*"SAVEKEY_PlayerGenderType"*/, 0LL) )
  {
    v353 = UnityEngine_PlayerPrefs__GetInt_70111952(v350, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v351);
    if ( !byte_4B1175D )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v351, v352);
      byte_4B1175D = 1;
    }
    v354 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v351);
      v354 = TerminalPramsManager_TypeInfo;
    }
    v354->static_fields->_PlayerGenderType_k__BackingField = v353;
  }
  v355 = (System_String_o *)StringLiteral_11563/*"SAVEKEY_CampaignDirectBonus"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11563/*"SAVEKEY_CampaignDirectBonus"*/, 0LL) )
  {
    v357 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70112520(v355, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v356);
    v365 = JsonManager__Deserialize_object_(
             v357,
             (const MethodInfo_2F79634 *)Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v358);
    if ( !byte_4B13809 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v358, v359);
      byte_4B13809 = 1;
    }
    v366 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v358);
      v366 = TerminalPramsManager_TypeInfo;
    }
    v367 = v366->static_fields;
    v367->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)v365;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v367->_CampaignDirectBonus_k__BackingField,
      (int64_t)v365,
      v359,
      v360,
      v361,
      v362,
      v363,
      v364);
  }
  v368 = (System_String_o *)StringLiteral_11562/*"SAVEKEY_BlankEarthSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11562/*"SAVEKEY_BlankEarthSpotId"*/, 0LL) )
  {
    v371 = UnityEngine_PlayerPrefs__GetInt_70111952(v368, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v369);
    if ( !byte_4B12CE2 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v369, v370);
      byte_4B12CE2 = 1;
    }
    v372 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v369);
      v372 = TerminalPramsManager_TypeInfo;
    }
    v372->static_fields->_BlankEarthSpotId_k__BackingField = v371;
  }
  v373 = (System_String_o *)StringLiteral_11561/*"SAVEKEY_BlankEarthRank"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11561/*"SAVEKEY_BlankEarthRank"*/, 0LL) )
  {
    v376 = UnityEngine_PlayerPrefs__GetInt_70111952(v373, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v374);
    if ( !byte_4B1380C )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v374, v375);
      byte_4B1380C = 1;
    }
    v377 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v374);
      v377 = TerminalPramsManager_TypeInfo;
    }
    v377->static_fields->_BlankEarthRank_k__BackingField = v376;
  }
}


TerminalTransitionInfo_o *__fastcall TerminalPramsManager__Load_TerminalTransitionInfoData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *v7; // x20
  __int64 v8; // x19
  int32_t Int_70111952; // w0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  int32_t v13; // w20
  const MethodInfo *v14; // x1
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x20
  System_String_o *String_70112520; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B1378C & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalTransitionInfo_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_13785/*"TerminalTransitionInfoVoiceAssetName"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_13784/*"TerminalTransitionInfoMissionId"*/, v5, v6);
    byte_4B1378C = 1;
  }
  v7 = (System_String_o *)StringLiteral_13784/*"TerminalTransitionInfoMissionId"*/;
  v8 = 0LL;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13784/*"TerminalTransitionInfoMissionId"*/, 0LL) )
  {
    Int_70111952 = UnityEngine_PlayerPrefs__GetInt_70111952(v7, 0LL);
    if ( Int_70111952 < 1 )
    {
      return 0LL;
    }
    else
    {
      v13 = Int_70111952;
      v8 = sub_1BCAA2C(TerminalTransitionInfo_TypeInfo, v10, v11, v12);
      System_Object___ctor((Il2CppObject *)v8, 0LL);
      TerminalTransitionInfo__Init((TerminalTransitionInfo_o *)v8, v14);
      if ( !v8 )
        sub_1BCAA3C(v15, v16);
      *(_DWORD *)(v8 + 16) = v13;
      v17 = (System_String_o *)StringLiteral_13785/*"TerminalTransitionInfoVoiceAssetName"*/;
      if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13785/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL) )
      {
        String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520(v17, 0LL);
        *(_QWORD *)(v8 + 40) = String_70112520;
        sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 40), (int64_t)String_70112520, v19, v20, v21, v22, v23, v24);
      }
    }
  }
  return (TerminalTransitionInfo_o *)v8;
}


void __fastcall TerminalPramsManager__MapModelClearQuestInfo_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  TerminalPramsManager_c *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x19
  TerminalPramsManager_c *v11; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  int32_t MapModelClearQuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B137A6 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11571/*"SAVEKEY_MapModelClearQuestInfo"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v5, v6);
    byte_4B137A6 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B12FA4 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B12FA4 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v7 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v7->static_fields->_MapModelClearQuestId_k__BackingField;
  v10 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_4B12FA5 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    byte_4B12FA5 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
    v11 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v11->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v12 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v13 = System_String__Concat_62412480(v10, (System_String_o *)StringLiteral_863/*","*/, v12, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11571/*"SAVEKEY_MapModelClearQuestInfo"*/, v13, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__PlayQuestSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  TerminalPramsManager_c *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  TerminalPramsManager_c *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  TerminalPramsManager_c *v15; // x0

  if ( (byte_4B13792 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11582/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_13771/*"TerminalLastPlayedFreeQuestSpotId"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_13772/*"TerminalLastPlayedQuestId"*/, v7, v8);
    byte_4B13792 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B1306D )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1306D = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13772/*"TerminalLastPlayedQuestId"*/,
    v9->static_fields->_LastPlayedQuestId_k__BackingField,
    0LL);
  if ( !byte_4B1380B )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    byte_4B1380B = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
    v12 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11582/*"SAVEKEY_TerminalLastSelectQuestIndex"*/,
    v12->static_fields->_LastSelectQuestIndex_k__BackingField,
    0LL);
  if ( !byte_4B12CE4 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v14);
    byte_4B12CE4 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
    v15 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13771/*"TerminalLastPlayedFreeQuestSpotId"*/,
    v15->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__PlaySystemSE(int32_t seKind, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalPramsManager_c *v6; // x0
  TerminalPramsManager_c *v7; // x0
  _BOOL4 IsAutoNoSe_k__BackingField; // w21
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_4B13787 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_TerminalPramsManager_PlaySystemSE__, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v4, v5);
    byte_4B13787 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B137F6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B137F6 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( TerminalPramsManager_TypeInfo->static_fields->_IsAutoNoSe_k__BackingField )
    {
LABEL_9:
      if ( !byte_4B137F7 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
        byte_4B137F7 = 1;
      }
      v7 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
        v7 = TerminalPramsManager_TypeInfo;
      }
      v7->static_fields->_IsAutoNoSe_k__BackingField = 0;
      return;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    IsAutoNoSe_k__BackingField = TerminalPramsManager_TypeInfo->static_fields->_IsAutoNoSe_k__BackingField;
    if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      if ( TerminalPramsManager_TypeInfo->static_fields->_IsAutoNoSe_k__BackingField )
        goto LABEL_9;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      if ( IsAutoNoSe_k__BackingField )
        goto LABEL_9;
    }
  }
  if ( !TerminalPramsManager__IsAuto((const MethodInfo *)v6) )
  {
    v9 = Method_TerminalPramsManager_PlaySystemSE__;
    if ( (*((_BYTE *)Method_TerminalPramsManager_PlaySystemSE__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_TerminalPramsManager_PlaySystemSE__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, seKind, 0LL);
  }
}


void __fastcall TerminalPramsManager__PlayedTerminalEffectsSave_SaveData(int32_t effectId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  TerminalPramsManager_c *v15; // x0
  PartyOrganizationUtility_c *v16; // x19
  TerminalPramsManager_c *v17; // x0
  PartyOrganizationUtility_o *p_PlayedTerminalEffects_k__BackingField; // x0
  TerminalPramsManager_c *v19; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x19
  System_String_o *v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_String_o *v29; // x19
  TerminalPramsManager_c *v30; // x0
  PartyOrganizationUtility_o *v31; // x0
  const MethodInfo *v32; // x0
  int32_t v33; // [xsp+Ch] [xbp-24h] BYREF

  v33 = effectId;
  if ( (byte_4B137AF & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B137AF = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !TerminalPramsManager__IsTerminalEffectPlayed(effectId, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
    if ( !byte_4B13811 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
      byte_4B13811 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
      v15 = TerminalPramsManager_TypeInfo;
    }
    if ( !v15->static_fields->_PlayedTerminalEffects_k__BackingField )
    {
      if ( !v15->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v15, v8);
      v16 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
      if ( !byte_4B13802 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
        byte_4B13802 = 1;
      }
      v17 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
        v17 = TerminalPramsManager_TypeInfo;
      }
      p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v17->static_fields->_PlayedTerminalEffects_k__BackingField;
      p_PlayedTerminalEffects_k__BackingField->klass = v16;
      sub_1BCA784(p_PlayedTerminalEffects_k__BackingField, (int64_t)v16, v9, v10, v11, v12, v13, v14);
      v15 = TerminalPramsManager_TypeInfo;
    }
    if ( !v15->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v15, v8);
    if ( !byte_4B13811 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
      byte_4B13811 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
      v19 = TerminalPramsManager_TypeInfo;
    }
    PlayedTerminalEffects_k__BackingField = v19->static_fields->_PlayedTerminalEffects_k__BackingField;
    v21 = System_Int32__ToString((int32_t)&v33, 0LL);
    v29 = System_String__Concat_62412480(
            PlayedTerminalEffects_k__BackingField,
            v21,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            0LL);
    if ( !byte_4B13802 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v23);
      byte_4B13802 = 1;
    }
    v30 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
      v30 = TerminalPramsManager_TypeInfo;
    }
    v31 = (PartyOrganizationUtility_o *)&v30->static_fields->_PlayedTerminalEffects_k__BackingField;
    v31->klass = (PartyOrganizationUtility_c *)v29;
    sub_1BCA784(v31, (int64_t)v29, v23, v24, v25, v26, v27, v28);
    TerminalPramsManager__Save_SaveData(v32);
  }
}


void __fastcall TerminalPramsManager__PlayerGenderType_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B137A8 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11576/*"SAVEKEY_PlayerGenderType"*/, v3, v4);
    byte_4B137A8 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B13812 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13812 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11576/*"SAVEKEY_PlayerGenderType"*/,
    v5->static_fields->_PlayerGenderType_k__BackingField,
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
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x1
  __int64 v110; // x2
  BattleResultComponent_resultData_o *v111; // x8
  BattleResultComponent_resultData_array **m_Items; // x19
  struct UserServantCollectionEntity_array *oldUserSvtCollection; // x8
  _DWORD *v114; // x22
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  BattleResultComponent_resultData_o *v121; // x26
  int eventEndTitle; // w8
  UserServantCollectionMaster_o *v123; // x20
  unsigned int v124; // w28
  __int64 v125; // x27
  BattleResultComponent_resultData_array *v126; // x23
  __int64 v127; // x24
  __int64 v128; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x23
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x3
  UserServantCollectionEntity_o *v133; // x24
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  _DWORD *v140; // x23
  PartyOrganizationUtility_o *v141; // x23
  PartyOrganizationUtility_c *klass; // x8
  PartyOrganizationUtility_c *v143; // x8
  TerminalPramsManager_c *v144; // x0
  PartyOrganizationUtility_o *p_mQuestClearHeroineInfo; // x0
  __int64 v146; // x8
  BattleResultComponent_resultData_o *v147; // x9
  struct System_String_o *v148; // x10
  struct System_String_o *eventEndMessage; // x27
  __int128 v150; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v151; // x23
  UserServantEntity_o *v152; // x24
  __int64 v153; // x1
  __int64 v154; // x2
  __int64 v155; // x3
  int64_t v156; // x23
  void *v157; // x25
  void **p_monitor; // x27
  void *monitor; // t1
  void *v160; // x26
  __int64 v161; // x1
  Il2CppObject *MasterData_object; // x25
  int64_t UserId; // x0
  __int64 v164; // x1
  __int64 v165; // x27
  __int64 v166; // x28
  int64_t v167; // x26
  __int64 v168; // x2
  __int64 v169; // x3
  int v170; // w8
  UserServantCollectionEntity_o *v171; // x26
  int v172; // w9
  UserServantCollectionEntity_o *v173; // x25
  BattleResultComponent_resultData_array *v174; // x27
  int32_t SvtId; // w0
  __int64 v176; // x1
  __int64 v177; // x28
  __int64 v178; // x29
  int32_t v179; // w27
  int64_t v180; // x22
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  int64_t v187; // x2
  int32_t v188; // w3
  System_String_o *v189; // x4
  BattleSetupInfo_o *v190; // x5
  FollowerInfo_o *v191; // x6
  PartyListViewItem_o *v192; // x7
  bool v193; // w9
  Il2CppObject *Master_object; // x0
  __int64 v195; // x1
  __int64 v196; // x24
  __int64 v197; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v198; // x23
  int klass_high; // w8
  int32_t friendshipExceedCount; // w9
  TerminalPramsManager_c *v201; // x0
  PartyOrganizationUtility_o *v202; // x0
  BattleResultComponent_resultData_o *v203; // x22
  const MethodInfo *v204; // x2
  BattleResultComponent_resultData_o *v205; // x8
  struct System_String_o *v206; // x9
  UserQuestEntity_o *v207; // x22
  int32_t questId; // w23
  TerminalPramsManager_c *v209; // x0
  __int64 v210; // x1
  __int64 v211; // x2
  int32_t QuestPhase; // w23
  TerminalPramsManager_c *v213; // x0
  int32_t v214; // w23
  __int64 v215; // x1
  Il2CppObject *v216; // x24
  UserQuestEntity_o *v217; // x0
  __int64 v218; // x1
  UserQuestEntity_o *v219; // x25
  int32_t v220; // w24
  __int64 v221; // x1
  __int64 v222; // x2
  bool v223; // w25
  TerminalPramsManager_c *v224; // x0
  const MethodInfo *v225; // x2
  TerminalPramsManager_c *v226; // x0
  System_String_o *ValidMessage; // x0
  TerminalPramsManager_c *v228; // x8
  TerminalPramsManager_c *v229; // x0
  const MethodInfo *v230; // x0
  TerminalPramsManager_c *v231; // x8
  int32_t v232; // w24
  const MethodInfo *v233; // x1
  __int64 v234; // x2
  WarEntity_o *v235; // x23
  TerminalPramsManager_c *v236; // x0
  __int64 v237; // x2
  bool v238; // w25
  TerminalPramsManager_c *v239; // x0
  char v240; // w8
  const MethodInfo *v241; // x1
  __int64 v242; // x2
  bool HasFlag; // w0
  __int64 v244; // x2
  int64_t v245; // x2
  int32_t v246; // w3
  System_String_o *v247; // x4
  BattleSetupInfo_o *v248; // x5
  FollowerInfo_o *v249; // x6
  PartyListViewItem_o *v250; // x7
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  int64_t v252; // x2
  int32_t v253; // w3
  System_String_o *v254; // x4
  BattleSetupInfo_o *v255; // x5
  FollowerInfo_o *v256; // x6
  PartyListViewItem_o *v257; // x7
  int64_t v258; // x23
  TerminalPramsManager_c *v259; // x0
  PartyOrganizationUtility_o *p_mResultEventPanelRewardInfos; // x0
  TerminalPramsManager_c *v261; // x0
  PartyOrganizationUtility_o *p_eventConquestInfos; // x0
  __int64 v263; // x1
  int64_t v264; // x2
  int32_t v265; // w3
  System_String_o *v266; // x4
  BattleSetupInfo_o *v267; // x5
  FollowerInfo_o *v268; // x6
  PartyListViewItem_o *v269; // x7
  int64_t v270; // x23
  TerminalPramsManager_c *v271; // x0
  PartyOrganizationUtility_o *v272; // x0
  bool Farm; // w21
  TerminalPramsManager_c *v274; // x0
  char v275; // w21
  int32_t v276; // w23
  WarEntity_o *v277; // x0
  __int64 v278; // x2
  int32_t id; // w21
  TerminalPramsManager_c *v280; // x0
  TerminalPramsManager_c *v281; // x0
  Il2CppObject *v282; // x23
  int64_t v283; // x2
  int32_t v284; // w3
  System_String_o *v285; // x4
  BattleSetupInfo_o *v286; // x5
  FollowerInfo_o *v287; // x6
  PartyListViewItem_o *v288; // x7
  int64_t v289; // x2
  int32_t v290; // w3
  System_String_o *v291; // x4
  BattleSetupInfo_o *v292; // x5
  FollowerInfo_o *v293; // x6
  PartyListViewItem_o *v294; // x7
  int64_t v295; // x24
  char *v296; // x25
  TerminalPramsManager_c *v297; // x0
  PartyOrganizationUtility_o *p_OldUserEventPoint_k__BackingField; // x0
  signed int max_length; // w9
  BattleResultComponent_resultData_array *v300; // x24
  int v301; // w8
  Il2CppClass **v302; // x8
  Il2CppClass *v303; // x25
  __int64 v304; // x2
  int32_t RaidGroupDeadQuestId; // w26
  signed int v306; // w9
  BattleResultComponent_resultData_array *v307; // x26
  int v308; // w8
  int v309; // w29
  struct TerminalPramsManager_StaticFields *v310; // x8
  int32_t name_high; // w25
  signed int v312; // w9
  BattleResultComponent_resultData_array *v313; // x24
  int v314; // w8
  BattleResultComponent_resultData_o *v315; // x21
  int32_t RaidDeadQuestId; // w25
  struct TerminalPramsManager_StaticFields *v317; // x8
  int32_t v318; // w21
  TerminalPramsManager_c *v319; // x0
  TerminalPramsManager_c *v320; // x8
  bool v321; // w21
  TerminalPramsManager_c *v322; // x0
  int32_t v323; // w21
  int32_t v324; // w23
  __int64 v325; // x2
  Il2CppObject *v326; // x23
  int32_t eventId; // w24
  bool v328; // w23
  TerminalPramsManager_c *v329; // x0
  __int64 v330; // x2
  __int64 v331; // x3
  char *v332; // x21
  BattleResultComponent_resultData_o *v333; // x8
  int v334; // w9
  int v335; // w11
  __int64 v336; // x25
  int32_t bounds_high; // w23
  bool IsUserEventStatus; // w0
  TerminalPramsManager_c *v339; // x0
  TerminalPramsManager_c *v340; // x0
  TerminalPramsManager_c *v341; // x0
  Il2CppObject *v342; // x23
  __int64 v343; // x1
  int64_t v344; // x2
  int32_t v345; // w3
  System_String_o *v346; // x4
  BattleSetupInfo_o *v347; // x5
  FollowerInfo_o *v348; // x6
  PartyListViewItem_o *v349; // x7
  TerminalPramsManager_c *v350; // x0
  PartyOrganizationUtility_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  struct System_String_o *ultimateGetQpText; // x8
  struct System_String_o *v353; // x8
  signed int v354; // w8
  __int64 *v355; // x9
  __int64 v356; // x12
  System_String_o **v357; // x9
  void **v358; // x8
  System_String_o *v359; // x24
  int32_t v360; // w26
  __int64 v361; // x2
  __int64 v362; // x3
  System_Collections_Generic_List_object__o *v363; // x26
  TerminalPramsManager___c_c *v364; // x8
  System_Predicate_object__o *_9__688_0; // x23
  Il2CppObject *v366; // x24
  struct TerminalPramsManager___c_StaticFields *v367; // x0
  int64_t v368; // x2
  int32_t v369; // w3
  System_String_o *v370; // x4
  BattleSetupInfo_o *v371; // x5
  FollowerInfo_o *v372; // x6
  PartyListViewItem_o *v373; // x7
  __int64 v374; // x1
  __int64 v375; // x2
  System_String_o *v376; // x21
  TerminalPramsManager_c *v377; // x0
  TerminalPramsManager_c *v378; // x0
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x26
  __int64 v380; // x1
  System_String_o *v381; // x23
  int64_t v382; // x2
  int32_t v383; // w3
  System_String_o *v384; // x4
  BattleSetupInfo_o *v385; // x5
  FollowerInfo_o *v386; // x6
  PartyListViewItem_o *v387; // x7
  TerminalPramsManager_c *v388; // x0
  int32_t v389; // w23
  int32_t PhaseCnt_k__BackingField; // w24
  _BOOL4 IsQuestClear_k__BackingField; // w21
  TerminalPramsManager_c *v392; // x0
  __int64 v393; // x2
  Il2CppObject *v394; // x23
  int v395; // w23
  TerminalPramsManager_c *v396; // x0
  PartyOrganizationUtility_o *p_questClearCostumeRelease_k__BackingField; // x0
  int64_t v398; // x2
  int32_t v399; // w3
  System_String_o *v400; // x4
  BattleSetupInfo_o *v401; // x5
  FollowerInfo_o *v402; // x6
  PartyListViewItem_o *v403; // x7
  BattleResultComponent_resultData_o *v404; // x8
  int64_t v405; // x23
  TerminalPramsManager_c *v406; // x0
  PartyOrganizationUtility_o *v407; // x0
  TerminalPramsManager_c *v408; // x0
  PartyOrganizationUtility_o *p_questClearCostumeGet_k__BackingField; // x0
  int64_t v410; // x2
  int32_t v411; // w3
  System_String_o *v412; // x4
  BattleSetupInfo_o *v413; // x5
  FollowerInfo_o *v414; // x6
  PartyListViewItem_o *v415; // x7
  int64_t v416; // x23
  TerminalPramsManager_c *v417; // x0
  PartyOrganizationUtility_o *v418; // x0
  TerminalPramsManager_c *v419; // x0
  PartyOrganizationUtility_o *p_eventPointWinReward_k__BackingField; // x0
  int64_t v421; // x2
  int32_t v422; // w3
  System_String_o *v423; // x4
  BattleSetupInfo_o *v424; // x5
  FollowerInfo_o *v425; // x6
  PartyListViewItem_o *v426; // x7
  TerminalPramsManager_c *v427; // x0
  int32_t v428; // w23
  QuestGroupMaster_o *v429; // x24
  int32_t GroupId; // w0
  __int64 v431; // x1
  TerminalPramsManager_c *v432; // x8
  int32_t v433; // w25
  int v434; // w24
  Il2CppObject *v435; // x25
  EventPointEntity_o *v436; // x24
  int32_t v437; // w23
  struct TerminalPramsManager_StaticFields *v438; // x8
  BattleResultComponent_resultData_o *v439; // x8
  struct System_String_o *v440; // x9
  int64_t v441; // x23
  TerminalPramsManager_c *v442; // x0
  PartyOrganizationUtility_o *v443; // x0
  int32_t v444; // w21
  TerminalPramsManager_c *v445; // x0
  TerminalPramsManager_c *v446; // x0
  PartyOrganizationUtility_o *p_eventRaceBoost_k__BackingField; // x0
  int64_t v448; // x2
  int32_t v449; // w3
  System_String_o *v450; // x4
  BattleSetupInfo_o *v451; // x5
  FollowerInfo_o *v452; // x6
  PartyListViewItem_o *v453; // x7
  __int64 v454; // x8
  int64_t v455; // x22
  TerminalPramsManager_c *v456; // x0
  PartyOrganizationUtility_o *v457; // x0
  __int64 v458; // x21
  BattleResultComponent_resultData_o *v459; // x9
  struct System_String_o *v460; // x10
  int64_t v461; // x22
  TerminalPramsManager_c *v462; // x0
  PartyOrganizationUtility_o *p_eventTowerReward_k__BackingField; // x0
  int64_t v464; // x2
  int32_t v465; // w3
  System_String_o *v466; // x4
  BattleSetupInfo_o *v467; // x5
  FollowerInfo_o *v468; // x6
  PartyListViewItem_o *v469; // x7
  int64_t v470; // x22
  TerminalPramsManager_c *v471; // x0
  PartyOrganizationUtility_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  int64_t v473; // x22
  TerminalPramsManager_c *v474; // x0
  PartyOrganizationUtility_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  int64_t v476; // x22
  TerminalPramsManager_c *v477; // x0
  PartyOrganizationUtility_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  int64_t v479; // x22
  TerminalPramsManager_c *v480; // x0
  PartyOrganizationUtility_o *p_warClearReward_k__BackingField; // x0
  TerminalPramsManager_c *v482; // x0
  struct TerminalPramsManager_StaticFields *v483; // x0
  __int64 v484; // x1
  int64_t v485; // x2
  int32_t v486; // w3
  System_String_o *v487; // x4
  BattleSetupInfo_o *v488; // x5
  FollowerInfo_o *v489; // x6
  PartyListViewItem_o *v490; // x7
  TerminalPramsManager_c *v491; // x0
  struct TerminalPramsManager_StaticFields *v492; // x0
  __int64 v493; // x2
  Il2CppObject *Instance; // x22
  int32_t WarID_ByQuestID; // w22
  WarEntity_o *WarEntityByWarID; // x0
  __int64 v497; // x1
  int32_t v498; // w22
  int64_t v499; // x2
  int32_t v500; // w3
  System_String_o *v501; // x4
  BattleSetupInfo_o *v502; // x5
  FollowerInfo_o *v503; // x6
  PartyListViewItem_o *v504; // x7
  __int64 v505; // x8
  int64_t v506; // x21
  TerminalPramsManager_c *v507; // x0
  struct TerminalPramsManager_StaticFields *v508; // x0
  PartyOrganizationUtility_o *p_oldPersonalBoss_k__BackingField; // x0
  TerminalPramsManager_c *v510; // x0
  struct TerminalPramsManager_StaticFields *v511; // x0
  struct EventTowerReward_array *eventTowerReward; // x8
  bool v513; // w21
  BalanceConfig_c *v514; // x8
  int32_t v515; // w21
  TerminalPramsManager_c *v516; // x0
  __int64 v517; // x2
  TerminalPramsManager_c *v518; // x0
  BalanceConfig_c *v519; // x8
  int32_t v520; // w21
  TerminalPramsManager_c *v521; // x0
  BalanceConfig_c *v522; // x8
  int32_t v523; // w21
  TerminalPramsManager_c *v524; // x0
  BalanceConfig_c *v525; // x8
  int32_t v526; // w21
  __int64 v527; // x1
  Il2CppObject *v528; // x21
  BattleResultComponent_resultData_array *v529; // x23
  int64_t v530; // x2
  int32_t v531; // w3
  System_String_o *v532; // x4
  BattleSetupInfo_o *v533; // x5
  FollowerInfo_o *v534; // x6
  PartyListViewItem_o *v535; // x7
  UserSuperBossEntity_o *v536; // x22
  BattleResultComponent_resultData_array *v537; // x21
  __int64 v538; // x1
  int64_t v539; // x2
  int32_t v540; // w3
  System_String_o *v541; // x4
  BattleSetupInfo_o *v542; // x5
  FollowerInfo_o *v543; // x6
  PartyListViewItem_o *v544; // x7
  TerminalPramsManager_c *v545; // x0
  struct TerminalPramsManager_StaticFields *v546; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v548; // x21
  __int64 v549; // x2
  Il2CppObject *v550; // x22
  int32_t ScriptQuestId; // w22
  __int64 v552; // x1
  __int64 v553; // x2
  Il2CppObject *v554; // x23
  TerminalPramsManager_c *v555; // x0
  int32_t v556; // w27
  __int64 v557; // x1
  int32_t winResult; // w24
  __int64 v559; // x1
  int64_t v560; // x2
  int32_t v561; // w3
  System_String_o *v562; // x4
  BattleSetupInfo_o *v563; // x5
  FollowerInfo_o *v564; // x6
  PartyListViewItem_o *v565; // x7
  __int64 v566; // x1
  __int64 v567; // x2
  Il2CppObject *v568; // x23
  TerminalPramsManager_c *v569; // x0
  int32_t v570; // w24
  __int64 v571; // x1
  int32_t v572; // w21
  TerminalPramsManager_c *v573; // x0
  void *v574; // x1
  PartyOrganizationUtility_o *p_lastPlayBgmName; // x0
  const MethodInfo *v576; // x0
  __int64 v577; // x2
  Il2CppObject *v578; // x21
  int32_t v579; // w22
  int64_t v580; // x2
  int32_t v581; // w3
  System_String_o *v582; // x4
  BattleSetupInfo_o *v583; // x5
  FollowerInfo_o *v584; // x6
  PartyListViewItem_o *v585; // x7
  TerminalPramsManager_c *v586; // x0
  il2cpp_array_size_t *v587; // x0
  int32_t v588; // w22
  TerminalPramsManager_c *v589; // x0
  int32_t v590; // w23
  __int64 v591; // x1
  int64_t v592; // x2
  int32_t v593; // w3
  System_String_o *v594; // x4
  BattleSetupInfo_o *v595; // x5
  FollowerInfo_o *v596; // x6
  PartyListViewItem_o *v597; // x7
  SpecifiedSceneInfo_o *SpecifiedSceneInfo; // x22
  TerminalPramsManager_c *v599; // x0
  struct TerminalPramsManager_StaticFields *v600; // x0
  const MethodInfo *v601; // x0
  int64_t v602; // x2
  int32_t v603; // w3
  System_String_o *v604; // x4
  BattleSetupInfo_o *v605; // x5
  FollowerInfo_o *v606; // x6
  PartyListViewItem_o *v607; // x7
  int32_t v608; // w22
  TerminalPramsManager_c *v609; // x0
  PartyOrganizationUtility_o *p_eventHarvestGrowthInfo; // x0
  __int64 v611; // x1
  __int64 v612; // x2
  TerminalPramsManager_c *v613; // x0
  BattleResultComponent_resultData_array *v614; // x22
  int32_t ScriptIntParam; // w24
  int32_t v616; // w0
  __int64 v617; // x1
  __int64 v618; // x2
  __int64 v619; // x3
  int32_t v620; // w25
  int64_t v621; // x23
  int64_t v622; // x2
  int32_t v623; // w3
  System_String_o *v624; // x4
  BattleSetupInfo_o *v625; // x5
  FollowerInfo_o *v626; // x6
  PartyListViewItem_o *v627; // x7
  Il2CppArrayBounds *bounds; // d0
  TerminalPramsManager_c *v629; // x0
  PartyOrganizationUtility_o *v630; // x0
  __int64 v631; // x2
  Il2CppObject *v632; // x22
  QuestEntity_o *QuestEntity; // x0
  int64_t v634; // x2
  int32_t v635; // w3
  System_String_o *v636; // x4
  BattleSetupInfo_o *v637; // x5
  FollowerInfo_o *v638; // x6
  PartyListViewItem_o *v639; // x7
  QuestEntity_o *v640; // x22
  TerminalPramsManager_c *v641; // x0
  __int64 v642; // x1
  int32_t SpotId; // w21
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v645; // x21
  TerminalPramsManager_c *v646; // x0
  struct EventAreaImproveResultInfo_o *eventAreaImproveResultInfo; // x8
  TerminalPramsManager_c *v648; // x0
  __int64 v649; // x1
  __int64 v650; // x2
  System_String_o *v651; // x21
  TerminalPramsManager_c *v652; // x0
  System_String_o *v653; // x0
  __int64 v654; // x1
  int64_t v655; // x2
  int32_t v656; // w3
  System_String_o *v657; // x4
  BattleSetupInfo_o *v658; // x5
  FollowerInfo_o *v659; // x6
  PartyListViewItem_o *v660; // x7
  System_String_o *v661; // x21
  TerminalPramsManager_c *v662; // x0
  PartyOrganizationUtility_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  int64_t v664; // x21
  TerminalPramsManager_c *v665; // x0
  PartyOrganizationUtility_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v667; // x1
  __int64 v668; // x2
  __int64 v669; // x21
  TerminalPramsManager_c *v670; // x0
  int64_t v671; // x2
  int32_t v672; // w3
  System_String_o *v673; // x4
  BattleSetupInfo_o *v674; // x5
  FollowerInfo_o *v675; // x6
  PartyListViewItem_o *v676; // x7
  int64_t v677; // x2
  int32_t v678; // w3
  System_String_o *v679; // x4
  BattleSetupInfo_o *v680; // x5
  FollowerInfo_o *v681; // x6
  PartyListViewItem_o *v682; // x7
  void *v683; // x1
  __int64 v684; // x1
  __int64 v685; // x2
  TerminalPramsManager_c *v686; // x0
  int64_t v687; // x2
  int32_t v688; // w3
  System_String_o *v689; // x4
  BattleSetupInfo_o *v690; // x5
  FollowerInfo_o *v691; // x6
  PartyListViewItem_o *v692; // x7
  int64_t v693; // x2
  int32_t v694; // w3
  System_String_o *v695; // x4
  BattleSetupInfo_o *v696; // x5
  FollowerInfo_o *v697; // x6
  PartyListViewItem_o *v698; // x7
  void *v699; // x1
  __int64 v700; // x1
  __int64 v701; // x2
  TerminalPramsManager_c *v702; // x0
  int64_t v703; // x2
  int32_t v704; // w3
  System_String_o *v705; // x4
  BattleSetupInfo_o *v706; // x5
  FollowerInfo_o *v707; // x6
  PartyListViewItem_o *v708; // x7
  int64_t v709; // x2
  int32_t v710; // w3
  System_String_o *v711; // x4
  BattleSetupInfo_o *v712; // x5
  FollowerInfo_o *v713; // x6
  PartyListViewItem_o *v714; // x7
  void *v715; // x1
  __int64 v716; // x1
  __int64 v717; // x2
  TerminalPramsManager_c *v718; // x0
  int64_t v719; // x2
  int32_t v720; // w3
  System_String_o *v721; // x4
  BattleSetupInfo_o *v722; // x5
  FollowerInfo_o *v723; // x6
  PartyListViewItem_o *v724; // x7
  System_String_o *v725; // x0
  const MethodInfo *v726; // x1
  const MethodInfo *v727; // x0
  const MethodInfo *v728; // x0
  const MethodInfo *v729; // x0
  const MethodInfo *v730; // x0
  const MethodInfo *v731; // x0
  const MethodInfo *v732; // x0
  __int64 v733; // x1
  __int64 v734; // x2
  TerminalPramsManager_c *v735; // x0
  __int64 v736; // x0
  System_String_o *v737; // [xsp+10h] [xbp-130h]
  System_String_o *v738; // [xsp+18h] [xbp-128h]
  System_String_o *progressQuestId; // [xsp+20h] [xbp-120h]
  bool v740; // [xsp+2Ch] [xbp-114h]
  BattleResultComponent_resultData_array *resulta; // [xsp+30h] [xbp-110h]
  il2cpp_array_size_t *p_max_length; // [xsp+38h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v743; // [xsp+40h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v744; // [xsp+60h] [xbp-E0h]
  __int128 v745; // [xsp+80h] [xbp-C0h]
  char v746[4]; // [xsp+94h] [xbp-ACh] BYREF
  UserSuperBossEntity_o *v747; // [xsp+98h] [xbp-A8h] BYREF
  Il2CppObject *v748; // [xsp+A0h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *v749; // [xsp+A8h] [xbp-98h] BYREF
  int QuestId_k__BackingField; // [xsp+B4h] [xbp-8Ch] BYREF
  Il2CppObject *v751; // [xsp+B8h] [xbp-88h] BYREF
  Il2CppObject *v752; // [xsp+C0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+C8h] [xbp-78h] BYREF
  int v754; // [xsp+D4h] [xbp-6Ch] BYREF
  QuestPhaseEntity_o *v755; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v756; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v757; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v758; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v759; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v760; // 0:x0.16

  v4 = result;
  if ( (byte_4B137BD & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, isWin, method);
    sub_1BCA7E0(&bool_TypeInfo, v5, v6);
    sub_1BCA7E0(&CondType_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMessageMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v29, v30);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, v31, v32);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, v33, v34);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v35, v36);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v37, v38);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v39, v40);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserSuperBossMaster___, v41, v42);
    sub_1BCA7E0(&DataManager_TypeInfo, v43, v44);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v45, v46);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v47, v48);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v49, v50);
    sub_1BCA7E0(&EventHarvestGrowthInfo_TypeInfo, v51, v52);
    sub_1BCA7E0(&EventSaveData_TypeInfo, v53, v54);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v55, v56);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v57, v58);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v59, v60);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v61, v62);
    sub_1BCA7E0(&System_Predicate_QuestReleaseEntity__TypeInfo, v63, v64);
    sub_1BCA7E0(&QuestClearHeroineInfo_TypeInfo, v65, v66);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v67, v68);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v69, v70);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v71, v72);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v73, v74);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v75, v76);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v77, v78);
    sub_1BCA7E0(&string___TypeInfo, v79, v80);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v81, v82);
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v83, v84);
    sub_1BCA7E0(&Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__688_0__, v85, v86);
    sub_1BCA7E0(&TerminalPramsManager___c_TypeInfo, v87, v88);
    sub_1BCA7E0(&UserServantCollectionEntity___TypeInfo, v89, v90);
    sub_1BCA7E0(&UserServantCollectionEntity_TypeInfo, v91, v92);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v93, v94);
    sub_1BCA7E0(&UserSuperBossEntity___TypeInfo, v95, v96);
    sub_1BCA7E0(&StringLiteral_20088/*"harvestGrowthAfterQuestId"*/, v97, v98);
    sub_1BCA7E0(&StringLiteral_16878/*"afterActionBk"*/, v99, v100);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v101, v102);
    sub_1BCA7E0(&StringLiteral_20089/*"harvestGrowthBeforeQuestId"*/, v103, v104);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v105, v106);
    sub_1BCA7E0(&StringLiteral_6725/*"False"*/, v107, v108);
    result = (BattleResultComponent_resultData_array *)sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v109, v110);
    byte_4B137BD = 1;
  }
  v755 = 0LL;
  v754 = 0;
  v752 = 0LL;
  entity = 0LL;
  v751 = 0LL;
  QuestId_k__BackingField = 0;
  v748 = 0LL;
  v749 = 0LL;
  v747 = 0LL;
  v746[0] = 0;
  if ( !v4 )
    goto LABEL_1132;
  p_max_length = &v4->max_length;
  if ( !v4->max_length )
    goto LABEL_1133;
  m_Items = (BattleResultComponent_resultData_array **)v4->m_Items;
  v111 = v4->m_Items[0];
  if ( !v111 )
    goto LABEL_1132;
  oldUserSvtCollection = v111->fields.oldUserSvtCollection;
  if ( !oldUserSvtCollection )
    goto LABEL_1132;
  resulta = v4;
  v114 = (_DWORD *)sub_1BCA888(UserServantCollectionEntity___TypeInfo, oldUserSvtCollection->max_length);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1132;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_max_length )
    goto LABEL_1133;
  if ( !*m_Items )
    goto LABEL_1132;
  v121 = (*m_Items)->m_Items[11];
  v740 = isWin;
  v754 = 0;
  if ( !v121 )
    goto LABEL_1132;
  eventEndTitle = (int)v121->fields.eventEndTitle;
  if ( eventEndTitle >= 1 )
  {
    v123 = (UserServantCollectionMaster_o *)result;
    v124 = 0;
    while ( v124 < eventEndTitle )
    {
      v125 = *((_QWORD *)&v121->fields.eventEndMessage + (int)v124);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
      if ( !v125 )
        goto LABEL_1132;
      v126 = result;
      v128 = *(_QWORD *)(v125 + 24);
      v127 = *(_QWORD *)(v125 + 32);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isWin);
      *(_QWORD *)&v756.fields.currentCryptoKey = v128;
      *(_QWORD *)&v756.fields.fakeValue = v127;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                           v756,
                                                           0LL);
      if ( !v123 )
        goto LABEL_1132;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v123, (int64_t)v126, (int32_t)result, 0LL);
      v133 = (UserServantCollectionEntity_o *)sub_1BCAA2C(UserServantCollectionEntity_TypeInfo, v130, v131, v132);
      UserServantCollectionEntity___ctor_40897496(v133, EntityDefinitely, 0LL);
      if ( !v114 )
        goto LABEL_1132;
      if ( v133 )
      {
        result = (BattleResultComponent_resultData_array *)sub_1BCA91C(v133, *(_QWORD *)(*(_QWORD *)v114 + 64LL));
        if ( !result )
          goto LABEL_1134;
      }
      if ( v124 >= v114[6] )
        break;
      v140 = &v114[2 * v124];
      *((_QWORD *)v140 + 4) = v133;
      v141 = (PartyOrganizationUtility_o *)(v140 + 8);
      sub_1BCA784(v141, (int64_t)v133, v134, v135, v136, v137, v138, v139);
      if ( v124 >= v114[6] )
        break;
      klass = v141->klass;
      *(_OWORD *)&v744.fields.currentCryptoKey = *(_OWORD *)(v125 + 84);
      if ( !klass )
        goto LABEL_1132;
      *(_OWORD *)((char *)&klass->_1.declaringType + 4) = *(_OWORD *)&v744.fields.currentCryptoKey;
      if ( v124 >= v114[6] )
        break;
      v143 = v141->klass;
      v745 = *(_OWORD *)(v125 + 100);
      if ( !v143 )
        goto LABEL_1132;
      *(_OWORD *)((char *)&v143->_1.generic_class + 4) = v745;
      if ( v124 >= v114[6] )
        break;
      if ( !v141->klass )
        goto LABEL_1132;
      ++v124;
      HIDWORD(v141->klass->_1.interopData) = *(_DWORD *)(v125 + 116);
      v754 = v124;
      eventEndTitle = (int)v121->fields.eventEndTitle;
      if ( (int)v124 >= eventEndTitle )
        goto LABEL_31;
    }
LABEL_1133:
    sub_1BCAA44(result, isWin);
  }
LABEL_31:
  v144 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    v144 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestClearHeroineInfo = (PartyOrganizationUtility_o *)&v144->static_fields->mQuestClearHeroineInfo;
  p_mQuestClearHeroineInfo->klass = 0LL;
  sub_1BCA784(p_mQuestClearHeroineInfo, 0LL, v115, v116, v117, v118, v119, v120);
  v146 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1133;
  if ( !*m_Items )
    goto LABEL_1132;
  v147 = (*m_Items)->m_Items[5];
  if ( v147 )
  {
    v148 = v147->fields.eventEndTitle;
    if ( v148 )
    {
      if ( !(_DWORD)v148 )
        goto LABEL_1133;
      eventEndMessage = v147->fields.eventEndMessage;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1132;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !eventEndMessage )
        goto LABEL_1132;
      v150 = *(_OWORD *)&eventEndMessage[1].monitor;
      v151 = (DataMasterBase_TMaster__TEntity__PKType__o *)result;
      *(_OWORD *)&v744.fields.currentCryptoKey = *(_OWORD *)&eventEndMessage->fields._stringLength;
      *(_OWORD *)&v744.fields.fakeValue = v150;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isWin);
      v743 = v744;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                           &v743,
                                                           0LL);
      if ( !v151 )
        goto LABEL_1132;
      v152 = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                      v151,
                                      (int64_t)result,
                                      (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v156 = sub_1BCAA2C(UserServantEntity_TypeInfo, v153, v154, v155);
      UserServantEntity___ctor_40923816((UserServantEntity_o *)v156, v152, 0LL);
      v745 = *(_OWORD *)&eventEndMessage[4].klass;
      if ( !v156 )
        goto LABEL_1132;
      *(_OWORD *)(v156 + 96) = v745;
      *(_DWORD *)(v156 + 256) = eventEndMessage[10].fields._stringLength;
      *(_QWORD *)(v156 + 292) = *(System_String_c **)((char *)&eventEndMessage[12].klass + 4);
      monitor = eventEndMessage[5].monitor;
      p_monitor = &eventEndMessage[5].monitor;
      v157 = monitor;
      v160 = p_monitor[1];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isWin);
      *(_QWORD *)&v757.fields.currentCryptoKey = v157;
      *(_QWORD *)&v757.fields.fakeValue = v160;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v757, 0LL) >= 1 )
        *(_OWORD *)(v156 + 128) = *(_OWORD *)p_monitor;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1132;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)result,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v161);
      UserId = NetworkManager__get_UserId(0LL);
      v166 = *(_QWORD *)(v156 + 80);
      v165 = *(_QWORD *)(v156 + 88);
      v167 = UserId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v164);
      *(_QWORD *)&v758.fields.currentCryptoKey = v166;
      *(_QWORD *)&v758.fields.fakeValue = v165;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                           v758,
                                                           0LL);
      if ( !MasterData_object )
        goto LABEL_1132;
      result = (BattleResultComponent_resultData_array *)UserServantCollectionMaster__GetEntityDefinitely(
                                                           (UserServantCollectionMaster_o *)MasterData_object,
                                                           v167,
                                                           (int32_t)result,
                                                           0LL);
      v754 = 0;
      if ( !v114 )
        goto LABEL_1132;
      v170 = v114[6];
      v171 = (UserServantCollectionEntity_o *)result;
      if ( v170 >= 1 )
      {
        v172 = 0;
        while ( v172 < (unsigned int)v170 )
        {
          v173 = *(UserServantCollectionEntity_o **)&v114[2 * v172 + 8];
          if ( !v173 )
            goto LABEL_1132;
          v174 = (BattleResultComponent_resultData_array *)v173->fields.userId;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isWin);
          result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
          if ( v174 == result )
          {
            SvtId = UserServantCollectionEntity__getSvtId(v173, 0LL);
            v178 = *(_QWORD *)(v156 + 80);
            v177 = *(_QWORD *)(v156 + 88);
            v179 = SvtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v176);
            *(_QWORD *)&v759.fields.currentCryptoKey = v178;
            *(_QWORD *)&v759.fields.fakeValue = v177;
            result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                 v759,
                                                                 0LL);
            if ( v179 == (_DWORD)result )
              goto LABEL_67;
          }
          v172 = v754 + 1;
          v754 = v172;
          v170 = v114[6];
          if ( v172 >= v170 )
            goto LABEL_66;
        }
        goto LABEL_1133;
      }
LABEL_66:
      v173 = 0LL;
LABEL_67:
      v180 = sub_1BCAA2C(QuestClearHeroineInfo_TypeInfo, isWin, v168, v169);
      System_Object___ctor((Il2CppObject *)v180, 0LL);
      if ( !v180 )
        goto LABEL_1132;
      *(_QWORD *)(v180 + 16) = v156;
      sub_1BCA784((PartyOrganizationUtility_o *)(v180 + 16), v156, v181, v182, v183, v184, v185, v186);
      result = (BattleResultComponent_resultData_array *)UserServantEntity__getLimitCount(
                                                           (UserServantEntity_o *)v156,
                                                           0LL);
      if ( !v152 )
        goto LABEL_1132;
      v193 = (_DWORD)result != UserServantEntity__getLimitCount(v152, 0LL);
      *(_BYTE *)(v180 + 25) = 0;
      *(_DWORD *)(v180 + 28) = 0;
      *(_DWORD *)(v180 + 32) = 0;
      *(_BYTE *)(v180 + 40) = 0;
      *(_DWORD *)(v180 + 36) = -1;
      *(_BYTE *)(v180 + 24) = v193;
      *(_BYTE *)(v180 + 41) = *(_DWORD *)(v156 + 296) != v152->fields.exceedCount;
      if ( v173 )
      {
        result = (BattleResultComponent_resultData_array *)UserServantCollectionEntity__getFriendShipRank(v173, 0LL);
        if ( !v171 )
          goto LABEL_1132;
        if ( (_DWORD)result != UserServantCollectionEntity__getFriendShipRank(v171, 0LL) )
          *(_DWORD *)(v180 + 36) = UserServantCollectionEntity__getFriendShipRank(v173, 0LL);
        if ( v173->fields.friendshipExceedCount != v171->fields.friendshipExceedCount )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isWin);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
          v197 = *(_QWORD *)(v156 + 80);
          v196 = *(_QWORD *)(v156 + 88);
          v198 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v195);
          *(_QWORD *)&v760.fields.currentCryptoKey = v197;
          *(_QWORD *)&v760.fields.fakeValue = v196;
          result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                               v760,
                                                               0LL);
          if ( !v198 )
            goto LABEL_1132;
          result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                               v198,
                                                               &entity,
                                                               (int32_t)result,
                                                               (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_1132;
            klass_high = HIDWORD(entity[6].klass);
            friendshipExceedCount = v173->fields.friendshipExceedCount;
            *(_BYTE *)(v180 + 40) = 1;
            *(_DWORD *)(v180 + 36) = friendshipExceedCount + klass_high;
          }
        }
      }
      v201 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        v201 = TerminalPramsManager_TypeInfo;
      }
      v202 = (PartyOrganizationUtility_o *)&v201->static_fields->mQuestClearHeroineInfo;
      v202->klass = (PartyOrganizationUtility_c *)v180;
      sub_1BCA784(v202, v180, v187, v188, v189, v190, v191, v192);
      v146 = *(_QWORD *)p_max_length;
    }
  }
  if ( !(_DWORD)v146 )
    goto LABEL_1133;
  v203 = (BattleResultComponent_resultData_o *)*m_Items;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
  TerminalPramsManager__SetBattleResultCampaignBonus(v203, (const MethodInfo *)isWin);
  if ( !*p_max_length )
    goto LABEL_1133;
  if ( !*m_Items )
    goto LABEL_1132;
  v205 = (*m_Items)->m_Items[9];
  if ( v205 && (v206 = v205->fields.eventEndTitle) != 0LL )
  {
    if ( !(_DWORD)v206 )
      goto LABEL_1133;
    v207 = (UserQuestEntity_o *)v205->fields.eventEndMessage;
  }
  else
  {
    v207 = 0LL;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
  if ( !byte_4B13015 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v204);
    byte_4B13015 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE6(result->m_Items[19]->fields.oldUserGame) = v207 != 0LL;
  if ( !byte_4B13014 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v204);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4B13014 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE5(result->m_Items[19]->fields.oldUserGame) = 0;
  if ( !byte_4B1312C )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v204);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4B1312C = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE1(result->m_Items[19]->fields.resultDamageRewardInfos) = 0;
  if ( !byte_4B13013 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v204);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4B13013 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( BYTE6(result->m_Items[19]->fields.oldUserGame) )
  {
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result, isWin);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v204);
      byte_4B12DC3 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( result->m_Items[19]->fields.eventId )
    {
      if ( !v207 )
        goto LABEL_1132;
    }
    else
    {
      if ( !v207 )
        goto LABEL_1132;
      questId = v207->fields.questId;
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result, isWin);
      if ( !byte_4B12DC7 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v204);
        byte_4B12DC7 = 1;
      }
      v209 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        v209 = TerminalPramsManager_TypeInfo;
      }
      v209->static_fields->_QuestId_k__BackingField = questId;
      QuestPhase = UserQuestEntity__getQuestPhase(v207, 0LL);
      if ( !byte_4B12DCB )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v210, v211);
        byte_4B12DCB = 1;
      }
      v213 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v210);
        v213 = TerminalPramsManager_TypeInfo;
      }
      v213->static_fields->_PhaseCnt_k__BackingField = QuestPhase;
    }
    v214 = v207->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1132;
    v216 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v215);
    result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
    if ( !v216 )
      goto LABEL_1132;
    v217 = UserQuestMaster__GetEntity((UserQuestMaster_o *)v216, (int64_t)result, v214, 0LL);
    if ( v217 )
    {
      v219 = v217;
      v220 = UserQuestEntity__getQuestPhase(v217, 0LL);
      if ( UserQuestEntity__getClearNum(v207, 0LL) || UserQuestEntity__getClearNum(v219, 0LL) != 1 )
        v223 = UserQuestEntity__IsResetStatus(v207, 0LL) && !UserQuestEntity__IsResetStatus(v219, 0LL);
      else
        v223 = 1;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v221);
      if ( !byte_4B13014 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v221, v222);
        byte_4B13014 = 1;
      }
      v224 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v221);
        v224 = TerminalPramsManager_TypeInfo;
      }
      v224->static_fields->_IsQuestClear_k__BackingField = v223;
      if ( !byte_4B13807 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v221, v222);
        v224 = TerminalPramsManager_TypeInfo;
        byte_4B13807 = 1;
      }
      if ( !v224->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v224, v221);
        v224 = TerminalPramsManager_TypeInfo;
      }
      v224->static_fields->_EventUIEffectClearQuestId_k__BackingField = v214;
      if ( !byte_4B13804 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v221, v222);
        v224 = TerminalPramsManager_TypeInfo;
        byte_4B13804 = 1;
      }
      if ( !v224->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v224, v221);
        v224 = TerminalPramsManager_TypeInfo;
      }
      v224->static_fields->_MapModelClearQuestId_k__BackingField = v214;
      if ( !byte_4B13805 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v221, v222);
        v224 = TerminalPramsManager_TypeInfo;
        byte_4B13805 = 1;
      }
      if ( !v224->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v224, v221);
        v224 = TerminalPramsManager_TypeInfo;
      }
      v224->static_fields->_MapModelClearPhaseCount_k__BackingField = v220;
      TerminalPramsManager__MapModelClearQuestInfo_SaveData((const MethodInfo *)v224);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !result )
        goto LABEL_1132;
      AdManager__TrackEvent((AdManager_o *)result, 4, 1, v214, v220, 0LL, 0LL);
      TerminalPramsManager__SendClearQuestToAdManager(v214, v220, v225);
    }
    else
    {
      v220 = 0;
    }
    v226 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v218);
    TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v226);
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1132;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
    if ( !result )
      goto LABEL_1132;
    ValidMessage = QuestMessageMaster__GetValidMessage((QuestMessageMaster_o *)result, v214, v220, 3, 0LL);
    v228 = TerminalPramsManager_TypeInfo;
    if ( ValidMessage )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      if ( !byte_4B12057 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v204);
        byte_4B12057 = 1;
      }
      v228 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        v228 = TerminalPramsManager_TypeInfo;
      }
      v228->static_fields->_IsDispOnly_k__BackingField = 1;
    }
    if ( !v228->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v228, isWin);
    if ( !byte_4B13815 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v204);
      byte_4B13815 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( result->m_Items[19]->fields.originalPhaseClearQp >= 1 )
    {
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result, isWin);
      if ( !byte_4B13815 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v204);
        byte_4B13815 = 1;
      }
      v229 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        v229 = TerminalPramsManager_TypeInfo;
      }
      TerminalPramsManager__SetQuestReleasedFocusState(
        v229->static_fields->_QuestReleaseFocusQuestId_k__BackingField,
        1,
        v204);
      TerminalPramsManager__SaveQuestReleasedFocusState(v230);
      if ( !byte_4B1339C )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v204);
        byte_4B1339C = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      result->m_Items[19]->fields.originalPhaseClearQp = 0;
    }
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result, isWin);
  if ( !byte_4B13016 )
  {
    result = (BattleResultComponent_resultData_array *)sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v204);
    byte_4B13016 = 1;
  }
  v231 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    v231 = TerminalPramsManager_TypeInfo;
  }
  if ( v231->static_fields->_IsQuestClear_k__BackingField )
  {
    if ( !v207 )
      goto LABEL_1132;
    v232 = v207->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1132;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !result )
      goto LABEL_1132;
    v235 = WarMaster__getByLastQuestId((WarMaster_o *)result, v232, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v233);
    if ( !byte_4B13017 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v233, v234);
      byte_4B13017 = 1;
    }
    v236 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v233);
      v236 = TerminalPramsManager_TypeInfo;
    }
    v236->static_fields->_IsWarClear_k__BackingField = v235 != 0LL;
    v238 = TerminalPramsManager__CheckIsOrdealCallWarClear(v235, v233);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    if ( v238 )
    {
      if ( !byte_4B13018 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v237);
        byte_4B13018 = 1;
      }
      v239 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        v239 = TerminalPramsManager_TypeInfo;
      }
      v240 = 1;
    }
    else
    {
      if ( !byte_4B13018 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v237);
        byte_4B13018 = 1;
      }
      v239 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        v239 = TerminalPramsManager_TypeInfo;
      }
      v240 = 0;
    }
    v239->static_fields->_IsOrdealCallWarClear_k__BackingField = v240;
    if ( !v239->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v239, isWin);
    if ( !byte_4B13019 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v237);
      byte_4B13019 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE3(result->m_Items[19]->fields.oldUserEvent) )
    {
      if ( !v235 )
        goto LABEL_1132;
      if ( !WarEntity__IsEvent(v235, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( !result )
          goto LABEL_1132;
        AdManager__TrackEvent((AdManager_o *)result, 6, 1, v235->fields.id, -1, 0LL, 0LL);
      }
    }
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !result )
      goto LABEL_1132;
    AdManager__TrackEvent((AdManager_o *)result, 5, 1, v232, -1, 0LL, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v241);
    TerminalPramsManager__SendOpenedQuestIdToAdManager(v232, v241);
    if ( !byte_4B13019 )
    {
      result = (BattleResultComponent_resultData_array *)sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v242);
      byte_4B13019 = 1;
    }
    v231 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      v231 = TerminalPramsManager_TypeInfo;
    }
    if ( v231->static_fields->_IsWarClear_k__BackingField )
    {
      if ( !v235 )
        goto LABEL_1132;
      HasFlag = WarEntity__HasFlag(v235, 128, 0LL);
      v231 = TerminalPramsManager_TypeInfo;
      if ( HasFlag )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        if ( !byte_4B1338F )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v244);
          byte_4B1338F = 1;
        }
        v231 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
          v231 = TerminalPramsManager_TypeInfo;
        }
        v231->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
        if ( !byte_4B1312C )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v244);
          v231 = TerminalPramsManager_TypeInfo;
          byte_4B1312C = 1;
        }
        if ( !v231->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v231, isWin);
          v231 = TerminalPramsManager_TypeInfo;
        }
        v231->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
      }
    }
  }
  if ( !v231->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v231, isWin);
  TerminalPramsManager__SetQuestRewardInfo(resulta, (const MethodInfo *)isWin);
  if ( !resulta->max_length )
    goto LABEL_1133;
  if ( !*m_Items )
    goto LABEL_1132;
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->panelEventPoint = HIDWORD((*m_Items)->m_Items[2]);
  static_fields->mResultEventPanelRewardInfos = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->mResultEventPanelRewardInfos,
    0LL,
    v245,
    v246,
    v247,
    v248,
    v249,
    v250);
  if ( !*p_max_length )
    goto LABEL_1133;
  if ( !*m_Items )
    goto LABEL_1132;
  v258 = (int64_t)(*m_Items)->m_Items[19];
  if ( v258 && *(_QWORD *)(v258 + 24) )
  {
    v259 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      v259 = TerminalPramsManager_TypeInfo;
    }
    p_mResultEventPanelRewardInfos = (PartyOrganizationUtility_o *)&v259->static_fields->mResultEventPanelRewardInfos;
    p_mResultEventPanelRewardInfos->klass = (PartyOrganizationUtility_c *)v258;
    sub_1BCA784(p_mResultEventPanelRewardInfos, v258, v252, v253, v254, v255, v256, v257);
  }
  v261 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    v261 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = (PartyOrganizationUtility_o *)&v261->static_fields->eventConquestInfos;
  p_eventConquestInfos->klass = 0LL;
  sub_1BCA784(p_eventConquestInfos, 0LL, v252, v253, v254, v255, v256, v257);
  TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v263);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1133;
  if ( !*m_Items || !result )
    goto LABEL_1132;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v752,
                                                       HIDWORD((*m_Items)->bounds),
                                                       (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( !*p_max_length )
    goto LABEL_1133;
  if ( !*m_Items )
    goto LABEL_1132;
  v270 = (int64_t)(*m_Items)->m_Items[43];
  if ( v270 && *(_QWORD *)(v270 + 24) )
  {
    v271 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      v271 = TerminalPramsManager_TypeInfo;
    }
    v272 = (PartyOrganizationUtility_o *)&v271->static_fields->eventConquestInfos;
    v272->klass = (PartyOrganizationUtility_c *)v270;
    sub_1BCA784(v272, v270, v264, v265, v266, v267, v268, v269);
    if ( v752 )
      Farm = EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v752, 0LL);
    else
      Farm = 0;
    v274 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      v274 = TerminalPramsManager_TypeInfo;
    }
    v274->static_fields->eventConquestInfoDisp = !Farm;
  }
  result = (BattleResultComponent_resultData_array *)v752;
  if ( v752 )
  {
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v752, 0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      if ( !byte_4B13016 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v264);
        byte_4B13016 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
      {
        v275 = 1;
      }
      else
      {
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result, isWin);
        if ( !byte_4B13013 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v264);
          byte_4B13013 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        v275 = BYTE6(result->m_Items[19]->fields.oldUserGame);
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result, isWin);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      BYTE1(result->m_Items[19][1].fields.raceResult) = v275;
    }
  }
  if ( !*p_max_length )
    goto LABEL_1133;
  if ( !*m_Items )
    goto LABEL_1132;
  if ( LOBYTE((*m_Items)->m_Items[46]) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    if ( !byte_4B1361E )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v264);
      byte_4B1361E = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(result->m_Items[19][1].monitor) = 1;
    if ( !byte_4B13016 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v264);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4B13016 = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      if ( !v207 )
        goto LABEL_1132;
      v276 = v207->fields.questId;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1132;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !result )
        goto LABEL_1132;
      v277 = WarMaster__getByLastQuestId((WarMaster_o *)result, v276, 0LL);
      if ( v277 )
      {
        id = v277->fields.id;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        if ( !byte_4B1361F )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v278);
          byte_4B1361F = 1;
        }
        v280 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
          v280 = TerminalPramsManager_TypeInfo;
        }
        v280->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = id;
      }
    }
  }
  v281 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    v281 = TerminalPramsManager_TypeInfo;
  }
  *(_QWORD *)&v281->static_fields->clearLastBattleRaidId = -1LL;
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1132;
  v282 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1132;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1133;
  if ( !*m_Items || !result )
    goto LABEL_1132;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)result,
          &v751,
          HIDWORD((*m_Items)->bounds),
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_588;
  result = (BattleResultComponent_resultData_array *)v751;
  if ( !v751 )
    goto LABEL_1132;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPoint((EventDetailEntity_o *)v751, 0LL);
  v295 = 0LL;
  v296 = &byte_4B12000;
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !*p_max_length )
      goto LABEL_1133;
    if ( !*m_Items )
      goto LABEL_1132;
    v295 = (int64_t)(*m_Items)->m_Items[10];
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
  if ( !byte_4B13816 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v289);
    byte_4B13816 = 1;
  }
  v297 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    v297 = TerminalPramsManager_TypeInfo;
  }
  p_OldUserEventPoint_k__BackingField = (PartyOrganizationUtility_o *)&v297->static_fields->_OldUserEventPoint_k__BackingField;
  p_OldUserEventPoint_k__BackingField->klass = (PartyOrganizationUtility_c *)v295;
  sub_1BCA784(p_OldUserEventPoint_k__BackingField, v295, v289, v290, v291, v292, v293, v294);
  if ( !*p_max_length )
    goto LABEL_1133;
  if ( !*m_Items || !v282 )
    goto LABEL_1132;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidGorupMax(
                                                       (EventRaidMaster_o *)v282,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0LL);
  if ( (int)result >= 1 )
  {
    if ( !*p_max_length )
      goto LABEL_1133;
    if ( !*m_Items )
      goto LABEL_1132;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                         (EventRaidMaster_o *)v282,
                                                         HIDWORD((*m_Items)->bounds),
                                                         0LL);
    v754 = 0;
    if ( !result )
      goto LABEL_1132;
    max_length = result->max_length;
    v300 = result;
    if ( max_length < 1 )
      goto LABEL_588;
    v301 = 0;
    while ( 1 )
    {
      if ( v301 >= (unsigned int)max_length )
        goto LABEL_1133;
      v302 = &v300->obj.klass + v301;
      v303 = v302[4];
      if ( !v303 )
        goto LABEL_1132;
      result = (BattleResultComponent_resultData_array *)EventRaidEntity__IsJumbleSingleRaid(
                                                           (EventRaidEntity_o *)v302[4],
                                                           0LL);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !*p_max_length )
          goto LABEL_1133;
        if ( !*m_Items )
          goto LABEL_1132;
        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                 (EventRaidMaster_o *)v282,
                                 HIDWORD((*m_Items)->bounds),
                                 (int32_t)v303->_1.namespaze,
                                 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        if ( !byte_4B12DC3 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v304);
          byte_4B12DC3 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( RaidGroupDeadQuestId == result->m_Items[19]->fields.eventId )
        {
          result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !result )
            goto LABEL_1132;
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
        goto LABEL_1133;
      if ( !*m_Items )
        goto LABEL_1132;
      result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidAliveQuestIds(
                                                           (EventRaidMaster_o *)v282,
                                                           HIDWORD((*m_Items)->bounds),
                                                           HIDWORD(v303->_1.name),
                                                           0LL);
      QuestId_k__BackingField = 0;
      if ( !result )
        goto LABEL_1132;
      v306 = result->max_length;
      v307 = result;
      if ( v306 >= 1 )
      {
        v308 = 0;
        while ( 1 )
        {
          if ( v308 >= (unsigned int)v306 )
            goto LABEL_1133;
          v309 = *((_DWORD *)v307->m_Items + v308);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
          if ( !byte_4B12DC3 )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v283);
            byte_4B12DC3 = 1;
          }
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          }
          v310 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
          if ( v309 == v310->_QuestId_k__BackingField )
            break;
          v308 = QuestId_k__BackingField + 1;
          QuestId_k__BackingField = v308;
          v306 = v307->max_length;
          if ( v308 >= v306 )
            goto LABEL_394;
        }
        name_high = HIDWORD(v303->_1.name);
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result, isWin);
          v310 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v310->clearBattleRaidId = name_high;
      }
LABEL_394:
      v301 = v754 + 1;
      v754 = v301;
      max_length = v300->max_length;
      if ( v301 >= max_length )
        goto LABEL_588;
    }
    v322 = TerminalPramsManager_TypeInfo;
    v323 = HIDWORD(v303->_1.name);
    goto LABEL_443;
  }
  result = (BattleResultComponent_resultData_array *)v751;
  if ( !v751 )
    goto LABEL_1132;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__isRaidDefeatCount(
                                                       (EventDetailEntity_o *)v751,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_array *)v751;
    if ( !v751 )
      goto LABEL_1132;
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventActivityPoint(
                                                         (EventDetailEntity_o *)v751,
                                                         0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !*p_max_length )
        goto LABEL_1133;
      if ( !*m_Items )
        goto LABEL_1132;
      v318 = (int32_t)(*m_Items)->m_Items[42];
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      if ( !byte_4B11137 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v283);
        byte_4B11137 = 1;
      }
      v319 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        v319 = TerminalPramsManager_TypeInfo;
      }
      v319->static_fields->_EventActivityPointEffectState_k__BackingField = v318;
    }
    else
    {
      result = (BattleResultComponent_resultData_array *)v751;
      if ( !v751 )
        goto LABEL_1132;
      if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v751, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        if ( !byte_4B13817 )
        {
          result = (BattleResultComponent_resultData_array *)sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v283);
          byte_4B13817 = 1;
        }
        v320 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
          v320 = TerminalPramsManager_TypeInfo;
        }
        if ( v320->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField )
        {
          v321 = 0;
        }
        else
        {
          if ( !*p_max_length )
            goto LABEL_1133;
          if ( !*m_Items )
            goto LABEL_1132;
          bounds_high = HIDWORD((*m_Items)->bounds);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, isWin);
          IsUserEventStatus = CondType__IsUserEventStatus(bounds_high, 7, 0LL);
          v320 = TerminalPramsManager_TypeInfo;
          v321 = IsUserEventStatus;
        }
        if ( !v320->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v320, isWin);
        if ( !byte_4B13543 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v283);
          byte_4B13543 = 1;
        }
        v339 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
          v339 = TerminalPramsManager_TypeInfo;
        }
        v339->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = v321;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)v751;
        if ( !v751 )
          goto LABEL_1132;
        if ( !EventDetailEntity__IsEventHappiness((EventDetailEntity_o *)v751, 0LL) )
          goto LABEL_470;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isWin);
        v326 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        if ( !byte_4B12DC3 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v325);
          byte_4B12DC3 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        eventId = result->m_Items[19]->fields.eventId;
        if ( !byte_4B12DCE )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v325);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          byte_4B12DCE = 1;
        }
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result, isWin);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( !v326 )
          goto LABEL_1132;
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)v326,
               &v749,
               eventId,
               LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
               0LL) )
        {
          result = (BattleResultComponent_resultData_array *)v749;
          if ( !v749 )
            goto LABEL_1132;
          v328 = QuestPhaseEntity__PlayHappinessCounterEffect(v749, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
          if ( !byte_4B13379 )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v283);
            byte_4B13379 = 1;
          }
          v329 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
            v329 = TerminalPramsManager_TypeInfo;
          }
          v329->static_fields->_PlayHappinessCounterEffect_k__BackingField = v328;
        }
        else
        {
LABEL_470:
          result = (BattleResultComponent_resultData_array *)v751;
          if ( !v751 )
            goto LABEL_1132;
          result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPanel(
                                                               (EventDetailEntity_o *)v751,
                                                               0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !*p_max_length )
              goto LABEL_1133;
            v332 = &byte_4B13000;
            if ( !*m_Items )
              goto LABEL_1132;
            v333 = (*m_Items)->m_Items[10];
            v754 = 0;
            if ( !v333 )
              goto LABEL_1132;
            v334 = (int)v333->fields.eventEndTitle;
            if ( v334 >= 1 )
            {
              v335 = 0;
              while ( 1 )
              {
                if ( v334 == v335 )
                  goto LABEL_1133;
                if ( !v751 )
                  goto LABEL_1132;
                v336 = *((_QWORD *)&v333->fields.eventEndMessage + v335);
                if ( !v336 )
                  goto LABEL_1132;
                if ( LODWORD(v751[1].klass) == *(_DWORD *)(v336 + 24) )
                  break;
                ++v335;
                v296 = &byte_4B12000;
                v754 = v335;
                if ( v334 == v335 )
                  goto LABEL_569;
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
              if ( !byte_4B12EBB )
              {
                sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v330);
                byte_4B12EBB = 1;
              }
              v341 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
                v341 = TerminalPramsManager_TypeInfo;
              }
              if ( !v341->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
              {
                v342 = (Il2CppObject *)sub_1BCAA2C(EventSaveData_TypeInfo, isWin, v330, v331);
                System_Object___ctor(v342, 0LL);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v343);
                if ( !byte_4B12EBC )
                {
                  sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v343, v344);
                  byte_4B12EBC = 1;
                }
                v350 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v343);
                  v350 = TerminalPramsManager_TypeInfo;
                }
                p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v350->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
                p_BeforeEventSubmarineSaveData_k__BackingField->klass = (PartyOrganizationUtility_c *)v342;
                sub_1BCA784(
                  p_BeforeEventSubmarineSaveData_k__BackingField,
                  (int64_t)v342,
                  v344,
                  v345,
                  v346,
                  v347,
                  v348,
                  v349);
                v341 = TerminalPramsManager_TypeInfo;
              }
              if ( !v341->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v341, isWin);
              if ( !byte_4B12EBB )
              {
                sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v330);
                byte_4B12EBB = 1;
              }
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              ultimateGetQpText = result->m_Items[19]->fields.ultimateGetQpText;
              if ( !ultimateGetQpText )
                goto LABEL_1132;
              ultimateGetQpText->fields._stringLength = *(_DWORD *)(v336 + 24);
              if ( !byte_4B12EBB )
              {
                sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v330);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
                byte_4B12EBB = 1;
              }
              if ( !LODWORD(result->m_Items[24]) )
              {
                j_il2cpp_runtime_class_init_0(result, isWin);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              v353 = result->m_Items[19]->fields.ultimateGetQpText;
              if ( !v353 )
                goto LABEL_1132;
              result = (BattleResultComponent_resultData_array *)v353[1].klass;
              if ( result
                && (result = (BattleResultComponent_resultData_array *)System_String__Split(
                                                                         (System_String_o *)result,
                                                                         0x2Cu,
                                                                         0,
                                                                         0LL)) != 0LL )
              {
                v354 = result->max_length;
                v355 = (__int64 *)&result->m_Items[1];
                if ( v354 <= 1 )
                  v355 = &StringLiteral_1209/*"0"*/;
                v356 = *v355;
                v357 = v354 <= 2 ? (System_String_o **)&StringLiteral_1209/*"0"*/ : (System_String_o **)&result->m_Items[2];
                progressQuestId = *v357;
                v358 = v354 <= 3 ? &StringLiteral_6725/*"False"*/ : (void **)&result->m_Items[3];
              }
              else
              {
                v356 = StringLiteral_1209/*"0"*/;
                v358 = &StringLiteral_6725/*"False"*/;
                progressQuestId = (System_String_o *)StringLiteral_1209/*"0"*/;
              }
              if ( !v751 )
                goto LABEL_1132;
              v738 = (System_String_o *)v356;
              v359 = (System_String_o *)*v358;
              v360 = (int32_t)v751[1].klass;
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, isWin);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
                                                                   v360,
                                                                   0LL);
              v363 = (System_Collections_Generic_List_object__o *)result;
              v364 = TerminalPramsManager___c_TypeInfo;
              if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo, isWin);
                v364 = TerminalPramsManager___c_TypeInfo;
              }
              _9__688_0 = (System_Predicate_object__o *)v364->static_fields->__9__688_0;
              if ( !_9__688_0 )
              {
                v737 = v359;
                if ( !v364->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v364, isWin);
                  v364 = TerminalPramsManager___c_TypeInfo;
                }
                v366 = (Il2CppObject *)v364->static_fields->__9;
                _9__688_0 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                            System_Predicate_QuestReleaseEntity__TypeInfo,
                                                            isWin,
                                                            v361,
                                                            v362);
                System_Predicate_object____ctor(
                  _9__688_0,
                  v366,
                  Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__688_0__,
                  0LL);
                v367 = TerminalPramsManager___c_TypeInfo->static_fields;
                v367->__9__688_0 = (struct System_Predicate_QuestReleaseEntity__o *)_9__688_0;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v367->__9__688_0,
                  (int64_t)_9__688_0,
                  v368,
                  v369,
                  v370,
                  v371,
                  v372,
                  v373);
                v359 = v737;
              }
              if ( !v363 )
                goto LABEL_1132;
              v376 = v738;
              if ( System_Collections_Generic_List_object___Find(
                     v363,
                     (System_Predicate_T__o *)_9__688_0,
                     (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v374);
                if ( !byte_4B12DC3 )
                {
                  sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v374, v375);
                  byte_4B12DC3 = 1;
                }
                v377 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v374);
                  v377 = TerminalPramsManager_TypeInfo;
                }
                QuestId_k__BackingField = v377->static_fields->_QuestId_k__BackingField;
                v376 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v374);
              if ( !byte_4B12EBB )
              {
                sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v374, v375);
                byte_4B12EBB = 1;
              }
              v378 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v374);
                v378 = TerminalPramsManager_TypeInfo;
              }
              BeforeEventSubmarineSaveData_k__BackingField = v378->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
              v381 = System_Int64__ToString(v336 + 32, 0LL);
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v380);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_37809356(
                                                                   v381,
                                                                   v376,
                                                                   progressQuestId,
                                                                   v359,
                                                                   0LL);
              v296 = &byte_4B12000;
              if ( !BeforeEventSubmarineSaveData_k__BackingField )
                goto LABEL_1132;
              BeforeEventSubmarineSaveData_k__BackingField->fields.value = (struct System_String_o *)result;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&BeforeEventSubmarineSaveData_k__BackingField->fields.value,
                (int64_t)result,
                v382,
                v383,
                v384,
                v385,
                v386,
                v387);
              v332 = &byte_4B13000;
            }
LABEL_569:
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
            if ( !byte_4B12DC3 )
            {
              sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v330);
              byte_4B12DC3 = 1;
            }
            v388 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
              v388 = TerminalPramsManager_TypeInfo;
            }
            v389 = v388->static_fields->_QuestId_k__BackingField;
            if ( !v296[3534] )
            {
              sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v330);
              v388 = TerminalPramsManager_TypeInfo;
              v296[3534] = 1;
            }
            if ( !v388->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v388, isWin);
              v388 = TerminalPramsManager_TypeInfo;
            }
            PhaseCnt_k__BackingField = v388->static_fields->_PhaseCnt_k__BackingField;
            if ( !v332[22] )
            {
              sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v330);
              v388 = TerminalPramsManager_TypeInfo;
              v332[22] = 1;
            }
            if ( !v388->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v388, isWin);
              v388 = TerminalPramsManager_TypeInfo;
            }
            IsQuestClear_k__BackingField = v388->static_fields->_IsQuestClear_k__BackingField;
            if ( !byte_4B13013 )
            {
              sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v330);
              v388 = TerminalPramsManager_TypeInfo;
              byte_4B13013 = 1;
            }
            if ( !v388->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v388, isWin);
              v388 = TerminalPramsManager_TypeInfo;
            }
            SubmarineSaveParamsManager__SaveClearQuestInfo(
              v389,
              PhaseCnt_k__BackingField,
              IsQuestClear_k__BackingField,
              v388->static_fields->_IsPhaseClear_k__BackingField,
              0LL);
          }
          else
          {
            result = (BattleResultComponent_resultData_array *)v751;
            if ( !v751 )
              goto LABEL_1132;
            if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)v751, 0LL) )
            {
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
              if ( !byte_4B1380A )
              {
                sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v283);
                byte_4B1380A = 1;
              }
              v340 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
                v340 = TerminalPramsManager_TypeInfo;
              }
              v340->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
            }
          }
        }
      }
    }
    goto LABEL_588;
  }
  if ( !*p_max_length )
    goto LABEL_1133;
  if ( !*m_Items )
    goto LABEL_1132;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                       (EventRaidMaster_o *)v282,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0LL);
  v754 = 0;
  if ( !result )
    goto LABEL_1132;
  v312 = result->max_length;
  v313 = result;
  if ( v312 >= 1 )
  {
    v314 = 0;
    while ( 1 )
    {
      if ( v314 >= (unsigned int)v312 || !*p_max_length )
        goto LABEL_1133;
      if ( !*m_Items )
        goto LABEL_1132;
      v315 = v313->m_Items[v314];
      if ( !v315 )
        goto LABEL_1132;
      RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                          (EventRaidMaster_o *)v282,
                          HIDWORD((*m_Items)->bounds),
                          v315->fields.eventId,
                          0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      if ( !byte_4B12DC3 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v283);
        byte_4B12DC3 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v317 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( RaidDeadQuestId == v317->_QuestId_k__BackingField )
        break;
      v314 = v754 + 1;
      v754 = v314;
      v312 = v313->max_length;
      if ( v314 >= v312 )
        goto LABEL_588;
    }
    v324 = v315->fields.eventId;
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result, isWin);
      v317 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v317->clearBattleRaidId = v324;
    result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !result )
      goto LABEL_1132;
    if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)result, RaidDeadQuestId, 0, 0LL) )
    {
      v322 = TerminalPramsManager_TypeInfo;
      v323 = v315->fields.eventId;
LABEL_443:
      if ( !v322->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v322, isWin);
        v322 = TerminalPramsManager_TypeInfo;
      }
      v322->static_fields->clearLastBattleRaidId = v323;
    }
  }
LABEL_588:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
  if ( !byte_4B13384 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v283);
    byte_4B13384 = 1;
  }
  v392 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    v392 = TerminalPramsManager_TypeInfo;
  }
  v392->static_fields->_IsWarBoardClear_k__BackingField = 0;
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v283);
    v392 = TerminalPramsManager_TypeInfo;
    byte_4B12DC3 = 1;
  }
  if ( !v392->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v392, isWin);
    v392 = TerminalPramsManager_TypeInfo;
  }
  if ( v392->static_fields->_QuestId_k__BackingField >= 1 )
  {
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1132;
    v394 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v393);
      byte_4B12DC3 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v394 )
      goto LABEL_1132;
    result = (BattleResultComponent_resultData_array *)QuestMaster__getQuestEntity(
                                                         (QuestMaster_o *)v394,
                                                         result->m_Items[19]->fields.eventId,
                                                         0LL);
    if ( !result )
      goto LABEL_1132;
    v395 = (int)result->m_Items[1];
    if ( !byte_4B13384 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v283);
      byte_4B13384 = 1;
    }
    v392 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      v392 = TerminalPramsManager_TypeInfo;
    }
    v392->static_fields->_IsWarBoardClear_k__BackingField = v395 == 7;
  }
  if ( !v392->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v392, isWin);
  if ( !byte_4B1361D )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v283);
    byte_4B1361D = 1;
  }
  v396 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    v396 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeRelease_k__BackingField = (PartyOrganizationUtility_o *)&v396->static_fields->_questClearCostumeRelease_k__BackingField;
  p_questClearCostumeRelease_k__BackingField->klass = 0LL;
  sub_1BCA784(p_questClearCostumeRelease_k__BackingField, 0LL, v283, v284, v285, v286, v287, v288);
  if ( !*p_max_length )
    goto LABEL_1133;
  if ( !*m_Items )
    goto LABEL_1132;
  v404 = (*m_Items)->m_Items[22];
  if ( v404 && v404->fields.eventEndTitle )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    if ( !byte_4B13375 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v398);
      byte_4B13375 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !LOBYTE(result->m_Items[19]->fields.resultQuestPhaseRewardInfos) )
    {
      if ( !*p_max_length )
        goto LABEL_1133;
      if ( !*m_Items )
        goto LABEL_1132;
      v405 = (int64_t)(*m_Items)->m_Items[22];
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result, isWin);
      if ( !byte_4B1361D )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v398);
        byte_4B1361D = 1;
      }
      v406 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        v406 = TerminalPramsManager_TypeInfo;
      }
      v407 = (PartyOrganizationUtility_o *)&v406->static_fields->_questClearCostumeRelease_k__BackingField;
      v407->klass = (PartyOrganizationUtility_c *)v405;
      sub_1BCA784(v407, v405, v398, v399, v400, v401, v402, v403);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
  if ( !byte_4B13382 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v398);
    byte_4B13382 = 1;
  }
  v408 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    v408 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeGet_k__BackingField = (PartyOrganizationUtility_o *)&v408->static_fields->_questClearCostumeGet_k__BackingField;
  p_questClearCostumeGet_k__BackingField->klass = 0LL;
  sub_1BCA784(p_questClearCostumeGet_k__BackingField, 0LL, v398, v399, v400, v401, v402, v403);
  if ( !*p_max_length )
    goto LABEL_1133;
  if ( !*m_Items )
    goto LABEL_1132;
  v416 = (int64_t)(*m_Items)->m_Items[23];
  if ( v416 && *(_QWORD *)(v416 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    if ( !byte_4B13382 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v410);
      byte_4B13382 = 1;
    }
    v417 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      v417 = TerminalPramsManager_TypeInfo;
    }
    v418 = (PartyOrganizationUtility_o *)&v417->static_fields->_questClearCostumeGet_k__BackingField;
    v418->klass = (PartyOrganizationUtility_c *)v416;
    sub_1BCA784(v418, v416, v410, v411, v412, v413, v414, v415);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
  if ( !byte_4B13818 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v410);
    byte_4B13818 = 1;
  }
  v419 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    v419 = TerminalPramsManager_TypeInfo;
  }
  p_eventPointWinReward_k__BackingField = (PartyOrganizationUtility_o *)&v419->static_fields->_eventPointWinReward_k__BackingField;
  p_eventPointWinReward_k__BackingField->klass = 0LL;
  sub_1BCA784(p_eventPointWinReward_k__BackingField, 0LL, v410, v411, v412, v413, v414, v415);
  if ( !byte_4B13819 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v421);
    byte_4B13819 = 1;
  }
  v427 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    v427 = TerminalPramsManager_TypeInfo;
  }
  v427->static_fields->_eventPointWinType_k__BackingField = 0;
  if ( v207 && v751 && HIDWORD(v751[9].klass) == 4 )
  {
    v428 = v207->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1132;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !result )
      goto LABEL_1132;
    v429 = (QuestGroupMaster_o *)result;
    GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)result, v428, 4, 0LL);
    v432 = TerminalPramsManager_TypeInfo;
    v433 = GroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v431);
      v432 = TerminalPramsManager_TypeInfo;
    }
    v432->static_fields->joinGroupId = v433;
    v434 = QuestGroupMaster__GetGroupId(v429, v428, 3, 0LL);
    if ( !byte_4B13016 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v421);
      byte_4B13016 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( v434 >= 1 && BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1132;
      v435 = DataManager__GetMasterData_object_(
               (DataManager_o *)result,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1132;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointMaster___);
      if ( !*p_max_length )
        goto LABEL_1133;
      if ( !*m_Items || !result )
        goto LABEL_1132;
      result = (BattleResultComponent_resultData_array *)EventPointMaster__GetEntity(
                                                           (EventPointMaster_o *)result,
                                                           v434,
                                                           HIDWORD((*m_Items)->bounds),
                                                           0LL);
      v436 = (EventPointEntity_o *)result;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      if ( !v436 )
        goto LABEL_1132;
      result = (BattleResultComponent_resultData_array *)EventPointEntity__IsGroupOnGroup1(
                                                           v436,
                                                           TerminalPramsManager_TypeInfo->static_fields->joinGroupId,
                                                           0LL);
      if ( !v435 )
        goto LABEL_1132;
      v437 = QuestReleaseMaster__EventPointWinActionType(
               (QuestReleaseMaster_o *)v435,
               v428,
               (unsigned __int8)result & 1,
               0LL);
      if ( !byte_4B13819 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v421);
        byte_4B13819 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(result->m_Items[19]->fields.warClearReward) = v437;
      if ( !byte_4B1381A )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v421);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        byte_4B1381A = 1;
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result, isWin);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v438 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( v438->_eventPointWinType_k__BackingField )
      {
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result, isWin);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          v438 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v438->joinGroupId = -1;
      }
    }
    if ( !*p_max_length )
      goto LABEL_1133;
    if ( !*m_Items )
      goto LABEL_1132;
    v439 = (*m_Items)->m_Items[20];
    if ( v439 )
    {
      v440 = v439->fields.eventEndTitle;
      if ( v440 )
      {
        if ( !(_DWORD)v440 )
          goto LABEL_1133;
        v441 = (int64_t)v439->fields.eventEndMessage;
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result, isWin);
        if ( !byte_4B13818 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v421);
          byte_4B13818 = 1;
        }
        v442 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
          v442 = TerminalPramsManager_TypeInfo;
        }
        v443 = (PartyOrganizationUtility_o *)&v442->static_fields->_eventPointWinReward_k__BackingField;
        v443->klass = (PartyOrganizationUtility_c *)v441;
        sub_1BCA784(v443, v441, v421, v422, v423, v424, v425, v426);
      }
    }
  }
  if ( v207 && v751 && HIDWORD(v751[9].klass) == 6 )
  {
    v444 = v207->fields.questId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    if ( !byte_4B1381B )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v421);
      byte_4B1381B = 1;
    }
    v445 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      v445 = TerminalPramsManager_TypeInfo;
    }
    v445->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = v444;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
  if ( !byte_4B1353E )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v421);
    byte_4B1353E = 1;
  }
  v446 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    v446 = TerminalPramsManager_TypeInfo;
  }
  p_eventRaceBoost_k__BackingField = (PartyOrganizationUtility_o *)&v446->static_fields->_eventRaceBoost_k__BackingField;
  p_eventRaceBoost_k__BackingField->klass = 0LL;
  sub_1BCA784(p_eventRaceBoost_k__BackingField, 0LL, v421, v422, v423, v424, v425, v426);
  v454 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1133;
  if ( !*m_Items )
    goto LABEL_1132;
  v455 = (int64_t)(*m_Items)->m_Items[21];
  if ( v455 && *(int *)(v455 + 16) >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    if ( !byte_4B1353E )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v448);
      byte_4B1353E = 1;
    }
    v456 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      v456 = TerminalPramsManager_TypeInfo;
    }
    v457 = (PartyOrganizationUtility_o *)&v456->static_fields->_eventRaceBoost_k__BackingField;
    v457->klass = (PartyOrganizationUtility_c *)v455;
    sub_1BCA784(v457, v455, v448, v449, v450, v451, v452, v453);
    if ( !byte_4B13527 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v448);
      byte_4B13527 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v458 = *(_QWORD *)&result->m_Items[19]->fields.followerType;
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v448);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4B12DC3 = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v458 )
      goto LABEL_1132;
    *(_DWORD *)(v458 + 28) = result->m_Items[19]->fields.eventId;
    v454 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v454 )
    goto LABEL_1133;
  if ( !*m_Items )
    goto LABEL_1132;
  v459 = (*m_Items)->m_Items[24];
  if ( v459 )
  {
    v460 = v459->fields.eventEndTitle;
    if ( v460 )
    {
      if ( !(_DWORD)v460 )
        goto LABEL_1133;
      v461 = (int64_t)v459->fields.eventEndMessage;
      if ( !v461 )
        goto LABEL_1132;
      if ( *(int *)(v461 + 16) >= 1 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        if ( !byte_4B1381C )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v448);
          byte_4B1381C = 1;
        }
        v462 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
          v462 = TerminalPramsManager_TypeInfo;
        }
        p_eventTowerReward_k__BackingField = (PartyOrganizationUtility_o *)&v462->static_fields->_eventTowerReward_k__BackingField;
        p_eventTowerReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v461;
        sub_1BCA784(p_eventTowerReward_k__BackingField, v461, v448, v449, v450, v451, v452, v453);
        if ( !*p_max_length )
          goto LABEL_1133;
        if ( !*m_Items )
          goto LABEL_1132;
        v470 = (int64_t)(*m_Items)->m_Items[25];
        if ( !byte_4B1381D )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v464);
          byte_4B1381D = 1;
        }
        v471 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
          v471 = TerminalPramsManager_TypeInfo;
        }
        p_resultEventTowerRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v471->static_fields->_resultEventTowerRewardInfo_k__BackingField;
        p_resultEventTowerRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v470;
        sub_1BCA784(p_resultEventTowerRewardInfo_k__BackingField, v470, v464, v465, v466, v467, v468, v469);
        v454 = *(_QWORD *)p_max_length;
      }
    }
  }
  if ( !(_DWORD)v454 )
    goto LABEL_1133;
  if ( !*m_Items )
    goto LABEL_1132;
  v473 = (int64_t)(*m_Items)->m_Items[26];
  if ( v473 && *(_QWORD *)(v473 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    if ( !byte_4B1337C )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v448);
      byte_4B1337C = 1;
    }
    v474 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      v474 = TerminalPramsManager_TypeInfo;
    }
    p_resultBoostItemRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v474->static_fields->_resultBoostItemRewardInfo_k__BackingField;
    p_resultBoostItemRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v473;
    sub_1BCA784(p_resultBoostItemRewardInfo_k__BackingField, v473, v448, v449, v450, v451, v452, v453);
    v454 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v454 )
    goto LABEL_1133;
  if ( !*m_Items )
    goto LABEL_1132;
  v476 = (int64_t)(*m_Items)->m_Items[27];
  if ( v476 && *(_QWORD *)(v476 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    if ( !byte_4B1337D )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v448);
      byte_4B1337D = 1;
    }
    v477 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      v477 = TerminalPramsManager_TypeInfo;
    }
    p_resultEventBoardGameTokenRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v477->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
    p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v476;
    sub_1BCA784(p_resultEventBoardGameTokenRewardInfo_k__BackingField, v476, v448, v449, v450, v451, v452, v453);
    v454 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v454 )
    goto LABEL_1133;
  if ( !*m_Items )
    goto LABEL_1132;
  v479 = (int64_t)(*m_Items)->m_Items[28];
  if ( v479 && *(_QWORD *)(v479 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    if ( !byte_4B13387 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v448);
      byte_4B13387 = 1;
    }
    v480 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      v480 = TerminalPramsManager_TypeInfo;
    }
    p_warClearReward_k__BackingField = (PartyOrganizationUtility_o *)&v480->static_fields->_warClearReward_k__BackingField;
    p_warClearReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v479;
    sub_1BCA784(p_warClearReward_k__BackingField, v479, v448, v449, v450, v451, v452, v453);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
  if ( !byte_4B1381E )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v448);
    byte_4B1381E = 1;
  }
  v482 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    v482 = TerminalPramsManager_TypeInfo;
  }
  v483 = v482->static_fields;
  v483->_oldSuperBoss_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v483->_oldSuperBoss_k__BackingField,
    0LL,
    v448,
    v449,
    v450,
    v451,
    v452,
    v453);
  if ( !byte_4B1381F )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v484, v485);
    byte_4B1381F = 1;
  }
  v491 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v484);
    v491 = TerminalPramsManager_TypeInfo;
  }
  v492 = v491->static_fields;
  v492->_oldPersonalBoss_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v492->_oldPersonalBoss_k__BackingField,
    0LL,
    v485,
    v486,
    v487,
    v488,
    v489,
    v490);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v493);
    byte_4B12DC3 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_1132;
  WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, result->m_Items[19]->fields.eventId, 0LL);
  result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !result )
    goto LABEL_1132;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)result, WarID_ByQuestID, 0LL);
  if ( WarEntityByWarID )
    v498 = WarEntityByWarID->fields.eventId;
  else
    v498 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v497);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !result )
    goto LABEL_1132;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v748,
                                                       v498,
                                                       (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( v740 )
    goto LABEL_1137;
  if ( !*p_max_length )
    goto LABEL_1133;
  result = *m_Items;
  if ( !*m_Items )
    goto LABEL_1132;
  result = (BattleResultComponent_resultData_array *)BattleResultComponent_resultData__checkResultDispFlag(
                                                       (BattleResultComponent_resultData_o *)result,
                                                       256,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
LABEL_1137:
    v505 = *(_QWORD *)p_max_length;
    if ( !(unsigned int)*(_QWORD *)p_max_length )
      goto LABEL_1133;
    if ( !*m_Items )
      goto LABEL_1132;
    if ( (*m_Items)->m_Items[41] )
    {
      result = (BattleResultComponent_resultData_array *)v748;
      if ( v748
        && (result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsPersonalBoss(
                                                                 (EventDetailEntity_o *)v748,
                                                                 0LL),
            v505 = *(_QWORD *)p_max_length,
            ((unsigned __int8)result & 1) != 0) )
      {
        if ( !(_DWORD)v505 )
          goto LABEL_1133;
        if ( !*m_Items )
          goto LABEL_1132;
        v506 = (int64_t)(*m_Items)->m_Items[41];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        if ( !byte_4B1381F )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v499);
          byte_4B1381F = 1;
        }
        v507 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
          v507 = TerminalPramsManager_TypeInfo;
        }
        v508 = v507->static_fields;
        v508->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v506;
        p_oldPersonalBoss_k__BackingField = (PartyOrganizationUtility_o *)&v508->_oldPersonalBoss_k__BackingField;
      }
      else
      {
        if ( !(_DWORD)v505 )
          goto LABEL_1133;
        if ( !*m_Items )
          goto LABEL_1132;
        v506 = (int64_t)(*m_Items)->m_Items[41];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        if ( !byte_4B1381E )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v499);
          byte_4B1381E = 1;
        }
        v510 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
          v510 = TerminalPramsManager_TypeInfo;
        }
        v511 = v510->static_fields;
        v511->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v506;
        p_oldPersonalBoss_k__BackingField = (PartyOrganizationUtility_o *)&v511->_oldSuperBoss_k__BackingField;
      }
      sub_1BCA784(p_oldPersonalBoss_k__BackingField, v506, v499, v500, v501, v502, v503, v504);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
  if ( !byte_4B13820 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v499);
    byte_4B13820 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !result->m_Items[19]->fields.eventTowerReward )
    goto LABEL_1138;
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result, isWin);
  if ( !byte_4B13820 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v499);
    byte_4B13820 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  eventTowerReward = result->m_Items[19]->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_1132;
  if ( *(_QWORD *)&eventTowerReward->max_length )
  {
    v513 = 1;
  }
  else
  {
LABEL_1138:
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result, isWin);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v499);
      byte_4B12DC3 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v514 = BalanceConfig_TypeInfo;
    v515 = result->m_Items[19]->fields.eventId;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isWin);
      v514 = BalanceConfig_TypeInfo;
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v513 = v515 == v514->static_fields->OrtFirstQuestId;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result, isWin);
  if ( !byte_4B13395 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v499);
    byte_4B13395 = 1;
  }
  v516 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    v516 = TerminalPramsManager_TypeInfo;
  }
  v516->static_fields->_isIncomingCall_k__BackingField = v513;
  if ( v748 && EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)v748, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v517);
      byte_4B12DC3 = 1;
    }
    v518 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      v518 = TerminalPramsManager_TypeInfo;
    }
    v519 = BalanceConfig_TypeInfo;
    v520 = v518->static_fields->_QuestId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isWin);
      v519 = BalanceConfig_TypeInfo;
    }
    if ( v520 == v519->static_fields->OrtLateQuestId )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      if ( !byte_4B12DCE )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v517);
        byte_4B12DCE = 1;
      }
      v521 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        v521 = TerminalPramsManager_TypeInfo;
      }
      v522 = BalanceConfig_TypeInfo;
      v523 = v521->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isWin);
        v522 = BalanceConfig_TypeInfo;
      }
      if ( v523 + 1 == v522->static_fields->OrtLatePhaseBreak )
        goto LABEL_1139;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      if ( !byte_4B12DCE )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v517);
        byte_4B12DCE = 1;
      }
      v524 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        v524 = TerminalPramsManager_TypeInfo;
      }
      v525 = BalanceConfig_TypeInfo;
      v526 = v524->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isWin);
        v525 = BalanceConfig_TypeInfo;
      }
      if ( v526 + 1 == v525->static_fields->OrtLatePhaseDead )
      {
LABEL_1139:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isWin);
        v528 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserSuperBossMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v527);
        result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
        v529 = result;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isWin);
        if ( !v528 )
          goto LABEL_1132;
        if ( UserSuperBossMaster__TryGetEntity(
               (UserSuperBossMaster_o *)v528,
               &v747,
               (int64_t)v529,
               v498,
               BalanceConfig_TypeInfo->static_fields->OrtThirdFormId,
               0LL) )
        {
          result = (BattleResultComponent_resultData_array *)sub_1BCA888(UserSuperBossEntity___TypeInfo, 1LL);
          if ( !result )
            goto LABEL_1132;
          v536 = v747;
          v537 = result;
          if ( v747 )
          {
            result = (BattleResultComponent_resultData_array *)sub_1BCA91C(v747, result->obj.klass->_1.element_class);
            if ( !result )
            {
LABEL_1134:
              v736 = sub_1BCAA60();
              sub_1BCA908(v736, 0LL);
            }
          }
          if ( !v537->max_length )
            goto LABEL_1133;
          v537->m_Items[0] = (BattleResultComponent_resultData_o *)v536;
          sub_1BCA784((PartyOrganizationUtility_o *)v537->m_Items, (int64_t)v536, v530, v531, v532, v533, v534, v535);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v538);
          if ( !byte_4B1381F )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v538, v539);
            byte_4B1381F = 1;
          }
          v545 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v538);
            v545 = TerminalPramsManager_TypeInfo;
          }
          v546 = v545->static_fields;
          v546->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v537;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v546->_oldPersonalBoss_k__BackingField,
            (int64_t)v537,
            v539,
            v540,
            v541,
            v542,
            v543,
            v544);
        }
      }
    }
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, isWin);
  TalkResumeInfo = ScriptManager__GetTalkResumeInfo(0LL);
  if ( TalkResumeInfo )
  {
    v548 = TalkResumeInfo;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1132;
    v550 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v549);
      byte_4B12DC3 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v550 )
      goto LABEL_1132;
    ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)v550, result->m_Items[19]->fields.eventId, 0LL);
    v554 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !byte_4B12DCE )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v552, v553);
      byte_4B12DCE = 1;
    }
    v555 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v552);
      v555 = TerminalPramsManager_TypeInfo;
    }
    v556 = v555->static_fields->_PhaseCnt_k__BackingField;
    winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v548, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v557);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd2(
                                                         ScriptQuestId,
                                                         v556 + 1,
                                                         winResult,
                                                         0LL);
    if ( !v554 )
      goto LABEL_1132;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v554, (System_String_o *)result, 0LL) )
      goto LABEL_959;
    v568 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v566);
    if ( !byte_4B12DCE )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v566, v567);
      byte_4B12DCE = 1;
    }
    v569 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v566);
      v569 = TerminalPramsManager_TypeInfo;
    }
    v570 = v569->static_fields->_PhaseCnt_k__BackingField;
    v572 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v548, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v571);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd(
                                                         ScriptQuestId,
                                                         v570 + 1,
                                                         v572,
                                                         0LL);
    if ( !v568 )
      goto LABEL_1132;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v568, (System_String_o *)result, 0LL) )
    {
LABEL_959:
      v573 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v559);
        v573 = TerminalPramsManager_TypeInfo;
      }
      v574 = StringLiteral_1/*""*/;
      p_lastPlayBgmName = (PartyOrganizationUtility_o *)&v573->static_fields->lastPlayBgmName;
      p_lastPlayBgmName->klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
      sub_1BCA784(p_lastPlayBgmName, (int64_t)v574, v560, v561, v562, v563, v564, v565);
      TerminalPramsManager__LastPlayBgmNameSave_SaveData(v576);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1132;
  v578 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v577);
    byte_4B12DC3 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v579 = result->m_Items[19]->fields.eventId;
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v577);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4B12DCE = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v578 )
    goto LABEL_1132;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)v578,
    &v755,
    v579,
    LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
    0LL);
  if ( !byte_4B13821 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v580);
    byte_4B13821 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( result->m_Items[19]->fields.costumeReleaseAnnounce )
  {
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result, isWin);
    if ( !byte_4B13821 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v580);
      byte_4B13821 = 1;
    }
    v586 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      v586 = TerminalPramsManager_TypeInfo;
    }
    result = (BattleResultComponent_resultData_array *)v586->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
    if ( !result )
      goto LABEL_1132;
    *(_QWORD *)&result->max_length = 0LL;
    v587 = &result->max_length;
    *((_QWORD *)v587 - 1) = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)v587, 0LL, v580, v581, v582, v583, v584, v585);
  }
  if ( !*p_max_length )
    goto LABEL_1133;
  if ( !*m_Items )
    goto LABEL_1132;
  v588 = HIDWORD((*m_Items)->bounds);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v580);
    byte_4B12DC3 = 1;
  }
  v589 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    v589 = TerminalPramsManager_TypeInfo;
  }
  v590 = v589->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v580);
    v589 = TerminalPramsManager_TypeInfo;
    byte_4B12DCE = 1;
  }
  if ( !v589->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v589, isWin);
    v589 = TerminalPramsManager_TypeInfo;
  }
  SpecifiedSceneInfo = QuestPhaseMaster__GetSpecifiedSceneInfo(
                         (QuestPhaseMaster_o *)v578,
                         v588,
                         v590,
                         v589->static_fields->_PhaseCnt_k__BackingField + 1,
                         0LL);
  if ( !byte_4B13801 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v591, v592);
    byte_4B13801 = 1;
  }
  v599 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v591);
    v599 = TerminalPramsManager_TypeInfo;
  }
  v600 = v599->static_fields;
  v600->_SpecifiedChangeSceneInfo_k__BackingField = SpecifiedSceneInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v600->_SpecifiedChangeSceneInfo_k__BackingField,
    (int64_t)SpecifiedSceneInfo,
    v592,
    v593,
    v594,
    v595,
    v596,
    v597);
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId = 0LL;
  TerminalPramsManager__InitTipsArchiveScrollValueList(v601);
  if ( !*p_max_length )
    goto LABEL_1133;
  if ( !*m_Items )
    goto LABEL_1132;
  v608 = (int32_t)(*m_Items)->m_Items[52];
  v609 = TerminalPramsManager_TypeInfo;
  if ( v608 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    if ( !byte_4B13377 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v602);
      byte_4B13377 = 1;
    }
    v609 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      v609 = TerminalPramsManager_TypeInfo;
    }
    v609->static_fields->_EventMuralId_k__BackingField = v608;
  }
  if ( !v609->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v609, isWin);
    v609 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = (PartyOrganizationUtility_o *)&v609->static_fields->eventHarvestGrowthInfo;
  p_eventHarvestGrowthInfo->klass = 0LL;
  sub_1BCA784(p_eventHarvestGrowthInfo, 0LL, v602, v603, v604, v605, v606, v607);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v611, v612);
    byte_4B12DC3 = 1;
  }
  v613 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v611);
    v613 = TerminalPramsManager_TypeInfo;
  }
  result = (BattleResultComponent_resultData_array *)QuestPhaseMaster__GetEntity(
                                                       (QuestPhaseMaster_o *)v578,
                                                       v613->static_fields->_QuestId_k__BackingField,
                                                       1,
                                                       0LL);
  if ( !result )
    goto LABEL_1132;
  v614 = result;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(
                     (QuestPhaseEntity_o *)result,
                     (System_String_o *)StringLiteral_20089/*"harvestGrowthBeforeQuestId"*/,
                     -1,
                     0LL);
  v616 = QuestPhaseEntity__getScriptIntParam(
           (QuestPhaseEntity_o *)v614,
           (System_String_o *)StringLiteral_20088/*"harvestGrowthAfterQuestId"*/,
           -1,
           0LL);
  if ( ScriptIntParam >= 1 )
  {
    v620 = v616;
    if ( v616 >= 1 )
    {
      v621 = sub_1BCAA2C(EventHarvestGrowthInfo_TypeInfo, v617, v618, v619);
      System_Object___ctor((Il2CppObject *)v621, 0LL);
      if ( !v621 )
        goto LABEL_1132;
      bounds = v614->bounds;
      *(_DWORD *)(v621 + 24) = ScriptIntParam;
      *(_DWORD *)(v621 + 28) = v620;
      *(_QWORD *)(v621 + 16) = bounds;
      v629 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        v629 = TerminalPramsManager_TypeInfo;
      }
      v630 = (PartyOrganizationUtility_o *)&v629->static_fields->eventHarvestGrowthInfo;
      v630->klass = (PartyOrganizationUtility_c *)v621;
      sub_1BCA784(v630, v621, v622, v623, v624, v625, v626, v627);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1132;
  v632 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v631);
    byte_4B12DC3 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v632 )
    goto LABEL_1132;
  QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)v632, result->m_Items[19]->fields.eventId, 0LL);
  if ( QuestEntity )
  {
    v640 = QuestEntity;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v634);
      byte_4B12DC3 = 1;
    }
    v641 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      v641 = TerminalPramsManager_TypeInfo;
    }
    if ( QuestPhaseMaster__IsAreaImproveQuest(
           (QuestPhaseMaster_o *)v578,
           v641->static_fields->_QuestId_k__BackingField,
           0LL) )
    {
      SpotId = QuestEntity__getSpotId(v640, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v642);
      result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
      if ( !*p_max_length )
        goto LABEL_1133;
      if ( !*m_Items || !result )
        goto LABEL_1132;
      CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                             (UserEventCooltimeRewardMaster_o *)result,
                             HIDWORD((*m_Items)->bounds),
                             SpotId,
                             0LL);
      if ( CurrentLevelEntity )
      {
        v645 = CurrentLevelEntity;
        v646 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
          v646 = TerminalPramsManager_TypeInfo;
        }
        eventAreaImproveResultInfo = v646->static_fields->eventAreaImproveResultInfo;
        if ( eventAreaImproveResultInfo )
        {
          if ( !v646->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v646, isWin);
            eventAreaImproveResultInfo = TerminalPramsManager_TypeInfo->static_fields->eventAreaImproveResultInfo;
            if ( !eventAreaImproveResultInfo )
              goto LABEL_1132;
          }
          eventAreaImproveResultInfo->fields.afterLevel = v645->fields.lv;
        }
      }
    }
  }
  result = (BattleResultComponent_resultData_array *)v755;
  if ( v755 )
  {
    result = (BattleResultComponent_resultData_array *)QuestPhaseEntity__GetMoveSceneInfo(v755, 0LL);
    if ( !result )
      goto LABEL_1132;
    if ( *(_QWORD *)&result->max_length )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      if ( !byte_4B12DC3 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v634);
        byte_4B12DC3 = 1;
      }
      v648 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
        v648 = TerminalPramsManager_TypeInfo;
      }
      v754 = v648->static_fields->_QuestId_k__BackingField;
      v651 = System_Int32__ToString((int32_t)&v754, 0LL);
      if ( !byte_4B12DCE )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v649, v650);
        byte_4B12DCE = 1;
      }
      v652 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v649);
        v652 = TerminalPramsManager_TypeInfo;
      }
      v754 = v652->static_fields->_PhaseCnt_k__BackingField + 1;
      v653 = System_Int32__ToString((int32_t)&v754, 0LL);
      v661 = System_String__Concat_62412480(v651, (System_String_o *)StringLiteral_863/*","*/, v653, 0LL);
      if ( !byte_4B1353D )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v654, v655);
        byte_4B1353D = 1;
      }
      v662 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v654);
        v662 = TerminalPramsManager_TypeInfo;
      }
      p_SceneMoveQuestClearedInfo_k__BackingField = (PartyOrganizationUtility_o *)&v662->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
      p_SceneMoveQuestClearedInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v661;
      sub_1BCA784(p_SceneMoveQuestClearedInfo_k__BackingField, (int64_t)v661, v655, v656, v657, v658, v659, v660);
    }
  }
  if ( !*p_max_length )
    goto LABEL_1133;
  if ( !*m_Items )
    goto LABEL_1132;
  v664 = (int64_t)(*m_Items)->m_Items[47];
  if ( v664 && *(_QWORD *)(v664 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
    if ( !byte_4B13380 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isWin, v634);
      byte_4B13380 = 1;
    }
    v665 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin);
      v665 = TerminalPramsManager_TypeInfo;
    }
    p_limitImageAnnounces_k__BackingField = (PartyOrganizationUtility_o *)&v665->static_fields->_limitImageAnnounces_k__BackingField;
    p_limitImageAnnounces_k__BackingField->klass = (PartyOrganizationUtility_c *)v664;
    sub_1BCA784(p_limitImageAnnounces_k__BackingField, v664, v634, v635, v636, v637, v638, v639);
  }
  v669 = sub_1BCA888(string___TypeInfo, 7LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v667);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v667, v668);
    byte_4B12DC3 = 1;
  }
  v670 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v667);
    v670 = TerminalPramsManager_TypeInfo;
  }
  v754 = v670->static_fields->_QuestId_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v754, 0LL);
  if ( !v669 )
LABEL_1132:
    sub_1BCAA3C(result, isWin);
  if ( !*(_DWORD *)(v669 + 24) )
    goto LABEL_1133;
  *(_QWORD *)(v669 + 32) = result;
  sub_1BCA784((PartyOrganizationUtility_o *)(v669 + 32), (int64_t)result, v671, v672, v673, v674, v675, v676);
  if ( *(_DWORD *)(v669 + 24) <= 1u )
    goto LABEL_1133;
  v683 = StringLiteral_863/*","*/;
  *(_QWORD *)(v669 + 40) = StringLiteral_863/*","*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v669 + 40), (int64_t)v683, v677, v678, v679, v680, v681, v682);
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v684, v685);
    byte_4B12DCE = 1;
  }
  v686 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v684);
    v686 = TerminalPramsManager_TypeInfo;
  }
  v754 = v686->static_fields->_PhaseCnt_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v754, 0LL);
  if ( *(_DWORD *)(v669 + 24) <= 2u )
    goto LABEL_1133;
  *(_QWORD *)(v669 + 48) = result;
  sub_1BCA784((PartyOrganizationUtility_o *)(v669 + 48), (int64_t)result, v687, v688, v689, v690, v691, v692);
  if ( *(_DWORD *)(v669 + 24) <= 3u )
    goto LABEL_1133;
  v699 = StringLiteral_863/*","*/;
  *(_QWORD *)(v669 + 56) = StringLiteral_863/*","*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v669 + 56), (int64_t)v699, v693, v694, v695, v696, v697, v698);
  if ( !byte_4B13016 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v700, v701);
    byte_4B13016 = 1;
  }
  v702 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v700);
    v702 = TerminalPramsManager_TypeInfo;
  }
  v746[0] = v702->static_fields->_IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo, v700);
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v746, 0LL);
  if ( *(_DWORD *)(v669 + 24) <= 4u )
    goto LABEL_1133;
  *(_QWORD *)(v669 + 64) = result;
  sub_1BCA784((PartyOrganizationUtility_o *)(v669 + 64), (int64_t)result, v703, v704, v705, v706, v707, v708);
  if ( *(_DWORD *)(v669 + 24) <= 5u )
    goto LABEL_1133;
  v715 = StringLiteral_863/*","*/;
  *(_QWORD *)(v669 + 72) = StringLiteral_863/*","*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v669 + 72), (int64_t)v715, v709, v710, v711, v712, v713, v714);
  if ( !byte_4B13013 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v716, v717);
    byte_4B13013 = 1;
  }
  v718 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v716);
    v718 = TerminalPramsManager_TypeInfo;
  }
  v746[0] = v718->static_fields->_IsPhaseClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v746, 0LL);
  if ( *(_DWORD *)(v669 + 24) <= 6u )
    goto LABEL_1133;
  *(_QWORD *)(v669 + 80) = result;
  sub_1BCA784((PartyOrganizationUtility_o *)(v669 + 80), (int64_t)result, v719, v720, v721, v722, v723, v724);
  v725 = System_String__Concat_62414748((System_String_array *)v669, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_16878/*"afterActionBk"*/, v725, 0LL);
  TerminalPramsManager__SaveClearDatas(resulta, v726);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v727);
  TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(v728);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v729);
  TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(v730);
  TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(v731);
  if ( TerminalPramsManager__IsTerminalEffectNT2BoardOpen(v732) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v733);
    if ( !byte_4B12DCD )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v733, v734);
      byte_4B12DCD = 1;
    }
    v735 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v733);
      v735 = TerminalPramsManager_TypeInfo;
    }
    v735->static_fields->_WarId_k__BackingField = 0;
    if ( !byte_4B11139 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v733, v734);
      v735 = TerminalPramsManager_TypeInfo;
      byte_4B11139 = 1;
    }
    if ( !v735->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v735, v733);
      v735 = TerminalPramsManager_TypeInfo;
    }
    v735->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4B1336A )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v733, v734);
      v735 = TerminalPramsManager_TypeInfo;
      byte_4B1336A = 1;
    }
    if ( !v735->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v735, v733);
      v735 = TerminalPramsManager_TypeInfo;
    }
    v735->static_fields->_IsMapReturnFolder_k__BackingField = 0;
    if ( !byte_4B13532 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v733, v734);
      v735 = TerminalPramsManager_TypeInfo;
      byte_4B13532 = 1;
    }
    if ( !v735->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v735, v733);
      v735 = TerminalPramsManager_TypeInfo;
    }
    v735->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData((const MethodInfo *)v735);
  }
}


void __fastcall TerminalPramsManager__ResetBlankEarthSpotInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  const MethodInfo *v3; // x0

  if ( (byte_4B13778 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13778 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B12CE2 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B12CE2 = 1;
  }
  v3 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_DWORD *)v3[2].virtualMethodPointer + 127) = 0;
  TerminalPramsManager__BlankEarthSpotId_SaveData(v3);
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
  __int64 v11; // x2
  TerminalPramsManager_c *v12; // x0

  if ( (byte_4B13782 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13782 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B137F3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B137F3 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_QuestMessageScriptQuestId_k__BackingField = -1;
  if ( !byte_4B137F4 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4B137F4 = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8, v1);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = -1;
  if ( !byte_4B13621 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4B13621 = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8, v1);
    v8 = TerminalPramsManager_TypeInfo;
  }
  p_TalkScriptInfo_k__BackingField = (PartyOrganizationUtility_o *)&v8->static_fields->_TalkScriptInfo_k__BackingField;
  p_TalkScriptInfo_k__BackingField->klass = 0LL;
  sub_1BCA784(p_TalkScriptInfo_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !byte_4B137F5 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    byte_4B137F5 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
}


void __fastcall TerminalPramsManager__SaveClearDatas(
        BattleResultComponent_resultData_array *result,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  TerminalPramsManager_c *v9; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x22
  TerminalPramsManager_c *v11; // x0
  _BOOL8 v12; // x0
  BattleResultComponent_resultData_o *v13; // x0
  TerminalPramsManager_c *v14; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct TerminalPramsManager_StaticFields *v16; // x8
  _BOOL4 IsPhaseClear_k__BackingField; // w26
  _BOOL4 IsDispOnly_k__BackingField; // w27
  struct TerminalPramsManager_StaticFields *v19; // x8
  _BOOL4 IsWarBoardClear_k__BackingField; // w25
  BattleDropItem_array *questResultAfterEventRewardInfos; // x24
  BattleDropItem_array *mResultEventPanelRewardInfos; // x28
  int32_t panelEventPoint; // w20
  LimitImageAnnounce_array *limitImageAnnounces; // x21
  QuestRewardInfo_array *v25; // x29
  bool isWarBoardClear; // w22
  TerminalPramsManager_ClearData_o *v27; // x25
  __int64 v28; // x1
  __int64 v29; // x2
  TerminalPramsManager_c *v30; // x0
  TerminalPramsManager_ClearData_c *v31; // x0
  System_String_o *SAVEKEY_CLEAR_REWARD_DISP; // x19
  System_String_o *v33; // x1
  int32_t v34; // [xsp+98h] [xbp-F8h]
  const MethodInfo *v35; // [xsp+A0h] [xbp-F0h]
  int32_t eventActivityPointEffectState; // [xsp+BCh] [xbp-D4h]
  WarClearReward_array *warClearRewardIn; // [xsp+C0h] [xbp-D0h]
  QuestRewardInfo_array *resultEventTowerRewardInfo_k__BackingField; // [xsp+C8h] [xbp-C8h]
  EventTowerReward_o *evTowerReward; // [xsp+D0h] [xbp-C0h]
  CostumeReleaseAnnounce_array *questClearCostumeGet_k__BackingField; // [xsp+D8h] [xbp-B8h]
  CostumeReleaseAnnounce_array *questClearCostumeRelease; // [xsp+E0h] [xbp-B0h]
  EventRaceBoostInfo_o *evRace; // [xsp+E8h] [xbp-A8h]
  int32_t evpWinType; // [xsp+F4h] [xbp-9Ch]
  EventPointWinReward_o *eventPointWinReward_k__BackingField; // [xsp+F8h] [xbp-98h]
  UserSuperBossEntity_array *oldPersonalBoss; // [xsp+100h] [xbp-90h]
  UserSuperBossEntity_array *oldSuperBoss; // [xsp+108h] [xbp-88h]
  int32_t groupjoin; // [xsp+110h] [xbp-80h]
  int32_t lastRaidId; // [xsp+114h] [xbp-7Ch]
  int32_t raidId; // [xsp+118h] [xbp-78h]
  _BOOL4 IsQuestClear_k__BackingField; // [xsp+11Ch] [xbp-74h]
  QuestClearHeroineInfo_o *mQuestClearHeroineInfo; // [xsp+120h] [xbp-70h]
  QuestRewardInfo_array *mQuestPhaseRewardInfos; // [xsp+128h] [xbp-68h]

  if ( (byte_4B137C7 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_ClearData_TypeInfo, method, v2);
    sub_1BCA7E0(&JsonManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v7, v8);
    byte_4B137C7 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v9->static_fields->mQuestRewardInfos;
  if ( result )
  {
    if ( !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9, method);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
      byte_4B12DC3 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v12 = TerminalPramsManager__IsFreeQuestOnOrdealCall(v11->static_fields->_QuestId_k__BackingField, method);
    if ( v12 )
    {
      if ( !result->max_length )
        sub_1BCAA44(v12, method);
      v13 = result->m_Items[0];
      if ( !v13 )
        sub_1BCAA3C(0LL, method);
      if ( BattleResultComponent_resultData__checkResultDispFlag(v13, 2048, 0LL) )
        mQuestRewardInfos = 0LL;
    }
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v14 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v14->static_fields;
  mQuestClearHeroineInfo = static_fields->mQuestClearHeroineInfo;
  mQuestPhaseRewardInfos = static_fields->mQuestPhaseRewardInfos;
  if ( !byte_4B13016 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4B13016 = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14, method);
    v14 = TerminalPramsManager_TypeInfo;
  }
  IsQuestClear_k__BackingField = v14->static_fields->_IsQuestClear_k__BackingField;
  if ( !byte_4B13013 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4B13013 = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14, method);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v16 = v14->static_fields;
  IsPhaseClear_k__BackingField = v16->_IsPhaseClear_k__BackingField;
  lastRaidId = v16->clearLastBattleRaidId;
  raidId = v16->clearBattleRaidId;
  groupjoin = v16->joinGroupId;
  if ( !byte_4B13822 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4B13822 = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14, method);
    v14 = TerminalPramsManager_TypeInfo;
  }
  oldSuperBoss = v14->static_fields->_oldSuperBoss_k__BackingField;
  if ( !byte_4B13820 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4B13820 = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14, method);
    v14 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss = v14->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !byte_4B13823 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4B13823 = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14, method);
    v14 = TerminalPramsManager_TypeInfo;
  }
  eventPointWinReward_k__BackingField = v14->static_fields->_eventPointWinReward_k__BackingField;
  if ( !byte_4B1381A )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4B1381A = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14, method);
    v14 = TerminalPramsManager_TypeInfo;
  }
  evpWinType = v14->static_fields->_eventPointWinType_k__BackingField;
  if ( !byte_4B13527 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4B13527 = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14, method);
    v14 = TerminalPramsManager_TypeInfo;
  }
  evRace = v14->static_fields->_eventRaceBoost_k__BackingField;
  if ( !byte_4B1337E )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4B1337E = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14, method);
    v14 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeRelease = v14->static_fields->_questClearCostumeRelease_k__BackingField;
  if ( !byte_4B13374 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4B13374 = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14, method);
    v14 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeGet_k__BackingField = v14->static_fields->_questClearCostumeGet_k__BackingField;
  if ( !byte_4B1337A )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4B1337A = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14, method);
    v14 = TerminalPramsManager_TypeInfo;
  }
  evTowerReward = v14->static_fields->_eventTowerReward_k__BackingField;
  if ( !byte_4B13824 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4B13824 = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14, method);
    v14 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v14->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  if ( !byte_4B12054 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4B12054 = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14, method);
    v14 = TerminalPramsManager_TypeInfo;
  }
  IsDispOnly_k__BackingField = v14->static_fields->_IsDispOnly_k__BackingField;
  if ( !byte_4B13386 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4B13386 = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14, method);
    v14 = TerminalPramsManager_TypeInfo;
  }
  warClearRewardIn = v14->static_fields->_warClearReward_k__BackingField;
  if ( !byte_4B13825 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4B13825 = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14, method);
    v14 = TerminalPramsManager_TypeInfo;
  }
  eventActivityPointEffectState = v14->static_fields->_EventActivityPointEffectState_k__BackingField;
  if ( !byte_4B13375 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4B13375 = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14, method);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v19 = v14->static_fields;
  IsWarBoardClear_k__BackingField = v19->_IsWarBoardClear_k__BackingField;
  questResultAfterEventRewardInfos = v19->mQuestResultAfterEventRewardInfos;
  mResultEventPanelRewardInfos = v19->mResultEventPanelRewardInfos;
  panelEventPoint = v19->panelEventPoint;
  if ( !byte_4B1337F )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4B1337F = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14, method);
    v14 = TerminalPramsManager_TypeInfo;
  }
  limitImageAnnounces = v14->static_fields->_limitImageAnnounces_k__BackingField;
  if ( !byte_4B12CE1 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4B12CE1 = 1;
  }
  if ( !v14->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v14, method);
  if ( !byte_4B13376 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13376 = 1;
  }
  v25 = mQuestRewardInfos;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  isWarBoardClear = IsWarBoardClear_k__BackingField;
  v27 = (TerminalPramsManager_ClearData_o *)sub_1BCAA2C(TerminalPramsManager_ClearData_TypeInfo, method, v2, v3);
  TerminalPramsManager_ClearData___ctor_35415748(
    v27,
    mQuestClearHeroineInfo,
    v25,
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
    0,
    v34,
    v35);
  if ( !byte_4B13826 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v28, v29);
    byte_4B13826 = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v28);
    v30 = TerminalPramsManager_TypeInfo;
  }
  v30->static_fields->_isQuestRewardSetted_k__BackingField = 1;
  v31 = TerminalPramsManager_ClearData_TypeInfo;
  if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo, v28);
    v31 = TerminalPramsManager_ClearData_TypeInfo;
  }
  SAVEKEY_CLEAR_REWARD_DISP = v31->static_fields->SAVEKEY_CLEAR_REWARD_DISP;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v28);
  v33 = JsonManager__toJson((Il2CppObject *)v27, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString(SAVEKEY_CLEAR_REWARD_DISP, v33, 0LL);
}


void __fastcall TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0
  EventRaidDefeatedEffectInfo_o *EventRaidDefeatedEffectInfo_k__BackingField; // x0
  System_String_o *v7; // x0

  if ( (byte_4B137CD & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11568/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v3, v4);
    byte_4B137CD = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B13828 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13828 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  EventRaidDefeatedEffectInfo_k__BackingField = v5->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  if ( !EventRaidDefeatedEffectInfo_k__BackingField )
    sub_1BCAA3C(0LL, v1);
  v7 = EventRaidDefeatedEffectInfo__ConvertToStringData(EventRaidDefeatedEffectInfo_k__BackingField, v1);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11568/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v7, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestInfo_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  TerminalPramsManager_c *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  TerminalPramsManager_c *v10; // x0

  if ( (byte_4B1378F & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_13774/*"TerminalPhaseCnt"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_13777/*"TerminalQuestId"*/, v5, v6);
    byte_4B1378F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B12DC3 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13777/*"TerminalQuestId"*/,
    v7->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    byte_4B12DCE = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
    v10 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13774/*"TerminalPhaseCnt"*/,
    v10->static_fields->_PhaseCnt_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestRandomGroupList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
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
  System_String_o *Empty; // x19
  TerminalPramsManager_c *v26; // x0
  System_Collections_Generic_Dictionary_int__int__o *QuestRandomGroupList_k__BackingField; // x0
  int key; // w20
  int key_high; // w27
  Il2CppObject *v30; // x20
  Il2CppObject *v31; // x2
  System_String_o *v32; // x1
  int v33; // [xsp+Ch] [xbp-94h] BYREF
  __int128 v34[2]; // [xsp+10h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v35; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4B137D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v13, v14);
    sub_1BCA7E0(&string_TypeInfo, v15, v16);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_11577/*"SAVEKEY_QuestRandomGroupList"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_25331/*"{0}:{1}"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v23, v24);
    byte_4B137D1 = 1;
  }
  memset(&v35, 0, 32);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B12DC2 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B12DC2 = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v26 = TerminalPramsManager_TypeInfo;
  }
  QuestRandomGroupList_k__BackingField = v26->static_fields->_QuestRandomGroupList_k__BackingField;
  if ( !QuestRandomGroupList_k__BackingField )
    sub_1BCAA3C(0LL, v1);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v34,
    QuestRandomGroupList_k__BackingField,
    (const MethodInfo_31FD64C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v35.fields._dictionary = v34[0];
  v35.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v34[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v35,
            (const MethodInfo_3354DA0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int)v35.fields._current.fields.key;
    key_high = HIDWORD(v35.fields._current.fields.key);
    if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
      Empty = System_String__Concat_62401220(Empty, (System_String_o *)StringLiteral_863/*","*/, 0LL);
    LODWORD(v34[0]) = key;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v34);
    v33 = key_high;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
    v32 = System_String__Format_62415592((System_String_o *)StringLiteral_25331/*"{0}:{1}"*/, v30, v31, 0LL);
    Empty = System_String__Concat_62401220(Empty, v32, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v35,
    (const MethodInfo_3354EA0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11577/*"SAVEKEY_QuestRandomGroupList"*/, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestReleasedFocusState(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v5; // x1

  if ( (byte_4B137BA & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B137BA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v3);
  if ( !QuestFocusStateManager )
    sub_1BCAA3C(0LL, v5);
  QuestFocusStateManager__WriteData(QuestFocusStateManager, 0LL);
}


void __fastcall TerminalPramsManager__Save_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
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
  TerminalPramsManager_c *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  TerminalPramsManager_c *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  TerminalPramsManager_c *v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  TerminalPramsManager_c *v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  TerminalPramsManager_c *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  TerminalPramsManager_c *v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  TerminalPramsManager_c *v77; // x0
  System_String_o *v78; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  TerminalPramsManager_c *v81; // x0
  __int64 v82; // x1
  TerminalPramsManager_c *v83; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  TerminalPramsManager_c *v86; // x0
  __int64 v87; // x1
  __int64 v88; // x2
  TerminalPramsManager_c *v89; // x0
  __int64 v90; // x1
  __int64 v91; // x2
  TerminalPramsManager_c *v92; // x0
  __int64 v93; // x1
  __int64 v94; // x2
  TerminalPramsManager_c *v95; // x0
  System_String_o *v96; // x0
  __int64 v97; // x1
  __int64 v98; // x2
  TerminalPramsManager_c *v99; // x0
  __int64 v100; // x1
  __int64 v101; // x2
  TerminalPramsManager_c *v102; // x0
  __int64 v103; // x1
  __int64 v104; // x2
  TerminalPramsManager_c *v105; // x0
  __int64 v106; // x1
  __int64 v107; // x2
  TerminalPramsManager_c *v108; // x0
  __int64 v109; // x1
  __int64 v110; // x2
  TerminalPramsManager_c *v111; // x0
  __int64 v112; // x1
  __int64 v113; // x2
  TerminalPramsManager_c *v114; // x0
  __int64 v115; // x1
  __int64 v116; // x2
  TerminalPramsManager_c *v117; // x0
  __int64 v118; // x1
  __int64 v119; // x2
  TerminalPramsManager_c *v120; // x0
  __int64 v121; // x1
  __int64 v122; // x2
  TerminalPramsManager_c *v123; // x0
  __int64 v124; // x1
  __int64 v125; // x2
  TerminalPramsManager_c *v126; // x0
  __int64 v127; // x1
  __int64 v128; // x2
  System_String_o *v129; // x19
  TerminalPramsManager_c *v130; // x0
  System_String_o *v131; // x0
  System_String_o *v132; // x0
  __int64 v133; // x1
  __int64 v134; // x2
  TerminalPramsManager_c *v135; // x0
  __int64 v136; // x1
  __int64 v137; // x2
  TerminalPramsManager_c *v138; // x0
  int32_t MapModelClearQuestId_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF
  int64_t EndTime_k__BackingField; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B1378D & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_13767/*"TerminalEndTime"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_11575/*"SAVEKEY_PlayedTerminalEffects"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_13763/*"TerminalBeforeEventActivityPoint"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_13768/*"TerminalEventDailyPointEventId"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_13774/*"TerminalPhaseCnt"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_13782/*"TerminalTimeStatusEventId"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_13766/*"TerminalDispState"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11572/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_13769/*"TerminalIsDoneShortcut"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_11571/*"SAVEKEY_MapModelClearQuestInfo"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_11576/*"SAVEKEY_PlayerGenderType"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_11564/*"SAVEKEY_ClearEventQuestIds"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_11573/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_13777/*"TerminalQuestId"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_11584/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_13781/*"TerminalTimeStatusEventDailyPoint"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_13786/*"TerminalWarId"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_13779/*"TerminalSpotId"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_13783/*"TerminalTimeStatusLoopCount"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_13764/*"TerminalBeforeEventActivityPointGauge"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_11562/*"SAVEKEY_BlankEarthSpotId"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_11567/*"SAVEKEY_DataLostBattleAutoReset"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_13787/*"TerminalWarStartedIds"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_11566/*"SAVEKEY_ConnectMarkEventId"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_11565/*"SAVEKEY_ConnectMarkAnimationId"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_11574/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_11583/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v57, v58);
    byte_4B1378D = 1;
  }
  EndTime_k__BackingField = 0LL;
  MapModelClearQuestId_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B12FA3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B12FA3 = 1;
  }
  v59 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v59 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13766/*"TerminalDispState"*/,
    v59->static_fields->_DispState_k__BackingField,
    0LL);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v60, v61);
    byte_4B12DC6 = 1;
  }
  v62 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v60);
    v62 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13786/*"TerminalWarId"*/,
    v62->static_fields->_WarId_k__BackingField,
    0LL);
  if ( !byte_4B12FA7 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v64);
    byte_4B12FA7 = 1;
  }
  v65 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
    v65 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13779/*"TerminalSpotId"*/,
    v65->static_fields->_SpotId_k__BackingField,
    0LL);
  if ( !byte_4B12CDE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v66, v67);
    byte_4B12CDE = 1;
  }
  v68 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v66);
    v68 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11562/*"SAVEKEY_BlankEarthSpotId"*/,
    v68->static_fields->_BlankEarthSpotId_k__BackingField,
    0LL);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v69, v70);
    byte_4B12DC3 = 1;
  }
  v71 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v69);
    v71 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13777/*"TerminalQuestId"*/,
    v71->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v72, v73);
    byte_4B12DCE = 1;
  }
  v74 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v72);
    v74 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13774/*"TerminalPhaseCnt"*/,
    v74->static_fields->_PhaseCnt_k__BackingField,
    0LL);
  if ( !byte_4B12FA8 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v75, v76);
    byte_4B12FA8 = 1;
  }
  v77 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v75);
    v77 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v77->static_fields->_EndTime_k__BackingField;
  v78 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13767/*"TerminalEndTime"*/, v78, 0LL);
  if ( !byte_4B1339F )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v79, v80);
    byte_4B1339F = 1;
  }
  v81 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v79);
    v81 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13769/*"TerminalIsDoneShortcut"*/,
    v81->static_fields->_IsDoneShortcut_k__BackingField,
    0LL);
  v83 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v82);
    v83 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_13787/*"TerminalWarStartedIds"*/,
    v83->static_fields->mTerminalWarStartedIds,
    0LL);
  if ( !byte_4B1352F )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v84, v85);
    byte_4B1352F = 1;
  }
  v86 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v84);
    v86 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13782/*"TerminalTimeStatusEventId"*/,
    v86->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_4B13530 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v87, v88);
    byte_4B13530 = 1;
  }
  v89 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v87);
    v89 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13783/*"TerminalTimeStatusLoopCount"*/,
    v89->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  if ( !byte_4B1380D )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v90, v91);
    byte_4B1380D = 1;
  }
  v92 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v90);
    v92 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13768/*"TerminalEventDailyPointEventId"*/,
    v92->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4B1380E )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v93, v94);
    byte_4B1380E = 1;
  }
  v95 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v93);
    v95 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v95->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v96 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13781/*"TerminalTimeStatusEventDailyPoint"*/, v96, 0LL);
  if ( !byte_4B1380F )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v97, v98);
    byte_4B1380F = 1;
  }
  v99 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v97);
    v99 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13763/*"TerminalBeforeEventActivityPoint"*/,
    v99->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_4B13810 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v100, v101);
    byte_4B13810 = 1;
  }
  v102 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v100);
    v102 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13764/*"TerminalBeforeEventActivityPointGauge"*/,
    v102->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  if ( !byte_4B13811 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v103, v104);
    byte_4B13811 = 1;
  }
  v105 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v103);
    v105 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11575/*"SAVEKEY_PlayedTerminalEffects"*/,
    v105->static_fields->_PlayedTerminalEffects_k__BackingField,
    0LL);
  if ( !byte_4B13392 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v106, v107);
    byte_4B13392 = 1;
  }
  v108 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v106);
    v108 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11572/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v108->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v109);
  if ( !byte_4B13393 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v109, v110);
    byte_4B13393 = 1;
  }
  v111 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v109);
    v111 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11573/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v111->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  if ( !byte_4B13531 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v112, v113);
    byte_4B13531 = 1;
  }
  v114 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v112);
    v114 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11574/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v114->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v115);
  if ( !byte_4B13534 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v115, v116);
    byte_4B13534 = 1;
  }
  v117 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v115);
    v117 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11584/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v117->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11566/*"SAVEKEY_ConnectMarkEventId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11565/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  if ( !byte_4B1336C )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v118, v119);
    byte_4B1336C = 1;
  }
  v120 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v118);
    v120 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11583/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v120->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  if ( !byte_4B12DC5 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v121, v122);
    byte_4B12DC5 = 1;
  }
  v123 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v121);
    v123 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11564/*"SAVEKEY_ClearEventQuestIds"*/,
    v123->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  if ( !byte_4B12FA4 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v124, v125);
    byte_4B12FA4 = 1;
  }
  v126 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v124);
    v126 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v126->static_fields->_MapModelClearQuestId_k__BackingField;
  v129 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_4B12FA5 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v127, v128);
    byte_4B12FA5 = 1;
  }
  v130 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v127);
    v130 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v130->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v131 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v132 = System_String__Concat_62412480(v129, (System_String_o *)StringLiteral_863/*","*/, v131, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11571/*"SAVEKEY_MapModelClearQuestInfo"*/, v132, 0LL);
  if ( !byte_4B13535 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v133, v134);
    byte_4B13535 = 1;
  }
  v135 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v133);
    v135 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11567/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v135->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v136);
  if ( !byte_4B13812 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v136, v137);
    byte_4B13812 = 1;
  }
  v138 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v136);
    v138 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11576/*"SAVEKEY_PlayerGenderType"*/,
    v138->static_fields->_PlayerGenderType_k__BackingField,
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
  __int64 v6; // x2
  const MethodInfo *v7; // x1
  bool IsMainStoryForQuestId; // w21
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int32_t v11; // w1

  if ( (byte_4B137C1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase, method);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    byte_4B137C1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&questPhase);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v7);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v10);
    if ( IsMainStoryForQuestId )
      v11 = 10;
    else
      v11 = 9;
    AdManager__TrackEvent((AdManager_o *)Instance, v11, 10, questId, questPhase, 0LL, 0LL);
  }
}


void __fastcall TerminalPramsManager__SendOpenedQuestIdToAdManager(int32_t clearedQuestId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  __int64 v55; // x20
  int64_t Instance; // x0
  const MethodInfo *v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // x21
  int32_t klass_high; // w21
  Il2CppObject *MasterData_object; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  System_Collections_Generic_IEnumerable_TSource__o *QuestIdsByTargetAndOpenCondType; // x19
  TerminalPramsManager___c_c *v77; // x8
  System_Func_int__bool__o *_9__693_0; // x21
  Il2CppObject *v79; // x22
  struct TerminalPramsManager___c_StaticFields *static_fields; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x19
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  System_Func_T__TResult__o *v91; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v92; // x19
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  System_Func_object__bool__o *v96; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x0
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  TerminalPramsManager___c_c *v101; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v102; // x19
  System_Func_object__int__o *_9__693_3; // x20
  Il2CppObject *v104; // x21
  struct TerminalPramsManager___c_StaticFields *v105; // x0
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v112; // x0
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  TerminalPramsManager___c_c *v116; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x19
  System_Func_int__int__o *_9__693_4; // x20
  Il2CppObject *v119; // x21
  struct TerminalPramsManager___c_StaticFields *v120; // x0
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v127; // x0
  int32_t v128; // w0
  int32_t v129; // w19
  Il2CppObject *v130; // [xsp+0h] [xbp-40h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B137C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SpotMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_int___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_int__int___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__QuestEntity___, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_QuestEntity__int___, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v21, v22);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_QuestEntity___, v23, v24);
    sub_1BCA7E0(&System_Func_int__int__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v27, v28);
    sub_1BCA7E0(&System_Func_QuestEntity__int__TypeInfo, v29, v30);
    sub_1BCA7E0(&System_Func_QuestEntity__bool__TypeInfo, v31, v32);
    sub_1BCA7E0(&System_Func_int__QuestEntity__TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__693_0__, v41, v42);
    sub_1BCA7E0(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__693_3__, v43, v44);
    sub_1BCA7E0(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__693_4__, v45, v46);
    sub_1BCA7E0(&Method_TerminalPramsManager___c__DisplayClass693_0__SendOpenedQuestIdToAdManager_b__1__, v47, v48);
    sub_1BCA7E0(&Method_TerminalPramsManager___c__DisplayClass693_0__SendOpenedQuestIdToAdManager_b__2__, v49, v50);
    sub_1BCA7E0(&TerminalPramsManager___c__DisplayClass693_0_TypeInfo, v51, v52);
    sub_1BCA7E0(&TerminalPramsManager___c_TypeInfo, v53, v54);
    byte_4B137C2 = 1;
  }
  v130 = 0LL;
  entity = 0LL;
  v55 = sub_1BCAA2C(TerminalPramsManager___c__DisplayClass693_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v55, 0LL);
  if ( clearedQuestId >= 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !v55 )
      goto LABEL_43;
    *(_QWORD *)(v55 + 16) = Instance;
    sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 16), Instance, v58, v59, v60, v61, v62, v63);
    Instance = *(_QWORD *)(v55 + 16);
    if ( !Instance )
      goto LABEL_43;
    if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, clearedQuestId, 0LL) )
      return;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SpotMaster___);
    if ( !entity )
      goto LABEL_43;
    v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = QuestEntity__getSpotId(entity, 0LL);
    if ( !v64 )
      goto LABEL_43;
    Instance = DataMasterBase_object__object__int___TryGetEntity(
                 v64,
                 &v130,
                 Instance,
                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return;
    if ( !v130 )
      goto LABEL_43;
    klass_high = HIDWORD(v130[1].klass);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v57);
    if ( TerminalPramsManager__IsMustPlayMainStory(klass_high, v57) )
    {
      Instance = (int64_t)entity;
      if ( !entity )
        goto LABEL_43;
      if ( QuestEntity__GetTypeFlag(entity, 0LL) != 2 )
        return;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v55 + 24) = MasterData_object;
      sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 24), (int64_t)MasterData_object, v67, v68, v69, v70, v71, v72);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      if ( !Instance )
        goto LABEL_43;
      QuestIdsByTargetAndOpenCondType = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
                                                                                               (QuestReleaseMaster_o *)Instance,
                                                                                               clearedQuestId,
                                                                                               1,
                                                                                               0LL);
      v77 = TerminalPramsManager___c_TypeInfo;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo, v73);
        v77 = TerminalPramsManager___c_TypeInfo;
      }
      _9__693_0 = v77->static_fields->__9__693_0;
      if ( !_9__693_0 )
      {
        if ( !v77->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v77, v73);
          v77 = TerminalPramsManager___c_TypeInfo;
        }
        v79 = (Il2CppObject *)v77->static_fields->__9;
        _9__693_0 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v73, v74, v75);
        System_Func_int__bool____ctor(
          _9__693_0,
          v79,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__693_0__,
          0LL);
        static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
        static_fields->__9__693_0 = _9__693_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__693_0,
          (int64_t)_9__693_0,
          v81,
          v82,
          v83,
          v84,
          v85,
          v86);
      }
      v87 = System_Linq_Enumerable__Where_int_(
              QuestIdsByTargetAndOpenCondType,
              (System_Func_TSource__bool__o *)_9__693_0,
              (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
      v91 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__QuestEntity__TypeInfo, v88, v89, v90);
      System_Func_int__object____ctor(
        v91,
        (Il2CppObject *)v55,
        Method_TerminalPramsManager___c__DisplayClass693_0__SendOpenedQuestIdToAdManager_b__1__,
        0LL);
      v92 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v87,
                                                                   (System_Func_TSource__TResult__o *)v91,
                                                                   (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__QuestEntity___);
      v96 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_QuestEntity__bool__TypeInfo, v93, v94, v95);
      System_Func_object__bool____ctor(
        v96,
        (Il2CppObject *)v55,
        Method_TerminalPramsManager___c__DisplayClass693_0__SendOpenedQuestIdToAdManager_b__2__,
        0LL);
      v97 = System_Linq_Enumerable__Where_object_(
              v92,
              (System_Func_TSource__bool__o *)v96,
              (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v101 = TerminalPramsManager___c_TypeInfo;
      v102 = v97;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo, v98);
        v101 = TerminalPramsManager___c_TypeInfo;
      }
      _9__693_3 = (System_Func_object__int__o *)v101->static_fields->__9__693_3;
      if ( !_9__693_3 )
      {
        if ( !v101->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v101, v98);
          v101 = TerminalPramsManager___c_TypeInfo;
        }
        v104 = (Il2CppObject *)v101->static_fields->__9;
        _9__693_3 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_QuestEntity__int__TypeInfo, v98, v99, v100);
        System_Func_object__int____ctor(
          _9__693_3,
          v104,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__693_3__,
          0LL);
        v105 = TerminalPramsManager___c_TypeInfo->static_fields;
        v105->__9__693_3 = (struct System_Func_QuestEntity__int__o *)_9__693_3;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v105->__9__693_3,
          (int64_t)_9__693_3,
          v106,
          v107,
          v108,
          v109,
          v110,
          v111);
      }
      v112 = System_Linq_Enumerable__Select_object__int_(
               v102,
               (System_Func_TSource__TResult__o *)_9__693_3,
               (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_QuestEntity__int___);
      v116 = TerminalPramsManager___c_TypeInfo;
      v117 = (System_Collections_Generic_IEnumerable_TSource__o *)v112;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo, v113);
        v116 = TerminalPramsManager___c_TypeInfo;
      }
      _9__693_4 = v116->static_fields->__9__693_4;
      if ( !_9__693_4 )
      {
        if ( !v116->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v116, v113);
          v116 = TerminalPramsManager___c_TypeInfo;
        }
        v119 = (Il2CppObject *)v116->static_fields->__9;
        _9__693_4 = (System_Func_int__int__o *)sub_1BCAA2C(System_Func_int__int__TypeInfo, v113, v114, v115);
        System_Func_int__int____ctor(
          _9__693_4,
          v119,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__693_4__,
          0LL);
        v120 = TerminalPramsManager___c_TypeInfo->static_fields;
        v120->__9__693_4 = _9__693_4;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v120->__9__693_4,
          (int64_t)_9__693_4,
          v121,
          v122,
          v123,
          v124,
          v125,
          v126);
      }
      v127 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_int__int_(
                                                                    v117,
                                                                    (System_Func_TSource__TKey__o *)_9__693_4,
                                                                    (const MethodInfo_2F3B7EC *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
      v128 = System_Linq_Enumerable__FirstOrDefault_int_(
               v127,
               (const MethodInfo_2F342D8 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      if ( v128 )
      {
        v129 = v128;
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetOpenedStoryQuest((AdManager_o *)Instance, v129, 0LL);
          return;
        }
LABEL_43:
        sub_1BCAA3C(Instance, v57);
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
  __int64 v6; // x2
  const MethodInfo *v7; // x1
  bool IsMainStoryForQuestId; // w21
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int32_t v11; // w1

  if ( (byte_4B137C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase, method);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    byte_4B137C0 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&questPhase);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v7);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v10);
    if ( IsMainStoryForQuestId )
      v11 = 10;
    else
      v11 = 9;
    AdManager__TrackEvent((AdManager_o *)Instance, v11, 9, questId, questPhase, 0LL, 0LL);
  }
}


void __fastcall TerminalPramsManager__SetAutoResumeByQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  TerminalPramsManager_c *v20; // x0
  QuestTree_o *Instance; // x0
  __int64 v22; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  MapControl_QuestInfo_o *v26; // x20
  int32_t warId; // w21
  TerminalPramsManager_c *v28; // x0
  Il2CppObject *Master_object; // x21
  bool v30; // w22
  __int64 v31; // x1
  __int64 v32; // x2
  TerminalPramsManager_c *v33; // x0
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  int32_t parentBlankEarthSpotId; // w1
  unsigned __int64 v37; // x21
  TerminalPramsManager_c *v38; // x0
  int32_t v39; // w21
  TerminalPramsManager_c *v40; // x0
  int32_t questPhase; // w21
  int64_t endTime; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x2
  Il2CppObject *v46; // x20
  WarEntity_o *WarEntityByWarID; // x0
  bool IsFolder; // w20
  TerminalPramsManager_c *v49; // x0
  int v50; // w8
  TerminalSceneComponent_c *v51; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v53; // x2
  System_Collections_Generic_List_QuestReleaseEntity__c *klass; // x8
  UnityEngine_Object_o *v55; // x20
  __int64 v56; // x2
  System_Collections_Generic_List_QuestReleaseEntity__c *v57; // x8
  ScrTerminalListTop_o *v58; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v59; // x8
  UnityEngine_Object_o *v60; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v61; // x8
  const MethodInfo *v62; // x0
  unsigned __int64 v63; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_int__o v65; // 0:x0.8

  if ( (byte_4B1377F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_System_Nullable_int__GetValueOrDefault__, v8, v9);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v14, v15);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v18, v19);
    byte_4B1377F = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B13018 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13018 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v20 = TerminalPramsManager_TypeInfo;
  }
  v20->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    QuestInfo = QuestTree__GetQuestInfo(Instance, questId, 0LL);
    if ( !QuestInfo )
      return;
    v26 = QuestInfo;
    warId = QuestInfo->fields.warId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
    if ( !byte_4B12DCD )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v24, v25);
      byte_4B12DCD = 1;
    }
    v28 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
      v28 = TerminalPramsManager_TypeInfo;
    }
    v28->static_fields->_WarId_k__BackingField = warId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    Instance = (QuestTree_o *)MapControl_QuestInfo__GetSpotID(v26, 0LL);
    if ( !Master_object )
      goto LABEL_148;
    v30 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            (int32_t)Instance,
            (const MethodInfo_31B2E94 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    LODWORD(Master_object) = MapControl_QuestInfo__GetSpotID(v26, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v31);
    if ( v30 )
    {
      if ( byte_4B12CE2 )
        goto LABEL_38;
    }
    else
    {
      if ( !byte_4B12DCC )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v31, v32);
        byte_4B12DCC = 1;
      }
      v33 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v31);
        v33 = TerminalPramsManager_TypeInfo;
      }
      v33->static_fields->_SpotId_k__BackingField = (int)Master_object;
      WarInfo_k__BackingField = v26->fields._WarInfo_k__BackingField;
      if ( WarInfo_k__BackingField && (Mine = MapControl_WarInfo__GetMine(WarInfo_k__BackingField, 0LL)) != 0LL )
      {
        parentBlankEarthSpotId = Mine->fields.parentBlankEarthSpotId;
        v65 = (System_Nullable_int__o)&v63;
        v63 = 0LL;
        System_Nullable_int____ctor(
          v65,
          parentBlankEarthSpotId,
          (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
        v37 = v63;
      }
      else
      {
        v37 = 0LL;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v31);
      Master_object = (Il2CppObject *)HIDWORD(v37);
      if ( byte_4B12CE2 )
      {
LABEL_38:
        v38 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v31);
          v38 = TerminalPramsManager_TypeInfo;
        }
        v38->static_fields->_BlankEarthSpotId_k__BackingField = (int)Master_object;
        v39 = v26->fields.questId;
        if ( !v38->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v38, v31);
        if ( !byte_4B12DC7 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v31, v32);
          byte_4B12DC7 = 1;
        }
        v40 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v31);
          v40 = TerminalPramsManager_TypeInfo;
        }
        v40->static_fields->_QuestId_k__BackingField = v39;
        questPhase = v26->fields.questPhase;
        if ( !byte_4B12DCB )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v31, v32);
          v40 = TerminalPramsManager_TypeInfo;
          byte_4B12DCB = 1;
        }
        if ( !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40, v31);
          v40 = TerminalPramsManager_TypeInfo;
        }
        v40->static_fields->_PhaseCnt_k__BackingField = questPhase;
        endTime = v26->fields.endTime;
        if ( !byte_4B12DC8 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v31, v32);
          v40 = TerminalPramsManager_TypeInfo;
          byte_4B12DC8 = 1;
        }
        if ( !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40, v31);
          v40 = TerminalPramsManager_TypeInfo;
        }
        v40->static_fields->_EndTime_k__BackingField = endTime;
        if ( !byte_4B1339E )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v31, v32);
          v40 = TerminalPramsManager_TypeInfo;
          byte_4B1339E = 1;
        }
        if ( !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40, v31);
          v40 = TerminalPramsManager_TypeInfo;
        }
        v40->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 1;
        if ( !SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
          goto LABEL_151;
        v46 = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
        if ( !byte_4B12DC6 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v45);
          byte_4B12DC6 = 1;
        }
        Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
          Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !v46 )
          goto LABEL_148;
        WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(
                             (QuestTree_o *)v46,
                             HIDWORD(Instance[1].fields.questReleaseEntList->klass),
                             0LL);
        if ( WarEntityByWarID )
        {
          IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v43);
          if ( IsFolder )
          {
            if ( !byte_4B12DC9 )
            {
              sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v43, v44);
              byte_4B12DC9 = 1;
            }
            v49 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v43);
              v49 = TerminalPramsManager_TypeInfo;
            }
            v50 = 3;
          }
          else
          {
            if ( !byte_4B12DC9 )
            {
              sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v43, v44);
              byte_4B12DC9 = 1;
            }
            v49 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v43);
              v49 = TerminalPramsManager_TypeInfo;
            }
            v50 = 2;
          }
        }
        else
        {
LABEL_151:
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v43);
          if ( !byte_4B12DC9 )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v43, v44);
            byte_4B12DC9 = 1;
          }
          v49 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v43);
            v49 = TerminalPramsManager_TypeInfo;
          }
          v50 = 1;
        }
        v49->static_fields->_DispState_k__BackingField = v50;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v43);
        if ( !byte_4B10F83 )
        {
          sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v43, v44);
          byte_4B10F83 = 1;
        }
        v51 = TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v43);
          v51 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = (UnityEngine_Object_o *)v51->static_fields->mInstance;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
        if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
          goto LABEL_140;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v22);
        if ( !byte_4B10F83 )
        {
          sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v22, v53);
          byte_4B10F83 = 1;
        }
        Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v22);
          Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        }
        klass = Instance[1].fields.questReleaseEntList->klass;
        if ( klass )
        {
          v55 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
          if ( UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v22);
            if ( !byte_4B10F83 )
            {
              sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v22, v56);
              byte_4B10F83 = 1;
            }
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v22);
              Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            }
            v57 = Instance[1].fields.questReleaseEntList->klass;
            if ( !v57 )
              goto LABEL_148;
            v58 = *(ScrTerminalListTop_o **)&v57->_2.static_fields_size;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
            if ( !byte_4B12DC6 )
            {
              sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v56);
              byte_4B12DC6 = 1;
            }
            Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
              Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
            }
            if ( !v58 )
              goto LABEL_148;
            ScrTerminalListTop__RequestChangeTerminalListBG(
              v58,
              HIDWORD(Instance[1].fields.questReleaseEntList->klass),
              0LL);
          }
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v22);
          if ( !byte_4B10F83 )
          {
            sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v22, v56);
            byte_4B10F83 = 1;
          }
          Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v22);
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
          }
          v59 = Instance[1].fields.questReleaseEntList->klass;
          if ( v59 )
          {
            v60 = *(UnityEngine_Object_o **)&v59->_2.instance_size;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
            if ( !UnityEngine_Object__op_Inequality(v60, 0LL, 0LL) )
              goto LABEL_140;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v22);
            if ( !byte_4B10F83 )
            {
              sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v22, v53);
              byte_4B10F83 = 1;
            }
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v22);
              Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            }
            v61 = Instance[1].fields.questReleaseEntList->klass;
            if ( v61 )
            {
              Instance = *(QuestTree_o **)&v61->_2.instance_size;
              if ( Instance )
              {
                TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)Instance, 0LL);
LABEL_140:
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
                if ( !byte_4B11139 )
                {
                  sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v53);
                  byte_4B11139 = 1;
                }
                v62 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
                  v62 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                }
                *((_BYTE *)v62[2].virtualMethodPointer + 718) = 1;
                TerminalPramsManager__Save_SaveData(v62);
                return;
              }
            }
          }
        }
LABEL_148:
        sub_1BCAA3C(Instance, v22);
      }
    }
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v31, v32);
    byte_4B12CE2 = 1;
    goto LABEL_38;
  }
}


void __fastcall TerminalPramsManager__SetAutoResumeByWarId(int32_t warId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  TerminalPramsManager_c *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x20
  TitleInfoControl_o *v16; // x0
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v18; // x20
  bool IsFolder; // w21
  TerminalPramsManager_c *v20; // x0
  int v21; // w8
  int32_t parentBlankEarthSpotId; // w20
  TerminalPramsManager_c *v23; // x0
  TerminalSceneComponent_c *v24; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v26; // x2
  ExUITexture_c *klass; // x8
  UnityEngine_Object_o *v28; // x20
  __int64 v29; // x2
  ExUITexture_c *v30; // x8
  ScrTerminalListTop_o *v31; // x20
  ExUITexture_c *v32; // x8
  UnityEngine_Object_o *v33; // x20
  ExUITexture_c *v34; // x8
  const MethodInfo *v35; // x0

  if ( (byte_4B13780 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
    byte_4B13780 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B13018 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13018 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4B12DCD )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B12DCD = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, method);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_WarId_k__BackingField = warId;
  if ( !SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
    goto LABEL_112;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v14);
    byte_4B12DC6 = 1;
  }
  v16 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
    v16 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_109;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(
                       (QuestTree_o *)Instance,
                       HIDWORD(v16->fields.mEventBgTexture->klass),
                       0LL);
  if ( WarEntityByWarID )
  {
    v18 = WarEntityByWarID;
    IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
    if ( IsFolder )
    {
      if ( !byte_4B12DC9 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v11, v12);
        byte_4B12DC9 = 1;
      }
      v20 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
        v20 = TerminalPramsManager_TypeInfo;
      }
      v21 = 3;
    }
    else
    {
      if ( !byte_4B12DC9 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v11, v12);
        byte_4B12DC9 = 1;
      }
      v20 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
        v20 = TerminalPramsManager_TypeInfo;
      }
      v21 = 2;
    }
    v20->static_fields->_DispState_k__BackingField = v21;
    parentBlankEarthSpotId = v18->fields.parentBlankEarthSpotId;
  }
  else
  {
LABEL_112:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
    if ( !byte_4B12DC9 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v11, v12);
      byte_4B12DC9 = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
      v20 = TerminalPramsManager_TypeInfo;
    }
    parentBlankEarthSpotId = 0;
    v20->static_fields->_DispState_k__BackingField = 1;
  }
  if ( !v20->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v20, v11);
  if ( !byte_4B12CE2 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v11, v12);
    byte_4B12CE2 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->_BlankEarthSpotId_k__BackingField = parentBlankEarthSpotId;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v11, v12);
    byte_4B10F83 = 1;
  }
  v24 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11);
    v24 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v24->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v13, v26);
      byte_4B10F83 = 1;
    }
    v16 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
      v16 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v16->fields.mEventBgTexture->klass;
    if ( !klass )
      goto LABEL_109;
    v28 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v13, v29);
        byte_4B10F83 = 1;
      }
      v16 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
        v16 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      }
      v30 = v16->fields.mEventBgTexture->klass;
      if ( !v30 )
        goto LABEL_109;
      v31 = *(ScrTerminalListTop_o **)&v30->_2.static_fields_size;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
      if ( !byte_4B12DC6 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v29);
        byte_4B12DC6 = 1;
      }
      v16 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
        v16 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v31 )
        goto LABEL_109;
      ScrTerminalListTop__RequestChangeTerminalListBG(v31, HIDWORD(v16->fields.mEventBgTexture->klass), 0LL);
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v13, v29);
      byte_4B10F83 = 1;
    }
    v16 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
      v16 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    v32 = v16->fields.mEventBgTexture->klass;
    if ( !v32 )
      goto LABEL_109;
    v33 = *(UnityEngine_Object_o **)&v32->_2.instance_size;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v13, v26);
        byte_4B10F83 = 1;
      }
      v16 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
        v16 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      }
      v34 = v16->fields.mEventBgTexture->klass;
      if ( v34 )
      {
        v16 = *(TitleInfoControl_o **)&v34->_2.instance_size;
        if ( v16 )
        {
          TitleInfoControl__CloseEventBannerWindow(v16, 0LL);
          goto LABEL_102;
        }
      }
LABEL_109:
      sub_1BCAA3C(v16, v13);
    }
  }
LABEL_102:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
  if ( !byte_4B11139 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v26);
    byte_4B11139 = 1;
  }
  v35 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
    v35 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_BYTE *)v35[2].virtualMethodPointer + 718) = 1;
  TerminalPramsManager__Save_SaveData(v35);
}


void __fastcall TerminalPramsManager__SetAutoResumeForFolder(int32_t warId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  TerminalPramsManager_c *v10; // x0
  Il2CppObject *Instance; // x0
  WarEntity_o *WarEntityByWarID; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  WarEntity_o *v15; // x21
  TerminalPramsManager_c *v16; // x0
  int32_t PrioredParentId; // w20
  Il2CppObject *v18; // x0
  WarEntity_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  WarEntity_o *v22; // x22
  TerminalPramsManager_c *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  TerminalPramsManager_c *v26; // x0
  int32_t parentBlankEarthSpotId; // w20
  TerminalPramsManager_c *v28; // x0
  TerminalSceneComponent_c *v29; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  TitleInfoControl_o *v33; // x0
  ExUITexture_c *klass; // x8
  UnityEngine_Object_o *v35; // x20
  __int64 v36; // x2
  ExUITexture_c *v37; // x8
  ScrTerminalListTop_o *v38; // x20
  ExUITexture_c *v39; // x8
  UnityEngine_Object_o *v40; // x20
  ExUITexture_c *v41; // x8
  const MethodInfo *v42; // x0

  if ( (byte_4B13781 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
    byte_4B13781 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B13018 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13018 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4B12DCD )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B12DCD = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, method);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4B12DC9 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B12DC9 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, method);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_DispState_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( Instance )
  {
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0LL);
    if ( WarEntityByWarID )
    {
      v15 = WarEntityByWarID;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
      if ( !byte_4B13391 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v14);
        byte_4B13391 = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
        v16 = TerminalPramsManager_TypeInfo;
      }
      v16->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField = warId;
      PrioredParentId = WarEntity__GetPrioredParentId(v15, 0LL);
      v18 = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( v18 )
      {
        v19 = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)v18, PrioredParentId, 0LL);
        if ( v19 )
        {
          v22 = v19;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
          if ( !byte_4B12DCD )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v20, v21);
            byte_4B12DCD = 1;
          }
          v23 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
            v23 = TerminalPramsManager_TypeInfo;
          }
          v23->static_fields->_WarId_k__BackingField = PrioredParentId;
          if ( WarEntity__IsFolder(v22, 0LL) )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
            if ( !byte_4B12DC9 )
            {
              sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v24, v25);
              byte_4B12DC9 = 1;
            }
            v26 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
              v26 = TerminalPramsManager_TypeInfo;
            }
            v26->static_fields->_DispState_k__BackingField = 3;
          }
          parentBlankEarthSpotId = v15->fields.parentBlankEarthSpotId;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
          if ( !byte_4B12CE2 )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v24, v25);
            byte_4B12CE2 = 1;
          }
          v28 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
            v28 = TerminalPramsManager_TypeInfo;
          }
          v28->static_fields->_BlankEarthSpotId_k__BackingField = parentBlankEarthSpotId;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v24);
          if ( !byte_4B10F83 )
          {
            sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v24, v25);
            byte_4B10F83 = 1;
          }
          v29 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v24);
            v29 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_Object_o *)v29->static_fields->mInstance;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
          if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
            goto LABEL_100;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v31);
          if ( !byte_4B10F83 )
          {
            sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v31, v32);
            byte_4B10F83 = 1;
          }
          v33 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v31);
            v33 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
          }
          klass = v33->fields.mEventBgTexture->klass;
          if ( klass )
          {
            v35 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
            if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
            {
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v31);
              if ( !byte_4B10F83 )
              {
                sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v31, v36);
                byte_4B10F83 = 1;
              }
              v33 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v31);
                v33 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
              }
              v37 = v33->fields.mEventBgTexture->klass;
              if ( !v37 )
                goto LABEL_108;
              v38 = *(ScrTerminalListTop_o **)&v37->_2.static_fields_size;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v31);
              if ( !byte_4B12DC6 )
              {
                sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v31, v36);
                byte_4B12DC6 = 1;
              }
              v33 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v31);
                v33 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
              }
              if ( !v38 )
                goto LABEL_108;
              ScrTerminalListTop__RequestChangeTerminalListBG(v38, HIDWORD(v33->fields.mEventBgTexture->klass), 0LL);
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v31);
            if ( !byte_4B10F83 )
            {
              sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v31, v36);
              byte_4B10F83 = 1;
            }
            v33 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v31);
              v33 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
            }
            v39 = v33->fields.mEventBgTexture->klass;
            if ( v39 )
            {
              v40 = *(UnityEngine_Object_o **)&v39->_2.instance_size;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
              if ( !UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
                goto LABEL_100;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v31);
              if ( !byte_4B10F83 )
              {
                sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v31, v32);
                byte_4B10F83 = 1;
              }
              v33 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v31);
                v33 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
              }
              v41 = v33->fields.mEventBgTexture->klass;
              if ( v41 )
              {
                v33 = *(TitleInfoControl_o **)&v41->_2.instance_size;
                if ( v33 )
                {
                  TitleInfoControl__CloseEventBannerWindow(v33, 0LL);
LABEL_100:
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v31);
                  if ( !byte_4B11139 )
                  {
                    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v31, v32);
                    byte_4B11139 = 1;
                  }
                  v42 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v31);
                    v42 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                  }
                  *((_BYTE *)v42[2].virtualMethodPointer + 718) = 1;
                  TerminalPramsManager__Save_SaveData(v42);
                  return;
                }
              }
            }
          }
LABEL_108:
          sub_1BCAA3C(v33, v31);
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
  if ( (byte_4B137BE & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_o *)sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B137BE = 1;
  }
  if ( !v8 )
    sub_1BCAA3C(result, method);
  campaignDirectBonus = (int64_t)v8->fields.campaignDirectBonus;
  if ( campaignDirectBonus && *(_QWORD *)(campaignDirectBonus + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    if ( !byte_4B13809 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
      byte_4B13809 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v10 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)campaignDirectBonus;
    sub_1BCA784(
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
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
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

  if ( (byte_4B137A9 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B137A9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B13808 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13808 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignBonus_k__BackingField = campaignBonuses;
  sub_1BCA784(
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  TerminalPramsManager_c *v14; // x0
  System_Collections_Generic_Dictionary_int__int__o *v15; // x21
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  TerminalPramsManager_c *v23; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  TerminalPramsManager_c *v28; // x0

  if ( (byte_4B137B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&idx, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10, v11);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v12, v13);
    byte_4B137B5 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&idx);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( !v14->static_fields->folderLastIdxs )
  {
    v15 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 *(_QWORD *)&idx,
                                                                 method,
                                                                 v3);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v15,
      (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v23 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
      v23 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v23->static_fields;
    static_fields->folderLastIdxs = v15;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->folderLastIdxs,
      (int64_t)v15,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14, *(_QWORD *)&idx);
    v14 = TerminalPramsManager_TypeInfo;
  }
  folderLastIdxs = v14->static_fields->folderLastIdxs;
  if ( !folderLastIdxs
    || (System_Collections_Generic_Dictionary_int__int___Remove(
          folderLastIdxs,
          warId,
          (const MethodInfo_31FE62C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__),
        (folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs) == 0LL) )
  {
    sub_1BCAA3C(folderLastIdxs, *(_QWORD *)&idx);
  }
  System_Collections_Generic_Dictionary_int__int___Add(
    folderLastIdxs,
    warId,
    idx,
    (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !byte_4B137F8 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v26, v27);
    byte_4B137F8 = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->_LastSelectQuestIndex_k__BackingField = idx;
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

  if ( (byte_4B137BB & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, *(_QWORD *)&state, method);
    byte_4B137BB = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&state);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v5);
  if ( !QuestFocusStateManager )
    sub_1BCAA3C(0LL, v7);
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

  if ( (byte_4B137BF & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B137BF = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (PartyOrganizationUtility_o *)&v9->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0LL;
  sub_1BCA784(p_mQuestRewardInfos, 0LL, v2, v3, v4, v5, v6, v7);
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
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
      v21 = TerminalPramsManager_TypeInfo;
    }
    v22 = (PartyOrganizationUtility_o *)&v21->static_fields->mQuestRewardInfos;
    v22->klass = (PartyOrganizationUtility_c *)rewardInfos;
    sub_1BCA784(v22, rewardInfos, v13, v14, v15, v16, v17, v18);
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
    v23 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = (PartyOrganizationUtility_o *)&v23->static_fields->mQuestPhaseRewardInfos;
  p_mQuestPhaseRewardInfos->klass = 0LL;
  sub_1BCA784(p_mQuestPhaseRewardInfos, 0LL, v13, v14, v15, v16, v17, v18);
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
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
      v33 = TerminalPramsManager_TypeInfo;
    }
    v34 = (PartyOrganizationUtility_o *)&v33->static_fields->mQuestPhaseRewardInfos;
    v34->klass = (PartyOrganizationUtility_c *)resultQuestPhaseRewardInfos;
    sub_1BCA784(v34, resultQuestPhaseRewardInfos, v25, v26, v27, v28, v29, v30);
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
    v35 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestResultAfterEventRewardInfos = (PartyOrganizationUtility_o *)&v35->static_fields->mQuestResultAfterEventRewardInfos;
  p_mQuestResultAfterEventRewardInfos->klass = 0LL;
  sub_1BCA784(p_mQuestResultAfterEventRewardInfos, 0LL, v25, v26, v27, v28, v29, v30);
  if ( !result->max_length )
LABEL_33:
    sub_1BCAA44(v11, v12);
  v43 = result->m_Items[0];
  if ( !v43 )
LABEL_32:
    sub_1BCAA3C(v11, v12);
  resultAfterEventRewardInfos = (int64_t)v43->fields.resultAfterEventRewardInfos;
  if ( resultAfterEventRewardInfos && *(_QWORD *)(resultAfterEventRewardInfos + 24) )
  {
    v45 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
      v45 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v45->static_fields;
    static_fields->mQuestResultAfterEventRewardInfos = (struct BattleDropItem_array *)resultAfterEventRewardInfos;
    sub_1BCA784(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  System_String_o *mTerminalWarStartedIds; // x19
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x0
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  v19 = war_id;
  if ( (byte_4B137B3 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v4, v5);
    byte_4B137B3 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !TerminalPramsManager__IsWarStartedId(war_id, method) )
  {
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
      v7 = TerminalPramsManager_TypeInfo;
    }
    mTerminalWarStartedIds = v7->static_fields->mTerminalWarStartedIds;
    v9 = System_Int32__ToString((int32_t)&v19, 0LL);
    v10 = System_String__Concat_62412480(mTerminalWarStartedIds, v9, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
    static_fields->mTerminalWarStartedIds = v10;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->mTerminalWarStartedIds,
      (int64_t)v10,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    TerminalPramsManager__Save_SaveData(v18);
  }
}


void __fastcall TerminalPramsManager__SpotIdSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B1378E & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_13779/*"TerminalSpotId"*/, v3, v4);
    byte_4B1378E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B12FA7 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B12FA7 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13779/*"TerminalSpotId"*/,
    v5->static_fields->_SpotId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  TerminalPramsManager_c *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  TerminalPramsManager_c *v10; // x0

  if ( (byte_4B13794 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_13763/*"TerminalBeforeEventActivityPoint"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_13764/*"TerminalBeforeEventActivityPointGauge"*/, v5, v6);
    byte_4B13794 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B1380F )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1380F = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13763/*"TerminalBeforeEventActivityPoint"*/,
    v7->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_4B13810 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    byte_4B13810 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
    v10 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13764/*"TerminalBeforeEventActivityPointGauge"*/,
    v10->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfoDispSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B13799 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11578/*"SAVEKEY_TerminalConquestInfoDisp"*/, v3, v4);
    byte_4B13799 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11578/*"SAVEKEY_TerminalConquestInfoDisp"*/, v5->static_fields->eventConquestInfoDisp, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  TerminalPramsManager_c *v11; // x0
  struct EventConquestInfo_array *eventConquestInfos; // x19
  System_String_o *v13; // x0
  __int64 v14; // x1
  TerminalPramsManager_c *v15; // x0

  if ( (byte_4B13798 & 1) == 0 )
  {
    sub_1BCA7E0(&EventConquestInfo___TypeInfo, v1, v2);
    sub_1BCA7E0(&JsonManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_11579/*"SAVEKEY_TerminalConquestInfos"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_11578/*"SAVEKEY_TerminalConquestInfoDisp"*/, v9, v10);
    byte_4B13798 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v11 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = v11->static_fields->eventConquestInfos;
  if ( eventConquestInfos )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, v1);
      eventConquestInfos = TerminalPramsManager_TypeInfo->static_fields->eventConquestInfos;
    }
  }
  else
  {
    eventConquestInfos = (struct EventConquestInfo_array *)sub_1BCA888(EventConquestInfo___TypeInfo, 0LL);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v1);
  v13 = JsonManager__toJson(&eventConquestInfos->obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11579/*"SAVEKEY_TerminalConquestInfos"*/, v13, 0LL);
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
    v15 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11578/*"SAVEKEY_TerminalConquestInfoDisp"*/,
    v15->static_fields->eventConquestInfoDisp,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B1379A & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11580/*"SAVEKEY_TerminalCraftInfoDisp"*/, v3, v4);
    byte_4B1379A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11580/*"SAVEKEY_TerminalCraftInfoDisp"*/, v5->static_fields->eventCraftInfoDisp, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  TerminalPramsManager_c *v10; // x0
  Il2CppObject *eventHarvestGrowthInfo; // x19
  System_String_o *v12; // x0

  if ( (byte_4B1379B & 1) == 0 )
  {
    sub_1BCA7E0(&EventHarvestGrowthInfo_TypeInfo, v1, v2);
    sub_1BCA7E0(&JsonManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_11581/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v8, v9);
    byte_4B1379B = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventHarvestGrowthInfo = (Il2CppObject *)v10->static_fields->eventHarvestGrowthInfo;
  if ( eventHarvestGrowthInfo )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10, v1);
      eventHarvestGrowthInfo = (Il2CppObject *)TerminalPramsManager_TypeInfo->static_fields->eventHarvestGrowthInfo;
    }
  }
  else
  {
    eventHarvestGrowthInfo = (Il2CppObject *)sub_1BCAA2C(EventHarvestGrowthInfo_TypeInfo, v1, v2, v3);
    System_Object___ctor(eventHarvestGrowthInfo, 0LL);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v1);
  v12 = JsonManager__toJson(eventHarvestGrowthInfo, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11581/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v12, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  TerminalPramsManager_c *v7; // x0
  TerminalPramsManager_c *v8; // x0
  Il2CppObject *BeforeEventSubmarineSaveData_k__BackingField; // x19
  System_String_o *v10; // x0

  if ( (byte_4B13796 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_13765/*"TerminalBeforeEventSubmarinePointData"*/, v5, v6);
    byte_4B13796 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B12EBB )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B12EBB = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( v7->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
  {
    if ( !v7->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v7, v1);
    if ( !byte_4B12EBB )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
      byte_4B12EBB = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
      v8 = TerminalPramsManager_TypeInfo;
    }
    BeforeEventSubmarineSaveData_k__BackingField = (Il2CppObject *)v8->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v1);
    v10 = JsonManager__toJson(BeforeEventSubmarineSaveData_k__BackingField, 0, 0, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13765/*"TerminalBeforeEventSubmarinePointData"*/, v10, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B137A3 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11583/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v3, v4);
    byte_4B137A3 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B1336C )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1336C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11583/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v5->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B137A2 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11584/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v3, v4);
    byte_4B137A2 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B13534 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13534 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11584/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v5->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalTransitionInfoSave_SaveData(
        TerminalTransitionInfo_o *terminalTransitionInfo,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_4B13793 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13785/*"TerminalTransitionInfoVoiceAssetName"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_13784/*"TerminalTransitionInfoMissionId"*/, v4, v5);
    byte_4B13793 = 1;
  }
  if ( terminalTransitionInfo )
  {
    UnityEngine_PlayerPrefs__SetInt(
      (System_String_o *)StringLiteral_13784/*"TerminalTransitionInfoMissionId"*/,
      terminalTransitionInfo->fields.missionId,
      0LL);
    UnityEngine_PlayerPrefs__SetString(
      (System_String_o *)StringLiteral_13785/*"TerminalTransitionInfoVoiceAssetName"*/,
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
  System_Collections_Generic_Dictionary_int__object__o *v17; // x0
  __int64 v18; // x8
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_int__o *v21; // x21
  __int64 v22; // x2
  __int64 v23; // x8
  Il2CppClass *klass; // x8
  _QWORD *v25; // x9
  __int64 entries_low; // x10
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B137CC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, *(_QWORD *)&day, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v15, v16);
    byte_4B137CC = 1;
  }
  value = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
  if ( !byte_4B13828 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day, method);
    byte_4B13828 = 1;
  }
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    v17 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  }
  v18 = *(_QWORD *)&v17[2].fields._entries->m_Items[17].fields.hashCode;
  if ( !v18 )
    goto LABEL_30;
  v17 = *(System_Collections_Generic_Dictionary_int__object__o **)(v18 + 16);
  if ( !v17 )
    goto LABEL_30;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          v17,
          eventId,
          &value,
          (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v21 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      *(_QWORD *)&day,
                                                      v19,
                                                      v20);
    System_Collections_Generic_List_int____ctor(
      v21,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    value = (Il2CppObject *)v21;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    if ( !byte_4B13828 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day, v22);
      byte_4B13828 = 1;
    }
    v17 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
      v17 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
    }
    v23 = *(_QWORD *)&v17[2].fields._entries->m_Items[17].fields.hashCode;
    if ( v23 )
    {
      v17 = *(System_Collections_Generic_Dictionary_int__object__o **)(v23 + 16);
      if ( v17 )
      {
        System_Collections_Generic_Dictionary_int__object___Add(
          v17,
          eventId,
          value,
          (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        goto LABEL_24;
      }
    }
LABEL_30:
    sub_1BCAA3C(v17, *(_QWORD *)&day);
  }
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)value,
         day,
         (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return;
  }
LABEL_24:
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  klass = value[1].klass;
  v25 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(value[1].monitor);
  if ( !klass )
    goto LABEL_30;
  entries_low = SLODWORD(v17->fields._entries);
  if ( (unsigned int)entries_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)v17,
      day,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(v17->fields._entries) = entries_low + 1;
    *((_DWORD *)&klass->_1.byval_arg.data + entries_low) = day;
  }
}


int32_t __fastcall TerminalPramsManager__get_AfterActionFocusQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13697 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13697 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_AfterActionFocusQuestId_k__BackingField;
}


BattleSetupInfo_o *__fastcall TerminalPramsManager__get_BattleSetupKeep(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136B7 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136B7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BattleSetupKeep_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BeforeClearQuest(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  AvalonSceneManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_string__c *klass; // x8
  __int64 v11; // x8
  System_Collections_Generic_List_string__c *v12; // x8
  __int64 v13; // x8
  int32_t *p_QuestId_k__BackingField; // x8
  TerminalPramsManager_c *v15; // x0

  if ( (byte_4B136ED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v5, v6);
    byte_4B136ED = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__checkNowScene(Instance, 34, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
      byte_4B10F83 = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = Instance[1].fields.m_listUnloadScenes->klass;
    if ( !klass )
      goto LABEL_31;
    v11 = *(_QWORD *)&klass->_2.thread_static_fields_offset;
    if ( !v11 )
      goto LABEL_31;
    if ( *(_DWORD *)(v11 + 420) )
    {
      if ( !LODWORD(Instance[2].fields.targetRoot) )
        j_il2cpp_runtime_class_init_0(Instance, v8);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
        byte_4B10F83 = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
        Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v12 = Instance[1].fields.m_listUnloadScenes->klass;
      if ( v12 )
      {
        v13 = *(_QWORD *)&v12->_2.thread_static_fields_offset;
        if ( v13 )
        {
          p_QuestId_k__BackingField = (int32_t *)(v13 + 420);
          return *p_QuestId_k__BackingField;
        }
      }
LABEL_31:
      sub_1BCAA3C(Instance, v8);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    byte_4B12DC3 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
    v15 = TerminalPramsManager_TypeInfo;
  }
  p_QuestId_k__BackingField = &v15->static_fields->_QuestId_k__BackingField;
  return *p_QuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BeforeEventActivityPoint(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13708 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13708 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BeforeEventActivityPoint_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BeforeEventActivityPointGauge(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1370A & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1370A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BeforeEventActivityPointGauge_k__BackingField;
}


EventSaveData_o *__fastcall TerminalPramsManager__get_BeforeEventSubmarineSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1370E & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1370E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BeforeQuestStartWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13771 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13771 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BeforeQuestStartWarId_k__BackingField;
}


int64_t __fastcall TerminalPramsManager__get_BeforeTimeEventDailyPoint(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136FC & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136FC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BlankEarthAfterActionFocusSpotId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1372E & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1372E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BlankEarthRank(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13732 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13732 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BlankEarthRank_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BlankEarthSpotId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1372C & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1372C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BlankEarthSpotId_k__BackingField;
}


BlankEarthTransform_o *__fastcall TerminalPramsManager__get_BlankEarthTransformData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13730 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13730 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BlankEarthTransformData_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_CaldeaGateFolderFocusWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13742 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13742 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField;
}


CommonUI_CampaignBonusData_array *__fastcall TerminalPramsManager__get_CampaignBonus(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136D5 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136D5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_CampaignBonus_k__BackingField;
}


CommonUI_CampaignDirectBonusData_array *__fastcall TerminalPramsManager__get_CampaignDirectBonus(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136D7 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136D7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_CampaignDirectBonus_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_ClearEventQuestIds(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13706 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13706 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_ClearEventQuestIds_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_DataLostBattleEventId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136C3 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136C3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_DataLostBattleEventId_k__BackingField;
}


float __fastcall TerminalPramsManager__get_DataLostBattleResetFadeInTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136CB & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136CB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_DataLostBattleResetFadeInTime_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_DataLostBattleWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136C5 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136C5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_DataLostBattleWarId_k__BackingField;
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
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13675 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13675 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_DispState_k__BackingField;
}


int64_t __fastcall TerminalPramsManager__get_EndTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136B9 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136B9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_EndTime_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventActivityPointEffectState(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1370C & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1370C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_EventActivityPointEffectState_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventBoardGameSquareIndex(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13714 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13714 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_EventBoardGameSquareIndex_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventDailyPointEventId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136FE & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136FE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_EventDailyPointEventId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventDailyPointItem(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136FA & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136FA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_EventDailyPointItem_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventMuralId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136A3 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136A3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_EventMuralId_k__BackingField;
}


EventRaidDefeatedEffectInfo_o *__fastcall TerminalPramsManager__get_EventRaidDefeatedEffectInfo(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13710 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13710 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventUIEffectClearQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13738 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13738 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_EventUIEffectClearQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventUiWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13773 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13773 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_EventUiWarId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoFolder(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13757 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13757 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsAutoFolder_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoNoSe(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13759 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13759 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsAutoNoSe_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoOpenMasterMission(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1377B & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1377B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->mIsAutoOpenMasterMission;
}


bool __fastcall TerminalPramsManager__get_IsAutoResume(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13751 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13751 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsAutoResume_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoShortcut(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13753 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13753 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsAutoShortcut_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsBackQuestBoardDisable(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1376F & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1376F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsBackQuestBoardDisable_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsBlankEarthShortcutMoving(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13734 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13734 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsBlankEarthShortcutMoving_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsCheckHomeExpirationDateEventMap(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1375B & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1375B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->isCheckHomeExpirationDateEventMap;
}


bool __fastcall TerminalPramsManager__get_IsDataLostBattleAutoReset(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136C1 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136C1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsDataLostBattleAutoReset_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDataLostBattleNoticePause(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136CD & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136CD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsDataLostBattleNoticePause_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDataLostBattleResetFadeIn(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136C9 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136C9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDirectTransition(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1373E & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1373E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsDirectTransition_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispDone_AutoWebView(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13699 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13699 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsDispDone_AutoWebView_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispDone_UIStandFigure(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1369B & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1369B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsDispDone_UIStandFigure_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispOnly(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136AB & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136AB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsDispOnly_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispUIStandFigure(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1369D & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1369D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsDispUIStandFigure_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDoneShortcut(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13683 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13683 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsDoneShortcut_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsEventBoardGameDiceBtnActive(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13716 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13716 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsForceFocusTerminalQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1368B & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1368B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsForceFocusTerminalQuestId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsFromRecollectionBoard(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13689 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13689 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsFromRecollectionBoard_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsInvisibleConnectAndLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13747 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13747 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->isInvisibleConnectAndLoad;
}


bool __fastcall TerminalPramsManager__get_IsMapReturnFolder(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13755 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13755 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsMapReturnFolder_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsOrdealCallWarClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136A1 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136A1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsOrdealCallWarClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPhaseClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136A9 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136A9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsPhaseClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayEventBoardGameArrivalEffectAuto(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136AF & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136AF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayEventBoardGameDiceBtnActiveEffect(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13718 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13718 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayGetEffect(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136D1 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136D1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsPlayGetEffect_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayScriptWithMap(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136AD & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136AD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsPlayScriptWithMap_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayTerminalEffectDisappear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13726 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13726 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_IsPlayTerminalEffectDisappearWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13728 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13728 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayTerminalEffectNt2AfterAction(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1372A & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1372A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayedEntryBanner(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136CF & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136CF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsPlayedEntryBanner_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsQuestClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136A7 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136A7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsQuestClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsScriptDisp(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136B1 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136B1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsScriptDisp_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsSkipNoticeLoginQuestAtOnce(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1376D & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1376D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsStopMasterFaceOverwrite(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136C7 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136C7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsStopMasterFaceOverwrite_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsTopLastIdxNextBoardRequest(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1375D & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1375D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsTransOrdealCall(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1373C & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1373C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsTransOrdealCall_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsWarBoardClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136BB & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136BB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsWarBoardClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsWarClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1369F & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1369F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsWarClear_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_LastPlayedFreeQuestSpotId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13693 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13693 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_LastPlayedQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13691 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13691 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_LastPlayedQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_LastSelectQuestIndex(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13695 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13695 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_LastSelectQuestIndex_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MapModelClearPhaseCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136BF & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136BF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_MapModelClearPhaseCount_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MapModelClearQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136BD & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136BD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_MapModelClearQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MasterMissionTargetType(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1377D & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1377D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_MasterMissionTargetType_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MessageDispType(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136B3 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136B3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_MessageDispType_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_NoticeLastModified(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13736 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13736 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_NoticeLastModified_k__BackingField;
}


UserEventPointEntity_array *__fastcall TerminalPramsManager__get_OldUserEventPoint(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13744 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13744 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_OldUserEventPoint_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_PhaseCnt(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13681 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13681 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_PhaseCnt_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_PlayHappinessCounterEffect(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136A5 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136A5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_PlayHappinessCounterEffect_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_PlayedTerminalEffects(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13724 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13724 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_PlayedTerminalEffects_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_PlayerGenderType(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136D3 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136D3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_PlayerGenderType_k__BackingField;
}


QuestFocusStateManager_o *__fastcall TerminalPramsManager__get_QuestFocusStateManager(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalPramsManager_c *v6; // x0
  QuestFocusStateManager_o *v7; // x19
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  TerminalPramsManager_c *v15; // x0
  PartyOrganizationUtility_o *p_questFocusStateManager; // x0

  if ( (byte_4B13746 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestFocusStateManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v4, v5);
    byte_4B13746 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( !v6->static_fields->questFocusStateManager )
  {
    v7 = (QuestFocusStateManager_o *)sub_1BCAA2C(QuestFocusStateManager_TypeInfo, v1, v2, v3);
    QuestFocusStateManager___ctor(v7, 0LL);
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
      v15 = TerminalPramsManager_TypeInfo;
    }
    p_questFocusStateManager = (PartyOrganizationUtility_o *)&v15->static_fields->questFocusStateManager;
    p_questFocusStateManager->klass = (PartyOrganizationUtility_c *)v7;
    sub_1BCA784(p_questFocusStateManager, (int64_t)v7, v9, v10, v11, v12, v13, v14);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6, v1);
    v6 = TerminalPramsManager_TypeInfo;
  }
  return v6->static_fields->questFocusStateManager;
}


int32_t __fastcall TerminalPramsManager__get_QuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1367F & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1367F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_QuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_QuestMessageScriptQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1375F & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1375F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_QuestMessageScriptQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_QuestMessageScriptQuestPhase(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13761 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13761 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_QuestMessageScriptQuestPhase_k__BackingField;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall TerminalPramsManager__get_QuestRandomGroupList(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13722 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13722 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_QuestRandomGroupList_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_QuestReleaseFocusQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1368D & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1368D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_QuestReleaseFocusQuestId_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_QuestWindowMessage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136B5 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136B5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_QuestWindowMessage_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_SceneMoveQuestClearedInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1373A & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1373A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
}


BannerEntity_o *__fastcall TerminalPramsManager__get_SelectedBannerEntity(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1368F & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1368F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_SelectedBannerEntity_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SelectedRecollectionWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13687 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13687 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_SelectedRecollectionWarId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SelectedStoryQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13685 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13685 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_SelectedStoryQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_ShopFocusItemId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13740 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13740 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_ShopFocusItemId_k__BackingField;
}


SpecifiedSceneInfo_o *__fastcall TerminalPramsManager__get_SpecifiedChangeSceneInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136DB & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136DB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SpotId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1367D & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1367D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_SpotId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SummonId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1367B & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1367B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_SummonId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SummonType(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13679 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13679 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_SummonType_k__BackingField;
}


BattleScriptRootComponent_TalkScriptInfo_o *__fastcall TerminalPramsManager__get_TalkScriptInfo(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13763 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13763 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_TalkScriptInfo_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_TimeStatusEventId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13702 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13702 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_TimeStatusEventId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_TimeStatusLoopCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13704 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13704 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_TimeStatusLoopCount_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_TransitionScrollTabName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13775 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13775 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_TransitionScrollTabName_k__BackingField;
}


WarBoardDataEntity_o *__fastcall TerminalPramsManager__get_WarBoardData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1371A & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1371A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_WarBoardData_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_WarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13677 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13677 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_WarId_k__BackingField;
}


float __fastcall TerminalPramsManager__get_ZoomSize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0
  MapZoom_c *v6; // x8
  float ZOOM_DEFAULT; // s8

  if ( (byte_4B136D9 & 1) == 0 )
  {
    sub_1BCA7E0(&MapZoom_TypeInfo, v1, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v3, v4);
    byte_4B136D9 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( v5->static_fields->mZoomSize <= 0.0 )
  {
    v6 = MapZoom_TypeInfo;
    if ( !MapZoom_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo, v1);
      v6 = MapZoom_TypeInfo;
      v5 = TerminalPramsManager_TypeInfo;
    }
    ZOOM_DEFAULT = v6->static_fields->ZOOM_DEFAULT;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5, v1);
      v5 = TerminalPramsManager_TypeInfo;
    }
    v5->static_fields->mZoomSize = ZOOM_DEFAULT;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  return v5->static_fields->mZoomSize;
}


EventDailyPoint_o *__fastcall TerminalPramsManager__get_eventDailyPoint(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136F8 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136F8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_eventDailyPoint_k__BackingField;
}


EventPointWinReward_o *__fastcall TerminalPramsManager__get_eventPointWinReward(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136E3 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136E3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_eventPointWinReward_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_eventPointWinType(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136E1 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136E1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_eventPointWinType_k__BackingField;
}


EventRaceBoostInfo_o *__fastcall TerminalPramsManager__get_eventRaceBoost(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136E5 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136E5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_eventRaceBoost_k__BackingField;
}


EventTowerReward_o *__fastcall TerminalPramsManager__get_eventTowerReward(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136EE & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136EE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_eventTowerReward_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_friendshipQuestDialogOpenId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13767 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13767 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_friendshipQuestDialogOpenId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isFortificationCheck(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1371E & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1371E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_isFortificationCheck_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isIncomingCall(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13712 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13712 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_isIncomingCall_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isPlayRiverActionCheck(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13720 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13720 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_isPlayRiverActionCheck_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isPlayingQuestPhaseRewardEffect(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1374F & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1374F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isQuestRewardSetted(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1374D & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1374D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_isQuestRewardSetted_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isWarBoardPlay(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1371C & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1371C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_isWarBoardPlay_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_limitCountUnSealQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13769 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13769 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_limitCountUnSealQuestId_k__BackingField;
}


LimitImageAnnounce_array *__fastcall TerminalPramsManager__get_limitImageAnnounces(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13765 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13765 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_limitImageAnnounces_k__BackingField;
}


UserSuperBossEntity_array *__fastcall TerminalPramsManager__get_oldPersonalBoss(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136DF & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136DF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_oldPersonalBoss_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_oldQuestIdForHeaderEvent(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136EB & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136EB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_oldQuestIdForHeaderEvent_k__BackingField;
}


UserSuperBossEntity_array *__fastcall TerminalPramsManager__get_oldSuperBoss(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136DD & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136DD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_oldSuperBoss_k__BackingField;
}


CostumeReleaseAnnounce_array *__fastcall TerminalPramsManager__get_questClearCostumeGet(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136E9 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136E9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_questClearCostumeGet_k__BackingField;
}


CostumeReleaseAnnounce_array *__fastcall TerminalPramsManager__get_questClearCostumeRelease(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136E7 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136E7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_questClearCostumeRelease_k__BackingField;
}


QuestRewardInfo_array *__fastcall TerminalPramsManager__get_resultBoostItemRewardInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136F2 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136F2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_resultBoostItemRewardInfo_k__BackingField;
}


QuestRewardInfo_array *__fastcall TerminalPramsManager__get_resultEventBoardGameTokenRewardInfo(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136F4 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136F4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
}


QuestRewardInfo_array *__fastcall TerminalPramsManager__get_resultEventTowerRewardInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136F0 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136F0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_resultEventTowerRewardInfo_k__BackingField;
}


TimeStatusRecord_o *__fastcall TerminalPramsManager__get_timeStatusRecord(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B136F6 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B136F6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_timeStatusRecord_k__BackingField;
}


UpdateProfileDialogInfoEntity_array *__fastcall TerminalPramsManager__get_updateProfileInfoEntity(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B1376B & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B1376B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_updateProfileInfoEntity_k__BackingField;
}


WarClearReward_array *__fastcall TerminalPramsManager__get_warClearReward(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13700 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13700 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_warClearReward_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__mfGetSceneStatus(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B13786 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13786 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->meSceneStatus;
}


void __fastcall TerminalPramsManager__mfSetSceneStatus(int32_t eSceneStatus, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13785 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13785 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->meSceneStatus = eSceneStatus;
}


void __fastcall TerminalPramsManager__set_AfterActionFocusQuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13698 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13698 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_AfterActionFocusQuestId_k__BackingField = value;
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

  if ( (byte_4B136B8 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136B8 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BattleSetupKeep_k__BackingField = value;
  sub_1BCA784(
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
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13709 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13709 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_BeforeEventActivityPoint_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BeforeEventActivityPointGauge(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1370B & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1370B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_BeforeEventActivityPointGauge_k__BackingField = value;
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
  PartyOrganizationUtility_o *static_fields; // x8

  if ( (byte_4B1370F & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1370F = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (PartyOrganizationUtility_o *)v9->static_fields;
  static_fields[3].klass = (PartyOrganizationUtility_c *)value;
  sub_1BCA784(static_fields + 3, (int64_t)value, v2, v3, v4, v5, v6, v7);
}


void __fastcall TerminalPramsManager__set_BeforeQuestStartWarId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13772 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13772 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_BeforeQuestStartWarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BeforeTimeEventDailyPoint(int64_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136FD & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136FD = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BlankEarthAfterActionFocusSpotId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1372F & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1372F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BlankEarthRank(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13733 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13733 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_BlankEarthRank_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BlankEarthSpotId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1372D & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1372D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_BlankEarthSpotId_k__BackingField = value;
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

  if ( (byte_4B13731 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13731 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BlankEarthTransformData_k__BackingField = value;
  sub_1BCA784(
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
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13743 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13743 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField = value;
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

  if ( (byte_4B136D6 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136D6 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignBonus_k__BackingField = value;
  sub_1BCA784(
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

  if ( (byte_4B136D8 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136D8 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = value;
  sub_1BCA784(
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

  if ( (byte_4B13707 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13707 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_ClearEventQuestIds_k__BackingField = value;
  sub_1BCA784(
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
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136C4 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136C4 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_DataLostBattleEventId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_DataLostBattleResetFadeInTime(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B136CC & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v2, v3);
    byte_4B136CC = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v2);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_DataLostBattleWarId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136C6 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136C6 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_DataLostBattleWarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_Debug_IsBuildInfoDisp(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1374C & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1374C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->mDebug_IsBuildInfoDisp = value;
}


void __fastcall TerminalPramsManager__set_Debug_IsDummyErrorSelect(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1374B & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1374B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->mDebug_IsDummyErrorSelect = value;
}


void __fastcall TerminalPramsManager__set_Debug_IsQuestReleaseAll(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13749 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13749 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->mDebug_IsQuestReleaseAll = value;
}


void __fastcall TerminalPramsManager__set_Debug_IsWarStartActionSkip(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1374A & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1374A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->mDebug_IsWarStartActionSkip = value;
}


void __fastcall TerminalPramsManager__set_DispState(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13676 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13676 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_DispState_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EndTime(int64_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136BA & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136BA = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EndTime_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventActivityPointEffectState(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1370D & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1370D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EventActivityPointEffectState_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventBoardGameSquareIndex(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13715 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13715 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EventBoardGameSquareIndex_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventDailyPointEventId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136FF & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136FF = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EventDailyPointEventId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventDailyPointItem(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136FB & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136FB = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EventDailyPointItem_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventMuralId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136A4 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136A4 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EventMuralId_k__BackingField = value;
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

  if ( (byte_4B13711 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13711 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = value;
  sub_1BCA784(
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
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13739 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13739 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EventUIEffectClearQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventUiWarId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13774 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13774 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EventUiWarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsAutoFolder(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13758 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13758 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoFolder_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsAutoNoSe(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1375A & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1375A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoNoSe_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsAutoOpenMasterMission(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  bool v4; // w19
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4B1377C & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1377C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  v4 = value;
  if ( !byte_4B11139 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B11139 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_IsAutoResume_k__BackingField = v4;
  static_fields->mIsAutoOpenMasterMission = v4;
}


void __fastcall TerminalPramsManager__set_IsAutoResume(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13752 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13752 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoResume_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsAutoShortcut(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13754 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13754 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoShortcut_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsBackQuestBoardDisable(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13770 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13770 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsBackQuestBoardDisable_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsBlankEarthShortcutMoving(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13735 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13735 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsBlankEarthShortcutMoving_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsCheckHomeExpirationDateEventMap(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1375C & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1375C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->isCheckHomeExpirationDateEventMap = value;
}


void __fastcall TerminalPramsManager__set_IsDataLostBattleAutoReset(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136C2 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136C2 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDataLostBattleAutoReset_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDataLostBattleNoticePause(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136CE & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136CE = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDataLostBattleNoticePause_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDataLostBattleResetFadeIn(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136CA & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136CA = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDirectTransition(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1373F & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1373F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDirectTransition_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDispDone_AutoWebView(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1369A & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1369A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDispDone_AutoWebView_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDispDone_UIStandFigure(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1369C & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1369C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDispDone_UIStandFigure_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDispOnly(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136AC & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136AC = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDispOnly_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDispUIStandFigure(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1369E & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1369E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDispUIStandFigure_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDoneShortcut(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13684 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13684 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDoneShortcut_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsEventBoardGameDiceBtnActive(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13717 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13717 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsForceFocusTerminalQuestId(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1368C & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1368C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsFromRecollectionBoard(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1368A & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1368A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsFromRecollectionBoard_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsInvisibleConnectAndLoad(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13748 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13748 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->isInvisibleConnectAndLoad = value;
}


void __fastcall TerminalPramsManager__set_IsMapReturnFolder(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13756 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13756 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsMapReturnFolder_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsOrdealCallWarClear(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136A2 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136A2 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsOrdealCallWarClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPhaseClear(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136AA & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136AA = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsPhaseClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayEventBoardGameArrivalEffectAuto(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136B0 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136B0 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayEventBoardGameDiceBtnActiveEffect(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13719 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13719 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayGetEffect(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136D2 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136D2 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsPlayGetEffect_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayScriptWithMap(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136AE & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136AE = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsPlayScriptWithMap_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayTerminalEffectDisappear(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13727 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13727 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayTerminalEffectDisappearWarId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13729 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13729 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayTerminalEffectNt2AfterAction(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1372B & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1372B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayedEntryBanner(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136D0 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136D0 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsPlayedEntryBanner_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsQuestClear(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136A8 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136A8 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsQuestClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsScriptDisp(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136B2 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136B2 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsScriptDisp_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsSkipNoticeLoginQuestAtOnce(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1376E & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1376E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsStopMasterFaceOverwrite(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136C8 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136C8 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsTopLastIdxNextBoardRequest(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1375E & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1375E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsTransOrdealCall(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1373D & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1373D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsTransOrdealCall_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsWarBoardClear(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136BC & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136BC = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsWarBoardClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsWarClear(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136A0 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136A0 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsWarClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_LastPlayedFreeQuestSpotId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13694 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13694 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_LastPlayedQuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13692 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13692 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_LastPlayedQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_LastSelectQuestIndex(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13696 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13696 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_LastSelectQuestIndex_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_MapModelClearPhaseCount(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136C0 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136C0 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_MapModelClearPhaseCount_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_MapModelClearQuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136BE & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136BE = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_MapModelClearQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_MasterMissionTargetType(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1377E & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1377E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_MasterMissionTargetType_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_MessageDispType(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136B4 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136B4 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_MessageDispType_k__BackingField = value;
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

  if ( (byte_4B13737 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13737 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_NoticeLastModified_k__BackingField = value;
  sub_1BCA784(
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
  PartyOrganizationUtility_o *static_fields; // x8

  if ( (byte_4B13745 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13745 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (PartyOrganizationUtility_o *)v9->static_fields;
  static_fields[4].klass = (PartyOrganizationUtility_c *)value;
  sub_1BCA784(static_fields + 4, (int64_t)value, v2, v3, v4, v5, v6, v7);
}


void __fastcall TerminalPramsManager__set_PhaseCnt(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13682 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13682 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_PhaseCnt_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_PlayHappinessCounterEffect(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136A6 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136A6 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_PlayHappinessCounterEffect_k__BackingField = value;
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

  if ( (byte_4B13725 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13725 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_PlayedTerminalEffects_k__BackingField = value;
  sub_1BCA784(
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
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136D4 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136D4 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_PlayerGenderType_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_QuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13680 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13680 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_QuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_QuestMessageScriptQuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13760 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13760 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_QuestMessageScriptQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_QuestMessageScriptQuestPhase(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13762 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13762 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = value;
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

  if ( (byte_4B13723 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13723 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_QuestRandomGroupList_k__BackingField = value;
  sub_1BCA784(
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
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1368E & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1368E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_QuestReleaseFocusQuestId_k__BackingField = value;
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

  if ( (byte_4B136B6 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136B6 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = value;
  sub_1BCA784(
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

  if ( (byte_4B1373B & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1373B = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SceneMoveQuestClearedInfo_k__BackingField = value;
  sub_1BCA784(
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

  if ( (byte_4B13690 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13690 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = value;
  sub_1BCA784(
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
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13688 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13688 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SelectedRecollectionWarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_SelectedStoryQuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13686 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13686 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SelectedStoryQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_ShopFocusItemId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13741 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13741 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_ShopFocusItemId_k__BackingField = value;
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

  if ( (byte_4B136DC & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136DC = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SpecifiedChangeSceneInfo_k__BackingField = value;
  sub_1BCA784(
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
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1367E & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1367E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SpotId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_SummonId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1367C & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1367C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SummonId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_SummonType(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1367A & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1367A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SummonType_k__BackingField = value;
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

  if ( (byte_4B13764 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13764 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_TalkScriptInfo_k__BackingField = value;
  sub_1BCA784(
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
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13703 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13703 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_TimeStatusEventId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_TimeStatusLoopCount(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13705 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13705 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_TimeStatusLoopCount_k__BackingField = value;
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

  if ( (byte_4B13776 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13776 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_TransitionScrollTabName_k__BackingField = value;
  sub_1BCA784(
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

  if ( (byte_4B1371B & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1371B = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_WarBoardData_k__BackingField = value;
  sub_1BCA784(
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
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13678 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13678 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_WarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_ZoomSize(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B136DA & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v2, v3);
    byte_4B136DA = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v2);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->mZoomSize = value;
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

  if ( (byte_4B136F9 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136F9 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventDailyPoint_k__BackingField = value;
  sub_1BCA784(
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

  if ( (byte_4B136E4 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136E4 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventPointWinReward_k__BackingField = value;
  sub_1BCA784(
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
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136E2 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136E2 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_eventPointWinType_k__BackingField = value;
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

  if ( (byte_4B136E6 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136E6 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventRaceBoost_k__BackingField = value;
  sub_1BCA784(
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

  if ( (byte_4B136EF & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136EF = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventTowerReward_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->_eventTowerReward_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_friendshipQuestDialogOpenId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13768 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13768 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_friendshipQuestDialogOpenId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isFortificationCheck(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1371F & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1371F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_isFortificationCheck_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isIncomingCall(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13713 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13713 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_isIncomingCall_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isPlayRiverActionCheck(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13721 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13721 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_isPlayRiverActionCheck_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isPlayingQuestPhaseRewardEffect(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B13750 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13750 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isQuestRewardSetted(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1374E & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1374E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_isQuestRewardSetted_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isWarBoardPlay(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1371D & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1371D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_isWarBoardPlay_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_limitCountUnSealQuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B1376A & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1376A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_limitCountUnSealQuestId_k__BackingField = value;
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

  if ( (byte_4B13766 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13766 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_limitImageAnnounces_k__BackingField = value;
  sub_1BCA784(
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

  if ( (byte_4B136E0 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136E0 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_oldPersonalBoss_k__BackingField = value;
  sub_1BCA784(
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
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B136EC & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136EC = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = value;
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

  if ( (byte_4B136DE & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136DE = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_oldSuperBoss_k__BackingField = value;
  sub_1BCA784(
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
  PartyOrganizationUtility_o *static_fields; // x8

  if ( (byte_4B136EA & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136EA = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (PartyOrganizationUtility_o *)v9->static_fields;
  static_fields[2].klass = (PartyOrganizationUtility_c *)value;
  sub_1BCA784(static_fields + 2, (int64_t)value, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4B136E8 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136E8 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_questClearCostumeRelease_k__BackingField = value;
  sub_1BCA784(
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

  if ( (byte_4B136F3 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136F3 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_resultBoostItemRewardInfo_k__BackingField = value;
  sub_1BCA784(
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

  if ( (byte_4B136F5 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136F5 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField = value;
  sub_1BCA784(
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
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4B136F1 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136F1 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_resultEventTowerRewardInfo_k__BackingField = value;
  sub_1BCA784(
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

  if ( (byte_4B136F7 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B136F7 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_timeStatusRecord_k__BackingField = value;
  sub_1BCA784(
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

  if ( (byte_4B1376C & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1376C = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_updateProfileInfoEntity_k__BackingField = value;
  sub_1BCA784(
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

  if ( (byte_4B13701 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13701 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_warClearReward_k__BackingField = value;
  sub_1BCA784(
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
  __int64 v9; // x2

  if ( (byte_4B137DE & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_ClearData_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_13441/*"TERMINAL_CLEAR_REWARD_DISP"*/, v8, v9);
    byte_4B137DE = 1;
  }
  TerminalPramsManager_ClearData_TypeInfo->static_fields->SAVEKEY_CLEAR_REWARD_DISP = (struct System_String_o *)StringLiteral_13441/*"TERMINAL_CLEAR_REWARD_DISP"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TerminalPramsManager_ClearData_TypeInfo->static_fields,
    StringLiteral_13441/*"TERMINAL_CLEAR_REWARD_DISP"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager_ClearData___ctor(TerminalPramsManager_ClearData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x1
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  TerminalPramsManager_c *v95; // x0
  struct UserEventPointEntity_array **p_oldUserEventPoint; // x19
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7

  if ( (byte_4B137DC & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B137DC = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.qClearHeroineInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, v4, v5, v6, v7, v8, v9);
  this->fields.questRewardInfos = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.questRewardInfos, 0LL, v10, v11, v12, v13, v14, v15);
  this->fields.questPhaseRewardInfos = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.questPhaseRewardInfos, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.questResultAfterEventRewardInfos = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questResultAfterEventRewardInfos,
    0LL,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.resultEventPanelRewardInfos = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resultEventPanelRewardInfos,
    0LL,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.panelEventPoint = 0;
  *(_QWORD *)&this->fields.clearedLastBattleRaidId = -1LL;
  this->fields.joinGroup = -1;
  this->fields.mOldSuperBoss = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mOldSuperBoss, 0LL, v34, v35, v36, v37, v38, v39);
  this->fields.oldPersonalBoss = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.oldPersonalBoss, 0LL, v40, v41, v42, v43, v44, v45);
  this->fields.evPointWinReward = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.evPointWinReward, 0LL, v46, v47, v48, v49, v50, v51);
  this->fields.evPointWinType = 0;
  this->fields.evRaceBoost = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.evRaceBoost, 0LL, v52, v53, v54, v55, v56, v57);
  this->fields.questClearCostume = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.questClearCostume, 0LL, v58, v59, v60, v61, v62, v63);
  this->fields.questClearCostumeGetInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.questClearCostumeGetInfo, 0LL, v64, v65, v66, v67, v68, v69);
  this->fields.eventTowerReward = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventTowerReward, 0LL, v70, v71, v72, v73, v74, v75);
  this->fields.resultEventTowerRewardInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resultEventTowerRewardInfo, 0LL, v76, v77, v78, v79, v80, v81);
  this->fields.warClearReward = 0LL;
  this->fields.isDispOnly = 0;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.warClearReward, 0LL, v82, v83, v84, v85, v86, v87);
  v95 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v88);
    v95 = TerminalPramsManager_TypeInfo;
  }
  this->fields.EventActivityPointEffectState = v95->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  this->fields.limitImageAnnounces = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.limitImageAnnounces, 0LL, v89, v90, v91, v92, v93, v94);
  this->fields.oldUserEventPoint = 0LL;
  p_oldUserEventPoint = &this->fields.oldUserEventPoint;
  *((_BYTE *)p_oldUserEventPoint - 16) = 0;
  *((_DWORD *)p_oldUserEventPoint - 3) = 0;
  *((_BYTE *)p_oldUserEventPoint - 8) = 0;
  sub_1BCA784((PartyOrganizationUtility_o *)p_oldUserEventPoint, 0LL, v97, v98, v99, v100, v101, v102);
}


void __fastcall TerminalPramsManager_ClearData___ctor_35415748(
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
  struct UserSuperBossEntity_array *v29; // x23
  struct QuestRewardInfo_array *v33; // x21
  struct CostumeReleaseAnnounce_array *v36; // x27
  struct CostumeReleaseAnnounce_array *v37; // x24
  struct UserSuperBossEntity_array *v38; // x20
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
  __int64 v55; // x3
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v56; // x0
  const MethodInfo *v57; // x2
  int64_t v58; // x25
  __int64 v59; // x0
  __int64 v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  bool v67; // w28
  bool v68; // w22
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
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  struct QuestRewardInfo_array *v129; // x1
  __int64 v130; // x1
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  TerminalPramsManager_c *v137; // x0
  TerminalPramsManager_c *v138; // x0
  struct QuestRewardInfo_array *resultBoostItemRewardInfo_k__BackingField; // x1
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  __int64 v146; // x1
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  TerminalPramsManager_c *v153; // x0
  TerminalPramsManager_c *v154; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo_k__BackingField; // x1
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  struct WarClearReward_array *v162; // x1
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
  struct BattleDropItem_array *v176; // x1
  int64_t v177; // x2
  int32_t v178; // w3
  System_String_o *v179; // x4
  BattleSetupInfo_o *v180; // x5
  FollowerInfo_o *v181; // x6
  PartyListViewItem_o *v182; // x7
  struct LimitImageAnnounce_array *v183; // x1
  __int64 v184; // x1
  int64_t v185; // x2
  int32_t v186; // w3
  System_String_o *v187; // x4
  BattleSetupInfo_o *v188; // x5
  FollowerInfo_o *v189; // x6
  PartyListViewItem_o *v190; // x7
  TerminalPramsManager_c *v191; // x0
  struct UserEventPointEntity_array *OldUserEventPoint_k__BackingField; // x1

  v29 = oldSuperBoss;
  v33 = qri;
  v36 = questClearCostumeGet;
  v37 = questClearCostumeRelease;
  v38 = oldPersonalBoss;
  if ( (byte_4B137DD & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDropItem___TypeInfo, qcrHeroineInfo, qri);
    sub_1BCA7E0(&CostumeReleaseAnnounce___TypeInfo, v39, v40);
    sub_1BCA7E0(&LimitImageAnnounce___TypeInfo, v41, v42);
    sub_1BCA7E0(&TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo, v43, v44);
    sub_1BCA7E0(&QuestRewardInfo___TypeInfo, v45, v46);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v47, v48);
    sub_1BCA7E0(&UserSuperBossEntity___TypeInfo, v49, v50);
    sub_1BCA7E0(&WarClearReward___TypeInfo, v51, v52);
    byte_4B137DD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v56 = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)sub_1BCAA2C(
                                                                 TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo,
                                                                 v53,
                                                                 v54,
                                                                 v55);
  v58 = (int64_t)v56;
  if ( qcrHeroineInfo )
  {
    TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_35425288(v56, qcrHeroineInfo, v57);
    if ( this )
      goto LABEL_5;
LABEL_34:
    sub_1BCAA3C(v59, v60);
  }
  System_Object___ctor((Il2CppObject *)v56, 0LL);
  *(_QWORD *)(v58 + 16) = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 16), 0LL, v140, v141, v142, v143, v144, v145);
  if ( !this )
    goto LABEL_34;
LABEL_5:
  this->fields.qClearHeroineInfo = (struct TerminalPramsManager_QuestClearHeroineInfoForSave_o *)v58;
  v67 = qClear;
  v68 = pclear;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, v58, v61, v62, v63, v64, v65, v66);
  if ( !v33 )
    v33 = (struct QuestRewardInfo_array *)sub_1BCA888(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.questRewardInfos = v33;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.questRewardInfos, (int64_t)v33, v69, v70, v71, v72, v73, v74);
  if ( !questPhaseRewardInfos )
    questPhaseRewardInfos = (QuestRewardInfo_array *)sub_1BCA888(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.questPhaseRewardInfos = questPhaseRewardInfos;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questPhaseRewardInfos,
    (int64_t)questPhaseRewardInfos,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this->fields.questClear = v67;
  this->fields.phaseClear = v68;
  this->fields.clearedLastBattleRaidId = lastRaidId;
  this->fields.clearedBattleRaidId = raidId;
  this->fields.joinGroup = groupjoin;
  if ( !oldSuperBoss )
    v29 = (struct UserSuperBossEntity_array *)sub_1BCA888(UserSuperBossEntity___TypeInfo, 0LL);
  this->fields.mOldSuperBoss = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mOldSuperBoss, (int64_t)v29, v81, v82, v83, v84, v85, v86);
  if ( !oldPersonalBoss )
    v38 = (struct UserSuperBossEntity_array *)sub_1BCA888(UserSuperBossEntity___TypeInfo, 0LL);
  this->fields.oldPersonalBoss = v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.oldPersonalBoss, (int64_t)v38, v87, v88, v89, v90, v91, v92);
  this->fields.evPointWinReward = evpWinReward;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.evPointWinReward,
    (int64_t)evpWinReward,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  this->fields.evRaceBoost = evRace;
  this->fields.evPointWinType = evpWinType;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.evRaceBoost,
    (int64_t)evRace,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  if ( !questClearCostumeRelease )
    v37 = (struct CostumeReleaseAnnounce_array *)sub_1BCA888(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostume = v37;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questClearCostume,
    (int64_t)v37,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  if ( !questClearCostumeGet )
    v36 = (struct CostumeReleaseAnnounce_array *)sub_1BCA888(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostumeGetInfo = v36;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questClearCostumeGetInfo,
    (int64_t)v36,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  this->fields.eventTowerReward = evTowerReward;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventTowerReward,
    (int64_t)evTowerReward,
    v117,
    v118,
    v119,
    v120,
    v121,
    v122);
  v129 = resultEvTowerRewardInfo;
  if ( !resultEvTowerRewardInfo )
    v129 = (struct QuestRewardInfo_array *)sub_1BCA888(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.resultEventTowerRewardInfo = v129;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resultEventTowerRewardInfo,
    (int64_t)v129,
    v123,
    v124,
    v125,
    v126,
    v127,
    v128);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v130);
  if ( !byte_4B1337B )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v130, v131);
    byte_4B1337B = 1;
  }
  v137 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v130);
    v137 = TerminalPramsManager_TypeInfo;
  }
  if ( v137->static_fields->_resultBoostItemRewardInfo_k__BackingField )
  {
    if ( !v137->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v137, v130);
    if ( !byte_4B1337B )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v130, v131);
      byte_4B1337B = 1;
    }
    v138 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v130);
      v138 = TerminalPramsManager_TypeInfo;
    }
    resultBoostItemRewardInfo_k__BackingField = v138->static_fields->_resultBoostItemRewardInfo_k__BackingField;
  }
  else
  {
    resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1BCA888(
                                                                                  QuestRewardInfo___TypeInfo,
                                                                                  0LL);
  }
  this->fields.resultBoostItemRewardInfo = resultBoostItemRewardInfo_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resultBoostItemRewardInfo,
    (int64_t)resultBoostItemRewardInfo_k__BackingField,
    v131,
    v132,
    v133,
    v134,
    v135,
    v136);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v146);
  if ( !byte_4B13373 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v146, v147);
    byte_4B13373 = 1;
  }
  v153 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v146);
    v153 = TerminalPramsManager_TypeInfo;
  }
  if ( v153->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField )
  {
    if ( !v153->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v153, v146);
    if ( !byte_4B13373 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v146, v147);
      byte_4B13373 = 1;
    }
    v154 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v146);
      v154 = TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfo_k__BackingField = v154->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
  }
  else
  {
    resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1BCA888(
                                                                                            QuestRewardInfo___TypeInfo,
                                                                                            0LL);
  }
  this->fields.resultEventBoardGameTokenRewardInfo = resultEventBoardGameTokenRewardInfo_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resultEventBoardGameTokenRewardInfo,
    (int64_t)resultEventBoardGameTokenRewardInfo_k__BackingField,
    v147,
    v148,
    v149,
    v150,
    v151,
    v152);
  v162 = warClearRewardIn;
  this->fields.isDispOnly = dispOnly;
  if ( !warClearRewardIn )
    v162 = (struct WarClearReward_array *)sub_1BCA888(WarClearReward___TypeInfo, 0LL);
  this->fields.warClearReward = v162;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.warClearReward,
    (int64_t)v162,
    v156,
    v157,
    v158,
    v159,
    v160,
    v161);
  v169 = questResultAfterEventRewardInfos;
  this->fields.isWarBoardClear = isWarBoardClear;
  this->fields.EventActivityPointEffectState = eventActivityPointEffectState;
  if ( !questResultAfterEventRewardInfos )
    v169 = (struct BattleDropItem_array *)sub_1BCA888(BattleDropItem___TypeInfo, 0LL);
  this->fields.questResultAfterEventRewardInfos = v169;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questResultAfterEventRewardInfos,
    (int64_t)v169,
    v163,
    v164,
    v165,
    v166,
    v167,
    v168);
  v176 = resultEventPanelRewardInfos;
  if ( !resultEventPanelRewardInfos )
    v176 = (struct BattleDropItem_array *)sub_1BCA888(BattleDropItem___TypeInfo, 0LL);
  this->fields.resultEventPanelRewardInfos = v176;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resultEventPanelRewardInfos,
    (int64_t)v176,
    v170,
    v171,
    v172,
    v173,
    v174,
    v175);
  v183 = limitImageAnnounces;
  this->fields.panelEventPoint = panelEventPoint;
  if ( !limitImageAnnounces )
    v183 = (struct LimitImageAnnounce_array *)sub_1BCA888(LimitImageAnnounce___TypeInfo, 0LL);
  this->fields.limitImageAnnounces = v183;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.limitImageAnnounces,
    (int64_t)v183,
    v177,
    v178,
    v179,
    v180,
    v181,
    v182);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v184);
  if ( !byte_4B12CE1 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v184, v185);
    byte_4B12CE1 = 1;
  }
  v191 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v184);
    v191 = TerminalPramsManager_TypeInfo;
  }
  this->fields.isOrdealCallWarClear = v191->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4B13376 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v184, v185);
    v191 = TerminalPramsManager_TypeInfo;
    byte_4B13376 = 1;
  }
  if ( !v191->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v191, v184);
    v191 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventMuralId = v191->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_4B13378 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v184, v185);
    v191 = TerminalPramsManager_TypeInfo;
    byte_4B13378 = 1;
  }
  if ( !v191->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v191, v184);
    v191 = TerminalPramsManager_TypeInfo;
  }
  this->fields.playHappinessCounterEffect = v191->static_fields->_PlayHappinessCounterEffect_k__BackingField;
  if ( !byte_4B12DD0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v184, v185);
    v191 = TerminalPramsManager_TypeInfo;
    byte_4B12DD0 = 1;
  }
  if ( !v191->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v191, v184);
    v191 = TerminalPramsManager_TypeInfo;
  }
  OldUserEventPoint_k__BackingField = v191->static_fields->_OldUserEventPoint_k__BackingField;
  this->fields.oldUserEventPoint = OldUserEventPoint_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.oldUserEventPoint,
    (int64_t)OldUserEventPoint_k__BackingField,
    v185,
    v186,
    v187,
    v188,
    v189,
    v190);
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor_35424524(
        TerminalPramsManager_OldHeroineLawData_o *this,
        UserServantEntity_o *uSvtEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x0
  __int64 v8; // x1
  __int128 v9; // q1
  __int128 v10; // q1
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4B137D8 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, uSvtEnt, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
    byte_4B137D8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !uSvtEnt )
    sub_1BCAA3C(v7, v8);
  v9 = *(_OWORD *)&uSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v16.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
  v15 = v16;
  this->fields.id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v15, 0LL);
  v10 = *(_OWORD *)&uSvtEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v10;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v14, 0LL);
  v13 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v17.fields.currentCryptoKey = v13;
  *(_QWORD *)&v17.fields.fakeValue = v12;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL);
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                              uSvtEnt->fields.limitCount,
                              0LL);
  this->fields.imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                   uSvtEnt->fields.imageLimitCount,
                                   0LL);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                  uSvtEnt->fields.dispLimitCount,
                                  0LL);
  this->fields.commandCardLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                         uSvtEnt->fields.commandCardLimitCount,
                                         0LL);
  this->fields.iconLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x20
  __int64 v10; // x1
  int64_t id; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v12; // x0
  __int64 v13; // x1
  __int128 v14; // q0
  __int64 v15; // x1
  __int128 v16; // q0
  int32_t svtId; // w21
  UserServantEntity_o *result; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+40h] [xbp-50h]

  if ( (byte_4B137D9 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v7, v8);
    byte_4B137D9 = 1;
  }
  v9 = sub_1BCAA2C(UserServantEntity_TypeInfo, method, v2, v3);
  UserServantEntity___ctor((UserServantEntity_o *)v9, 0LL);
  id = this->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v20, id, 0LL);
  v21 = v20;
  if ( !v9 )
    sub_1BCAA3C(v12, v13);
  v14 = *(_OWORD *)&v21.fields.fakeValue;
  *(_OWORD *)(v9 + 16) = *(_OWORD *)&v21.fields.currentCryptoKey;
  *(_OWORD *)(v9 + 32) = v14;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v19, this->fields.userId, 0LL);
  v16 = *(_OWORD *)&v19.fields.fakeValue;
  v20 = v19;
  *(_OWORD *)(v9 + 48) = *(_OWORD *)&v19.fields.currentCryptoKey;
  *(_OWORD *)(v9 + 64) = v16;
  svtId = this->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v9 + 80) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                    svtId,
                                                                    0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v9 + 96) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                    this->fields.limitCount,
                                                                    0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v9 + 112) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.imageLimitCount,
                                                                     0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v9 + 128) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.dispLimitCount,
                                                                     0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v9 + 144) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.commandCardLimitCount,
                                                                     0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v9 + 160) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.iconLimitCount,
                                                                     0LL);
  result = (UserServantEntity_o *)v9;
  *(_OWORD *)(v9 + 256) = *(_OWORD *)&this->fields.lv;
  *(_OWORD *)(v9 + 272) = *(_OWORD *)&this->fields.adjustAtk;
  *(_OWORD *)(v9 + 288) = *(_OWORD *)&this->fields.skillLv3;
  *(_QWORD *)(v9 + 304) = this->fields.createdAt;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_35425288(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        QuestClearHeroineInfo_o *qClearHeroineInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  UserServantEntity_o *oldUsrSvtData; // x21
  TerminalPramsManager_OldHeroineLawData_o *v10; // x22
  const MethodInfo *v11; // x2
  TerminalPramsManager_QuestClearHeroineInfoForSave_Fields *p_fields; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B137DA & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_OldHeroineLawData_TypeInfo, qClearHeroineInfo, method);
    byte_4B137DA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !qClearHeroineInfo )
    sub_1BCAA3C(v5, v6);
  oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
  v10 = (TerminalPramsManager_OldHeroineLawData_o *)sub_1BCAA2C(
                                                      TerminalPramsManager_OldHeroineLawData_TypeInfo,
                                                      v6,
                                                      v7,
                                                      v8);
  TerminalPramsManager_OldHeroineLawData___ctor_35424524(v10, oldUsrSvtData, v11);
  this->fields.oldUsrSvtData = v10;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)p_fields, (int64_t)v10, v13, v14, v15, v16, v17, v18);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  const MethodInfo *v6; // x1
  TerminalPramsManager_OldHeroineLawData_o *oldUsrSvtData; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  QuestClearHeroineInfo_o *result; // x0

  if ( (byte_4B137DB & 1) == 0 )
  {
    sub_1BCA7E0(&QuestClearHeroineInfo_TypeInfo, method, v2);
    byte_4B137DB = 1;
  }
  v5 = sub_1BCAA2C(QuestClearHeroineInfo_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  oldUsrSvtData = this->fields.oldUsrSvtData;
  if ( !oldUsrSvtData
    || (oldUsrSvtData = (TerminalPramsManager_OldHeroineLawData_o *)TerminalPramsManager_OldHeroineLawData__GetLoad(
                                                                      oldUsrSvtData,
                                                                      v6),
        !v5) )
  {
    sub_1BCAA3C(oldUsrSvtData, v6);
  }
  *(_QWORD *)(v5 + 16) = oldUsrSvtData;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)oldUsrSvtData, v8, v9, v10, v11, v12, v13);
  result = (QuestClearHeroineInfo_o *)v5;
  *(_BYTE *)(v5 + 24) = this->fields.isChangeLimitcnt;
  *(_BYTE *)(v5 + 25) = this->fields.isChangeTreasureDvc;
  *(_QWORD *)(v5 + 28) = *(_QWORD *)&this->fields.treasureDvcId;
  *(_DWORD *)(v5 + 36) = this->fields.oldFriendShipRank;
  *(_BYTE *)(v5 + 40) = this->fields.isFriendShipExceed;
  *(_BYTE *)(v5 + 41) = this->fields.isExceed;
  return result;
}


void __fastcall TerminalPramsManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B137DF & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager___c_TypeInfo, v1, v2);
    byte_4B137DF = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(TerminalPramsManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  TerminalPramsManager___c_TypeInfo->static_fields->__9 = (struct TerminalPramsManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TerminalPramsManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall TerminalPramsManager___c___ctor(TerminalPramsManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TerminalPramsManager___c___ReceiveQuestEndResultInfo_b__688_0(
        TerminalPramsManager___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  int32_t questId; // w19
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B137E0 & 1) == 0 )
  {
    this = (TerminalPramsManager___c_o *)sub_1BCA7E0(&TerminalPramsManager_TypeInfo, n, method);
    byte_4B137E0 = 1;
  }
  if ( !n )
    sub_1BCAA3C(this, n);
  questId = n->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, n);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, n, method);
    byte_4B12DC3 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, n);
    v5 = TerminalPramsManager_TypeInfo;
  }
  return questId == v5->static_fields->_QuestId_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__693_0(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  if ( (byte_4B137E1 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, *(_QWORD *)&v, method);
    byte_4B137E1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&v);
  return TerminalPramsManager__IsMainStoryForQuestId(v, *(const MethodInfo **)&v);
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__693_3(
        TerminalPramsManager___c_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1BCAA3C(this, 0LL);
  return v->fields.id;
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__693_4(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  return v;
}


void __fastcall TerminalPramsManager___c__DisplayClass676_0___ctor(
        TerminalPramsManager___c__DisplayClass676_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager___c__DisplayClass676_0___CheckResumeEffectNT2_b__0(
        TerminalPramsManager___c__DisplayClass676_0_o *this,
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

  if ( (byte_4B137E2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, effectId, method);
    byte_4B137E2 = 1;
  }
  effectIdsStr = this->fields.effectIdsStr;
  p_fields = (PartyOrganizationUtility_o *)&this->fields;
  v7 = System_String__Concat_62412480(effectIdsStr, effectId, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  p_fields->klass = (PartyOrganizationUtility_c *)v7;
  sub_1BCA784(p_fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall TerminalPramsManager___c__DisplayClass693_0___ctor(
        TerminalPramsManager___c__DisplayClass693_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
QuestEntity_o *__fastcall TerminalPramsManager___c__DisplayClass693_0___SendOpenedQuestIdToAdManager_b__1(
        TerminalPramsManager___c__DisplayClass693_0_o *this,
        int32_t v,
        const MethodInfo *method)
{
  QuestMaster_o *questMaster; // x0

  questMaster = this->fields.questMaster;
  if ( !questMaster )
    sub_1BCAA3C(0LL, *(_QWORD *)&v);
  return QuestMaster__getQuestEntity(questMaster, v, 0LL);
}


bool __fastcall TerminalPramsManager___c__DisplayClass693_0___SendOpenedQuestIdToAdManager_b__2(
        TerminalPramsManager___c__DisplayClass693_0_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  UserQuestMaster_o *userQuestMaster; // x20
  int64_t UserId; // x0
  __int64 v7; // x1
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B137E3 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, v, method);
    byte_4B137E3 = 1;
  }
  entity = 0LL;
  userQuestMaster = this->fields.userQuestMaster;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v || !userQuestMaster )
    goto LABEL_11;
  UserId = UserQuestMaster__TryGetEntity(userQuestMaster, &entity, UserId, v->fields.id, 0LL);
  if ( (UserId & 1) != 0 )
  {
    if ( entity )
      return entity->fields.clearNum == 0;
LABEL_11:
    sub_1BCAA3C(UserId, v7);
  }
  return 1;
}