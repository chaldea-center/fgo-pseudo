void __fastcall TerminalPramsManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v1; // x19
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct TerminalPramsManager_StaticFields *v9; // x0
  void *v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x0
  struct TerminalPramsManager_StaticFields *v18; // x8
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_List_object__o *v25; // x19
  PartyOrganizationUtility_o *p_eventScriptMessages; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct TerminalPramsManager_StaticFields *v33; // x8

  if ( (byte_4BD9AD6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&float___TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD9AD6 = 1;
  }
  v1 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v1,
    (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->loginQuestNotifiedList = v1;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->loginQuestNotifiedList, (int64_t)v1, v3, v4, v5, v6, v7, v8);
  v9 = TerminalPramsManager_TypeInfo->static_fields;
  v9->_IsMainInterludeWarClear_k__BackingField = 0;
  v10 = StringLiteral_1/*""*/;
  v9->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v9->mTerminalWarStartedIds, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  *(_OWORD *)&TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = xmmword_BFE4A0;
  v17 = sub_1C21EE0(float___TypeInfo, 3LL);
  v18 = TerminalPramsManager_TypeInfo->static_fields;
  v18->TipsArchiveScrollValueList = (struct System_Single_array *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v18->TipsArchiveScrollValueList, v17, v19, v20, v21, v22, v23, v24);
  TerminalPramsManager_TypeInfo->static_fields->joinGroupId = -1;
  v25 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  p_eventScriptMessages = (PartyOrganizationUtility_o *)&TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  p_eventScriptMessages->klass = (PartyOrganizationUtility_c *)v25;
  sub_1C21DDC(p_eventScriptMessages, (int64_t)v25, v27, v28, v29, v30, v31, v32);
  v33 = TerminalPramsManager_TypeInfo->static_fields;
  *(_QWORD *)&v33->EVENT_POINT_EFFECT_STATE_SUB = 0xFFFFFFFFLL;
  v33->EVENT_POINT_EFFECT_STATE_ADD = 1;
  *(_QWORD *)&v33->_ShopFocusItemId_k__BackingField = 0LL;
  v33->isInvisibleConnectAndLoad = 0;
  *(_QWORD *)&v33->ConnectMarkEventId = 0LL;
  v33->meSceneStatus = 0;
  v33->isCheckHomeExpirationDateEventMap = 1;
  v33->_IsMoveFolderByQuestAfterAction_k__BackingField = 0;
  *(_WORD *)&v33->IsEventMapLoading = 0;
  v33->_MasterMissionTargetType_k__BackingField = -1;
}


void __fastcall TerminalPramsManager__AddNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_4BD9AB6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AB6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v3->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1C22094(0LL, method);
  System_Collections_Generic_HashSet_int___Add(
    loginQuestNotifiedList,
    questId,
    (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall TerminalPramsManager__AutoOff(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4BD9A78 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A78 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD736A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD736A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_IsAutoResume_k__BackingField = 0;
  if ( !byte_4BD9651 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_4BD9651 = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  static_fields->_IsAutoShortcut_k__BackingField = 0;
  static_fields->mIsAutoOpenMasterMission = 0;
}


void __fastcall TerminalPramsManager__BlankEarthRank_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9AAA & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11641/*"SAVEKEY_BlankEarthRank"*/);
    byte_4BD9AAA = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9AF8 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AF8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11641/*"SAVEKEY_BlankEarthRank"*/,
    v1->static_fields->_BlankEarthRank_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__BlankEarthSpotId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9AA9 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11642/*"SAVEKEY_BlankEarthSpotId"*/);
    byte_4BD9AA9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD8FB2 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8FB2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11642/*"SAVEKEY_BlankEarthSpotId"*/,
    v1->static_fields->_BlankEarthSpotId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__CampaignDirectBonus_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  Il2CppObject *p_obj; // x19
  System_String_o *v3; // x0

  if ( (byte_4BD9AA8 & 1) == 0 )
  {
    sub_1C21E38(&CommonUI_CampaignDirectBonusData___TypeInfo);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11643/*"SAVEKEY_CampaignDirectBonus"*/);
    byte_4BD9AA8 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7184 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7184 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  p_obj = &v1->static_fields->_CampaignDirectBonus_k__BackingField->obj;
  if ( !p_obj )
    p_obj = (Il2CppObject *)sub_1C21EE0(CommonUI_CampaignDirectBonusData___TypeInfo, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(p_obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11643/*"SAVEKEY_CampaignDirectBonus"*/, v3, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall TerminalPramsManager__CanSendTrackEvent(int32_t questId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x19
  Il2CppObject *v8; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD9AC4 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C21E38(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD9AC4 = 1;
  }
  v8 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !entity )
    goto LABEL_16;
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0LL);
  if ( !v5 )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v5,
          &v8,
          (int32_t)Instance,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v8 )
LABEL_16:
    sub_1C22094(Instance, v4);
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
            HIDWORD(v8[1].klass),
            (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall TerminalPramsManager__CheckClearSelectedStoryQuestId(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4BD9AAB & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AAB = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9816 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9816 = 1;
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
    if ( !byte_4BD9816 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9816 = 1;
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
      if ( !byte_4BD9405 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9405 = 1;
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
  if ( (byte_4BD9A93 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13857/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C21E38(&StringLiteral_13858/*"TerminalBeforeEventActivityPointGauge"*/);
    byte_4BD9A93 = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13857/*"TerminalBeforeEventActivityPoint"*/, 0LL)
      && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13858/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckEventSubmarinePointSaveData(const MethodInfo *method)
{
  if ( (byte_4BD9A95 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13859/*"TerminalBeforeEventSubmarinePointData"*/);
    byte_4BD9A95 = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13859/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckIsOrdealCallWarClear(WarEntity_o *warEntity, const MethodInfo *method)
{
  int32_t parentWarId; // w19
  BalanceConfig_c *v4; // x0

  if ( (byte_4BD9AD1 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD9AD1 = 1;
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
  __int64 v1; // x19
  const MethodInfo *v2; // x1
  TerminalPramsManager_c *v3; // x0
  ScrTerminalListTop_c *v4; // x8
  int32_t NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // w20
  const MethodInfo *v6; // x1
  ScrTerminalListTop_c *v7; // x0
  int32_t NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // w20
  ScrTerminalListTop_c *v9; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  TerminalPramsManager_c *v12; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  void *v22; // x1
  System_Action_object__o *v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x19
  TerminalPramsManager_c *v31; // x0
  PartyOrganizationUtility_o *p_PlayedTerminalEffects_k__BackingField; // x0
  const MethodInfo *v33; // x0
  int32_t v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BD9AAF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_string__TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ForEach__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C21E38(&ScrTerminalListTop_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalPramsManager___c__DisplayClass692_0__CheckResumeEffectNT2_b__0__);
    sub_1C21E38(&TerminalPramsManager___c__DisplayClass692_0_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_89/*"\r\n"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD9AAF = 1;
  }
  v34 = 0;
  v1 = sub_1C22084(TerminalPramsManager___c__DisplayClass692_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass692_0___ctor((TerminalPramsManager___c__DisplayClass692_0_o *)v1, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9AF6 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AF6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->_PlayedTerminalEffects_k__BackingField )
  {
    v4 = ScrTerminalListTop_TypeInfo;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v4 = ScrTerminalListTop_TypeInfo;
      v3 = TerminalPramsManager_TypeInfo;
    }
    NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v4->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID, v2) )
    {
      v7 = ScrTerminalListTop_TypeInfo;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v7 = ScrTerminalListTop_TypeInfo;
      }
      NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID = v7->static_fields->NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID, v6) )
      {
        v9 = ScrTerminalListTop_TypeInfo;
        if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
          v9 = ScrTerminalListTop_TypeInfo;
        }
        v34 = v9->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
        v11 = (Il2CppObject *)System_Int32__ToString((int32_t)&v34, 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD9AF6 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD9AF6 = 1;
        }
        v12 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v12 = TerminalPramsManager_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v12->static_fields->_PlayedTerminalEffects_k__BackingField;
        if ( !PlayedTerminalEffects_k__BackingField
          || (PlayedTerminalEffects_k__BackingField = System_String__Replace_63135104(
                                                        PlayedTerminalEffects_k__BackingField,
                                                        (System_String_o *)StringLiteral_89/*"\r\n"*/,
                                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                                        0LL)) == 0LL
          || (v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                           PlayedTerminalEffects_k__BackingField,
                                                                           0xAu,
                                                                           0,
                                                                           0LL),
              (PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Linq_Enumerable__ToList_object_(
                                                                            v14,
                                                                            (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL)
          || (v15 = (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
              PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Collections_Generic_List_object___Remove(
                                                                           (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
                                                                           v11,
                                                                           (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_string__Remove__),
              !v1) )
        {
          sub_1C22094(PlayedTerminalEffects_k__BackingField, v10);
        }
        v22 = StringLiteral_1/*""*/;
        *(_QWORD *)(v1 + 16) = StringLiteral_1/*""*/;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v1 + 16), (int64_t)v22, v16, v17, v18, v19, v20, v21);
        v23 = (System_Action_object__o *)sub_1C22084(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v23,
          (Il2CppObject *)v1,
          Method_TerminalPramsManager___c__DisplayClass692_0__CheckResumeEffectNT2_b__0__,
          0LL);
        System_Collections_Generic_List_object___ForEach(
          v15,
          (System_Action_T__o *)v23,
          (const MethodInfo_364FAF4 *)Method_System_Collections_Generic_List_string__ForEach__);
        v30 = *(_QWORD *)(v1 + 16);
        if ( !byte_4BD9AE7 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD9AE7 = 1;
        }
        v31 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v31 = TerminalPramsManager_TypeInfo;
        }
        p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v31->static_fields->_PlayedTerminalEffects_k__BackingField;
        p_PlayedTerminalEffects_k__BackingField->klass = (PartyOrganizationUtility_c *)v30;
        sub_1C21DDC(p_PlayedTerminalEffects_k__BackingField, v30, v24, v25, v26, v27, v28, v29);
        TerminalPramsManager__Save_SaveData(v33);
      }
    }
  }
}


void __fastcall TerminalPramsManager__ClearEventQuestIds_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9AA3 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11644/*"SAVEKEY_ClearEventQuestIds"*/);
    byte_4BD9AA3 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9098 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9098 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11644/*"SAVEKEY_ClearEventQuestIds"*/,
    v1->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__ConnectMark_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9AA2 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11646/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C21E38(&StringLiteral_11645/*"SAVEKEY_ConnectMarkAnimationId"*/);
    byte_4BD9AA2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11646/*"SAVEKEY_ConnectMarkEventId"*/, v1->static_fields->ConnectMarkEventId, 0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11645/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__DeleteClearDatas(const MethodInfo *method)
{
  TerminalPramsManager_ClearData_c *v1; // x0
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v8; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  void *v10; // x1

  if ( (byte_4BD9AC7 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD9AC7 = 1;
  }
  v1 = TerminalPramsManager_ClearData_TypeInfo;
  if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
    v1 = TerminalPramsManager_ClearData_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9B0A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9B0A = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  static_fields->_isQuestRewardSetted_k__BackingField = 0;
  v10 = StringLiteral_1/*""*/;
  static_fields->lastPlayBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->lastPlayBgmName, (int64_t)v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall TerminalPramsManager__DeleteContinueData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_4BD9A86 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11649/*"SAVEKEY_LastPlayBgmName"*/);
    sub_1C21E38(&StringLiteral_13861/*"TerminalEndTime"*/);
    sub_1C21E38(&StringLiteral_5327/*"Debug_IsOriginalGuestNPC"*/);
    sub_1C21E38(&StringLiteral_11655/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_1C21E38(&StringLiteral_13857/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C21E38(&StringLiteral_11643/*"SAVEKEY_CampaignDirectBonus"*/);
    sub_1C21E38(&StringLiteral_11650/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    sub_1C21E38(&StringLiteral_11660/*"SAVEKEY_TerminalCraftInfoDisp"*/);
    sub_1C21E38(&StringLiteral_13862/*"TerminalEventDailyPointEventId"*/);
    sub_1C21E38(&StringLiteral_5323/*"Debug_GuestNPCInfoList"*/);
    sub_1C21E38(&StringLiteral_13859/*"TerminalBeforeEventSubmarinePointData"*/);
    sub_1C21E38(&StringLiteral_13868/*"TerminalPhaseCnt"*/);
    sub_1C21E38(&StringLiteral_11659/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_1C21E38(&StringLiteral_13876/*"TerminalTimeStatusEventId"*/);
    sub_1C21E38(&StringLiteral_13860/*"TerminalDispState"*/);
    sub_1C21E38(&StringLiteral_11652/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_1C21E38(&StringLiteral_13863/*"TerminalIsDoneShortcut"*/);
    sub_1C21E38(&StringLiteral_11651/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C21E38(&StringLiteral_11656/*"SAVEKEY_PlayerGenderType"*/);
    sub_1C21E38(&StringLiteral_11661/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    sub_1C21E38(&StringLiteral_11644/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_1C21E38(&StringLiteral_11653/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_1C21E38(&StringLiteral_5328/*"Debug_IsQuestReleaseAll"*/);
    sub_1C21E38(&StringLiteral_5325/*"Debug_IsDummyErrorSelect"*/);
    sub_1C21E38(&StringLiteral_13871/*"TerminalQuestId"*/);
    sub_1C21E38(&StringLiteral_11658/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    sub_1C21E38(&StringLiteral_11664/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_1C21E38(&StringLiteral_13875/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_1C21E38(&StringLiteral_13880/*"TerminalWarId"*/);
    sub_1C21E38(&StringLiteral_13873/*"TerminalSpotId"*/);
    sub_1C21E38(&StringLiteral_13877/*"TerminalTimeStatusLoopCount"*/);
    sub_1C21E38(&StringLiteral_13858/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_1C21E38(&StringLiteral_11642/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_1C21E38(&StringLiteral_11647/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_1C21E38(&StringLiteral_5326/*"Debug_IsOriginalBattle"*/);
    sub_1C21E38(&StringLiteral_13881/*"TerminalWarStartedIds"*/);
    sub_1C21E38(&StringLiteral_5322/*"Debug_BattleEnemyList"*/);
    sub_1C21E38(&StringLiteral_11646/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C21E38(&StringLiteral_13879/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_1C21E38(&StringLiteral_11645/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_1C21E38(&StringLiteral_11654/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_1C21E38(&StringLiteral_13866/*"TerminalLastPlayedQuestId"*/);
    sub_1C21E38(&StringLiteral_5324/*"Debug_IsBuildInfoDisp"*/);
    sub_1C21E38(&StringLiteral_13878/*"TerminalTransitionInfoMissionId"*/);
    sub_1C21E38(&StringLiteral_11663/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4BD9A86 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13860/*"TerminalDispState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13880/*"TerminalWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13873/*"TerminalSpotId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13871/*"TerminalQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13866/*"TerminalLastPlayedQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13868/*"TerminalPhaseCnt"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13861/*"TerminalEndTime"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13863/*"TerminalIsDoneShortcut"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13881/*"TerminalWarStartedIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5328/*"Debug_IsQuestReleaseAll"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5325/*"Debug_IsDummyErrorSelect"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5324/*"Debug_IsBuildInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5326/*"Debug_IsOriginalBattle"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5327/*"Debug_IsOriginalGuestNPC"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5322/*"Debug_BattleEnemyList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5323/*"Debug_GuestNPCInfoList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13876/*"TerminalTimeStatusEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13877/*"TerminalTimeStatusLoopCount"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13862/*"TerminalEventDailyPointEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13875/*"TerminalTimeStatusEventDailyPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13878/*"TerminalTransitionInfoMissionId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13879/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13857/*"TerminalBeforeEventActivityPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13858/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13859/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11659/*"SAVEKEY_TerminalConquestInfos"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11658/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11660/*"SAVEKEY_TerminalCraftInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11661/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11649/*"SAVEKEY_LastPlayBgmName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11650/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11655/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11652/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11653/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11654/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11664/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11646/*"SAVEKEY_ConnectMarkEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11645/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11663/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11644/*"SAVEKEY_ClearEventQuestIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11651/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11647/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11656/*"SAVEKEY_PlayerGenderType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11643/*"SAVEKEY_CampaignDirectBonus"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11642/*"SAVEKEY_BlankEarthSpotId"*/, 0LL);
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__InitParameter((const MethodInfo *)v1);
  TerminalPramsManager__DeleteClearDatas(v2);
  TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(v3);
  TerminalPramsManager__DeleteQuestRandomGroupList(v4);
}


void __fastcall TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  TerminalPramsManager_c *v7; // x0
  PartyOrganizationUtility_o *p_EventRaidDefeatedEffectInfo_k__BackingField; // x0

  if ( (byte_4BD9AC8 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11648/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_4BD9AC8 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9B0B )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9B0B = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  p_EventRaidDefeatedEffectInfo_k__BackingField = (PartyOrganizationUtility_o *)&v7->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  p_EventRaidDefeatedEffectInfo_k__BackingField->klass = 0LL;
  sub_1C21DDC(p_EventRaidDefeatedEffectInfo_k__BackingField, 0LL, v1, v2, v3, v4, v5, v6);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11648/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, 0LL);
}


void __fastcall TerminalPramsManager__DeleteQuestRandomGroupList(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  TerminalPramsManager_c *v7; // x0
  PartyOrganizationUtility_o *p_QuestRandomGroupList_k__BackingField; // x0

  if ( (byte_4BD9ACD & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11657/*"SAVEKEY_QuestRandomGroupList"*/);
    byte_4BD9ACD = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9B0D )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9B0D = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  p_QuestRandomGroupList_k__BackingField = (PartyOrganizationUtility_o *)&v7->static_fields->_QuestRandomGroupList_k__BackingField;
  p_QuestRandomGroupList_k__BackingField->klass = 0LL;
  sub_1C21DDC(p_QuestRandomGroupList_k__BackingField, 0LL, v1, v2, v3, v4, v5, v6);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11657/*"SAVEKEY_QuestRandomGroupList"*/, 0LL);
}


bool __fastcall TerminalPramsManager__EnableResumeToBlankEarthMap(int32_t warId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BD9AD4 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AD4 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsBlankEarthWarByWarId(warId, method) )
    return 1;
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__ExistBlankEarthTutorial((const MethodInfo *)v3) )
    return 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
  return QuestTree__IsActiveWar((QuestTree_o *)Instance, warId, 0LL);
}


void __fastcall TerminalPramsManager__EventDailyPointSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  System_String_o *v3; // x0
  int64_t BeforeTimeEventDailyPoint_k__BackingField; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BD9A8F & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_13862/*"TerminalEventDailyPointEventId"*/);
    sub_1C21E38(&StringLiteral_13875/*"TerminalTimeStatusEventDailyPoint"*/);
    byte_4BD9A8F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9AF2 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AF2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13862/*"TerminalEventDailyPointEventId"*/,
    v1->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4BD9AF3 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AF3 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  BeforeTimeEventDailyPoint_k__BackingField = v2->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v3 = System_Int64__ToString((int64_t)&BeforeTimeEventDailyPoint_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13875/*"TerminalTimeStatusEventDailyPoint"*/, v3, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__EventStatusSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4BD9A8E & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_13876/*"TerminalTimeStatusEventId"*/);
    sub_1C21E38(&StringLiteral_13877/*"TerminalTimeStatusLoopCount"*/);
    byte_4BD9A8E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9811 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9811 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13876/*"TerminalTimeStatusEventId"*/,
    v1->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_4BD9812 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9812 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13877/*"TerminalTimeStatusLoopCount"*/,
    v2->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall TerminalPramsManager__ExistBlankEarthTutorial(const MethodInfo *method)
{
  __int64 v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  System_Collections_ICollection_o *AvailableTutorialArray; // x0

  if ( (byte_4BD9AD3 & 1) == 0 )
  {
    sub_1C21E38(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    byte_4BD9AD3 = 1;
  }
  v1 = sub_1C22084(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v1, 0LL);
  if ( !v1 )
    sub_1C22094(v2, v3);
  *(_QWORD *)(v1 + 16) = 0x5300000000LL;
  AvailableTutorialArray = (System_Collections_ICollection_o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                                 (EventTutorialMaster_EventTutorialArgs_o *)v1,
                                                                 0LL);
  return !BasicHelper__IsNullOrEmpty(AvailableTutorialArray, 0LL);
}


float __fastcall TerminalPramsManager__GetAutoIntpTime(const MethodInfo *method)
{
  int32_t targetFrameRate; // w0

  if ( (byte_4BD9A81 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    byte_4BD9A81 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = UnityEngine_Application__get_targetFrameRate(0LL);
  return (float)(1.0 / (float)targetFrameRate) + (float)(1.0 / (float)targetFrameRate);
}


int32_t __fastcall TerminalPramsManager__GetFolderLastClickedIdx(int32_t warId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x8
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BD9AB4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AB4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  value = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  folderLastIdxs = v3->static_fields->folderLastIdxs;
  if ( !folderLastIdxs )
    return 0;
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs;
    if ( !folderLastIdxs )
      sub_1C22094(v5, v6);
  }
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         folderLastIdxs,
         warId,
         &value,
         (const MethodInfo_32AE614 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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

  if ( (byte_4BD9A82 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A82 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD90A1 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD90A1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->_IsAutoResume_k__BackingField )
    return time;
  if ( !v3->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v3);
  if ( !byte_4BD966B )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD966B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_IsMapReturnFolder_k__BackingField )
    return time;
  if ( !v4->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v4);
  return TerminalPramsManager__GetAutoIntpTime((const MethodInfo *)v4);
}


int32_t __fastcall TerminalPramsManager__GetQuestReleasedFocusState(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v5; // x1

  if ( (byte_4BD9ABA & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9ABA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v3);
  if ( !QuestFocusStateManager )
    sub_1C22094(0LL, v5);
  return QuestFocusStateManager__GetFocusState(QuestFocusStateManager, questId, 0LL);
}


void __fastcall TerminalPramsManager__InitLoad(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A88 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A88 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__InitParameter((const MethodInfo *)v1);
}


void __fastcall TerminalPramsManager__InitMessageWindowData(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  TerminalPramsManager_c *v7; // x0
  struct System_String_o *v8; // x20
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  TerminalPramsManager_c *v16; // x0
  struct TerminalPramsManager_StaticFields *v17; // x0

  if ( (byte_4BD9AB2 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD9AB2 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD82DE )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD82DE = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsDispOnly_k__BackingField = 0;
  v8 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4BD9654 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4BD9654 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = v8;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->_QuestWindowMessage_k__BackingField,
    (int64_t)v8,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  if ( !byte_4BD9653 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9653 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_MessageDispType_k__BackingField = 0;
  if ( !byte_4BD82DD )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4BD82DD = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v17 = v16->static_fields;
  v17->_BattleSetupKeep_k__BackingField = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v17->_BattleSetupKeep_k__BackingField, 0LL, v10, v11, v12, v13, v14, v15);
}


void __fastcall TerminalPramsManager__InitParameter(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  TerminalPramsManager_c *v7; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  TerminalPramsManager_c *v15; // x0
  struct TerminalPramsManager_StaticFields *v16; // x0
  void *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  TerminalPramsManager_c *v24; // x0
  PartyOrganizationUtility_o *p_timeStatusRecord_k__BackingField; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  TerminalPramsManager_c *v32; // x0
  PartyOrganizationUtility_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  void *v34; // x1
  PartyOrganizationUtility_o *p_lastPlayBgmName; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  TerminalPramsManager_c *v48; // x0
  struct TerminalPramsManager_StaticFields *v49; // x0
  TerminalPramsManager_c *v50; // x0
  const MethodInfo *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  TerminalPramsManager_c *v58; // x0
  PartyOrganizationUtility_c *v59; // x20
  PartyOrganizationUtility_o *p_PlayedTerminalEffects_k__BackingField; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  TerminalPramsManager_c *v67; // x0
  struct TerminalPramsManager_StaticFields *v68; // x8
  PartyOrganizationUtility_c *v69; // x20
  PartyOrganizationUtility_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  TerminalPramsManager_c *v77; // x0
  struct TerminalPramsManager_StaticFields *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  TerminalPramsManager_c *v85; // x0
  struct TerminalPramsManager_StaticFields *v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  TerminalPramsManager_c *v93; // x0
  struct System_String_o *v94; // x20
  struct TerminalPramsManager_StaticFields *v95; // x8

  if ( (byte_4BD9A87 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD9A87 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD90A0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD90A0 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4BD909F )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4BD909F = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_SpotId_k__BackingField = 0;
  if ( !byte_4BD909A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4BD909A = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_QuestId_k__BackingField = 0;
  if ( !byte_4BD92EA )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4BD92EA = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayedQuestId_k__BackingField = 0;
  if ( !byte_4BD9ADD )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4BD9ADD = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
  if ( !byte_4BD92EB )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4BD92EB = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = 0;
  if ( !byte_4BD92E6 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4BD92E6 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_AfterActionFocusQuestId_k__BackingField = 0;
  if ( !byte_4BD9405 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4BD9405 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
  if ( !byte_4BD84F7 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4BD84F7 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  if ( !byte_4BD9406 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4BD9406 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
  if ( !byte_4BD9682 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4BD9682 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 0;
  if ( !byte_4BD9680 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4BD9680 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
  if ( !byte_4BD8C45 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4BD8C45 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    0LL,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  if ( !byte_4BD909E )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD909E = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_PhaseCnt_k__BackingField = 0;
  if ( !byte_4BD909B )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
    byte_4BD909B = 1;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_EndTime_k__BackingField = 0LL;
  if ( !byte_4BD909D )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
    byte_4BD909D = 1;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v16 = v15->static_fields;
  v16->_IsDoneShortcut_k__BackingField = 0;
  v17 = StringLiteral_1/*""*/;
  v16->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->mTerminalWarStartedIds, (int64_t)v17, v9, v10, v11, v12, v13, v14);
  if ( !byte_4BD9ADE )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9ADE = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->mDebug_IsQuestReleaseAll = 0;
  if ( !byte_4BD9ADF )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
    byte_4BD9ADF = 1;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->mDebug_IsDummyErrorSelect = 0;
  if ( !byte_4BD9AE0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
    byte_4BD9AE0 = 1;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->mDebug_IsBuildInfoDisp = 0;
  if ( !byte_4BD9685 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
    byte_4BD9685 = 1;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->_TimeStatusEventId_k__BackingField = 0;
  if ( !byte_4BD9686 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
    byte_4BD9686 = 1;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->_TimeStatusLoopCount_k__BackingField = 0;
  if ( !byte_4BD9AE1 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
    byte_4BD9AE1 = 1;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  p_timeStatusRecord_k__BackingField = (PartyOrganizationUtility_o *)&v24->static_fields->_timeStatusRecord_k__BackingField;
  p_timeStatusRecord_k__BackingField->klass = 0LL;
  sub_1C21DDC(p_timeStatusRecord_k__BackingField, 0LL, v18, v19, v20, v21, v22, v23);
  if ( !byte_4BD9AE2 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AE2 = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
  }
  v32->static_fields->_EventDailyPointEventId_k__BackingField = 0;
  if ( !byte_4BD9AE3 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
    byte_4BD9AE3 = 1;
  }
  if ( !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32);
    v32 = TerminalPramsManager_TypeInfo;
  }
  v32->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = 0LL;
  if ( !byte_4BD9AE4 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
    byte_4BD9AE4 = 1;
  }
  if ( !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32);
    v32 = TerminalPramsManager_TypeInfo;
  }
  v32->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
  if ( !byte_4BD9AE5 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
    byte_4BD9AE5 = 1;
  }
  if ( !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32);
    v32 = TerminalPramsManager_TypeInfo;
  }
  v32->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
  if ( !byte_4BD918E )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
    byte_4BD918E = 1;
  }
  if ( !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32);
    v32 = TerminalPramsManager_TypeInfo;
  }
  p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v32->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  p_BeforeEventSubmarineSaveData_k__BackingField->klass = 0LL;
  sub_1C21DDC(p_BeforeEventSubmarineSaveData_k__BackingField, 0LL, v26, v27, v28, v29, v30, v31);
  v34 = StringLiteral_1/*""*/;
  p_lastPlayBgmName = (PartyOrganizationUtility_o *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayBgmName;
  p_lastPlayBgmName->klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  sub_1C21DDC(p_lastPlayBgmName, (int64_t)v34, v36, v37, v38, v39, v40, v41);
  v48 = TerminalPramsManager_TypeInfo;
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayQuestConsumeAp = 0LL;
  if ( !byte_4BD9AE6 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v48 = TerminalPramsManager_TypeInfo;
    byte_4BD9AE6 = 1;
  }
  if ( !v48->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v48);
    v48 = TerminalPramsManager_TypeInfo;
  }
  v49 = v48->static_fields;
  v49->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v49->_SpecifiedChangeSceneInfo_k__BackingField,
    0LL,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  if ( !byte_4BD9823 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9823 = 1;
  }
  v50 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v50 = TerminalPramsManager_TypeInfo;
  }
  v50->static_fields->_EventBoardGameSquareIndex_k__BackingField = 0;
  if ( !byte_4BD9825 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v50 = TerminalPramsManager_TypeInfo;
    byte_4BD9825 = 1;
  }
  if ( !v50->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v50);
    v50 = TerminalPramsManager_TypeInfo;
  }
  v50->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = 0;
  if ( !byte_4BD9827 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v50 = TerminalPramsManager_TypeInfo;
    byte_4BD9827 = 1;
  }
  if ( !v50->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v50);
    v50 = TerminalPramsManager_TypeInfo;
  }
  v50->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
  if ( !byte_4BD9ADA )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v50 = TerminalPramsManager_TypeInfo;
    byte_4BD9ADA = 1;
  }
  if ( !v50->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v50);
    v50 = TerminalPramsManager_TypeInfo;
  }
  v50->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v50);
  TerminalPramsManager__ResetResumeScriptWithMap(v51);
  if ( !byte_4BD9672 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9672 = 1;
  }
  v58 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v58 = TerminalPramsManager_TypeInfo;
  }
  v58->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
  v59 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( !byte_4BD9AE7 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v58 = TerminalPramsManager_TypeInfo;
    byte_4BD9AE7 = 1;
  }
  if ( !v58->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v58);
    v58 = TerminalPramsManager_TypeInfo;
  }
  p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v58->static_fields->_PlayedTerminalEffects_k__BackingField;
  p_PlayedTerminalEffects_k__BackingField->klass = v59;
  sub_1C21DDC(p_PlayedTerminalEffects_k__BackingField, (int64_t)v59, v52, v53, v54, v55, v56, v57);
  if ( !byte_4BD9902 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9902 = 1;
  }
  v67 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = 0;
  if ( !byte_4BD9903 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4BD9903 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = 0;
  if ( !byte_4BD9814 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4BD9814 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v68 = v67->static_fields;
  v68->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  *(_QWORD *)&v68->ConnectMarkEventId = 0LL;
  if ( !byte_4BD9AE8 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4BD9AE8 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_isFortificationCheck_k__BackingField = 0;
  if ( !byte_4BD9AE9 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4BD9AE9 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !byte_4BD9AEA )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4BD9AEA = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !byte_4BD981C )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4BD981C = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4BD9678 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4BD9678 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_4BD981A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4BD981A = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_4BD981B )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4BD981B = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_4BD9819 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4BD9819 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_4BD981C )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4BD981C = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4BD980E )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4BD980E = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 0.0;
  if ( !byte_4BD9AEB )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4BD9AEB = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  if ( !byte_4BD9403 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4BD9403 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_4BD799C )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4BD799C = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_PlayerGenderType_k__BackingField = 0;
  if ( !byte_4BD9AEC )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4BD9AEC = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  v69 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( !byte_4BD9821 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4BD9821 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  p_SceneMoveQuestClearedInfo_k__BackingField = (PartyOrganizationUtility_o *)&v67->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
  p_SceneMoveQuestClearedInfo_k__BackingField->klass = v69;
  sub_1C21DDC(p_SceneMoveQuestClearedInfo_k__BackingField, (int64_t)v69, v61, v62, v63, v64, v65, v66);
  if ( !byte_4BD9AED )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AED = 1;
  }
  v77 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v78 = v77->static_fields;
  v78->_CampaignBonus_k__BackingField = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v78->_CampaignBonus_k__BackingField, 0LL, v71, v72, v73, v74, v75, v76);
  if ( !byte_4BD9AEE )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AEE = 1;
  }
  v85 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v85 = TerminalPramsManager_TypeInfo;
  }
  v86 = v85->static_fields;
  v86->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v86->_CampaignDirectBonus_k__BackingField,
    0LL,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  if ( !byte_4BD9AEF )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AEF = 1;
  }
  v93 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v93 = TerminalPramsManager_TypeInfo;
  }
  v93->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
  v94 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4BD7186 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v93 = TerminalPramsManager_TypeInfo;
    byte_4BD7186 = 1;
  }
  if ( !v93->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v93);
    v93 = TerminalPramsManager_TypeInfo;
  }
  v95 = v93->static_fields;
  v95->_TransitionScrollTabName_k__BackingField = v94;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v95->_TransitionScrollTabName_k__BackingField,
    (int64_t)v94,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
}


void __fastcall TerminalPramsManager__InitTipsArchiveScrollValueList(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  unsigned __int64 i; // x20
  struct System_Single_array *TipsArchiveScrollValueList; // x8
  struct System_Single_array *v5; // x8
  char *v6; // x8

  if ( (byte_4BD9AD5 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AD5 = 1;
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
      sub_1C22094(v2, v1);
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
      sub_1C2209C(v2, v1);
    v6 = (char *)v5 + 4 * i;
    *((_DWORD *)v6 + 8) = 0;
  }
}


bool __fastcall TerminalPramsManager__IsAuto(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BD9A75 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A75 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD90A1 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD90A1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( v1->static_fields->_IsAutoResume_k__BackingField )
    return 1;
  if ( !v1->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v1);
  if ( !byte_4BD9AD7 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AD7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v8; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BD9A77 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A77 = 1;
  }
  entity = 0LL;
  v8 = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD90A1 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD90A1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->_IsAutoResume_k__BackingField )
    return 0;
  if ( !v1->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v1);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( v2->static_fields->_WarId_k__BackingField < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
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
          (const MethodInfo_325BE14 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !entity)
    || !Instance )
  {
LABEL_34:
    sub_1C22094(Instance, v4);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v8,
          (int32_t)entity[6].klass,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)v8;
  if ( !v8 )
    goto LABEL_34;
  return EventDetailEntity__IsTimeProgressEvent((EventDetailEntity_o *)v8, 0LL);
}


bool __fastcall TerminalPramsManager__IsBlankEarthWarByWarId(int32_t targetWarId, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  void *WarInfoByWarID; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w1
  __int64 v9; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v10; // 0:x0.8

  if ( (byte_4BD9AD2 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C21E38(&Method_System_Nullable_int___ctor__);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4BD9AD2 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  if ( v3->static_fields->OrdealCallWarId == targetWarId )
  {
    LOBYTE(WarInfoByWarID) = 1;
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v6);
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, targetWarId, 0LL);
    if ( WarInfoByWarID )
    {
      WarInfoByWarID = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)WarInfoByWarID, 0LL);
      if ( WarInfoByWarID )
      {
        v7 = *((_DWORD *)WarInfoByWarID + 31);
        v10 = (System_Nullable_int__o)&v9;
        v9 = 0LL;
        System_Nullable_int____ctor(v10, v7, (const MethodInfo_376B7A0 *)Method_System_Nullable_int___ctor__);
        LOBYTE(WarInfoByWarID) = HIDWORD(v9) != 0;
      }
    }
  }
  return (char)WarInfoByWarID;
}


void __fastcall TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9AA5 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11647/*"SAVEKEY_DataLostBattleAutoReset"*/);
    byte_4BD9AA5 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9818 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9818 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11647/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v1->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall TerminalPramsManager__IsFreeQuestOnOrdealCall(int32_t questId, const MethodInfo *method)
{
  QuestMaster_o *Master_object; // x0
  __int64 v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x19
  int klass_high; // w19
  BalanceConfig_c *v7; // x0
  Il2CppObject *v9; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD9AD0 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    byte_4BD9AD0 = 1;
  }
  v9 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestMaster___);
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
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !entity
    || (v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
        Master_object = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0LL),
        !v5) )
  {
LABEL_20:
    sub_1C22094(Master_object, v4);
  }
  Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v5,
                                     &v9,
                                     (int32_t)Master_object,
                                     (const MethodInfo_325BE14 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  if ( !v9 )
    goto LABEL_20;
  klass_high = HIDWORD(v9[1].klass);
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return klass_high == v7->static_fields->OrdealCallWarId;
}


bool __fastcall TerminalPramsManager__IsMainStory(int32_t warId, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD9AC2 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD9AC2 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  entity = 0LL;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( static_fields->FesWarId != warId )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    if ( !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
            warId,
            (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___);
        if ( Instance )
        {
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       &entity,
                                       warId,
                                       (const MethodInfo_325BE14 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( entity )
            return LODWORD(entity[6].klass) == 0;
        }
      }
      sub_1C22094(Instance, v7);
    }
  }
  return 1;
}


bool __fastcall TerminalPramsManager__IsMainStoryForQuestId(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x19
  int32_t klass_high; // w19
  Il2CppObject *v9; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD9AC3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C21E38(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AC3 = 1;
  }
  v9 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SpotMaster___),
        !entity)
    || (v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (Il2CppObject *)QuestEntity__getSpotId(entity, 0LL),
        !v5) )
  {
LABEL_16:
    sub_1C22094(Instance, v4);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               v5,
                               &v9,
                               (int32_t)Instance,
                               (const MethodInfo_325BE14 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !v9 )
    goto LABEL_16;
  klass_high = HIDWORD(v9[1].klass);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStory(klass_high, v4);
}


bool __fastcall TerminalPramsManager__IsMustPlayMainStory(int32_t warId, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4BD9AC1 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AC1 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  if ( System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3->static_fields->NotRequiredPlayWarIds,
         warId,
         (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return 0;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStory(warId, v4);
}


bool __fastcall TerminalPramsManager__IsNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_4BD9AB5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AB5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v3->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1C22094(0LL, method);
  return System_Collections_Generic_HashSet_int___Contains(
           loginQuestNotifiedList,
           questId,
           (const MethodInfo_3502E74 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A9E & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11653/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    byte_4BD9A9E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9676 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9676 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11653/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v1->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A9D & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11652/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    byte_4BD9A9D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9675 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9675 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11652/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v1->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectNt2AfterAction_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A9F & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11654/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    byte_4BD9A9F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9813 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9813 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11654/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
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
  System_Collections_Generic_Dictionary_int__object__o *v5; // x0
  __int64 v6; // x8
  char v7; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD9ACC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9ACC = 1;
  }
  value = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9B0C )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9B0C = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  }
  v6 = *(_QWORD *)&v5[2].fields._entries->m_Items[17].fields.hashCode;
  if ( !v6 || (v5 = *(System_Collections_Generic_Dictionary_int__object__o **)(v6 + 16)) == 0LL )
    sub_1C22094(v5, *(_QWORD *)&day);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         v5,
         eventId,
         &value,
         (const MethodInfo_32B71D8 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v7 = (char)value;
    if ( value )
      v7 = System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             day,
             (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
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
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  clsQuestCheck_o *v6; // x19
  clsQuestCheck_o *v7; // x19
  TerminalPramsManager_c *v8; // x0
  ScrTerminalListTop_c *v9; // x8
  int32_t QuestId_k__BackingField; // w19
  TerminalPramsManager_c *v11; // x0

  if ( (byte_4BD9AAE & 1) == 0 )
  {
    sub_1C21E38(&ScrTerminalListTop_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AAE = 1;
  }
  v2 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v2 = ScrTerminalListTop_TypeInfo;
  }
  NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID = v2->static_fields->NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID, v1) )
    return 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v6 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v6 )
    goto LABEL_34;
  if ( !clsQuestCheck__IsQuestClear(
          v6,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0LL) )
    return 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v7 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v7 )
LABEL_34:
    sub_1C22094(Instance, v5);
  if ( !clsQuestCheck__IsWarClear(
          v7,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
          0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD7264 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7264 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v9 = ScrTerminalListTop_TypeInfo;
    QuestId_k__BackingField = v8->static_fields->_QuestId_k__BackingField;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v9 = ScrTerminalListTop_TypeInfo;
    }
    if ( QuestId_k__BackingField == v9->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD7263 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD7263 = 1;
      }
      v11 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  __int64 v3; // x1
  System_String_o *v4; // x19
  TerminalPramsManager_c *v5; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  System_String_c *klass; // x8
  System_String_o *v8; // x20
  unsigned __int64 v9; // x21
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = effectId;
  if ( (byte_4BD9AAC & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_89/*"\r\n"*/);
    byte_4BD9AAC = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9AF6 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AF6 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( !v2->static_fields->_PlayedTerminalEffects_k__BackingField )
    goto LABEL_25;
  v4 = System_Int32__ToString((int32_t)&v11, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9AF6 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AF6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  PlayedTerminalEffects_k__BackingField = v5->static_fields->_PlayedTerminalEffects_k__BackingField;
  if ( !PlayedTerminalEffects_k__BackingField
    || (PlayedTerminalEffects_k__BackingField = System_String__Replace_63135104(
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
    sub_1C22094(PlayedTerminalEffects_k__BackingField, v3);
  }
  klass = PlayedTerminalEffects_k__BackingField[1].klass;
  v8 = PlayedTerminalEffects_k__BackingField;
  if ( (int)klass >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)klass )
        sub_1C2209C(PlayedTerminalEffects_k__BackingField, v3);
      PlayedTerminalEffects_k__BackingField = (System_String_o *)System_String__op_Equality(
                                                                   *((System_String_o **)&v8[1].monitor + v9),
                                                                   v4,
                                                                   0LL);
      if ( ((unsigned __int8)PlayedTerminalEffects_k__BackingField & 1) != 0 )
        break;
      LODWORD(klass) = v8[1].klass;
      ++v9;
    }
    while ( (__int64)v9 < (int)klass );
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
  TerminalPramsManager_c *v2; // x0
  System_String_o *mTerminalWarStartedIds; // x0
  System_String_c *klass; // x8
  System_String_o *v5; // x19
  bool v6; // w21
  unsigned __int64 v7; // x22
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  v11 = war_id;
  if ( (byte_4BD9AB0 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_89/*"\r\n"*/);
    byte_4BD9AB0 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  mTerminalWarStartedIds = v2->static_fields->mTerminalWarStartedIds;
  if ( !mTerminalWarStartedIds
    || (mTerminalWarStartedIds = System_String__Replace_63135104(
                                   mTerminalWarStartedIds,
                                   (System_String_o *)StringLiteral_89/*"\r\n"*/,
                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                   0LL)) == 0LL
    || (mTerminalWarStartedIds = (System_String_o *)System_String__Split(mTerminalWarStartedIds, 0xAu, 0, 0LL)) == 0LL )
  {
    sub_1C22094(mTerminalWarStartedIds, method);
  }
  klass = mTerminalWarStartedIds[1].klass;
  v5 = mTerminalWarStartedIds;
  v6 = (int)klass > 0;
  if ( (int)klass >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)klass )
        sub_1C2209C(mTerminalWarStartedIds, method);
      v8 = (System_String_o *)*((_QWORD *)&v5[1].monitor + v7);
      v9 = System_Int32__ToString((int32_t)&v11, 0LL);
      mTerminalWarStartedIds = (System_String_o *)System_String__op_Equality(v8, v9, 0LL);
      if ( ((unsigned __int8)mTerminalWarStartedIds & 1) != 0 )
        break;
      LODWORD(klass) = v5[1].klass;
      v6 = (__int64)++v7 < (int)klass;
    }
    while ( (__int64)v7 < (int)klass );
  }
  return v6;
}


void __fastcall TerminalPramsManager__LastPanelEventPointSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A9C & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_13864/*"TerminalLastPanelEventPoint"*/);
    byte_4BD9A9C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13864/*"TerminalLastPanelEventPoint"*/, v1->static_fields->panelEventPoint, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayBgmNameSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A9A & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11649/*"SAVEKEY_LastPlayBgmName"*/);
    byte_4BD9A9A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11649/*"SAVEKEY_LastPlayBgmName"*/, v1->static_fields->lastPlayBgmName, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A9B & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11650/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    byte_4BD9A9B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11650/*"SAVEKEY_LastPlayQuestConsumeType"*/,
    v1->static_fields->lastPlayQuestConsumeAp,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LoadClearDatas(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_ClearData_c *v2; // x0
  TerminalPramsManager_ClearData_c *v3; // x0
  Il2CppObject *String_70827888; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  Il2CppObject *v11; // x19
  TerminalPramsManager_c *v12; // x0
  PartyOrganizationUtility_o *p_mQuestClearHeroineInfo; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppClass *klass; // x8
  const char *name; // x9
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  QuestClearHeroineInfo_o *Load; // x20
  TerminalPramsManager_c *v31; // x0
  PartyOrganizationUtility_o *v32; // x0
  TerminalPramsManager_c *v33; // x0
  char monitor; // w20
  TerminalPramsManager_c *v35; // x8
  char v36; // w21
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  _QWORD *v38; // x10
  int64_t v39; // x20
  __int64 v40; // x0
  __int64 v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  Il2CppClass *v48; // x8
  TerminalPramsManager_c *v49; // x0
  int64_t v50; // x20
  PartyOrganizationUtility_o *p_mQuestPhaseRewardInfos; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  TerminalPramsManager_c *v60; // x8
  struct TerminalPramsManager_StaticFields *v61; // x9
  _QWORD *v62; // x9
  int64_t v63; // x20
  TerminalPramsManager_c *v64; // x0
  struct TerminalPramsManager_StaticFields *v65; // x0
  __int64 v66; // x0
  __int64 v67; // x1
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  Il2CppClass *v74; // x8
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
  int *v86; // x8
  int64_t v87; // x20
  TerminalPramsManager_c *v88; // x0
  PartyOrganizationUtility_o *p_eventPointWinReward_k__BackingField; // x0
  __int64 v90; // x0
  __int64 v91; // x1
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int32_t v98; // w20
  TerminalPramsManager_c *v99; // x8
  int *v100; // x9
  int64_t v101; // x20
  TerminalPramsManager_c *v102; // x0
  PartyOrganizationUtility_o *p_eventRaceBoost_k__BackingField; // x0
  __int64 v104; // x0
  __int64 v105; // x1
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  Il2CppClass *v112; // x8
  int64_t v113; // x20
  TerminalPramsManager_c *v114; // x0
  PartyOrganizationUtility_o *p_questClearCostumeRelease_k__BackingField; // x0
  __int64 v116; // x0
  __int64 v117; // x1
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  _QWORD *v124; // x8
  int64_t v125; // x20
  TerminalPramsManager_c *v126; // x0
  PartyOrganizationUtility_o *p_questClearCostumeGet_k__BackingField; // x0
  __int64 v128; // x0
  __int64 v129; // x1
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  Il2CppClass *v136; // x8
  int64_t v137; // x20
  TerminalPramsManager_c *v138; // x0
  PartyOrganizationUtility_o *p_eventTowerReward_k__BackingField; // x0
  __int64 v140; // x0
  __int64 v141; // x1
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  _QWORD *v148; // x8
  __int64 v149; // x9
  __int64 v150; // x9
  int64_t v151; // x20
  TerminalPramsManager_c *v152; // x0
  PartyOrganizationUtility_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  __int64 v154; // x0
  __int64 v155; // x1
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  Il2CppClass *v162; // x8
  int64_t v163; // x20
  TerminalPramsManager_c *v164; // x0
  PartyOrganizationUtility_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  __int64 v166; // x0
  __int64 v167; // x1
  int64_t v168; // x2
  int32_t v169; // w3
  System_String_o *v170; // x4
  BattleSetupInfo_o *v171; // x5
  FollowerInfo_o *v172; // x6
  PartyListViewItem_o *v173; // x7
  _QWORD *v174; // x8
  int64_t v175; // x20
  TerminalPramsManager_c *v176; // x0
  PartyOrganizationUtility_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  __int64 v178; // x0
  __int64 v179; // x1
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  char v186; // w20
  TerminalPramsManager_c *v187; // x8
  _QWORD *v188; // x9
  int64_t v189; // x20
  TerminalPramsManager_c *v190; // x0
  PartyOrganizationUtility_o *p_warClearReward_k__BackingField; // x0
  __int64 v192; // x0
  __int64 v193; // x1
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  int32_t v200; // w20
  TerminalPramsManager_c *v201; // x8
  char v202; // w21
  struct TerminalPramsManager_StaticFields *v203; // x9
  _QWORD *v204; // x10
  int64_t v205; // x20
  __int64 v206; // x0
  __int64 v207; // x1
  int64_t v208; // x2
  int32_t v209; // w3
  System_String_o *v210; // x4
  BattleSetupInfo_o *v211; // x5
  FollowerInfo_o *v212; // x6
  PartyListViewItem_o *v213; // x7
  Il2CppClass *v214; // x8
  TerminalPramsManager_c *v215; // x0
  int64_t v216; // x20
  PartyOrganizationUtility_o *p_mResultEventPanelRewardInfos; // x0
  int64_t v218; // x2
  int32_t v219; // w3
  System_String_o *v220; // x4
  BattleSetupInfo_o *v221; // x5
  FollowerInfo_o *v222; // x6
  PartyListViewItem_o *v223; // x7
  TerminalPramsManager_c *v224; // x0
  int64_t v225; // x20
  PartyOrganizationUtility_o *p_limitImageAnnounces_k__BackingField; // x0
  int64_t v227; // x2
  int32_t v228; // w3
  System_String_o *v229; // x4
  BattleSetupInfo_o *v230; // x5
  FollowerInfo_o *v231; // x6
  PartyListViewItem_o *v232; // x7
  char v233; // w20
  TerminalPramsManager_c *v234; // x0
  int32_t monitor_high; // w21
  int32_t v236; // w21
  char v237; // w21
  int64_t v238; // x20
  PartyOrganizationUtility_o *p_OldUserEventPoint_k__BackingField; // x0
  __int64 v240; // x0
  __int64 v241; // x1
  int64_t v242; // x2
  int32_t v243; // w3
  System_String_o *v244; // x4
  BattleSetupInfo_o *v245; // x5
  FollowerInfo_o *v246; // x6
  PartyListViewItem_o *v247; // x7
  Il2CppClass *v248; // x8
  int64_t v249; // x20
  TerminalPramsManager_c *v250; // x0
  PartyOrganizationUtility_o *p_UseAddRewardItemRewardInfos_k__BackingField; // x0
  TerminalPramsManager_c *v252; // x0
  TerminalPramsManager_c *v253; // x8
  TerminalPramsManager_c *v254; // x0

  if ( (byte_4BD9AC6 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C21E38(&Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AC6 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9667 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9667 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->_isQuestRewardSetted_k__BackingField )
  {
    v2 = TerminalPramsManager_ClearData_TypeInfo;
    if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
      v2 = TerminalPramsManager_ClearData_TypeInfo;
    }
    if ( UnityEngine_PlayerPrefs__HasKey(v2->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0LL) )
    {
      v3 = TerminalPramsManager_ClearData_TypeInfo;
      if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
        v3 = TerminalPramsManager_ClearData_TypeInfo;
      }
      String_70827888 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70827888(
                                          v3->static_fields->SAVEKEY_CLEAR_REWARD_DISP,
                                          0LL);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v11 = JsonManager__Deserialize_object_(
              String_70827888,
              (const MethodInfo_30176B4 *)Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
      v12 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v12 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestClearHeroineInfo = (PartyOrganizationUtility_o *)&v12->static_fields->mQuestClearHeroineInfo;
      p_mQuestClearHeroineInfo->klass = 0LL;
      sub_1C21DDC(p_mQuestClearHeroineInfo, 0LL, v5, v6, v7, v8, v9, v10);
      if ( !v11 )
        sub_1C22094(v14, v15);
      klass = v11[1].klass;
      if ( !klass )
        sub_1C22094(v14, v15);
      name = klass->_1.name;
      if ( name && *((int *)name + 8) >= 1 )
      {
        Load = TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(
                 (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)v11[1].klass,
                 0LL);
        v31 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v31 = TerminalPramsManager_TypeInfo;
        }
        v32 = (PartyOrganizationUtility_o *)&v31->static_fields->mQuestClearHeroineInfo;
        v32->klass = (PartyOrganizationUtility_c *)Load;
        sub_1C21DDC(v32, (int64_t)Load, v24, v25, v26, v27, v28, v29);
      }
      v33 = TerminalPramsManager_TypeInfo;
      monitor = (char)v11[2].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD92DB )
      {
        v33 = (TerminalPramsManager_c *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD92DB = 1;
      }
      v35 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v35 = TerminalPramsManager_TypeInfo;
      }
      v35->static_fields->_IsQuestClear_k__BackingField = monitor;
      v36 = BYTE1(v11[2].monitor);
      if ( !byte_4BD92DC )
      {
        v33 = (TerminalPramsManager_c *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v35 = TerminalPramsManager_TypeInfo;
        byte_4BD92DC = 1;
      }
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v35 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v35->static_fields;
      static_fields->_IsPhaseClear_k__BackingField = v36;
      v38 = v11[1].monitor;
      if ( !v38 )
        sub_1C22094(v33, v15);
      if ( v38[3] )
        v39 = (int64_t)v11[1].monitor;
      else
        v39 = 0LL;
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        static_fields = TerminalPramsManager_TypeInfo->static_fields;
      }
      static_fields->mQuestRewardInfos = (struct QuestRewardInfo_array *)v39;
      sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->mQuestRewardInfos, v39, v16, v17, v18, v19, v20, v21);
      v48 = v11[2].klass;
      if ( !v48 )
        sub_1C22094(v40, v41);
      v49 = TerminalPramsManager_TypeInfo;
      if ( v48->_1.namespaze )
        v50 = (int64_t)v11[2].klass;
      else
        v50 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v49 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestPhaseRewardInfos = (PartyOrganizationUtility_o *)&v49->static_fields->mQuestPhaseRewardInfos;
      p_mQuestPhaseRewardInfos->klass = (PartyOrganizationUtility_c *)v50;
      sub_1C21DDC(p_mQuestPhaseRewardInfos, v50, v42, v43, v44, v45, v46, v47);
      v60 = TerminalPramsManager_TypeInfo;
      v61 = TerminalPramsManager_TypeInfo->static_fields;
      *(_QWORD *)&v61->clearLastBattleRaidId = *(void **)((char *)&v11[2].monitor + 4);
      v61->joinGroupId = HIDWORD(v11[3].klass);
      v62 = v11[3].monitor;
      if ( !v62 )
        sub_1C22094(v52, v53);
      if ( v62[3] )
        v63 = (int64_t)v11[3].monitor;
      else
        v63 = 0LL;
      if ( !v60->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v60);
      if ( !byte_4BD9B02 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9B02 = 1;
      }
      v64 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v64 = TerminalPramsManager_TypeInfo;
      }
      v65 = v64->static_fields;
      v65->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v63;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v65->_oldSuperBoss_k__BackingField, v63, v54, v55, v56, v57, v58, v59);
      v74 = v11[4].klass;
      if ( !v74 )
        sub_1C22094(v66, v67);
      if ( v74->_1.namespaze )
        v75 = (int64_t)v11[4].klass;
      else
        v75 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9B03 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9B03 = 1;
      }
      v76 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v76 = TerminalPramsManager_TypeInfo;
      }
      v77 = v76->static_fields;
      v77->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v75;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v77->_oldPersonalBoss_k__BackingField,
        v75,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      v86 = (int *)v11[4].monitor;
      if ( !v86 )
        sub_1C22094(v78, v79);
      if ( v86[4] <= 0 )
        v87 = 0LL;
      else
        v87 = (int64_t)v11[4].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9AFC )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9AFC = 1;
      }
      v88 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v88 = TerminalPramsManager_TypeInfo;
      }
      p_eventPointWinReward_k__BackingField = (PartyOrganizationUtility_o *)&v88->static_fields->_eventPointWinReward_k__BackingField;
      p_eventPointWinReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v87;
      sub_1C21DDC(p_eventPointWinReward_k__BackingField, v87, v80, v81, v82, v83, v84, v85);
      v98 = (int32_t)v11[5].klass;
      if ( !byte_4BD9AFD )
      {
        v90 = sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9AFD = 1;
      }
      v99 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v99 = TerminalPramsManager_TypeInfo;
      }
      v99->static_fields->_eventPointWinType_k__BackingField = v98;
      v100 = (int *)v11[5].monitor;
      if ( !v100 )
        sub_1C22094(v90, v91);
      if ( v100[4] <= 0 )
        v101 = 0LL;
      else
        v101 = (int64_t)v11[5].monitor;
      if ( !v99->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v99);
      if ( !byte_4BD9822 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9822 = 1;
      }
      v102 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v102 = TerminalPramsManager_TypeInfo;
      }
      p_eventRaceBoost_k__BackingField = (PartyOrganizationUtility_o *)&v102->static_fields->_eventRaceBoost_k__BackingField;
      p_eventRaceBoost_k__BackingField->klass = (PartyOrganizationUtility_c *)v101;
      sub_1C21DDC(p_eventRaceBoost_k__BackingField, v101, v92, v93, v94, v95, v96, v97);
      v112 = v11[6].klass;
      if ( !v112 )
        sub_1C22094(v104, v105);
      if ( v112->_1.namespaze )
        v113 = (int64_t)v11[6].klass;
      else
        v113 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9901 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9901 = 1;
      }
      v114 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v114 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeRelease_k__BackingField = (PartyOrganizationUtility_o *)&v114->static_fields->_questClearCostumeRelease_k__BackingField;
      p_questClearCostumeRelease_k__BackingField->klass = (PartyOrganizationUtility_c *)v113;
      sub_1C21DDC(p_questClearCostumeRelease_k__BackingField, v113, v106, v107, v108, v109, v110, v111);
      v124 = v11[6].monitor;
      if ( !v124 )
        sub_1C22094(v116, v117);
      if ( v124[3] )
        v125 = (int64_t)v11[6].monitor;
      else
        v125 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9664 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9664 = 1;
      }
      v126 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v126 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeGet_k__BackingField = (PartyOrganizationUtility_o *)&v126->static_fields->_questClearCostumeGet_k__BackingField;
      p_questClearCostumeGet_k__BackingField->klass = (PartyOrganizationUtility_c *)v125;
      sub_1C21DDC(p_questClearCostumeGet_k__BackingField, v125, v118, v119, v120, v121, v122, v123);
      v136 = v11[7].klass;
      if ( !v136 )
        sub_1C22094(v128, v129);
      if ( SLODWORD(v136->_1.name) <= 0 )
        v137 = 0LL;
      else
        v137 = (int64_t)v11[7].klass;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9B00 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9B00 = 1;
      }
      v138 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v138 = TerminalPramsManager_TypeInfo;
      }
      p_eventTowerReward_k__BackingField = (PartyOrganizationUtility_o *)&v138->static_fields->_eventTowerReward_k__BackingField;
      p_eventTowerReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v137;
      sub_1C21DDC(p_eventTowerReward_k__BackingField, v137, v130, v131, v132, v133, v134, v135);
      v148 = v11[7].monitor;
      if ( !v148 )
        sub_1C22094(v140, v141);
      v149 = v148[3];
      if ( v149 )
      {
        if ( !(_DWORD)v149 )
          sub_1C2209C(v140, v141);
        v150 = v148[4];
        if ( !v150 )
          sub_1C22094(v140, v141);
        if ( *(__int64 *)(v150 + 32) <= 0 )
          v151 = 0LL;
        else
          v151 = (int64_t)v11[7].monitor;
      }
      else
      {
        v151 = 0LL;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9B01 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9B01 = 1;
      }
      v152 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v152 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventTowerRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v152->static_fields->_resultEventTowerRewardInfo_k__BackingField;
      p_resultEventTowerRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v151;
      sub_1C21DDC(p_resultEventTowerRewardInfo_k__BackingField, v151, v142, v143, v144, v145, v146, v147);
      v162 = v11[8].klass;
      if ( !v162 )
        sub_1C22094(v154, v155);
      if ( v162->_1.namespaze )
        v163 = (int64_t)v11[8].klass;
      else
        v163 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD965E )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD965E = 1;
      }
      v164 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v164 = TerminalPramsManager_TypeInfo;
      }
      p_resultBoostItemRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v164->static_fields->_resultBoostItemRewardInfo_k__BackingField;
      p_resultBoostItemRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v163;
      sub_1C21DDC(p_resultBoostItemRewardInfo_k__BackingField, v163, v156, v157, v158, v159, v160, v161);
      v174 = v11[8].monitor;
      if ( !v174 )
        sub_1C22094(v166, v167);
      if ( v174[3] )
        v175 = (int64_t)v11[8].monitor;
      else
        v175 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD965F )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD965F = 1;
      }
      v176 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v176 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventBoardGameTokenRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v176->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
      p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v175;
      sub_1C21DDC(p_resultEventBoardGameTokenRewardInfo_k__BackingField, v175, v168, v169, v170, v171, v172, v173);
      v186 = (char)v11[9].klass;
      if ( !byte_4BD82DE )
      {
        v178 = sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD82DE = 1;
      }
      v187 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v187 = TerminalPramsManager_TypeInfo;
      }
      v187->static_fields->_IsDispOnly_k__BackingField = v186;
      v188 = v11[9].monitor;
      if ( !v188 )
        sub_1C22094(v178, v179);
      if ( v188[3] )
        v189 = (int64_t)v11[9].monitor;
      else
        v189 = 0LL;
      if ( !v187->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v187);
      if ( !byte_4BD9669 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9669 = 1;
      }
      v190 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v190 = TerminalPramsManager_TypeInfo;
      }
      p_warClearReward_k__BackingField = (PartyOrganizationUtility_o *)&v190->static_fields->_warClearReward_k__BackingField;
      p_warClearReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v189;
      sub_1C21DDC(p_warClearReward_k__BackingField, v189, v180, v181, v182, v183, v184, v185);
      v200 = (int32_t)v11[10].klass;
      if ( !byte_4BD7368 )
      {
        v192 = sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD7368 = 1;
      }
      v201 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v201 = TerminalPramsManager_TypeInfo;
      }
      v201->static_fields->_EventActivityPointEffectState_k__BackingField = v200;
      v202 = BYTE4(v11[10].klass);
      if ( !byte_4BD9666 )
      {
        v192 = sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v201 = TerminalPramsManager_TypeInfo;
        byte_4BD9666 = 1;
      }
      if ( !v201->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v201);
        v201 = TerminalPramsManager_TypeInfo;
      }
      v203 = v201->static_fields;
      v203->_IsWarBoardClear_k__BackingField = v202;
      v204 = v11[10].monitor;
      if ( !v204 )
        sub_1C22094(v192, v193);
      if ( v204[3] )
        v205 = (int64_t)v11[10].monitor;
      else
        v205 = 0LL;
      if ( !v201->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v201);
        v203 = TerminalPramsManager_TypeInfo->static_fields;
      }
      v203->mQuestResultAfterEventRewardInfos = (struct BattleDropItem_array *)v205;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v203->mQuestResultAfterEventRewardInfos,
        v205,
        v194,
        v195,
        v196,
        v197,
        v198,
        v199);
      v214 = v11[11].klass;
      if ( !v214 )
        sub_1C22094(v206, v207);
      v215 = TerminalPramsManager_TypeInfo;
      if ( v214->_1.namespaze )
        v216 = (int64_t)v11[11].klass;
      else
        v216 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v215 = TerminalPramsManager_TypeInfo;
      }
      p_mResultEventPanelRewardInfos = (PartyOrganizationUtility_o *)&v215->static_fields->mResultEventPanelRewardInfos;
      p_mResultEventPanelRewardInfos->klass = (PartyOrganizationUtility_c *)v216;
      sub_1C21DDC(p_mResultEventPanelRewardInfos, v216, v208, v209, v210, v211, v212, v213);
      v224 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = (int32_t)v11[11].monitor;
      v225 = (int64_t)v11[12].klass;
      if ( !byte_4BD9662 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v224 = TerminalPramsManager_TypeInfo;
        byte_4BD9662 = 1;
      }
      if ( !v224->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v224);
        v224 = TerminalPramsManager_TypeInfo;
      }
      p_limitImageAnnounces_k__BackingField = (PartyOrganizationUtility_o *)&v224->static_fields->_limitImageAnnounces_k__BackingField;
      p_limitImageAnnounces_k__BackingField->klass = (PartyOrganizationUtility_c *)v225;
      sub_1C21DDC(p_limitImageAnnounces_k__BackingField, v225, v218, v219, v220, v221, v222, v223);
      v233 = (char)v11[12].monitor;
      if ( !byte_4BD92DF )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD92DF = 1;
      }
      v234 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v234 = TerminalPramsManager_TypeInfo;
      }
      v234->static_fields->_IsOrdealCallWarClear_k__BackingField = v233;
      monitor_high = HIDWORD(v11[12].monitor);
      if ( !byte_4BD9659 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v234 = TerminalPramsManager_TypeInfo;
        byte_4BD9659 = 1;
      }
      if ( !v234->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v234);
        v234 = TerminalPramsManager_TypeInfo;
      }
      v234->static_fields->_EventMuralId_k__BackingField = monitor_high;
      v236 = (int32_t)v11[13].klass;
      if ( !byte_4BD981F )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v234 = TerminalPramsManager_TypeInfo;
        byte_4BD981F = 1;
      }
      if ( !v234->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v234);
        v234 = TerminalPramsManager_TypeInfo;
      }
      v234->static_fields->_EventActionQuestId_k__BackingField = v236;
      v237 = BYTE4(v11[13].klass);
      if ( !byte_4BD965B )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v234 = TerminalPramsManager_TypeInfo;
        byte_4BD965B = 1;
      }
      if ( !v234->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v234);
        v234 = TerminalPramsManager_TypeInfo;
      }
      v234->static_fields->_PlayHappinessCounterEffect_k__BackingField = v237;
      v238 = (int64_t)v11[13].monitor;
      if ( !byte_4BD9AFA )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v234 = TerminalPramsManager_TypeInfo;
        byte_4BD9AFA = 1;
      }
      if ( !v234->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v234);
        v234 = TerminalPramsManager_TypeInfo;
      }
      p_OldUserEventPoint_k__BackingField = (PartyOrganizationUtility_o *)&v234->static_fields->_OldUserEventPoint_k__BackingField;
      p_OldUserEventPoint_k__BackingField->klass = (PartyOrganizationUtility_c *)v238;
      sub_1C21DDC(p_OldUserEventPoint_k__BackingField, v238, v227, v228, v229, v230, v231, v232);
      v248 = v11[14].klass;
      if ( !v248 )
        sub_1C22094(v240, v241);
      if ( v248->_1.namespaze )
        v249 = (int64_t)v11[14].klass;
      else
        v249 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD7267 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD7267 = 1;
      }
      v250 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v250 = TerminalPramsManager_TypeInfo;
      }
      p_UseAddRewardItemRewardInfos_k__BackingField = (PartyOrganizationUtility_o *)&v250->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
      p_UseAddRewardItemRewardInfos_k__BackingField->klass = (PartyOrganizationUtility_c *)v249;
      sub_1C21DDC(p_UseAddRewardItemRewardInfos_k__BackingField, v249, v242, v243, v244, v245, v246, v247);
      v252 = TerminalPramsManager_TypeInfo;
      if ( BYTE1(v11[2].monitor) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD736A )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD736A = 1;
        }
        v252 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v252 = TerminalPramsManager_TypeInfo;
        }
        v252->static_fields->_IsAutoResume_k__BackingField = 1;
      }
      if ( !v252->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v252);
      if ( !byte_4BD9668 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9668 = 1;
      }
      v253 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v253 = TerminalPramsManager_TypeInfo;
      }
      if ( v253->static_fields->_warClearReward_k__BackingField )
        goto LABEL_276;
      if ( !v253->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v253);
      if ( !byte_4BD9665 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9665 = 1;
      }
      v253 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v253 = TerminalPramsManager_TypeInfo;
      }
      if ( v253->static_fields->_IsPlayScriptWithMap_k__BackingField )
      {
LABEL_276:
        if ( !v253->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v253);
        if ( !byte_4BD9B0A )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD9B0A = 1;
        }
        v254 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v254 = TerminalPramsManager_TypeInfo;
        }
        v254->static_fields->_isQuestRewardSetted_k__BackingField = 1;
      }
    }
  }
}


