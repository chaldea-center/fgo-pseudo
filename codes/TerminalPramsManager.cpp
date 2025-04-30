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
  const MethodInfo *v11; // x3
  struct TerminalPramsManager_StaticFields *v12; // x0
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  struct TerminalPramsManager_StaticFields *v17; // x8
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_object__o *v20; // x19
  CGThumbnailListItem_o *p_eventScriptMessages; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct TerminalPramsManager_StaticFields *v24; // x8

  if ( (byte_4A4B97C & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_int___ctor__, v1);
    sub_1B863B8(&System_Collections_Generic_HashSet_int__TypeInfo, v2);
    sub_1B863B8(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1B863B8(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1B863B8(&float___TypeInfo, v5);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v6);
    sub_1B863B8(&StringLiteral_1/*""*/, v7);
    byte_4A4B97C = 1;
  }
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_1B86604(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_34B7810 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->loginQuestNotifiedList = v8;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->loginQuestNotifiedList, (int32_t)v8, v10, v11);
  v12 = TerminalPramsManager_TypeInfo->static_fields;
  v12->_IsMainInterludeWarClear_k__BackingField = 0;
  v13 = (int)StringLiteral_1/*""*/;
  v12->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v12->mTerminalWarStartedIds, v13, v14, v15);
  *(_OWORD *)&TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = xmmword_BC2EA0;
  v16 = sub_1B86460(float___TypeInfo, 3LL);
  v17 = TerminalPramsManager_TypeInfo->static_fields;
  v17->TipsArchiveScrollValueList = (struct System_Single_array *)v16;
  sub_1B8635C((CGThumbnailListItem_o *)&v17->TipsArchiveScrollValueList, v16, v18, v19);
  TerminalPramsManager_TypeInfo->static_fields->joinGroupId = -1;
  v20 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
  p_eventScriptMessages = (CGThumbnailListItem_o *)&TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  p_eventScriptMessages->klass = (CGThumbnailListItem_c *)v20;
  sub_1B8635C(p_eventScriptMessages, (int32_t)v20, v22, v23);
  v24 = TerminalPramsManager_TypeInfo->static_fields;
  *(_QWORD *)&v24->EVENT_POINT_EFFECT_STATE_SUB = 0xFFFFFFFFLL;
  v24->EVENT_POINT_EFFECT_STATE_ADD = 1;
  v24->isInvisibleConnectAndLoad = 0;
  *(_QWORD *)&v24->ConnectMarkEventId = 0LL;
  v24->meSceneStatus = 0;
  *(_OWORD *)&v24->_ShopFocusItemId_k__BackingField = 0u;
  v24->isCheckHomeExpirationDateEventMap = 1;
  v24->_IsMoveFolderByQuestAfterAction_k__BackingField = 0;
  *(_WORD *)&v24->IsEventMapLoading = 0;
  v24->_MasterMissionTargetType_k__BackingField = -1;
}


void __fastcall TerminalPramsManager__AddNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_4A4B95B & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_int__Add__, method);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v3);
    byte_4A4B95B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v4->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1B86614(0LL, method);
  System_Collections_Generic_HashSet_int___Add(
    loginQuestNotifiedList,
    questId,
    (const MethodInfo_34B8A14 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall TerminalPramsManager__AutoOff(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B91D & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B91D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4907E )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4907E = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 0;
  if ( !byte_4A4B574 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4A4B574 = 1;
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

  if ( (byte_4A4B94F & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11252/*"SAVEKEY_BlankEarthRank"*/, v2);
    byte_4A4B94F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B99F )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B99F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11252/*"SAVEKEY_BlankEarthRank"*/,
    v3->static_fields->_BlankEarthRank_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__BlankEarthSpotId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B94E & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11253/*"SAVEKEY_BlankEarthSpotId"*/, v2);
    byte_4A4B94E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4ADC4 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4ADC4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11253/*"SAVEKEY_BlankEarthSpotId"*/,
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

  if ( (byte_4A4B94D & 1) == 0 )
  {
    sub_1B863B8(&CommonUI_CampaignDirectBonusData___TypeInfo, v1);
    sub_1B863B8(&JsonManager_TypeInfo, v2);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v3);
    sub_1B863B8(&StringLiteral_11254/*"SAVEKEY_CampaignDirectBonus"*/, v4);
    byte_4A4B94D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A48DB9 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A48DB9 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_obj = &v5->static_fields->_CampaignDirectBonus_k__BackingField->obj;
  if ( !p_obj )
    p_obj = (Il2CppObject *)sub_1B86460(CommonUI_CampaignDirectBonusData___TypeInfo, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__toJson(p_obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11254/*"SAVEKEY_CampaignDirectBonus"*/, v7, 0LL);
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

  if ( (byte_4A4B969 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestMaster___, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_SpotMaster___, v4);
    sub_1B863B8(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A4B969 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SpotMaster___);
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
          (const MethodInfo_32142CC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v13 )
LABEL_16:
    sub_1B86614(Instance, v9);
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
            HIDWORD(v13[1].klass),
            (const MethodInfo_2F884F0 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall TerminalPramsManager__CheckClearSelectedStoryQuestId(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4A4B950 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B950 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B6A3 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B6A3 = 1;
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
    if ( !byte_4A4B6A3 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
      byte_4A4B6A3 = 1;
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
      if ( !byte_4A4B2BA )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
        byte_4A4B2BA = 1;
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

  if ( (byte_4A4B938 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_13467/*"TerminalBeforeEventActivityPoint"*/, v1);
    sub_1B863B8(&StringLiteral_13468/*"TerminalBeforeEventActivityPointGauge"*/, v2);
    byte_4A4B938 = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13467/*"TerminalBeforeEventActivityPoint"*/, 0LL)
      && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13468/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckEventSubmarinePointSaveData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A4B93A & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_13469/*"TerminalBeforeEventSubmarinePointData"*/, v1);
    byte_4A4B93A = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13469/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckIsOrdealCallWarClear(WarEntity_o *warEntity, const MethodInfo *method)
{
  int32_t parentWarId; // w19
  BalanceConfig_c *v4; // x0

  if ( (byte_4A4B976 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    byte_4A4B976 = 1;
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
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  System_Action_object__o *v30; // x22
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  CGThumbnailListItem_c *v34; // x19
  TerminalPramsManager_c *v35; // x0
  CGThumbnailListItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  const MethodInfo *v37; // x0
  int32_t v38; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A4B954 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_string__TypeInfo, v1);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_string___, v2);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__ForEach__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Remove__, v4);
    sub_1B863B8(&ScrTerminalListTop_TypeInfo, v5);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v6);
    sub_1B863B8(&Method_TerminalPramsManager___c__DisplayClass700_0__CheckResumeEffectNT2_b__0__, v7);
    sub_1B863B8(&TerminalPramsManager___c__DisplayClass700_0_TypeInfo, v8);
    sub_1B863B8(&StringLiteral_43/*"\n"*/, v9);
    sub_1B863B8(&StringLiteral_89/*"\r\n"*/, v10);
    sub_1B863B8(&StringLiteral_1/*""*/, v11);
    byte_4A4B954 = 1;
  }
  v38 = 0;
  v12 = sub_1B86604(TerminalPramsManager___c__DisplayClass700_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass700_0___ctor((TerminalPramsManager___c__DisplayClass700_0_o *)v12, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B99D )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v13);
    byte_4A4B99D = 1;
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
        if ( !byte_4A4B99D )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, v21);
          byte_4A4B99D = 1;
        }
        v23 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v23 = TerminalPramsManager_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v23->static_fields->_PlayedTerminalEffects_k__BackingField;
        if ( !PlayedTerminalEffects_k__BackingField
          || (PlayedTerminalEffects_k__BackingField = System_String__Replace_61691724(
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
                                                                            (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL)
          || (v26 = (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
              PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Collections_Generic_List_object___Remove(
                                                                           (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
                                                                           v22,
                                                                           (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_string__Remove__),
              !v12) )
        {
          sub_1B86614(PlayedTerminalEffects_k__BackingField, v21);
        }
        v29 = (int)StringLiteral_1/*""*/;
        *(_QWORD *)(v12 + 16) = StringLiteral_1/*""*/;
        sub_1B8635C((CGThumbnailListItem_o *)(v12 + 16), v29, v27, v28);
        v30 = (System_Action_object__o *)sub_1B86604(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v30,
          (Il2CppObject *)v12,
          Method_TerminalPramsManager___c__DisplayClass700_0__CheckResumeEffectNT2_b__0__,
          0LL);
        System_Collections_Generic_List_object___ForEach(
          v26,
          (System_Action_T__o *)v30,
          (const MethodInfo_35FD398 *)Method_System_Collections_Generic_List_string__ForEach__);
        v34 = *(CGThumbnailListItem_c **)(v12 + 16);
        if ( !byte_4A4B98E )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, v31);
          byte_4A4B98E = 1;
        }
        v35 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v35 = TerminalPramsManager_TypeInfo;
        }
        p_PlayedTerminalEffects_k__BackingField = (CGThumbnailListItem_o *)&v35->static_fields->_PlayedTerminalEffects_k__BackingField;
        p_PlayedTerminalEffects_k__BackingField->klass = v34;
        sub_1B8635C(p_PlayedTerminalEffects_k__BackingField, (int32_t)v34, v32, v33);
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

  if ( (byte_4A4B948 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11255/*"SAVEKEY_ClearEventQuestIds"*/, v2);
    byte_4A4B948 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4AE78 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4AE78 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11255/*"SAVEKEY_ClearEventQuestIds"*/,
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

  if ( (byte_4A4B947 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11257/*"SAVEKEY_ConnectMarkEventId"*/, v2);
    sub_1B863B8(&StringLiteral_11256/*"SAVEKEY_ConnectMarkAnimationId"*/, v3);
    byte_4A4B947 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11257/*"SAVEKEY_ConnectMarkEventId"*/, v4->static_fields->ConnectMarkEventId, 0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11256/*"SAVEKEY_ConnectMarkAnimationId"*/,
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
  const MethodInfo *v7; // x3
  TerminalPramsManager_c *v8; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t v10; // w1

  if ( (byte_4A4B96C & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v2);
    sub_1B863B8(&StringLiteral_1/*""*/, v3);
    byte_4A4B96C = 1;
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
  if ( !byte_4A4B9B1 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v5);
    byte_4A4B9B1 = 1;
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
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->lastPlayBgmName, v10, v6, v7);
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

  if ( (byte_4A4B92B & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11260/*"SAVEKEY_LastPlayBgmName"*/, v2);
    sub_1B863B8(&StringLiteral_13471/*"TerminalEndTime"*/, v3);
    sub_1B863B8(&StringLiteral_5152/*"Debug_IsOriginalGuestNPC"*/, v4);
    sub_1B863B8(&StringLiteral_11266/*"SAVEKEY_PlayedTerminalEffects"*/, v5);
    sub_1B863B8(&StringLiteral_13467/*"TerminalBeforeEventActivityPoint"*/, v6);
    sub_1B863B8(&StringLiteral_11254/*"SAVEKEY_CampaignDirectBonus"*/, v7);
    sub_1B863B8(&StringLiteral_11261/*"SAVEKEY_LastPlayQuestConsumeType"*/, v8);
    sub_1B863B8(&StringLiteral_11271/*"SAVEKEY_TerminalCraftInfoDisp"*/, v9);
    sub_1B863B8(&StringLiteral_13472/*"TerminalEventDailyPointEventId"*/, v10);
    sub_1B863B8(&StringLiteral_5148/*"Debug_GuestNPCInfoList"*/, v11);
    sub_1B863B8(&StringLiteral_13469/*"TerminalBeforeEventSubmarinePointData"*/, v12);
    sub_1B863B8(&StringLiteral_13478/*"TerminalPhaseCnt"*/, v13);
    sub_1B863B8(&StringLiteral_11270/*"SAVEKEY_TerminalConquestInfos"*/, v14);
    sub_1B863B8(&StringLiteral_13486/*"TerminalTimeStatusEventId"*/, v15);
    sub_1B863B8(&StringLiteral_13470/*"TerminalDispState"*/, v16);
    sub_1B863B8(&StringLiteral_11263/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v17);
    sub_1B863B8(&StringLiteral_13473/*"TerminalIsDoneShortcut"*/, v18);
    sub_1B863B8(&StringLiteral_11262/*"SAVEKEY_MapModelClearQuestInfo"*/, v19);
    sub_1B863B8(&StringLiteral_11267/*"SAVEKEY_PlayerGenderType"*/, v20);
    sub_1B863B8(&StringLiteral_11272/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v21);
    sub_1B863B8(&StringLiteral_11255/*"SAVEKEY_ClearEventQuestIds"*/, v22);
    sub_1B863B8(&StringLiteral_11264/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v23);
    sub_1B863B8(&StringLiteral_5153/*"Debug_IsQuestReleaseAll"*/, v24);
    sub_1B863B8(&StringLiteral_5150/*"Debug_IsDummyErrorSelect"*/, v25);
    sub_1B863B8(&StringLiteral_13481/*"TerminalQuestId"*/, v26);
    sub_1B863B8(&StringLiteral_11269/*"SAVEKEY_TerminalConquestInfoDisp"*/, v27);
    sub_1B863B8(&StringLiteral_11275/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v28);
    sub_1B863B8(&StringLiteral_13485/*"TerminalTimeStatusEventDailyPoint"*/, v29);
    sub_1B863B8(&StringLiteral_13490/*"TerminalWarId"*/, v30);
    sub_1B863B8(&StringLiteral_13483/*"TerminalSpotId"*/, v31);
    sub_1B863B8(&StringLiteral_13487/*"TerminalTimeStatusLoopCount"*/, v32);
    sub_1B863B8(&StringLiteral_13468/*"TerminalBeforeEventActivityPointGauge"*/, v33);
    sub_1B863B8(&StringLiteral_11253/*"SAVEKEY_BlankEarthSpotId"*/, v34);
    sub_1B863B8(&StringLiteral_11258/*"SAVEKEY_DataLostBattleAutoReset"*/, v35);
    sub_1B863B8(&StringLiteral_5151/*"Debug_IsOriginalBattle"*/, v36);
    sub_1B863B8(&StringLiteral_13491/*"TerminalWarStartedIds"*/, v37);
    sub_1B863B8(&StringLiteral_5147/*"Debug_BattleEnemyList"*/, v38);
    sub_1B863B8(&StringLiteral_11257/*"SAVEKEY_ConnectMarkEventId"*/, v39);
    sub_1B863B8(&StringLiteral_13489/*"TerminalTransitionInfoVoiceAssetName"*/, v40);
    sub_1B863B8(&StringLiteral_11256/*"SAVEKEY_ConnectMarkAnimationId"*/, v41);
    sub_1B863B8(&StringLiteral_11265/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v42);
    sub_1B863B8(&StringLiteral_13476/*"TerminalLastPlayedQuestId"*/, v43);
    sub_1B863B8(&StringLiteral_5149/*"Debug_IsBuildInfoDisp"*/, v44);
    sub_1B863B8(&StringLiteral_13488/*"TerminalTransitionInfoMissionId"*/, v45);
    sub_1B863B8(&StringLiteral_11274/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v46);
    byte_4A4B92B = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13470/*"TerminalDispState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13490/*"TerminalWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13483/*"TerminalSpotId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13481/*"TerminalQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13476/*"TerminalLastPlayedQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13478/*"TerminalPhaseCnt"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13471/*"TerminalEndTime"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13473/*"TerminalIsDoneShortcut"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13491/*"TerminalWarStartedIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5153/*"Debug_IsQuestReleaseAll"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5150/*"Debug_IsDummyErrorSelect"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5149/*"Debug_IsBuildInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5151/*"Debug_IsOriginalBattle"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5152/*"Debug_IsOriginalGuestNPC"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5147/*"Debug_BattleEnemyList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5148/*"Debug_GuestNPCInfoList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13486/*"TerminalTimeStatusEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13487/*"TerminalTimeStatusLoopCount"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13472/*"TerminalEventDailyPointEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13485/*"TerminalTimeStatusEventDailyPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13488/*"TerminalTransitionInfoMissionId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13489/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13467/*"TerminalBeforeEventActivityPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13468/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13469/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11270/*"SAVEKEY_TerminalConquestInfos"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11269/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11271/*"SAVEKEY_TerminalCraftInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11272/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11260/*"SAVEKEY_LastPlayBgmName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11261/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11266/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11263/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11264/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11265/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11275/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11257/*"SAVEKEY_ConnectMarkEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11256/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11274/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11255/*"SAVEKEY_ClearEventQuestIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11262/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11258/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11267/*"SAVEKEY_PlayerGenderType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11254/*"SAVEKEY_CampaignDirectBonus"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11253/*"SAVEKEY_BlankEarthSpotId"*/, 0LL);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  CGThumbnailListItem_o *p_EventRaidDefeatedEffectInfo_k__BackingField; // x0

  if ( (byte_4A4B96D & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11259/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v4);
    byte_4A4B96D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B9B2 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B9B2 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_EventRaidDefeatedEffectInfo_k__BackingField = (CGThumbnailListItem_o *)&v5->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  p_EventRaidDefeatedEffectInfo_k__BackingField->klass = 0LL;
  sub_1B8635C(p_EventRaidDefeatedEffectInfo_k__BackingField, 0, v2, v3);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11259/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, 0LL);
}


void __fastcall TerminalPramsManager__DeleteQuestRandomGroupList(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  CGThumbnailListItem_o *p_QuestRandomGroupList_k__BackingField; // x0

  if ( (byte_4A4B972 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11268/*"SAVEKEY_QuestRandomGroupList"*/, v4);
    byte_4A4B972 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B9B4 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B9B4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_QuestRandomGroupList_k__BackingField = (CGThumbnailListItem_o *)&v5->static_fields->_QuestRandomGroupList_k__BackingField;
  p_QuestRandomGroupList_k__BackingField->klass = 0LL;
  sub_1B8635C(p_QuestRandomGroupList_k__BackingField, 0, v2, v3);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11268/*"SAVEKEY_QuestRandomGroupList"*/, 0LL);
}


bool __fastcall TerminalPramsManager__EnableResumeToBlankEarthMap(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A4B97A & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonTemplate_QuestTree__get_Instance__, method);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v3);
    byte_4A4B97A = 1;
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v6);
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

  if ( (byte_4A4B934 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_13472/*"TerminalEventDailyPointEventId"*/, v2);
    sub_1B863B8(&StringLiteral_13485/*"TerminalTimeStatusEventDailyPoint"*/, v3);
    byte_4A4B934 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B999 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B999 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13472/*"TerminalEventDailyPointEventId"*/,
    v4->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4A4B99A )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v5);
    byte_4A4B99A = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  BeforeTimeEventDailyPoint_k__BackingField = v6->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v7 = System_Int64__ToString((int64_t)&BeforeTimeEventDailyPoint_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13485/*"TerminalTimeStatusEventDailyPoint"*/, v7, 0LL);
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

  if ( (byte_4A4B933 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_13486/*"TerminalTimeStatusEventId"*/, v2);
    sub_1B863B8(&StringLiteral_13487/*"TerminalTimeStatusLoopCount"*/, v3);
    byte_4A4B933 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B69E )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B69E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13486/*"TerminalTimeStatusEventId"*/,
    v4->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_4A4B69F )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v5);
    byte_4A4B69F = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13487/*"TerminalTimeStatusLoopCount"*/,
    v6->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall TerminalPramsManager__ExistBlankEarthTutorial(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  BalanceConfig_c *v5; // x0

  if ( (byte_4A4B979 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, v1);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v2);
    byte_4A4B979 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__ExistBlankEarthTutorialAction((const MethodInfo *)v3) )
    return 1;
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  return EventTutorialMaster__IsTutorialAvailableWithTargetId(
           0,
           18,
           v5->static_fields->OrdealCallWarId,
           v5->static_fields->OrdealCallWarId,
           0,
           0,
           0,
           0LL);
}


bool __fastcall TerminalPramsManager__ExistBlankEarthTutorialAction(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  System_Collections_ICollection_o *AvailableTutorialArray; // x0

  if ( (byte_4A4B978 & 1) == 0 )
  {
    sub_1B863B8(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v1);
    byte_4A4B978 = 1;
  }
  v2 = sub_1B86604(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v2, 0LL);
  if ( !v2 )
    sub_1B86614(v3, v4);
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

  if ( (byte_4A4B926 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Application_TypeInfo, v1);
    byte_4A4B926 = 1;
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

  if ( (byte_4A4B959 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, method);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v3);
    byte_4A4B959 = 1;
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
      sub_1B86614(v6, v7);
  }
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         folderLastIdxs,
         warId,
         &value,
         (const MethodInfo_32660D4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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

  if ( (byte_4A4B927 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v2);
    byte_4A4B927 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4AE81 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v2);
    byte_4A4AE81 = 1;
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
  if ( !byte_4A4B58E )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v2);
    byte_4A4B58E = 1;
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

  if ( (byte_4A4B95F & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B95F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v3);
  if ( !QuestFocusStateManager )
    sub_1B86614(0LL, v5);
  return QuestFocusStateManager__GetFocusState(QuestFocusStateManager, questId, 0LL);
}


void __fastcall TerminalPramsManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4A4B92D & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B92D = 1;
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
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  struct System_String_o *v6; // x20
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  TerminalPramsManager_c *v11; // x0
  struct TerminalPramsManager_StaticFields *v12; // x0

  if ( (byte_4A4B957 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_1/*""*/, v4);
    byte_4A4B957 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4A0F0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4A0F0 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsDispOnly_k__BackingField = 0;
  v6 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4A4B577 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4A4B577 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = v6;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_QuestWindowMessage_k__BackingField, (int32_t)v6, v2, v3);
  if ( !byte_4A4B576 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v8);
    byte_4A4B576 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_MessageDispType_k__BackingField = 0;
  if ( !byte_4A4A0EF )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v8);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4A4A0EF = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v12 = v11->static_fields;
  v12->_BattleSetupKeep_k__BackingField = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v12->_BattleSetupKeep_k__BackingField, 0, v9, v10);
}


void __fastcall TerminalPramsManager__InitParameter(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *v11; // x0
  int32_t v12; // w1
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  TerminalPramsManager_c *v16; // x0
  CGThumbnailListItem_o *p_timeStatusRecord_k__BackingField; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  TerminalPramsManager_c *v21; // x0
  CGThumbnailListItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  int32_t v23; // w1
  CGThumbnailListItem_o *p_lastPlayBgmName; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  TerminalPramsManager_c *v30; // x0
  struct TerminalPramsManager_StaticFields *v31; // x0
  __int64 v32; // x1
  TerminalPramsManager_c *v33; // x0
  const MethodInfo *v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  TerminalPramsManager_c *v38; // x0
  CGThumbnailListItem_c *v39; // x20
  CGThumbnailListItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  TerminalPramsManager_c *v44; // x0
  struct TerminalPramsManager_StaticFields *v45; // x8
  CGThumbnailListItem_c *v46; // x20
  CGThumbnailListItem_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  __int64 v48; // x1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  TerminalPramsManager_c *v51; // x0
  struct TerminalPramsManager_StaticFields *v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  TerminalPramsManager_c *v56; // x0
  struct TerminalPramsManager_StaticFields *v57; // x0
  __int64 v58; // x1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  TerminalPramsManager_c *v61; // x0
  struct System_String_o *v62; // x20
  struct TerminalPramsManager_StaticFields *v63; // x8

  if ( (byte_4A4B92C & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_1/*""*/, v4);
    byte_4A4B92C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4AE80 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4AE80 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4A4AE7F )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4A4AE7F = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_SpotId_k__BackingField = 0;
  if ( !byte_4A4AE7A )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4A4AE7A = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_QuestId_k__BackingField = 0;
  if ( !byte_4A4B2B5 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4A4B2B5 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_LastPlayedQuestId_k__BackingField = 0;
  if ( !byte_4A4B984 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4A4B984 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
  if ( !byte_4A4B2B6 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4A4B2B6 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = 0;
  if ( !byte_4A4B128 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4A4B128 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_AfterActionFocusQuestId_k__BackingField = 0;
  if ( !byte_4A4B2BA )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4A4B2BA = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
  if ( !byte_4A4AA1E )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4A4AA1E = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  if ( !byte_4A4B2BB )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4A4B2BB = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
  if ( !byte_4A4B5A7 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4A4B5A7 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 0;
  if ( !byte_4A4B5A5 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4A4B5A5 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
  if ( !byte_4A4AB0B )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4A4AB0B = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField, 0, v2, v3);
  if ( !byte_4A4AE7E )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v7);
    byte_4A4AE7E = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_PhaseCnt_k__BackingField = 0;
  if ( !byte_4A4AE7B )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v7);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4AE7B = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_EndTime_k__BackingField = 0LL;
  if ( !byte_4A4AE7D )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v7);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4AE7D = 1;
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
  sub_1B8635C((CGThumbnailListItem_o *)&v11->mTerminalWarStartedIds, v12, v8, v9);
  if ( !byte_4A4B985 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v13);
    byte_4A4B985 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->mDebug_IsQuestReleaseAll = 0;
  if ( !byte_4A4B986 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v13);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4A4B986 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->mDebug_IsDummyErrorSelect = 0;
  if ( !byte_4A4B987 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v13);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4A4B987 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->mDebug_IsBuildInfoDisp = 0;
  if ( !byte_4A4B5AC )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v13);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4A4B5AC = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_TimeStatusEventId_k__BackingField = 0;
  if ( !byte_4A4B5AD )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v13);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4A4B5AD = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_TimeStatusLoopCount_k__BackingField = 0;
  if ( !byte_4A4B988 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v13);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4A4B988 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  p_timeStatusRecord_k__BackingField = (CGThumbnailListItem_o *)&v16->static_fields->_timeStatusRecord_k__BackingField;
  p_timeStatusRecord_k__BackingField->klass = 0LL;
  sub_1B8635C(p_timeStatusRecord_k__BackingField, 0, v14, v15);
  if ( !byte_4A4B989 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v18);
    byte_4A4B989 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  v21->static_fields->_EventDailyPointEventId_k__BackingField = 0;
  if ( !byte_4A4B98A )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v18);
    v21 = TerminalPramsManager_TypeInfo;
    byte_4A4B98A = 1;
  }
  if ( !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = TerminalPramsManager_TypeInfo;
  }
  v21->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = 0LL;
  if ( !byte_4A4B98B )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v18);
    v21 = TerminalPramsManager_TypeInfo;
    byte_4A4B98B = 1;
  }
  if ( !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = TerminalPramsManager_TypeInfo;
  }
  v21->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
  if ( !byte_4A4B98C )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v18);
    v21 = TerminalPramsManager_TypeInfo;
    byte_4A4B98C = 1;
  }
  if ( !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = TerminalPramsManager_TypeInfo;
  }
  v21->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
  if ( !byte_4A4AF92 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v18);
    v21 = TerminalPramsManager_TypeInfo;
    byte_4A4AF92 = 1;
  }
  if ( !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = TerminalPramsManager_TypeInfo;
  }
  p_BeforeEventSubmarineSaveData_k__BackingField = (CGThumbnailListItem_o *)&v21->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  p_BeforeEventSubmarineSaveData_k__BackingField->klass = 0LL;
  sub_1B8635C(p_BeforeEventSubmarineSaveData_k__BackingField, 0, v19, v20);
  v23 = (int)StringLiteral_1/*""*/;
  p_lastPlayBgmName = (CGThumbnailListItem_o *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayBgmName;
  p_lastPlayBgmName->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
  sub_1B8635C(p_lastPlayBgmName, v23, v25, v26);
  v30 = TerminalPramsManager_TypeInfo;
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayQuestConsumeAp = 0LL;
  if ( !byte_4A4B98D )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v27);
    v30 = TerminalPramsManager_TypeInfo;
    byte_4A4B98D = 1;
  }
  if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30);
    v30 = TerminalPramsManager_TypeInfo;
  }
  v31 = v30->static_fields;
  v31->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v31->_SpecifiedChangeSceneInfo_k__BackingField, 0, v28, v29);
  if ( !byte_4A4B6B0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v32);
    byte_4A4B6B0 = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v33->static_fields->_EventBoardGameSquareIndex_k__BackingField = 0;
  if ( !byte_4A4B6B2 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v32);
    v33 = TerminalPramsManager_TypeInfo;
    byte_4A4B6B2 = 1;
  }
  if ( !v33->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v33);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v33->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = 0;
  if ( !byte_4A4B6B4 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v32);
    v33 = TerminalPramsManager_TypeInfo;
    byte_4A4B6B4 = 1;
  }
  if ( !v33->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v33);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v33->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
  if ( !byte_4A4B981 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v32);
    v33 = TerminalPramsManager_TypeInfo;
    byte_4A4B981 = 1;
  }
  if ( !v33->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v33);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v33->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v33);
  TerminalPramsManager__ResetResumeScriptWithMap(v34);
  if ( !byte_4A4B597 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v35);
    byte_4A4B597 = 1;
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v38 = TerminalPramsManager_TypeInfo;
  }
  v38->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
  v39 = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
  if ( !byte_4A4B98E )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v35);
    v38 = TerminalPramsManager_TypeInfo;
    byte_4A4B98E = 1;
  }
  if ( !v38->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v38);
    v38 = TerminalPramsManager_TypeInfo;
  }
  p_PlayedTerminalEffects_k__BackingField = (CGThumbnailListItem_o *)&v38->static_fields->_PlayedTerminalEffects_k__BackingField;
  p_PlayedTerminalEffects_k__BackingField->klass = v39;
  sub_1B8635C(p_PlayedTerminalEffects_k__BackingField, (int32_t)v39, v36, v37);
  if ( !byte_4A4B793 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
    byte_4A4B793 = 1;
  }
  v44 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = 0;
  if ( !byte_4A4B794 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_4A4B794 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = 0;
  if ( !byte_4A4B6A1 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_4A4B6A1 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v45 = v44->static_fields;
  v45->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  *(_QWORD *)&v45->ConnectMarkEventId = 0LL;
  if ( !byte_4A4B98F )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_4A4B98F = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_isFortificationCheck_k__BackingField = 0;
  if ( !byte_4A4B990 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_4A4B990 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !byte_4A4B991 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_4A4B991 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !byte_4A4B6A9 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_4A4B6A9 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4A4B59D )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_4A4B59D = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_4A4B6A7 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_4A4B6A7 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_4A4B6A8 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_4A4B6A8 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_4A4B6A6 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_4A4B6A6 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_4A4B6A9 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_4A4B6A9 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4A4B69B )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_4A4B69B = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 0.0;
  if ( !byte_4A4B992 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_4A4B992 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  if ( !byte_4A4B2B8 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_4A4B2B8 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_4A4974A )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_4A4974A = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_PlayerGenderType_k__BackingField = 0;
  if ( !byte_4A4B993 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_4A4B993 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  v46 = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
  if ( !byte_4A4B6AE )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_4A4B6AE = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  p_SceneMoveQuestClearedInfo_k__BackingField = (CGThumbnailListItem_o *)&v44->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
  p_SceneMoveQuestClearedInfo_k__BackingField->klass = v46;
  sub_1B8635C(p_SceneMoveQuestClearedInfo_k__BackingField, (int32_t)v46, v42, v43);
  if ( !byte_4A4B994 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v48);
    byte_4A4B994 = 1;
  }
  v51 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v51 = TerminalPramsManager_TypeInfo;
  }
  v52 = v51->static_fields;
  v52->_CampaignBonus_k__BackingField = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v52->_CampaignBonus_k__BackingField, 0, v49, v50);
  if ( !byte_4A4B995 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v53);
    byte_4A4B995 = 1;
  }
  v56 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v56 = TerminalPramsManager_TypeInfo;
  }
  v57 = v56->static_fields;
  v57->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v57->_CampaignDirectBonus_k__BackingField, 0, v54, v55);
  if ( !byte_4A4B996 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v58);
    byte_4A4B996 = 1;
  }
  v61 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v61 = TerminalPramsManager_TypeInfo;
  }
  v61->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
  v62 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4A48DBB )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v58);
    v61 = TerminalPramsManager_TypeInfo;
    byte_4A48DBB = 1;
  }
  if ( !v61->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v61);
    v61 = TerminalPramsManager_TypeInfo;
  }
  v63 = v61->static_fields;
  v63->_TransitionScrollTabName_k__BackingField = v62;
  sub_1B8635C((CGThumbnailListItem_o *)&v63->_TransitionScrollTabName_k__BackingField, (int32_t)v62, v59, v60);
}


