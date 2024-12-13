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

  if ( (byte_4B3476E & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int___ctor__, v1);
    sub_1BD3458(&System_Collections_Generic_HashSet_int__TypeInfo, v2);
    sub_1BD3458(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1BD3458(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1BD3458(&float___TypeInfo, v5);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v6);
    sub_1BD3458(&StringLiteral_1/*""*/, v7);
    byte_4B3476E = 1;
  }
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_1BD36A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_3473CD8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->loginQuestNotifiedList = v8;
  sub_1BD33FC(
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
  sub_1BD33FC((PartyOrganizationUtility_o *)&v17->mTerminalWarStartedIds, (int64_t)v16, v18, v19, v20, v21, v22, v23);
  *(_OWORD *)&TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = xmmword_BD7F80;
  v24 = sub_1BD3500(float___TypeInfo, 3LL);
  v25 = TerminalPramsManager_TypeInfo->static_fields;
  v25->TipsArchiveScrollValueList = (struct System_Single_array *)v24;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v25->TipsArchiveScrollValueList, v24, v26, v27, v28, v29, v30, v31);
  TerminalPramsManager_TypeInfo->static_fields->joinGroupId = -1;
  v32 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_string___ctor__);
  p_eventScriptMessages = (PartyOrganizationUtility_o *)&TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  p_eventScriptMessages->klass = (PartyOrganizationUtility_c *)v32;
  sub_1BD33FC(p_eventScriptMessages, (int64_t)v32, v34, v35, v36, v37, v38, v39);
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

  if ( (byte_4B3474F & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int__Add__, method);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v3);
    byte_4B3474F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v4->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1BD36B4(0LL, method);
  System_Collections_Generic_HashSet_int___Add(
    loginQuestNotifiedList,
    questId,
    (const MethodInfo_3474EDC *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall TerminalPramsManager__AutoOff(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4B34711 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34711 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B320BB )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B320BB = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 0;
  if ( !byte_4B342FC )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4B342FC = 1;
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

  if ( (byte_4B34743 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11580/*"SAVEKEY_BlankEarthRank"*/, v2);
    byte_4B34743 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B34798 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34798 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B34742 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11581/*"SAVEKEY_BlankEarthSpotId"*/, v2);
    byte_4B34742 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33C68 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B33C68 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B34741 & 1) == 0 )
  {
    sub_1BD3458(&CommonUI_CampaignDirectBonusData___TypeInfo, v1);
    sub_1BD3458(&JsonManager_TypeInfo, v2);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v3);
    sub_1BD3458(&StringLiteral_11582/*"SAVEKEY_CampaignDirectBonus"*/, v4);
    byte_4B34741 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B31F09 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B31F09 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_obj = &v5->static_fields->_CampaignDirectBonus_k__BackingField->obj;
  if ( !p_obj )
    p_obj = (Il2CppObject *)sub_1BD3500(CommonUI_CampaignDirectBonusData___TypeInfo, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
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
  __int64 v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  Il2CppObject *v13; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B3475D & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestMaster___, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_SpotMaster___, v4);
    sub_1BD3458(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v5);
    sub_1BD3458(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B3475D = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_SpotMaster___);
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
          (const MethodInfo_31D1F44 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v13 )