void __fastcall TerminalPramsManager__LoadEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  System_String_o *String; // x20
  EventRaidDefeatedEffectInfo_o *v3; // x19
  const MethodInfo *v4; // x2
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  TerminalPramsManager_c *v11; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4BD9AC9 & 1) == 0 )
  {
    sub_1C21E38(&EventRaidDefeatedEffectInfo_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11648/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_4BD9AC9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9B0C )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9B0C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_11648/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v3 = (EventRaidDefeatedEffectInfo_o *)sub_1C22084(EventRaidDefeatedEffectInfo_TypeInfo);
    EventRaidDefeatedEffectInfo___ctor(v3, String, v4);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9B0B )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9B0B = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = v3;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
      (int64_t)v3,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
}


void __fastcall TerminalPramsManager__LoadQuestRandomGroupList(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  System_String_o *String; // x20
  System_Collections_Generic_Dictionary_int__int__o *v3; // x19
  System_String_array *v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int max_length; // w8
  System_String_array *v13; // x20
  unsigned int v14; // w23
  System_String_array *v15; // x21
  TerminalPramsManager_c *v16; // x0
  PartyOrganizationUtility_o *p_QuestRandomGroupList_k__BackingField; // x0
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BD9ACE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11657/*"SAVEKEY_QuestRandomGroupList"*/);
    byte_4BD9ACE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9096 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9096 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->_QuestRandomGroupList_k__BackingField )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_11657/*"SAVEKEY_QuestRandomGroupList"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v3,
      (const MethodInfo_32AC5B8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *(_QWORD *)result = 0LL;
    if ( !String )
      goto LABEL_35;
    v4 = System_String__Split(String, 0x2Cu, 0, 0LL);
    if ( !v4 )
      goto LABEL_35;
    max_length = v4->max_length;
    v13 = v4;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
LABEL_36:
          sub_1C2209C(v4, v5);
        v4 = (System_String_array *)v13->m_Items[v14];
        if ( !v4 )
          break;
        v4 = System_String__Split((System_String_o *)v4, 0x3Au, 0, 0LL);
        if ( !v4 )
          break;
        v15 = v4;
        if ( (int)v4->max_length >= 2 )
        {
          v4 = (System_String_array *)System_Int32__TryParse(v4->m_Items[0], &result[1], 0LL);
          if ( result[1] >= 1 && ((unsigned __int8)v4 & 1) != 0 )
          {
            if ( v15->max_length <= 1 )
              goto LABEL_36;
            v4 = (System_String_array *)System_Int32__TryParse(v15->m_Items[1], result, 0LL);
            v6 = (unsigned int)result[0];
            if ( result[0] >= 1 && ((unsigned __int8)v4 & 1) != 0 )
            {
              if ( !v3 )
                break;
              System_Collections_Generic_Dictionary_int__int___Add(
                v3,
                result[1],
                result[0],
                (const MethodInfo_32ACF7C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
        }
        max_length = v13->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_27;
      }
LABEL_35:
      sub_1C22094(v4, v5);
    }
LABEL_27:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9B0D )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9B0D = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    p_QuestRandomGroupList_k__BackingField = (PartyOrganizationUtility_o *)&v16->static_fields->_QuestRandomGroupList_k__BackingField;
    p_QuestRandomGroupList_k__BackingField->klass = (PartyOrganizationUtility_c *)v3;
    sub_1C21DDC(p_QuestRandomGroupList_k__BackingField, (int64_t)v3, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall TerminalPramsManager__LoadQuestReleasedFocusState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v3; // x1
  const MethodInfo *v4; // x0

  if ( (byte_4BD9AB7 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AB7 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v1);
  if ( !QuestFocusStateManager
    || (QuestFocusStateManager__ClearQuestFocusStateDataList(QuestFocusStateManager, 0LL),
        (QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager(v4)) == 0LL) )
  {
    sub_1C22094(QuestFocusStateManager, v3);
  }
  QuestFocusStateManager__ReadData(QuestFocusStateManager, 0LL);
}


void __fastcall TerminalPramsManager__Load_SaveData(const MethodInfo *method)
{
  System_String_o *v1; // x19
  int32_t Int_70827320; // w19
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
  System_String_o *String_70827888; // x20
  int64_t v21; // x19
  TerminalPramsManager_c *v22; // x0
  System_String_o *v23; // x19
  int32_t v24; // w19
  TerminalPramsManager_c *v25; // x0
  System_String_o *v26; // x19
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_String_o *v33; // x19
  TerminalPramsManager_c *v34; // x8
  struct TerminalPramsManager_StaticFields *static_fields; // x0
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
  int32_t v49; // w19
  TerminalPramsManager_c *v50; // x0
  System_String_o *v51; // x19
  int32_t v52; // w19
  TerminalPramsManager_c *v53; // x0
  System_String_o *v54; // x19
  System_String_o *v55; // x20
  int64_t v56; // x19
  TerminalPramsManager_c *v57; // x0
  System_String_o *v58; // x19
  int32_t v59; // w19
  TerminalPramsManager_c *v60; // x0
  System_String_o *v61; // x19
  int32_t v62; // w19
  TerminalPramsManager_c *v63; // x0
  System_String_o *v64; // x19
  Il2CppObject *v65; // x19
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  Il2CppObject *v72; // x19
  TerminalPramsManager_c *v73; // x0
  PartyOrganizationUtility_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  System_String_o *v75; // x19
  const MethodInfo *v76; // x2
  int32_t v77; // w20
  TerminalPramsManager_c *v78; // x0
  int32_t WarId_k__BackingField; // w20
  System_String_o *v80; // x19
  Il2CppObject *v81; // x19
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  Il2CppObject *v88; // x19
  TerminalPramsManager_c *v89; // x8
  PartyOrganizationUtility_o *p_eventConquestInfos; // x0
  System_String_o *v91; // x19
  int32_t v92; // w19
  TerminalPramsManager_c *v93; // x8
  System_String_o *v94; // x19
  int32_t v95; // w19
  TerminalPramsManager_c *v96; // x8
  System_String_o *v97; // x19
  Il2CppObject *v98; // x19
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  Il2CppObject *v105; // x19
  TerminalPramsManager_c *v106; // x8
  PartyOrganizationUtility_o *p_eventHarvestGrowthInfo; // x0
  System_String_o *v108; // x19
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  System_String_o *v115; // x19
  TerminalPramsManager_c *v116; // x8
  PartyOrganizationUtility_o *p_lastPlayBgmName; // x0
  System_String_o *v118; // x19
  int32_t v119; // w19
  TerminalPramsManager_c *v120; // x8
  System_String_o *v121; // x19
  int32_t v122; // w19
  TerminalPramsManager_c *v123; // x0
  System_String_o *v124; // x19
  int32_t v125; // w19
  TerminalPramsManager_c *v126; // x8
  System_String_o *v127; // x19
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  System_String_o *v134; // x19
  TerminalPramsManager_c *v135; // x0
  PartyOrganizationUtility_o *p_PlayedTerminalEffects_k__BackingField; // x0
  System_String_o *v137; // x19
  int32_t v138; // w19
  TerminalPramsManager_c *v139; // x0
  System_String_o *v140; // x19
  int32_t v141; // w19
  TerminalPramsManager_c *v142; // x0
  System_String_o *v143; // x19
  int32_t v144; // w19
  TerminalPramsManager_c *v145; // x0
  System_String_o *v146; // x19
  int32_t v147; // w19
  TerminalPramsManager_c *v148; // x0
  System_String_o *v149; // x19
  int32_t v150; // w19
  TerminalPramsManager_c *v151; // x8
  System_String_o *v152; // x19
  int32_t v153; // w19
  TerminalPramsManager_c *v154; // x8
  System_String_o *v155; // x19
  int32_t v156; // w19
  TerminalPramsManager_c *v157; // x0
  System_String_o *v158; // x19
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  System_String_o *v165; // x19
  TerminalPramsManager_c *v166; // x0
  PartyOrganizationUtility_o *p_ClearEventQuestIds_k__BackingField; // x0
  System_String_o *v168; // x19
  System_String_o *v169; // x19
  System_String_array *IsNullOrEmpty; // x0
  __int64 v171; // x1
  __int64 v172; // x8
  System_String_array *v173; // x19
  int32_t v174; // w20
  TerminalPramsManager_c *v175; // x8
  int32_t v176; // w0
  int32_t v177; // w19
  TerminalPramsManager_c *v178; // x0
  System_String_o *v179; // x19
  int32_t v180; // w19
  TerminalPramsManager_c *v181; // x0
  System_String_o *v182; // x19
  int32_t v183; // w19
  TerminalPramsManager_c *v184; // x0
  System_String_o *v185; // x19
  Il2CppObject *v186; // x19
  int64_t v187; // x2
  int32_t v188; // w3
  System_String_o *v189; // x4
  BattleSetupInfo_o *v190; // x5
  FollowerInfo_o *v191; // x6
  PartyListViewItem_o *v192; // x7
  Il2CppObject *v193; // x19
  TerminalPramsManager_c *v194; // x0
  struct TerminalPramsManager_StaticFields *v195; // x0
  System_String_o *v196; // x19
  int32_t v197; // w19
  TerminalPramsManager_c *v198; // x0
  System_String_o *v199; // x19
  int32_t v200; // w19
  TerminalPramsManager_c *v201; // x0

  if ( (byte_4BD9A89 & 1) == 0 )
  {
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    sub_1C21E38(&Method_JsonManager_Deserialize_EventConquestInfo_____);
    sub_1C21E38(&Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    sub_1C21E38(&Method_JsonManager_Deserialize_EventSaveData___);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11649/*"SAVEKEY_LastPlayBgmName"*/);
    sub_1C21E38(&StringLiteral_13861/*"TerminalEndTime"*/);
    sub_1C21E38(&StringLiteral_11655/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_1C21E38(&StringLiteral_13857/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C21E38(&StringLiteral_11643/*"SAVEKEY_CampaignDirectBonus"*/);
    sub_1C21E38(&StringLiteral_11650/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    sub_1C21E38(&StringLiteral_11662/*"SAVEKEY_TerminalLastSelectQuestIndex"*/);
    sub_1C21E38(&StringLiteral_11660/*"SAVEKEY_TerminalCraftInfoDisp"*/);
    sub_1C21E38(&StringLiteral_13862/*"TerminalEventDailyPointEventId"*/);
    sub_1C21E38(&StringLiteral_13859/*"TerminalBeforeEventSubmarinePointData"*/);
    sub_1C21E38(&StringLiteral_13868/*"TerminalPhaseCnt"*/);
    sub_1C21E38(&StringLiteral_11659/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_1C21E38(&StringLiteral_13876/*"TerminalTimeStatusEventId"*/);
    sub_1C21E38(&StringLiteral_13860/*"TerminalDispState"*/);
    sub_1C21E38(&StringLiteral_11652/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_1C21E38(&StringLiteral_13863/*"TerminalIsDoneShortcut"*/);
    sub_1C21E38(&StringLiteral_11651/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C21E38(&StringLiteral_11656/*"SAVEKEY_PlayerGenderType"*/);
    sub_1C21E38(&StringLiteral_11641/*"SAVEKEY_BlankEarthRank"*/);
    sub_1C21E38(&StringLiteral_13864/*"TerminalLastPanelEventPoint"*/);
    sub_1C21E38(&StringLiteral_11661/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    sub_1C21E38(&StringLiteral_11644/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_1C21E38(&StringLiteral_11653/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_1C21E38(&StringLiteral_5328/*"Debug_IsQuestReleaseAll"*/);
    sub_1C21E38(&StringLiteral_5325/*"Debug_IsDummyErrorSelect"*/);
    sub_1C21E38(&StringLiteral_13871/*"TerminalQuestId"*/);
    sub_1C21E38(&StringLiteral_11658/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    sub_1C21E38(&StringLiteral_11664/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_1C21E38(&StringLiteral_13875/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_1C21E38(&StringLiteral_13880/*"TerminalWarId"*/);
    sub_1C21E38(&StringLiteral_13873/*"TerminalSpotId"*/);
    sub_1C21E38(&StringLiteral_13877/*"TerminalTimeStatusLoopCount"*/);
    sub_1C21E38(&StringLiteral_13858/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_1C21E38(&StringLiteral_11642/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_1C21E38(&StringLiteral_11647/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_1C21E38(&StringLiteral_13881/*"TerminalWarStartedIds"*/);
    sub_1C21E38(&StringLiteral_11646/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C21E38(&StringLiteral_13865/*"TerminalLastPlayedFreeQuestSpotId"*/);
    sub_1C21E38(&StringLiteral_11645/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_1C21E38(&StringLiteral_11654/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_13866/*"TerminalLastPlayedQuestId"*/);
    sub_1C21E38(&StringLiteral_5324/*"Debug_IsBuildInfoDisp"*/);
    sub_1C21E38(&StringLiteral_11663/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4BD9A89 = 1;
  }
  v1 = (System_String_o *)StringLiteral_13860/*"TerminalDispState"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13860/*"TerminalDispState"*/, 0LL) )
  {
    Int_70827320 = UnityEngine_PlayerPrefs__GetInt_70827320(v1, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD909C )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD909C = 1;
    }
    v3 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v3 = TerminalPramsManager_TypeInfo;
    }
    v3->static_fields->_DispState_k__BackingField = Int_70827320;
  }
  v4 = (System_String_o *)StringLiteral_13880/*"TerminalWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13880/*"TerminalWarId"*/, 0LL) )
  {
    v5 = UnityEngine_PlayerPrefs__GetInt_70827320(v4, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD90A0 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD90A0 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_WarId_k__BackingField = v5;
  }
  v7 = (System_String_o *)StringLiteral_13873/*"TerminalSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13873/*"TerminalSpotId"*/, 0LL) )
  {
    v8 = UnityEngine_PlayerPrefs__GetInt_70827320(v7, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD909F )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD909F = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_SpotId_k__BackingField = v8;
  }
  v10 = (System_String_o *)StringLiteral_13871/*"TerminalQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13871/*"TerminalQuestId"*/, 0LL) )
  {
    v11 = UnityEngine_PlayerPrefs__GetInt_70827320(v10, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD909A )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD909A = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v12->static_fields->_QuestId_k__BackingField = v11;
  }
  v13 = (System_String_o *)StringLiteral_13866/*"TerminalLastPlayedQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13866/*"TerminalLastPlayedQuestId"*/, 0LL) )
  {
    v14 = UnityEngine_PlayerPrefs__GetInt_70827320(v13, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD92EA )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD92EA = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_LastPlayedQuestId_k__BackingField = v14;
  }
  v16 = (System_String_o *)StringLiteral_13868/*"TerminalPhaseCnt"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13868/*"TerminalPhaseCnt"*/, 0LL) )
  {
    v17 = UnityEngine_PlayerPrefs__GetInt_70827320(v16, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD909E )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD909E = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    v18->static_fields->_PhaseCnt_k__BackingField = v17;
  }
  v19 = (System_String_o *)StringLiteral_13861/*"TerminalEndTime"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13861/*"TerminalEndTime"*/, 0LL) )
  {
    String_70827888 = UnityEngine_PlayerPrefs__GetString_70827888(v19, 0LL);
    v21 = 0LL;
    if ( System_String__op_Inequality(String_70827888, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v21 = System_Convert__ToInt64_63774764(String_70827888, 0LL);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD909B )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD909B = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    v22->static_fields->_EndTime_k__BackingField = v21;
  }
  v23 = (System_String_o *)StringLiteral_13863/*"TerminalIsDoneShortcut"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13863/*"TerminalIsDoneShortcut"*/, 0LL) )
  {
    v24 = UnityEngine_PlayerPrefs__GetInt_70827320(v23, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD909D )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD909D = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = TerminalPramsManager_TypeInfo;
    }
    v25->static_fields->_IsDoneShortcut_k__BackingField = v24 != 0;
  }
  v26 = (System_String_o *)StringLiteral_13881/*"TerminalWarStartedIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13881/*"TerminalWarStartedIds"*/, 0LL) )
  {
    v33 = UnityEngine_PlayerPrefs__GetString_70827888(v26, 0LL);
    v34 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v34 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v34->static_fields;
    static_fields->mTerminalWarStartedIds = v33;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->mTerminalWarStartedIds,
      (int64_t)v33,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v36 = (System_String_o *)StringLiteral_5328/*"Debug_IsQuestReleaseAll"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5328/*"Debug_IsQuestReleaseAll"*/, 0LL) )
  {
    v37 = UnityEngine_PlayerPrefs__GetInt_70827320(v36, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9ADE )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9ADE = 1;
    }
    v38 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v38 = TerminalPramsManager_TypeInfo;
    }
    v38->static_fields->mDebug_IsQuestReleaseAll = v37 != 0;
  }
  v39 = (System_String_o *)StringLiteral_5325/*"Debug_IsDummyErrorSelect"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5325/*"Debug_IsDummyErrorSelect"*/, 0LL) )
  {
    v40 = UnityEngine_PlayerPrefs__GetInt_70827320(v39, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9ADF )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9ADF = 1;
    }
    v41 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v41 = TerminalPramsManager_TypeInfo;
    }
    v41->static_fields->mDebug_IsDummyErrorSelect = v40 != 0;
  }
  v42 = (System_String_o *)StringLiteral_5324/*"Debug_IsBuildInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5324/*"Debug_IsBuildInfoDisp"*/, 0LL) )
  {
    v43 = UnityEngine_PlayerPrefs__GetInt_70827320(v42, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9AE0 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9AE0 = 1;
    }
    v44 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v44 = TerminalPramsManager_TypeInfo;
    }
    v44->static_fields->mDebug_IsBuildInfoDisp = v43 != 0;
  }
  v45 = (System_String_o *)StringLiteral_13876/*"TerminalTimeStatusEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13876/*"TerminalTimeStatusEventId"*/, 0LL) )
  {
    v46 = UnityEngine_PlayerPrefs__GetInt_70827320(v45, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9685 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9685 = 1;
    }
    v47 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v47 = TerminalPramsManager_TypeInfo;
    }
    v47->static_fields->_TimeStatusEventId_k__BackingField = v46;
  }
  v48 = (System_String_o *)StringLiteral_13877/*"TerminalTimeStatusLoopCount"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13877/*"TerminalTimeStatusLoopCount"*/, 0LL) )
  {
    v49 = UnityEngine_PlayerPrefs__GetInt_70827320(v48, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9686 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9686 = 1;
    }
    v50 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v50 = TerminalPramsManager_TypeInfo;
    }
    v50->static_fields->_TimeStatusLoopCount_k__BackingField = v49;
  }
  v51 = (System_String_o *)StringLiteral_13862/*"TerminalEventDailyPointEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13862/*"TerminalEventDailyPointEventId"*/, 0LL) )
  {
    v52 = UnityEngine_PlayerPrefs__GetInt_70827320(v51, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9AE2 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9AE2 = 1;
    }
    v53 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v53 = TerminalPramsManager_TypeInfo;
    }
    v53->static_fields->_EventDailyPointEventId_k__BackingField = v52;
  }
  v54 = (System_String_o *)StringLiteral_13875/*"TerminalTimeStatusEventDailyPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13875/*"TerminalTimeStatusEventDailyPoint"*/, 0LL) )
  {
    v55 = UnityEngine_PlayerPrefs__GetString_70827888(v54, 0LL);
    v56 = 0LL;
    if ( !System_String__op_Equality(v55, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v56 = System_Convert__ToInt64_63774764(v55, 0LL);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9AE3 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9AE3 = 1;
    }
    v57 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v57 = TerminalPramsManager_TypeInfo;
    }
    v57->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = v56;
  }
  v58 = (System_String_o *)StringLiteral_13857/*"TerminalBeforeEventActivityPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13857/*"TerminalBeforeEventActivityPoint"*/, 0LL) )
  {
    v59 = UnityEngine_PlayerPrefs__GetInt_70827320(v58, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9AE4 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9AE4 = 1;
    }
    v60 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v60 = TerminalPramsManager_TypeInfo;
    }
    v60->static_fields->_BeforeEventActivityPoint_k__BackingField = v59;
  }
  v61 = (System_String_o *)StringLiteral_13858/*"TerminalBeforeEventActivityPointGauge"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13858/*"TerminalBeforeEventActivityPointGauge"*/, 0LL) )
  {
    v62 = UnityEngine_PlayerPrefs__GetInt_70827320(v61, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9AE5 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9AE5 = 1;
    }
    v63 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v63 = TerminalPramsManager_TypeInfo;
    }
    v63->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v62;
  }
  v64 = (System_String_o *)StringLiteral_13859/*"TerminalBeforeEventSubmarinePointData"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13859/*"TerminalBeforeEventSubmarinePointData"*/, 0LL) )
  {
    v65 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70827888(v64, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v72 = JsonManager__Deserialize_object_(
            v65,
            (const MethodInfo_30176B4 *)Method_JsonManager_Deserialize_EventSaveData___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD918E )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD918E = 1;
    }
    v73 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v73 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v73->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (PartyOrganizationUtility_c *)v72;
    sub_1C21DDC(p_BeforeEventSubmarineSaveData_k__BackingField, (int64_t)v72, v66, v67, v68, v69, v70, v71);
  }
  v75 = (System_String_o *)StringLiteral_11662/*"SAVEKEY_TerminalLastSelectQuestIndex"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11662/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, 0LL) )
  {
    v77 = UnityEngine_PlayerPrefs__GetInt_70827320(v75, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9ADD )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9ADD = 1;
    }
    v78 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v78 = TerminalPramsManager_TypeInfo;
    }
    v78->static_fields->_LastSelectQuestIndex_k__BackingField = v77;
    if ( !byte_4BD9099 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      v78 = TerminalPramsManager_TypeInfo;
      byte_4BD9099 = 1;
    }
    if ( !v78->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v78);
      v78 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v78->static_fields->_WarId_k__BackingField;
    if ( !byte_4BD9AF0 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      v78 = TerminalPramsManager_TypeInfo;
      byte_4BD9AF0 = 1;
    }
    if ( !v78->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v78);
      v78 = TerminalPramsManager_TypeInfo;
    }
    TerminalPramsManager__SetFolderLastClickedIdx(
      WarId_k__BackingField,
      v78->static_fields->_LastSelectQuestIndex_k__BackingField,
      v76);
  }
  v80 = (System_String_o *)StringLiteral_11659/*"SAVEKEY_TerminalConquestInfos"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11659/*"SAVEKEY_TerminalConquestInfos"*/, 0LL) )
  {
    v81 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70827888(v80, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v88 = JsonManager__Deserialize_object_(
            v81,
            (const MethodInfo_30176B4 *)Method_JsonManager_Deserialize_EventConquestInfo_____);
    v89 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v89 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = (PartyOrganizationUtility_o *)&v89->static_fields->eventConquestInfos;
    p_eventConquestInfos->klass = (PartyOrganizationUtility_c *)v88;
    sub_1C21DDC(p_eventConquestInfos, (int64_t)v88, v82, v83, v84, v85, v86, v87);
  }
  v91 = (System_String_o *)StringLiteral_11658/*"SAVEKEY_TerminalConquestInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11658/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL) )
  {
    v92 = UnityEngine_PlayerPrefs__GetInt_70827320(v91, 0LL);
    v93 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v93 = TerminalPramsManager_TypeInfo;
    }
    v93->static_fields->eventConquestInfoDisp = v92 != 0;
  }
  v94 = (System_String_o *)StringLiteral_11660/*"SAVEKEY_TerminalCraftInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11660/*"SAVEKEY_TerminalCraftInfoDisp"*/, 0LL) )
  {
    v95 = UnityEngine_PlayerPrefs__GetInt_70827320(v94, 0LL);
    v96 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v96 = TerminalPramsManager_TypeInfo;
    }
    v96->static_fields->eventCraftInfoDisp = v95 != 0;
  }
  v97 = (System_String_o *)StringLiteral_11661/*"SAVEKEY_TerminalHarvestGrowthInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11661/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL) )
  {
    v98 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70827888(v97, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v105 = JsonManager__Deserialize_object_(
             v98,
             (const MethodInfo_30176B4 *)Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    v106 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v106 = TerminalPramsManager_TypeInfo;
    }
    p_eventHarvestGrowthInfo = (PartyOrganizationUtility_o *)&v106->static_fields->eventHarvestGrowthInfo;
    p_eventHarvestGrowthInfo->klass = (PartyOrganizationUtility_c *)v105;
    sub_1C21DDC(p_eventHarvestGrowthInfo, (int64_t)v105, v99, v100, v101, v102, v103, v104);
  }
  v108 = (System_String_o *)StringLiteral_11649/*"SAVEKEY_LastPlayBgmName"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11649/*"SAVEKEY_LastPlayBgmName"*/, 0LL) )
  {
    v115 = UnityEngine_PlayerPrefs__GetString_70827888(v108, 0LL);
    v116 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v116 = TerminalPramsManager_TypeInfo;
    }
    p_lastPlayBgmName = (PartyOrganizationUtility_o *)&v116->static_fields->lastPlayBgmName;
    p_lastPlayBgmName->klass = (PartyOrganizationUtility_c *)v115;
    sub_1C21DDC(p_lastPlayBgmName, (int64_t)v115, v109, v110, v111, v112, v113, v114);
  }
  v118 = (System_String_o *)StringLiteral_11650/*"SAVEKEY_LastPlayQuestConsumeType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11650/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL) )
  {
    v119 = UnityEngine_PlayerPrefs__GetInt_70827320(v118, 0LL);
    v120 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v120 = TerminalPramsManager_TypeInfo;
    }
    v120->static_fields->lastPlayQuestConsumeAp = v119;
  }
  v121 = (System_String_o *)StringLiteral_13865/*"TerminalLastPlayedFreeQuestSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13865/*"TerminalLastPlayedFreeQuestSpotId"*/, 0LL) )
  {
    v122 = UnityEngine_PlayerPrefs__GetInt_70827320(v121, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD92EB )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD92EB = 1;
    }
    v123 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v123 = TerminalPramsManager_TypeInfo;
    }
    v123->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = v122;
  }
  v124 = (System_String_o *)StringLiteral_13864/*"TerminalLastPanelEventPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13864/*"TerminalLastPanelEventPoint"*/, 0LL) )
  {
    v125 = UnityEngine_PlayerPrefs__GetInt_70827320(v124, 0LL);
    v126 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v126 = TerminalPramsManager_TypeInfo;
    }
    v126->static_fields->panelEventPoint = v125;
  }
  v127 = (System_String_o *)StringLiteral_11655/*"SAVEKEY_PlayedTerminalEffects"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11655/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL) )
  {
    v134 = UnityEngine_PlayerPrefs__GetString_70827888(v127, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9AE7 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9AE7 = 1;
    }
    v135 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v135 = TerminalPramsManager_TypeInfo;
    }
    p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v135->static_fields->_PlayedTerminalEffects_k__BackingField;
    p_PlayedTerminalEffects_k__BackingField->klass = (PartyOrganizationUtility_c *)v134;
    sub_1C21DDC(p_PlayedTerminalEffects_k__BackingField, (int64_t)v134, v128, v129, v130, v131, v132, v133);
  }
  v137 = (System_String_o *)StringLiteral_11652/*"SAVEKEY_PlayTerminalEffectDisappear"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11652/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL) )
  {
    v138 = UnityEngine_PlayerPrefs__GetInt_70827320(v137, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9902 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9902 = 1;
    }
    v139 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v139 = TerminalPramsManager_TypeInfo;
    }
    v139->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = v138 != 0;
  }
  v140 = (System_String_o *)StringLiteral_11653/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11653/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL) )
  {
    v141 = UnityEngine_PlayerPrefs__GetInt_70827320(v140, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9903 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9903 = 1;
    }
    v142 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v142 = TerminalPramsManager_TypeInfo;
    }
    v142->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = v141;
  }
  v143 = (System_String_o *)StringLiteral_11654/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11654/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL) )
  {
    v144 = UnityEngine_PlayerPrefs__GetInt_70827320(v143, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9814 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9814 = 1;
    }
    v145 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v145 = TerminalPramsManager_TypeInfo;
    }
    v145->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = v144 != 0;
  }
  v146 = (System_String_o *)StringLiteral_11664/*"SAVEKEY_TerminalSelectedStoryQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11664/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL) )
  {
    v147 = UnityEngine_PlayerPrefs__GetInt_70827320(v146, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9405 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9405 = 1;
    }
    v148 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v148 = TerminalPramsManager_TypeInfo;
    }
    v148->static_fields->_SelectedStoryQuestId_k__BackingField = v147;
  }
  v149 = (System_String_o *)StringLiteral_11646/*"SAVEKEY_ConnectMarkEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11646/*"SAVEKEY_ConnectMarkEventId"*/, 0LL) )
  {
    v150 = UnityEngine_PlayerPrefs__GetInt_70827320(v149, 0LL);
    v151 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v151 = TerminalPramsManager_TypeInfo;
    }
    v151->static_fields->ConnectMarkEventId = v150;
  }
  v152 = (System_String_o *)StringLiteral_11645/*"SAVEKEY_ConnectMarkAnimationId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11645/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL) )
  {
    v153 = UnityEngine_PlayerPrefs__GetInt_70827320(v152, 0LL);
    v154 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v154 = TerminalPramsManager_TypeInfo;
    }
    v154->static_fields->ConnectMarkAnimationId = v153;
  }
  v155 = (System_String_o *)StringLiteral_11663/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11663/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL) )
  {
    v156 = UnityEngine_PlayerPrefs__GetInt_70827320(v155, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD84F7 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD84F7 = 1;
    }
    v157 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v157 = TerminalPramsManager_TypeInfo;
    }
    v157->static_fields->_SelectedRecollectionWarId_k__BackingField = v156;
  }
  v158 = (System_String_o *)StringLiteral_11644/*"SAVEKEY_ClearEventQuestIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11644/*"SAVEKEY_ClearEventQuestIds"*/, 0LL) )
  {
    v165 = UnityEngine_PlayerPrefs__GetString_70827888(v158, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9097 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9097 = 1;
    }
    v166 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v166 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (PartyOrganizationUtility_o *)&v166->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (PartyOrganizationUtility_c *)v165;
    sub_1C21DDC(p_ClearEventQuestIds_k__BackingField, (int64_t)v165, v159, v160, v161, v162, v163, v164);
  }
  v168 = (System_String_o *)StringLiteral_11651/*"SAVEKEY_MapModelClearQuestInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11651/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL) )
  {
    v169 = UnityEngine_PlayerPrefs__GetString_70827888(v168, 0LL);
    IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(v169, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v169 || (IsNullOrEmpty = System_String__Split(v169, 0x2Cu, 0, 0LL)) == 0LL )
        sub_1C22094(IsNullOrEmpty, v171);
      v172 = *(_QWORD *)&IsNullOrEmpty->max_length;
      v173 = IsNullOrEmpty;
      if ( v172 )
      {
        if ( !(_DWORD)v172 )
          sub_1C2209C(IsNullOrEmpty, v171);
        v174 = System_Int32__Parse(IsNullOrEmpty->m_Items[0], 0LL);
      }
      else
      {
        v174 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9AE9 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9AE9 = 1;
      }
      v175 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v175 = TerminalPramsManager_TypeInfo;
      }
      v175->static_fields->_MapModelClearQuestId_k__BackingField = v174;
      if ( (int)v173->max_length < 2 )
      {
        v177 = 0;
      }
      else
      {
        v176 = System_Int32__Parse(v173->m_Items[1], 0LL);
        v175 = TerminalPramsManager_TypeInfo;
        v177 = v176;
      }
      if ( !v175->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v175);
      if ( !byte_4BD9AEA )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9AEA = 1;
      }
      v178 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v178 = TerminalPramsManager_TypeInfo;
      }
      v178->static_fields->_MapModelClearPhaseCount_k__BackingField = v177;
    }
  }
  v179 = (System_String_o *)StringLiteral_11647/*"SAVEKEY_DataLostBattleAutoReset"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11647/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL) )
  {
    v180 = UnityEngine_PlayerPrefs__GetInt_70827320(v179, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD981C )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD981C = 1;
    }
    v181 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v181 = TerminalPramsManager_TypeInfo;
    }
    v181->static_fields->_IsDataLostBattleAutoReset_k__BackingField = v180 != 0;
  }
  v182 = (System_String_o *)StringLiteral_11656/*"SAVEKEY_PlayerGenderType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11656/*"SAVEKEY_PlayerGenderType"*/, 0LL) )
  {
    v183 = UnityEngine_PlayerPrefs__GetInt_70827320(v182, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD799C )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD799C = 1;
    }
    v184 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v184 = TerminalPramsManager_TypeInfo;
    }
    v184->static_fields->_PlayerGenderType_k__BackingField = v183;
  }
  v185 = (System_String_o *)StringLiteral_11643/*"SAVEKEY_CampaignDirectBonus"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11643/*"SAVEKEY_CampaignDirectBonus"*/, 0LL) )
  {
    v186 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70827888(v185, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v193 = JsonManager__Deserialize_object_(
             v186,
             (const MethodInfo_30176B4 *)Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9AEE )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9AEE = 1;
    }
    v194 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v194 = TerminalPramsManager_TypeInfo;
    }
    v195 = v194->static_fields;
    v195->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)v193;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v195->_CampaignDirectBonus_k__BackingField,
      (int64_t)v193,
      v187,
      v188,
      v189,
      v190,
      v191,
      v192);
  }
  v196 = (System_String_o *)StringLiteral_11642/*"SAVEKEY_BlankEarthSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11642/*"SAVEKEY_BlankEarthSpotId"*/, 0LL) )
  {
    v197 = UnityEngine_PlayerPrefs__GetInt_70827320(v196, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD8FB6 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD8FB6 = 1;
    }
    v198 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v198 = TerminalPramsManager_TypeInfo;
    }
    v198->static_fields->_BlankEarthSpotId_k__BackingField = v197;
  }
  v199 = (System_String_o *)StringLiteral_11641/*"SAVEKEY_BlankEarthRank"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11641/*"SAVEKEY_BlankEarthRank"*/, 0LL) )
  {
    v200 = UnityEngine_PlayerPrefs__GetInt_70827320(v199, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9AF1 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9AF1 = 1;
    }
    v201 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v201 = TerminalPramsManager_TypeInfo;
    }
    v201->static_fields->_BlankEarthRank_k__BackingField = v200;
  }
}