void __fastcall TerminalPramsManager__InitTipsArchiveScrollValueList(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  unsigned __int64 i; // x20
  struct System_Single_array *TipsArchiveScrollValueList; // x8
  struct System_Single_array *v5; // x8
  char *v6; // x8

  if ( (byte_4A4B97B & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B97B = 1;
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
      sub_1B86614(v2, v1);
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
      sub_1B8661C(v2, v1);
    v6 = (char *)v5 + 4 * i;
    *((_DWORD *)v6 + 8) = 0;
  }
}


bool __fastcall TerminalPramsManager__IsAuto(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4A4B91A & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B91A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4AE81 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4AE81 = 1;
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
  if ( !byte_4A4B97E )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B97E = 1;
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

  if ( (byte_4A4B91C & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, v1);
    sub_1B863B8(&Method_DataManager_GetMasterData_WarMaster___, v2);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_1B863B8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v6);
    byte_4A4B91C = 1;
  }
  entity = 0LL;
  v14 = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4AE81 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4AE81 = 1;
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
  if ( !byte_4A4AE79 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4AE79 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_WarId_k__BackingField < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4AE79 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v10);
    byte_4A4AE79 = 1;
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
          (const MethodInfo_32142CC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !entity)
    || !Instance )
  {
LABEL_34:
    sub_1B86614(Instance, v10);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v14,
          (int32_t)entity[6].klass,
          (const MethodInfo_32142CC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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

  if ( (byte_4A4B977 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&Method_System_Nullable_int__GetValueOrDefault__, v3);
    sub_1B863B8(&Method_System_Nullable_int___ctor__, v4);
    sub_1B863B8(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    byte_4A4B977 = 1;
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      sub_1B86614(0LL, v9);
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, targetWarId, 0LL);
    if ( WarInfoByWarID )
    {
      WarInfoByWarID = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)WarInfoByWarID, 0LL);
      if ( WarInfoByWarID )
      {
        v10 = *((_DWORD *)WarInfoByWarID + 31);
        v13 = (System_Nullable_int__o)&v12;
        v12 = 0LL;
        System_Nullable_int____ctor(v13, v10, (const MethodInfo_371C418 *)Method_System_Nullable_int___ctor__);
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

  if ( (byte_4A4B94A & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11258/*"SAVEKEY_DataLostBattleAutoReset"*/, v2);
    byte_4A4B94A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B6A5 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B6A5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11258/*"SAVEKEY_DataLostBattleAutoReset"*/,
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

  if ( (byte_4A4B975 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v3);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestMaster___, v4);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    sub_1B863B8(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v6);
    byte_4A4B975 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestMaster___);
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
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !entity
    || (v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
        Master_object = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0LL),
        !v9) )
  {
LABEL_20:
    sub_1B86614(Master_object, v8);
  }
  Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v9,
                                     &v13,
                                     (int32_t)Master_object,
                                     (const MethodInfo_32142CC *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
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

  if ( (byte_4A4B967 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_WarMaster___, v3);
    sub_1B863B8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A4B967 = 1;
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
            (const MethodInfo_2F884F0 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_WarMaster___);
        if ( Instance )
        {
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       &entity,
                                       warId,
                                       (const MethodInfo_32142CC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( entity )
            return LODWORD(entity[6].klass) == 0;
        }
      }
      sub_1B86614(Instance, v11);
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

  if ( (byte_4A4B968 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_SpotMaster___, v3);
    sub_1B863B8(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v6);
    byte_4A4B968 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SpotMaster___),
        !entity)
    || (v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (Il2CppObject *)QuestEntity__getSpotId(entity, 0LL),
        !v9) )
  {
LABEL_16:
    sub_1B86614(Instance, v8);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               v9,
                               &v13,
                               (int32_t)Instance,
                               (const MethodInfo_32142CC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
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

  if ( (byte_4A4B966 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_int___, v3);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v4);
    byte_4A4B966 = 1;
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
         (const MethodInfo_2F884F0 *)Method_System_Linq_Enumerable_Contains_int___) )
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

  if ( (byte_4A4B95A & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_int__Contains__, method);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v3);
    byte_4A4B95A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v4->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1B86614(0LL, method);
  return System_Collections_Generic_HashSet_int___Contains(
           loginQuestNotifiedList,
           questId,
           (const MethodInfo_34B7F04 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B943 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11264/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v2);
    byte_4A4B943 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B59B )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B59B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11264/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v3->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B942 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11263/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v2);
    byte_4A4B942 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B59A )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B59A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11263/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v3->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectNt2AfterAction_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B944 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11265/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v2);
    byte_4A4B944 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B6A0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B6A0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11265/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
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

  if ( (byte_4A4B971 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, *(_QWORD *)&day);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v6);
    byte_4A4B971 = 1;
  }
  value = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B9B3 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    byte_4A4B9B3 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_QWORD *)&v7[2].fields._entries->m_Items[17].fields.hashCode;
  if ( !v8 || (v7 = *(System_Collections_Generic_Dictionary_int__object__o **)(v8 + 16)) == 0LL )
    sub_1B86614(v7, *(_QWORD *)&day);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         v7,
         eventId,
         &value,
         (const MethodInfo_326EEF0 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v9 = (char)value;
    if ( value )
      v9 = System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             day,
             (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__);
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

  if ( (byte_4A4B953 & 1) == 0 )
  {
    sub_1B863B8(&ScrTerminalListTop_TypeInfo, v1);
    sub_1B863B8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v2);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v3);
    byte_4A4B953 = 1;
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v9 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v9 )
LABEL_34:
    sub_1B86614(Instance, v7);
  if ( !clsQuestCheck__IsWarClear(
          v9,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
          0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A48E97 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v10);
      byte_4A48E97 = 1;
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
      if ( !byte_4A48E96 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v10);
        byte_4A48E96 = 1;
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
  if ( (byte_4A4B951 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_43/*"\n"*/, v2);
    sub_1B863B8(&StringLiteral_89/*"\r\n"*/, v3);
    byte_4A4B951 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B99D )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B99D = 1;
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
  if ( !byte_4A4B99D )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v5);
    byte_4A4B99D = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  PlayedTerminalEffects_k__BackingField = v7->static_fields->_PlayedTerminalEffects_k__BackingField;
  if ( !PlayedTerminalEffects_k__BackingField
    || (PlayedTerminalEffects_k__BackingField = System_String__Replace_61691724(
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
    sub_1B86614(PlayedTerminalEffects_k__BackingField, v5);
  }
  klass = PlayedTerminalEffects_k__BackingField[1].klass;
  v10 = PlayedTerminalEffects_k__BackingField;
  if ( (int)klass >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)klass )
        sub_1B8661C(PlayedTerminalEffects_k__BackingField, v5);
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
  if ( (byte_4A4B955 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_43/*"\n"*/, v2);
    sub_1B863B8(&StringLiteral_89/*"\r\n"*/, v3);
    byte_4A4B955 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  mTerminalWarStartedIds = v4->static_fields->mTerminalWarStartedIds;
  if ( !mTerminalWarStartedIds
    || (mTerminalWarStartedIds = System_String__Replace_61691724(
                                   mTerminalWarStartedIds,
                                   (System_String_o *)StringLiteral_89/*"\r\n"*/,
                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                   0LL)) == 0LL
    || (mTerminalWarStartedIds = (System_String_o *)System_String__Split(mTerminalWarStartedIds, 0xAu, 0, 0LL)) == 0LL )
  {
    sub_1B86614(mTerminalWarStartedIds, method);
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
        sub_1B8661C(mTerminalWarStartedIds, method);
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

  if ( (byte_4A4B941 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_13474/*"TerminalLastPanelEventPoint"*/, v2);
    byte_4A4B941 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13474/*"TerminalLastPanelEventPoint"*/, v3->static_fields->panelEventPoint, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayBgmNameSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B93F & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11260/*"SAVEKEY_LastPlayBgmName"*/, v2);
    byte_4A4B93F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11260/*"SAVEKEY_LastPlayBgmName"*/, v3->static_fields->lastPlayBgmName, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B940 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11261/*"SAVEKEY_LastPlayQuestConsumeType"*/, v2);
    byte_4A4B940 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11261/*"SAVEKEY_LastPlayQuestConsumeType"*/,
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
  Il2CppObject *String_69314580; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x19
  TerminalPramsManager_c *v12; // x0
  CGThumbnailListItem_o *p_mQuestClearHeroineInfo; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppClass *klass; // x8
  const char *name; // x9
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  QuestClearHeroineInfo_o *Load; // x20
  TerminalPramsManager_c *v23; // x0
  CGThumbnailListItem_o *v24; // x0
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
  const MethodInfo *v35; // x3
  Il2CppClass *v36; // x8
  TerminalPramsManager_c *v37; // x0
  Il2CppClass *v38; // x20
  CGThumbnailListItem_o *p_mQuestPhaseRewardInfos; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  TerminalPramsManager_c *v44; // x8
  struct TerminalPramsManager_StaticFields *v45; // x9
  _QWORD *v46; // x9
  struct UserSuperBossEntity_array *v47; // x20
  TerminalPramsManager_c *v48; // x0
  struct TerminalPramsManager_StaticFields *v49; // x0
  __int64 v50; // x0
  __int64 v51; // x1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  Il2CppClass *v54; // x8
  Il2CppClass *v55; // x20
  TerminalPramsManager_c *v56; // x0
  struct TerminalPramsManager_StaticFields *v57; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  int *v62; // x8
  CGThumbnailListItem_c *v63; // x20
  TerminalPramsManager_c *v64; // x0
  CGThumbnailListItem_o *p_eventPointWinReward_k__BackingField; // x0
  __int64 v66; // x0
  __int64 v67; // x1
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  int32_t v70; // w20
  TerminalPramsManager_c *v71; // x8
  int *v72; // x9
  CGThumbnailListItem_c *v73; // x20
  TerminalPramsManager_c *v74; // x0
  CGThumbnailListItem_o *p_eventRaceBoost_k__BackingField; // x0
  __int64 v76; // x0
  __int64 v77; // x1
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  Il2CppClass *v80; // x8
  Il2CppClass *v81; // x20
  TerminalPramsManager_c *v82; // x0
  CGThumbnailListItem_o *p_questClearCostumeRelease_k__BackingField; // x0
  __int64 v84; // x0
  __int64 v85; // x1
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  _QWORD *v88; // x8
  CGThumbnailListItem_c *v89; // x20
  TerminalPramsManager_c *v90; // x0
  CGThumbnailListItem_o *p_questClearCostumeGet_k__BackingField; // x0
  __int64 v92; // x0
  __int64 v93; // x1
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  Il2CppClass *v96; // x8
  Il2CppClass *v97; // x20
  TerminalPramsManager_c *v98; // x0
  CGThumbnailListItem_o *p_eventTowerReward_k__BackingField; // x0
  __int64 v100; // x0
  __int64 v101; // x1
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  _QWORD *v104; // x8
  __int64 v105; // x9
  __int64 v106; // x9
  CGThumbnailListItem_c *v107; // x20
  TerminalPramsManager_c *v108; // x0
  CGThumbnailListItem_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  __int64 v110; // x0
  __int64 v111; // x1
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  Il2CppClass *v114; // x8
  Il2CppClass *v115; // x20
  TerminalPramsManager_c *v116; // x0
  CGThumbnailListItem_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  __int64 v118; // x0
  __int64 v119; // x1
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  _QWORD *v122; // x8
  CGThumbnailListItem_c *v123; // x20
  TerminalPramsManager_c *v124; // x0
  CGThumbnailListItem_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  __int64 v126; // x0
  __int64 v127; // x1
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  char v130; // w20
  TerminalPramsManager_c *v131; // x8
  _QWORD *v132; // x9
  CGThumbnailListItem_c *v133; // x20
  TerminalPramsManager_c *v134; // x0
  CGThumbnailListItem_o *p_warClearReward_k__BackingField; // x0
  __int64 v136; // x0
  __int64 v137; // x1
  int32_t v138; // w2
  const MethodInfo *v139; // x3
  int32_t v140; // w20
  TerminalPramsManager_c *v141; // x8
  char v142; // w21
  struct TerminalPramsManager_StaticFields *v143; // x9
  _QWORD *v144; // x10
  struct BattleDropItem_array *v145; // x20
  __int64 v146; // x0
  __int64 v147; // x1
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  Il2CppClass *v150; // x8
  TerminalPramsManager_c *v151; // x0
  Il2CppClass *v152; // x20
  CGThumbnailListItem_o *p_mResultEventPanelRewardInfos; // x0
  __int64 v154; // x1
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  TerminalPramsManager_c *v157; // x0
  Il2CppClass *v158; // x20
  CGThumbnailListItem_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v160; // x1
  int32_t v161; // w2
  const MethodInfo *v162; // x3
  char v163; // w20
  TerminalPramsManager_c *v164; // x0
  int32_t monitor_high; // w21
  int32_t v166; // w21
  char v167; // w21
  CGThumbnailListItem_c *v168; // x20
  CGThumbnailListItem_o *p_OldUserEventPoint_k__BackingField; // x0
  __int64 v170; // x0
  __int64 v171; // x1
  int32_t v172; // w2
  const MethodInfo *v173; // x3
  Il2CppClass *v174; // x8
  Il2CppClass *v175; // x20
  TerminalPramsManager_c *v176; // x0
  CGThumbnailListItem_o *p_UseAddRewardItemRewardInfos_k__BackingField; // x0
  __int64 v178; // x1
  TerminalPramsManager_c *v179; // x0
  TerminalPramsManager_c *v180; // x8
  TerminalPramsManager_c *v181; // x0

  if ( (byte_4A4B96B & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_1B863B8(&Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___, v2);
    sub_1B863B8(&JsonManager_TypeInfo, v3);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v4);
    byte_4A4B96B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B58A )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B58A = 1;
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
      String_69314580 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69314580(
                                          v7->static_fields->SAVEKEY_CLEAR_REWARD_DISP,
                                          0LL);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v11 = JsonManager__Deserialize_object_(
              String_69314580,
              (const MethodInfo_2FD86EC *)Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
      v12 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v12 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestClearHeroineInfo = (CGThumbnailListItem_o *)&v12->static_fields->mQuestClearHeroineInfo;
      p_mQuestClearHeroineInfo->klass = 0LL;
      sub_1B8635C(p_mQuestClearHeroineInfo, 0, v9, v10);
      if ( !v11 )
        sub_1B86614(v14, v15);
      klass = v11[1].klass;
      if ( !klass )
        sub_1B86614(v14, v15);
      name = klass->_1.name;
      if ( name && *((int *)name + 8) >= 1 )
      {
        Load = TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(
                 (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)v11[1].klass,
                 0LL);
        v23 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v23 = TerminalPramsManager_TypeInfo;
        }
        v24 = (CGThumbnailListItem_o *)&v23->static_fields->mQuestClearHeroineInfo;
        v24->klass = (CGThumbnailListItem_c *)Load;
        sub_1B8635C(v24, (int32_t)Load, v20, v21);
      }
      v25 = (__int64)TerminalPramsManager_TypeInfo;
      monitor = (char)v11[2].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A4B11D )
      {
        v25 = sub_1B863B8(&TerminalPramsManager_TypeInfo, v15);
        byte_4A4B11D = 1;
      }
      v27 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v27 = TerminalPramsManager_TypeInfo;
      }
      v27->static_fields->_IsQuestClear_k__BackingField = monitor;
      v28 = BYTE1(v11[2].monitor);
      if ( !byte_4A4B11E )
      {
        v25 = sub_1B863B8(&TerminalPramsManager_TypeInfo, v15);
        v27 = TerminalPramsManager_TypeInfo;
        byte_4A4B11E = 1;
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
        sub_1B86614(v25, v15);
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
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->mQuestRewardInfos, (int32_t)v31, v16, v17);
      v36 = v11[2].klass;
      if ( !v36 )
        sub_1B86614(v32, v33);
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
      p_mQuestPhaseRewardInfos = (CGThumbnailListItem_o *)&v37->static_fields->mQuestPhaseRewardInfos;
      p_mQuestPhaseRewardInfos->klass = (CGThumbnailListItem_c *)v38;
      sub_1B8635C(p_mQuestPhaseRewardInfos, (int32_t)v38, v34, v35);
      v44 = TerminalPramsManager_TypeInfo;
      v45 = TerminalPramsManager_TypeInfo->static_fields;
      *(_QWORD *)&v45->clearLastBattleRaidId = *(void **)((char *)&v11[2].monitor + 4);
      v45->joinGroupId = HIDWORD(v11[3].klass);
      v46 = v11[3].monitor;
      if ( !v46 )
        sub_1B86614(v40, v41);
      if ( v46[3] )
        v47 = (struct UserSuperBossEntity_array *)v11[3].monitor;
      else
        v47 = 0LL;
      if ( !v44->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v44);
      if ( !byte_4A4B9A9 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
        byte_4A4B9A9 = 1;
      }
      v48 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v48 = TerminalPramsManager_TypeInfo;
      }
      v49 = v48->static_fields;
      v49->_oldSuperBoss_k__BackingField = v47;
      sub_1B8635C((CGThumbnailListItem_o *)&v49->_oldSuperBoss_k__BackingField, (int32_t)v47, v42, v43);
      v54 = v11[4].klass;
      if ( !v54 )
        sub_1B86614(v50, v51);
      if ( v54->_1.namespaze )
        v55 = v11[4].klass;
      else
        v55 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A4B9AA )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v51);
        byte_4A4B9AA = 1;
      }
      v56 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v56 = TerminalPramsManager_TypeInfo;
      }
      v57 = v56->static_fields;
      v57->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v55;
      sub_1B8635C((CGThumbnailListItem_o *)&v57->_oldPersonalBoss_k__BackingField, (int32_t)v55, v52, v53);
      v62 = (int *)v11[4].monitor;
      if ( !v62 )
        sub_1B86614(v58, v59);
      if ( v62[4] <= 0 )
        v63 = 0LL;
      else
        v63 = (CGThumbnailListItem_c *)v11[4].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A4B9A3 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v59);
        byte_4A4B9A3 = 1;
      }
      v64 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v64 = TerminalPramsManager_TypeInfo;
      }
      p_eventPointWinReward_k__BackingField = (CGThumbnailListItem_o *)&v64->static_fields->_eventPointWinReward_k__BackingField;
      p_eventPointWinReward_k__BackingField->klass = v63;
      sub_1B8635C(p_eventPointWinReward_k__BackingField, (int32_t)v63, v60, v61);
      v70 = (int32_t)v11[5].klass;
      if ( !byte_4A4B9A4 )
      {
        v66 = sub_1B863B8(&TerminalPramsManager_TypeInfo, v67);
        byte_4A4B9A4 = 1;
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
        sub_1B86614(v66, v67);
      if ( v72[4] <= 0 )
        v73 = 0LL;
      else
        v73 = (CGThumbnailListItem_c *)v11[5].monitor;
      if ( !v71->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v71);
      if ( !byte_4A4B6AF )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v67);
        byte_4A4B6AF = 1;
      }
      v74 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v74 = TerminalPramsManager_TypeInfo;
      }
      p_eventRaceBoost_k__BackingField = (CGThumbnailListItem_o *)&v74->static_fields->_eventRaceBoost_k__BackingField;
      p_eventRaceBoost_k__BackingField->klass = v73;
      sub_1B8635C(p_eventRaceBoost_k__BackingField, (int32_t)v73, v68, v69);
      v80 = v11[6].klass;
      if ( !v80 )
        sub_1B86614(v76, v77);
      if ( v80->_1.namespaze )
        v81 = v11[6].klass;
      else
        v81 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A4B792 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v77);
        byte_4A4B792 = 1;
      }
      v82 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v82 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeRelease_k__BackingField = (CGThumbnailListItem_o *)&v82->static_fields->_questClearCostumeRelease_k__BackingField;
      p_questClearCostumeRelease_k__BackingField->klass = (CGThumbnailListItem_c *)v81;
      sub_1B8635C(p_questClearCostumeRelease_k__BackingField, (int32_t)v81, v78, v79);
      v88 = v11[6].monitor;
      if ( !v88 )
        sub_1B86614(v84, v85);
      if ( v88[3] )
        v89 = (CGThumbnailListItem_c *)v11[6].monitor;
      else
        v89 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A4B587 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v85);
        byte_4A4B587 = 1;
      }
      v90 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v90 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeGet_k__BackingField = (CGThumbnailListItem_o *)&v90->static_fields->_questClearCostumeGet_k__BackingField;
      p_questClearCostumeGet_k__BackingField->klass = v89;
      sub_1B8635C(p_questClearCostumeGet_k__BackingField, (int32_t)v89, v86, v87);
      v96 = v11[7].klass;
      if ( !v96 )
        sub_1B86614(v92, v93);
      if ( SLODWORD(v96->_1.name) <= 0 )
        v97 = 0LL;
      else
        v97 = v11[7].klass;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A4B9A7 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v93);
        byte_4A4B9A7 = 1;
      }
      v98 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v98 = TerminalPramsManager_TypeInfo;
      }
      p_eventTowerReward_k__BackingField = (CGThumbnailListItem_o *)&v98->static_fields->_eventTowerReward_k__BackingField;
      p_eventTowerReward_k__BackingField->klass = (CGThumbnailListItem_c *)v97;
      sub_1B8635C(p_eventTowerReward_k__BackingField, (int32_t)v97, v94, v95);
      v104 = v11[7].monitor;
      if ( !v104 )
        sub_1B86614(v100, v101);
      v105 = v104[3];
      if ( v105 )
      {
        if ( !(_DWORD)v105 )
          sub_1B8661C(v100, v101);
        v106 = v104[4];
        if ( !v106 )
          sub_1B86614(v100, v101);
        if ( *(__int64 *)(v106 + 32) <= 0 )
          v107 = 0LL;
        else
          v107 = (CGThumbnailListItem_c *)v11[7].monitor;
      }
      else
      {
        v107 = 0LL;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A4B9A8 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v101);
        byte_4A4B9A8 = 1;
      }
      v108 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v108 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventTowerRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v108->static_fields->_resultEventTowerRewardInfo_k__BackingField;
      p_resultEventTowerRewardInfo_k__BackingField->klass = v107;
      sub_1B8635C(p_resultEventTowerRewardInfo_k__BackingField, (int32_t)v107, v102, v103);
      v114 = v11[8].klass;
      if ( !v114 )
        sub_1B86614(v110, v111);
      if ( v114->_1.namespaze )
        v115 = v11[8].klass;
      else
        v115 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A4B581 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v111);
        byte_4A4B581 = 1;
      }
      v116 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v116 = TerminalPramsManager_TypeInfo;
      }
      p_resultBoostItemRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v116->static_fields->_resultBoostItemRewardInfo_k__BackingField;
      p_resultBoostItemRewardInfo_k__BackingField->klass = (CGThumbnailListItem_c *)v115;
      sub_1B8635C(p_resultBoostItemRewardInfo_k__BackingField, (int32_t)v115, v112, v113);
      v122 = v11[8].monitor;
      if ( !v122 )
        sub_1B86614(v118, v119);
      if ( v122[3] )
        v123 = (CGThumbnailListItem_c *)v11[8].monitor;
      else
        v123 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A4B582 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v119);
        byte_4A4B582 = 1;
      }
      v124 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v124 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventBoardGameTokenRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v124->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
      p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = v123;
      sub_1B8635C(p_resultEventBoardGameTokenRewardInfo_k__BackingField, (int32_t)v123, v120, v121);
      v130 = (char)v11[9].klass;
      if ( !byte_4A4A0F0 )
      {
        v126 = sub_1B863B8(&TerminalPramsManager_TypeInfo, v127);
        byte_4A4A0F0 = 1;
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
        sub_1B86614(v126, v127);
      if ( v132[3] )
        v133 = (CGThumbnailListItem_c *)v11[9].monitor;
      else
        v133 = 0LL;
      if ( !v131->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v131);
      if ( !byte_4A4B58C )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v127);
        byte_4A4B58C = 1;
      }
      v134 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v134 = TerminalPramsManager_TypeInfo;
      }
      p_warClearReward_k__BackingField = (CGThumbnailListItem_o *)&v134->static_fields->_warClearReward_k__BackingField;
      p_warClearReward_k__BackingField->klass = v133;
      sub_1B8635C(p_warClearReward_k__BackingField, (int32_t)v133, v128, v129);
      v140 = (int32_t)v11[10].klass;
      if ( !byte_4A4907C )
      {
        v136 = sub_1B863B8(&TerminalPramsManager_TypeInfo, v137);
        byte_4A4907C = 1;
      }
      v141 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v141 = TerminalPramsManager_TypeInfo;
      }
      v141->static_fields->_EventActivityPointEffectState_k__BackingField = v140;
      v142 = BYTE4(v11[10].klass);
      if ( !byte_4A4B589 )
      {
        v136 = sub_1B863B8(&TerminalPramsManager_TypeInfo, v137);
        v141 = TerminalPramsManager_TypeInfo;
        byte_4A4B589 = 1;
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
        sub_1B86614(v136, v137);
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
      sub_1B8635C((CGThumbnailListItem_o *)&v143->mQuestResultAfterEventRewardInfos, (int32_t)v145, v138, v139);
      v150 = v11[11].klass;
      if ( !v150 )
        sub_1B86614(v146, v147);
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
      p_mResultEventPanelRewardInfos = (CGThumbnailListItem_o *)&v151->static_fields->mResultEventPanelRewardInfos;
      p_mResultEventPanelRewardInfos->klass = (CGThumbnailListItem_c *)v152;
      sub_1B8635C(p_mResultEventPanelRewardInfos, (int32_t)v152, v148, v149);
      v157 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = (int32_t)v11[11].monitor;
      v158 = v11[12].klass;
      if ( !byte_4A4B585 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v154);
        v157 = TerminalPramsManager_TypeInfo;
        byte_4A4B585 = 1;
      }
      if ( !v157->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v157);
        v157 = TerminalPramsManager_TypeInfo;
      }
      p_limitImageAnnounces_k__BackingField = (CGThumbnailListItem_o *)&v157->static_fields->_limitImageAnnounces_k__BackingField;
      p_limitImageAnnounces_k__BackingField->klass = (CGThumbnailListItem_c *)v158;
      sub_1B8635C(p_limitImageAnnounces_k__BackingField, (int32_t)v158, v155, v156);
      v163 = (char)v11[12].monitor;
      if ( !byte_4A4B121 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v160);
        byte_4A4B121 = 1;
      }
      v164 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v164 = TerminalPramsManager_TypeInfo;
      }
      v164->static_fields->_IsOrdealCallWarClear_k__BackingField = v163;
      monitor_high = HIDWORD(v11[12].monitor);
      if ( !byte_4A4B57C )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v160);
        v164 = TerminalPramsManager_TypeInfo;
        byte_4A4B57C = 1;
      }
      if ( !v164->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v164);
        v164 = TerminalPramsManager_TypeInfo;
      }
      v164->static_fields->_EventMuralId_k__BackingField = monitor_high;
      v166 = (int32_t)v11[13].klass;
      if ( !byte_4A4B6AC )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v160);
        v164 = TerminalPramsManager_TypeInfo;
        byte_4A4B6AC = 1;
      }
      if ( !v164->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v164);
        v164 = TerminalPramsManager_TypeInfo;
      }
      v164->static_fields->_EventActionQuestId_k__BackingField = v166;
      v167 = BYTE4(v11[13].klass);
      if ( !byte_4A4B57E )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v160);
        v164 = TerminalPramsManager_TypeInfo;
        byte_4A4B57E = 1;
      }
      if ( !v164->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v164);
        v164 = TerminalPramsManager_TypeInfo;
      }
      v164->static_fields->_PlayHappinessCounterEffect_k__BackingField = v167;
      v168 = (CGThumbnailListItem_c *)v11[13].monitor;
      if ( !byte_4A4B9A1 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v160);
        v164 = TerminalPramsManager_TypeInfo;
        byte_4A4B9A1 = 1;
      }
      if ( !v164->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v164);
        v164 = TerminalPramsManager_TypeInfo;
      }
      p_OldUserEventPoint_k__BackingField = (CGThumbnailListItem_o *)&v164->static_fields->_OldUserEventPoint_k__BackingField;
      p_OldUserEventPoint_k__BackingField->klass = v168;
      sub_1B8635C(p_OldUserEventPoint_k__BackingField, (int32_t)v168, v161, v162);
      v174 = v11[14].klass;
      if ( !v174 )
        sub_1B86614(v170, v171);
      if ( v174->_1.namespaze )
        v175 = v11[14].klass;
      else
        v175 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A48E9A )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v171);
        byte_4A48E9A = 1;
      }
      v176 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v176 = TerminalPramsManager_TypeInfo;
      }
      p_UseAddRewardItemRewardInfos_k__BackingField = (CGThumbnailListItem_o *)&v176->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
      p_UseAddRewardItemRewardInfos_k__BackingField->klass = (CGThumbnailListItem_c *)v175;
      sub_1B8635C(p_UseAddRewardItemRewardInfos_k__BackingField, (int32_t)v175, v172, v173);
      v179 = TerminalPramsManager_TypeInfo;
      if ( BYTE1(v11[2].monitor) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A4907E )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, v178);
          byte_4A4907E = 1;
        }
        v179 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v179 = TerminalPramsManager_TypeInfo;
        }
        v179->static_fields->_IsAutoResume_k__BackingField = 1;
      }
      if ( !v179->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v179);
      if ( !byte_4A4B58B )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v178);
        byte_4A4B58B = 1;
      }
      v180 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v180 = TerminalPramsManager_TypeInfo;
      }
      if ( v180->static_fields->_warClearReward_k__BackingField )
        goto LABEL_276;
      if ( !v180->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v180);
      if ( !byte_4A4B588 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v178);
        byte_4A4B588 = 1;
      }
      v180 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v180 = TerminalPramsManager_TypeInfo;
      }
      if ( v180->static_fields->_IsPlayScriptWithMap_k__BackingField )
      {
LABEL_276:
        if ( !v180->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v180);
        if ( !byte_4A4B9B1 )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, v178);
          byte_4A4B9B1 = 1;
        }
        v181 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v181 = TerminalPramsManager_TypeInfo;
        }
        v181->static_fields->_isQuestRewardSetted_k__BackingField = 1;
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
  const MethodInfo *v11; // x3
  TerminalPramsManager_c *v12; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B96E & 1) == 0 )
  {
    sub_1B863B8(&EventRaidDefeatedEffectInfo_TypeInfo, v1);
    sub_1B863B8(&string_TypeInfo, v2);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v3);
    sub_1B863B8(&StringLiteral_11259/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v4);
    byte_4A4B96E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B9B3 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B9B3 = 1;
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
               (System_String_o *)StringLiteral_11259/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v7 = (EventRaidDefeatedEffectInfo_o *)sub_1B86604(EventRaidDefeatedEffectInfo_TypeInfo);
    EventRaidDefeatedEffectInfo___ctor(v7, String, v8);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B9B2 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v9);
      byte_4A4B9B2 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = v7;
    sub_1B8635C(
      (CGThumbnailListItem_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
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
  const MethodInfo *v13; // x3
  int max_length; // w8
  System_String_array *v15; // x20
  unsigned int v16; // w23
  System_String_array *v17; // x21
  TerminalPramsManager_c *v18; // x0
  CGThumbnailListItem_o *p_QuestRandomGroupList_k__BackingField; // x0
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A4B973 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v1);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v2);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1B863B8(&string_TypeInfo, v4);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_11268/*"SAVEKEY_QuestRandomGroupList"*/, v6);
    byte_4A4B973 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4AE76 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4AE76 = 1;
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
               (System_String_o *)StringLiteral_11268/*"SAVEKEY_QuestRandomGroupList"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v9,
      (const MethodInfo_3264078 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
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
          sub_1B8661C(v10, v11);
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
                (const MethodInfo_3264A3C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
        }
        max_length = v15->max_length;
        if ( (int)++v16 >= max_length )
          goto LABEL_27;
      }
LABEL_35:
      sub_1B86614(v10, v11);
    }
LABEL_27:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B9B4 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v11);
      byte_4A4B9B4 = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    p_QuestRandomGroupList_k__BackingField = (CGThumbnailListItem_o *)&v18->static_fields->_QuestRandomGroupList_k__BackingField;
    p_QuestRandomGroupList_k__BackingField->klass = (CGThumbnailListItem_c *)v9;
    sub_1B8635C(p_QuestRandomGroupList_k__BackingField, (int32_t)v9, v12, v13);
  }
}


void __fastcall TerminalPramsManager__LoadQuestReleasedFocusState(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x0

  if ( (byte_4A4B95C & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B95C = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v2);
  if ( !QuestFocusStateManager
    || (QuestFocusStateManager__ClearQuestFocusStateDataList(QuestFocusStateManager, 0LL),
        (QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager(v5)) == 0LL) )
  {
    sub_1B86614(QuestFocusStateManager, v4);
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
  int32_t Int_69314012; // w19
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
  System_String_o *String_69314580; // x20
  __int64 v78; // x1
  int64_t v79; // x19
  TerminalPramsManager_c *v80; // x0
  System_String_o *v81; // x19
  __int64 v82; // x1
  int32_t v83; // w19
  TerminalPramsManager_c *v84; // x0
  System_String_o *v85; // x19
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  System_String_o *v88; // x19
  TerminalPramsManager_c *v89; // x8
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_o *v91; // x19
  __int64 v92; // x1
  int32_t v93; // w19
  TerminalPramsManager_c *v94; // x0
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
  System_String_o *v116; // x20
  __int64 v117; // x1
  int64_t v118; // x19
  TerminalPramsManager_c *v119; // x0
  System_String_o *v120; // x19
  __int64 v121; // x1
  int32_t v122; // w19
  TerminalPramsManager_c *v123; // x0
  System_String_o *v124; // x19
  __int64 v125; // x1
  int32_t v126; // w19
  TerminalPramsManager_c *v127; // x0
  System_String_o *v128; // x19
  Il2CppObject *v129; // x19
  __int64 v130; // x1
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  Il2CppObject *v133; // x19
  TerminalPramsManager_c *v134; // x0
  CGThumbnailListItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  System_String_o *v136; // x19
  __int64 v137; // x1
  const MethodInfo *v138; // x2
  int32_t v139; // w20
  TerminalPramsManager_c *v140; // x0
  int32_t WarId_k__BackingField; // w20
  System_String_o *v142; // x19
  Il2CppObject *v143; // x19
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  Il2CppObject *v146; // x19
  TerminalPramsManager_c *v147; // x8
  CGThumbnailListItem_o *p_eventConquestInfos; // x0
  System_String_o *v149; // x19
  int32_t v150; // w19
  TerminalPramsManager_c *v151; // x8
  System_String_o *v152; // x19
  int32_t v153; // w19
  TerminalPramsManager_c *v154; // x8
  System_String_o *v155; // x19
  Il2CppObject *v156; // x19
  int32_t v157; // w2
  const MethodInfo *v158; // x3
  Il2CppObject *v159; // x19
  TerminalPramsManager_c *v160; // x8
  CGThumbnailListItem_o *p_eventHarvestGrowthInfo; // x0
  System_String_o *v162; // x19
  int32_t v163; // w2
  const MethodInfo *v164; // x3
  System_String_o *v165; // x19
  TerminalPramsManager_c *v166; // x8
  CGThumbnailListItem_o *p_lastPlayBgmName; // x0
  System_String_o *v168; // x19
  int32_t v169; // w19
  TerminalPramsManager_c *v170; // x8
  System_String_o *v171; // x19
  __int64 v172; // x1
  int32_t v173; // w19
  TerminalPramsManager_c *v174; // x0
  System_String_o *v175; // x19
  int32_t v176; // w19
  TerminalPramsManager_c *v177; // x8
  System_String_o *v178; // x19
  __int64 v179; // x1
  int32_t v180; // w2
  const MethodInfo *v181; // x3
  System_String_o *v182; // x19
  TerminalPramsManager_c *v183; // x0
  CGThumbnailListItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
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
  __int64 v198; // x1
  int32_t v199; // w19
  TerminalPramsManager_c *v200; // x0
  System_String_o *v201; // x19
  int32_t v202; // w19
  TerminalPramsManager_c *v203; // x8
  System_String_o *v204; // x19
  int32_t v205; // w19
  TerminalPramsManager_c *v206; // x8
  System_String_o *v207; // x19
  __int64 v208; // x1
  int32_t v209; // w19
  TerminalPramsManager_c *v210; // x0
  System_String_o *v211; // x19
  __int64 v212; // x1
  int32_t v213; // w2
  const MethodInfo *v214; // x3
  System_String_o *v215; // x19
  TerminalPramsManager_c *v216; // x0
  CGThumbnailListItem_o *p_ClearEventQuestIds_k__BackingField; // x0
  System_String_o *v218; // x19
  System_String_o *v219; // x19
  System_String_array *IsNullOrEmpty; // x0
  __int64 v221; // x1
  __int64 v222; // x8
  System_String_array *v223; // x19
  int32_t v224; // w20
  TerminalPramsManager_c *v225; // x8
  int32_t v226; // w0
  int32_t v227; // w19
  TerminalPramsManager_c *v228; // x0
  System_String_o *v229; // x19
  __int64 v230; // x1
  int32_t v231; // w19
  TerminalPramsManager_c *v232; // x0
  System_String_o *v233; // x19
  __int64 v234; // x1
  int32_t v235; // w19
  TerminalPramsManager_c *v236; // x0
  System_String_o *v237; // x19
  Il2CppObject *v238; // x19
  __int64 v239; // x1
  int32_t v240; // w2
  const MethodInfo *v241; // x3
  Il2CppObject *v242; // x19
  TerminalPramsManager_c *v243; // x0
  struct TerminalPramsManager_StaticFields *v244; // x0
  System_String_o *v245; // x19
  __int64 v246; // x1
  int32_t v247; // w19
  TerminalPramsManager_c *v248; // x0
  System_String_o *v249; // x19
  __int64 v250; // x1
  int32_t v251; // w19
  TerminalPramsManager_c *v252; // x0

  if ( (byte_4A4B92E & 1) == 0 )
  {
    sub_1B863B8(&System_Convert_TypeInfo, v1);
    sub_1B863B8(&Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____, v2);
    sub_1B863B8(&Method_JsonManager_Deserialize_EventConquestInfo_____, v3);
    sub_1B863B8(&Method_JsonManager_Deserialize_EventHarvestGrowthInfo___, v4);
    sub_1B863B8(&Method_JsonManager_Deserialize_EventSaveData___, v5);
    sub_1B863B8(&JsonManager_TypeInfo, v6);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_11260/*"SAVEKEY_LastPlayBgmName"*/, v8);
    sub_1B863B8(&StringLiteral_13471/*"TerminalEndTime"*/, v9);
    sub_1B863B8(&StringLiteral_11266/*"SAVEKEY_PlayedTerminalEffects"*/, v10);
    sub_1B863B8(&StringLiteral_13467/*"TerminalBeforeEventActivityPoint"*/, v11);
    sub_1B863B8(&StringLiteral_11254/*"SAVEKEY_CampaignDirectBonus"*/, v12);
    sub_1B863B8(&StringLiteral_11261/*"SAVEKEY_LastPlayQuestConsumeType"*/, v13);
    sub_1B863B8(&StringLiteral_11273/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, v14);
    sub_1B863B8(&StringLiteral_11271/*"SAVEKEY_TerminalCraftInfoDisp"*/, v15);
    sub_1B863B8(&StringLiteral_13472/*"TerminalEventDailyPointEventId"*/, v16);
    sub_1B863B8(&StringLiteral_13469/*"TerminalBeforeEventSubmarinePointData"*/, v17);
    sub_1B863B8(&StringLiteral_13478/*"TerminalPhaseCnt"*/, v18);
    sub_1B863B8(&StringLiteral_11270/*"SAVEKEY_TerminalConquestInfos"*/, v19);
    sub_1B863B8(&StringLiteral_13486/*"TerminalTimeStatusEventId"*/, v20);
    sub_1B863B8(&StringLiteral_13470/*"TerminalDispState"*/, v21);
    sub_1B863B8(&StringLiteral_11263/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v22);
    sub_1B863B8(&StringLiteral_13473/*"TerminalIsDoneShortcut"*/, v23);
    sub_1B863B8(&StringLiteral_11262/*"SAVEKEY_MapModelClearQuestInfo"*/, v24);
    sub_1B863B8(&StringLiteral_11267/*"SAVEKEY_PlayerGenderType"*/, v25);
    sub_1B863B8(&StringLiteral_11252/*"SAVEKEY_BlankEarthRank"*/, v26);
    sub_1B863B8(&StringLiteral_13474/*"TerminalLastPanelEventPoint"*/, v27);
    sub_1B863B8(&StringLiteral_11272/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v28);
    sub_1B863B8(&StringLiteral_11255/*"SAVEKEY_ClearEventQuestIds"*/, v29);
    sub_1B863B8(&StringLiteral_11264/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v30);
    sub_1B863B8(&StringLiteral_5153/*"Debug_IsQuestReleaseAll"*/, v31);
    sub_1B863B8(&StringLiteral_5150/*"Debug_IsDummyErrorSelect"*/, v32);
    sub_1B863B8(&StringLiteral_13481/*"TerminalQuestId"*/, v33);
    sub_1B863B8(&StringLiteral_11269/*"SAVEKEY_TerminalConquestInfoDisp"*/, v34);
    sub_1B863B8(&StringLiteral_11275/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v35);
    sub_1B863B8(&StringLiteral_13485/*"TerminalTimeStatusEventDailyPoint"*/, v36);
    sub_1B863B8(&StringLiteral_13490/*"TerminalWarId"*/, v37);
    sub_1B863B8(&StringLiteral_13483/*"TerminalSpotId"*/, v38);
    sub_1B863B8(&StringLiteral_13487/*"TerminalTimeStatusLoopCount"*/, v39);
    sub_1B863B8(&StringLiteral_13468/*"TerminalBeforeEventActivityPointGauge"*/, v40);
    sub_1B863B8(&StringLiteral_11253/*"SAVEKEY_BlankEarthSpotId"*/, v41);
    sub_1B863B8(&StringLiteral_11258/*"SAVEKEY_DataLostBattleAutoReset"*/, v42);
    sub_1B863B8(&StringLiteral_13491/*"TerminalWarStartedIds"*/, v43);
    sub_1B863B8(&StringLiteral_11257/*"SAVEKEY_ConnectMarkEventId"*/, v44);
    sub_1B863B8(&StringLiteral_13475/*"TerminalLastPlayedFreeQuestSpotId"*/, v45);
    sub_1B863B8(&StringLiteral_11256/*"SAVEKEY_ConnectMarkAnimationId"*/, v46);
    sub_1B863B8(&StringLiteral_11265/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v47);
    sub_1B863B8(&StringLiteral_1/*""*/, v48);
    sub_1B863B8(&StringLiteral_13476/*"TerminalLastPlayedQuestId"*/, v49);
    sub_1B863B8(&StringLiteral_5149/*"Debug_IsBuildInfoDisp"*/, v50);
    sub_1B863B8(&StringLiteral_11274/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v51);
    byte_4A4B92E = 1;
  }
  v52 = (System_String_o *)StringLiteral_13470/*"TerminalDispState"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13470/*"TerminalDispState"*/, 0LL) )
  {
    Int_69314012 = UnityEngine_PlayerPrefs__GetInt_69314012(v52, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4AE7C )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v53);
      byte_4A4AE7C = 1;
    }
    v55 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v55 = TerminalPramsManager_TypeInfo;
    }
    v55->static_fields->_DispState_k__BackingField = Int_69314012;
  }
  v56 = (System_String_o *)StringLiteral_13490/*"TerminalWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13490/*"TerminalWarId"*/, 0LL) )
  {
    v58 = UnityEngine_PlayerPrefs__GetInt_69314012(v56, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4AE80 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v57);
      byte_4A4AE80 = 1;
    }
    v59 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v59 = TerminalPramsManager_TypeInfo;
    }
    v59->static_fields->_WarId_k__BackingField = v58;
  }
  v60 = (System_String_o *)StringLiteral_13483/*"TerminalSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13483/*"TerminalSpotId"*/, 0LL) )
  {
    v62 = UnityEngine_PlayerPrefs__GetInt_69314012(v60, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4AE7F )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v61);
      byte_4A4AE7F = 1;
    }
    v63 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v63 = TerminalPramsManager_TypeInfo;
    }
    v63->static_fields->_SpotId_k__BackingField = v62;
  }
  v64 = (System_String_o *)StringLiteral_13481/*"TerminalQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13481/*"TerminalQuestId"*/, 0LL) )
  {
    v66 = UnityEngine_PlayerPrefs__GetInt_69314012(v64, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4AE7A )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v65);
      byte_4A4AE7A = 1;
    }
    v67 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v67 = TerminalPramsManager_TypeInfo;
    }
    v67->static_fields->_QuestId_k__BackingField = v66;
  }
  v68 = (System_String_o *)StringLiteral_13476/*"TerminalLastPlayedQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13476/*"TerminalLastPlayedQuestId"*/, 0LL) )
  {
    v70 = UnityEngine_PlayerPrefs__GetInt_69314012(v68, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B2B5 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v69);
      byte_4A4B2B5 = 1;
    }
    v71 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v71 = TerminalPramsManager_TypeInfo;
    }
    v71->static_fields->_LastPlayedQuestId_k__BackingField = v70;
  }
  v72 = (System_String_o *)StringLiteral_13478/*"TerminalPhaseCnt"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13478/*"TerminalPhaseCnt"*/, 0LL) )
  {
    v74 = UnityEngine_PlayerPrefs__GetInt_69314012(v72, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4AE7E )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v73);
      byte_4A4AE7E = 1;
    }
    v75 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v75 = TerminalPramsManager_TypeInfo;
    }
    v75->static_fields->_PhaseCnt_k__BackingField = v74;
  }
  v76 = (System_String_o *)StringLiteral_13471/*"TerminalEndTime"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13471/*"TerminalEndTime"*/, 0LL) )
  {
    String_69314580 = UnityEngine_PlayerPrefs__GetString_69314580(v76, 0LL);
    v79 = 0LL;
    if ( System_String__op_Inequality(String_69314580, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v79 = System_Convert__ToInt64_62720464(String_69314580, 0LL);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4AE7B )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v78);
      byte_4A4AE7B = 1;
    }
    v80 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v80 = TerminalPramsManager_TypeInfo;
    }
    v80->static_fields->_EndTime_k__BackingField = v79;
  }
  v81 = (System_String_o *)StringLiteral_13473/*"TerminalIsDoneShortcut"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13473/*"TerminalIsDoneShortcut"*/, 0LL) )
  {
    v83 = UnityEngine_PlayerPrefs__GetInt_69314012(v81, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4AE7D )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v82);
      byte_4A4AE7D = 1;
    }
    v84 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v84 = TerminalPramsManager_TypeInfo;
    }
    v84->static_fields->_IsDoneShortcut_k__BackingField = v83 != 0;
  }
  v85 = (System_String_o *)StringLiteral_13491/*"TerminalWarStartedIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13491/*"TerminalWarStartedIds"*/, 0LL) )
  {
    v88 = UnityEngine_PlayerPrefs__GetString_69314580(v85, 0LL);
    v89 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v89 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v89->static_fields;
    static_fields->mTerminalWarStartedIds = v88;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->mTerminalWarStartedIds, (int32_t)v88, v86, v87);
  }
  v91 = (System_String_o *)StringLiteral_5153/*"Debug_IsQuestReleaseAll"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5153/*"Debug_IsQuestReleaseAll"*/, 0LL) )
  {
    v93 = UnityEngine_PlayerPrefs__GetInt_69314012(v91, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B985 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v92);
      byte_4A4B985 = 1;
    }
    v94 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v94 = TerminalPramsManager_TypeInfo;
    }
    v94->static_fields->mDebug_IsQuestReleaseAll = v93 != 0;
  }
  v95 = (System_String_o *)StringLiteral_5150/*"Debug_IsDummyErrorSelect"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5150/*"Debug_IsDummyErrorSelect"*/, 0LL) )
  {
    v97 = UnityEngine_PlayerPrefs__GetInt_69314012(v95, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B986 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v96);
      byte_4A4B986 = 1;
    }
    v98 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v98 = TerminalPramsManager_TypeInfo;
    }
    v98->static_fields->mDebug_IsDummyErrorSelect = v97 != 0;
  }
  v99 = (System_String_o *)StringLiteral_5149/*"Debug_IsBuildInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5149/*"Debug_IsBuildInfoDisp"*/, 0LL) )
  {
    v101 = UnityEngine_PlayerPrefs__GetInt_69314012(v99, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B987 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v100);
      byte_4A4B987 = 1;
    }
    v102 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v102 = TerminalPramsManager_TypeInfo;
    }
    v102->static_fields->mDebug_IsBuildInfoDisp = v101 != 0;
  }
  v103 = (System_String_o *)StringLiteral_13486/*"TerminalTimeStatusEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13486/*"TerminalTimeStatusEventId"*/, 0LL) )
  {
    v105 = UnityEngine_PlayerPrefs__GetInt_69314012(v103, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B5AC )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v104);
      byte_4A4B5AC = 1;
    }
    v106 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v106 = TerminalPramsManager_TypeInfo;
    }
    v106->static_fields->_TimeStatusEventId_k__BackingField = v105;
  }
  v107 = (System_String_o *)StringLiteral_13487/*"TerminalTimeStatusLoopCount"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13487/*"TerminalTimeStatusLoopCount"*/, 0LL) )
  {
    v109 = UnityEngine_PlayerPrefs__GetInt_69314012(v107, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B5AD )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v108);
      byte_4A4B5AD = 1;
    }
    v110 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v110 = TerminalPramsManager_TypeInfo;
    }
    v110->static_fields->_TimeStatusLoopCount_k__BackingField = v109;
  }
  v111 = (System_String_o *)StringLiteral_13472/*"TerminalEventDailyPointEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13472/*"TerminalEventDailyPointEventId"*/, 0LL) )
  {
    v113 = UnityEngine_PlayerPrefs__GetInt_69314012(v111, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B989 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v112);
      byte_4A4B989 = 1;
    }
    v114 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v114 = TerminalPramsManager_TypeInfo;
    }
    v114->static_fields->_EventDailyPointEventId_k__BackingField = v113;
  }
  v115 = (System_String_o *)StringLiteral_13485/*"TerminalTimeStatusEventDailyPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13485/*"TerminalTimeStatusEventDailyPoint"*/, 0LL) )
  {
    v116 = UnityEngine_PlayerPrefs__GetString_69314580(v115, 0LL);
    v118 = 0LL;
    if ( !System_String__op_Equality(v116, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v118 = System_Convert__ToInt64_62720464(v116, 0LL);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B98A )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v117);
      byte_4A4B98A = 1;
    }
    v119 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v119 = TerminalPramsManager_TypeInfo;
    }
    v119->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = v118;
  }
  v120 = (System_String_o *)StringLiteral_13467/*"TerminalBeforeEventActivityPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13467/*"TerminalBeforeEventActivityPoint"*/, 0LL) )
  {
    v122 = UnityEngine_PlayerPrefs__GetInt_69314012(v120, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B98B )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v121);
      byte_4A4B98B = 1;
    }
    v123 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v123 = TerminalPramsManager_TypeInfo;
    }
    v123->static_fields->_BeforeEventActivityPoint_k__BackingField = v122;
  }
  v124 = (System_String_o *)StringLiteral_13468/*"TerminalBeforeEventActivityPointGauge"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13468/*"TerminalBeforeEventActivityPointGauge"*/, 0LL) )
  {
    v126 = UnityEngine_PlayerPrefs__GetInt_69314012(v124, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B98C )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v125);
      byte_4A4B98C = 1;
    }
    v127 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v127 = TerminalPramsManager_TypeInfo;
    }
    v127->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v126;
  }
  v128 = (System_String_o *)StringLiteral_13469/*"TerminalBeforeEventSubmarinePointData"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13469/*"TerminalBeforeEventSubmarinePointData"*/, 0LL) )
  {
    v129 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69314580(v128, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v133 = JsonManager__Deserialize_object_(
             v129,
             (const MethodInfo_2FD86EC *)Method_JsonManager_Deserialize_EventSaveData___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4AF92 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v130);
      byte_4A4AF92 = 1;
    }
    v134 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v134 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (CGThumbnailListItem_o *)&v134->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (CGThumbnailListItem_c *)v133;
    sub_1B8635C(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v133, v131, v132);
  }
  v136 = (System_String_o *)StringLiteral_11273/*"SAVEKEY_TerminalLastSelectQuestIndex"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11273/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, 0LL) )
  {
    v139 = UnityEngine_PlayerPrefs__GetInt_69314012(v136, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B984 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v137);
      byte_4A4B984 = 1;
    }
    v140 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v140 = TerminalPramsManager_TypeInfo;
    }
    v140->static_fields->_LastSelectQuestIndex_k__BackingField = v139;
    if ( !byte_4A4AE79 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v137);
      v140 = TerminalPramsManager_TypeInfo;
      byte_4A4AE79 = 1;
    }
    if ( !v140->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v140);
      v140 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v140->static_fields->_WarId_k__BackingField;
    if ( !byte_4A4B997 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v137);
      v140 = TerminalPramsManager_TypeInfo;
      byte_4A4B997 = 1;
    }
    if ( !v140->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v140);
      v140 = TerminalPramsManager_TypeInfo;
    }
    TerminalPramsManager__SetFolderLastClickedIdx(
      WarId_k__BackingField,
      v140->static_fields->_LastSelectQuestIndex_k__BackingField,
      v138);
  }
  v142 = (System_String_o *)StringLiteral_11270/*"SAVEKEY_TerminalConquestInfos"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11270/*"SAVEKEY_TerminalConquestInfos"*/, 0LL) )
  {
    v143 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69314580(v142, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v146 = JsonManager__Deserialize_object_(
             v143,
             (const MethodInfo_2FD86EC *)Method_JsonManager_Deserialize_EventConquestInfo_____);
    v147 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v147 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = (CGThumbnailListItem_o *)&v147->static_fields->eventConquestInfos;
    p_eventConquestInfos->klass = (CGThumbnailListItem_c *)v146;
    sub_1B8635C(p_eventConquestInfos, (int32_t)v146, v144, v145);
  }
  v149 = (System_String_o *)StringLiteral_11269/*"SAVEKEY_TerminalConquestInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11269/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL) )
  {
    v150 = UnityEngine_PlayerPrefs__GetInt_69314012(v149, 0LL);
    v151 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v151 = TerminalPramsManager_TypeInfo;
    }
    v151->static_fields->eventConquestInfoDisp = v150 != 0;
  }
  v152 = (System_String_o *)StringLiteral_11271/*"SAVEKEY_TerminalCraftInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11271/*"SAVEKEY_TerminalCraftInfoDisp"*/, 0LL) )
  {
    v153 = UnityEngine_PlayerPrefs__GetInt_69314012(v152, 0LL);
    v154 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v154 = TerminalPramsManager_TypeInfo;
    }
    v154->static_fields->eventCraftInfoDisp = v153 != 0;
  }
  v155 = (System_String_o *)StringLiteral_11272/*"SAVEKEY_TerminalHarvestGrowthInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11272/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL) )
  {
    v156 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69314580(v155, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v159 = JsonManager__Deserialize_object_(
             v156,
             (const MethodInfo_2FD86EC *)Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    v160 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v160 = TerminalPramsManager_TypeInfo;
    }
    p_eventHarvestGrowthInfo = (CGThumbnailListItem_o *)&v160->static_fields->eventHarvestGrowthInfo;
    p_eventHarvestGrowthInfo->klass = (CGThumbnailListItem_c *)v159;
    sub_1B8635C(p_eventHarvestGrowthInfo, (int32_t)v159, v157, v158);
  }
  v162 = (System_String_o *)StringLiteral_11260/*"SAVEKEY_LastPlayBgmName"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11260/*"SAVEKEY_LastPlayBgmName"*/, 0LL) )
  {
    v165 = UnityEngine_PlayerPrefs__GetString_69314580(v162, 0LL);
    v166 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v166 = TerminalPramsManager_TypeInfo;
    }
    p_lastPlayBgmName = (CGThumbnailListItem_o *)&v166->static_fields->lastPlayBgmName;
    p_lastPlayBgmName->klass = (CGThumbnailListItem_c *)v165;
    sub_1B8635C(p_lastPlayBgmName, (int32_t)v165, v163, v164);
  }
  v168 = (System_String_o *)StringLiteral_11261/*"SAVEKEY_LastPlayQuestConsumeType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11261/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL) )
  {
    v169 = UnityEngine_PlayerPrefs__GetInt_69314012(v168, 0LL);
    v170 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v170 = TerminalPramsManager_TypeInfo;
    }
    v170->static_fields->lastPlayQuestConsumeAp = v169;
  }
  v171 = (System_String_o *)StringLiteral_13475/*"TerminalLastPlayedFreeQuestSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13475/*"TerminalLastPlayedFreeQuestSpotId"*/, 0LL) )
  {
    v173 = UnityEngine_PlayerPrefs__GetInt_69314012(v171, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B2B6 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v172);
      byte_4A4B2B6 = 1;
    }
    v174 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v174 = TerminalPramsManager_TypeInfo;
    }
    v174->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = v173;
  }
  v175 = (System_String_o *)StringLiteral_13474/*"TerminalLastPanelEventPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13474/*"TerminalLastPanelEventPoint"*/, 0LL) )
  {
    v176 = UnityEngine_PlayerPrefs__GetInt_69314012(v175, 0LL);
    v177 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v177 = TerminalPramsManager_TypeInfo;
    }
    v177->static_fields->panelEventPoint = v176;
  }
  v178 = (System_String_o *)StringLiteral_11266/*"SAVEKEY_PlayedTerminalEffects"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11266/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL) )
  {
    v182 = UnityEngine_PlayerPrefs__GetString_69314580(v178, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B98E )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v179);
      byte_4A4B98E = 1;
    }
    v183 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v183 = TerminalPramsManager_TypeInfo;
    }
    p_PlayedTerminalEffects_k__BackingField = (CGThumbnailListItem_o *)&v183->static_fields->_PlayedTerminalEffects_k__BackingField;
    p_PlayedTerminalEffects_k__BackingField->klass = (CGThumbnailListItem_c *)v182;
    sub_1B8635C(p_PlayedTerminalEffects_k__BackingField, (int32_t)v182, v180, v181);
  }
  v185 = (System_String_o *)StringLiteral_11263/*"SAVEKEY_PlayTerminalEffectDisappear"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11263/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL) )
  {
    v187 = UnityEngine_PlayerPrefs__GetInt_69314012(v185, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B793 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v186);
      byte_4A4B793 = 1;
    }
    v188 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v188 = TerminalPramsManager_TypeInfo;
    }
    v188->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = v187 != 0;
  }
  v189 = (System_String_o *)StringLiteral_11264/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11264/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL) )
  {
    v191 = UnityEngine_PlayerPrefs__GetInt_69314012(v189, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B794 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v190);
      byte_4A4B794 = 1;
    }
    v192 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v192 = TerminalPramsManager_TypeInfo;
    }
    v192->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = v191;
  }
  v193 = (System_String_o *)StringLiteral_11265/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11265/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL) )
  {
    v195 = UnityEngine_PlayerPrefs__GetInt_69314012(v193, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B6A1 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v194);
      byte_4A4B6A1 = 1;
    }
    v196 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v196 = TerminalPramsManager_TypeInfo;
    }
    v196->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = v195 != 0;
  }
  v197 = (System_String_o *)StringLiteral_11275/*"SAVEKEY_TerminalSelectedStoryQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11275/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL) )
  {
    v199 = UnityEngine_PlayerPrefs__GetInt_69314012(v197, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B2BA )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v198);
      byte_4A4B2BA = 1;
    }
    v200 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v200 = TerminalPramsManager_TypeInfo;
    }
    v200->static_fields->_SelectedStoryQuestId_k__BackingField = v199;
  }
  v201 = (System_String_o *)StringLiteral_11257/*"SAVEKEY_ConnectMarkEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11257/*"SAVEKEY_ConnectMarkEventId"*/, 0LL) )
  {
    v202 = UnityEngine_PlayerPrefs__GetInt_69314012(v201, 0LL);
    v203 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v203 = TerminalPramsManager_TypeInfo;
    }
    v203->static_fields->ConnectMarkEventId = v202;
  }
  v204 = (System_String_o *)StringLiteral_11256/*"SAVEKEY_ConnectMarkAnimationId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11256/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL) )
  {
    v205 = UnityEngine_PlayerPrefs__GetInt_69314012(v204, 0LL);
    v206 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v206 = TerminalPramsManager_TypeInfo;
    }
    v206->static_fields->ConnectMarkAnimationId = v205;
  }
  v207 = (System_String_o *)StringLiteral_11274/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11274/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL) )
  {
    v209 = UnityEngine_PlayerPrefs__GetInt_69314012(v207, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4AA1E )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v208);
      byte_4A4AA1E = 1;
    }
    v210 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v210 = TerminalPramsManager_TypeInfo;
    }
    v210->static_fields->_SelectedRecollectionWarId_k__BackingField = v209;
  }
  v211 = (System_String_o *)StringLiteral_11255/*"SAVEKEY_ClearEventQuestIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11255/*"SAVEKEY_ClearEventQuestIds"*/, 0LL) )
  {
    v215 = UnityEngine_PlayerPrefs__GetString_69314580(v211, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4AE77 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v212);
      byte_4A4AE77 = 1;
    }
    v216 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v216 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (CGThumbnailListItem_o *)&v216->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (CGThumbnailListItem_c *)v215;
    sub_1B8635C(p_ClearEventQuestIds_k__BackingField, (int32_t)v215, v213, v214);
  }
  v218 = (System_String_o *)StringLiteral_11262/*"SAVEKEY_MapModelClearQuestInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11262/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL) )
  {
    v219 = UnityEngine_PlayerPrefs__GetString_69314580(v218, 0LL);
    IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(v219, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v219 || (IsNullOrEmpty = System_String__Split(v219, 0x2Cu, 0, 0LL)) == 0LL )
        sub_1B86614(IsNullOrEmpty, v221);
      v222 = *(_QWORD *)&IsNullOrEmpty->max_length;
      v223 = IsNullOrEmpty;
      if ( v222 )
      {
        if ( !(_DWORD)v222 )
          sub_1B8661C(IsNullOrEmpty, v221);
        v224 = System_Int32__Parse(IsNullOrEmpty->m_Items[0], 0LL);
      }
      else
      {
        v224 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A4B990 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v221);
        byte_4A4B990 = 1;
      }
      v225 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v225 = TerminalPramsManager_TypeInfo;
      }
      v225->static_fields->_MapModelClearQuestId_k__BackingField = v224;
      if ( (int)v223->max_length < 2 )
      {
        v227 = 0;
      }
      else
      {
        v226 = System_Int32__Parse(v223->m_Items[1], 0LL);
        v225 = TerminalPramsManager_TypeInfo;
        v227 = v226;
      }
      if ( !v225->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v225);
      if ( !byte_4A4B991 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v221);
        byte_4A4B991 = 1;
      }
      v228 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v228 = TerminalPramsManager_TypeInfo;
      }
      v228->static_fields->_MapModelClearPhaseCount_k__BackingField = v227;
    }
  }
  v229 = (System_String_o *)StringLiteral_11258/*"SAVEKEY_DataLostBattleAutoReset"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11258/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL) )
  {
    v231 = UnityEngine_PlayerPrefs__GetInt_69314012(v229, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B6A9 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v230);
      byte_4A4B6A9 = 1;
    }
    v232 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v232 = TerminalPramsManager_TypeInfo;
    }
    v232->static_fields->_IsDataLostBattleAutoReset_k__BackingField = v231 != 0;
  }
  v233 = (System_String_o *)StringLiteral_11267/*"SAVEKEY_PlayerGenderType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11267/*"SAVEKEY_PlayerGenderType"*/, 0LL) )
  {
    v235 = UnityEngine_PlayerPrefs__GetInt_69314012(v233, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4974A )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v234);
      byte_4A4974A = 1;
    }
    v236 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v236 = TerminalPramsManager_TypeInfo;
    }
    v236->static_fields->_PlayerGenderType_k__BackingField = v235;
  }
  v237 = (System_String_o *)StringLiteral_11254/*"SAVEKEY_CampaignDirectBonus"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11254/*"SAVEKEY_CampaignDirectBonus"*/, 0LL) )
  {
    v238 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69314580(v237, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v242 = JsonManager__Deserialize_object_(
             v238,
             (const MethodInfo_2FD86EC *)Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B995 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v239);
      byte_4A4B995 = 1;
    }
    v243 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v243 = TerminalPramsManager_TypeInfo;
    }
    v244 = v243->static_fields;
    v244->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)v242;
    sub_1B8635C((CGThumbnailListItem_o *)&v244->_CampaignDirectBonus_k__BackingField, (int32_t)v242, v240, v241);
  }
  v245 = (System_String_o *)StringLiteral_11253/*"SAVEKEY_BlankEarthSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11253/*"SAVEKEY_BlankEarthSpotId"*/, 0LL) )
  {
    v247 = UnityEngine_PlayerPrefs__GetInt_69314012(v245, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4ADC8 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v246);
      byte_4A4ADC8 = 1;
    }
    v248 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v248 = TerminalPramsManager_TypeInfo;
    }
    v248->static_fields->_BlankEarthSpotId_k__BackingField = v247;
  }
  v249 = (System_String_o *)StringLiteral_11252/*"SAVEKEY_BlankEarthRank"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11252/*"SAVEKEY_BlankEarthRank"*/, 0LL) )
  {
    v251 = UnityEngine_PlayerPrefs__GetInt_69314012(v249, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B998 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v250);
      byte_4A4B998 = 1;
    }
    v252 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v252 = TerminalPramsManager_TypeInfo;
    }
    v252->static_fields->_BlankEarthRank_k__BackingField = v251;
  }
}