LABEL_16:
    sub_1BD36B4(Instance, v9);
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
            HIDWORD(v13[1].klass),
            (const MethodInfo_2F49970 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall TerminalPramsManager__CheckClearSelectedStoryQuestId(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4B34744 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34744 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B344BC )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B344BC = 1;
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
    if ( !byte_4B344BC )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
      byte_4B344BC = 1;
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
      if ( !byte_4B340BC )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
        byte_4B340BC = 1;
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

  if ( (byte_4B3472C & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_13782/*"TerminalBeforeEventActivityPoint"*/, v1);
    sub_1BD3458(&StringLiteral_13783/*"TerminalBeforeEventActivityPointGauge"*/, v2);
    byte_4B3472C = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13782/*"TerminalBeforeEventActivityPoint"*/, 0LL)
      && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13783/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckEventSubmarinePointSaveData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3472E & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_13784/*"TerminalBeforeEventSubmarinePointData"*/, v1);
    byte_4B3472E = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13784/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckIsOrdealCallWarClear(WarEntity_o *warEntity, const MethodInfo *method)
{
  int32_t parentWarId; // w19
  BalanceConfig_c *v4; // x0

  if ( (byte_4B3476A & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, method);
    byte_4B3476A = 1;
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

  if ( (byte_4B34748 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_string__TypeInfo, v1);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToList_string___, v2);
    sub_1BD3458(&Method_System_Collections_Generic_List_string__ForEach__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_string__Remove__, v4);
    sub_1BD3458(&ScrTerminalListTop_TypeInfo, v5);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v6);
    sub_1BD3458(&Method_TerminalPramsManager___c__DisplayClass676_0__CheckResumeEffectNT2_b__0__, v7);
    sub_1BD3458(&TerminalPramsManager___c__DisplayClass676_0_TypeInfo, v8);
    sub_1BD3458(&StringLiteral_43/*"\n"*/, v9);
    sub_1BD3458(&StringLiteral_88/*"\r\n"*/, v10);
    sub_1BD3458(&StringLiteral_1/*""*/, v11);
    byte_4B34748 = 1;
  }
  v46 = 0;
  v12 = sub_1BD36A4(TerminalPramsManager___c__DisplayClass676_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass676_0___ctor((TerminalPramsManager___c__DisplayClass676_0_o *)v12, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B34796 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v13);
    byte_4B34796 = 1;
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
        if ( !byte_4B34796 )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, v21);
          byte_4B34796 = 1;
        }
        v23 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v23 = TerminalPramsManager_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v23->static_fields->_PlayedTerminalEffects_k__BackingField;
        if ( !PlayedTerminalEffects_k__BackingField
          || (PlayedTerminalEffects_k__BackingField = System_String__Replace_62544876(
                                                        PlayedTerminalEffects_k__BackingField,
                                                        (System_String_o *)StringLiteral_88/*"\r\n"*/,
                                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                                        0LL)) == 0LL
          || (v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                           PlayedTerminalEffects_k__BackingField,
                                                                           0xAu,
                                                                           0,
                                                                           0LL),
              (PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Linq_Enumerable__ToList_object_(
                                                                            v25,
                                                                            (const MethodInfo_2F6EB10 *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL)
          || (v26 = (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
              PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Collections_Generic_List_object___Remove(
                                                                           (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
                                                                           v22,
                                                                           (const MethodInfo_35C22B8 *)Method_System_Collections_Generic_List_string__Remove__),
              !v12) )
        {
          sub_1BD36B4(PlayedTerminalEffects_k__BackingField, v21);
        }
        v33 = StringLiteral_1/*""*/;
        *(_QWORD *)(v12 + 16) = StringLiteral_1/*""*/;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)v33, v27, v28, v29, v30, v31, v32);
        v34 = (System_Action_object__o *)sub_1BD36A4(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v34,
          (Il2CppObject *)v12,
          Method_TerminalPramsManager___c__DisplayClass676_0__CheckResumeEffectNT2_b__0__,
          0LL);
        System_Collections_Generic_List_object___ForEach(
          v26,
          (System_Action_T__o *)v34,
          (const MethodInfo_35C17D0 *)Method_System_Collections_Generic_List_string__ForEach__);
        v42 = *(_QWORD *)(v12 + 16);
        if ( !byte_4B34787 )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, v35);
          byte_4B34787 = 1;
        }
        v43 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v43 = TerminalPramsManager_TypeInfo;
        }
        p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v43->static_fields->_PlayedTerminalEffects_k__BackingField;
        p_PlayedTerminalEffects_k__BackingField->klass = (PartyOrganizationUtility_c *)v42;
        sub_1BD33FC(p_PlayedTerminalEffects_k__BackingField, v42, v36, v37, v38, v39, v40, v41);
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

  if ( (byte_4B3473C & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11583/*"SAVEKEY_ClearEventQuestIds"*/, v2);
    byte_4B3473C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D4F )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B33D4F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B3473B & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11585/*"SAVEKEY_ConnectMarkEventId"*/, v2);
    sub_1BD3458(&StringLiteral_11584/*"SAVEKEY_ConnectMarkAnimationId"*/, v3);
    byte_4B3473B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  TerminalPramsManager_c *v12; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  void *v14; // x1

  if ( (byte_4B34760 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v2);
    sub_1BD3458(&StringLiteral_1/*""*/, v3);
    byte_4B34760 = 1;
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
  if ( !byte_4B347AA )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v5);
    byte_4B347AA = 1;
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
  sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->lastPlayBgmName, (int64_t)v14, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4B3471F & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11588/*"SAVEKEY_LastPlayBgmName"*/, v2);
    sub_1BD3458(&StringLiteral_13786/*"TerminalEndTime"*/, v3);
    sub_1BD3458(&StringLiteral_5300/*"Debug_IsOriginalGuestNPC"*/, v4);
    sub_1BD3458(&StringLiteral_11594/*"SAVEKEY_PlayedTerminalEffects"*/, v5);
    sub_1BD3458(&StringLiteral_13782/*"TerminalBeforeEventActivityPoint"*/, v6);
    sub_1BD3458(&StringLiteral_11582/*"SAVEKEY_CampaignDirectBonus"*/, v7);
    sub_1BD3458(&StringLiteral_11589/*"SAVEKEY_LastPlayQuestConsumeType"*/, v8);
    sub_1BD3458(&StringLiteral_11599/*"SAVEKEY_TerminalCraftInfoDisp"*/, v9);
    sub_1BD3458(&StringLiteral_13787/*"TerminalEventDailyPointEventId"*/, v10);
    sub_1BD3458(&StringLiteral_5296/*"Debug_GuestNPCInfoList"*/, v11);
    sub_1BD3458(&StringLiteral_13784/*"TerminalBeforeEventSubmarinePointData"*/, v12);
    sub_1BD3458(&StringLiteral_13793/*"TerminalPhaseCnt"*/, v13);
    sub_1BD3458(&StringLiteral_11598/*"SAVEKEY_TerminalConquestInfos"*/, v14);
    sub_1BD3458(&StringLiteral_13801/*"TerminalTimeStatusEventId"*/, v15);
    sub_1BD3458(&StringLiteral_13785/*"TerminalDispState"*/, v16);
    sub_1BD3458(&StringLiteral_11591/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v17);
    sub_1BD3458(&StringLiteral_13788/*"TerminalIsDoneShortcut"*/, v18);
    sub_1BD3458(&StringLiteral_11590/*"SAVEKEY_MapModelClearQuestInfo"*/, v19);
    sub_1BD3458(&StringLiteral_11595/*"SAVEKEY_PlayerGenderType"*/, v20);
    sub_1BD3458(&StringLiteral_11600/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v21);
    sub_1BD3458(&StringLiteral_11583/*"SAVEKEY_ClearEventQuestIds"*/, v22);
    sub_1BD3458(&StringLiteral_11592/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v23);
    sub_1BD3458(&StringLiteral_5301/*"Debug_IsQuestReleaseAll"*/, v24);
    sub_1BD3458(&StringLiteral_5298/*"Debug_IsDummyErrorSelect"*/, v25);
    sub_1BD3458(&StringLiteral_13796/*"TerminalQuestId"*/, v26);
    sub_1BD3458(&StringLiteral_11597/*"SAVEKEY_TerminalConquestInfoDisp"*/, v27);
    sub_1BD3458(&StringLiteral_11603/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v28);
    sub_1BD3458(&StringLiteral_13800/*"TerminalTimeStatusEventDailyPoint"*/, v29);
    sub_1BD3458(&StringLiteral_13805/*"TerminalWarId"*/, v30);
    sub_1BD3458(&StringLiteral_13798/*"TerminalSpotId"*/, v31);
    sub_1BD3458(&StringLiteral_13802/*"TerminalTimeStatusLoopCount"*/, v32);
    sub_1BD3458(&StringLiteral_13783/*"TerminalBeforeEventActivityPointGauge"*/, v33);
    sub_1BD3458(&StringLiteral_11581/*"SAVEKEY_BlankEarthSpotId"*/, v34);
    sub_1BD3458(&StringLiteral_11586/*"SAVEKEY_DataLostBattleAutoReset"*/, v35);
    sub_1BD3458(&StringLiteral_5299/*"Debug_IsOriginalBattle"*/, v36);
    sub_1BD3458(&StringLiteral_13806/*"TerminalWarStartedIds"*/, v37);
    sub_1BD3458(&StringLiteral_5295/*"Debug_BattleEnemyList"*/, v38);
    sub_1BD3458(&StringLiteral_11585/*"SAVEKEY_ConnectMarkEventId"*/, v39);
    sub_1BD3458(&StringLiteral_13804/*"TerminalTransitionInfoVoiceAssetName"*/, v40);
    sub_1BD3458(&StringLiteral_11584/*"SAVEKEY_ConnectMarkAnimationId"*/, v41);
    sub_1BD3458(&StringLiteral_11593/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v42);
    sub_1BD3458(&StringLiteral_13791/*"TerminalLastPlayedQuestId"*/, v43);
    sub_1BD3458(&StringLiteral_5297/*"Debug_IsBuildInfoDisp"*/, v44);
    sub_1BD3458(&StringLiteral_13803/*"TerminalTransitionInfoMissionId"*/, v45);
    sub_1BD3458(&StringLiteral_11602/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v46);
    byte_4B3471F = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13785/*"TerminalDispState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13805/*"TerminalWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13798/*"TerminalSpotId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13796/*"TerminalQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13791/*"TerminalLastPlayedQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13793/*"TerminalPhaseCnt"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13786/*"TerminalEndTime"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13788/*"TerminalIsDoneShortcut"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13806/*"TerminalWarStartedIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5301/*"Debug_IsQuestReleaseAll"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5298/*"Debug_IsDummyErrorSelect"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5297/*"Debug_IsBuildInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5299/*"Debug_IsOriginalBattle"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5300/*"Debug_IsOriginalGuestNPC"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5295/*"Debug_BattleEnemyList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5296/*"Debug_GuestNPCInfoList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13801/*"TerminalTimeStatusEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13802/*"TerminalTimeStatusLoopCount"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13787/*"TerminalEventDailyPointEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13800/*"TerminalTimeStatusEventDailyPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13803/*"TerminalTransitionInfoMissionId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13804/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13782/*"TerminalBeforeEventActivityPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13783/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13784/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11598/*"SAVEKEY_TerminalConquestInfos"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11597/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11599/*"SAVEKEY_TerminalCraftInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11600/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11588/*"SAVEKEY_LastPlayBgmName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11589/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11594/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11591/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11592/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11593/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11603/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11585/*"SAVEKEY_ConnectMarkEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11584/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11602/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11583/*"SAVEKEY_ClearEventQuestIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11590/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11586/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11595/*"SAVEKEY_PlayerGenderType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11582/*"SAVEKEY_CampaignDirectBonus"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11581/*"SAVEKEY_BlankEarthSpotId"*/, 0LL);
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

  if ( (byte_4B34761 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11587/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v8);
    byte_4B34761 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B347AB )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B347AB = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  p_EventRaidDefeatedEffectInfo_k__BackingField = (PartyOrganizationUtility_o *)&v9->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  p_EventRaidDefeatedEffectInfo_k__BackingField->klass = 0LL;
  sub_1BD33FC(p_EventRaidDefeatedEffectInfo_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11587/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, 0LL);
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

  if ( (byte_4B34766 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11596/*"SAVEKEY_QuestRandomGroupList"*/, v8);
    byte_4B34766 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B347AD )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B347AD = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  p_QuestRandomGroupList_k__BackingField = (PartyOrganizationUtility_o *)&v9->static_fields->_QuestRandomGroupList_k__BackingField;
  p_QuestRandomGroupList_k__BackingField->klass = 0LL;
  sub_1BD33FC(p_QuestRandomGroupList_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4B34728 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_13787/*"TerminalEventDailyPointEventId"*/, v2);
    sub_1BD3458(&StringLiteral_13800/*"TerminalTimeStatusEventDailyPoint"*/, v3);
    byte_4B34728 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B34792 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34792 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13787/*"TerminalEventDailyPointEventId"*/,
    v4->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4B34793 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v5);
    byte_4B34793 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  BeforeTimeEventDailyPoint_k__BackingField = v6->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v7 = System_Int64__ToString((int64_t)&BeforeTimeEventDailyPoint_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13800/*"TerminalTimeStatusEventDailyPoint"*/, v7, 0LL);
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

  if ( (byte_4B34727 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_13801/*"TerminalTimeStatusEventId"*/, v2);
    sub_1BD3458(&StringLiteral_13802/*"TerminalTimeStatusLoopCount"*/, v3);
    byte_4B34727 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B344B7 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B344B7 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13801/*"TerminalTimeStatusEventId"*/,
    v4->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_4B344B8 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v5);
    byte_4B344B8 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13802/*"TerminalTimeStatusLoopCount"*/,
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

  if ( (byte_4B3476C & 1) == 0 )
  {
    sub_1BD3458(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v1);
    byte_4B3476C = 1;
  }
  v2 = sub_1BD36A4(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v2, 0LL);
  if ( !v2 )
    sub_1BD36B4(v3, v4);
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

  if ( (byte_4B3471A & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Application_TypeInfo, v1);
    byte_4B3471A = 1;
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

  if ( (byte_4B3474D & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, method);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v3);
    byte_4B3474D = 1;
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
      sub_1BD36B4(v6, v7);
  }
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         folderLastIdxs,
         warId,
         &value,
         (const MethodInfo_321D9BC *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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

  if ( (byte_4B3471B & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v2);
    byte_4B3471B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D59 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v2);
    byte_4B33D59 = 1;
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
  if ( !byte_4B34315 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v2);
    byte_4B34315 = 1;
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

  if ( (byte_4B34753 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34753 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v3);
  if ( !QuestFocusStateManager )
    sub_1BD36B4(0LL, v5);
  return QuestFocusStateManager__GetFocusState(QuestFocusStateManager, questId, 0LL);
}


void __fastcall TerminalPramsManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4B34721 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34721 = 1;
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

  if ( (byte_4B3474B & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_1/*""*/, v8);
    byte_4B3474B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B32FE1 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B32FE1 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsDispOnly_k__BackingField = 0;
  v10 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4B342FF )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4B342FF = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = v10;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&static_fields->_QuestWindowMessage_k__BackingField,
    (int64_t)v10,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_4B342FE )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v12);
    byte_4B342FE = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v19->static_fields->_MessageDispType_k__BackingField = 0;
  if ( !byte_4B32FE0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v12);
    v19 = TerminalPramsManager_TypeInfo;
    byte_4B32FE0 = 1;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v20 = v19->static_fields;
  v20->_BattleSetupKeep_k__BackingField = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v20->_BattleSetupKeep_k__BackingField, 0LL, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4B34720 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_1/*""*/, v8);
    byte_4B34720 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D57 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B33D57 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4B33D56 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4B33D56 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_SpotId_k__BackingField = 0;
  if ( !byte_4B33D51 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4B33D51 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_QuestId_k__BackingField = 0;
  if ( !byte_4B33FA7 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4B33FA7 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_LastPlayedQuestId_k__BackingField = 0;
  if ( !byte_4B3477D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4B3477D = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
  if ( !byte_4B33FA8 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4B33FA8 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = 0;
  if ( !byte_4B33FA4 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4B33FA4 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_AfterActionFocusQuestId_k__BackingField = 0;
  if ( !byte_4B340BC )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4B340BC = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
  if ( !byte_4B331FA )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4B331FA = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  if ( !byte_4B340BD )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4B340BD = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
  if ( !byte_4B3432B )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4B3432B = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 0;
  if ( !byte_4B34329 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4B34329 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
  if ( !byte_4B3392A )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4B3392A = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    0LL,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_4B33D55 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v11);
    byte_4B33D55 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_PhaseCnt_k__BackingField = 0;
  if ( !byte_4B33D52 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v11);
    v18 = TerminalPramsManager_TypeInfo;
    byte_4B33D52 = 1;
  }
  if ( !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_EndTime_k__BackingField = 0LL;
  if ( !byte_4B33D54 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v11);
    v18 = TerminalPramsManager_TypeInfo;
    byte_4B33D54 = 1;
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
  sub_1BD33FC((PartyOrganizationUtility_o *)&v19->mTerminalWarStartedIds, (int64_t)v20, v12, v13, v14, v15, v16, v17);
  if ( !byte_4B3477E )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v21);
    byte_4B3477E = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->mDebug_IsQuestReleaseAll = 0;
  if ( !byte_4B3477F )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v21);
    v28 = TerminalPramsManager_TypeInfo;
    byte_4B3477F = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->mDebug_IsDummyErrorSelect = 0;
  if ( !byte_4B34780 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v21);
    v28 = TerminalPramsManager_TypeInfo;
    byte_4B34780 = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->mDebug_IsBuildInfoDisp = 0;
  if ( !byte_4B3432E )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v21);
    v28 = TerminalPramsManager_TypeInfo;
    byte_4B3432E = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->_TimeStatusEventId_k__BackingField = 0;
  if ( !byte_4B3432F )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v21);
    v28 = TerminalPramsManager_TypeInfo;
    byte_4B3432F = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->_TimeStatusLoopCount_k__BackingField = 0;
  if ( !byte_4B34781 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v21);
    v28 = TerminalPramsManager_TypeInfo;
    byte_4B34781 = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = TerminalPramsManager_TypeInfo;
  }
  p_timeStatusRecord_k__BackingField = (PartyOrganizationUtility_o *)&v28->static_fields->_timeStatusRecord_k__BackingField;
  p_timeStatusRecord_k__BackingField->klass = 0LL;
  sub_1BD33FC(p_timeStatusRecord_k__BackingField, 0LL, v22, v23, v24, v25, v26, v27);
  if ( !byte_4B34782 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v30);
    byte_4B34782 = 1;
  }
  v37 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v37 = TerminalPramsManager_TypeInfo;
  }
  v37->static_fields->_EventDailyPointEventId_k__BackingField = 0;
  if ( !byte_4B34783 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v30);
    v37 = TerminalPramsManager_TypeInfo;
    byte_4B34783 = 1;
  }
  if ( !v37->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v37);
    v37 = TerminalPramsManager_TypeInfo;
  }
  v37->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = 0LL;
  if ( !byte_4B34784 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v30);
    v37 = TerminalPramsManager_TypeInfo;
    byte_4B34784 = 1;
  }
  if ( !v37->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v37);
    v37 = TerminalPramsManager_TypeInfo;
  }
  v37->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
  if ( !byte_4B34785 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v30);
    v37 = TerminalPramsManager_TypeInfo;
    byte_4B34785 = 1;
  }
  if ( !v37->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v37);
    v37 = TerminalPramsManager_TypeInfo;
  }
  v37->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
  if ( !byte_4B33E46 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v30);
    v37 = TerminalPramsManager_TypeInfo;
    byte_4B33E46 = 1;
  }
  if ( !v37->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v37);
    v37 = TerminalPramsManager_TypeInfo;
  }
  p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v37->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  p_BeforeEventSubmarineSaveData_k__BackingField->klass = 0LL;
  sub_1BD33FC(p_BeforeEventSubmarineSaveData_k__BackingField, 0LL, v31, v32, v33, v34, v35, v36);
  v39 = StringLiteral_1/*""*/;
  p_lastPlayBgmName = (PartyOrganizationUtility_o *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayBgmName;
  p_lastPlayBgmName->klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  sub_1BD33FC(p_lastPlayBgmName, (int64_t)v39, v41, v42, v43, v44, v45, v46);
  v54 = TerminalPramsManager_TypeInfo;
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayQuestConsumeAp = 0LL;
  if ( !byte_4B34786 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v47);
    v54 = TerminalPramsManager_TypeInfo;
    byte_4B34786 = 1;
  }
  if ( !v54->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v54);
    v54 = TerminalPramsManager_TypeInfo;
  }
  v55 = v54->static_fields;
  v55->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v55->_SpecifiedChangeSceneInfo_k__BackingField,
    0LL,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  if ( !byte_4B344C7 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v56);
    byte_4B344C7 = 1;
  }
  v57 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v57->static_fields->_EventBoardGameSquareIndex_k__BackingField = 0;
  if ( !byte_4B344C9 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v56);
    v57 = TerminalPramsManager_TypeInfo;
    byte_4B344C9 = 1;
  }
  if ( !v57->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v57);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v57->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = 0;
  if ( !byte_4B344CB )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v56);
    v57 = TerminalPramsManager_TypeInfo;
    byte_4B344CB = 1;
  }
  if ( !v57->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v57);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v57->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
  if ( !byte_4B3477A )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v56);
    v57 = TerminalPramsManager_TypeInfo;
    byte_4B3477A = 1;
  }
  if ( !v57->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v57);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v57->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v57);
  TerminalPramsManager__ResetResumeScriptWithMap(v58);
  if ( !byte_4B3431C )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v59);
    byte_4B3431C = 1;
  }
  v66 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v66 = TerminalPramsManager_TypeInfo;
  }
  v66->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
  v67 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( !byte_4B34787 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v59);
    v66 = TerminalPramsManager_TypeInfo;
    byte_4B34787 = 1;
  }
  if ( !v66->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v66);
    v66 = TerminalPramsManager_TypeInfo;
  }
  p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v66->static_fields->_PlayedTerminalEffects_k__BackingField;
  p_PlayedTerminalEffects_k__BackingField->klass = v67;
  sub_1BD33FC(p_PlayedTerminalEffects_k__BackingField, (int64_t)v67, v60, v61, v62, v63, v64, v65);
  if ( !byte_4B345B0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
    byte_4B345B0 = 1;
  }
  v76 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = 0;
  if ( !byte_4B345B1 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4B345B1 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = 0;
  if ( !byte_4B344BA )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4B344BA = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v77 = v76->static_fields;
  v77->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  *(_QWORD *)&v77->ConnectMarkEventId = 0LL;
  if ( !byte_4B31F08 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4B31F08 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField = 0;
  if ( !byte_4B34788 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4B34788 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_isFortificationCheck_k__BackingField = 0;
  if ( !byte_4B34789 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4B34789 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !byte_4B3478A )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4B3478A = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !byte_4B344C1 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4B344C1 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4B34322 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4B34322 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_4B344BF )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4B344BF = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_4B344C0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4B344C0 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_4B344BE )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4B344BE = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_4B344C1 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4B344C1 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4B344B4 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4B344B4 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 0.0;
  if ( !byte_4B3478B )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4B3478B = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  if ( !byte_4B340BA )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4B340BA = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_4B326E0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4B326E0 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_PlayerGenderType_k__BackingField = 0;
  if ( !byte_4B3478C )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4B3478C = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v76->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  v78 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( !byte_4B344C5 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
    v76 = TerminalPramsManager_TypeInfo;
    byte_4B344C5 = 1;
  }
  if ( !v76->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v76);
    v76 = TerminalPramsManager_TypeInfo;
  }
  p_SceneMoveQuestClearedInfo_k__BackingField = (PartyOrganizationUtility_o *)&v76->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
  p_SceneMoveQuestClearedInfo_k__BackingField->klass = v78;
  sub_1BD33FC(p_SceneMoveQuestClearedInfo_k__BackingField, (int64_t)v78, v70, v71, v72, v73, v74, v75);
  if ( !byte_4B3478D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v80);
    byte_4B3478D = 1;
  }
  v87 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v87 = TerminalPramsManager_TypeInfo;
  }
  v88 = v87->static_fields;
  v88->_CampaignBonus_k__BackingField = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v88->_CampaignBonus_k__BackingField, 0LL, v81, v82, v83, v84, v85, v86);
  if ( !byte_4B3478E )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v89);
    byte_4B3478E = 1;
  }
  v96 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v96 = TerminalPramsManager_TypeInfo;
  }
  v97 = v96->static_fields;
  v97->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v97->_CampaignDirectBonus_k__BackingField,
    0LL,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  if ( !byte_4B3478F )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v98);
    byte_4B3478F = 1;
  }
  v105 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v105 = TerminalPramsManager_TypeInfo;
  }
  v105->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
  v106 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4B31F0B )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v98);
    v105 = TerminalPramsManager_TypeInfo;
    byte_4B31F0B = 1;
  }
  if ( !v105->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v105);
    v105 = TerminalPramsManager_TypeInfo;
  }
  v107 = v105->static_fields;
  v107->_TransitionScrollTabName_k__BackingField = v106;
  sub_1BD33FC(
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

  if ( (byte_4B3476D & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3476D = 1;
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
      sub_1BD36B4(v2, v1);
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
      sub_1BD36BC(v2, v1);
    v6 = (char *)v5 + 4 * i;
    *((_DWORD *)v6 + 8) = 0;
  }
}


bool __fastcall TerminalPramsManager__IsAuto(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4B3470E & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3470E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D59 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B33D59 = 1;
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
  if ( !byte_4B34777 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34777 = 1;
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

  if ( (byte_4B34710 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_EventDetailMaster___, v1);
    sub_1BD3458(&Method_DataManager_GetMasterData_WarMaster___, v2);
    sub_1BD3458(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_1BD3458(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v6);
    byte_4B34710 = 1;
  }
  entity = 0LL;
  v14 = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D59 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B33D59 = 1;
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
  if ( !byte_4B33D50 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B33D50 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_WarId_k__BackingField < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D50 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v10);
    byte_4B33D50 = 1;
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
          (const MethodInfo_31D1F44 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !entity)
    || !Instance )
  {
LABEL_34:
    sub_1BD36B4(Instance, v10);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v14,
          (int32_t)entity[6].klass,
          (const MethodInfo_31D1F44 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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

  if ( (byte_4B3476B & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, method);
    sub_1BD3458(&Method_System_Nullable_int__GetValueOrDefault__, v3);
    sub_1BD3458(&Method_System_Nullable_int___ctor__, v4);
    sub_1BD3458(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    byte_4B3476B = 1;
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      sub_1BD36B4(0LL, v9);
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, targetWarId, 0LL);
    if ( WarInfoByWarID )
    {
      WarInfoByWarID = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)WarInfoByWarID, 0LL);
      if ( WarInfoByWarID )
      {
        v10 = *((_DWORD *)WarInfoByWarID + 31);
        v13 = (System_Nullable_int__o)&v12;
        v12 = 0LL;
        System_Nullable_int____ctor(v13, v10, (const MethodInfo_36DDBD4 *)Method_System_Nullable_int___ctor__);
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

  if ( (byte_4B3473E & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11586/*"SAVEKEY_DataLostBattleAutoReset"*/, v2);
    byte_4B3473E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B344BD )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B344BD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  QuestMaster_o *Master_object; // x0
  __int64 v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  int klass_high; // w19
  BalanceConfig_c *v11; // x0
  Il2CppObject *v13; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B34769 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, method);
    sub_1BD3458(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v3);
    sub_1BD3458(&Method_DataManager_GetMaster_QuestMaster___, v4);
    sub_1BD3458(&DataManager_TypeInfo, v5);
    sub_1BD3458(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v6);
    byte_4B34769 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_QuestMaster___);
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
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !entity
    || (v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
        Master_object = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0LL),
        !v9) )
  {
LABEL_20:
    sub_1BD36B4(Master_object, v8);
  }
  Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v9,
                                     &v13,
                                     (int32_t)Master_object,
                                     (const MethodInfo_31D1F44 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
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

  if ( (byte_4B3475B & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_WarMaster___, v3);
    sub_1BD3458(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_1BD3458(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B3475B = 1;
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
            (const MethodInfo_2F49970 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_WarMaster___);
        if ( Instance )
        {
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       &entity,
                                       warId,
                                       (const MethodInfo_31D1F44 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( entity )
            return LODWORD(entity[6].klass) == 0;
        }
      }
      sub_1BD36B4(Instance, v11);
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

  if ( (byte_4B3475C & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_SpotMaster___, v3);
    sub_1BD3458(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v4);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v6);
    byte_4B3475C = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_SpotMaster___),
        !entity)
    || (v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (Il2CppObject *)QuestEntity__getSpotId(entity, 0LL),
        !v9) )
  {
LABEL_16:
    sub_1BD36B4(Instance, v8);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               v9,
                               &v13,
                               (int32_t)Instance,
                               (const MethodInfo_31D1F44 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
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

  if ( (byte_4B3475A & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, method);
    sub_1BD3458(&Method_System_Linq_Enumerable_Contains_int___, v3);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v4);
    byte_4B3475A = 1;
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
         (const MethodInfo_2F49970 *)Method_System_Linq_Enumerable_Contains_int___) )
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

  if ( (byte_4B3474E & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int__Contains__, method);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v3);
    byte_4B3474E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v4->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1BD36B4(0LL, method);
  return System_Collections_Generic_HashSet_int___Contains(
           loginQuestNotifiedList,
           questId,
           (const MethodInfo_34743CC *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B34737 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11592/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v2);
    byte_4B34737 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B34320 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34320 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B34736 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11591/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v2);
    byte_4B34736 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3431F )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3431F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B34738 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11593/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v2);
    byte_4B34738 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B344B9 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B344B9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  System_Collections_Generic_Dictionary_int__object__o *v7; // x0
  __int64 v8; // x8
  char v9; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B34765 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, *(_QWORD *)&day);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v6);
    byte_4B34765 = 1;
  }
  value = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B347AC )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    byte_4B347AC = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_QWORD *)&v7[2].fields._entries->m_Items[17].fields.hashCode;
  if ( !v8 || (v7 = *(System_Collections_Generic_Dictionary_int__object__o **)(v8 + 16)) == 0LL )
    sub_1BD36B4(v7, *(_QWORD *)&day);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         v7,
         eventId,
         &value,
         (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v9 = (char)value;
    if ( value )
      v9 = System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             day,
             (const MethodInfo_35A40E4 *)Method_System_Collections_Generic_List_int__Contains__);
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

  if ( (byte_4B34747 & 1) == 0 )
  {
    sub_1BD3458(&ScrTerminalListTop_TypeInfo, v1);
    sub_1BD3458(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v2);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v3);
    byte_4B34747 = 1;
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v9 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v9 )
LABEL_34:
    sub_1BD36B4(Instance, v7);
  if ( !clsQuestCheck__IsWarClear(
          v9,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
          0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33D4D )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v10);
      byte_4B33D4D = 1;
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
      if ( !byte_4B33D58 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v10);
        byte_4B33D58 = 1;
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
  if ( (byte_4B34745 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_43/*"\n"*/, v2);
    sub_1BD3458(&StringLiteral_88/*"\r\n"*/, v3);
    byte_4B34745 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B34796 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34796 = 1;
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
  if ( !byte_4B34796 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v5);
    byte_4B34796 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  PlayedTerminalEffects_k__BackingField = v7->static_fields->_PlayedTerminalEffects_k__BackingField;
  if ( !PlayedTerminalEffects_k__BackingField
    || (PlayedTerminalEffects_k__BackingField = System_String__Replace_62544876(
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
    sub_1BD36B4(PlayedTerminalEffects_k__BackingField, v5);
  }
  klass = PlayedTerminalEffects_k__BackingField[1].klass;
  v10 = PlayedTerminalEffects_k__BackingField;
  if ( (int)klass >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)klass )
        sub_1BD36BC(PlayedTerminalEffects_k__BackingField, v5);
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
  if ( (byte_4B34749 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_43/*"\n"*/, v2);
    sub_1BD3458(&StringLiteral_88/*"\r\n"*/, v3);
    byte_4B34749 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  mTerminalWarStartedIds = v4->static_fields->mTerminalWarStartedIds;
  if ( !mTerminalWarStartedIds
    || (mTerminalWarStartedIds = System_String__Replace_62544876(
                                   mTerminalWarStartedIds,
                                   (System_String_o *)StringLiteral_88/*"\r\n"*/,
                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                   0LL)) == 0LL
    || (mTerminalWarStartedIds = (System_String_o *)System_String__Split(mTerminalWarStartedIds, 0xAu, 0, 0LL)) == 0LL )
  {
    sub_1BD36B4(mTerminalWarStartedIds, method);
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
        sub_1BD36BC(mTerminalWarStartedIds, method);
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

  if ( (byte_4B34735 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_13789/*"TerminalLastPanelEventPoint"*/, v2);
    byte_4B34735 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13789/*"TerminalLastPanelEventPoint"*/, v3->static_fields->panelEventPoint, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayBgmNameSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B34733 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11588/*"SAVEKEY_LastPlayBgmName"*/, v2);
    byte_4B34733 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B34734 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11589/*"SAVEKEY_LastPlayQuestConsumeType"*/, v2);
    byte_4B34734 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *String_70236548; // x19
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
  const MethodInfo *v19; // x1
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
  char v242; // w21
  int64_t v243; // x20
  PartyOrganizationUtility_o *p_OldUserEventPoint_k__BackingField; // x0
  __int64 v245; // x1
  TerminalPramsManager_c *v246; // x0
  TerminalPramsManager_c *v247; // x8
  TerminalPramsManager_c *v248; // x0

  if ( (byte_4B3475F & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_1BD3458(&Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___, v2);
    sub_1BD3458(&JsonManager_TypeInfo, v3);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v4);
    byte_4B3475F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B34312 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34312 = 1;
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
      String_70236548 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70236548(
                                          v7->static_fields->SAVEKEY_CLEAR_REWARD_DISP,
                                          0LL);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v15 = JsonManager__Deserialize_object_(
              String_70236548,
              (const MethodInfo_2F98ABC *)Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
      v16 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestClearHeroineInfo = (PartyOrganizationUtility_o *)&v16->static_fields->mQuestClearHeroineInfo;
      p_mQuestClearHeroineInfo->klass = 0LL;
      sub_1BD33FC(p_mQuestClearHeroineInfo, 0LL, v9, v10, v11, v12, v13, v14);
      if ( !v15 )
        sub_1BD36B4(v18, v19);
      klass = v15[1].klass;
      if ( !klass )
        sub_1BD36B4(v18, v19);
      name = klass->_1.name;
      if ( name && *((int *)name + 8) >= 1 )
      {
        Load = TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(
                 (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)v15[1].klass,
                 v19);
        v35 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v35 = TerminalPramsManager_TypeInfo;
        }
        v36 = (PartyOrganizationUtility_o *)&v35->static_fields->mQuestClearHeroineInfo;
        v36->klass = (PartyOrganizationUtility_c *)Load;
        sub_1BD33FC(v36, (int64_t)Load, v28, v29, v30, v31, v32, v33);
      }
      v37 = (__int64)TerminalPramsManager_TypeInfo;
      monitor = (char)v15[2].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B33F99 )
      {
        v37 = sub_1BD3458(&TerminalPramsManager_TypeInfo, v19);
        byte_4B33F99 = 1;
      }
      v39 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v39 = TerminalPramsManager_TypeInfo;
      }
      v39->static_fields->_IsQuestClear_k__BackingField = monitor;
      v40 = BYTE1(v15[2].monitor);
      if ( !byte_4B33F9A )
      {
        v37 = sub_1BD3458(&TerminalPramsManager_TypeInfo, v19);
        v39 = TerminalPramsManager_TypeInfo;
        byte_4B33F9A = 1;
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
        sub_1BD36B4(v37, v19);
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
      sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->mQuestRewardInfos, v43, v20, v21, v22, v23, v24, v25);
      v52 = v15[2].klass;
      if ( !v52 )
        sub_1BD36B4(v44, v45);
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
      sub_1BD33FC(p_mQuestPhaseRewardInfos, v54, v46, v47, v48, v49, v50, v51);
      v64 = TerminalPramsManager_TypeInfo;
      v65 = TerminalPramsManager_TypeInfo->static_fields;
      *(_QWORD *)&v65->clearLastBattleRaidId = *(void **)((char *)&v15[2].monitor + 4);
      v65->joinGroupId = HIDWORD(v15[3].klass);
      v66 = v15[3].monitor;
      if ( !v66 )
        sub_1BD36B4(v56, v57);
      if ( v66[3] )
        v67 = (int64_t)v15[3].monitor;
      else
        v67 = 0LL;
      if ( !v64->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v64);
      if ( !byte_4B347A2 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v57);
        byte_4B347A2 = 1;
      }
      v68 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v68 = TerminalPramsManager_TypeInfo;
      }
      v69 = v68->static_fields;
      v69->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v67;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v69->_oldSuperBoss_k__BackingField, v67, v58, v59, v60, v61, v62, v63);
      v78 = v15[4].klass;
      if ( !v78 )
        sub_1BD36B4(v70, v71);
      if ( v78->_1.namespaze )
        v79 = (int64_t)v15[4].klass;
      else
        v79 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B347A3 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v71);
        byte_4B347A3 = 1;
      }
      v80 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v80 = TerminalPramsManager_TypeInfo;
      }
      v81 = v80->static_fields;
      v81->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v79;
      sub_1BD33FC(
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
        sub_1BD36B4(v82, v83);
      if ( v90[4] <= 0 )
        v91 = 0LL;
      else
        v91 = (int64_t)v15[4].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B3479C )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v83);
        byte_4B3479C = 1;
      }
      v92 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v92 = TerminalPramsManager_TypeInfo;
      }
      p_eventPointWinReward_k__BackingField = (PartyOrganizationUtility_o *)&v92->static_fields->_eventPointWinReward_k__BackingField;
      p_eventPointWinReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v91;
      sub_1BD33FC(p_eventPointWinReward_k__BackingField, v91, v84, v85, v86, v87, v88, v89);
      v102 = (int32_t)v15[5].klass;
      if ( !byte_4B3479D )
      {
        v94 = sub_1BD3458(&TerminalPramsManager_TypeInfo, v95);
        byte_4B3479D = 1;
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
        sub_1BD36B4(v94, v95);
      if ( v104[4] <= 0 )
        v105 = 0LL;
      else
        v105 = (int64_t)v15[5].monitor;
      if ( !v103->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v103);
      if ( !byte_4B344C6 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v95);
        byte_4B344C6 = 1;
      }
      v106 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v106 = TerminalPramsManager_TypeInfo;
      }
      p_eventRaceBoost_k__BackingField = (PartyOrganizationUtility_o *)&v106->static_fields->_eventRaceBoost_k__BackingField;
      p_eventRaceBoost_k__BackingField->klass = (PartyOrganizationUtility_c *)v105;
      sub_1BD33FC(p_eventRaceBoost_k__BackingField, v105, v96, v97, v98, v99, v100, v101);
      v116 = v15[6].klass;
      if ( !v116 )
        sub_1BD36B4(v108, v109);
      if ( v116->_1.namespaze )
        v117 = (int64_t)v15[6].klass;
      else
        v117 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B345AF )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v109);
        byte_4B345AF = 1;
      }
      v118 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v118 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeRelease_k__BackingField = (PartyOrganizationUtility_o *)&v118->static_fields->_questClearCostumeRelease_k__BackingField;
      p_questClearCostumeRelease_k__BackingField->klass = (PartyOrganizationUtility_c *)v117;
      sub_1BD33FC(p_questClearCostumeRelease_k__BackingField, v117, v110, v111, v112, v113, v114, v115);
      v128 = v15[6].monitor;
      if ( !v128 )
        sub_1BD36B4(v120, v121);
      if ( v128[3] )
        v129 = (int64_t)v15[6].monitor;
      else
        v129 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B3430F )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v121);
        byte_4B3430F = 1;
      }
      v130 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v130 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeGet_k__BackingField = (PartyOrganizationUtility_o *)&v130->static_fields->_questClearCostumeGet_k__BackingField;
      p_questClearCostumeGet_k__BackingField->klass = (PartyOrganizationUtility_c *)v129;
      sub_1BD33FC(p_questClearCostumeGet_k__BackingField, v129, v122, v123, v124, v125, v126, v127);
      v140 = v15[7].klass;
      if ( !v140 )
        sub_1BD36B4(v132, v133);
      if ( SLODWORD(v140->_1.name) <= 0 )
        v141 = 0LL;
      else
        v141 = (int64_t)v15[7].klass;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B347A0 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v133);
        byte_4B347A0 = 1;
      }
      v142 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v142 = TerminalPramsManager_TypeInfo;
      }
      p_eventTowerReward_k__BackingField = (PartyOrganizationUtility_o *)&v142->static_fields->_eventTowerReward_k__BackingField;
      p_eventTowerReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v141;
      sub_1BD33FC(p_eventTowerReward_k__BackingField, v141, v134, v135, v136, v137, v138, v139);
      v152 = v15[7].monitor;
      if ( !v152 )
        sub_1BD36B4(v144, v145);
      v153 = v152[3];
      if ( v153 )
      {
        if ( !(_DWORD)v153 )
          sub_1BD36BC(v144, v145);
        v154 = v152[4];
        if ( !v154 )
          sub_1BD36B4(v144, v145);
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
      if ( !byte_4B347A1 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v145);
        byte_4B347A1 = 1;
      }
      v156 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v156 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventTowerRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v156->static_fields->_resultEventTowerRewardInfo_k__BackingField;
      p_resultEventTowerRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v155;
      sub_1BD33FC(p_resultEventTowerRewardInfo_k__BackingField, v155, v146, v147, v148, v149, v150, v151);
      v166 = v15[8].klass;
      if ( !v166 )
        sub_1BD36B4(v158, v159);
      if ( v166->_1.namespaze )
        v167 = (int64_t)v15[8].klass;
      else
        v167 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B34309 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v159);
        byte_4B34309 = 1;
      }
      v168 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v168 = TerminalPramsManager_TypeInfo;
      }
      p_resultBoostItemRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v168->static_fields->_resultBoostItemRewardInfo_k__BackingField;
      p_resultBoostItemRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v167;
      sub_1BD33FC(p_resultBoostItemRewardInfo_k__BackingField, v167, v160, v161, v162, v163, v164, v165);
      v178 = v15[8].monitor;
      if ( !v178 )
        sub_1BD36B4(v170, v171);
      if ( v178[3] )
        v179 = (int64_t)v15[8].monitor;
      else
        v179 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B3430A )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v171);
        byte_4B3430A = 1;
      }
      v180 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v180 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventBoardGameTokenRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v180->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
      p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v179;
      sub_1BD33FC(p_resultEventBoardGameTokenRewardInfo_k__BackingField, v179, v172, v173, v174, v175, v176, v177);
      v190 = (char)v15[9].klass;
      if ( !byte_4B32FE1 )
      {
        v182 = sub_1BD3458(&TerminalPramsManager_TypeInfo, v183);
        byte_4B32FE1 = 1;
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
        sub_1BD36B4(v182, v183);
      if ( v192[3] )
        v193 = (int64_t)v15[9].monitor;
      else
        v193 = 0LL;
      if ( !v191->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v191);
      if ( !byte_4B34314 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v183);
        byte_4B34314 = 1;
      }
      v194 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v194 = TerminalPramsManager_TypeInfo;
      }
      p_warClearReward_k__BackingField = (PartyOrganizationUtility_o *)&v194->static_fields->_warClearReward_k__BackingField;
      p_warClearReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v193;
      sub_1BD33FC(p_warClearReward_k__BackingField, v193, v184, v185, v186, v187, v188, v189);
      v204 = (int32_t)v15[10].klass;
      if ( !byte_4B320B9 )
      {
        v196 = sub_1BD3458(&TerminalPramsManager_TypeInfo, v197);
        byte_4B320B9 = 1;
      }
      v205 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v205 = TerminalPramsManager_TypeInfo;
      }
      v205->static_fields->_EventActivityPointEffectState_k__BackingField = v204;
      v206 = BYTE4(v15[10].klass);
      if ( !byte_4B34311 )
      {
        v196 = sub_1BD3458(&TerminalPramsManager_TypeInfo, v197);
        v205 = TerminalPramsManager_TypeInfo;
        byte_4B34311 = 1;
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
        sub_1BD36B4(v196, v197);
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
      sub_1BD33FC(
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
        sub_1BD36B4(v210, v211);
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
      sub_1BD33FC(p_mResultEventPanelRewardInfos, v220, v212, v213, v214, v215, v216, v217);
      v229 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = (int32_t)v15[11].monitor;
      v230 = (int64_t)v15[12].klass;
      if ( !byte_4B3430D )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v222);
        v229 = TerminalPramsManager_TypeInfo;
        byte_4B3430D = 1;
      }
      if ( !v229->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v229);
        v229 = TerminalPramsManager_TypeInfo;
      }
      p_limitImageAnnounces_k__BackingField = (PartyOrganizationUtility_o *)&v229->static_fields->_limitImageAnnounces_k__BackingField;
      p_limitImageAnnounces_k__BackingField->klass = (PartyOrganizationUtility_c *)v230;
      sub_1BD33FC(p_limitImageAnnounces_k__BackingField, v230, v223, v224, v225, v226, v227, v228);
      v239 = (char)v15[12].monitor;
      if ( !byte_4B33F9D )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v232);
        byte_4B33F9D = 1;
      }
      v240 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v240 = TerminalPramsManager_TypeInfo;
      }
      v240->static_fields->_IsOrdealCallWarClear_k__BackingField = v239;
      monitor_high = HIDWORD(v15[12].monitor);
      if ( !byte_4B34304 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v232);
        v240 = TerminalPramsManager_TypeInfo;
        byte_4B34304 = 1;
      }
      if ( !v240->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v240);
        v240 = TerminalPramsManager_TypeInfo;
      }
      v240->static_fields->_EventMuralId_k__BackingField = monitor_high;
      v242 = (char)v15[13].klass;
      if ( !byte_4B34306 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v232);
        v240 = TerminalPramsManager_TypeInfo;
        byte_4B34306 = 1;
      }
      if ( !v240->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v240);
        v240 = TerminalPramsManager_TypeInfo;
      }
      v240->static_fields->_PlayHappinessCounterEffect_k__BackingField = v242;
      v243 = (int64_t)v15[13].monitor;
      if ( !byte_4B3479A )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v232);
        v240 = TerminalPramsManager_TypeInfo;
        byte_4B3479A = 1;
      }
      if ( !v240->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v240);
        v240 = TerminalPramsManager_TypeInfo;
      }
      p_OldUserEventPoint_k__BackingField = (PartyOrganizationUtility_o *)&v240->static_fields->_OldUserEventPoint_k__BackingField;
      p_OldUserEventPoint_k__BackingField->klass = (PartyOrganizationUtility_c *)v243;
      sub_1BD33FC(p_OldUserEventPoint_k__BackingField, v243, v233, v234, v235, v236, v237, v238);
      v246 = TerminalPramsManager_TypeInfo;
      if ( BYTE1(v15[2].monitor) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B320BB )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, v245);
          byte_4B320BB = 1;
        }
        v246 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v246 = TerminalPramsManager_TypeInfo;
        }
        v246->static_fields->_IsAutoResume_k__BackingField = 1;
      }
      if ( !v246->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v246);
      if ( !byte_4B34313 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v245);
        byte_4B34313 = 1;
      }
      v247 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v247 = TerminalPramsManager_TypeInfo;
      }
      if ( v247->static_fields->_warClearReward_k__BackingField )
        goto LABEL_261;
      if ( !v247->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v247);
      if ( !byte_4B34310 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v245);
        byte_4B34310 = 1;
      }
      v247 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v247 = TerminalPramsManager_TypeInfo;
      }
      if ( v247->static_fields->_IsPlayScriptWithMap_k__BackingField )
      {
LABEL_261:
        if ( !v247->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v247);
        if ( !byte_4B347AA )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, v245);
          byte_4B347AA = 1;
        }
        v248 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v248 = TerminalPramsManager_TypeInfo;
        }
        v248->static_fields->_isQuestRewardSetted_k__BackingField = 1;
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

  if ( (byte_4B34762 & 1) == 0 )
  {
    sub_1BD3458(&EventRaidDefeatedEffectInfo_TypeInfo, v1);
    sub_1BD3458(&string_TypeInfo, v2);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v3);
    sub_1BD3458(&StringLiteral_11587/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v4);
    byte_4B34762 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B347AC )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B347AC = 1;
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
               (System_String_o *)StringLiteral_11587/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v7 = (EventRaidDefeatedEffectInfo_o *)sub_1BD36A4(EventRaidDefeatedEffectInfo_TypeInfo);
    EventRaidDefeatedEffectInfo___ctor(v7, String, v8);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B347AB )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v9);
      byte_4B347AB = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v16->static_fields;
    static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = v7;
    sub_1BD33FC(
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

  if ( (byte_4B34767 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v1);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v2);
    sub_1BD3458(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1BD3458(&string_TypeInfo, v4);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v5);
    sub_1BD3458(&StringLiteral_11596/*"SAVEKEY_QuestRandomGroupList"*/, v6);
    byte_4B34767 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D4C )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B33D4C = 1;
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
               (System_String_o *)StringLiteral_11596/*"SAVEKEY_QuestRandomGroupList"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v9,
      (const MethodInfo_321B960 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
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
          sub_1BD36BC(v10, v11);
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
                (const MethodInfo_321C324 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
        }
        max_length = v19->max_length;
        if ( (int)++v20 >= max_length )
          goto LABEL_27;
      }
LABEL_35:
      sub_1BD36B4(v10, v11);
    }
LABEL_27:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B347AD )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v11);
      byte_4B347AD = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    p_QuestRandomGroupList_k__BackingField = (PartyOrganizationUtility_o *)&v22->static_fields->_QuestRandomGroupList_k__BackingField;
    p_QuestRandomGroupList_k__BackingField->klass = (PartyOrganizationUtility_c *)v9;
    sub_1BD33FC(p_QuestRandomGroupList_k__BackingField, (int64_t)v9, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall TerminalPramsManager__LoadQuestReleasedFocusState(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x0

  if ( (byte_4B34750 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34750 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v2);
  if ( !QuestFocusStateManager
    || (QuestFocusStateManager__ClearQuestFocusStateDataList(QuestFocusStateManager, 0LL),
        (QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager(v5)) == 0LL) )
  {
    sub_1BD36B4(QuestFocusStateManager, v4);
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
  int32_t Int_70235980; // w19
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
  System_String_o *String_70236548; // x20
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

  if ( (byte_4B34722 & 1) == 0 )
  {
    sub_1BD3458(&System_Convert_TypeInfo, v1);
    sub_1BD3458(&Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____, v2);
    sub_1BD3458(&Method_JsonManager_Deserialize_EventConquestInfo_____, v3);
    sub_1BD3458(&Method_JsonManager_Deserialize_EventHarvestGrowthInfo___, v4);
    sub_1BD3458(&Method_JsonManager_Deserialize_EventSaveData___, v5);
    sub_1BD3458(&JsonManager_TypeInfo, v6);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v7);
    sub_1BD3458(&StringLiteral_11588/*"SAVEKEY_LastPlayBgmName"*/, v8);
    sub_1BD3458(&StringLiteral_13786/*"TerminalEndTime"*/, v9);
    sub_1BD3458(&StringLiteral_11594/*"SAVEKEY_PlayedTerminalEffects"*/, v10);
    sub_1BD3458(&StringLiteral_13782/*"TerminalBeforeEventActivityPoint"*/, v11);
    sub_1BD3458(&StringLiteral_11582/*"SAVEKEY_CampaignDirectBonus"*/, v12);
    sub_1BD3458(&StringLiteral_11589/*"SAVEKEY_LastPlayQuestConsumeType"*/, v13);
    sub_1BD3458(&StringLiteral_11601/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, v14);
    sub_1BD3458(&StringLiteral_11599/*"SAVEKEY_TerminalCraftInfoDisp"*/, v15);
    sub_1BD3458(&StringLiteral_13787/*"TerminalEventDailyPointEventId"*/, v16);
    sub_1BD3458(&StringLiteral_13784/*"TerminalBeforeEventSubmarinePointData"*/, v17);
    sub_1BD3458(&StringLiteral_13793/*"TerminalPhaseCnt"*/, v18);
    sub_1BD3458(&StringLiteral_11598/*"SAVEKEY_TerminalConquestInfos"*/, v19);
    sub_1BD3458(&StringLiteral_13801/*"TerminalTimeStatusEventId"*/, v20);
    sub_1BD3458(&StringLiteral_13785/*"TerminalDispState"*/, v21);
    sub_1BD3458(&StringLiteral_11591/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v22);
    sub_1BD3458(&StringLiteral_13788/*"TerminalIsDoneShortcut"*/, v23);
    sub_1BD3458(&StringLiteral_11590/*"SAVEKEY_MapModelClearQuestInfo"*/, v24);
    sub_1BD3458(&StringLiteral_11595/*"SAVEKEY_PlayerGenderType"*/, v25);
    sub_1BD3458(&StringLiteral_11580/*"SAVEKEY_BlankEarthRank"*/, v26);
    sub_1BD3458(&StringLiteral_13789/*"TerminalLastPanelEventPoint"*/, v27);
    sub_1BD3458(&StringLiteral_11600/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v28);
    sub_1BD3458(&StringLiteral_11583/*"SAVEKEY_ClearEventQuestIds"*/, v29);
    sub_1BD3458(&StringLiteral_11592/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v30);
    sub_1BD3458(&StringLiteral_5301/*"Debug_IsQuestReleaseAll"*/, v31);
    sub_1BD3458(&StringLiteral_5298/*"Debug_IsDummyErrorSelect"*/, v32);
    sub_1BD3458(&StringLiteral_13796/*"TerminalQuestId"*/, v33);
    sub_1BD3458(&StringLiteral_11597/*"SAVEKEY_TerminalConquestInfoDisp"*/, v34);
    sub_1BD3458(&StringLiteral_11603/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v35);
    sub_1BD3458(&StringLiteral_13800/*"TerminalTimeStatusEventDailyPoint"*/, v36);
    sub_1BD3458(&StringLiteral_13805/*"TerminalWarId"*/, v37);
    sub_1BD3458(&StringLiteral_13798/*"TerminalSpotId"*/, v38);
    sub_1BD3458(&StringLiteral_13802/*"TerminalTimeStatusLoopCount"*/, v39);
    sub_1BD3458(&StringLiteral_13783/*"TerminalBeforeEventActivityPointGauge"*/, v40);
    sub_1BD3458(&StringLiteral_11581/*"SAVEKEY_BlankEarthSpotId"*/, v41);
    sub_1BD3458(&StringLiteral_11586/*"SAVEKEY_DataLostBattleAutoReset"*/, v42);
    sub_1BD3458(&StringLiteral_13806/*"TerminalWarStartedIds"*/, v43);
    sub_1BD3458(&StringLiteral_11585/*"SAVEKEY_ConnectMarkEventId"*/, v44);
    sub_1BD3458(&StringLiteral_13790/*"TerminalLastPlayedFreeQuestSpotId"*/, v45);
    sub_1BD3458(&StringLiteral_11584/*"SAVEKEY_ConnectMarkAnimationId"*/, v46);
    sub_1BD3458(&StringLiteral_11593/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v47);
    sub_1BD3458(&StringLiteral_1/*""*/, v48);
    sub_1BD3458(&StringLiteral_13791/*"TerminalLastPlayedQuestId"*/, v49);
    sub_1BD3458(&StringLiteral_5297/*"Debug_IsBuildInfoDisp"*/, v50);
    sub_1BD3458(&StringLiteral_11602/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v51);
    byte_4B34722 = 1;
  }
  v52 = (System_String_o *)StringLiteral_13785/*"TerminalDispState"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13785/*"TerminalDispState"*/, 0LL) )
  {
    Int_70235980 = UnityEngine_PlayerPrefs__GetInt_70235980(v52, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33D53 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v53);
      byte_4B33D53 = 1;
    }
    v55 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v55 = TerminalPramsManager_TypeInfo;
    }
    v55->static_fields->_DispState_k__BackingField = Int_70235980;
  }
  v56 = (System_String_o *)StringLiteral_13805/*"TerminalWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13805/*"TerminalWarId"*/, 0LL) )
  {
    v58 = UnityEngine_PlayerPrefs__GetInt_70235980(v56, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33D57 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v57);
      byte_4B33D57 = 1;
    }
    v59 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v59 = TerminalPramsManager_TypeInfo;
    }
    v59->static_fields->_WarId_k__BackingField = v58;
  }
  v60 = (System_String_o *)StringLiteral_13798/*"TerminalSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13798/*"TerminalSpotId"*/, 0LL) )
  {
    v62 = UnityEngine_PlayerPrefs__GetInt_70235980(v60, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33D56 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v61);
      byte_4B33D56 = 1;
    }
    v63 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v63 = TerminalPramsManager_TypeInfo;
    }
    v63->static_fields->_SpotId_k__BackingField = v62;
  }
  v64 = (System_String_o *)StringLiteral_13796/*"TerminalQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13796/*"TerminalQuestId"*/, 0LL) )
  {
    v66 = UnityEngine_PlayerPrefs__GetInt_70235980(v64, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33D51 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v65);
      byte_4B33D51 = 1;
    }
    v67 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v67 = TerminalPramsManager_TypeInfo;
    }
    v67->static_fields->_QuestId_k__BackingField = v66;
  }
  v68 = (System_String_o *)StringLiteral_13791/*"TerminalLastPlayedQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13791/*"TerminalLastPlayedQuestId"*/, 0LL) )
  {
    v70 = UnityEngine_PlayerPrefs__GetInt_70235980(v68, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33FA7 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v69);
      byte_4B33FA7 = 1;
    }
    v71 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v71 = TerminalPramsManager_TypeInfo;
    }
    v71->static_fields->_LastPlayedQuestId_k__BackingField = v70;
  }
  v72 = (System_String_o *)StringLiteral_13793/*"TerminalPhaseCnt"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13793/*"TerminalPhaseCnt"*/, 0LL) )
  {
    v74 = UnityEngine_PlayerPrefs__GetInt_70235980(v72, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33D55 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v73);
      byte_4B33D55 = 1;
    }
    v75 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v75 = TerminalPramsManager_TypeInfo;
    }
    v75->static_fields->_PhaseCnt_k__BackingField = v74;
  }
  v76 = (System_String_o *)StringLiteral_13786/*"TerminalEndTime"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13786/*"TerminalEndTime"*/, 0LL) )
  {
    String_70236548 = UnityEngine_PlayerPrefs__GetString_70236548(v76, 0LL);
    v79 = 0LL;
    if ( System_String__op_Inequality(String_70236548, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v79 = System_Convert__ToInt64_63184536(String_70236548, 0LL);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33D52 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v78);
      byte_4B33D52 = 1;
    }
    v80 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v80 = TerminalPramsManager_TypeInfo;
    }
    v80->static_fields->_EndTime_k__BackingField = v79;
  }
  v81 = (System_String_o *)StringLiteral_13788/*"TerminalIsDoneShortcut"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13788/*"TerminalIsDoneShortcut"*/, 0LL) )
  {
    v83 = UnityEngine_PlayerPrefs__GetInt_70235980(v81, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33D54 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v82);
      byte_4B33D54 = 1;
    }
    v84 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v84 = TerminalPramsManager_TypeInfo;
    }
    v84->static_fields->_IsDoneShortcut_k__BackingField = v83 != 0;
  }
  v85 = (System_String_o *)StringLiteral_13806/*"TerminalWarStartedIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13806/*"TerminalWarStartedIds"*/, 0LL) )
  {
    v92 = UnityEngine_PlayerPrefs__GetString_70236548(v85, 0LL);
    v93 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v93 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v93->static_fields;
    static_fields->mTerminalWarStartedIds = v92;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&static_fields->mTerminalWarStartedIds,
      (int64_t)v92,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
  }
  v95 = (System_String_o *)StringLiteral_5301/*"Debug_IsQuestReleaseAll"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5301/*"Debug_IsQuestReleaseAll"*/, 0LL) )
  {
    v97 = UnityEngine_PlayerPrefs__GetInt_70235980(v95, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3477E )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v96);
      byte_4B3477E = 1;
    }
    v98 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v98 = TerminalPramsManager_TypeInfo;
    }
    v98->static_fields->mDebug_IsQuestReleaseAll = v97 != 0;
  }
  v99 = (System_String_o *)StringLiteral_5298/*"Debug_IsDummyErrorSelect"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5298/*"Debug_IsDummyErrorSelect"*/, 0LL) )
  {
    v101 = UnityEngine_PlayerPrefs__GetInt_70235980(v99, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3477F )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v100);
      byte_4B3477F = 1;
    }
    v102 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v102 = TerminalPramsManager_TypeInfo;
    }
    v102->static_fields->mDebug_IsDummyErrorSelect = v101 != 0;
  }
  v103 = (System_String_o *)StringLiteral_5297/*"Debug_IsBuildInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5297/*"Debug_IsBuildInfoDisp"*/, 0LL) )
  {
    v105 = UnityEngine_PlayerPrefs__GetInt_70235980(v103, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B34780 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v104);
      byte_4B34780 = 1;
    }
    v106 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v106 = TerminalPramsManager_TypeInfo;
    }
    v106->static_fields->mDebug_IsBuildInfoDisp = v105 != 0;
  }
  v107 = (System_String_o *)StringLiteral_13801/*"TerminalTimeStatusEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13801/*"TerminalTimeStatusEventId"*/, 0LL) )
  {
    v109 = UnityEngine_PlayerPrefs__GetInt_70235980(v107, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3432E )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v108);
      byte_4B3432E = 1;
    }
    v110 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v110 = TerminalPramsManager_TypeInfo;
    }
    v110->static_fields->_TimeStatusEventId_k__BackingField = v109;
  }
  v111 = (System_String_o *)StringLiteral_13802/*"TerminalTimeStatusLoopCount"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13802/*"TerminalTimeStatusLoopCount"*/, 0LL) )
  {
    v113 = UnityEngine_PlayerPrefs__GetInt_70235980(v111, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3432F )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v112);
      byte_4B3432F = 1;
    }
    v114 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v114 = TerminalPramsManager_TypeInfo;
    }
    v114->static_fields->_TimeStatusLoopCount_k__BackingField = v113;
  }
  v115 = (System_String_o *)StringLiteral_13787/*"TerminalEventDailyPointEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13787/*"TerminalEventDailyPointEventId"*/, 0LL) )
  {
    v117 = UnityEngine_PlayerPrefs__GetInt_70235980(v115, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B34782 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v116);
      byte_4B34782 = 1;
    }
    v118 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v118 = TerminalPramsManager_TypeInfo;
    }
    v118->static_fields->_EventDailyPointEventId_k__BackingField = v117;
  }
  v119 = (System_String_o *)StringLiteral_13800/*"TerminalTimeStatusEventDailyPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13800/*"TerminalTimeStatusEventDailyPoint"*/, 0LL) )
  {
    v120 = UnityEngine_PlayerPrefs__GetString_70236548(v119, 0LL);
    v122 = 0LL;
    if ( !System_String__op_Equality(v120, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v122 = System_Convert__ToInt64_63184536(v120, 0LL);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B34783 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v121);
      byte_4B34783 = 1;
    }
    v123 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v123 = TerminalPramsManager_TypeInfo;
    }
    v123->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = v122;
  }
  v124 = (System_String_o *)StringLiteral_13782/*"TerminalBeforeEventActivityPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13782/*"TerminalBeforeEventActivityPoint"*/, 0LL) )
  {
    v126 = UnityEngine_PlayerPrefs__GetInt_70235980(v124, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B34784 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v125);
      byte_4B34784 = 1;
    }
    v127 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v127 = TerminalPramsManager_TypeInfo;
    }
    v127->static_fields->_BeforeEventActivityPoint_k__BackingField = v126;
  }
  v128 = (System_String_o *)StringLiteral_13783/*"TerminalBeforeEventActivityPointGauge"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13783/*"TerminalBeforeEventActivityPointGauge"*/, 0LL) )
  {
    v130 = UnityEngine_PlayerPrefs__GetInt_70235980(v128, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B34785 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v129);
      byte_4B34785 = 1;
    }
    v131 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v131 = TerminalPramsManager_TypeInfo;
    }
    v131->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v130;
  }
  v132 = (System_String_o *)StringLiteral_13784/*"TerminalBeforeEventSubmarinePointData"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13784/*"TerminalBeforeEventSubmarinePointData"*/, 0LL) )
  {
    v133 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70236548(v132, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v141 = JsonManager__Deserialize_object_(
             v133,
             (const MethodInfo_2F98ABC *)Method_JsonManager_Deserialize_EventSaveData___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33E46 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v134);
      byte_4B33E46 = 1;
    }
    v142 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v142 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v142->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (PartyOrganizationUtility_c *)v141;
    sub_1BD33FC(p_BeforeEventSubmarineSaveData_k__BackingField, (int64_t)v141, v135, v136, v137, v138, v139, v140);
  }
  v144 = (System_String_o *)StringLiteral_11601/*"SAVEKEY_TerminalLastSelectQuestIndex"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11601/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, 0LL) )
  {
    v147 = UnityEngine_PlayerPrefs__GetInt_70235980(v144, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3477D )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v145);
      byte_4B3477D = 1;
    }
    v148 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v148 = TerminalPramsManager_TypeInfo;
    }
    v148->static_fields->_LastSelectQuestIndex_k__BackingField = v147;
    if ( !byte_4B33D50 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v145);
      v148 = TerminalPramsManager_TypeInfo;
      byte_4B33D50 = 1;
    }
    if ( !v148->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v148);
      v148 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v148->static_fields->_WarId_k__BackingField;
    if ( !byte_4B34790 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v145);
      v148 = TerminalPramsManager_TypeInfo;
      byte_4B34790 = 1;
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
  v150 = (System_String_o *)StringLiteral_11598/*"SAVEKEY_TerminalConquestInfos"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11598/*"SAVEKEY_TerminalConquestInfos"*/, 0LL) )
  {
    v151 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70236548(v150, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v158 = JsonManager__Deserialize_object_(
             v151,
             (const MethodInfo_2F98ABC *)Method_JsonManager_Deserialize_EventConquestInfo_____);
    v159 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v159 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = (PartyOrganizationUtility_o *)&v159->static_fields->eventConquestInfos;
    p_eventConquestInfos->klass = (PartyOrganizationUtility_c *)v158;
    sub_1BD33FC(p_eventConquestInfos, (int64_t)v158, v152, v153, v154, v155, v156, v157);
  }
  v161 = (System_String_o *)StringLiteral_11597/*"SAVEKEY_TerminalConquestInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11597/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL) )
  {
    v162 = UnityEngine_PlayerPrefs__GetInt_70235980(v161, 0LL);
    v163 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v163 = TerminalPramsManager_TypeInfo;
    }
    v163->static_fields->eventConquestInfoDisp = v162 != 0;
  }
  v164 = (System_String_o *)StringLiteral_11599/*"SAVEKEY_TerminalCraftInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11599/*"SAVEKEY_TerminalCraftInfoDisp"*/, 0LL) )
  {
    v165 = UnityEngine_PlayerPrefs__GetInt_70235980(v164, 0LL);
    v166 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v166 = TerminalPramsManager_TypeInfo;
    }
    v166->static_fields->eventCraftInfoDisp = v165 != 0;
  }
  v167 = (System_String_o *)StringLiteral_11600/*"SAVEKEY_TerminalHarvestGrowthInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11600/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL) )
  {
    v168 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70236548(v167, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v175 = JsonManager__Deserialize_object_(
             v168,
             (const MethodInfo_2F98ABC *)Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    v176 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v176 = TerminalPramsManager_TypeInfo;
    }
    p_eventHarvestGrowthInfo = (PartyOrganizationUtility_o *)&v176->static_fields->eventHarvestGrowthInfo;
    p_eventHarvestGrowthInfo->klass = (PartyOrganizationUtility_c *)v175;
    sub_1BD33FC(p_eventHarvestGrowthInfo, (int64_t)v175, v169, v170, v171, v172, v173, v174);
  }
  v178 = (System_String_o *)StringLiteral_11588/*"SAVEKEY_LastPlayBgmName"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11588/*"SAVEKEY_LastPlayBgmName"*/, 0LL) )
  {
    v185 = UnityEngine_PlayerPrefs__GetString_70236548(v178, 0LL);
    v186 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v186 = TerminalPramsManager_TypeInfo;
    }
    p_lastPlayBgmName = (PartyOrganizationUtility_o *)&v186->static_fields->lastPlayBgmName;
    p_lastPlayBgmName->klass = (PartyOrganizationUtility_c *)v185;
    sub_1BD33FC(p_lastPlayBgmName, (int64_t)v185, v179, v180, v181, v182, v183, v184);
  }
  v188 = (System_String_o *)StringLiteral_11589/*"SAVEKEY_LastPlayQuestConsumeType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11589/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL) )
  {
    v189 = UnityEngine_PlayerPrefs__GetInt_70235980(v188, 0LL);
    v190 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v190 = TerminalPramsManager_TypeInfo;
    }
    v190->static_fields->lastPlayQuestConsumeAp = v189;
  }
  v191 = (System_String_o *)StringLiteral_13790/*"TerminalLastPlayedFreeQuestSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13790/*"TerminalLastPlayedFreeQuestSpotId"*/, 0LL) )
  {
    v193 = UnityEngine_PlayerPrefs__GetInt_70235980(v191, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33FA8 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v192);
      byte_4B33FA8 = 1;
    }
    v194 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v194 = TerminalPramsManager_TypeInfo;
    }
    v194->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = v193;
  }
  v195 = (System_String_o *)StringLiteral_13789/*"TerminalLastPanelEventPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13789/*"TerminalLastPanelEventPoint"*/, 0LL) )
  {
    v196 = UnityEngine_PlayerPrefs__GetInt_70235980(v195, 0LL);
    v197 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v197 = TerminalPramsManager_TypeInfo;
    }
    v197->static_fields->panelEventPoint = v196;
  }
  v198 = (System_String_o *)StringLiteral_11594/*"SAVEKEY_PlayedTerminalEffects"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11594/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL) )
  {
    v206 = UnityEngine_PlayerPrefs__GetString_70236548(v198, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B34787 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v199);
      byte_4B34787 = 1;
    }
    v207 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v207 = TerminalPramsManager_TypeInfo;
    }
    p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v207->static_fields->_PlayedTerminalEffects_k__BackingField;
    p_PlayedTerminalEffects_k__BackingField->klass = (PartyOrganizationUtility_c *)v206;
    sub_1BD33FC(p_PlayedTerminalEffects_k__BackingField, (int64_t)v206, v200, v201, v202, v203, v204, v205);
  }
  v209 = (System_String_o *)StringLiteral_11591/*"SAVEKEY_PlayTerminalEffectDisappear"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11591/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL) )
  {
    v211 = UnityEngine_PlayerPrefs__GetInt_70235980(v209, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B345B0 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v210);
      byte_4B345B0 = 1;
    }
    v212 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v212 = TerminalPramsManager_TypeInfo;
    }
    v212->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = v211 != 0;
  }
  v213 = (System_String_o *)StringLiteral_11592/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11592/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL) )
  {
    v215 = UnityEngine_PlayerPrefs__GetInt_70235980(v213, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B345B1 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v214);
      byte_4B345B1 = 1;
    }
    v216 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v216 = TerminalPramsManager_TypeInfo;
    }
    v216->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = v215;
  }
  v217 = (System_String_o *)StringLiteral_11593/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11593/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL) )
  {
    v219 = UnityEngine_PlayerPrefs__GetInt_70235980(v217, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B344BA )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v218);
      byte_4B344BA = 1;
    }
    v220 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v220 = TerminalPramsManager_TypeInfo;
    }
    v220->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = v219 != 0;
  }
  v221 = (System_String_o *)StringLiteral_11603/*"SAVEKEY_TerminalSelectedStoryQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11603/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL) )
  {
    v223 = UnityEngine_PlayerPrefs__GetInt_70235980(v221, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B340BC )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v222);
      byte_4B340BC = 1;
    }
    v224 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v224 = TerminalPramsManager_TypeInfo;
    }
    v224->static_fields->_SelectedStoryQuestId_k__BackingField = v223;
  }
  v225 = (System_String_o *)StringLiteral_11585/*"SAVEKEY_ConnectMarkEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11585/*"SAVEKEY_ConnectMarkEventId"*/, 0LL) )
  {
    v226 = UnityEngine_PlayerPrefs__GetInt_70235980(v225, 0LL);
    v227 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v227 = TerminalPramsManager_TypeInfo;
    }
    v227->static_fields->ConnectMarkEventId = v226;
  }
  v228 = (System_String_o *)StringLiteral_11584/*"SAVEKEY_ConnectMarkAnimationId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11584/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL) )
  {
    v229 = UnityEngine_PlayerPrefs__GetInt_70235980(v228, 0LL);
    v230 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v230 = TerminalPramsManager_TypeInfo;
    }
    v230->static_fields->ConnectMarkAnimationId = v229;
  }
  v231 = (System_String_o *)StringLiteral_11602/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11602/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL) )
  {
    v233 = UnityEngine_PlayerPrefs__GetInt_70235980(v231, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B331FA )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v232);
      byte_4B331FA = 1;
    }
    v234 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v234 = TerminalPramsManager_TypeInfo;
    }
    v234->static_fields->_SelectedRecollectionWarId_k__BackingField = v233;
  }
  v235 = (System_String_o *)StringLiteral_11583/*"SAVEKEY_ClearEventQuestIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11583/*"SAVEKEY_ClearEventQuestIds"*/, 0LL) )
  {
    v243 = UnityEngine_PlayerPrefs__GetString_70236548(v235, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33D4E )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v236);
      byte_4B33D4E = 1;
    }
    v244 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v244 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (PartyOrganizationUtility_o *)&v244->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (PartyOrganizationUtility_c *)v243;
    sub_1BD33FC(p_ClearEventQuestIds_k__BackingField, (int64_t)v243, v237, v238, v239, v240, v241, v242);
  }
  v246 = (System_String_o *)StringLiteral_11590/*"SAVEKEY_MapModelClearQuestInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11590/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL) )
  {
    v247 = UnityEngine_PlayerPrefs__GetString_70236548(v246, 0LL);
    IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(v247, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v247 || (IsNullOrEmpty = System_String__Split(v247, 0x2Cu, 0, 0LL)) == 0LL )
        sub_1BD36B4(IsNullOrEmpty, v249);
      v250 = *(_QWORD *)&IsNullOrEmpty->max_length;
      v251 = IsNullOrEmpty;
      if ( v250 )
      {
        if ( !(_DWORD)v250 )
          sub_1BD36BC(IsNullOrEmpty, v249);
        v252 = System_Int32__Parse(IsNullOrEmpty->m_Items[0], 0LL);
      }
      else
      {
        v252 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B34789 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v249);
        byte_4B34789 = 1;
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
      if ( !byte_4B3478A )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v249);
        byte_4B3478A = 1;
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
  v257 = (System_String_o *)StringLiteral_11586/*"SAVEKEY_DataLostBattleAutoReset"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11586/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL) )
  {
    v259 = UnityEngine_PlayerPrefs__GetInt_70235980(v257, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B344C1 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v258);
      byte_4B344C1 = 1;
    }
    v260 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v260 = TerminalPramsManager_TypeInfo;
    }
    v260->static_fields->_IsDataLostBattleAutoReset_k__BackingField = v259 != 0;
  }
  v261 = (System_String_o *)StringLiteral_11595/*"SAVEKEY_PlayerGenderType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11595/*"SAVEKEY_PlayerGenderType"*/, 0LL) )
  {
    v263 = UnityEngine_PlayerPrefs__GetInt_70235980(v261, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B326E0 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v262);
      byte_4B326E0 = 1;
    }
    v264 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v264 = TerminalPramsManager_TypeInfo;
    }
    v264->static_fields->_PlayerGenderType_k__BackingField = v263;
  }
  v265 = (System_String_o *)StringLiteral_11582/*"SAVEKEY_CampaignDirectBonus"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11582/*"SAVEKEY_CampaignDirectBonus"*/, 0LL) )
  {
    v266 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70236548(v265, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v274 = JsonManager__Deserialize_object_(
             v266,
             (const MethodInfo_2F98ABC *)Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3478E )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v267);
      byte_4B3478E = 1;
    }
    v275 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v275 = TerminalPramsManager_TypeInfo;
    }
    v276 = v275->static_fields;
    v276->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)v274;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&v276->_CampaignDirectBonus_k__BackingField,
      (int64_t)v274,
      v268,
      v269,
      v270,
      v271,
      v272,
      v273);
  }
  v277 = (System_String_o *)StringLiteral_11581/*"SAVEKEY_BlankEarthSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11581/*"SAVEKEY_BlankEarthSpotId"*/, 0LL) )
  {
    v279 = UnityEngine_PlayerPrefs__GetInt_70235980(v277, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33C6C )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v278);
      byte_4B33C6C = 1;
    }
    v280 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v280 = TerminalPramsManager_TypeInfo;
    }
    v280->static_fields->_BlankEarthSpotId_k__BackingField = v279;
  }
  v281 = (System_String_o *)StringLiteral_11580/*"SAVEKEY_BlankEarthRank"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11580/*"SAVEKEY_BlankEarthRank"*/, 0LL) )
  {
    v283 = UnityEngine_PlayerPrefs__GetInt_70235980(v281, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B34791 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v282);
      byte_4B34791 = 1;
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
  int32_t Int_70235980; // w0
  int32_t v7; // w20
  const MethodInfo *v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  System_String_o *String_70236548; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B34723 & 1) == 0 )
  {
    sub_1BD3458(&TerminalTransitionInfo_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_13804/*"TerminalTransitionInfoVoiceAssetName"*/, v2);
    sub_1BD3458(&StringLiteral_13803/*"TerminalTransitionInfoMissionId"*/, v3);
    byte_4B34723 = 1;
  }
  v4 = (System_String_o *)StringLiteral_13803/*"TerminalTransitionInfoMissionId"*/;
  v5 = 0LL;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13803/*"TerminalTransitionInfoMissionId"*/, 0LL) )
  {
    Int_70235980 = UnityEngine_PlayerPrefs__GetInt_70235980(v4, 0LL);
    if ( Int_70235980 < 1 )
    {
      return 0LL;
    }
    else
    {
      v7 = Int_70235980;
      v5 = sub_1BD36A4(TerminalTransitionInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0LL);
      TerminalTransitionInfo__Init((TerminalTransitionInfo_o *)v5, v8);
      if ( !v5 )
        sub_1BD36B4(v9, v10);
      *(_DWORD *)(v5 + 16) = v7;
      v11 = (System_String_o *)StringLiteral_13804/*"TerminalTransitionInfoVoiceAssetName"*/;
      if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13804/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL) )
      {
        String_70236548 = UnityEngine_PlayerPrefs__GetString_70236548(v11, 0LL);
        *(_QWORD *)(v5 + 40) = String_70236548;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)String_70236548, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4B3473D & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11590/*"SAVEKEY_MapModelClearQuestInfo"*/, v2);
    sub_1BD3458(&StringLiteral_863/*","*/, v3);
    byte_4B3473D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33F2E )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B33F2E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v4->static_fields->_MapModelClearQuestId_k__BackingField;
  v6 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_4B33F2F )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v5);
    byte_4B33F2F = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v7->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v8 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v9 = System_String__Concat_62536508(v6, (System_String_o *)StringLiteral_863/*","*/, v8, 0LL);
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

  if ( (byte_4B34729 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11601/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, v2);
    sub_1BD3458(&StringLiteral_13790/*"TerminalLastPlayedFreeQuestSpotId"*/, v3);
    sub_1BD3458(&StringLiteral_13791/*"TerminalLastPlayedQuestId"*/, v4);
    byte_4B34729 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33FF3 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B33FF3 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13791/*"TerminalLastPlayedQuestId"*/,
    v5->static_fields->_LastPlayedQuestId_k__BackingField,
    0LL);
  if ( !byte_4B34790 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v6);
    byte_4B34790 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11601/*"SAVEKEY_TerminalLastSelectQuestIndex"*/,
    v7->static_fields->_LastSelectQuestIndex_k__BackingField,
    0LL);
  if ( !byte_4B33C6E )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v8);
    byte_4B33C6E = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13790/*"TerminalLastPlayedFreeQuestSpotId"*/,
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

  if ( (byte_4B3471E & 1) == 0 )
  {
    sub_1BD3458(&Method_TerminalPramsManager_PlaySystemSE__, method);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v3);
    byte_4B3471E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3477B )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3477B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( TerminalPramsManager_TypeInfo->static_fields->_IsAutoNoSe_k__BackingField )
    {
LABEL_9:
      if ( !byte_4B3477C )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
        byte_4B3477C = 1;
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
      v7 = (_QWORD *)sub_1BD3470(Method_TerminalPramsManager_PlaySystemSE__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BD343C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, seKind, 0LL);
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
  if ( (byte_4B34746 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_43/*"\n"*/, v3);
    sub_1BD3458(&StringLiteral_1/*""*/, v4);
    byte_4B34746 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsTerminalEffectPlayed(effectId, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B34796 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v5);
      byte_4B34796 = 1;
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
      if ( !byte_4B34787 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v5);
        byte_4B34787 = 1;
      }
      v14 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v14 = TerminalPramsManager_TypeInfo;
      }
      p_PlayedTerminalEffects_k__BackingField = (PartyOrganizationUtility_o *)&v14->static_fields->_PlayedTerminalEffects_k__BackingField;
      p_PlayedTerminalEffects_k__BackingField->klass = v13;
      sub_1BD33FC(p_PlayedTerminalEffects_k__BackingField, (int64_t)v13, v6, v7, v8, v9, v10, v11);
      v12 = TerminalPramsManager_TypeInfo;
    }
    if ( !v12->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v12);
    if ( !byte_4B34796 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v5);
      byte_4B34796 = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    PlayedTerminalEffects_k__BackingField = v16->static_fields->_PlayedTerminalEffects_k__BackingField;
    v18 = System_Int32__ToString((int32_t)&v30, 0LL);
    v26 = System_String__Concat_62536508(
            PlayedTerminalEffects_k__BackingField,
            v18,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            0LL);
    if ( !byte_4B34787 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v19);
      byte_4B34787 = 1;
    }
    v27 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v27 = TerminalPramsManager_TypeInfo;
    }
    v28 = (PartyOrganizationUtility_o *)&v27->static_fields->_PlayedTerminalEffects_k__BackingField;
    v28->klass = (PartyOrganizationUtility_c *)v26;
    sub_1BD33FC(v28, (int64_t)v26, v20, v21, v22, v23, v24, v25);
    TerminalPramsManager__Save_SaveData(v29);
  }
}