TerminalTransitionInfo_o *__fastcall TerminalPramsManager__Load_TerminalTransitionInfoData(const MethodInfo *method)
{
  System_String_o *v1; // x20
  __int64 v2; // x19
  int32_t Int_70827320; // w0
  int32_t v4; // w20
  const MethodInfo *v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  System_String_o *String_70827888; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BD9A8A & 1) == 0 )
  {
    sub_1C21E38(&TerminalTransitionInfo_TypeInfo);
    sub_1C21E38(&StringLiteral_13879/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_1C21E38(&StringLiteral_13878/*"TerminalTransitionInfoMissionId"*/);
    byte_4BD9A8A = 1;
  }
  v1 = (System_String_o *)StringLiteral_13878/*"TerminalTransitionInfoMissionId"*/;
  v2 = 0LL;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13878/*"TerminalTransitionInfoMissionId"*/, 0LL) )
  {
    Int_70827320 = UnityEngine_PlayerPrefs__GetInt_70827320(v1, 0LL);
    if ( Int_70827320 < 1 )
    {
      return 0LL;
    }
    else
    {
      v4 = Int_70827320;
      v2 = sub_1C22084(TerminalTransitionInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v2, 0LL);
      TerminalTransitionInfo__Init((TerminalTransitionInfo_o *)v2, v5);
      if ( !v2 )
        sub_1C22094(v6, v7);
      *(_DWORD *)(v2 + 16) = v4;
      v8 = (System_String_o *)StringLiteral_13879/*"TerminalTransitionInfoVoiceAssetName"*/;
      if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13879/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL) )
      {
        String_70827888 = UnityEngine_PlayerPrefs__GetString_70827888(v8, 0LL);
        *(_QWORD *)(v2 + 40) = String_70827888;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v2 + 40), (int64_t)String_70827888, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  return (TerminalTransitionInfo_o *)v2;
}


