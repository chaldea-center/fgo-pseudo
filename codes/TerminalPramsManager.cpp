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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  struct TerminalPramsManager_StaticFields *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x0
  struct TerminalPramsManager_StaticFields *v17; // x8
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_List_object__o *v20; // x19
  ServantStatusBattleListViewItem_o *p_eventScriptMessages; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  struct TerminalPramsManager_StaticFields *v24; // x8

  if ( (byte_49FC1A1 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_int___ctor__, v1);
    sub_1B64A00(&System_Collections_Generic_HashSet_int__TypeInfo, v2);
    sub_1B64A00(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1B64A00(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1B64A00(&float___TypeInfo, v5);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v6);
    sub_1B64A00(&StringLiteral_1/*""*/, v7);
    byte_49FC1A1 = 1;
  }
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_1B64C4C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_33662A0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->loginQuestNotifiedList = v8;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->loginQuestNotifiedList, (int32_t)v8, v10, v11);
  v12 = (int)StringLiteral_1/*""*/;
  v13 = TerminalPramsManager_TypeInfo->static_fields;
  v13->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v13->mTerminalWarStartedIds, v12, v14, v15);
  *(_OWORD *)&TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = xmmword_BA3550;
  v16 = sub_1B64AA8(float___TypeInfo, 3LL);
  v17 = TerminalPramsManager_TypeInfo->static_fields;
  v17->TipsArchiveScrollValueList = (struct System_Single_array *)v16;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v17->TipsArchiveScrollValueList, v16, v18, v19);
  TerminalPramsManager_TypeInfo->static_fields->joinGroupId = -1;
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_string___ctor__);
  p_eventScriptMessages = (ServantStatusBattleListViewItem_o *)&TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  p_eventScriptMessages->klass = (ServantStatusBattleListViewItem_c *)v20;
  sub_1B649A4(p_eventScriptMessages, (int32_t)v20, v22, v23);
  v24 = TerminalPramsManager_TypeInfo->static_fields;
  *(_QWORD *)&v24->EVENT_POINT_EFFECT_STATE_SUB = 0xFFFFFFFFLL;
  v24->EVENT_POINT_EFFECT_STATE_ADD = 1;
  *(_QWORD *)&v24->_ShopFocusItemId_k__BackingField = 0LL;
  v24->isInvisibleConnectAndLoad = 0;
  *(_QWORD *)&v24->ConnectMarkEventId = 0LL;
  v24->meSceneStatus = 0;
  v24->isCheckHomeExpirationDateEventMap = 1;
  *(_WORD *)&v24->IsEventMapLoading = 0;
  v24->_MasterMissionTargetType_k__BackingField = -1;
}


void __fastcall TerminalPramsManager__AddNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_49FC184 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_int__Add__, method);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v3);
    byte_49FC184 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v4->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1B64C5C(0LL, method);
  System_Collections_Generic_HashSet_int___Add(
    loginQuestNotifiedList,
    questId,
    (const MethodInfo_33674A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall TerminalPramsManager__AutoOff(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC147 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC147 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FA14E )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FA14E = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 0;
  if ( !byte_49FBD5F )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    v2 = TerminalPramsManager_TypeInfo;
    byte_49FBD5F = 1;
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

  if ( (byte_49FC178 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11374/*"SAVEKEY_BlankEarthRank"*/, v2);
    byte_49FC178 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1E7 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC1E7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11374/*"SAVEKEY_BlankEarthRank"*/,
    v3->static_fields->_BlankEarthRank_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__BlankEarthSpotId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC177 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11375/*"SAVEKEY_BlankEarthSpotId"*/, v2);
    byte_49FC177 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB74A )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FB74A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11375/*"SAVEKEY_BlankEarthSpotId"*/,
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

  if ( (byte_49FC176 & 1) == 0 )
  {
    sub_1B64A00(&CommonUI_CampaignDirectBonusData___TypeInfo, v1);
    sub_1B64A00(&JsonManager_TypeInfo, v2);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v3);
    sub_1B64A00(&StringLiteral_11376/*"SAVEKEY_CampaignDirectBonus"*/, v4);
    byte_49FC176 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1E6 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC1E6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_obj = &v5->static_fields->_CampaignDirectBonus_k__BackingField->obj;
  if ( !p_obj )
    p_obj = (Il2CppObject *)sub_1B64AA8(CommonUI_CampaignDirectBonusData___TypeInfo, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__toJson(p_obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11376/*"SAVEKEY_CampaignDirectBonus"*/, v7, 0LL);
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

  if ( (byte_49FC192 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, method);
    sub_1B64A00(&Method_DataManager_GetMasterData_QuestMaster___, v3);
    sub_1B64A00(&Method_DataManager_GetMasterData_SpotMaster___, v4);
    sub_1B64A00(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v5);
    sub_1B64A00(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FC192 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_SpotMaster___);
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
          (const MethodInfo_30D67EC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v13 )
LABEL_16:
    sub_1B64C5C(Instance, v9);
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
            HIDWORD(v13[1].klass),
            (const MethodInfo_2E5559C *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall TerminalPramsManager__CheckClearSelectedStoryQuestId(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_49FC179 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC179 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FBF18 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FBF18 = 1;
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
    if ( !byte_49FBF18 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
      byte_49FBF18 = 1;
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
      if ( !byte_49FBB7A )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
        byte_49FBB7A = 1;
      }
      v5 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v5 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
      }
      *((_DWORD *)v5[2].virtualMethodPointer + 7) = 0;
      TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(v5);
    }
  }
}


bool __fastcall TerminalPramsManager__CheckEventActivityPointSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_49FC162 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_13535/*"TerminalBeforeEventActivityPoint"*/, v1);
    sub_1B64A00(&StringLiteral_13536/*"TerminalBeforeEventActivityPointGauge"*/, v2);
    byte_49FC162 = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13535/*"TerminalBeforeEventActivityPoint"*/, 0LL)
      && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13536/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckEventSubmarinePointSaveData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FC164 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_13537/*"TerminalBeforeEventSubmarinePointData"*/, v1);
    byte_49FC164 = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13537/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckIsOrdealCallWarClear(WarEntity_o *warEntity, const MethodInfo *method)
{
  int32_t parentWarId; // w19
  BalanceConfig_c *v4; // x0

  if ( (byte_49FC19F & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, method);
    byte_49FC19F = 1;
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
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  System_Action_object__o *v30; // x22
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  ServantStatusBattleListViewItem_c *v34; // x19
  TerminalPramsManager_c *v35; // x0
  ServantStatusBattleListViewItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  const MethodInfo *v37; // x0
  int32_t v38; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FC17D & 1) == 0 )
  {
    sub_1B64A00(&System_Action_string__TypeInfo, v1);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToList_string___, v2);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__ForEach__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Remove__, v4);
    sub_1B64A00(&ScrTerminalListTop_TypeInfo, v5);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v6);
    sub_1B64A00(&Method_TerminalPramsManager___c__DisplayClass645_0__CheckResumeEffectNT2_b__0__, v7);
    sub_1B64A00(&TerminalPramsManager___c__DisplayClass645_0_TypeInfo, v8);
    sub_1B64A00(&StringLiteral_43/*"\n"*/, v9);
    sub_1B64A00(&StringLiteral_89/*"\r\n"*/, v10);
    sub_1B64A00(&StringLiteral_1/*""*/, v11);
    byte_49FC17D = 1;
  }
  v38 = 0;
  v12 = sub_1B64C4C(TerminalPramsManager___c__DisplayClass645_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1E4 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v13);
    byte_49FC1E4 = 1;
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
        v38 = v20->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
        v22 = (Il2CppObject *)System_Int32__ToString((int32_t)&v38, 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49FC1E4 )
        {
          sub_1B64A00(&TerminalPramsManager_TypeInfo, v21);
          byte_49FC1E4 = 1;
        }
        v23 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v23 = TerminalPramsManager_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v23->static_fields->_PlayedTerminalEffects_k__BackingField;
        if ( !PlayedTerminalEffects_k__BackingField
          || (PlayedTerminalEffects_k__BackingField = System_String__Replace_61404756(
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
                                                                            (const MethodInfo_2E77910 *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL)
          || (v26 = (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
              PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Collections_Generic_List_object___Remove(
                                                                           (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
                                                                           v22,
                                                                           (const MethodInfo_34B1590 *)Method_System_Collections_Generic_List_string__Remove__),
              !v12) )
        {
          sub_1B64C5C(PlayedTerminalEffects_k__BackingField, v21);
        }
        v29 = (int)StringLiteral_1/*""*/;
        *(_QWORD *)(v12 + 16) = StringLiteral_1/*""*/;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v12 + 16), v29, v27, v28);
        v30 = (System_Action_object__o *)sub_1B64C4C(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v30,
          (Il2CppObject *)v12,
          Method_TerminalPramsManager___c__DisplayClass645_0__CheckResumeEffectNT2_b__0__,
          0LL);
        System_Collections_Generic_List_object___ForEach(
          v26,
          (System_Action_T__o *)v30,
          (const MethodInfo_34B0AA8 *)Method_System_Collections_Generic_List_string__ForEach__);
        v34 = *(ServantStatusBattleListViewItem_c **)(v12 + 16);
        if ( !byte_49FC1D5 )
        {
          sub_1B64A00(&TerminalPramsManager_TypeInfo, v31);
          byte_49FC1D5 = 1;
        }
        v35 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v35 = TerminalPramsManager_TypeInfo;
        }
        p_PlayedTerminalEffects_k__BackingField = (ServantStatusBattleListViewItem_o *)&v35->static_fields->_PlayedTerminalEffects_k__BackingField;
        p_PlayedTerminalEffects_k__BackingField->klass = v34;
        sub_1B649A4(p_PlayedTerminalEffects_k__BackingField, (int32_t)v34, v32, v33);
        TerminalPramsManager__Save_SaveData(v37);
      }
    }
  }
}


void __fastcall TerminalPramsManager__ClearEventQuestIds_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC171 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11377/*"SAVEKEY_ClearEventQuestIds"*/, v2);
    byte_49FC171 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB756 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FB756 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11377/*"SAVEKEY_ClearEventQuestIds"*/,
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

  if ( (byte_49FC170 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11379/*"SAVEKEY_ConnectMarkEventId"*/, v2);
    sub_1B64A00(&StringLiteral_11378/*"SAVEKEY_ConnectMarkAnimationId"*/, v3);
    byte_49FC170 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11379/*"SAVEKEY_ConnectMarkEventId"*/, v4->static_fields->ConnectMarkEventId, 0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11378/*"SAVEKEY_ConnectMarkAnimationId"*/,
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
  int32_t v6; // w2
  int32_t v7; // w3
  TerminalPramsManager_c *v8; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t v10; // w1

  if ( (byte_49FC195 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v2);
    sub_1B64A00(&StringLiteral_1/*""*/, v3);
    byte_49FC195 = 1;
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
  if ( !byte_49FC1FA )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v5);
    byte_49FC1FA = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  static_fields->_isQuestRewardSetted_k__BackingField = 0;
  v10 = (int)StringLiteral_1/*""*/;
  static_fields->lastPlayBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->lastPlayBgmName, v10, v6, v7);
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

  if ( (byte_49FC155 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11382/*"SAVEKEY_LastPlayBgmName"*/, v2);
    sub_1B64A00(&StringLiteral_13539/*"TerminalEndTime"*/, v3);
    sub_1B64A00(&StringLiteral_5196/*"Debug_IsOriginalGuestNPC"*/, v4);
    sub_1B64A00(&StringLiteral_11388/*"SAVEKEY_PlayedTerminalEffects"*/, v5);
    sub_1B64A00(&StringLiteral_13535/*"TerminalBeforeEventActivityPoint"*/, v6);
    sub_1B64A00(&StringLiteral_11376/*"SAVEKEY_CampaignDirectBonus"*/, v7);
    sub_1B64A00(&StringLiteral_11383/*"SAVEKEY_LastPlayQuestConsumeType"*/, v8);
    sub_1B64A00(&StringLiteral_13540/*"TerminalEventDailyPointEventId"*/, v9);
    sub_1B64A00(&StringLiteral_5192/*"Debug_GuestNPCInfoList"*/, v10);
    sub_1B64A00(&StringLiteral_13537/*"TerminalBeforeEventSubmarinePointData"*/, v11);
    sub_1B64A00(&StringLiteral_13546/*"TerminalPhaseCnt"*/, v12);
    sub_1B64A00(&StringLiteral_11392/*"SAVEKEY_TerminalConquestInfos"*/, v13);
    sub_1B64A00(&StringLiteral_13554/*"TerminalTimeStatusEventId"*/, v14);
    sub_1B64A00(&StringLiteral_13538/*"TerminalDispState"*/, v15);
    sub_1B64A00(&StringLiteral_11385/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v16);
    sub_1B64A00(&StringLiteral_13541/*"TerminalIsDoneShortcut"*/, v17);
    sub_1B64A00(&StringLiteral_11384/*"SAVEKEY_MapModelClearQuestInfo"*/, v18);
    sub_1B64A00(&StringLiteral_11389/*"SAVEKEY_PlayerGenderType"*/, v19);
    sub_1B64A00(&StringLiteral_11393/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v20);
    sub_1B64A00(&StringLiteral_11377/*"SAVEKEY_ClearEventQuestIds"*/, v21);
    sub_1B64A00(&StringLiteral_11386/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v22);
    sub_1B64A00(&StringLiteral_5197/*"Debug_IsQuestReleaseAll"*/, v23);
    sub_1B64A00(&StringLiteral_5194/*"Debug_IsDummyErrorSelect"*/, v24);
    sub_1B64A00(&StringLiteral_13549/*"TerminalQuestId"*/, v25);
    sub_1B64A00(&StringLiteral_11391/*"SAVEKEY_TerminalConquestInfoDisp"*/, v26);
    sub_1B64A00(&StringLiteral_11396/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v27);
    sub_1B64A00(&StringLiteral_13553/*"TerminalTimeStatusEventDailyPoint"*/, v28);
    sub_1B64A00(&StringLiteral_13558/*"TerminalWarId"*/, v29);
    sub_1B64A00(&StringLiteral_13551/*"TerminalSpotId"*/, v30);
    sub_1B64A00(&StringLiteral_13555/*"TerminalTimeStatusLoopCount"*/, v31);
    sub_1B64A00(&StringLiteral_13536/*"TerminalBeforeEventActivityPointGauge"*/, v32);
    sub_1B64A00(&StringLiteral_11375/*"SAVEKEY_BlankEarthSpotId"*/, v33);
    sub_1B64A00(&StringLiteral_11380/*"SAVEKEY_DataLostBattleAutoReset"*/, v34);
    sub_1B64A00(&StringLiteral_5195/*"Debug_IsOriginalBattle"*/, v35);
    sub_1B64A00(&StringLiteral_13559/*"TerminalWarStartedIds"*/, v36);
    sub_1B64A00(&StringLiteral_5191/*"Debug_BattleEnemyList"*/, v37);
    sub_1B64A00(&StringLiteral_11379/*"SAVEKEY_ConnectMarkEventId"*/, v38);
    sub_1B64A00(&StringLiteral_13557/*"TerminalTransitionInfoVoiceAssetName"*/, v39);
    sub_1B64A00(&StringLiteral_11378/*"SAVEKEY_ConnectMarkAnimationId"*/, v40);
    sub_1B64A00(&StringLiteral_11387/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v41);
    sub_1B64A00(&StringLiteral_13544/*"TerminalLastPlayedQuestId"*/, v42);
    sub_1B64A00(&StringLiteral_5193/*"Debug_IsBuildInfoDisp"*/, v43);
    sub_1B64A00(&StringLiteral_13556/*"TerminalTransitionInfoMissionId"*/, v44);
    sub_1B64A00(&StringLiteral_11395/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v45);
    byte_49FC155 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13538/*"TerminalDispState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13558/*"TerminalWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13551/*"TerminalSpotId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13549/*"TerminalQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13544/*"TerminalLastPlayedQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13546/*"TerminalPhaseCnt"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13539/*"TerminalEndTime"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13541/*"TerminalIsDoneShortcut"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13559/*"TerminalWarStartedIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5197/*"Debug_IsQuestReleaseAll"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5194/*"Debug_IsDummyErrorSelect"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5193/*"Debug_IsBuildInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5195/*"Debug_IsOriginalBattle"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5196/*"Debug_IsOriginalGuestNPC"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5191/*"Debug_BattleEnemyList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5192/*"Debug_GuestNPCInfoList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13554/*"TerminalTimeStatusEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13555/*"TerminalTimeStatusLoopCount"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13540/*"TerminalEventDailyPointEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13553/*"TerminalTimeStatusEventDailyPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13556/*"TerminalTransitionInfoMissionId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13557/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13535/*"TerminalBeforeEventActivityPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13536/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13537/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11392/*"SAVEKEY_TerminalConquestInfos"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11391/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11393/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11382/*"SAVEKEY_LastPlayBgmName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11383/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11388/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11385/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11386/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11387/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11396/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11379/*"SAVEKEY_ConnectMarkEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11378/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11395/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11377/*"SAVEKEY_ClearEventQuestIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11384/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11380/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11389/*"SAVEKEY_PlayerGenderType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11376/*"SAVEKEY_CampaignDirectBonus"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11375/*"SAVEKEY_BlankEarthSpotId"*/, 0LL);
  v46 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__InitParameter((const MethodInfo *)v46);
  TerminalPramsManager__DeleteClearDatas(v47);
  TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(v48);
  TerminalPramsManager__DeleteQuestRandomGroupList(v49);
}


void __fastcall TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  ServantStatusBattleListViewItem_o *p_EventRaidDefeatedEffectInfo_k__BackingField; // x0

  if ( (byte_49FC196 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11381/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v4);
    byte_49FC196 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1FB )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC1FB = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_EventRaidDefeatedEffectInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v5->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  p_EventRaidDefeatedEffectInfo_k__BackingField->klass = 0LL;
  sub_1B649A4(p_EventRaidDefeatedEffectInfo_k__BackingField, 0, v2, v3);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11381/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, 0LL);
}


void __fastcall TerminalPramsManager__DeleteQuestRandomGroupList(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  ServantStatusBattleListViewItem_o *p_QuestRandomGroupList_k__BackingField; // x0

  if ( (byte_49FC19B & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11390/*"SAVEKEY_QuestRandomGroupList"*/, v4);
    byte_49FC19B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1FD )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC1FD = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_QuestRandomGroupList_k__BackingField = (ServantStatusBattleListViewItem_o *)&v5->static_fields->_QuestRandomGroupList_k__BackingField;
  p_QuestRandomGroupList_k__BackingField->klass = 0LL;
  sub_1B649A4(p_QuestRandomGroupList_k__BackingField, 0, v2, v3);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11390/*"SAVEKEY_QuestRandomGroupList"*/, 0LL);
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

  if ( (byte_49FC15E & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_13540/*"TerminalEventDailyPointEventId"*/, v2);
    sub_1B64A00(&StringLiteral_13553/*"TerminalTimeStatusEventDailyPoint"*/, v3);
    byte_49FC15E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1E0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC1E0 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13540/*"TerminalEventDailyPointEventId"*/,
    v4->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_49FC1E1 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v5);
    byte_49FC1E1 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  BeforeTimeEventDailyPoint_k__BackingField = v6->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v7 = System_Int64__ToString((int64_t)&BeforeTimeEventDailyPoint_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13553/*"TerminalTimeStatusEventDailyPoint"*/, v7, 0LL);
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

  if ( (byte_49FC15D & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_13554/*"TerminalTimeStatusEventId"*/, v2);
    sub_1B64A00(&StringLiteral_13555/*"TerminalTimeStatusLoopCount"*/, v3);
    byte_49FC15D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FBF13 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FBF13 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13554/*"TerminalTimeStatusEventId"*/,
    v4->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_49FBF14 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v5);
    byte_49FBF14 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13555/*"TerminalTimeStatusLoopCount"*/,
    v6->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


float __fastcall TerminalPramsManager__GetAutoIntpTime(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t targetFrameRate; // w0

  if ( (byte_49FC150 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Application_TypeInfo, v1);
    byte_49FC150 = 1;
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

  if ( (byte_49FC182 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, method);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v3);
    byte_49FC182 = 1;
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
      sub_1B64C5C(v6, v7);
  }
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         folderLastIdxs,
         warId,
         &value,
         (const MethodInfo_311EE40 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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

  if ( (byte_49FC151 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v2);
    byte_49FC151 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB886 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v2);
    byte_49FB886 = 1;
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
  if ( !byte_49FBD76 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v2);
    byte_49FBD76 = 1;
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

  if ( (byte_49FC188 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC188 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v3);
  if ( !QuestFocusStateManager )
    sub_1B64C5C(0LL, v5);
  return QuestFocusStateManager__GetFocusState(QuestFocusStateManager, questId, 0LL);
}


void __fastcall TerminalPramsManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_49FC157 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC157 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__InitParameter((const MethodInfo *)v2);
}


void __fastcall TerminalPramsManager__InitMessageWindowData(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  struct System_String_o *v6; // x20
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  TerminalPramsManager_c *v11; // x0
  struct TerminalPramsManager_StaticFields *v12; // x0

  if ( (byte_49FC180 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_1/*""*/, v4);
    byte_49FC180 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FABC0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FABC0 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsDispOnly_k__BackingField = 0;
  v6 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_49FBD62 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49FBD62 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = v6;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_QuestWindowMessage_k__BackingField,
    (int32_t)v6,
    v2,
    v3);
  if ( !byte_49FBD61 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v8);
    byte_49FBD61 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_MessageDispType_k__BackingField = 0;
  if ( !byte_49FABBF )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v8);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49FABBF = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v12 = v11->static_fields;
  v12->_BattleSetupKeep_k__BackingField = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v12->_BattleSetupKeep_k__BackingField, 0, v9, v10);
}


void __fastcall TerminalPramsManager__InitParameter(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *v11; // x0
  int32_t v12; // w1
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  TerminalPramsManager_c *v16; // x0
  ServantStatusBattleListViewItem_o *p_timeStatusRecord_k__BackingField; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  TerminalPramsManager_c *v21; // x0
  ServantStatusBattleListViewItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  int32_t v23; // w1
  ServantStatusBattleListViewItem_o *p_lastPlayBgmName; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  TerminalPramsManager_c *v30; // x0
  struct TerminalPramsManager_StaticFields *v31; // x0
  __int64 v32; // x1
  TerminalPramsManager_c *v33; // x0
  const MethodInfo *v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  TerminalPramsManager_c *v38; // x0
  ServantStatusBattleListViewItem_c *v39; // x20
  ServantStatusBattleListViewItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  TerminalPramsManager_c *v44; // x0
  struct TerminalPramsManager_StaticFields *v45; // x8
  ServantStatusBattleListViewItem_c *v46; // x20
  ServantStatusBattleListViewItem_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  __int64 v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  TerminalPramsManager_c *v51; // x0
  struct TerminalPramsManager_StaticFields *v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  int32_t v55; // w3
  TerminalPramsManager_c *v56; // x0
  struct TerminalPramsManager_StaticFields *v57; // x0
  __int64 v58; // x1
  TerminalPramsManager_c *v59; // x0

  if ( (byte_49FC156 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_1/*""*/, v4);
    byte_49FC156 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB75E )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FB75E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_49FB75D )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49FB75D = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_SpotId_k__BackingField = 0;
  if ( !byte_49FB758 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49FB758 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_QuestId_k__BackingField = 0;
  if ( !byte_49FBD93 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49FBD93 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_LastPlayedQuestId_k__BackingField = 0;
  if ( !byte_49FC1CB )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49FC1CB = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
  if ( !byte_49FBD94 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49FBD94 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = 0;
  if ( !byte_49FBA6A )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49FBA6A = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_AfterActionFocusQuestId_k__BackingField = 0;
  if ( !byte_49FBB7A )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49FBB7A = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
  if ( !byte_49FA8E7 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49FA8E7 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  if ( !byte_49FBB7B )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49FBB7B = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
  if ( !byte_49FBD8C )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49FBD8C = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 0;
  if ( !byte_49FBD8A )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49FBD8A = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
  if ( !byte_49FB434 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49FB434 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField, 0, v2, v3);
  if ( !byte_49FB75C )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v7);
    byte_49FB75C = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_PhaseCnt_k__BackingField = 0;
  if ( !byte_49FB759 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v7);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49FB759 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_EndTime_k__BackingField = 0LL;
  if ( !byte_49FB75B )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v7);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49FB75B = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v11 = v10->static_fields;
  v11->_IsDoneShortcut_k__BackingField = 0;
  v12 = (int)StringLiteral_1/*""*/;
  v11->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v11->mTerminalWarStartedIds, v12, v8, v9);
  if ( !byte_49FC1CC )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v13);
    byte_49FC1CC = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->mDebug_IsQuestReleaseAll = 0;
  if ( !byte_49FC1CD )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v13);
    v16 = TerminalPramsManager_TypeInfo;
    byte_49FC1CD = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->mDebug_IsDummyErrorSelect = 0;
  if ( !byte_49FC1CE )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v13);
    v16 = TerminalPramsManager_TypeInfo;
    byte_49FC1CE = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->mDebug_IsBuildInfoDisp = 0;
  if ( !byte_49FBD8F )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v13);
    v16 = TerminalPramsManager_TypeInfo;
    byte_49FBD8F = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_TimeStatusEventId_k__BackingField = 0;
  if ( !byte_49FBD90 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v13);
    v16 = TerminalPramsManager_TypeInfo;
    byte_49FBD90 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_TimeStatusLoopCount_k__BackingField = 0;
  if ( !byte_49FC1CF )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v13);
    v16 = TerminalPramsManager_TypeInfo;
    byte_49FC1CF = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  p_timeStatusRecord_k__BackingField = (ServantStatusBattleListViewItem_o *)&v16->static_fields->_timeStatusRecord_k__BackingField;
  p_timeStatusRecord_k__BackingField->klass = 0LL;
  sub_1B649A4(p_timeStatusRecord_k__BackingField, 0, v14, v15);
  if ( !byte_49FC1D0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v18);
    byte_49FC1D0 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  v21->static_fields->_EventDailyPointEventId_k__BackingField = 0;
  if ( !byte_49FC1D1 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v18);
    v21 = TerminalPramsManager_TypeInfo;
    byte_49FC1D1 = 1;
  }
  if ( !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = TerminalPramsManager_TypeInfo;
  }
  v21->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = 0LL;
  if ( !byte_49FC1D2 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v18);
    v21 = TerminalPramsManager_TypeInfo;
    byte_49FC1D2 = 1;
  }
  if ( !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = TerminalPramsManager_TypeInfo;
  }
  v21->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
  if ( !byte_49FC1D3 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v18);
    v21 = TerminalPramsManager_TypeInfo;
    byte_49FC1D3 = 1;
  }
  if ( !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = TerminalPramsManager_TypeInfo;
  }
  v21->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
  if ( !byte_49FB888 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v18);
    v21 = TerminalPramsManager_TypeInfo;
    byte_49FB888 = 1;
  }
  if ( !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = TerminalPramsManager_TypeInfo;
  }
  p_BeforeEventSubmarineSaveData_k__BackingField = (ServantStatusBattleListViewItem_o *)&v21->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  p_BeforeEventSubmarineSaveData_k__BackingField->klass = 0LL;
  sub_1B649A4(p_BeforeEventSubmarineSaveData_k__BackingField, 0, v19, v20);
  v23 = (int)StringLiteral_1/*""*/;
  p_lastPlayBgmName = (ServantStatusBattleListViewItem_o *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayBgmName;
  p_lastPlayBgmName->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  sub_1B649A4(p_lastPlayBgmName, v23, v25, v26);
  v30 = TerminalPramsManager_TypeInfo;
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayQuestConsumeAp = 0LL;
  if ( !byte_49FC1D4 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v27);
    v30 = TerminalPramsManager_TypeInfo;
    byte_49FC1D4 = 1;
  }
  if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30);
    v30 = TerminalPramsManager_TypeInfo;
  }
  v31 = v30->static_fields;
  v31->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v31->_SpecifiedChangeSceneInfo_k__BackingField, 0, v28, v29);
  if ( !byte_49FBF23 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v32);
    byte_49FBF23 = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v33->static_fields->_EventBoardGameSquareIndex_k__BackingField = 0;
  if ( !byte_49FBF25 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v32);
    v33 = TerminalPramsManager_TypeInfo;
    byte_49FBF25 = 1;
  }
  if ( !v33->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v33);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v33->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = 0;
  if ( !byte_49FBF27 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v32);
    v33 = TerminalPramsManager_TypeInfo;
    byte_49FBF27 = 1;
  }
  if ( !v33->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v33);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v33->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
  if ( !byte_49FC1C8 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v32);
    v33 = TerminalPramsManager_TypeInfo;
    byte_49FC1C8 = 1;
  }
  if ( !v33->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v33);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v33->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v33);
  TerminalPramsManager__ResetResumeScriptWithMap(v34);
  if ( !byte_49FBD7D )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v35);
    byte_49FBD7D = 1;
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v38 = TerminalPramsManager_TypeInfo;
  }
  v38->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
  v39 = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  if ( !byte_49FC1D5 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v35);
    v38 = TerminalPramsManager_TypeInfo;
    byte_49FC1D5 = 1;
  }
  if ( !v38->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v38);
    v38 = TerminalPramsManager_TypeInfo;
  }
  p_PlayedTerminalEffects_k__BackingField = (ServantStatusBattleListViewItem_o *)&v38->static_fields->_PlayedTerminalEffects_k__BackingField;
  p_PlayedTerminalEffects_k__BackingField->klass = v39;
  sub_1B649A4(p_PlayedTerminalEffects_k__BackingField, (int32_t)v39, v36, v37);
  if ( !byte_49FBFFA )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    byte_49FBFFA = 1;
  }
  v44 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = 0;
  if ( !byte_49FBFFB )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49FBFFB = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = 0;
  if ( !byte_49FBF16 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49FBF16 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v45 = v44->static_fields;
  v45->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  *(_QWORD *)&v45->ConnectMarkEventId = 0LL;
  if ( !byte_49F9DCF )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49F9DCF = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField = 0;
  if ( !byte_49FC1D6 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49FC1D6 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_isFortificationCheck_k__BackingField = 0;
  if ( !byte_49FC1D7 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49FC1D7 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !byte_49FC1D8 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49FC1D8 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !byte_49FBF1D )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49FBF1D = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_49FBD83 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49FBD83 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_49FBF1B )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49FBF1B = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_49FBF1C )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49FBF1C = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_49FBF1A )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49FBF1A = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_49FBF1D )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49FBF1D = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_49FBF10 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49FBF10 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 0.0;
  if ( !byte_49FC1D9 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49FC1D9 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  if ( !byte_49FBB78 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49FBB78 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_49FA28C )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49FA28C = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_PlayerGenderType_k__BackingField = 0;
  if ( !byte_49FC1DA )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49FC1DA = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  v46 = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  if ( !byte_49FBF21 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49FBF21 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  p_SceneMoveQuestClearedInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v44->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
  p_SceneMoveQuestClearedInfo_k__BackingField->klass = v46;
  sub_1B649A4(p_SceneMoveQuestClearedInfo_k__BackingField, (int32_t)v46, v42, v43);
  if ( !byte_49FC1DB )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v48);
    byte_49FC1DB = 1;
  }
  v51 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v51 = TerminalPramsManager_TypeInfo;
  }
  v52 = v51->static_fields;
  v52->_CampaignBonus_k__BackingField = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v52->_CampaignBonus_k__BackingField, 0, v49, v50);
  if ( !byte_49FC1DC )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v53);
    byte_49FC1DC = 1;
  }
  v56 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v56 = TerminalPramsManager_TypeInfo;
  }
  v57 = v56->static_fields;
  v57->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v57->_CampaignDirectBonus_k__BackingField, 0, v54, v55);
  if ( !byte_49FC1DD )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v58);
    byte_49FC1DD = 1;
  }
  v59 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v59 = TerminalPramsManager_TypeInfo;
  }
  v59->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
}