void __fastcall TerminalPramsManager__PlayerGenderType_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B3473F & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11595/*"SAVEKEY_PlayerGenderType"*/, v2);
    byte_4B3473F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B34797 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34797 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  BattleResultComponent_resultData_o *v58; // x8
  struct UserServantCollectionEntity_array *oldUserSvtCollection; // x8
  _DWORD *v60; // x23
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  BattleResultComponent_resultData_o *v67; // x28
  int eventEndTitle; // w8
  __int64 *v69; // x26
  UserServantCollectionMaster_o *v70; // x20
  unsigned int v71; // w29
  __int64 v72; // x19
  __int64 v73; // x25
  __int64 v74; // x26
  struct DeckData_o *myDeck; // x24
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  UserServantCollectionEntity_o *v77; // x25
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  _DWORD *v84; // x24
  PartyOrganizationUtility_o *v85; // x24
  PartyOrganizationUtility_c *klass; // x8
  PartyOrganizationUtility_c *v87; // x8
  TerminalPramsManager_c *v88; // x0
  PartyOrganizationUtility_o *p_mQuestClearHeroineInfo; // x0
  __int64 v90; // x8
  BattleResultComponent_resultData_o *v91; // x9
  struct System_String_o *v92; // x10
  struct System_String_o *eventEndMessage; // x19
  __int128 v94; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v95; // x24
  UserServantEntity_o *v96; // x25
  int64_t v97; // x24
  void **p_monitor; // x19
  void *v99; // x26
  void *monitor; // t1
  void *v101; // x22
  __int64 v102; // x1
  Il2CppObject *MasterData_object; // x26
  NetworkManager_c *v104; // x0
  __int64 v105; // x22
  __int64 v106; // x28
  int64_t userIdNumber; // x27
  int v108; // w9
  UserServantCollectionEntity_o *v109; // x27
  int v110; // w8
  UserServantCollectionEntity_o *v111; // x26
  struct DeckData_o *userId; // x21
  int32_t SvtId; // w0
  __int64 v114; // x22
  __int64 v115; // x29
  int32_t v116; // w28
  int64_t v117; // x23
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  bool v130; // w9
  Il2CppObject *Master_object; // x0
  __int64 v132; // x22
  __int64 v133; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v134; // x24
  int klass_high; // w8
  int32_t friendshipExceedCount; // w9
  TerminalPramsManager_c *v137; // x0
  PartyOrganizationUtility_o *v138; // x0
  BattleResultComponent_resultData_o *v139; // x22
  BattleResultComponent_resultData_o *v140; // x8
  struct System_String_o *v141; // x9
  UserQuestEntity_o *v142; // x23
  int32_t questId; // w21
  TerminalPramsManager_c *v144; // x0
  __int64 v145; // x1
  int32_t QuestPhase; // w24
  TerminalPramsManager_c *v147; // x0
  int32_t v148; // w24
  Il2CppObject *v149; // x25
  UserQuestEntity_o *v150; // x0
  UserQuestEntity_o *v151; // x26
  int32_t v152; // w25
  __int64 v153; // x1
  bool v154; // w21
  TerminalPramsManager_c *v155; // x0
  const MethodInfo *v156; // x2
  TerminalPramsManager_c *v157; // x0
  System_String_o *ValidMessage; // x0
  const MethodInfo *v159; // x2
  TerminalPramsManager_c *v160; // x8
  TerminalPramsManager_c *v161; // x0
  const MethodInfo *v162; // x0
  char *v163; // x21
  TerminalPramsManager_c *v164; // x8
  int32_t v165; // w25
  const MethodInfo *v166; // x1
  WarEntity_o *v167; // x24
  TerminalPramsManager_c *v168; // x0
  bool v169; // w22
  TerminalPramsManager_c *v170; // x0
  char v171; // w8
  const MethodInfo *v172; // x1
  bool HasFlag; // w0
  int64_t v174; // x2
  int32_t v175; // w3
  System_String_o *v176; // x4
  BattleSetupInfo_o *v177; // x5
  FollowerInfo_o *v178; // x6
  PartyListViewItem_o *v179; // x7
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  int64_t v187; // x24
  TerminalPramsManager_c *v188; // x0
  PartyOrganizationUtility_o *p_mResultEventPanelRewardInfos; // x0
  TerminalPramsManager_c *v190; // x0
  PartyOrganizationUtility_o *p_eventConquestInfos; // x0
  int64_t v192; // x2
  int32_t v193; // w3
  System_String_o *v194; // x4
  BattleSetupInfo_o *v195; // x5
  FollowerInfo_o *v196; // x6
  PartyListViewItem_o *v197; // x7
  int64_t v198; // x24
  TerminalPramsManager_c *v199; // x0
  PartyOrganizationUtility_o *v200; // x0
  bool Farm; // w19
  TerminalPramsManager_c *v202; // x0
  char v203; // w19
  int32_t v204; // w24
  WarEntity_o *v205; // x0
  __int64 v206; // x1
  int32_t id; // w19
  TerminalPramsManager_c *v208; // x0
  TerminalPramsManager_c *v209; // x0
  Il2CppObject *v210; // x24
  int64_t v211; // x2
  int32_t v212; // w3
  System_String_o *v213; // x4
  BattleSetupInfo_o *v214; // x5
  FollowerInfo_o *v215; // x6
  PartyListViewItem_o *v216; // x7
  int64_t v217; // x2
  int32_t v218; // w3
  System_String_o *v219; // x4
  BattleSetupInfo_o *v220; // x5
  FollowerInfo_o *v221; // x6
  PartyListViewItem_o *v222; // x7
  int64_t v223; // x25
  TerminalPramsManager_c *v224; // x0
  PartyOrganizationUtility_o *p_OldUserEventPoint_k__BackingField; // x0
  signed int max_length; // w9
  BattleResultComponent_resultData_array *v227; // x25
  int v228; // w8
  Il2CppClass **v229; // x8
  Il2CppClass *v230; // x26
  int32_t RaidGroupDeadQuestId; // w27
  signed int v232; // w9
  BattleResultComponent_resultData_array *v233; // x27
  int v234; // w8
  int v235; // w21
  struct TerminalPramsManager_StaticFields *v236; // x8
  int32_t name_high; // w21
  signed int v238; // w9
  BattleResultComponent_resultData_array *v239; // x25
  int v240; // w8
  BattleResultComponent_resultData_o *v241; // x19
  int32_t RaidDeadQuestId; // w26
  struct TerminalPramsManager_StaticFields *v243; // x8
  int32_t v244; // w19
  TerminalPramsManager_c *v245; // x0
  TerminalPramsManager_c *v246; // x8
  bool v247; // w19
  TerminalPramsManager_c *v248; // x0
  int32_t v249; // w19
  int32_t v250; // w21
  Il2CppObject *v251; // x24
  int32_t eventId; // w25
  bool v253; // w24
  TerminalPramsManager_c *v254; // x0
  char *v255; // x21
  BattleResultComponent_resultData_o *v256; // x8
  int v257; // w9
  int v258; // w11
  __int64 v259; // x19
  int32_t bounds_high; // w24
  bool IsUserEventStatus; // w0
  TerminalPramsManager_c *v262; // x0
  TerminalPramsManager_c *v263; // x0
  TerminalPramsManager_c *v264; // x0
  Il2CppObject *v265; // x24
  __int64 v266; // x1
  int64_t v267; // x2
  int32_t v268; // w3
  System_String_o *v269; // x4
  BattleSetupInfo_o *v270; // x5
  FollowerInfo_o *v271; // x6
  PartyListViewItem_o *v272; // x7
  TerminalPramsManager_c *v273; // x0
  PartyOrganizationUtility_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  struct System_String_o *ultimateGetQpText; // x8
  struct System_String_o *v276; // x8
  signed int v277; // w8
  System_String_o **v278; // x9
  System_String_o *v279; // x26
  System_String_o **v280; // x9
  System_String_o *v281; // x21
  void **v282; // x8
  int32_t v283; // w22
  System_Collections_Generic_List_object__o *v284; // x27
  TerminalPramsManager___c_c *v285; // x8
  System_Predicate_object__o *_9__688_0; // x25
  Il2CppObject *v287; // x22
  struct TerminalPramsManager___c_StaticFields *v288; // x0
  int64_t v289; // x2
  int32_t v290; // w3
  System_String_o *v291; // x4
  BattleSetupInfo_o *v292; // x5
  FollowerInfo_o *v293; // x6
  PartyListViewItem_o *v294; // x7
  __int64 v295; // x1
  TerminalPramsManager_c *v296; // x0
  TerminalPramsManager_c *v297; // x0
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x27
  System_String_o *v299; // x22
  int64_t v300; // x2
  int32_t v301; // w3
  System_String_o *v302; // x4
  BattleSetupInfo_o *v303; // x5
  FollowerInfo_o *v304; // x6
  PartyListViewItem_o *v305; // x7
  TerminalPramsManager_c *v306; // x0
  int32_t v307; // w24
  int32_t PhaseCnt_k__BackingField; // w25
  _BOOL4 IsQuestClear_k__BackingField; // w19
  __int64 *v310; // x26
  TerminalPramsManager_c *v311; // x0
  Il2CppObject *v312; // x24
  int v313; // w21
  TerminalPramsManager_c *v314; // x0
  PartyOrganizationUtility_o *p_questClearCostumeRelease_k__BackingField; // x0
  int64_t v316; // x2
  int32_t v317; // w3
  System_String_o *v318; // x4
  BattleSetupInfo_o *v319; // x5
  FollowerInfo_o *v320; // x6
  PartyListViewItem_o *v321; // x7
  BattleResultComponent_resultData_o *v322; // x8
  int64_t v323; // x24
  TerminalPramsManager_c *v324; // x0
  PartyOrganizationUtility_o *v325; // x0
  TerminalPramsManager_c *v326; // x0
  PartyOrganizationUtility_o *p_questClearCostumeGet_k__BackingField; // x0
  int64_t v328; // x2
  int32_t v329; // w3
  System_String_o *v330; // x4
  BattleSetupInfo_o *v331; // x5
  FollowerInfo_o *v332; // x6
  PartyListViewItem_o *v333; // x7
  int64_t v334; // x24
  TerminalPramsManager_c *v335; // x0
  PartyOrganizationUtility_o *v336; // x0
  TerminalPramsManager_c *v337; // x0
  PartyOrganizationUtility_o *p_eventPointWinReward_k__BackingField; // x0
  int64_t v339; // x2
  int32_t v340; // w3
  System_String_o *v341; // x4
  BattleSetupInfo_o *v342; // x5
  FollowerInfo_o *v343; // x6
  PartyListViewItem_o *v344; // x7
  TerminalPramsManager_c *v345; // x0
  int32_t v346; // w24
  QuestGroupMaster_o *v347; // x25
  int32_t GroupId; // w0
  TerminalPramsManager_c *v349; // x8
  int32_t v350; // w26
  int v351; // w25
  Il2CppObject *v352; // x26
  EventPointEntity_o *v353; // x25
  int32_t v354; // w24
  struct TerminalPramsManager_StaticFields *v355; // x8
  BattleResultComponent_resultData_o *v356; // x8
  struct System_String_o *v357; // x9
  int64_t v358; // x24
  TerminalPramsManager_c *v359; // x0
  PartyOrganizationUtility_o *v360; // x0
  int32_t v361; // w19
  TerminalPramsManager_c *v362; // x0
  TerminalPramsManager_c *v363; // x0
  PartyOrganizationUtility_o *p_eventRaceBoost_k__BackingField; // x0
  int64_t v365; // x2
  int32_t v366; // w3
  System_String_o *v367; // x4
  BattleSetupInfo_o *v368; // x5
  FollowerInfo_o *v369; // x6
  PartyListViewItem_o *v370; // x7
  __int64 v371; // x8
  int64_t v372; // x23
  TerminalPramsManager_c *v373; // x0
  PartyOrganizationUtility_o *v374; // x0
  __int64 v375; // x19
  BattleResultComponent_resultData_o *v376; // x9
  struct System_String_o *v377; // x10
  int64_t v378; // x23
  TerminalPramsManager_c *v379; // x0
  PartyOrganizationUtility_o *p_eventTowerReward_k__BackingField; // x0
  int64_t v381; // x2
  int32_t v382; // w3
  System_String_o *v383; // x4
  BattleSetupInfo_o *v384; // x5
  FollowerInfo_o *v385; // x6
  PartyListViewItem_o *v386; // x7
  int64_t v387; // x23
  TerminalPramsManager_c *v388; // x0
  PartyOrganizationUtility_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  int64_t v390; // x23
  TerminalPramsManager_c *v391; // x0
  PartyOrganizationUtility_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  int64_t v393; // x23
  TerminalPramsManager_c *v394; // x0
  PartyOrganizationUtility_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  int64_t v396; // x23
  TerminalPramsManager_c *v397; // x0
  PartyOrganizationUtility_o *p_warClearReward_k__BackingField; // x0
  TerminalPramsManager_c *v399; // x0
  struct TerminalPramsManager_StaticFields *v400; // x0
  __int64 v401; // x1
  int64_t v402; // x2
  int32_t v403; // w3
  System_String_o *v404; // x4
  BattleSetupInfo_o *v405; // x5
  FollowerInfo_o *v406; // x6
  PartyListViewItem_o *v407; // x7
  TerminalPramsManager_c *v408; // x0
  struct TerminalPramsManager_StaticFields *v409; // x0
  Il2CppObject *Instance; // x23
  int32_t WarID_ByQuestID; // w22
  WarEntity_o *WarEntityByWarID; // x0
  int32_t v413; // w23
  int64_t v414; // x2
  int32_t v415; // w3
  System_String_o *v416; // x4
  BattleSetupInfo_o *v417; // x5
  FollowerInfo_o *v418; // x6
  PartyListViewItem_o *v419; // x7
  __int64 v420; // x8
  int64_t v421; // x22
  TerminalPramsManager_c *v422; // x0
  struct TerminalPramsManager_StaticFields *v423; // x0
  PartyOrganizationUtility_o *p_oldPersonalBoss_k__BackingField; // x0
  TerminalPramsManager_c *v425; // x0
  struct TerminalPramsManager_StaticFields *v426; // x0
  struct EventTowerReward_array *eventTowerReward; // x8
  bool v428; // w21
  BalanceConfig_c *v429; // x8
  int32_t v430; // w21
  TerminalPramsManager_c *v431; // x0
  __int64 v432; // x1
  TerminalPramsManager_c *v433; // x0
  BalanceConfig_c *v434; // x8
  int32_t v435; // w21
  TerminalPramsManager_c *v436; // x0
  BalanceConfig_c *v437; // x8
  int32_t v438; // w21
  TerminalPramsManager_c *v439; // x0
  BalanceConfig_c *v440; // x8
  int32_t v441; // w21
  Il2CppObject *v442; // x22
  struct DeckData_o *v443; // x21
  int64_t v444; // x2
  int32_t v445; // w3
  System_String_o *v446; // x4
  BattleSetupInfo_o *v447; // x5
  FollowerInfo_o *v448; // x6
  PartyListViewItem_o *v449; // x7
  UserSuperBossEntity_o *v450; // x22
  BattleResultComponent_resultData_array *v451; // x21
  __int64 v452; // x1
  int64_t v453; // x2
  int32_t v454; // w3
  System_String_o *v455; // x4
  BattleSetupInfo_o *v456; // x5
  FollowerInfo_o *v457; // x6
  PartyListViewItem_o *v458; // x7
  TerminalPramsManager_c *v459; // x0
  struct TerminalPramsManager_StaticFields *v460; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v462; // x21
  Il2CppObject *v463; // x22
  int32_t ScriptQuestId; // w22
  __int64 v465; // x1
  Il2CppObject *v466; // x23
  TerminalPramsManager_c *v467; // x0
  int32_t v468; // w26
  int32_t winResult; // w24
  int64_t v470; // x2
  int32_t v471; // w3
  System_String_o *v472; // x4
  BattleSetupInfo_o *v473; // x5
  FollowerInfo_o *v474; // x6
  PartyListViewItem_o *v475; // x7
  __int64 v476; // x1
  Il2CppObject *v477; // x23
  TerminalPramsManager_c *v478; // x0
  int32_t v479; // w24
  int32_t v480; // w21
  TerminalPramsManager_c *v481; // x0
  void *v482; // x1
  PartyOrganizationUtility_o *p_lastPlayBgmName; // x0
  const MethodInfo *v484; // x0
  Il2CppObject *v485; // x21
  int32_t v486; // w22
  int64_t v487; // x2
  int32_t v488; // w3
  System_String_o *v489; // x4
  BattleSetupInfo_o *v490; // x5
  FollowerInfo_o *v491; // x6
  PartyListViewItem_o *v492; // x7
  TerminalPramsManager_c *v493; // x0
  il2cpp_array_size_t *v494; // x0
  int32_t v495; // w22
  TerminalPramsManager_c *v496; // x0
  int32_t v497; // w23
  __int64 v498; // x1
  int64_t v499; // x2
  int32_t v500; // w3
  System_String_o *v501; // x4
  BattleSetupInfo_o *v502; // x5
  FollowerInfo_o *v503; // x6
  PartyListViewItem_o *v504; // x7
  SpecifiedSceneInfo_o *SpecifiedSceneInfo; // x22
  TerminalPramsManager_c *v506; // x0
  struct TerminalPramsManager_StaticFields *v507; // x0
  const MethodInfo *v508; // x0
  int64_t v509; // x2
  int32_t v510; // w3
  System_String_o *v511; // x4
  BattleSetupInfo_o *v512; // x5
  FollowerInfo_o *v513; // x6
  PartyListViewItem_o *v514; // x7
  int32_t v515; // w19
  TerminalPramsManager_c *v516; // x0
  PartyOrganizationUtility_o *p_eventHarvestGrowthInfo; // x0
  __int64 v518; // x1
  TerminalPramsManager_c *v519; // x0
  BattleResultComponent_resultData_array *v520; // x22
  int32_t ScriptIntParam; // w24
  int32_t v522; // w0
  int32_t v523; // w25
  int64_t v524; // x23
  int64_t v525; // x2
  int32_t v526; // w3
  System_String_o *v527; // x4
  BattleSetupInfo_o *v528; // x5
  FollowerInfo_o *v529; // x6
  PartyListViewItem_o *v530; // x7
  Il2CppArrayBounds *bounds; // d0
  TerminalPramsManager_c *v532; // x0
  PartyOrganizationUtility_o *v533; // x0
  Il2CppObject *v534; // x22
  QuestEntity_o *QuestEntity; // x0
  int64_t v536; // x2
  int32_t v537; // w3
  System_String_o *v538; // x4
  BattleSetupInfo_o *v539; // x5
  FollowerInfo_o *v540; // x6
  PartyListViewItem_o *v541; // x7
  QuestEntity_o *v542; // x22
  TerminalPramsManager_c *v543; // x0
  int32_t SpotId; // w21
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v546; // x21
  TerminalPramsManager_c *v547; // x0
  struct EventAreaImproveResultInfo_o *eventAreaImproveResultInfo; // x8
  TerminalPramsManager_c *v549; // x0
  __int64 v550; // x1
  System_String_o *v551; // x21
  TerminalPramsManager_c *v552; // x0
  System_String_o *v553; // x0
  __int64 v554; // x1
  int64_t v555; // x2
  int32_t v556; // w3
  System_String_o *v557; // x4
  BattleSetupInfo_o *v558; // x5
  FollowerInfo_o *v559; // x6
  PartyListViewItem_o *v560; // x7
  System_String_o *v561; // x21
  TerminalPramsManager_c *v562; // x0
  PartyOrganizationUtility_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  int64_t v564; // x21
  TerminalPramsManager_c *v565; // x0
  PartyOrganizationUtility_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v567; // x1
  __int64 v568; // x21
  TerminalPramsManager_c *v569; // x0
  int64_t v570; // x2
  int32_t v571; // w3
  System_String_o *v572; // x4
  BattleSetupInfo_o *v573; // x5
  FollowerInfo_o *v574; // x6
  PartyListViewItem_o *v575; // x7
  int64_t v576; // x2
  int32_t v577; // w3
  System_String_o *v578; // x4
  BattleSetupInfo_o *v579; // x5
  FollowerInfo_o *v580; // x6
  PartyListViewItem_o *v581; // x7
  void *v582; // x1
  __int64 v583; // x1
  TerminalPramsManager_c *v584; // x0
  int64_t v585; // x2
  int32_t v586; // w3
  System_String_o *v587; // x4
  BattleSetupInfo_o *v588; // x5
  FollowerInfo_o *v589; // x6
  PartyListViewItem_o *v590; // x7
  int64_t v591; // x2
  int32_t v592; // w3
  System_String_o *v593; // x4
  BattleSetupInfo_o *v594; // x5
  FollowerInfo_o *v595; // x6
  PartyListViewItem_o *v596; // x7
  void *v597; // x1
  __int64 v598; // x1
  TerminalPramsManager_c *v599; // x0
  int64_t v600; // x2
  int32_t v601; // w3
  System_String_o *v602; // x4
  BattleSetupInfo_o *v603; // x5
  FollowerInfo_o *v604; // x6
  PartyListViewItem_o *v605; // x7
  int64_t v606; // x2
  int32_t v607; // w3
  System_String_o *v608; // x4
  BattleSetupInfo_o *v609; // x5
  FollowerInfo_o *v610; // x6
  PartyListViewItem_o *v611; // x7
  void *v612; // x1
  __int64 v613; // x1
  TerminalPramsManager_c *v614; // x0
  int64_t v615; // x2
  int32_t v616; // w3
  System_String_o *v617; // x4
  BattleSetupInfo_o *v618; // x5
  FollowerInfo_o *v619; // x6
  PartyListViewItem_o *v620; // x7
  System_String_o *v621; // x0
  const MethodInfo *v622; // x1
  const MethodInfo *v623; // x0
  const MethodInfo *v624; // x0
  const MethodInfo *v625; // x0
  const MethodInfo *v626; // x0
  const MethodInfo *v627; // x0
  const MethodInfo *v628; // x0
  __int64 v629; // x1
  TerminalPramsManager_c *v630; // x0
  __int64 v631; // x0
  System_String_o *isLastGoalPlayed; // [xsp+18h] [xbp-128h]
  bool v633; // [xsp+24h] [xbp-11Ch]
  BattleResultComponent_resultData_array *resulta; // [xsp+28h] [xbp-118h]
  il2cpp_array_size_t *p_max_length; // [xsp+30h] [xbp-110h]
  BattleResultComponent_resultData_array **m_Items; // [xsp+38h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v637; // [xsp+40h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v638; // [xsp+60h] [xbp-E0h]
  __int128 v639; // [xsp+80h] [xbp-C0h]
  char v640[4]; // [xsp+94h] [xbp-ACh] BYREF
  UserSuperBossEntity_o *v641; // [xsp+98h] [xbp-A8h] BYREF
  Il2CppObject *v642; // [xsp+A0h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *v643; // [xsp+A8h] [xbp-98h] BYREF
  int QuestId_k__BackingField; // [xsp+B4h] [xbp-8Ch] BYREF
  Il2CppObject *v645; // [xsp+B8h] [xbp-88h] BYREF
  Il2CppObject *v646; // [xsp+C0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+C8h] [xbp-78h] BYREF
  int v648; // [xsp+D4h] [xbp-6Ch] BYREF
  QuestPhaseEntity_o *v649; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v650; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v651; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v652; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v653; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v654; // 0:x0.16

  v4 = result;
  if ( (byte_4B34754 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, isWin);
    sub_1BD3458(&bool_TypeInfo, v5);
    sub_1BD3458(&CondType_TypeInfo, v6);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventPointMaster___, v8);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventRaidMaster___, v9);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestGroupMaster___, v10);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestMessageMaster___, v12);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v14);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserQuestMaster___, v15);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v16);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserServantMaster___, v17);
    sub_1BD3458(&Method_DataManager_GetMasterData_WarMaster___, v18);
    sub_1BD3458(&Method_DataManager_GetMaster_EventDetailMaster___, v19);
    sub_1BD3458(&Method_DataManager_GetMaster_QuestPhaseMaster___, v20);
    sub_1BD3458(&Method_DataManager_GetMaster_ServantMaster___, v21);
    sub_1BD3458(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v22);
    sub_1BD3458(&Method_DataManager_GetMaster_UserSuperBossMaster___, v23);
    sub_1BD3458(&DataManager_TypeInfo, v24);
    sub_1BD3458(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v25);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v26);
    sub_1BD3458(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v27);
    sub_1BD3458(&EventHarvestGrowthInfo_TypeInfo, v28);
    sub_1BD3458(&EventSaveData_TypeInfo, v29);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v30);
    sub_1BD3458(&NetworkManager_TypeInfo, v31);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v33);
    sub_1BD3458(&System_Predicate_QuestReleaseEntity__TypeInfo, v34);
    sub_1BD3458(&QuestClearHeroineInfo_TypeInfo, v35);
    sub_1BD3458(&ScriptManager_TypeInfo, v36);
    sub_1BD3458(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v37);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38);
    sub_1BD3458(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v39);
    sub_1BD3458(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v40);
    sub_1BD3458(&Method_SingletonTemplate_QuestTree__get_Instance__, v41);
    sub_1BD3458(&string___TypeInfo, v42);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v43);
    sub_1BD3458(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v44);
    sub_1BD3458(&Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__688_0__, v45);
    sub_1BD3458(&TerminalPramsManager___c_TypeInfo, v46);
    sub_1BD3458(&UserServantCollectionEntity___TypeInfo, v47);
    sub_1BD3458(&UserServantCollectionEntity_TypeInfo, v48);
    sub_1BD3458(&UserServantEntity_TypeInfo, v49);
    sub_1BD3458(&UserSuperBossEntity___TypeInfo, v50);
    sub_1BD3458(&StringLiteral_20118/*"harvestGrowthAfterQuestId"*/, v51);
    sub_1BD3458(&StringLiteral_16899/*"afterActionBk"*/, v52);
    sub_1BD3458(&StringLiteral_863/*","*/, v53);
    sub_1BD3458(&StringLiteral_20119/*"harvestGrowthBeforeQuestId"*/, v54);
    sub_1BD3458(&StringLiteral_1/*""*/, v55);
    sub_1BD3458(&StringLiteral_6738/*"False"*/, v56);
    result = (BattleResultComponent_resultData_array *)sub_1BD3458(&StringLiteral_1209/*"0"*/, v57);
    byte_4B34754 = 1;
  }
  v649 = 0LL;
  v648 = 0;
  v646 = 0LL;
  entity = 0LL;
  v645 = 0LL;
  QuestId_k__BackingField = 0;
  v642 = 0LL;
  v643 = 0LL;
  v641 = 0LL;
  v640[0] = 0;
  if ( !v4 )
    goto LABEL_1151;
  p_max_length = &v4->max_length;
  if ( !v4->max_length )
    goto LABEL_1152;
  v58 = v4->m_Items[0];
  m_Items = (BattleResultComponent_resultData_array **)v4->m_Items;
  if ( !v58 )
    goto LABEL_1151;
  oldUserSvtCollection = v58->fields.oldUserSvtCollection;
  if ( !oldUserSvtCollection )
    goto LABEL_1151;
  v60 = (_DWORD *)sub_1BD3500(UserServantCollectionEntity___TypeInfo, oldUserSvtCollection->max_length);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1151;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_max_length )
    goto LABEL_1152;
  if ( !*m_Items )
    goto LABEL_1151;
  v67 = (*m_Items)->m_Items[11];
  v633 = isWin;
  resulta = v4;
  v648 = 0;
  if ( !v67 )
    goto LABEL_1151;
  eventEndTitle = (int)v67->fields.eventEndTitle;
  v69 = &qword_4B31000;
  if ( eventEndTitle >= 1 )
  {
    v70 = (UserServantCollectionMaster_o *)result;
    v71 = 0;
    while ( v71 < eventEndTitle )
    {
      v72 = *((_QWORD *)&v67->fields.eventEndMessage + (int)v71);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !*((_BYTE *)v69 + 3447) )
      {
        sub_1BD3458(&NetworkManager_TypeInfo, isWin);
        *((_BYTE *)v69 + 3447) = 1;
      }
      result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
      }
      if ( !v72 )
        goto LABEL_1151;
      v74 = *(_QWORD *)(v72 + 24);
      v73 = *(_QWORD *)(v72 + 32);
      myDeck = result->m_Items[19]->fields.myDeck;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v650.fields.currentCryptoKey = v74;
      *(_QWORD *)&v650.fields.fakeValue = v73;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                                           v650,
                                                           0LL);
      if ( !v70 )
        goto LABEL_1151;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v70, (int64_t)myDeck, (int32_t)result, 0LL);
      v77 = (UserServantCollectionEntity_o *)sub_1BD36A4(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor_40993636(v77, EntityDefinitely, 0LL);
      v69 = &qword_4B31000;
      if ( !v60 )
        goto LABEL_1151;
      if ( v77 )
      {
        result = (BattleResultComponent_resultData_array *)sub_1BD3594(v77, *(_QWORD *)(*(_QWORD *)v60 + 64LL));
        if ( !result )
          goto LABEL_1153;
      }
      if ( v71 >= v60[6] )
        break;
      v84 = &v60[2 * v71];
      *((_QWORD *)v84 + 4) = v77;
      v85 = (PartyOrganizationUtility_o *)(v84 + 8);
      sub_1BD33FC(v85, (int64_t)v77, v78, v79, v80, v81, v82, v83);
      if ( v71 >= v60[6] )
        break;
      klass = v85->klass;
      *(_OWORD *)&v638.fields.currentCryptoKey = *(_OWORD *)(v72 + 84);
      if ( !klass )
        goto LABEL_1151;
      *(_OWORD *)((char *)&klass->_1.declaringType + 4) = *(_OWORD *)&v638.fields.currentCryptoKey;
      if ( v71 >= v60[6] )
        break;
      v87 = v85->klass;
      v639 = *(_OWORD *)(v72 + 100);
      if ( !v87 )
        goto LABEL_1151;
      *(_OWORD *)((char *)&v87->_1.generic_class + 4) = v639;
      if ( v71 >= v60[6] )
        break;
      if ( !v85->klass )
        goto LABEL_1151;
      ++v71;
      HIDWORD(v85->klass->_1.interopData) = *(_DWORD *)(v72 + 116);
      v648 = v71;
      eventEndTitle = (int)v67->fields.eventEndTitle;
      if ( (int)v71 >= eventEndTitle )
        goto LABEL_35;
    }