void __fastcall TerminalPramsManager__MapModelClearQuestInfo_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  System_String_o *v2; // x19
  TerminalPramsManager_c *v3; // x0
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t MapModelClearQuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BD9AA4 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11651/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C21E38(&StringLiteral_866/*","*/);
    byte_4BD9AA4 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9276 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9276 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v1->static_fields->_MapModelClearQuestId_k__BackingField;
  v2 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_4BD9277 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9277 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v3->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v5 = System_String__Concat_63126736(v2, (System_String_o *)StringLiteral_866/*","*/, v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11651/*"SAVEKEY_MapModelClearQuestInfo"*/, v5, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__PlayQuestSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BD9A90 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11662/*"SAVEKEY_TerminalLastSelectQuestIndex"*/);
    sub_1C21E38(&StringLiteral_13865/*"TerminalLastPlayedFreeQuestSpotId"*/);
    sub_1C21E38(&StringLiteral_13866/*"TerminalLastPlayedQuestId"*/);
    byte_4BD9A90 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9336 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9336 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13866/*"TerminalLastPlayedQuestId"*/,
    v1->static_fields->_LastPlayedQuestId_k__BackingField,
    0LL);
  if ( !byte_4BD9AF0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AF0 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11662/*"SAVEKEY_TerminalLastSelectQuestIndex"*/,
    v2->static_fields->_LastSelectQuestIndex_k__BackingField,
    0LL);
  if ( !byte_4BD8FB8 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8FB8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13865/*"TerminalLastPlayedFreeQuestSpotId"*/,
    v3->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__PlaySystemSE(int32_t seKind, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  _BOOL4 IsAutoNoSe_k__BackingField; // w21
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_4BD9A85 & 1) == 0 )
  {
    sub_1C21E38(&Method_TerminalPramsManager_PlaySystemSE__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A85 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9ADB )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9ADB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( TerminalPramsManager_TypeInfo->static_fields->_IsAutoNoSe_k__BackingField )
    {
LABEL_9:
      if ( !byte_4BD9ADC )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9ADC = 1;
      }
      v4 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v4 = TerminalPramsManager_TypeInfo;
      }
      v4->static_fields->_IsAutoNoSe_k__BackingField = 0;
      return;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
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
  if ( !TerminalPramsManager__IsAuto((const MethodInfo *)v3) )
  {
    v6 = Method_TerminalPramsManager_PlaySystemSE__;
    if ( (*((_BYTE *)Method_TerminalPramsManager_PlaySystemSE__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C21E50(Method_TerminalPramsManager_PlaySystemSE__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, seKind, 0, 0LL);
  }
}


void __fastcall TerminalPramsManager__PlayedTerminalEffectsSave_SaveData(int32_t effectId, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  TerminalPramsManager_c *v9; // x0
  PartyOrganizationUtility_c *v10; // x19
  TerminalPramsManager_c *v11; // x0
  PartyOrganizationUtility_o *p_PlayedTerminalEffects_k__BackingField; // x0
  TerminalPramsManager_c *v13; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x19
  System_String_o *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_String_o *v22; // x19
  TerminalPramsManager_c *v23; // x0
  PartyOrganizationUtility_o *v24; // x0
  const MethodInfo *v25; // x0
  int32_t v26; // [xsp+Ch] [xbp-24h] BYREF

  v26 = effectId;
  if ( (byte_4BD9AAD & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD9AAD = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsTerminalEffectPlayed(effectId, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9AF6 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9AF6 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    if ( !v9->static_fields->_PlayedTerminalEffects_k__BackingField )
    {
      if ( !v9->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v9);
      v10 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
      if ( !byte_4BD9AE7 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9AE7 = 1;
      }
      v11 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v11 = TerminalPramsManager_TypeInfo;
      }
      p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v11->static_fields->_PlayedTerminalEffects_k__BackingField;
      p_PlayedTerminalEffects_k__BackingField->klass = v10;
      sub_1C21DDC(p_PlayedTerminalEffects_k__BackingField, (int64_t)v10, v3, v4, v5, v6, v7, v8);
      v9 = TerminalPramsManager_TypeInfo;
    }
    if ( !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9);
    if ( !byte_4BD9AF6 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9AF6 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    PlayedTerminalEffects_k__BackingField = v13->static_fields->_PlayedTerminalEffects_k__BackingField;
    v15 = System_Int32__ToString((int32_t)&v26, 0LL);
    v22 = System_String__Concat_63126736(
            PlayedTerminalEffects_k__BackingField,
            v15,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            0LL);
    if ( !byte_4BD9AE7 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9AE7 = 1;
    }
    v23 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v23 = TerminalPramsManager_TypeInfo;
    }
    v24 = (PartyOrganizationUtility_o *)&v23->static_fields->_PlayedTerminalEffects_k__BackingField;
    v24->klass = (PartyOrganizationUtility_c *)v22;
    sub_1C21DDC(v24, (int64_t)v22, v16, v17, v18, v19, v20, v21);
    TerminalPramsManager__Save_SaveData(v25);
  }
}


void __fastcall TerminalPramsManager__PlayerGenderType_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9AA6 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11656/*"SAVEKEY_PlayerGenderType"*/);
    byte_4BD9AA6 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9AF7 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AF7 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11656/*"SAVEKEY_PlayerGenderType"*/,
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
  BattleResultComponent_resultData_array *v4; // x21
  BattleResultComponent_resultData_o *v5; // x8
  struct UserServantCollectionEntity_array *oldUserSvtCollection; // x8
  _DWORD *v7; // x23
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  BattleResultComponent_resultData_o *v14; // x28
  int eventEndTitle; // w8
  __int64 *v16; // x26
  UserServantCollectionMaster_o *v17; // x20
  unsigned int v18; // w29
  __int64 v19; // x19
  __int64 v20; // x25
  __int64 v21; // x26
  struct DeckData_o *myDeck; // x24
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  UserServantCollectionEntity_o *v24; // x25
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  _DWORD *v31; // x24
  PartyOrganizationUtility_o *v32; // x24
  PartyOrganizationUtility_c *klass; // x8
  PartyOrganizationUtility_c *v34; // x8
  TerminalPramsManager_c *v35; // x0
  PartyOrganizationUtility_o *p_mQuestClearHeroineInfo; // x0
  __int64 v37; // x8
  BattleResultComponent_resultData_o *v38; // x9
  struct System_String_o *v39; // x10
  struct System_String_o *eventEndMessage; // x19
  __int128 v41; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x24
  UserServantEntity_o *v43; // x25
  int64_t v44; // x24
  void **p_monitor; // x19
  void *v46; // x26
  void *monitor; // t1
  void *v48; // x22
  Il2CppObject *MasterData_object; // x26
  NetworkManager_c *v50; // x0
  __int64 v51; // x22
  __int64 v52; // x28
  int64_t userIdNumber; // x27
  int v54; // w9
  UserServantCollectionEntity_o *v55; // x27
  int v56; // w8
  UserServantCollectionEntity_o *v57; // x26
  struct DeckData_o *userId; // x21
  int32_t SvtId; // w0
  __int64 v60; // x22
  __int64 v61; // x29
  int32_t v62; // w28
  int64_t v63; // x23
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
  bool v76; // w9
  Il2CppObject *Master_object; // x0
  __int64 v78; // x22
  __int64 v79; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v80; // x24
  int klass_high; // w8
  int32_t friendshipExceedCount; // w9
  TerminalPramsManager_c *v83; // x0
  PartyOrganizationUtility_o *v84; // x0
  BattleResultComponent_resultData_o *v85; // x22
  BattleResultComponent_resultData_o *v86; // x8
  struct System_String_o *v87; // x9
  UserQuestEntity_o *v88; // x23
  int32_t questId; // w21
  TerminalPramsManager_c *v90; // x0
  int32_t QuestPhase; // w24
  TerminalPramsManager_c *v92; // x0
  int32_t v93; // w24
  Il2CppObject *v94; // x25
  UserQuestEntity_o *v95; // x0
  UserQuestEntity_o *v96; // x26
  int32_t v97; // w25
  bool v98; // w21
  TerminalPramsManager_c *v99; // x0
  const MethodInfo *v100; // x2
  TerminalPramsManager_c *v101; // x0
  System_String_o *ValidMessage; // x0
  const MethodInfo *v103; // x2
  TerminalPramsManager_c *v104; // x8
  TerminalPramsManager_c *v105; // x0
  TerminalPramsManager_c *v106; // x0
  const MethodInfo *v107; // x0
  char *v108; // x21
  TerminalPramsManager_c *v109; // x8
  int32_t v110; // w24
  const MethodInfo *v111; // x1
  WarEntity_o *v112; // x25
  BalanceConfig_c *v113; // x0
  TerminalPramsManager_c *v114; // x0
  TerminalPramsManager_c *v115; // x0
  bool v116; // w22
  TerminalPramsManager_c *v117; // x0
  char v118; // w8
  const MethodInfo *v119; // x1
  bool HasFlag; // w0
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  int64_t v134; // x24
  TerminalPramsManager_c *v135; // x0
  PartyOrganizationUtility_o *p_mResultEventPanelRewardInfos; // x0
  TerminalPramsManager_c *v137; // x0
  PartyOrganizationUtility_o *p_eventConquestInfos; // x0
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  int64_t v145; // x24
  TerminalPramsManager_c *v146; // x0
  PartyOrganizationUtility_o *v147; // x0
  bool Farm; // w19
  TerminalPramsManager_c *v149; // x0
  char v150; // w19
  int32_t v151; // w24
  WarEntity_o *v152; // x0
  int32_t id; // w19
  TerminalPramsManager_c *v154; // x0
  TerminalPramsManager_c *v155; // x0
  Il2CppObject *v156; // x24
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  int64_t v169; // x25
  TerminalPramsManager_c *v170; // x0
  PartyOrganizationUtility_o *p_OldUserEventPoint_k__BackingField; // x0
  signed int max_length; // w9
  BattleResultComponent_resultData_array *v173; // x25
  int v174; // w8
  Il2CppClass **v175; // x8
  Il2CppClass *v176; // x26
  int32_t RaidGroupDeadQuestId; // w27
  signed int v178; // w9
  BattleResultComponent_resultData_array *v179; // x27
  int v180; // w8
  int v181; // w21
  struct TerminalPramsManager_StaticFields *v182; // x8
  int32_t name_high; // w21
  signed int v184; // w9
  BattleResultComponent_resultData_array *v185; // x25
  int v186; // w8
  BattleResultComponent_resultData_o *v187; // x19
  int32_t RaidDeadQuestId; // w26
  struct TerminalPramsManager_StaticFields *v189; // x8
  int32_t v190; // w19
  TerminalPramsManager_c *v191; // x0
  TerminalPramsManager_c *v192; // x8
  bool v193; // w19
  TerminalPramsManager_c *v194; // x0
  int32_t v195; // w19
  int32_t v196; // w21
  Il2CppObject *v197; // x24
  int32_t eventId; // w25
  bool v199; // w24
  TerminalPramsManager_c *v200; // x0
  char *v201; // x21
  BattleResultComponent_resultData_o *v202; // x8
  int v203; // w9
  int v204; // w11
  __int64 v205; // x19
  int32_t bounds_high; // w24
  bool IsUserEventStatus; // w0
  TerminalPramsManager_c *v208; // x0
  TerminalPramsManager_c *v209; // x0
  TerminalPramsManager_c *v210; // x0
  Il2CppObject *v211; // x24
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7
  TerminalPramsManager_c *v218; // x0
  PartyOrganizationUtility_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  struct System_String_o *ultimateGetQpText; // x8
  struct System_String_o *v221; // x8
  signed int v222; // w8
  System_String_o **v223; // x9
  System_String_o *v224; // x26
  System_String_o **v225; // x9
  System_String_o *v226; // x21
  void **v227; // x8
  int32_t v228; // w22
  System_Collections_Generic_List_object__o *v229; // x27
  TerminalPramsManager___c_c *v230; // x8
  System_Predicate_object__o *_9__704_0; // x25
  Il2CppObject *v232; // x22
  struct TerminalPramsManager___c_StaticFields *v233; // x0
  int64_t v234; // x2
  int32_t v235; // w3
  System_String_o *v236; // x4
  BattleSetupInfo_o *v237; // x5
  FollowerInfo_o *v238; // x6
  PartyListViewItem_o *v239; // x7
  TerminalPramsManager_c *v240; // x0
  TerminalPramsManager_c *v241; // x0
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x27
  System_String_o *v243; // x22
  int64_t v244; // x2
  int32_t v245; // w3
  System_String_o *v246; // x4
  BattleSetupInfo_o *v247; // x5
  FollowerInfo_o *v248; // x6
  PartyListViewItem_o *v249; // x7
  TerminalPramsManager_c *v250; // x0
  int32_t v251; // w24
  int32_t PhaseCnt_k__BackingField; // w25
  _BOOL4 IsQuestClear_k__BackingField; // w19
  TerminalPramsManager_c *v254; // x0
  __int64 *v255; // x26
  Il2CppObject *v256; // x24
  TerminalPramsManager_c *v257; // x0
  Il2CppObject *v258; // x24
  int v259; // w21
  TerminalPramsManager_c *v260; // x0
  PartyOrganizationUtility_o *p_questClearCostumeRelease_k__BackingField; // x0
  int64_t v262; // x2
  int32_t v263; // w3
  System_String_o *v264; // x4
  BattleSetupInfo_o *v265; // x5
  FollowerInfo_o *v266; // x6
  PartyListViewItem_o *v267; // x7
  BattleResultComponent_resultData_o *v268; // x8
  int64_t v269; // x24
  TerminalPramsManager_c *v270; // x0
  PartyOrganizationUtility_o *v271; // x0
  TerminalPramsManager_c *v272; // x0
  PartyOrganizationUtility_o *p_questClearCostumeGet_k__BackingField; // x0
  int64_t v274; // x2
  int32_t v275; // w3
  System_String_o *v276; // x4
  BattleSetupInfo_o *v277; // x5
  FollowerInfo_o *v278; // x6
  PartyListViewItem_o *v279; // x7
  int64_t v280; // x24
  TerminalPramsManager_c *v281; // x0
  PartyOrganizationUtility_o *v282; // x0
  TerminalPramsManager_c *v283; // x0
  PartyOrganizationUtility_o *p_eventPointWinReward_k__BackingField; // x0
  int64_t v285; // x2
  int32_t v286; // w3
  System_String_o *v287; // x4
  BattleSetupInfo_o *v288; // x5
  FollowerInfo_o *v289; // x6
  PartyListViewItem_o *v290; // x7
  TerminalPramsManager_c *v291; // x0
  int32_t v292; // w24
  QuestGroupMaster_o *v293; // x25
  int32_t GroupId; // w0
  TerminalPramsManager_c *v295; // x8
  int32_t v296; // w26
  int v297; // w25
  Il2CppObject *v298; // x26
  EventPointEntity_o *v299; // x25
  int32_t v300; // w24
  struct TerminalPramsManager_StaticFields *v301; // x8
  BattleResultComponent_resultData_o *v302; // x8
  struct System_String_o *v303; // x9
  int64_t v304; // x24
  TerminalPramsManager_c *v305; // x0
  PartyOrganizationUtility_o *v306; // x0
  int32_t v307; // w19
  TerminalPramsManager_c *v308; // x0
  TerminalPramsManager_c *v309; // x0
  PartyOrganizationUtility_o *p_eventRaceBoost_k__BackingField; // x0
  int64_t v311; // x2
  int32_t v312; // w3
  System_String_o *v313; // x4
  BattleSetupInfo_o *v314; // x5
  FollowerInfo_o *v315; // x6
  PartyListViewItem_o *v316; // x7
  __int64 v317; // x8
  int64_t v318; // x23
  TerminalPramsManager_c *v319; // x0
  PartyOrganizationUtility_o *v320; // x0
  __int64 v321; // x19
  BattleResultComponent_resultData_o *v322; // x9
  struct System_String_o *v323; // x10
  int64_t v324; // x23
  TerminalPramsManager_c *v325; // x0
  PartyOrganizationUtility_o *p_eventTowerReward_k__BackingField; // x0
  int64_t v327; // x2
  int32_t v328; // w3
  System_String_o *v329; // x4
  BattleSetupInfo_o *v330; // x5
  FollowerInfo_o *v331; // x6
  PartyListViewItem_o *v332; // x7
  int64_t v333; // x23
  TerminalPramsManager_c *v334; // x0
  PartyOrganizationUtility_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  int64_t v336; // x23
  TerminalPramsManager_c *v337; // x0
  PartyOrganizationUtility_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  int64_t v339; // x23
  TerminalPramsManager_c *v340; // x0
  PartyOrganizationUtility_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  int64_t v342; // x23
  TerminalPramsManager_c *v343; // x0
  PartyOrganizationUtility_o *p_warClearReward_k__BackingField; // x0
  TerminalPramsManager_c *v345; // x0
  struct TerminalPramsManager_StaticFields *v346; // x0
  int64_t v347; // x2
  int32_t v348; // w3
  System_String_o *v349; // x4
  BattleSetupInfo_o *v350; // x5
  FollowerInfo_o *v351; // x6
  PartyListViewItem_o *v352; // x7
  TerminalPramsManager_c *v353; // x0
  struct TerminalPramsManager_StaticFields *v354; // x0
  Il2CppObject *Instance; // x23
  int32_t WarID_ByQuestID; // w22
  WarEntity_o *WarEntityByWarID; // x0
  int32_t v358; // w23
  int64_t v359; // x2
  int32_t v360; // w3
  System_String_o *v361; // x4
  BattleSetupInfo_o *v362; // x5
  FollowerInfo_o *v363; // x6
  PartyListViewItem_o *v364; // x7
  __int64 v365; // x8
  int64_t v366; // x22
  TerminalPramsManager_c *v367; // x0
  struct TerminalPramsManager_StaticFields *v368; // x0
  PartyOrganizationUtility_o *p_oldPersonalBoss_k__BackingField; // x0
  TerminalPramsManager_c *v370; // x0
  struct TerminalPramsManager_StaticFields *v371; // x0
  struct EventTowerReward_array *eventTowerReward; // x8
  bool v373; // w19
  BalanceConfig_c *v374; // x8
  int32_t v375; // w19
  TerminalPramsManager_c *v376; // x0
  TerminalPramsManager_c *v377; // x0
  BalanceConfig_c *v378; // x8
  int32_t v379; // w19
  TerminalPramsManager_c *v380; // x0
  BalanceConfig_c *v381; // x8
  int32_t v382; // w19
  TerminalPramsManager_c *v383; // x0
  BalanceConfig_c *v384; // x8
  int32_t v385; // w19
  Il2CppObject *v386; // x22
  struct DeckData_o *v387; // x21
  int64_t v388; // x2
  int32_t v389; // w3
  System_String_o *v390; // x4
  BattleSetupInfo_o *v391; // x5
  FollowerInfo_o *v392; // x6
  PartyListViewItem_o *v393; // x7
  UserSuperBossEntity_o *v394; // x22
  BattleResultComponent_resultData_array *v395; // x21
  int64_t v396; // x2
  int32_t v397; // w3
  System_String_o *v398; // x4
  BattleSetupInfo_o *v399; // x5
  FollowerInfo_o *v400; // x6
  PartyListViewItem_o *v401; // x7
  TerminalPramsManager_c *v402; // x0
  struct TerminalPramsManager_StaticFields *v403; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v405; // x21
  Il2CppObject *v406; // x22
  int32_t ScriptQuestId; // w22
  Il2CppObject *v408; // x23
  TerminalPramsManager_c *v409; // x0
  int32_t v410; // w26
  int32_t winResult; // w24
  int64_t v412; // x2
  int32_t v413; // w3
  System_String_o *v414; // x4
  BattleSetupInfo_o *v415; // x5
  FollowerInfo_o *v416; // x6
  PartyListViewItem_o *v417; // x7
  Il2CppObject *v418; // x23
  TerminalPramsManager_c *v419; // x0
  int32_t v420; // w24
  int32_t v421; // w21
  TerminalPramsManager_c *v422; // x0
  void *v423; // x1
  PartyOrganizationUtility_o *p_lastPlayBgmName; // x0
  const MethodInfo *v425; // x0
  Il2CppObject *v426; // x21
  int32_t v427; // w22
  int64_t v428; // x2
  int32_t v429; // w3
  System_String_o *v430; // x4
  BattleSetupInfo_o *v431; // x5
  FollowerInfo_o *v432; // x6
  PartyListViewItem_o *v433; // x7
  TerminalPramsManager_c *v434; // x0
  il2cpp_array_size_t *v435; // x0
  int32_t v436; // w22
  TerminalPramsManager_c *v437; // x0
  int32_t v438; // w23
  int64_t v439; // x2
  int32_t v440; // w3
  System_String_o *v441; // x4
  BattleSetupInfo_o *v442; // x5
  FollowerInfo_o *v443; // x6
  PartyListViewItem_o *v444; // x7
  SpecifiedSceneInfo_o *SpecifiedSceneInfo; // x22
  TerminalPramsManager_c *v446; // x0
  struct TerminalPramsManager_StaticFields *v447; // x0
  const MethodInfo *v448; // x0
  int64_t v449; // x2
  int32_t v450; // w3
  System_String_o *v451; // x4
  BattleSetupInfo_o *v452; // x5
  FollowerInfo_o *v453; // x6
  PartyListViewItem_o *v454; // x7
  int32_t v455; // w19
  TerminalPramsManager_c *v456; // x0
  PartyOrganizationUtility_o *p_eventHarvestGrowthInfo; // x0
  TerminalPramsManager_c *v458; // x0
  BattleResultComponent_resultData_array *v459; // x22
  int32_t ScriptIntParam; // w24
  int32_t v461; // w0
  int32_t v462; // w25
  int64_t v463; // x23
  int64_t v464; // x2
  int32_t v465; // w3
  System_String_o *v466; // x4
  BattleSetupInfo_o *v467; // x5
  FollowerInfo_o *v468; // x6
  PartyListViewItem_o *v469; // x7
  Il2CppArrayBounds *bounds; // d0
  TerminalPramsManager_c *v471; // x0
  PartyOrganizationUtility_o *v472; // x0
  Il2CppObject *v473; // x22
  QuestEntity_o *QuestEntity; // x0
  int64_t v475; // x2
  int32_t v476; // w3
  System_String_o *v477; // x4
  BattleSetupInfo_o *v478; // x5
  FollowerInfo_o *v479; // x6
  PartyListViewItem_o *v480; // x7
  QuestEntity_o *v481; // x22
  TerminalPramsManager_c *v482; // x0
  int32_t SpotId; // w21
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v485; // x21
  TerminalPramsManager_c *v486; // x0
  struct EventAreaImproveResultInfo_o *eventAreaImproveResultInfo; // x8
  TerminalPramsManager_c *v488; // x0
  System_String_o *v489; // x21
  TerminalPramsManager_c *v490; // x0
  System_String_o *v491; // x0
  int64_t v492; // x2
  int32_t v493; // w3
  System_String_o *v494; // x4
  BattleSetupInfo_o *v495; // x5
  FollowerInfo_o *v496; // x6
  PartyListViewItem_o *v497; // x7
  System_String_o *v498; // x21
  TerminalPramsManager_c *v499; // x0
  PartyOrganizationUtility_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  int64_t v501; // x21
  TerminalPramsManager_c *v502; // x0
  PartyOrganizationUtility_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v504; // x21
  TerminalPramsManager_c *v505; // x0
  int64_t v506; // x2
  int32_t v507; // w3
  System_String_o *v508; // x4
  BattleSetupInfo_o *v509; // x5
  FollowerInfo_o *v510; // x6
  PartyListViewItem_o *v511; // x7
  int64_t v512; // x2
  int32_t v513; // w3
  System_String_o *v514; // x4
  BattleSetupInfo_o *v515; // x5
  FollowerInfo_o *v516; // x6
  PartyListViewItem_o *v517; // x7
  void *v518; // x1
  TerminalPramsManager_c *v519; // x0
  int64_t v520; // x2
  int32_t v521; // w3
  System_String_o *v522; // x4
  BattleSetupInfo_o *v523; // x5
  FollowerInfo_o *v524; // x6
  PartyListViewItem_o *v525; // x7
  int64_t v526; // x2
  int32_t v527; // w3
  System_String_o *v528; // x4
  BattleSetupInfo_o *v529; // x5
  FollowerInfo_o *v530; // x6
  PartyListViewItem_o *v531; // x7
  void *v532; // x1
  TerminalPramsManager_c *v533; // x0
  int64_t v534; // x2
  int32_t v535; // w3
  System_String_o *v536; // x4
  BattleSetupInfo_o *v537; // x5
  FollowerInfo_o *v538; // x6
  PartyListViewItem_o *v539; // x7
  int64_t v540; // x2
  int32_t v541; // w3
  System_String_o *v542; // x4
  BattleSetupInfo_o *v543; // x5
  FollowerInfo_o *v544; // x6
  PartyListViewItem_o *v545; // x7
  void *v546; // x1
  TerminalPramsManager_c *v547; // x0
  int64_t v548; // x2
  int32_t v549; // w3
  System_String_o *v550; // x4
  BattleSetupInfo_o *v551; // x5
  FollowerInfo_o *v552; // x6
  PartyListViewItem_o *v553; // x7
  System_String_o *v554; // x0
  const MethodInfo *v555; // x1
  const MethodInfo *v556; // x0
  const MethodInfo *v557; // x0
  const MethodInfo *v558; // x0
  const MethodInfo *v559; // x0
  const MethodInfo *v560; // x0
  const MethodInfo *v561; // x0
  TerminalPramsManager_c *v562; // x0
  __int64 v563; // x0
  System_String_o *isLastGoalPlayed; // [xsp+18h] [xbp-138h]
  bool v565; // [xsp+24h] [xbp-12Ch]
  BattleResultComponent_resultData_array *resulta; // [xsp+28h] [xbp-128h]
  il2cpp_array_size_t *p_max_length; // [xsp+30h] [xbp-120h]
  BattleResultComponent_resultData_array **m_Items; // [xsp+38h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v569; // [xsp+40h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v570; // [xsp+60h] [xbp-F0h]
  __int128 v571; // [xsp+80h] [xbp-D0h]
  char v572[4]; // [xsp+9Ch] [xbp-B4h] BYREF
  UserSuperBossEntity_o *v573; // [xsp+A0h] [xbp-B0h] BYREF
  Il2CppObject *v574; // [xsp+A8h] [xbp-A8h] BYREF
  Il2CppObject *v575; // [xsp+B0h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *v576; // [xsp+B8h] [xbp-98h] BYREF
  int QuestId_k__BackingField; // [xsp+C4h] [xbp-8Ch] BYREF
  Il2CppObject *v578; // [xsp+C8h] [xbp-88h] BYREF
  Il2CppObject *v579; // [xsp+D0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+D8h] [xbp-78h] BYREF
  int v581; // [xsp+E4h] [xbp-6Ch] BYREF
  QuestPhaseEntity_o *v582; // [xsp+E8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v583; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v584; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v585; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v586; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v587; // 0:x0.16

  v4 = result;
  if ( (byte_4BD9ABB & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventPointMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMessageMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserSuperBossMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&EventHarvestGrowthInfo_TypeInfo);
    sub_1C21E38(&EventSaveData_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_1C21E38(&QuestClearHeroineInfo_TypeInfo);
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C21E38(&Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__704_0__);
    sub_1C21E38(&TerminalPramsManager___c_TypeInfo);
    sub_1C21E38(&UserServantCollectionEntity___TypeInfo);
    sub_1C21E38(&UserServantCollectionEntity_TypeInfo);
    sub_1C21E38(&UserServantEntity_TypeInfo);
    sub_1C21E38(&UserSuperBossEntity___TypeInfo);
    sub_1C21E38(&StringLiteral_20229/*"harvestGrowthAfterQuestId"*/);
    sub_1C21E38(&StringLiteral_16991/*"afterActionBk"*/);
    sub_1C21E38(&StringLiteral_866/*","*/);
    sub_1C21E38(&StringLiteral_20230/*"harvestGrowthBeforeQuestId"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_6775/*"False"*/);
    result = (BattleResultComponent_resultData_array *)sub_1C21E38(&StringLiteral_1212/*"0"*/);
    byte_4BD9ABB = 1;
  }
  v582 = 0LL;
  v581 = 0;
  v579 = 0LL;
  entity = 0LL;
  v578 = 0LL;
  QuestId_k__BackingField = 0;
  v575 = 0LL;
  v576 = 0LL;
  v573 = 0LL;
  v574 = 0LL;
  v572[0] = 0;
  if ( !v4 )
    goto LABEL_1189;
  p_max_length = &v4->max_length;
  if ( !v4->max_length )
    goto LABEL_1190;
  v5 = v4->m_Items[0];
  m_Items = (BattleResultComponent_resultData_array **)v4->m_Items;
  if ( !v5 )
    goto LABEL_1189;
  oldUserSvtCollection = v5->fields.oldUserSvtCollection;
  if ( !oldUserSvtCollection )
    goto LABEL_1189;
  v7 = (_DWORD *)sub_1C21EE0(UserServantCollectionEntity___TypeInfo, oldUserSvtCollection->max_length);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1189;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v14 = (*m_Items)->m_Items[11];
  v565 = isWin;
  resulta = v4;
  v581 = 0;
  if ( !v14 )
    goto LABEL_1189;
  eventEndTitle = (int)v14->fields.eventEndTitle;
  v16 = &qword_4BD6000;
  if ( eventEndTitle >= 1 )
  {
    v17 = (UserServantCollectionMaster_o *)result;
    v18 = 0;
    while ( v18 < eventEndTitle )
    {
      v19 = *((_QWORD *)&v14->fields.eventEndMessage + (int)v18);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !*((_BYTE *)v16 + 4085) )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        *((_BYTE *)v16 + 4085) = 1;
      }
      result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
      }
      if ( !v19 )
        goto LABEL_1189;
      v21 = *(_QWORD *)(v19 + 24);
      v20 = *(_QWORD *)(v19 + 32);
      myDeck = result->m_Items[19]->fields.myDeck;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v583.fields.currentCryptoKey = v21;
      *(_QWORD *)&v583.fields.fakeValue = v20;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                           v583,
                                                           0LL);
      if ( !v17 )
        goto LABEL_1189;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, (int64_t)myDeck, (int32_t)result, 0LL);
      v24 = (UserServantCollectionEntity_o *)sub_1C22084(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor_41440544(v24, EntityDefinitely, 0LL);
      v16 = &qword_4BD6000;
      if ( !v7 )
        goto LABEL_1189;
      if ( v24 )
      {
        result = (BattleResultComponent_resultData_array *)sub_1C21F74(v24, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !result )
          goto LABEL_1191;
      }
      if ( v18 >= v7[6] )
        break;
      v31 = &v7[2 * v18];
      *((_QWORD *)v31 + 4) = v24;
      v32 = (PartyOrganizationUtility_o *)(v31 + 8);
      sub_1C21DDC(v32, (int64_t)v24, v25, v26, v27, v28, v29, v30);
      if ( v18 >= v7[6] )
        break;
      klass = v32->klass;
      *(_OWORD *)&v570.fields.currentCryptoKey = *(_OWORD *)(v19 + 84);
      if ( !klass )
        goto LABEL_1189;
      *(_OWORD *)((char *)&klass->_1.declaringType + 4) = *(_OWORD *)&v570.fields.currentCryptoKey;
      if ( v18 >= v7[6] )
        break;
      v34 = v32->klass;
      v571 = *(_OWORD *)(v19 + 100);
      if ( !v34 )
        goto LABEL_1189;
      *(_OWORD *)((char *)&v34->_1.generic_class + 4) = v571;
      if ( v18 >= v7[6] )
        break;
      if ( !v32->klass )
        goto LABEL_1189;
      ++v18;
      HIDWORD(v32->klass->_1.interopData) = *(_DWORD *)(v19 + 116);
      v581 = v18;
      eventEndTitle = (int)v14->fields.eventEndTitle;
      if ( (int)v18 >= eventEndTitle )
        goto LABEL_35;
    }
LABEL_1190:
    sub_1C2209C(result, isWin);
  }
LABEL_35:
  v35 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestClearHeroineInfo = (PartyOrganizationUtility_o *)&v35->static_fields->mQuestClearHeroineInfo;
  p_mQuestClearHeroineInfo->klass = 0LL;
  sub_1C21DDC(p_mQuestClearHeroineInfo, 0LL, v8, v9, v10, v11, v12, v13);
  v37 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v38 = (*m_Items)->m_Items[5];
  if ( v38 )
  {
    v39 = v38->fields.eventEndTitle;
    if ( v39 )
    {
      if ( !(_DWORD)v39 )
        goto LABEL_1190;
      eventEndMessage = v38->fields.eventEndMessage;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1189;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !eventEndMessage )
        goto LABEL_1189;
      v41 = *(_OWORD *)&eventEndMessage[1].monitor;
      v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)result;
      *(_OWORD *)&v570.fields.currentCryptoKey = *(_OWORD *)&eventEndMessage->fields._stringLength;
      *(_OWORD *)&v570.fields.fakeValue = v41;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v569 = v570;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(
                                                           &v569,
                                                           0LL);
      if ( !v42 )
        goto LABEL_1189;
      v43 = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                     v42,
                                     (int64_t)result,
                                     (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v44 = sub_1C22084(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_41466192((UserServantEntity_o *)v44, v43, 0LL);
      v571 = *(_OWORD *)&eventEndMessage[4].klass;
      if ( !v44 )
        goto LABEL_1189;
      *(_OWORD *)(v44 + 96) = v571;
      *(_DWORD *)(v44 + 256) = eventEndMessage[10].fields._stringLength;
      *(_QWORD *)(v44 + 292) = *(System_String_c **)((char *)&eventEndMessage[12].klass + 4);
      monitor = eventEndMessage[5].monitor;
      p_monitor = &eventEndMessage[5].monitor;
      v46 = monitor;
      v48 = p_monitor[1];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v584.fields.currentCryptoKey = v46;
      *(_QWORD *)&v584.fields.fakeValue = v48;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v584, 0LL) >= 1 )
        *(_OWORD *)(v44 + 128) = *(_OWORD *)p_monitor;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1189;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)result,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      v50 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v50 = NetworkManager_TypeInfo;
      }
      v52 = *(_QWORD *)(v44 + 80);
      v51 = *(_QWORD *)(v44 + 88);
      userIdNumber = v50->static_fields->userIdNumber;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v585.fields.currentCryptoKey = v52;
      *(_QWORD *)&v585.fields.fakeValue = v51;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                           v585,
                                                           0LL);
      if ( !MasterData_object )
        goto LABEL_1189;
      result = (BattleResultComponent_resultData_array *)UserServantCollectionMaster__GetEntityDefinitely(
                                                           (UserServantCollectionMaster_o *)MasterData_object,
                                                           userIdNumber,
                                                           (int32_t)result,
                                                           0LL);
      v581 = 0;
      if ( !v7 )
        goto LABEL_1189;
      v54 = v7[6];
      v55 = (UserServantCollectionEntity_o *)result;
      if ( v54 >= 1 )
      {
        v56 = 0;
        while ( v56 < (unsigned int)v54 )
        {
          v57 = *(UserServantCollectionEntity_o **)&v7[2 * v56 + 8];
          if ( !v57 )
            goto LABEL_1189;
          userId = (struct DeckData_o *)v57->fields.userId;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BD6FF5 )
          {
            sub_1C21E38(&NetworkManager_TypeInfo);
            byte_4BD6FF5 = 1;
          }
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          }
          if ( userId == result->m_Items[19]->fields.myDeck )
          {
            SvtId = UserServantCollectionEntity__getSvtId(v57, 0LL);
            v60 = *(_QWORD *)(v44 + 80);
            v61 = *(_QWORD *)(v44 + 88);
            v62 = SvtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v586.fields.currentCryptoKey = v60;
            *(_QWORD *)&v586.fields.fakeValue = v61;
            result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                                 v586,
                                                                 0LL);
            if ( v62 == (_DWORD)result )
              goto LABEL_79;
          }
          v56 = v581 + 1;
          v581 = v56;
          v54 = v7[6];
          if ( v56 >= v54 )
            goto LABEL_78;
        }
        goto LABEL_1190;
      }
LABEL_78:
      v57 = 0LL;