void __fastcall TerminalPramsManager__InitTipsArchiveScrollValueList(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  unsigned __int64 i; // x20
  struct System_Single_array *TipsArchiveScrollValueList; // x8
  struct System_Single_array *v5; // x8
  char *v6; // x8

  if ( (byte_49FC1A0 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC1A0 = 1;
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
      sub_1B64C5C(v2, v1);
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
      sub_1B64C64(v2, v1);
    v6 = (char *)v5 + 4 * i;
    *((_DWORD *)v6 + 8) = 0;
  }
}


bool __fastcall TerminalPramsManager__IsAuto(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_49FC144 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC144 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB886 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FB886 = 1;
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
  if ( !byte_49FC1C5 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC1C5 = 1;
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

  if ( (byte_49FC146 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_EventDetailMaster___, v1);
    sub_1B64A00(&Method_DataManager_GetMasterData_WarMaster___, v2);
    sub_1B64A00(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_1B64A00(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v6);
    byte_49FC146 = 1;
  }
  entity = 0LL;
  v14 = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB886 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FB886 = 1;
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
  if ( !byte_49FB757 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FB757 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_WarId_k__BackingField < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB757 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v10);
    byte_49FB757 = 1;
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
          (const MethodInfo_30D67EC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !entity)
    || !Instance )
  {
LABEL_34:
    sub_1B64C5C(Instance, v10);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v14,
          (int32_t)entity[6].klass,
          (const MethodInfo_30D67EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)v14;
  if ( !v14 )
    goto LABEL_34;
  return EventDetailEntity__IsTimeProgressEvent((EventDetailEntity_o *)v14, 0LL);
}


void __fastcall TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC173 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11380/*"SAVEKEY_DataLostBattleAutoReset"*/, v2);
    byte_49FC173 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FBF19 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FBF19 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11380/*"SAVEKEY_DataLostBattleAutoReset"*/,
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

  if ( (byte_49FC19E & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, method);
    sub_1B64A00(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v3);
    sub_1B64A00(&Method_DataManager_GetMaster_QuestMaster___, v4);
    sub_1B64A00(&DataManager_TypeInfo, v5);
    sub_1B64A00(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v6);
    byte_49FC19E = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_QuestMaster___);
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
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !entity
    || (v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
        Master_object = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0LL),
        !v9) )
  {
LABEL_20:
    sub_1B64C5C(Master_object, v8);
  }
  Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v9,
                                     &v13,
                                     (int32_t)Master_object,
                                     (const MethodInfo_30D67EC *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
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

  if ( (byte_49FC190 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, method);
    sub_1B64A00(&Method_DataManager_GetMasterData_WarMaster___, v3);
    sub_1B64A00(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_1B64A00(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FC190 = 1;
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
            (const MethodInfo_2E5559C *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_WarMaster___);
        if ( Instance )
        {
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       &entity,
                                       warId,
                                       (const MethodInfo_30D67EC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( entity )
            return LODWORD(entity[6].klass) == 0;
        }
      }
      sub_1B64C5C(Instance, v11);
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

  if ( (byte_49FC191 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1B64A00(&Method_DataManager_GetMasterData_SpotMaster___, v3);
    sub_1B64A00(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v4);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v6);
    byte_49FC191 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_SpotMaster___),
        !entity)
    || (v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (Il2CppObject *)QuestEntity__getSpotId(entity, 0LL),
        !v9) )
  {
LABEL_16:
    sub_1B64C5C(Instance, v8);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               v9,
                               &v13,
                               (int32_t)Instance,
                               (const MethodInfo_30D67EC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
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

  if ( (byte_49FC18F & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, method);
    sub_1B64A00(&Method_System_Linq_Enumerable_Contains_int___, v3);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v4);
    byte_49FC18F = 1;
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
         (const MethodInfo_2E5559C *)Method_System_Linq_Enumerable_Contains_int___) )
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

  if ( (byte_49FC183 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_int__Contains__, method);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v3);
    byte_49FC183 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v4->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1B64C5C(0LL, method);
  return System_Collections_Generic_HashSet_int___Contains(
           loginQuestNotifiedList,
           questId,
           (const MethodInfo_3366994 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC16C & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11386/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v2);
    byte_49FC16C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FBD81 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FBD81 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11386/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v3->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC16B & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11385/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v2);
    byte_49FC16B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FBD80 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FBD80 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11385/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v3->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectNt2AfterAction_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC16D & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11387/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v2);
    byte_49FC16D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FBF15 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FBF15 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11387/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
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

  if ( (byte_49FC19A & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, *(_QWORD *)&day);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v6);
    byte_49FC19A = 1;
  }
  value = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1FC )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    byte_49FC1FC = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_QWORD *)&v7[2].fields._entries->m_Items[17].fields.hashCode;
  if ( !v8 || (v7 = *(System_Collections_Generic_Dictionary_int__object__o **)(v8 + 16)) == 0LL )
    sub_1B64C5C(v7, *(_QWORD *)&day);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         v7,
         eventId,
         &value,
         (const MethodInfo_3127A04 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v9 = (char)value;
    if ( value )
      v9 = System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             day,
             (const MethodInfo_3492B48 *)Method_System_Collections_Generic_List_int__Contains__);
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

  if ( (byte_49FC17C & 1) == 0 )
  {
    sub_1B64A00(&ScrTerminalListTop_TypeInfo, v1);
    sub_1B64A00(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v2);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v3);
    byte_49FC17C = 1;
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v9 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v9 )
LABEL_34:
    sub_1B64C5C(Instance, v7);
  if ( !clsQuestCheck__IsWarClear(
          v9,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
          0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB754 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v10);
      byte_49FB754 = 1;
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
      if ( !byte_49FB75F )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v10);
        byte_49FB75F = 1;
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
  if ( (byte_49FC17A & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_43/*"\n"*/, v2);
    sub_1B64A00(&StringLiteral_89/*"\r\n"*/, v3);
    byte_49FC17A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1E4 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC1E4 = 1;
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
  if ( !byte_49FC1E4 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v5);
    byte_49FC1E4 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  PlayedTerminalEffects_k__BackingField = v7->static_fields->_PlayedTerminalEffects_k__BackingField;
  if ( !PlayedTerminalEffects_k__BackingField
    || (PlayedTerminalEffects_k__BackingField = System_String__Replace_61404756(
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
    sub_1B64C5C(PlayedTerminalEffects_k__BackingField, v5);
  }
  klass = PlayedTerminalEffects_k__BackingField[1].klass;
  v10 = PlayedTerminalEffects_k__BackingField;
  if ( (int)klass >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)klass )
        sub_1B64C64(PlayedTerminalEffects_k__BackingField, v5);
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
  if ( (byte_49FC17E & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_43/*"\n"*/, v2);
    sub_1B64A00(&StringLiteral_89/*"\r\n"*/, v3);
    byte_49FC17E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  mTerminalWarStartedIds = v4->static_fields->mTerminalWarStartedIds;
  if ( !mTerminalWarStartedIds
    || (mTerminalWarStartedIds = System_String__Replace_61404756(
                                   mTerminalWarStartedIds,
                                   (System_String_o *)StringLiteral_89/*"\r\n"*/,
                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                   0LL)) == 0LL
    || (mTerminalWarStartedIds = (System_String_o *)System_String__Split(mTerminalWarStartedIds, 0xAu, 0, 0LL)) == 0LL )
  {
    sub_1B64C5C(mTerminalWarStartedIds, method);
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
        sub_1B64C64(mTerminalWarStartedIds, method);
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

  if ( (byte_49FC16A & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_13542/*"TerminalLastPanelEventPoint"*/, v2);
    byte_49FC16A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13542/*"TerminalLastPanelEventPoint"*/, v3->static_fields->panelEventPoint, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayBgmNameSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC168 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11382/*"SAVEKEY_LastPlayBgmName"*/, v2);
    byte_49FC168 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11382/*"SAVEKEY_LastPlayBgmName"*/, v3->static_fields->lastPlayBgmName, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC169 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11383/*"SAVEKEY_LastPlayQuestConsumeType"*/, v2);
    byte_49FC169 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11383/*"SAVEKEY_LastPlayQuestConsumeType"*/,
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
  Il2CppObject *String_69095752; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *v11; // x19
  TerminalPramsManager_c *v12; // x0
  ServantStatusBattleListViewItem_o *p_mQuestClearHeroineInfo; // x0
  __int64 v14; // x0
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppClass *klass; // x8
  const char *name; // x9
  int32_t v20; // w2
  int32_t v21; // w3
  QuestClearHeroineInfo_o *Load; // x20
  TerminalPramsManager_c *v23; // x0
  ServantStatusBattleListViewItem_o *v24; // x0
  __int64 v25; // x0
  char monitor; // w20
  TerminalPramsManager_c *v27; // x8
  char v28; // w21
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  _QWORD *v30; // x10
  struct QuestRewardInfo_array *v31; // x20
  __int64 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppClass *v36; // x8
  TerminalPramsManager_c *v37; // x0
  Il2CppClass *v38; // x20
  ServantStatusBattleListViewItem_o *p_mQuestPhaseRewardInfos; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  TerminalPramsManager_c *v44; // x8
  struct TerminalPramsManager_StaticFields *v45; // x9
  _QWORD *v46; // x9
  struct UserSuperBossEntity_array *v47; // x20
  TerminalPramsManager_c *v48; // x0
  struct TerminalPramsManager_StaticFields *v49; // x0
  __int64 v50; // x0
  __int64 v51; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  Il2CppClass *v54; // x8
  Il2CppClass *v55; // x20
  TerminalPramsManager_c *v56; // x0
  struct TerminalPramsManager_StaticFields *v57; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  int32_t v60; // w2
  int32_t v61; // w3
  int *v62; // x8
  ServantStatusBattleListViewItem_c *v63; // x20
  TerminalPramsManager_c *v64; // x0
  ServantStatusBattleListViewItem_o *p_eventPointWinReward_k__BackingField; // x0
  __int64 v66; // x0
  __int64 v67; // x1
  int32_t v68; // w2
  int32_t v69; // w3
  int32_t v70; // w20
  TerminalPramsManager_c *v71; // x8
  int *v72; // x9
  ServantStatusBattleListViewItem_c *v73; // x20
  TerminalPramsManager_c *v74; // x0
  ServantStatusBattleListViewItem_o *p_eventRaceBoost_k__BackingField; // x0
  __int64 v76; // x0
  __int64 v77; // x1
  int32_t v78; // w2
  int32_t v79; // w3
  Il2CppClass *v80; // x8
  Il2CppClass *v81; // x20
  TerminalPramsManager_c *v82; // x0
  ServantStatusBattleListViewItem_o *p_questClearCostumeRelease_k__BackingField; // x0
  __int64 v84; // x0
  __int64 v85; // x1
  int32_t v86; // w2
  int32_t v87; // w3
  _QWORD *v88; // x8
  ServantStatusBattleListViewItem_c *v89; // x20
  TerminalPramsManager_c *v90; // x0
  ServantStatusBattleListViewItem_o *p_questClearCostumeGet_k__BackingField; // x0
  __int64 v92; // x0
  __int64 v93; // x1
  int32_t v94; // w2
  int32_t v95; // w3
  Il2CppClass *v96; // x8
  Il2CppClass *v97; // x20
  TerminalPramsManager_c *v98; // x0
  ServantStatusBattleListViewItem_o *p_eventTowerReward_k__BackingField; // x0
  __int64 v100; // x0
  __int64 v101; // x1
  int32_t v102; // w2
  int32_t v103; // w3
  _QWORD *v104; // x8
  __int64 v105; // x9
  __int64 v106; // x9
  ServantStatusBattleListViewItem_c *v107; // x20
  TerminalPramsManager_c *v108; // x0
  ServantStatusBattleListViewItem_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  __int64 v110; // x0
  __int64 v111; // x1
  int32_t v112; // w2
  int32_t v113; // w3
  Il2CppClass *v114; // x8
  Il2CppClass *v115; // x20
  TerminalPramsManager_c *v116; // x0
  ServantStatusBattleListViewItem_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  __int64 v118; // x0
  __int64 v119; // x1
  int32_t v120; // w2
  int32_t v121; // w3
  _QWORD *v122; // x8
  ServantStatusBattleListViewItem_c *v123; // x20
  TerminalPramsManager_c *v124; // x0
  ServantStatusBattleListViewItem_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  __int64 v126; // x0
  __int64 v127; // x1
  int32_t v128; // w2
  int32_t v129; // w3
  char v130; // w20
  TerminalPramsManager_c *v131; // x8
  _QWORD *v132; // x9
  ServantStatusBattleListViewItem_c *v133; // x20
  TerminalPramsManager_c *v134; // x0
  ServantStatusBattleListViewItem_o *p_warClearReward_k__BackingField; // x0
  __int64 v136; // x0
  __int64 v137; // x1
  int32_t v138; // w2
  int32_t v139; // w3
  int32_t v140; // w20
  TerminalPramsManager_c *v141; // x8
  char v142; // w21
  struct TerminalPramsManager_StaticFields *v143; // x9
  _QWORD *v144; // x10
  struct BattleDropItem_array *v145; // x20
  __int64 v146; // x0
  __int64 v147; // x1
  int32_t v148; // w2
  int32_t v149; // w3
  Il2CppClass *v150; // x8
  TerminalPramsManager_c *v151; // x0
  Il2CppClass *v152; // x20
  ServantStatusBattleListViewItem_o *p_mResultEventPanelRewardInfos; // x0
  __int64 v154; // x1
  int32_t v155; // w2
  int32_t v156; // w3
  TerminalPramsManager_c *v157; // x0
  Il2CppClass *v158; // x20
  ServantStatusBattleListViewItem_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v160; // x1
  char v161; // w20
  TerminalPramsManager_c *v162; // x8
  int32_t monitor_high; // w21
  TerminalPramsManager_c *v164; // x8
  TerminalPramsManager_c *v165; // x0

  if ( (byte_49FC194 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_1B64A00(&Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___, v2);
    sub_1B64A00(&JsonManager_TypeInfo, v3);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v4);
    byte_49FC194 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FBD73 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FBD73 = 1;
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
      String_69095752 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69095752(
                                          v7->static_fields->SAVEKEY_CLEAR_REWARD_DISP,
                                          0LL);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v11 = JsonManager__Deserialize_object_(
              String_69095752,
              (const MethodInfo_2EA1664 *)Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
      v12 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v12 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestClearHeroineInfo = (ServantStatusBattleListViewItem_o *)&v12->static_fields->mQuestClearHeroineInfo;
      p_mQuestClearHeroineInfo->klass = 0LL;
      sub_1B649A4(p_mQuestClearHeroineInfo, 0, v9, v10);
      if ( !v11 )
        sub_1B64C5C(v14, v15);
      klass = v11[1].klass;
      if ( !klass )
        sub_1B64C5C(v14, v15);
      name = klass->_1.name;
      if ( name && *((int *)name + 8) >= 1 )
      {
        Load = TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(
                 (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)v11[1].klass,
                 v15);
        v23 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v23 = TerminalPramsManager_TypeInfo;
        }
        v24 = (ServantStatusBattleListViewItem_o *)&v23->static_fields->mQuestClearHeroineInfo;
        v24->klass = (ServantStatusBattleListViewItem_c *)Load;
        sub_1B649A4(v24, (int32_t)Load, v20, v21);
      }
      v25 = (__int64)TerminalPramsManager_TypeInfo;
      monitor = (char)v11[2].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FBA61 )
      {
        v25 = sub_1B64A00(&TerminalPramsManager_TypeInfo, v15);
        byte_49FBA61 = 1;
      }
      v27 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v27 = TerminalPramsManager_TypeInfo;
      }
      v27->static_fields->_IsQuestClear_k__BackingField = monitor;
      v28 = BYTE1(v11[2].monitor);
      if ( !byte_49FBA62 )
      {
        v25 = sub_1B64A00(&TerminalPramsManager_TypeInfo, v15);
        v27 = TerminalPramsManager_TypeInfo;
        byte_49FBA62 = 1;
      }
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v27->static_fields;
      static_fields->_IsPhaseClear_k__BackingField = v28;
      v30 = v11[1].monitor;
      if ( !v30 )
        sub_1B64C5C(v25, v15);
      if ( v30[3] )
        v31 = (struct QuestRewardInfo_array *)v11[1].monitor;
      else
        v31 = 0LL;
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        static_fields = TerminalPramsManager_TypeInfo->static_fields;
      }
      static_fields->mQuestRewardInfos = v31;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->mQuestRewardInfos, (int32_t)v31, v16, v17);
      v36 = v11[2].klass;
      if ( !v36 )
        sub_1B64C5C(v32, v33);
      v37 = TerminalPramsManager_TypeInfo;
      if ( v36->_1.namespaze )
        v38 = v11[2].klass;
      else
        v38 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v37 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestPhaseRewardInfos = (ServantStatusBattleListViewItem_o *)&v37->static_fields->mQuestPhaseRewardInfos;
      p_mQuestPhaseRewardInfos->klass = (ServantStatusBattleListViewItem_c *)v38;
      sub_1B649A4(p_mQuestPhaseRewardInfos, (int32_t)v38, v34, v35);
      v44 = TerminalPramsManager_TypeInfo;
      v45 = TerminalPramsManager_TypeInfo->static_fields;
      *(_QWORD *)&v45->clearLastBattleRaidId = *(void **)((char *)&v11[2].monitor + 4);
      v45->joinGroupId = HIDWORD(v11[3].klass);
      v46 = v11[3].monitor;
      if ( !v46 )
        sub_1B64C5C(v40, v41);
      if ( v46[3] )
        v47 = (struct UserSuperBossEntity_array *)v11[3].monitor;
      else
        v47 = 0LL;
      if ( !v44->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v44);
      if ( !byte_49FC1F2 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
        byte_49FC1F2 = 1;
      }
      v48 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v48 = TerminalPramsManager_TypeInfo;
      }
      v49 = v48->static_fields;
      v49->_oldSuperBoss_k__BackingField = v47;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v49->_oldSuperBoss_k__BackingField, (int32_t)v47, v42, v43);
      v54 = v11[4].klass;
      if ( !v54 )
        sub_1B64C5C(v50, v51);
      if ( v54->_1.namespaze )
        v55 = v11[4].klass;
      else
        v55 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FC1F3 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v51);
        byte_49FC1F3 = 1;
      }
      v56 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v56 = TerminalPramsManager_TypeInfo;
      }
      v57 = v56->static_fields;
      v57->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v55;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v57->_oldPersonalBoss_k__BackingField, (int32_t)v55, v52, v53);
      v62 = (int *)v11[4].monitor;
      if ( !v62 )
        sub_1B64C5C(v58, v59);
      if ( v62[4] <= 0 )
        v63 = 0LL;
      else
        v63 = (ServantStatusBattleListViewItem_c *)v11[4].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FC1EC )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v59);
        byte_49FC1EC = 1;
      }
      v64 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v64 = TerminalPramsManager_TypeInfo;
      }
      p_eventPointWinReward_k__BackingField = (ServantStatusBattleListViewItem_o *)&v64->static_fields->_eventPointWinReward_k__BackingField;
      p_eventPointWinReward_k__BackingField->klass = v63;
      sub_1B649A4(p_eventPointWinReward_k__BackingField, (int32_t)v63, v60, v61);
      v70 = (int32_t)v11[5].klass;
      if ( !byte_49FC1ED )
      {
        v66 = sub_1B64A00(&TerminalPramsManager_TypeInfo, v67);
        byte_49FC1ED = 1;
      }
      v71 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v71 = TerminalPramsManager_TypeInfo;
      }
      v71->static_fields->_eventPointWinType_k__BackingField = v70;
      v72 = (int *)v11[5].monitor;
      if ( !v72 )
        sub_1B64C5C(v66, v67);
      if ( v72[4] <= 0 )
        v73 = 0LL;
      else
        v73 = (ServantStatusBattleListViewItem_c *)v11[5].monitor;
      if ( !v71->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v71);
      if ( !byte_49FBF22 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v67);
        byte_49FBF22 = 1;
      }
      v74 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v74 = TerminalPramsManager_TypeInfo;
      }
      p_eventRaceBoost_k__BackingField = (ServantStatusBattleListViewItem_o *)&v74->static_fields->_eventRaceBoost_k__BackingField;
      p_eventRaceBoost_k__BackingField->klass = v73;
      sub_1B649A4(p_eventRaceBoost_k__BackingField, (int32_t)v73, v68, v69);
      v80 = v11[6].klass;
      if ( !v80 )
        sub_1B64C5C(v76, v77);
      if ( v80->_1.namespaze )
        v81 = v11[6].klass;
      else
        v81 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FBFF9 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v77);
        byte_49FBFF9 = 1;
      }
      v82 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v82 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeRelease_k__BackingField = (ServantStatusBattleListViewItem_o *)&v82->static_fields->_questClearCostumeRelease_k__BackingField;
      p_questClearCostumeRelease_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v81;
      sub_1B649A4(p_questClearCostumeRelease_k__BackingField, (int32_t)v81, v78, v79);
      v88 = v11[6].monitor;
      if ( !v88 )
        sub_1B64C5C(v84, v85);
      if ( v88[3] )
        v89 = (ServantStatusBattleListViewItem_c *)v11[6].monitor;
      else
        v89 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FBD70 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v85);
        byte_49FBD70 = 1;
      }
      v90 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v90 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeGet_k__BackingField = (ServantStatusBattleListViewItem_o *)&v90->static_fields->_questClearCostumeGet_k__BackingField;
      p_questClearCostumeGet_k__BackingField->klass = v89;
      sub_1B649A4(p_questClearCostumeGet_k__BackingField, (int32_t)v89, v86, v87);
      v96 = v11[7].klass;
      if ( !v96 )
        sub_1B64C5C(v92, v93);
      if ( SLODWORD(v96->_1.name) <= 0 )
        v97 = 0LL;
      else
        v97 = v11[7].klass;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FC1F0 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v93);
        byte_49FC1F0 = 1;
      }
      v98 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v98 = TerminalPramsManager_TypeInfo;
      }
      p_eventTowerReward_k__BackingField = (ServantStatusBattleListViewItem_o *)&v98->static_fields->_eventTowerReward_k__BackingField;
      p_eventTowerReward_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v97;
      sub_1B649A4(p_eventTowerReward_k__BackingField, (int32_t)v97, v94, v95);
      v104 = v11[7].monitor;
      if ( !v104 )
        sub_1B64C5C(v100, v101);
      v105 = v104[3];
      if ( v105 )
      {
        if ( !(_DWORD)v105 )
          sub_1B64C64(v100, v101);
        v106 = v104[4];
        if ( !v106 )
          sub_1B64C5C(v100, v101);
        if ( *(__int64 *)(v106 + 32) <= 0 )
          v107 = 0LL;
        else
          v107 = (ServantStatusBattleListViewItem_c *)v11[7].monitor;
      }
      else
      {
        v107 = 0LL;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FC1F1 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v101);
        byte_49FC1F1 = 1;
      }
      v108 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v108 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventTowerRewardInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v108->static_fields->_resultEventTowerRewardInfo_k__BackingField;
      p_resultEventTowerRewardInfo_k__BackingField->klass = v107;
      sub_1B649A4(p_resultEventTowerRewardInfo_k__BackingField, (int32_t)v107, v102, v103);
      v114 = v11[8].klass;
      if ( !v114 )
        sub_1B64C5C(v110, v111);
      if ( v114->_1.namespaze )
        v115 = v11[8].klass;
      else
        v115 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FBD6A )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v111);
        byte_49FBD6A = 1;
      }
      v116 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v116 = TerminalPramsManager_TypeInfo;
      }
      p_resultBoostItemRewardInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v116->static_fields->_resultBoostItemRewardInfo_k__BackingField;
      p_resultBoostItemRewardInfo_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v115;
      sub_1B649A4(p_resultBoostItemRewardInfo_k__BackingField, (int32_t)v115, v112, v113);
      v122 = v11[8].monitor;
      if ( !v122 )
        sub_1B64C5C(v118, v119);
      if ( v122[3] )
        v123 = (ServantStatusBattleListViewItem_c *)v11[8].monitor;
      else
        v123 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FBD6B )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v119);
        byte_49FBD6B = 1;
      }
      v124 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v124 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventBoardGameTokenRewardInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v124->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
      p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = v123;
      sub_1B649A4(p_resultEventBoardGameTokenRewardInfo_k__BackingField, (int32_t)v123, v120, v121);
      v130 = (char)v11[9].klass;
      if ( !byte_49FABC0 )
      {
        v126 = sub_1B64A00(&TerminalPramsManager_TypeInfo, v127);
        byte_49FABC0 = 1;
      }
      v131 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v131 = TerminalPramsManager_TypeInfo;
      }
      v131->static_fields->_IsDispOnly_k__BackingField = v130;
      v132 = v11[9].monitor;
      if ( !v132 )
        sub_1B64C5C(v126, v127);
      if ( v132[3] )
        v133 = (ServantStatusBattleListViewItem_c *)v11[9].monitor;
      else
        v133 = 0LL;
      if ( !v131->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v131);
      if ( !byte_49FBD75 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v127);
        byte_49FBD75 = 1;
      }
      v134 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v134 = TerminalPramsManager_TypeInfo;
      }
      p_warClearReward_k__BackingField = (ServantStatusBattleListViewItem_o *)&v134->static_fields->_warClearReward_k__BackingField;
      p_warClearReward_k__BackingField->klass = v133;
      sub_1B649A4(p_warClearReward_k__BackingField, (int32_t)v133, v128, v129);
      v140 = (int32_t)v11[10].klass;
      if ( !byte_49FC1EA )
      {
        v136 = sub_1B64A00(&TerminalPramsManager_TypeInfo, v137);
        byte_49FC1EA = 1;
      }
      v141 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v141 = TerminalPramsManager_TypeInfo;
      }
      v141->static_fields->_EventActivityPointEffectState_k__BackingField = v140;
      v142 = BYTE4(v11[10].klass);
      if ( !byte_49FBD72 )
      {
        v136 = sub_1B64A00(&TerminalPramsManager_TypeInfo, v137);
        v141 = TerminalPramsManager_TypeInfo;
        byte_49FBD72 = 1;
      }
      if ( !v141->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v141);
        v141 = TerminalPramsManager_TypeInfo;
      }
      v143 = v141->static_fields;
      v143->_IsWarBoardClear_k__BackingField = v142;
      v144 = v11[10].monitor;
      if ( !v144 )
        sub_1B64C5C(v136, v137);
      if ( v144[3] )
        v145 = (struct BattleDropItem_array *)v11[10].monitor;
      else
        v145 = 0LL;
      if ( !v141->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v141);
        v143 = TerminalPramsManager_TypeInfo->static_fields;
      }
      v143->mQuestResultAfterEventRewardInfos = v145;
      sub_1B649A4(
        (ServantStatusBattleListViewItem_o *)&v143->mQuestResultAfterEventRewardInfos,
        (int32_t)v145,
        v138,
        v139);
      v150 = v11[11].klass;
      if ( !v150 )
        sub_1B64C5C(v146, v147);
      v151 = TerminalPramsManager_TypeInfo;
      if ( v150->_1.namespaze )
        v152 = v11[11].klass;
      else
        v152 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v151 = TerminalPramsManager_TypeInfo;
      }
      p_mResultEventPanelRewardInfos = (ServantStatusBattleListViewItem_o *)&v151->static_fields->mResultEventPanelRewardInfos;
      p_mResultEventPanelRewardInfos->klass = (ServantStatusBattleListViewItem_c *)v152;
      sub_1B649A4(p_mResultEventPanelRewardInfos, (int32_t)v152, v148, v149);
      v157 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = (int32_t)v11[11].monitor;
      v158 = v11[12].klass;
      if ( !byte_49FBD6E )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v154);
        v157 = TerminalPramsManager_TypeInfo;
        byte_49FBD6E = 1;
      }
      if ( !v157->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v157);
        v157 = TerminalPramsManager_TypeInfo;
      }
      p_limitImageAnnounces_k__BackingField = (ServantStatusBattleListViewItem_o *)&v157->static_fields->_limitImageAnnounces_k__BackingField;
      p_limitImageAnnounces_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v158;
      sub_1B649A4(p_limitImageAnnounces_k__BackingField, (int32_t)v158, v155, v156);
      v161 = (char)v11[12].monitor;
      if ( !byte_49FBA65 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v160);
        byte_49FBA65 = 1;
      }
      v162 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v162 = TerminalPramsManager_TypeInfo;
      }
      v162->static_fields->_IsOrdealCallWarClear_k__BackingField = v161;
      monitor_high = HIDWORD(v11[12].monitor);
      if ( !byte_49FBD67 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v160);
        v162 = TerminalPramsManager_TypeInfo;
        byte_49FBD67 = 1;
      }
      if ( !v162->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v162);
        v162 = TerminalPramsManager_TypeInfo;
      }
      v162->static_fields->_EventMuralId_k__BackingField = monitor_high;
      if ( BYTE1(v11[2].monitor) )
      {
        if ( !v162->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v162);
        if ( !byte_49FA14E )
        {
          sub_1B64A00(&TerminalPramsManager_TypeInfo, v160);
          byte_49FA14E = 1;
        }
        v162 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v162 = TerminalPramsManager_TypeInfo;
        }
        v162->static_fields->_IsAutoResume_k__BackingField = 1;
      }
      if ( !v162->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v162);
      if ( !byte_49FBD74 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v160);
        byte_49FBD74 = 1;
      }
      v164 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v164 = TerminalPramsManager_TypeInfo;
      }
      if ( v164->static_fields->_warClearReward_k__BackingField )
        goto LABEL_253;
      if ( !v164->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v164);
      if ( !byte_49FBD71 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v160);
        byte_49FBD71 = 1;
      }
      v164 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v164 = TerminalPramsManager_TypeInfo;
      }
      if ( v164->static_fields->_IsPlayScriptWithMap_k__BackingField )
      {
LABEL_253:
        if ( !v164->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v164);
        if ( !byte_49FC1FA )
        {
          sub_1B64A00(&TerminalPramsManager_TypeInfo, v160);
          byte_49FC1FA = 1;
        }
        v165 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v165 = TerminalPramsManager_TypeInfo;
        }
        v165->static_fields->_isQuestRewardSetted_k__BackingField = 1;
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
  int32_t v10; // w2
  int32_t v11; // w3
  TerminalPramsManager_c *v12; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC197 & 1) == 0 )
  {
    sub_1B64A00(&EventRaidDefeatedEffectInfo_TypeInfo, v1);
    sub_1B64A00(&string_TypeInfo, v2);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v3);
    sub_1B64A00(&StringLiteral_11381/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v4);
    byte_49FC197 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1FC )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC1FC = 1;
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
               (System_String_o *)StringLiteral_11381/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v7 = (EventRaidDefeatedEffectInfo_o *)sub_1B64C4C(EventRaidDefeatedEffectInfo_TypeInfo);
    EventRaidDefeatedEffectInfo___ctor(v7, String, v8);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FC1FB )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v9);
      byte_49FC1FB = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = v7;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
      (int32_t)v7,
      v10,
      v11);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int max_length; // w8
  System_String_array *v15; // x20
  unsigned int v16; // w23
  System_String_array *v17; // x21
  TerminalPramsManager_c *v18; // x0
  ServantStatusBattleListViewItem_o *p_QuestRandomGroupList_k__BackingField; // x0
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FC19C & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v1);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v2);
    sub_1B64A00(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1B64A00(&string_TypeInfo, v4);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_11390/*"SAVEKEY_QuestRandomGroupList"*/, v6);
    byte_49FC19C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB753 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FB753 = 1;
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
               (System_String_o *)StringLiteral_11390/*"SAVEKEY_QuestRandomGroupList"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v9,
      (const MethodInfo_311CDE4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *(_QWORD *)result = 0LL;
    if ( !String )
      goto LABEL_35;
    v10 = System_String__Split(String, 0x2Cu, 0, 0LL);
    if ( !v10 )
      goto LABEL_35;
    max_length = v10->max_length;
    v15 = v10;
    if ( max_length >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= max_length )
LABEL_36:
          sub_1B64C64(v10, v11);
        v10 = (System_String_array *)v15->m_Items[v16];
        if ( !v10 )
          break;
        v10 = System_String__Split((System_String_o *)v10, 0x3Au, 0, 0LL);
        if ( !v10 )
          break;
        v17 = v10;
        if ( (int)v10->max_length >= 2 )
        {
          v10 = (System_String_array *)System_Int32__TryParse(v10->m_Items[0], &result[1], 0LL);
          if ( result[1] >= 1 && ((unsigned __int8)v10 & 1) != 0 )
          {
            if ( v17->max_length <= 1 )
              goto LABEL_36;
            v10 = (System_String_array *)System_Int32__TryParse(v17->m_Items[1], result, 0LL);
            v12 = result[0];
            if ( result[0] >= 1 && ((unsigned __int8)v10 & 1) != 0 )
            {
              if ( !v9 )
                break;
              System_Collections_Generic_Dictionary_int__int___Add(
                v9,
                result[1],
                result[0],
                (const MethodInfo_311D7A8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
        }
        max_length = v15->max_length;
        if ( (int)++v16 >= max_length )
          goto LABEL_27;
      }
LABEL_35:
      sub_1B64C5C(v10, v11);
    }
LABEL_27:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FC1FD )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v11);
      byte_49FC1FD = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    p_QuestRandomGroupList_k__BackingField = (ServantStatusBattleListViewItem_o *)&v18->static_fields->_QuestRandomGroupList_k__BackingField;
    p_QuestRandomGroupList_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v9;
    sub_1B649A4(p_QuestRandomGroupList_k__BackingField, (int32_t)v9, v12, v13);
  }
}


void __fastcall TerminalPramsManager__LoadQuestReleasedFocusState(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x0

  if ( (byte_49FC185 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC185 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v2);
  if ( !QuestFocusStateManager
    || (QuestFocusStateManager__ClearQuestFocusStateDataList(QuestFocusStateManager, 0LL),
        (QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager(v5)) == 0LL) )
  {
    sub_1B64C5C(QuestFocusStateManager, v4);
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
  System_String_o *v51; // x19
  __int64 v52; // x1
  int32_t Int_69095184; // w19
  TerminalPramsManager_c *v54; // x0
  System_String_o *v55; // x19
  __int64 v56; // x1
  int32_t v57; // w19
  TerminalPramsManager_c *v58; // x0
  System_String_o *v59; // x19
  __int64 v60; // x1
  int32_t v61; // w19
  TerminalPramsManager_c *v62; // x0
  System_String_o *v63; // x19
  __int64 v64; // x1
  int32_t v65; // w19
  TerminalPramsManager_c *v66; // x0
  System_String_o *v67; // x19
  __int64 v68; // x1
  int32_t v69; // w19
  TerminalPramsManager_c *v70; // x0
  System_String_o *v71; // x19
  __int64 v72; // x1
  int32_t v73; // w19
  TerminalPramsManager_c *v74; // x0
  System_String_o *v75; // x19
  System_String_o *String_69095752; // x20
  __int64 v77; // x1
  int64_t v78; // x19
  TerminalPramsManager_c *v79; // x0
  System_String_o *v80; // x19
  __int64 v81; // x1
  int32_t v82; // w19
  TerminalPramsManager_c *v83; // x0
  System_String_o *v84; // x19
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x19
  TerminalPramsManager_c *v88; // x8
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_o *v90; // x19
  __int64 v91; // x1
  int32_t v92; // w19
  TerminalPramsManager_c *v93; // x0
  System_String_o *v94; // x19
  __int64 v95; // x1
  int32_t v96; // w19
  TerminalPramsManager_c *v97; // x0
  System_String_o *v98; // x19
  __int64 v99; // x1
  int32_t v100; // w19
  TerminalPramsManager_c *v101; // x0
  System_String_o *v102; // x19
  __int64 v103; // x1
  int32_t v104; // w19
  TerminalPramsManager_c *v105; // x0
  System_String_o *v106; // x19
  __int64 v107; // x1
  int32_t v108; // w19
  TerminalPramsManager_c *v109; // x0
  System_String_o *v110; // x19
  __int64 v111; // x1
  int32_t v112; // w19
  TerminalPramsManager_c *v113; // x0
  System_String_o *v114; // x19
  System_String_o *v115; // x20
  __int64 v116; // x1
  int64_t v117; // x19
  TerminalPramsManager_c *v118; // x0
  System_String_o *v119; // x19
  __int64 v120; // x1
  int32_t v121; // w19
  TerminalPramsManager_c *v122; // x0
  System_String_o *v123; // x19
  __int64 v124; // x1
  int32_t v125; // w19
  TerminalPramsManager_c *v126; // x0
  System_String_o *v127; // x19
  Il2CppObject *v128; // x19
  __int64 v129; // x1
  int32_t v130; // w2
  int32_t v131; // w3
  Il2CppObject *v132; // x19
  TerminalPramsManager_c *v133; // x0
  ServantStatusBattleListViewItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  System_String_o *v135; // x19
  __int64 v136; // x1
  const MethodInfo *v137; // x2
  int32_t v138; // w20
  TerminalPramsManager_c *v139; // x0
  int32_t WarId_k__BackingField; // w20
  System_String_o *v141; // x19
  Il2CppObject *v142; // x19
  int32_t v143; // w2
  int32_t v144; // w3
  Il2CppObject *v145; // x19
  TerminalPramsManager_c *v146; // x8
  ServantStatusBattleListViewItem_o *p_eventConquestInfos; // x0
  System_String_o *v148; // x19
  int32_t v149; // w19
  TerminalPramsManager_c *v150; // x8
  System_String_o *v151; // x19
  Il2CppObject *v152; // x19
  int32_t v153; // w2
  int32_t v154; // w3
  Il2CppObject *v155; // x19
  TerminalPramsManager_c *v156; // x8
  ServantStatusBattleListViewItem_o *p_eventHarvestGrowthInfo; // x0
  System_String_o *v158; // x19
  int32_t v159; // w2
  int32_t v160; // w3
  System_String_o *v161; // x19
  TerminalPramsManager_c *v162; // x8
  ServantStatusBattleListViewItem_o *p_lastPlayBgmName; // x0
  System_String_o *v164; // x19
  int32_t v165; // w19
  TerminalPramsManager_c *v166; // x8
  System_String_o *v167; // x19
  __int64 v168; // x1
  int32_t v169; // w19
  TerminalPramsManager_c *v170; // x0
  System_String_o *v171; // x19
  int32_t v172; // w19
  TerminalPramsManager_c *v173; // x8
  System_String_o *v174; // x19
  __int64 v175; // x1
  int32_t v176; // w2
  int32_t v177; // w3
  System_String_o *v178; // x19
  TerminalPramsManager_c *v179; // x0
  ServantStatusBattleListViewItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  System_String_o *v181; // x19
  __int64 v182; // x1
  int32_t v183; // w19
  TerminalPramsManager_c *v184; // x0
  System_String_o *v185; // x19
  __int64 v186; // x1
  int32_t v187; // w19
  TerminalPramsManager_c *v188; // x0
  System_String_o *v189; // x19
  __int64 v190; // x1
  int32_t v191; // w19
  TerminalPramsManager_c *v192; // x0
  System_String_o *v193; // x19
  __int64 v194; // x1
  int32_t v195; // w19
  TerminalPramsManager_c *v196; // x0
  System_String_o *v197; // x19
  int32_t v198; // w19
  TerminalPramsManager_c *v199; // x8
  System_String_o *v200; // x19
  int32_t v201; // w19
  TerminalPramsManager_c *v202; // x8
  System_String_o *v203; // x19
  __int64 v204; // x1
  int32_t v205; // w19
  TerminalPramsManager_c *v206; // x0
  System_String_o *v207; // x19
  __int64 v208; // x1
  int32_t v209; // w2
  int32_t v210; // w3
  System_String_o *v211; // x19
  TerminalPramsManager_c *v212; // x0
  ServantStatusBattleListViewItem_o *p_ClearEventQuestIds_k__BackingField; // x0
  System_String_o *v214; // x19
  System_String_o *v215; // x19
  System_String_array *IsNullOrEmpty; // x0
  __int64 v217; // x1
  __int64 v218; // x8
  System_String_array *v219; // x19
  int32_t v220; // w20
  TerminalPramsManager_c *v221; // x8
  int32_t v222; // w0
  int32_t v223; // w19
  TerminalPramsManager_c *v224; // x0
  System_String_o *v225; // x19
  __int64 v226; // x1
  int32_t v227; // w19
  TerminalPramsManager_c *v228; // x0
  System_String_o *v229; // x19
  __int64 v230; // x1
  int32_t v231; // w19
  TerminalPramsManager_c *v232; // x0
  System_String_o *v233; // x19
  Il2CppObject *v234; // x19
  __int64 v235; // x1
  int32_t v236; // w2
  int32_t v237; // w3
  Il2CppObject *v238; // x19
  TerminalPramsManager_c *v239; // x0
  struct TerminalPramsManager_StaticFields *v240; // x0
  System_String_o *v241; // x19
  __int64 v242; // x1
  int32_t v243; // w19
  TerminalPramsManager_c *v244; // x0
  System_String_o *v245; // x19
  __int64 v246; // x1
  int32_t v247; // w19
  TerminalPramsManager_c *v248; // x0

  if ( (byte_49FC158 & 1) == 0 )
  {
    sub_1B64A00(&System_Convert_TypeInfo, v1);
    sub_1B64A00(&Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____, v2);
    sub_1B64A00(&Method_JsonManager_Deserialize_EventConquestInfo_____, v3);
    sub_1B64A00(&Method_JsonManager_Deserialize_EventHarvestGrowthInfo___, v4);
    sub_1B64A00(&Method_JsonManager_Deserialize_EventSaveData___, v5);
    sub_1B64A00(&JsonManager_TypeInfo, v6);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v7);
    sub_1B64A00(&StringLiteral_11382/*"SAVEKEY_LastPlayBgmName"*/, v8);
    sub_1B64A00(&StringLiteral_13539/*"TerminalEndTime"*/, v9);
    sub_1B64A00(&StringLiteral_11388/*"SAVEKEY_PlayedTerminalEffects"*/, v10);
    sub_1B64A00(&StringLiteral_13535/*"TerminalBeforeEventActivityPoint"*/, v11);
    sub_1B64A00(&StringLiteral_11376/*"SAVEKEY_CampaignDirectBonus"*/, v12);
    sub_1B64A00(&StringLiteral_11383/*"SAVEKEY_LastPlayQuestConsumeType"*/, v13);
    sub_1B64A00(&StringLiteral_11394/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, v14);
    sub_1B64A00(&StringLiteral_13540/*"TerminalEventDailyPointEventId"*/, v15);
    sub_1B64A00(&StringLiteral_13537/*"TerminalBeforeEventSubmarinePointData"*/, v16);
    sub_1B64A00(&StringLiteral_13546/*"TerminalPhaseCnt"*/, v17);
    sub_1B64A00(&StringLiteral_11392/*"SAVEKEY_TerminalConquestInfos"*/, v18);
    sub_1B64A00(&StringLiteral_13554/*"TerminalTimeStatusEventId"*/, v19);
    sub_1B64A00(&StringLiteral_13538/*"TerminalDispState"*/, v20);
    sub_1B64A00(&StringLiteral_11385/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v21);
    sub_1B64A00(&StringLiteral_13541/*"TerminalIsDoneShortcut"*/, v22);
    sub_1B64A00(&StringLiteral_11384/*"SAVEKEY_MapModelClearQuestInfo"*/, v23);
    sub_1B64A00(&StringLiteral_11389/*"SAVEKEY_PlayerGenderType"*/, v24);
    sub_1B64A00(&StringLiteral_11374/*"SAVEKEY_BlankEarthRank"*/, v25);
    sub_1B64A00(&StringLiteral_13542/*"TerminalLastPanelEventPoint"*/, v26);
    sub_1B64A00(&StringLiteral_11393/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v27);
    sub_1B64A00(&StringLiteral_11377/*"SAVEKEY_ClearEventQuestIds"*/, v28);
    sub_1B64A00(&StringLiteral_11386/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v29);
    sub_1B64A00(&StringLiteral_5197/*"Debug_IsQuestReleaseAll"*/, v30);
    sub_1B64A00(&StringLiteral_5194/*"Debug_IsDummyErrorSelect"*/, v31);
    sub_1B64A00(&StringLiteral_13549/*"TerminalQuestId"*/, v32);
    sub_1B64A00(&StringLiteral_11391/*"SAVEKEY_TerminalConquestInfoDisp"*/, v33);
    sub_1B64A00(&StringLiteral_11396/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v34);
    sub_1B64A00(&StringLiteral_13553/*"TerminalTimeStatusEventDailyPoint"*/, v35);
    sub_1B64A00(&StringLiteral_13558/*"TerminalWarId"*/, v36);
    sub_1B64A00(&StringLiteral_13551/*"TerminalSpotId"*/, v37);
    sub_1B64A00(&StringLiteral_13555/*"TerminalTimeStatusLoopCount"*/, v38);
    sub_1B64A00(&StringLiteral_13536/*"TerminalBeforeEventActivityPointGauge"*/, v39);
    sub_1B64A00(&StringLiteral_11375/*"SAVEKEY_BlankEarthSpotId"*/, v40);
    sub_1B64A00(&StringLiteral_11380/*"SAVEKEY_DataLostBattleAutoReset"*/, v41);
    sub_1B64A00(&StringLiteral_13559/*"TerminalWarStartedIds"*/, v42);
    sub_1B64A00(&StringLiteral_11379/*"SAVEKEY_ConnectMarkEventId"*/, v43);
    sub_1B64A00(&StringLiteral_13543/*"TerminalLastPlayedFreeQuestSpotId"*/, v44);
    sub_1B64A00(&StringLiteral_11378/*"SAVEKEY_ConnectMarkAnimationId"*/, v45);
    sub_1B64A00(&StringLiteral_11387/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v46);
    sub_1B64A00(&StringLiteral_1/*""*/, v47);
    sub_1B64A00(&StringLiteral_13544/*"TerminalLastPlayedQuestId"*/, v48);
    sub_1B64A00(&StringLiteral_5193/*"Debug_IsBuildInfoDisp"*/, v49);
    sub_1B64A00(&StringLiteral_11395/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v50);
    byte_49FC158 = 1;
  }
  v51 = (System_String_o *)StringLiteral_13538/*"TerminalDispState"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13538/*"TerminalDispState"*/, 0LL) )
  {
    Int_69095184 = UnityEngine_PlayerPrefs__GetInt_69095184(v51, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB75A )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v52);
      byte_49FB75A = 1;
    }
    v54 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v54 = TerminalPramsManager_TypeInfo;
    }
    v54->static_fields->_DispState_k__BackingField = Int_69095184;
  }
  v55 = (System_String_o *)StringLiteral_13558/*"TerminalWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13558/*"TerminalWarId"*/, 0LL) )
  {
    v57 = UnityEngine_PlayerPrefs__GetInt_69095184(v55, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB75E )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v56);
      byte_49FB75E = 1;
    }
    v58 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v58 = TerminalPramsManager_TypeInfo;
    }
    v58->static_fields->_WarId_k__BackingField = v57;
  }
  v59 = (System_String_o *)StringLiteral_13551/*"TerminalSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13551/*"TerminalSpotId"*/, 0LL) )
  {
    v61 = UnityEngine_PlayerPrefs__GetInt_69095184(v59, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB75D )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v60);
      byte_49FB75D = 1;
    }
    v62 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v62 = TerminalPramsManager_TypeInfo;
    }
    v62->static_fields->_SpotId_k__BackingField = v61;
  }
  v63 = (System_String_o *)StringLiteral_13549/*"TerminalQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13549/*"TerminalQuestId"*/, 0LL) )
  {
    v65 = UnityEngine_PlayerPrefs__GetInt_69095184(v63, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB758 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v64);
      byte_49FB758 = 1;
    }
    v66 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v66 = TerminalPramsManager_TypeInfo;
    }
    v66->static_fields->_QuestId_k__BackingField = v65;
  }
  v67 = (System_String_o *)StringLiteral_13544/*"TerminalLastPlayedQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13544/*"TerminalLastPlayedQuestId"*/, 0LL) )
  {
    v69 = UnityEngine_PlayerPrefs__GetInt_69095184(v67, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FBD93 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v68);
      byte_49FBD93 = 1;
    }
    v70 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v70 = TerminalPramsManager_TypeInfo;
    }
    v70->static_fields->_LastPlayedQuestId_k__BackingField = v69;
  }
  v71 = (System_String_o *)StringLiteral_13546/*"TerminalPhaseCnt"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13546/*"TerminalPhaseCnt"*/, 0LL) )
  {
    v73 = UnityEngine_PlayerPrefs__GetInt_69095184(v71, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB75C )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v72);
      byte_49FB75C = 1;
    }
    v74 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v74 = TerminalPramsManager_TypeInfo;
    }
    v74->static_fields->_PhaseCnt_k__BackingField = v73;
  }
  v75 = (System_String_o *)StringLiteral_13539/*"TerminalEndTime"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13539/*"TerminalEndTime"*/, 0LL) )
  {
    String_69095752 = UnityEngine_PlayerPrefs__GetString_69095752(v75, 0LL);
    v78 = 0LL;
    if ( System_String__op_Inequality(String_69095752, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v78 = System_Convert__ToInt64_62044088(String_69095752, 0LL);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB759 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v77);
      byte_49FB759 = 1;
    }
    v79 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v79 = TerminalPramsManager_TypeInfo;
    }
    v79->static_fields->_EndTime_k__BackingField = v78;
  }
  v80 = (System_String_o *)StringLiteral_13541/*"TerminalIsDoneShortcut"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13541/*"TerminalIsDoneShortcut"*/, 0LL) )
  {
    v82 = UnityEngine_PlayerPrefs__GetInt_69095184(v80, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB75B )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v81);
      byte_49FB75B = 1;
    }
    v83 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v83 = TerminalPramsManager_TypeInfo;
    }
    v83->static_fields->_IsDoneShortcut_k__BackingField = v82 != 0;
  }
  v84 = (System_String_o *)StringLiteral_13559/*"TerminalWarStartedIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13559/*"TerminalWarStartedIds"*/, 0LL) )
  {
    v87 = UnityEngine_PlayerPrefs__GetString_69095752(v84, 0LL);
    v88 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v88 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v88->static_fields;
    static_fields->mTerminalWarStartedIds = v87;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->mTerminalWarStartedIds, (int32_t)v87, v85, v86);
  }
  v90 = (System_String_o *)StringLiteral_5197/*"Debug_IsQuestReleaseAll"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5197/*"Debug_IsQuestReleaseAll"*/, 0LL) )
  {
    v92 = UnityEngine_PlayerPrefs__GetInt_69095184(v90, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FC1CC )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v91);
      byte_49FC1CC = 1;
    }
    v93 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v93 = TerminalPramsManager_TypeInfo;
    }
    v93->static_fields->mDebug_IsQuestReleaseAll = v92 != 0;
  }
  v94 = (System_String_o *)StringLiteral_5194/*"Debug_IsDummyErrorSelect"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5194/*"Debug_IsDummyErrorSelect"*/, 0LL) )
  {
    v96 = UnityEngine_PlayerPrefs__GetInt_69095184(v94, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FC1CD )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v95);
      byte_49FC1CD = 1;
    }
    v97 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v97 = TerminalPramsManager_TypeInfo;
    }
    v97->static_fields->mDebug_IsDummyErrorSelect = v96 != 0;
  }
  v98 = (System_String_o *)StringLiteral_5193/*"Debug_IsBuildInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5193/*"Debug_IsBuildInfoDisp"*/, 0LL) )
  {
    v100 = UnityEngine_PlayerPrefs__GetInt_69095184(v98, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FC1CE )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v99);
      byte_49FC1CE = 1;
    }
    v101 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v101 = TerminalPramsManager_TypeInfo;
    }
    v101->static_fields->mDebug_IsBuildInfoDisp = v100 != 0;
  }
  v102 = (System_String_o *)StringLiteral_13554/*"TerminalTimeStatusEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13554/*"TerminalTimeStatusEventId"*/, 0LL) )
  {
    v104 = UnityEngine_PlayerPrefs__GetInt_69095184(v102, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FBD8F )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v103);
      byte_49FBD8F = 1;
    }
    v105 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v105 = TerminalPramsManager_TypeInfo;
    }
    v105->static_fields->_TimeStatusEventId_k__BackingField = v104;
  }
  v106 = (System_String_o *)StringLiteral_13555/*"TerminalTimeStatusLoopCount"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13555/*"TerminalTimeStatusLoopCount"*/, 0LL) )
  {
    v108 = UnityEngine_PlayerPrefs__GetInt_69095184(v106, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FBD90 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v107);
      byte_49FBD90 = 1;
    }
    v109 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v109 = TerminalPramsManager_TypeInfo;
    }
    v109->static_fields->_TimeStatusLoopCount_k__BackingField = v108;
  }
  v110 = (System_String_o *)StringLiteral_13540/*"TerminalEventDailyPointEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13540/*"TerminalEventDailyPointEventId"*/, 0LL) )
  {
    v112 = UnityEngine_PlayerPrefs__GetInt_69095184(v110, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FC1D0 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v111);
      byte_49FC1D0 = 1;
    }
    v113 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v113 = TerminalPramsManager_TypeInfo;
    }
    v113->static_fields->_EventDailyPointEventId_k__BackingField = v112;
  }
  v114 = (System_String_o *)StringLiteral_13553/*"TerminalTimeStatusEventDailyPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13553/*"TerminalTimeStatusEventDailyPoint"*/, 0LL) )
  {
    v115 = UnityEngine_PlayerPrefs__GetString_69095752(v114, 0LL);
    v117 = 0LL;
    if ( !System_String__op_Equality(v115, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v117 = System_Convert__ToInt64_62044088(v115, 0LL);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FC1D1 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v116);
      byte_49FC1D1 = 1;
    }
    v118 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v118 = TerminalPramsManager_TypeInfo;
    }
    v118->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = v117;
  }
  v119 = (System_String_o *)StringLiteral_13535/*"TerminalBeforeEventActivityPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13535/*"TerminalBeforeEventActivityPoint"*/, 0LL) )
  {
    v121 = UnityEngine_PlayerPrefs__GetInt_69095184(v119, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FC1D2 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v120);
      byte_49FC1D2 = 1;
    }
    v122 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v122 = TerminalPramsManager_TypeInfo;
    }
    v122->static_fields->_BeforeEventActivityPoint_k__BackingField = v121;
  }
  v123 = (System_String_o *)StringLiteral_13536/*"TerminalBeforeEventActivityPointGauge"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13536/*"TerminalBeforeEventActivityPointGauge"*/, 0LL) )
  {
    v125 = UnityEngine_PlayerPrefs__GetInt_69095184(v123, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FC1D3 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v124);
      byte_49FC1D3 = 1;
    }
    v126 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v126 = TerminalPramsManager_TypeInfo;
    }
    v126->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v125;
  }
  v127 = (System_String_o *)StringLiteral_13537/*"TerminalBeforeEventSubmarinePointData"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13537/*"TerminalBeforeEventSubmarinePointData"*/, 0LL) )
  {
    v128 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69095752(v127, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v132 = JsonManager__Deserialize_object_(
             v128,
             (const MethodInfo_2EA1664 *)Method_JsonManager_Deserialize_EventSaveData___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB888 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v129);
      byte_49FB888 = 1;
    }
    v133 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v133 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (ServantStatusBattleListViewItem_o *)&v133->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v132;
    sub_1B649A4(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v132, v130, v131);
  }
  v135 = (System_String_o *)StringLiteral_11394/*"SAVEKEY_TerminalLastSelectQuestIndex"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11394/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, 0LL) )
  {
    v138 = UnityEngine_PlayerPrefs__GetInt_69095184(v135, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FC1CB )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v136);
      byte_49FC1CB = 1;
    }
    v139 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v139 = TerminalPramsManager_TypeInfo;
    }
    v139->static_fields->_LastSelectQuestIndex_k__BackingField = v138;
    if ( !byte_49FB757 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v136);
      v139 = TerminalPramsManager_TypeInfo;
      byte_49FB757 = 1;
    }
    if ( !v139->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v139);
      v139 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v139->static_fields->_WarId_k__BackingField;
    if ( !byte_49FC1DE )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v136);
      v139 = TerminalPramsManager_TypeInfo;
      byte_49FC1DE = 1;
    }
    if ( !v139->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v139);
      v139 = TerminalPramsManager_TypeInfo;
    }
    TerminalPramsManager__SetFolderLastClickedIdx(
      WarId_k__BackingField,
      v139->static_fields->_LastSelectQuestIndex_k__BackingField,
      v137);
  }
  v141 = (System_String_o *)StringLiteral_11392/*"SAVEKEY_TerminalConquestInfos"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11392/*"SAVEKEY_TerminalConquestInfos"*/, 0LL) )
  {
    v142 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69095752(v141, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v145 = JsonManager__Deserialize_object_(
             v142,
             (const MethodInfo_2EA1664 *)Method_JsonManager_Deserialize_EventConquestInfo_____);
    v146 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v146 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = (ServantStatusBattleListViewItem_o *)&v146->static_fields->eventConquestInfos;
    p_eventConquestInfos->klass = (ServantStatusBattleListViewItem_c *)v145;
    sub_1B649A4(p_eventConquestInfos, (int32_t)v145, v143, v144);
  }
  v148 = (System_String_o *)StringLiteral_11391/*"SAVEKEY_TerminalConquestInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11391/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL) )
  {
    v149 = UnityEngine_PlayerPrefs__GetInt_69095184(v148, 0LL);
    v150 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v150 = TerminalPramsManager_TypeInfo;
    }
    v150->static_fields->eventConquestInfoDisp = v149 != 0;
  }
  v151 = (System_String_o *)StringLiteral_11393/*"SAVEKEY_TerminalHarvestGrowthInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11393/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL) )
  {
    v152 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69095752(v151, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v155 = JsonManager__Deserialize_object_(
             v152,
             (const MethodInfo_2EA1664 *)Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    v156 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v156 = TerminalPramsManager_TypeInfo;
    }
    p_eventHarvestGrowthInfo = (ServantStatusBattleListViewItem_o *)&v156->static_fields->eventHarvestGrowthInfo;
    p_eventHarvestGrowthInfo->klass = (ServantStatusBattleListViewItem_c *)v155;
    sub_1B649A4(p_eventHarvestGrowthInfo, (int32_t)v155, v153, v154);
  }
  v158 = (System_String_o *)StringLiteral_11382/*"SAVEKEY_LastPlayBgmName"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11382/*"SAVEKEY_LastPlayBgmName"*/, 0LL) )
  {
    v161 = UnityEngine_PlayerPrefs__GetString_69095752(v158, 0LL);
    v162 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v162 = TerminalPramsManager_TypeInfo;
    }
    p_lastPlayBgmName = (ServantStatusBattleListViewItem_o *)&v162->static_fields->lastPlayBgmName;
    p_lastPlayBgmName->klass = (ServantStatusBattleListViewItem_c *)v161;
    sub_1B649A4(p_lastPlayBgmName, (int32_t)v161, v159, v160);
  }
  v164 = (System_String_o *)StringLiteral_11383/*"SAVEKEY_LastPlayQuestConsumeType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11383/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL) )
  {
    v165 = UnityEngine_PlayerPrefs__GetInt_69095184(v164, 0LL);
    v166 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v166 = TerminalPramsManager_TypeInfo;
    }
    v166->static_fields->lastPlayQuestConsumeAp = v165;
  }
  v167 = (System_String_o *)StringLiteral_13543/*"TerminalLastPlayedFreeQuestSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13543/*"TerminalLastPlayedFreeQuestSpotId"*/, 0LL) )
  {
    v169 = UnityEngine_PlayerPrefs__GetInt_69095184(v167, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FBD94 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v168);
      byte_49FBD94 = 1;
    }
    v170 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v170 = TerminalPramsManager_TypeInfo;
    }
    v170->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = v169;
  }
  v171 = (System_String_o *)StringLiteral_13542/*"TerminalLastPanelEventPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13542/*"TerminalLastPanelEventPoint"*/, 0LL) )
  {
    v172 = UnityEngine_PlayerPrefs__GetInt_69095184(v171, 0LL);
    v173 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v173 = TerminalPramsManager_TypeInfo;
    }
    v173->static_fields->panelEventPoint = v172;
  }
  v174 = (System_String_o *)StringLiteral_11388/*"SAVEKEY_PlayedTerminalEffects"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11388/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL) )
  {
    v178 = UnityEngine_PlayerPrefs__GetString_69095752(v174, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FC1D5 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v175);
      byte_49FC1D5 = 1;
    }
    v179 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v179 = TerminalPramsManager_TypeInfo;
    }
    p_PlayedTerminalEffects_k__BackingField = (ServantStatusBattleListViewItem_o *)&v179->static_fields->_PlayedTerminalEffects_k__BackingField;
    p_PlayedTerminalEffects_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v178;
    sub_1B649A4(p_PlayedTerminalEffects_k__BackingField, (int32_t)v178, v176, v177);
  }
  v181 = (System_String_o *)StringLiteral_11385/*"SAVEKEY_PlayTerminalEffectDisappear"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11385/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL) )
  {
    v183 = UnityEngine_PlayerPrefs__GetInt_69095184(v181, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FBFFA )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v182);
      byte_49FBFFA = 1;
    }
    v184 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v184 = TerminalPramsManager_TypeInfo;
    }
    v184->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = v183 != 0;
  }
  v185 = (System_String_o *)StringLiteral_11386/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11386/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL) )
  {
    v187 = UnityEngine_PlayerPrefs__GetInt_69095184(v185, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FBFFB )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v186);
      byte_49FBFFB = 1;
    }
    v188 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v188 = TerminalPramsManager_TypeInfo;
    }
    v188->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = v187;
  }
  v189 = (System_String_o *)StringLiteral_11387/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11387/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL) )
  {
    v191 = UnityEngine_PlayerPrefs__GetInt_69095184(v189, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FBF16 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v190);
      byte_49FBF16 = 1;
    }
    v192 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v192 = TerminalPramsManager_TypeInfo;
    }
    v192->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = v191 != 0;
  }
  v193 = (System_String_o *)StringLiteral_11396/*"SAVEKEY_TerminalSelectedStoryQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11396/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL) )
  {
    v195 = UnityEngine_PlayerPrefs__GetInt_69095184(v193, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FBB7A )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v194);
      byte_49FBB7A = 1;
    }
    v196 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v196 = TerminalPramsManager_TypeInfo;
    }
    v196->static_fields->_SelectedStoryQuestId_k__BackingField = v195;
  }
  v197 = (System_String_o *)StringLiteral_11379/*"SAVEKEY_ConnectMarkEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11379/*"SAVEKEY_ConnectMarkEventId"*/, 0LL) )
  {
    v198 = UnityEngine_PlayerPrefs__GetInt_69095184(v197, 0LL);
    v199 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v199 = TerminalPramsManager_TypeInfo;
    }
    v199->static_fields->ConnectMarkEventId = v198;
  }
  v200 = (System_String_o *)StringLiteral_11378/*"SAVEKEY_ConnectMarkAnimationId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11378/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL) )
  {
    v201 = UnityEngine_PlayerPrefs__GetInt_69095184(v200, 0LL);
    v202 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v202 = TerminalPramsManager_TypeInfo;
    }
    v202->static_fields->ConnectMarkAnimationId = v201;
  }
  v203 = (System_String_o *)StringLiteral_11395/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11395/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL) )
  {
    v205 = UnityEngine_PlayerPrefs__GetInt_69095184(v203, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FA8E7 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v204);
      byte_49FA8E7 = 1;
    }
    v206 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v206 = TerminalPramsManager_TypeInfo;
    }
    v206->static_fields->_SelectedRecollectionWarId_k__BackingField = v205;
  }
  v207 = (System_String_o *)StringLiteral_11377/*"SAVEKEY_ClearEventQuestIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11377/*"SAVEKEY_ClearEventQuestIds"*/, 0LL) )
  {
    v211 = UnityEngine_PlayerPrefs__GetString_69095752(v207, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB755 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v208);
      byte_49FB755 = 1;
    }
    v212 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v212 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (ServantStatusBattleListViewItem_o *)&v212->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v211;
    sub_1B649A4(p_ClearEventQuestIds_k__BackingField, (int32_t)v211, v209, v210);
  }
  v214 = (System_String_o *)StringLiteral_11384/*"SAVEKEY_MapModelClearQuestInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11384/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL) )
  {
    v215 = UnityEngine_PlayerPrefs__GetString_69095752(v214, 0LL);
    IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(v215, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v215 || (IsNullOrEmpty = System_String__Split(v215, 0x2Cu, 0, 0LL)) == 0LL )
        sub_1B64C5C(IsNullOrEmpty, v217);
      v218 = *(_QWORD *)&IsNullOrEmpty->max_length;
      v219 = IsNullOrEmpty;
      if ( v218 )
      {
        if ( !(_DWORD)v218 )
          sub_1B64C64(IsNullOrEmpty, v217);
        v220 = System_Int32__Parse(IsNullOrEmpty->m_Items[0], 0LL);
      }
      else
      {
        v220 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FC1D7 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v217);
        byte_49FC1D7 = 1;
      }
      v221 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v221 = TerminalPramsManager_TypeInfo;
      }
      v221->static_fields->_MapModelClearQuestId_k__BackingField = v220;
      if ( (int)v219->max_length < 2 )
      {
        v223 = 0;
      }
      else
      {
        v222 = System_Int32__Parse(v219->m_Items[1], 0LL);
        v221 = TerminalPramsManager_TypeInfo;
        v223 = v222;
      }
      if ( !v221->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v221);
      if ( !byte_49FC1D8 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v217);
        byte_49FC1D8 = 1;
      }
      v224 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v224 = TerminalPramsManager_TypeInfo;
      }
      v224->static_fields->_MapModelClearPhaseCount_k__BackingField = v223;
    }
  }
  v225 = (System_String_o *)StringLiteral_11380/*"SAVEKEY_DataLostBattleAutoReset"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11380/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL) )
  {
    v227 = UnityEngine_PlayerPrefs__GetInt_69095184(v225, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FBF1D )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v226);
      byte_49FBF1D = 1;
    }
    v228 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v228 = TerminalPramsManager_TypeInfo;
    }
    v228->static_fields->_IsDataLostBattleAutoReset_k__BackingField = v227 != 0;
  }
  v229 = (System_String_o *)StringLiteral_11389/*"SAVEKEY_PlayerGenderType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11389/*"SAVEKEY_PlayerGenderType"*/, 0LL) )
  {
    v231 = UnityEngine_PlayerPrefs__GetInt_69095184(v229, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FA28C )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v230);
      byte_49FA28C = 1;
    }
    v232 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v232 = TerminalPramsManager_TypeInfo;
    }
    v232->static_fields->_PlayerGenderType_k__BackingField = v231;
  }
  v233 = (System_String_o *)StringLiteral_11376/*"SAVEKEY_CampaignDirectBonus"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11376/*"SAVEKEY_CampaignDirectBonus"*/, 0LL) )
  {
    v234 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69095752(v233, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v238 = JsonManager__Deserialize_object_(
             v234,
             (const MethodInfo_2EA1664 *)Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FC1DC )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v235);
      byte_49FC1DC = 1;
    }
    v239 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v239 = TerminalPramsManager_TypeInfo;
    }
    v240 = v239->static_fields;
    v240->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)v238;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&v240->_CampaignDirectBonus_k__BackingField,
      (int32_t)v238,
      v236,
      v237);
  }
  v241 = (System_String_o *)StringLiteral_11375/*"SAVEKEY_BlankEarthSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11375/*"SAVEKEY_BlankEarthSpotId"*/, 0LL) )
  {
    v243 = UnityEngine_PlayerPrefs__GetInt_69095184(v241, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB74E )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v242);
      byte_49FB74E = 1;
    }
    v244 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v244 = TerminalPramsManager_TypeInfo;
    }
    v244->static_fields->_BlankEarthSpotId_k__BackingField = v243;
  }
  v245 = (System_String_o *)StringLiteral_11374/*"SAVEKEY_BlankEarthRank"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11374/*"SAVEKEY_BlankEarthRank"*/, 0LL) )
  {
    v247 = UnityEngine_PlayerPrefs__GetInt_69095184(v245, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FC1DF )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v246);
      byte_49FC1DF = 1;
    }
    v248 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v248 = TerminalPramsManager_TypeInfo;
    }
    v248->static_fields->_BlankEarthRank_k__BackingField = v247;
  }
}