LABEL_1152:
    sub_1BD36BC(result, isWin);
  }
LABEL_35:
  v88 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v88 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestClearHeroineInfo = (PartyOrganizationUtility_o *)&v88->static_fields->mQuestClearHeroineInfo;
  p_mQuestClearHeroineInfo->klass = 0LL;
  sub_1BD33FC(p_mQuestClearHeroineInfo, 0LL, v61, v62, v63, v64, v65, v66);
  v90 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1152;
  if ( !*m_Items )
    goto LABEL_1151;
  v91 = (*m_Items)->m_Items[5];
  if ( v91 )
  {
    v92 = v91->fields.eventEndTitle;
    if ( v92 )
    {
      if ( !(_DWORD)v92 )
        goto LABEL_1152;
      eventEndMessage = v91->fields.eventEndMessage;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1151;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !eventEndMessage )
        goto LABEL_1151;
      v94 = *(_OWORD *)&eventEndMessage[1].monitor;
      v95 = (DataMasterBase_TMaster__TEntity__PKType__o *)result;
      *(_OWORD *)&v638.fields.currentCryptoKey = *(_OWORD *)&eventEndMessage->fields._stringLength;
      *(_OWORD *)&v638.fields.fakeValue = v94;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v637 = v638;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(
                                                           &v637,
                                                           0LL);
      if ( !v95 )
        goto LABEL_1151;
      v96 = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                     v95,
                                     (int64_t)result,
                                     (const MethodInfo_31D209C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v97 = sub_1BD36A4(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_41019980((UserServantEntity_o *)v97, v96, 0LL);
      v639 = *(_OWORD *)&eventEndMessage[4].klass;
      if ( !v97 )
        goto LABEL_1151;
      *(_OWORD *)(v97 + 96) = v639;
      *(_DWORD *)(v97 + 256) = eventEndMessage[10].fields._stringLength;
      *(_QWORD *)(v97 + 292) = *(System_String_c **)((char *)&eventEndMessage[12].klass + 4);
      monitor = eventEndMessage[5].monitor;
      p_monitor = &eventEndMessage[5].monitor;
      v99 = monitor;
      v101 = p_monitor[1];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v651.fields.currentCryptoKey = v99;
      *(_QWORD *)&v651.fields.fakeValue = v101;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v651, 0LL) >= 1 )
        *(_OWORD *)(v97 + 128) = *(_OWORD *)p_monitor;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1151;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)result,
                            (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B31D77 )
      {
        sub_1BD3458(&NetworkManager_TypeInfo, v102);
        byte_4B31D77 = 1;
      }
      v104 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v104 = NetworkManager_TypeInfo;
      }
      v106 = *(_QWORD *)(v97 + 80);
      v105 = *(_QWORD *)(v97 + 88);
      userIdNumber = v104->static_fields->userIdNumber;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v652.fields.currentCryptoKey = v106;
      *(_QWORD *)&v652.fields.fakeValue = v105;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                                           v652,
                                                           0LL);
      if ( !MasterData_object )
        goto LABEL_1151;
      result = (BattleResultComponent_resultData_array *)UserServantCollectionMaster__GetEntityDefinitely(
                                                           (UserServantCollectionMaster_o *)MasterData_object,
                                                           userIdNumber,
                                                           (int32_t)result,
                                                           0LL);
      v648 = 0;
      if ( !v60 )
        goto LABEL_1151;
      v108 = v60[6];
      v109 = (UserServantCollectionEntity_o *)result;
      if ( v108 >= 1 )
      {
        v110 = 0;
        while ( v110 < (unsigned int)v108 )
        {
          v111 = *(UserServantCollectionEntity_o **)&v60[2 * v110 + 8];
          if ( !v111 )
            goto LABEL_1151;
          userId = (struct DeckData_o *)v111->fields.userId;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4B31D77 )
          {
            sub_1BD3458(&NetworkManager_TypeInfo, isWin);
            byte_4B31D77 = 1;
          }
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          }
          if ( userId == result->m_Items[19]->fields.myDeck )
          {
            SvtId = UserServantCollectionEntity__getSvtId(v111, 0LL);
            v114 = *(_QWORD *)(v97 + 80);
            v115 = *(_QWORD *)(v97 + 88);
            v116 = SvtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v653.fields.currentCryptoKey = v114;
            *(_QWORD *)&v653.fields.fakeValue = v115;
            result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                                                 v653,
                                                                 0LL);
            if ( v116 == (_DWORD)result )
              goto LABEL_79;
          }
          v110 = v648 + 1;
          v648 = v110;
          v108 = v60[6];
          if ( v110 >= v108 )
            goto LABEL_78;
        }
        goto LABEL_1152;
      }
LABEL_78:
      v111 = 0LL;
LABEL_79:
      v117 = sub_1BD36A4(QuestClearHeroineInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v117, 0LL);
      if ( !v117 )
        goto LABEL_1151;
      *(_QWORD *)(v117 + 16) = v97;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v117 + 16), v97, v118, v119, v120, v121, v122, v123);
      result = (BattleResultComponent_resultData_array *)UserServantEntity__getLimitCount(
                                                           (UserServantEntity_o *)v97,
                                                           0LL);
      if ( !v96 )
        goto LABEL_1151;
      v130 = (_DWORD)result != UserServantEntity__getLimitCount(v96, 0LL);
      *(_BYTE *)(v117 + 25) = 0;
      *(_DWORD *)(v117 + 28) = 0;
      *(_DWORD *)(v117 + 32) = 0;
      *(_BYTE *)(v117 + 40) = 0;
      *(_DWORD *)(v117 + 36) = -1;
      *(_BYTE *)(v117 + 24) = v130;
      *(_BYTE *)(v117 + 41) = *(_DWORD *)(v97 + 296) != v96->fields.exceedCount;
      if ( v111 )
      {
        result = (BattleResultComponent_resultData_array *)UserServantCollectionEntity__getFriendShipRank(v111, 0LL);
        if ( !v109 )
          goto LABEL_1151;
        if ( (_DWORD)result != UserServantCollectionEntity__getFriendShipRank(v109, 0LL) )
          *(_DWORD *)(v117 + 36) = UserServantCollectionEntity__getFriendShipRank(v111, 0LL);
        if ( v111->fields.friendshipExceedCount != v109->fields.friendshipExceedCount )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ServantMaster___);
          v133 = *(_QWORD *)(v97 + 80);
          v132 = *(_QWORD *)(v97 + 88);
          v134 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v654.fields.currentCryptoKey = v133;
          *(_QWORD *)&v654.fields.fakeValue = v132;
          result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                                               v654,
                                                               0LL);
          if ( !v134 )
            goto LABEL_1151;
          result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                               v134,
                                                               &entity,
                                                               (int32_t)result,
                                                               (const MethodInfo_31D1F44 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_1151;
            klass_high = HIDWORD(entity[6].klass);
            friendshipExceedCount = v111->fields.friendshipExceedCount;
            *(_BYTE *)(v117 + 40) = 1;
            *(_DWORD *)(v117 + 36) = friendshipExceedCount + klass_high;
          }
        }
      }
      v137 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v137 = TerminalPramsManager_TypeInfo;
      }
      v69 = &qword_4B31000;
      v138 = (PartyOrganizationUtility_o *)&v137->static_fields->mQuestClearHeroineInfo;
      v138->klass = (PartyOrganizationUtility_c *)v117;
      sub_1BD33FC(v138, v117, v124, v125, v126, v127, v128, v129);
      v90 = *(_QWORD *)p_max_length;
    }
  }
  if ( !(_DWORD)v90 )
    goto LABEL_1152;
  v139 = (BattleResultComponent_resultData_o *)*m_Items;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetBattleResultCampaignBonus(v139, (const MethodInfo *)isWin);
  if ( !*p_max_length )
    goto LABEL_1152;
  if ( !*m_Items )
    goto LABEL_1151;
  v140 = (*m_Items)->m_Items[9];
  if ( v140 && (v141 = v140->fields.eventEndTitle) != 0LL )
  {
    if ( !(_DWORD)v141 )
      goto LABEL_1152;
    v142 = (UserQuestEntity_o *)v140->fields.eventEndMessage;
  }
  else
  {
    v142 = 0LL;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33F9A )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    byte_4B33F9A = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE6(result->m_Items[19]->fields.oldUserGame) = v142 != 0LL;
  if ( !byte_4B33F99 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4B33F99 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE5(result->m_Items[19]->fields.oldUserGame) = 0;
  if ( !byte_4B340BA )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4B340BA = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE1(result->m_Items[19]->fields.resultDamageRewardInfos) = 0;
  if ( !byte_4B33F98 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4B33F98 = 1;
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
    if ( !byte_4B33D4D )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B33D4D = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( result->m_Items[19]->fields.eventId )
    {
      if ( !v142 )
        goto LABEL_1151;
    }
    else
    {
      if ( !v142 )
        goto LABEL_1151;
      questId = v142->fields.questId;
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4B33D51 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
        byte_4B33D51 = 1;
      }
      v144 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v144 = TerminalPramsManager_TypeInfo;
      }
      v144->static_fields->_QuestId_k__BackingField = questId;
      QuestPhase = UserQuestEntity__getQuestPhase(v142, 0LL);
      if ( !byte_4B33D55 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v145);
        byte_4B33D55 = 1;
      }
      v147 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v147 = TerminalPramsManager_TypeInfo;
      }
      v147->static_fields->_PhaseCnt_k__BackingField = QuestPhase;
    }
    v148 = v142->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1151;
    v149 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !*((_BYTE *)v69 + 3447) )
    {
      sub_1BD3458(&NetworkManager_TypeInfo, isWin);
      *((_BYTE *)v69 + 3447) = 1;
    }
    result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    }
    if ( !v149 )
      goto LABEL_1151;
    v150 = UserQuestMaster__GetEntity((UserQuestMaster_o *)v149, (int64_t)result->m_Items[19]->fields.myDeck, v148, 0LL);
    if ( v150 )
    {
      v151 = v150;
      v152 = UserQuestEntity__getQuestPhase(v150, 0LL);
      if ( UserQuestEntity__getClearNum(v142, 0LL) || UserQuestEntity__getClearNum(v151, 0LL) != 1 )
        v154 = UserQuestEntity__IsResetStatus(v142, 0LL) && !UserQuestEntity__IsResetStatus(v151, 0LL);
      else
        v154 = 1;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B33F99 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v153);
        byte_4B33F99 = 1;
      }
      v155 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v155 = TerminalPramsManager_TypeInfo;
      }
      v155->static_fields->_IsQuestClear_k__BackingField = v154;
      if ( !byte_4B3478C )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v153);
        v155 = TerminalPramsManager_TypeInfo;
        byte_4B3478C = 1;
      }
      if ( !v155->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v155);
        v155 = TerminalPramsManager_TypeInfo;
      }
      v155->static_fields->_EventUIEffectClearQuestId_k__BackingField = v148;
      if ( !byte_4B34789 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v153);
        v155 = TerminalPramsManager_TypeInfo;
        byte_4B34789 = 1;
      }
      if ( !v155->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v155);
        v155 = TerminalPramsManager_TypeInfo;
      }
      v155->static_fields->_MapModelClearQuestId_k__BackingField = v148;
      if ( !byte_4B3478A )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v153);
        v155 = TerminalPramsManager_TypeInfo;
        byte_4B3478A = 1;
      }
      if ( !v155->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v155);
        v155 = TerminalPramsManager_TypeInfo;
      }
      v155->static_fields->_MapModelClearPhaseCount_k__BackingField = v152;
      TerminalPramsManager__MapModelClearQuestInfo_SaveData((const MethodInfo *)v155);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !result )
        goto LABEL_1151;
      AdManager__TrackEvent((AdManager_o *)result, 4, 1, v148, v152, 0LL, 0LL);
      TerminalPramsManager__SendClearQuestToAdManager(v148, v152, v156);
    }
    else
    {
      v152 = 0;
    }
    v157 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v157);
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1151;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
    if ( !result )
      goto LABEL_1151;
    ValidMessage = QuestMessageMaster__GetValidMessage((QuestMessageMaster_o *)result, v148, v152, 3, 0LL);
    v160 = TerminalPramsManager_TypeInfo;
    if ( ValidMessage )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B32FE1 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
        byte_4B32FE1 = 1;
      }
      v160 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v160 = TerminalPramsManager_TypeInfo;
      }
      v160->static_fields->_IsDispOnly_k__BackingField = 1;
    }
    if ( !v160->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v160);
    if ( !byte_4B34799 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B34799 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( result->m_Items[19]->fields.originalPhaseClearQp >= 1 )
    {
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4B34799 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
        byte_4B34799 = 1;
      }
      v161 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v161 = TerminalPramsManager_TypeInfo;
      }
      TerminalPramsManager__SetQuestReleasedFocusState(
        v161->static_fields->_QuestReleaseFocusQuestId_k__BackingField,
        1,
        v159);
      TerminalPramsManager__SaveQuestReleasedFocusState(v162);
      if ( !byte_4B34329 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
        byte_4B34329 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      result->m_Items[19]->fields.originalPhaseClearQp = 0;
    }
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  v163 = &byte_4B33000;
  if ( !byte_4B33F9B )
  {
    result = (BattleResultComponent_resultData_array *)sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    byte_4B33F9B = 1;
  }
  v164 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v164 = TerminalPramsManager_TypeInfo;
  }
  if ( v164->static_fields->_IsQuestClear_k__BackingField )
  {
    if ( !v142 )
      goto LABEL_1151;
    v165 = v142->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1151;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !result )
      goto LABEL_1151;
    v167 = WarMaster__getByLastQuestId((WarMaster_o *)result, v165, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33F9C )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v166);
      byte_4B33F9C = 1;
    }
    v168 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v168 = TerminalPramsManager_TypeInfo;
    }
    v168->static_fields->_IsWarClear_k__BackingField = v167 != 0LL;
    v169 = TerminalPramsManager__CheckIsOrdealCallWarClear(v167, v166);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v169 )
    {
      if ( !byte_4B33F9D )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
        byte_4B33F9D = 1;
      }
      v170 = TerminalPramsManager_TypeInfo;
      v163 = &byte_4B33000;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v170 = TerminalPramsManager_TypeInfo;
      }
      v171 = 1;
    }
    else
    {
      if ( !byte_4B33F9D )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
        byte_4B33F9D = 1;
      }
      v170 = TerminalPramsManager_TypeInfo;
      v163 = &byte_4B33000;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v170 = TerminalPramsManager_TypeInfo;
      }
      v171 = 0;
    }
    v170->static_fields->_IsOrdealCallWarClear_k__BackingField = v171;
    if ( !v170->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v170);
    if ( !byte_4B33F9E )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B33F9E = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE3(result->m_Items[19]->fields.oldUserEvent) )
    {
      if ( !v167 )
        goto LABEL_1151;
      if ( !WarEntity__IsEvent(v167, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( !result )
          goto LABEL_1151;
        AdManager__TrackEvent((AdManager_o *)result, 6, 1, v167->fields.id, -1, 0LL, 0LL);
      }
    }
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !result )
      goto LABEL_1151;
    AdManager__TrackEvent((AdManager_o *)result, 5, 1, v165, -1, 0LL, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SendOpenedQuestIdToAdManager(v165, v172);
    if ( !byte_4B33F9E )
    {
      result = (BattleResultComponent_resultData_array *)sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B33F9E = 1;
    }
    v164 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v164 = TerminalPramsManager_TypeInfo;
    }
    if ( v164->static_fields->_IsWarClear_k__BackingField )
    {
      if ( !v167 )
        goto LABEL_1151;
      HasFlag = WarEntity__HasFlag(v167, 128, 0LL);
      v164 = TerminalPramsManager_TypeInfo;
      if ( HasFlag )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B3431C )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
          byte_4B3431C = 1;
        }
        v164 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v164 = TerminalPramsManager_TypeInfo;
        }
        v164->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
        if ( !byte_4B340BA )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
          v164 = TerminalPramsManager_TypeInfo;
          byte_4B340BA = 1;
        }
        if ( !v164->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v164);
          v164 = TerminalPramsManager_TypeInfo;
        }
        v164->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
      }
    }
  }
  if ( !v164->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v164);
  TerminalPramsManager__SetQuestRewardInfo(resulta, (const MethodInfo *)isWin);
  if ( !resulta->max_length )
    goto LABEL_1152;
  if ( !*m_Items )
    goto LABEL_1151;
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->panelEventPoint = HIDWORD((*m_Items)->m_Items[2]);
  static_fields->mResultEventPanelRewardInfos = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&static_fields->mResultEventPanelRewardInfos,
    0LL,
    v174,
    v175,
    v176,
    v177,
    v178,
    v179);
  if ( !*p_max_length )
    goto LABEL_1152;
  if ( !*m_Items )
    goto LABEL_1151;
  v187 = (int64_t)(*m_Items)->m_Items[19];
  if ( v187 && *(_QWORD *)(v187 + 24) )
  {
    v188 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v188 = TerminalPramsManager_TypeInfo;
    }
    p_mResultEventPanelRewardInfos = (PartyOrganizationUtility_o *)&v188->static_fields->mResultEventPanelRewardInfos;
    p_mResultEventPanelRewardInfos->klass = (PartyOrganizationUtility_c *)v187;
    sub_1BD33FC(p_mResultEventPanelRewardInfos, v187, v181, v182, v183, v184, v185, v186);
  }
  v190 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v190 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = (PartyOrganizationUtility_o *)&v190->static_fields->eventConquestInfos;
  p_eventConquestInfos->klass = 0LL;
  sub_1BD33FC(p_eventConquestInfos, 0LL, v181, v182, v183, v184, v185, v186);
  TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1152;
  if ( !*m_Items || !result )
    goto LABEL_1151;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v646,
                                                       HIDWORD((*m_Items)->bounds),
                                                       (const MethodInfo_31D1F44 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( !*p_max_length )
    goto LABEL_1152;
  if ( !*m_Items )
    goto LABEL_1151;
  v198 = (int64_t)(*m_Items)->m_Items[43];
  if ( v198 && *(_QWORD *)(v198 + 24) )
  {
    v199 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v199 = TerminalPramsManager_TypeInfo;
    }
    v200 = (PartyOrganizationUtility_o *)&v199->static_fields->eventConquestInfos;
    v200->klass = (PartyOrganizationUtility_c *)v198;
    sub_1BD33FC(v200, v198, v192, v193, v194, v195, v196, v197);
    if ( v646 )
      Farm = EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v646, 0LL);
    else
      Farm = 0;
    v202 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v202 = TerminalPramsManager_TypeInfo;
    }
    v202->static_fields->eventConquestInfoDisp = !Farm;
  }
  result = (BattleResultComponent_resultData_array *)v646;
  if ( v646 )
  {
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v646, 0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v163[3995] )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
        v163[3995] = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
      {
        v203 = 1;
      }
      else
      {
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_4B33F98 )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
          byte_4B33F98 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        v203 = BYTE6(result->m_Items[19]->fields.oldUserGame);
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      BYTE1(result->m_Items[19][1].fields.raceResult) = v203;
    }
  }
  if ( !*p_max_length )
    goto LABEL_1152;
  if ( !*m_Items )
    goto LABEL_1151;
  if ( LOBYTE((*m_Items)->m_Items[46]) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B345B0 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B345B0 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(result->m_Items[19][1].monitor) = 1;
    if ( !v163[3995] )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      v163[3995] = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      if ( !v142 )
        goto LABEL_1151;
      v204 = v142->fields.questId;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1151;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !result )
        goto LABEL_1151;
      v205 = WarMaster__getByLastQuestId((WarMaster_o *)result, v204, 0LL);
      if ( v205 )
      {
        id = v205->fields.id;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B345B1 )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, v206);
          byte_4B345B1 = 1;
        }
        v208 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v208 = TerminalPramsManager_TypeInfo;
        }
        v208->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = id;
      }
    }
  }
  v209 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v209 = TerminalPramsManager_TypeInfo;
  }
  *(_QWORD *)&v209->static_fields->clearLastBattleRaidId = -1LL;
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1151;
  v210 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1151;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1152;
  if ( !*m_Items || !result )
    goto LABEL_1151;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)result,
          &v645,
          HIDWORD((*m_Items)->bounds),
          (const MethodInfo_31D1F44 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_603;
  result = (BattleResultComponent_resultData_array *)v645;
  if ( !v645 )
    goto LABEL_1151;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPoint((EventDetailEntity_o *)v645, 0LL);
  v223 = 0LL;
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !*p_max_length )
      goto LABEL_1152;
    if ( !*m_Items )
      goto LABEL_1151;
    v223 = (int64_t)(*m_Items)->m_Items[10];
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3479A )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    byte_4B3479A = 1;
  }
  v224 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v224 = TerminalPramsManager_TypeInfo;
  }
  p_OldUserEventPoint_k__BackingField = (PartyOrganizationUtility_o *)&v224->static_fields->_OldUserEventPoint_k__BackingField;
  p_OldUserEventPoint_k__BackingField->klass = (PartyOrganizationUtility_c *)v223;
  sub_1BD33FC(p_OldUserEventPoint_k__BackingField, v223, v217, v218, v219, v220, v221, v222);
  if ( !*p_max_length )
    goto LABEL_1152;
  if ( !*m_Items || !v210 )
    goto LABEL_1151;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidGorupMax(
                                                       (EventRaidMaster_o *)v210,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0LL);
  if ( (int)result >= 1 )
  {
    if ( !*p_max_length )
      goto LABEL_1152;
    if ( !*m_Items )
      goto LABEL_1151;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                         (EventRaidMaster_o *)v210,
                                                         HIDWORD((*m_Items)->bounds),
                                                         0LL);
    v648 = 0;
    if ( !result )
      goto LABEL_1151;
    max_length = result->max_length;
    v227 = result;
    if ( max_length < 1 )
      goto LABEL_603;
    v228 = 0;
    while ( 1 )
    {
      if ( v228 >= (unsigned int)max_length )
        goto LABEL_1152;
      v229 = &v227->obj.klass + v228;
      v230 = v229[4];
      if ( !v230 )
        goto LABEL_1151;
      result = (BattleResultComponent_resultData_array *)EventRaidEntity__IsJumbleSingleRaid(
                                                           (EventRaidEntity_o *)v229[4],
                                                           0LL);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !*p_max_length )
          goto LABEL_1152;
        if ( !*m_Items )
          goto LABEL_1151;
        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                 (EventRaidMaster_o *)v210,
                                 HIDWORD((*m_Items)->bounds),
                                 (int32_t)v230->_1.namespaze,
                                 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B33D4D )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
          byte_4B33D4D = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( RaidGroupDeadQuestId == result->m_Items[19]->fields.eventId )
        {
          result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !result )
            goto LABEL_1151;
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
        goto LABEL_1152;
      if ( !*m_Items )
        goto LABEL_1151;
      result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidAliveQuestIds(
                                                           (EventRaidMaster_o *)v210,
                                                           HIDWORD((*m_Items)->bounds),
                                                           HIDWORD(v230->_1.name),
                                                           0LL);
      QuestId_k__BackingField = 0;
      if ( !result )
        goto LABEL_1151;
      v232 = result->max_length;
      v233 = result;
      if ( v232 >= 1 )
      {
        v234 = 0;
        while ( 1 )
        {
          if ( v234 >= (unsigned int)v232 )
            goto LABEL_1152;
          v235 = *((_DWORD *)v233->m_Items + v234);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4B33D4D )
          {
            sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
            byte_4B33D4D = 1;
          }
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          }
          v236 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
          if ( v235 == v236->_QuestId_k__BackingField )
            break;
          v234 = QuestId_k__BackingField + 1;
          QuestId_k__BackingField = v234;
          v232 = v233->max_length;
          if ( v234 >= v232 )
            goto LABEL_409;
        }
        name_high = HIDWORD(v230->_1.name);
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          v236 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v236->clearBattleRaidId = name_high;
      }