LABEL_79:
      v63 = sub_1C22084(QuestClearHeroineInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v63, 0LL);
      if ( !v63 )
        goto LABEL_1189;
      *(_QWORD *)(v63 + 16) = v44;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v63 + 16), v44, v64, v65, v66, v67, v68, v69);
      result = (BattleResultComponent_resultData_array *)UserServantEntity__getLimitCount(
                                                           (UserServantEntity_o *)v44,
                                                           0LL);
      if ( !v43 )
        goto LABEL_1189;
      v76 = (_DWORD)result != UserServantEntity__getLimitCount(v43, 0LL);
      *(_BYTE *)(v63 + 25) = 0;
      *(_DWORD *)(v63 + 28) = 0;
      *(_DWORD *)(v63 + 32) = 0;
      *(_BYTE *)(v63 + 40) = 0;
      *(_DWORD *)(v63 + 36) = -1;
      *(_BYTE *)(v63 + 24) = v76;
      *(_BYTE *)(v63 + 41) = *(_DWORD *)(v44 + 296) != v43->fields.exceedCount;
      if ( v57 )
      {
        result = (BattleResultComponent_resultData_array *)UserServantCollectionEntity__getFriendShipRank(v57, 0LL);
        if ( !v55 )
          goto LABEL_1189;
        if ( (_DWORD)result != UserServantCollectionEntity__getFriendShipRank(v55, 0LL) )
          *(_DWORD *)(v63 + 36) = UserServantCollectionEntity__getFriendShipRank(v57, 0LL);
        if ( v57->fields.friendshipExceedCount != v55->fields.friendshipExceedCount )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
          v79 = *(_QWORD *)(v44 + 80);
          v78 = *(_QWORD *)(v44 + 88);
          v80 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v587.fields.currentCryptoKey = v79;
          *(_QWORD *)&v587.fields.fakeValue = v78;
          result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                               v587,
                                                               0LL);
          if ( !v80 )
            goto LABEL_1189;
          result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                               v80,
                                                               &entity,
                                                               (int32_t)result,
                                                               (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_1189;
            klass_high = HIDWORD(entity[6].klass);
            friendshipExceedCount = v57->fields.friendshipExceedCount;
            *(_BYTE *)(v63 + 40) = 1;
            *(_DWORD *)(v63 + 36) = friendshipExceedCount + klass_high;
          }
        }
      }
      v83 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v83 = TerminalPramsManager_TypeInfo;
      }
      v16 = &qword_4BD6000;
      v84 = (PartyOrganizationUtility_o *)&v83->static_fields->mQuestClearHeroineInfo;
      v84->klass = (PartyOrganizationUtility_c *)v63;
      sub_1C21DDC(v84, v63, v70, v71, v72, v73, v74, v75);
      v37 = *(_QWORD *)p_max_length;
    }
  }
  if ( !(_DWORD)v37 )
    goto LABEL_1190;
  v85 = (BattleResultComponent_resultData_o *)*m_Items;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetBattleResultCampaignBonus(v85, (const MethodInfo *)isWin);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v86 = (*m_Items)->m_Items[9];
  if ( v86 && (v87 = v86->fields.eventEndTitle) != 0LL )
  {
    if ( !(_DWORD)v87 )
      goto LABEL_1190;
    v88 = (UserQuestEntity_o *)v86->fields.eventEndMessage;
  }
  else
  {
    v88 = 0LL;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD92DC )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD92DC = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE6(result->m_Items[19]->fields.oldUserGame) = v88 != 0LL;
  if ( !byte_4BD92DB )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4BD92DB = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE5(result->m_Items[19]->fields.oldUserGame) = 0;
  if ( !byte_4BD9403 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4BD9403 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE1(result->m_Items[19]->fields.resultDamageRewardInfos) = 0;
  if ( !byte_4BD92DA )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4BD92DA = 1;
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
    if ( !byte_4BD7264 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7264 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( result->m_Items[19]->fields.eventId )
    {
      if ( !v88 )
        goto LABEL_1189;
    }
    else
    {
      if ( !v88 )
        goto LABEL_1189;
      questId = v88->fields.questId;
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4BD909A )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD909A = 1;
      }
      v90 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v90 = TerminalPramsManager_TypeInfo;
      }
      v90->static_fields->_QuestId_k__BackingField = questId;
      QuestPhase = UserQuestEntity__getQuestPhase(v88, 0LL);
      if ( !byte_4BD909E )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD909E = 1;
      }
      v92 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v92 = TerminalPramsManager_TypeInfo;
      }
      v92->static_fields->_PhaseCnt_k__BackingField = QuestPhase;
    }
    v93 = v88->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1189;
    v94 = DataManager__GetMasterData_object_(
            (DataManager_o *)result,
            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !*((_BYTE *)v16 + 4085) )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      *((_BYTE *)v16 + 4085) = 1;
    }
    result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    }
    if ( !v94 )
      goto LABEL_1189;
    v95 = UserQuestMaster__GetEntity((UserQuestMaster_o *)v94, (int64_t)result->m_Items[19]->fields.myDeck, v93, 0LL);
    if ( v95 )
    {
      v96 = v95;
      v97 = UserQuestEntity__getQuestPhase(v95, 0LL);
      if ( UserQuestEntity__getClearNum(v88, 0LL) || UserQuestEntity__getClearNum(v96, 0LL) != 1 )
        v98 = UserQuestEntity__IsResetStatus(v88, 0LL) && !UserQuestEntity__IsResetStatus(v96, 0LL);
      else
        v98 = 1;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD92DB )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD92DB = 1;
      }
      v99 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v99 = TerminalPramsManager_TypeInfo;
      }
      v99->static_fields->_IsQuestClear_k__BackingField = v98;
      if ( !byte_4BD9AEC )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v99 = TerminalPramsManager_TypeInfo;
        byte_4BD9AEC = 1;
      }
      if ( !v99->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v99);
        v99 = TerminalPramsManager_TypeInfo;
      }
      v99->static_fields->_EventUIEffectClearQuestId_k__BackingField = v93;
      if ( !byte_4BD9AE9 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v99 = TerminalPramsManager_TypeInfo;
        byte_4BD9AE9 = 1;
      }
      if ( !v99->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v99);
        v99 = TerminalPramsManager_TypeInfo;
      }
      v99->static_fields->_MapModelClearQuestId_k__BackingField = v93;
      if ( !byte_4BD9AEA )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v99 = TerminalPramsManager_TypeInfo;
        byte_4BD9AEA = 1;
      }
      if ( !v99->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v99);
        v99 = TerminalPramsManager_TypeInfo;
      }
      v99->static_fields->_MapModelClearPhaseCount_k__BackingField = v97;
      TerminalPramsManager__MapModelClearQuestInfo_SaveData((const MethodInfo *)v99);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !result )
        goto LABEL_1189;
      AdManager__TrackEvent((AdManager_o *)result, 4, 1, v93, v97, 0LL, 0LL);
      TerminalPramsManager__SendClearQuestToAdManager(v93, v97, v100);
    }
    else
    {
      v97 = 0;
    }
    v101 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v101);
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1189;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
    if ( !result )
      goto LABEL_1189;
    ValidMessage = QuestMessageMaster__GetValidMessage((QuestMessageMaster_o *)result, v93, v97, 3, 0LL);
    v104 = TerminalPramsManager_TypeInfo;
    if ( ValidMessage )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD82DE )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD82DE = 1;
      }
      v104 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v104 = TerminalPramsManager_TypeInfo;
      }
      v104->static_fields->_IsDispOnly_k__BackingField = 1;
    }
    if ( !v104->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v104);
    if ( !byte_4BD9AF9 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9AF9 = 1;
    }
    v105 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v105 = TerminalPramsManager_TypeInfo;
    }
    if ( v105->static_fields->_QuestReleaseFocusQuestId_k__BackingField >= 1 )
    {
      if ( !v105->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v105);
      if ( !byte_4BD9AF9 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9AF9 = 1;
      }
      v106 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v106 = TerminalPramsManager_TypeInfo;
      }
      TerminalPramsManager__SetQuestReleasedFocusState(
        v106->static_fields->_QuestReleaseFocusQuestId_k__BackingField,
        1,
        v103);
      TerminalPramsManager__SaveQuestReleasedFocusState(v107);
      if ( !byte_4BD9680 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9680 = 1;
      }
      v105 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v105 = TerminalPramsManager_TypeInfo;
      }
      v105->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
    }
    if ( !v105->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v105);
    if ( !byte_4BD981F )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD981F = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(result->m_Items[19]->fields.eventPointWinReward) = v93;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  v108 = &byte_4BD9000;
  if ( !byte_4BD92DD )
  {
    result = (BattleResultComponent_resultData_array *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD92DD = 1;
  }
  v109 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v109 = TerminalPramsManager_TypeInfo;
  }
  if ( v109->static_fields->_IsQuestClear_k__BackingField )
  {
    if ( !v88 )
      goto LABEL_1189;
    v110 = v88->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1189;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !result )
      goto LABEL_1189;
    v112 = WarMaster__getByLastQuestId((WarMaster_o *)result, v110, 0LL);
    if ( v112 )
    {
      v113 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v113 = BalanceConfig_TypeInfo;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v113->static_fields->MainInterludeMapReturnWarIds,
             v112->fields.id,
             (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD92DE )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD92DE = 1;
        }
        v114 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v114 = TerminalPramsManager_TypeInfo;
        }
        v112 = 0LL;
        v114->static_fields->_IsWarClear_k__BackingField = 0;
      }
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD92DE )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD92DE = 1;
    }
    v115 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v115 = TerminalPramsManager_TypeInfo;
    }
    v115->static_fields->_IsWarClear_k__BackingField = v112 != 0LL;
    v116 = TerminalPramsManager__CheckIsOrdealCallWarClear(v112, v111);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v116 )
    {
      if ( !byte_4BD92DF )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD92DF = 1;
      }
      v117 = TerminalPramsManager_TypeInfo;
      v108 = &byte_4BD9000;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v117 = TerminalPramsManager_TypeInfo;
      }
      v118 = 1;
    }
    else
    {
      if ( !byte_4BD92DF )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD92DF = 1;
      }
      v117 = TerminalPramsManager_TypeInfo;
      v108 = &byte_4BD9000;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v117 = TerminalPramsManager_TypeInfo;
      }
      v118 = 0;
    }
    v117->static_fields->_IsOrdealCallWarClear_k__BackingField = v118;
    if ( !v117->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v117);
    if ( !byte_4BD92E0 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD92E0 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE3(result->m_Items[19]->fields.oldUserEvent) )
    {
      if ( !v112 )
        goto LABEL_1189;
      if ( !WarEntity__IsEvent(v112, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( !result )
          goto LABEL_1189;
        AdManager__TrackEvent((AdManager_o *)result, 6, 1, v112->fields.id, -1, 0LL, 0LL);
      }
    }
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !result )
      goto LABEL_1189;
    AdManager__TrackEvent((AdManager_o *)result, 5, 1, v110, -1, 0LL, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SendOpenedQuestIdToAdManager(v110, v119);
    if ( !byte_4BD92E0 )
    {
      result = (BattleResultComponent_resultData_array *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD92E0 = 1;
    }
    v109 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v109 = TerminalPramsManager_TypeInfo;
    }
    if ( v109->static_fields->_IsWarClear_k__BackingField )
    {
      if ( !v112 )
        goto LABEL_1189;
      HasFlag = WarEntity__HasFlag(v112, 128, 0LL);
      v109 = TerminalPramsManager_TypeInfo;
      if ( HasFlag )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD9672 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD9672 = 1;
        }
        v109 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v109 = TerminalPramsManager_TypeInfo;
        }
        v109->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
        if ( !byte_4BD9403 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          v109 = TerminalPramsManager_TypeInfo;
          byte_4BD9403 = 1;
        }
        if ( !v109->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v109);
          v109 = TerminalPramsManager_TypeInfo;
        }
        v109->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
      }
    }
  }
  if ( !v109->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v109);
  TerminalPramsManager__SetQuestRewardInfo(resulta, (const MethodInfo *)isWin);
  if ( !resulta->max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->panelEventPoint = HIDWORD((*m_Items)->m_Items[2]);
  static_fields->mResultEventPanelRewardInfos = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->mResultEventPanelRewardInfos,
    0LL,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v134 = (int64_t)(*m_Items)->m_Items[19];
  if ( v134 && *(_QWORD *)(v134 + 24) )
  {
    v135 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v135 = TerminalPramsManager_TypeInfo;
    }
    p_mResultEventPanelRewardInfos = (PartyOrganizationUtility_o *)&v135->static_fields->mResultEventPanelRewardInfos;
    p_mResultEventPanelRewardInfos->klass = (PartyOrganizationUtility_c *)v134;
    sub_1C21DDC(p_mResultEventPanelRewardInfos, v134, v128, v129, v130, v131, v132, v133);
  }
  v137 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v137 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = (PartyOrganizationUtility_o *)&v137->static_fields->eventConquestInfos;
  p_eventConquestInfos->klass = 0LL;
  sub_1C21DDC(p_eventConquestInfos, 0LL, v128, v129, v130, v131, v132, v133);
  TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items || !result )
    goto LABEL_1189;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v579,
                                                       HIDWORD((*m_Items)->bounds),
                                                       (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v145 = (int64_t)(*m_Items)->m_Items[43];
  if ( v145 && *(_QWORD *)(v145 + 24) )
  {
    v146 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v146 = TerminalPramsManager_TypeInfo;
    }
    v147 = (PartyOrganizationUtility_o *)&v146->static_fields->eventConquestInfos;
    v147->klass = (PartyOrganizationUtility_c *)v145;
    sub_1C21DDC(v147, v145, v139, v140, v141, v142, v143, v144);
    if ( v579 )
      Farm = EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v579, 0LL);
    else
      Farm = 0;
    v149 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v149 = TerminalPramsManager_TypeInfo;
    }
    v149->static_fields->eventConquestInfoDisp = !Farm;
  }
  result = (BattleResultComponent_resultData_array *)v579;
  if ( v579 )
  {
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v579, 0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v108[733] )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v108[733] = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
      {
        v150 = 1;
      }
      else
      {
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_4BD92DA )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD92DA = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        v150 = BYTE6(result->m_Items[19]->fields.oldUserGame);
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      BYTE1(result->m_Items[19][1].fields.eventPointWinReward) = v150;
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
    if ( !byte_4BD9902 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9902 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(result->m_Items[19][1].klass) = 1;
    if ( !v108[733] )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      v108[733] = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      if ( !v88 )
        goto LABEL_1189;
      v151 = v88->fields.questId;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1189;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !result )
        goto LABEL_1189;
      v152 = WarMaster__getByLastQuestId((WarMaster_o *)result, v151, 0LL);
      if ( v152 )
      {
        id = v152->fields.id;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD9903 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD9903 = 1;
        }
        v154 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v154 = TerminalPramsManager_TypeInfo;
        }
        v154->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = id;
      }
    }
  }
  v155 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v155 = TerminalPramsManager_TypeInfo;
  }
  *(_QWORD *)&v155->static_fields->clearLastBattleRaidId = -1LL;
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1189;
  v156 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1189;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items || !result )
    goto LABEL_1189;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)result,
          &v578,
          HIDWORD((*m_Items)->bounds),
          (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_621;
  result = (BattleResultComponent_resultData_array *)v578;
  if ( !v578 )
    goto LABEL_1189;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPoint((EventDetailEntity_o *)v578, 0LL);
  v169 = 0LL;
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !*p_max_length )
      goto LABEL_1190;
    if ( !*m_Items )
      goto LABEL_1189;
    v169 = (int64_t)(*m_Items)->m_Items[10];
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9AFA )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AFA = 1;
  }
  v170 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v170 = TerminalPramsManager_TypeInfo;
  }
  p_OldUserEventPoint_k__BackingField = (PartyOrganizationUtility_o *)&v170->static_fields->_OldUserEventPoint_k__BackingField;
  p_OldUserEventPoint_k__BackingField->klass = (PartyOrganizationUtility_c *)v169;
  sub_1C21DDC(p_OldUserEventPoint_k__BackingField, v169, v163, v164, v165, v166, v167, v168);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items || !v156 )
    goto LABEL_1189;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidGorupMax(
                                                       (EventRaidMaster_o *)v156,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0LL);
  if ( (int)result >= 1 )
  {
    if ( !*p_max_length )
      goto LABEL_1190;
    if ( !*m_Items )
      goto LABEL_1189;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                         (EventRaidMaster_o *)v156,
                                                         HIDWORD((*m_Items)->bounds),
                                                         0LL);
    v581 = 0;
    if ( !result )
      goto LABEL_1189;
    max_length = result->max_length;
    v173 = result;
    if ( max_length < 1 )
      goto LABEL_621;
    v174 = 0;
    while ( 1 )
    {
      if ( v174 >= (unsigned int)max_length )
        goto LABEL_1190;
      v175 = &v173->obj.klass + v174;
      v176 = v175[4];
      if ( !v176 )
        goto LABEL_1189;
      result = (BattleResultComponent_resultData_array *)EventRaidEntity__IsJumbleSingleRaid(
                                                           (EventRaidEntity_o *)v175[4],
                                                           0LL);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !*p_max_length )
          goto LABEL_1190;
        if ( !*m_Items )
          goto LABEL_1189;
        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                 (EventRaidMaster_o *)v156,
                                 HIDWORD((*m_Items)->bounds),
                                 (int32_t)v176->_1.namespaze,
                                 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD7264 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD7264 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( RaidGroupDeadQuestId == result->m_Items[19]->fields.eventId )
        {
          result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
                                                           (EventRaidMaster_o *)v156,
                                                           HIDWORD((*m_Items)->bounds),
                                                           HIDWORD(v176->_1.name),
                                                           0LL);
      QuestId_k__BackingField = 0;
      if ( !result )
        goto LABEL_1189;
      v178 = result->max_length;
      v179 = result;
      if ( v178 >= 1 )
      {
        v180 = 0;
        while ( 1 )
        {
          if ( v180 >= (unsigned int)v178 )
            goto LABEL_1190;
          v181 = *((_DWORD *)v179->m_Items + v180);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BD7264 )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            byte_4BD7264 = 1;
          }
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          }
          v182 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
          if ( v181 == v182->_QuestId_k__BackingField )
            break;
          v180 = QuestId_k__BackingField + 1;
          QuestId_k__BackingField = v180;
          v178 = v179->max_length;
          if ( v180 >= v178 )
            goto LABEL_427;
        }
        name_high = HIDWORD(v176->_1.name);
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          v182 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v182->clearBattleRaidId = name_high;
      }
LABEL_427:
      v174 = v581 + 1;
      v581 = v174;
      max_length = v173->max_length;
      if ( v174 >= max_length )
        goto LABEL_621;
    }
    v194 = TerminalPramsManager_TypeInfo;
    v195 = HIDWORD(v176->_1.name);
    goto LABEL_476;
  }
  result = (BattleResultComponent_resultData_array *)v578;
  if ( !v578 )
    goto LABEL_1189;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__isRaidDefeatCount(
                                                       (EventDetailEntity_o *)v578,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_array *)v578;
    if ( !v578 )
      goto LABEL_1189;
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventActivityPoint(
                                                         (EventDetailEntity_o *)v578,
                                                         0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !*p_max_length )
        goto LABEL_1190;
      if ( !*m_Items )
        goto LABEL_1189;
      v190 = (int32_t)(*m_Items)->m_Items[42];
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD7368 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD7368 = 1;
      }
      v191 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v191 = TerminalPramsManager_TypeInfo;
      }
      v191->static_fields->_EventActivityPointEffectState_k__BackingField = v190;
    }
    else
    {
      result = (BattleResultComponent_resultData_array *)v578;
      if ( !v578 )
        goto LABEL_1189;
      if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v578, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD9AFB )
        {
          result = (BattleResultComponent_resultData_array *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD9AFB = 1;
        }
        v192 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v192 = TerminalPramsManager_TypeInfo;
        }
        if ( v192->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField )
        {
          v193 = 0;
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
          v192 = TerminalPramsManager_TypeInfo;
          v193 = IsUserEventStatus;
        }
        if ( !v192->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v192);
        if ( !byte_4BD9827 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD9827 = 1;
        }
        v208 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v208 = TerminalPramsManager_TypeInfo;
        }
        v208->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = v193;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)v578;
        if ( !v578 )
          goto LABEL_1189;
        if ( !EventDetailEntity__IsEventHappiness((EventDetailEntity_o *)v578, 0LL) )
          goto LABEL_503;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v197 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD7264 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD7264 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        eventId = result->m_Items[19]->fields.eventId;
        if ( !byte_4BD7263 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          byte_4BD7263 = 1;
        }
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( !v197 )
          goto LABEL_1189;
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)v197,
               &v576,
               eventId,
               LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
               0LL) )
        {
          result = (BattleResultComponent_resultData_array *)v576;
          if ( !v576 )
            goto LABEL_1189;
          v199 = QuestPhaseEntity__PlayHappinessCounterEffect(v576, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BD965B )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            byte_4BD965B = 1;
          }
          v200 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v200 = TerminalPramsManager_TypeInfo;
          }
          v200->static_fields->_PlayHappinessCounterEffect_k__BackingField = v199;
        }
        else
        {
LABEL_503:
          result = (BattleResultComponent_resultData_array *)v578;
          if ( !v578 )
            goto LABEL_1189;
          result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPanel(
                                                               (EventDetailEntity_o *)v578,
                                                               0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !*p_max_length )
              goto LABEL_1190;
            v201 = &byte_4BD9000;
            if ( !*m_Items )
              goto LABEL_1189;
            v202 = (*m_Items)->m_Items[10];
            v581 = 0;
            if ( !v202 )
              goto LABEL_1189;
            v203 = (int)v202->fields.eventEndTitle;
            if ( v203 >= 1 )
            {
              v204 = 0;
              while ( 1 )
              {
                if ( v203 == v204 )
                  goto LABEL_1190;
                if ( !v578 )
                  goto LABEL_1189;
                v205 = *((_QWORD *)&v202->fields.eventEndMessage + v204);
                if ( !v205 )
                  goto LABEL_1189;
                if ( LODWORD(v578[1].klass) == *(_DWORD *)(v205 + 24) )
                  break;
                v581 = ++v204;
                if ( v203 == v204 )
                  goto LABEL_602;
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4BD918D )
              {
                sub_1C21E38(&TerminalPramsManager_TypeInfo);
                byte_4BD918D = 1;
              }
              v210 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v210 = TerminalPramsManager_TypeInfo;
              }
              if ( !v210->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
              {
                v211 = (Il2CppObject *)sub_1C22084(EventSaveData_TypeInfo);
                System_Object___ctor(v211, 0LL);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4BD918E )
                {
                  sub_1C21E38(&TerminalPramsManager_TypeInfo);
                  byte_4BD918E = 1;
                }
                v218 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v218 = TerminalPramsManager_TypeInfo;
                }
                p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v218->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
                p_BeforeEventSubmarineSaveData_k__BackingField->klass = (PartyOrganizationUtility_c *)v211;
                sub_1C21DDC(
                  p_BeforeEventSubmarineSaveData_k__BackingField,
                  (int64_t)v211,
                  v212,
                  v213,
                  v214,
                  v215,
                  v216,
                  v217);
                v210 = TerminalPramsManager_TypeInfo;
              }
              if ( !v210->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v210);
              if ( !byte_4BD918D )
              {
                sub_1C21E38(&TerminalPramsManager_TypeInfo);
                byte_4BD918D = 1;
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
              ultimateGetQpText->fields._stringLength = *(_DWORD *)(v205 + 24);
              if ( !byte_4BD918D )
              {
                sub_1C21E38(&TerminalPramsManager_TypeInfo);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
                byte_4BD918D = 1;
              }
              if ( !LODWORD(result->m_Items[24]) )
              {
                j_il2cpp_runtime_class_init_0(result);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              v221 = result->m_Items[19]->fields.ultimateGetQpText;
              if ( !v221 )
                goto LABEL_1189;
              result = (BattleResultComponent_resultData_array *)v221[1].klass;
              if ( result
                && (result = (BattleResultComponent_resultData_array *)System_String__Split(
                                                                         (System_String_o *)result,
                                                                         0x2Cu,
                                                                         0,
                                                                         0LL)) != 0LL )
              {
                v222 = result->max_length;
                v223 = (System_String_o **)&result->m_Items[1];
                if ( v222 <= 1 )
                  v223 = (System_String_o **)&StringLiteral_1212/*"0"*/;
                v224 = *v223;
                v225 = v222 <= 2 ? (System_String_o **)&StringLiteral_1212/*"0"*/ : (System_String_o **)&result->m_Items[2];
                v226 = *v225;
                v227 = v222 <= 3 ? &StringLiteral_6775/*"False"*/ : (void **)&result->m_Items[3];
              }
              else
              {
                v226 = (System_String_o *)StringLiteral_1212/*"0"*/;
                v227 = &StringLiteral_6775/*"False"*/;
                v224 = (System_String_o *)StringLiteral_1212/*"0"*/;
              }
              if ( !v578 )
                goto LABEL_1189;
              v228 = (int32_t)v578[1].klass;
              isLastGoalPlayed = (System_String_o *)*v227;
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
                                                                   v228,
                                                                   0LL);
              v229 = (System_Collections_Generic_List_object__o *)result;
              v230 = TerminalPramsManager___c_TypeInfo;
              if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
                v230 = TerminalPramsManager___c_TypeInfo;
              }
              _9__704_0 = (System_Predicate_object__o *)v230->static_fields->__9__704_0;
              if ( !_9__704_0 )
              {
                if ( !v230->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v230);
                  v230 = TerminalPramsManager___c_TypeInfo;
                }
                v232 = (Il2CppObject *)v230->static_fields->__9;
                _9__704_0 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_QuestReleaseEntity__TypeInfo);
                System_Predicate_object____ctor(
                  _9__704_0,
                  v232,
                  Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__704_0__,
                  0LL);
                v233 = TerminalPramsManager___c_TypeInfo->static_fields;
                v233->__9__704_0 = (struct System_Predicate_QuestReleaseEntity__o *)_9__704_0;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)&v233->__9__704_0,
                  (int64_t)_9__704_0,
                  v234,
                  v235,
                  v236,
                  v237,
                  v238,
                  v239);
              }
              if ( !v229 )
                goto LABEL_1189;
              if ( System_Collections_Generic_List_object___Find(
                     v229,
                     (System_Predicate_T__o *)_9__704_0,
                     (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4BD7264 )
                {
                  sub_1C21E38(&TerminalPramsManager_TypeInfo);
                  byte_4BD7264 = 1;
                }
                v240 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v240 = TerminalPramsManager_TypeInfo;
                }
                QuestId_k__BackingField = v240->static_fields->_QuestId_k__BackingField;
                v224 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4BD918D )
              {
                sub_1C21E38(&TerminalPramsManager_TypeInfo);
                byte_4BD918D = 1;
              }
              v241 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v241 = TerminalPramsManager_TypeInfo;
              }
              BeforeEventSubmarineSaveData_k__BackingField = v241->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
              v243 = System_Int64__ToString(v205 + 32, 0LL);
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_38323224(
                                                                   v243,
                                                                   v224,
                                                                   v226,
                                                                   isLastGoalPlayed,
                                                                   0LL);
              if ( !BeforeEventSubmarineSaveData_k__BackingField )
                goto LABEL_1189;
              BeforeEventSubmarineSaveData_k__BackingField->fields.value = (struct System_String_o *)result;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&BeforeEventSubmarineSaveData_k__BackingField->fields.value,
                (int64_t)result,
                v244,
                v245,
                v246,
                v247,
                v248,
                v249);
              v201 = &byte_4BD9000;
            }
LABEL_602:
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4BD7264 )
            {
              sub_1C21E38(&TerminalPramsManager_TypeInfo);
              byte_4BD7264 = 1;
            }
            v250 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v250 = TerminalPramsManager_TypeInfo;
            }
            v251 = v250->static_fields->_QuestId_k__BackingField;
            if ( !byte_4BD7263 )
            {
              sub_1C21E38(&TerminalPramsManager_TypeInfo);
              v250 = TerminalPramsManager_TypeInfo;
              byte_4BD7263 = 1;
            }
            if ( !v250->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v250);
              v250 = TerminalPramsManager_TypeInfo;
            }
            PhaseCnt_k__BackingField = v250->static_fields->_PhaseCnt_k__BackingField;
            if ( !v201[733] )
            {
              sub_1C21E38(&TerminalPramsManager_TypeInfo);
              v250 = TerminalPramsManager_TypeInfo;
              v201[733] = 1;
            }
            if ( !v250->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v250);
              v250 = TerminalPramsManager_TypeInfo;
            }
            IsQuestClear_k__BackingField = v250->static_fields->_IsQuestClear_k__BackingField;
            if ( !byte_4BD92DA )
            {
              sub_1C21E38(&TerminalPramsManager_TypeInfo);
              v250 = TerminalPramsManager_TypeInfo;
              byte_4BD92DA = 1;
            }
            if ( !v250->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v250);
              v250 = TerminalPramsManager_TypeInfo;
            }
            SubmarineSaveParamsManager__SaveClearQuestInfo(
              v251,
              PhaseCnt_k__BackingField,
              IsQuestClear_k__BackingField,
              v250->static_fields->_IsPhaseClear_k__BackingField,
              0LL);
          }
          else
          {
            result = (BattleResultComponent_resultData_array *)v578;
            if ( !v578 )
              goto LABEL_1189;
            if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)v578, 0LL) )
            {
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4BD9AEF )
              {
                sub_1C21E38(&TerminalPramsManager_TypeInfo);
                byte_4BD9AEF = 1;
              }
              v209 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v209 = TerminalPramsManager_TypeInfo;
              }
              v209->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
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
                                                       (EventRaidMaster_o *)v156,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0LL);
  v581 = 0;
  if ( !result )
    goto LABEL_1189;
  v184 = result->max_length;
  v185 = result;
  if ( v184 >= 1 )
  {
    v186 = 0;
    while ( 1 )
    {
      if ( v186 >= (unsigned int)v184 || !*p_max_length )
        goto LABEL_1190;
      if ( !*m_Items )
        goto LABEL_1189;
      v187 = v185->m_Items[v186];
      if ( !v187 )
        goto LABEL_1189;
      RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                          (EventRaidMaster_o *)v156,
                          HIDWORD((*m_Items)->bounds),
                          v187->fields.eventId,
                          0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD7264 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD7264 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v189 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( RaidDeadQuestId == v189->_QuestId_k__BackingField )
        break;
      v186 = v581 + 1;
      v581 = v186;
      v184 = v185->max_length;
      if ( v186 >= v184 )
        goto LABEL_621;
    }
    v196 = v187->fields.eventId;
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      v189 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v189->clearBattleRaidId = v196;
    result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !result )
      goto LABEL_1189;
    if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)result, RaidDeadQuestId, 0, 0LL) )
    {
      v194 = TerminalPramsManager_TypeInfo;
      v195 = v187->fields.eventId;
LABEL_476:
      if ( !v194->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v194);
        v194 = TerminalPramsManager_TypeInfo;
      }
      v194->static_fields->clearLastBattleRaidId = v195;
    }
  }
LABEL_621:
  v254 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v254 = TerminalPramsManager_TypeInfo;
  }
  v255 = &qword_4BD6000;
  if ( v254->static_fields->clearLastBattleRaidId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v256 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9099 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9099 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v256 )
      goto LABEL_1189;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v256,
           &v575,
           HIDWORD(result->m_Items[19]->klass),
           (const MethodInfo_325BE14 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      result = (BattleResultComponent_resultData_array *)v575;
      if ( !v575 )
        goto LABEL_1189;
      if ( WarEntity__IsFolder((WarEntity_o *)v575, 0LL) )
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
  if ( !byte_4BD9666 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9666 = 1;
  }
  v257 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v257 = TerminalPramsManager_TypeInfo;
  }
  v257->static_fields->_IsWarBoardClear_k__BackingField = 0;
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v257 = TerminalPramsManager_TypeInfo;
    byte_4BD7264 = 1;
  }
  if ( !v257->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v257);
    v257 = TerminalPramsManager_TypeInfo;
  }
  if ( v257->static_fields->_QuestId_k__BackingField >= 1 )
  {
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1189;
    v258 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD7264 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7264 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v258 )
      goto LABEL_1189;
    result = (BattleResultComponent_resultData_array *)QuestMaster__getQuestEntity(
                                                         (QuestMaster_o *)v258,
                                                         result->m_Items[19]->fields.eventId,
                                                         0LL);
    if ( !result )
      goto LABEL_1189;
    v259 = (int)result->m_Items[1];
    if ( !byte_4BD9666 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9666 = 1;
    }
    v257 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v257 = TerminalPramsManager_TypeInfo;
    }
    v257->static_fields->_IsWarBoardClear_k__BackingField = v259 == 7;
  }
  if ( !v257->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v257);
  if ( !byte_4BD9901 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9901 = 1;
  }
  v260 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v260 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeRelease_k__BackingField = (PartyOrganizationUtility_o *)&v260->static_fields->_questClearCostumeRelease_k__BackingField;
  p_questClearCostumeRelease_k__BackingField->klass = 0LL;
  sub_1C21DDC(p_questClearCostumeRelease_k__BackingField, 0LL, v157, v158, v159, v160, v161, v162);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v268 = (*m_Items)->m_Items[22];
  if ( v268 && v268->fields.eventEndTitle )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9657 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9657 = 1;
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
      v269 = (int64_t)(*m_Items)->m_Items[22];
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4BD9901 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9901 = 1;
      }
      v270 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v270 = TerminalPramsManager_TypeInfo;
      }
      v271 = (PartyOrganizationUtility_o *)&v270->static_fields->_questClearCostumeRelease_k__BackingField;
      v271->klass = (PartyOrganizationUtility_c *)v269;
      sub_1C21DDC(v271, v269, v262, v263, v264, v265, v266, v267);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9664 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9664 = 1;
  }
  v272 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v272 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeGet_k__BackingField = (PartyOrganizationUtility_o *)&v272->static_fields->_questClearCostumeGet_k__BackingField;
  p_questClearCostumeGet_k__BackingField->klass = 0LL;
  sub_1C21DDC(p_questClearCostumeGet_k__BackingField, 0LL, v262, v263, v264, v265, v266, v267);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v280 = (int64_t)(*m_Items)->m_Items[23];
  if ( v280 && *(_QWORD *)(v280 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9664 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9664 = 1;
    }
    v281 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v281 = TerminalPramsManager_TypeInfo;
    }
    v282 = (PartyOrganizationUtility_o *)&v281->static_fields->_questClearCostumeGet_k__BackingField;
    v282->klass = (PartyOrganizationUtility_c *)v280;
    sub_1C21DDC(v282, v280, v274, v275, v276, v277, v278, v279);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9AFC )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AFC = 1;
  }
  v283 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v283 = TerminalPramsManager_TypeInfo;
  }
  p_eventPointWinReward_k__BackingField = (PartyOrganizationUtility_o *)&v283->static_fields->_eventPointWinReward_k__BackingField;
  p_eventPointWinReward_k__BackingField->klass = 0LL;
  sub_1C21DDC(p_eventPointWinReward_k__BackingField, 0LL, v274, v275, v276, v277, v278, v279);
  if ( !byte_4BD9AFD )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AFD = 1;
  }
  v291 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v291 = TerminalPramsManager_TypeInfo;
  }
  v291->static_fields->_eventPointWinType_k__BackingField = 0;
  if ( v88 && v578 && HIDWORD(v578[9].klass) == 4 )
  {
    v292 = v88->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1189;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !result )
      goto LABEL_1189;
    v293 = (QuestGroupMaster_o *)result;
    GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)result, v292, 4, 0LL);
    v295 = TerminalPramsManager_TypeInfo;
    v296 = GroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v295 = TerminalPramsManager_TypeInfo;
    }
    v295->static_fields->joinGroupId = v296;
    v297 = QuestGroupMaster__GetGroupId(v293, v292, 3, 0LL);
    if ( !byte_4BD92DD )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD92DD = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    v255 = &qword_4BD6000;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( v297 >= 1 && BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1189;
      v298 = DataManager__GetMasterData_object_(
               (DataManager_o *)result,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1189;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventPointMaster___);
      if ( !*p_max_length )
        goto LABEL_1190;
      if ( !*m_Items || !result )
        goto LABEL_1189;
      result = (BattleResultComponent_resultData_array *)EventPointMaster__GetEntity(
                                                           (EventPointMaster_o *)result,
                                                           v297,
                                                           HIDWORD((*m_Items)->bounds),
                                                           0LL);
      v299 = (EventPointEntity_o *)result;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v299 )
        goto LABEL_1189;
      result = (BattleResultComponent_resultData_array *)EventPointEntity__IsGroupOnGroup1(
                                                           v299,
                                                           TerminalPramsManager_TypeInfo->static_fields->joinGroupId,
                                                           0LL);
      if ( !v298 )
        goto LABEL_1189;
      v300 = QuestReleaseMaster__EventPointWinActionType(
               (QuestReleaseMaster_o *)v298,
               v292,
               (unsigned __int8)result & 1,
               0LL);
      if ( !byte_4BD9AFD )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9AFD = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      v255 = &qword_4BD6000;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(result->m_Items[19]->fields.warClearReward) = v300;
      if ( !byte_4BD9AFE )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        byte_4BD9AFE = 1;
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v301 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( v301->_eventPointWinType_k__BackingField )
      {
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          v301 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v301->joinGroupId = -1;
      }
    }
    if ( !*p_max_length )
      goto LABEL_1190;
    if ( !*m_Items )
      goto LABEL_1189;
    v302 = (*m_Items)->m_Items[20];
    if ( v302 )
    {
      v303 = v302->fields.eventEndTitle;
      if ( v303 )
      {
        if ( !(_DWORD)v303 )
          goto LABEL_1190;
        v304 = (int64_t)v302->fields.eventEndMessage;
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_4BD9AFC )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD9AFC = 1;
        }
        v305 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v305 = TerminalPramsManager_TypeInfo;
        }
        v306 = (PartyOrganizationUtility_o *)&v305->static_fields->_eventPointWinReward_k__BackingField;
        v306->klass = (PartyOrganizationUtility_c *)v304;
        sub_1C21DDC(v306, v304, v285, v286, v287, v288, v289, v290);
      }
    }
  }
  if ( v88 && v578 && HIDWORD(v578[9].klass) == 6 )
  {
    v307 = v88->fields.questId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9AFF )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9AFF = 1;
    }
    v308 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v308 = TerminalPramsManager_TypeInfo;
    }
    v308->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = v307;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9822 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9822 = 1;
  }
  v309 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v309 = TerminalPramsManager_TypeInfo;
  }
  p_eventRaceBoost_k__BackingField = (PartyOrganizationUtility_o *)&v309->static_fields->_eventRaceBoost_k__BackingField;
  p_eventRaceBoost_k__BackingField->klass = 0LL;
  sub_1C21DDC(p_eventRaceBoost_k__BackingField, 0LL, v285, v286, v287, v288, v289, v290);
  v317 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v318 = (int64_t)(*m_Items)->m_Items[21];
  if ( v318 && *(int *)(v318 + 16) >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9822 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9822 = 1;
    }
    v319 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v319 = TerminalPramsManager_TypeInfo;
    }
    v320 = (PartyOrganizationUtility_o *)&v319->static_fields->_eventRaceBoost_k__BackingField;
    v320->klass = (PartyOrganizationUtility_c *)v318;
    sub_1C21DDC(v320, v318, v311, v312, v313, v314, v315, v316);
    if ( !byte_4BD9809 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9809 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v321 = *(_QWORD *)&result->m_Items[19]->fields.followerType;
    if ( !byte_4BD7264 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4BD7264 = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v321 )
      goto LABEL_1189;
    *(_DWORD *)(v321 + 28) = result->m_Items[19]->fields.eventId;
    v317 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v317 )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v322 = (*m_Items)->m_Items[24];
  if ( v322 )
  {
    v323 = v322->fields.eventEndTitle;
    if ( v323 )
    {
      if ( !(_DWORD)v323 )
        goto LABEL_1190;
      v324 = (int64_t)v322->fields.eventEndMessage;
      if ( !v324 )
        goto LABEL_1189;
      if ( *(int *)(v324 + 16) >= 1 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD9B00 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD9B00 = 1;
        }
        v325 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v325 = TerminalPramsManager_TypeInfo;
        }
        p_eventTowerReward_k__BackingField = (PartyOrganizationUtility_o *)&v325->static_fields->_eventTowerReward_k__BackingField;
        p_eventTowerReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v324;
        sub_1C21DDC(p_eventTowerReward_k__BackingField, v324, v311, v312, v313, v314, v315, v316);
        if ( !*p_max_length )
          goto LABEL_1190;
        if ( !*m_Items )
          goto LABEL_1189;
        v333 = (int64_t)(*m_Items)->m_Items[25];
        if ( !byte_4BD9B01 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD9B01 = 1;
        }
        v334 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v334 = TerminalPramsManager_TypeInfo;
        }
        p_resultEventTowerRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v334->static_fields->_resultEventTowerRewardInfo_k__BackingField;
        p_resultEventTowerRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v333;
        sub_1C21DDC(p_resultEventTowerRewardInfo_k__BackingField, v333, v327, v328, v329, v330, v331, v332);
        v317 = *(_QWORD *)p_max_length;
      }
    }
  }
  if ( !(_DWORD)v317 )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v336 = (int64_t)(*m_Items)->m_Items[26];
  if ( v336 && *(_QWORD *)(v336 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD965E )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD965E = 1;
    }
    v337 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v337 = TerminalPramsManager_TypeInfo;
    }
    p_resultBoostItemRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v337->static_fields->_resultBoostItemRewardInfo_k__BackingField;
    p_resultBoostItemRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v336;
    sub_1C21DDC(p_resultBoostItemRewardInfo_k__BackingField, v336, v311, v312, v313, v314, v315, v316);
    v317 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v317 )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v339 = (int64_t)(*m_Items)->m_Items[27];
  if ( v339 && *(_QWORD *)(v339 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD965F )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD965F = 1;
    }
    v340 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v340 = TerminalPramsManager_TypeInfo;
    }
    p_resultEventBoardGameTokenRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v340->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
    p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v339;
    sub_1C21DDC(p_resultEventBoardGameTokenRewardInfo_k__BackingField, v339, v311, v312, v313, v314, v315, v316);
    v317 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v317 )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v342 = (int64_t)(*m_Items)->m_Items[28];
  if ( v342 && *(_QWORD *)(v342 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9669 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9669 = 1;
    }
    v343 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v343 = TerminalPramsManager_TypeInfo;
    }
    p_warClearReward_k__BackingField = (PartyOrganizationUtility_o *)&v343->static_fields->_warClearReward_k__BackingField;
    p_warClearReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v342;
    sub_1C21DDC(p_warClearReward_k__BackingField, v342, v311, v312, v313, v314, v315, v316);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9B02 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9B02 = 1;
  }
  v345 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v345 = TerminalPramsManager_TypeInfo;
  }
  v346 = v345->static_fields;
  v346->_oldSuperBoss_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v346->_oldSuperBoss_k__BackingField,
    0LL,
    v311,
    v312,
    v313,
    v314,
    v315,
    v316);
  if ( !byte_4BD9B03 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9B03 = 1;
  }
  v353 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v353 = TerminalPramsManager_TypeInfo;
  }
  v354 = v353->static_fields;
  v354->_oldPersonalBoss_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v354->_oldPersonalBoss_k__BackingField,
    0LL,
    v347,
    v348,
    v349,
    v350,
    v351,
    v352);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
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
  result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !result )
    goto LABEL_1189;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)result, WarID_ByQuestID, 0LL);
  if ( WarEntityByWarID )
    v358 = WarEntityByWarID->fields.eventId;
  else
    v358 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !result )
    goto LABEL_1189;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v574,
                                                       v358,
                                                       (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( v565 )
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
    v365 = *(_QWORD *)p_max_length;
    if ( !(unsigned int)*(_QWORD *)p_max_length )
      goto LABEL_1190;
    if ( !*m_Items )
      goto LABEL_1189;
    if ( (*m_Items)->m_Items[41] )
    {
      result = (BattleResultComponent_resultData_array *)v574;
      if ( v574
        && (result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsPersonalBoss(
                                                                 (EventDetailEntity_o *)v574,
                                                                 0LL),
            v365 = *(_QWORD *)p_max_length,
            ((unsigned __int8)result & 1) != 0) )
      {
        if ( !(_DWORD)v365 )
          goto LABEL_1190;
        if ( !*m_Items )
          goto LABEL_1189;
        v366 = (int64_t)(*m_Items)->m_Items[41];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD9B03 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD9B03 = 1;
        }
        v367 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v367 = TerminalPramsManager_TypeInfo;
        }
        v368 = v367->static_fields;
        v368->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v366;
        p_oldPersonalBoss_k__BackingField = (PartyOrganizationUtility_o *)&v368->_oldPersonalBoss_k__BackingField;
      }
      else
      {
        if ( !(_DWORD)v365 )
          goto LABEL_1190;
        if ( !*m_Items )
          goto LABEL_1189;
        v366 = (int64_t)(*m_Items)->m_Items[41];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD9B02 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD9B02 = 1;
        }
        v370 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v370 = TerminalPramsManager_TypeInfo;
        }
        v371 = v370->static_fields;
        v371->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v366;
        p_oldPersonalBoss_k__BackingField = (PartyOrganizationUtility_o *)&v371->_oldSuperBoss_k__BackingField;
      }
      sub_1C21DDC(p_oldPersonalBoss_k__BackingField, v366, v359, v360, v361, v362, v363, v364);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9B04 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9B04 = 1;
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
  if ( !byte_4BD9B04 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9B04 = 1;
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
    v373 = 1;
  }
  else
  {
LABEL_1195:
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_4BD7264 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7264 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v374 = BalanceConfig_TypeInfo;
    v375 = result->m_Items[19]->fields.eventId;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v374 = BalanceConfig_TypeInfo;
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v373 = v375 == v374->static_fields->OrtFirstQuestId;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4BD9678 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9678 = 1;
  }
  v376 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v376 = TerminalPramsManager_TypeInfo;
  }
  v376->static_fields->_isIncomingCall_k__BackingField = v373;
  if ( v574 && EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)v574, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD7264 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7264 = 1;
    }
    v377 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v377 = TerminalPramsManager_TypeInfo;
    }
    v378 = BalanceConfig_TypeInfo;
    v379 = v377->static_fields->_QuestId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v378 = BalanceConfig_TypeInfo;
    }
    if ( v379 == v378->static_fields->OrtLateQuestId )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD7263 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD7263 = 1;
      }
      v380 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v380 = TerminalPramsManager_TypeInfo;
      }
      v381 = BalanceConfig_TypeInfo;
      v382 = v380->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v381 = BalanceConfig_TypeInfo;
      }
      if ( v382 + 1 == v381->static_fields->OrtLatePhaseBreak )
        goto LABEL_1196;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD7263 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD7263 = 1;
      }
      v383 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v383 = TerminalPramsManager_TypeInfo;
      }
      v384 = BalanceConfig_TypeInfo;
      v385 = v383->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v384 = BalanceConfig_TypeInfo;
      }
      if ( v385 + 1 == v384->static_fields->OrtLatePhaseDead )
      {
LABEL_1196:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v386 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserSuperBossMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !*((_BYTE *)v255 + 4085) )
        {
          sub_1C21E38(&NetworkManager_TypeInfo);
          *((_BYTE *)v255 + 4085) = 1;
        }
        result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        }
        v387 = result->m_Items[19]->fields.myDeck;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v386 )
          goto LABEL_1189;
        if ( UserSuperBossMaster__TryGetEntity(
               (UserSuperBossMaster_o *)v386,
               &v573,
               (int64_t)v387,
               v358,
               BalanceConfig_TypeInfo->static_fields->OrtThirdFormId,
               0LL) )
        {
          result = (BattleResultComponent_resultData_array *)sub_1C21EE0(UserSuperBossEntity___TypeInfo, 1LL);
          if ( !result )
            goto LABEL_1189;
          v394 = v573;
          v395 = result;
          if ( v573 )
          {
            result = (BattleResultComponent_resultData_array *)sub_1C21F74(v573, result->obj.klass->_1.element_class);
            if ( !result )
            {
LABEL_1191:
              v563 = sub_1C220B8();
              sub_1C21F60(v563, 0LL);
            }
          }
          if ( !v395->max_length )
            goto LABEL_1190;
          v395->m_Items[0] = (BattleResultComponent_resultData_o *)v394;
          sub_1C21DDC((PartyOrganizationUtility_o *)v395->m_Items, (int64_t)v394, v388, v389, v390, v391, v392, v393);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BD9B03 )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            byte_4BD9B03 = 1;
          }
          v402 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v402 = TerminalPramsManager_TypeInfo;
          }
          v403 = v402->static_fields;
          v403->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v395;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v403->_oldPersonalBoss_k__BackingField,
            (int64_t)v395,
            v396,
            v397,
            v398,
            v399,
            v400,
            v401);
        }
      }
    }
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  TalkResumeInfo = ScriptManager__GetTalkResumeInfo(0LL);
  if ( TalkResumeInfo )
  {
    v405 = TalkResumeInfo;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1189;
    v406 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD7264 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7264 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v406 )
      goto LABEL_1189;
    ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)v406, result->m_Items[19]->fields.eventId, 0LL);
    v408 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !byte_4BD7263 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7263 = 1;
    }
    v409 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v409 = TerminalPramsManager_TypeInfo;
    }
    v410 = v409->static_fields->_PhaseCnt_k__BackingField;
    winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v405, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd2(
                                                         ScriptQuestId,
                                                         v410 + 1,
                                                         winResult,
                                                         0LL);
    if ( !v408 )
      goto LABEL_1189;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v408, (System_String_o *)result, 0LL) )
      goto LABEL_1016;
    v418 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD7263 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7263 = 1;
    }
    v419 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v419 = TerminalPramsManager_TypeInfo;
    }
    v420 = v419->static_fields->_PhaseCnt_k__BackingField;
    v421 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v405, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd(
                                                         ScriptQuestId,
                                                         v420 + 1,
                                                         v421,
                                                         0LL);
    if ( !v418 )
      goto LABEL_1189;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v418, (System_String_o *)result, 0LL) )
    {
LABEL_1016:
      v422 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v422 = TerminalPramsManager_TypeInfo;
      }
      v423 = StringLiteral_1/*""*/;
      p_lastPlayBgmName = (PartyOrganizationUtility_o *)&v422->static_fields->lastPlayBgmName;
      p_lastPlayBgmName->klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
      sub_1C21DDC(p_lastPlayBgmName, (int64_t)v423, v412, v413, v414, v415, v416, v417);
      TerminalPramsManager__LastPlayBgmNameSave_SaveData(v425);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1189;
  v426 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v427 = result->m_Items[19]->fields.eventId;
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4BD7263 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v426 )
    goto LABEL_1189;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)v426,
    &v582,
    v427,
    LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
    0LL);
  if ( !byte_4BD9B05 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9B05 = 1;
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
    if ( !byte_4BD9B05 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9B05 = 1;
    }
    v434 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v434 = TerminalPramsManager_TypeInfo;
    }
    result = (BattleResultComponent_resultData_array *)v434->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
    if ( !result )
      goto LABEL_1189;
    *(_QWORD *)&result->max_length = 0LL;
    v435 = &result->max_length;
    *((_QWORD *)v435 - 1) = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)v435, 0LL, v428, v429, v430, v431, v432, v433);
  }
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v436 = HIDWORD((*m_Items)->bounds);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  v437 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v437 = TerminalPramsManager_TypeInfo;
  }
  v438 = v437->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v437 = TerminalPramsManager_TypeInfo;
    byte_4BD7263 = 1;
  }
  if ( !v437->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v437);
    v437 = TerminalPramsManager_TypeInfo;
  }
  SpecifiedSceneInfo = QuestPhaseMaster__GetSpecifiedSceneInfo(
                         (QuestPhaseMaster_o *)v426,
                         v436,
                         v438,
                         v437->static_fields->_PhaseCnt_k__BackingField + 1,
                         0LL);
  if ( !byte_4BD9AE6 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AE6 = 1;
  }
  v446 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v446 = TerminalPramsManager_TypeInfo;
  }
  v447 = v446->static_fields;
  v447->_SpecifiedChangeSceneInfo_k__BackingField = SpecifiedSceneInfo;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v447->_SpecifiedChangeSceneInfo_k__BackingField,
    (int64_t)SpecifiedSceneInfo,
    v439,
    v440,
    v441,
    v442,
    v443,
    v444);
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId = 0LL;
  TerminalPramsManager__InitTipsArchiveScrollValueList(v448);
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v455 = (int32_t)(*m_Items)->m_Items[52];
  v456 = TerminalPramsManager_TypeInfo;
  if ( v455 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9659 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9659 = 1;
    }
    v456 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v456 = TerminalPramsManager_TypeInfo;
    }
    v456->static_fields->_EventMuralId_k__BackingField = v455;
  }
  if ( !v456->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v456);
    v456 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = (PartyOrganizationUtility_o *)&v456->static_fields->eventHarvestGrowthInfo;
  p_eventHarvestGrowthInfo->klass = 0LL;
  sub_1C21DDC(p_eventHarvestGrowthInfo, 0LL, v449, v450, v451, v452, v453, v454);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  v458 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v458 = TerminalPramsManager_TypeInfo;
  }
  result = (BattleResultComponent_resultData_array *)QuestPhaseMaster__GetEntity(
                                                       (QuestPhaseMaster_o *)v426,
                                                       v458->static_fields->_QuestId_k__BackingField,
                                                       1,
                                                       0LL);
  if ( !result )
    goto LABEL_1189;
  v459 = result;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(
                     (QuestPhaseEntity_o *)result,
                     (System_String_o *)StringLiteral_20230/*"harvestGrowthBeforeQuestId"*/,
                     -1,
                     0LL);
  v461 = QuestPhaseEntity__getScriptIntParam(
           (QuestPhaseEntity_o *)v459,
           (System_String_o *)StringLiteral_20229/*"harvestGrowthAfterQuestId"*/,
           -1,
           0LL);
  if ( ScriptIntParam >= 1 )
  {
    v462 = v461;
    if ( v461 >= 1 )
    {
      v463 = sub_1C22084(EventHarvestGrowthInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v463, 0LL);
      if ( !v463 )
        goto LABEL_1189;
      bounds = v459->bounds;
      *(_DWORD *)(v463 + 24) = ScriptIntParam;
      *(_DWORD *)(v463 + 28) = v462;
      *(_QWORD *)(v463 + 16) = bounds;
      v471 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v471 = TerminalPramsManager_TypeInfo;
      }
      v472 = (PartyOrganizationUtility_o *)&v471->static_fields->eventHarvestGrowthInfo;
      v472->klass = (PartyOrganizationUtility_c *)v463;
      sub_1C21DDC(v472, v463, v464, v465, v466, v467, v468, v469);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1189;
  v473 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v473 )
    goto LABEL_1189;
  QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)v473, result->m_Items[19]->fields.eventId, 0LL);
  if ( QuestEntity )
  {
    v481 = QuestEntity;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD7264 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7264 = 1;
    }
    v482 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v482 = TerminalPramsManager_TypeInfo;
    }
    if ( QuestPhaseMaster__IsAreaImproveQuest(
           (QuestPhaseMaster_o *)v426,
           v482->static_fields->_QuestId_k__BackingField,
           0LL) )
    {
      SpotId = QuestEntity__getSpotId(v481, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
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
        v485 = CurrentLevelEntity;
        v486 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v486 = TerminalPramsManager_TypeInfo;
        }
        eventAreaImproveResultInfo = v486->static_fields->eventAreaImproveResultInfo;
        if ( eventAreaImproveResultInfo )
        {
          if ( !v486->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v486);
            eventAreaImproveResultInfo = TerminalPramsManager_TypeInfo->static_fields->eventAreaImproveResultInfo;
            if ( !eventAreaImproveResultInfo )
              goto LABEL_1189;
          }
          eventAreaImproveResultInfo->fields.afterLevel = v485->fields.lv;
        }
      }
    }
  }
  result = (BattleResultComponent_resultData_array *)v582;
  if ( v582 )
  {
    result = (BattleResultComponent_resultData_array *)QuestPhaseEntity__GetMoveSceneInfo(v582, 0LL);
    if ( !result )
      goto LABEL_1189;
    if ( *(_QWORD *)&result->max_length )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD7264 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD7264 = 1;
      }
      v488 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v488 = TerminalPramsManager_TypeInfo;
      }
      v581 = v488->static_fields->_QuestId_k__BackingField;
      v489 = System_Int32__ToString((int32_t)&v581, 0LL);
      if ( !byte_4BD7263 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD7263 = 1;
      }
      v490 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v490 = TerminalPramsManager_TypeInfo;
      }
      v581 = v490->static_fields->_PhaseCnt_k__BackingField + 1;
      v491 = System_Int32__ToString((int32_t)&v581, 0LL);
      v498 = System_String__Concat_63126736(v489, (System_String_o *)StringLiteral_866/*","*/, v491, 0LL);
      if ( !byte_4BD9821 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9821 = 1;
      }
      v499 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v499 = TerminalPramsManager_TypeInfo;
      }
      p_SceneMoveQuestClearedInfo_k__BackingField = (PartyOrganizationUtility_o *)&v499->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
      p_SceneMoveQuestClearedInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v498;
      sub_1C21DDC(p_SceneMoveQuestClearedInfo_k__BackingField, (int64_t)v498, v492, v493, v494, v495, v496, v497);
    }
  }
  if ( !*p_max_length )
    goto LABEL_1190;
  if ( !*m_Items )
    goto LABEL_1189;
  v501 = (int64_t)(*m_Items)->m_Items[47];
  if ( v501 && *(_QWORD *)(v501 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9662 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9662 = 1;
    }
    v502 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v502 = TerminalPramsManager_TypeInfo;
    }
    p_limitImageAnnounces_k__BackingField = (PartyOrganizationUtility_o *)&v502->static_fields->_limitImageAnnounces_k__BackingField;
    p_limitImageAnnounces_k__BackingField->klass = (PartyOrganizationUtility_c *)v501;
    sub_1C21DDC(p_limitImageAnnounces_k__BackingField, v501, v475, v476, v477, v478, v479, v480);
  }
  v504 = sub_1C21EE0(string___TypeInfo, 7LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  v505 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v505 = TerminalPramsManager_TypeInfo;
  }
  v581 = v505->static_fields->_QuestId_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v581, 0LL);
  if ( !v504 )