TerminalTransitionInfo_o *__fastcall TerminalPramsManager__Load_TerminalTransitionInfoData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *v4; // x20
  __int64 v5; // x19
  int32_t Int_69095184; // w0
  int32_t v7; // w20
  const MethodInfo *v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  System_String_o *String_69095752; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FC159 & 1) == 0 )
  {
    sub_1B64A00(&TerminalTransitionInfo_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_13557/*"TerminalTransitionInfoVoiceAssetName"*/, v2);
    sub_1B64A00(&StringLiteral_13556/*"TerminalTransitionInfoMissionId"*/, v3);
    byte_49FC159 = 1;
  }
  v4 = (System_String_o *)StringLiteral_13556/*"TerminalTransitionInfoMissionId"*/;
  v5 = 0LL;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13556/*"TerminalTransitionInfoMissionId"*/, 0LL) )
  {
    Int_69095184 = UnityEngine_PlayerPrefs__GetInt_69095184(v4, 0LL);
    if ( Int_69095184 < 1 )
    {
      return 0LL;
    }
    else
    {
      v7 = Int_69095184;
      v5 = sub_1B64C4C(TerminalTransitionInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0LL);
      TerminalTransitionInfo__Init((TerminalTransitionInfo_o *)v5, v8);
      if ( !v5 )
        sub_1B64C5C(v9, v10);
      *(_DWORD *)(v5 + 16) = v7;
      v11 = (System_String_o *)StringLiteral_13557/*"TerminalTransitionInfoVoiceAssetName"*/;
      if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13557/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL) )
      {
        String_69095752 = UnityEngine_PlayerPrefs__GetString_69095752(v11, 0LL);
        *(_QWORD *)(v5 + 40) = String_69095752;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)String_69095752, v13, v14);
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

  if ( (byte_49FC172 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11384/*"SAVEKEY_MapModelClearQuestInfo"*/, v2);
    sub_1B64A00(&StringLiteral_869/*","*/, v3);
    byte_49FC172 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB967 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FB967 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v4->static_fields->_MapModelClearQuestId_k__BackingField;
  v6 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_49FB968 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v5);
    byte_49FB968 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v7->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v8 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v9 = System_String__Concat_61396396(v6, (System_String_o *)StringLiteral_869/*","*/, v8, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11384/*"SAVEKEY_MapModelClearQuestInfo"*/, v9, 0LL);
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

  if ( (byte_49FC15F & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11394/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, v2);
    sub_1B64A00(&StringLiteral_13543/*"TerminalLastPlayedFreeQuestSpotId"*/, v3);
    sub_1B64A00(&StringLiteral_13544/*"TerminalLastPlayedQuestId"*/, v4);
    byte_49FC15F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FBAB5 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FBAB5 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13544/*"TerminalLastPlayedQuestId"*/,
    v5->static_fields->_LastPlayedQuestId_k__BackingField,
    0LL);
  if ( !byte_49FC1DE )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v6);
    byte_49FC1DE = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11394/*"SAVEKEY_TerminalLastSelectQuestIndex"*/,
    v7->static_fields->_LastSelectQuestIndex_k__BackingField,
    0LL);
  if ( !byte_49FB750 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v8);
    byte_49FB750 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13543/*"TerminalLastPlayedFreeQuestSpotId"*/,
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

  if ( (byte_49FC154 & 1) == 0 )
  {
    sub_1B64A00(&Method_TerminalPramsManager_PlaySystemSE__, method);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v3);
    byte_49FC154 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1C9 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC1C9 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( TerminalPramsManager_TypeInfo->static_fields->_IsAutoNoSe_k__BackingField )
    {
LABEL_9:
      if ( !byte_49FC1CA )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
        byte_49FC1CA = 1;
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
      v7 = (_QWORD *)sub_1B64A18(Method_TerminalPramsManager_PlaySystemSE__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B649E4(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, seKind, 0LL);
  }
}


void __fastcall TerminalPramsManager__PlayedTerminalEffectsSave_SaveData(int32_t effectId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  TerminalPramsManager_c *v8; // x0
  ServantStatusBattleListViewItem_c *v9; // x19
  TerminalPramsManager_c *v10; // x0
  ServantStatusBattleListViewItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  TerminalPramsManager_c *v12; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x19
  System_String_o *v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x19
  TerminalPramsManager_c *v19; // x0
  ServantStatusBattleListViewItem_o *v20; // x0
  const MethodInfo *v21; // x0
  int32_t v22; // [xsp+Ch] [xbp-24h] BYREF

  v22 = effectId;
  if ( (byte_49FC17B & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_43/*"\n"*/, v3);
    sub_1B64A00(&StringLiteral_1/*""*/, v4);
    byte_49FC17B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsTerminalEffectPlayed(effectId, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FC1E4 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v5);
      byte_49FC1E4 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    if ( !v8->static_fields->_PlayedTerminalEffects_k__BackingField )
    {
      if ( !v8->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v8);
      v9 = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
      if ( !byte_49FC1D5 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v5);
        byte_49FC1D5 = 1;
      }
      v10 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v10 = TerminalPramsManager_TypeInfo;
      }
      p_PlayedTerminalEffects_k__BackingField = (ServantStatusBattleListViewItem_o *)&v10->static_fields->_PlayedTerminalEffects_k__BackingField;
      p_PlayedTerminalEffects_k__BackingField->klass = v9;
      sub_1B649A4(p_PlayedTerminalEffects_k__BackingField, (int32_t)v9, v6, v7);
      v8 = TerminalPramsManager_TypeInfo;
    }
    if ( !v8->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v8);
    if ( !byte_49FC1E4 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v5);
      byte_49FC1E4 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    PlayedTerminalEffects_k__BackingField = v12->static_fields->_PlayedTerminalEffects_k__BackingField;
    v14 = System_Int32__ToString((int32_t)&v22, 0LL);
    v18 = System_String__Concat_61396396(
            PlayedTerminalEffects_k__BackingField,
            v14,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            0LL);
    if ( !byte_49FC1D5 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v15);
      byte_49FC1D5 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    v20 = (ServantStatusBattleListViewItem_o *)&v19->static_fields->_PlayedTerminalEffects_k__BackingField;
    v20->klass = (ServantStatusBattleListViewItem_c *)v18;
    sub_1B649A4(v20, (int32_t)v18, v16, v17);
    TerminalPramsManager__Save_SaveData(v21);
  }
}