TerminalTransitionInfo_o *__fastcall TerminalPramsManager__Load_TerminalTransitionInfoData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *v4; // x20
  __int64 v5; // x19
  int32_t Int_69314012; // w0
  int32_t v7; // w20
  const MethodInfo *v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  System_String_o *String_69314580; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4A4B92F & 1) == 0 )
  {
    sub_1B863B8(&TerminalTransitionInfo_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_13489/*"TerminalTransitionInfoVoiceAssetName"*/, v2);
    sub_1B863B8(&StringLiteral_13488/*"TerminalTransitionInfoMissionId"*/, v3);
    byte_4A4B92F = 1;
  }
  v4 = (System_String_o *)StringLiteral_13488/*"TerminalTransitionInfoMissionId"*/;
  v5 = 0LL;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13488/*"TerminalTransitionInfoMissionId"*/, 0LL) )
  {
    Int_69314012 = UnityEngine_PlayerPrefs__GetInt_69314012(v4, 0LL);
    if ( Int_69314012 < 1 )
    {
      return 0LL;
    }
    else
    {
      v7 = Int_69314012;
      v5 = sub_1B86604(TerminalTransitionInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0LL);
      TerminalTransitionInfo__Init((TerminalTransitionInfo_o *)v5, v8);
      if ( !v5 )
        sub_1B86614(v9, v10);
      *(_DWORD *)(v5 + 16) = v7;
      v11 = (System_String_o *)StringLiteral_13489/*"TerminalTransitionInfoVoiceAssetName"*/;
      if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13489/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL) )
      {
        String_69314580 = UnityEngine_PlayerPrefs__GetString_69314580(v11, 0LL);
        *(_QWORD *)(v5 + 40) = String_69314580;
        sub_1B8635C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)String_69314580, v13, v14);
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

  if ( (byte_4A4B949 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11262/*"SAVEKEY_MapModelClearQuestInfo"*/, v2);
    sub_1B863B8(&StringLiteral_817/*","*/, v3);
    byte_4A4B949 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B074 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B074 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v4->static_fields->_MapModelClearQuestId_k__BackingField;
  v6 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_4A4B075 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v5);
    byte_4A4B075 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v7->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v8 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v9 = System_String__Concat_61683424(v6, (System_String_o *)StringLiteral_817/*","*/, v8, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11262/*"SAVEKEY_MapModelClearQuestInfo"*/, v9, 0LL);
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

  if ( (byte_4A4B935 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11273/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, v2);
    sub_1B863B8(&StringLiteral_13475/*"TerminalLastPlayedFreeQuestSpotId"*/, v3);
    sub_1B863B8(&StringLiteral_13476/*"TerminalLastPlayedQuestId"*/, v4);
    byte_4A4B935 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B177 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B177 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13476/*"TerminalLastPlayedQuestId"*/,
    v5->static_fields->_LastPlayedQuestId_k__BackingField,
    0LL);
  if ( !byte_4A4B997 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v6);
    byte_4A4B997 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11273/*"SAVEKEY_TerminalLastSelectQuestIndex"*/,
    v7->static_fields->_LastSelectQuestIndex_k__BackingField,
    0LL);
  if ( !byte_4A4AE73 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v8);
    byte_4A4AE73 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13475/*"TerminalLastPlayedFreeQuestSpotId"*/,
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

  if ( (byte_4A4B92A & 1) == 0 )
  {
    sub_1B863B8(&Method_TerminalPramsManager_PlaySystemSE__, method);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v3);
    byte_4A4B92A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B982 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B982 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( TerminalPramsManager_TypeInfo->static_fields->_IsAutoNoSe_k__BackingField )
    {
LABEL_9:
      if ( !byte_4A4B983 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
        byte_4A4B983 = 1;
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
      v7 = (_QWORD *)sub_1B863D0(Method_TerminalPramsManager_PlaySystemSE__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B8639C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, seKind, 0, 0LL);
  }
}


void __fastcall TerminalPramsManager__PlayedTerminalEffectsSave_SaveData(int32_t effectId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  TerminalPramsManager_c *v8; // x0
  CGThumbnailListItem_c *v9; // x19
  TerminalPramsManager_c *v10; // x0
  CGThumbnailListItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  TerminalPramsManager_c *v12; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x19
  System_String_o *v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_o *v18; // x19
  TerminalPramsManager_c *v19; // x0
  CGThumbnailListItem_o *v20; // x0
  const MethodInfo *v21; // x0
  int32_t v22; // [xsp+Ch] [xbp-24h] BYREF

  v22 = effectId;
  if ( (byte_4A4B952 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_43/*"\n"*/, v3);
    sub_1B863B8(&StringLiteral_1/*""*/, v4);
    byte_4A4B952 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsTerminalEffectPlayed(effectId, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B99D )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v5);
      byte_4A4B99D = 1;
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
      v9 = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
      if ( !byte_4A4B98E )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v5);
        byte_4A4B98E = 1;
      }
      v10 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v10 = TerminalPramsManager_TypeInfo;
      }
      p_PlayedTerminalEffects_k__BackingField = (CGThumbnailListItem_o *)&v10->static_fields->_PlayedTerminalEffects_k__BackingField;
      p_PlayedTerminalEffects_k__BackingField->klass = v9;
      sub_1B8635C(p_PlayedTerminalEffects_k__BackingField, (int32_t)v9, v6, v7);
      v8 = TerminalPramsManager_TypeInfo;
    }
    if ( !v8->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v8);
    if ( !byte_4A4B99D )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v5);
      byte_4A4B99D = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    PlayedTerminalEffects_k__BackingField = v12->static_fields->_PlayedTerminalEffects_k__BackingField;
    v14 = System_Int32__ToString((int32_t)&v22, 0LL);
    v18 = System_String__Concat_61683424(
            PlayedTerminalEffects_k__BackingField,
            v14,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            0LL);
    if ( !byte_4A4B98E )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v15);
      byte_4A4B98E = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    v20 = (CGThumbnailListItem_o *)&v19->static_fields->_PlayedTerminalEffects_k__BackingField;
    v20->klass = (CGThumbnailListItem_c *)v18;
    sub_1B8635C(v20, (int32_t)v18, v16, v17);
    TerminalPramsManager__Save_SaveData(v21);
  }
}