LABEL_1189:
    sub_1C22094(result, isWin);
  if ( !*(_DWORD *)(v504 + 24) )
    goto LABEL_1190;
  *(_QWORD *)(v504 + 32) = result;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v504 + 32), (int64_t)result, v506, v507, v508, v509, v510, v511);
  if ( *(_DWORD *)(v504 + 24) <= 1u )
    goto LABEL_1190;
  v518 = StringLiteral_866/*","*/;
  *(_QWORD *)(v504 + 40) = StringLiteral_866/*","*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v504 + 40), (int64_t)v518, v512, v513, v514, v515, v516, v517);
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7263 = 1;
  }
  v519 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v519 = TerminalPramsManager_TypeInfo;
  }
  v581 = v519->static_fields->_PhaseCnt_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v581, 0LL);
  if ( *(_DWORD *)(v504 + 24) <= 2u )
    goto LABEL_1190;
  *(_QWORD *)(v504 + 48) = result;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v504 + 48), (int64_t)result, v520, v521, v522, v523, v524, v525);
  if ( *(_DWORD *)(v504 + 24) <= 3u )
    goto LABEL_1190;
  v532 = StringLiteral_866/*","*/;
  *(_QWORD *)(v504 + 56) = StringLiteral_866/*","*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v504 + 56), (int64_t)v532, v526, v527, v528, v529, v530, v531);
  if ( !byte_4BD92DD )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD92DD = 1;
  }
  v533 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v533 = TerminalPramsManager_TypeInfo;
  }
  v572[0] = v533->static_fields->_IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v572, 0LL);
  if ( *(_DWORD *)(v504 + 24) <= 4u )
    goto LABEL_1190;
  *(_QWORD *)(v504 + 64) = result;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v504 + 64), (int64_t)result, v534, v535, v536, v537, v538, v539);
  if ( *(_DWORD *)(v504 + 24) <= 5u )
    goto LABEL_1190;
  v546 = StringLiteral_866/*","*/;
  *(_QWORD *)(v504 + 72) = StringLiteral_866/*","*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v504 + 72), (int64_t)v546, v540, v541, v542, v543, v544, v545);
  if ( !byte_4BD92DA )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD92DA = 1;
  }
  v547 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v547 = TerminalPramsManager_TypeInfo;
  }
  v572[0] = v547->static_fields->_IsPhaseClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v572, 0LL);
  if ( *(_DWORD *)(v504 + 24) <= 6u )
    goto LABEL_1190;
  *(_QWORD *)(v504 + 80) = result;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v504 + 80), (int64_t)result, v548, v549, v550, v551, v552, v553);
  v554 = System_String__Concat_63129004((System_String_array *)v504, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_16991/*"afterActionBk"*/, v554, 0LL);
  TerminalPramsManager__SaveClearDatas(resulta, v555);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v556);
  TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(v557);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v558);
  TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(v559);
  TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(v560);
  if ( TerminalPramsManager__IsTerminalEffectNT2BoardOpen(v561) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD90A0 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD90A0 = 1;
    }
    v562 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v562 = TerminalPramsManager_TypeInfo;
    }
    v562->static_fields->_WarId_k__BackingField = 0;
    if ( !byte_4BD736A )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      v562 = TerminalPramsManager_TypeInfo;
      byte_4BD736A = 1;
    }
    if ( !v562->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v562);
      v562 = TerminalPramsManager_TypeInfo;
    }
    v562->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4BD964C )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      v562 = TerminalPramsManager_TypeInfo;
      byte_4BD964C = 1;
    }
    if ( !v562->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v562);
      v562 = TerminalPramsManager_TypeInfo;
    }
    v562->static_fields->_IsMapReturnFolder_k__BackingField = 0;
    if ( !byte_4BD9814 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      v562 = TerminalPramsManager_TypeInfo;
      byte_4BD9814 = 1;
    }
    if ( !v562->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v562);
      v562 = TerminalPramsManager_TypeInfo;
    }
    v562->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData((const MethodInfo *)v562);
  }
}


void __fastcall TerminalPramsManager__ResetBlankEarthSpotInfo(const MethodInfo *method)
{
  const MethodInfo *v1; // x0

  if ( (byte_4BD9A76 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A76 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD8FB6 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8FB6 = 1;
  }
  v1 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_DWORD *)v1[2].virtualMethodPointer + 127) = 0;
  TerminalPramsManager__BlankEarthSpotId_SaveData(v1);
}


void __fastcall TerminalPramsManager__ResetResumeScriptWithMap(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  TerminalPramsManager_c *v7; // x0
  PartyOrganizationUtility_o *p_TalkScriptInfo_k__BackingField; // x0
  TerminalPramsManager_c *v9; // x0

  if ( (byte_4BD9A80 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A80 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9AD8 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AD8 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_QuestMessageScriptQuestId_k__BackingField = -1;
  if ( !byte_4BD9AD9 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4BD9AD9 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = -1;
  if ( !byte_4BD9905 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4BD9905 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  p_TalkScriptInfo_k__BackingField = (PartyOrganizationUtility_o *)&v7->static_fields->_TalkScriptInfo_k__BackingField;
  p_TalkScriptInfo_k__BackingField->klass = 0LL;
  sub_1C21DDC(p_TalkScriptInfo_k__BackingField, 0LL, v1, v2, v3, v4, v5, v6);
  if ( !byte_4BD9ADA )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9ADA = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  TerminalPramsManager_c *v3; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x22
  QuestRewardInfo_array *UseAddRewardItemRewardInfos_k__BackingField; // x20
  BattleResultComponent_resultData_o *v6; // x0
  const MethodInfo *v7; // x1
  TerminalPramsManager_c *v8; // x0
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct TerminalPramsManager_StaticFields *v11; // x8
  _BOOL4 IsPhaseClear_k__BackingField; // w29
  _BOOL4 IsDispOnly_k__BackingField; // w27
  struct TerminalPramsManager_StaticFields *v14; // x8
  _BOOL4 IsWarBoardClear_k__BackingField; // w25
  LimitImageAnnounce_array *limitImageAnnounces; // x21
  _BOOL4 IsOrdealCallWarClear_k__BackingField; // w26
  int32_t eventMuralId; // w28
  bool isOrdealCallWarClear; // w20
  bool isWarBoardClear; // w23
  bool v21; // zf
  int32_t eventActionQuestId; // w29
  bool v23; // w26
  TerminalPramsManager_ClearData_o *v24; // x25
  TerminalPramsManager_c *v25; // x0
  TerminalPramsManager_ClearData_c *v26; // x0
  System_String_o *SAVEKEY_CLEAR_REWARD_DISP; // x19
  System_String_o *v28; // x1
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

  if ( (byte_4BD9AC5 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AC5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v3->static_fields->mQuestRewardInfos;
  if ( !byte_4BD7266 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4BD7266 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UseAddRewardItemRewardInfos_k__BackingField = v3->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
  if ( result )
  {
    if ( !result->max_length )
      sub_1C2209C(v3, method);
    v6 = result->m_Items[0];
    if ( !v6 )
      sub_1C22094(0LL, method);
    if ( BattleResultComponent_resultData__checkResultDispFlag(v6, 2048, 0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD7264 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD7264 = 1;
      }
      v8 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v8 = TerminalPramsManager_TypeInfo;
      }
      UseAddRewardItemRewardInfos_k__BackingField = 0LL;
      if ( TerminalPramsManager__IsFreeQuestOnOrdealCall(v8->static_fields->_QuestId_k__BackingField, v7) )
        mQuestRewardInfos = 0LL;
    }
  }
  v9 = TerminalPramsManager_TypeInfo;
  useAddRewardItemRewardInfos = UseAddRewardItemRewardInfos_k__BackingField;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  mQuestClearHeroineInfo = static_fields->mQuestClearHeroineInfo;
  mQuestPhaseRewardInfos = static_fields->mQuestPhaseRewardInfos;
  if ( !byte_4BD92DD )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BD92DD = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  IsQuestClear_k__BackingField = v9->static_fields->_IsQuestClear_k__BackingField;
  if ( !byte_4BD92DA )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BD92DA = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v11 = v9->static_fields;
  IsPhaseClear_k__BackingField = v11->_IsPhaseClear_k__BackingField;
  lastRaidId = v11->clearLastBattleRaidId;
  raidId = v11->clearBattleRaidId;
  groupjoin = v11->joinGroupId;
  if ( !byte_4BD9B06 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BD9B06 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  oldSuperBoss = v9->static_fields->_oldSuperBoss_k__BackingField;
  if ( !byte_4BD9B04 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BD9B04 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss = v9->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !byte_4BD9B07 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BD9B07 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  eventPointWinReward_k__BackingField = v9->static_fields->_eventPointWinReward_k__BackingField;
  if ( !byte_4BD9AFE )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BD9AFE = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  evpWinType = v9->static_fields->_eventPointWinType_k__BackingField;
  if ( !byte_4BD9809 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BD9809 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  evRace = v9->static_fields->_eventRaceBoost_k__BackingField;
  if ( !byte_4BD9660 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BD9660 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeRelease = v9->static_fields->_questClearCostumeRelease_k__BackingField;
  if ( !byte_4BD9656 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BD9656 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeGet_k__BackingField = v9->static_fields->_questClearCostumeGet_k__BackingField;
  if ( !byte_4BD965C )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BD965C = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  evTowerReward = v9->static_fields->_eventTowerReward_k__BackingField;
  if ( !byte_4BD9B08 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BD9B08 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v9->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  if ( !byte_4BD82DB )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BD82DB = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  IsDispOnly_k__BackingField = v9->static_fields->_IsDispOnly_k__BackingField;
  if ( !byte_4BD9668 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BD9668 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  warClearRewardIn = v9->static_fields->_warClearReward_k__BackingField;
  if ( !byte_4BD9B09 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BD9B09 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  eventActivityPointEffectState = v9->static_fields->_EventActivityPointEffectState_k__BackingField;
  if ( !byte_4BD9657 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BD9657 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v14 = v9->static_fields;
  IsWarBoardClear_k__BackingField = v14->_IsWarBoardClear_k__BackingField;
  mResultEventPanelRewardInfos = v14->mResultEventPanelRewardInfos;
  questResultAfterEventRewardInfos = v14->mQuestResultAfterEventRewardInfos;
  panelEventPoint = v14->panelEventPoint;
  if ( !byte_4BD9661 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BD9661 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  limitImageAnnounces = v9->static_fields->_limitImageAnnounces_k__BackingField;
  if ( !byte_4BD8FB5 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BD8FB5 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  IsOrdealCallWarClear_k__BackingField = v9->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4BD9658 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BD9658 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  eventMuralId = v9->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_4BD9817 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4BD9817 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  isOrdealCallWarClear = IsOrdealCallWarClear_k__BackingField;
  isWarBoardClear = IsWarBoardClear_k__BackingField;
  v21 = !IsPhaseClear_k__BackingField;
  eventActionQuestId = v9->static_fields->_EventActionQuestId_k__BackingField;
  v23 = !v21;
  v24 = (TerminalPramsManager_ClearData_o *)sub_1C22084(TerminalPramsManager_ClearData_TypeInfo);
  TerminalPramsManager_ClearData___ctor_35916240(
    v24,
    mQuestClearHeroineInfo,
    mQuestRewardInfos,
    mQuestPhaseRewardInfos,
    IsQuestClear_k__BackingField,
    v23,
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
  if ( !byte_4BD9B0A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9B0A = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  v25->static_fields->_isQuestRewardSetted_k__BackingField = 1;
  v26 = TerminalPramsManager_ClearData_TypeInfo;
  if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
    v26 = TerminalPramsManager_ClearData_TypeInfo;
  }
  SAVEKEY_CLEAR_REWARD_DISP = v26->static_fields->SAVEKEY_CLEAR_REWARD_DISP;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v28 = JsonManager__toJson((Il2CppObject *)v24, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString(SAVEKEY_CLEAR_REWARD_DISP, v28, 0LL);
}


void __fastcall TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  TerminalPramsManager_c *v2; // x0
  EventRaidDefeatedEffectInfo_o *EventRaidDefeatedEffectInfo_k__BackingField; // x0
  System_String_o *v4; // x0

  if ( (byte_4BD9ACB & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11648/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_4BD9ACB = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9B0C )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9B0C = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  EventRaidDefeatedEffectInfo_k__BackingField = v2->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  if ( !EventRaidDefeatedEffectInfo_k__BackingField )
    sub_1C22094(0LL, v1);
  v4 = EventRaidDefeatedEffectInfo__ConvertToStringData(EventRaidDefeatedEffectInfo_k__BackingField, v1);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11648/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestInfo_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4BD9A8D & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_13868/*"TerminalPhaseCnt"*/);
    sub_1C21E38(&StringLiteral_13871/*"TerminalQuestId"*/);
    byte_4BD9A8D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13871/*"TerminalQuestId"*/,
    v1->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7263 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13868/*"TerminalPhaseCnt"*/,
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
  int key_high; // w27
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x2
  System_String_o *v15; // x1
  int v16; // [xsp+Ch] [xbp-94h] BYREF
  __int128 v17[2]; // [xsp+10h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4BD9ACF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11657/*"SAVEKEY_QuestRandomGroupList"*/);
    sub_1C21E38(&StringLiteral_25520/*"{0}:{1}"*/);
    sub_1C21E38(&StringLiteral_866/*","*/);
    byte_4BD9ACF = 1;
  }
  memset(&v18, 0, 32);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9096 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9096 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  QuestRandomGroupList_k__BackingField = v3->static_fields->_QuestRandomGroupList_k__BackingField;
  if ( !QuestRandomGroupList_k__BackingField )
    sub_1C22094(0LL, v1);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v17,
    QuestRandomGroupList_k__BackingField,
    (const MethodInfo_32AD354 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v18.fields._dictionary = v17[0];
  v18.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v17[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v18,
            (const MethodInfo_3402EC4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int)v18.fields._current.fields.key;
    key_high = HIDWORD(v18.fields._current.fields.key);
    if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
      Empty = System_String__Concat_63115476(Empty, (System_String_o *)StringLiteral_866/*","*/, 0LL);
    LODWORD(v17[0]) = key;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v17, v7, v8, v9);
    v16 = key_high;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v11, v12, v13);
    v15 = System_String__Format_63129848((System_String_o *)StringLiteral_25520/*"{0}:{1}"*/, v10, v14, 0LL);
    Empty = System_String__Concat_63115476(Empty, v15, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v18,
    (const MethodInfo_3402FC4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11657/*"SAVEKEY_QuestRandomGroupList"*/, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestReleasedFocusState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v3; // x1

  if ( (byte_4BD9AB8 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AB8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v1);
  if ( !QuestFocusStateManager )
    sub_1C22094(0LL, v3);
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
  int32_t MapModelClearQuestId_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF
  int64_t EndTime_k__BackingField; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BD9A8B & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_13861/*"TerminalEndTime"*/);
    sub_1C21E38(&StringLiteral_11655/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_1C21E38(&StringLiteral_13857/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C21E38(&StringLiteral_13862/*"TerminalEventDailyPointEventId"*/);
    sub_1C21E38(&StringLiteral_13868/*"TerminalPhaseCnt"*/);
    sub_1C21E38(&StringLiteral_13876/*"TerminalTimeStatusEventId"*/);
    sub_1C21E38(&StringLiteral_13860/*"TerminalDispState"*/);
    sub_1C21E38(&StringLiteral_11652/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_1C21E38(&StringLiteral_13863/*"TerminalIsDoneShortcut"*/);
    sub_1C21E38(&StringLiteral_11651/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C21E38(&StringLiteral_11656/*"SAVEKEY_PlayerGenderType"*/);
    sub_1C21E38(&StringLiteral_11644/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_1C21E38(&StringLiteral_11653/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_1C21E38(&StringLiteral_13871/*"TerminalQuestId"*/);
    sub_1C21E38(&StringLiteral_11664/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_1C21E38(&StringLiteral_13875/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_1C21E38(&StringLiteral_13880/*"TerminalWarId"*/);
    sub_1C21E38(&StringLiteral_13873/*"TerminalSpotId"*/);
    sub_1C21E38(&StringLiteral_13877/*"TerminalTimeStatusLoopCount"*/);
    sub_1C21E38(&StringLiteral_13858/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_1C21E38(&StringLiteral_11642/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_1C21E38(&StringLiteral_11647/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_1C21E38(&StringLiteral_13881/*"TerminalWarStartedIds"*/);
    sub_1C21E38(&StringLiteral_11646/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C21E38(&StringLiteral_866/*","*/);
    sub_1C21E38(&StringLiteral_11645/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_1C21E38(&StringLiteral_11654/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_1C21E38(&StringLiteral_11663/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4BD9A8B = 1;
  }
  EndTime_k__BackingField = 0LL;
  MapModelClearQuestId_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9275 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9275 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13860/*"TerminalDispState"*/,
    v1->static_fields->_DispState_k__BackingField,
    0LL);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13880/*"TerminalWarId"*/,
    v2->static_fields->_WarId_k__BackingField,
    0LL);
  if ( !byte_4BD9279 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9279 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13873/*"TerminalSpotId"*/,
    v3->static_fields->_SpotId_k__BackingField,
    0LL);
  if ( !byte_4BD8FB2 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8FB2 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11642/*"SAVEKEY_BlankEarthSpotId"*/,
    v4->static_fields->_BlankEarthSpotId_k__BackingField,
    0LL);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13871/*"TerminalQuestId"*/,
    v5->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7263 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13868/*"TerminalPhaseCnt"*/,
    v6->static_fields->_PhaseCnt_k__BackingField,
    0LL);
  if ( !byte_4BD927A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD927A = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v7->static_fields->_EndTime_k__BackingField;
  v8 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13861/*"TerminalEndTime"*/, v8, 0LL);
  if ( !byte_4BD9683 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9683 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13863/*"TerminalIsDoneShortcut"*/,
    v9->static_fields->_IsDoneShortcut_k__BackingField,
    0LL);
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_13881/*"TerminalWarStartedIds"*/,
    v10->static_fields->mTerminalWarStartedIds,
    0LL);
  if ( !byte_4BD9811 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9811 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13876/*"TerminalTimeStatusEventId"*/,
    v11->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_4BD9812 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9812 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13877/*"TerminalTimeStatusLoopCount"*/,
    v12->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  if ( !byte_4BD9AF2 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AF2 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13862/*"TerminalEventDailyPointEventId"*/,
    v13->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4BD9AF3 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AF3 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v14->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v15 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13875/*"TerminalTimeStatusEventDailyPoint"*/, v15, 0LL);
  if ( !byte_4BD9AF4 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AF4 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13857/*"TerminalBeforeEventActivityPoint"*/,
    v16->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_4BD9AF5 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AF5 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13858/*"TerminalBeforeEventActivityPointGauge"*/,
    v17->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  if ( !byte_4BD9AF6 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AF6 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11655/*"SAVEKEY_PlayedTerminalEffects"*/,
    v18->static_fields->_PlayedTerminalEffects_k__BackingField,
    0LL);
  if ( !byte_4BD9675 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9675 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11652/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v19->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9676 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9676 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11653/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v20->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  if ( !byte_4BD9813 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9813 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11654/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v21->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9816 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9816 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11664/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v22->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11646/*"SAVEKEY_ConnectMarkEventId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11645/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  if ( !byte_4BD964E )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD964E = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11663/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v23->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  if ( !byte_4BD9098 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9098 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11644/*"SAVEKEY_ClearEventQuestIds"*/,
    v24->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  if ( !byte_4BD9276 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9276 = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v25->static_fields->_MapModelClearQuestId_k__BackingField;
  v26 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_4BD9277 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9277 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v27->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v28 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v29 = System_String__Concat_63126736(v26, (System_String_o *)StringLiteral_866/*","*/, v28, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11651/*"SAVEKEY_MapModelClearQuestInfo"*/, v29, 0LL);
  if ( !byte_4BD9818 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9818 = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11647/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v30->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9AF7 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AF7 = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11656/*"SAVEKEY_PlayerGenderType"*/,
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w1

  if ( (byte_4BD9ABF & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9ABF = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v5);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v8);
    if ( IsMainStoryForQuestId )
      v9 = 10;
    else
      v9 = 9;
    AdManager__TrackEvent((AdManager_o *)Instance, v9, 10, questId, questPhase, 0LL, 0LL);
  }
}


void __fastcall TerminalPramsManager__SendOpenedQuestIdToAdManager(int32_t clearedQuestId, const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t Instance; // x0
  const MethodInfo *v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x21
  int32_t klass_high; // w21
  Il2CppObject *MasterData_object; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *QuestIdsByTargetAndOpenCondType; // x19
  TerminalPramsManager___c_c *v22; // x8
  System_Func_int__bool__o *_9__709_0; // x21
  Il2CppObject *v24; // x22
  struct TerminalPramsManager___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  System_Func_T__TResult__o *v33; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  System_Func_object__bool__o *v35; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  TerminalPramsManager___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x19
  System_Func_object__int__o *_9__709_3; // x20
  Il2CppObject *v40; // x21
  struct TerminalPramsManager___c_StaticFields *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v48; // x0
  TerminalPramsManager___c_c *v49; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x19
  System_Func_int__int__o *_9__709_4; // x20
  Il2CppObject *v52; // x21
  struct TerminalPramsManager___c_StaticFields *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  int32_t v61; // w0
  int32_t v62; // w19
  Il2CppObject *v63; // [xsp+0h] [xbp-40h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BD9AC0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C21E38(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_int__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_int__QuestEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_QuestEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_1C21E38(&System_Func_int__int__TypeInfo);
    sub_1C21E38(&System_Func_int__bool__TypeInfo);
    sub_1C21E38(&System_Func_QuestEntity__int__TypeInfo);
    sub_1C21E38(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1C21E38(&System_Func_int__QuestEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__709_0__);
    sub_1C21E38(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__709_3__);
    sub_1C21E38(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__709_4__);
    sub_1C21E38(&Method_TerminalPramsManager___c__DisplayClass709_0__SendOpenedQuestIdToAdManager_b__1__);
    sub_1C21E38(&Method_TerminalPramsManager___c__DisplayClass709_0__SendOpenedQuestIdToAdManager_b__2__);
    sub_1C21E38(&TerminalPramsManager___c__DisplayClass709_0_TypeInfo);
    sub_1C21E38(&TerminalPramsManager___c_TypeInfo);
    byte_4BD9AC0 = 1;
  }
  v63 = 0LL;
  entity = 0LL;
  v3 = sub_1C22084(TerminalPramsManager___c__DisplayClass709_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass709_0___ctor((TerminalPramsManager___c__DisplayClass709_0_o *)v3, 0LL);
  if ( clearedQuestId >= 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !v3 )
      goto LABEL_43;
    *(_QWORD *)(v3 + 16) = Instance;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), Instance, v6, v7, v8, v9, v10, v11);
    Instance = *(_QWORD *)(v3 + 16);
    if ( !Instance )
      goto LABEL_43;
    if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, clearedQuestId, 0LL) )
      return;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SpotMaster___);
    if ( !entity )
      goto LABEL_43;
    v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = QuestEntity__getSpotId(entity, 0LL);
    if ( !v12 )
      goto LABEL_43;
    Instance = DataMasterBase_object__object__int___TryGetEntity(
                 v12,
                 &v63,
                 Instance,
                 (const MethodInfo_325BE14 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return;
    if ( !v63 )
      goto LABEL_43;
    klass_high = HIDWORD(v63[1].klass);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( TerminalPramsManager__IsMustPlayMainStory(klass_high, v5) )
    {
      Instance = (int64_t)entity;
      if ( !entity )
        goto LABEL_43;
      if ( QuestEntity__GetTypeFlag(entity, 0LL) != 2 )
        return;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v3 + 24) = MasterData_object;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)MasterData_object, v15, v16, v17, v18, v19, v20);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      if ( !Instance )
        goto LABEL_43;
      QuestIdsByTargetAndOpenCondType = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
                                                                                               (QuestReleaseMaster_o *)Instance,
                                                                                               clearedQuestId,
                                                                                               1,
                                                                                               0LL);
      v22 = TerminalPramsManager___c_TypeInfo;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v22 = TerminalPramsManager___c_TypeInfo;
      }
      _9__709_0 = v22->static_fields->__9__709_0;
      if ( !_9__709_0 )
      {
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          v22 = TerminalPramsManager___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v22->static_fields->__9;
        _9__709_0 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__709_0,
          v24,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__709_0__,
          0LL);
        static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
        static_fields->__9__709_0 = _9__709_0;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__709_0,
          (int64_t)_9__709_0,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      v32 = System_Linq_Enumerable__Where_int_(
              QuestIdsByTargetAndOpenCondType,
              (System_Func_TSource__bool__o *)_9__709_0,
              (const MethodInfo_2FEF424 *)Method_System_Linq_Enumerable_Where_int___);
      v33 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_int__QuestEntity__TypeInfo);
      System_Func_int__object____ctor(
        v33,
        (Il2CppObject *)v3,
        Method_TerminalPramsManager___c__DisplayClass709_0__SendOpenedQuestIdToAdManager_b__1__,
        0LL);
      v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v32,
                                                                   (System_Func_TSource__TResult__o *)v33,
                                                                   (const MethodInfo_2FDEEE4 *)Method_System_Linq_Enumerable_Select_int__QuestEntity___);
      v35 = (System_Func_object__bool__o *)sub_1C22084(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v35,
        (Il2CppObject *)v3,
        Method_TerminalPramsManager___c__DisplayClass709_0__SendOpenedQuestIdToAdManager_b__2__,
        0LL);
      v36 = System_Linq_Enumerable__Where_object_(
              v34,
              (System_Func_TSource__bool__o *)v35,
              (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v37 = TerminalPramsManager___c_TypeInfo;
      v38 = v36;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v37 = TerminalPramsManager___c_TypeInfo;
      }
      _9__709_3 = (System_Func_object__int__o *)v37->static_fields->__9__709_3;
      if ( !_9__709_3 )
      {
        if ( !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          v37 = TerminalPramsManager___c_TypeInfo;
        }
        v40 = (Il2CppObject *)v37->static_fields->__9;
        _9__709_3 = (System_Func_object__int__o *)sub_1C22084(System_Func_QuestEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__709_3,
          v40,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__709_3__,
          0LL);
        v41 = TerminalPramsManager___c_TypeInfo->static_fields;
        v41->__9__709_3 = (struct System_Func_QuestEntity__int__o *)_9__709_3;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v41->__9__709_3, (int64_t)_9__709_3, v42, v43, v44, v45, v46, v47);
      }
      v48 = System_Linq_Enumerable__Select_object__int_(
              v38,
              (System_Func_TSource__TResult__o *)_9__709_3,
              (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_QuestEntity__int___);
      v49 = TerminalPramsManager___c_TypeInfo;
      v50 = (System_Collections_Generic_IEnumerable_TSource__o *)v48;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v49 = TerminalPramsManager___c_TypeInfo;
      }
      _9__709_4 = v49->static_fields->__9__709_4;
      if ( !_9__709_4 )
      {
        if ( !v49->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v49);
          v49 = TerminalPramsManager___c_TypeInfo;
        }
        v52 = (Il2CppObject *)v49->static_fields->__9;
        _9__709_4 = (System_Func_int__int__o *)sub_1C22084(System_Func_int__int__TypeInfo);
        System_Func_int__int____ctor(
          _9__709_4,
          v52,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__709_4__,
          0LL);
        v53 = TerminalPramsManager___c_TypeInfo->static_fields;
        v53->__9__709_4 = _9__709_4;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v53->__9__709_4, (int64_t)_9__709_4, v54, v55, v56, v57, v58, v59);
      }
      v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_int__int_(
                                                                   v50,
                                                                   (System_Func_TSource__TKey__o *)_9__709_4,
                                                                   (const MethodInfo_2FD9334 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
      v61 = System_Linq_Enumerable__FirstOrDefault_int_(
              v60,
              (const MethodInfo_2FD1E20 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      if ( v61 )
      {
        v62 = v61;
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetOpenedStoryQuest((AdManager_o *)Instance, v62, 0LL);
          return;
        }
LABEL_43:
        sub_1C22094(Instance, v5);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w1

  if ( (byte_4BD9ABE & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9ABE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v5);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v8);
    if ( IsMainStoryForQuestId )
      v9 = 10;
    else
      v9 = 9;
    AdManager__TrackEvent((AdManager_o *)Instance, v9, 9, questId, questPhase, 0LL, 0LL);
  }
}


void __fastcall TerminalPramsManager__SetAutoResumeByQuestId(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  QuestTree_o *Instance; // x0
  __int64 v5; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v7; // x20
  int32_t warId; // w21
  TerminalPramsManager_c *v9; // x0
  Il2CppObject *Master_object; // x21
  bool v11; // w22
  TerminalPramsManager_c *v12; // x0
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  int32_t parentBlankEarthSpotId; // w1
  unsigned __int64 v16; // x21
  TerminalPramsManager_c *v17; // x0
  int32_t v18; // w21
  TerminalPramsManager_c *v19; // x0
  int32_t questPhase; // w21
  int64_t endTime; // x20
  Il2CppObject *v22; // x20
  WarEntity_o *WarEntityByWarID; // x0
  bool IsFolder; // w20
  TerminalPramsManager_c *v25; // x0
  int v26; // w8
  TerminalSceneComponent_c *v27; // x0
  UnityEngine_Object_o *mInstance; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *klass; // x8
  UnityEngine_Object_o *v30; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v31; // x8
  ScrTerminalListTop_o *v32; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v33; // x8
  UnityEngine_Object_o *v34; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v35; // x8
  const MethodInfo *v36; // x0
  unsigned __int64 v37; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_int__o v39; // 0:x0.8

  if ( (byte_4BD9A7D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C21E38(&Method_System_Nullable_int___ctor__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD9A7D = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD92DF )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD92DF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    QuestInfo = QuestTree__GetQuestInfo(Instance, questId, 0LL);
    if ( !QuestInfo )
      return;
    v7 = QuestInfo;
    warId = QuestInfo->fields.warId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD90A0 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD90A0 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_WarId_k__BackingField = warId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    Instance = (QuestTree_o *)MapControl_QuestInfo__GetSpotID(v7, 0LL);
    if ( !Master_object )
      goto LABEL_148;
    v11 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            (int32_t)Instance,
            (const MethodInfo_325BE14 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    LODWORD(Master_object) = MapControl_QuestInfo__GetSpotID(v7, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v11 )
    {
      if ( byte_4BD8FB6 )
        goto LABEL_38;
    }
    else
    {
      if ( !byte_4BD909F )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD909F = 1;
      }
      v12 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v12 = TerminalPramsManager_TypeInfo;
      }
      v12->static_fields->_SpotId_k__BackingField = (int)Master_object;
      WarInfo_k__BackingField = v7->fields._WarInfo_k__BackingField;
      if ( WarInfo_k__BackingField && (Mine = MapControl_WarInfo__GetMine(WarInfo_k__BackingField, 0LL)) != 0LL )
      {
        parentBlankEarthSpotId = Mine->fields.parentBlankEarthSpotId;
        v39 = (System_Nullable_int__o)&v37;
        v37 = 0LL;
        System_Nullable_int____ctor(
          v39,
          parentBlankEarthSpotId,
          (const MethodInfo_376B7A0 *)Method_System_Nullable_int___ctor__);
        v16 = v37;
      }
      else
      {
        v16 = 0LL;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (Il2CppObject *)HIDWORD(v16);
      if ( byte_4BD8FB6 )
      {
LABEL_38:
        v17 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v17 = TerminalPramsManager_TypeInfo;
        }
        v17->static_fields->_BlankEarthSpotId_k__BackingField = (int)Master_object;
        v18 = v7->fields.questId;
        if ( !v17->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v17);
        if ( !byte_4BD909A )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD909A = 1;
        }
        v19 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
        }
        v19->static_fields->_QuestId_k__BackingField = v18;
        questPhase = v7->fields.questPhase;
        if ( !byte_4BD909E )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
          byte_4BD909E = 1;
        }
        if ( !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          v19 = TerminalPramsManager_TypeInfo;
        }
        v19->static_fields->_PhaseCnt_k__BackingField = questPhase;
        endTime = v7->fields.endTime;
        if ( !byte_4BD909B )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
          byte_4BD909B = 1;
        }
        if ( !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          v19 = TerminalPramsManager_TypeInfo;
        }
        v19->static_fields->_EndTime_k__BackingField = endTime;
        if ( !byte_4BD9682 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
          byte_4BD9682 = 1;
        }
        if ( !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          v19 = TerminalPramsManager_TypeInfo;
        }
        v19->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 1;
        if ( !SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
          goto LABEL_151;
        v22 = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD9099 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD9099 = 1;
        }
        Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !v22 )
          goto LABEL_148;
        WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(
                             (QuestTree_o *)v22,
                             HIDWORD(Instance[1].fields.questReleaseEntList->klass),
                             0LL);
        if ( WarEntityByWarID )
        {
          IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( IsFolder )
          {
            if ( !byte_4BD909C )
            {
              sub_1C21E38(&TerminalPramsManager_TypeInfo);
              byte_4BD909C = 1;
            }
            v25 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v25 = TerminalPramsManager_TypeInfo;
            }
            v26 = 3;
          }
          else
          {
            if ( !byte_4BD909C )
            {
              sub_1C21E38(&TerminalPramsManager_TypeInfo);
              byte_4BD909C = 1;
            }
            v25 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v25 = TerminalPramsManager_TypeInfo;
            }
            v26 = 2;
          }
        }
        else
        {
LABEL_151:
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BD909C )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            byte_4BD909C = 1;
          }
          v25 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v25 = TerminalPramsManager_TypeInfo;
          }
          v26 = 1;
        }
        v25->static_fields->_DispState_k__BackingField = v26;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4BD7183 )
        {
          sub_1C21E38(&TerminalSceneComponent_TypeInfo);
          byte_4BD7183 = 1;
        }
        v27 = TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v27 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = (UnityEngine_Object_o *)v27->static_fields->mInstance;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
          goto LABEL_140;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4BD7183 )
        {
          sub_1C21E38(&TerminalSceneComponent_TypeInfo);
          byte_4BD7183 = 1;
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
          v30 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BD7183 )
            {
              sub_1C21E38(&TerminalSceneComponent_TypeInfo);
              byte_4BD7183 = 1;
            }
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            }
            v31 = Instance[1].fields.questReleaseEntList->klass;
            if ( !v31 )
              goto LABEL_148;
            v32 = *(ScrTerminalListTop_o **)&v31->_2.static_fields_size;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4BD9099 )
            {
              sub_1C21E38(&TerminalPramsManager_TypeInfo);
              byte_4BD9099 = 1;
            }
            Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
            }
            if ( !v32 )
              goto LABEL_148;
            ScrTerminalListTop__RequestChangeTerminalListBG(
              v32,
              HIDWORD(Instance[1].fields.questReleaseEntList->klass),
              0LL);
          }
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4BD7183 )
          {
            sub_1C21E38(&TerminalSceneComponent_TypeInfo);
            byte_4BD7183 = 1;
          }
          Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
          }
          v33 = Instance[1].fields.questReleaseEntList->klass;
          if ( v33 )
          {
            v34 = *(UnityEngine_Object_o **)&v33->_2.instance_size;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
              goto LABEL_140;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BD7183 )
            {
              sub_1C21E38(&TerminalSceneComponent_TypeInfo);
              byte_4BD7183 = 1;
            }
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            }
            v35 = Instance[1].fields.questReleaseEntList->klass;
            if ( v35 )
            {
              Instance = *(QuestTree_o **)&v35->_2.instance_size;
              if ( Instance )
              {
                TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)Instance, 0LL);
LABEL_140:
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4BD736A )
                {
                  sub_1C21E38(&TerminalPramsManager_TypeInfo);
                  byte_4BD736A = 1;
                }
                v36 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v36 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                }
                *((_BYTE *)v36[2].virtualMethodPointer + 717) = 1;
                TerminalPramsManager__Save_SaveData(v36);
                return;
              }
            }
          }
        }
LABEL_148:
        sub_1C22094(Instance, v5);
      }
    }
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8FB6 = 1;
    goto LABEL_38;
  }
}


void __fastcall TerminalPramsManager__SetAutoResumeByWarId(int32_t warId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  TitleInfoControl_o *v6; // x0
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v8; // x20
  bool IsFolder; // w21
  TerminalPramsManager_c *v10; // x0
  int v11; // w8
  int32_t parentBlankEarthSpotId; // w20
  TerminalPramsManager_c *v13; // x0
  TerminalSceneComponent_c *v14; // x0
  UnityEngine_Object_o *mInstance; // x20
  ExUITexture_c *klass; // x8
  UnityEngine_Object_o *v17; // x20
  ExUITexture_c *v18; // x8
  ScrTerminalListTop_o *v19; // x20
  ExUITexture_c *v20; // x8
  UnityEngine_Object_o *v21; // x20
  ExUITexture_c *v22; // x8
  const MethodInfo *v23; // x0

  if ( (byte_4BD9A7E & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD9A7E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD92DF )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD92DF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4BD90A0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4BD90A0 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = warId;
  if ( !SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
    goto LABEL_112;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  v6 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_109;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(
                       (QuestTree_o *)Instance,
                       HIDWORD(v6->fields.mEventBgTexture->klass),
                       0LL);
  if ( WarEntityByWarID )
  {
    v8 = WarEntityByWarID;
    IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( IsFolder )
    {
      if ( !byte_4BD909C )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD909C = 1;
      }
      v10 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v10 = TerminalPramsManager_TypeInfo;
      }
      v11 = 3;
    }
    else
    {
      if ( !byte_4BD909C )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD909C = 1;
      }
      v10 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v10 = TerminalPramsManager_TypeInfo;
      }
      v11 = 2;
    }
    v10->static_fields->_DispState_k__BackingField = v11;
    parentBlankEarthSpotId = v8->fields.parentBlankEarthSpotId;
  }
  else
  {
LABEL_112:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD909C )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD909C = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    parentBlankEarthSpotId = 0;
    v10->static_fields->_DispState_k__BackingField = 1;
  }
  if ( !v10->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v10);
  if ( !byte_4BD8FB6 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8FB6 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_BlankEarthSpotId_k__BackingField = parentBlankEarthSpotId;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  v14 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v14 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v14->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v6->fields.mEventBgTexture->klass;
    if ( !klass )
      goto LABEL_109;
    v17 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BD7183 )
      {
        sub_1C21E38(&TerminalSceneComponent_TypeInfo);
        byte_4BD7183 = 1;
      }
      v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      }
      v18 = v6->fields.mEventBgTexture->klass;
      if ( !v18 )
        goto LABEL_109;
      v19 = *(ScrTerminalListTop_o **)&v18->_2.static_fields_size;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9099 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9099 = 1;
      }
      v6 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v6 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v19 )
        goto LABEL_109;
      ScrTerminalListTop__RequestChangeTerminalListBG(v19, HIDWORD(v6->fields.mEventBgTexture->klass), 0LL);
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    v20 = v6->fields.mEventBgTexture->klass;
    if ( !v20 )
      goto LABEL_109;
    v21 = *(UnityEngine_Object_o **)&v20->_2.instance_size;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BD7183 )
      {
        sub_1C21E38(&TerminalSceneComponent_TypeInfo);
        byte_4BD7183 = 1;
      }
      v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      }
      v22 = v6->fields.mEventBgTexture->klass;
      if ( v22 )
      {
        v6 = *(TitleInfoControl_o **)&v22->_2.instance_size;
        if ( v6 )
        {
          TitleInfoControl__CloseEventBannerWindow(v6, 0LL);
          goto LABEL_102;
        }
      }