LABEL_409:
      v228 = v648 + 1;
      v648 = v228;
      max_length = v227->max_length;
      if ( v228 >= max_length )
        goto LABEL_603;
    }
    v248 = TerminalPramsManager_TypeInfo;
    v249 = HIDWORD(v230->_1.name);
    goto LABEL_458;
  }
  result = (BattleResultComponent_resultData_array *)v645;
  if ( !v645 )
    goto LABEL_1151;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__isRaidDefeatCount(
                                                       (EventDetailEntity_o *)v645,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_array *)v645;
    if ( !v645 )
      goto LABEL_1151;
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventActivityPoint(
                                                         (EventDetailEntity_o *)v645,
                                                         0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !*p_max_length )
        goto LABEL_1152;
      if ( !*m_Items )
        goto LABEL_1151;
      v244 = (int32_t)(*m_Items)->m_Items[42];
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B320B9 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
        byte_4B320B9 = 1;
      }
      v245 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v245 = TerminalPramsManager_TypeInfo;
      }
      v245->static_fields->_EventActivityPointEffectState_k__BackingField = v244;
    }
    else
    {
      result = (BattleResultComponent_resultData_array *)v645;
      if ( !v645 )
        goto LABEL_1151;
      if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v645, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B3479B )
        {
          result = (BattleResultComponent_resultData_array *)sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
          byte_4B3479B = 1;
        }
        v246 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v246 = TerminalPramsManager_TypeInfo;
        }
        if ( v246->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField )
        {
          v247 = 0;
        }
        else
        {
          if ( !*p_max_length )
            goto LABEL_1152;
          if ( !*m_Items )
            goto LABEL_1151;
          bounds_high = HIDWORD((*m_Items)->bounds);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsUserEventStatus = CondType__IsUserEventStatus(bounds_high, 7, 0LL);
          v246 = TerminalPramsManager_TypeInfo;
          v247 = IsUserEventStatus;
        }
        if ( !v246->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v246);
        if ( !byte_4B344CB )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
          byte_4B344CB = 1;
        }
        v262 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v262 = TerminalPramsManager_TypeInfo;
        }
        v262->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = v247;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)v645;
        if ( !v645 )
          goto LABEL_1151;
        if ( !EventDetailEntity__IsEventHappiness((EventDetailEntity_o *)v645, 0LL) )
          goto LABEL_485;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v251 = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B33D4D )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
          byte_4B33D4D = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        eventId = result->m_Items[19]->fields.eventId;
        if ( !byte_4B33D58 )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          byte_4B33D58 = 1;
        }
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( !v251 )
          goto LABEL_1151;
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)v251,
               &v643,
               eventId,
               LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
               0LL) )
        {
          result = (BattleResultComponent_resultData_array *)v643;
          if ( !v643 )
            goto LABEL_1151;
          v253 = QuestPhaseEntity__PlayHappinessCounterEffect(v643, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4B34306 )
          {
            sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
            byte_4B34306 = 1;
          }
          v254 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v254 = TerminalPramsManager_TypeInfo;
          }
          v254->static_fields->_PlayHappinessCounterEffect_k__BackingField = v253;
        }
        else
        {
LABEL_485:
          result = (BattleResultComponent_resultData_array *)v645;
          if ( !v645 )
            goto LABEL_1151;
          result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPanel(
                                                               (EventDetailEntity_o *)v645,
                                                               0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !*p_max_length )
              goto LABEL_1152;
            v255 = &byte_4B33000;
            if ( !*m_Items )
              goto LABEL_1151;
            v256 = (*m_Items)->m_Items[10];
            v648 = 0;
            if ( !v256 )
              goto LABEL_1151;
            v257 = (int)v256->fields.eventEndTitle;
            if ( v257 >= 1 )
            {
              v258 = 0;
              while ( 1 )
              {
                if ( v257 == v258 )
                  goto LABEL_1152;
                if ( !v645 )
                  goto LABEL_1151;
                v259 = *((_QWORD *)&v256->fields.eventEndMessage + v258);
                if ( !v259 )
                  goto LABEL_1151;
                if ( LODWORD(v645[1].klass) == *(_DWORD *)(v259 + 24) )
                  break;
                v648 = ++v258;
                if ( v257 == v258 )
                  goto LABEL_584;
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4B33E45 )
              {
                sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
                byte_4B33E45 = 1;
              }
              v264 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v264 = TerminalPramsManager_TypeInfo;
              }
              if ( !v264->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
              {
                v265 = (Il2CppObject *)sub_1BD36A4(EventSaveData_TypeInfo);
                System_Object___ctor(v265, 0LL);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4B33E46 )
                {
                  sub_1BD3458(&TerminalPramsManager_TypeInfo, v266);
                  byte_4B33E46 = 1;
                }
                v273 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v273 = TerminalPramsManager_TypeInfo;
                }
                p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v273->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
                p_BeforeEventSubmarineSaveData_k__BackingField->klass = (PartyOrganizationUtility_c *)v265;
                sub_1BD33FC(
                  p_BeforeEventSubmarineSaveData_k__BackingField,
                  (int64_t)v265,
                  v267,
                  v268,
                  v269,
                  v270,
                  v271,
                  v272);
                v264 = TerminalPramsManager_TypeInfo;
              }
              if ( !v264->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v264);
              if ( !byte_4B33E45 )
              {
                sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
                byte_4B33E45 = 1;
              }
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              ultimateGetQpText = result->m_Items[19]->fields.ultimateGetQpText;
              if ( !ultimateGetQpText )
                goto LABEL_1151;
              ultimateGetQpText->fields._stringLength = *(_DWORD *)(v259 + 24);
              if ( !byte_4B33E45 )
              {
                sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
                byte_4B33E45 = 1;
              }
              if ( !LODWORD(result->m_Items[24]) )
              {
                j_il2cpp_runtime_class_init_0(result);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              v276 = result->m_Items[19]->fields.ultimateGetQpText;
              if ( !v276 )
                goto LABEL_1151;
              result = (BattleResultComponent_resultData_array *)v276[1].klass;
              if ( result
                && (result = (BattleResultComponent_resultData_array *)System_String__Split(
                                                                         (System_String_o *)result,
                                                                         0x2Cu,
                                                                         0,
                                                                         0LL)) != 0LL )
              {
                v277 = result->max_length;
                v278 = (System_String_o **)&result->m_Items[1];
                if ( v277 <= 1 )
                  v278 = (System_String_o **)&StringLiteral_1209/*"0"*/;
                v279 = *v278;
                v280 = v277 <= 2 ? (System_String_o **)&StringLiteral_1209/*"0"*/ : (System_String_o **)&result->m_Items[2];
                v281 = *v280;
                v282 = v277 <= 3 ? &StringLiteral_6738/*"False"*/ : (void **)&result->m_Items[3];
              }
              else
              {
                v281 = (System_String_o *)StringLiteral_1209/*"0"*/;
                v282 = &StringLiteral_6738/*"False"*/;
                v279 = (System_String_o *)StringLiteral_1209/*"0"*/;
              }
              if ( !v645 )
                goto LABEL_1151;
              v283 = (int32_t)v645[1].klass;
              isLastGoalPlayed = (System_String_o *)*v282;
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
                                                                   v283,
                                                                   0LL);
              v284 = (System_Collections_Generic_List_object__o *)result;
              v285 = TerminalPramsManager___c_TypeInfo;
              if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
                v285 = TerminalPramsManager___c_TypeInfo;
              }
              _9__688_0 = (System_Predicate_object__o *)v285->static_fields->__9__688_0;
              if ( !_9__688_0 )
              {
                if ( !v285->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v285);
                  v285 = TerminalPramsManager___c_TypeInfo;
                }
                v287 = (Il2CppObject *)v285->static_fields->__9;
                _9__688_0 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_QuestReleaseEntity__TypeInfo);
                System_Predicate_object____ctor(
                  _9__688_0,
                  v287,
                  Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__688_0__,
                  0LL);
                v288 = TerminalPramsManager___c_TypeInfo->static_fields;
                v288->__9__688_0 = (struct System_Predicate_QuestReleaseEntity__o *)_9__688_0;
                sub_1BD33FC(
                  (PartyOrganizationUtility_o *)&v288->__9__688_0,
                  (int64_t)_9__688_0,
                  v289,
                  v290,
                  v291,
                  v292,
                  v293,
                  v294);
              }
              if ( !v284 )
                goto LABEL_1151;
              if ( System_Collections_Generic_List_object___Find(
                     v284,
                     (System_Predicate_T__o *)_9__688_0,
                     (const MethodInfo_35C13F8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4B33D4D )
                {
                  sub_1BD3458(&TerminalPramsManager_TypeInfo, v295);
                  byte_4B33D4D = 1;
                }
                v296 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v296 = TerminalPramsManager_TypeInfo;
                }
                QuestId_k__BackingField = v296->static_fields->_QuestId_k__BackingField;
                v279 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4B33E45 )
              {
                sub_1BD3458(&TerminalPramsManager_TypeInfo, v295);
                byte_4B33E45 = 1;
              }
              v297 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v297 = TerminalPramsManager_TypeInfo;
              }
              BeforeEventSubmarineSaveData_k__BackingField = v297->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
              v299 = System_Int64__ToString(v259 + 32, 0LL);
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_37871436(
                                                                   v299,
                                                                   v279,
                                                                   v281,
                                                                   isLastGoalPlayed,
                                                                   0LL);
              if ( !BeforeEventSubmarineSaveData_k__BackingField )
                goto LABEL_1151;
              BeforeEventSubmarineSaveData_k__BackingField->fields.value = (struct System_String_o *)result;
              sub_1BD33FC(
                (PartyOrganizationUtility_o *)&BeforeEventSubmarineSaveData_k__BackingField->fields.value,
                (int64_t)result,
                v300,
                v301,
                v302,
                v303,
                v304,
                v305);
              v255 = &byte_4B33000;
            }
LABEL_584:
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4B33D4D )
            {
              sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
              byte_4B33D4D = 1;
            }
            v306 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v306 = TerminalPramsManager_TypeInfo;
            }
            v307 = v306->static_fields->_QuestId_k__BackingField;
            if ( !byte_4B33D58 )
            {
              sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
              v306 = TerminalPramsManager_TypeInfo;
              byte_4B33D58 = 1;
            }
            if ( !v306->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v306);
              v306 = TerminalPramsManager_TypeInfo;
            }
            PhaseCnt_k__BackingField = v306->static_fields->_PhaseCnt_k__BackingField;
            if ( !v255[3995] )
            {
              sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
              v306 = TerminalPramsManager_TypeInfo;
              v255[3995] = 1;
            }
            if ( !v306->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v306);
              v306 = TerminalPramsManager_TypeInfo;
            }
            IsQuestClear_k__BackingField = v306->static_fields->_IsQuestClear_k__BackingField;
            if ( !byte_4B33F98 )
            {
              sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
              v306 = TerminalPramsManager_TypeInfo;
              byte_4B33F98 = 1;
            }
            if ( !v306->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v306);
              v306 = TerminalPramsManager_TypeInfo;
            }
            SubmarineSaveParamsManager__SaveClearQuestInfo(
              v307,
              PhaseCnt_k__BackingField,
              IsQuestClear_k__BackingField,
              v306->static_fields->_IsPhaseClear_k__BackingField,
              0LL);
          }
          else
          {
            result = (BattleResultComponent_resultData_array *)v645;
            if ( !v645 )
              goto LABEL_1151;
            if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)v645, 0LL) )
            {
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4B3478F )
              {
                sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
                byte_4B3478F = 1;
              }
              v263 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v263 = TerminalPramsManager_TypeInfo;
              }
              v263->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
            }
          }
        }
      }
    }
    goto LABEL_603;
  }
  if ( !*p_max_length )
    goto LABEL_1152;
  if ( !*m_Items )
    goto LABEL_1151;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                       (EventRaidMaster_o *)v210,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0LL);
  v648 = 0;
  if ( !result )
    goto LABEL_1151;
  v238 = result->max_length;
  v239 = result;
  if ( v238 >= 1 )
  {
    v240 = 0;
    while ( 1 )
    {
      if ( v240 >= (unsigned int)v238 || !*p_max_length )
        goto LABEL_1152;
      if ( !*m_Items )
        goto LABEL_1151;
      v241 = v239->m_Items[v240];
      if ( !v241 )
        goto LABEL_1151;
      RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                          (EventRaidMaster_o *)v210,
                          HIDWORD((*m_Items)->bounds),
                          v241->fields.eventId,
                          0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B33D4D )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
        byte_4B33D4D = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v243 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( RaidDeadQuestId == v243->_QuestId_k__BackingField )
        break;
      v240 = v648 + 1;
      v648 = v240;
      v238 = v239->max_length;
      if ( v240 >= v238 )
        goto LABEL_603;
    }
    v250 = v241->fields.eventId;
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      v243 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v243->clearBattleRaidId = v250;
    result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !result )
      goto LABEL_1151;
    if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)result, RaidDeadQuestId, 0, 0LL) )
    {
      v248 = TerminalPramsManager_TypeInfo;
      v249 = v241->fields.eventId;
LABEL_458:
      if ( !v248->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v248);
        v248 = TerminalPramsManager_TypeInfo;
      }
      v248->static_fields->clearLastBattleRaidId = v249;
    }
  }