void __fastcall TerminalPramsManager__PlayerGenderType_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B94B & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11267/*"SAVEKEY_PlayerGenderType"*/, v2);
    byte_4A4B94B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B99E )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B99E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11267/*"SAVEKEY_PlayerGenderType"*/,
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
  __int64 v62; // x1
  BattleResultComponent_resultData_o *v63; // x8
  struct UserServantCollectionEntity_array *oldUserSvtCollection; // x8
  _DWORD *v65; // x23
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  BattleResultComponent_resultData_o *v68; // x27
  int eventEndTitle; // w8
  __int64 *v70; // x25
  UserServantCollectionMaster_o *v71; // x20
  unsigned int v72; // w28
  __int64 v73; // x21
  __int64 v74; // x25
  __int64 v75; // x26
  struct DeckData_o *myDeck; // x24
  UserServantCollectionEntity_o *EntityDefinitely; // x24
  UserServantCollectionEntity_o *v78; // x25
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  _DWORD *v81; // x24
  CGThumbnailListItem_o *v82; // x24
  CGThumbnailListItem_c *klass; // x8
  CGThumbnailListItem_c *v84; // x8
  TerminalPramsManager_c *v85; // x0
  il2cpp_array_size_t *v86; // x19
  CGThumbnailListItem_o *p_mQuestClearHeroineInfo; // x0
  __int64 v88; // x8
  BattleResultComponent_resultData_o *v89; // x9
  struct System_String_o *v90; // x10
  struct System_String_o *eventEndMessage; // x19
  __int128 v92; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v93; // x24
  UserServantEntity_o *v94; // x26
  __int64 v95; // x24
  void **p_monitor; // x19
  void *v97; // x25
  void *monitor; // t1
  void *v99; // x27
  int v100; // w9
  int v101; // w8
  UserServantCollectionEntity_o *v102; // x25
  struct DeckData_o *userId; // x21
  int32_t SvtId; // w0
  __int64 v105; // x28
  __int64 v106; // x29
  int32_t v107; // w27
  __int64 v108; // x23
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  bool v113; // w9
  __int64 v114; // x1
  Il2CppObject *Master_object; // x26
  NetworkManager_c *v116; // x0
  __int64 v117; // x28
  __int64 v118; // x29
  int64_t userIdNumber; // x27
  UserServantCollectionEntity_o *v120; // x26
  Il2CppObject *v121; // x0
  __int64 v122; // x26
  __int64 v123; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v124; // x24
  int klass_high; // w8
  int32_t friendshipExceedCount; // w9
  TerminalPramsManager_c *v127; // x0
  CGThumbnailListItem_o *v128; // x0
  BattleResultComponent_resultData_o *v129; // x23
  BattleResultComponent_resultData_o *v130; // x8
  struct System_String_o *v131; // x9
  UserQuestEntity_o *v132; // x23
  int32_t questId; // w19
  TerminalPramsManager_c *v134; // x0
  __int64 v135; // x1
  int32_t QuestPhase; // w24
  TerminalPramsManager_c *v137; // x0
  int32_t v138; // w24
  Il2CppObject *MasterData_object; // x25
  UserQuestEntity_o *v140; // x0
  UserQuestEntity_o *v141; // x26
  int32_t v142; // w25
  __int64 v143; // x1
  bool v144; // w19
  TerminalPramsManager_c *v145; // x0
  const MethodInfo *v146; // x2
  TerminalPramsManager_c *v147; // x0
  System_String_o *ValidMessage; // x0
  const MethodInfo *v149; // x2
  TerminalPramsManager_c *v150; // x8
  TerminalPramsManager_c *v151; // x0
  TerminalPramsManager_c *v152; // x0
  const MethodInfo *v153; // x0
  TerminalPramsManager_c *v154; // x8
  int32_t v155; // w24
  const MethodInfo *v156; // x1
  WarEntity_o *v157; // x25
  BalanceConfig_c *v158; // x0
  TerminalPramsManager_c *v159; // x0
  TerminalPramsManager_c *v160; // x0
  bool v161; // w26
  TerminalPramsManager_c *v162; // x0
  char v163; // w8
  const MethodInfo *v164; // x1
  bool HasFlag; // w0
  int32_t v166; // w2
  const MethodInfo *v167; // x3
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  int32_t v169; // w2
  const MethodInfo *v170; // x3
  CGThumbnailListItem_c *v171; // x24
  TerminalPramsManager_c *v172; // x0
  CGThumbnailListItem_o *p_mResultEventPanelRewardInfos; // x0
  TerminalPramsManager_c *v174; // x0
  CGThumbnailListItem_o *p_eventConquestInfos; // x0
  int32_t v176; // w2
  const MethodInfo *v177; // x3
  CGThumbnailListItem_c *v178; // x24
  TerminalPramsManager_c *v179; // x0
  CGThumbnailListItem_o *v180; // x0
  bool Farm; // w19
  TerminalPramsManager_c *v182; // x0
  char v183; // w19
  int32_t v184; // w24
  WarEntity_o *v185; // x0
  __int64 v186; // x1
  int32_t id; // w19
  TerminalPramsManager_c *v188; // x0
  TerminalPramsManager_c *v189; // x0
  Il2CppObject *v190; // x24
  int32_t v191; // w2
  const MethodInfo *v192; // x3
  int32_t v193; // w2
  const MethodInfo *v194; // x3
  CGThumbnailListItem_c *v195; // x25
  TerminalPramsManager_c *v196; // x0
  CGThumbnailListItem_o *p_OldUserEventPoint_k__BackingField; // x0
  char *v198; // x25
  signed int max_length; // w9
  BattleResultComponent_resultData_array *v200; // x25
  int v201; // w8
  Il2CppClass **v202; // x8
  Il2CppClass *v203; // x26
  int32_t RaidGroupDeadQuestId; // w27
  signed int v205; // w9
  BattleResultComponent_resultData_array *v206; // x27
  int v207; // w8
  int v208; // w19
  struct TerminalPramsManager_StaticFields *v209; // x8
  int32_t name_high; // w19
  signed int v211; // w9
  BattleResultComponent_resultData_array *v212; // x25
  int v213; // w8
  BattleResultComponent_resultData_o *v214; // x19
  int32_t RaidDeadQuestId; // w26
  struct TerminalPramsManager_StaticFields *v216; // x8
  int32_t v217; // w19
  TerminalPramsManager_c *v218; // x0
  TerminalPramsManager_c *v219; // x8
  bool v220; // w19
  TerminalPramsManager_c *v221; // x0
  int32_t v222; // w19
  int32_t v223; // w21
  Il2CppObject *v224; // x24
  int32_t eventId; // w25
  bool v226; // w0
  bool v227; // w24
  TerminalPramsManager_c *v228; // x0
  char *v229; // x21
  BattleResultComponent_resultData_o *v230; // x8
  int v231; // w9
  int v232; // w11
  __int64 v233; // x26
  int32_t bounds_high; // w24
  bool IsUserEventStatus; // w0
  TerminalPramsManager_c *v236; // x0
  TerminalPramsManager_c *v237; // x0
  TerminalPramsManager_c *v238; // x0
  Il2CppObject *v239; // x24
  __int64 v240; // x1
  int32_t v241; // w2
  const MethodInfo *v242; // x3
  TerminalPramsManager_c *v243; // x0
  CGThumbnailListItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  struct System_String_o *ultimateGetQpText; // x8
  struct System_String_o *v246; // x8
  signed int v247; // w8
  __int64 *v248; // x9
  __int64 v249; // x12
  System_String_o **v250; // x9
  System_String_o *v251; // x21
  void **v252; // x8
  System_String_o *v253; // x22
  int32_t v254; // w27
  System_Collections_Generic_List_object__o *v255; // x27
  TerminalPramsManager___c_c *v256; // x8
  System_Predicate_object__o *_9__712_0; // x24
  Il2CppObject *v258; // x25
  struct TerminalPramsManager___c_StaticFields *v259; // x0
  int32_t v260; // w2
  const MethodInfo *v261; // x3
  __int64 v262; // x1
  System_String_o *v263; // x28
  TerminalPramsManager_c *v264; // x0
  TerminalPramsManager_c *v265; // x0
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x27
  System_String_o *v267; // x24
  int32_t v268; // w2
  const MethodInfo *v269; // x3
  TerminalPramsManager_c *v270; // x0
  int32_t v271; // w24
  int v272; // w9
  int32_t PhaseCnt_k__BackingField; // w25
  _BOOL4 IsQuestClear_k__BackingField; // w19
  TerminalPramsManager_c *v275; // x0
  Il2CppObject *v276; // x24
  TerminalPramsManager_c *v277; // x0
  Il2CppObject *v278; // x24
  int v279; // w21
  TerminalPramsManager_c *v280; // x0
  CGThumbnailListItem_o *p_questClearCostumeRelease_k__BackingField; // x0
  int32_t v282; // w2
  const MethodInfo *v283; // x3
  BattleResultComponent_resultData_o *v284; // x8
  CGThumbnailListItem_c *v285; // x24
  TerminalPramsManager_c *v286; // x0
  CGThumbnailListItem_o *v287; // x0
  TerminalPramsManager_c *v288; // x0
  CGThumbnailListItem_o *p_questClearCostumeGet_k__BackingField; // x0
  int32_t v290; // w2
  const MethodInfo *v291; // x3
  CGThumbnailListItem_c *v292; // x24
  TerminalPramsManager_c *v293; // x0
  CGThumbnailListItem_o *v294; // x0
  TerminalPramsManager_c *v295; // x0
  CGThumbnailListItem_o *p_eventPointWinReward_k__BackingField; // x0
  int32_t v297; // w2
  const MethodInfo *v298; // x3
  TerminalPramsManager_c *v299; // x0
  int32_t v300; // w24
  QuestGroupMaster_o *v301; // x25
  int32_t GroupId; // w0
  TerminalPramsManager_c *v303; // x8
  int32_t v304; // w26
  int v305; // w25
  Il2CppObject *v306; // x26
  EventPointEntity_o *v307; // x25
  int32_t v308; // w24
  struct TerminalPramsManager_StaticFields *v309; // x8
  BattleResultComponent_resultData_o *v310; // x8
  struct System_String_o *v311; // x9
  CGThumbnailListItem_c *v312; // x24
  TerminalPramsManager_c *v313; // x0
  CGThumbnailListItem_o *v314; // x0
  int32_t v315; // w19
  TerminalPramsManager_c *v316; // x0
  TerminalPramsManager_c *v317; // x0
  CGThumbnailListItem_o *p_eventRaceBoost_k__BackingField; // x0
  int32_t v319; // w2
  const MethodInfo *v320; // x3
  __int64 v321; // x8
  BattleResultComponent_resultData_o *v322; // x23
  TerminalPramsManager_c *v323; // x0
  CGThumbnailListItem_o *v324; // x0
  __int64 v325; // x19
  BattleResultComponent_resultData_o *v326; // x9
  struct System_String_o *v327; // x10
  struct System_String_o *v328; // x23
  TerminalPramsManager_c *v329; // x0
  CGThumbnailListItem_o *p_eventTowerReward_k__BackingField; // x0
  int32_t v331; // w2
  const MethodInfo *v332; // x3
  CGThumbnailListItem_c *v333; // x23
  TerminalPramsManager_c *v334; // x0
  CGThumbnailListItem_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  CGThumbnailListItem_c *v336; // x23
  TerminalPramsManager_c *v337; // x0
  CGThumbnailListItem_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  CGThumbnailListItem_c *v339; // x23
  TerminalPramsManager_c *v340; // x0
  CGThumbnailListItem_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  CGThumbnailListItem_c *v342; // x23
  TerminalPramsManager_c *v343; // x0
  CGThumbnailListItem_o *p_warClearReward_k__BackingField; // x0
  TerminalPramsManager_c *v345; // x0
  struct TerminalPramsManager_StaticFields *v346; // x0
  __int64 v347; // x1
  int32_t v348; // w2
  const MethodInfo *v349; // x3
  TerminalPramsManager_c *v350; // x0
  struct TerminalPramsManager_StaticFields *v351; // x0
  Il2CppObject *Instance; // x23
  int32_t WarID_ByQuestID; // w23
  WarEntity_o *WarEntityByWarID; // x0
  int32_t v355; // w23
  int32_t v356; // w2
  const MethodInfo *v357; // x3
  __int64 v358; // x8
  BattleResultComponent_resultData_o *v359; // x22
  TerminalPramsManager_c *v360; // x0
  struct TerminalPramsManager_StaticFields *v361; // x0
  CGThumbnailListItem_o *p_oldPersonalBoss_k__BackingField; // x0
  TerminalPramsManager_c *v363; // x0
  struct TerminalPramsManager_StaticFields *v364; // x0
  struct EventTowerReward_array *eventTowerReward; // x8
  bool v366; // w19
  BalanceConfig_c *v367; // x8
  int32_t v368; // w19
  TerminalPramsManager_c *v369; // x0
  __int64 v370; // x1
  TerminalPramsManager_c *v371; // x0
  BalanceConfig_c *v372; // x8
  int32_t v373; // w19
  TerminalPramsManager_c *v374; // x0
  BalanceConfig_c *v375; // x8
  int32_t v376; // w19
  TerminalPramsManager_c *v377; // x0
  BalanceConfig_c *v378; // x8
  int32_t v379; // w19
  Il2CppObject *v380; // x22
  struct DeckData_o *v381; // x21
  int32_t v382; // w2
  const MethodInfo *v383; // x3
  UserSuperBossEntity_o *v384; // x22
  BattleResultComponent_resultData_array *v385; // x21
  __int64 v386; // x1
  int32_t v387; // w2
  const MethodInfo *v388; // x3
  TerminalPramsManager_c *v389; // x0
  struct TerminalPramsManager_StaticFields *v390; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v392; // x21
  Il2CppObject *v393; // x22
  int32_t ScriptQuestId; // w22
  __int64 v395; // x1
  Il2CppObject *v396; // x23
  TerminalPramsManager_c *v397; // x0
  int32_t v398; // w26
  int32_t winResult; // w24
  int32_t v400; // w2
  const MethodInfo *v401; // x3
  __int64 v402; // x1
  Il2CppObject *v403; // x23
  TerminalPramsManager_c *v404; // x0
  int32_t v405; // w19
  int32_t v406; // w21
  TerminalPramsManager_c *v407; // x0
  int32_t v408; // w1
  CGThumbnailListItem_o *p_lastPlayBgmName; // x0
  const MethodInfo *v410; // x0
  Il2CppObject *v411; // x21
  int32_t v412; // w22
  int32_t v413; // w2
  const MethodInfo *v414; // x3
  TerminalPramsManager_c *v415; // x0
  il2cpp_array_size_t *v416; // x0
  int32_t v417; // w22
  TerminalPramsManager_c *v418; // x0
  int32_t v419; // w23
  __int64 v420; // x1
  int32_t v421; // w2
  const MethodInfo *v422; // x3
  SpecifiedSceneInfo_o *SpecifiedSceneInfo; // x22
  TerminalPramsManager_c *v424; // x0
  struct TerminalPramsManager_StaticFields *v425; // x0
  const MethodInfo *v426; // x0
  int32_t v427; // w2
  const MethodInfo *v428; // x3
  int32_t v429; // w19
  TerminalPramsManager_c *v430; // x0
  CGThumbnailListItem_o *p_eventHarvestGrowthInfo; // x0
  __int64 v432; // x1
  TerminalPramsManager_c *v433; // x0
  BattleResultComponent_resultData_array *v434; // x22
  int32_t ScriptIntParam; // w24
  int32_t v436; // w0
  int32_t v437; // w25
  __int64 v438; // x23
  int32_t v439; // w2
  const MethodInfo *v440; // x3
  Il2CppArrayBounds *bounds; // d0
  TerminalPramsManager_c *v442; // x0
  CGThumbnailListItem_o *v443; // x0
  Il2CppObject *v444; // x22
  QuestEntity_o *QuestEntity; // x0
  int32_t v446; // w2
  const MethodInfo *v447; // x3
  QuestEntity_o *v448; // x22
  TerminalPramsManager_c *v449; // x0
  int32_t SpotId; // w21
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v452; // x21
  TerminalPramsManager_c *v453; // x0
  struct EventAreaImproveResultInfo_o *eventAreaImproveResultInfo; // x8
  TerminalPramsManager_c *v455; // x0
  __int64 v456; // x1
  System_String_o *v457; // x21
  TerminalPramsManager_c *v458; // x0
  System_String_o *v459; // x0
  __int64 v460; // x1
  int32_t v461; // w2
  const MethodInfo *v462; // x3
  System_String_o *v463; // x21
  TerminalPramsManager_c *v464; // x0
  CGThumbnailListItem_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  CGThumbnailListItem_c *v466; // x21
  TerminalPramsManager_c *v467; // x0
  CGThumbnailListItem_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v469; // x1
  __int64 v470; // x21
  TerminalPramsManager_c *v471; // x0
  int32_t v472; // w2
  const MethodInfo *v473; // x3
  int32_t v474; // w2
  const MethodInfo *v475; // x3
  int32_t v476; // w1
  __int64 v477; // x1
  TerminalPramsManager_c *v478; // x0
  int32_t v479; // w2
  const MethodInfo *v480; // x3
  int32_t v481; // w2
  const MethodInfo *v482; // x3
  int32_t v483; // w1
  __int64 v484; // x1
  TerminalPramsManager_c *v485; // x0
  int32_t v486; // w2
  const MethodInfo *v487; // x3
  int32_t v488; // w2
  const MethodInfo *v489; // x3
  int32_t v490; // w1
  __int64 v491; // x1
  TerminalPramsManager_c *v492; // x0
  int32_t v493; // w2
  const MethodInfo *v494; // x3
  System_String_o *v495; // x0
  const MethodInfo *v496; // x1
  const MethodInfo *v497; // x0
  const MethodInfo *v498; // x0
  const MethodInfo *v499; // x0
  const MethodInfo *v500; // x0
  const MethodInfo *v501; // x0
  __int64 v502; // x1
  TerminalPramsManager_c *v503; // x0
  int32_t v504; // w19
  const MethodInfo *v505; // x0
  __int64 v506; // x1
  TerminalPramsManager_c *v507; // x0
  __int64 v508; // x0
  System_String_o *v509; // [xsp+8h] [xbp-138h]
  bool v510; // [xsp+14h] [xbp-12Ch]
  BattleResultComponent_resultData_array *resulta; // [xsp+18h] [xbp-128h]
  il2cpp_array_size_t *p_max_length; // [xsp+20h] [xbp-120h]
  BattleResultComponent_resultData_array **m_Items; // [xsp+28h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v514; // [xsp+30h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v515; // [xsp+50h] [xbp-F0h]
  __int128 v516; // [xsp+70h] [xbp-D0h]
  char v517[4]; // [xsp+8Ch] [xbp-B4h] BYREF
  UserSuperBossEntity_o *v518; // [xsp+90h] [xbp-B0h] BYREF
  Il2CppObject *v519; // [xsp+98h] [xbp-A8h] BYREF
  Il2CppObject *v520; // [xsp+A0h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *v521; // [xsp+A8h] [xbp-98h] BYREF
  int QuestId_k__BackingField; // [xsp+B4h] [xbp-8Ch] BYREF
  Il2CppObject *v523; // [xsp+B8h] [xbp-88h] BYREF
  Il2CppObject *v524; // [xsp+C0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+C8h] [xbp-78h] BYREF
  int v526; // [xsp+D4h] [xbp-6Ch] BYREF
  QuestPhaseEntity_o *v527; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v528; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v529; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v530; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v531; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v532; // 0:x0.16

  v4 = result;
  if ( (byte_4A4B960 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, isWin);
    sub_1B863B8(&bool_TypeInfo, v5);
    sub_1B863B8(&CondType_TypeInfo, v6);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventPointMaster___, v8);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventRaidMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestMessageMaster___, v12);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v14);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserQuestMaster___, v15);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v16);
    sub_1B863B8(&Method_DataManager_GetMasterData_WarMaster___, v17);
    sub_1B863B8(&Method_DataManager_GetMaster_EventDetailMaster___, v18);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v19);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantMaster___, v20);
    sub_1B863B8(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v21);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v22);
    sub_1B863B8(&Method_DataManager_GetMaster_UserSuperBossMaster___, v23);
    sub_1B863B8(&Method_DataManager_GetMaster_WarMaster___, v24);
    sub_1B863B8(&DataManager_TypeInfo, v25);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v26);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v27);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v28);
    sub_1B863B8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v29);
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_int___, v30);
    sub_1B863B8(&EventHarvestGrowthInfo_TypeInfo, v31);
    sub_1B863B8(&EventSaveData_TypeInfo, v32);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v33);
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v34);
    sub_1B863B8(&NetworkManager_TypeInfo, v35);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v37);
    sub_1B863B8(&System_Predicate_QuestReleaseEntity__TypeInfo, v38);
    sub_1B863B8(&QuestClearHeroineInfo_TypeInfo, v39);
    sub_1B863B8(&ScriptManager_TypeInfo, v40);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v41);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v43);
    sub_1B863B8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v44);
    sub_1B863B8(&Method_SingletonTemplate_QuestTree__get_Instance__, v45);
    sub_1B863B8(&string___TypeInfo, v46);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v47);
    sub_1B863B8(&TitleInfoEventRaidBossComponent_TypeInfo, v48);
    sub_1B863B8(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v49);
    sub_1B863B8(&Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__712_0__, v50);
    sub_1B863B8(&TerminalPramsManager___c_TypeInfo, v51);
    sub_1B863B8(&UserServantCollectionEntity___TypeInfo, v52);
    sub_1B863B8(&UserServantCollectionEntity_TypeInfo, v53);
    sub_1B863B8(&UserServantEntity_TypeInfo, v54);
    sub_1B863B8(&UserSuperBossEntity___TypeInfo, v55);
    sub_1B863B8(&StringLiteral_19669/*"harvestGrowthAfterQuestId"*/, v56);
    sub_1B863B8(&StringLiteral_16474/*"afterActionBk"*/, v57);
    sub_1B863B8(&StringLiteral_817/*","*/, v58);
    sub_1B863B8(&StringLiteral_19670/*"harvestGrowthBeforeQuestId"*/, v59);
    sub_1B863B8(&StringLiteral_1/*""*/, v60);
    sub_1B863B8(&StringLiteral_6570/*"False"*/, v61);
    result = (BattleResultComponent_resultData_array *)sub_1B863B8(&StringLiteral_1139/*"0"*/, v62);
    byte_4A4B960 = 1;
  }
  v527 = 0LL;
  v526 = 0;
  v524 = 0LL;
  entity = 0LL;
  v523 = 0LL;
  QuestId_k__BackingField = 0;
  v520 = 0LL;
  v521 = 0LL;
  v518 = 0LL;
  v519 = 0LL;
  v517[0] = 0;
  if ( !v4 )
    goto LABEL_1197;
  if ( !v4->max_length )
    goto LABEL_1198;
  v63 = v4->m_Items[0];
  m_Items = (BattleResultComponent_resultData_array **)v4->m_Items;
  if ( !v63 )
    goto LABEL_1197;
  oldUserSvtCollection = v63->fields.oldUserSvtCollection;
  if ( !oldUserSvtCollection )
    goto LABEL_1197;
  v65 = (_DWORD *)sub_1B86460(UserServantCollectionEntity___TypeInfo, oldUserSvtCollection->max_length);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !v4->max_length )
    goto LABEL_1198;
  p_max_length = &v4->max_length;
  if ( !*m_Items )
    goto LABEL_1197;
  v68 = (*m_Items)->m_Items[11];
  v510 = isWin;
  resulta = v4;
  v526 = 0;
  if ( !v68 )
    goto LABEL_1197;
  eventEndTitle = (int)v68->fields.eventEndTitle;
  v70 = &qword_4A48000;
  if ( eventEndTitle >= 1 )
  {
    v71 = (UserServantCollectionMaster_o *)result;
    v72 = 0;
    while ( v72 < eventEndTitle )
    {
      v73 = *((_QWORD *)&v68->fields.eventEndMessage + (int)v72);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !*((_BYTE *)v70 + 3109) )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, isWin);
        *((_BYTE *)v70 + 3109) = 1;
      }
      result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
      }
      if ( !v73 )
        goto LABEL_1197;
      v75 = *(_QWORD *)(v73 + 24);
      v74 = *(_QWORD *)(v73 + 32);
      myDeck = result->m_Items[19]->fields.myDeck;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v528.fields.currentCryptoKey = v75;
      *(_QWORD *)&v528.fields.fakeValue = v74;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                           v528,
                                                           0LL);
      if ( !v71 )
        goto LABEL_1197;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v71, (int64_t)myDeck, (int32_t)result, 0LL);
      v78 = (UserServantCollectionEntity_o *)sub_1B86604(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor_41204936(v78, EntityDefinitely, 0LL);
      if ( !v65 )
        goto LABEL_1197;
      if ( v78 )
      {
        result = (BattleResultComponent_resultData_array *)sub_1B864F4(v78, *(_QWORD *)(*(_QWORD *)v65 + 64LL));
        if ( !result )
          goto LABEL_1199;
      }
      if ( v72 >= v65[6] )
        break;
      v81 = &v65[2 * v72];
      *((_QWORD *)v81 + 4) = v78;
      v82 = (CGThumbnailListItem_o *)(v81 + 8);
      sub_1B8635C(v82, (int32_t)v78, v79, v80);
      if ( v72 >= v65[6] )
        break;
      klass = v82->klass;
      v70 = &qword_4A48000;
      *(_OWORD *)&v515.fields.currentCryptoKey = *(_OWORD *)(v73 + 84);
      if ( !klass )
        goto LABEL_1197;
      *(_OWORD *)((char *)&klass->_1.declaringType + 4) = *(_OWORD *)&v515.fields.currentCryptoKey;
      if ( v72 >= v65[6] )
        break;
      v84 = v82->klass;
      v516 = *(_OWORD *)(v73 + 100);
      if ( !v84 )
        goto LABEL_1197;
      *(_OWORD *)((char *)&v84->_1.generic_class + 4) = v516;
      if ( v72 >= v65[6] )
        break;
      if ( !v82->klass )
        goto LABEL_1197;
      ++v72;
      HIDWORD(v82->klass->_1.interopData) = *(_DWORD *)(v73 + 116);
      v526 = v72;
      eventEndTitle = (int)v68->fields.eventEndTitle;
      if ( (int)v72 >= eventEndTitle )
        goto LABEL_36;
    }
LABEL_1198:
    sub_1B8661C(result, isWin);
  }
LABEL_36:
  v85 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v85 = TerminalPramsManager_TypeInfo;
  }
  v86 = p_max_length;
  p_mQuestClearHeroineInfo = (CGThumbnailListItem_o *)&v85->static_fields->mQuestClearHeroineInfo;
  p_mQuestClearHeroineInfo->klass = 0LL;
  sub_1B8635C(p_mQuestClearHeroineInfo, 0, v66, v67);
  v88 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1198;
  if ( !*m_Items )
    goto LABEL_1197;
  v89 = (*m_Items)->m_Items[5];
  if ( v89 )
  {
    v90 = v89->fields.eventEndTitle;
    if ( v90 )
    {
      if ( !(_DWORD)v90 )
        goto LABEL_1198;
      eventEndMessage = v89->fields.eventEndMessage;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1197;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !eventEndMessage )
        goto LABEL_1197;
      v92 = *(_OWORD *)&eventEndMessage[1].monitor;
      v93 = (DataMasterBase_TMaster__TEntity__PKType__o *)result;
      *(_OWORD *)&v515.fields.currentCryptoKey = *(_OWORD *)&eventEndMessage->fields._stringLength;
      *(_OWORD *)&v515.fields.fakeValue = v92;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v514 = v515;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(
                                                           &v514,
                                                           0LL);
      if ( !v93 )
        goto LABEL_1197;
      v94 = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                     v93,
                                     (int64_t)result,
                                     (const MethodInfo_32167DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v95 = sub_1B86604(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_41229780((UserServantEntity_o *)v95, v94, 0LL);
      v516 = *(_OWORD *)&eventEndMessage[4].klass;
      if ( !v95 )
        goto LABEL_1197;
      *(_OWORD *)(v95 + 96) = v516;
      *(_DWORD *)(v95 + 256) = eventEndMessage[10].fields._stringLength;
      *(_QWORD *)(v95 + 292) = *(System_String_c **)((char *)&eventEndMessage[12].klass + 4);
      monitor = eventEndMessage[5].monitor;
      p_monitor = &eventEndMessage[5].monitor;
      v97 = monitor;
      v99 = p_monitor[1];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v529.fields.currentCryptoKey = v97;
      *(_QWORD *)&v529.fields.fakeValue = v99;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                           v529,
                                                           0LL);
      if ( (int)result >= 1 )
        *(_OWORD *)(v95 + 128) = *(_OWORD *)p_monitor;
      v526 = 0;
      if ( !v65 )
        goto LABEL_1197;
      v100 = v65[6];
      if ( v100 >= 1 )
      {
        v101 = 0;
        while ( v101 < (unsigned int)v100 )
        {
          v102 = *(UserServantCollectionEntity_o **)&v65[2 * v101 + 8];
          if ( !v102 )
            goto LABEL_1197;
          userId = (struct DeckData_o *)v102->fields.userId;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4A48C25 )
          {
            sub_1B863B8(&NetworkManager_TypeInfo, isWin);
            byte_4A48C25 = 1;
          }
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          }
          if ( userId == result->m_Items[19]->fields.myDeck )
          {
            SvtId = UserServantCollectionEntity__getSvtId(v102, 0LL);
            v106 = *(_QWORD *)(v95 + 80);
            v105 = *(_QWORD *)(v95 + 88);
            v107 = SvtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v530.fields.currentCryptoKey = v106;
            *(_QWORD *)&v530.fields.fakeValue = v105;
            result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                                 v530,
                                                                 0LL);
            if ( v107 == (_DWORD)result )
              goto LABEL_70;
          }
          v101 = v526 + 1;
          v526 = v101;
          v100 = v65[6];
          if ( v101 >= v100 )
            goto LABEL_69;
        }
        goto LABEL_1198;
      }
LABEL_69:
      v102 = 0LL;