void __fastcall TerminalPramsManager__PlayerGenderType_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC174 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11389/*"SAVEKEY_PlayerGenderType"*/, v2);
    byte_49FC174 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1E5 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC1E5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11389/*"SAVEKEY_PlayerGenderType"*/,
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
  BattleResultComponent_resultData_o *v57; // x8
  BattleResultComponent_resultData_array **m_Items; // x19
  struct UserServantCollectionEntity_array *oldUserSvtCollection; // x8
  _DWORD *v60; // x22
  int32_t v61; // w2
  int32_t v62; // w3
  BattleResultComponent_resultData_o *v63; // x26
  int eventEndTitle; // w8
  UserServantCollectionMaster_o *v65; // x20
  unsigned int v66; // w28
  __int64 v67; // x27
  BattleResultComponent_resultData_array *v68; // x23
  __int64 v69; // x24
  __int64 v70; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x23
  UserServantCollectionEntity_o *v72; // x24
  int32_t v73; // w2
  int32_t v74; // w3
  _DWORD *v75; // x23
  ServantStatusBattleListViewItem_o *v76; // x23
  ServantStatusBattleListViewItem_c *klass; // x8
  ServantStatusBattleListViewItem_c *v78; // x8
  TerminalPramsManager_c *v79; // x0
  ServantStatusBattleListViewItem_o *p_mQuestClearHeroineInfo; // x0
  __int64 v81; // x8
  BattleResultComponent_resultData_o *v82; // x9
  struct System_String_o *v83; // x10
  struct System_String_o *eventEndMessage; // x27
  __int128 v85; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v86; // x23
  UserServantEntity_o *v87; // x24
  __int64 v88; // x23
  void *v89; // x25
  void **p_monitor; // x27
  void *monitor; // t1
  void *v92; // x26
  Il2CppObject *MasterData_object; // x25
  int64_t UserId; // x0
  __int64 v95; // x27
  __int64 v96; // x28
  int64_t v97; // x26
  int v98; // w8
  UserServantCollectionEntity_o *v99; // x26
  int v100; // w9
  UserServantCollectionEntity_o *v101; // x25
  BattleResultComponent_resultData_array *v102; // x27
  int32_t SvtId; // w0
  __int64 v104; // x28
  __int64 v105; // x29
  int32_t v106; // w27
  __int64 v107; // x22
  int32_t v108; // w2
  int32_t v109; // w3
  int32_t v110; // w2
  int32_t v111; // w3
  bool v112; // w9
  Il2CppObject *Master_object; // x0
  __int64 v114; // x24
  __int64 v115; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v116; // x23
  int klass_high; // w8
  int32_t friendshipExceedCount; // w9
  TerminalPramsManager_c *v119; // x0
  ServantStatusBattleListViewItem_o *v120; // x0
  BattleResultComponent_resultData_o *v121; // x22
  BattleResultComponent_resultData_o *v122; // x8
  struct System_String_o *v123; // x9
  UserQuestEntity_o *v124; // x22
  int32_t questId; // w23
  TerminalPramsManager_c *v126; // x0
  __int64 v127; // x1
  int32_t QuestPhase; // w23
  TerminalPramsManager_c *v129; // x0
  int32_t v130; // w23
  Il2CppObject *v131; // x24
  UserQuestEntity_o *v132; // x0
  UserQuestEntity_o *v133; // x25
  int32_t v134; // w24
  __int64 v135; // x1
  bool v136; // w25
  TerminalPramsManager_c *v137; // x0
  const MethodInfo *v138; // x2
  TerminalPramsManager_c *v139; // x0
  System_String_o *ValidMessage; // x0
  const MethodInfo *v141; // x2
  TerminalPramsManager_c *v142; // x8
  TerminalPramsManager_c *v143; // x0
  const MethodInfo *v144; // x0
  TerminalPramsManager_c *v145; // x8
  int32_t v146; // w24
  const MethodInfo *v147; // x1
  WarEntity_o *v148; // x23
  TerminalPramsManager_c *v149; // x0
  bool v150; // w25
  TerminalPramsManager_c *v151; // x0
  char v152; // w8
  const MethodInfo *v153; // x1
  bool HasFlag; // w0
  int32_t v155; // w2
  int32_t v156; // w3
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  int32_t v158; // w2
  int32_t v159; // w3
  ServantStatusBattleListViewItem_c *v160; // x23
  TerminalPramsManager_c *v161; // x0
  ServantStatusBattleListViewItem_o *p_mResultEventPanelRewardInfos; // x0
  TerminalPramsManager_c *v163; // x0
  ServantStatusBattleListViewItem_o *p_eventConquestInfos; // x0
  int32_t v165; // w2
  int32_t v166; // w3
  struct TerminalPramsManager_StaticFields *v167; // x9
  __int64 v168; // x8
  BattleResultComponent_resultData_o *v169; // x23
  int32_t v170; // w23
  WarEntity_o *v171; // x0
  __int64 v172; // x1
  int32_t id; // w21
  Il2CppObject *v174; // x23
  int32_t v175; // w2
  int32_t v176; // w3
  int32_t v177; // w2
  int32_t v178; // w3
  ServantStatusBattleListViewItem_c *v179; // x24
  TerminalPramsManager_c *v180; // x0
  ServantStatusBattleListViewItem_o *p_OldUserEventPoint_k__BackingField; // x0
  signed int max_length; // w9
  BattleResultComponent_resultData_array *v183; // x24
  int v184; // w8
  Il2CppClass **v185; // x8
  Il2CppClass *v186; // x25
  int32_t RaidGroupDeadQuestId; // w26
  signed int v188; // w9
  BattleResultComponent_resultData_array *v189; // x26
  int v190; // w8
  int v191; // w27
  struct TerminalPramsManager_StaticFields *v192; // x8
  int32_t name_high; // w25
  signed int v194; // w9
  BattleResultComponent_resultData_array *v195; // x24
  int v196; // w8
  BattleResultComponent_resultData_o *v197; // x21
  int32_t RaidDeadQuestId; // w25
  struct TerminalPramsManager_StaticFields *v199; // x8
  int32_t v200; // w21
  TerminalPramsManager_c *v201; // x0
  TerminalPramsManager_c *v202; // x8
  bool v203; // w21
  TerminalPramsManager_c *v204; // x0
  int32_t v205; // w21
  int32_t eventId; // w23
  char *v207; // x26
  char *v208; // x27
  char *v209; // x24
  BattleResultComponent_resultData_o *v210; // x8
  int v211; // w9
  int v212; // w11
  __int64 v213; // x25
  TerminalPramsManager_c *v214; // x0
  int32_t bounds_high; // w23
  bool IsUserEventStatus; // w0
  TerminalPramsManager_c *v217; // x0
  TerminalPramsManager_c *v218; // x0
  Il2CppObject *v219; // x23
  __int64 v220; // x1
  int32_t v221; // w2
  int32_t v222; // w3
  TerminalPramsManager_c *v223; // x0
  ServantStatusBattleListViewItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  struct System_String_o *ultimateGetQpText; // x8
  struct System_String_o *v226; // x8
  signed int v227; // w8
  __int64 *v228; // x9
  __int64 v229; // x21
  __int64 *v230; // x9
  __int64 v231; // x23
  void **v232; // x8
  int32_t v233; // w26
  System_Collections_Generic_List_object__o *v234; // x26
  TerminalPramsManager___c_c *v235; // x8
  System_Predicate_object__o *_9__657_0; // x23
  Il2CppObject *v237; // x24
  struct TerminalPramsManager___c_StaticFields *v238; // x0
  int32_t v239; // w2
  int32_t v240; // w3
  __int64 v241; // x1
  System_String_o *v242; // x29
  TerminalPramsManager_c *v243; // x0
  TerminalPramsManager_c *v244; // x0
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x26
  System_String_o *v246; // x23
  int32_t v247; // w2
  int32_t v248; // w3
  TerminalPramsManager_c *v249; // x0
  int32_t v250; // w23
  int32_t PhaseCnt_k__BackingField; // w24
  _BOOL4 IsQuestClear_k__BackingField; // w21
  TerminalPramsManager_c *v253; // x0
  Il2CppObject *v254; // x23
  int v255; // w23
  TerminalPramsManager_c *v256; // x0
  ServantStatusBattleListViewItem_o *p_questClearCostumeRelease_k__BackingField; // x0
  int32_t v258; // w2
  int32_t v259; // w3
  BattleResultComponent_resultData_o *v260; // x8
  ServantStatusBattleListViewItem_c *v261; // x23
  TerminalPramsManager_c *v262; // x0
  ServantStatusBattleListViewItem_o *v263; // x0
  TerminalPramsManager_c *v264; // x0
  ServantStatusBattleListViewItem_o *p_questClearCostumeGet_k__BackingField; // x0
  int32_t v266; // w2
  int32_t v267; // w3
  ServantStatusBattleListViewItem_c *v268; // x23
  TerminalPramsManager_c *v269; // x0
  ServantStatusBattleListViewItem_o *v270; // x0
  TerminalPramsManager_c *v271; // x0
  ServantStatusBattleListViewItem_o *p_eventPointWinReward_k__BackingField; // x0
  int32_t v273; // w2
  int32_t v274; // w3
  TerminalPramsManager_c *v275; // x0
  int32_t v276; // w23
  QuestGroupMaster_o *v277; // x24
  int32_t GroupId; // w0
  TerminalPramsManager_c *v279; // x8
  int32_t v280; // w25
  int v281; // w24
  Il2CppObject *v282; // x25
  EventPointEntity_o *v283; // x24
  int32_t v284; // w23
  struct TerminalPramsManager_StaticFields *v285; // x8
  BattleResultComponent_resultData_o *v286; // x8
  struct System_String_o *v287; // x9
  ServantStatusBattleListViewItem_c *v288; // x23
  TerminalPramsManager_c *v289; // x0
  ServantStatusBattleListViewItem_o *v290; // x0
  int32_t v291; // w21
  TerminalPramsManager_c *v292; // x0
  TerminalPramsManager_c *v293; // x0
  ServantStatusBattleListViewItem_o *p_eventRaceBoost_k__BackingField; // x0
  int32_t v295; // w2
  int32_t v296; // w3
  __int64 v297; // x8
  BattleResultComponent_resultData_o *v298; // x22
  TerminalPramsManager_c *v299; // x0
  ServantStatusBattleListViewItem_o *v300; // x0
  __int64 v301; // x21
  BattleResultComponent_resultData_o *v302; // x9
  struct System_String_o *v303; // x10
  struct System_String_o *v304; // x22
  TerminalPramsManager_c *v305; // x0
  ServantStatusBattleListViewItem_o *p_eventTowerReward_k__BackingField; // x0
  int32_t v307; // w2
  int32_t v308; // w3
  ServantStatusBattleListViewItem_c *v309; // x22
  TerminalPramsManager_c *v310; // x0
  ServantStatusBattleListViewItem_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  ServantStatusBattleListViewItem_c *v312; // x22
  TerminalPramsManager_c *v313; // x0
  ServantStatusBattleListViewItem_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  ServantStatusBattleListViewItem_c *v315; // x22
  TerminalPramsManager_c *v316; // x0
  ServantStatusBattleListViewItem_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  ServantStatusBattleListViewItem_c *v318; // x22
  TerminalPramsManager_c *v319; // x0
  ServantStatusBattleListViewItem_o *p_warClearReward_k__BackingField; // x0
  TerminalPramsManager_c *v321; // x0
  struct TerminalPramsManager_StaticFields *v322; // x0
  __int64 v323; // x1
  int32_t v324; // w2
  int32_t v325; // w3
  TerminalPramsManager_c *v326; // x0
  struct TerminalPramsManager_StaticFields *v327; // x0
  Il2CppObject *Instance; // x22
  int32_t WarID_ByQuestID; // w22
  WarEntity_o *WarEntityByWarID; // x0
  int32_t v331; // w22
  int32_t v332; // w2
  int32_t v333; // w3
  __int64 v334; // x8
  BattleResultComponent_resultData_o *v335; // x21
  TerminalPramsManager_c *v336; // x0
  struct TerminalPramsManager_StaticFields *v337; // x0
  ServantStatusBattleListViewItem_o *p_oldPersonalBoss_k__BackingField; // x0
  TerminalPramsManager_c *v339; // x0
  struct TerminalPramsManager_StaticFields *v340; // x0
  struct EventTowerReward_array *eventTowerReward; // x8
  bool v342; // w21
  BalanceConfig_c *v343; // x8
  int32_t battleId; // w21
  TerminalPramsManager_c *v345; // x0
  __int64 v346; // x1
  TerminalPramsManager_c *v347; // x0
  BalanceConfig_c *v348; // x8
  int32_t v349; // w21
  TerminalPramsManager_c *v350; // x0
  BalanceConfig_c *v351; // x8
  int32_t v352; // w21
  TerminalPramsManager_c *v353; // x0
  BalanceConfig_c *v354; // x8
  int32_t v355; // w21
  Il2CppObject *v356; // x21
  BattleResultComponent_resultData_array *v357; // x23
  int32_t v358; // w2
  int32_t v359; // w3
  UserSuperBossEntity_o *v360; // x22
  BattleResultComponent_resultData_array *v361; // x21
  __int64 v362; // x1
  int32_t v363; // w2
  int32_t v364; // w3
  TerminalPramsManager_c *v365; // x0
  struct TerminalPramsManager_StaticFields *v366; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v368; // x21
  Il2CppObject *v369; // x22
  int32_t ScriptQuestId; // w22
  __int64 v371; // x1
  Il2CppObject *v372; // x23
  TerminalPramsManager_c *v373; // x0
  int32_t v374; // w27
  int32_t winResult; // w24
  int32_t v376; // w2
  int32_t v377; // w3
  __int64 v378; // x1
  Il2CppObject *v379; // x23
  TerminalPramsManager_c *v380; // x0
  int32_t v381; // w24
  int32_t v382; // w21
  TerminalPramsManager_c *v383; // x0
  int32_t v384; // w1
  ServantStatusBattleListViewItem_o *p_lastPlayBgmName; // x0
  const MethodInfo *v386; // x0
  Il2CppObject *v387; // x21
  int32_t v388; // w22
  int32_t v389; // w2
  int32_t v390; // w3
  TerminalPramsManager_c *v391; // x0
  il2cpp_array_size_t *v392; // x0
  int32_t v393; // w22
  TerminalPramsManager_c *v394; // x0
  int32_t v395; // w23
  __int64 v396; // x1
  int32_t v397; // w2
  int32_t v398; // w3
  SpecifiedSceneInfo_o *SpecifiedSceneInfo; // x22
  TerminalPramsManager_c *v400; // x0
  struct TerminalPramsManager_StaticFields *v401; // x0
  const MethodInfo *v402; // x0
  int32_t v403; // w2
  int32_t v404; // w3
  int32_t v405; // w22
  TerminalPramsManager_c *v406; // x0
  ServantStatusBattleListViewItem_o *p_eventHarvestGrowthInfo; // x0
  __int64 v408; // x1
  TerminalPramsManager_c *v409; // x0
  BattleResultComponent_resultData_array *v410; // x22
  int32_t ScriptIntParam; // w24
  int32_t v412; // w0
  int32_t v413; // w25
  __int64 v414; // x23
  int32_t v415; // w2
  int32_t v416; // w3
  Il2CppArrayBounds *bounds; // d0
  TerminalPramsManager_c *v418; // x0
  ServantStatusBattleListViewItem_o *v419; // x0
  Il2CppObject *v420; // x22
  QuestEntity_o *QuestEntity; // x0
  int32_t v422; // w2
  int32_t v423; // w3
  QuestEntity_o *v424; // x22
  TerminalPramsManager_c *v425; // x0
  int32_t SpotId; // w21
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v428; // x21
  TerminalPramsManager_c *v429; // x0
  struct EventAreaImproveResultInfo_o *eventAreaImproveResultInfo; // x8
  TerminalPramsManager_c *v431; // x0
  __int64 v432; // x1
  System_String_o *v433; // x21
  TerminalPramsManager_c *v434; // x0
  System_String_o *v435; // x0
  __int64 v436; // x1
  int32_t v437; // w2
  int32_t v438; // w3
  System_String_o *v439; // x21
  TerminalPramsManager_c *v440; // x0
  ServantStatusBattleListViewItem_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  ServantStatusBattleListViewItem_c *v442; // x21
  TerminalPramsManager_c *v443; // x0
  ServantStatusBattleListViewItem_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v445; // x1
  __int64 v446; // x21
  TerminalPramsManager_c *v447; // x0
  int32_t v448; // w2
  int32_t v449; // w3
  int32_t v450; // w2
  int32_t v451; // w3
  int32_t v452; // w1
  __int64 v453; // x1
  TerminalPramsManager_c *v454; // x0
  int32_t v455; // w2
  int32_t v456; // w3
  int32_t v457; // w2
  int32_t v458; // w3
  int32_t v459; // w1
  __int64 v460; // x1
  TerminalPramsManager_c *v461; // x0
  int32_t v462; // w2
  int32_t v463; // w3
  int32_t v464; // w2
  int32_t v465; // w3
  int32_t v466; // w1
  __int64 v467; // x1
  TerminalPramsManager_c *v468; // x0
  int32_t v469; // w2
  int32_t v470; // w3
  System_String_o *v471; // x0
  const MethodInfo *v472; // x1
  const MethodInfo *v473; // x0
  const MethodInfo *v474; // x0
  const MethodInfo *v475; // x0
  const MethodInfo *v476; // x0
  const MethodInfo *v477; // x0
  __int64 v478; // x1
  TerminalPramsManager_c *v479; // x0
  __int64 v480; // x0
  System_String_o *v481; // [xsp+8h] [xbp-118h]
  System_String_o *progressQuestId; // [xsp+10h] [xbp-110h]
  bool v483; // [xsp+1Ch] [xbp-104h]
  BattleResultComponent_resultData_array *resulta; // [xsp+20h] [xbp-100h]
  il2cpp_array_size_t *p_max_length; // [xsp+28h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v486; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v487; // [xsp+50h] [xbp-D0h]
  __int128 v488; // [xsp+70h] [xbp-B0h]
  char v489[4]; // [xsp+84h] [xbp-9Ch] BYREF
  UserSuperBossEntity_o *v490; // [xsp+88h] [xbp-98h] BYREF
  Il2CppObject *v491; // [xsp+90h] [xbp-90h] BYREF
  int QuestId_k__BackingField; // [xsp+9Ch] [xbp-84h] BYREF
  Il2CppObject *v493; // [xsp+A0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+A8h] [xbp-78h] BYREF
  int v495; // [xsp+B4h] [xbp-6Ch] BYREF
  QuestPhaseEntity_o *v496; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v497; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v498; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v499; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v500; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v501; // 0:x0.16

  v4 = result;
  if ( (byte_49FC189 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, isWin);
    sub_1B64A00(&bool_TypeInfo, v5);
    sub_1B64A00(&CondType_TypeInfo, v6);
    sub_1B64A00(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_1B64A00(&Method_DataManager_GetMasterData_EventPointMaster___, v8);
    sub_1B64A00(&Method_DataManager_GetMasterData_EventRaidMaster___, v9);
    sub_1B64A00(&Method_DataManager_GetMasterData_QuestGroupMaster___, v10);
    sub_1B64A00(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_1B64A00(&Method_DataManager_GetMasterData_QuestMessageMaster___, v12);
    sub_1B64A00(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_1B64A00(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v14);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserQuestMaster___, v15);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v16);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, v17);
    sub_1B64A00(&Method_DataManager_GetMasterData_WarMaster___, v18);
    sub_1B64A00(&Method_DataManager_GetMaster_EventDetailMaster___, v19);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantMaster___, v20);
    sub_1B64A00(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v21);
    sub_1B64A00(&Method_DataManager_GetMaster_UserSuperBossMaster___, v22);
    sub_1B64A00(&DataManager_TypeInfo, v23);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v24);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v25);
    sub_1B64A00(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v26);
    sub_1B64A00(&EventHarvestGrowthInfo_TypeInfo, v27);
    sub_1B64A00(&EventSaveData_TypeInfo, v28);
    sub_1B64A00(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v29);
    sub_1B64A00(&NetworkManager_TypeInfo, v30);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
    sub_1B64A00(&System_Predicate_QuestReleaseEntity__TypeInfo, v33);
    sub_1B64A00(&QuestClearHeroineInfo_TypeInfo, v34);
    sub_1B64A00(&ScriptManager_TypeInfo, v35);
    sub_1B64A00(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v36);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37);
    sub_1B64A00(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v38);
    sub_1B64A00(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v39);
    sub_1B64A00(&Method_SingletonTemplate_QuestTree__get_Instance__, v40);
    sub_1B64A00(&string___TypeInfo, v41);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v42);
    sub_1B64A00(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v43);
    sub_1B64A00(&Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__657_0__, v44);
    sub_1B64A00(&TerminalPramsManager___c_TypeInfo, v45);
    sub_1B64A00(&UserServantCollectionEntity___TypeInfo, v46);
    sub_1B64A00(&UserServantCollectionEntity_TypeInfo, v47);
    sub_1B64A00(&UserServantEntity_TypeInfo, v48);
    sub_1B64A00(&UserSuperBossEntity___TypeInfo, v49);
    sub_1B64A00(&StringLiteral_19804/*"harvestGrowthAfterQuestId"*/, v50);
    sub_1B64A00(&StringLiteral_16643/*"afterActionBk"*/, v51);
    sub_1B64A00(&StringLiteral_869/*","*/, v52);
    sub_1B64A00(&StringLiteral_19805/*"harvestGrowthBeforeQuestId"*/, v53);
    sub_1B64A00(&StringLiteral_1/*""*/, v54);
    sub_1B64A00(&StringLiteral_6580/*"False"*/, v55);
    result = (BattleResultComponent_resultData_array *)sub_1B64A00(&StringLiteral_1213/*"0"*/, v56);
    byte_49FC189 = 1;
  }
  v496 = 0LL;
  v493 = 0LL;
  entity = 0LL;
  QuestId_k__BackingField = 0;
  v490 = 0LL;
  v491 = 0LL;
  v489[0] = 0;
  if ( !v4 )
    goto LABEL_1078;
  p_max_length = &v4->max_length;
  if ( !v4->max_length )
    goto LABEL_1079;
  m_Items = (BattleResultComponent_resultData_array **)v4->m_Items;
  v57 = v4->m_Items[0];
  if ( !v57 )
    goto LABEL_1078;
  oldUserSvtCollection = v57->fields.oldUserSvtCollection;
  if ( !oldUserSvtCollection )
    goto LABEL_1078;
  v60 = (_DWORD *)sub_1B64AA8(UserServantCollectionEntity___TypeInfo, oldUserSvtCollection->max_length);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1078;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_max_length )
    goto LABEL_1079;
  resulta = v4;
  if ( !*m_Items )
    goto LABEL_1078;
  v63 = (*m_Items)->m_Items[11];
  v483 = isWin;
  v495 = 0;
  if ( !v63 )
    goto LABEL_1078;
  eventEndTitle = (int)v63->fields.eventEndTitle;
  if ( eventEndTitle >= 1 )
  {
    v65 = (UserServantCollectionMaster_o *)result;
    v66 = 0;
    while ( v66 < eventEndTitle )
    {
      v67 = *((_QWORD *)&v63->fields.eventEndMessage + (int)v66);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
      if ( !v67 )
        goto LABEL_1078;
      v68 = result;
      v70 = *(_QWORD *)(v67 + 24);
      v69 = *(_QWORD *)(v67 + 32);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v497.fields.currentCryptoKey = v70;
      *(_QWORD *)&v497.fields.fakeValue = v69;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                                           v497,
                                                           0LL);
      if ( !v65 )
        goto LABEL_1078;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v65, (int64_t)v68, (int32_t)result, 0LL);
      v72 = (UserServantCollectionEntity_o *)sub_1B64C4C(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor_39838368(v72, EntityDefinitely, 0LL);
      if ( !v60 )
        goto LABEL_1078;
      if ( v72 )
      {
        result = (BattleResultComponent_resultData_array *)sub_1B64B3C(v72, *(_QWORD *)(*(_QWORD *)v60 + 64LL));
        if ( !result )
          goto LABEL_1080;
      }
      if ( v66 >= v60[6] )
        break;
      v75 = &v60[2 * v66];
      *((_QWORD *)v75 + 4) = v72;
      v76 = (ServantStatusBattleListViewItem_o *)(v75 + 8);
      sub_1B649A4(v76, (int32_t)v72, v73, v74);
      if ( v66 >= v60[6] )
        break;
      klass = v76->klass;
      *(_OWORD *)&v487.fields.currentCryptoKey = *(_OWORD *)(v67 + 84);
      if ( !klass )
        goto LABEL_1078;
      *(_OWORD *)((char *)&klass->_1.declaringType + 4) = *(_OWORD *)&v487.fields.currentCryptoKey;
      if ( v66 >= v60[6] )
        break;
      v78 = v76->klass;
      v488 = *(_OWORD *)(v67 + 100);
      if ( !v78 )
        goto LABEL_1078;
      *(_OWORD *)((char *)&v78->_1.generic_class + 4) = v488;
      if ( v66 >= v60[6] )
        break;
      if ( !v76->klass )
        goto LABEL_1078;
      ++v66;
      HIDWORD(v76->klass->_1.interopData) = *(_DWORD *)(v67 + 116);
      v495 = v66;
      eventEndTitle = (int)v63->fields.eventEndTitle;
      if ( (int)v66 >= eventEndTitle )
        goto LABEL_31;
    }
LABEL_1079:
    sub_1B64C64(result, isWin);
  }
LABEL_31:
  v79 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v79 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestClearHeroineInfo = (ServantStatusBattleListViewItem_o *)&v79->static_fields->mQuestClearHeroineInfo;
  p_mQuestClearHeroineInfo->klass = 0LL;
  sub_1B649A4(p_mQuestClearHeroineInfo, 0, v61, v62);
  v81 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v82 = (*m_Items)->m_Items[5];
  if ( v82 )
  {
    v83 = v82->fields.eventEndTitle;
    if ( v83 )
    {
      if ( !(_DWORD)v83 )
        goto LABEL_1079;
      eventEndMessage = v82->fields.eventEndMessage;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1078;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !eventEndMessage )
        goto LABEL_1078;
      v85 = *(_OWORD *)&eventEndMessage[1].monitor;
      v86 = (DataMasterBase_TMaster__TEntity__PKType__o *)result;
      *(_OWORD *)&v487.fields.currentCryptoKey = *(_OWORD *)&eventEndMessage->fields._stringLength;
      *(_OWORD *)&v487.fields.fakeValue = v85;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v486 = v487;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(
                                                           &v486,
                                                           0LL);
      if ( !v86 )
        goto LABEL_1078;
      v87 = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                     v86,
                                     (int64_t)result,
                                     (const MethodInfo_30D6944 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v88 = sub_1B64C4C(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_39863812((UserServantEntity_o *)v88, v87, 0LL);
      v488 = *(_OWORD *)&eventEndMessage[4].klass;
      if ( !v88 )
        goto LABEL_1078;
      *(_OWORD *)(v88 + 96) = v488;
      *(_DWORD *)(v88 + 256) = eventEndMessage[10].fields._stringLength;
      *(_QWORD *)(v88 + 292) = *(System_String_c **)((char *)&eventEndMessage[12].klass + 4);
      monitor = eventEndMessage[5].monitor;
      p_monitor = &eventEndMessage[5].monitor;
      v89 = monitor;
      v92 = p_monitor[1];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v498.fields.currentCryptoKey = v89;
      *(_QWORD *)&v498.fields.fakeValue = v92;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v498, 0LL) >= 1 )
        *(_OWORD *)(v88 + 128) = *(_OWORD *)p_monitor;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1078;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)result,
                            (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      v96 = *(_QWORD *)(v88 + 80);
      v95 = *(_QWORD *)(v88 + 88);
      v97 = UserId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v499.fields.currentCryptoKey = v96;
      *(_QWORD *)&v499.fields.fakeValue = v95;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                                           v499,
                                                           0LL);
      if ( !MasterData_object )
        goto LABEL_1078;
      result = (BattleResultComponent_resultData_array *)UserServantCollectionMaster__GetEntityDefinitely(
                                                           (UserServantCollectionMaster_o *)MasterData_object,
                                                           v97,
                                                           (int32_t)result,
                                                           0LL);
      v495 = 0;
      if ( !v60 )
        goto LABEL_1078;
      v98 = v60[6];
      v99 = (UserServantCollectionEntity_o *)result;
      if ( v98 >= 1 )
      {
        v100 = 0;
        while ( v100 < (unsigned int)v98 )
        {
          v101 = *(UserServantCollectionEntity_o **)&v60[2 * v100 + 8];
          if ( !v101 )
            goto LABEL_1078;
          v102 = (BattleResultComponent_resultData_array *)v101->fields.userId;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
          if ( v102 == result )
          {
            SvtId = UserServantCollectionEntity__getSvtId(v101, 0LL);
            v105 = *(_QWORD *)(v88 + 80);
            v104 = *(_QWORD *)(v88 + 88);
            v106 = SvtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v500.fields.currentCryptoKey = v105;
            *(_QWORD *)&v500.fields.fakeValue = v104;
            result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                                                 v500,
                                                                 0LL);
            if ( v106 == (_DWORD)result )
              goto LABEL_67;
          }
          v100 = v495 + 1;
          v495 = v100;
          v98 = v60[6];
          if ( v100 >= v98 )
            goto LABEL_66;
        }
        goto LABEL_1079;
      }
LABEL_66:
      v101 = 0LL;