LABEL_603:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v310 = &qword_4B31000;
  if ( !byte_4B34311 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    byte_4B34311 = 1;
  }
  v311 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v311 = TerminalPramsManager_TypeInfo;
  }
  v311->static_fields->_IsWarBoardClear_k__BackingField = 0;
  if ( !byte_4B33D4D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    v311 = TerminalPramsManager_TypeInfo;
    byte_4B33D4D = 1;
  }
  if ( !v311->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v311);
    v311 = TerminalPramsManager_TypeInfo;
  }
  if ( v311->static_fields->_QuestId_k__BackingField >= 1 )
  {
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1151;
    v312 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33D4D )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B33D4D = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v312 )
      goto LABEL_1151;
    result = (BattleResultComponent_resultData_array *)QuestMaster__getQuestEntity(
                                                         (QuestMaster_o *)v312,
                                                         result->m_Items[19]->fields.eventId,
                                                         0LL);
    if ( !result )
      goto LABEL_1151;
    v313 = (int)result->m_Items[1];
    if ( !byte_4B34311 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B34311 = 1;
    }
    v311 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v311 = TerminalPramsManager_TypeInfo;
    }
    v311->static_fields->_IsWarBoardClear_k__BackingField = v313 == 7;
  }
  if ( !v311->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v311);
  if ( !byte_4B345AF )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    byte_4B345AF = 1;
  }
  v314 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v314 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeRelease_k__BackingField = (PartyOrganizationUtility_o *)&v314->static_fields->_questClearCostumeRelease_k__BackingField;
  p_questClearCostumeRelease_k__BackingField->klass = 0LL;
  sub_1BD33FC(p_questClearCostumeRelease_k__BackingField, 0LL, v211, v212, v213, v214, v215, v216);
  if ( !*p_max_length )
    goto LABEL_1152;
  if ( !*m_Items )
    goto LABEL_1151;
  v322 = (*m_Items)->m_Items[22];
  if ( v322 && v322->fields.eventEndTitle )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B34302 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B34302 = 1;
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
        goto LABEL_1152;
      if ( !*m_Items )
        goto LABEL_1151;
      v323 = (int64_t)(*m_Items)->m_Items[22];
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4B345AF )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
        byte_4B345AF = 1;
      }
      v324 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v324 = TerminalPramsManager_TypeInfo;
      }
      v325 = (PartyOrganizationUtility_o *)&v324->static_fields->_questClearCostumeRelease_k__BackingField;
      v325->klass = (PartyOrganizationUtility_c *)v323;
      sub_1BD33FC(v325, v323, v316, v317, v318, v319, v320, v321);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3430F )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    byte_4B3430F = 1;
  }
  v326 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v326 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeGet_k__BackingField = (PartyOrganizationUtility_o *)&v326->static_fields->_questClearCostumeGet_k__BackingField;
  p_questClearCostumeGet_k__BackingField->klass = 0LL;
  sub_1BD33FC(p_questClearCostumeGet_k__BackingField, 0LL, v316, v317, v318, v319, v320, v321);
  if ( !*p_max_length )
    goto LABEL_1152;
  if ( !*m_Items )
    goto LABEL_1151;
  v334 = (int64_t)(*m_Items)->m_Items[23];
  if ( v334 && *(_QWORD *)(v334 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3430F )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B3430F = 1;
    }
    v335 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v335 = TerminalPramsManager_TypeInfo;
    }
    v336 = (PartyOrganizationUtility_o *)&v335->static_fields->_questClearCostumeGet_k__BackingField;
    v336->klass = (PartyOrganizationUtility_c *)v334;
    sub_1BD33FC(v336, v334, v328, v329, v330, v331, v332, v333);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3479C )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    byte_4B3479C = 1;
  }
  v337 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v337 = TerminalPramsManager_TypeInfo;
  }
  p_eventPointWinReward_k__BackingField = (PartyOrganizationUtility_o *)&v337->static_fields->_eventPointWinReward_k__BackingField;
  p_eventPointWinReward_k__BackingField->klass = 0LL;
  sub_1BD33FC(p_eventPointWinReward_k__BackingField, 0LL, v328, v329, v330, v331, v332, v333);
  if ( !byte_4B3479D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    byte_4B3479D = 1;
  }
  v345 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v345 = TerminalPramsManager_TypeInfo;
  }
  v345->static_fields->_eventPointWinType_k__BackingField = 0;
  if ( v142 && v645 && HIDWORD(v645[9].klass) == 4 )
  {
    v346 = v142->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1151;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !result )
      goto LABEL_1151;
    v347 = (QuestGroupMaster_o *)result;
    GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)result, v346, 4, 0LL);
    v349 = TerminalPramsManager_TypeInfo;
    v350 = GroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v349 = TerminalPramsManager_TypeInfo;
    }
    v349->static_fields->joinGroupId = v350;
    v351 = QuestGroupMaster__GetGroupId(v347, v346, 3, 0LL);
    if ( !byte_4B33F9B )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B33F9B = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    v310 = &qword_4B31000;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( v351 >= 1 && BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1151;
      v352 = DataManager__GetMasterData_object_(
               (DataManager_o *)result,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1151;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventPointMaster___);
      if ( !*p_max_length )
        goto LABEL_1152;
      if ( !*m_Items || !result )
        goto LABEL_1151;
      result = (BattleResultComponent_resultData_array *)EventPointMaster__GetEntity(
                                                           (EventPointMaster_o *)result,
                                                           v351,
                                                           HIDWORD((*m_Items)->bounds),
                                                           0LL);
      v353 = (EventPointEntity_o *)result;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v353 )
        goto LABEL_1151;
      result = (BattleResultComponent_resultData_array *)EventPointEntity__IsGroupOnGroup1(
                                                           v353,
                                                           TerminalPramsManager_TypeInfo->static_fields->joinGroupId,
                                                           0LL);
      if ( !v352 )
        goto LABEL_1151;
      v354 = QuestReleaseMaster__EventPointWinActionType(
               (QuestReleaseMaster_o *)v352,
               v346,
               (unsigned __int8)result & 1,
               0LL);
      if ( !byte_4B3479D )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
        byte_4B3479D = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      v310 = &qword_4B31000;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(result->m_Items[19]->fields.warClearReward) = v354;
      if ( !byte_4B3479E )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        byte_4B3479E = 1;
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v355 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( v355->_eventPointWinType_k__BackingField )
      {
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          v355 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v355->joinGroupId = -1;
      }
    }
    if ( !*p_max_length )
      goto LABEL_1152;
    if ( !*m_Items )
      goto LABEL_1151;
    v356 = (*m_Items)->m_Items[20];
    if ( v356 )
    {
      v357 = v356->fields.eventEndTitle;
      if ( v357 )
      {
        if ( !(_DWORD)v357 )
          goto LABEL_1152;
        v358 = (int64_t)v356->fields.eventEndMessage;
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_4B3479C )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
          byte_4B3479C = 1;
        }
        v359 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v359 = TerminalPramsManager_TypeInfo;
        }
        v360 = (PartyOrganizationUtility_o *)&v359->static_fields->_eventPointWinReward_k__BackingField;
        v360->klass = (PartyOrganizationUtility_c *)v358;
        sub_1BD33FC(v360, v358, v339, v340, v341, v342, v343, v344);
      }
    }
  }
  if ( v142 && v645 && HIDWORD(v645[9].klass) == 6 )
  {
    v361 = v142->fields.questId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3479F )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B3479F = 1;
    }
    v362 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v362 = TerminalPramsManager_TypeInfo;
    }
    v362->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = v361;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B344C6 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    byte_4B344C6 = 1;
  }
  v363 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v363 = TerminalPramsManager_TypeInfo;
  }
  p_eventRaceBoost_k__BackingField = (PartyOrganizationUtility_o *)&v363->static_fields->_eventRaceBoost_k__BackingField;
  p_eventRaceBoost_k__BackingField->klass = 0LL;
  sub_1BD33FC(p_eventRaceBoost_k__BackingField, 0LL, v339, v340, v341, v342, v343, v344);
  v371 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1152;
  if ( !*m_Items )
    goto LABEL_1151;
  v372 = (int64_t)(*m_Items)->m_Items[21];
  if ( v372 && *(int *)(v372 + 16) >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B344C6 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B344C6 = 1;
    }
    v373 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v373 = TerminalPramsManager_TypeInfo;
    }
    v374 = (PartyOrganizationUtility_o *)&v373->static_fields->_eventRaceBoost_k__BackingField;
    v374->klass = (PartyOrganizationUtility_c *)v372;
    sub_1BD33FC(v374, v372, v365, v366, v367, v368, v369, v370);
    if ( !byte_4B344AF )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B344AF = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v375 = *(_QWORD *)&result->m_Items[19]->fields.followerType;
    if ( !byte_4B33D4D )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4B33D4D = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v375 )
      goto LABEL_1151;
    *(_DWORD *)(v375 + 28) = result->m_Items[19]->fields.eventId;
    v371 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v371 )
    goto LABEL_1152;
  if ( !*m_Items )
    goto LABEL_1151;
  v376 = (*m_Items)->m_Items[24];
  if ( v376 )
  {
    v377 = v376->fields.eventEndTitle;
    if ( v377 )
    {
      if ( !(_DWORD)v377 )
        goto LABEL_1152;
      v378 = (int64_t)v376->fields.eventEndMessage;
      if ( !v378 )
        goto LABEL_1151;
      if ( *(int *)(v378 + 16) >= 1 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B347A0 )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
          byte_4B347A0 = 1;
        }
        v379 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v379 = TerminalPramsManager_TypeInfo;
        }
        p_eventTowerReward_k__BackingField = (PartyOrganizationUtility_o *)&v379->static_fields->_eventTowerReward_k__BackingField;
        p_eventTowerReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v378;
        sub_1BD33FC(p_eventTowerReward_k__BackingField, v378, v365, v366, v367, v368, v369, v370);
        if ( !*p_max_length )
          goto LABEL_1152;
        if ( !*m_Items )
          goto LABEL_1151;
        v387 = (int64_t)(*m_Items)->m_Items[25];
        if ( !byte_4B347A1 )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
          byte_4B347A1 = 1;
        }
        v388 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v388 = TerminalPramsManager_TypeInfo;
        }
        p_resultEventTowerRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v388->static_fields->_resultEventTowerRewardInfo_k__BackingField;
        p_resultEventTowerRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v387;
        sub_1BD33FC(p_resultEventTowerRewardInfo_k__BackingField, v387, v381, v382, v383, v384, v385, v386);
        v371 = *(_QWORD *)p_max_length;
      }
    }
  }
  if ( !(_DWORD)v371 )
    goto LABEL_1152;
  if ( !*m_Items )
    goto LABEL_1151;
  v390 = (int64_t)(*m_Items)->m_Items[26];
  if ( v390 && *(_QWORD *)(v390 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B34309 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B34309 = 1;
    }
    v391 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v391 = TerminalPramsManager_TypeInfo;
    }
    p_resultBoostItemRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v391->static_fields->_resultBoostItemRewardInfo_k__BackingField;
    p_resultBoostItemRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v390;
    sub_1BD33FC(p_resultBoostItemRewardInfo_k__BackingField, v390, v365, v366, v367, v368, v369, v370);
    v371 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v371 )
    goto LABEL_1152;
  if ( !*m_Items )
    goto LABEL_1151;
  v393 = (int64_t)(*m_Items)->m_Items[27];
  if ( v393 && *(_QWORD *)(v393 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3430A )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B3430A = 1;
    }
    v394 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v394 = TerminalPramsManager_TypeInfo;
    }
    p_resultEventBoardGameTokenRewardInfo_k__BackingField = (PartyOrganizationUtility_o *)&v394->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
    p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v393;
    sub_1BD33FC(p_resultEventBoardGameTokenRewardInfo_k__BackingField, v393, v365, v366, v367, v368, v369, v370);
    v371 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v371 )
    goto LABEL_1152;
  if ( !*m_Items )
    goto LABEL_1151;
  v396 = (int64_t)(*m_Items)->m_Items[28];
  if ( v396 && *(_QWORD *)(v396 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B34314 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B34314 = 1;
    }
    v397 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v397 = TerminalPramsManager_TypeInfo;
    }
    p_warClearReward_k__BackingField = (PartyOrganizationUtility_o *)&v397->static_fields->_warClearReward_k__BackingField;
    p_warClearReward_k__BackingField->klass = (PartyOrganizationUtility_c *)v396;
    sub_1BD33FC(p_warClearReward_k__BackingField, v396, v365, v366, v367, v368, v369, v370);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B347A2 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    byte_4B347A2 = 1;
  }
  v399 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v399 = TerminalPramsManager_TypeInfo;
  }
  v400 = v399->static_fields;
  v400->_oldSuperBoss_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v400->_oldSuperBoss_k__BackingField,
    0LL,
    v365,
    v366,
    v367,
    v368,
    v369,
    v370);
  if ( !byte_4B347A3 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v401);
    byte_4B347A3 = 1;
  }
  v408 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v408 = TerminalPramsManager_TypeInfo;
  }
  v409 = v408->static_fields;
  v409->_oldPersonalBoss_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v409->_oldPersonalBoss_k__BackingField,
    0LL,
    v402,
    v403,
    v404,
    v405,
    v406,
    v407);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !byte_4B33D4D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    byte_4B33D4D = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_1151;
  WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, result->m_Items[19]->fields.eventId, 0LL);
  result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !result )
    goto LABEL_1151;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)result, WarID_ByQuestID, 0LL);
  if ( WarEntityByWarID )
    v413 = WarEntityByWarID->fields.eventId;
  else
    v413 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !result )
    goto LABEL_1151;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v642,
                                                       v413,
                                                       (const MethodInfo_31D1F44 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( v633 )
    goto LABEL_1156;
  if ( !*p_max_length )
    goto LABEL_1152;
  result = *m_Items;
  if ( !*m_Items )
    goto LABEL_1151;
  result = (BattleResultComponent_resultData_array *)BattleResultComponent_resultData__checkResultDispFlag(
                                                       (BattleResultComponent_resultData_o *)result,
                                                       256,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
LABEL_1156:
    v420 = *(_QWORD *)p_max_length;
    if ( !(unsigned int)*(_QWORD *)p_max_length )
      goto LABEL_1152;
    if ( !*m_Items )
      goto LABEL_1151;
    if ( (*m_Items)->m_Items[41] )
    {
      result = (BattleResultComponent_resultData_array *)v642;
      if ( v642
        && (result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsPersonalBoss(
                                                                 (EventDetailEntity_o *)v642,
                                                                 0LL),
            v420 = *(_QWORD *)p_max_length,
            ((unsigned __int8)result & 1) != 0) )
      {
        if ( !(_DWORD)v420 )
          goto LABEL_1152;
        if ( !*m_Items )
          goto LABEL_1151;
        v421 = (int64_t)(*m_Items)->m_Items[41];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B347A3 )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
          byte_4B347A3 = 1;
        }
        v422 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v422 = TerminalPramsManager_TypeInfo;
        }
        v423 = v422->static_fields;
        v423->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v421;
        p_oldPersonalBoss_k__BackingField = (PartyOrganizationUtility_o *)&v423->_oldPersonalBoss_k__BackingField;
      }
      else
      {
        if ( !(_DWORD)v420 )
          goto LABEL_1152;
        if ( !*m_Items )
          goto LABEL_1151;
        v421 = (int64_t)(*m_Items)->m_Items[41];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B347A2 )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
          byte_4B347A2 = 1;
        }
        v425 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v425 = TerminalPramsManager_TypeInfo;
        }
        v426 = v425->static_fields;
        v426->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v421;
        p_oldPersonalBoss_k__BackingField = (PartyOrganizationUtility_o *)&v426->_oldSuperBoss_k__BackingField;
      }
      sub_1BD33FC(p_oldPersonalBoss_k__BackingField, v421, v414, v415, v416, v417, v418, v419);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B347A4 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    byte_4B347A4 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !result->m_Items[19]->fields.eventTowerReward )
    goto LABEL_1157;
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4B347A4 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    byte_4B347A4 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  eventTowerReward = result->m_Items[19]->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_1151;
  if ( *(_QWORD *)&eventTowerReward->max_length )
  {
    v428 = 1;
  }
  else
  {
LABEL_1157:
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_4B33D4D )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B33D4D = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v429 = BalanceConfig_TypeInfo;
    v430 = result->m_Items[19]->fields.eventId;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v429 = BalanceConfig_TypeInfo;
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v428 = v430 == v429->static_fields->OrtFirstQuestId;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4B34322 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    byte_4B34322 = 1;
  }
  v431 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v431 = TerminalPramsManager_TypeInfo;
  }
  v431->static_fields->_isIncomingCall_k__BackingField = v428;
  if ( v642 && EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)v642, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33D4D )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v432);
      byte_4B33D4D = 1;
    }
    v433 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v433 = TerminalPramsManager_TypeInfo;
    }
    v434 = BalanceConfig_TypeInfo;
    v435 = v433->static_fields->_QuestId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v434 = BalanceConfig_TypeInfo;
    }
    if ( v435 == v434->static_fields->OrtLateQuestId )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B33D58 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v432);
        byte_4B33D58 = 1;
      }
      v436 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v436 = TerminalPramsManager_TypeInfo;
      }
      v437 = BalanceConfig_TypeInfo;
      v438 = v436->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v437 = BalanceConfig_TypeInfo;
      }
      if ( v438 + 1 == v437->static_fields->OrtLatePhaseBreak )
        goto LABEL_1158;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B33D58 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v432);
        byte_4B33D58 = 1;
      }
      v439 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v439 = TerminalPramsManager_TypeInfo;
      }
      v440 = BalanceConfig_TypeInfo;
      v441 = v439->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v440 = BalanceConfig_TypeInfo;
      }
      if ( v441 + 1 == v440->static_fields->OrtLatePhaseDead )
      {
LABEL_1158:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v442 = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserSuperBossMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !*((_BYTE *)v310 + 3447) )
        {
          sub_1BD3458(&NetworkManager_TypeInfo, isWin);
          *((_BYTE *)v310 + 3447) = 1;
        }
        result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        }
        v443 = result->m_Items[19]->fields.myDeck;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v442 )
          goto LABEL_1151;
        if ( UserSuperBossMaster__TryGetEntity(
               (UserSuperBossMaster_o *)v442,
               &v641,
               (int64_t)v443,
               v413,
               BalanceConfig_TypeInfo->static_fields->OrtThirdFormId,
               0LL) )
        {
          result = (BattleResultComponent_resultData_array *)sub_1BD3500(UserSuperBossEntity___TypeInfo, 1LL);
          if ( !result )
            goto LABEL_1151;
          v450 = v641;
          v451 = result;
          if ( v641 )
          {
            result = (BattleResultComponent_resultData_array *)sub_1BD3594(v641, result->obj.klass->_1.element_class);
            if ( !result )
            {
LABEL_1153:
              v631 = sub_1BD36D8();
              sub_1BD3580(v631, 0LL);
            }
          }
          if ( !v451->max_length )
            goto LABEL_1152;
          v451->m_Items[0] = (BattleResultComponent_resultData_o *)v450;
          sub_1BD33FC((PartyOrganizationUtility_o *)v451->m_Items, (int64_t)v450, v444, v445, v446, v447, v448, v449);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4B347A3 )
          {
            sub_1BD3458(&TerminalPramsManager_TypeInfo, v452);
            byte_4B347A3 = 1;
          }
          v459 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v459 = TerminalPramsManager_TypeInfo;
          }
          v460 = v459->static_fields;
          v460->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v451;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&v460->_oldPersonalBoss_k__BackingField,
            (int64_t)v451,
            v453,
            v454,
            v455,
            v456,
            v457,
            v458);
        }
      }
    }
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  TalkResumeInfo = ScriptManager__GetTalkResumeInfo(0LL);
  if ( TalkResumeInfo )
  {
    v462 = TalkResumeInfo;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1151;
    v463 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33D4D )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B33D4D = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v463 )
      goto LABEL_1151;
    ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)v463, result->m_Items[19]->fields.eventId, 0LL);
    v466 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !byte_4B33D58 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v465);
      byte_4B33D58 = 1;
    }
    v467 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v467 = TerminalPramsManager_TypeInfo;
    }
    v468 = v467->static_fields->_PhaseCnt_k__BackingField;
    winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v462, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd2(
                                                         ScriptQuestId,
                                                         v468 + 1,
                                                         winResult,
                                                         0LL);
    if ( !v466 )
      goto LABEL_1151;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v466, (System_String_o *)result, 0LL) )
      goto LABEL_978;
    v477 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33D58 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v476);
      byte_4B33D58 = 1;
    }
    v478 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v478 = TerminalPramsManager_TypeInfo;
    }
    v479 = v478->static_fields->_PhaseCnt_k__BackingField;
    v480 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v462, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd(
                                                         ScriptQuestId,
                                                         v479 + 1,
                                                         v480,
                                                         0LL);
    if ( !v477 )
      goto LABEL_1151;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v477, (System_String_o *)result, 0LL) )
    {
LABEL_978:
      v481 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v481 = TerminalPramsManager_TypeInfo;
      }
      v482 = StringLiteral_1/*""*/;
      p_lastPlayBgmName = (PartyOrganizationUtility_o *)&v481->static_fields->lastPlayBgmName;
      p_lastPlayBgmName->klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
      sub_1BD33FC(p_lastPlayBgmName, (int64_t)v482, v470, v471, v472, v473, v474, v475);
      TerminalPramsManager__LastPlayBgmNameSave_SaveData(v484);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1151;
  v485 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D4D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    byte_4B33D4D = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v486 = result->m_Items[19]->fields.eventId;
  if ( !byte_4B33D58 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4B33D58 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v485 )
    goto LABEL_1151;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)v485,
    &v649,
    v486,
    LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
    0LL);
  if ( !byte_4B347A5 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    byte_4B347A5 = 1;
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
    if ( !byte_4B347A5 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B347A5 = 1;
    }
    v493 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v493 = TerminalPramsManager_TypeInfo;
    }
    result = (BattleResultComponent_resultData_array *)v493->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
    if ( !result )
      goto LABEL_1151;
    *(_QWORD *)&result->max_length = 0LL;
    v494 = &result->max_length;
    *((_QWORD *)v494 - 1) = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)v494, 0LL, v487, v488, v489, v490, v491, v492);
  }
  if ( !*p_max_length )
    goto LABEL_1152;
  if ( !*m_Items )
    goto LABEL_1151;
  v495 = HIDWORD((*m_Items)->bounds);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D4D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    byte_4B33D4D = 1;
  }
  v496 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v496 = TerminalPramsManager_TypeInfo;
  }
  v497 = v496->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B33D58 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    v496 = TerminalPramsManager_TypeInfo;
    byte_4B33D58 = 1;
  }
  if ( !v496->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v496);
    v496 = TerminalPramsManager_TypeInfo;
  }
  SpecifiedSceneInfo = QuestPhaseMaster__GetSpecifiedSceneInfo(
                         (QuestPhaseMaster_o *)v485,
                         v495,
                         v497,
                         v496->static_fields->_PhaseCnt_k__BackingField + 1,
                         0LL);
  if ( !byte_4B34786 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v498);
    byte_4B34786 = 1;
  }
  v506 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v506 = TerminalPramsManager_TypeInfo;
  }
  v507 = v506->static_fields;
  v507->_SpecifiedChangeSceneInfo_k__BackingField = SpecifiedSceneInfo;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v507->_SpecifiedChangeSceneInfo_k__BackingField,
    (int64_t)SpecifiedSceneInfo,
    v499,
    v500,
    v501,
    v502,
    v503,
    v504);
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId = 0LL;
  TerminalPramsManager__InitTipsArchiveScrollValueList(v508);
  if ( !*p_max_length )
    goto LABEL_1152;
  if ( !*m_Items )
    goto LABEL_1151;
  v515 = (int32_t)(*m_Items)->m_Items[52];
  v516 = TerminalPramsManager_TypeInfo;
  if ( v515 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B34304 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B34304 = 1;
    }
    v516 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v516 = TerminalPramsManager_TypeInfo;
    }
    v516->static_fields->_EventMuralId_k__BackingField = v515;
  }
  if ( !v516->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v516);
    v516 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = (PartyOrganizationUtility_o *)&v516->static_fields->eventHarvestGrowthInfo;
  p_eventHarvestGrowthInfo->klass = 0LL;
  sub_1BD33FC(p_eventHarvestGrowthInfo, 0LL, v509, v510, v511, v512, v513, v514);
  if ( !byte_4B33D4D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v518);
    byte_4B33D4D = 1;
  }
  v519 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v519 = TerminalPramsManager_TypeInfo;
  }
  result = (BattleResultComponent_resultData_array *)QuestPhaseMaster__GetEntity(
                                                       (QuestPhaseMaster_o *)v485,
                                                       v519->static_fields->_QuestId_k__BackingField,
                                                       1,
                                                       0LL);
  if ( !result )
    goto LABEL_1151;
  v520 = result;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(
                     (QuestPhaseEntity_o *)result,
                     (System_String_o *)StringLiteral_20119/*"harvestGrowthBeforeQuestId"*/,
                     -1,
                     0LL);
  v522 = QuestPhaseEntity__getScriptIntParam(
           (QuestPhaseEntity_o *)v520,
           (System_String_o *)StringLiteral_20118/*"harvestGrowthAfterQuestId"*/,
           -1,
           0LL);
  if ( ScriptIntParam >= 1 )
  {
    v523 = v522;
    if ( v522 >= 1 )
    {
      v524 = sub_1BD36A4(EventHarvestGrowthInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v524, 0LL);
      if ( !v524 )
        goto LABEL_1151;
      bounds = v520->bounds;
      *(_DWORD *)(v524 + 24) = ScriptIntParam;
      *(_DWORD *)(v524 + 28) = v523;
      *(_QWORD *)(v524 + 16) = bounds;
      v532 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v532 = TerminalPramsManager_TypeInfo;
      }
      v533 = (PartyOrganizationUtility_o *)&v532->static_fields->eventHarvestGrowthInfo;
      v533->klass = (PartyOrganizationUtility_c *)v524;
      sub_1BD33FC(v533, v524, v525, v526, v527, v528, v529, v530);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1151;
  v534 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D4D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
    byte_4B33D4D = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v534 )
    goto LABEL_1151;
  QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)v534, result->m_Items[19]->fields.eventId, 0LL);
  if ( QuestEntity )
  {
    v542 = QuestEntity;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33D4D )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B33D4D = 1;
    }
    v543 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v543 = TerminalPramsManager_TypeInfo;
    }
    if ( QuestPhaseMaster__IsAreaImproveQuest(
           (QuestPhaseMaster_o *)v485,
           v543->static_fields->_QuestId_k__BackingField,
           0LL) )
    {
      SpotId = QuestEntity__getSpotId(v542, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
      if ( !*p_max_length )
        goto LABEL_1152;
      if ( !*m_Items || !result )
        goto LABEL_1151;
      CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                             (UserEventCooltimeRewardMaster_o *)result,
                             HIDWORD((*m_Items)->bounds),
                             SpotId,
                             0LL);
      if ( CurrentLevelEntity )
      {
        v546 = CurrentLevelEntity;
        v547 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v547 = TerminalPramsManager_TypeInfo;
        }
        eventAreaImproveResultInfo = v547->static_fields->eventAreaImproveResultInfo;
        if ( eventAreaImproveResultInfo )
        {
          if ( !v547->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v547);
            eventAreaImproveResultInfo = TerminalPramsManager_TypeInfo->static_fields->eventAreaImproveResultInfo;
            if ( !eventAreaImproveResultInfo )
              goto LABEL_1151;
          }
          eventAreaImproveResultInfo->fields.afterLevel = v546->fields.lv;
        }
      }
    }
  }
  result = (BattleResultComponent_resultData_array *)v649;
  if ( v649 )
  {
    result = (BattleResultComponent_resultData_array *)QuestPhaseEntity__GetMoveSceneInfo(v649, 0LL);
    if ( !result )
      goto LABEL_1151;
    if ( *(_QWORD *)&result->max_length )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B33D4D )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
        byte_4B33D4D = 1;
      }
      v549 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v549 = TerminalPramsManager_TypeInfo;
      }
      v648 = v549->static_fields->_QuestId_k__BackingField;
      v551 = System_Int32__ToString((int32_t)&v648, 0LL);
      if ( !byte_4B33D58 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v550);
        byte_4B33D58 = 1;
      }
      v552 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v552 = TerminalPramsManager_TypeInfo;
      }
      v648 = v552->static_fields->_PhaseCnt_k__BackingField + 1;
      v553 = System_Int32__ToString((int32_t)&v648, 0LL);
      v561 = System_String__Concat_62536508(v551, (System_String_o *)StringLiteral_863/*","*/, v553, 0LL);
      if ( !byte_4B344C5 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v554);
        byte_4B344C5 = 1;
      }
      v562 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v562 = TerminalPramsManager_TypeInfo;
      }
      p_SceneMoveQuestClearedInfo_k__BackingField = (PartyOrganizationUtility_o *)&v562->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
      p_SceneMoveQuestClearedInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v561;
      sub_1BD33FC(p_SceneMoveQuestClearedInfo_k__BackingField, (int64_t)v561, v555, v556, v557, v558, v559, v560);
    }
  }
  if ( !*p_max_length )
    goto LABEL_1152;
  if ( !*m_Items )
    goto LABEL_1151;
  v564 = (int64_t)(*m_Items)->m_Items[47];
  if ( v564 && *(_QWORD *)(v564 + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3430D )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, isWin);
      byte_4B3430D = 1;
    }
    v565 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v565 = TerminalPramsManager_TypeInfo;
    }
    p_limitImageAnnounces_k__BackingField = (PartyOrganizationUtility_o *)&v565->static_fields->_limitImageAnnounces_k__BackingField;
    p_limitImageAnnounces_k__BackingField->klass = (PartyOrganizationUtility_c *)v564;
    sub_1BD33FC(p_limitImageAnnounces_k__BackingField, v564, v536, v537, v538, v539, v540, v541);
  }
  v568 = sub_1BD3500(string___TypeInfo, 7LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D4D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v567);
    byte_4B33D4D = 1;
  }
  v569 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v569 = TerminalPramsManager_TypeInfo;
  }
  v648 = v569->static_fields->_QuestId_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v648, 0LL);
  if ( !v568 )
LABEL_1151:
    sub_1BD36B4(result, isWin);
  if ( !*(_DWORD *)(v568 + 24) )
    goto LABEL_1152;
  *(_QWORD *)(v568 + 32) = result;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v568 + 32), (int64_t)result, v570, v571, v572, v573, v574, v575);
  if ( *(_DWORD *)(v568 + 24) <= 1u )
    goto LABEL_1152;
  v582 = StringLiteral_863/*","*/;
  *(_QWORD *)(v568 + 40) = StringLiteral_863/*","*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v568 + 40), (int64_t)v582, v576, v577, v578, v579, v580, v581);
  if ( !byte_4B33D58 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v583);
    byte_4B33D58 = 1;
  }
  v584 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v584 = TerminalPramsManager_TypeInfo;
  }
  v648 = v584->static_fields->_PhaseCnt_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v648, 0LL);
  if ( *(_DWORD *)(v568 + 24) <= 2u )
    goto LABEL_1152;
  *(_QWORD *)(v568 + 48) = result;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v568 + 48), (int64_t)result, v585, v586, v587, v588, v589, v590);
  if ( *(_DWORD *)(v568 + 24) <= 3u )
    goto LABEL_1152;
  v597 = StringLiteral_863/*","*/;
  *(_QWORD *)(v568 + 56) = StringLiteral_863/*","*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v568 + 56), (int64_t)v597, v591, v592, v593, v594, v595, v596);
  if ( !byte_4B33F9B )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v598);
    byte_4B33F9B = 1;
  }
  v599 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v599 = TerminalPramsManager_TypeInfo;
  }
  v640[0] = v599->static_fields->_IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v640, 0LL);
  if ( *(_DWORD *)(v568 + 24) <= 4u )
    goto LABEL_1152;
  *(_QWORD *)(v568 + 64) = result;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v568 + 64), (int64_t)result, v600, v601, v602, v603, v604, v605);
  if ( *(_DWORD *)(v568 + 24) <= 5u )
    goto LABEL_1152;
  v612 = StringLiteral_863/*","*/;
  *(_QWORD *)(v568 + 72) = StringLiteral_863/*","*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v568 + 72), (int64_t)v612, v606, v607, v608, v609, v610, v611);
  if ( !byte_4B33F98 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v613);
    byte_4B33F98 = 1;
  }
  v614 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v614 = TerminalPramsManager_TypeInfo;
  }
  v640[0] = v614->static_fields->_IsPhaseClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v640, 0LL);
  if ( *(_DWORD *)(v568 + 24) <= 6u )
    goto LABEL_1152;
  *(_QWORD *)(v568 + 80) = result;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v568 + 80), (int64_t)result, v615, v616, v617, v618, v619, v620);
  v621 = System_String__Concat_62538776((System_String_array *)v568, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_16899/*"afterActionBk"*/, v621, 0LL);
  TerminalPramsManager__SaveClearDatas(resulta, v622);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v623);
  TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(v624);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v625);
  TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(v626);
  TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(v627);
  if ( TerminalPramsManager__IsTerminalEffectNT2BoardOpen(v628) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33D57 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v629);
      byte_4B33D57 = 1;
    }
    v630 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v630 = TerminalPramsManager_TypeInfo;
    }
    v630->static_fields->_WarId_k__BackingField = 0;
    if ( !byte_4B320BB )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v629);
      v630 = TerminalPramsManager_TypeInfo;
      byte_4B320BB = 1;
    }
    if ( !v630->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v630);
      v630 = TerminalPramsManager_TypeInfo;
    }
    v630->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4B342F7 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v629);
      v630 = TerminalPramsManager_TypeInfo;
      byte_4B342F7 = 1;
    }
    if ( !v630->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v630);
      v630 = TerminalPramsManager_TypeInfo;
    }
    v630->static_fields->_IsMapReturnFolder_k__BackingField = 0;
    if ( !byte_4B344BA )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v629);
      v630 = TerminalPramsManager_TypeInfo;
      byte_4B344BA = 1;
    }
    if ( !v630->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v630);
      v630 = TerminalPramsManager_TypeInfo;
    }
    v630->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData((const MethodInfo *)v630);
  }
}