LABEL_70:
      v108 = sub_1B86604(QuestClearHeroineInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v108, 0LL);
      if ( !v108 )
        goto LABEL_1197;
      *(_QWORD *)(v108 + 16) = v95;
      sub_1B8635C((CGThumbnailListItem_o *)(v108 + 16), v95, v109, v110);
      result = (BattleResultComponent_resultData_array *)UserServantEntity__getLimitCount(
                                                           (UserServantEntity_o *)v95,
                                                           0LL);
      if ( !v94 )
        goto LABEL_1197;
      v113 = (_DWORD)result != UserServantEntity__getLimitCount(v94, 0LL);
      *(_BYTE *)(v108 + 25) = 0;
      *(_DWORD *)(v108 + 28) = 0;
      *(_DWORD *)(v108 + 32) = 0;
      *(_BYTE *)(v108 + 40) = 0;
      *(_DWORD *)(v108 + 36) = -1;
      *(_BYTE *)(v108 + 24) = v113;
      v86 = p_max_length;
      *(_BYTE *)(v108 + 41) = *(_DWORD *)(v95 + 296) != v94->fields.exceedCount;
      if ( v102 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4A48C25 )
        {
          sub_1B863B8(&NetworkManager_TypeInfo, v114);
          byte_4A48C25 = 1;
        }
        v116 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v116 = NetworkManager_TypeInfo;
        }
        v118 = *(_QWORD *)(v95 + 80);
        v117 = *(_QWORD *)(v95 + 88);
        userIdNumber = v116->static_fields->userIdNumber;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v531.fields.currentCryptoKey = v118;
        *(_QWORD *)&v531.fields.fakeValue = v117;
        result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                             v531,
                                                             0LL);
        if ( !Master_object )
          goto LABEL_1197;
        v120 = UserServantCollectionMaster__GetEntityDefinitely(
                 (UserServantCollectionMaster_o *)Master_object,
                 userIdNumber,
                 (int32_t)result,
                 0LL);
        result = (BattleResultComponent_resultData_array *)UserServantCollectionEntity__getFriendShipRank(v102, 0LL);
        if ( !v120 )
          goto LABEL_1197;
        if ( (_DWORD)result != UserServantCollectionEntity__getFriendShipRank(v120, 0LL) )
          *(_DWORD *)(v108 + 36) = UserServantCollectionEntity__getFriendShipRank(v102, 0LL);
        v86 = p_max_length;
        if ( v102->fields.friendshipExceedCount != v120->fields.friendshipExceedCount )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v121 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantMaster___);
          v123 = *(_QWORD *)(v95 + 80);
          v122 = *(_QWORD *)(v95 + 88);
          v124 = (DataMasterBase_TMaster__TEntity__PKType__o *)v121;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v532.fields.currentCryptoKey = v123;
          *(_QWORD *)&v532.fields.fakeValue = v122;
          result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                               v532,
                                                               0LL);
          if ( !v124 )
            goto LABEL_1197;
          result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                               v124,
                                                               &entity,
                                                               (int32_t)result,
                                                               (const MethodInfo_32142CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
          v86 = p_max_length;
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_1197;
            klass_high = HIDWORD(entity[6].klass);
            friendshipExceedCount = v102->fields.friendshipExceedCount;
            *(_BYTE *)(v108 + 40) = 1;
            *(_DWORD *)(v108 + 36) = friendshipExceedCount + klass_high;
          }
        }
      }
      v127 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v127 = TerminalPramsManager_TypeInfo;
      }
      v128 = (CGThumbnailListItem_o *)&v127->static_fields->mQuestClearHeroineInfo;
      v128->klass = (CGThumbnailListItem_c *)v108;
      sub_1B8635C(v128, v108, v111, v112);
      v88 = *(_QWORD *)v86;
    }
  }
  if ( !(_DWORD)v88 )
    goto LABEL_1198;
  v129 = (BattleResultComponent_resultData_o *)*m_Items;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetBattleResultCampaignBonus(v129, (const MethodInfo *)isWin);
  if ( !*v86 )
    goto LABEL_1198;
  if ( !*m_Items )
    goto LABEL_1197;
  v130 = (*m_Items)->m_Items[9];
  if ( v130 && (v131 = v130->fields.eventEndTitle) != 0LL )
  {
    if ( !(_DWORD)v131 )
      goto LABEL_1198;
    v132 = (UserQuestEntity_o *)v130->fields.eventEndMessage;
  }
  else
  {
    v132 = 0LL;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B11E )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    byte_4A4B11E = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE6(result->m_Items[19]->fields.oldUserGame) = v132 != 0LL;
  if ( !byte_4A4B11D )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4A4B11D = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE5(result->m_Items[19]->fields.oldUserGame) = 0;
  if ( !byte_4A4B2B8 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4A4B2B8 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE1(result->m_Items[19]->fields.resultDamageRewardInfos) = 0;
  if ( !byte_4A4B11C )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4A4B11C = 1;
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
    if ( !byte_4A48E97 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A48E97 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( result->m_Items[19]->fields.eventId )
    {
      if ( !v132 )
        goto LABEL_1197;
    }
    else
    {
      if ( !v132 )
        goto LABEL_1197;
      questId = v132->fields.questId;
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4A4AE7A )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
        byte_4A4AE7A = 1;
      }
      v134 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v134 = TerminalPramsManager_TypeInfo;
      }
      v134->static_fields->_QuestId_k__BackingField = questId;
      QuestPhase = UserQuestEntity__getQuestPhase(v132, 0LL);
      if ( !byte_4A4AE7E )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v135);
        byte_4A4AE7E = 1;
      }
      v137 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v137 = TerminalPramsManager_TypeInfo;
      }
      v137->static_fields->_PhaseCnt_k__BackingField = QuestPhase;
    }
    v138 = v132->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1197;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)result,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4A48C25 )
    {
      sub_1B863B8(&NetworkManager_TypeInfo, isWin);
      byte_4A48C25 = 1;
    }
    result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_1197;
    v140 = UserQuestMaster__GetEntity(
             (UserQuestMaster_o *)MasterData_object,
             (int64_t)result->m_Items[19]->fields.myDeck,
             v138,
             0LL);
    if ( v140 )
    {
      v141 = v140;
      v142 = UserQuestEntity__getQuestPhase(v140, 0LL);
      if ( UserQuestEntity__getClearNum(v132, 0LL) || UserQuestEntity__getClearNum(v141, 0LL) != 1 )
        v144 = UserQuestEntity__IsResetStatus(v132, 0LL) && !UserQuestEntity__IsResetStatus(v141, 0LL);
      else
        v144 = 1;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A4B11D )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v143);
        byte_4A4B11D = 1;
      }
      v145 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v145 = TerminalPramsManager_TypeInfo;
      }
      v145->static_fields->_IsQuestClear_k__BackingField = v144;
      if ( !byte_4A4B993 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v143);
        v145 = TerminalPramsManager_TypeInfo;
        byte_4A4B993 = 1;
      }
      if ( !v145->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v145);
        v145 = TerminalPramsManager_TypeInfo;
      }
      v145->static_fields->_EventUIEffectClearQuestId_k__BackingField = v138;
      if ( !byte_4A4B990 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v143);
        v145 = TerminalPramsManager_TypeInfo;
        byte_4A4B990 = 1;
      }
      if ( !v145->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v145);
        v145 = TerminalPramsManager_TypeInfo;
      }
      v145->static_fields->_MapModelClearQuestId_k__BackingField = v138;
      if ( !byte_4A4B991 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v143);
        v145 = TerminalPramsManager_TypeInfo;
        byte_4A4B991 = 1;
      }
      if ( !v145->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v145);
        v145 = TerminalPramsManager_TypeInfo;
      }
      v145->static_fields->_MapModelClearPhaseCount_k__BackingField = v142;
      TerminalPramsManager__MapModelClearQuestInfo_SaveData((const MethodInfo *)v145);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !result )
        goto LABEL_1197;
      AdManager__TrackEvent((AdManager_o *)result, 4, 1, v138, v142, 0LL, 0LL);
      TerminalPramsManager__SendClearQuestToAdManager(v138, v142, v146);
    }
    else
    {
      v142 = 0;
    }
    v147 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v147);
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1197;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
    if ( !result )
      goto LABEL_1197;
    ValidMessage = QuestMessageMaster__GetValidMessage((QuestMessageMaster_o *)result, v138, v142, 3, 0LL);
    v150 = TerminalPramsManager_TypeInfo;
    if ( ValidMessage )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A4A0F0 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
        byte_4A4A0F0 = 1;
      }
      v150 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v150 = TerminalPramsManager_TypeInfo;
      }
      v150->static_fields->_IsDispOnly_k__BackingField = 1;
    }
    if ( !v150->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v150);
    if ( !byte_4A4B9A0 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A4B9A0 = 1;
    }
    v151 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v151 = TerminalPramsManager_TypeInfo;
    }
    if ( v151->static_fields->_QuestReleaseFocusQuestId_k__BackingField >= 1 )
    {
      if ( !v151->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v151);
      if ( !byte_4A4B9A0 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
        byte_4A4B9A0 = 1;
      }
      v152 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v152 = TerminalPramsManager_TypeInfo;
      }
      TerminalPramsManager__SetQuestReleasedFocusState(
        v152->static_fields->_QuestReleaseFocusQuestId_k__BackingField,
        1,
        v149);
      TerminalPramsManager__SaveQuestReleasedFocusState(v153);
      if ( !byte_4A4B5A5 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
        byte_4A4B5A5 = 1;
      }
      v151 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v151 = TerminalPramsManager_TypeInfo;
      }
      v151->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
    }
    if ( !v151->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v151);
    if ( !byte_4A4B6AC )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A4B6AC = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(result->m_Items[19]->fields.eventPointWinReward) = v138;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4A4B11F )
  {
    result = (BattleResultComponent_resultData_array *)sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    byte_4A4B11F = 1;
  }
  v154 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v154 = TerminalPramsManager_TypeInfo;
  }
  if ( v154->static_fields->_IsQuestClear_k__BackingField )
  {
    if ( !v132 )
      goto LABEL_1197;
    v155 = v132->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1197;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !result )
      goto LABEL_1197;
    v157 = WarMaster__getByLastQuestId((WarMaster_o *)result, v155, 0LL);
    if ( v157 )
    {
      v158 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v158 = BalanceConfig_TypeInfo;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v158->static_fields->MainInterludeMapReturnWarIds,
             v157->fields.id,
             (const MethodInfo_2F884F0 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A4B120 )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, v156);
          byte_4A4B120 = 1;
        }
        v159 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v159 = TerminalPramsManager_TypeInfo;
        }
        v157 = 0LL;
        v159->static_fields->_IsWarClear_k__BackingField = 0;
      }
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B120 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v156);
      byte_4A4B120 = 1;
    }
    v160 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v160 = TerminalPramsManager_TypeInfo;
    }
    v160->static_fields->_IsWarClear_k__BackingField = v157 != 0LL;
    v161 = TerminalPramsManager__CheckIsOrdealCallWarClear(v157, v156);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v161 )
    {
      if ( !byte_4A4B121 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
        byte_4A4B121 = 1;
      }
      v162 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v162 = TerminalPramsManager_TypeInfo;
      }
      v163 = 1;
    }
    else
    {
      if ( !byte_4A4B121 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
        byte_4A4B121 = 1;
      }
      v162 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v162 = TerminalPramsManager_TypeInfo;
      }
      v163 = 0;
    }
    v162->static_fields->_IsOrdealCallWarClear_k__BackingField = v163;
    if ( !v162->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v162);
    if ( !byte_4A4B122 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A4B122 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE3(result->m_Items[19]->fields.oldUserEvent) )
    {
      if ( !v157 )
        goto LABEL_1197;
      if ( !WarEntity__IsEvent(v157, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( !result )
          goto LABEL_1197;
        AdManager__TrackEvent((AdManager_o *)result, 6, 1, v157->fields.id, -1, 0LL, 0LL);
      }
    }
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !result )
      goto LABEL_1197;
    AdManager__TrackEvent((AdManager_o *)result, 5, 1, v155, -1, 0LL, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SendOpenedQuestIdToAdManager(v155, v164);
    if ( !byte_4A4B122 )
    {
      result = (BattleResultComponent_resultData_array *)sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A4B122 = 1;
    }
    v154 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v154 = TerminalPramsManager_TypeInfo;
    }
    if ( v154->static_fields->_IsWarClear_k__BackingField )
    {
      if ( !v157 )
        goto LABEL_1197;
      HasFlag = WarEntity__HasFlag(v157, 128, 0LL);
      v154 = TerminalPramsManager_TypeInfo;
      if ( HasFlag )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A4B597 )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
          byte_4A4B597 = 1;
        }
        v154 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v154 = TerminalPramsManager_TypeInfo;
        }
        v154->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
        if ( !byte_4A4B2B8 )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
          v154 = TerminalPramsManager_TypeInfo;
          byte_4A4B2B8 = 1;
        }
        if ( !v154->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v154);
          v154 = TerminalPramsManager_TypeInfo;
        }
        v154->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
      }
    }
  }
  if ( !v154->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v154);
  TerminalPramsManager__SetQuestRewardInfo(resulta, (const MethodInfo *)isWin);
  if ( !resulta->max_length )
    goto LABEL_1198;
  if ( !*m_Items )
    goto LABEL_1197;
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->panelEventPoint = HIDWORD((*m_Items)->m_Items[2]);
  static_fields->mResultEventPanelRewardInfos = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->mResultEventPanelRewardInfos, 0, v166, v167);
  if ( !*p_max_length )
    goto LABEL_1198;
  if ( !*m_Items )
    goto LABEL_1197;
  v171 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[19];
  if ( v171 && v171->_1.namespaze )
  {
    v172 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v172 = TerminalPramsManager_TypeInfo;
    }
    p_mResultEventPanelRewardInfos = (CGThumbnailListItem_o *)&v172->static_fields->mResultEventPanelRewardInfos;
    p_mResultEventPanelRewardInfos->klass = v171;
    sub_1B8635C(p_mResultEventPanelRewardInfos, (int32_t)v171, v169, v170);
  }
  v174 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v174 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = (CGThumbnailListItem_o *)&v174->static_fields->eventConquestInfos;
  p_eventConquestInfos->klass = 0LL;
  sub_1B8635C(p_eventConquestInfos, 0, v169, v170);
  TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1198;
  if ( !*m_Items || !result )
    goto LABEL_1197;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v524,
                                                       HIDWORD((*m_Items)->bounds),
                                                       (const MethodInfo_32142CC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( !*p_max_length )
    goto LABEL_1198;
  if ( !*m_Items )
    goto LABEL_1197;
  v178 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[43];
  if ( v178 && v178->_1.namespaze )
  {
    v179 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v179 = TerminalPramsManager_TypeInfo;
    }
    v180 = (CGThumbnailListItem_o *)&v179->static_fields->eventConquestInfos;
    v180->klass = v178;
    sub_1B8635C(v180, (int32_t)v178, v176, v177);
    if ( v524 )
      Farm = EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v524, 0LL);
    else
      Farm = 0;
    v182 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v182 = TerminalPramsManager_TypeInfo;
    }
    v182->static_fields->eventConquestInfoDisp = !Farm;
  }
  result = (BattleResultComponent_resultData_array *)v524;
  if ( v524 )
  {
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v524, 0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A4B11F )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
        byte_4A4B11F = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
      {
        v183 = 1;
      }
      else
      {
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_4A4B11C )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
          byte_4A4B11C = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        v183 = BYTE6(result->m_Items[19]->fields.oldUserGame);
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      BYTE1(result->m_Items[19][1].fields.raceResult) = v183;
    }
  }
  if ( !*p_max_length )
    goto LABEL_1198;
  if ( !*m_Items )
    goto LABEL_1197;
  if ( LOBYTE((*m_Items)->m_Items[46]) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B793 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A4B793 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(result->m_Items[19][1].klass) = 1;
    if ( !byte_4A4B11F )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4A4B11F = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      if ( !v132 )
        goto LABEL_1197;
      v184 = v132->fields.questId;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1197;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !result )
        goto LABEL_1197;
      v185 = WarMaster__getByLastQuestId((WarMaster_o *)result, v184, 0LL);
      if ( v185 )
      {
        id = v185->fields.id;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A4B794 )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, v186);
          byte_4A4B794 = 1;
        }
        v188 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v188 = TerminalPramsManager_TypeInfo;
        }
        v188->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = id;
      }
    }
  }
  v189 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v189 = TerminalPramsManager_TypeInfo;
  }
  *(_QWORD *)&v189->static_fields->clearLastBattleRaidId = -1LL;
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1197;
  v190 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1197;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1198;
  if ( !*m_Items || !result )
    goto LABEL_1197;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)result,
          &v523,
          HIDWORD((*m_Items)->bounds),
          (const MethodInfo_32142CC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_623;
  result = (BattleResultComponent_resultData_array *)v523;
  if ( !v523 )
    goto LABEL_1197;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPoint((EventDetailEntity_o *)v523, 0LL);
  v195 = 0LL;
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !*p_max_length )
      goto LABEL_1198;
    if ( !*m_Items )
      goto LABEL_1197;
    v195 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[10];
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B9A1 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    byte_4A4B9A1 = 1;
  }
  v196 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v196 = TerminalPramsManager_TypeInfo;
  }
  p_OldUserEventPoint_k__BackingField = (CGThumbnailListItem_o *)&v196->static_fields->_OldUserEventPoint_k__BackingField;
  p_OldUserEventPoint_k__BackingField->klass = v195;
  sub_1B8635C(p_OldUserEventPoint_k__BackingField, (int32_t)v195, v193, v194);
  if ( !*p_max_length )
    goto LABEL_1198;
  v198 = &byte_4A4B000;
  if ( !*m_Items || !v190 )
    goto LABEL_1197;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidGorupMax(
                                                       (EventRaidMaster_o *)v190,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0LL);
  if ( (int)result >= 1 )
  {
    if ( !*p_max_length )
      goto LABEL_1198;
    if ( !*m_Items )
      goto LABEL_1197;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                         (EventRaidMaster_o *)v190,
                                                         HIDWORD((*m_Items)->bounds),
                                                         0LL);
    v526 = 0;
    if ( !result )
      goto LABEL_1197;
    max_length = result->max_length;
    v200 = result;
    if ( max_length < 1 )
      goto LABEL_623;
    v201 = 0;
    while ( 1 )
    {
      if ( v201 >= (unsigned int)max_length )
        goto LABEL_1198;
      v202 = &v200->obj.klass + v201;
      v203 = v202[4];
      if ( !v203 )
        goto LABEL_1197;
      result = (BattleResultComponent_resultData_array *)EventRaidEntity__IsJumbleSingleRaid(
                                                           (EventRaidEntity_o *)v202[4],
                                                           0LL);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !*p_max_length )
          goto LABEL_1198;
        if ( !*m_Items )
          goto LABEL_1197;
        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                 (EventRaidMaster_o *)v190,
                                 HIDWORD((*m_Items)->bounds),
                                 (int32_t)v203->_1.namespaze,
                                 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A48E97 )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
          byte_4A48E97 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( RaidGroupDeadQuestId == result->m_Items[19]->fields.eventId )
        {
          result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !result )
            goto LABEL_1197;
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
        goto LABEL_1198;
      if ( !*m_Items )
        goto LABEL_1197;
      result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidAliveQuestIds(
                                                           (EventRaidMaster_o *)v190,
                                                           HIDWORD((*m_Items)->bounds),
                                                           HIDWORD(v203->_1.name),
                                                           0LL);
      QuestId_k__BackingField = 0;
      if ( !result )
        goto LABEL_1197;
      v205 = result->max_length;
      v206 = result;
      if ( v205 >= 1 )
      {
        v207 = 0;
        while ( 1 )
        {
          if ( v207 >= (unsigned int)v205 )
            goto LABEL_1198;
          v208 = *((_DWORD *)v206->m_Items + v207);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A48E97 )
          {
            sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
            byte_4A48E97 = 1;
          }
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          }
          v209 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
          if ( v208 == v209->_QuestId_k__BackingField )
            break;
          v207 = QuestId_k__BackingField + 1;
          QuestId_k__BackingField = v207;
          v205 = v206->max_length;
          if ( v207 >= v205 )
            goto LABEL_429;
        }
        name_high = HIDWORD(v203->_1.name);
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          v209 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v209->clearBattleRaidId = name_high;
      }
LABEL_429:
      v201 = v526 + 1;
      v526 = v201;
      max_length = v200->max_length;
      if ( v201 >= max_length )
        goto LABEL_623;
    }
    v221 = TerminalPramsManager_TypeInfo;
    v222 = HIDWORD(v203->_1.name);
    goto LABEL_478;
  }
  result = (BattleResultComponent_resultData_array *)v523;
  if ( !v523 )
    goto LABEL_1197;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__isRaidDefeatCount(
                                                       (EventDetailEntity_o *)v523,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_array *)v523;
    if ( !v523 )
      goto LABEL_1197;
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventActivityPoint(
                                                         (EventDetailEntity_o *)v523,
                                                         0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !*p_max_length )
        goto LABEL_1198;
      if ( !*m_Items )
        goto LABEL_1197;
      v217 = (int32_t)(*m_Items)->m_Items[42];
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A4907C )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
        byte_4A4907C = 1;
      }
      v218 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v218 = TerminalPramsManager_TypeInfo;
      }
      v218->static_fields->_EventActivityPointEffectState_k__BackingField = v217;
    }
    else
    {
      result = (BattleResultComponent_resultData_array *)v523;
      if ( !v523 )
        goto LABEL_1197;
      if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v523, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A4B9A2 )
        {
          result = (BattleResultComponent_resultData_array *)sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
          byte_4A4B9A2 = 1;
        }
        v219 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v219 = TerminalPramsManager_TypeInfo;
        }
        if ( v219->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField )
        {
          v220 = 0;
        }
        else
        {
          if ( !*p_max_length )
            goto LABEL_1198;
          if ( !*m_Items )
            goto LABEL_1197;
          bounds_high = HIDWORD((*m_Items)->bounds);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsUserEventStatus = CondType__IsUserEventStatus(bounds_high, 7, 0LL);
          v219 = TerminalPramsManager_TypeInfo;
          v220 = IsUserEventStatus;
        }
        if ( !v219->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v219);
        if ( !byte_4A4B6B4 )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
          byte_4A4B6B4 = 1;
        }
        v236 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v236 = TerminalPramsManager_TypeInfo;
        }
        v236->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = v220;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)v523;
        if ( !v523 )
          goto LABEL_1197;
        if ( !EventDetailEntity__IsEventHappiness((EventDetailEntity_o *)v523, 0LL) )
          goto LABEL_505;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v224 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A48E97 )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
          byte_4A48E97 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        eventId = result->m_Items[19]->fields.eventId;
        if ( !byte_4A48E96 )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          byte_4A48E96 = 1;
        }
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( !v224 )
          goto LABEL_1197;
        v226 = QuestPhaseMaster__TryGetEntity(
                 (QuestPhaseMaster_o *)v224,
                 &v521,
                 eventId,
                 LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
                 0LL);
        v198 = &byte_4A4B000;
        if ( v226 )
        {
          result = (BattleResultComponent_resultData_array *)v521;
          if ( !v521 )
            goto LABEL_1197;
          v227 = QuestPhaseEntity__PlayHappinessCounterEffect(v521, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A4B57E )
          {
            sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
            byte_4A4B57E = 1;
          }
          v228 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v228 = TerminalPramsManager_TypeInfo;
          }
          v228->static_fields->_PlayHappinessCounterEffect_k__BackingField = v227;
        }
        else
        {
LABEL_505:
          result = (BattleResultComponent_resultData_array *)v523;
          if ( !v523 )
            goto LABEL_1197;
          result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPanel(
                                                               (EventDetailEntity_o *)v523,
                                                               0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !*p_max_length )
              goto LABEL_1198;
            v229 = &byte_4A4B000;
            if ( !*m_Items )
              goto LABEL_1197;
            v230 = (*m_Items)->m_Items[10];
            v526 = 0;
            if ( !v230 )
              goto LABEL_1197;
            v231 = (int)v230->fields.eventEndTitle;
            if ( v231 >= 1 )
            {
              v232 = 0;
              while ( 1 )
              {
                if ( v231 == v232 )
                  goto LABEL_1198;
                if ( !v523 )
                  goto LABEL_1197;
                v233 = *((_QWORD *)&v230->fields.eventEndMessage + v232);
                if ( !v233 )
                  goto LABEL_1197;
                if ( LODWORD(v523[1].klass) == *(_DWORD *)(v233 + 24) )
                  break;
                v526 = ++v232;
                if ( v231 == v232 )
                  goto LABEL_604;
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4A4AF91 )
              {
                sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
                byte_4A4AF91 = 1;
              }
              v238 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v238 = TerminalPramsManager_TypeInfo;
              }
              if ( !v238->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
              {
                v239 = (Il2CppObject *)sub_1B86604(EventSaveData_TypeInfo);
                System_Object___ctor(v239, 0LL);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4A4AF92 )
                {
                  sub_1B863B8(&TerminalPramsManager_TypeInfo, v240);
                  byte_4A4AF92 = 1;
                }
                v243 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v243 = TerminalPramsManager_TypeInfo;
                }
                p_BeforeEventSubmarineSaveData_k__BackingField = (CGThumbnailListItem_o *)&v243->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
                p_BeforeEventSubmarineSaveData_k__BackingField->klass = (CGThumbnailListItem_c *)v239;
                sub_1B8635C(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v239, v241, v242);
                v238 = TerminalPramsManager_TypeInfo;
              }
              if ( !v238->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v238);
              if ( !byte_4A4AF91 )
              {
                sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
                byte_4A4AF91 = 1;
              }
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              ultimateGetQpText = result->m_Items[19]->fields.ultimateGetQpText;
              if ( !ultimateGetQpText )
                goto LABEL_1197;
              ultimateGetQpText->fields._stringLength = *(_DWORD *)(v233 + 24);
              if ( !byte_4A4AF91 )
              {
                sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
                byte_4A4AF91 = 1;
              }
              if ( !LODWORD(result->m_Items[24]) )
              {
                j_il2cpp_runtime_class_init_0(result);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              v246 = result->m_Items[19]->fields.ultimateGetQpText;
              if ( !v246 )
                goto LABEL_1197;
              result = (BattleResultComponent_resultData_array *)v246[1].klass;
              if ( result
                && (result = (BattleResultComponent_resultData_array *)System_String__Split(
                                                                         (System_String_o *)result,
                                                                         0x2Cu,
                                                                         0,
                                                                         0LL)) != 0LL )
              {
                v247 = result->max_length;
                v248 = (__int64 *)&result->m_Items[1];
                if ( v247 <= 1 )
                  v248 = &StringLiteral_1139/*"0"*/;
                v249 = *v248;
                v250 = v247 <= 2 ? (System_String_o **)&StringLiteral_1139/*"0"*/ : (System_String_o **)&result->m_Items[2];
                v251 = *v250;
                v252 = v247 <= 3 ? &StringLiteral_6570/*"False"*/ : (void **)&result->m_Items[3];
              }
              else
              {
                v251 = (System_String_o *)StringLiteral_1139/*"0"*/;
                v252 = &StringLiteral_6570/*"False"*/;
                v249 = StringLiteral_1139/*"0"*/;
              }
              if ( !v523 )
                goto LABEL_1197;
              v509 = (System_String_o *)v249;
              v253 = (System_String_o *)*v252;
              v254 = (int32_t)v523[1].klass;
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
                                                                   v254,
                                                                   0LL);
              v255 = (System_Collections_Generic_List_object__o *)result;
              v256 = TerminalPramsManager___c_TypeInfo;
              if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
                v256 = TerminalPramsManager___c_TypeInfo;
              }
              _9__712_0 = (System_Predicate_object__o *)v256->static_fields->__9__712_0;
              if ( !_9__712_0 )
              {
                if ( !v256->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v256);
                  v256 = TerminalPramsManager___c_TypeInfo;
                }
                v258 = (Il2CppObject *)v256->static_fields->__9;
                _9__712_0 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_QuestReleaseEntity__TypeInfo);
                System_Predicate_object____ctor(
                  _9__712_0,
                  v258,
                  Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__712_0__,
                  0LL);
                v259 = TerminalPramsManager___c_TypeInfo->static_fields;
                v259->__9__712_0 = (struct System_Predicate_QuestReleaseEntity__o *)_9__712_0;
                sub_1B8635C((CGThumbnailListItem_o *)&v259->__9__712_0, (int32_t)_9__712_0, v260, v261);
                v198 = &byte_4A4B000;
              }
              if ( !v255 )
                goto LABEL_1197;
              v263 = v509;
              if ( System_Collections_Generic_List_object___Find(
                     v255,
                     (System_Predicate_T__o *)_9__712_0,
                     (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4A48E97 )
                {
                  sub_1B863B8(&TerminalPramsManager_TypeInfo, v262);
                  byte_4A48E97 = 1;
                }
                v264 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v264 = TerminalPramsManager_TypeInfo;
                }
                QuestId_k__BackingField = v264->static_fields->_QuestId_k__BackingField;
                v263 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4A4AF91 )
              {
                sub_1B863B8(&TerminalPramsManager_TypeInfo, v262);
                byte_4A4AF91 = 1;
              }
              v265 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v265 = TerminalPramsManager_TypeInfo;
              }
              BeforeEventSubmarineSaveData_k__BackingField = v265->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
              v267 = System_Int64__ToString(v233 + 32, 0LL);
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_38028828(
                                                                   v267,
                                                                   v263,
                                                                   v251,
                                                                   v253,
                                                                   0LL);
              if ( !BeforeEventSubmarineSaveData_k__BackingField )
                goto LABEL_1197;
              BeforeEventSubmarineSaveData_k__BackingField->fields.value = (struct System_String_o *)result;
              sub_1B8635C(
                (CGThumbnailListItem_o *)&BeforeEventSubmarineSaveData_k__BackingField->fields.value,
                (int32_t)result,
                v268,
                v269);
              v229 = &byte_4A4B000;
            }
LABEL_604:
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4A48E97 )
            {
              sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
              byte_4A48E97 = 1;
            }
            v270 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v270 = TerminalPramsManager_TypeInfo;
            }
            v271 = v270->static_fields->_QuestId_k__BackingField;
            if ( !byte_4A48E96 )
            {
              sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
              v270 = TerminalPramsManager_TypeInfo;
              byte_4A48E96 = 1;
            }
            if ( !v270->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v270);
              v270 = TerminalPramsManager_TypeInfo;
            }
            v272 = (unsigned __int8)v198[287];
            PhaseCnt_k__BackingField = v270->static_fields->_PhaseCnt_k__BackingField;
            if ( !v272 )
            {
              sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
              v270 = TerminalPramsManager_TypeInfo;
              byte_4A4B11F = 1;
            }
            if ( !v270->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v270);
              v270 = TerminalPramsManager_TypeInfo;
            }
            IsQuestClear_k__BackingField = v270->static_fields->_IsQuestClear_k__BackingField;
            if ( !v229[284] )
            {
              sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
              v270 = TerminalPramsManager_TypeInfo;
              v229[284] = 1;
            }
            if ( !v270->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v270);
              v270 = TerminalPramsManager_TypeInfo;
            }
            SubmarineSaveParamsManager__SaveClearQuestInfo(
              v271,
              PhaseCnt_k__BackingField,
              IsQuestClear_k__BackingField,
              v270->static_fields->_IsPhaseClear_k__BackingField,
              0LL);
          }
          else
          {
            result = (BattleResultComponent_resultData_array *)v523;
            if ( !v523 )
              goto LABEL_1197;
            if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)v523, 0LL) )
            {
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4A4B996 )
              {
                sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
                byte_4A4B996 = 1;
              }
              v237 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v237 = TerminalPramsManager_TypeInfo;
              }
              v237->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
            }
          }
        }
      }
    }
    goto LABEL_623;
  }
  if ( !*p_max_length )
    goto LABEL_1198;
  if ( !*m_Items )
    goto LABEL_1197;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                       (EventRaidMaster_o *)v190,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0LL);
  v526 = 0;
  if ( !result )
    goto LABEL_1197;
  v211 = result->max_length;
  v212 = result;
  if ( v211 >= 1 )
  {
    v213 = 0;
    while ( 1 )
    {
      if ( v213 >= (unsigned int)v211 || !*p_max_length )
        goto LABEL_1198;
      if ( !*m_Items )
        goto LABEL_1197;
      v214 = v212->m_Items[v213];
      if ( !v214 )
        goto LABEL_1197;
      RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                          (EventRaidMaster_o *)v190,
                          HIDWORD((*m_Items)->bounds),
                          v214->fields.eventId,
                          0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A48E97 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
        byte_4A48E97 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v216 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( RaidDeadQuestId == v216->_QuestId_k__BackingField )
        break;
      v213 = v526 + 1;
      v526 = v213;
      v211 = v212->max_length;
      if ( v213 >= v211 )
        goto LABEL_623;
    }
    v223 = v214->fields.eventId;
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      v216 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v216->clearBattleRaidId = v223;
    result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !result )
      goto LABEL_1197;
    if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)result, RaidDeadQuestId, 0, 0LL) )
    {
      v221 = TerminalPramsManager_TypeInfo;
      v222 = v214->fields.eventId;
LABEL_478:
      if ( !v221->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v221);
        v221 = TerminalPramsManager_TypeInfo;
      }
      v221->static_fields->clearLastBattleRaidId = v222;
    }
  }