LABEL_109:
      sub_1C22094(v6, v4);
    }
  }
LABEL_102:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD736A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD736A = 1;
  }
  v23 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_BYTE *)v23[2].virtualMethodPointer + 717) = 1;
  TerminalPramsManager__Save_SaveData(v23);
}


void __fastcall TerminalPramsManager__SetAutoResumeForFolder(int32_t warId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  TerminalPramsManager_c *v7; // x0
  int32_t PrioredParentId; // w20
  Il2CppObject *v9; // x0
  TerminalPramsManager_c *v10; // x0
  TerminalPramsManager_c *v11; // x0
  int32_t monitor_high; // w20
  TerminalPramsManager_c *v13; // x0
  TerminalSceneComponent_c *v14; // x0
  UnityEngine_Object_o *mInstance; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *klass; // x8
  UnityEngine_Object_o *v17; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v18; // x8
  ScrTerminalListTop_o *v19; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v20; // x8
  UnityEngine_Object_o *v21; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v22; // x8
  const MethodInfo *v23; // x0
  WarEntity_o *WarEntityByWarID; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BD9A7F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD9A7F = 1;
  }
  WarEntityByWarID = 0LL;
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD92DF )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD92DF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4BD90A0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4BD90A0 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4BD909C )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4BD909C = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DispState_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_125;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    warId,
    (const MethodInfo_325BE14 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( !entity )
    return;
LABEL_25:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9674 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9674 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField = warId;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_125;
  PrioredParentId = WarEntity__GetPrioredParentId((WarEntity_o *)entity, 0LL);
  v9 = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( v9 )
  {
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)v9, PrioredParentId, 0LL);
    if ( WarEntityByWarID )
      goto LABEL_40;
  }
  else
  {
    WarEntityByWarID = 0LL;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_125;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    (Il2CppObject **)&WarEntityByWarID,
    PrioredParentId,
    (const MethodInfo_325BE14 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( !WarEntityByWarID )
    return;
LABEL_40:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD90A0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD90A0 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_WarId_k__BackingField = PrioredParentId;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarEntityByWarID;
  if ( !WarEntityByWarID )
    goto LABEL_125;
  if ( WarEntity__IsFolder(WarEntityByWarID, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD909C )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD909C = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->_DispState_k__BackingField = 3;
  }
  if ( entity )
    monitor_high = HIDWORD(entity[7].monitor);
  else
    monitor_high = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD8FB6 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8FB6 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_BlankEarthSpotId_k__BackingField = monitor_high;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  v14 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v14 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v14->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
    goto LABEL_117;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
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
  v17 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v18 = Master_object[2].fields.list->klass;
    if ( !v18 )
      goto LABEL_125;
    v19 = *(ScrTerminalListTop_o **)&v18->_2.static_fields_size;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9099 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9099 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v19 )
      goto LABEL_125;
    ScrTerminalListTop__RequestChangeTerminalListBG(v19, HIDWORD(Master_object[2].fields.list->klass), 0LL);
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v20 = Master_object[2].fields.list->klass;
  if ( !v20 )
    goto LABEL_125;
  v21 = *(UnityEngine_Object_o **)&v20->_2.instance_size;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
    goto LABEL_117;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v22 = Master_object[2].fields.list->klass;
  if ( !v22 || (Master_object = *(DataMasterBase_TMaster__TEntity__PKType__o **)&v22->_2.instance_size) == 0LL )
LABEL_125:
    sub_1C22094(Master_object, v5);
  TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)Master_object, 0LL);