LABEL_67:
      v107 = sub_1B64C4C(QuestClearHeroineInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v107, 0LL);
      if ( !v107 )
        goto LABEL_1078;
      *(_QWORD *)(v107 + 16) = v88;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v107 + 16), v88, v108, v109);
      result = (BattleResultComponent_resultData_array *)UserServantEntity__getLimitCount(
                                                           (UserServantEntity_o *)v88,
                                                           0LL);
      if ( !v87 )
        goto LABEL_1078;
      v112 = (_DWORD)result != UserServantEntity__getLimitCount(v87, 0LL);
      *(_BYTE *)(v107 + 25) = 0;
      *(_DWORD *)(v107 + 28) = 0;
      *(_DWORD *)(v107 + 32) = 0;
      *(_BYTE *)(v107 + 40) = 0;
      *(_DWORD *)(v107 + 36) = -1;
      *(_BYTE *)(v107 + 24) = v112;
      *(_BYTE *)(v107 + 41) = *(_DWORD *)(v88 + 296) != v87->fields.exceedCount;
      if ( v101 )
      {
        result = (BattleResultComponent_resultData_array *)UserServantCollectionEntity__getFriendShipRank(v101, 0LL);
        if ( !v99 )
          goto LABEL_1078;
        if ( (_DWORD)result != UserServantCollectionEntity__getFriendShipRank(v99, 0LL) )
          *(_DWORD *)(v107 + 36) = UserServantCollectionEntity__getFriendShipRank(v101, 0LL);
        if ( v101->fields.friendshipExceedCount != v99->fields.friendshipExceedCount )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantMaster___);
          v115 = *(_QWORD *)(v88 + 80);
          v114 = *(_QWORD *)(v88 + 88);
          v116 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v501.fields.currentCryptoKey = v115;
          *(_QWORD *)&v501.fields.fakeValue = v114;
          result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                                               v501,
                                                               0LL);
          if ( !v116 )
            goto LABEL_1078;
          result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                               v116,
                                                               &entity,
                                                               (int32_t)result,
                                                               (const MethodInfo_30D67EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_1078;
            klass_high = HIDWORD(entity[6].klass);
            friendshipExceedCount = v101->fields.friendshipExceedCount;
            *(_BYTE *)(v107 + 40) = 1;
            *(_DWORD *)(v107 + 36) = friendshipExceedCount + klass_high;
          }
        }
      }
      v119 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v119 = TerminalPramsManager_TypeInfo;
      }
      v120 = (ServantStatusBattleListViewItem_o *)&v119->static_fields->mQuestClearHeroineInfo;
      v120->klass = (ServantStatusBattleListViewItem_c *)v107;
      sub_1B649A4(v120, v107, v110, v111);
      v81 = *(_QWORD *)p_max_length;
    }
  }
  if ( !(_DWORD)v81 )
    goto LABEL_1079;
  v121 = (BattleResultComponent_resultData_o *)*m_Items;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetBattleResultCampaignBonus(v121, (const MethodInfo *)isWin);
  if ( !*p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v122 = (*m_Items)->m_Items[9];
  if ( v122 && (v123 = v122->fields.eventEndTitle) != 0LL )
  {
    if ( !(_DWORD)v123 )
      goto LABEL_1079;
    v124 = (UserQuestEntity_o *)v122->fields.eventEndMessage;
  }
  else
  {
    v124 = 0LL;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FBA62 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    byte_49FBA62 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE5(result->m_Items[19]->fields.oldUserGame) = v124 != 0LL;
  if ( !byte_49FBA61 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_49FBA61 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE4(result->m_Items[19]->fields.oldUserGame) = 0;
  if ( !byte_49FBB78 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_49FBB78 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE1(result->m_Items[19]->fields.resultDamageRewardInfos) = 0;
  if ( !byte_49FBA60 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_49FBA60 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
  {
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_49FB754 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FB754 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( result->m_Items[19]->fields.battleId )
    {
      if ( !v124 )
        goto LABEL_1078;
    }
    else
    {
      if ( !v124 )
        goto LABEL_1078;
      questId = v124->fields.questId;
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_49FB758 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
        byte_49FB758 = 1;
      }
      v126 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v126 = TerminalPramsManager_TypeInfo;
      }
      v126->static_fields->_QuestId_k__BackingField = questId;
      QuestPhase = UserQuestEntity__getQuestPhase(v124, 0LL);
      if ( !byte_49FB75C )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v127);
        byte_49FB75C = 1;
      }
      v129 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v129 = TerminalPramsManager_TypeInfo;
      }
      v129->static_fields->_PhaseCnt_k__BackingField = QuestPhase;
    }
    v130 = v124->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1078;
    v131 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
    if ( !v131 )
      goto LABEL_1078;
    v132 = UserQuestMaster__GetEntity((UserQuestMaster_o *)v131, (int64_t)result, v130, 0LL);
    if ( v132 )
    {
      v133 = v132;
      v134 = UserQuestEntity__getQuestPhase(v132, 0LL);
      if ( UserQuestEntity__getClearNum(v124, 0LL) || UserQuestEntity__getClearNum(v133, 0LL) != 1 )
        v136 = UserQuestEntity__IsResetStatus(v124, 0LL) && !UserQuestEntity__IsResetStatus(v133, 0LL);
      else
        v136 = 1;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FBA61 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v135);
        byte_49FBA61 = 1;
      }
      v137 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v137 = TerminalPramsManager_TypeInfo;
      }
      v137->static_fields->_IsQuestClear_k__BackingField = v136;
      if ( !byte_49FC1DA )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v135);
        v137 = TerminalPramsManager_TypeInfo;
        byte_49FC1DA = 1;
      }
      if ( !v137->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v137);
        v137 = TerminalPramsManager_TypeInfo;
      }
      v137->static_fields->_EventUIEffectClearQuestId_k__BackingField = v130;
      if ( !byte_49FC1D7 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v135);
        v137 = TerminalPramsManager_TypeInfo;
        byte_49FC1D7 = 1;
      }
      if ( !v137->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v137);
        v137 = TerminalPramsManager_TypeInfo;
      }
      v137->static_fields->_MapModelClearQuestId_k__BackingField = v130;
      if ( !byte_49FC1D8 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v135);
        v137 = TerminalPramsManager_TypeInfo;
        byte_49FC1D8 = 1;
      }
      if ( !v137->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v137);
        v137 = TerminalPramsManager_TypeInfo;
      }
      v137->static_fields->_MapModelClearPhaseCount_k__BackingField = v134;
      TerminalPramsManager__MapModelClearQuestInfo_SaveData((const MethodInfo *)v137);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !result )
        goto LABEL_1078;
      AdManager__TrackEvent((AdManager_o *)result, 4, 1, v130, v134, 0LL, 0LL);
      TerminalPramsManager__SendClearQuestToAdManager(v130, v134, v138);
    }
    else
    {
      v134 = 0;
    }
    v139 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v139);
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1078;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
    if ( !result )
      goto LABEL_1078;
    ValidMessage = QuestMessageMaster__GetValidMessage((QuestMessageMaster_o *)result, v130, v134, 3, 0LL);
    v142 = TerminalPramsManager_TypeInfo;
    if ( ValidMessage )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FABC0 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
        byte_49FABC0 = 1;
      }
      v142 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v142 = TerminalPramsManager_TypeInfo;
      }
      v142->static_fields->_IsDispOnly_k__BackingField = 1;
    }
    if ( !v142->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v142);
    if ( !byte_49FC1E8 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FC1E8 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( result->m_Items[19]->fields.phaseClearQp >= 1 )
    {
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_49FC1E8 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
        byte_49FC1E8 = 1;
      }
      v143 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v143 = TerminalPramsManager_TypeInfo;
      }
      TerminalPramsManager__SetQuestReleasedFocusState(
        v143->static_fields->_QuestReleaseFocusQuestId_k__BackingField,
        1,
        v141);
      TerminalPramsManager__SaveQuestReleasedFocusState(v144);
      if ( !byte_49FBD8A )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
        byte_49FBD8A = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      result->m_Items[19]->fields.phaseClearQp = 0;
    }
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_49FBA63 )
  {
    result = (BattleResultComponent_resultData_array *)sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    byte_49FBA63 = 1;
  }
  v145 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v145 = TerminalPramsManager_TypeInfo;
  }
  if ( v145->static_fields->_IsQuestClear_k__BackingField )
  {
    if ( !v124 )
      goto LABEL_1078;
    v146 = v124->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1078;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !result )
      goto LABEL_1078;
    v148 = WarMaster__getByLastQuestId((WarMaster_o *)result, v146, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FBA64 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v147);
      byte_49FBA64 = 1;
    }
    v149 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v149 = TerminalPramsManager_TypeInfo;
    }
    v149->static_fields->_IsWarClear_k__BackingField = v148 != 0LL;
    v150 = TerminalPramsManager__CheckIsOrdealCallWarClear(v148, v147);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v150 )
    {
      if ( !byte_49FBA65 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
        byte_49FBA65 = 1;
      }
      v151 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v151 = TerminalPramsManager_TypeInfo;
      }
      v152 = 1;
    }
    else
    {
      if ( !byte_49FBA65 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
        byte_49FBA65 = 1;
      }
      v151 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v151 = TerminalPramsManager_TypeInfo;
      }
      v152 = 0;
    }
    v151->static_fields->_IsOrdealCallWarClear_k__BackingField = v152;
    if ( !v151->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v151);
    if ( !byte_49FBA66 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FBA66 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE3(result->m_Items[19]->fields.oldUserEvent) )
    {
      if ( !v148 )
        goto LABEL_1078;
      if ( !WarEntity__IsEvent(v148, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( !result )
          goto LABEL_1078;
        AdManager__TrackEvent((AdManager_o *)result, 6, 1, v148->fields.id, -1, 0LL, 0LL);
      }
    }
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !result )
      goto LABEL_1078;
    AdManager__TrackEvent((AdManager_o *)result, 5, 1, v146, -1, 0LL, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SendOpenedQuestIdToAdManager(v146, v153);
    if ( !byte_49FBA66 )
    {
      result = (BattleResultComponent_resultData_array *)sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FBA66 = 1;
    }
    v145 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v145 = TerminalPramsManager_TypeInfo;
    }
    if ( v145->static_fields->_IsWarClear_k__BackingField )
    {
      if ( !v148 )
        goto LABEL_1078;
      HasFlag = WarEntity__HasFlag(v148, 128, 0LL);
      v145 = TerminalPramsManager_TypeInfo;
      if ( HasFlag )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49FBD7D )
        {
          sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
          byte_49FBD7D = 1;
        }
        v145 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v145 = TerminalPramsManager_TypeInfo;
        }
        v145->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
        if ( !byte_49FBB78 )
        {
          sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
          v145 = TerminalPramsManager_TypeInfo;
          byte_49FBB78 = 1;
        }
        if ( !v145->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v145);
          v145 = TerminalPramsManager_TypeInfo;
        }
        v145->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
      }
    }
  }
  if ( !v145->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v145);
  TerminalPramsManager__SetQuestRewardInfo(v4, (const MethodInfo *)isWin);
  if ( !v4->max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->panelEventPoint = HIDWORD((*m_Items)->m_Items[2]);
  static_fields->mResultEventPanelRewardInfos = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->mResultEventPanelRewardInfos, 0, v155, v156);
  if ( !*p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v160 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[19];
  if ( v160 && v160->_1.namespaze )
  {
    v161 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v161 = TerminalPramsManager_TypeInfo;
    }
    p_mResultEventPanelRewardInfos = (ServantStatusBattleListViewItem_o *)&v161->static_fields->mResultEventPanelRewardInfos;
    p_mResultEventPanelRewardInfos->klass = v160;
    sub_1B649A4(p_mResultEventPanelRewardInfos, (int32_t)v160, v158, v159);
  }
  v163 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v163 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = (ServantStatusBattleListViewItem_o *)&v163->static_fields->eventConquestInfos;
  p_eventConquestInfos->klass = 0LL;
  sub_1B649A4(p_eventConquestInfos, 0, v158, v159);
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  v167 = TerminalPramsManager_TypeInfo->static_fields;
  v167->eventConquestInfoDisp = 0;
  v168 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v169 = (*m_Items)->m_Items[43];
  if ( v169 && v169->fields.eventEndTitle )
  {
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      v167 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v167->eventConquestInfos = (struct EventConquestInfo_array *)v169;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v167->eventConquestInfos, (int32_t)v169, v165, v166);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 1;
    v168 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v168 )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  if ( LOBYTE((*m_Items)->m_Items[46]) )
  {
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_49FBFFA )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FBFFA = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(result->m_Items[19][1].monitor) = 1;
    if ( !byte_49FBA63 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_49FBA63 = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE4(result->m_Items[19]->fields.oldUserGame) )
    {
      if ( !v124 )
        goto LABEL_1078;
      v170 = v124->fields.questId;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1078;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !result )
        goto LABEL_1078;
      v171 = WarMaster__getByLastQuestId((WarMaster_o *)result, v170, 0LL);
      if ( v171 )
      {
        id = v171->fields.id;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49FBFFB )
        {
          sub_1B64A00(&TerminalPramsManager_TypeInfo, v172);
          byte_49FBFFB = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        HIDWORD(result->m_Items[19][1].monitor) = id;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
    }
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  result->m_Items[19]->fields.resultEventTowerRewardInfos = (struct QuestRewardInfo_array *)-1LL;
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1078;
  v174 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1078;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1079;
  if ( !*m_Items || !result )
    goto LABEL_1078;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)result,
          &v493,
          HIDWORD((*m_Items)->bounds),
          (const MethodInfo_30D67EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_534;
  result = (BattleResultComponent_resultData_array *)v493;
  if ( !v493 )
    goto LABEL_1078;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPoint((EventDetailEntity_o *)v493, 0LL);
  v179 = 0LL;
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !*p_max_length )
      goto LABEL_1079;
    if ( !*m_Items )
      goto LABEL_1078;
    v179 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[10];
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1E9 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    byte_49FC1E9 = 1;
  }
  v180 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v180 = TerminalPramsManager_TypeInfo;
  }
  p_OldUserEventPoint_k__BackingField = (ServantStatusBattleListViewItem_o *)&v180->static_fields->_OldUserEventPoint_k__BackingField;
  p_OldUserEventPoint_k__BackingField->klass = v179;
  sub_1B649A4(p_OldUserEventPoint_k__BackingField, (int32_t)v179, v177, v178);
  if ( !*p_max_length )
    goto LABEL_1079;
  if ( !*m_Items || !v174 )
    goto LABEL_1078;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidGorupMax(
                                                       (EventRaidMaster_o *)v174,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0LL);
  if ( (int)result >= 1 )
  {
    if ( !*p_max_length )
      goto LABEL_1079;
    if ( !*m_Items )
      goto LABEL_1078;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                         (EventRaidMaster_o *)v174,
                                                         HIDWORD((*m_Items)->bounds),
                                                         0LL);
    v495 = 0;
    if ( !result )
      goto LABEL_1078;
    max_length = result->max_length;
    v183 = result;
    if ( max_length < 1 )
      goto LABEL_534;
    v184 = 0;
    while ( 1 )
    {
      if ( v184 >= (unsigned int)max_length )
        goto LABEL_1079;
      v185 = &v183->obj.klass + v184;
      v186 = v185[4];
      if ( !v186 )
        goto LABEL_1078;
      result = (BattleResultComponent_resultData_array *)EventRaidEntity__IsJumbleSingleRaid(
                                                           (EventRaidEntity_o *)v185[4],
                                                           0LL);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !*p_max_length )
          goto LABEL_1079;
        if ( !*m_Items )
          goto LABEL_1078;
        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                 (EventRaidMaster_o *)v174,
                                 HIDWORD((*m_Items)->bounds),
                                 (int32_t)v186->_1.namespaze,
                                 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49FB754 )
        {
          sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
          byte_49FB754 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( RaidGroupDeadQuestId == result->m_Items[19]->fields.battleId )
        {
          result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !result )
            goto LABEL_1078;
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
        goto LABEL_1079;
      if ( !*m_Items )
        goto LABEL_1078;
      result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidAliveQuestIds(
                                                           (EventRaidMaster_o *)v174,
                                                           HIDWORD((*m_Items)->bounds),
                                                           HIDWORD(v186->_1.name),
                                                           0LL);
      QuestId_k__BackingField = 0;
      if ( !result )
        goto LABEL_1078;
      v188 = result->max_length;
      v189 = result;
      if ( v188 >= 1 )
      {
        v190 = 0;
        while ( 1 )
        {
          if ( v190 >= (unsigned int)v188 )
            goto LABEL_1079;
          v191 = *((_DWORD *)v189->m_Items + v190);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49FB754 )
          {
            sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
            byte_49FB754 = 1;
          }
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          }
          v192 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
          if ( v191 == v192->_QuestId_k__BackingField )
            break;
          v190 = QuestId_k__BackingField + 1;
          QuestId_k__BackingField = v190;
          v188 = v189->max_length;
          if ( v190 >= v188 )
            goto LABEL_364;
        }
        name_high = HIDWORD(v186->_1.name);
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          v192 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v192->clearBattleRaidId = name_high;
      }
LABEL_364:
      v184 = v495 + 1;
      v495 = v184;
      max_length = v183->max_length;
      if ( v184 >= max_length )
        goto LABEL_534;
    }
    v204 = TerminalPramsManager_TypeInfo;
    v205 = HIDWORD(v186->_1.name);
    goto LABEL_413;
  }
  result = (BattleResultComponent_resultData_array *)v493;
  if ( !v493 )
    goto LABEL_1078;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__isRaidDefeatCount(
                                                       (EventDetailEntity_o *)v493,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_array *)v493;
    if ( !v493 )
      goto LABEL_1078;
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventActivityPoint(
                                                         (EventDetailEntity_o *)v493,
                                                         0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !*p_max_length )
        goto LABEL_1079;
      if ( !*m_Items )
        goto LABEL_1078;
      v200 = (int32_t)(*m_Items)->m_Items[42];
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FC1EA )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
        byte_49FC1EA = 1;
      }
      v201 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v201 = TerminalPramsManager_TypeInfo;
      }
      v201->static_fields->_EventActivityPointEffectState_k__BackingField = v200;
    }
    else
    {
      result = (BattleResultComponent_resultData_array *)v493;
      if ( !v493 )
        goto LABEL_1078;
      if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v493, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49FC1EB )
        {
          result = (BattleResultComponent_resultData_array *)sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
          byte_49FC1EB = 1;
        }
        v202 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v202 = TerminalPramsManager_TypeInfo;
        }
        if ( v202->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField )
        {
          v203 = 0;
        }
        else
        {
          if ( !*p_max_length )
            goto LABEL_1079;
          if ( !*m_Items )
            goto LABEL_1078;
          bounds_high = HIDWORD((*m_Items)->bounds);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsUserEventStatus = CondType__IsUserEventStatus(bounds_high, 7, 0LL);
          v202 = TerminalPramsManager_TypeInfo;
          v203 = IsUserEventStatus;
        }
        if ( !v202->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v202);
        if ( !byte_49FBF27 )
        {
          sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
          byte_49FBF27 = 1;
        }
        v217 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v217 = TerminalPramsManager_TypeInfo;
        }
        v217->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = v203;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)v493;
        if ( !v493 )
          goto LABEL_1078;
        result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPanel(
                                                             (EventDetailEntity_o *)v493,
                                                             0LL);
        if ( ((unsigned __int8)result & 1) != 0 )
        {
          if ( !*p_max_length )
            goto LABEL_1079;
          v207 = &byte_49FB000;
          v208 = &byte_49FB000;
          v209 = &byte_49FB000;
          if ( !*m_Items )
            goto LABEL_1078;
          v210 = (*m_Items)->m_Items[10];
          v495 = 0;
          if ( !v210 )
            goto LABEL_1078;
          v211 = (int)v210->fields.eventEndTitle;
          if ( v211 >= 1 )
          {
            v212 = 0;
            while ( 1 )
            {
              if ( v211 == v212 )
                goto LABEL_1079;
              if ( !v493 )
                goto LABEL_1078;
              v213 = *((_QWORD *)&v210->fields.eventEndMessage + v212);
              if ( !v213 )
                goto LABEL_1078;
              if ( LODWORD(v493[1].klass) == *(_DWORD *)(v213 + 24) )
                break;
              v495 = ++v212;
              if ( v211 == v212 )
                goto LABEL_515;
            }
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49FB887 )
            {
              sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
              byte_49FB887 = 1;
            }
            v218 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v218 = TerminalPramsManager_TypeInfo;
            }
            if ( !v218->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
            {
              v219 = (Il2CppObject *)sub_1B64C4C(EventSaveData_TypeInfo);
              System_Object___ctor(v219, 0LL);
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_49FB888 )
              {
                sub_1B64A00(&TerminalPramsManager_TypeInfo, v220);
                byte_49FB888 = 1;
              }
              v223 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v223 = TerminalPramsManager_TypeInfo;
              }
              p_BeforeEventSubmarineSaveData_k__BackingField = (ServantStatusBattleListViewItem_o *)&v223->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
              p_BeforeEventSubmarineSaveData_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v219;
              sub_1B649A4(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v219, v221, v222);
              v218 = TerminalPramsManager_TypeInfo;
            }
            if ( !v218->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v218);
            if ( !byte_49FB887 )
            {
              sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
              byte_49FB887 = 1;
            }
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
            }
            ultimateGetQpText = result->m_Items[19]->fields.ultimateGetQpText;
            if ( !ultimateGetQpText )
              goto LABEL_1078;
            ultimateGetQpText->fields._stringLength = *(_DWORD *)(v213 + 24);
            if ( !byte_49FB887 )
            {
              sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              byte_49FB887 = 1;
            }
            if ( !LODWORD(result->m_Items[24]) )
            {
              j_il2cpp_runtime_class_init_0(result);
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
            }
            v226 = result->m_Items[19]->fields.ultimateGetQpText;
            if ( !v226 )
              goto LABEL_1078;
            result = (BattleResultComponent_resultData_array *)v226[1].klass;
            if ( result
              && (result = (BattleResultComponent_resultData_array *)System_String__Split(
                                                                       (System_String_o *)result,
                                                                       0x2Cu,
                                                                       0,
                                                                       0LL)) != 0LL )
            {
              v227 = result->max_length;
              v228 = (__int64 *)&result->m_Items[1];
              if ( v227 <= 1 )
                v228 = &StringLiteral_1213/*"0"*/;
              v229 = *v228;
              v230 = v227 <= 2 ? &StringLiteral_1213/*"0"*/ : (__int64 *)&result->m_Items[2];
              v231 = *v230;
              v232 = v227 <= 3 ? &StringLiteral_6580/*"False"*/ : (void **)&result->m_Items[3];
            }
            else
            {
              v231 = StringLiteral_1213/*"0"*/;
              v232 = &StringLiteral_6580/*"False"*/;
              v229 = StringLiteral_1213/*"0"*/;
            }
            if ( !v493 )
              goto LABEL_1078;
            v233 = (int32_t)v493[1].klass;
            v481 = (System_String_o *)*v232;
            if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
            result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
                                                                 v233,
                                                                 0LL);
            v234 = (System_Collections_Generic_List_object__o *)result;
            progressQuestId = (System_String_o *)v231;
            v235 = TerminalPramsManager___c_TypeInfo;
            if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
              v235 = TerminalPramsManager___c_TypeInfo;
            }
            _9__657_0 = (System_Predicate_object__o *)v235->static_fields->__9__657_0;
            if ( !_9__657_0 )
            {
              if ( !v235->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v235);
                v235 = TerminalPramsManager___c_TypeInfo;
              }
              v237 = (Il2CppObject *)v235->static_fields->__9;
              _9__657_0 = (System_Predicate_object__o *)sub_1B64C4C(System_Predicate_QuestReleaseEntity__TypeInfo);
              System_Predicate_object____ctor(
                _9__657_0,
                v237,
                Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__657_0__,
                0LL);
              v238 = TerminalPramsManager___c_TypeInfo->static_fields;
              v238->__9__657_0 = (struct System_Predicate_QuestReleaseEntity__o *)_9__657_0;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)&v238->__9__657_0, (int32_t)_9__657_0, v239, v240);
              v209 = &byte_49FB000;
            }
            if ( !v234 )
              goto LABEL_1078;
            v208 = &byte_49FB000;
            v242 = (System_String_o *)v229;
            if ( System_Collections_Generic_List_object___Find(
                   v234,
                   (System_Predicate_T__o *)_9__657_0,
                   (const MethodInfo_34B0630 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
            {
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_49FB754 )
              {
                sub_1B64A00(&TerminalPramsManager_TypeInfo, v241);
                byte_49FB754 = 1;
              }
              v243 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v243 = TerminalPramsManager_TypeInfo;
              }
              QuestId_k__BackingField = v243->static_fields->_QuestId_k__BackingField;
              v242 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
            }
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49FB887 )
            {
              sub_1B64A00(&TerminalPramsManager_TypeInfo, v241);
              byte_49FB887 = 1;
            }
            v244 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v244 = TerminalPramsManager_TypeInfo;
            }
            BeforeEventSubmarineSaveData_k__BackingField = v244->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
            v246 = System_Int64__ToString(v213 + 32, 0LL);
            if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
            result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_36802712(
                                                                 v246,
                                                                 v242,
                                                                 progressQuestId,
                                                                 v481,
                                                                 0LL);
            if ( !BeforeEventSubmarineSaveData_k__BackingField )
              goto LABEL_1078;
            BeforeEventSubmarineSaveData_k__BackingField->fields.value = (struct System_String_o *)result;
            sub_1B649A4(
              (ServantStatusBattleListViewItem_o *)&BeforeEventSubmarineSaveData_k__BackingField->fields.value,
              (int32_t)result,
              v247,
              v248);
            v207 = &byte_49FB000;
          }
LABEL_515:
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49FB754 )
          {
            sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
            byte_49FB754 = 1;
          }
          v249 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v249 = TerminalPramsManager_TypeInfo;
          }
          v250 = v249->static_fields->_QuestId_k__BackingField;
          if ( !v209[1887] )
          {
            sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
            v249 = TerminalPramsManager_TypeInfo;
            v209[1887] = 1;
          }
          if ( !v249->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v249);
            v249 = TerminalPramsManager_TypeInfo;
          }
          PhaseCnt_k__BackingField = v249->static_fields->_PhaseCnt_k__BackingField;
          if ( !v208[2659] )
          {
            sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
            v249 = TerminalPramsManager_TypeInfo;
            v208[2659] = 1;
          }
          if ( !v249->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v249);
            v249 = TerminalPramsManager_TypeInfo;
          }
          IsQuestClear_k__BackingField = v249->static_fields->_IsQuestClear_k__BackingField;
          if ( !v207[2656] )
          {
            sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
            v249 = TerminalPramsManager_TypeInfo;
            v207[2656] = 1;
          }
          if ( !v249->_2.cctor_finished )
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
          result = (BattleResultComponent_resultData_array *)v493;
          if ( !v493 )
            goto LABEL_1078;
          if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)v493, 0LL) )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49FC1DD )
            {
              sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
              byte_49FC1DD = 1;
            }
            v214 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v214 = TerminalPramsManager_TypeInfo;
            }
            v214->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
          }
        }
      }
    }
    goto LABEL_534;
  }
  if ( !*p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                       (EventRaidMaster_o *)v174,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0LL);
  v495 = 0;
  if ( !result )
    goto LABEL_1078;
  v194 = result->max_length;
  v195 = result;
  if ( v194 >= 1 )
  {
    v196 = 0;
    while ( 1 )
    {
      if ( v196 >= (unsigned int)v194 || !*p_max_length )
        goto LABEL_1079;
      if ( !*m_Items )
        goto LABEL_1078;
      v197 = v195->m_Items[v196];
      if ( !v197 )
        goto LABEL_1078;
      RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                          (EventRaidMaster_o *)v174,
                          HIDWORD((*m_Items)->bounds),
                          v197->fields.eventId,
                          0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FB754 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
        byte_49FB754 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v199 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( RaidDeadQuestId == v199->_QuestId_k__BackingField )
        break;
      v196 = v495 + 1;
      v495 = v196;
      v194 = v195->max_length;
      if ( v196 >= v194 )
        goto LABEL_534;
    }
    eventId = v197->fields.eventId;
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      v199 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v199->clearBattleRaidId = eventId;
    result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !result )
      goto LABEL_1078;
    if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)result, RaidDeadQuestId, 0, 0LL) )
    {
      v204 = TerminalPramsManager_TypeInfo;
      v205 = v197->fields.eventId;
LABEL_413:
      if ( !v204->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v204);
        v204 = TerminalPramsManager_TypeInfo;
      }
      v204->static_fields->clearLastBattleRaidId = v205;
    }
  }
LABEL_534:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FBD72 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    byte_49FBD72 = 1;
  }
  v253 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v253 = TerminalPramsManager_TypeInfo;
  }
  v253->static_fields->_IsWarBoardClear_k__BackingField = 0;
  if ( !byte_49FB754 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    v253 = TerminalPramsManager_TypeInfo;
    byte_49FB754 = 1;
  }
  if ( !v253->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v253);
    v253 = TerminalPramsManager_TypeInfo;
  }
  if ( v253->static_fields->_QuestId_k__BackingField >= 1 )
  {
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1078;
    v254 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB754 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FB754 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v254 )
      goto LABEL_1078;
    result = (BattleResultComponent_resultData_array *)QuestMaster__getQuestEntity(
                                                         (QuestMaster_o *)v254,
                                                         result->m_Items[19]->fields.battleId,
                                                         0LL);
    if ( !result )
      goto LABEL_1078;
    v255 = (int)result->m_Items[1];
    if ( !byte_49FBD72 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FBD72 = 1;
    }
    v253 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v253 = TerminalPramsManager_TypeInfo;
    }
    v253->static_fields->_IsWarBoardClear_k__BackingField = v255 == 7;
  }
  if ( !v253->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v253);
  if ( !byte_49FBFF9 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    byte_49FBFF9 = 1;
  }
  v256 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v256 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeRelease_k__BackingField = (ServantStatusBattleListViewItem_o *)&v256->static_fields->_questClearCostumeRelease_k__BackingField;
  p_questClearCostumeRelease_k__BackingField->klass = 0LL;
  sub_1B649A4(p_questClearCostumeRelease_k__BackingField, 0, v175, v176);
  if ( !*p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v260 = (*m_Items)->m_Items[22];
  if ( v260 && v260->fields.eventEndTitle )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FBD65 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FBD65 = 1;
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
        goto LABEL_1079;
      if ( !*m_Items )
        goto LABEL_1078;
      v261 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[22];
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_49FBFF9 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
        byte_49FBFF9 = 1;
      }
      v262 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v262 = TerminalPramsManager_TypeInfo;
      }
      v263 = (ServantStatusBattleListViewItem_o *)&v262->static_fields->_questClearCostumeRelease_k__BackingField;
      v263->klass = v261;
      sub_1B649A4(v263, (int32_t)v261, v258, v259);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FBD70 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    byte_49FBD70 = 1;
  }
  v264 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v264 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeGet_k__BackingField = (ServantStatusBattleListViewItem_o *)&v264->static_fields->_questClearCostumeGet_k__BackingField;
  p_questClearCostumeGet_k__BackingField->klass = 0LL;
  sub_1B649A4(p_questClearCostumeGet_k__BackingField, 0, v258, v259);
  if ( !*p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v268 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[23];
  if ( v268 && v268->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FBD70 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FBD70 = 1;
    }
    v269 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v269 = TerminalPramsManager_TypeInfo;
    }
    v270 = (ServantStatusBattleListViewItem_o *)&v269->static_fields->_questClearCostumeGet_k__BackingField;
    v270->klass = v268;
    sub_1B649A4(v270, (int32_t)v268, v266, v267);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1EC )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    byte_49FC1EC = 1;
  }
  v271 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v271 = TerminalPramsManager_TypeInfo;
  }
  p_eventPointWinReward_k__BackingField = (ServantStatusBattleListViewItem_o *)&v271->static_fields->_eventPointWinReward_k__BackingField;
  p_eventPointWinReward_k__BackingField->klass = 0LL;
  sub_1B649A4(p_eventPointWinReward_k__BackingField, 0, v266, v267);
  if ( !byte_49FC1ED )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    byte_49FC1ED = 1;
  }
  v275 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v275 = TerminalPramsManager_TypeInfo;
  }
  v275->static_fields->_eventPointWinType_k__BackingField = 0;
  if ( v124 && v493 && HIDWORD(v493[9].klass) == 4 )
  {
    v276 = v124->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1078;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !result )
      goto LABEL_1078;
    v277 = (QuestGroupMaster_o *)result;
    GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)result, v276, 4, 0LL);
    v279 = TerminalPramsManager_TypeInfo;
    v280 = GroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v279 = TerminalPramsManager_TypeInfo;
    }
    v279->static_fields->joinGroupId = v280;
    v281 = QuestGroupMaster__GetGroupId(v277, v276, 3, 0LL);
    if ( !byte_49FBA63 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FBA63 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( v281 >= 1 && BYTE4(result->m_Items[19]->fields.oldUserGame) )
    {
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1078;
      v282 = DataManager__GetMasterData_object_(
               (DataManager_o *)result,
               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1078;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventPointMaster___);
      if ( !*p_max_length )
        goto LABEL_1079;
      if ( !*m_Items || !result )
        goto LABEL_1078;
      result = (BattleResultComponent_resultData_array *)EventPointMaster__GetEntity(
                                                           (EventPointMaster_o *)result,
                                                           v281,
                                                           HIDWORD((*m_Items)->bounds),
                                                           0LL);
      v283 = (EventPointEntity_o *)result;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v283 )
        goto LABEL_1078;
      result = (BattleResultComponent_resultData_array *)EventPointEntity__IsGroupOnGroup1(
                                                           v283,
                                                           TerminalPramsManager_TypeInfo->static_fields->joinGroupId,
                                                           0LL);
      if ( !v282 )
        goto LABEL_1078;
      v284 = QuestReleaseMaster__EventPointWinActionType(
               (QuestReleaseMaster_o *)v282,
               v276,
               (unsigned __int8)result & 1,
               0LL);
      if ( !byte_49FC1ED )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
        byte_49FC1ED = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(result->m_Items[19]->fields.warClearReward) = v284;
      if ( !byte_49FC1EE )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        byte_49FC1EE = 1;
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v285 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( v285->_eventPointWinType_k__BackingField )
      {
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          v285 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v285->joinGroupId = -1;
      }
    }
    if ( !*p_max_length )
      goto LABEL_1079;
    if ( !*m_Items )
      goto LABEL_1078;
    v286 = (*m_Items)->m_Items[20];
    if ( v286 )
    {
      v287 = v286->fields.eventEndTitle;
      if ( v287 )
      {
        if ( !(_DWORD)v287 )
          goto LABEL_1079;
        v288 = (ServantStatusBattleListViewItem_c *)v286->fields.eventEndMessage;
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_49FC1EC )
        {
          sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
          byte_49FC1EC = 1;
        }
        v289 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v289 = TerminalPramsManager_TypeInfo;
        }
        v290 = (ServantStatusBattleListViewItem_o *)&v289->static_fields->_eventPointWinReward_k__BackingField;
        v290->klass = v288;
        sub_1B649A4(v290, (int32_t)v288, v273, v274);
      }
    }
  }
  if ( v124 && v493 && HIDWORD(v493[9].klass) == 6 )
  {
    v291 = v124->fields.questId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FC1EF )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FC1EF = 1;
    }
    v292 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v292 = TerminalPramsManager_TypeInfo;
    }
    v292->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = v291;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FBF22 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    byte_49FBF22 = 1;
  }
  v293 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v293 = TerminalPramsManager_TypeInfo;
  }
  p_eventRaceBoost_k__BackingField = (ServantStatusBattleListViewItem_o *)&v293->static_fields->_eventRaceBoost_k__BackingField;
  p_eventRaceBoost_k__BackingField->klass = 0LL;
  sub_1B649A4(p_eventRaceBoost_k__BackingField, 0, v273, v274);
  v297 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v298 = (*m_Items)->m_Items[21];
  if ( v298 && v298->fields.battleId >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FBF22 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FBF22 = 1;
    }
    v299 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v299 = TerminalPramsManager_TypeInfo;
    }
    v300 = (ServantStatusBattleListViewItem_o *)&v299->static_fields->_eventRaceBoost_k__BackingField;
    v300->klass = (ServantStatusBattleListViewItem_c *)v298;
    sub_1B649A4(v300, (int32_t)v298, v295, v296);
    if ( !byte_49FBF0B )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FBF0B = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v301 = *(_QWORD *)&result->m_Items[19]->fields.followerType;
    if ( !byte_49FB754 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_49FB754 = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v301 )
      goto LABEL_1078;
    *(_DWORD *)(v301 + 28) = result->m_Items[19]->fields.battleId;
    v297 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v297 )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v302 = (*m_Items)->m_Items[24];
  if ( v302 )
  {
    v303 = v302->fields.eventEndTitle;
    if ( v303 )
    {
      if ( !(_DWORD)v303 )
        goto LABEL_1079;
      v304 = v302->fields.eventEndMessage;
      if ( !v304 )
        goto LABEL_1078;
      if ( v304->fields._stringLength >= 1 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49FC1F0 )
        {
          sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
          byte_49FC1F0 = 1;
        }
        v305 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v305 = TerminalPramsManager_TypeInfo;
        }
        p_eventTowerReward_k__BackingField = (ServantStatusBattleListViewItem_o *)&v305->static_fields->_eventTowerReward_k__BackingField;
        p_eventTowerReward_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v304;
        sub_1B649A4(p_eventTowerReward_k__BackingField, (int32_t)v304, v295, v296);
        if ( !*p_max_length )
          goto LABEL_1079;
        if ( !*m_Items )
          goto LABEL_1078;
        v309 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[25];
        if ( !byte_49FC1F1 )
        {
          sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
          byte_49FC1F1 = 1;
        }
        v310 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v310 = TerminalPramsManager_TypeInfo;
        }
        p_resultEventTowerRewardInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v310->static_fields->_resultEventTowerRewardInfo_k__BackingField;
        p_resultEventTowerRewardInfo_k__BackingField->klass = v309;
        sub_1B649A4(p_resultEventTowerRewardInfo_k__BackingField, (int32_t)v309, v307, v308);
        v297 = *(_QWORD *)p_max_length;
      }
    }
  }
  if ( !(_DWORD)v297 )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v312 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[26];
  if ( v312 && v312->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FBD6A )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FBD6A = 1;
    }
    v313 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v313 = TerminalPramsManager_TypeInfo;
    }
    p_resultBoostItemRewardInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v313->static_fields->_resultBoostItemRewardInfo_k__BackingField;
    p_resultBoostItemRewardInfo_k__BackingField->klass = v312;
    sub_1B649A4(p_resultBoostItemRewardInfo_k__BackingField, (int32_t)v312, v295, v296);
    v297 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v297 )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v315 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[27];
  if ( v315 && v315->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FBD6B )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FBD6B = 1;
    }
    v316 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v316 = TerminalPramsManager_TypeInfo;
    }
    p_resultEventBoardGameTokenRewardInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v316->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
    p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = v315;
    sub_1B649A4(p_resultEventBoardGameTokenRewardInfo_k__BackingField, (int32_t)v315, v295, v296);
    v297 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v297 )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v318 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[28];
  if ( v318 && v318->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FBD75 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FBD75 = 1;
    }
    v319 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v319 = TerminalPramsManager_TypeInfo;
    }
    p_warClearReward_k__BackingField = (ServantStatusBattleListViewItem_o *)&v319->static_fields->_warClearReward_k__BackingField;
    p_warClearReward_k__BackingField->klass = v318;
    sub_1B649A4(p_warClearReward_k__BackingField, (int32_t)v318, v295, v296);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1F2 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    byte_49FC1F2 = 1;
  }
  v321 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v321 = TerminalPramsManager_TypeInfo;
  }
  v322 = v321->static_fields;
  v322->_oldSuperBoss_k__BackingField = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v322->_oldSuperBoss_k__BackingField, 0, v295, v296);
  if ( !byte_49FC1F3 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v323);
    byte_49FC1F3 = 1;
  }
  v326 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v326 = TerminalPramsManager_TypeInfo;
  }
  v327 = v326->static_fields;
  v327->_oldPersonalBoss_k__BackingField = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v327->_oldPersonalBoss_k__BackingField, 0, v324, v325);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !byte_49FB754 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    byte_49FB754 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_1078;
  WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, result->m_Items[19]->fields.battleId, 0LL);
  result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !result )
    goto LABEL_1078;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)result, WarID_ByQuestID, 0LL);
  if ( WarEntityByWarID )
    v331 = WarEntityByWarID->fields.eventId;
  else
    v331 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !result )
    goto LABEL_1078;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v491,
                                                       v331,
                                                       (const MethodInfo_30D67EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( v483 )
    goto LABEL_1083;
  if ( !*p_max_length )
    goto LABEL_1079;
  result = *m_Items;
  if ( !*m_Items )
    goto LABEL_1078;
  result = (BattleResultComponent_resultData_array *)BattleResultComponent_resultData__checkResultDispFlag(
                                                       (BattleResultComponent_resultData_o *)result,
                                                       256,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
LABEL_1083:
    v334 = *(_QWORD *)p_max_length;
    if ( !(unsigned int)*(_QWORD *)p_max_length )
      goto LABEL_1079;
    if ( !*m_Items )
      goto LABEL_1078;
    if ( (*m_Items)->m_Items[41] )
    {
      result = (BattleResultComponent_resultData_array *)v491;
      if ( v491
        && (result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsPersonalBoss(
                                                                 (EventDetailEntity_o *)v491,
                                                                 0LL),
            v334 = *(_QWORD *)p_max_length,
            ((unsigned __int8)result & 1) != 0) )
      {
        if ( !(_DWORD)v334 )
          goto LABEL_1079;
        if ( !*m_Items )
          goto LABEL_1078;
        v335 = (*m_Items)->m_Items[41];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49FC1F3 )
        {
          sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
          byte_49FC1F3 = 1;
        }
        v336 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v336 = TerminalPramsManager_TypeInfo;
        }
        v337 = v336->static_fields;
        v337->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v335;
        p_oldPersonalBoss_k__BackingField = (ServantStatusBattleListViewItem_o *)&v337->_oldPersonalBoss_k__BackingField;
      }
      else
      {
        if ( !(_DWORD)v334 )
          goto LABEL_1079;
        if ( !*m_Items )
          goto LABEL_1078;
        v335 = (*m_Items)->m_Items[41];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49FC1F2 )
        {
          sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
          byte_49FC1F2 = 1;
        }
        v339 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v339 = TerminalPramsManager_TypeInfo;
        }
        v340 = v339->static_fields;
        v340->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v335;
        p_oldPersonalBoss_k__BackingField = (ServantStatusBattleListViewItem_o *)&v340->_oldSuperBoss_k__BackingField;
      }
      sub_1B649A4(p_oldPersonalBoss_k__BackingField, (int32_t)v335, v332, v333);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1F4 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    byte_49FC1F4 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !result->m_Items[19]->fields.eventTowerReward )
    goto LABEL_1084;
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_49FC1F4 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    byte_49FC1F4 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  eventTowerReward = result->m_Items[19]->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_1078;
  if ( *(_QWORD *)&eventTowerReward->max_length )
  {
    v342 = 1;
  }
  else
  {
LABEL_1084:
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_49FB754 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FB754 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v343 = BalanceConfig_TypeInfo;
    battleId = result->m_Items[19]->fields.battleId;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v343 = BalanceConfig_TypeInfo;
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v342 = battleId == v343->static_fields->OrtFirstQuestId;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_49FBD83 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    byte_49FBD83 = 1;
  }
  v345 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v345 = TerminalPramsManager_TypeInfo;
  }
  v345->static_fields->_isIncomingCall_k__BackingField = v342;
  if ( v491 && EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)v491, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB754 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v346);
      byte_49FB754 = 1;
    }
    v347 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v347 = TerminalPramsManager_TypeInfo;
    }
    v348 = BalanceConfig_TypeInfo;
    v349 = v347->static_fields->_QuestId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v348 = BalanceConfig_TypeInfo;
    }
    if ( v349 == v348->static_fields->OrtLateQuestId )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FB75F )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v346);
        byte_49FB75F = 1;
      }
      v350 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v350 = TerminalPramsManager_TypeInfo;
      }
      v351 = BalanceConfig_TypeInfo;
      v352 = v350->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v351 = BalanceConfig_TypeInfo;
      }
      if ( v352 + 1 == v351->static_fields->OrtLatePhaseBreak )
        goto LABEL_1085;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FB75F )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v346);
        byte_49FB75F = 1;
      }
      v353 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v353 = TerminalPramsManager_TypeInfo;
      }
      v354 = BalanceConfig_TypeInfo;
      v355 = v353->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v354 = BalanceConfig_TypeInfo;
      }
      if ( v355 + 1 == v354->static_fields->OrtLatePhaseDead )
      {
LABEL_1085:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v356 = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserSuperBossMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
        v357 = result;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v356 )
          goto LABEL_1078;
        if ( UserSuperBossMaster__TryGetEntity(
               (UserSuperBossMaster_o *)v356,
               &v490,
               (int64_t)v357,
               v331,
               BalanceConfig_TypeInfo->static_fields->OrtThirdFormId,
               0LL) )
        {
          result = (BattleResultComponent_resultData_array *)sub_1B64AA8(UserSuperBossEntity___TypeInfo, 1LL);
          if ( !result )
            goto LABEL_1078;
          v360 = v490;
          v361 = result;
          if ( v490 )
          {
            result = (BattleResultComponent_resultData_array *)sub_1B64B3C(v490, result->obj.klass->_1.element_class);
            if ( !result )
            {
LABEL_1080:
              v480 = sub_1B64C80();
              sub_1B64B28(v480, 0LL);
            }
          }
          if ( !v361->max_length )
            goto LABEL_1079;
          v361->m_Items[0] = (BattleResultComponent_resultData_o *)v360;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)v361->m_Items, (int32_t)v360, v358, v359);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49FC1F3 )
          {
            sub_1B64A00(&TerminalPramsManager_TypeInfo, v362);
            byte_49FC1F3 = 1;
          }
          v365 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v365 = TerminalPramsManager_TypeInfo;
          }
          v366 = v365->static_fields;
          v366->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v361;
          sub_1B649A4(
            (ServantStatusBattleListViewItem_o *)&v366->_oldPersonalBoss_k__BackingField,
            (int32_t)v361,
            v363,
            v364);
        }
      }
    }
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  TalkResumeInfo = ScriptManager__GetTalkResumeInfo(0LL);
  if ( TalkResumeInfo )
  {
    v368 = TalkResumeInfo;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1078;
    v369 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB754 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FB754 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v369 )
      goto LABEL_1078;
    ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)v369, result->m_Items[19]->fields.battleId, 0LL);
    v372 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !byte_49FB75F )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v371);
      byte_49FB75F = 1;
    }
    v373 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v373 = TerminalPramsManager_TypeInfo;
    }
    v374 = v373->static_fields->_PhaseCnt_k__BackingField;
    winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v368, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd2(
                                                         ScriptQuestId,
                                                         v374 + 1,
                                                         winResult,
                                                         0LL);
    if ( !v372 )
      goto LABEL_1078;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v372, (System_String_o *)result, 0LL) )
      goto LABEL_905;
    v379 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB75F )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v378);
      byte_49FB75F = 1;
    }
    v380 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v380 = TerminalPramsManager_TypeInfo;
    }
    v381 = v380->static_fields->_PhaseCnt_k__BackingField;
    v382 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v368, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd(
                                                         ScriptQuestId,
                                                         v381 + 1,
                                                         v382,
                                                         0LL);
    if ( !v379 )
      goto LABEL_1078;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v379, (System_String_o *)result, 0LL) )
    {
LABEL_905:
      v383 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v383 = TerminalPramsManager_TypeInfo;
      }
      v384 = (int)StringLiteral_1/*""*/;
      p_lastPlayBgmName = (ServantStatusBattleListViewItem_o *)&v383->static_fields->lastPlayBgmName;
      p_lastPlayBgmName->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
      sub_1B649A4(p_lastPlayBgmName, v384, v376, v377);
      TerminalPramsManager__LastPlayBgmNameSave_SaveData(v386);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1078;
  v387 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB754 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    byte_49FB754 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v388 = result->m_Items[19]->fields.battleId;
  if ( !byte_49FB75F )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_49FB75F = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v387 )
    goto LABEL_1078;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)v387, &v496, v388, result->m_Items[19]->fields.eventId + 1, 0LL);
  if ( !byte_49FC1F5 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    byte_49FC1F5 = 1;
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
    if ( !byte_49FC1F5 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FC1F5 = 1;
    }
    v391 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v391 = TerminalPramsManager_TypeInfo;
    }
    result = (BattleResultComponent_resultData_array *)v391->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
    if ( !result )
      goto LABEL_1078;
    *(_QWORD *)&result->max_length = 0LL;
    v392 = &result->max_length;
    *((_QWORD *)v392 - 1) = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)v392, 0, v389, v390);
  }
  if ( !*p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v393 = HIDWORD((*m_Items)->bounds);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB754 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    byte_49FB754 = 1;
  }
  v394 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v394 = TerminalPramsManager_TypeInfo;
  }
  v395 = v394->static_fields->_QuestId_k__BackingField;
  if ( !byte_49FB75F )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    v394 = TerminalPramsManager_TypeInfo;
    byte_49FB75F = 1;
  }
  if ( !v394->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v394);
    v394 = TerminalPramsManager_TypeInfo;
  }
  SpecifiedSceneInfo = QuestPhaseMaster__GetSpecifiedSceneInfo(
                         (QuestPhaseMaster_o *)v387,
                         v393,
                         v395,
                         v394->static_fields->_PhaseCnt_k__BackingField + 1,
                         0LL);
  if ( !byte_49FC1D4 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v396);
    byte_49FC1D4 = 1;
  }
  v400 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v400 = TerminalPramsManager_TypeInfo;
  }
  v401 = v400->static_fields;
  v401->_SpecifiedChangeSceneInfo_k__BackingField = SpecifiedSceneInfo;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&v401->_SpecifiedChangeSceneInfo_k__BackingField,
    (int32_t)SpecifiedSceneInfo,
    v397,
    v398);
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId = 0LL;
  TerminalPramsManager__InitTipsArchiveScrollValueList(v402);
  if ( !*p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v405 = (int32_t)(*m_Items)->m_Items[52];
  v406 = TerminalPramsManager_TypeInfo;
  if ( v405 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FBD67 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FBD67 = 1;
    }
    v406 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v406 = TerminalPramsManager_TypeInfo;
    }
    v406->static_fields->_EventMuralId_k__BackingField = v405;
  }
  if ( !v406->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v406);
    v406 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = (ServantStatusBattleListViewItem_o *)&v406->static_fields->eventHarvestGrowthInfo;
  p_eventHarvestGrowthInfo->klass = 0LL;
  sub_1B649A4(p_eventHarvestGrowthInfo, 0, v403, v404);
  if ( !byte_49FB754 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v408);
    byte_49FB754 = 1;
  }
  v409 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v409 = TerminalPramsManager_TypeInfo;
  }
  result = (BattleResultComponent_resultData_array *)QuestPhaseMaster__GetEntity(
                                                       (QuestPhaseMaster_o *)v387,
                                                       v409->static_fields->_QuestId_k__BackingField,
                                                       1,
                                                       0LL);
  if ( !result )
    goto LABEL_1078;
  v410 = result;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(
                     (QuestPhaseEntity_o *)result,
                     (System_String_o *)StringLiteral_19805/*"harvestGrowthBeforeQuestId"*/,
                     -1,
                     0LL);
  v412 = QuestPhaseEntity__getScriptIntParam(
           (QuestPhaseEntity_o *)v410,
           (System_String_o *)StringLiteral_19804/*"harvestGrowthAfterQuestId"*/,
           -1,
           0LL);
  if ( ScriptIntParam >= 1 )
  {
    v413 = v412;
    if ( v412 >= 1 )
    {
      v414 = sub_1B64C4C(EventHarvestGrowthInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v414, 0LL);
      if ( !v414 )
        goto LABEL_1078;
      bounds = v410->bounds;
      *(_DWORD *)(v414 + 24) = ScriptIntParam;
      *(_DWORD *)(v414 + 28) = v413;
      *(_QWORD *)(v414 + 16) = bounds;
      v418 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v418 = TerminalPramsManager_TypeInfo;
      }
      v419 = (ServantStatusBattleListViewItem_o *)&v418->static_fields->eventHarvestGrowthInfo;
      v419->klass = (ServantStatusBattleListViewItem_c *)v414;
      sub_1B649A4(v419, v414, v415, v416);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1078;
  v420 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB754 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
    byte_49FB754 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v420 )
    goto LABEL_1078;
  QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)v420, result->m_Items[19]->fields.battleId, 0LL);
  if ( QuestEntity )
  {
    v424 = QuestEntity;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB754 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FB754 = 1;
    }
    v425 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v425 = TerminalPramsManager_TypeInfo;
    }
    if ( QuestPhaseMaster__IsAreaImproveQuest(
           (QuestPhaseMaster_o *)v387,
           v425->static_fields->_QuestId_k__BackingField,
           0LL) )
    {
      SpotId = QuestEntity__getSpotId(v424, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
      if ( !*p_max_length )
        goto LABEL_1079;
      if ( !*m_Items || !result )
        goto LABEL_1078;
      CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                             (UserEventCooltimeRewardMaster_o *)result,
                             HIDWORD((*m_Items)->bounds),
                             SpotId,
                             0LL);
      if ( CurrentLevelEntity )
      {
        v428 = CurrentLevelEntity;
        v429 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v429 = TerminalPramsManager_TypeInfo;
        }
        eventAreaImproveResultInfo = v429->static_fields->eventAreaImproveResultInfo;
        if ( eventAreaImproveResultInfo )
        {
          if ( !v429->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v429);
            eventAreaImproveResultInfo = TerminalPramsManager_TypeInfo->static_fields->eventAreaImproveResultInfo;
            if ( !eventAreaImproveResultInfo )
              goto LABEL_1078;
          }
          eventAreaImproveResultInfo->fields.afterLevel = v428->fields.lv;
        }
      }
    }
  }
  result = (BattleResultComponent_resultData_array *)v496;
  if ( v496 )
  {
    result = (BattleResultComponent_resultData_array *)QuestPhaseEntity__GetMoveSceneInfo(v496, 0LL);
    if ( !result )
      goto LABEL_1078;
    if ( *(_QWORD *)&result->max_length )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FB754 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
        byte_49FB754 = 1;
      }
      v431 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v431 = TerminalPramsManager_TypeInfo;
      }
      v495 = v431->static_fields->_QuestId_k__BackingField;
      v433 = System_Int32__ToString((int32_t)&v495, 0LL);
      if ( !byte_49FB75F )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v432);
        byte_49FB75F = 1;
      }
      v434 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v434 = TerminalPramsManager_TypeInfo;
      }
      v495 = v434->static_fields->_PhaseCnt_k__BackingField + 1;
      v435 = System_Int32__ToString((int32_t)&v495, 0LL);
      v439 = System_String__Concat_61396396(v433, (System_String_o *)StringLiteral_869/*","*/, v435, 0LL);
      if ( !byte_49FBF21 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v436);
        byte_49FBF21 = 1;
      }
      v440 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v440 = TerminalPramsManager_TypeInfo;
      }
      p_SceneMoveQuestClearedInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v440->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
      p_SceneMoveQuestClearedInfo_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v439;
      sub_1B649A4(p_SceneMoveQuestClearedInfo_k__BackingField, (int32_t)v439, v437, v438);
    }
  }
  if ( !*p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v442 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[47];
  if ( v442 && v442->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FBD6E )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, isWin);
      byte_49FBD6E = 1;
    }
    v443 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v443 = TerminalPramsManager_TypeInfo;
    }
    p_limitImageAnnounces_k__BackingField = (ServantStatusBattleListViewItem_o *)&v443->static_fields->_limitImageAnnounces_k__BackingField;
    p_limitImageAnnounces_k__BackingField->klass = v442;
    sub_1B649A4(p_limitImageAnnounces_k__BackingField, (int32_t)v442, v422, v423);
  }
  v446 = sub_1B64AA8(string___TypeInfo, 7LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB754 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v445);
    byte_49FB754 = 1;
  }
  v447 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v447 = TerminalPramsManager_TypeInfo;
  }
  v495 = v447->static_fields->_QuestId_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v495, 0LL);
  if ( !v446 )