LABEL_623:
  v275 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v275 = TerminalPramsManager_TypeInfo;
  }
  if ( v275->static_fields->clearLastBattleRaidId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v276 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4AE79 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A4AE79 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v276 )
      goto LABEL_1197;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v276,
           &v520,
           HIDWORD(result->m_Items[19]->klass),
           (const MethodInfo_32142CC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      result = (BattleResultComponent_resultData_array *)v520;
      if ( !v520 )
        goto LABEL_1197;
      if ( WarEntity__IsFolder((WarEntity_o *)v520, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)TitleInfoEventRaidBossComponent_TypeInfo;
        if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TitleInfoEventRaidBossComponent_TypeInfo;
        }
        if ( !*p_max_length )
          goto LABEL_1198;
        if ( !*m_Items )
          goto LABEL_1197;
        UnityEngine_PlayerPrefs__SetInt(result->m_Items[19]->fields.eventEndTitle, HIDWORD((*m_Items)->bounds), 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B589 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    byte_4A4B589 = 1;
  }
  v277 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v277 = TerminalPramsManager_TypeInfo;
  }
  v277->static_fields->_IsWarBoardClear_k__BackingField = 0;
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    v277 = TerminalPramsManager_TypeInfo;
    byte_4A48E97 = 1;
  }
  if ( !v277->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v277);
    v277 = TerminalPramsManager_TypeInfo;
  }
  if ( v277->static_fields->_QuestId_k__BackingField >= 1 )
  {
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1197;
    v278 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A48E97 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A48E97 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v278 )
      goto LABEL_1197;
    result = (BattleResultComponent_resultData_array *)QuestMaster__getQuestEntity(
                                                         (QuestMaster_o *)v278,
                                                         result->m_Items[19]->fields.eventId,
                                                         0LL);
    if ( !result )
      goto LABEL_1197;
    v279 = (int)result->m_Items[1];
    if ( !byte_4A4B589 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A4B589 = 1;
    }
    v277 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v277 = TerminalPramsManager_TypeInfo;
    }
    v277->static_fields->_IsWarBoardClear_k__BackingField = v279 == 7;
  }
  if ( !v277->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v277);
  if ( !byte_4A4B792 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    byte_4A4B792 = 1;
  }
  v280 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v280 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeRelease_k__BackingField = (CGThumbnailListItem_o *)&v280->static_fields->_questClearCostumeRelease_k__BackingField;
  p_questClearCostumeRelease_k__BackingField->klass = 0LL;
  sub_1B8635C(p_questClearCostumeRelease_k__BackingField, 0, v191, v192);
  if ( !*p_max_length )
    goto LABEL_1198;
  if ( !*m_Items )
    goto LABEL_1197;
  v284 = (*m_Items)->m_Items[22];
  if ( v284 && v284->fields.eventEndTitle )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B57A )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A4B57A = 1;
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
        goto LABEL_1198;
      if ( !*m_Items )
        goto LABEL_1197;
      v285 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[22];
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4A4B792 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
        byte_4A4B792 = 1;
      }
      v286 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v286 = TerminalPramsManager_TypeInfo;
      }
      v287 = (CGThumbnailListItem_o *)&v286->static_fields->_questClearCostumeRelease_k__BackingField;
      v287->klass = v285;
      sub_1B8635C(v287, (int32_t)v285, v282, v283);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B587 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    byte_4A4B587 = 1;
  }
  v288 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v288 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeGet_k__BackingField = (CGThumbnailListItem_o *)&v288->static_fields->_questClearCostumeGet_k__BackingField;
  p_questClearCostumeGet_k__BackingField->klass = 0LL;
  sub_1B8635C(p_questClearCostumeGet_k__BackingField, 0, v282, v283);
  if ( !*p_max_length )
    goto LABEL_1198;
  if ( !*m_Items )
    goto LABEL_1197;
  v292 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[23];
  if ( v292 && v292->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B587 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A4B587 = 1;
    }
    v293 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v293 = TerminalPramsManager_TypeInfo;
    }
    v294 = (CGThumbnailListItem_o *)&v293->static_fields->_questClearCostumeGet_k__BackingField;
    v294->klass = v292;
    sub_1B8635C(v294, (int32_t)v292, v290, v291);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B9A3 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    byte_4A4B9A3 = 1;
  }
  v295 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v295 = TerminalPramsManager_TypeInfo;
  }
  p_eventPointWinReward_k__BackingField = (CGThumbnailListItem_o *)&v295->static_fields->_eventPointWinReward_k__BackingField;
  p_eventPointWinReward_k__BackingField->klass = 0LL;
  sub_1B8635C(p_eventPointWinReward_k__BackingField, 0, v290, v291);
  if ( !byte_4A4B9A4 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    byte_4A4B9A4 = 1;
  }
  v299 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v299 = TerminalPramsManager_TypeInfo;
  }
  v299->static_fields->_eventPointWinType_k__BackingField = 0;
  if ( v132 && v523 && HIDWORD(v523[9].klass) == 4 )
  {
    v300 = v132->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1197;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !result )
      goto LABEL_1197;
    v301 = (QuestGroupMaster_o *)result;
    GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)result, v300, 4, 0LL);
    v303 = TerminalPramsManager_TypeInfo;
    v304 = GroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v303 = TerminalPramsManager_TypeInfo;
    }
    v303->static_fields->joinGroupId = v304;
    v305 = QuestGroupMaster__GetGroupId(v301, v300, 3, 0LL);
    if ( !byte_4A4B11F )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A4B11F = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( v305 >= 1 && BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1197;
      v306 = DataManager__GetMasterData_object_(
               (DataManager_o *)result,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1197;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventPointMaster___);
      if ( !*p_max_length )
        goto LABEL_1198;
      if ( !*m_Items || !result )
        goto LABEL_1197;
      result = (BattleResultComponent_resultData_array *)EventPointMaster__GetEntity(
                                                           (EventPointMaster_o *)result,
                                                           v305,
                                                           HIDWORD((*m_Items)->bounds),
                                                           0LL);
      v307 = (EventPointEntity_o *)result;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v307 )
        goto LABEL_1197;
      result = (BattleResultComponent_resultData_array *)EventPointEntity__IsGroupOnGroup1(
                                                           v307,
                                                           TerminalPramsManager_TypeInfo->static_fields->joinGroupId,
                                                           0LL);
      if ( !v306 )
        goto LABEL_1197;
      v308 = QuestReleaseMaster__EventPointWinActionType(
               (QuestReleaseMaster_o *)v306,
               v300,
               (unsigned __int8)result & 1,
               0LL);
      if ( !byte_4A4B9A4 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
        byte_4A4B9A4 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(result->m_Items[19]->fields.warClearReward) = v308;
      if ( !byte_4A4B9A5 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        byte_4A4B9A5 = 1;
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v309 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( v309->_eventPointWinType_k__BackingField )
      {
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          v309 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v309->joinGroupId = -1;
      }
    }
    if ( !*p_max_length )
      goto LABEL_1198;
    if ( !*m_Items )
      goto LABEL_1197;
    v310 = (*m_Items)->m_Items[20];
    if ( v310 )
    {
      v311 = v310->fields.eventEndTitle;
      if ( v311 )
      {
        if ( !(_DWORD)v311 )
          goto LABEL_1198;
        v312 = (CGThumbnailListItem_c *)v310->fields.eventEndMessage;
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_4A4B9A3 )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
          byte_4A4B9A3 = 1;
        }
        v313 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v313 = TerminalPramsManager_TypeInfo;
        }
        v314 = (CGThumbnailListItem_o *)&v313->static_fields->_eventPointWinReward_k__BackingField;
        v314->klass = v312;
        sub_1B8635C(v314, (int32_t)v312, v297, v298);
      }
    }
  }
  if ( v132 && v523 && HIDWORD(v523[9].klass) == 6 )
  {
    v315 = v132->fields.questId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B9A6 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A4B9A6 = 1;
    }
    v316 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v316 = TerminalPramsManager_TypeInfo;
    }
    v316->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = v315;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B6AF )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    byte_4A4B6AF = 1;
  }
  v317 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v317 = TerminalPramsManager_TypeInfo;
  }
  p_eventRaceBoost_k__BackingField = (CGThumbnailListItem_o *)&v317->static_fields->_eventRaceBoost_k__BackingField;
  p_eventRaceBoost_k__BackingField->klass = 0LL;
  sub_1B8635C(p_eventRaceBoost_k__BackingField, 0, v297, v298);
  v321 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1198;
  if ( !*m_Items )
    goto LABEL_1197;
  v322 = (*m_Items)->m_Items[21];
  if ( v322 && v322->fields.battleId >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B6AF )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A4B6AF = 1;
    }
    v323 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v323 = TerminalPramsManager_TypeInfo;
    }
    v324 = (CGThumbnailListItem_o *)&v323->static_fields->_eventRaceBoost_k__BackingField;
    v324->klass = (CGThumbnailListItem_c *)v322;
    sub_1B8635C(v324, (int32_t)v322, v319, v320);
    if ( !byte_4A4B696 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A4B696 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v325 = *(_QWORD *)&result->m_Items[19]->fields.followerType;
    if ( !byte_4A48E97 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4A48E97 = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v325 )
      goto LABEL_1197;
    *(_DWORD *)(v325 + 28) = result->m_Items[19]->fields.eventId;
    v321 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v321 )
    goto LABEL_1198;
  if ( !*m_Items )
    goto LABEL_1197;
  v326 = (*m_Items)->m_Items[24];
  if ( v326 )
  {
    v327 = v326->fields.eventEndTitle;
    if ( v327 )
    {
      if ( !(_DWORD)v327 )
        goto LABEL_1198;
      v328 = v326->fields.eventEndMessage;
      if ( !v328 )
        goto LABEL_1197;
      if ( v328->fields._stringLength >= 1 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A4B9A7 )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
          byte_4A4B9A7 = 1;
        }
        v329 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v329 = TerminalPramsManager_TypeInfo;
        }
        p_eventTowerReward_k__BackingField = (CGThumbnailListItem_o *)&v329->static_fields->_eventTowerReward_k__BackingField;
        p_eventTowerReward_k__BackingField->klass = (CGThumbnailListItem_c *)v328;
        sub_1B8635C(p_eventTowerReward_k__BackingField, (int32_t)v328, v319, v320);
        if ( !*p_max_length )
          goto LABEL_1198;
        if ( !*m_Items )
          goto LABEL_1197;
        v333 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[25];
        if ( !byte_4A4B9A8 )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
          byte_4A4B9A8 = 1;
        }
        v334 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v334 = TerminalPramsManager_TypeInfo;
        }
        p_resultEventTowerRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v334->static_fields->_resultEventTowerRewardInfo_k__BackingField;
        p_resultEventTowerRewardInfo_k__BackingField->klass = v333;
        sub_1B8635C(p_resultEventTowerRewardInfo_k__BackingField, (int32_t)v333, v331, v332);
        v321 = *(_QWORD *)p_max_length;
      }
    }
  }
  if ( !(_DWORD)v321 )
    goto LABEL_1198;
  if ( !*m_Items )
    goto LABEL_1197;
  v336 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[26];
  if ( v336 && v336->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B581 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A4B581 = 1;
    }
    v337 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v337 = TerminalPramsManager_TypeInfo;
    }
    p_resultBoostItemRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v337->static_fields->_resultBoostItemRewardInfo_k__BackingField;
    p_resultBoostItemRewardInfo_k__BackingField->klass = v336;
    sub_1B8635C(p_resultBoostItemRewardInfo_k__BackingField, (int32_t)v336, v319, v320);
    v321 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v321 )
    goto LABEL_1198;
  if ( !*m_Items )
    goto LABEL_1197;
  v339 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[27];
  if ( v339 && v339->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B582 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A4B582 = 1;
    }
    v340 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v340 = TerminalPramsManager_TypeInfo;
    }
    p_resultEventBoardGameTokenRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v340->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
    p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = v339;
    sub_1B8635C(p_resultEventBoardGameTokenRewardInfo_k__BackingField, (int32_t)v339, v319, v320);
    v321 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v321 )
    goto LABEL_1198;
  if ( !*m_Items )
    goto LABEL_1197;
  v342 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[28];
  if ( v342 && v342->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B58C )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A4B58C = 1;
    }
    v343 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v343 = TerminalPramsManager_TypeInfo;
    }
    p_warClearReward_k__BackingField = (CGThumbnailListItem_o *)&v343->static_fields->_warClearReward_k__BackingField;
    p_warClearReward_k__BackingField->klass = v342;
    sub_1B8635C(p_warClearReward_k__BackingField, (int32_t)v342, v319, v320);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B9A9 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    byte_4A4B9A9 = 1;
  }
  v345 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v345 = TerminalPramsManager_TypeInfo;
  }
  v346 = v345->static_fields;
  v346->_oldSuperBoss_k__BackingField = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v346->_oldSuperBoss_k__BackingField, 0, v319, v320);
  if ( !byte_4A4B9AA )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v347);
    byte_4A4B9AA = 1;
  }
  v350 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v350 = TerminalPramsManager_TypeInfo;
  }
  v351 = v350->static_fields;
  v351->_oldPersonalBoss_k__BackingField = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v351->_oldPersonalBoss_k__BackingField, 0, v348, v349);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    byte_4A48E97 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_1197;
  WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, result->m_Items[19]->fields.eventId, 0LL);
  result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !result )
    goto LABEL_1197;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)result, WarID_ByQuestID, 0LL);
  if ( WarEntityByWarID )
    v355 = WarEntityByWarID->fields.eventId;
  else
    v355 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !result )
    goto LABEL_1197;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v519,
                                                       v355,
                                                       (const MethodInfo_32142CC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( v510 )
    goto LABEL_1202;
  if ( !*p_max_length )
    goto LABEL_1198;
  result = *m_Items;
  if ( !*m_Items )
    goto LABEL_1197;
  result = (BattleResultComponent_resultData_array *)BattleResultComponent_resultData__checkResultDispFlag(
                                                       (BattleResultComponent_resultData_o *)result,
                                                       256,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
LABEL_1202:
    v358 = *(_QWORD *)p_max_length;
    if ( !(unsigned int)*(_QWORD *)p_max_length )
      goto LABEL_1198;
    if ( !*m_Items )
      goto LABEL_1197;
    if ( (*m_Items)->m_Items[41] )
    {
      result = (BattleResultComponent_resultData_array *)v519;
      if ( v519
        && (result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsPersonalBoss(
                                                                 (EventDetailEntity_o *)v519,
                                                                 0LL),
            v358 = *(_QWORD *)p_max_length,
            ((unsigned __int8)result & 1) != 0) )
      {
        if ( !(_DWORD)v358 )
          goto LABEL_1198;
        if ( !*m_Items )
          goto LABEL_1197;
        v359 = (*m_Items)->m_Items[41];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A4B9AA )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
          byte_4A4B9AA = 1;
        }
        v360 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v360 = TerminalPramsManager_TypeInfo;
        }
        v361 = v360->static_fields;
        v361->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v359;
        p_oldPersonalBoss_k__BackingField = (CGThumbnailListItem_o *)&v361->_oldPersonalBoss_k__BackingField;
      }
      else
      {
        if ( !(_DWORD)v358 )
          goto LABEL_1198;
        if ( !*m_Items )
          goto LABEL_1197;
        v359 = (*m_Items)->m_Items[41];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A4B9A9 )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
          byte_4A4B9A9 = 1;
        }
        v363 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v363 = TerminalPramsManager_TypeInfo;
        }
        v364 = v363->static_fields;
        v364->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v359;
        p_oldPersonalBoss_k__BackingField = (CGThumbnailListItem_o *)&v364->_oldSuperBoss_k__BackingField;
      }
      sub_1B8635C(p_oldPersonalBoss_k__BackingField, (int32_t)v359, v356, v357);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B9AB )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    byte_4A4B9AB = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !result->m_Items[19]->fields.eventTowerReward )
    goto LABEL_1203;
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4A4B9AB )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    byte_4A4B9AB = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  eventTowerReward = result->m_Items[19]->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_1197;
  if ( *(_QWORD *)&eventTowerReward->max_length )
  {
    v366 = 1;
  }
  else
  {
LABEL_1203:
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_4A48E97 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A48E97 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v367 = BalanceConfig_TypeInfo;
    v368 = result->m_Items[19]->fields.eventId;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v367 = BalanceConfig_TypeInfo;
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v366 = v368 == v367->static_fields->OrtFirstQuestId;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4A4B59D )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    byte_4A4B59D = 1;
  }
  v369 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v369 = TerminalPramsManager_TypeInfo;
  }
  v369->static_fields->_isIncomingCall_k__BackingField = v366;
  if ( v519 && EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)v519, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A48E97 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v370);
      byte_4A48E97 = 1;
    }
    v371 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v371 = TerminalPramsManager_TypeInfo;
    }
    v372 = BalanceConfig_TypeInfo;
    v373 = v371->static_fields->_QuestId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v372 = BalanceConfig_TypeInfo;
    }
    if ( v373 == v372->static_fields->OrtLateQuestId )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A48E96 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v370);
        byte_4A48E96 = 1;
      }
      v374 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v374 = TerminalPramsManager_TypeInfo;
      }
      v375 = BalanceConfig_TypeInfo;
      v376 = v374->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v375 = BalanceConfig_TypeInfo;
      }
      if ( v376 + 1 == v375->static_fields->OrtLatePhaseBreak )
        goto LABEL_1204;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A48E96 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v370);
        byte_4A48E96 = 1;
      }
      v377 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v377 = TerminalPramsManager_TypeInfo;
      }
      v378 = BalanceConfig_TypeInfo;
      v379 = v377->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v378 = BalanceConfig_TypeInfo;
      }
      if ( v379 + 1 == v378->static_fields->OrtLatePhaseDead )
      {
LABEL_1204:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v380 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserSuperBossMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4A48C25 )
        {
          sub_1B863B8(&NetworkManager_TypeInfo, isWin);
          byte_4A48C25 = 1;
        }
        result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        }
        v381 = result->m_Items[19]->fields.myDeck;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v380 )
          goto LABEL_1197;
        if ( UserSuperBossMaster__TryGetEntity(
               (UserSuperBossMaster_o *)v380,
               &v518,
               (int64_t)v381,
               v355,
               BalanceConfig_TypeInfo->static_fields->OrtThirdFormId,
               0LL) )
        {
          result = (BattleResultComponent_resultData_array *)sub_1B86460(UserSuperBossEntity___TypeInfo, 1LL);
          if ( !result )
            goto LABEL_1197;
          v384 = v518;
          v385 = result;
          if ( v518 )
          {
            result = (BattleResultComponent_resultData_array *)sub_1B864F4(v518, result->obj.klass->_1.element_class);
            if ( !result )
            {
LABEL_1199:
              v508 = sub_1B86638();
              sub_1B864E0(v508, 0LL);
            }
          }
          if ( !v385->max_length )
            goto LABEL_1198;
          v385->m_Items[0] = (BattleResultComponent_resultData_o *)v384;
          sub_1B8635C((CGThumbnailListItem_o *)v385->m_Items, (int32_t)v384, v382, v383);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A4B9AA )
          {
            sub_1B863B8(&TerminalPramsManager_TypeInfo, v386);
            byte_4A4B9AA = 1;
          }
          v389 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v389 = TerminalPramsManager_TypeInfo;
          }
          v390 = v389->static_fields;
          v390->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v385;
          sub_1B8635C((CGThumbnailListItem_o *)&v390->_oldPersonalBoss_k__BackingField, (int32_t)v385, v387, v388);
        }
      }
    }
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  TalkResumeInfo = ScriptManager__GetTalkResumeInfo(0LL);
  if ( TalkResumeInfo )
  {
    v392 = TalkResumeInfo;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1197;
    v393 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A48E97 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A48E97 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v393 )
      goto LABEL_1197;
    ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)v393, result->m_Items[19]->fields.eventId, 0LL);
    v396 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !byte_4A48E96 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v395);
      byte_4A48E96 = 1;
    }
    v397 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v397 = TerminalPramsManager_TypeInfo;
    }
    v398 = v397->static_fields->_PhaseCnt_k__BackingField;
    winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v392, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd2(
                                                         ScriptQuestId,
                                                         v398 + 1,
                                                         winResult,
                                                         0LL);
    if ( !v396 )
      goto LABEL_1197;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v396, (System_String_o *)result, 0LL) )
      goto LABEL_1018;
    v403 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A48E96 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v402);
      byte_4A48E96 = 1;
    }
    v404 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v404 = TerminalPramsManager_TypeInfo;
    }
    v405 = v404->static_fields->_PhaseCnt_k__BackingField;
    v406 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v392, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd(
                                                         ScriptQuestId,
                                                         v405 + 1,
                                                         v406,
                                                         0LL);
    if ( !v403 )
      goto LABEL_1197;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v403, (System_String_o *)result, 0LL) )
    {
LABEL_1018:
      v407 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v407 = TerminalPramsManager_TypeInfo;
      }
      v408 = (int)StringLiteral_1/*""*/;
      p_lastPlayBgmName = (CGThumbnailListItem_o *)&v407->static_fields->lastPlayBgmName;
      p_lastPlayBgmName->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
      sub_1B8635C(p_lastPlayBgmName, v408, v400, v401);
      TerminalPramsManager__LastPlayBgmNameSave_SaveData(v410);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1197;
  v411 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    byte_4A48E97 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v412 = result->m_Items[19]->fields.eventId;
  if ( !byte_4A48E96 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4A48E96 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v411 )
    goto LABEL_1197;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)v411,
    &v527,
    v412,
    LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
    0LL);
  if ( !byte_4A4B9AC )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    byte_4A4B9AC = 1;
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
    if ( !byte_4A4B9AC )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A4B9AC = 1;
    }
    v415 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v415 = TerminalPramsManager_TypeInfo;
    }
    result = (BattleResultComponent_resultData_array *)v415->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
    if ( !result )
      goto LABEL_1197;
    *(_QWORD *)&result->max_length = 0LL;
    v416 = &result->max_length;
    *((_QWORD *)v416 - 1) = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)v416, 0, v413, v414);
  }
  if ( !*p_max_length )
    goto LABEL_1198;
  if ( !*m_Items )
    goto LABEL_1197;
  v417 = HIDWORD((*m_Items)->bounds);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    byte_4A48E97 = 1;
  }
  v418 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v418 = TerminalPramsManager_TypeInfo;
  }
  v419 = v418->static_fields->_QuestId_k__BackingField;
  if ( !byte_4A48E96 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    v418 = TerminalPramsManager_TypeInfo;
    byte_4A48E96 = 1;
  }
  if ( !v418->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v418);
    v418 = TerminalPramsManager_TypeInfo;
  }
  SpecifiedSceneInfo = QuestPhaseMaster__GetSpecifiedSceneInfo(
                         (QuestPhaseMaster_o *)v411,
                         v417,
                         v419,
                         v418->static_fields->_PhaseCnt_k__BackingField + 1,
                         0LL);
  if ( !byte_4A4B98D )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v420);
    byte_4A4B98D = 1;
  }
  v424 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v424 = TerminalPramsManager_TypeInfo;
  }
  v425 = v424->static_fields;
  v425->_SpecifiedChangeSceneInfo_k__BackingField = SpecifiedSceneInfo;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&v425->_SpecifiedChangeSceneInfo_k__BackingField,
    (int32_t)SpecifiedSceneInfo,
    v421,
    v422);
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId = 0LL;
  TerminalPramsManager__InitTipsArchiveScrollValueList(v426);
  if ( !*p_max_length )
    goto LABEL_1198;
  if ( !*m_Items )
    goto LABEL_1197;
  v429 = (int32_t)(*m_Items)->m_Items[52];
  v430 = TerminalPramsManager_TypeInfo;
  if ( v429 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B57C )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A4B57C = 1;
    }
    v430 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v430 = TerminalPramsManager_TypeInfo;
    }
    v430->static_fields->_EventMuralId_k__BackingField = v429;
  }
  if ( !v430->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v430);
    v430 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = (CGThumbnailListItem_o *)&v430->static_fields->eventHarvestGrowthInfo;
  p_eventHarvestGrowthInfo->klass = 0LL;
  sub_1B8635C(p_eventHarvestGrowthInfo, 0, v427, v428);
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v432);
    byte_4A48E97 = 1;
  }
  v433 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v433 = TerminalPramsManager_TypeInfo;
  }
  result = (BattleResultComponent_resultData_array *)QuestPhaseMaster__GetEntity(
                                                       (QuestPhaseMaster_o *)v411,
                                                       v433->static_fields->_QuestId_k__BackingField,
                                                       1,
                                                       0LL);
  if ( !result )
    goto LABEL_1197;
  v434 = result;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(
                     (QuestPhaseEntity_o *)result,
                     (System_String_o *)StringLiteral_19670/*"harvestGrowthBeforeQuestId"*/,
                     -1,
                     0LL);
  v436 = QuestPhaseEntity__getScriptIntParam(
           (QuestPhaseEntity_o *)v434,
           (System_String_o *)StringLiteral_19669/*"harvestGrowthAfterQuestId"*/,
           -1,
           0LL);
  if ( ScriptIntParam >= 1 )
  {
    v437 = v436;
    if ( v436 >= 1 )
    {
      v438 = sub_1B86604(EventHarvestGrowthInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v438, 0LL);
      if ( !v438 )
        goto LABEL_1197;
      bounds = v434->bounds;
      *(_DWORD *)(v438 + 24) = ScriptIntParam;
      *(_DWORD *)(v438 + 28) = v437;
      *(_QWORD *)(v438 + 16) = bounds;
      v442 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v442 = TerminalPramsManager_TypeInfo;
      }
      v443 = (CGThumbnailListItem_o *)&v442->static_fields->eventHarvestGrowthInfo;
      v443->klass = (CGThumbnailListItem_c *)v438;
      sub_1B8635C(v443, v438, v439, v440);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1197;
  v444 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
    byte_4A48E97 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v444 )
    goto LABEL_1197;
  QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)v444, result->m_Items[19]->fields.eventId, 0LL);
  if ( QuestEntity )
  {
    v448 = QuestEntity;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A48E97 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A48E97 = 1;
    }
    v449 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v449 = TerminalPramsManager_TypeInfo;
    }
    if ( QuestPhaseMaster__IsAreaImproveQuest(
           (QuestPhaseMaster_o *)v411,
           v449->static_fields->_QuestId_k__BackingField,
           0LL) )
    {
      SpotId = QuestEntity__getSpotId(v448, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
      if ( !*p_max_length )
        goto LABEL_1198;
      if ( !*m_Items || !result )
        goto LABEL_1197;
      CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                             (UserEventCooltimeRewardMaster_o *)result,
                             HIDWORD((*m_Items)->bounds),
                             SpotId,
                             0LL);
      if ( CurrentLevelEntity )
      {
        v452 = CurrentLevelEntity;
        v453 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v453 = TerminalPramsManager_TypeInfo;
        }
        eventAreaImproveResultInfo = v453->static_fields->eventAreaImproveResultInfo;
        if ( eventAreaImproveResultInfo )
        {
          if ( !v453->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v453);
            eventAreaImproveResultInfo = TerminalPramsManager_TypeInfo->static_fields->eventAreaImproveResultInfo;
            if ( !eventAreaImproveResultInfo )
              goto LABEL_1197;
          }
          eventAreaImproveResultInfo->fields.afterLevel = v452->fields.lv;
        }
      }
    }
  }
  result = (BattleResultComponent_resultData_array *)v527;
  if ( v527 )
  {
    result = (BattleResultComponent_resultData_array *)QuestPhaseEntity__GetMoveSceneInfo(v527, 0LL);
    if ( !result )
      goto LABEL_1197;
    if ( *(_QWORD *)&result->max_length )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A48E97 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
        byte_4A48E97 = 1;
      }
      v455 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v455 = TerminalPramsManager_TypeInfo;
      }
      v526 = v455->static_fields->_QuestId_k__BackingField;
      v457 = System_Int32__ToString((int32_t)&v526, 0LL);
      if ( !byte_4A48E96 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v456);
        byte_4A48E96 = 1;
      }
      v458 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v458 = TerminalPramsManager_TypeInfo;
      }
      v526 = v458->static_fields->_PhaseCnt_k__BackingField + 1;
      v459 = System_Int32__ToString((int32_t)&v526, 0LL);
      v463 = System_String__Concat_61683424(v457, (System_String_o *)StringLiteral_817/*","*/, v459, 0LL);
      if ( !byte_4A4B6AE )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v460);
        byte_4A4B6AE = 1;
      }
      v464 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v464 = TerminalPramsManager_TypeInfo;
      }
      p_SceneMoveQuestClearedInfo_k__BackingField = (CGThumbnailListItem_o *)&v464->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
      p_SceneMoveQuestClearedInfo_k__BackingField->klass = (CGThumbnailListItem_c *)v463;
      sub_1B8635C(p_SceneMoveQuestClearedInfo_k__BackingField, (int32_t)v463, v461, v462);
    }
  }
  if ( !*p_max_length )
    goto LABEL_1198;
  if ( !*m_Items )
    goto LABEL_1197;
  v466 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[47];
  if ( v466 && v466->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B585 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, isWin);
      byte_4A4B585 = 1;
    }
    v467 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v467 = TerminalPramsManager_TypeInfo;
    }
    p_limitImageAnnounces_k__BackingField = (CGThumbnailListItem_o *)&v467->static_fields->_limitImageAnnounces_k__BackingField;
    p_limitImageAnnounces_k__BackingField->klass = v466;
    sub_1B8635C(p_limitImageAnnounces_k__BackingField, (int32_t)v466, v446, v447);
  }
  v470 = sub_1B86460(string___TypeInfo, 7LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v469);
    byte_4A48E97 = 1;
  }
  v471 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v471 = TerminalPramsManager_TypeInfo;
  }
  v526 = v471->static_fields->_QuestId_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v526, 0LL);
  if ( !v470 )
LABEL_1197:
    sub_1B86614(result, isWin);
  if ( !*(_DWORD *)(v470 + 24) )
    goto LABEL_1198;
  *(_QWORD *)(v470 + 32) = result;
  sub_1B8635C((CGThumbnailListItem_o *)(v470 + 32), (int32_t)result, v472, v473);
  if ( *(_DWORD *)(v470 + 24) <= 1u )
    goto LABEL_1198;
  v476 = (int)StringLiteral_817/*","*/;
  *(_QWORD *)(v470 + 40) = StringLiteral_817/*","*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v470 + 40), v476, v474, v475);
  if ( !byte_4A48E96 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v477);
    byte_4A48E96 = 1;
  }
  v478 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v478 = TerminalPramsManager_TypeInfo;
  }
  v526 = v478->static_fields->_PhaseCnt_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v526, 0LL);
  if ( *(_DWORD *)(v470 + 24) <= 2u )
    goto LABEL_1198;
  *(_QWORD *)(v470 + 48) = result;
  sub_1B8635C((CGThumbnailListItem_o *)(v470 + 48), (int32_t)result, v479, v480);
  if ( *(_DWORD *)(v470 + 24) <= 3u )
    goto LABEL_1198;
  v483 = (int)StringLiteral_817/*","*/;
  *(_QWORD *)(v470 + 56) = StringLiteral_817/*","*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v470 + 56), v483, v481, v482);
  if ( !byte_4A4B11F )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v484);
    byte_4A4B11F = 1;
  }
  v485 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v485 = TerminalPramsManager_TypeInfo;
  }
  v517[0] = v485->static_fields->_IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v517, 0LL);
  if ( *(_DWORD *)(v470 + 24) <= 4u )
    goto LABEL_1198;
  *(_QWORD *)(v470 + 64) = result;
  sub_1B8635C((CGThumbnailListItem_o *)(v470 + 64), (int32_t)result, v486, v487);
  if ( *(_DWORD *)(v470 + 24) <= 5u )
    goto LABEL_1198;
  v490 = (int)StringLiteral_817/*","*/;
  *(_QWORD *)(v470 + 72) = StringLiteral_817/*","*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v470 + 72), v490, v488, v489);
  if ( !byte_4A4B11C )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v491);
    byte_4A4B11C = 1;
  }
  v492 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v492 = TerminalPramsManager_TypeInfo;
  }
  v517[0] = v492->static_fields->_IsPhaseClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v517, 0LL);
  if ( *(_DWORD *)(v470 + 24) <= 6u )
    goto LABEL_1198;
  *(_QWORD *)(v470 + 80) = result;
  sub_1B8635C((CGThumbnailListItem_o *)(v470 + 80), (int32_t)result, v493, v494);
  v495 = System_String__Concat_61685692((System_String_array *)v470, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_16474/*"afterActionBk"*/, v495, 0LL);
  TerminalPramsManager__SaveClearDatas(resulta, v496);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v497);
  TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(v498);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v499);
  TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(v500);
  TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(v501);
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v502);
    byte_4A48E97 = 1;
  }
  v503 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v503 = TerminalPramsManager_TypeInfo;
  }
  v504 = v503->static_fields->_QuestId_k__BackingField;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__SetClearQuestWarEnableMyRoomBgChange(v504, 0LL);
  if ( TerminalPramsManager__IsTerminalEffectNT2BoardOpen(v505) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4AE80 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v506);
      byte_4A4AE80 = 1;
    }
    v507 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v507 = TerminalPramsManager_TypeInfo;
    }
    v507->static_fields->_WarId_k__BackingField = 0;
    if ( !byte_4A4907E )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v506);
      v507 = TerminalPramsManager_TypeInfo;
      byte_4A4907E = 1;
    }
    if ( !v507->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v507);
      v507 = TerminalPramsManager_TypeInfo;
    }
    v507->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4A4B56F )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v506);
      v507 = TerminalPramsManager_TypeInfo;
      byte_4A4B56F = 1;
    }
    if ( !v507->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v507);
      v507 = TerminalPramsManager_TypeInfo;
    }
    v507->static_fields->_IsMapReturnFolder_k__BackingField = 0;
    if ( !byte_4A4B6A1 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v506);
      v507 = TerminalPramsManager_TypeInfo;
      byte_4A4B6A1 = 1;
    }
    if ( !v507->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v507);
      v507 = TerminalPramsManager_TypeInfo;
    }
    v507->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData((const MethodInfo *)v507);
  }
}