void __fastcall TerminalPramsManager__ResetBlankEarthSpotInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  const MethodInfo *v2; // x0

  if ( (byte_4B3470F & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3470F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33C6C )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B33C6C = 1;
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

  if ( (byte_4B34719 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34719 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B34778 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34778 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_QuestMessageScriptQuestId_k__BackingField = -1;
  if ( !byte_4B34779 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4B34779 = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = -1;
  if ( !byte_4B345B3 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4B345B3 = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  p_TalkScriptInfo_k__BackingField = (PartyOrganizationUtility_o *)&v8->static_fields->_TalkScriptInfo_k__BackingField;
  p_TalkScriptInfo_k__BackingField->klass = 0LL;
  sub_1BD33FC(p_TalkScriptInfo_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !byte_4B3477A )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v10);
    byte_4B3477A = 1;
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
  TerminalPramsManager_c *v7; // x0
  _BOOL8 v8; // x0
  BattleResultComponent_resultData_o *v9; // x0
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct TerminalPramsManager_StaticFields *v12; // x8
  _BOOL4 IsPhaseClear_k__BackingField; // w26
  _BOOL4 IsDispOnly_k__BackingField; // w27
  struct TerminalPramsManager_StaticFields *v15; // x8
  _BOOL4 IsWarBoardClear_k__BackingField; // w25
  BattleDropItem_array *questResultAfterEventRewardInfos; // x24
  BattleDropItem_array *mResultEventPanelRewardInfos; // x28
  int32_t panelEventPoint; // w20
  LimitImageAnnounce_array *limitImageAnnounces; // x21
  QuestRewardInfo_array *v21; // x29
  bool isWarBoardClear; // w22
  TerminalPramsManager_ClearData_o *v23; // x25
  __int64 v24; // x1
  TerminalPramsManager_c *v25; // x0
  TerminalPramsManager_ClearData_c *v26; // x0
  System_String_o *SAVEKEY_CLEAR_REWARD_DISP; // x19
  System_String_o *v28; // x1
  int32_t v29; // [xsp+98h] [xbp-F8h]
  const MethodInfo *v30; // [xsp+A0h] [xbp-F0h]
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

  if ( (byte_4B3475E & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_ClearData_TypeInfo, method);
    sub_1BD3458(&JsonManager_TypeInfo, v3);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v4);
    byte_4B3475E = 1;
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
    if ( !byte_4B33D4D )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
      byte_4B33D4D = 1;
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
        sub_1BD36BC(v8, method);
      v9 = result->m_Items[0];
      if ( !v9 )
        sub_1BD36B4(0LL, method);
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
  if ( !byte_4B33F9B )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B33F9B = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  IsQuestClear_k__BackingField = v10->static_fields->_IsQuestClear_k__BackingField;
  if ( !byte_4B33F98 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B33F98 = 1;
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
  if ( !byte_4B347A6 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B347A6 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  oldSuperBoss = v10->static_fields->_oldSuperBoss_k__BackingField;
  if ( !byte_4B347A4 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B347A4 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss = v10->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !byte_4B347A7 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B347A7 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventPointWinReward_k__BackingField = v10->static_fields->_eventPointWinReward_k__BackingField;
  if ( !byte_4B3479E )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B3479E = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evpWinType = v10->static_fields->_eventPointWinType_k__BackingField;
  if ( !byte_4B344AF )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B344AF = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evRace = v10->static_fields->_eventRaceBoost_k__BackingField;
  if ( !byte_4B3430B )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B3430B = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeRelease = v10->static_fields->_questClearCostumeRelease_k__BackingField;
  if ( !byte_4B34301 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B34301 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeGet_k__BackingField = v10->static_fields->_questClearCostumeGet_k__BackingField;
  if ( !byte_4B34307 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B34307 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evTowerReward = v10->static_fields->_eventTowerReward_k__BackingField;
  if ( !byte_4B347A8 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B347A8 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v10->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  if ( !byte_4B32FDE )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B32FDE = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  IsDispOnly_k__BackingField = v10->static_fields->_IsDispOnly_k__BackingField;
  if ( !byte_4B34313 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B34313 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  warClearRewardIn = v10->static_fields->_warClearReward_k__BackingField;
  if ( !byte_4B347A9 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B347A9 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventActivityPointEffectState = v10->static_fields->_EventActivityPointEffectState_k__BackingField;
  if ( !byte_4B34302 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B34302 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v15 = v10->static_fields;
  IsWarBoardClear_k__BackingField = v15->_IsWarBoardClear_k__BackingField;
  questResultAfterEventRewardInfos = v15->mQuestResultAfterEventRewardInfos;
  mResultEventPanelRewardInfos = v15->mResultEventPanelRewardInfos;
  panelEventPoint = v15->panelEventPoint;
  if ( !byte_4B3430C )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B3430C = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  limitImageAnnounces = v10->static_fields->_limitImageAnnounces_k__BackingField;
  if ( !byte_4B33C6B )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B33C6B = 1;
  }
  if ( !v10->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v10);
  if ( !byte_4B34303 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34303 = 1;
  }
  v21 = mQuestRewardInfos;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  isWarBoardClear = IsWarBoardClear_k__BackingField;
  v23 = (TerminalPramsManager_ClearData_o *)sub_1BD36A4(TerminalPramsManager_ClearData_TypeInfo);
  TerminalPramsManager_ClearData___ctor_35475844(
    v23,
    mQuestClearHeroineInfo,
    v21,
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
    v29,
    v30);
  if ( !byte_4B347AA )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v24);
    byte_4B347AA = 1;
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
  v28 = JsonManager__toJson((Il2CppObject *)v23, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString(SAVEKEY_CLEAR_REWARD_DISP, v28, 0LL);
}


void __fastcall TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  EventRaidDefeatedEffectInfo_o *EventRaidDefeatedEffectInfo_k__BackingField; // x0
  System_String_o *v5; // x0

  if ( (byte_4B34764 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11587/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v2);
    byte_4B34764 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B347AC )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B347AC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EventRaidDefeatedEffectInfo_k__BackingField = v3->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  if ( !EventRaidDefeatedEffectInfo_k__BackingField )
    sub_1BD36B4(0LL, v1);
  v5 = EventRaidDefeatedEffectInfo__ConvertToStringData(EventRaidDefeatedEffectInfo_k__BackingField, v1);
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

  if ( (byte_4B34726 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_13793/*"TerminalPhaseCnt"*/, v2);
    sub_1BD3458(&StringLiteral_13796/*"TerminalQuestId"*/, v3);
    byte_4B34726 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D4D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B33D4D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13796/*"TerminalQuestId"*/,
    v4->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4B33D58 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v5);
    byte_4B33D58 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13793/*"TerminalPhaseCnt"*/,
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

  if ( (byte_4B34768 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v1);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v2);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v4);
    sub_1BD3458(&int_TypeInfo, v5);
    sub_1BD3458(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v7);
    sub_1BD3458(&string_TypeInfo, v8);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v9);
    sub_1BD3458(&StringLiteral_11596/*"SAVEKEY_QuestRandomGroupList"*/, v10);
    sub_1BD3458(&StringLiteral_25366/*"{0}:{1}"*/, v11);
    sub_1BD3458(&StringLiteral_863/*","*/, v12);
    byte_4B34768 = 1;
  }
  memset(&v29, 0, 32);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D4C )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B33D4C = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestRandomGroupList_k__BackingField = v14->static_fields->_QuestRandomGroupList_k__BackingField;
  if ( !QuestRandomGroupList_k__BackingField )
    sub_1BD36B4(0LL, v1);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v28,
    QuestRandomGroupList_k__BackingField,
    (const MethodInfo_321C6FC *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v29.fields._dictionary = v28[0];
  v29.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v28[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v29,
            (const MethodInfo_3373ED4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int)v29.fields._current.fields.key;
    key_high = HIDWORD(v29.fields._current.fields.key);
    if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
      Empty = System_String__Concat_62525248(Empty, (System_String_o *)StringLiteral_863/*","*/, 0LL);
    LODWORD(v28[0]) = key;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v28, v18, v19, v20);
    v27 = key_high;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v22, v23, v24);
    v26 = System_String__Format_62539620((System_String_o *)StringLiteral_25366/*"{0}:{1}"*/, v21, v25, 0LL);
    Empty = System_String__Concat_62525248(Empty, v26, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v29,
    (const MethodInfo_3373FD4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11596/*"SAVEKEY_QuestRandomGroupList"*/, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestReleasedFocusState(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v4; // x1

  if ( (byte_4B34751 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34751 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v2);
  if ( !QuestFocusStateManager )
    sub_1BD36B4(0LL, v4);
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

  if ( (byte_4B34724 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_13786/*"TerminalEndTime"*/, v2);
    sub_1BD3458(&StringLiteral_11594/*"SAVEKEY_PlayedTerminalEffects"*/, v3);
    sub_1BD3458(&StringLiteral_13782/*"TerminalBeforeEventActivityPoint"*/, v4);
    sub_1BD3458(&StringLiteral_13787/*"TerminalEventDailyPointEventId"*/, v5);
    sub_1BD3458(&StringLiteral_13793/*"TerminalPhaseCnt"*/, v6);
    sub_1BD3458(&StringLiteral_13801/*"TerminalTimeStatusEventId"*/, v7);
    sub_1BD3458(&StringLiteral_13785/*"TerminalDispState"*/, v8);
    sub_1BD3458(&StringLiteral_11591/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v9);
    sub_1BD3458(&StringLiteral_13788/*"TerminalIsDoneShortcut"*/, v10);
    sub_1BD3458(&StringLiteral_11590/*"SAVEKEY_MapModelClearQuestInfo"*/, v11);
    sub_1BD3458(&StringLiteral_11595/*"SAVEKEY_PlayerGenderType"*/, v12);
    sub_1BD3458(&StringLiteral_11583/*"SAVEKEY_ClearEventQuestIds"*/, v13);
    sub_1BD3458(&StringLiteral_11592/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v14);
    sub_1BD3458(&StringLiteral_13796/*"TerminalQuestId"*/, v15);
    sub_1BD3458(&StringLiteral_11603/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v16);
    sub_1BD3458(&StringLiteral_13800/*"TerminalTimeStatusEventDailyPoint"*/, v17);
    sub_1BD3458(&StringLiteral_13805/*"TerminalWarId"*/, v18);
    sub_1BD3458(&StringLiteral_13798/*"TerminalSpotId"*/, v19);
    sub_1BD3458(&StringLiteral_13802/*"TerminalTimeStatusLoopCount"*/, v20);
    sub_1BD3458(&StringLiteral_13783/*"TerminalBeforeEventActivityPointGauge"*/, v21);
    sub_1BD3458(&StringLiteral_11581/*"SAVEKEY_BlankEarthSpotId"*/, v22);
    sub_1BD3458(&StringLiteral_11586/*"SAVEKEY_DataLostBattleAutoReset"*/, v23);
    sub_1BD3458(&StringLiteral_13806/*"TerminalWarStartedIds"*/, v24);
    sub_1BD3458(&StringLiteral_11585/*"SAVEKEY_ConnectMarkEventId"*/, v25);
    sub_1BD3458(&StringLiteral_863/*","*/, v26);
    sub_1BD3458(&StringLiteral_11584/*"SAVEKEY_ConnectMarkAnimationId"*/, v27);
    sub_1BD3458(&StringLiteral_11593/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v28);
    sub_1BD3458(&StringLiteral_11602/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v29);
    byte_4B34724 = 1;
  }
  EndTime_k__BackingField = 0LL;
  MapModelClearQuestId_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33F2D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B33F2D = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13785/*"TerminalDispState"*/,
    v30->static_fields->_DispState_k__BackingField,
    0LL);
  if ( !byte_4B33D50 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v31);
    byte_4B33D50 = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13805/*"TerminalWarId"*/,
    v32->static_fields->_WarId_k__BackingField,
    0LL);
  if ( !byte_4B33F31 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v33);
    byte_4B33F31 = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13798/*"TerminalSpotId"*/,
    v34->static_fields->_SpotId_k__BackingField,
    0LL);
  if ( !byte_4B33C68 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v35);
    byte_4B33C68 = 1;
  }
  v36 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v36 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11581/*"SAVEKEY_BlankEarthSpotId"*/,
    v36->static_fields->_BlankEarthSpotId_k__BackingField,
    0LL);
  if ( !byte_4B33D4D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v37);
    byte_4B33D4D = 1;
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v38 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13796/*"TerminalQuestId"*/,
    v38->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4B33D58 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v39);
    byte_4B33D58 = 1;
  }
  v40 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v40 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13793/*"TerminalPhaseCnt"*/,
    v40->static_fields->_PhaseCnt_k__BackingField,
    0LL);
  if ( !byte_4B33F32 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v41);
    byte_4B33F32 = 1;
  }
  v42 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v42 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v42->static_fields->_EndTime_k__BackingField;
  v43 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13786/*"TerminalEndTime"*/, v43, 0LL);
  if ( !byte_4B3432C )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v44);
    byte_4B3432C = 1;
  }
  v45 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v45 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13788/*"TerminalIsDoneShortcut"*/,
    v45->static_fields->_IsDoneShortcut_k__BackingField,
    0LL);
  v46 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v46 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_13806/*"TerminalWarStartedIds"*/,
    v46->static_fields->mTerminalWarStartedIds,
    0LL);
  if ( !byte_4B344B7 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v47);
    byte_4B344B7 = 1;
  }
  v48 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v48 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13801/*"TerminalTimeStatusEventId"*/,
    v48->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_4B344B8 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v49);
    byte_4B344B8 = 1;
  }
  v50 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v50 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13802/*"TerminalTimeStatusLoopCount"*/,
    v50->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  if ( !byte_4B34792 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v51);
    byte_4B34792 = 1;
  }
  v52 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v52 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13787/*"TerminalEventDailyPointEventId"*/,
    v52->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4B34793 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v53);
    byte_4B34793 = 1;
  }
  v54 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v54 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v54->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v55 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13800/*"TerminalTimeStatusEventDailyPoint"*/, v55, 0LL);
  if ( !byte_4B34794 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v56);
    byte_4B34794 = 1;
  }
  v57 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13782/*"TerminalBeforeEventActivityPoint"*/,
    v57->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_4B34795 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v58);
    byte_4B34795 = 1;
  }
  v59 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v59 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13783/*"TerminalBeforeEventActivityPointGauge"*/,
    v59->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  if ( !byte_4B34796 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v60);
    byte_4B34796 = 1;
  }
  v61 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v61 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11594/*"SAVEKEY_PlayedTerminalEffects"*/,
    v61->static_fields->_PlayedTerminalEffects_k__BackingField,
    0LL);
  if ( !byte_4B3431F )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v62);
    byte_4B3431F = 1;
  }
  v63 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v63 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11591/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v63->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B34320 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v64);
    byte_4B34320 = 1;
  }
  v65 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v65 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11592/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v65->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  if ( !byte_4B344B9 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v66);
    byte_4B344B9 = 1;
  }
  v67 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11593/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v67->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B344BC )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v68);
    byte_4B344BC = 1;
  }
  v69 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v69 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11603/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v69->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11585/*"SAVEKEY_ConnectMarkEventId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11584/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  if ( !byte_4B342F9 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v70);
    byte_4B342F9 = 1;
  }
  v71 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v71 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11602/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v71->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  if ( !byte_4B33D4F )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v72);
    byte_4B33D4F = 1;
  }
  v73 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v73 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11583/*"SAVEKEY_ClearEventQuestIds"*/,
    v73->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  if ( !byte_4B33F2E )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v74);
    byte_4B33F2E = 1;
  }
  v75 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v75 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v75->static_fields->_MapModelClearQuestId_k__BackingField;
  v77 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_4B33F2F )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v76);
    byte_4B33F2F = 1;
  }
  v78 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v78 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v78->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v79 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v80 = System_String__Concat_62536508(v77, (System_String_o *)StringLiteral_863/*","*/, v79, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11590/*"SAVEKEY_MapModelClearQuestInfo"*/, v80, 0LL);
  if ( !byte_4B344BD )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v81);
    byte_4B344BD = 1;
  }
  v82 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v82 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11586/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v82->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B34797 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v83);
    byte_4B34797 = 1;
  }
  v84 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v84 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11595/*"SAVEKEY_PlayerGenderType"*/,
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

  if ( (byte_4B34758 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v5);
    byte_4B34758 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v6);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1BD36B4(0LL, v9);
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
  System_Func_int__bool__o *_9__693_0; // x21
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
  System_Func_object__int__o *_9__693_3; // x20
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
  System_Func_int__int__o *_9__693_4; // x20
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

  if ( (byte_4B34759 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_SpotMaster___, v4);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_1BD3458(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v6);
    sub_1BD3458(&Method_System_Linq_Enumerable_FirstOrDefault_int___, v7);
    sub_1BD3458(&Method_System_Linq_Enumerable_OrderByDescending_int__int___, v8);
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_int__QuestEntity___, v9);
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_QuestEntity__int___, v10);
    sub_1BD3458(&Method_System_Linq_Enumerable_Where_int___, v11);
    sub_1BD3458(&Method_System_Linq_Enumerable_Where_QuestEntity___, v12);
    sub_1BD3458(&System_Func_int__int__TypeInfo, v13);
    sub_1BD3458(&System_Func_int__bool__TypeInfo, v14);
    sub_1BD3458(&System_Func_QuestEntity__int__TypeInfo, v15);
    sub_1BD3458(&System_Func_QuestEntity__bool__TypeInfo, v16);
    sub_1BD3458(&System_Func_int__QuestEntity__TypeInfo, v17);
    sub_1BD3458(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v18);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v20);
    sub_1BD3458(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__693_0__, v21);
    sub_1BD3458(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__693_3__, v22);
    sub_1BD3458(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__693_4__, v23);
    sub_1BD3458(&Method_TerminalPramsManager___c__DisplayClass693_0__SendOpenedQuestIdToAdManager_b__1__, v24);
    sub_1BD3458(&Method_TerminalPramsManager___c__DisplayClass693_0__SendOpenedQuestIdToAdManager_b__2__, v25);
    sub_1BD3458(&TerminalPramsManager___c__DisplayClass693_0_TypeInfo, v26);
    sub_1BD3458(&TerminalPramsManager___c_TypeInfo, v27);
    byte_4B34759 = 1;
  }
  v88 = 0LL;
  entity = 0LL;
  v28 = sub_1BD36A4(TerminalPramsManager___c__DisplayClass693_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass693_0___ctor((TerminalPramsManager___c__DisplayClass693_0_o *)v28, 0LL);
  if ( clearedQuestId >= 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !v28 )
      goto LABEL_43;
    *(_QWORD *)(v28 + 16) = Instance;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 16), Instance, v31, v32, v33, v34, v35, v36);
    Instance = *(_QWORD *)(v28 + 16);
    if ( !Instance )
      goto LABEL_43;
    if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, clearedQuestId, 0LL) )
      return;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_SpotMaster___);
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
                 (const MethodInfo_31D1F44 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v28 + 24) = MasterData_object;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 24), (int64_t)MasterData_object, v40, v41, v42, v43, v44, v45);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
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
      _9__693_0 = v47->static_fields->__9__693_0;
      if ( !_9__693_0 )
      {
        if ( !v47->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v47);
          v47 = TerminalPramsManager___c_TypeInfo;
        }
        v49 = (Il2CppObject *)v47->static_fields->__9;
        _9__693_0 = (System_Func_int__bool__o *)sub_1BD36A4(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__693_0,
          v49,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__693_0__,
          0LL);
        static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
        static_fields->__9__693_0 = _9__693_0;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&static_fields->__9__693_0,
          (int64_t)_9__693_0,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
      }
      v57 = System_Linq_Enumerable__Where_int_(
              QuestIdsByTargetAndOpenCondType,
              (System_Func_TSource__bool__o *)_9__693_0,
              (const MethodInfo_2F7096C *)Method_System_Linq_Enumerable_Where_int___);
      v58 = (System_Func_T__TResult__o *)sub_1BD36A4(System_Func_int__QuestEntity__TypeInfo);
      System_Func_int__object____ctor(
        v58,
        (Il2CppObject *)v28,
        Method_TerminalPramsManager___c__DisplayClass693_0__SendOpenedQuestIdToAdManager_b__1__,
        0LL);
      v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v57,
                                                                   (System_Func_TSource__TResult__o *)v58,
                                                                   (const MethodInfo_2F60748 *)Method_System_Linq_Enumerable_Select_int__QuestEntity___);
      v60 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v60,
        (Il2CppObject *)v28,
        Method_TerminalPramsManager___c__DisplayClass693_0__SendOpenedQuestIdToAdManager_b__2__,
        0LL);
      v61 = System_Linq_Enumerable__Where_object_(
              v59,
              (System_Func_TSource__bool__o *)v60,
              (const MethodInfo_2F70C40 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v62 = TerminalPramsManager___c_TypeInfo;
      v63 = v61;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v62 = TerminalPramsManager___c_TypeInfo;
      }
      _9__693_3 = (System_Func_object__int__o *)v62->static_fields->__9__693_3;
      if ( !_9__693_3 )
      {
        if ( !v62->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v62);
          v62 = TerminalPramsManager___c_TypeInfo;
        }
        v65 = (Il2CppObject *)v62->static_fields->__9;
        _9__693_3 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_QuestEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__693_3,
          v65,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__693_3__,
          0LL);
        v66 = TerminalPramsManager___c_TypeInfo->static_fields;
        v66->__9__693_3 = (struct System_Func_QuestEntity__int__o *)_9__693_3;
        sub_1BD33FC((PartyOrganizationUtility_o *)&v66->__9__693_3, (int64_t)_9__693_3, v67, v68, v69, v70, v71, v72);
      }
      v73 = System_Linq_Enumerable__Select_object__int_(
              v63,
              (System_Func_TSource__TResult__o *)_9__693_3,
              (const MethodInfo_2F62540 *)Method_System_Linq_Enumerable_Select_QuestEntity__int___);
      v74 = TerminalPramsManager___c_TypeInfo;
      v75 = (System_Collections_Generic_IEnumerable_TSource__o *)v73;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v74 = TerminalPramsManager___c_TypeInfo;
      }
      _9__693_4 = v74->static_fields->__9__693_4;
      if ( !_9__693_4 )
      {
        if ( !v74->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v74);
          v74 = TerminalPramsManager___c_TypeInfo;
        }
        v77 = (Il2CppObject *)v74->static_fields->__9;
        _9__693_4 = (System_Func_int__int__o *)sub_1BD36A4(System_Func_int__int__TypeInfo);
        System_Func_int__int____ctor(
          _9__693_4,
          v77,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__693_4__,
          0LL);
        v78 = TerminalPramsManager___c_TypeInfo->static_fields;
        v78->__9__693_4 = _9__693_4;
        sub_1BD33FC((PartyOrganizationUtility_o *)&v78->__9__693_4, (int64_t)_9__693_4, v79, v80, v81, v82, v83, v84);
      }
      v85 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_int__int_(
                                                                   v75,
                                                                   (System_Func_TSource__TKey__o *)_9__693_4,
                                                                   (const MethodInfo_2F5AB98 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
      v86 = System_Linq_Enumerable__FirstOrDefault_int_(
              v85,
              (const MethodInfo_2F53684 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      if ( v86 )
      {
        v87 = v86;
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetOpenedStoryQuest((AdManager_o *)Instance, v87, 0LL);
          return;
        }
LABEL_43:
        sub_1BD36B4(Instance, v30);
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

  if ( (byte_4B34757 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v5);
    byte_4B34757 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v6);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1BD36B4(0LL, v9);
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

  if ( (byte_4B34716 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, method);
    sub_1BD3458(&DataManager_TypeInfo, v3);
    sub_1BD3458(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v4);
    sub_1BD3458(&Method_System_Nullable_int__GetValueOrDefault__, v5);
    sub_1BD3458(&Method_System_Nullable_int___ctor__, v6);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v7);
    sub_1BD3458(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v9);
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v10);
    byte_4B34716 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33F9D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B33F9D = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    QuestInfo = QuestTree__GetQuestInfo(Instance, questId, 0LL);
    if ( !QuestInfo )
      return;
    v16 = QuestInfo;
    warId = QuestInfo->fields.warId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33D57 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v15);
      byte_4B33D57 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    Instance = (QuestTree_o *)MapControl_QuestInfo__GetSpotID(v16, 0LL);
    if ( !Master_object )
      goto LABEL_148;
    v20 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            (int32_t)Instance,
            (const MethodInfo_31D1F44 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    LODWORD(Master_object) = MapControl_QuestInfo__GetSpotID(v16, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v20 )
    {
      if ( byte_4B33C6C )
        goto LABEL_38;
    }
    else
    {
      if ( !byte_4B33D56 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v21);
        byte_4B33D56 = 1;
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
          (const MethodInfo_36DDBD4 *)Method_System_Nullable_int___ctor__);
        v26 = v48;
      }
      else
      {
        v26 = 0LL;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (Il2CppObject *)HIDWORD(v26);
      if ( byte_4B33C6C )
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
        if ( !byte_4B33D51 )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, v21);
          byte_4B33D51 = 1;
        }
        v29 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_QuestId_k__BackingField = v28;
        questPhase = v16->fields.questPhase;
        if ( !byte_4B33D55 )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, v21);
          v29 = TerminalPramsManager_TypeInfo;
          byte_4B33D55 = 1;
        }
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_PhaseCnt_k__BackingField = questPhase;
        endTime = v16->fields.endTime;
        if ( !byte_4B33D52 )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, v21);
          v29 = TerminalPramsManager_TypeInfo;
          byte_4B33D52 = 1;
        }
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_EndTime_k__BackingField = endTime;
        if ( !byte_4B3432B )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, v21);
          v29 = TerminalPramsManager_TypeInfo;
          byte_4B3432B = 1;
        }
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 1;
        if ( !SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
          goto LABEL_151;
        v33 = SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B33D50 )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, v13);
          byte_4B33D50 = 1;
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
            if ( !byte_4B33D53 )
            {
              sub_1BD3458(&TerminalPramsManager_TypeInfo, v32);
              byte_4B33D53 = 1;
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
            if ( !byte_4B33D53 )
            {
              sub_1BD3458(&TerminalPramsManager_TypeInfo, v32);
              byte_4B33D53 = 1;
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
          if ( !byte_4B33D53 )
          {
            sub_1BD3458(&TerminalPramsManager_TypeInfo, v32);
            byte_4B33D53 = 1;
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
        if ( !byte_4B31F06 )
        {
          sub_1BD3458(&TerminalSceneComponent_TypeInfo, v32);
          byte_4B31F06 = 1;
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
        if ( !byte_4B31F06 )
        {
          sub_1BD3458(&TerminalSceneComponent_TypeInfo, v13);
          byte_4B31F06 = 1;
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
            if ( !byte_4B31F06 )
            {
              sub_1BD3458(&TerminalSceneComponent_TypeInfo, v13);
              byte_4B31F06 = 1;
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
            if ( !byte_4B33D50 )
            {
              sub_1BD3458(&TerminalPramsManager_TypeInfo, v13);
              byte_4B33D50 = 1;
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
          if ( !byte_4B31F06 )
          {
            sub_1BD3458(&TerminalSceneComponent_TypeInfo, v13);
            byte_4B31F06 = 1;
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
            if ( !byte_4B31F06 )
            {
              sub_1BD3458(&TerminalSceneComponent_TypeInfo, v13);
              byte_4B31F06 = 1;
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
                if ( !byte_4B320BB )
                {
                  sub_1BD3458(&TerminalPramsManager_TypeInfo, v13);
                  byte_4B320BB = 1;
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
        sub_1BD36B4(Instance, v13);
      }
    }
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v21);
    byte_4B33C6C = 1;
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

  if ( (byte_4B34717 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    sub_1BD3458(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v4);
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v5);
    byte_4B34717 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33F9D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B33F9D = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4B33D57 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4B33D57 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_WarId_k__BackingField = warId;
  if ( !SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
    goto LABEL_112;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D50 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v8);
    byte_4B33D50 = 1;
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
      if ( !byte_4B33D53 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v7);
        byte_4B33D53 = 1;
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
      if ( !byte_4B33D53 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v7);
        byte_4B33D53 = 1;
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
    if ( !byte_4B33D53 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v7);
      byte_4B33D53 = 1;
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
  if ( !byte_4B33C6C )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v7);
    byte_4B33C6C = 1;
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
  if ( !byte_4B31F06 )
  {
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v7);
    byte_4B31F06 = 1;
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
    if ( !byte_4B31F06 )
    {
      sub_1BD3458(&TerminalSceneComponent_TypeInfo, v8);
      byte_4B31F06 = 1;
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
      if ( !byte_4B31F06 )
      {
        sub_1BD3458(&TerminalSceneComponent_TypeInfo, v8);
        byte_4B31F06 = 1;
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
      if ( !byte_4B33D50 )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v8);
        byte_4B33D50 = 1;
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
    if ( !byte_4B31F06 )
    {
      sub_1BD3458(&TerminalSceneComponent_TypeInfo, v8);
      byte_4B31F06 = 1;
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
      if ( !byte_4B31F06 )
      {
        sub_1BD3458(&TerminalSceneComponent_TypeInfo, v8);
        byte_4B31F06 = 1;
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
      sub_1BD36B4(v10, v8);
    }
  }
LABEL_102:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B320BB )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v8);
    byte_4B320BB = 1;
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

  if ( (byte_4B34718 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    sub_1BD3458(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v4);
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v5);
    byte_4B34718 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33F9D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B33F9D = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4B33D57 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4B33D57 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4B33D53 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4B33D53 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_DispState_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( Instance )
  {
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0LL);
    if ( WarEntityByWarID )
    {
      v10 = WarEntityByWarID;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B3431E )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v9);
        byte_4B3431E = 1;
      }
      v11 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v11 = TerminalPramsManager_TypeInfo;
      }
      v11->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField = warId;
      PrioredParentId = WarEntity__GetPrioredParentId(v10, 0LL);
      v13 = SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( v13 )
      {
        v14 = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)v13, PrioredParentId, 0LL);
        if ( v14 )
        {
          v16 = v14;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4B33D57 )
          {
            sub_1BD3458(&TerminalPramsManager_TypeInfo, v15);
            byte_4B33D57 = 1;
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
            if ( !byte_4B33D53 )
            {
              sub_1BD3458(&TerminalPramsManager_TypeInfo, v18);
              byte_4B33D53 = 1;
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
          if ( !byte_4B33C6C )
          {
            sub_1BD3458(&TerminalPramsManager_TypeInfo, v18);
            byte_4B33C6C = 1;
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
          if ( !byte_4B31F06 )
          {
            sub_1BD3458(&TerminalSceneComponent_TypeInfo, v18);
            byte_4B31F06 = 1;
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
          if ( !byte_4B31F06 )
          {
            sub_1BD3458(&TerminalSceneComponent_TypeInfo, v24);
            byte_4B31F06 = 1;
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
              if ( !byte_4B31F06 )
              {
                sub_1BD3458(&TerminalSceneComponent_TypeInfo, v24);
                byte_4B31F06 = 1;
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
              if ( !byte_4B33D50 )
              {
                sub_1BD3458(&TerminalPramsManager_TypeInfo, v24);
                byte_4B33D50 = 1;
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
            if ( !byte_4B31F06 )
            {
              sub_1BD3458(&TerminalSceneComponent_TypeInfo, v24);
              byte_4B31F06 = 1;
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
              if ( !byte_4B31F06 )
              {
                sub_1BD3458(&TerminalSceneComponent_TypeInfo, v24);
                byte_4B31F06 = 1;
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
                  if ( !byte_4B320BB )
                  {
                    sub_1BD3458(&TerminalPramsManager_TypeInfo, v24);
                    byte_4B320BB = 1;
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
          sub_1BD36B4(v25, v24);
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
  if ( (byte_4B34755 & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_o *)sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34755 = 1;
  }
  if ( !v8 )
    sub_1BD36B4(result, method);
  campaignDirectBonus = (int64_t)v8->fields.campaignDirectBonus;
  if ( campaignDirectBonus && *(_QWORD *)(campaignDirectBonus + 24) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3478E )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
      byte_4B3478E = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)campaignDirectBonus;
    sub_1BD33FC(
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

  if ( (byte_4B34740 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34740 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3478D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3478D = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignBonus_k__BackingField = campaignBonuses;
  sub_1BD33FC(
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

  if ( (byte_4B3474C & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&idx);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v6);
    sub_1BD3458(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v7);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v8);
    byte_4B3474C = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( !v9->static_fields->folderLastIdxs )
  {
    v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v10,
      (const MethodInfo_321B960 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v17->static_fields;
    static_fields->folderLastIdxs = v10;
    sub_1BD33FC(
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
          (const MethodInfo_321D6DC *)Method_System_Collections_Generic_Dictionary_int__int__Remove__),
        (folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs) == 0LL) )
  {
    sub_1BD36B4(folderLastIdxs, *(_QWORD *)&idx);
  }
  System_Collections_Generic_Dictionary_int__int___Add(
    folderLastIdxs,
    warId,
    idx,
    (const MethodInfo_321C324 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !byte_4B3477D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v20);
    byte_4B3477D = 1;
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

  if ( (byte_4B34752 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, *(_QWORD *)&state);
    byte_4B34752 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v5);
  if ( !QuestFocusStateManager )
    sub_1BD36B4(0LL, v7);
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

  if ( (byte_4B34756 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34756 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (PartyOrganizationUtility_o *)&v9->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0LL;
  sub_1BD33FC(p_mQuestRewardInfos, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_1BD33FC(v22, rewardInfos, v13, v14, v15, v16, v17, v18);
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = (PartyOrganizationUtility_o *)&v23->static_fields->mQuestPhaseRewardInfos;
  p_mQuestPhaseRewardInfos->klass = 0LL;
  sub_1BD33FC(p_mQuestPhaseRewardInfos, 0LL, v13, v14, v15, v16, v17, v18);
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
    sub_1BD33FC(v34, resultQuestPhaseRewardInfos, v25, v26, v27, v28, v29, v30);
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestResultAfterEventRewardInfos = (PartyOrganizationUtility_o *)&v35->static_fields->mQuestResultAfterEventRewardInfos;
  p_mQuestResultAfterEventRewardInfos->klass = 0LL;
  sub_1BD33FC(p_mQuestResultAfterEventRewardInfos, 0LL, v25, v26, v27, v28, v29, v30);
  if ( !result->max_length )
LABEL_33:
    sub_1BD36BC(v11, v12);
  v43 = result->m_Items[0];
  if ( !v43 )
LABEL_32:
    sub_1BD36B4(v11, v12);
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
    sub_1BD33FC(
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
  if ( (byte_4B3474A & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_43/*"\n"*/, v3);
    byte_4B3474A = 1;
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
    v7 = System_String__Concat_62536508(mTerminalWarStartedIds, v6, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
    static_fields->mTerminalWarStartedIds = v7;
    sub_1BD33FC(
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

  if ( (byte_4B34725 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_13798/*"TerminalSpotId"*/, v2);
    byte_4B34725 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33F31 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B33F31 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13798/*"TerminalSpotId"*/,
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

  if ( (byte_4B3472B & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_13782/*"TerminalBeforeEventActivityPoint"*/, v2);
    sub_1BD3458(&StringLiteral_13783/*"TerminalBeforeEventActivityPointGauge"*/, v3);
    byte_4B3472B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B34794 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34794 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13782/*"TerminalBeforeEventActivityPoint"*/,
    v4->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_4B34795 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v5);
    byte_4B34795 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13783/*"TerminalBeforeEventActivityPointGauge"*/,
    v6->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfoDispSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B34730 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11597/*"SAVEKEY_TerminalConquestInfoDisp"*/, v2);
    byte_4B34730 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B3472F & 1) == 0 )
  {
    sub_1BD3458(&EventConquestInfo___TypeInfo, v1);
    sub_1BD3458(&JsonManager_TypeInfo, v2);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v3);
    sub_1BD3458(&StringLiteral_11598/*"SAVEKEY_TerminalConquestInfos"*/, v4);
    sub_1BD3458(&StringLiteral_11597/*"SAVEKEY_TerminalConquestInfoDisp"*/, v5);
    byte_4B3472F = 1;
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
    eventConquestInfos = (struct EventConquestInfo_array *)sub_1BD3500(EventConquestInfo___TypeInfo, 0LL);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(&eventConquestInfos->obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11598/*"SAVEKEY_TerminalConquestInfos"*/, v8, 0LL);
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11597/*"SAVEKEY_TerminalConquestInfoDisp"*/, v9->static_fields->eventConquestInfoDisp, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B34731 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11599/*"SAVEKEY_TerminalCraftInfoDisp"*/, v2);
    byte_4B34731 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11599/*"SAVEKEY_TerminalCraftInfoDisp"*/, v3->static_fields->eventCraftInfoDisp, 0LL);
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

  if ( (byte_4B34732 & 1) == 0 )
  {
    sub_1BD3458(&EventHarvestGrowthInfo_TypeInfo, v1);
    sub_1BD3458(&JsonManager_TypeInfo, v2);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v3);
    sub_1BD3458(&StringLiteral_11600/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v4);
    byte_4B34732 = 1;
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
    eventHarvestGrowthInfo = (Il2CppObject *)sub_1BD36A4(EventHarvestGrowthInfo_TypeInfo);
    System_Object___ctor(eventHarvestGrowthInfo, 0LL);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__toJson(eventHarvestGrowthInfo, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11600/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v7, 0LL);
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

  if ( (byte_4B3472D & 1) == 0 )
  {
    sub_1BD3458(&JsonManager_TypeInfo, v1);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v2);
    sub_1BD3458(&StringLiteral_13784/*"TerminalBeforeEventSubmarinePointData"*/, v3);
    byte_4B3472D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33E45 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B33E45 = 1;
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
    if ( !byte_4B33E45 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
      byte_4B33E45 = 1;
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
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13784/*"TerminalBeforeEventSubmarinePointData"*/, v7, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B3473A & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11602/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v2);
    byte_4B3473A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B342F9 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B342F9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11602/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v3->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B34739 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_11603/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v2);
    byte_4B34739 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B344BC )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B344BC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11603/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v3->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalTransitionInfoSave_SaveData(
        TerminalTransitionInfo_o *terminalTransitionInfo,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4B3472A & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_13804/*"TerminalTransitionInfoVoiceAssetName"*/, method);
    sub_1BD3458(&StringLiteral_13803/*"TerminalTransitionInfoMissionId"*/, v3);
    byte_4B3472A = 1;
  }
  if ( terminalTransitionInfo )
  {
    UnityEngine_PlayerPrefs__SetInt(
      (System_String_o *)StringLiteral_13803/*"TerminalTransitionInfoMissionId"*/,
      terminalTransitionInfo->fields.missionId,
      0LL);
    UnityEngine_PlayerPrefs__SetString(
      (System_String_o *)StringLiteral_13804/*"TerminalTransitionInfoVoiceAssetName"*/,
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

  if ( (byte_4B34763 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, *(_QWORD *)&day);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v10);
    byte_4B34763 = 1;
  }
  value = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B347AC )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    byte_4B347AC = 1;
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
          (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v13 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v13,
      (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
    value = (Il2CppObject *)v13;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B347AC )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
      byte_4B347AC = 1;
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
          (const MethodInfo_3224F94 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        goto LABEL_24;
      }
    }
LABEL_30:
    sub_1BD36B4(v11, *(_QWORD *)&day);
  }
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)value,
         day,
         (const MethodInfo_35A40E4 *)Method_System_Collections_Generic_List_int__Contains__) )
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
      *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
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

  if ( (byte_4B3462E & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3462E = 1;
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

  if ( (byte_4B3464E & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3464E = 1;
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

  if ( (byte_4B34684 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v2);
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v3);
    byte_4B34684 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__checkNowScene(Instance, 34, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4B31F06 )
    {
      sub_1BD3458(&TerminalSceneComponent_TypeInfo, v5);
      byte_4B31F06 = 1;
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
      if ( !byte_4B31F06 )
      {
        sub_1BD3458(&TerminalSceneComponent_TypeInfo, v5);
        byte_4B31F06 = 1;
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
      sub_1BD36B4(Instance, v5);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D4D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v5);
    byte_4B33D4D = 1;
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

  if ( (byte_4B3469F & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3469F = 1;
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

  if ( (byte_4B346A1 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346A1 = 1;
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

  if ( (byte_4B346A5 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346A5 = 1;
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

  if ( (byte_4B34708 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34708 = 1;
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

  if ( (byte_4B34693 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34693 = 1;
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

  if ( (byte_4B346C5 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346C5 = 1;
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

  if ( (byte_4B346C9 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346C9 = 1;
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

  if ( (byte_4B346C3 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346C3 = 1;
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

  if ( (byte_4B346C7 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346C7 = 1;
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

  if ( (byte_4B346D9 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346D9 = 1;
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

  if ( (byte_4B3466C & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3466C = 1;
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

  if ( (byte_4B3466E & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3466E = 1;
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

  if ( (byte_4B3469D & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3469D = 1;
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

  if ( (byte_4B3465A & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3465A = 1;
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

  if ( (byte_4B34662 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34662 = 1;
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

  if ( (byte_4B3465C & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3465C = 1;
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

  if ( (byte_4B3460C & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3460C = 1;
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

  if ( (byte_4B34650 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34650 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B346A3 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346A3 = 1;
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

  if ( (byte_4B346AB & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346AB = 1;
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

  if ( (byte_4B34695 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34695 = 1;
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

  if ( (byte_4B34691 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34691 = 1;
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

  if ( (byte_4B3463A & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3463A = 1;
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

  if ( (byte_4B346A7 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346A7 = 1;
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

  if ( (byte_4B346CF & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346CF = 1;
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

  if ( (byte_4B3470A & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3470A = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_EventUiWarId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoFolder(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4B346EE & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346EE = 1;
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

  if ( (byte_4B346F0 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346F0 = 1;
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

  if ( (byte_4B34712 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34712 = 1;
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

  if ( (byte_4B346E8 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346E8 = 1;
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

  if ( (byte_4B346EA & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346EA = 1;
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

  if ( (byte_4B34706 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34706 = 1;
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

  if ( (byte_4B346CB & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346CB = 1;
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

  if ( (byte_4B346F2 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346F2 = 1;
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

  if ( (byte_4B34658 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34658 = 1;
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

  if ( (byte_4B34664 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34664 = 1;
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

  if ( (byte_4B34660 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34660 = 1;
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

  if ( (byte_4B346D5 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346D5 = 1;
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

  if ( (byte_4B34630 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34630 = 1;
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

  if ( (byte_4B34632 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34632 = 1;
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

  if ( (byte_4B34642 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34642 = 1;
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

  if ( (byte_4B34634 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34634 = 1;
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

  if ( (byte_4B3461A & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3461A = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B346AD & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346AD = 1;
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

  if ( (byte_4B34622 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34622 = 1;
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

  if ( (byte_4B34620 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34620 = 1;
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

  if ( (byte_4B346DE & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346DE = 1;
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

  if ( (byte_4B346EC & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346EC = 1;
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

  if ( (byte_4B34638 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34638 = 1;
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

  if ( (byte_4B34640 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34640 = 1;
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

  if ( (byte_4B34646 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34646 = 1;
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

  if ( (byte_4B346AF & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346AF = 1;
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

  if ( (byte_4B34668 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34668 = 1;
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

  if ( (byte_4B34644 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34644 = 1;
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

  if ( (byte_4B346BD & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346BD = 1;
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

  if ( (byte_4B346BF & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346BF = 1;
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

  if ( (byte_4B346C1 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346C1 = 1;
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

  if ( (byte_4B34666 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34666 = 1;
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

  if ( (byte_4B3463E & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3463E = 1;
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

  if ( (byte_4B34648 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34648 = 1;
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

  if ( (byte_4B34704 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34704 = 1;
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

  if ( (byte_4B3465E & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3465E = 1;
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

  if ( (byte_4B346F4 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346F4 = 1;
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

  if ( (byte_4B346D3 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346D3 = 1;
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

  if ( (byte_4B34652 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34652 = 1;
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

  if ( (byte_4B34636 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34636 = 1;
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

  if ( (byte_4B3462A & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3462A = 1;
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

  if ( (byte_4B34628 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34628 = 1;
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

  if ( (byte_4B3462C & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3462C = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B34656 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34656 = 1;
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

  if ( (byte_4B34654 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34654 = 1;
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

  if ( (byte_4B34714 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34714 = 1;
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

  if ( (byte_4B3464A & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3464A = 1;
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

  if ( (byte_4B346CD & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346CD = 1;
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

  if ( (byte_4B346DB & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346DB = 1;
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

  if ( (byte_4B34618 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34618 = 1;
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

  if ( (byte_4B3463C & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3463C = 1;
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

  if ( (byte_4B346BB & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346BB = 1;
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

  if ( (byte_4B3466A & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3466A = 1;
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

  if ( (byte_4B346DD & 1) == 0 )
  {
    sub_1BD3458(&QuestFocusStateManager_TypeInfo, v1);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v2);
    byte_4B346DD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->questFocusStateManager )
  {
    v4 = (QuestFocusStateManager_o *)sub_1BD36A4(QuestFocusStateManager_TypeInfo);
    QuestFocusStateManager___ctor(v4, 0LL);
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    p_questFocusStateManager = (PartyOrganizationUtility_o *)&v11->static_fields->questFocusStateManager;
    p_questFocusStateManager->klass = (PartyOrganizationUtility_c *)v4;
    sub_1BD33FC(p_questFocusStateManager, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4B34616 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34616 = 1;
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

  if ( (byte_4B346F6 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346F6 = 1;
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

  if ( (byte_4B346F8 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346F8 = 1;
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

  if ( (byte_4B346B9 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346B9 = 1;
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

  if ( (byte_4B34624 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34624 = 1;
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

  if ( (byte_4B3464C & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3464C = 1;
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

  if ( (byte_4B346D1 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346D1 = 1;
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

  if ( (byte_4B34626 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34626 = 1;
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

  if ( (byte_4B3461E & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3461E = 1;
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

  if ( (byte_4B3461C & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3461C = 1;
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

  if ( (byte_4B346D7 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346D7 = 1;
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

  if ( (byte_4B34672 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34672 = 1;
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

  if ( (byte_4B34614 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34614 = 1;
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

  if ( (byte_4B34612 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34612 = 1;
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

  if ( (byte_4B34610 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34610 = 1;
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

  if ( (byte_4B346FA & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346FA = 1;
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

  if ( (byte_4B34699 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34699 = 1;
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

  if ( (byte_4B3469B & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3469B = 1;
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

  if ( (byte_4B3470C & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3470C = 1;
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

  if ( (byte_4B346B1 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346B1 = 1;
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

  if ( (byte_4B3460E & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3460E = 1;
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

  if ( (byte_4B34670 & 1) == 0 )
  {
    sub_1BD3458(&MapZoom_TypeInfo, v1);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v2);
    byte_4B34670 = 1;
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

  if ( (byte_4B3468F & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3468F = 1;
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

  if ( (byte_4B3467A & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3467A = 1;
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

  if ( (byte_4B34678 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34678 = 1;
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

  if ( (byte_4B3467C & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3467C = 1;
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

  if ( (byte_4B34685 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34685 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B346FE & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346FE = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B346B5 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346B5 = 1;
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

  if ( (byte_4B346A9 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346A9 = 1;
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

  if ( (byte_4B346B7 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346B7 = 1;
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

  if ( (byte_4B346E6 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346E6 = 1;
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

  if ( (byte_4B346E4 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346E4 = 1;
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

  if ( (byte_4B346B3 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346B3 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B34700 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34700 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B346FC & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B346FC = 1;
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

  if ( (byte_4B34676 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34676 = 1;
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

  if ( (byte_4B34682 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34682 = 1;
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

  if ( (byte_4B34674 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34674 = 1;
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

  if ( (byte_4B34680 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34680 = 1;
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

  if ( (byte_4B3467E & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3467E = 1;
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

  if ( (byte_4B34689 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34689 = 1;
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

  if ( (byte_4B3468B & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3468B = 1;
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

  if ( (byte_4B34687 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34687 = 1;
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

  if ( (byte_4B3468D & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3468D = 1;
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

  if ( (byte_4B34702 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34702 = 1;
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

  if ( (byte_4B34697 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B34697 = 1;
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

  if ( (byte_4B3471D & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v1);
    byte_4B3471D = 1;
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

  if ( (byte_4B3471C & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3471C = 1;
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

  if ( (byte_4B3462F & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3462F = 1;
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

  if ( (byte_4B3464F & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3464F = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BattleSetupKeep_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B346A0 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346A0 = 1;
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

  if ( (byte_4B346A2 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346A2 = 1;
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
  PartyOrganizationUtility_o *static_fields; // x8

  if ( (byte_4B346A6 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346A6 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (PartyOrganizationUtility_o *)v9->static_fields;
  static_fields[3].klass = (PartyOrganizationUtility_c *)value;
  sub_1BD33FC(static_fields + 3, (int64_t)value, v2, v3, v4, v5, v6, v7);
}


void __fastcall TerminalPramsManager__set_BeforeQuestStartWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B34709 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34709 = 1;
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

  if ( (byte_4B34694 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34694 = 1;
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

  if ( (byte_4B346C6 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346C6 = 1;
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

  if ( (byte_4B346CA & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346CA = 1;
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

  if ( (byte_4B346C4 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346C4 = 1;
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

  if ( (byte_4B346C8 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346C8 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BlankEarthTransformData_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B346DA & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346DA = 1;
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

  if ( (byte_4B3466D & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3466D = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignBonus_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B3466F & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3466F = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B3469E & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3469E = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_ClearEventQuestIds_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B3465B & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3465B = 1;
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

  if ( (byte_4B34663 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v2);
    byte_4B34663 = 1;
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

  if ( (byte_4B3465D & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3465D = 1;
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

  if ( (byte_4B346E3 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346E3 = 1;
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

  if ( (byte_4B346E2 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346E2 = 1;
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

  if ( (byte_4B346E0 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346E0 = 1;
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

  if ( (byte_4B346E1 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346E1 = 1;
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

  if ( (byte_4B3460D & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3460D = 1;
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

  if ( (byte_4B34651 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34651 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EndTime_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventActivityPointEffectState(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B346A4 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346A4 = 1;
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

  if ( (byte_4B346AC & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346AC = 1;
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

  if ( (byte_4B34696 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34696 = 1;
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

  if ( (byte_4B34692 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34692 = 1;
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

  if ( (byte_4B3463B & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3463B = 1;
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

  if ( (byte_4B346A8 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346A8 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B346D0 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346D0 = 1;
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

  if ( (byte_4B3470B & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3470B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventUiWarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsAutoFolder(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B346EF & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346EF = 1;
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

  if ( (byte_4B346F1 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346F1 = 1;
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

  if ( (byte_4B34713 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34713 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v3 = value;
  if ( !byte_4B320BB )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B320BB = 1;
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

  if ( (byte_4B346E9 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346E9 = 1;
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

  if ( (byte_4B346EB & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346EB = 1;
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

  if ( (byte_4B34707 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34707 = 1;
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

  if ( (byte_4B346CC & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346CC = 1;
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

  if ( (byte_4B346F3 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346F3 = 1;
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

  if ( (byte_4B34659 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34659 = 1;
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

  if ( (byte_4B34665 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34665 = 1;
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

  if ( (byte_4B34661 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34661 = 1;
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

  if ( (byte_4B346D6 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346D6 = 1;
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

  if ( (byte_4B34631 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34631 = 1;
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

  if ( (byte_4B34633 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34633 = 1;
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

  if ( (byte_4B34643 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34643 = 1;
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

  if ( (byte_4B34635 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34635 = 1;
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

  if ( (byte_4B3461B & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3461B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDoneShortcut_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsEventBoardGameDiceBtnActive(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B346AE & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346AE = 1;
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

  if ( (byte_4B34623 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34623 = 1;
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

  if ( (byte_4B34621 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34621 = 1;
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

  if ( (byte_4B346DF & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346DF = 1;
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

  if ( (byte_4B346ED & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346ED = 1;
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

  if ( (byte_4B34639 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34639 = 1;
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

  if ( (byte_4B34641 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34641 = 1;
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

  if ( (byte_4B34647 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34647 = 1;
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

  if ( (byte_4B346B0 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346B0 = 1;
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

  if ( (byte_4B34669 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34669 = 1;
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

  if ( (byte_4B34645 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34645 = 1;
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

  if ( (byte_4B346BE & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346BE = 1;
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

  if ( (byte_4B346C0 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346C0 = 1;
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

  if ( (byte_4B346C2 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346C2 = 1;
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

  if ( (byte_4B34667 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34667 = 1;
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

  if ( (byte_4B3463F & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3463F = 1;
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

  if ( (byte_4B34649 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34649 = 1;
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

  if ( (byte_4B34705 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34705 = 1;
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

  if ( (byte_4B3465F & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3465F = 1;
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

  if ( (byte_4B346F5 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346F5 = 1;
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

  if ( (byte_4B346D4 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346D4 = 1;
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

  if ( (byte_4B34653 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34653 = 1;
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

  if ( (byte_4B34637 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34637 = 1;
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

  if ( (byte_4B3462B & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3462B = 1;
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

  if ( (byte_4B34629 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34629 = 1;
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

  if ( (byte_4B3462D & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3462D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastSelectQuestIndex_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_MapModelClearPhaseCount(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B34657 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34657 = 1;
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

  if ( (byte_4B34655 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34655 = 1;
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

  if ( (byte_4B34715 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34715 = 1;
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

  if ( (byte_4B3464B & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3464B = 1;
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

  if ( (byte_4B346CE & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346CE = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_NoticeLastModified_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B346DC & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346DC = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (PartyOrganizationUtility_o *)v9->static_fields;
  static_fields[4].klass = (PartyOrganizationUtility_c *)value;
  sub_1BD33FC(static_fields + 4, (int64_t)value, v2, v3, v4, v5, v6, v7);
}


void __fastcall TerminalPramsManager__set_PhaseCnt(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B34619 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34619 = 1;
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

  if ( (byte_4B3463D & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3463D = 1;
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

  if ( (byte_4B346BC & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346BC = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_PlayedTerminalEffects_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B3466B & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3466B = 1;
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

  if ( (byte_4B34617 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34617 = 1;
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

  if ( (byte_4B346F7 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346F7 = 1;
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

  if ( (byte_4B346F9 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346F9 = 1;
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

  if ( (byte_4B346BA & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346BA = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_QuestRandomGroupList_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B34625 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34625 = 1;
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

  if ( (byte_4B3464D & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3464D = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B346D2 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346D2 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SceneMoveQuestClearedInfo_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B34627 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34627 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B3461F & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3461F = 1;
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

  if ( (byte_4B3461D & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3461D = 1;
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

  if ( (byte_4B346D8 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346D8 = 1;
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

  if ( (byte_4B34673 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34673 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SpecifiedChangeSceneInfo_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B34615 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34615 = 1;
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

  if ( (byte_4B34613 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34613 = 1;
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

  if ( (byte_4B34611 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34611 = 1;
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

  if ( (byte_4B346FB & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346FB = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_TalkScriptInfo_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B3469A & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3469A = 1;
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

  if ( (byte_4B3469C & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3469C = 1;
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

  if ( (byte_4B3470D & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3470D = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_TransitionScrollTabName_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B346B2 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346B2 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_WarBoardData_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B3460F & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3460F = 1;
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

  if ( (byte_4B34671 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v2);
    byte_4B34671 = 1;
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

  if ( (byte_4B34690 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34690 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventDailyPoint_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B3467B & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3467B = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventPointWinReward_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B34679 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34679 = 1;
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

  if ( (byte_4B3467D & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3467D = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventRaceBoost_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B34686 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34686 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventTowerReward_k__BackingField = value;
  sub_1BD33FC(
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B346FF & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346FF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_friendshipQuestDialogOpenId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isFortificationCheck(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B346B6 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346B6 = 1;
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

  if ( (byte_4B346AA & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346AA = 1;
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

  if ( (byte_4B346B8 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346B8 = 1;
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

  if ( (byte_4B346E7 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346E7 = 1;
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

  if ( (byte_4B346E5 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346E5 = 1;
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

  if ( (byte_4B346B4 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346B4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isWarBoardPlay_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_limitCountUnSealQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B34701 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34701 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4B346FD & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B346FD = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_limitImageAnnounces_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B34677 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34677 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_oldPersonalBoss_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B34683 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34683 = 1;
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

  if ( (byte_4B34675 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34675 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_oldSuperBoss_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B34681 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34681 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (PartyOrganizationUtility_o *)v9->static_fields;
  static_fields[2].klass = (PartyOrganizationUtility_c *)value;
  sub_1BD33FC(static_fields + 2, (int64_t)value, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4B3467F & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3467F = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_questClearCostumeRelease_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B3468A & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3468A = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_resultBoostItemRewardInfo_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B3468C & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3468C = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B34688 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34688 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_resultEventTowerRewardInfo_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B3468E & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B3468E = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_timeStatusRecord_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B34703 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34703 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_updateProfileInfoEntity_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B34698 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34698 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_warClearReward_k__BackingField = value;
  sub_1BD33FC(
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

  if ( (byte_4B34775 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_13460/*"TERMINAL_CLEAR_REWARD_DISP"*/, v8);
    byte_4B34775 = 1;
  }
  TerminalPramsManager_ClearData_TypeInfo->static_fields->SAVEKEY_CLEAR_REWARD_DISP = (struct System_String_o *)StringLiteral_13460/*"TERMINAL_CLEAR_REWARD_DISP"*/;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)TerminalPramsManager_ClearData_TypeInfo->static_fields,
    StringLiteral_13460/*"TERMINAL_CLEAR_REWARD_DISP"*/,
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

  if ( (byte_4B34773 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B34773 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.qClearHeroineInfo = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.questRewardInfos = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.questRewardInfos, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.questPhaseRewardInfos = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.questPhaseRewardInfos, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.questResultAfterEventRewardInfos = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.questResultAfterEventRewardInfos,
    0LL,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.resultEventPanelRewardInfos = 0LL;
  sub_1BD33FC(
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
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.mOldSuperBoss, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.oldPersonalBoss = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.oldPersonalBoss, 0LL, v39, v40, v41, v42, v43, v44);
  this->fields.evPointWinReward = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.evPointWinReward, 0LL, v45, v46, v47, v48, v49, v50);
  this->fields.evPointWinType = 0;
  this->fields.evRaceBoost = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.evRaceBoost, 0LL, v51, v52, v53, v54, v55, v56);
  this->fields.questClearCostume = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.questClearCostume, 0LL, v57, v58, v59, v60, v61, v62);
  this->fields.questClearCostumeGetInfo = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.questClearCostumeGetInfo, 0LL, v63, v64, v65, v66, v67, v68);
  this->fields.eventTowerReward = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.eventTowerReward, 0LL, v69, v70, v71, v72, v73, v74);
  this->fields.resultEventTowerRewardInfo = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.resultEventTowerRewardInfo, 0LL, v75, v76, v77, v78, v79, v80);
  this->fields.warClearReward = 0LL;
  this->fields.isDispOnly = 0;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.warClearReward, 0LL, v81, v82, v83, v84, v85, v86);
  v93 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v93 = TerminalPramsManager_TypeInfo;
  }
  this->fields.EventActivityPointEffectState = v93->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  this->fields.limitImageAnnounces = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.limitImageAnnounces, 0LL, v87, v88, v89, v90, v91, v92);
  this->fields.oldUserEventPoint = 0LL;
  p_oldUserEventPoint = &this->fields.oldUserEventPoint;
  *((_BYTE *)p_oldUserEventPoint - 16) = 0;
  *((_DWORD *)p_oldUserEventPoint - 3) = 0;
  *((_BYTE *)p_oldUserEventPoint - 8) = 0;
  sub_1BD33FC((PartyOrganizationUtility_o *)p_oldUserEventPoint, 0LL, v95, v96, v97, v98, v99, v100);
}


void __fastcall TerminalPramsManager_ClearData___ctor_35475844(
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
  struct CostumeReleaseAnnounce_array *v36; // x27
  struct CostumeReleaseAnnounce_array *v37; // x24
  struct UserSuperBossEntity_array *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v46; // x0
  const MethodInfo *v47; // x2
  int64_t v48; // x25
  __int64 v49; // x0
  __int64 v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  bool v57; // w28
  bool v58; // w22
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  struct QuestRewardInfo_array *v119; // x1
  __int64 v120; // x1
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  TerminalPramsManager_c *v127; // x0
  TerminalPramsManager_c *v128; // x0
  struct QuestRewardInfo_array *resultBoostItemRewardInfo_k__BackingField; // x1
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  __int64 v136; // x1
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  TerminalPramsManager_c *v143; // x0
  TerminalPramsManager_c *v144; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo_k__BackingField; // x1
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  struct WarClearReward_array *v152; // x1
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
  struct BattleDropItem_array *v166; // x1
  int64_t v167; // x2
  int32_t v168; // w3
  System_String_o *v169; // x4
  BattleSetupInfo_o *v170; // x5
  FollowerInfo_o *v171; // x6
  PartyListViewItem_o *v172; // x7
  struct LimitImageAnnounce_array *v173; // x1
  __int64 v174; // x1
  int64_t v175; // x2
  int32_t v176; // w3
  System_String_o *v177; // x4
  BattleSetupInfo_o *v178; // x5
  FollowerInfo_o *v179; // x6
  PartyListViewItem_o *v180; // x7
  TerminalPramsManager_c *v181; // x0
  struct UserEventPointEntity_array *OldUserEventPoint_k__BackingField; // x1

  v29 = oldSuperBoss;
  v36 = questClearCostumeGet;
  v37 = questClearCostumeRelease;
  v38 = oldPersonalBoss;
  if ( (byte_4B34774 & 1) == 0 )
  {
    sub_1BD3458(&BattleDropItem___TypeInfo, qcrHeroineInfo);
    sub_1BD3458(&CostumeReleaseAnnounce___TypeInfo, v39);
    sub_1BD3458(&LimitImageAnnounce___TypeInfo, v40);
    sub_1BD3458(&TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo, v41);
    sub_1BD3458(&QuestRewardInfo___TypeInfo, v42);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v43);
    sub_1BD3458(&UserSuperBossEntity___TypeInfo, v44);
    sub_1BD3458(&WarClearReward___TypeInfo, v45);
    byte_4B34774 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v46 = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)sub_1BD36A4(TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
  v48 = (int64_t)v46;
  if ( qcrHeroineInfo )
  {
    TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_35485384(v46, qcrHeroineInfo, v47);
    if ( this )
      goto LABEL_5;
LABEL_34:
    sub_1BD36B4(v49, v50);
  }
  System_Object___ctor((Il2CppObject *)v46, 0LL);
  *(_QWORD *)(v48 + 16) = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v48 + 16), 0LL, v130, v131, v132, v133, v134, v135);
  if ( !this )
    goto LABEL_34;
LABEL_5:
  this->fields.qClearHeroineInfo = (struct TerminalPramsManager_QuestClearHeroineInfoForSave_o *)v48;
  v57 = qClear;
  v58 = pclear;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, v48, v51, v52, v53, v54, v55, v56);
  if ( !qri )
    qri = (QuestRewardInfo_array *)sub_1BD3500(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.questRewardInfos = qri;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.questRewardInfos, (int64_t)qri, v59, v60, v61, v62, v63, v64);
  if ( !questPhaseRewardInfos )
    questPhaseRewardInfos = (QuestRewardInfo_array *)sub_1BD3500(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.questPhaseRewardInfos = questPhaseRewardInfos;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.questPhaseRewardInfos,
    (int64_t)questPhaseRewardInfos,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields.questClear = v57;
  this->fields.phaseClear = v58;
  this->fields.clearedLastBattleRaidId = lastRaidId;
  this->fields.clearedBattleRaidId = raidId;
  this->fields.joinGroup = groupjoin;
  if ( !oldSuperBoss )
    v29 = (struct UserSuperBossEntity_array *)sub_1BD3500(UserSuperBossEntity___TypeInfo, 0LL);
  this->fields.mOldSuperBoss = v29;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.mOldSuperBoss, (int64_t)v29, v71, v72, v73, v74, v75, v76);
  if ( !oldPersonalBoss )
    v38 = (struct UserSuperBossEntity_array *)sub_1BD3500(UserSuperBossEntity___TypeInfo, 0LL);
  this->fields.oldPersonalBoss = v38;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.oldPersonalBoss, (int64_t)v38, v77, v78, v79, v80, v81, v82);
  this->fields.evPointWinReward = evpWinReward;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.evPointWinReward,
    (int64_t)evpWinReward,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  this->fields.evRaceBoost = evRace;
  this->fields.evPointWinType = evpWinType;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.evRaceBoost, (int64_t)evRace, v89, v90, v91, v92, v93, v94);
  if ( !questClearCostumeRelease )
    v37 = (struct CostumeReleaseAnnounce_array *)sub_1BD3500(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostume = v37;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.questClearCostume,
    (int64_t)v37,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  if ( !questClearCostumeGet )
    v36 = (struct CostumeReleaseAnnounce_array *)sub_1BD3500(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostumeGetInfo = v36;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.questClearCostumeGetInfo,
    (int64_t)v36,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  this->fields.eventTowerReward = evTowerReward;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.eventTowerReward,
    (int64_t)evTowerReward,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  v119 = resultEvTowerRewardInfo;
  if ( !resultEvTowerRewardInfo )
    v119 = (struct QuestRewardInfo_array *)sub_1BD3500(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.resultEventTowerRewardInfo = v119;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.resultEventTowerRewardInfo,
    (int64_t)v119,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B34308 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v120);
    byte_4B34308 = 1;
  }
  v127 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v127 = TerminalPramsManager_TypeInfo;
  }
  if ( v127->static_fields->_resultBoostItemRewardInfo_k__BackingField )
  {
    if ( !v127->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v127);
    if ( !byte_4B34308 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v120);
      byte_4B34308 = 1;
    }
    v128 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v128 = TerminalPramsManager_TypeInfo;
    }
    resultBoostItemRewardInfo_k__BackingField = v128->static_fields->_resultBoostItemRewardInfo_k__BackingField;
  }
  else
  {
    resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1BD3500(
                                                                                  QuestRewardInfo___TypeInfo,
                                                                                  0LL);
  }
  this->fields.resultBoostItemRewardInfo = resultBoostItemRewardInfo_k__BackingField;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.resultBoostItemRewardInfo,
    (int64_t)resultBoostItemRewardInfo_k__BackingField,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B34300 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v136);
    byte_4B34300 = 1;
  }
  v143 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v143 = TerminalPramsManager_TypeInfo;
  }
  if ( v143->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField )
  {
    if ( !v143->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v143);
    if ( !byte_4B34300 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v136);
      byte_4B34300 = 1;
    }
    v144 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v144 = TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfo_k__BackingField = v144->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
  }
  else
  {
    resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1BD3500(
                                                                                            QuestRewardInfo___TypeInfo,
                                                                                            0LL);
  }
  this->fields.resultEventBoardGameTokenRewardInfo = resultEventBoardGameTokenRewardInfo_k__BackingField;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.resultEventBoardGameTokenRewardInfo,
    (int64_t)resultEventBoardGameTokenRewardInfo_k__BackingField,
    v137,
    v138,
    v139,
    v140,
    v141,
    v142);
  v152 = warClearRewardIn;
  this->fields.isDispOnly = dispOnly;
  if ( !warClearRewardIn )
    v152 = (struct WarClearReward_array *)sub_1BD3500(WarClearReward___TypeInfo, 0LL);
  this->fields.warClearReward = v152;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.warClearReward,
    (int64_t)v152,
    v146,
    v147,
    v148,
    v149,
    v150,
    v151);
  v159 = questResultAfterEventRewardInfos;
  this->fields.isWarBoardClear = isWarBoardClear;
  this->fields.EventActivityPointEffectState = eventActivityPointEffectState;
  if ( !questResultAfterEventRewardInfos )
    v159 = (struct BattleDropItem_array *)sub_1BD3500(BattleDropItem___TypeInfo, 0LL);
  this->fields.questResultAfterEventRewardInfos = v159;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.questResultAfterEventRewardInfos,
    (int64_t)v159,
    v153,
    v154,
    v155,
    v156,
    v157,
    v158);
  v166 = resultEventPanelRewardInfos;
  if ( !resultEventPanelRewardInfos )
    v166 = (struct BattleDropItem_array *)sub_1BD3500(BattleDropItem___TypeInfo, 0LL);
  this->fields.resultEventPanelRewardInfos = v166;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.resultEventPanelRewardInfos,
    (int64_t)v166,
    v160,
    v161,
    v162,
    v163,
    v164,
    v165);
  v173 = limitImageAnnounces;
  this->fields.panelEventPoint = panelEventPoint;
  if ( !limitImageAnnounces )
    v173 = (struct LimitImageAnnounce_array *)sub_1BD3500(LimitImageAnnounce___TypeInfo, 0LL);
  this->fields.limitImageAnnounces = v173;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.limitImageAnnounces,
    (int64_t)v173,
    v167,
    v168,
    v169,
    v170,
    v171,
    v172);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33C6B )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v174);
    byte_4B33C6B = 1;
  }
  v181 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v181 = TerminalPramsManager_TypeInfo;
  }
  this->fields.isOrdealCallWarClear = v181->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4B34303 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v174);
    v181 = TerminalPramsManager_TypeInfo;
    byte_4B34303 = 1;
  }
  if ( !v181->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v181);
    v181 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventMuralId = v181->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_4B34305 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v174);
    v181 = TerminalPramsManager_TypeInfo;
    byte_4B34305 = 1;
  }
  if ( !v181->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v181);
    v181 = TerminalPramsManager_TypeInfo;
  }
  this->fields.playHappinessCounterEffect = v181->static_fields->_PlayHappinessCounterEffect_k__BackingField;
  if ( !byte_4B33D5A )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v174);
    v181 = TerminalPramsManager_TypeInfo;
    byte_4B33D5A = 1;
  }
  if ( !v181->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v181);
    v181 = TerminalPramsManager_TypeInfo;
  }
  OldUserEventPoint_k__BackingField = v181->static_fields->_OldUserEventPoint_k__BackingField;
  this->fields.oldUserEventPoint = OldUserEventPoint_k__BackingField;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.oldUserEventPoint,
    (int64_t)OldUserEventPoint_k__BackingField,
    v175,
    v176,
    v177,
    v178,
    v179,
    v180);
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor_35484620(
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

  if ( (byte_4B3476F & 1) == 0 )
  {
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, uSvtEnt);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4B3476F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !uSvtEnt )
    sub_1BD36B4(v6, v7);
  v8 = *(_OWORD *)&uSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  this->fields.id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v13, 0LL);
  v9 = *(_OWORD *)&uSvtEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v9;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v12, 0LL);
  v11 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v15, 0LL);
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                              uSvtEnt->fields.limitCount,
                              0LL);
  this->fields.imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                   uSvtEnt->fields.imageLimitCount,
                                   0LL);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                  uSvtEnt->fields.dispLimitCount,
                                  0LL);
  this->fields.commandCardLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                         uSvtEnt->fields.commandCardLimitCount,
                                         0LL);
  this->fields.iconLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
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

  if ( (byte_4B34770 & 1) == 0 )
  {
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_1BD3458(&UserServantEntity_TypeInfo, v4);
    byte_4B34770 = 1;
  }
  v5 = sub_1BD36A4(UserServantEntity_TypeInfo);
  UserServantEntity___ctor((UserServantEntity_o *)v5, 0LL);
  id = this->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v14, id, 0LL);
  v15 = v14;
  if ( !v5 )
    sub_1BD36B4(v7, v8);
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
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_35485384(
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

  if ( (byte_4B34771 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_OldHeroineLawData_TypeInfo, qClearHeroineInfo);
    byte_4B34771 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !qClearHeroineInfo )
    sub_1BD36B4(v5, v6);
  oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
  v8 = (TerminalPramsManager_OldHeroineLawData_o *)sub_1BD36A4(TerminalPramsManager_OldHeroineLawData_TypeInfo);
  TerminalPramsManager_OldHeroineLawData___ctor_35484620(v8, oldUsrSvtData, v9);
  this->fields.oldUsrSvtData = v8;
  p_fields = &this->fields;
  sub_1BD33FC((PartyOrganizationUtility_o *)p_fields, (int64_t)v8, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_4B34772 & 1) == 0 )
  {
    sub_1BD3458(&QuestClearHeroineInfo_TypeInfo, method);
    byte_4B34772 = 1;
  }
  v3 = sub_1BD36A4(QuestClearHeroineInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  oldUsrSvtData = this->fields.oldUsrSvtData;
  if ( !oldUsrSvtData
    || (oldUsrSvtData = (TerminalPramsManager_OldHeroineLawData_o *)TerminalPramsManager_OldHeroineLawData__GetLoad(
                                                                      oldUsrSvtData,
                                                                      v4),
        !v3) )
  {
    sub_1BD36B4(oldUsrSvtData, v4);
  }
  *(_QWORD *)(v3 + 16) = oldUsrSvtData;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)oldUsrSvtData, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4B347AE & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager___c_TypeInfo, v1);
    byte_4B347AE = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(TerminalPramsManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalPramsManager___c_TypeInfo->static_fields->__9 = (struct TerminalPramsManager___c_o *)v2;
  sub_1BD33FC(
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


bool __fastcall TerminalPramsManager___c___ReceiveQuestEndResultInfo_b__688_0(
        TerminalPramsManager___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  int32_t questId; // w19
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4B347AF & 1) == 0 )
  {
    this = (TerminalPramsManager___c_o *)sub_1BD3458(&TerminalPramsManager_TypeInfo, n);
    byte_4B347AF = 1;
  }
  if ( !n )
    sub_1BD36B4(this, n);
  questId = n->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D4D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, n);
    byte_4B33D4D = 1;
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
bool __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__693_0(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  if ( (byte_4B347B0 & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, *(_QWORD *)&v);
    byte_4B347B0 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStoryForQuestId(v, 0LL);
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__693_3(
        TerminalPramsManager___c_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1BD36B4(this, 0LL);
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

  if ( (byte_4B347B1 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_43/*"\n"*/, effectId);
    byte_4B347B1 = 1;
  }
  effectIdsStr = this->fields.effectIdsStr;
  p_fields = (PartyOrganizationUtility_o *)&this->fields;
  v7 = System_String__Concat_62536508(effectIdsStr, effectId, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  p_fields->klass = (PartyOrganizationUtility_c *)v7;
  sub_1BD33FC(p_fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall TerminalPramsManager___c__DisplayClass693_0___ctor(
        TerminalPramsManager___c__DisplayClass693_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


QuestEntity_o *__fastcall TerminalPramsManager___c__DisplayClass693_0___SendOpenedQuestIdToAdManager_b__1(
        TerminalPramsManager___c__DisplayClass693_0_o *this,
        int32_t v,
        const MethodInfo *method)
{
  QuestMaster_o *questMaster; // x0

  questMaster = this->fields.questMaster;
  if ( !questMaster )
    sub_1BD36B4(0LL, v);
  return QuestMaster__getQuestEntity(questMaster, v, 0LL);
}


bool __fastcall TerminalPramsManager___c__DisplayClass693_0___SendOpenedQuestIdToAdManager_b__2(
        TerminalPramsManager___c__DisplayClass693_0_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  UserQuestMaster_o *userQuestMaster; // x20
  NetworkManager_c *v6; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B347B2 & 1) == 0 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v);
    byte_4B347B2 = 1;
  }
  entity = 0LL;
  userQuestMaster = this->fields.userQuestMaster;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v);
    byte_4B31D77 = 1;
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
    sub_1BD36B4(v6, v);
  }
  return 1;
}