LABEL_1078:
    sub_1B64C5C(result, isWin);
  if ( !*(_DWORD *)(v446 + 24) )
    goto LABEL_1079;
  *(_QWORD *)(v446 + 32) = result;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v446 + 32), (int32_t)result, v448, v449);
  if ( *(_DWORD *)(v446 + 24) <= 1u )
    goto LABEL_1079;
  v452 = (int)StringLiteral_869/*","*/;
  *(_QWORD *)(v446 + 40) = StringLiteral_869/*","*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v446 + 40), v452, v450, v451);
  if ( !byte_49FB75F )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v453);
    byte_49FB75F = 1;
  }
  v454 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v454 = TerminalPramsManager_TypeInfo;
  }
  v495 = v454->static_fields->_PhaseCnt_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v495, 0LL);
  if ( *(_DWORD *)(v446 + 24) <= 2u )
    goto LABEL_1079;
  *(_QWORD *)(v446 + 48) = result;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v446 + 48), (int32_t)result, v455, v456);
  if ( *(_DWORD *)(v446 + 24) <= 3u )
    goto LABEL_1079;
  v459 = (int)StringLiteral_869/*","*/;
  *(_QWORD *)(v446 + 56) = StringLiteral_869/*","*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v446 + 56), v459, v457, v458);
  if ( !byte_49FBA63 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v460);
    byte_49FBA63 = 1;
  }
  v461 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v461 = TerminalPramsManager_TypeInfo;
  }
  v489[0] = v461->static_fields->_IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v489, 0LL);
  if ( *(_DWORD *)(v446 + 24) <= 4u )
    goto LABEL_1079;
  *(_QWORD *)(v446 + 64) = result;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v446 + 64), (int32_t)result, v462, v463);
  if ( *(_DWORD *)(v446 + 24) <= 5u )
    goto LABEL_1079;
  v466 = (int)StringLiteral_869/*","*/;
  *(_QWORD *)(v446 + 72) = StringLiteral_869/*","*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v446 + 72), v466, v464, v465);
  if ( !byte_49FBA60 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v467);
    byte_49FBA60 = 1;
  }
  v468 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v468 = TerminalPramsManager_TypeInfo;
  }
  v489[0] = v468->static_fields->_IsPhaseClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v489, 0LL);
  if ( *(_DWORD *)(v446 + 24) <= 6u )
    goto LABEL_1079;
  *(_QWORD *)(v446 + 80) = result;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v446 + 80), (int32_t)result, v469, v470);
  v471 = System_String__Concat_61398664((System_String_array *)v446, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_16643/*"afterActionBk"*/, v471, 0LL);
  TerminalPramsManager__SaveClearDatas(resulta, v472);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v473);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v474);
  TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(v475);
  TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(v476);
  if ( TerminalPramsManager__IsTerminalEffectNT2BoardOpen(v477) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB75E )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v478);
      byte_49FB75E = 1;
    }
    v479 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v479 = TerminalPramsManager_TypeInfo;
    }
    v479->static_fields->_WarId_k__BackingField = 0;
    if ( !byte_49FA14E )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v478);
      v479 = TerminalPramsManager_TypeInfo;
      byte_49FA14E = 1;
    }
    if ( !v479->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v479);
      v479 = TerminalPramsManager_TypeInfo;
    }
    v479->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_49FBD5A )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v478);
      v479 = TerminalPramsManager_TypeInfo;
      byte_49FBD5A = 1;
    }
    if ( !v479->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v479);
      v479 = TerminalPramsManager_TypeInfo;
    }
    v479->static_fields->_IsMapReturnFolder_k__BackingField = 0;
    if ( !byte_49FBF16 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v478);
      v479 = TerminalPramsManager_TypeInfo;
      byte_49FBF16 = 1;
    }
    if ( !v479->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v479);
      v479 = TerminalPramsManager_TypeInfo;
    }
    v479->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData((const MethodInfo *)v479);
  }
}


void __fastcall TerminalPramsManager__ResetBlankEarthSpotInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  const MethodInfo *v2; // x0

  if ( (byte_49FC145 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC145 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB74E )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FB74E = 1;
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
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v4; // x0
  ServantStatusBattleListViewItem_o *p_TalkScriptInfo_k__BackingField; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0

  if ( (byte_49FC14F & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC14F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1C6 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC1C6 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_QuestMessageScriptQuestId_k__BackingField = -1;
  if ( !byte_49FC1C7 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_49FC1C7 = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = -1;
  if ( !byte_49FBFFD )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_49FBFFD = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  p_TalkScriptInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v4->static_fields->_TalkScriptInfo_k__BackingField;
  p_TalkScriptInfo_k__BackingField->klass = 0LL;
  sub_1B649A4(p_TalkScriptInfo_k__BackingField, 0, v2, v3);
  if ( !byte_49FC1C8 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v6);
    byte_49FC1C8 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
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

  if ( (byte_49FC193 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_ClearData_TypeInfo, method);
    sub_1B64A00(&JsonManager_TypeInfo, v3);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v4);
    byte_49FC193 = 1;
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
    if ( !byte_49FB754 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
      byte_49FB754 = 1;
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
        sub_1B64C64(v8, method);
      v9 = result->m_Items[0];
      if ( !v9 )
        sub_1B64C5C(0LL, method);
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
  if ( !byte_49FBA63 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49FBA63 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  IsQuestClear_k__BackingField = v10->static_fields->_IsQuestClear_k__BackingField;
  if ( !byte_49FBA60 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49FBA60 = 1;
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
  if ( !byte_49FC1F6 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49FC1F6 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  oldSuperBoss = v10->static_fields->_oldSuperBoss_k__BackingField;
  if ( !byte_49FC1F4 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49FC1F4 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss = v10->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !byte_49FC1F7 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49FC1F7 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventPointWinReward_k__BackingField = v10->static_fields->_eventPointWinReward_k__BackingField;
  if ( !byte_49FC1EE )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49FC1EE = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evpWinType = v10->static_fields->_eventPointWinType_k__BackingField;
  if ( !byte_49FBF0B )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49FBF0B = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evRace = v10->static_fields->_eventRaceBoost_k__BackingField;
  if ( !byte_49FBD6C )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49FBD6C = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeRelease = v10->static_fields->_questClearCostumeRelease_k__BackingField;
  if ( !byte_49FBD64 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49FBD64 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeGet_k__BackingField = v10->static_fields->_questClearCostumeGet_k__BackingField;
  if ( !byte_49FBD68 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49FBD68 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evTowerReward = v10->static_fields->_eventTowerReward_k__BackingField;
  if ( !byte_49FC1F8 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49FC1F8 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v10->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  if ( !byte_49FABBD )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49FABBD = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  IsDispOnly_k__BackingField = v10->static_fields->_IsDispOnly_k__BackingField;
  if ( !byte_49FBD74 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49FBD74 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  warClearRewardIn = v10->static_fields->_warClearReward_k__BackingField;
  if ( !byte_49FC1F9 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49FC1F9 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventActivityPointEffectState = v10->static_fields->_EventActivityPointEffectState_k__BackingField;
  if ( !byte_49FBD65 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49FBD65 = 1;
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
  if ( !byte_49FBD6D )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49FBD6D = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  limitImageAnnounces = v10->static_fields->_limitImageAnnounces_k__BackingField;
  if ( !byte_49FB74D )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49FB74D = 1;
  }
  if ( !v10->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v10);
  if ( !byte_49FBD66 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FBD66 = 1;
  }
  v21 = mQuestRewardInfos;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  isWarBoardClear = IsWarBoardClear_k__BackingField;
  v23 = (TerminalPramsManager_ClearData_o *)sub_1B64C4C(TerminalPramsManager_ClearData_TypeInfo);
  TerminalPramsManager_ClearData___ctor_34426960(
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
  if ( !byte_49FC1FA )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v24);
    byte_49FC1FA = 1;
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

  if ( (byte_49FC199 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11381/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v2);
    byte_49FC199 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1FC )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC1FC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EventRaidDefeatedEffectInfo_k__BackingField = v3->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  if ( !EventRaidDefeatedEffectInfo_k__BackingField )
    sub_1B64C5C(0LL, v1);
  v5 = EventRaidDefeatedEffectInfo__ConvertToStringData(EventRaidDefeatedEffectInfo_k__BackingField, v1);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11381/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v5, 0LL);
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

  if ( (byte_49FC15C & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_13546/*"TerminalPhaseCnt"*/, v2);
    sub_1B64A00(&StringLiteral_13549/*"TerminalQuestId"*/, v3);
    byte_49FC15C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB754 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FB754 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13549/*"TerminalQuestId"*/,
    v4->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_49FB75F )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v5);
    byte_49FB75F = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13546/*"TerminalPhaseCnt"*/,
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

  if ( (byte_49FC19D & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v1);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v2);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v4);
    sub_1B64A00(&int_TypeInfo, v5);
    sub_1B64A00(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v7);
    sub_1B64A00(&string_TypeInfo, v8);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v9);
    sub_1B64A00(&StringLiteral_11390/*"SAVEKEY_QuestRandomGroupList"*/, v10);
    sub_1B64A00(&StringLiteral_24979/*"{0}:{1}"*/, v11);
    sub_1B64A00(&StringLiteral_869/*","*/, v12);
    byte_49FC19D = 1;
  }
  memset(&v29, 0, 32);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB753 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FB753 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestRandomGroupList_k__BackingField = v14->static_fields->_QuestRandomGroupList_k__BackingField;
  if ( !QuestRandomGroupList_k__BackingField )
    sub_1B64C5C(0LL, v1);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v28,
    QuestRandomGroupList_k__BackingField,
    (const MethodInfo_311DB80 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v29.fields._dictionary = v28[0];
  v29.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v28[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v29,
            (const MethodInfo_326ABEC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int)v29.fields._current.fields.key;
    key_high = HIDWORD(v29.fields._current.fields.key);
    if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
      Empty = System_String__Concat_61385136(Empty, (System_String_o *)StringLiteral_869/*","*/, 0LL);
    LODWORD(v28[0]) = key;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v28, v18, v19, v20);
    v27 = key_high;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v22, v23, v24);
    v26 = System_String__Format_61399508((System_String_o *)StringLiteral_24979/*"{0}:{1}"*/, v21, v25, 0LL);
    Empty = System_String__Concat_61385136(Empty, v26, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v29,
    (const MethodInfo_326ACEC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11390/*"SAVEKEY_QuestRandomGroupList"*/, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestReleasedFocusState(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v4; // x1

  if ( (byte_49FC186 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC186 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v2);
  if ( !QuestFocusStateManager )
    sub_1B64C5C(0LL, v4);
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

  if ( (byte_49FC15A & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_13539/*"TerminalEndTime"*/, v2);
    sub_1B64A00(&StringLiteral_11388/*"SAVEKEY_PlayedTerminalEffects"*/, v3);
    sub_1B64A00(&StringLiteral_13535/*"TerminalBeforeEventActivityPoint"*/, v4);
    sub_1B64A00(&StringLiteral_13540/*"TerminalEventDailyPointEventId"*/, v5);
    sub_1B64A00(&StringLiteral_13546/*"TerminalPhaseCnt"*/, v6);
    sub_1B64A00(&StringLiteral_13554/*"TerminalTimeStatusEventId"*/, v7);
    sub_1B64A00(&StringLiteral_13538/*"TerminalDispState"*/, v8);
    sub_1B64A00(&StringLiteral_11385/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v9);
    sub_1B64A00(&StringLiteral_13541/*"TerminalIsDoneShortcut"*/, v10);
    sub_1B64A00(&StringLiteral_11384/*"SAVEKEY_MapModelClearQuestInfo"*/, v11);
    sub_1B64A00(&StringLiteral_11389/*"SAVEKEY_PlayerGenderType"*/, v12);
    sub_1B64A00(&StringLiteral_11377/*"SAVEKEY_ClearEventQuestIds"*/, v13);
    sub_1B64A00(&StringLiteral_11386/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v14);
    sub_1B64A00(&StringLiteral_13549/*"TerminalQuestId"*/, v15);
    sub_1B64A00(&StringLiteral_11396/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v16);
    sub_1B64A00(&StringLiteral_13553/*"TerminalTimeStatusEventDailyPoint"*/, v17);
    sub_1B64A00(&StringLiteral_13558/*"TerminalWarId"*/, v18);
    sub_1B64A00(&StringLiteral_13551/*"TerminalSpotId"*/, v19);
    sub_1B64A00(&StringLiteral_13555/*"TerminalTimeStatusLoopCount"*/, v20);
    sub_1B64A00(&StringLiteral_13536/*"TerminalBeforeEventActivityPointGauge"*/, v21);
    sub_1B64A00(&StringLiteral_11375/*"SAVEKEY_BlankEarthSpotId"*/, v22);
    sub_1B64A00(&StringLiteral_11380/*"SAVEKEY_DataLostBattleAutoReset"*/, v23);
    sub_1B64A00(&StringLiteral_13559/*"TerminalWarStartedIds"*/, v24);
    sub_1B64A00(&StringLiteral_11379/*"SAVEKEY_ConnectMarkEventId"*/, v25);
    sub_1B64A00(&StringLiteral_869/*","*/, v26);
    sub_1B64A00(&StringLiteral_11378/*"SAVEKEY_ConnectMarkAnimationId"*/, v27);
    sub_1B64A00(&StringLiteral_11387/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v28);
    sub_1B64A00(&StringLiteral_11395/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v29);
    byte_49FC15A = 1;
  }
  EndTime_k__BackingField = 0LL;
  MapModelClearQuestId_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB966 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FB966 = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13538/*"TerminalDispState"*/,
    v30->static_fields->_DispState_k__BackingField,
    0LL);
  if ( !byte_49FB757 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v31);
    byte_49FB757 = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13558/*"TerminalWarId"*/,
    v32->static_fields->_WarId_k__BackingField,
    0LL);
  if ( !byte_49FB96A )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v33);
    byte_49FB96A = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13551/*"TerminalSpotId"*/,
    v34->static_fields->_SpotId_k__BackingField,
    0LL);
  if ( !byte_49FB74A )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v35);
    byte_49FB74A = 1;
  }
  v36 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v36 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11375/*"SAVEKEY_BlankEarthSpotId"*/,
    v36->static_fields->_BlankEarthSpotId_k__BackingField,
    0LL);
  if ( !byte_49FB754 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v37);
    byte_49FB754 = 1;
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v38 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13549/*"TerminalQuestId"*/,
    v38->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_49FB75F )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v39);
    byte_49FB75F = 1;
  }
  v40 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v40 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13546/*"TerminalPhaseCnt"*/,
    v40->static_fields->_PhaseCnt_k__BackingField,
    0LL);
  if ( !byte_49FB96B )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    byte_49FB96B = 1;
  }
  v42 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v42 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v42->static_fields->_EndTime_k__BackingField;
  v43 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13539/*"TerminalEndTime"*/, v43, 0LL);
  if ( !byte_49FBD8D )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v44);
    byte_49FBD8D = 1;
  }
  v45 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v45 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13541/*"TerminalIsDoneShortcut"*/,
    v45->static_fields->_IsDoneShortcut_k__BackingField,
    0LL);
  v46 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v46 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_13559/*"TerminalWarStartedIds"*/,
    v46->static_fields->mTerminalWarStartedIds,
    0LL);
  if ( !byte_49FBF13 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v47);
    byte_49FBF13 = 1;
  }
  v48 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v48 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13554/*"TerminalTimeStatusEventId"*/,
    v48->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_49FBF14 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v49);
    byte_49FBF14 = 1;
  }
  v50 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v50 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13555/*"TerminalTimeStatusLoopCount"*/,
    v50->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  if ( !byte_49FC1E0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v51);
    byte_49FC1E0 = 1;
  }
  v52 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v52 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13540/*"TerminalEventDailyPointEventId"*/,
    v52->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_49FC1E1 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v53);
    byte_49FC1E1 = 1;
  }
  v54 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v54 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v54->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v55 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13553/*"TerminalTimeStatusEventDailyPoint"*/, v55, 0LL);
  if ( !byte_49FC1E2 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v56);
    byte_49FC1E2 = 1;
  }
  v57 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13535/*"TerminalBeforeEventActivityPoint"*/,
    v57->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_49FC1E3 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v58);
    byte_49FC1E3 = 1;
  }
  v59 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v59 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13536/*"TerminalBeforeEventActivityPointGauge"*/,
    v59->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  if ( !byte_49FC1E4 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v60);
    byte_49FC1E4 = 1;
  }
  v61 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v61 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11388/*"SAVEKEY_PlayedTerminalEffects"*/,
    v61->static_fields->_PlayedTerminalEffects_k__BackingField,
    0LL);
  if ( !byte_49FBD80 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v62);
    byte_49FBD80 = 1;
  }
  v63 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v63 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11385/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v63->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FBD81 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v64);
    byte_49FBD81 = 1;
  }
  v65 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v65 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11386/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v65->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  if ( !byte_49FBF15 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v66);
    byte_49FBF15 = 1;
  }
  v67 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11387/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v67->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FBF18 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v68);
    byte_49FBF18 = 1;
  }
  v69 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v69 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11396/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v69->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11379/*"SAVEKEY_ConnectMarkEventId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11378/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  if ( !byte_49FBD5C )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v70);
    byte_49FBD5C = 1;
  }
  v71 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v71 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11395/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v71->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  if ( !byte_49FB756 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v72);
    byte_49FB756 = 1;
  }
  v73 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v73 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11377/*"SAVEKEY_ClearEventQuestIds"*/,
    v73->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  if ( !byte_49FB967 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v74);
    byte_49FB967 = 1;
  }
  v75 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v75 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v75->static_fields->_MapModelClearQuestId_k__BackingField;
  v77 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_49FB968 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v76);
    byte_49FB968 = 1;
  }
  v78 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v78 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v78->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v79 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v80 = System_String__Concat_61396396(v77, (System_String_o *)StringLiteral_869/*","*/, v79, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11384/*"SAVEKEY_MapModelClearQuestInfo"*/, v80, 0LL);
  if ( !byte_49FBF19 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v81);
    byte_49FBF19 = 1;
  }
  v82 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v82 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11380/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v82->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1E5 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v83);
    byte_49FC1E5 = 1;
  }
  v84 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v84 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11389/*"SAVEKEY_PlayerGenderType"*/,
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

  if ( (byte_49FC18D & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v5);
    byte_49FC18D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v6);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1B64C5C(0LL, v9);
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
  DataManager_o *Instance; // x0
  const MethodInfo *v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x21
  int32_t klass_high; // w21
  Il2CppObject *MasterData_object; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Collections_Generic_IEnumerable_TSource__o *QuestIdsByTargetAndOpenCondType; // x19
  TerminalPramsManager___c_c *v39; // x8
  System_Func_int__bool__o *_9__662_0; // x21
  Il2CppObject *v41; // x22
  struct TerminalPramsManager___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x19
  System_Func_T__TResult__o *v46; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x19
  System_Func_object__bool__o *v48; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  TerminalPramsManager___c_c *v50; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x19
  System_Func_object__int__o *_9__662_3; // x20
  Il2CppObject *v53; // x21
  struct TerminalPramsManager___c_StaticFields *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v57; // x0
  TerminalPramsManager___c_c *v58; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x19
  System_Func_int__int__o *_9__662_4; // x20
  Il2CppObject *v61; // x21
  struct TerminalPramsManager___c_StaticFields *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  int32_t v66; // w0
  int32_t v67; // w19
  Il2CppObject *v68; // [xsp+0h] [xbp-40h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FC18E & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1B64A00(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v3);
    sub_1B64A00(&Method_DataManager_GetMasterData_SpotMaster___, v4);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_1B64A00(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v6);
    sub_1B64A00(&Method_System_Linq_Enumerable_FirstOrDefault_int___, v7);
    sub_1B64A00(&Method_System_Linq_Enumerable_OrderByDescending_int__int___, v8);
    sub_1B64A00(&Method_System_Linq_Enumerable_Select_int__QuestEntity___, v9);
    sub_1B64A00(&Method_System_Linq_Enumerable_Select_QuestEntity__int___, v10);
    sub_1B64A00(&Method_System_Linq_Enumerable_Where_int___, v11);
    sub_1B64A00(&Method_System_Linq_Enumerable_Where_QuestEntity___, v12);
    sub_1B64A00(&System_Func_int__int__TypeInfo, v13);
    sub_1B64A00(&System_Func_int__bool__TypeInfo, v14);
    sub_1B64A00(&System_Func_QuestEntity__int__TypeInfo, v15);
    sub_1B64A00(&System_Func_QuestEntity__bool__TypeInfo, v16);
    sub_1B64A00(&System_Func_int__QuestEntity__TypeInfo, v17);
    sub_1B64A00(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v18);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v20);
    sub_1B64A00(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__662_0__, v21);
    sub_1B64A00(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__662_3__, v22);
    sub_1B64A00(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__662_4__, v23);
    sub_1B64A00(&Method_TerminalPramsManager___c__DisplayClass662_0__SendOpenedQuestIdToAdManager_b__1__, v24);
    sub_1B64A00(&Method_TerminalPramsManager___c__DisplayClass662_0__SendOpenedQuestIdToAdManager_b__2__, v25);
    sub_1B64A00(&TerminalPramsManager___c__DisplayClass662_0_TypeInfo, v26);
    sub_1B64A00(&TerminalPramsManager___c_TypeInfo, v27);
    byte_49FC18E = 1;
  }
  v68 = 0LL;
  entity = 0LL;
  v28 = sub_1B64C4C(TerminalPramsManager___c__DisplayClass662_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( clearedQuestId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !v28 )
      goto LABEL_43;
    *(_QWORD *)(v28 + 16) = Instance;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)Instance, v31, v32);
    Instance = *(DataManager_o **)(v28 + 16);
    if ( !Instance )
      goto LABEL_43;
    if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, clearedQuestId, 0LL) )
      return;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_SpotMaster___);
    if ( !entity )
      goto LABEL_43;
    v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0LL);
    if ( !v33 )
      goto LABEL_43;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  v33,
                                  &v68,
                                  (int32_t)Instance,
                                  (const MethodInfo_30D67EC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      return;
    if ( !v68 )
      goto LABEL_43;
    klass_high = HIDWORD(v68[1].klass);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( TerminalPramsManager__IsMustPlayMainStory(klass_high, v30) )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_43;
      if ( QuestEntity__GetTypeFlag(entity, 0LL) != 2 )
        return;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v28 + 24) = MasterData_object;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v28 + 24), (int32_t)MasterData_object, v36, v37);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      if ( !Instance )
        goto LABEL_43;
      QuestIdsByTargetAndOpenCondType = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
                                                                                               (QuestReleaseMaster_o *)Instance,
                                                                                               clearedQuestId,
                                                                                               1,
                                                                                               0LL);
      v39 = TerminalPramsManager___c_TypeInfo;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v39 = TerminalPramsManager___c_TypeInfo;
      }
      _9__662_0 = v39->static_fields->__9__662_0;
      if ( !_9__662_0 )
      {
        if ( !v39->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v39);
          v39 = TerminalPramsManager___c_TypeInfo;
        }
        v41 = (Il2CppObject *)v39->static_fields->__9;
        _9__662_0 = (System_Func_int__bool__o *)sub_1B64C4C(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__662_0,
          v41,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__662_0__,
          0LL);
        static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
        static_fields->__9__662_0 = _9__662_0;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__662_0, (int32_t)_9__662_0, v43, v44);
      }
      v45 = System_Linq_Enumerable__Where_int_(
              QuestIdsByTargetAndOpenCondType,
              (System_Func_TSource__bool__o *)_9__662_0,
              (const MethodInfo_2E796BC *)Method_System_Linq_Enumerable_Where_int___);
      v46 = (System_Func_T__TResult__o *)sub_1B64C4C(System_Func_int__QuestEntity__TypeInfo);
      System_Func_int__object____ctor(
        v46,
        (Il2CppObject *)v28,
        Method_TerminalPramsManager___c__DisplayClass662_0__SendOpenedQuestIdToAdManager_b__1__,
        0LL);
      v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v45,
                                                                   (System_Func_TSource__TResult__o *)v46,
                                                                   (const MethodInfo_2E698C0 *)Method_System_Linq_Enumerable_Select_int__QuestEntity___);
      v48 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v48,
        (Il2CppObject *)v28,
        Method_TerminalPramsManager___c__DisplayClass662_0__SendOpenedQuestIdToAdManager_b__2__,
        0LL);
      v49 = System_Linq_Enumerable__Where_object_(
              v47,
              (System_Func_TSource__bool__o *)v48,
              (const MethodInfo_2E79990 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v50 = TerminalPramsManager___c_TypeInfo;
      v51 = v49;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v50 = TerminalPramsManager___c_TypeInfo;
      }
      _9__662_3 = (System_Func_object__int__o *)v50->static_fields->__9__662_3;
      if ( !_9__662_3 )
      {
        if ( !v50->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v50);
          v50 = TerminalPramsManager___c_TypeInfo;
        }
        v53 = (Il2CppObject *)v50->static_fields->__9;
        _9__662_3 = (System_Func_object__int__o *)sub_1B64C4C(System_Func_QuestEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__662_3,
          v53,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__662_3__,
          0LL);
        v54 = TerminalPramsManager___c_TypeInfo->static_fields;
        v54->__9__662_3 = (struct System_Func_QuestEntity__int__o *)_9__662_3;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v54->__9__662_3, (int32_t)_9__662_3, v55, v56);
      }
      v57 = System_Linq_Enumerable__Select_object__int_(
              v51,
              (System_Func_TSource__TResult__o *)_9__662_3,
              (const MethodInfo_2E6B3C4 *)Method_System_Linq_Enumerable_Select_QuestEntity__int___);
      v58 = TerminalPramsManager___c_TypeInfo;
      v59 = (System_Collections_Generic_IEnumerable_TSource__o *)v57;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v58 = TerminalPramsManager___c_TypeInfo;
      }
      _9__662_4 = v58->static_fields->__9__662_4;
      if ( !_9__662_4 )
      {
        if ( !v58->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v58);
          v58 = TerminalPramsManager___c_TypeInfo;
        }
        v61 = (Il2CppObject *)v58->static_fields->__9;
        _9__662_4 = (System_Func_int__int__o *)sub_1B64C4C(System_Func_int__int__TypeInfo);
        System_Func_int__int____ctor(
          _9__662_4,
          v61,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__662_4__,
          0LL);
        v62 = TerminalPramsManager___c_TypeInfo->static_fields;
        v62->__9__662_4 = _9__662_4;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v62->__9__662_4, (int32_t)_9__662_4, v63, v64);
      }
      v65 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_int__int_(
                                                                   v59,
                                                                   (System_Func_TSource__TKey__o *)_9__662_4,
                                                                   (const MethodInfo_2E65DA0 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
      v66 = System_Linq_Enumerable__FirstOrDefault_int_(
              v65,
              (const MethodInfo_2E5E8F8 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      if ( v66 )
      {
        v67 = v66;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetOpenedStoryQuest((AdManager_o *)Instance, v67, 0LL);
          return;
        }
LABEL_43:
        sub_1B64C5C(Instance, v30);
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

  if ( (byte_49FC18C & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v5);
    byte_49FC18C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v6);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1B64C5C(0LL, v9);
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
  QuestTree_o *Instance; // x0
  __int64 v12; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v14; // x1
  MapControl_QuestInfo_o *v15; // x20
  int32_t warId; // w21
  TerminalPramsManager_c *v17; // x0
  Il2CppObject *Master_object; // x21
  bool v19; // w22
  __int64 v20; // x1
  TerminalPramsManager_c *v21; // x0
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  int32_t parentBlankEarthSpotId; // w1
  unsigned __int64 v25; // x21
  TerminalPramsManager_c *v26; // x0
  int32_t v27; // w21
  TerminalPramsManager_c *v28; // x0
  int32_t questPhase; // w21
  int64_t endTime; // x20
  __int64 v31; // x1
  Il2CppObject *v32; // x20
  WarEntity_o *WarEntityByWarID; // x0
  bool IsFolder; // w20
  TerminalPramsManager_c *v35; // x0
  int v36; // w8
  TerminalSceneComponent_c *v37; // x0
  UnityEngine_Object_o *mInstance; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *klass; // x8
  UnityEngine_Object_o *v40; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v41; // x8
  ScrTerminalListTop_o *v42; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v43; // x8
  UnityEngine_Object_o *v44; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v45; // x8
  const MethodInfo *v46; // x0
  unsigned __int64 v47; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_int__o v49; // 0:x0.8

  if ( (byte_49FC14C & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, method);
    sub_1B64A00(&DataManager_TypeInfo, v3);
    sub_1B64A00(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v4);
    sub_1B64A00(&Method_System_Nullable_int__GetValueOrDefault__, v5);
    sub_1B64A00(&Method_System_Nullable_int___ctor__, v6);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64A00(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v9);
    sub_1B64A00(&TerminalSceneComponent_TypeInfo, v10);
    byte_49FC14C = 1;
  }
  entity = 0LL;
  if ( SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    QuestInfo = QuestTree__GetQuestInfo(Instance, questId, 0LL);
    if ( !QuestInfo )
      return;
    v15 = QuestInfo;
    warId = QuestInfo->fields.warId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB75E )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v14);
      byte_49FB75E = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    v17->static_fields->_WarId_k__BackingField = warId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    Instance = (QuestTree_o *)MapControl_QuestInfo__GetSpotID(v15, 0LL);
    if ( !Master_object )
      goto LABEL_142;
    v19 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            (int32_t)Instance,
            (const MethodInfo_30D67EC *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    LODWORD(Master_object) = MapControl_QuestInfo__GetSpotID(v15, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v19 )
    {
      if ( byte_49FB74E )
        goto LABEL_32;
    }
    else
    {
      if ( !byte_49FB75D )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v20);
        byte_49FB75D = 1;
      }
      v21 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v21 = TerminalPramsManager_TypeInfo;
      }
      v21->static_fields->_SpotId_k__BackingField = (int)Master_object;
      WarInfo_k__BackingField = v15->fields._WarInfo_k__BackingField;
      if ( WarInfo_k__BackingField && (Mine = MapControl_WarInfo__GetMine(WarInfo_k__BackingField, 0LL)) != 0LL )
      {
        parentBlankEarthSpotId = Mine->fields.parentBlankEarthSpotId;
        v49 = (System_Nullable_int__o)&v47;
        v47 = 0LL;
        System_Nullable_int____ctor(
          v49,
          parentBlankEarthSpotId,
          (const MethodInfo_35D067C *)Method_System_Nullable_int___ctor__);
        v25 = v47;
      }
      else
      {
        v25 = 0LL;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (Il2CppObject *)HIDWORD(v25);
      if ( byte_49FB74E )
      {
LABEL_32:
        v26 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v26 = TerminalPramsManager_TypeInfo;
        }
        v26->static_fields->_BlankEarthSpotId_k__BackingField = (int)Master_object;
        v27 = v15->fields.questId;
        if ( !v26->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v26);
        if ( !byte_49FB758 )
        {
          sub_1B64A00(&TerminalPramsManager_TypeInfo, v20);
          byte_49FB758 = 1;
        }
        v28 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v28 = TerminalPramsManager_TypeInfo;
        }
        v28->static_fields->_QuestId_k__BackingField = v27;
        questPhase = v15->fields.questPhase;
        if ( !byte_49FB75C )
        {
          sub_1B64A00(&TerminalPramsManager_TypeInfo, v20);
          v28 = TerminalPramsManager_TypeInfo;
          byte_49FB75C = 1;
        }
        if ( !v28->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v28);
          v28 = TerminalPramsManager_TypeInfo;
        }
        v28->static_fields->_PhaseCnt_k__BackingField = questPhase;
        endTime = v15->fields.endTime;
        if ( !byte_49FB759 )
        {
          sub_1B64A00(&TerminalPramsManager_TypeInfo, v20);
          v28 = TerminalPramsManager_TypeInfo;
          byte_49FB759 = 1;
        }
        if ( !v28->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v28);
          v28 = TerminalPramsManager_TypeInfo;
        }
        v28->static_fields->_EndTime_k__BackingField = endTime;
        if ( !byte_49FBD8C )
        {
          sub_1B64A00(&TerminalPramsManager_TypeInfo, v20);
          v28 = TerminalPramsManager_TypeInfo;
          byte_49FBD8C = 1;
        }
        if ( !v28->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v28);
          v28 = TerminalPramsManager_TypeInfo;
        }
        v28->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 1;
        if ( !SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
          goto LABEL_145;
        v32 = SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49FB757 )
        {
          sub_1B64A00(&TerminalPramsManager_TypeInfo, v12);
          byte_49FB757 = 1;
        }
        Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !v32 )
          goto LABEL_142;
        WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(
                             (QuestTree_o *)v32,
                             HIDWORD(Instance[1].fields.questReleaseEntList->klass),
                             0LL);
        if ( WarEntityByWarID )
        {
          IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( IsFolder )
          {
            if ( !byte_49FB75A )
            {
              sub_1B64A00(&TerminalPramsManager_TypeInfo, v31);
              byte_49FB75A = 1;
            }
            v35 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v35 = TerminalPramsManager_TypeInfo;
            }
            v36 = 3;
          }
          else
          {
            if ( !byte_49FB75A )
            {
              sub_1B64A00(&TerminalPramsManager_TypeInfo, v31);
              byte_49FB75A = 1;
            }
            v35 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v35 = TerminalPramsManager_TypeInfo;
            }
            v36 = 2;
          }
        }
        else
        {
LABEL_145:
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49FB75A )
          {
            sub_1B64A00(&TerminalPramsManager_TypeInfo, v31);
            byte_49FB75A = 1;
          }
          v35 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v35 = TerminalPramsManager_TypeInfo;
          }
          v36 = 1;
        }
        v35->static_fields->_DispState_k__BackingField = v36;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49F9DCD )
        {
          sub_1B64A00(&TerminalSceneComponent_TypeInfo, v31);
          byte_49F9DCD = 1;
        }
        v37 = TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v37 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = (UnityEngine_Object_o *)v37->static_fields->mInstance;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
          goto LABEL_134;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49F9DCD )
        {
          sub_1B64A00(&TerminalSceneComponent_TypeInfo, v12);
          byte_49F9DCD = 1;
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
          v40 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49F9DCD )
            {
              sub_1B64A00(&TerminalSceneComponent_TypeInfo, v12);
              byte_49F9DCD = 1;
            }
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            }
            v41 = Instance[1].fields.questReleaseEntList->klass;
            if ( !v41 )
              goto LABEL_142;
            v42 = *(ScrTerminalListTop_o **)&v41->_2.static_fields_size;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49FB757 )
            {
              sub_1B64A00(&TerminalPramsManager_TypeInfo, v12);
              byte_49FB757 = 1;
            }
            Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
            }
            if ( !v42 )
              goto LABEL_142;
            ScrTerminalListTop__RequestChangeTerminalListBG(
              v42,
              HIDWORD(Instance[1].fields.questReleaseEntList->klass),
              0LL);
          }
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_49F9DCD )
          {
            sub_1B64A00(&TerminalSceneComponent_TypeInfo, v12);
            byte_49F9DCD = 1;
          }
          Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
          }
          v43 = Instance[1].fields.questReleaseEntList->klass;
          if ( v43 )
          {
            v44 = *(UnityEngine_Object_o **)&v43->_2.instance_size;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v44, 0LL, 0LL) )
              goto LABEL_134;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49F9DCD )
            {
              sub_1B64A00(&TerminalSceneComponent_TypeInfo, v12);
              byte_49F9DCD = 1;
            }
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            }
            v45 = Instance[1].fields.questReleaseEntList->klass;
            if ( v45 )
            {
              Instance = *(QuestTree_o **)&v45->_2.instance_size;
              if ( Instance )
              {
                TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)Instance, 0LL);