void __fastcall TerminalPramsManager__ResetBlankEarthSpotInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  const MethodInfo *v2; // x0

  if ( (byte_4A4B91B & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B91B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4ADC8 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4ADC8 = 1;
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
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v4; // x0
  CGThumbnailListItem_o *p_TalkScriptInfo_k__BackingField; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4A4B925 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B925 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B97F )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B97F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_QuestMessageScriptQuestId_k__BackingField = -1;
  if ( !byte_4A4B980 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4A4B980 = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = -1;
  if ( !byte_4A4B796 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4A4B796 = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  p_TalkScriptInfo_k__BackingField = (CGThumbnailListItem_o *)&v4->static_fields->_TalkScriptInfo_k__BackingField;
  p_TalkScriptInfo_k__BackingField->klass = 0LL;
  sub_1B8635C(p_TalkScriptInfo_k__BackingField, 0, v2, v3);
  if ( !byte_4A4B981 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v6);
    byte_4A4B981 = 1;
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

  if ( (byte_4A4B96A & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_ClearData_TypeInfo, method);
    sub_1B863B8(&JsonManager_TypeInfo, v3);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v4);
    byte_4A4B96A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v5->static_fields->mQuestRewardInfos;
  if ( !byte_4A48E99 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4A48E99 = 1;
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
      sub_1B8661C(v5, method);
    v8 = result->m_Items[0];
    if ( !v8 )
      sub_1B86614(0LL, method);
    if ( BattleResultComponent_resultData__checkResultDispFlag(v8, 2048, 0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A48E97 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
        byte_4A48E97 = 1;
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
  if ( !byte_4A4B11F )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4B11F = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  IsQuestClear_k__BackingField = v10->static_fields->_IsQuestClear_k__BackingField;
  if ( !byte_4A4B11C )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4B11C = 1;
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
  if ( !byte_4A4B9AD )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4B9AD = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  oldSuperBoss = v10->static_fields->_oldSuperBoss_k__BackingField;
  if ( !byte_4A4B9AB )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4B9AB = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss = v10->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !byte_4A4B9AE )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4B9AE = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventPointWinReward_k__BackingField = v10->static_fields->_eventPointWinReward_k__BackingField;
  if ( !byte_4A4B9A5 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4B9A5 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evpWinType = v10->static_fields->_eventPointWinType_k__BackingField;
  if ( !byte_4A4B696 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4B696 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evRace = v10->static_fields->_eventRaceBoost_k__BackingField;
  if ( !byte_4A4B583 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4B583 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeRelease = v10->static_fields->_questClearCostumeRelease_k__BackingField;
  if ( !byte_4A4B579 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4B579 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeGet_k__BackingField = v10->static_fields->_questClearCostumeGet_k__BackingField;
  if ( !byte_4A4B57F )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4B57F = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evTowerReward = v10->static_fields->_eventTowerReward_k__BackingField;
  if ( !byte_4A4B9AF )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4B9AF = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v10->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  if ( !byte_4A4A0ED )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4A0ED = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  IsDispOnly_k__BackingField = v10->static_fields->_IsDispOnly_k__BackingField;
  if ( !byte_4A4B58B )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4B58B = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  warClearRewardIn = v10->static_fields->_warClearReward_k__BackingField;
  if ( !byte_4A4B9B0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4B9B0 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventActivityPointEffectState = v10->static_fields->_EventActivityPointEffectState_k__BackingField;
  if ( !byte_4A4B57A )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4B57A = 1;
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
  if ( !byte_4A4B584 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4B584 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  limitImageAnnounces = v10->static_fields->_limitImageAnnounces_k__BackingField;
  if ( !byte_4A4ADC7 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4ADC7 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  IsOrdealCallWarClear_k__BackingField = v10->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4A4B57B )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4B57B = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventMuralId = v10->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_4A4B6A4 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A4B6A4 = 1;
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
  v25 = (TerminalPramsManager_ClearData_o *)sub_1B86604(TerminalPramsManager_ClearData_TypeInfo);
  TerminalPramsManager_ClearData___ctor_35514388(
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
  if ( !byte_4A4B9B1 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v26);
    byte_4A4B9B1 = 1;
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

  if ( (byte_4A4B970 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11259/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v2);
    byte_4A4B970 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B9B3 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B9B3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EventRaidDefeatedEffectInfo_k__BackingField = v3->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  if ( !EventRaidDefeatedEffectInfo_k__BackingField )
    sub_1B86614(0LL, v1);
  v5 = EventRaidDefeatedEffectInfo__ConvertToStringData(EventRaidDefeatedEffectInfo_k__BackingField, v1);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11259/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v5, 0LL);
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

  if ( (byte_4A4B932 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_13478/*"TerminalPhaseCnt"*/, v2);
    sub_1B863B8(&StringLiteral_13481/*"TerminalQuestId"*/, v3);
    byte_4A4B932 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A48E97 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13481/*"TerminalQuestId"*/,
    v4->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4A48E96 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v5);
    byte_4A48E96 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13478/*"TerminalPhaseCnt"*/,
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

  if ( (byte_4A4B974 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v1);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v2);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v4);
    sub_1B863B8(&int_TypeInfo, v5);
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v7);
    sub_1B863B8(&string_TypeInfo, v8);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_11268/*"SAVEKEY_QuestRandomGroupList"*/, v10);
    sub_1B863B8(&StringLiteral_24907/*"{0}:{1}"*/, v11);
    sub_1B863B8(&StringLiteral_817/*","*/, v12);
    byte_4A4B974 = 1;
  }
  memset(&v29, 0, 32);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4AE76 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4AE76 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestRandomGroupList_k__BackingField = v14->static_fields->_QuestRandomGroupList_k__BackingField;
  if ( !QuestRandomGroupList_k__BackingField )
    sub_1B86614(0LL, v1);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v28,
    QuestRandomGroupList_k__BackingField,
    (const MethodInfo_3264E14 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v29.fields._dictionary = v28[0];
  v29.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v28[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v29,
            (const MethodInfo_33BA4AC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int)v29.fields._current.fields.key;
    key_high = HIDWORD(v29.fields._current.fields.key);
    if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
      Empty = System_String__Concat_61645176(Empty, (System_String_o *)StringLiteral_817/*","*/, 0LL);
    LODWORD(v28[0]) = key;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v28, v18, v19, v20);
    v27 = key_high;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v22, v23, v24);
    v26 = System_String__Format_61686468((System_String_o *)StringLiteral_24907/*"{0}:{1}"*/, v21, v25, 0LL);
    Empty = System_String__Concat_61645176(Empty, v26, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v29,
    (const MethodInfo_33BA5AC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11268/*"SAVEKEY_QuestRandomGroupList"*/, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestReleasedFocusState(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v4; // x1

  if ( (byte_4A4B95D & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B95D = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v2);
  if ( !QuestFocusStateManager )
    sub_1B86614(0LL, v4);
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

  if ( (byte_4A4B930 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_13471/*"TerminalEndTime"*/, v2);
    sub_1B863B8(&StringLiteral_11266/*"SAVEKEY_PlayedTerminalEffects"*/, v3);
    sub_1B863B8(&StringLiteral_13467/*"TerminalBeforeEventActivityPoint"*/, v4);
    sub_1B863B8(&StringLiteral_13472/*"TerminalEventDailyPointEventId"*/, v5);
    sub_1B863B8(&StringLiteral_13478/*"TerminalPhaseCnt"*/, v6);
    sub_1B863B8(&StringLiteral_13486/*"TerminalTimeStatusEventId"*/, v7);
    sub_1B863B8(&StringLiteral_13470/*"TerminalDispState"*/, v8);
    sub_1B863B8(&StringLiteral_11263/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v9);
    sub_1B863B8(&StringLiteral_13473/*"TerminalIsDoneShortcut"*/, v10);
    sub_1B863B8(&StringLiteral_11262/*"SAVEKEY_MapModelClearQuestInfo"*/, v11);
    sub_1B863B8(&StringLiteral_11267/*"SAVEKEY_PlayerGenderType"*/, v12);
    sub_1B863B8(&StringLiteral_11255/*"SAVEKEY_ClearEventQuestIds"*/, v13);
    sub_1B863B8(&StringLiteral_11264/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v14);
    sub_1B863B8(&StringLiteral_13481/*"TerminalQuestId"*/, v15);
    sub_1B863B8(&StringLiteral_11275/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v16);
    sub_1B863B8(&StringLiteral_13485/*"TerminalTimeStatusEventDailyPoint"*/, v17);
    sub_1B863B8(&StringLiteral_13490/*"TerminalWarId"*/, v18);
    sub_1B863B8(&StringLiteral_13483/*"TerminalSpotId"*/, v19);
    sub_1B863B8(&StringLiteral_13487/*"TerminalTimeStatusLoopCount"*/, v20);
    sub_1B863B8(&StringLiteral_13468/*"TerminalBeforeEventActivityPointGauge"*/, v21);
    sub_1B863B8(&StringLiteral_11253/*"SAVEKEY_BlankEarthSpotId"*/, v22);
    sub_1B863B8(&StringLiteral_11258/*"SAVEKEY_DataLostBattleAutoReset"*/, v23);
    sub_1B863B8(&StringLiteral_13491/*"TerminalWarStartedIds"*/, v24);
    sub_1B863B8(&StringLiteral_11257/*"SAVEKEY_ConnectMarkEventId"*/, v25);
    sub_1B863B8(&StringLiteral_817/*","*/, v26);
    sub_1B863B8(&StringLiteral_11256/*"SAVEKEY_ConnectMarkAnimationId"*/, v27);
    sub_1B863B8(&StringLiteral_11265/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v28);
    sub_1B863B8(&StringLiteral_11274/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v29);
    byte_4A4B930 = 1;
  }
  EndTime_k__BackingField = 0LL;
  MapModelClearQuestId_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B073 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B073 = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13470/*"TerminalDispState"*/,
    v30->static_fields->_DispState_k__BackingField,
    0LL);
  if ( !byte_4A4AE79 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v31);
    byte_4A4AE79 = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13490/*"TerminalWarId"*/,
    v32->static_fields->_WarId_k__BackingField,
    0LL);
  if ( !byte_4A4B077 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v33);
    byte_4A4B077 = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13483/*"TerminalSpotId"*/,
    v34->static_fields->_SpotId_k__BackingField,
    0LL);
  if ( !byte_4A4ADC4 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v35);
    byte_4A4ADC4 = 1;
  }
  v36 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v36 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11253/*"SAVEKEY_BlankEarthSpotId"*/,
    v36->static_fields->_BlankEarthSpotId_k__BackingField,
    0LL);
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v37);
    byte_4A48E97 = 1;
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v38 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13481/*"TerminalQuestId"*/,
    v38->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4A48E96 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v39);
    byte_4A48E96 = 1;
  }
  v40 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v40 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13478/*"TerminalPhaseCnt"*/,
    v40->static_fields->_PhaseCnt_k__BackingField,
    0LL);
  if ( !byte_4A4B078 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v41);
    byte_4A4B078 = 1;
  }
  v42 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v42 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v42->static_fields->_EndTime_k__BackingField;
  v43 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13471/*"TerminalEndTime"*/, v43, 0LL);
  if ( !byte_4A4B5A8 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v44);
    byte_4A4B5A8 = 1;
  }
  v45 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v45 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13473/*"TerminalIsDoneShortcut"*/,
    v45->static_fields->_IsDoneShortcut_k__BackingField,
    0LL);
  v46 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v46 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_13491/*"TerminalWarStartedIds"*/,
    v46->static_fields->mTerminalWarStartedIds,
    0LL);
  if ( !byte_4A4B69E )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v47);
    byte_4A4B69E = 1;
  }
  v48 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v48 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13486/*"TerminalTimeStatusEventId"*/,
    v48->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_4A4B69F )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v49);
    byte_4A4B69F = 1;
  }
  v50 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v50 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13487/*"TerminalTimeStatusLoopCount"*/,
    v50->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  if ( !byte_4A4B999 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v51);
    byte_4A4B999 = 1;
  }
  v52 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v52 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13472/*"TerminalEventDailyPointEventId"*/,
    v52->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4A4B99A )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v53);
    byte_4A4B99A = 1;
  }
  v54 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v54 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v54->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v55 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13485/*"TerminalTimeStatusEventDailyPoint"*/, v55, 0LL);
  if ( !byte_4A4B99B )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v56);
    byte_4A4B99B = 1;
  }
  v57 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13467/*"TerminalBeforeEventActivityPoint"*/,
    v57->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_4A4B99C )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v58);
    byte_4A4B99C = 1;
  }
  v59 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v59 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13468/*"TerminalBeforeEventActivityPointGauge"*/,
    v59->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  if ( !byte_4A4B99D )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v60);
    byte_4A4B99D = 1;
  }
  v61 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v61 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11266/*"SAVEKEY_PlayedTerminalEffects"*/,
    v61->static_fields->_PlayedTerminalEffects_k__BackingField,
    0LL);
  if ( !byte_4A4B59A )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v62);
    byte_4A4B59A = 1;
  }
  v63 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v63 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11263/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v63->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B59B )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v64);
    byte_4A4B59B = 1;
  }
  v65 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v65 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11264/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v65->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  if ( !byte_4A4B6A0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v66);
    byte_4A4B6A0 = 1;
  }
  v67 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11265/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v67->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B6A3 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v68);
    byte_4A4B6A3 = 1;
  }
  v69 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v69 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11275/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v69->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11257/*"SAVEKEY_ConnectMarkEventId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11256/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  if ( !byte_4A4B571 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v70);
    byte_4A4B571 = 1;
  }
  v71 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v71 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11274/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v71->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  if ( !byte_4A4AE78 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v72);
    byte_4A4AE78 = 1;
  }
  v73 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v73 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11255/*"SAVEKEY_ClearEventQuestIds"*/,
    v73->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  if ( !byte_4A4B074 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v74);
    byte_4A4B074 = 1;
  }
  v75 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v75 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v75->static_fields->_MapModelClearQuestId_k__BackingField;
  v77 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_4A4B075 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v76);
    byte_4A4B075 = 1;
  }
  v78 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v78 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v78->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v79 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v80 = System_String__Concat_61683424(v77, (System_String_o *)StringLiteral_817/*","*/, v79, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11262/*"SAVEKEY_MapModelClearQuestInfo"*/, v80, 0LL);
  if ( !byte_4A4B6A5 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v81);
    byte_4A4B6A5 = 1;
  }
  v82 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v82 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11258/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v82->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B99E )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v83);
    byte_4A4B99E = 1;
  }
  v84 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v84 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11267/*"SAVEKEY_PlayerGenderType"*/,
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

  if ( (byte_4A4B964 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v5);
    byte_4A4B964 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v6);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1B86614(0LL, v9);
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
  const MethodInfo *v32; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x21
  int32_t klass_high; // w21
  Il2CppObject *MasterData_object; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerable_TSource__o *QuestIdsByTargetAndOpenCondType; // x19
  TerminalPramsManager___c_c *v39; // x8
  System_Func_int__bool__o *_9__717_0; // x21
  Il2CppObject *v41; // x22
  struct TerminalPramsManager___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x19
  System_Func_T__TResult__o *v46; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x19
  System_Func_object__bool__o *v48; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  TerminalPramsManager___c_c *v50; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x19
  System_Func_object__int__o *_9__717_3; // x20
  Il2CppObject *v53; // x21
  struct TerminalPramsManager___c_StaticFields *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v57; // x0
  TerminalPramsManager___c_c *v58; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x19
  System_Func_int__int__o *_9__717_4; // x20
  Il2CppObject *v61; // x21
  struct TerminalPramsManager___c_StaticFields *v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  int32_t v66; // w0
  int32_t v67; // w19
  Il2CppObject *v68; // [xsp+0h] [xbp-40h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A4B965 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_SpotMaster___, v4);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_1B863B8(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v6);
    sub_1B863B8(&Method_System_Linq_Enumerable_FirstOrDefault_int___, v7);
    sub_1B863B8(&Method_System_Linq_Enumerable_OrderByDescending_int__int___, v8);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_int__QuestEntity___, v9);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_QuestEntity__int___, v10);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_int___, v11);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_QuestEntity___, v12);
    sub_1B863B8(&System_Func_int__int__TypeInfo, v13);
    sub_1B863B8(&System_Func_int__bool__TypeInfo, v14);
    sub_1B863B8(&System_Func_QuestEntity__int__TypeInfo, v15);
    sub_1B863B8(&System_Func_QuestEntity__bool__TypeInfo, v16);
    sub_1B863B8(&System_Func_int__QuestEntity__TypeInfo, v17);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v18);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v20);
    sub_1B863B8(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__717_0__, v21);
    sub_1B863B8(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__717_3__, v22);
    sub_1B863B8(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__717_4__, v23);
    sub_1B863B8(&Method_TerminalPramsManager___c__DisplayClass717_0__SendOpenedQuestIdToAdManager_b__1__, v24);
    sub_1B863B8(&Method_TerminalPramsManager___c__DisplayClass717_0__SendOpenedQuestIdToAdManager_b__2__, v25);
    sub_1B863B8(&TerminalPramsManager___c__DisplayClass717_0_TypeInfo, v26);
    sub_1B863B8(&TerminalPramsManager___c_TypeInfo, v27);
    byte_4A4B965 = 1;
  }
  v68 = 0LL;
  entity = 0LL;
  v28 = sub_1B86604(TerminalPramsManager___c__DisplayClass717_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass717_0___ctor((TerminalPramsManager___c__DisplayClass717_0_o *)v28, 0LL);
  if ( clearedQuestId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !v28 )
      goto LABEL_43;
    *(_QWORD *)(v28 + 16) = Instance;
    sub_1B8635C((CGThumbnailListItem_o *)(v28 + 16), (int32_t)Instance, v31, v32);
    Instance = *(DataManager_o **)(v28 + 16);
    if ( !Instance )
      goto LABEL_43;
    if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, clearedQuestId, 0LL) )
      return;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SpotMaster___);
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
                                  (const MethodInfo_32142CC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v28 + 24) = MasterData_object;
      sub_1B8635C((CGThumbnailListItem_o *)(v28 + 24), (int32_t)MasterData_object, v36, v37);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
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
      _9__717_0 = v39->static_fields->__9__717_0;
      if ( !_9__717_0 )
      {
        if ( !v39->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v39);
          v39 = TerminalPramsManager___c_TypeInfo;
        }
        v41 = (Il2CppObject *)v39->static_fields->__9;
        _9__717_0 = (System_Func_int__bool__o *)sub_1B86604(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__717_0,
          v41,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__717_0__,
          0LL);
        static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
        static_fields->__9__717_0 = _9__717_0;
        sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__717_0, (int32_t)_9__717_0, v43, v44);
      }
      v45 = System_Linq_Enumerable__Where_int_(
              QuestIdsByTargetAndOpenCondType,
              (System_Func_TSource__bool__o *)_9__717_0,
              (const MethodInfo_2FAFA3C *)Method_System_Linq_Enumerable_Where_int___);
      v46 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_int__QuestEntity__TypeInfo);
      System_Func_int__object____ctor(
        v46,
        (Il2CppObject *)v28,
        Method_TerminalPramsManager___c__DisplayClass717_0__SendOpenedQuestIdToAdManager_b__1__,
        0LL);
      v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v45,
                                                                   (System_Func_TSource__TResult__o *)v46,
                                                                   (const MethodInfo_2F9EBA0 *)Method_System_Linq_Enumerable_Select_int__QuestEntity___);
      v48 = (System_Func_object__bool__o *)sub_1B86604(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v48,
        (Il2CppObject *)v28,
        Method_TerminalPramsManager___c__DisplayClass717_0__SendOpenedQuestIdToAdManager_b__2__,
        0LL);
      v49 = System_Linq_Enumerable__Where_object_(
              v47,
              (System_Func_TSource__bool__o *)v48,
              (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v50 = TerminalPramsManager___c_TypeInfo;
      v51 = v49;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v50 = TerminalPramsManager___c_TypeInfo;
      }
      _9__717_3 = (System_Func_object__int__o *)v50->static_fields->__9__717_3;
      if ( !_9__717_3 )
      {
        if ( !v50->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v50);
          v50 = TerminalPramsManager___c_TypeInfo;
        }
        v53 = (Il2CppObject *)v50->static_fields->__9;
        _9__717_3 = (System_Func_object__int__o *)sub_1B86604(System_Func_QuestEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__717_3,
          v53,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__717_3__,
          0LL);
        v54 = TerminalPramsManager___c_TypeInfo->static_fields;
        v54->__9__717_3 = (struct System_Func_QuestEntity__int__o *)_9__717_3;
        sub_1B8635C((CGThumbnailListItem_o *)&v54->__9__717_3, (int32_t)_9__717_3, v55, v56);
      }
      v57 = System_Linq_Enumerable__Select_object__int_(
              v51,
              (System_Func_TSource__TResult__o *)_9__717_3,
              (const MethodInfo_2FA0998 *)Method_System_Linq_Enumerable_Select_QuestEntity__int___);
      v58 = TerminalPramsManager___c_TypeInfo;
      v59 = (System_Collections_Generic_IEnumerable_TSource__o *)v57;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v58 = TerminalPramsManager___c_TypeInfo;
      }
      _9__717_4 = v58->static_fields->__9__717_4;
      if ( !_9__717_4 )
      {
        if ( !v58->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v58);
          v58 = TerminalPramsManager___c_TypeInfo;
        }
        v61 = (Il2CppObject *)v58->static_fields->__9;
        _9__717_4 = (System_Func_int__int__o *)sub_1B86604(System_Func_int__int__TypeInfo);
        System_Func_int__int____ctor(
          _9__717_4,
          v61,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__717_4__,
          0LL);
        v62 = TerminalPramsManager___c_TypeInfo->static_fields;
        v62->__9__717_4 = _9__717_4;
        sub_1B8635C((CGThumbnailListItem_o *)&v62->__9__717_4, (int32_t)_9__717_4, v63, v64);
      }
      v65 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_int__int_(
                                                                   v59,
                                                                   (System_Func_TSource__TKey__o *)_9__717_4,
                                                                   (const MethodInfo_2F9B014 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
      v66 = System_Linq_Enumerable__FirstOrDefault_int_(
              v65,
              (const MethodInfo_2F933D8 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      if ( v66 )
      {
        v67 = v66;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetOpenedStoryQuest((AdManager_o *)Instance, v67, 0LL);
          return;
        }
LABEL_43:
        sub_1B86614(Instance, v30);
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

  if ( (byte_4A4B963 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v5);
    byte_4A4B963 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v6);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1B86614(0LL, v9);
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

  if ( (byte_4A4B922 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    sub_1B863B8(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v4);
    sub_1B863B8(&Method_System_Nullable_int__GetValueOrDefault__, v5);
    sub_1B863B8(&Method_System_Nullable_int___ctor__, v6);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v9);
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v10);
    byte_4A4B922 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B121 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B121 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    QuestInfo = QuestTree__GetQuestInfo(Instance, questId, 0LL);
    if ( !QuestInfo )
      return;
    v16 = QuestInfo;
    warId = QuestInfo->fields.warId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4AE80 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v15);
      byte_4A4AE80 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    Instance = (QuestTree_o *)MapControl_QuestInfo__GetSpotID(v16, 0LL);
    if ( !Master_object )
      goto LABEL_148;
    v20 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            (int32_t)Instance,
            (const MethodInfo_32142CC *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    LODWORD(Master_object) = MapControl_QuestInfo__GetSpotID(v16, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v20 )
    {
      if ( byte_4A4ADC8 )
        goto LABEL_38;
    }
    else
    {
      if ( !byte_4A4AE7F )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v21);
        byte_4A4AE7F = 1;
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
          (const MethodInfo_371C418 *)Method_System_Nullable_int___ctor__);
        v26 = v48;
      }
      else
      {
        v26 = 0LL;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (Il2CppObject *)HIDWORD(v26);
      if ( byte_4A4ADC8 )
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
        if ( !byte_4A4AE7A )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, v21);
          byte_4A4AE7A = 1;
        }
        v29 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_QuestId_k__BackingField = v28;
        questPhase = v16->fields.questPhase;
        if ( !byte_4A4AE7E )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, v21);
          v29 = TerminalPramsManager_TypeInfo;
          byte_4A4AE7E = 1;
        }
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_PhaseCnt_k__BackingField = questPhase;
        endTime = v16->fields.endTime;
        if ( !byte_4A4AE7B )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, v21);
          v29 = TerminalPramsManager_TypeInfo;
          byte_4A4AE7B = 1;
        }
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_EndTime_k__BackingField = endTime;
        if ( !byte_4A4B5A7 )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, v21);
          v29 = TerminalPramsManager_TypeInfo;
          byte_4A4B5A7 = 1;
        }
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 1;
        if ( !SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
          goto LABEL_151;
        v33 = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A4AE79 )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, v13);
          byte_4A4AE79 = 1;
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
            if ( !byte_4A4AE7C )
            {
              sub_1B863B8(&TerminalPramsManager_TypeInfo, v32);
              byte_4A4AE7C = 1;
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
            if ( !byte_4A4AE7C )
            {
              sub_1B863B8(&TerminalPramsManager_TypeInfo, v32);
              byte_4A4AE7C = 1;
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
          if ( !byte_4A4AE7C )
          {
            sub_1B863B8(&TerminalPramsManager_TypeInfo, v32);
            byte_4A4AE7C = 1;
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
        if ( !byte_4A48DB8 )
        {
          sub_1B863B8(&TerminalSceneComponent_TypeInfo, v32);
          byte_4A48DB8 = 1;
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
        if ( !byte_4A48DB8 )
        {
          sub_1B863B8(&TerminalSceneComponent_TypeInfo, v13);
          byte_4A48DB8 = 1;
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
            if ( !byte_4A48DB8 )
            {
              sub_1B863B8(&TerminalSceneComponent_TypeInfo, v13);
              byte_4A48DB8 = 1;
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
            if ( !byte_4A4AE79 )
            {
              sub_1B863B8(&TerminalPramsManager_TypeInfo, v13);
              byte_4A4AE79 = 1;
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
          if ( !byte_4A48DB8 )
          {
            sub_1B863B8(&TerminalSceneComponent_TypeInfo, v13);
            byte_4A48DB8 = 1;
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
            if ( !byte_4A48DB8 )
            {
              sub_1B863B8(&TerminalSceneComponent_TypeInfo, v13);
              byte_4A48DB8 = 1;
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
                if ( !byte_4A4907E )
                {
                  sub_1B863B8(&TerminalPramsManager_TypeInfo, v13);
                  byte_4A4907E = 1;
                }
                v47 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v47 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                }
                *((_BYTE *)v47[2].virtualMethodPointer + 725) = 1;
                TerminalPramsManager__Save_SaveData(v47);
                return;
              }
            }
          }
        }
LABEL_148:
        sub_1B86614(Instance, v13);
      }
    }
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v21);
    byte_4A4ADC8 = 1;
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

  if ( (byte_4A4B923 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    sub_1B863B8(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v4);
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v5);
    byte_4A4B923 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B121 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B121 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4A4AE80 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4A4AE80 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_WarId_k__BackingField = warId;
  if ( !SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
    goto LABEL_112;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4AE79 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v8);
    byte_4A4AE79 = 1;
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
      if ( !byte_4A4AE7C )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v7);
        byte_4A4AE7C = 1;
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
      if ( !byte_4A4AE7C )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v7);
        byte_4A4AE7C = 1;
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
    if ( !byte_4A4AE7C )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v7);
      byte_4A4AE7C = 1;
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
  if ( !byte_4A4ADC8 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v7);
    byte_4A4ADC8 = 1;
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
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v7);
    byte_4A48DB8 = 1;
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
    if ( !byte_4A48DB8 )
    {
      sub_1B863B8(&TerminalSceneComponent_TypeInfo, v8);
      byte_4A48DB8 = 1;
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
      if ( !byte_4A48DB8 )
      {
        sub_1B863B8(&TerminalSceneComponent_TypeInfo, v8);
        byte_4A48DB8 = 1;
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
      if ( !byte_4A4AE79 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v8);
        byte_4A4AE79 = 1;
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
    if ( !byte_4A48DB8 )
    {
      sub_1B863B8(&TerminalSceneComponent_TypeInfo, v8);
      byte_4A48DB8 = 1;
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
      if ( !byte_4A48DB8 )
      {
        sub_1B863B8(&TerminalSceneComponent_TypeInfo, v8);
        byte_4A48DB8 = 1;
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
      sub_1B86614(v10, v8);
    }
  }
LABEL_102:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4907E )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v8);
    byte_4A4907E = 1;
  }
  v27 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_BYTE *)v27[2].virtualMethodPointer + 725) = 1;
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

  if ( (byte_4A4B924 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_WarMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    sub_1B863B8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v7);
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v8);
    byte_4A4B924 = 1;
  }
  WarEntityByWarID = 0LL;
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B121 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B121 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4A4AE80 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4A4AE80 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4A4AE7C )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4A4AE7C = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_DispState_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_125;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    warId,
    (const MethodInfo_32142CC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( !entity )
    return;
LABEL_25:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B599 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v11);
    byte_4A4B599 = 1;
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
  v15 = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_125;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    (Il2CppObject **)&WarEntityByWarID,
    PrioredParentId,
    (const MethodInfo_32142CC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( !WarEntityByWarID )
    return;
LABEL_40:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4AE80 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v11);
    byte_4A4AE80 = 1;
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
    if ( !byte_4A4AE7C )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v17);
      byte_4A4AE7C = 1;
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
  if ( !byte_4A4ADC8 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v17);
    byte_4A4ADC8 = 1;
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
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v17);
    byte_4A48DB8 = 1;
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
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v11);
    byte_4A48DB8 = 1;
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
    if ( !byte_4A48DB8 )
    {
      sub_1B863B8(&TerminalSceneComponent_TypeInfo, v11);
      byte_4A48DB8 = 1;
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
    if ( !byte_4A4AE79 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v11);
      byte_4A4AE79 = 1;
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
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v11);
    byte_4A48DB8 = 1;
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
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v11);
    byte_4A48DB8 = 1;
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
    sub_1B86614(Master_object, v11);
  TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)Master_object, 0LL);
LABEL_117:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4907E )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v11);
    byte_4A4907E = 1;
  }
  v30 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_BYTE *)v30[2].virtualMethodPointer + 725) = 1;
  TerminalPramsManager__Save_SaveData(v30);
}


void __fastcall TerminalPramsManager__SetBattleResultCampaignBonus(
        BattleResultComponent_resultData_o *result,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleResultComponent_resultData_o *v4; // x19
  struct CommonUI_CampaignDirectBonusData_array *campaignDirectBonus; // x20
  TerminalPramsManager_c *v6; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  const MethodInfo *v8; // x0
  struct CommonUI_CampaignBonusData_array *campaignbonus; // x19

  v4 = result;
  if ( (byte_4A4B961 & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_o *)sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B961 = 1;
  }
  if ( !v4 )
    sub_1B86614(result, method);
  campaignDirectBonus = v4->fields.campaignDirectBonus;
  if ( campaignDirectBonus && *(_QWORD *)&campaignDirectBonus->max_length )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B995 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
      byte_4A4B995 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v6->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = campaignDirectBonus;
    sub_1B8635C(
      (CGThumbnailListItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
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
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4A4B94C & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B94C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B994 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B994 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignBonus_k__BackingField = campaignBonuses;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_CampaignBonus_k__BackingField, (int32_t)campaignBonuses, v2, v3);
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
  const MethodInfo *v12; // x3
  TerminalPramsManager_c *v13; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x0
  __int64 v16; // x1
  TerminalPramsManager_c *v17; // x0

  if ( (byte_4A4B958 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&idx);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v6);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v7);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v8);
    byte_4A4B958 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( !v9->static_fields->folderLastIdxs )
  {
    v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v10,
      (const MethodInfo_3264078 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->folderLastIdxs = v10;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->folderLastIdxs, (int32_t)v10, v11, v12);
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
          (const MethodInfo_3265DF4 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__),
        (folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs) == 0LL) )
  {
    sub_1B86614(folderLastIdxs, *(_QWORD *)&idx);
  }
  System_Collections_Generic_Dictionary_int__int___Add(
    folderLastIdxs,
    warId,
    idx,
    (const MethodInfo_3264A3C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !byte_4A4B984 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v16);
    byte_4A4B984 = 1;
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

  if ( (byte_4A4B95E & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, *(_QWORD *)&state);
    byte_4A4B95E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v5);
  if ( !QuestFocusStateManager )
    sub_1B86614(0LL, v7);
  QuestFocusStateManager__SetFocusState(QuestFocusStateManager, questId, state, 0LL);
}


void __fastcall TerminalPramsManager__SetQuestRewardInfo(
        BattleResultComponent_resultData_array *result,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  CGThumbnailListItem_o *p_mQuestRewardInfos; // x0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  BattleResultComponent_resultData_o *v11; // x8
  CGThumbnailListItem_c *rewardInfos; // x20
  TerminalPramsManager_c *v13; // x0
  CGThumbnailListItem_o *v14; // x0
  TerminalPramsManager_c *v15; // x0
  CGThumbnailListItem_o *p_mQuestPhaseRewardInfos; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  BattleResultComponent_resultData_o *v19; // x8
  CGThumbnailListItem_c *resultQuestPhaseRewardInfos; // x20
  TerminalPramsManager_c *v21; // x0
  CGThumbnailListItem_o *v22; // x0
  TerminalPramsManager_c *v23; // x0
  CGThumbnailListItem_o *p_mQuestResultAfterEventRewardInfos; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x8
  BattleResultComponent_resultData_o *v28; // x9
  CGThumbnailListItem_c *resultAfterEventRewardInfos; // x20
  TerminalPramsManager_c *v30; // x0
  CGThumbnailListItem_o *v31; // x0
  BattleResultComponent_resultData_o *v32; // x8
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct QuestRewardInfo_array *resultUseRewardAddItemRewardInfos; // x20
  BattleResultComponent_resultData_o *v36; // x8
  TerminalPramsManager_c *v37; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B962 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B962 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (CGThumbnailListItem_o *)&v5->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0LL;
  sub_1B8635C(p_mQuestRewardInfos, 0, v2, v3);
  if ( !result )
    goto LABEL_44;
  if ( !result->max_length )
    goto LABEL_45;
  v11 = result->m_Items[0];
  if ( !v11 )
    goto LABEL_44;
  rewardInfos = (CGThumbnailListItem_c *)v11->fields.rewardInfos;
  if ( rewardInfos && rewardInfos->_1.namespaze )
  {
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v14 = (CGThumbnailListItem_o *)&v13->static_fields->mQuestRewardInfos;
    v14->klass = rewardInfos;
    sub_1B8635C(v14, (int32_t)rewardInfos, v9, v10);
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = (CGThumbnailListItem_o *)&v15->static_fields->mQuestPhaseRewardInfos;
  p_mQuestPhaseRewardInfos->klass = 0LL;
  sub_1B8635C(p_mQuestPhaseRewardInfos, 0, v9, v10);
  if ( !result->max_length )
    goto LABEL_45;
  v19 = result->m_Items[0];
  if ( !v19 )
    goto LABEL_44;
  resultQuestPhaseRewardInfos = (CGThumbnailListItem_c *)v19->fields.resultQuestPhaseRewardInfos;
  if ( resultQuestPhaseRewardInfos && resultQuestPhaseRewardInfos->_1.namespaze )
  {
    v21 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v21 = TerminalPramsManager_TypeInfo;
    }
    v22 = (CGThumbnailListItem_o *)&v21->static_fields->mQuestPhaseRewardInfos;
    v22->klass = resultQuestPhaseRewardInfos;
    sub_1B8635C(v22, (int32_t)resultQuestPhaseRewardInfos, v17, v18);
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestResultAfterEventRewardInfos = (CGThumbnailListItem_o *)&v23->static_fields->mQuestResultAfterEventRewardInfos;
  p_mQuestResultAfterEventRewardInfos->klass = 0LL;
  sub_1B8635C(p_mQuestResultAfterEventRewardInfos, 0, v17, v18);
  v27 = *(_QWORD *)&result->max_length;
  if ( !(_DWORD)v27 )
    goto LABEL_45;
  v28 = result->m_Items[0];
  if ( !v28 )
    goto LABEL_44;
  resultAfterEventRewardInfos = (CGThumbnailListItem_c *)v28->fields.resultAfterEventRewardInfos;
  if ( resultAfterEventRewardInfos && resultAfterEventRewardInfos->_1.namespaze )
  {
    v30 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v30 = TerminalPramsManager_TypeInfo;
    }
    v31 = (CGThumbnailListItem_o *)&v30->static_fields->mQuestResultAfterEventRewardInfos;
    v31->klass = resultAfterEventRewardInfos;
    sub_1B8635C(v31, (int32_t)resultAfterEventRewardInfos, v25, v26);
    v27 = *(_QWORD *)&result->max_length;
  }
  if ( !(_DWORD)v27 )
    goto LABEL_45;
  v32 = result->m_Items[0];
  if ( !v32 )
    goto LABEL_44;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)v32->fields.resultUseRewardAddItemRewardInfos,
                    0LL);
  resultUseRewardAddItemRewardInfos = 0LL;
  if ( IsNullOrEmpty )
    goto LABEL_37;
  if ( !result->max_length )
LABEL_45:
    sub_1B8661C(IsNullOrEmpty, v8);
  v36 = result->m_Items[0];
  if ( !v36 )
LABEL_44:
    sub_1B86614(IsNullOrEmpty, v8);
  resultUseRewardAddItemRewardInfos = v36->fields.resultUseRewardAddItemRewardInfos;
LABEL_37:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A48E9A )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v8);
    byte_4A48E9A = 1;
  }
  v37 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v37 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v37->static_fields;
  static_fields->_UseAddRewardItemRewardInfos_k__BackingField = resultUseRewardAddItemRewardInfos;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&static_fields->_UseAddRewardItemRewardInfos_k__BackingField,
    (int32_t)resultUseRewardAddItemRewardInfos,
    v33,
    v34);
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
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = war_id;
  if ( (byte_4A4B956 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_43/*"\n"*/, v3);
    byte_4A4B956 = 1;
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
    v7 = System_String__Concat_61683424(mTerminalWarStartedIds, v6, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
    static_fields->mTerminalWarStartedIds = v7;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->mTerminalWarStartedIds, (int32_t)v7, v9, v10);
    TerminalPramsManager__Save_SaveData(v11);
  }
}