LABEL_117:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD736A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD736A = 1;
  }
  v23 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_BYTE *)v23[2].virtualMethodPointer + 717) = 1;
  TerminalPramsManager__Save_SaveData(v23);
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
  if ( (byte_4BD9ABC & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_o *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9ABC = 1;
  }
  if ( !v8 )
    sub_1C22094(result, method);
  campaignDirectBonus = (int64_t)v8->fields.campaignDirectBonus;
  if ( campaignDirectBonus && *(_QWORD *)(campaignDirectBonus + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9AEE )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9AEE = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)campaignDirectBonus;
    sub_1C21DDC(
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

  if ( (byte_4BD9AA7 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AA7 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9AED )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AED = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignBonus_k__BackingField = campaignBonuses;
  sub_1C21DDC(
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
  TerminalPramsManager_c *v5; // x0
  System_Collections_Generic_Dictionary_int__int__o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  TerminalPramsManager_c *v13; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x0
  TerminalPramsManager_c *v16; // x0

  if ( (byte_4BD9AB3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AB3 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->folderLastIdxs )
  {
    v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v6,
      (const MethodInfo_32AC5B8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->folderLastIdxs = v6;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->folderLastIdxs, (int64_t)v6, v7, v8, v9, v10, v11, v12);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  folderLastIdxs = v5->static_fields->folderLastIdxs;
  if ( !folderLastIdxs
    || (System_Collections_Generic_Dictionary_int__int___Remove(
          folderLastIdxs,
          warId,
          (const MethodInfo_32AE334 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__),
        (folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs) == 0LL) )
  {
    sub_1C22094(folderLastIdxs, *(_QWORD *)&idx);
  }
  System_Collections_Generic_Dictionary_int__int___Add(
    folderLastIdxs,
    warId,
    idx,
    (const MethodInfo_32ACF7C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !byte_4BD9ADD )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9ADD = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_LastSelectQuestIndex_k__BackingField = idx;
}


void __fastcall TerminalPramsManager__SetQuestReleasedFocusState(
        int32_t questId,
        int32_t state,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v7; // x1

  if ( (byte_4BD9AB9 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AB9 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v5);
  if ( !QuestFocusStateManager )
    sub_1C22094(0LL, v7);
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

  if ( (byte_4BD9ABD & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9ABD = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (PartyOrganizationUtility_o *)&v9->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0LL;
  sub_1C21DDC(p_mQuestRewardInfos, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_1C21DDC(v22, rewardInfos, v13, v14, v15, v16, v17, v18);
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = (PartyOrganizationUtility_o *)&v23->static_fields->mQuestPhaseRewardInfos;
  p_mQuestPhaseRewardInfos->klass = 0LL;
  sub_1C21DDC(p_mQuestPhaseRewardInfos, 0LL, v13, v14, v15, v16, v17, v18);
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
    sub_1C21DDC(v34, resultQuestPhaseRewardInfos, v25, v26, v27, v28, v29, v30);
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestResultAfterEventRewardInfos = (PartyOrganizationUtility_o *)&v35->static_fields->mQuestResultAfterEventRewardInfos;
  p_mQuestResultAfterEventRewardInfos->klass = 0LL;
  sub_1C21DDC(p_mQuestResultAfterEventRewardInfos, 0LL, v25, v26, v27, v28, v29, v30);
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
    sub_1C21DDC(v47, resultAfterEventRewardInfos, v37, v38, v39, v40, v41, v42);
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
    sub_1C2209C(IsNullOrEmpty, v12);
  v56 = result->m_Items[0];
  if ( !v56 )
LABEL_44:
    sub_1C22094(IsNullOrEmpty, v12);
  resultUseRewardAddItemRewardInfos = (int64_t)v56->fields.resultUseRewardAddItemRewardInfos;
LABEL_37:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7267 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7267 = 1;
  }
  v57 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v57->static_fields;
  static_fields->_UseAddRewardItemRewardInfos_k__BackingField = (struct QuestRewardInfo_array *)resultUseRewardAddItemRewardInfos;
  sub_1C21DDC(
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
  TerminalPramsManager_c *v3; // x0
  System_String_o *mTerminalWarStartedIds; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v15 = war_id;
  if ( (byte_4BD9AB1 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    byte_4BD9AB1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsWarStartedId(war_id, method) )
  {
    v3 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v3 = TerminalPramsManager_TypeInfo;
    }
    mTerminalWarStartedIds = v3->static_fields->mTerminalWarStartedIds;
    v5 = System_Int32__ToString((int32_t)&v15, 0LL);
    v6 = System_String__Concat_63126736(mTerminalWarStartedIds, v5, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
    static_fields->mTerminalWarStartedIds = v6;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->mTerminalWarStartedIds,
      (int64_t)v6,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    TerminalPramsManager__Save_SaveData(v14);
  }
}


void __fastcall TerminalPramsManager__SpotIdSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A8C & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_13873/*"TerminalSpotId"*/);
    byte_4BD9A8C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9279 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9279 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13873/*"TerminalSpotId"*/,
    v1->static_fields->_SpotId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4BD9A92 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_13857/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C21E38(&StringLiteral_13858/*"TerminalBeforeEventActivityPointGauge"*/);
    byte_4BD9A92 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9AF4 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AF4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13857/*"TerminalBeforeEventActivityPoint"*/,
    v1->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_4BD9AF5 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AF5 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13858/*"TerminalBeforeEventActivityPointGauge"*/,
    v2->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfoDispSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A97 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11658/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    byte_4BD9A97 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11658/*"SAVEKEY_TerminalConquestInfoDisp"*/, v1->static_fields->eventConquestInfoDisp, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  struct EventConquestInfo_array *eventConquestInfos; // x19
  System_String_o *v3; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4BD9A96 & 1) == 0 )
  {
    sub_1C21E38(&EventConquestInfo___TypeInfo);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11659/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_1C21E38(&StringLiteral_11658/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    byte_4BD9A96 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = v1->static_fields->eventConquestInfos;
  if ( eventConquestInfos )
  {
    if ( !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      eventConquestInfos = TerminalPramsManager_TypeInfo->static_fields->eventConquestInfos;
    }
  }
  else
  {
    eventConquestInfos = (struct EventConquestInfo_array *)sub_1C21EE0(EventConquestInfo___TypeInfo, 0LL);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(&eventConquestInfos->obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11659/*"SAVEKEY_TerminalConquestInfos"*/, v3, 0LL);
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11658/*"SAVEKEY_TerminalConquestInfoDisp"*/, v4->static_fields->eventConquestInfoDisp, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A98 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11660/*"SAVEKEY_TerminalCraftInfoDisp"*/);
    byte_4BD9A98 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11660/*"SAVEKEY_TerminalCraftInfoDisp"*/, v1->static_fields->eventCraftInfoDisp, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  Il2CppObject *eventHarvestGrowthInfo; // x19
  System_String_o *v3; // x0

  if ( (byte_4BD9A99 & 1) == 0 )
  {
    sub_1C21E38(&EventHarvestGrowthInfo_TypeInfo);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11661/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    byte_4BD9A99 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  eventHarvestGrowthInfo = (Il2CppObject *)v1->static_fields->eventHarvestGrowthInfo;
  if ( eventHarvestGrowthInfo )
  {
    if ( !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      eventHarvestGrowthInfo = (Il2CppObject *)TerminalPramsManager_TypeInfo->static_fields->eventHarvestGrowthInfo;
    }
  }
  else
  {
    eventHarvestGrowthInfo = (Il2CppObject *)sub_1C22084(EventHarvestGrowthInfo_TypeInfo);
    System_Object___ctor(eventHarvestGrowthInfo, 0LL);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(eventHarvestGrowthInfo, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11661/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v3, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *BeforeEventSubmarineSaveData_k__BackingField; // x19
  System_String_o *v4; // x0

  if ( (byte_4BD9A94 & 1) == 0 )
  {
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_13859/*"TerminalBeforeEventSubmarinePointData"*/);
    byte_4BD9A94 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD918D )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD918D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( v1->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
  {
    if ( !v1->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v1);
    if ( !byte_4BD918D )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD918D = 1;
    }
    v2 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v2 = TerminalPramsManager_TypeInfo;
    }
    BeforeEventSubmarineSaveData_k__BackingField = (Il2CppObject *)v2->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v4 = JsonManager__toJson(BeforeEventSubmarineSaveData_k__BackingField, 0, 0, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13859/*"TerminalBeforeEventSubmarinePointData"*/, v4, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9AA1 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11663/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4BD9AA1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD964E )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD964E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11663/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v1->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9AA0 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11664/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    byte_4BD9AA0 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9816 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9816 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11664/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v1->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalTransitionInfoSave_SaveData(
        TerminalTransitionInfo_o *terminalTransitionInfo,
        const MethodInfo *method)
{
  if ( (byte_4BD9A91 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13879/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_1C21E38(&StringLiteral_13878/*"TerminalTransitionInfoMissionId"*/);
    byte_4BD9A91 = 1;
  }
  if ( terminalTransitionInfo )
  {
    UnityEngine_PlayerPrefs__SetInt(
      (System_String_o *)StringLiteral_13878/*"TerminalTransitionInfoMissionId"*/,
      terminalTransitionInfo->fields.missionId,
      0LL);
    UnityEngine_PlayerPrefs__SetString(
      (System_String_o *)StringLiteral_13879/*"TerminalTransitionInfoVoiceAssetName"*/,
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
  System_Collections_Generic_Dictionary_int__object__o *v5; // x0
  __int64 v6; // x8
  System_Collections_Generic_List_int__o *v7; // x21
  __int64 v8; // x8
  Il2CppClass *klass; // x8
  _QWORD *v10; // x9
  __int64 entries_low; // x10
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BD9ACA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9ACA = 1;
  }
  value = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9B0C )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9B0C = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  }
  v6 = *(_QWORD *)&v5[2].fields._entries->m_Items[17].fields.hashCode;
  if ( !v6 )
    goto LABEL_30;
  v5 = *(System_Collections_Generic_Dictionary_int__object__o **)(v6 + 16);
  if ( !v5 )
    goto LABEL_30;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          v5,
          eventId,
          &value,
          (const MethodInfo_32B71D8 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v7 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
    value = (Il2CppObject *)v7;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9B0C )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9B0C = 1;
    }
    v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
    }
    v8 = *(_QWORD *)&v5[2].fields._entries->m_Items[17].fields.hashCode;
    if ( v8 )
    {
      v5 = *(System_Collections_Generic_Dictionary_int__object__o **)(v8 + 16);
      if ( v5 )
      {
        System_Collections_Generic_Dictionary_int__object___Add(
          v5,
          eventId,
          value,
          (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        goto LABEL_24;
      }
    }
LABEL_30:
    sub_1C22094(v5, *(_QWORD *)&day);
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)value,
         day,
         (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return;
  }
LABEL_24:
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  klass = value[1].klass;
  v10 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(value[1].monitor);
  if ( !klass )
    goto LABEL_30;
  entries_low = SLODWORD(v5->fields._entries);
  if ( (unsigned int)entries_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)v5,
      day,
      *(const MethodInfo_3632090 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(v5->fields._entries) = entries_low + 1;
    *((_DWORD *)&klass->_1.byval_arg.data + entries_low) = day;
  }
}


int32_t __fastcall TerminalPramsManager__get_AfterActionFocusQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD998D & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD998D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_AfterActionFocusQuestId_k__BackingField;
}


BattleSetupInfo_o *__fastcall TerminalPramsManager__get_BattleSetupKeep(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99AF & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99AF = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  __int64 v3; // x8
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  int32_t *p_QuestId_k__BackingField; // x8
  TerminalPramsManager_c *v8; // x0

  if ( (byte_4BD99E7 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD99E7 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__checkNowScene(Instance, 34, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
    }
    v3 = **(_QWORD **)&Instance[1].fields.fadeType;
    if ( !v3 )
      goto LABEL_31;
    v4 = *(_QWORD *)(v3 + 264);
    if ( !v4 )
      goto LABEL_31;
    if ( *(_DWORD *)(v4 + 420) )
    {
      if ( !Instance[2].fields.m_CachedPtr )
        j_il2cpp_runtime_class_init_0(Instance);
      if ( !byte_4BD7183 )
      {
        sub_1C21E38(&TerminalSceneComponent_TypeInfo);
        byte_4BD7183 = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v5 = **(_QWORD **)&Instance[1].fields.fadeType;
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 264);
        if ( v6 )
        {
          p_QuestId_k__BackingField = (int32_t *)(v6 + 420);
          return *p_QuestId_k__BackingField;
        }
      }
LABEL_31:
      sub_1C22094(Instance, v2);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4BD9A02 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A02 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeEventActivityPoint_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BeforeEventActivityPointGauge(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A04 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A04 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeEventActivityPointGauge_k__BackingField;
}


EventSaveData_o *__fastcall TerminalPramsManager__get_BeforeEventSubmarineSaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A08 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A08 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BeforeQuestStartWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A6B & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A6B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeQuestStartWarId_k__BackingField;
}


int64_t __fastcall TerminalPramsManager__get_BeforeTimeEventDailyPoint(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99F6 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99F6 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BlankEarthAfterActionFocusSpotId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A28 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A28 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BlankEarthRank(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A2C & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A2C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BlankEarthRank_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BlankEarthSpotId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A26 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A26 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BlankEarthSpotId_k__BackingField;
}


BlankEarthTransform_o *__fastcall TerminalPramsManager__get_BlankEarthTransformData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A2A & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A2A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BlankEarthTransformData_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_CaldeaGateFolderFocusWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A3C & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A3C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField;
}


CommonUI_CampaignBonusData_array *__fastcall TerminalPramsManager__get_CampaignBonus(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99CD & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99CD = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_CampaignBonus_k__BackingField;
}


CommonUI_CampaignDirectBonusData_array *__fastcall TerminalPramsManager__get_CampaignDirectBonus(
        const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99CF & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99CF = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_CampaignDirectBonus_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_ClearEventQuestIds(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A00 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A00 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_ClearEventQuestIds_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_DataLostBattleEventId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99BB & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99BB = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_DataLostBattleEventId_k__BackingField;
}


float __fastcall TerminalPramsManager__get_DataLostBattleResetFadeInTime(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99C3 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99C3 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_DataLostBattleResetFadeInTime_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_DataLostBattleWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99BD & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99BD = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4BD996B & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD996B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_DispState_k__BackingField;
}


int64_t __fastcall TerminalPramsManager__get_EndTime(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99B1 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99B1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EndTime_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventActionQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99D1 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99D1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventActionQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventActivityPointEffectState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A06 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A06 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventActivityPointEffectState_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventBoardGameSquareIndex(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A0E & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A0E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventBoardGameSquareIndex_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventDailyPointEventId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99F8 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99F8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventDailyPointEventId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventDailyPointItem(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99F4 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99F4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventDailyPointItem_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventMuralId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD999B & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD999B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4BD9A0A & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A0A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventUIEffectClearQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A32 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A32 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventUIEffectClearQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventUiWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A6D & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A6D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventUiWarId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_FriendshipQuestDialogOpenId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A61 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A61 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_FriendshipQuestDialogOpenId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoFolder(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A4F & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A4F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsAutoFolder_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoNoSe(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A53 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A53 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsAutoNoSe_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoOpenMasterMission(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A79 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A79 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->mIsAutoOpenMasterMission;
}


bool __fastcall TerminalPramsManager__get_IsAutoResume(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A49 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A49 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsAutoResume_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoShortcut(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A4B & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A4B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsAutoShortcut_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsBackQuestBoardDisable(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A69 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A69 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsBackQuestBoardDisable_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsBlankEarthShortcutMoving(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A2E & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A2E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsBlankEarthShortcutMoving_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsCheckHomeExpirationDateEventMap(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A55 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A55 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->isCheckHomeExpirationDateEventMap;
}


bool __fastcall TerminalPramsManager__get_IsDataLostBattleAutoReset(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99B9 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99B9 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDataLostBattleAutoReset_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDataLostBattleNoticePause(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99C5 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99C5 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDataLostBattleNoticePause_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDataLostBattleResetFadeIn(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99C1 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99C1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDirectTransition(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A38 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A38 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDirectTransition_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispDone_AutoWebView(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD998F & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD998F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDispDone_AutoWebView_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispDone_UIStandFigure(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9991 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9991 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDispDone_UIStandFigure_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispOnly(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99A3 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99A3 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDispOnly_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispUIStandFigure(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9993 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9993 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDispUIStandFigure_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDoneShortcut(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9979 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9979 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDoneShortcut_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsErrorDialogReturnTerminal(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A71 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A71 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsErrorDialogReturnTerminal_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsEventBoardGameDiceBtnActive(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A10 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A10 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsForceFocusTerminalQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9981 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9981 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsForceFocusTerminalQuestId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsFromRecollectionBoard(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD997F & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD997F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsFromRecollectionBoard_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsInvisibleConnectAndLoad(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A41 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A41 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->isInvisibleConnectAndLoad;
}


bool __fastcall TerminalPramsManager__get_IsMainInterludeWarClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9999 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9999 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsMainInterludeWarClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsMapReturnFolder(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A4D & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A4D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsMapReturnFolder_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsMoveFolderByQuestAfterAction(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A51 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A51 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsOrdealCallWarClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9997 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9997 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsOrdealCallWarClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPhaseClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99A1 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99A1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPhaseClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayEventBoardGameArrivalEffectAuto(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99A7 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99A7 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayEventBoardGameDiceBtnActiveEffect(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A12 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A12 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayGetEffect(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99C9 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99C9 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayGetEffect_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayScriptWithMap(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99A5 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99A5 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayScriptWithMap_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayTerminalEffectDisappear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A20 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A20 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_IsPlayTerminalEffectDisappearWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A22 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A22 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayTerminalEffectNt2AfterAction(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A24 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A24 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayedEntryBanner(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99C7 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99C7 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayedEntryBanner_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsQuestClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD999F & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD999F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsQuestClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsScriptDisp(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99A9 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99A9 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsScriptDisp_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsSkipNoticeLoginQuestAtOnce(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A67 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A67 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsStopMasterFaceOverwrite(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99BF & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99BF = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsStopMasterFaceOverwrite_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsTopLastIdxNextBoardRequest(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A57 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A57 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsTransOrdealCall(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A36 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A36 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsTransOrdealCall_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsWarBoardClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99B3 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99B3 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsWarBoardClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsWarClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9995 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9995 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsWarClear_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_LastPlayedFreeQuestSpotId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9989 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9989 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_LastPlayedQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9987 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9987 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayedQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_LastSelectQuestIndex(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD998B & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD998B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_LastSelectQuestIndex_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_LimitCountUnSealQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A63 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A63 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_LimitCountUnSealQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MapModelClearPhaseCount(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99B7 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99B7 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_MapModelClearPhaseCount_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MapModelClearQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99B5 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99B5 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_MapModelClearQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MasterMissionTargetType(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A7B & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A7B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_MasterMissionTargetType_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MessageDispType(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99AB & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99AB = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_MessageDispType_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_NoticeLastModified(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A30 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A30 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_NoticeLastModified_k__BackingField;
}


UserEventPointEntity_array *__fastcall TerminalPramsManager__get_OldUserEventPoint(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A3E & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A3E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_OldUserEventPoint_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_PhaseCnt(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9977 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9977 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_PhaseCnt_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_PlayHappinessCounterEffect(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD999D & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD999D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_PlayHappinessCounterEffect_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_PlayedTerminalEffects(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A1E & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A1E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_PlayedTerminalEffects_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_PlayerGenderType(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99CB & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99CB = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  TerminalPramsManager_c *v9; // x0
  PartyOrganizationUtility_o *p_questFocusStateManager; // x0

  if ( (byte_4BD9A40 & 1) == 0 )
  {
    sub_1C21E38(&QuestFocusStateManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A40 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->questFocusStateManager )
  {
    v2 = (QuestFocusStateManager_o *)sub_1C22084(QuestFocusStateManager_TypeInfo);
    QuestFocusStateManager___ctor(v2, 0LL);
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    p_questFocusStateManager = (PartyOrganizationUtility_o *)&v9->static_fields->questFocusStateManager;
    p_questFocusStateManager->klass = (PartyOrganizationUtility_c *)v2;
    sub_1C21DDC(p_questFocusStateManager, (int64_t)v2, v3, v4, v5, v6, v7, v8);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->questFocusStateManager;
}


int32_t __fastcall TerminalPramsManager__get_QuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9975 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9975 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_QuestMessageScriptQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A59 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A59 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestMessageScriptQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_QuestMessageScriptQuestPhase(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A5B & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A5B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4BD9A1C & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A1C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestRandomGroupList_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_QuestReleaseFocusQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9983 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9983 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestReleaseFocusQuestId_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_QuestWindowMessage(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99AD & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99AD = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestWindowMessage_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_SceneMoveQuestClearedInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A34 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A34 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
}


BannerEntity_o *__fastcall TerminalPramsManager__get_SelectedBannerEntity(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9985 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9985 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SelectedBannerEntity_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SelectedRecollectionWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD997D & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD997D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SelectedRecollectionWarId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SelectedStoryQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD997B & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD997B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SelectedStoryQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_ShopFocusItemId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A3A & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A3A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_ShopFocusItemId_k__BackingField;
}


SpecifiedSceneInfo_o *__fastcall TerminalPramsManager__get_SpecifiedChangeSceneInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99D5 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99D5 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SpotId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9973 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9973 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SpotId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SummonId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9971 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9971 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SummonId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SummonType(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD996F & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD996F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4BD9A5D & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A5D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_TalkScriptInfo_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_TimeStatusEventId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99FC & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99FC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_TimeStatusEventId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_TimeStatusLoopCount(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99FE & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99FE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_TimeStatusLoopCount_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_TransitionScrollTabName(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A6F & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A6F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_TransitionScrollTabName_k__BackingField;
}


QuestRewardInfo_array *__fastcall TerminalPramsManager__get_UseAddRewardItemRewardInfos(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A73 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A73 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
}


WarBoardDataEntity_o *__fastcall TerminalPramsManager__get_WarBoardData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A14 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A14 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_WarBoardData_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_WarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD996D & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD996D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  float ZOOM_DEFAULT; // s8

  if ( (byte_4BD99D3 & 1) == 0 )
  {
    sub_1C21E38(&MapZoom_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99D3 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( v1->static_fields->mZoomSize <= 0.0 )
  {
    v2 = MapZoom_TypeInfo;
    if ( !MapZoom_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
      v2 = MapZoom_TypeInfo;
      v1 = TerminalPramsManager_TypeInfo;
    }
    ZOOM_DEFAULT = v2->static_fields->ZOOM_DEFAULT;
    if ( !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      v1 = TerminalPramsManager_TypeInfo;
    }
    v1->static_fields->mZoomSize = ZOOM_DEFAULT;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->mZoomSize;
}


EventDailyPoint_o *__fastcall TerminalPramsManager__get_eventDailyPoint(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99F2 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99F2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventDailyPoint_k__BackingField;
}


EventPointWinReward_o *__fastcall TerminalPramsManager__get_eventPointWinReward(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99DD & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99DD = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventPointWinReward_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_eventPointWinType(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99DB & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99DB = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventPointWinType_k__BackingField;
}


EventRaceBoostInfo_o *__fastcall TerminalPramsManager__get_eventRaceBoost(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99DF & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99DF = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventRaceBoost_k__BackingField;
}


EventTowerReward_o *__fastcall TerminalPramsManager__get_eventTowerReward(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99E8 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99E8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventTowerReward_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isFortificationCheck(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A18 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A18 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isFortificationCheck_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isIncomingCall(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A0C & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A0C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isIncomingCall_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isPlayRiverActionCheck(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A1A & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A1A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isPlayRiverActionCheck_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isQuestRewardSetted(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A47 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A47 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isQuestRewardSetted_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isWarBoardPlay(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A16 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A16 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isWarBoardPlay_k__BackingField;
}


LimitImageAnnounce_array *__fastcall TerminalPramsManager__get_limitImageAnnounces(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A5F & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A5F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_limitImageAnnounces_k__BackingField;
}


UserSuperBossEntity_array *__fastcall TerminalPramsManager__get_oldPersonalBoss(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99D9 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99D9 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_oldPersonalBoss_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_oldQuestIdForHeaderEvent(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99E5 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99E5 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_oldQuestIdForHeaderEvent_k__BackingField;
}


UserSuperBossEntity_array *__fastcall TerminalPramsManager__get_oldSuperBoss(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99D7 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99D7 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_oldSuperBoss_k__BackingField;
}


CostumeReleaseAnnounce_array *__fastcall TerminalPramsManager__get_questClearCostumeGet(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99E3 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99E3 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_questClearCostumeGet_k__BackingField;
}


CostumeReleaseAnnounce_array *__fastcall TerminalPramsManager__get_questClearCostumeRelease(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99E1 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99E1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_questClearCostumeRelease_k__BackingField;
}


QuestRewardInfo_array *__fastcall TerminalPramsManager__get_resultBoostItemRewardInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99EC & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99EC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4BD99EE & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99EE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
}


QuestRewardInfo_array *__fastcall TerminalPramsManager__get_resultEventTowerRewardInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99EA & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99EA = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_resultEventTowerRewardInfo_k__BackingField;
}


TimeStatusRecord_o *__fastcall TerminalPramsManager__get_timeStatusRecord(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99F0 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99F0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4BD9A65 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A65 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_updateProfileInfoEntity_k__BackingField;
}


WarClearReward_array *__fastcall TerminalPramsManager__get_warClearReward(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD99FA & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99FA = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_warClearReward_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__mfGetSceneStatus(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4BD9A84 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A84 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->meSceneStatus;
}


void __fastcall TerminalPramsManager__mfSetSceneStatus(int32_t eSceneStatus, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BD9A83 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A83 = 1;
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

  if ( (byte_4BD998E & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD998E = 1;
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

  if ( (byte_4BD99B0 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99B0 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BattleSetupKeep_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD9A03 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A03 = 1;
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

  if ( (byte_4BD9A05 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A05 = 1;
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

  if ( (byte_4BD9A09 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A09 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BeforeEventSubmarineSaveData_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD9A6C & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A6C = 1;
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

  if ( (byte_4BD99F7 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99F7 = 1;
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

  if ( (byte_4BD9A29 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A29 = 1;
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

  if ( (byte_4BD9A2D & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A2D = 1;
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

  if ( (byte_4BD9A27 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A27 = 1;
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

  if ( (byte_4BD9A2B & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A2B = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BlankEarthTransformData_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD9A3D & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A3D = 1;
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

  if ( (byte_4BD99CE & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99CE = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignBonus_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD99D0 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99D0 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD9A01 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A01 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_ClearEventQuestIds_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD99BC & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99BC = 1;
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BD99C4 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99C4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_DataLostBattleWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BD99BE & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99BE = 1;
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

  if ( (byte_4BD9A46 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A46 = 1;
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

  if ( (byte_4BD9A45 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A45 = 1;
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

  if ( (byte_4BD9A43 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A43 = 1;
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

  if ( (byte_4BD9A44 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A44 = 1;
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

  if ( (byte_4BD996C & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD996C = 1;
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

  if ( (byte_4BD99B2 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99B2 = 1;
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

  if ( (byte_4BD99D2 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99D2 = 1;
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

  if ( (byte_4BD9A07 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A07 = 1;
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

  if ( (byte_4BD9A0F & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A0F = 1;
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

  if ( (byte_4BD99F9 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99F9 = 1;
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

  if ( (byte_4BD99F5 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99F5 = 1;
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

  if ( (byte_4BD999C & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD999C = 1;
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

  if ( (byte_4BD9A0B & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A0B = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD9A33 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A33 = 1;
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

  if ( (byte_4BD9A6E & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A6E = 1;
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

  if ( (byte_4BD9A62 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A62 = 1;
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

  if ( (byte_4BD9A50 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A50 = 1;
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

  if ( (byte_4BD9A54 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A54 = 1;
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

  if ( (byte_4BD9A7A & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A7A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v3 = value;
  if ( !byte_4BD736A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD736A = 1;
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

  if ( (byte_4BD9A4A & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A4A = 1;
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

  if ( (byte_4BD9A4C & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A4C = 1;
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

  if ( (byte_4BD9A6A & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A6A = 1;
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

  if ( (byte_4BD9A2F & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A2F = 1;
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

  if ( (byte_4BD9A56 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A56 = 1;
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

  if ( (byte_4BD99BA & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99BA = 1;
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

  if ( (byte_4BD99C6 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99C6 = 1;
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

  if ( (byte_4BD99C2 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99C2 = 1;
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

  if ( (byte_4BD9A39 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A39 = 1;
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

  if ( (byte_4BD9990 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9990 = 1;
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

  if ( (byte_4BD9992 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9992 = 1;
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

  if ( (byte_4BD99A4 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99A4 = 1;
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

  if ( (byte_4BD9994 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9994 = 1;
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

  if ( (byte_4BD997A & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD997A = 1;
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

  if ( (byte_4BD9A72 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A72 = 1;
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

  if ( (byte_4BD9A11 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A11 = 1;
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

  if ( (byte_4BD9982 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9982 = 1;
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

  if ( (byte_4BD9980 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9980 = 1;
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

  if ( (byte_4BD9A42 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A42 = 1;
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

  if ( (byte_4BD999A & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD999A = 1;
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

  if ( (byte_4BD9A4E & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A4E = 1;
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

  if ( (byte_4BD9A52 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A52 = 1;
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

  if ( (byte_4BD9998 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9998 = 1;
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

  if ( (byte_4BD99A2 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99A2 = 1;
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

  if ( (byte_4BD99A8 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99A8 = 1;
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

  if ( (byte_4BD9A13 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A13 = 1;
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

  if ( (byte_4BD99CA & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99CA = 1;
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

  if ( (byte_4BD99A6 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99A6 = 1;
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

  if ( (byte_4BD9A21 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A21 = 1;
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

  if ( (byte_4BD9A23 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A23 = 1;
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

  if ( (byte_4BD9A25 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A25 = 1;
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

  if ( (byte_4BD99C8 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99C8 = 1;
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

  if ( (byte_4BD99A0 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99A0 = 1;
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

  if ( (byte_4BD99AA & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99AA = 1;
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

  if ( (byte_4BD9A68 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A68 = 1;
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

  if ( (byte_4BD99C0 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99C0 = 1;
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

  if ( (byte_4BD9A58 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A58 = 1;
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

  if ( (byte_4BD9A37 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A37 = 1;
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

  if ( (byte_4BD99B4 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99B4 = 1;
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

  if ( (byte_4BD9996 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9996 = 1;
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

  if ( (byte_4BD998A & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD998A = 1;
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

  if ( (byte_4BD9988 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9988 = 1;
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

  if ( (byte_4BD998C & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD998C = 1;
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

  if ( (byte_4BD9A64 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A64 = 1;
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

  if ( (byte_4BD99B8 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99B8 = 1;
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

  if ( (byte_4BD99B6 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99B6 = 1;
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

  if ( (byte_4BD9A7C & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A7C = 1;
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

  if ( (byte_4BD99AC & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99AC = 1;
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

  if ( (byte_4BD9A31 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A31 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_NoticeLastModified_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD9A3F & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A3F = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_OldUserEventPoint_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD9978 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9978 = 1;
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

  if ( (byte_4BD999E & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD999E = 1;
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

  if ( (byte_4BD9A1F & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A1F = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_PlayedTerminalEffects_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD99CC & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99CC = 1;
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

  if ( (byte_4BD9976 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9976 = 1;
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

  if ( (byte_4BD9A5A & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A5A = 1;
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

  if ( (byte_4BD9A5C & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A5C = 1;
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

  if ( (byte_4BD9A1D & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A1D = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_QuestRandomGroupList_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD9984 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9984 = 1;
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

  if ( (byte_4BD99AE & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99AE = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD9A35 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A35 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SceneMoveQuestClearedInfo_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD9986 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9986 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD997E & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD997E = 1;
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

  if ( (byte_4BD997C & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD997C = 1;
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

  if ( (byte_4BD9A3B & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A3B = 1;
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

  if ( (byte_4BD99D6 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99D6 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SpecifiedChangeSceneInfo_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD9974 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9974 = 1;
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

  if ( (byte_4BD9972 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9972 = 1;
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

  if ( (byte_4BD9970 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9970 = 1;
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

  if ( (byte_4BD9A5E & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A5E = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_TalkScriptInfo_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD99FD & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99FD = 1;
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

  if ( (byte_4BD99FF & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99FF = 1;
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

  if ( (byte_4BD9A70 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A70 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_TransitionScrollTabName_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD9A74 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A74 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_UseAddRewardItemRewardInfos_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD9A15 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A15 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_WarBoardData_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD996E & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD996E = 1;
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BD99D4 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99D4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mZoomSize = value;
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

  if ( (byte_4BD99F3 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99F3 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventDailyPoint_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD99DE & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99DE = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventPointWinReward_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD99DC & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99DC = 1;
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

  if ( (byte_4BD99E0 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99E0 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventRaceBoost_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD99E9 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99E9 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventTowerReward_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD9A19 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A19 = 1;
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

  if ( (byte_4BD9A0D & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A0D = 1;
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

  if ( (byte_4BD9A1B & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A1B = 1;
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

  if ( (byte_4BD9A48 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A48 = 1;
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

  if ( (byte_4BD9A17 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A17 = 1;
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

  if ( (byte_4BD9A60 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A60 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_limitImageAnnounces_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD99DA & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99DA = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_oldPersonalBoss_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD99E6 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99E6 = 1;
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

  if ( (byte_4BD99D8 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99D8 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_oldSuperBoss_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD99E4 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99E4 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_questClearCostumeGet_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD99E2 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99E2 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_questClearCostumeRelease_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD99ED & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99ED = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_resultBoostItemRewardInfo_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD99EF & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99EF = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (PartyOrganizationUtility_o *)v9->static_fields;
  static_fields[2].klass = (PartyOrganizationUtility_c *)value;
  sub_1C21DDC(static_fields + 2, (int64_t)value, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4BD99EB & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99EB = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_resultEventTowerRewardInfo_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD99F1 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99F1 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_timeStatusRecord_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD9A66 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9A66 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_updateProfileInfoEntity_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BD99FB & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD99FB = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_warClearReward_k__BackingField = value;
  sub_1C21DDC(
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
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BD9B14 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C21E38(&StringLiteral_13534/*"TERMINAL_CLEAR_REWARD_DISP"*/);
    byte_4BD9B14 = 1;
  }
  TerminalPramsManager_ClearData_TypeInfo->static_fields->SAVEKEY_CLEAR_REWARD_DISP = (struct System_String_o *)StringLiteral_13534/*"TERMINAL_CLEAR_REWARD_DISP"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)TerminalPramsManager_ClearData_TypeInfo->static_fields,
    StringLiteral_13534/*"TERMINAL_CLEAR_REWARD_DISP"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
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

  if ( (byte_4BD9B12 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9B12 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.qClearHeroineInfo = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.questRewardInfos = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.questRewardInfos, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.questPhaseRewardInfos = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.questPhaseRewardInfos, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.questResultAfterEventRewardInfos = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.questResultAfterEventRewardInfos,
    0LL,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.resultEventPanelRewardInfos = 0LL;
  sub_1C21DDC(
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mOldSuperBoss, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.oldPersonalBoss = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.oldPersonalBoss, 0LL, v39, v40, v41, v42, v43, v44);
  this->fields.evPointWinReward = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.evPointWinReward, 0LL, v45, v46, v47, v48, v49, v50);
  this->fields.evPointWinType = 0;
  this->fields.evRaceBoost = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.evRaceBoost, 0LL, v51, v52, v53, v54, v55, v56);
  this->fields.questClearCostume = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.questClearCostume, 0LL, v57, v58, v59, v60, v61, v62);
  this->fields.questClearCostumeGetInfo = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.questClearCostumeGetInfo, 0LL, v63, v64, v65, v66, v67, v68);
  this->fields.eventTowerReward = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.eventTowerReward, 0LL, v69, v70, v71, v72, v73, v74);
  this->fields.resultEventTowerRewardInfo = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.resultEventTowerRewardInfo, 0LL, v75, v76, v77, v78, v79, v80);
  this->fields.warClearReward = 0LL;
  this->fields.isDispOnly = 0;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.warClearReward, 0LL, v81, v82, v83, v84, v85, v86);
  v93 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v93 = TerminalPramsManager_TypeInfo;
  }
  this->fields.EventActivityPointEffectState = v93->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  this->fields.limitImageAnnounces = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.limitImageAnnounces, 0LL, v87, v88, v89, v90, v91, v92);
  this->fields.isOrdealCallWarClear = 0;
  this->fields.eventMuralId = 0;
  this->fields.playHappinessCounterEffect = 0;
  this->fields.oldUserEventPoint = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.oldUserEventPoint, 0LL, v94, v95, v96, v97, v98, v99);
  this->fields.UseAddRewardItemRewardInfos = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.UseAddRewardItemRewardInfos,
    0LL,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
}


void __fastcall TerminalPramsManager_ClearData___ctor_35916240(
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
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v41; // x0
  const MethodInfo *v42; // x2
  int64_t v43; // x26
  __int64 v44; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  bool v52; // w29
  bool v53; // w23
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
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
  struct QuestRewardInfo_array *v114; // x1
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  TerminalPramsManager_c *v121; // x0
  TerminalPramsManager_c *v122; // x0
  struct QuestRewardInfo_array *resultBoostItemRewardInfo_k__BackingField; // x1
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  TerminalPramsManager_c *v136; // x0
  TerminalPramsManager_c *v137; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo_k__BackingField; // x1
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  struct WarClearReward_array *v145; // x1
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  struct BattleDropItem_array *v152; // x1
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  struct BattleDropItem_array *v159; // x1
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  struct LimitImageAnnounce_array *v166; // x1
  int64_t v167; // x2
  int32_t v168; // w3
  System_String_o *v169; // x4
  BattleSetupInfo_o *v170; // x5
  FollowerInfo_o *v171; // x6
  PartyListViewItem_o *v172; // x7
  TerminalPramsManager_c *v173; // x0
  struct QuestRewardInfo_array *v174; // x20
  struct UserEventPointEntity_array *OldUserEventPoint_k__BackingField; // x1
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  long double inited; // q0
  _QWORD *v183; // x20
  __int64 v184; // x8
  __int64 v185; // x0
  __int64 v186; // x0

  v31 = oldSuperBoss;
  v38 = questClearCostumeGet;
  v39 = questClearCostumeRelease;
  v40 = oldPersonalBoss;
  if ( (byte_4BD9B13 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_QuestRewardInfo___);
    sub_1C21E38(&BattleDropItem___TypeInfo);
    sub_1C21E38(&CostumeReleaseAnnounce___TypeInfo);
    sub_1C21E38(&LimitImageAnnounce___TypeInfo);
    sub_1C21E38(&TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
    sub_1C21E38(&QuestRewardInfo___TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&UserSuperBossEntity___TypeInfo);
    sub_1C21E38(&WarClearReward___TypeInfo);
    byte_4BD9B13 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v41 = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)sub_1C22084(TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
  v43 = (int64_t)v41;
  if ( qcrHeroineInfo )
  {
    TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_35915468(v41, qcrHeroineInfo, v42);
    if ( this )
      goto LABEL_5;
LABEL_34:
    sub_1C22094(v44, v45);
  }
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  *(_QWORD *)(v43 + 16) = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v43 + 16), 0LL, v124, v125, v126, v127, v128, v129);
  if ( !this )
    goto LABEL_34;
LABEL_5:
  this->fields.qClearHeroineInfo = (struct TerminalPramsManager_QuestClearHeroineInfoForSave_o *)v43;
  v52 = qClear;
  v53 = pclear;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, v43, v46, v47, v48, v49, v50, v51);
  if ( !qri )
    qri = (QuestRewardInfo_array *)sub_1C21EE0(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.questRewardInfos = qri;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.questRewardInfos, (int64_t)qri, v54, v55, v56, v57, v58, v59);
  if ( !questPhaseRewardInfos )
    questPhaseRewardInfos = (QuestRewardInfo_array *)sub_1C21EE0(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.questPhaseRewardInfos = questPhaseRewardInfos;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.questPhaseRewardInfos,
    (int64_t)questPhaseRewardInfos,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields.questClear = v52;
  this->fields.phaseClear = v53;
  this->fields.clearedLastBattleRaidId = lastRaidId;
  this->fields.clearedBattleRaidId = raidId;
  this->fields.joinGroup = groupjoin;
  if ( !oldSuperBoss )
    v31 = (struct UserSuperBossEntity_array *)sub_1C21EE0(UserSuperBossEntity___TypeInfo, 0LL);
  this->fields.mOldSuperBoss = v31;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mOldSuperBoss, (int64_t)v31, v66, v67, v68, v69, v70, v71);
  if ( !oldPersonalBoss )
    v40 = (struct UserSuperBossEntity_array *)sub_1C21EE0(UserSuperBossEntity___TypeInfo, 0LL);
  this->fields.oldPersonalBoss = v40;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.oldPersonalBoss, (int64_t)v40, v72, v73, v74, v75, v76, v77);
  this->fields.evPointWinReward = evpWinReward;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.evPointWinReward,
    (int64_t)evpWinReward,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  this->fields.evRaceBoost = evRace;
  this->fields.evPointWinType = evpWinType;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.evRaceBoost, (int64_t)evRace, v84, v85, v86, v87, v88, v89);
  if ( !questClearCostumeRelease )
    v39 = (struct CostumeReleaseAnnounce_array *)sub_1C21EE0(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostume = v39;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.questClearCostume, (int64_t)v39, v90, v91, v92, v93, v94, v95);
  if ( !questClearCostumeGet )
    v38 = (struct CostumeReleaseAnnounce_array *)sub_1C21EE0(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostumeGetInfo = v38;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.questClearCostumeGetInfo,
    (int64_t)v38,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  this->fields.eventTowerReward = evTowerReward;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.eventTowerReward,
    (int64_t)evTowerReward,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  v114 = resultEvTowerRewardInfo;
  if ( !resultEvTowerRewardInfo )
    v114 = (struct QuestRewardInfo_array *)sub_1C21EE0(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.resultEventTowerRewardInfo = v114;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.resultEventTowerRewardInfo,
    (int64_t)v114,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD965D )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD965D = 1;
  }
  v121 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v121 = TerminalPramsManager_TypeInfo;
  }
  if ( v121->static_fields->_resultBoostItemRewardInfo_k__BackingField )
  {
    if ( !v121->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v121);
    if ( !byte_4BD965D )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD965D = 1;
    }
    v122 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v122 = TerminalPramsManager_TypeInfo;
    }
    resultBoostItemRewardInfo_k__BackingField = v122->static_fields->_resultBoostItemRewardInfo_k__BackingField;
  }
  else
  {
    resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1C21EE0(
                                                                                  QuestRewardInfo___TypeInfo,
                                                                                  0LL);
  }
  this->fields.resultBoostItemRewardInfo = resultBoostItemRewardInfo_k__BackingField;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.resultBoostItemRewardInfo,
    (int64_t)resultBoostItemRewardInfo_k__BackingField,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9655 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9655 = 1;
  }
  v136 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v136 = TerminalPramsManager_TypeInfo;
  }
  if ( v136->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField )
  {
    if ( !v136->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v136);
    if ( !byte_4BD9655 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9655 = 1;
    }
    v137 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v137 = TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfo_k__BackingField = v137->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
  }
  else
  {
    resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1C21EE0(
                                                                                            QuestRewardInfo___TypeInfo,
                                                                                            0LL);
  }
  this->fields.resultEventBoardGameTokenRewardInfo = resultEventBoardGameTokenRewardInfo_k__BackingField;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.resultEventBoardGameTokenRewardInfo,
    (int64_t)resultEventBoardGameTokenRewardInfo_k__BackingField,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  v145 = warClearRewardIn;
  this->fields.isDispOnly = dispOnly;
  if ( !warClearRewardIn )
    v145 = (struct WarClearReward_array *)sub_1C21EE0(WarClearReward___TypeInfo, 0LL);
  this->fields.warClearReward = v145;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.warClearReward,
    (int64_t)v145,
    v139,
    v140,
    v141,
    v142,
    v143,
    v144);
  v152 = questResultAfterEventRewardInfos;
  this->fields.isWarBoardClear = isWarBoardClear;
  this->fields.EventActivityPointEffectState = eventActivityPointEffectState;
  if ( !questResultAfterEventRewardInfos )
    v152 = (struct BattleDropItem_array *)sub_1C21EE0(BattleDropItem___TypeInfo, 0LL);
  this->fields.questResultAfterEventRewardInfos = v152;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.questResultAfterEventRewardInfos,
    (int64_t)v152,
    v146,
    v147,
    v148,
    v149,
    v150,
    v151);
  v159 = resultEventPanelRewardInfos;
  if ( !resultEventPanelRewardInfos )
    v159 = (struct BattleDropItem_array *)sub_1C21EE0(BattleDropItem___TypeInfo, 0LL);
  this->fields.resultEventPanelRewardInfos = v159;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.resultEventPanelRewardInfos,
    (int64_t)v159,
    v153,
    v154,
    v155,
    v156,
    v157,
    v158);
  v166 = limitImageAnnounces;
  this->fields.panelEventPoint = panelEventPoint;
  if ( !limitImageAnnounces )
    v166 = (struct LimitImageAnnounce_array *)sub_1C21EE0(LimitImageAnnounce___TypeInfo, 0LL);
  this->fields.limitImageAnnounces = v166;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.limitImageAnnounces,
    (int64_t)v166,
    v160,
    v161,
    v162,
    v163,
    v164,
    v165);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD8FB5 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8FB5 = 1;
  }
  v173 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v173 = TerminalPramsManager_TypeInfo;
  }
  this->fields.isOrdealCallWarClear = v173->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4BD9658 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v173 = TerminalPramsManager_TypeInfo;
    byte_4BD9658 = 1;
  }
  if ( !v173->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v173);
    v173 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventMuralId = v173->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_4BD9817 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v173 = TerminalPramsManager_TypeInfo;
    byte_4BD9817 = 1;
  }
  if ( !v173->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v173);
    v173 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventActionQuestId = v173->static_fields->_EventActionQuestId_k__BackingField;
  if ( !byte_4BD965A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v173 = TerminalPramsManager_TypeInfo;
    byte_4BD965A = 1;
  }
  if ( !v173->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v173);
    v173 = TerminalPramsManager_TypeInfo;
  }
  this->fields.playHappinessCounterEffect = v173->static_fields->_PlayHappinessCounterEffect_k__BackingField;
  if ( !byte_4BD90A2 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v173 = TerminalPramsManager_TypeInfo;
    byte_4BD90A2 = 1;
  }
  if ( !v173->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v173);
    v173 = TerminalPramsManager_TypeInfo;
  }
  v174 = useAddRewardItemRewardInfos;
  OldUserEventPoint_k__BackingField = v173->static_fields->_OldUserEventPoint_k__BackingField;
  this->fields.oldUserEventPoint = OldUserEventPoint_k__BackingField;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.oldUserEventPoint,
    (int64_t)OldUserEventPoint_k__BackingField,
    v167,
    v168,
    v169,
    v170,
    v171,
    v172);
  if ( !useAddRewardItemRewardInfos )
  {
    v183 = Method_System_Array_Empty_QuestRewardInfo___;
    v184 = *((_QWORD *)Method_System_Array_Empty_QuestRewardInfo___ + 7);
    if ( !v184 )
    {
      sub_1C73D70(Method_System_Array_Empty_QuestRewardInfo___);
      v184 = v183[7];
    }
    v185 = *(_QWORD *)(v184 + 16);
    if ( (*(_BYTE *)(v185 + 309) & 1) == 0 )
      v185 = sub_1C73D14(inited);
    if ( !*(_DWORD *)(v185 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v185);
    v186 = *(_QWORD *)(v183[7] + 16LL);
    if ( (*(_BYTE *)(v186 + 309) & 1) == 0 )
      v186 = sub_1C73D14(inited);
    v174 = **(struct QuestRewardInfo_array ***)(v186 + 184);
  }
  this->fields.UseAddRewardItemRewardInfos = v174;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.UseAddRewardItemRewardInfos,
    (int64_t)v174,
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


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor_35914704(
        TerminalPramsManager_OldHeroineLawData_o *this,
        UserServantEntity_o *uSvtEnt,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int128 v7; // q1
  __int128 v8; // q1
  __int64 v9; // x21
  __int64 v10; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4BD9B0E & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4BD9B0E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !uSvtEnt )
    sub_1C22094(v5, v6);
  v7 = *(_OWORD *)&uSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  this->fields.id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v12, 0LL);
  v8 = *(_OWORD *)&uSvtEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v11, 0LL);
  v10 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v14, 0LL);
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                              uSvtEnt->fields.limitCount,
                              0LL);
  this->fields.imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                   uSvtEnt->fields.imageLimitCount,
                                   0LL);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                  uSvtEnt->fields.dispLimitCount,
                                  0LL);
  this->fields.commandCardLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                         uSvtEnt->fields.commandCardLimitCount,
                                         0LL);
  this->fields.iconLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
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
  __int64 v3; // x20
  int64_t id; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v5; // x0
  __int64 v6; // x1
  __int128 v7; // q0
  __int128 v8; // q0
  int32_t svtId; // w21
  UserServantEntity_o *result; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+40h] [xbp-50h]

  if ( (byte_4BD9B0F & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&UserServantEntity_TypeInfo);
    byte_4BD9B0F = 1;
  }
  v3 = sub_1C22084(UserServantEntity_TypeInfo);
  UserServantEntity___ctor((UserServantEntity_o *)v3, 0LL);
  id = this->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v12, id, 0LL);
  v13 = v12;
  if ( !v3 )
    sub_1C22094(v5, v6);
  v7 = *(_OWORD *)&v13.fields.fakeValue;
  *(_OWORD *)(v3 + 16) = *(_OWORD *)&v13.fields.currentCryptoKey;
  *(_OWORD *)(v3 + 32) = v7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v11, this->fields.userId, 0LL);
  v8 = *(_OWORD *)&v11.fields.fakeValue;
  v12 = v11;
  *(_OWORD *)(v3 + 48) = *(_OWORD *)&v11.fields.currentCryptoKey;
  *(_OWORD *)(v3 + 64) = v8;
  svtId = this->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
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
  *(_OWORD *)(v3 + 256) = *(_OWORD *)&this->fields.lv;
  *(_OWORD *)(v3 + 272) = *(_OWORD *)&this->fields.adjustAtk;
  *(_OWORD *)(v3 + 288) = *(_OWORD *)&this->fields.skillLv3;
  *(_QWORD *)(v3 + 304) = this->fields.createdAt;
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_35915468(
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

  if ( (byte_4BD9B10 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_OldHeroineLawData_TypeInfo);
    byte_4BD9B10 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !qClearHeroineInfo )
    sub_1C22094(v5, v6);
  oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
  v8 = (TerminalPramsManager_OldHeroineLawData_o *)sub_1C22084(TerminalPramsManager_OldHeroineLawData_TypeInfo);
  TerminalPramsManager_OldHeroineLawData___ctor_35914704(v8, oldUsrSvtData, v9);
  this->fields.oldUsrSvtData = v8;
  p_fields = &this->fields;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_fields, (int64_t)v8, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_4BD9B11 & 1) == 0 )
  {
    sub_1C21E38(&QuestClearHeroineInfo_TypeInfo);
    byte_4BD9B11 = 1;
  }
  v3 = sub_1C22084(QuestClearHeroineInfo_TypeInfo);
  QuestClearHeroineInfo___ctor((QuestClearHeroineInfo_o *)v3, 0LL);
  oldUsrSvtData = this->fields.oldUsrSvtData;
  if ( !oldUsrSvtData
    || (oldUsrSvtData = (TerminalPramsManager_OldHeroineLawData_o *)TerminalPramsManager_OldHeroineLawData__GetLoad(
                                                                      oldUsrSvtData,
                                                                      v4),
        !v3) )
  {
    sub_1C22094(oldUsrSvtData, v4);
  }
  *(_QWORD *)(v3 + 16) = oldUsrSvtData;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)oldUsrSvtData, v6, v7, v8, v9, v10, v11);
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD9B15 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager___c_TypeInfo);
    byte_4BD9B15 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(TerminalPramsManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TerminalPramsManager___c_TypeInfo->static_fields->__9 = (struct TerminalPramsManager___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)TerminalPramsManager___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager___c___ctor(TerminalPramsManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TerminalPramsManager___c___ReceiveQuestEndResultInfo_b__704_0(
        TerminalPramsManager___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  int32_t questId; // w19
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4BD9B16 & 1) == 0 )
  {
    this = (TerminalPramsManager___c_o *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9B16 = 1;
  }
  if ( !n )
    sub_1C22094(this, n);
  questId = n->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  return questId == v5->static_fields->_QuestId_k__BackingField;
}


bool __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__709_0(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  if ( (byte_4BD9B17 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9B17 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStoryForQuestId(v, 0LL);
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__709_3(
        TerminalPramsManager___c_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C22094(this, 0LL);
  return v->fields.id;
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__709_4(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  return v;
}


void __fastcall TerminalPramsManager___c__DisplayClass692_0___ctor(
        TerminalPramsManager___c__DisplayClass692_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager___c__DisplayClass692_0___CheckResumeEffectNT2_b__0(
        TerminalPramsManager___c__DisplayClass692_0_o *this,
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

  if ( (byte_4BD9B18 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    byte_4BD9B18 = 1;
  }
  effectIdsStr = this->fields.effectIdsStr;
  p_fields = (PartyOrganizationUtility_o *)&this->fields;
  v7 = System_String__Concat_63126736(effectIdsStr, effectId, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  p_fields->klass = (PartyOrganizationUtility_c *)v7;
  sub_1C21DDC(p_fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall TerminalPramsManager___c__DisplayClass709_0___ctor(
        TerminalPramsManager___c__DisplayClass709_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


QuestEntity_o *__fastcall TerminalPramsManager___c__DisplayClass709_0___SendOpenedQuestIdToAdManager_b__1(
        TerminalPramsManager___c__DisplayClass709_0_o *this,
        int32_t v,
        const MethodInfo *method)
{
  QuestMaster_o *questMaster; // x0

  questMaster = this->fields.questMaster;
  if ( !questMaster )
    sub_1C22094(0LL, v);
  return QuestMaster__getQuestEntity(questMaster, v, 0LL);
}


bool __fastcall TerminalPramsManager___c__DisplayClass709_0___SendOpenedQuestIdToAdManager_b__2(
        TerminalPramsManager___c__DisplayClass709_0_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  UserQuestMaster_o *userQuestMaster; // x20
  NetworkManager_c *v6; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD9B19 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD9B19 = 1;
  }
  entity = 0LL;
  userQuestMaster = this->fields.userQuestMaster;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
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
    sub_1C22094(v6, v);
  }
  return 1;
}