LABEL_134:
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_49FA14E )
                {
                  sub_1B64A00(&TerminalPramsManager_TypeInfo, v12);
                  byte_49FA14E = 1;
                }
                v46 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v46 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                }
                *((_BYTE *)v46[2].virtualMethodPointer + 718) = 1;
                TerminalPramsManager__Save_SaveData(v46);
                return;
              }
            }
          }
        }
LABEL_142:
        sub_1B64C5C(Instance, v12);
      }
    }
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v20);
    byte_49FB74E = 1;
    goto LABEL_32;
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
  Il2CppObject *Instance; // x19
  TitleInfoControl_o *v10; // x0
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v12; // x19
  bool IsFolder; // w20
  TerminalPramsManager_c *v14; // x0
  int v15; // w8
  int32_t parentBlankEarthSpotId; // w19
  TerminalPramsManager_c *v17; // x0
  TerminalSceneComponent_c *v18; // x0
  UnityEngine_Object_o *mInstance; // x19
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_Object_o *v21; // x19
  UnityEngine_GameObject_c *v22; // x8
  ScrTerminalListTop_o *v23; // x19
  UnityEngine_GameObject_c *v24; // x8
  UnityEngine_Object_o *v25; // x19
  UnityEngine_GameObject_c *v26; // x8
  const MethodInfo *v27; // x0

  if ( (byte_49FC14D & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    sub_1B64A00(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v4);
    sub_1B64A00(&TerminalSceneComponent_TypeInfo, v5);
    byte_49FC14D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB75E )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FB75E = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_WarId_k__BackingField = warId;
  if ( !SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
    goto LABEL_108;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB757 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v8);
    byte_49FB757 = 1;
  }
  v10 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_105;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(
                       (QuestTree_o *)Instance,
                       HIDWORD(v10->fields.mEventRoot->klass),
                       0LL);
  if ( WarEntityByWarID )
  {
    v12 = WarEntityByWarID;
    IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( IsFolder )
    {
      if ( !byte_49FB75A )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v7);
        byte_49FB75A = 1;
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
      if ( !byte_49FB75A )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v7);
        byte_49FB75A = 1;
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
LABEL_108:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB75A )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v7);
      byte_49FB75A = 1;
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
  if ( !byte_49FB74E )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v7);
    byte_49FB74E = 1;
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
  if ( !byte_49F9DCD )
  {
    sub_1B64A00(&TerminalSceneComponent_TypeInfo, v7);
    byte_49F9DCD = 1;
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
    if ( !byte_49F9DCD )
    {
      sub_1B64A00(&TerminalSceneComponent_TypeInfo, v8);
      byte_49F9DCD = 1;
    }
    v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v10->fields.mEventRoot->klass;
    if ( !klass )
      goto LABEL_105;
    v21 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_49F9DCD )
      {
        sub_1B64A00(&TerminalSceneComponent_TypeInfo, v8);
        byte_49F9DCD = 1;
      }
      v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      }
      v22 = v10->fields.mEventRoot->klass;
      if ( !v22 )
        goto LABEL_105;
      v23 = *(ScrTerminalListTop_o **)&v22->_2.static_fields_size;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FB757 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v8);
        byte_49FB757 = 1;
      }
      v10 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v10 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v23 )
        goto LABEL_105;
      ScrTerminalListTop__RequestChangeTerminalListBG(v23, HIDWORD(v10->fields.mEventRoot->klass), 0LL);
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F9DCD )
    {
      sub_1B64A00(&TerminalSceneComponent_TypeInfo, v8);
      byte_49F9DCD = 1;
    }
    v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    v24 = v10->fields.mEventRoot->klass;
    if ( !v24 )
      goto LABEL_105;
    v25 = *(UnityEngine_Object_o **)&v24->_2.instance_size;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_49F9DCD )
      {
        sub_1B64A00(&TerminalSceneComponent_TypeInfo, v8);
        byte_49F9DCD = 1;
      }
      v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      }
      v26 = v10->fields.mEventRoot->klass;
      if ( v26 )
      {
        v10 = *(TitleInfoControl_o **)&v26->_2.instance_size;
        if ( v10 )
        {
          TitleInfoControl__CloseEventBannerWindow(v10, 0LL);
          goto LABEL_98;
        }
      }
LABEL_105:
      sub_1B64C5C(v10, v8);
    }
  }
LABEL_98:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FA14E )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v8);
    byte_49FA14E = 1;
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
  WarEntity_o *v10; // x20
  TerminalPramsManager_c *v11; // x0
  int32_t PrioredParentId; // w21
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
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_Object_o *v27; // x20
  UnityEngine_GameObject_c *v28; // x8
  ScrTerminalListTop_o *v29; // x20
  UnityEngine_GameObject_c *v30; // x8
  UnityEngine_Object_o *v31; // x20
  UnityEngine_GameObject_c *v32; // x8
  const MethodInfo *v33; // x0

  if ( (byte_49FC14E & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    sub_1B64A00(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v4);
    sub_1B64A00(&TerminalSceneComponent_TypeInfo, v5);
    byte_49FC14E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB75E )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FB75E = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_49FB75A )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_49FB75A = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_DispState_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( Instance )
  {
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0LL);
    if ( WarEntityByWarID )
    {
      v10 = WarEntityByWarID;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FBD7F )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v9);
        byte_49FBD7F = 1;
      }
      v11 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v11 = TerminalPramsManager_TypeInfo;
      }
      v11->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField = warId;
      PrioredParentId = WarEntity__GetPrioredParentId(v10, 0LL);
      v13 = SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( v13 )
      {
        v14 = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)v13, PrioredParentId, 0LL);
        if ( v14 )
        {
          v16 = v14;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49FB75E )
          {
            sub_1B64A00(&TerminalPramsManager_TypeInfo, v15);
            byte_49FB75E = 1;
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
            if ( !byte_49FB75A )
            {
              sub_1B64A00(&TerminalPramsManager_TypeInfo, v18);
              byte_49FB75A = 1;
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
          if ( !byte_49FB74E )
          {
            sub_1B64A00(&TerminalPramsManager_TypeInfo, v18);
            byte_49FB74E = 1;
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
          if ( !byte_49F9DCD )
          {
            sub_1B64A00(&TerminalSceneComponent_TypeInfo, v18);
            byte_49F9DCD = 1;
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
            goto LABEL_96;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_49F9DCD )
          {
            sub_1B64A00(&TerminalSceneComponent_TypeInfo, v24);
            byte_49F9DCD = 1;
          }
          v25 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v25 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
          }
          klass = v25->fields.mEventRoot->klass;
          if ( klass )
          {
            v27 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
            {
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_49F9DCD )
              {
                sub_1B64A00(&TerminalSceneComponent_TypeInfo, v24);
                byte_49F9DCD = 1;
              }
              v25 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v25 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
              }
              v28 = v25->fields.mEventRoot->klass;
              if ( !v28 )
                goto LABEL_104;
              v29 = *(ScrTerminalListTop_o **)&v28->_2.static_fields_size;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_49FB757 )
              {
                sub_1B64A00(&TerminalPramsManager_TypeInfo, v24);
                byte_49FB757 = 1;
              }
              v25 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v25 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
              }
              if ( !v29 )
                goto LABEL_104;
              ScrTerminalListTop__RequestChangeTerminalListBG(v29, HIDWORD(v25->fields.mEventRoot->klass), 0LL);
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49F9DCD )
            {
              sub_1B64A00(&TerminalSceneComponent_TypeInfo, v24);
              byte_49F9DCD = 1;
            }
            v25 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v25 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
            }
            v30 = v25->fields.mEventRoot->klass;
            if ( v30 )
            {
              v31 = *(UnityEngine_Object_o **)&v30->_2.instance_size;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
                goto LABEL_96;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_49F9DCD )
              {
                sub_1B64A00(&TerminalSceneComponent_TypeInfo, v24);
                byte_49F9DCD = 1;
              }
              v25 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v25 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
              }
              v32 = v25->fields.mEventRoot->klass;
              if ( v32 )
              {
                v25 = *(TitleInfoControl_o **)&v32->_2.instance_size;
                if ( v25 )
                {
                  TitleInfoControl__CloseEventBannerWindow(v25, 0LL);
LABEL_96:
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  if ( !byte_49FA14E )
                  {
                    sub_1B64A00(&TerminalPramsManager_TypeInfo, v24);
                    byte_49FA14E = 1;
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
LABEL_104:
          sub_1B64C5C(v25, v24);
        }
      }
    }
  }
}


void __fastcall TerminalPramsManager__SetBattleResultCampaignBonus(
        BattleResultComponent_resultData_o *result,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleResultComponent_resultData_o *v4; // x19
  struct CommonUI_CampaignDirectBonusData_array *campaignDirectBonus; // x20
  TerminalPramsManager_c *v6; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  const MethodInfo *v8; // x0
  struct CommonUI_CampaignBonusData_array *campaignbonus; // x19

  v4 = result;
  if ( (byte_49FC18A & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_o *)sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC18A = 1;
  }
  if ( !v4 )
    sub_1B64C5C(result, method);
  campaignDirectBonus = v4->fields.campaignDirectBonus;
  if ( campaignDirectBonus && *(_QWORD *)&campaignDirectBonus->max_length )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FC1DC )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
      byte_49FC1DC = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v6->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = campaignDirectBonus;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
      (int32_t)campaignDirectBonus,
      v2,
      v3);
    TerminalPramsManager__CampaignDirectBonus_SaveData(v8);
  }
  campaignbonus = v4->fields.campaignbonus;
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
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_49FC175 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC175 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1DB )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC1DB = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignBonus_k__BackingField = campaignBonuses;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_CampaignBonus_k__BackingField,
    (int32_t)campaignBonuses,
    v2,
    v3);
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
  int32_t v11; // w2
  int32_t v12; // w3
  TerminalPramsManager_c *v13; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x0
  __int64 v16; // x1
  TerminalPramsManager_c *v17; // x0

  if ( (byte_49FC181 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&idx);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v6);
    sub_1B64A00(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v7);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v8);
    byte_49FC181 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( !v9->static_fields->folderLastIdxs )
  {
    v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v10,
      (const MethodInfo_311CDE4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->folderLastIdxs = v10;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->folderLastIdxs, (int32_t)v10, v11, v12);
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
          (const MethodInfo_311EB60 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__),
        (folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs) == 0LL) )
  {
    sub_1B64C5C(folderLastIdxs, *(_QWORD *)&idx);
  }
  System_Collections_Generic_Dictionary_int__int___Add(
    folderLastIdxs,
    warId,
    idx,
    (const MethodInfo_311D7A8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !byte_49FC1CB )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v16);
    byte_49FC1CB = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_LastSelectQuestIndex_k__BackingField = idx;
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

  if ( (byte_49FC187 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, *(_QWORD *)&state);
    byte_49FC187 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v5);
  if ( !QuestFocusStateManager )
    sub_1B64C5C(0LL, v7);
  QuestFocusStateManager__SetFocusState(QuestFocusStateManager, questId, state, 0LL);
}


void __fastcall TerminalPramsManager__SetQuestRewardInfo(
        BattleResultComponent_resultData_array *result,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  ServantStatusBattleListViewItem_o *p_mQuestRewardInfos; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  BattleResultComponent_resultData_o *v11; // x8
  ServantStatusBattleListViewItem_c *rewardInfos; // x20
  TerminalPramsManager_c *v13; // x0
  ServantStatusBattleListViewItem_o *v14; // x0
  TerminalPramsManager_c *v15; // x0
  ServantStatusBattleListViewItem_o *p_mQuestPhaseRewardInfos; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  BattleResultComponent_resultData_o *v19; // x8
  ServantStatusBattleListViewItem_c *resultQuestPhaseRewardInfos; // x20
  TerminalPramsManager_c *v21; // x0
  ServantStatusBattleListViewItem_o *v22; // x0
  TerminalPramsManager_c *v23; // x0
  ServantStatusBattleListViewItem_o *p_mQuestResultAfterEventRewardInfos; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  BattleResultComponent_resultData_o *v27; // x8
  struct BattleDropItem_array *resultAfterEventRewardInfos; // x19
  TerminalPramsManager_c *v29; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC18B & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC18B = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (ServantStatusBattleListViewItem_o *)&v5->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0LL;
  sub_1B649A4(p_mQuestRewardInfos, 0, v2, v3);
  if ( !result )
    goto LABEL_32;
  if ( !result->max_length )
    goto LABEL_33;
  v11 = result->m_Items[0];
  if ( !v11 )
    goto LABEL_32;
  rewardInfos = (ServantStatusBattleListViewItem_c *)v11->fields.rewardInfos;
  if ( rewardInfos && rewardInfos->_1.namespaze )
  {
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v14 = (ServantStatusBattleListViewItem_o *)&v13->static_fields->mQuestRewardInfos;
    v14->klass = rewardInfos;
    sub_1B649A4(v14, (int32_t)rewardInfos, v9, v10);
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = (ServantStatusBattleListViewItem_o *)&v15->static_fields->mQuestPhaseRewardInfos;
  p_mQuestPhaseRewardInfos->klass = 0LL;
  sub_1B649A4(p_mQuestPhaseRewardInfos, 0, v9, v10);
  if ( !result->max_length )
    goto LABEL_33;
  v19 = result->m_Items[0];
  if ( !v19 )
    goto LABEL_32;
  resultQuestPhaseRewardInfos = (ServantStatusBattleListViewItem_c *)v19->fields.resultQuestPhaseRewardInfos;
  if ( resultQuestPhaseRewardInfos && resultQuestPhaseRewardInfos->_1.namespaze )
  {
    v21 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v21 = TerminalPramsManager_TypeInfo;
    }
    v22 = (ServantStatusBattleListViewItem_o *)&v21->static_fields->mQuestPhaseRewardInfos;
    v22->klass = resultQuestPhaseRewardInfos;
    sub_1B649A4(v22, (int32_t)resultQuestPhaseRewardInfos, v17, v18);
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestResultAfterEventRewardInfos = (ServantStatusBattleListViewItem_o *)&v23->static_fields->mQuestResultAfterEventRewardInfos;
  p_mQuestResultAfterEventRewardInfos->klass = 0LL;
  sub_1B649A4(p_mQuestResultAfterEventRewardInfos, 0, v17, v18);
  if ( !result->max_length )
LABEL_33:
    sub_1B64C64(v7, v8);
  v27 = result->m_Items[0];
  if ( !v27 )
LABEL_32:
    sub_1B64C5C(v7, v8);
  resultAfterEventRewardInfos = v27->fields.resultAfterEventRewardInfos;
  if ( resultAfterEventRewardInfos && *(_QWORD *)&resultAfterEventRewardInfos->max_length )
  {
    v29 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v29 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v29->static_fields;
    static_fields->mQuestResultAfterEventRewardInfos = resultAfterEventRewardInfos;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&static_fields->mQuestResultAfterEventRewardInfos,
      (int32_t)resultAfterEventRewardInfos,
      v25,
      v26);
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
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = war_id;
  if ( (byte_49FC17F & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_43/*"\n"*/, v3);
    byte_49FC17F = 1;
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
    v6 = System_Int32__ToString((int32_t)&v12, 0LL);
    v7 = System_String__Concat_61396396(mTerminalWarStartedIds, v6, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
    static_fields->mTerminalWarStartedIds = v7;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->mTerminalWarStartedIds, (int32_t)v7, v9, v10);
    TerminalPramsManager__Save_SaveData(v11);
  }
}


void __fastcall TerminalPramsManager__SpotIdSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC15B & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_13551/*"TerminalSpotId"*/, v2);
    byte_49FC15B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB96A )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FB96A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13551/*"TerminalSpotId"*/,
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

  if ( (byte_49FC161 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_13535/*"TerminalBeforeEventActivityPoint"*/, v2);
    sub_1B64A00(&StringLiteral_13536/*"TerminalBeforeEventActivityPointGauge"*/, v3);
    byte_49FC161 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1E2 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC1E2 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13535/*"TerminalBeforeEventActivityPoint"*/,
    v4->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_49FC1E3 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v5);
    byte_49FC1E3 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13536/*"TerminalBeforeEventActivityPointGauge"*/,
    v6->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfoDispSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC166 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11391/*"SAVEKEY_TerminalConquestInfoDisp"*/, v2);
    byte_49FC166 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11391/*"SAVEKEY_TerminalConquestInfoDisp"*/, v3->static_fields->eventConquestInfoDisp, 0LL);
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

  if ( (byte_49FC165 & 1) == 0 )
  {
    sub_1B64A00(&EventConquestInfo___TypeInfo, v1);
    sub_1B64A00(&JsonManager_TypeInfo, v2);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v3);
    sub_1B64A00(&StringLiteral_11392/*"SAVEKEY_TerminalConquestInfos"*/, v4);
    sub_1B64A00(&StringLiteral_11391/*"SAVEKEY_TerminalConquestInfoDisp"*/, v5);
    byte_49FC165 = 1;
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
    eventConquestInfos = (struct EventConquestInfo_array *)sub_1B64AA8(EventConquestInfo___TypeInfo, 0LL);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(&eventConquestInfos->obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11392/*"SAVEKEY_TerminalConquestInfos"*/, v8, 0LL);
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11391/*"SAVEKEY_TerminalConquestInfoDisp"*/, v9->static_fields->eventConquestInfoDisp, 0LL);
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

  if ( (byte_49FC167 & 1) == 0 )
  {
    sub_1B64A00(&EventHarvestGrowthInfo_TypeInfo, v1);
    sub_1B64A00(&JsonManager_TypeInfo, v2);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v3);
    sub_1B64A00(&StringLiteral_11393/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v4);
    byte_49FC167 = 1;
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
    eventHarvestGrowthInfo = (Il2CppObject *)sub_1B64C4C(EventHarvestGrowthInfo_TypeInfo);
    System_Object___ctor(eventHarvestGrowthInfo, 0LL);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__toJson(eventHarvestGrowthInfo, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11393/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v7, 0LL);
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

  if ( (byte_49FC163 & 1) == 0 )
  {
    sub_1B64A00(&JsonManager_TypeInfo, v1);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v2);
    sub_1B64A00(&StringLiteral_13537/*"TerminalBeforeEventSubmarinePointData"*/, v3);
    byte_49FC163 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB887 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FB887 = 1;
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
    if ( !byte_49FB887 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
      byte_49FB887 = 1;
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
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13537/*"TerminalBeforeEventSubmarinePointData"*/, v7, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC16F & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11395/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v2);
    byte_49FC16F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FBD5C )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FBD5C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11395/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v3->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC16E & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11396/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v2);
    byte_49FC16E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FBF18 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FBF18 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11396/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v3->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalTransitionInfoSave_SaveData(
        TerminalTransitionInfo_o *terminalTransitionInfo,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_49FC160 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_13557/*"TerminalTransitionInfoVoiceAssetName"*/, method);
    sub_1B64A00(&StringLiteral_13556/*"TerminalTransitionInfoMissionId"*/, v3);
    byte_49FC160 = 1;
  }
  if ( terminalTransitionInfo )
  {
    UnityEngine_PlayerPrefs__SetInt(
      (System_String_o *)StringLiteral_13556/*"TerminalTransitionInfoMissionId"*/,
      terminalTransitionInfo->fields.missionId,
      0LL);
    UnityEngine_PlayerPrefs__SetString(
      (System_String_o *)StringLiteral_13557/*"TerminalTransitionInfoVoiceAssetName"*/,
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

  if ( (byte_49FC198 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, *(_QWORD *)&day);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v10);
    byte_49FC198 = 1;
  }
  value = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FC1FC )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    byte_49FC1FC = 1;
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
          (const MethodInfo_3127A04 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v13 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v13,
      (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
    value = (Il2CppObject *)v13;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FC1FC )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
      byte_49FC1FC = 1;
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
          (const MethodInfo_3126278 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        goto LABEL_24;
      }
    }