void __fastcall TerminalPramsManager__SpotIdSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B931 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_13483/*"TerminalSpotId"*/, v2);
    byte_4A4B931 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B077 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B077 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13483/*"TerminalSpotId"*/,
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

  if ( (byte_4A4B937 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_13467/*"TerminalBeforeEventActivityPoint"*/, v2);
    sub_1B863B8(&StringLiteral_13468/*"TerminalBeforeEventActivityPointGauge"*/, v3);
    byte_4A4B937 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B99B )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B99B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13467/*"TerminalBeforeEventActivityPoint"*/,
    v4->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_4A4B99C )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v5);
    byte_4A4B99C = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13468/*"TerminalBeforeEventActivityPointGauge"*/,
    v6->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfoDispSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B93C & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11269/*"SAVEKEY_TerminalConquestInfoDisp"*/, v2);
    byte_4A4B93C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11269/*"SAVEKEY_TerminalConquestInfoDisp"*/, v3->static_fields->eventConquestInfoDisp, 0LL);
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

  if ( (byte_4A4B93B & 1) == 0 )
  {
    sub_1B863B8(&EventConquestInfo___TypeInfo, v1);
    sub_1B863B8(&JsonManager_TypeInfo, v2);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v3);
    sub_1B863B8(&StringLiteral_11270/*"SAVEKEY_TerminalConquestInfos"*/, v4);
    sub_1B863B8(&StringLiteral_11269/*"SAVEKEY_TerminalConquestInfoDisp"*/, v5);
    byte_4A4B93B = 1;
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
    eventConquestInfos = (struct EventConquestInfo_array *)sub_1B86460(EventConquestInfo___TypeInfo, 0LL);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(&eventConquestInfos->obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11270/*"SAVEKEY_TerminalConquestInfos"*/, v8, 0LL);
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11269/*"SAVEKEY_TerminalConquestInfoDisp"*/, v9->static_fields->eventConquestInfoDisp, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B93D & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11271/*"SAVEKEY_TerminalCraftInfoDisp"*/, v2);
    byte_4A4B93D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11271/*"SAVEKEY_TerminalCraftInfoDisp"*/, v3->static_fields->eventCraftInfoDisp, 0LL);
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

  if ( (byte_4A4B93E & 1) == 0 )
  {
    sub_1B863B8(&EventHarvestGrowthInfo_TypeInfo, v1);
    sub_1B863B8(&JsonManager_TypeInfo, v2);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v3);
    sub_1B863B8(&StringLiteral_11272/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v4);
    byte_4A4B93E = 1;
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
    eventHarvestGrowthInfo = (Il2CppObject *)sub_1B86604(EventHarvestGrowthInfo_TypeInfo);
    System_Object___ctor(eventHarvestGrowthInfo, 0LL);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__toJson(eventHarvestGrowthInfo, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11272/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v7, 0LL);
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

  if ( (byte_4A4B939 & 1) == 0 )
  {
    sub_1B863B8(&JsonManager_TypeInfo, v1);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v2);
    sub_1B863B8(&StringLiteral_13469/*"TerminalBeforeEventSubmarinePointData"*/, v3);
    byte_4A4B939 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4AF91 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4AF91 = 1;
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
    if ( !byte_4A4AF91 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
      byte_4A4AF91 = 1;
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
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13469/*"TerminalBeforeEventSubmarinePointData"*/, v7, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B946 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11274/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v2);
    byte_4A4B946 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B571 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B571 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11274/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v3->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B945 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_11275/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v2);
    byte_4A4B945 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B6A3 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B6A3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11275/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v3->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalTransitionInfoSave_SaveData(
        TerminalTransitionInfo_o *terminalTransitionInfo,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4A4B936 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_13489/*"TerminalTransitionInfoVoiceAssetName"*/, method);
    sub_1B863B8(&StringLiteral_13488/*"TerminalTransitionInfoMissionId"*/, v3);
    byte_4A4B936 = 1;
  }
  if ( terminalTransitionInfo )
  {
    UnityEngine_PlayerPrefs__SetInt(
      (System_String_o *)StringLiteral_13488/*"TerminalTransitionInfoMissionId"*/,
      terminalTransitionInfo->fields.missionId,
      0LL);
    UnityEngine_PlayerPrefs__SetString(
      (System_String_o *)StringLiteral_13489/*"TerminalTransitionInfoVoiceAssetName"*/,
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

  if ( (byte_4A4B96F & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, *(_QWORD *)&day);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v10);
    byte_4A4B96F = 1;
  }
  value = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B9B3 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    byte_4A4B9B3 = 1;
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
          (const MethodInfo_326EEF0 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v13 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v13,
      (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
    value = (Il2CppObject *)v13;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B9B3 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
      byte_4A4B9B3 = 1;
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
          (const MethodInfo_326D764 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        goto LABEL_24;
      }
    }
LABEL_30:
    sub_1B86614(v11, *(_QWORD *)&day);
  }
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)value,
         day,
         (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__) )
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
      *(const MethodInfo_35DF934 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
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

  if ( (byte_4A4B82E & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B82E = 1;
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

  if ( (byte_4A4B850 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B850 = 1;
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

  if ( (byte_4A4B888 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v2);
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v3);
    byte_4A4B888 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__checkNowScene(Instance, 34, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A48DB8 )
    {
      sub_1B863B8(&TerminalSceneComponent_TypeInfo, v5);
      byte_4A48DB8 = 1;
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
      if ( !byte_4A48DB8 )
      {
        sub_1B863B8(&TerminalSceneComponent_TypeInfo, v5);
        byte_4A48DB8 = 1;
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
      sub_1B86614(Instance, v5);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v5);
    byte_4A48E97 = 1;
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

  if ( (byte_4A4B8A3 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8A3 = 1;
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

  if ( (byte_4A4B8A5 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8A5 = 1;
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

  if ( (byte_4A4B8A9 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8A9 = 1;
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

  if ( (byte_4A4B910 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B910 = 1;
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

  if ( (byte_4A4B897 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B897 = 1;
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

  if ( (byte_4A4B8C9 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8C9 = 1;
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

  if ( (byte_4A4B8CD & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8CD = 1;
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

  if ( (byte_4A4B8C7 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8C7 = 1;
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

  if ( (byte_4A4B8CB & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8CB = 1;
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

  if ( (byte_4A4B8DD & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8DD = 1;
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

  if ( (byte_4A4B86E & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B86E = 1;
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

  if ( (byte_4A4B870 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B870 = 1;
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

  if ( (byte_4A4B8A1 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8A1 = 1;
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

  if ( (byte_4A4B8E1 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8E1 = 1;
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

  if ( (byte_4A4B85C & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B85C = 1;
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

  if ( (byte_4A4B864 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B864 = 1;
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

  if ( (byte_4A4B85E & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B85E = 1;
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

  if ( (byte_4A4B80C & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B80C = 1;
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

  if ( (byte_4A4B852 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B852 = 1;
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

  if ( (byte_4A4B872 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B872 = 1;
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

  if ( (byte_4A4B8A7 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8A7 = 1;
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

  if ( (byte_4A4B8AF & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8AF = 1;
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

  if ( (byte_4A4B899 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B899 = 1;
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

  if ( (byte_4A4B895 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B895 = 1;
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

  if ( (byte_4A4B83C & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B83C = 1;
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

  if ( (byte_4A4B8AB & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8AB = 1;
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

  if ( (byte_4A4B8D3 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8D3 = 1;
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

  if ( (byte_4A4B912 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B912 = 1;
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

  if ( (byte_4A4B906 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B906 = 1;
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

  if ( (byte_4A4B8F4 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8F4 = 1;
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

  if ( (byte_4A4B8F8 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8F8 = 1;
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

  if ( (byte_4A4B91E & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B91E = 1;
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

  if ( (byte_4A4B8EE & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8EE = 1;
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

  if ( (byte_4A4B8F0 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8F0 = 1;
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

  if ( (byte_4A4B90E & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B90E = 1;
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

  if ( (byte_4A4B8CF & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8CF = 1;
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

  if ( (byte_4A4B8FA & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8FA = 1;
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

  if ( (byte_4A4B85A & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B85A = 1;
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

  if ( (byte_4A4B866 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B866 = 1;
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

  if ( (byte_4A4B862 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B862 = 1;
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

  if ( (byte_4A4B8D9 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8D9 = 1;
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

  if ( (byte_4A4B830 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B830 = 1;
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

  if ( (byte_4A4B832 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B832 = 1;
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

  if ( (byte_4A4B844 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B844 = 1;
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

  if ( (byte_4A4B834 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B834 = 1;
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

  if ( (byte_4A4B81A & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B81A = 1;
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

  if ( (byte_4A4B916 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B916 = 1;
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

  if ( (byte_4A4B8B1 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8B1 = 1;
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

  if ( (byte_4A4B822 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B822 = 1;
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

  if ( (byte_4A4B820 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B820 = 1;
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

  if ( (byte_4A4B8E6 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8E6 = 1;
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

  if ( (byte_4A4B83A & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B83A = 1;
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

  if ( (byte_4A4B8F2 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8F2 = 1;
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

  if ( (byte_4A4B8F6 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8F6 = 1;
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

  if ( (byte_4A4B838 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B838 = 1;
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

  if ( (byte_4A4B842 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B842 = 1;
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

  if ( (byte_4A4B848 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B848 = 1;
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

  if ( (byte_4A4B8B3 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8B3 = 1;
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

  if ( (byte_4A4B86A & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B86A = 1;
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

  if ( (byte_4A4B846 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B846 = 1;
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

  if ( (byte_4A4B8C1 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8C1 = 1;
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

  if ( (byte_4A4B8C3 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8C3 = 1;
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

  if ( (byte_4A4B8C5 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8C5 = 1;
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

  if ( (byte_4A4B868 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B868 = 1;
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

  if ( (byte_4A4B840 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B840 = 1;
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

  if ( (byte_4A4B84A & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B84A = 1;
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

  if ( (byte_4A4B90C & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B90C = 1;
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

  if ( (byte_4A4B860 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B860 = 1;
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

  if ( (byte_4A4B8FC & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8FC = 1;
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

  if ( (byte_4A4B8D7 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8D7 = 1;
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

  if ( (byte_4A4B854 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B854 = 1;
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

  if ( (byte_4A4B836 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B836 = 1;
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

  if ( (byte_4A4B82A & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B82A = 1;
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

  if ( (byte_4A4B828 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B828 = 1;
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

  if ( (byte_4A4B82C & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B82C = 1;
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

  if ( (byte_4A4B908 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B908 = 1;
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

  if ( (byte_4A4B858 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B858 = 1;
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

  if ( (byte_4A4B856 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B856 = 1;
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

  if ( (byte_4A4B920 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B920 = 1;
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

  if ( (byte_4A4B84C & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B84C = 1;
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

  if ( (byte_4A4B8D1 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8D1 = 1;
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

  if ( (byte_4A4B8E3 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8E3 = 1;
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

  if ( (byte_4A4B818 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B818 = 1;
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

  if ( (byte_4A4B83E & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B83E = 1;
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

  if ( (byte_4A4B8BF & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8BF = 1;
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

  if ( (byte_4A4B86C & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B86C = 1;
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
  const MethodInfo *v6; // x3
  TerminalPramsManager_c *v7; // x0
  CGThumbnailListItem_o *p_questFocusStateManager; // x0

  if ( (byte_4A4B8E5 & 1) == 0 )
  {
    sub_1B863B8(&QuestFocusStateManager_TypeInfo, v1);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v2);
    byte_4A4B8E5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->questFocusStateManager )
  {
    v4 = (QuestFocusStateManager_o *)sub_1B86604(QuestFocusStateManager_TypeInfo);
    QuestFocusStateManager___ctor(v4, 0LL);
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    p_questFocusStateManager = (CGThumbnailListItem_o *)&v7->static_fields->questFocusStateManager;
    p_questFocusStateManager->klass = (CGThumbnailListItem_c *)v4;
    sub_1B8635C(p_questFocusStateManager, (int32_t)v4, v5, v6);
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

  if ( (byte_4A4B816 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B816 = 1;
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

  if ( (byte_4A4B8FE & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8FE = 1;
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

  if ( (byte_4A4B900 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B900 = 1;
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

  if ( (byte_4A4B8BD & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8BD = 1;
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

  if ( (byte_4A4B824 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B824 = 1;
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

  if ( (byte_4A4B84E & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B84E = 1;
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

  if ( (byte_4A4B8D5 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8D5 = 1;
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

  if ( (byte_4A4B826 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B826 = 1;
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

  if ( (byte_4A4B81E & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B81E = 1;
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

  if ( (byte_4A4B81C & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B81C = 1;
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

  if ( (byte_4A4B8DB & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8DB = 1;
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

  if ( (byte_4A4B876 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B876 = 1;
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

  if ( (byte_4A4B814 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B814 = 1;
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

  if ( (byte_4A4B812 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B812 = 1;
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

  if ( (byte_4A4B810 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B810 = 1;
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

  if ( (byte_4A4B902 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B902 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_TalkScriptInfo_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_TerminalTopFocusWarIdByShortcut(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4A4B8DF & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8DF = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_TerminalTopFocusWarIdByShortcut_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_TimeStatusEventId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4A4B89D & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B89D = 1;
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

  if ( (byte_4A4B89F & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B89F = 1;
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

  if ( (byte_4A4B914 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B914 = 1;
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

  if ( (byte_4A4B918 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B918 = 1;
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

  if ( (byte_4A4B8B5 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8B5 = 1;
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

  if ( (byte_4A4B80E & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B80E = 1;
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

  if ( (byte_4A4B874 & 1) == 0 )
  {
    sub_1B863B8(&MapZoom_TypeInfo, v1);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v2);
    byte_4A4B874 = 1;
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

  if ( (byte_4A4B893 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B893 = 1;
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

  if ( (byte_4A4B87E & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B87E = 1;
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

  if ( (byte_4A4B87C & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B87C = 1;
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

  if ( (byte_4A4B880 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B880 = 1;
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

  if ( (byte_4A4B889 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B889 = 1;
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

  if ( (byte_4A4B8B9 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8B9 = 1;
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

  if ( (byte_4A4B8AD & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8AD = 1;
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

  if ( (byte_4A4B8BB & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8BB = 1;
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

  if ( (byte_4A4B8EC & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8EC = 1;
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

  if ( (byte_4A4B8B7 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B8B7 = 1;
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

  if ( (byte_4A4B904 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B904 = 1;
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

  if ( (byte_4A4B87A & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B87A = 1;
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

  if ( (byte_4A4B886 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B886 = 1;
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

  if ( (byte_4A4B878 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B878 = 1;
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

  if ( (byte_4A4B884 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B884 = 1;
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

  if ( (byte_4A4B882 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B882 = 1;
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

  if ( (byte_4A4B88D & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B88D = 1;
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

  if ( (byte_4A4B88F & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B88F = 1;
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

  if ( (byte_4A4B88B & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B88B = 1;
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

  if ( (byte_4A4B891 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B891 = 1;
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

  if ( (byte_4A4B90A & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B90A = 1;
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

  if ( (byte_4A4B89B & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B89B = 1;
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

  if ( (byte_4A4B929 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v1);
    byte_4A4B929 = 1;
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

  if ( (byte_4A4B928 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B928 = 1;
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

  if ( (byte_4A4B82F & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B82F = 1;
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
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4A4B851 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B851 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BattleSetupKeep_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_BattleSetupKeep_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_BeforeEventActivityPoint(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B8A4 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8A4 = 1;
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

  if ( (byte_4A4B8A6 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8A6 = 1;
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
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B8AA & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8AA = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BeforeEventSubmarineSaveData_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&static_fields->_BeforeEventSubmarineSaveData_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_BeforeQuestStartWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B911 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B911 = 1;
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

  if ( (byte_4A4B898 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B898 = 1;
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

  if ( (byte_4A4B8CA & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8CA = 1;
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

  if ( (byte_4A4B8CE & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8CE = 1;
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

  if ( (byte_4A4B8C8 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8C8 = 1;
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
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B8CC & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8CC = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BlankEarthTransformData_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_BlankEarthTransformData_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_CaldeaGateFolderFocusWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B8DE & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8DE = 1;
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
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4A4B86F & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B86F = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignBonus_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_CampaignBonus_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_CampaignDirectBonus(
        CommonUI_CampaignDirectBonusData_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4A4B871 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B871 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_ClearEventQuestIds(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B8A2 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8A2 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_ClearEventQuestIds_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_ClearEventQuestIds_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_CurrentWaveNum(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B8E2 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8E2 = 1;
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

  if ( (byte_4A4B85D & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B85D = 1;
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

  if ( (byte_4A4B865 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v2);
    byte_4A4B865 = 1;
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

  if ( (byte_4A4B85F & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B85F = 1;
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

  if ( (byte_4A4B8EB & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8EB = 1;
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

  if ( (byte_4A4B8EA & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8EA = 1;
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

  if ( (byte_4A4B8E8 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8E8 = 1;
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

  if ( (byte_4A4B8E9 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8E9 = 1;
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

  if ( (byte_4A4B80D & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B80D = 1;
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

  if ( (byte_4A4B853 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B853 = 1;
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

  if ( (byte_4A4B873 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B873 = 1;
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

  if ( (byte_4A4B8A8 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8A8 = 1;
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

  if ( (byte_4A4B8B0 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8B0 = 1;
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

  if ( (byte_4A4B89A & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B89A = 1;
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

  if ( (byte_4A4B896 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B896 = 1;
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

  if ( (byte_4A4B83D & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B83D = 1;
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
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B8AC & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8AC = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_EventUIEffectClearQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B8D4 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8D4 = 1;
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

  if ( (byte_4A4B913 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B913 = 1;
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

  if ( (byte_4A4B907 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B907 = 1;
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

  if ( (byte_4A4B8F5 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8F5 = 1;
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

  if ( (byte_4A4B8F9 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8F9 = 1;
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

  if ( (byte_4A4B91F & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B91F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v3 = value;
  if ( !byte_4A4907E )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4907E = 1;
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

  if ( (byte_4A4B8EF & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8EF = 1;
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

  if ( (byte_4A4B8F1 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8F1 = 1;
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

  if ( (byte_4A4B90F & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B90F = 1;
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

  if ( (byte_4A4B8D0 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8D0 = 1;
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

  if ( (byte_4A4B8FB & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8FB = 1;
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

  if ( (byte_4A4B85B & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B85B = 1;
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

  if ( (byte_4A4B867 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B867 = 1;
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

  if ( (byte_4A4B863 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B863 = 1;
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

  if ( (byte_4A4B8DA & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8DA = 1;
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

  if ( (byte_4A4B831 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B831 = 1;
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

  if ( (byte_4A4B833 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B833 = 1;
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

  if ( (byte_4A4B845 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B845 = 1;
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

  if ( (byte_4A4B835 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B835 = 1;
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

  if ( (byte_4A4B81B & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B81B = 1;
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

  if ( (byte_4A4B917 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B917 = 1;
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

  if ( (byte_4A4B8B2 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8B2 = 1;
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

  if ( (byte_4A4B823 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B823 = 1;
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

  if ( (byte_4A4B821 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B821 = 1;
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

  if ( (byte_4A4B8E7 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8E7 = 1;
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

  if ( (byte_4A4B83B & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B83B = 1;
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

  if ( (byte_4A4B8F3 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8F3 = 1;
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

  if ( (byte_4A4B8F7 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8F7 = 1;
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

  if ( (byte_4A4B839 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B839 = 1;
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

  if ( (byte_4A4B843 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B843 = 1;
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

  if ( (byte_4A4B849 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B849 = 1;
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

  if ( (byte_4A4B8B4 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8B4 = 1;
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

  if ( (byte_4A4B86B & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B86B = 1;
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

  if ( (byte_4A4B847 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B847 = 1;
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

  if ( (byte_4A4B8C2 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8C2 = 1;
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

  if ( (byte_4A4B8C4 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8C4 = 1;
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

  if ( (byte_4A4B8C6 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8C6 = 1;
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

  if ( (byte_4A4B869 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B869 = 1;
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

  if ( (byte_4A4B841 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B841 = 1;
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

  if ( (byte_4A4B84B & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B84B = 1;
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

  if ( (byte_4A4B90D & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B90D = 1;
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

  if ( (byte_4A4B861 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B861 = 1;
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

  if ( (byte_4A4B8FD & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8FD = 1;
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

  if ( (byte_4A4B8D8 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8D8 = 1;
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

  if ( (byte_4A4B855 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B855 = 1;
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

  if ( (byte_4A4B837 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B837 = 1;
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

  if ( (byte_4A4B82B & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B82B = 1;
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

  if ( (byte_4A4B829 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B829 = 1;
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

  if ( (byte_4A4B82D & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B82D = 1;
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

  if ( (byte_4A4B909 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B909 = 1;
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

  if ( (byte_4A4B859 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B859 = 1;
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

  if ( (byte_4A4B857 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B857 = 1;
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

  if ( (byte_4A4B921 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B921 = 1;
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

  if ( (byte_4A4B84D & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B84D = 1;
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
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B8D2 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8D2 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_NoticeLastModified_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_NoticeLastModified_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_OldUserEventPoint(
        UserEventPointEntity_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B8E4 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8E4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_OldUserEventPoint_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_OldUserEventPoint_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_PhaseCnt(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B819 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B819 = 1;
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

  if ( (byte_4A4B83F & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B83F = 1;
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B8C0 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8C0 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_PlayedTerminalEffects_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_PlayedTerminalEffects_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_PlayerGenderType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B86D & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B86D = 1;
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

  if ( (byte_4A4B817 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B817 = 1;
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

  if ( (byte_4A4B8FF & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8FF = 1;
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

  if ( (byte_4A4B901 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B901 = 1;
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
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B8BE & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8BE = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_QuestRandomGroupList_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_QuestRandomGroupList_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_QuestReleaseFocusQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B825 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B825 = 1;
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
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4A4B84F & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B84F = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_QuestWindowMessage_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_SceneMoveQuestClearedInfo(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B8D6 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8D6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SceneMoveQuestClearedInfo_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&static_fields->_SceneMoveQuestClearedInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_SelectedBannerEntity(BannerEntity_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4A4B827 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B827 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_SelectedRecollectionWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B81F & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B81F = 1;
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

  if ( (byte_4A4B81D & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B81D = 1;
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

  if ( (byte_4A4B8DC & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8DC = 1;
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
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4A4B877 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B877 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SpecifiedChangeSceneInfo_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_SpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B815 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B815 = 1;
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

  if ( (byte_4A4B813 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B813 = 1;
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

  if ( (byte_4A4B811 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B811 = 1;
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
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B903 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B903 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_TalkScriptInfo_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_TalkScriptInfo_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_TerminalTopFocusWarIdByShortcut(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B8E0 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8E0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_TerminalTopFocusWarIdByShortcut_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_TimeStatusEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B89E & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B89E = 1;
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

  if ( (byte_4A4B8A0 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8A0 = 1;
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B915 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B915 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_TransitionScrollTabName_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_TransitionScrollTabName_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_UseAddRewardItemRewardInfos(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B919 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B919 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_UseAddRewardItemRewardInfos_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&static_fields->_UseAddRewardItemRewardInfos_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_WarBoardData(WarBoardDataEntity_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B8B6 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8B6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_WarBoardData_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_WarBoardData_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_WarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B80F & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B80F = 1;
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

  if ( (byte_4A4B875 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v2);
    byte_4A4B875 = 1;
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
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B894 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B894 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventDailyPoint_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_eventDailyPoint_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_eventPointWinReward(EventPointWinReward_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B87F & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B87F = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventPointWinReward_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_eventPointWinReward_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_eventPointWinType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B87D & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B87D = 1;
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
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  CGThumbnailListItem_o *static_fields; // x8

  if ( (byte_4A4B881 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B881 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (CGThumbnailListItem_o *)v5->static_fields;
  static_fields[2].klass = (CGThumbnailListItem_c *)value;
  sub_1B8635C(static_fields + 2, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_eventTowerReward(EventTowerReward_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B88A & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B88A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventTowerReward_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_eventTowerReward_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_isFortificationCheck(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B8BA & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8BA = 1;
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

  if ( (byte_4A4B8AE & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8AE = 1;
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

  if ( (byte_4A4B8BC & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8BC = 1;
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

  if ( (byte_4A4B8ED & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8ED = 1;
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

  if ( (byte_4A4B8B8 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B8B8 = 1;
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B905 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B905 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_limitImageAnnounces_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_limitImageAnnounces_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_oldPersonalBoss(UserSuperBossEntity_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4A4B87B & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B87B = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_oldPersonalBoss_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_oldPersonalBoss_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_oldQuestIdForHeaderEvent(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A4B887 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B887 = 1;
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
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4A4B879 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B879 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_oldSuperBoss_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_oldSuperBoss_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_questClearCostumeGet(
        CostumeReleaseAnnounce_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B885 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B885 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_questClearCostumeGet_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_questClearCostumeGet_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_questClearCostumeRelease(
        CostumeReleaseAnnounce_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B883 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B883 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_questClearCostumeRelease_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&static_fields->_questClearCostumeRelease_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_resultBoostItemRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B88E & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B88E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultBoostItemRewardInfo_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&static_fields->_resultBoostItemRewardInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_resultEventBoardGameTokenRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B890 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B890 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_resultEventTowerRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B88C & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B88C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultEventTowerRewardInfo_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&static_fields->_resultEventTowerRewardInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_timeStatusRecord(TimeStatusRecord_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B892 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B892 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_timeStatusRecord_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_timeStatusRecord_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_updateProfileInfoEntity(
        UpdateProfileDialogInfoEntity_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B90B & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B90B = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_updateProfileInfoEntity_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_updateProfileInfoEntity_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_warClearReward(WarClearReward_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A4B89C & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B89C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_warClearReward_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_warClearReward_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager_ClearData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4A4B9BB & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_13145/*"TERMINAL_CLEAR_REWARD_DISP"*/, v4);
    byte_4A4B9BB = 1;
  }
  TerminalPramsManager_ClearData_TypeInfo->static_fields->SAVEKEY_CLEAR_REWARD_DISP = (struct System_String_o *)StringLiteral_13145/*"TERMINAL_CLEAR_REWARD_DISP"*/;
  sub_1B8635C(
    (CGThumbnailListItem_o *)TerminalPramsManager_ClearData_TypeInfo->static_fields,
    StringLiteral_13145/*"TERMINAL_CLEAR_REWARD_DISP"*/,
    v2,
    v3);
}


void __fastcall TerminalPramsManager_ClearData___ctor(TerminalPramsManager_ClearData_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  TerminalPramsManager_c *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3

  if ( (byte_4A4B9B9 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B9B9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.qClearHeroineInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, 0, v3, v4);
  this->fields.questRewardInfos = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questRewardInfos, 0, v5, v6);
  this->fields.questPhaseRewardInfos = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questPhaseRewardInfos, 0, v7, v8);
  this->fields.questResultAfterEventRewardInfos = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questResultAfterEventRewardInfos, 0, v9, v10);
  this->fields.resultEventPanelRewardInfos = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resultEventPanelRewardInfos, 0, v11, v12);
  this->fields.panelEventPoint = 0;
  *(_QWORD *)&this->fields.clearedLastBattleRaidId = -1LL;
  this->fields.joinGroup = -1;
  this->fields.mOldSuperBoss = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.mOldSuperBoss, 0, v13, v14);
  this->fields.oldPersonalBoss = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.oldPersonalBoss, 0, v15, v16);
  this->fields.evPointWinReward = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.evPointWinReward, 0, v17, v18);
  this->fields.evPointWinType = 0;
  this->fields.evRaceBoost = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.evRaceBoost, 0, v19, v20);
  this->fields.questClearCostume = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questClearCostume, 0, v21, v22);
  this->fields.questClearCostumeGetInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questClearCostumeGetInfo, 0, v23, v24);
  this->fields.eventTowerReward = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventTowerReward, 0, v25, v26);
  this->fields.resultEventTowerRewardInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resultEventTowerRewardInfo, 0, v27, v28);
  this->fields.warClearReward = 0LL;
  this->fields.isDispOnly = 0;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.warClearReward, 0, v29, v30);
  v33 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  this->fields.EventActivityPointEffectState = v33->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  this->fields.limitImageAnnounces = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.limitImageAnnounces, 0, v31, v32);
  this->fields.isOrdealCallWarClear = 0;
  this->fields.eventMuralId = 0;
  this->fields.playHappinessCounterEffect = 0;
  this->fields.oldUserEventPoint = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.oldUserEventPoint, 0, v34, v35);
  this->fields.UseAddRewardItemRewardInfos = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.UseAddRewardItemRewardInfos, 0, v36, v37);
}


void __fastcall TerminalPramsManager_ClearData___ctor_35514388(
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
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v51; // x26
  __int64 v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  bool v56; // w29
  bool v57; // w23
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  struct QuestRewardInfo_array *v78; // x1
  __int64 v79; // x1
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  TerminalPramsManager_c *v82; // x0
  TerminalPramsManager_c *v83; // x0
  struct QuestRewardInfo_array *resultBoostItemRewardInfo_k__BackingField; // x1
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  __int64 v87; // x1
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  TerminalPramsManager_c *v90; // x0
  TerminalPramsManager_c *v91; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo_k__BackingField; // x1
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  struct WarClearReward_array *v95; // x1
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  struct BattleDropItem_array *v98; // x1
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  struct BattleDropItem_array *v101; // x1
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  struct LimitImageAnnounce_array *v104; // x1
  __int64 v105; // x1
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  TerminalPramsManager_c *v108; // x0
  struct QuestRewardInfo_array *v109; // x20
  struct UserEventPointEntity_array *OldUserEventPoint_k__BackingField; // x1
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  long double inited; // q0
  _QWORD *v114; // x20
  __int64 v115; // x8
  __int64 v116; // x0
  __int64 v117; // x0

  v31 = oldSuperBoss;
  v38 = questClearCostumeGet;
  v39 = questClearCostumeRelease;
  v40 = oldPersonalBoss;
  if ( (byte_4A4B9BA & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_Empty_QuestRewardInfo___, qcrHeroineInfo);
    sub_1B863B8(&BattleDropItem___TypeInfo, v41);
    sub_1B863B8(&CostumeReleaseAnnounce___TypeInfo, v42);
    sub_1B863B8(&LimitImageAnnounce___TypeInfo, v43);
    sub_1B863B8(&TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo, v44);
    sub_1B863B8(&QuestRewardInfo___TypeInfo, v45);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v46);
    sub_1B863B8(&UserSuperBossEntity___TypeInfo, v47);
    sub_1B863B8(&WarClearReward___TypeInfo, v48);
    byte_4A4B9BA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v49 = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)sub_1B86604(TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
  v51 = v49;
  if ( qcrHeroineInfo )
  {
    TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_35513616(v49, qcrHeroineInfo, v50);
    if ( this )
      goto LABEL_5;
LABEL_34:
    sub_1B86614(v52, v53);
  }
  System_Object___ctor((Il2CppObject *)v49, 0LL);
  v51->fields.oldUsrSvtData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v51->fields, 0, v85, v86);
  if ( !this )
    goto LABEL_34;
LABEL_5:
  this->fields.qClearHeroineInfo = v51;
  v56 = qClear;
  v57 = pclear;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)v51, v54, v55);
  if ( !qri )
    qri = (QuestRewardInfo_array *)sub_1B86460(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.questRewardInfos = qri;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questRewardInfos, (int32_t)qri, v58, v59);
  if ( !questPhaseRewardInfos )
    questPhaseRewardInfos = (QuestRewardInfo_array *)sub_1B86460(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.questPhaseRewardInfos = questPhaseRewardInfos;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questPhaseRewardInfos, (int32_t)questPhaseRewardInfos, v60, v61);
  this->fields.questClear = v56;
  this->fields.phaseClear = v57;
  this->fields.clearedLastBattleRaidId = lastRaidId;
  this->fields.clearedBattleRaidId = raidId;
  this->fields.joinGroup = groupjoin;
  if ( !oldSuperBoss )
    v31 = (struct UserSuperBossEntity_array *)sub_1B86460(UserSuperBossEntity___TypeInfo, 0LL);
  this->fields.mOldSuperBoss = v31;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.mOldSuperBoss, (int32_t)v31, v62, v63);
  if ( !oldPersonalBoss )
    v40 = (struct UserSuperBossEntity_array *)sub_1B86460(UserSuperBossEntity___TypeInfo, 0LL);
  this->fields.oldPersonalBoss = v40;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.oldPersonalBoss, (int32_t)v40, v64, v65);
  this->fields.evPointWinReward = evpWinReward;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.evPointWinReward, (int32_t)evpWinReward, v66, v67);
  this->fields.evRaceBoost = evRace;
  this->fields.evPointWinType = evpWinType;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.evRaceBoost, (int32_t)evRace, v68, v69);
  if ( !questClearCostumeRelease )
    v39 = (struct CostumeReleaseAnnounce_array *)sub_1B86460(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostume = v39;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questClearCostume, (int32_t)v39, v70, v71);
  if ( !questClearCostumeGet )
    v38 = (struct CostumeReleaseAnnounce_array *)sub_1B86460(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostumeGetInfo = v38;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questClearCostumeGetInfo, (int32_t)v38, v72, v73);
  this->fields.eventTowerReward = evTowerReward;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventTowerReward, (int32_t)evTowerReward, v74, v75);
  v78 = resultEvTowerRewardInfo;
  if ( !resultEvTowerRewardInfo )
    v78 = (struct QuestRewardInfo_array *)sub_1B86460(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.resultEventTowerRewardInfo = v78;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resultEventTowerRewardInfo, (int32_t)v78, v76, v77);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B580 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v79);
    byte_4A4B580 = 1;
  }
  v82 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v82 = TerminalPramsManager_TypeInfo;
  }
  if ( v82->static_fields->_resultBoostItemRewardInfo_k__BackingField )
  {
    if ( !v82->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v82);
    if ( !byte_4A4B580 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v79);
      byte_4A4B580 = 1;
    }
    v83 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v83 = TerminalPramsManager_TypeInfo;
    }
    resultBoostItemRewardInfo_k__BackingField = v83->static_fields->_resultBoostItemRewardInfo_k__BackingField;
  }
  else
  {
    resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1B86460(
                                                                                  QuestRewardInfo___TypeInfo,
                                                                                  0LL);
  }
  this->fields.resultBoostItemRewardInfo = resultBoostItemRewardInfo_k__BackingField;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.resultBoostItemRewardInfo,
    (int32_t)resultBoostItemRewardInfo_k__BackingField,
    v80,
    v81);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B578 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v87);
    byte_4A4B578 = 1;
  }
  v90 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v90 = TerminalPramsManager_TypeInfo;
  }
  if ( v90->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField )
  {
    if ( !v90->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v90);
    if ( !byte_4A4B578 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v87);
      byte_4A4B578 = 1;
    }
    v91 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v91 = TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfo_k__BackingField = v91->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
  }
  else
  {
    resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1B86460(
                                                                                            QuestRewardInfo___TypeInfo,
                                                                                            0LL);
  }
  this->fields.resultEventBoardGameTokenRewardInfo = resultEventBoardGameTokenRewardInfo_k__BackingField;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.resultEventBoardGameTokenRewardInfo,
    (int32_t)resultEventBoardGameTokenRewardInfo_k__BackingField,
    v88,
    v89);
  v95 = warClearRewardIn;
  this->fields.isDispOnly = dispOnly;
  if ( !warClearRewardIn )
    v95 = (struct WarClearReward_array *)sub_1B86460(WarClearReward___TypeInfo, 0LL);
  this->fields.warClearReward = v95;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.warClearReward, (int32_t)v95, v93, v94);
  v98 = questResultAfterEventRewardInfos;
  this->fields.isWarBoardClear = isWarBoardClear;
  this->fields.EventActivityPointEffectState = eventActivityPointEffectState;
  if ( !questResultAfterEventRewardInfos )
    v98 = (struct BattleDropItem_array *)sub_1B86460(BattleDropItem___TypeInfo, 0LL);
  this->fields.questResultAfterEventRewardInfos = v98;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questResultAfterEventRewardInfos, (int32_t)v98, v96, v97);
  v101 = resultEventPanelRewardInfos;
  if ( !resultEventPanelRewardInfos )
    v101 = (struct BattleDropItem_array *)sub_1B86460(BattleDropItem___TypeInfo, 0LL);
  this->fields.resultEventPanelRewardInfos = v101;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resultEventPanelRewardInfos, (int32_t)v101, v99, v100);
  v104 = limitImageAnnounces;
  this->fields.panelEventPoint = panelEventPoint;
  if ( !limitImageAnnounces )
    v104 = (struct LimitImageAnnounce_array *)sub_1B86460(LimitImageAnnounce___TypeInfo, 0LL);
  this->fields.limitImageAnnounces = v104;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.limitImageAnnounces, (int32_t)v104, v102, v103);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4ADC7 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v105);
    byte_4A4ADC7 = 1;
  }
  v108 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v108 = TerminalPramsManager_TypeInfo;
  }
  this->fields.isOrdealCallWarClear = v108->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4A4B57B )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v105);
    v108 = TerminalPramsManager_TypeInfo;
    byte_4A4B57B = 1;
  }
  if ( !v108->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v108);
    v108 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventMuralId = v108->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_4A4B6A4 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v105);
    v108 = TerminalPramsManager_TypeInfo;
    byte_4A4B6A4 = 1;
  }
  if ( !v108->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v108);
    v108 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventActionQuestId = v108->static_fields->_EventActionQuestId_k__BackingField;
  if ( !byte_4A4B57D )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v105);
    v108 = TerminalPramsManager_TypeInfo;
    byte_4A4B57D = 1;
  }
  if ( !v108->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v108);
    v108 = TerminalPramsManager_TypeInfo;
  }
  this->fields.playHappinessCounterEffect = v108->static_fields->_PlayHappinessCounterEffect_k__BackingField;
  if ( !byte_4A4AF90 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v105);
    v108 = TerminalPramsManager_TypeInfo;
    byte_4A4AF90 = 1;
  }
  if ( !v108->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v108);
    v108 = TerminalPramsManager_TypeInfo;
  }
  v109 = useAddRewardItemRewardInfos;
  OldUserEventPoint_k__BackingField = v108->static_fields->_OldUserEventPoint_k__BackingField;
  this->fields.oldUserEventPoint = OldUserEventPoint_k__BackingField;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.oldUserEventPoint,
    (int32_t)OldUserEventPoint_k__BackingField,
    v106,
    v107);
  if ( !useAddRewardItemRewardInfos )
  {
    v114 = Method_System_Array_Empty_QuestRewardInfo___;
    v115 = *((_QWORD *)Method_System_Array_Empty_QuestRewardInfo___ + 7);
    if ( !v115 )
    {
      sub_1BD6AA4(Method_System_Array_Empty_QuestRewardInfo___);
      v115 = v114[7];
    }
    v116 = *(_QWORD *)(v115 + 16);
    if ( (*(_BYTE *)(v116 + 309) & 1) == 0 )
      v116 = sub_1BD6A48(inited);
    if ( !*(_DWORD *)(v116 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v116);
    v117 = *(_QWORD *)(v114[7] + 16LL);
    if ( (*(_BYTE *)(v117 + 309) & 1) == 0 )
      v117 = sub_1BD6A48(inited);
    v109 = **(struct QuestRewardInfo_array ***)(v117 + 184);
  }
  this->fields.UseAddRewardItemRewardInfos = v109;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.UseAddRewardItemRewardInfos, (int32_t)v109, v111, v112);
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor_35512852(
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

  if ( (byte_4A4B9B5 & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, uSvtEnt);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4A4B9B5 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !uSvtEnt )
    sub_1B86614(v6, v7);
  v8 = *(_OWORD *)&uSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  this->fields.id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v13, 0LL);
  v9 = *(_OWORD *)&uSvtEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v9;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v12, 0LL);
  v11 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v15, 0LL);
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                              uSvtEnt->fields.limitCount,
                              0LL);
  this->fields.imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                   uSvtEnt->fields.imageLimitCount,
                                   0LL);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                  uSvtEnt->fields.dispLimitCount,
                                  0LL);
  this->fields.commandCardLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                         uSvtEnt->fields.commandCardLimitCount,
                                         0LL);
  this->fields.iconLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
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

  if ( (byte_4A4B9B6 & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_1B863B8(&UserServantEntity_TypeInfo, v4);
    byte_4A4B9B6 = 1;
  }
  v5 = sub_1B86604(UserServantEntity_TypeInfo);
  UserServantEntity___ctor((UserServantEntity_o *)v5, 0LL);
  id = this->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v14, id, 0LL);
  v15 = v14;
  if ( !v5 )
    sub_1B86614(v7, v8);
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
  *(_QWORD *)(v5 + 312) = this->fields.createdAt;
  return result;
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.oldUsrSvtData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, 0, v3, v4);
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_35513616(
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
  const MethodInfo *v12; // x3

  if ( (byte_4A4B9B7 & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_OldHeroineLawData_TypeInfo, qClearHeroineInfo);
    byte_4A4B9B7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !qClearHeroineInfo )
    sub_1B86614(v5, v6);
  oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
  v8 = (TerminalPramsManager_OldHeroineLawData_o *)sub_1B86604(TerminalPramsManager_OldHeroineLawData_TypeInfo);
  TerminalPramsManager_OldHeroineLawData___ctor_35512852(v8, oldUsrSvtData, v9);
  this->fields.oldUsrSvtData = v8;
  p_fields = &this->fields;
  sub_1B8635C((CGThumbnailListItem_o *)p_fields, (int32_t)v8, v11, v12);
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
  const MethodInfo *v7; // x3
  QuestClearHeroineInfo_o *result; // x0

  if ( (byte_4A4B9B8 & 1) == 0 )
  {
    sub_1B863B8(&QuestClearHeroineInfo_TypeInfo, method);
    byte_4A4B9B8 = 1;
  }
  v3 = sub_1B86604(QuestClearHeroineInfo_TypeInfo);
  QuestClearHeroineInfo___ctor((QuestClearHeroineInfo_o *)v3, 0LL);
  oldUsrSvtData = this->fields.oldUsrSvtData;
  if ( !oldUsrSvtData
    || (oldUsrSvtData = (TerminalPramsManager_OldHeroineLawData_o *)TerminalPramsManager_OldHeroineLawData__GetLoad(
                                                                      oldUsrSvtData,
                                                                      v4),
        !v3) )
  {
    sub_1B86614(oldUsrSvtData, v4);
  }
  *(_QWORD *)(v3 + 16) = oldUsrSvtData;
  sub_1B8635C((CGThumbnailListItem_o *)(v3 + 16), (int32_t)oldUsrSvtData, v6, v7);
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
  const MethodInfo *v4; // x3

  if ( (byte_4A4B9BC & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager___c_TypeInfo, v1);
    byte_4A4B9BC = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(TerminalPramsManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalPramsManager___c_TypeInfo->static_fields->__9 = (struct TerminalPramsManager___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)TerminalPramsManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall TerminalPramsManager___c___ctor(TerminalPramsManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TerminalPramsManager___c___ReceiveQuestEndResultInfo_b__712_0(
        TerminalPramsManager___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  int32_t questId; // w19
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4A4B9BD & 1) == 0 )
  {
    this = (TerminalPramsManager___c_o *)sub_1B863B8(&TerminalPramsManager_TypeInfo, n);
    byte_4A4B9BD = 1;
  }
  if ( !n )
    sub_1B86614(this, n);
  questId = n->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, n);
    byte_4A48E97 = 1;
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
bool __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__717_0(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  if ( (byte_4A4B9BE & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, *(_QWORD *)&v);
    byte_4A4B9BE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStoryForQuestId(v, 0LL);
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__717_3(
        TerminalPramsManager___c_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1B86614(this, 0LL);
  return v->fields.id;
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__717_4(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  return v;
}


void __fastcall TerminalPramsManager___c__DisplayClass700_0___ctor(
        TerminalPramsManager___c__DisplayClass700_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager___c__DisplayClass700_0___CheckResumeEffectNT2_b__0(
        TerminalPramsManager___c__DisplayClass700_0_o *this,
        System_String_o *effectId,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_fields; // x19
  System_String_o *effectIdsStr; // t1
  System_String_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4A4B9BF & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_43/*"\n"*/, effectId);
    byte_4A4B9BF = 1;
  }
  effectIdsStr = this->fields.effectIdsStr;
  p_fields = (CGThumbnailListItem_o *)&this->fields;
  v7 = System_String__Concat_61683424(effectIdsStr, effectId, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  p_fields->klass = (CGThumbnailListItem_c *)v7;
  sub_1B8635C(p_fields, (int32_t)v7, v8, v9);
}


void __fastcall TerminalPramsManager___c__DisplayClass717_0___ctor(
        TerminalPramsManager___c__DisplayClass717_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


QuestEntity_o *__fastcall TerminalPramsManager___c__DisplayClass717_0___SendOpenedQuestIdToAdManager_b__1(
        TerminalPramsManager___c__DisplayClass717_0_o *this,
        int32_t v,
        const MethodInfo *method)
{
  QuestMaster_o *questMaster; // x0

  questMaster = this->fields.questMaster;
  if ( !questMaster )
    sub_1B86614(0LL, v);
  return QuestMaster__getQuestEntity(questMaster, v, 0LL);
}


bool __fastcall TerminalPramsManager___c__DisplayClass717_0___SendOpenedQuestIdToAdManager_b__2(
        TerminalPramsManager___c__DisplayClass717_0_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  UserQuestMaster_o *userQuestMaster; // x20
  NetworkManager_c *v6; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A4B9C0 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v);
    byte_4A4B9C0 = 1;
  }
  entity = 0LL;
  userQuestMaster = this->fields.userQuestMaster;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v);
    byte_4A48C25 = 1;
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
    sub_1B86614(v6, v);
  }
  return 1;
}