LABEL_30:
    sub_1B64C5C(v11, *(_QWORD *)&day);
  }
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)value,
         day,
         (const MethodInfo_3492B48 *)Method_System_Collections_Generic_List_int__Contains__) )
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
      *(const MethodInfo_34927D0 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
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

  if ( (byte_49FC070 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC070 = 1;
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

  if ( (byte_49FC08E & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC08E = 1;
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
  System_Collections_Generic_List_string__c *klass; // x8
  __int64 v7; // x8
  System_Collections_Generic_List_string__c *v8; // x8
  __int64 v9; // x8
  int32_t *p_QuestId_k__BackingField; // x8
  TerminalPramsManager_c *v11; // x0

  if ( (byte_49FC0C2 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v2);
    sub_1B64A00(&TerminalSceneComponent_TypeInfo, v3);
    byte_49FC0C2 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__checkNowScene(Instance, 34, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F9DCD )
    {
      sub_1B64A00(&TerminalSceneComponent_TypeInfo, v5);
      byte_49F9DCD = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = Instance[1].fields.m_listUnloadScenes->klass;
    if ( !klass )
      goto LABEL_31;
    v7 = *(_QWORD *)&klass->_2.thread_static_fields_offset;
    if ( !v7 )
      goto LABEL_31;
    if ( *(_DWORD *)(v7 + 412) )
    {
      if ( !LODWORD(Instance[2].fields.targetRoot) )
        j_il2cpp_runtime_class_init_0(Instance);
      if ( !byte_49F9DCD )
      {
        sub_1B64A00(&TerminalSceneComponent_TypeInfo, v5);
        byte_49F9DCD = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v8 = Instance[1].fields.m_listUnloadScenes->klass;
      if ( v8 )
      {
        v9 = *(_QWORD *)&v8->_2.thread_static_fields_offset;
        if ( v9 )
        {
          p_QuestId_k__BackingField = (int32_t *)(v9 + 412);
          return *p_QuestId_k__BackingField;
        }
      }
LABEL_31:
      sub_1B64C5C(Instance, v5);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB754 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v5);
    byte_49FB754 = 1;
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

  if ( (byte_49FC0DD & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0DD = 1;
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

  if ( (byte_49FC0DF & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0DF = 1;
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

  if ( (byte_49FC0E3 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0E3 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_49FC0D1 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0D1 = 1;
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

  if ( (byte_49FC103 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC103 = 1;
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

  if ( (byte_49FC107 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC107 = 1;
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

  if ( (byte_49FC101 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC101 = 1;
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

  if ( (byte_49FC105 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC105 = 1;
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

  if ( (byte_49FC115 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC115 = 1;
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

  if ( (byte_49FC0AA & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0AA = 1;
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

  if ( (byte_49FC0AC & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0AC = 1;
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

  if ( (byte_49FC0DB & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0DB = 1;
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

  if ( (byte_49FC09A & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC09A = 1;
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

  if ( (byte_49FC0A2 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0A2 = 1;
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

  if ( (byte_49FC09C & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC09C = 1;
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

  if ( (byte_49FC050 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC050 = 1;
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

  if ( (byte_49FC090 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC090 = 1;
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

  if ( (byte_49FC0E1 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0E1 = 1;
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

  if ( (byte_49FC0E9 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0E9 = 1;
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

  if ( (byte_49FC0D3 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0D3 = 1;
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

  if ( (byte_49FC0CF & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0CF = 1;
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

  if ( (byte_49FC07C & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC07C = 1;
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

  if ( (byte_49FC0E5 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0E5 = 1;
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

  if ( (byte_49FC10D & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC10D = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_49FC12A & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC12A = 1;
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

  if ( (byte_49FC12C & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC12C = 1;
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

  if ( (byte_49FC148 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC148 = 1;
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

  if ( (byte_49FC124 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC124 = 1;
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

  if ( (byte_49FC126 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC126 = 1;
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

  if ( (byte_49FC142 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC142 = 1;
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

  if ( (byte_49FC109 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC109 = 1;
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

  if ( (byte_49FC12E & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC12E = 1;
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

  if ( (byte_49FC098 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC098 = 1;
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

  if ( (byte_49FC0A4 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0A4 = 1;
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

  if ( (byte_49FC0A0 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0A0 = 1;
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

  if ( (byte_49FC111 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC111 = 1;
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

  if ( (byte_49FC072 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC072 = 1;
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

  if ( (byte_49FC074 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC074 = 1;
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

  if ( (byte_49FC082 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC082 = 1;
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

  if ( (byte_49FC076 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC076 = 1;
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

  if ( (byte_49FC05C & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC05C = 1;
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

  if ( (byte_49FC0EB & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0EB = 1;
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

  if ( (byte_49FC064 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC064 = 1;
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

  if ( (byte_49FC062 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC062 = 1;
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

  if ( (byte_49FC11A & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC11A = 1;
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

  if ( (byte_49FC128 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC128 = 1;
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

  if ( (byte_49FC07A & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC07A = 1;
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

  if ( (byte_49FC080 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC080 = 1;
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

  if ( (byte_49FC086 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC086 = 1;
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

  if ( (byte_49FC0ED & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0ED = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_49FC084 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC084 = 1;
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

  if ( (byte_49FC0FB & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0FB = 1;
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

  if ( (byte_49FC0FD & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0FD = 1;
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

  if ( (byte_49FC0FF & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0FF = 1;
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

  if ( (byte_49FC0A6 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0A6 = 1;
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

  if ( (byte_49FC07E & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC07E = 1;
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

  if ( (byte_49FC088 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC088 = 1;
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

  if ( (byte_49FC140 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC140 = 1;
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

  if ( (byte_49FC09E & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC09E = 1;
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

  if ( (byte_49FC130 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC130 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_49FC092 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC092 = 1;
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

  if ( (byte_49FC078 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC078 = 1;
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

  if ( (byte_49FC06C & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC06C = 1;
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

  if ( (byte_49FC06A & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC06A = 1;
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

  if ( (byte_49FC06E & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC06E = 1;
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

  if ( (byte_49FC096 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC096 = 1;
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

  if ( (byte_49FC094 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC094 = 1;
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

  if ( (byte_49FC14A & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC14A = 1;
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

  if ( (byte_49FC08A & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC08A = 1;
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

  if ( (byte_49FC10B & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC10B = 1;
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

  if ( (byte_49FC117 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC117 = 1;
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

  if ( (byte_49FC05A & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC05A = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_49FC0F9 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0F9 = 1;
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

  if ( (byte_49FC0A8 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0A8 = 1;
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
  int32_t v5; // w2
  int32_t v6; // w3
  TerminalPramsManager_c *v7; // x0
  ServantStatusBattleListViewItem_o *p_questFocusStateManager; // x0

  if ( (byte_49FC119 & 1) == 0 )
  {
    sub_1B64A00(&QuestFocusStateManager_TypeInfo, v1);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v2);
    byte_49FC119 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->questFocusStateManager )
  {
    v4 = (QuestFocusStateManager_o *)sub_1B64C4C(QuestFocusStateManager_TypeInfo);
    QuestFocusStateManager___ctor(v4, 0LL);
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    p_questFocusStateManager = (ServantStatusBattleListViewItem_o *)&v7->static_fields->questFocusStateManager;
    p_questFocusStateManager->klass = (ServantStatusBattleListViewItem_c *)v4;
    sub_1B649A4(p_questFocusStateManager, (int32_t)v4, v5, v6);
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

  if ( (byte_49FC058 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC058 = 1;
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

  if ( (byte_49FC132 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC132 = 1;
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

  if ( (byte_49FC134 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC134 = 1;
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

  if ( (byte_49FC0F7 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0F7 = 1;
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

  if ( (byte_49FC066 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC066 = 1;
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

  if ( (byte_49FC08C & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC08C = 1;
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

  if ( (byte_49FC10F & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC10F = 1;
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

  if ( (byte_49FC068 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC068 = 1;
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

  if ( (byte_49FC060 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC060 = 1;
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

  if ( (byte_49FC05E & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC05E = 1;
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

  if ( (byte_49FC113 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC113 = 1;
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

  if ( (byte_49FC0B0 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0B0 = 1;
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

  if ( (byte_49FC056 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC056 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_49FC054 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC054 = 1;
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

  if ( (byte_49FC136 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC136 = 1;
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

  if ( (byte_49FC0D7 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0D7 = 1;
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

  if ( (byte_49FC0D9 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0D9 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_49FC0EF & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0EF = 1;
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

  if ( (byte_49FC052 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC052 = 1;
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

  if ( (byte_49FC0AE & 1) == 0 )
  {
    sub_1B64A00(&MapZoom_TypeInfo, v1);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v2);
    byte_49FC0AE = 1;
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

  if ( (byte_49FC0CD & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0CD = 1;
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

  if ( (byte_49FC0B8 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0B8 = 1;
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

  if ( (byte_49FC0B6 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0B6 = 1;
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

  if ( (byte_49FC0BA & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0BA = 1;
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

  if ( (byte_49FC0C3 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0C3 = 1;
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

  if ( (byte_49FC13A & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC13A = 1;
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

  if ( (byte_49FC0F3 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0F3 = 1;
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

  if ( (byte_49FC0E7 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0E7 = 1;
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

  if ( (byte_49FC0F5 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0F5 = 1;
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

  if ( (byte_49FC122 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC122 = 1;
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

  if ( (byte_49FC120 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC120 = 1;
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

  if ( (byte_49FC0F1 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0F1 = 1;
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

  if ( (byte_49FC13C & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC13C = 1;
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

  if ( (byte_49FC138 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC138 = 1;
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

  if ( (byte_49FC0B4 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0B4 = 1;
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

  if ( (byte_49FC0C0 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0C0 = 1;
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

  if ( (byte_49FC0B2 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0B2 = 1;
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

  if ( (byte_49FC0BE & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0BE = 1;
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

  if ( (byte_49FC0BC & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0BC = 1;
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

  if ( (byte_49FC0C7 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0C7 = 1;
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

  if ( (byte_49FC0C9 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0C9 = 1;
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

  if ( (byte_49FC0C5 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0C5 = 1;
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

  if ( (byte_49FC0CB & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0CB = 1;
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

  if ( (byte_49FC13E & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC13E = 1;
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

  if ( (byte_49FC0D5 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC0D5 = 1;
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

  if ( (byte_49FC153 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v1);
    byte_49FC153 = 1;
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

  if ( (byte_49FC152 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC152 = 1;
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

  if ( (byte_49FC071 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC071 = 1;
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
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_49FC08F & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC08F = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BattleSetupKeep_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_BattleSetupKeep_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_BeforeEventActivityPoint(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC0DE & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0DE = 1;
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

  if ( (byte_49FC0E0 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0E0 = 1;
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
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC0E4 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0E4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BeforeEventSubmarineSaveData_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_BeforeEventSubmarineSaveData_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_BeforeTimeEventDailyPoint(int64_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC0D2 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0D2 = 1;
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

  if ( (byte_49FC104 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC104 = 1;
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

  if ( (byte_49FC108 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC108 = 1;
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

  if ( (byte_49FC102 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC102 = 1;
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
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC106 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC106 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BlankEarthTransformData_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_BlankEarthTransformData_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_CaldeaGateFolderFocusWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC116 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC116 = 1;
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
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_49FC0AB & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0AB = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignBonus_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_CampaignBonus_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_CampaignDirectBonus(
        CommonUI_CampaignDirectBonusData_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_49FC0AD & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0AD = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_ClearEventQuestIds(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC0DC & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0DC = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_ClearEventQuestIds_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_ClearEventQuestIds_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_DataLostBattleEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC09B & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC09B = 1;
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

  if ( (byte_49FC0A3 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v2);
    byte_49FC0A3 = 1;
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

  if ( (byte_49FC09D & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC09D = 1;
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

  if ( (byte_49FC11F & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC11F = 1;
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

  if ( (byte_49FC11E & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC11E = 1;
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

  if ( (byte_49FC11C & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC11C = 1;
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

  if ( (byte_49FC11D & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC11D = 1;
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

  if ( (byte_49FC051 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC051 = 1;
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

  if ( (byte_49FC091 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC091 = 1;
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

  if ( (byte_49FC0E2 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0E2 = 1;
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

  if ( (byte_49FC0EA & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0EA = 1;
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

  if ( (byte_49FC0D4 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0D4 = 1;
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

  if ( (byte_49FC0D0 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0D0 = 1;
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

  if ( (byte_49FC07D & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC07D = 1;
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
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC0E6 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0E6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_EventUIEffectClearQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC10E & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC10E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventUIEffectClearQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsAutoFolder(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC12B & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC12B = 1;
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

  if ( (byte_49FC12D & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC12D = 1;
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

  if ( (byte_49FC149 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC149 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v3 = value;
  if ( !byte_49FA14E )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FA14E = 1;
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

  if ( (byte_49FC125 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC125 = 1;
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

  if ( (byte_49FC127 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC127 = 1;
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

  if ( (byte_49FC143 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC143 = 1;
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

  if ( (byte_49FC10A & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC10A = 1;
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

  if ( (byte_49FC12F & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC12F = 1;
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

  if ( (byte_49FC099 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC099 = 1;
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

  if ( (byte_49FC0A5 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0A5 = 1;
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

  if ( (byte_49FC0A1 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0A1 = 1;
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

  if ( (byte_49FC112 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC112 = 1;
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

  if ( (byte_49FC073 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC073 = 1;
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

  if ( (byte_49FC075 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC075 = 1;
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

  if ( (byte_49FC083 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC083 = 1;
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

  if ( (byte_49FC077 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC077 = 1;
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

  if ( (byte_49FC05D & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC05D = 1;
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

  if ( (byte_49FC0EC & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0EC = 1;
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

  if ( (byte_49FC065 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC065 = 1;
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

  if ( (byte_49FC063 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC063 = 1;
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

  if ( (byte_49FC11B & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC11B = 1;
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

  if ( (byte_49FC129 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC129 = 1;
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

  if ( (byte_49FC07B & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC07B = 1;
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

  if ( (byte_49FC081 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC081 = 1;
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

  if ( (byte_49FC087 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC087 = 1;
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

  if ( (byte_49FC0EE & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0EE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayScriptWithMap(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC085 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC085 = 1;
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

  if ( (byte_49FC0FC & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0FC = 1;
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

  if ( (byte_49FC0FE & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0FE = 1;
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

  if ( (byte_49FC100 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC100 = 1;
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

  if ( (byte_49FC0A7 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0A7 = 1;
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

  if ( (byte_49FC07F & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC07F = 1;
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

  if ( (byte_49FC089 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC089 = 1;
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

  if ( (byte_49FC141 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC141 = 1;
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

  if ( (byte_49FC09F & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC09F = 1;
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

  if ( (byte_49FC131 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC131 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsWarBoardClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC093 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC093 = 1;
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

  if ( (byte_49FC079 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC079 = 1;
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

  if ( (byte_49FC06D & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC06D = 1;
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

  if ( (byte_49FC06B & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC06B = 1;
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

  if ( (byte_49FC06F & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC06F = 1;
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

  if ( (byte_49FC097 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC097 = 1;
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

  if ( (byte_49FC095 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC095 = 1;
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

  if ( (byte_49FC14B & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC14B = 1;
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

  if ( (byte_49FC08B & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC08B = 1;
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
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC10C & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC10C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_NoticeLastModified_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_NoticeLastModified_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_OldUserEventPoint(
        UserEventPointEntity_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC118 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC118 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_OldUserEventPoint_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_OldUserEventPoint_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_PhaseCnt(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC05B & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC05B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_PhaseCnt_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_PlayedTerminalEffects(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC0FA & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0FA = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_PlayedTerminalEffects_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_PlayedTerminalEffects_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_PlayerGenderType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC0A9 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0A9 = 1;
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

  if ( (byte_49FC059 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC059 = 1;
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

  if ( (byte_49FC133 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC133 = 1;
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

  if ( (byte_49FC135 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC135 = 1;
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
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC0F8 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0F8 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_QuestRandomGroupList_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_QuestRandomGroupList_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_QuestReleaseFocusQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC067 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC067 = 1;
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
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_49FC08D & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC08D = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_QuestWindowMessage_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_SceneMoveQuestClearedInfo(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC110 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC110 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SceneMoveQuestClearedInfo_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_SceneMoveQuestClearedInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_SelectedBannerEntity(BannerEntity_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_49FC069 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC069 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_SelectedRecollectionWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC061 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC061 = 1;
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

  if ( (byte_49FC05F & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC05F = 1;
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

  if ( (byte_49FC114 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC114 = 1;
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
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_49FC0B1 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0B1 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SpecifiedChangeSceneInfo_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_SpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC057 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC057 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SpotId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_SummonType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC055 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC055 = 1;
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
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC137 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC137 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_TalkScriptInfo_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_TalkScriptInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_TimeStatusEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC0D8 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0D8 = 1;
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

  if ( (byte_49FC0DA & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0DA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_TimeStatusLoopCount_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_WarBoardData(WarBoardDataEntity_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC0F0 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0F0 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_WarBoardData_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_WarBoardData_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_WarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC053 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC053 = 1;
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

  if ( (byte_49FC0AF & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v2);
    byte_49FC0AF = 1;
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
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC0CE & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0CE = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventDailyPoint_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_eventDailyPoint_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_eventPointWinReward(EventPointWinReward_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC0B9 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0B9 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventPointWinReward_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_eventPointWinReward_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_eventPointWinType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC0B7 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0B7 = 1;
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
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC0BB & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0BB = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventRaceBoost_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_eventRaceBoost_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_eventTowerReward(EventTowerReward_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC0C4 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0C4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventTowerReward_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_eventTowerReward_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_friendshipQuestDialogOpenId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC13B & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC13B = 1;
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

  if ( (byte_49FC0F4 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0F4 = 1;
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

  if ( (byte_49FC0E8 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0E8 = 1;
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

  if ( (byte_49FC0F6 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0F6 = 1;
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

  if ( (byte_49FC123 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC123 = 1;
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

  if ( (byte_49FC121 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC121 = 1;
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

  if ( (byte_49FC0F2 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0F2 = 1;
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

  if ( (byte_49FC13D & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC13D = 1;
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
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC139 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC139 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_limitImageAnnounces_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_limitImageAnnounces_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_oldPersonalBoss(UserSuperBossEntity_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_49FC0B5 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0B5 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_oldPersonalBoss_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_oldPersonalBoss_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_oldQuestIdForHeaderEvent(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49FC0C1 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0C1 = 1;
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
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_49FC0B3 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0B3 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_oldSuperBoss_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_oldSuperBoss_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_questClearCostumeGet(
        CostumeReleaseAnnounce_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC0BF & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0BF = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_questClearCostumeGet_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_questClearCostumeGet_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_questClearCostumeRelease(
        CostumeReleaseAnnounce_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC0BD & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0BD = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_questClearCostumeRelease_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_questClearCostumeRelease_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_resultBoostItemRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC0C8 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0C8 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultBoostItemRewardInfo_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_resultBoostItemRewardInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_resultEventBoardGameTokenRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  ServantStatusBattleListViewItem_o *static_fields; // x8

  if ( (byte_49FC0CA & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0CA = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (ServantStatusBattleListViewItem_o *)v5->static_fields;
  static_fields[2].klass = (ServantStatusBattleListViewItem_c *)value;
  sub_1B649A4(static_fields + 2, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_resultEventTowerRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC0C6 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0C6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultEventTowerRewardInfo_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_resultEventTowerRewardInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_timeStatusRecord(TimeStatusRecord_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC0CC & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0CC = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_timeStatusRecord_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_timeStatusRecord_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_updateProfileInfoEntity(
        UpdateProfileDialogInfoEntity_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC13F & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC13F = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_updateProfileInfoEntity_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_updateProfileInfoEntity_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_warClearReward(WarClearReward_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49FC0D6 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC0D6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_warClearReward_k__BackingField = value;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&static_fields->_warClearReward_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager_ClearData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FC1A8 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_13220/*"TERMINAL_CLEAR_REWARD_DISP"*/, v4);
    byte_49FC1A8 = 1;
  }
  TerminalPramsManager_ClearData_TypeInfo->static_fields->SAVEKEY_CLEAR_REWARD_DISP = (struct System_String_o *)StringLiteral_13220/*"TERMINAL_CLEAR_REWARD_DISP"*/;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)TerminalPramsManager_ClearData_TypeInfo->static_fields,
    StringLiteral_13220/*"TERMINAL_CLEAR_REWARD_DISP"*/,
    v2,
    v3);
}


void __fastcall TerminalPramsManager_ClearData___ctor(TerminalPramsManager_ClearData_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  TerminalPramsManager_c *v33; // x0
  int32_t EVENT_POINT_EFFECT_STATE_NONE; // w8
  struct LimitImageAnnounce_array **p_limitImageAnnounces; // x19

  if ( (byte_49FC1A6 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FC1A6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.qClearHeroineInfo = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, 0, v3, v4);
  this->fields.questRewardInfos = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.questRewardInfos, 0, v5, v6);
  this->fields.questPhaseRewardInfos = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.questPhaseRewardInfos, 0, v7, v8);
  this->fields.questResultAfterEventRewardInfos = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.questResultAfterEventRewardInfos, 0, v9, v10);
  this->fields.resultEventPanelRewardInfos = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.resultEventPanelRewardInfos, 0, v11, v12);
  this->fields.panelEventPoint = 0;
  *(_QWORD *)&this->fields.clearedLastBattleRaidId = -1LL;
  this->fields.joinGroup = -1;
  this->fields.mOldSuperBoss = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.mOldSuperBoss, 0, v13, v14);
  this->fields.oldPersonalBoss = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.oldPersonalBoss, 0, v15, v16);
  this->fields.evPointWinReward = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.evPointWinReward, 0, v17, v18);
  this->fields.evPointWinType = 0;
  this->fields.evRaceBoost = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.evRaceBoost, 0, v19, v20);
  this->fields.questClearCostume = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.questClearCostume, 0, v21, v22);
  this->fields.questClearCostumeGetInfo = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.questClearCostumeGetInfo, 0, v23, v24);
  this->fields.eventTowerReward = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.eventTowerReward, 0, v25, v26);
  this->fields.resultEventTowerRewardInfo = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.resultEventTowerRewardInfo, 0, v27, v28);
  this->fields.warClearReward = 0LL;
  this->fields.isDispOnly = 0;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.warClearReward, 0, v29, v30);
  v33 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  EVENT_POINT_EFFECT_STATE_NONE = v33->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  this->fields.limitImageAnnounces = 0LL;
  p_limitImageAnnounces = &this->fields.limitImageAnnounces;
  *((_DWORD *)p_limitImageAnnounces - 8) = EVENT_POINT_EFFECT_STATE_NONE;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)p_limitImageAnnounces, 0, v31, v32);
  *((_BYTE *)p_limitImageAnnounces + 8) = 0;
  *((_DWORD *)p_limitImageAnnounces + 3) = 0;
}


void __fastcall TerminalPramsManager_ClearData___ctor_34426960(
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
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v46; // x27
  __int64 v47; // x0
  __int64 v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  bool v51; // w28
  int32_t v52; // w2
  int32_t v53; // w3
  struct UserSuperBossEntity_array *v54; // x24
  int32_t v55; // w2
  int32_t v56; // w3
  struct UserSuperBossEntity_array *v57; // x23
  int32_t v58; // w2
  int32_t v59; // w3
  struct CostumeReleaseAnnounce_array *v60; // x20
  int32_t v61; // w2
  int32_t v62; // w3
  struct CostumeReleaseAnnounce_array *v63; // x21
  int32_t v64; // w2
  int32_t v65; // w3
  int32_t v66; // w2
  int32_t v67; // w3
  int32_t v68; // w2
  int32_t v69; // w3
  struct QuestRewardInfo_array *v70; // x22
  int32_t v71; // w2
  int32_t v72; // w3
  int32_t v73; // w2
  int32_t v74; // w3
  int32_t v75; // w2
  int32_t v76; // w3
  __int64 v77; // x1
  int32_t v78; // w2
  int32_t v79; // w3
  TerminalPramsManager_c *v80; // x0
  TerminalPramsManager_c *v81; // x0
  struct QuestRewardInfo_array *resultBoostItemRewardInfo_k__BackingField; // x1
  int32_t v83; // w2
  int32_t v84; // w3
  __int64 v85; // x1
  int32_t v86; // w2
  int32_t v87; // w3
  TerminalPramsManager_c *v88; // x0
  struct WarClearReward_array *v89; // x21
  TerminalPramsManager_c *v90; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo_k__BackingField; // x1
  struct BattleDropItem_array *v92; // x22
  int32_t v93; // w2
  int32_t v94; // w3
  struct BattleDropItem_array *v95; // x23
  int32_t v96; // w2
  int32_t v97; // w3
  struct LimitImageAnnounce_array *v98; // x21
  int32_t v99; // w2
  int32_t v100; // w3
  int32_t v101; // w2
  int32_t v102; // w3
  __int64 v103; // x1
  TerminalPramsManager_c *v104; // x0

  if ( (byte_49FC1A7 & 1) == 0 )
  {
    sub_1B64A00(&BattleDropItem___TypeInfo, qcrHeroineInfo);
    sub_1B64A00(&CostumeReleaseAnnounce___TypeInfo, v37);
    sub_1B64A00(&LimitImageAnnounce___TypeInfo, v38);
    sub_1B64A00(&TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo, v39);
    sub_1B64A00(&QuestRewardInfo___TypeInfo, v40);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v41);
    sub_1B64A00(&UserSuperBossEntity___TypeInfo, v42);
    sub_1B64A00(&WarClearReward___TypeInfo, v43);
    byte_49FC1A7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v44 = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)sub_1B64C4C(TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
  v46 = v44;
  if ( qcrHeroineInfo )
  {
    TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_34435808(v44, qcrHeroineInfo, v45);
    if ( this )
      goto LABEL_5;
LABEL_34:
    sub_1B64C5C(v47, v48);
  }
  System_Object___ctor((Il2CppObject *)v44, 0LL);
  v46->fields.oldUsrSvtData = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v46->fields, 0, v83, v84);
  if ( !this )
    goto LABEL_34;
LABEL_5:
  this->fields.qClearHeroineInfo = v46;
  v51 = pclear;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v46, v49, v50);
  if ( !qri )
    qri = (QuestRewardInfo_array *)sub_1B64AA8(QuestRewardInfo___TypeInfo, 0LL);
  v54 = oldSuperBoss;
  this->fields.questRewardInfos = qri;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.questRewardInfos, (int32_t)qri, v52, v53);
  if ( !questPhaseRewardInfos )
    questPhaseRewardInfos = (QuestRewardInfo_array *)sub_1B64AA8(QuestRewardInfo___TypeInfo, 0LL);
  v57 = oldPersonalBoss;
  this->fields.questPhaseRewardInfos = questPhaseRewardInfos;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.questPhaseRewardInfos,
    (int32_t)questPhaseRewardInfos,
    v55,
    v56);
  this->fields.questClear = qClear;
  this->fields.phaseClear = v51;
  this->fields.clearedLastBattleRaidId = lastRaidId;
  this->fields.clearedBattleRaidId = raidId;
  this->fields.joinGroup = groupjoin;
  if ( !oldSuperBoss )
    v54 = (struct UserSuperBossEntity_array *)sub_1B64AA8(UserSuperBossEntity___TypeInfo, 0LL);
  v60 = questClearCostumeRelease;
  this->fields.mOldSuperBoss = v54;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.mOldSuperBoss, (int32_t)v54, v58, v59);
  if ( !oldPersonalBoss )
    v57 = (struct UserSuperBossEntity_array *)sub_1B64AA8(UserSuperBossEntity___TypeInfo, 0LL);
  v63 = questClearCostumeGet;
  this->fields.oldPersonalBoss = v57;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.oldPersonalBoss, (int32_t)v57, v61, v62);
  this->fields.evPointWinReward = evpWinReward;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.evPointWinReward, (int32_t)evpWinReward, v64, v65);
  this->fields.evRaceBoost = evRace;
  this->fields.evPointWinType = evpWinType;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.evRaceBoost, (int32_t)evRace, v66, v67);
  if ( !questClearCostumeRelease )
    v60 = (struct CostumeReleaseAnnounce_array *)sub_1B64AA8(CostumeReleaseAnnounce___TypeInfo, 0LL);
  v70 = resultEvTowerRewardInfo;
  this->fields.questClearCostume = v60;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.questClearCostume, (int32_t)v60, v68, v69);
  if ( !questClearCostumeGet )
    v63 = (struct CostumeReleaseAnnounce_array *)sub_1B64AA8(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostumeGetInfo = v63;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.questClearCostumeGetInfo, (int32_t)v63, v71, v72);
  this->fields.eventTowerReward = evTowerReward;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.eventTowerReward, (int32_t)evTowerReward, v73, v74);
  if ( !resultEvTowerRewardInfo )
    v70 = (struct QuestRewardInfo_array *)sub_1B64AA8(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.resultEventTowerRewardInfo = v70;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.resultEventTowerRewardInfo, (int32_t)v70, v75, v76);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FBD69 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v77);
    byte_49FBD69 = 1;
  }
  v80 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v80 = TerminalPramsManager_TypeInfo;
  }
  if ( v80->static_fields->_resultBoostItemRewardInfo_k__BackingField )
  {
    if ( !v80->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v80);
    if ( !byte_49FBD69 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v77);
      byte_49FBD69 = 1;
    }
    v81 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v81 = TerminalPramsManager_TypeInfo;
    }
    resultBoostItemRewardInfo_k__BackingField = v81->static_fields->_resultBoostItemRewardInfo_k__BackingField;
  }
  else
  {
    resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1B64AA8(
                                                                                  QuestRewardInfo___TypeInfo,
                                                                                  0LL);
  }
  this->fields.resultBoostItemRewardInfo = resultBoostItemRewardInfo_k__BackingField;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultBoostItemRewardInfo,
    (int32_t)resultBoostItemRewardInfo_k__BackingField,
    v78,
    v79);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FBD63 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v85);
    byte_49FBD63 = 1;
  }
  v88 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v88 = TerminalPramsManager_TypeInfo;
  }
  v89 = warClearRewardIn;
  if ( v88->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField )
  {
    if ( !v88->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v88);
    if ( !byte_49FBD63 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v85);
      byte_49FBD63 = 1;
    }
    v90 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v90 = TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfo_k__BackingField = v90->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
  }
  else
  {
    resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1B64AA8(
                                                                                            QuestRewardInfo___TypeInfo,
                                                                                            0LL);
  }
  v92 = questResultAfterEventRewardInfos;
  this->fields.resultEventBoardGameTokenRewardInfo = resultEventBoardGameTokenRewardInfo_k__BackingField;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultEventBoardGameTokenRewardInfo,
    (int32_t)resultEventBoardGameTokenRewardInfo_k__BackingField,
    v86,
    v87);
  this->fields.isDispOnly = dispOnly;
  if ( !warClearRewardIn )
    v89 = (struct WarClearReward_array *)sub_1B64AA8(WarClearReward___TypeInfo, 0LL);
  v95 = resultEventPanelRewardInfos;
  this->fields.warClearReward = v89;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.warClearReward, (int32_t)v89, v93, v94);
  this->fields.EventActivityPointEffectState = eventActivityPointEffectState;
  this->fields.isWarBoardClear = isWarBoardClear;
  if ( !questResultAfterEventRewardInfos )
    v92 = (struct BattleDropItem_array *)sub_1B64AA8(BattleDropItem___TypeInfo, 0LL);
  v98 = limitImageAnnounces;
  this->fields.questResultAfterEventRewardInfos = v92;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.questResultAfterEventRewardInfos,
    (int32_t)v92,
    v96,
    v97);
  if ( !resultEventPanelRewardInfos )
    v95 = (struct BattleDropItem_array *)sub_1B64AA8(BattleDropItem___TypeInfo, 0LL);
  this->fields.resultEventPanelRewardInfos = v95;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.resultEventPanelRewardInfos, (int32_t)v95, v99, v100);
  this->fields.panelEventPoint = panelEventPoint;
  if ( !limitImageAnnounces )
    v98 = (struct LimitImageAnnounce_array *)sub_1B64AA8(LimitImageAnnounce___TypeInfo, 0LL);
  this->fields.limitImageAnnounces = v98;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.limitImageAnnounces, (int32_t)v98, v101, v102);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB74D )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v103);
    byte_49FB74D = 1;
  }
  v104 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v104 = TerminalPramsManager_TypeInfo;
  }
  this->fields.isOrdealCallWarClear = v104->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_49FBD66 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v103);
    v104 = TerminalPramsManager_TypeInfo;
    byte_49FBD66 = 1;
  }
  if ( !v104->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v104);
    v104 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventMuralId = v104->static_fields->_EventMuralId_k__BackingField;
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor_34435044(
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

  if ( (byte_49FC1A2 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, uSvtEnt);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_49FC1A2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !uSvtEnt )
    sub_1B64C5C(v6, v7);
  v8 = *(_OWORD *)&uSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  this->fields.id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v13, 0LL);
  v9 = *(_OWORD *)&uSvtEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v9;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v12, 0LL);
  v11 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v15, 0LL);
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                              uSvtEnt->fields.limitCount,
                              0LL);
  this->fields.imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                   uSvtEnt->fields.imageLimitCount,
                                   0LL);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                  uSvtEnt->fields.dispLimitCount,
                                  0LL);
  this->fields.commandCardLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                         uSvtEnt->fields.commandCardLimitCount,
                                         0LL);
  this->fields.iconLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
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

  if ( (byte_49FC1A3 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_1B64A00(&UserServantEntity_TypeInfo, v4);
    byte_49FC1A3 = 1;
  }
  v5 = sub_1B64C4C(UserServantEntity_TypeInfo);
  UserServantEntity___ctor((UserServantEntity_o *)v5, 0LL);
  id = this->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v14, id, 0LL);
  v15 = v14;
  if ( !v5 )
    sub_1B64C5C(v7, v8);
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
  int32_t v3; // w2
  int32_t v4; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.oldUsrSvtData = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, 0, v3, v4);
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_34435808(
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
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FC1A4 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_OldHeroineLawData_TypeInfo, qClearHeroineInfo);
    byte_49FC1A4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !qClearHeroineInfo )
    sub_1B64C5C(v5, v6);
  oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
  v8 = (TerminalPramsManager_OldHeroineLawData_o *)sub_1B64C4C(TerminalPramsManager_OldHeroineLawData_TypeInfo);
  TerminalPramsManager_OldHeroineLawData___ctor_34435044(v8, oldUsrSvtData, v9);
  this->fields.oldUsrSvtData = v8;
  p_fields = &this->fields;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)p_fields, (int32_t)v8, v11, v12);
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
  int32_t v6; // w2
  int32_t v7; // w3
  QuestClearHeroineInfo_o *result; // x0

  if ( (byte_49FC1A5 & 1) == 0 )
  {
    sub_1B64A00(&QuestClearHeroineInfo_TypeInfo, method);
    byte_49FC1A5 = 1;
  }
  v3 = sub_1B64C4C(QuestClearHeroineInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  oldUsrSvtData = this->fields.oldUsrSvtData;
  if ( !oldUsrSvtData
    || (oldUsrSvtData = (TerminalPramsManager_OldHeroineLawData_o *)TerminalPramsManager_OldHeroineLawData__GetLoad(
                                                                      oldUsrSvtData,
                                                                      v4),
        !v3) )
  {
    sub_1B64C5C(oldUsrSvtData, v4);
  }
  *(_QWORD *)(v3 + 16) = oldUsrSvtData;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)oldUsrSvtData, v6, v7);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FC1A9 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager___c_TypeInfo, v1);
    byte_49FC1A9 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(TerminalPramsManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalPramsManager___c_TypeInfo->static_fields->__9 = (struct TerminalPramsManager___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)TerminalPramsManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall TerminalPramsManager___c___ctor(TerminalPramsManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TerminalPramsManager___c___ReceiveQuestEndResultInfo_b__657_0(
        TerminalPramsManager___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  int32_t questId; // w19
  TerminalPramsManager_c *v5; // x0

  if ( (byte_49FC1AA & 1) == 0 )
  {
    this = (TerminalPramsManager___c_o *)sub_1B64A00(&TerminalPramsManager_TypeInfo, n);
    byte_49FC1AA = 1;
  }
  if ( !n )
    sub_1B64C5C(this, n);
  questId = n->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB754 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, n);
    byte_49FB754 = 1;
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
bool __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__662_0(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  if ( (byte_49FC1AB & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, *(_QWORD *)&v);
    byte_49FC1AB = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStoryForQuestId(v, *(const MethodInfo **)&v);
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__662_3(
        TerminalPramsManager___c_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1B64C5C(this, 0LL);
  return v->fields.id;
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__662_4(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  return v;
}


void __fastcall TerminalPramsManager___c__DisplayClass645_0___ctor(
        TerminalPramsManager___c__DisplayClass645_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager___c__DisplayClass645_0___CheckResumeEffectNT2_b__0(
        TerminalPramsManager___c__DisplayClass645_0_o *this,
        System_String_o *effectId,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_fields; // x19
  System_String_o *effectIdsStr; // t1
  System_String_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FC1AC & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_43/*"\n"*/, effectId);
    byte_49FC1AC = 1;
  }
  effectIdsStr = this->fields.effectIdsStr;
  p_fields = (ServantStatusBattleListViewItem_o *)&this->fields;
  v7 = System_String__Concat_61396396(effectIdsStr, effectId, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  p_fields->klass = (ServantStatusBattleListViewItem_c *)v7;
  sub_1B649A4(p_fields, (int32_t)v7, v8, v9);
}


void __fastcall TerminalPramsManager___c__DisplayClass662_0___ctor(
        TerminalPramsManager___c__DisplayClass662_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


QuestEntity_o *__fastcall TerminalPramsManager___c__DisplayClass662_0___SendOpenedQuestIdToAdManager_b__1(
        TerminalPramsManager___c__DisplayClass662_0_o *this,
        int32_t v,
        const MethodInfo *method)
{
  QuestMaster_o *questMaster; // x0

  questMaster = this->fields.questMaster;
  if ( !questMaster )
    sub_1B64C5C(0LL, v);
  return QuestMaster__getQuestEntity(questMaster, v, 0LL);
}


bool __fastcall TerminalPramsManager___c__DisplayClass662_0___SendOpenedQuestIdToAdManager_b__2(
        TerminalPramsManager___c__DisplayClass662_0_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  UserQuestMaster_o *userQuestMaster; // x20
  int64_t UserId; // x0
  __int64 v7; // x1
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC1AD & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, v);
    byte_49FC1AD = 1;
  }
  entity = 0LL;
  userQuestMaster = this->fields.userQuestMaster;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v || !userQuestMaster )
    goto LABEL_11;
  UserId = UserQuestMaster__TryGetEntity(userQuestMaster, &entity, UserId, v->fields.id, 0LL);
  if ( (UserId & 1) != 0 )
  {
    if ( entity )
      return entity->fields.clearNum == 0;
LABEL_11:
    sub_1B64C5C(UserId, v7);
  }
  return 1;
}