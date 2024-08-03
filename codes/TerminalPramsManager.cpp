void __fastcall TerminalPramsManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_HashSet_int__o *v9; // x19
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  struct TerminalPramsManager_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x0
  struct TerminalPramsManager_StaticFields *v18; // x8
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x19
  ServantStatusBattleListViewItem_o *p_eventScriptMessages; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  struct TerminalPramsManager_StaticFields *v27; // x8

  if ( (byte_49F9A8C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v1);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1B640C8(&float___TypeInfo, v6);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49F9A8C = 1;
  }
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      v1,
                                                      v2);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->loginQuestNotifiedList = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->loginQuestNotifiedList, (int32_t)v9, v11, v12);
  v13 = (int)StringLiteral_1/*""*/;
  v14 = TerminalPramsManager_TypeInfo->static_fields;
  v14->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v14->mTerminalWarStartedIds, v13, v15, v16);
  *(_OWORD *)&TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = xmmword_BA3190;
  v17 = sub_1B64170(float___TypeInfo, 3LL);
  v18 = TerminalPramsManager_TypeInfo->static_fields;
  v18->TipsArchiveScrollValueList = (struct System_Single_array *)v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->TipsArchiveScrollValueList, v17, v19, v20);
  TerminalPramsManager_TypeInfo->static_fields->joinGroupId = -1;
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  p_eventScriptMessages = (ServantStatusBattleListViewItem_o *)&TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  p_eventScriptMessages->klass = (ServantStatusBattleListViewItem_c *)v23;
  sub_1B6406C(p_eventScriptMessages, (int32_t)v23, v25, v26);
  v27 = TerminalPramsManager_TypeInfo->static_fields;
  *(_QWORD *)&v27->EVENT_POINT_EFFECT_STATE_SUB = 0xFFFFFFFFLL;
  v27->EVENT_POINT_EFFECT_STATE_ADD = 1;
  v27->_ShopFocusItemId_k__BackingField = 0;
  v27->isInvisibleConnectAndLoad = 0;
  *(_QWORD *)&v27->ConnectMarkEventId = 0LL;
  v27->meSceneStatus = 0;
  v27->isCheckHomeExpirationDateEventMap = 1;
  *(_WORD *)&v27->IsEventMapLoading = 0;
  v27->_MasterMissionTargetType_k__BackingField = -1;
}


void __fastcall TerminalPramsManager__AddNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_49F9A6F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, method);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v3);
    byte_49F9A6F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v4->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1B64324(0LL);
  System_Collections_Generic_HashSet_int___Add(
    loginQuestNotifiedList,
    questId,
    (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall TerminalPramsManager__AutoOff(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49F9A33 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A33 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F7A3E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F7A3E = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 0;
  if ( !byte_49F9650 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v2 = TerminalPramsManager_TypeInfo;
    byte_49F9650 = 1;
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

  if ( (byte_49F9A63 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11370/*"SAVEKEY_BlankEarthRank"*/, v2);
    byte_49F9A63 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9AD2 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9AD2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11370/*"SAVEKEY_BlankEarthRank"*/,
    v3->static_fields->_BlankEarthRank_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__BlankEarthSpotId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9A62 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11371/*"SAVEKEY_BlankEarthSpotId"*/, v2);
    byte_49F9A62 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F903B )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F903B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11371/*"SAVEKEY_BlankEarthSpotId"*/,
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

  if ( (byte_49F9A61 & 1) == 0 )
  {
    sub_1B640C8(&CommonUI_CampaignDirectBonusData___TypeInfo, v1);
    sub_1B640C8(&JsonManager_TypeInfo, v2);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_11372/*"SAVEKEY_CampaignDirectBonus"*/, v4);
    byte_49F9A61 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9AD1 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9AD1 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_obj = &v5->static_fields->_CampaignDirectBonus_k__BackingField->obj;
  if ( !p_obj )
    p_obj = (Il2CppObject *)sub_1B64170(CommonUI_CampaignDirectBonusData___TypeInfo, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__toJson(p_obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11372/*"SAVEKEY_CampaignDirectBonus"*/, v7, 0LL);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  Il2CppObject *v12; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F9A7D & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_SpotMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49F9A7D = 1;
  }
  v12 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !entity )
    goto LABEL_16;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0LL);
  if ( !v9 )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v9,
          &v12,
          (int32_t)Instance,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v12 )
LABEL_16:
    sub_1B64324(Instance);
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
            HIDWORD(v12[1].klass),
            (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall TerminalPramsManager__CheckClearSelectedStoryQuestId(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_49F9A64 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A64 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9807 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9807 = 1;
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
    if ( !byte_49F9807 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
      byte_49F9807 = 1;
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
      if ( !byte_49F946B )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
        byte_49F946B = 1;
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

  if ( (byte_49F9A4D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_13530/*"TerminalBeforeEventActivityPoint"*/, v1);
    sub_1B640C8(&StringLiteral_13531/*"TerminalBeforeEventActivityPointGauge"*/, v2);
    byte_49F9A4D = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13530/*"TerminalBeforeEventActivityPoint"*/, 0LL)
      && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13531/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckEventSubmarinePointSaveData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F9A4F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_13532/*"TerminalBeforeEventSubmarinePointData"*/, v1);
    byte_49F9A4F = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13532/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckIsOrdealCallWarClear(WarEntity_o *warEntity, const MethodInfo *method)
{
  int32_t parentWarId; // w19
  BalanceConfig_c *v4; // x0

  if ( (byte_49F9A8A & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    byte_49F9A8A = 1;
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
  __int64 v13; // x19
  const MethodInfo *v14; // x1
  TerminalPramsManager_c *v15; // x0
  ScrTerminalListTop_c *v16; // x8
  int32_t NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // w20
  const MethodInfo *v18; // x1
  ScrTerminalListTop_c *v19; // x0
  int32_t NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // w20
  ScrTerminalListTop_c *v21; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x20
  TerminalPramsManager_c *v24; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_List_object__o *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  __int64 v31; // x1
  __int64 v32; // x2
  System_Action_object__o *v33; // x22
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  ServantStatusBattleListViewItem_c *v37; // x19
  TerminalPramsManager_c *v38; // x0
  ServantStatusBattleListViewItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  const MethodInfo *v40; // x0
  int32_t v41; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F9A68 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_string__TypeInfo, v1);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_string___, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ForEach__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Remove__, v5);
    sub_1B640C8(&ScrTerminalListTop_TypeInfo, v6);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
    sub_1B640C8(&Method_TerminalPramsManager___c__DisplayClass640_0__CheckResumeEffectNT2_b__0__, v8);
    sub_1B640C8(&TerminalPramsManager___c__DisplayClass640_0_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v10);
    sub_1B640C8(&StringLiteral_89/*"\r\n"*/, v11);
    sub_1B640C8(&StringLiteral_1/*""*/, v12);
    byte_49F9A68 = 1;
  }
  v41 = 0;
  v13 = sub_1B64314(TerminalPramsManager___c__DisplayClass640_0_TypeInfo, v1, v2);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9ACF )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v14);
    byte_49F9ACF = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  if ( v15->static_fields->_PlayedTerminalEffects_k__BackingField )
  {
    v16 = ScrTerminalListTop_TypeInfo;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v16 = ScrTerminalListTop_TypeInfo;
      v15 = TerminalPramsManager_TypeInfo;
    }
    NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v16->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
    if ( !v15->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v15);
    if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID, v14) )
    {
      v19 = ScrTerminalListTop_TypeInfo;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v19 = ScrTerminalListTop_TypeInfo;
      }
      NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID = v19->static_fields->NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID, v18) )
      {
        v21 = ScrTerminalListTop_TypeInfo;
        if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
          v21 = ScrTerminalListTop_TypeInfo;
        }
        v41 = v21->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
        v23 = (Il2CppObject *)System_Int32__ToString((int32_t)&v41, 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49F9ACF )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v22);
          byte_49F9ACF = 1;
        }
        v24 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v24 = TerminalPramsManager_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v24->static_fields->_PlayedTerminalEffects_k__BackingField;
        if ( !PlayedTerminalEffects_k__BackingField
          || (PlayedTerminalEffects_k__BackingField = System_String__Replace_61395016(
                                                        PlayedTerminalEffects_k__BackingField,
                                                        (System_String_o *)StringLiteral_89/*"\r\n"*/,
                                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                                        0LL)) == 0LL
          || (v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                           PlayedTerminalEffects_k__BackingField,
                                                                           0xAu,
                                                                           0,
                                                                           0LL),
              (PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Linq_Enumerable__ToList_object_(
                                                                            v26,
                                                                            (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL)
          || (v27 = (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
              PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Collections_Generic_List_object___Remove(
                                                                           (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
                                                                           v23,
                                                                           (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_string__Remove__),
              !v13) )
        {
          sub_1B64324(PlayedTerminalEffects_k__BackingField);
        }
        v30 = (int)StringLiteral_1/*""*/;
        *(_QWORD *)(v13 + 16) = StringLiteral_1/*""*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), v30, v28, v29);
        v33 = (System_Action_object__o *)sub_1B64314(System_Action_string__TypeInfo, v31, v32);
        System_Action_object____ctor(
          v33,
          (Il2CppObject *)v13,
          Method_TerminalPramsManager___c__DisplayClass640_0__CheckResumeEffectNT2_b__0__,
          0LL);
        System_Collections_Generic_List_object___ForEach(
          v27,
          (System_Action_T__o *)v33,
          (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_string__ForEach__);
        v37 = *(ServantStatusBattleListViewItem_c **)(v13 + 16);
        if ( !byte_49F9AC0 )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v34);
          byte_49F9AC0 = 1;
        }
        v38 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v38 = TerminalPramsManager_TypeInfo;
        }
        p_PlayedTerminalEffects_k__BackingField = (ServantStatusBattleListViewItem_o *)&v38->static_fields->_PlayedTerminalEffects_k__BackingField;
        p_PlayedTerminalEffects_k__BackingField->klass = v37;
        sub_1B6406C(p_PlayedTerminalEffects_k__BackingField, (int32_t)v37, v35, v36);
        TerminalPramsManager__Save_SaveData(v40);
      }
    }
  }
}


void __fastcall TerminalPramsManager__ClearEventQuestIds_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9A5C & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11373/*"SAVEKEY_ClearEventQuestIds"*/, v2);
    byte_49F9A5C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9047 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9047 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11373/*"SAVEKEY_ClearEventQuestIds"*/,
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

  if ( (byte_49F9A5B & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11375/*"SAVEKEY_ConnectMarkEventId"*/, v2);
    sub_1B640C8(&StringLiteral_11374/*"SAVEKEY_ConnectMarkAnimationId"*/, v3);
    byte_49F9A5B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11375/*"SAVEKEY_ConnectMarkEventId"*/, v4->static_fields->ConnectMarkEventId, 0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11374/*"SAVEKEY_ConnectMarkAnimationId"*/,
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

  if ( (byte_49F9A80 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49F9A80 = 1;
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
  if ( !byte_49F9AE5 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49F9AE5 = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->lastPlayBgmName, v10, v6, v7);
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

  if ( (byte_49F9A40 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11378/*"SAVEKEY_LastPlayBgmName"*/, v2);
    sub_1B640C8(&StringLiteral_13534/*"TerminalEndTime"*/, v3);
    sub_1B640C8(&StringLiteral_5195/*"Debug_IsOriginalGuestNPC"*/, v4);
    sub_1B640C8(&StringLiteral_11384/*"SAVEKEY_PlayedTerminalEffects"*/, v5);
    sub_1B640C8(&StringLiteral_13530/*"TerminalBeforeEventActivityPoint"*/, v6);
    sub_1B640C8(&StringLiteral_11372/*"SAVEKEY_CampaignDirectBonus"*/, v7);
    sub_1B640C8(&StringLiteral_11379/*"SAVEKEY_LastPlayQuestConsumeType"*/, v8);
    sub_1B640C8(&StringLiteral_13535/*"TerminalEventDailyPointEventId"*/, v9);
    sub_1B640C8(&StringLiteral_5191/*"Debug_GuestNPCInfoList"*/, v10);
    sub_1B640C8(&StringLiteral_13532/*"TerminalBeforeEventSubmarinePointData"*/, v11);
    sub_1B640C8(&StringLiteral_13541/*"TerminalPhaseCnt"*/, v12);
    sub_1B640C8(&StringLiteral_11388/*"SAVEKEY_TerminalConquestInfos"*/, v13);
    sub_1B640C8(&StringLiteral_13549/*"TerminalTimeStatusEventId"*/, v14);
    sub_1B640C8(&StringLiteral_13533/*"TerminalDispState"*/, v15);
    sub_1B640C8(&StringLiteral_11381/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v16);
    sub_1B640C8(&StringLiteral_13536/*"TerminalIsDoneShortcut"*/, v17);
    sub_1B640C8(&StringLiteral_11380/*"SAVEKEY_MapModelClearQuestInfo"*/, v18);
    sub_1B640C8(&StringLiteral_11385/*"SAVEKEY_PlayerGenderType"*/, v19);
    sub_1B640C8(&StringLiteral_11389/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v20);
    sub_1B640C8(&StringLiteral_11373/*"SAVEKEY_ClearEventQuestIds"*/, v21);
    sub_1B640C8(&StringLiteral_11382/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v22);
    sub_1B640C8(&StringLiteral_5196/*"Debug_IsQuestReleaseAll"*/, v23);
    sub_1B640C8(&StringLiteral_5193/*"Debug_IsDummyErrorSelect"*/, v24);
    sub_1B640C8(&StringLiteral_13544/*"TerminalQuestId"*/, v25);
    sub_1B640C8(&StringLiteral_11387/*"SAVEKEY_TerminalConquestInfoDisp"*/, v26);
    sub_1B640C8(&StringLiteral_11392/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v27);
    sub_1B640C8(&StringLiteral_13548/*"TerminalTimeStatusEventDailyPoint"*/, v28);
    sub_1B640C8(&StringLiteral_13553/*"TerminalWarId"*/, v29);
    sub_1B640C8(&StringLiteral_13546/*"TerminalSpotId"*/, v30);
    sub_1B640C8(&StringLiteral_13550/*"TerminalTimeStatusLoopCount"*/, v31);
    sub_1B640C8(&StringLiteral_13531/*"TerminalBeforeEventActivityPointGauge"*/, v32);
    sub_1B640C8(&StringLiteral_11371/*"SAVEKEY_BlankEarthSpotId"*/, v33);
    sub_1B640C8(&StringLiteral_11376/*"SAVEKEY_DataLostBattleAutoReset"*/, v34);
    sub_1B640C8(&StringLiteral_5194/*"Debug_IsOriginalBattle"*/, v35);
    sub_1B640C8(&StringLiteral_13554/*"TerminalWarStartedIds"*/, v36);
    sub_1B640C8(&StringLiteral_5190/*"Debug_BattleEnemyList"*/, v37);
    sub_1B640C8(&StringLiteral_11375/*"SAVEKEY_ConnectMarkEventId"*/, v38);
    sub_1B640C8(&StringLiteral_13552/*"TerminalTransitionInfoVoiceAssetName"*/, v39);
    sub_1B640C8(&StringLiteral_11374/*"SAVEKEY_ConnectMarkAnimationId"*/, v40);
    sub_1B640C8(&StringLiteral_11383/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v41);
    sub_1B640C8(&StringLiteral_13539/*"TerminalLastPlayedQuestId"*/, v42);
    sub_1B640C8(&StringLiteral_5192/*"Debug_IsBuildInfoDisp"*/, v43);
    sub_1B640C8(&StringLiteral_13551/*"TerminalTransitionInfoMissionId"*/, v44);
    sub_1B640C8(&StringLiteral_11391/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v45);
    byte_49F9A40 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13533/*"TerminalDispState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13553/*"TerminalWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13546/*"TerminalSpotId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13544/*"TerminalQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13539/*"TerminalLastPlayedQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13541/*"TerminalPhaseCnt"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13534/*"TerminalEndTime"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13536/*"TerminalIsDoneShortcut"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13554/*"TerminalWarStartedIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5196/*"Debug_IsQuestReleaseAll"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5193/*"Debug_IsDummyErrorSelect"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5192/*"Debug_IsBuildInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5194/*"Debug_IsOriginalBattle"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5195/*"Debug_IsOriginalGuestNPC"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5190/*"Debug_BattleEnemyList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5191/*"Debug_GuestNPCInfoList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13549/*"TerminalTimeStatusEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13550/*"TerminalTimeStatusLoopCount"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13535/*"TerminalEventDailyPointEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13548/*"TerminalTimeStatusEventDailyPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13551/*"TerminalTransitionInfoMissionId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13552/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13530/*"TerminalBeforeEventActivityPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13531/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13532/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11388/*"SAVEKEY_TerminalConquestInfos"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11387/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11389/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11378/*"SAVEKEY_LastPlayBgmName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11379/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11384/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11381/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11382/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11383/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11392/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11375/*"SAVEKEY_ConnectMarkEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11374/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11391/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11373/*"SAVEKEY_ClearEventQuestIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11380/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11376/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11385/*"SAVEKEY_PlayerGenderType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11372/*"SAVEKEY_CampaignDirectBonus"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11371/*"SAVEKEY_BlankEarthSpotId"*/, 0LL);
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

  if ( (byte_49F9A81 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11377/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v4);
    byte_49F9A81 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9AE6 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9AE6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_EventRaidDefeatedEffectInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v5->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  p_EventRaidDefeatedEffectInfo_k__BackingField->klass = 0LL;
  sub_1B6406C(p_EventRaidDefeatedEffectInfo_k__BackingField, 0, v2, v3);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11377/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, 0LL);
}


void __fastcall TerminalPramsManager__DeleteQuestRandomGroupList(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  ServantStatusBattleListViewItem_o *p_QuestRandomGroupList_k__BackingField; // x0

  if ( (byte_49F9A86 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11386/*"SAVEKEY_QuestRandomGroupList"*/, v4);
    byte_49F9A86 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9AE8 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9AE8 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_QuestRandomGroupList_k__BackingField = (ServantStatusBattleListViewItem_o *)&v5->static_fields->_QuestRandomGroupList_k__BackingField;
  p_QuestRandomGroupList_k__BackingField->klass = 0LL;
  sub_1B6406C(p_QuestRandomGroupList_k__BackingField, 0, v2, v3);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11386/*"SAVEKEY_QuestRandomGroupList"*/, 0LL);
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

  if ( (byte_49F9A49 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_13535/*"TerminalEventDailyPointEventId"*/, v2);
    sub_1B640C8(&StringLiteral_13548/*"TerminalTimeStatusEventDailyPoint"*/, v3);
    byte_49F9A49 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9ACB )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9ACB = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13535/*"TerminalEventDailyPointEventId"*/,
    v4->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_49F9ACC )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49F9ACC = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  BeforeTimeEventDailyPoint_k__BackingField = v6->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v7 = System_Int64__ToString((int64_t)&BeforeTimeEventDailyPoint_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13548/*"TerminalTimeStatusEventDailyPoint"*/, v7, 0LL);
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

  if ( (byte_49F9A48 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_13549/*"TerminalTimeStatusEventId"*/, v2);
    sub_1B640C8(&StringLiteral_13550/*"TerminalTimeStatusLoopCount"*/, v3);
    byte_49F9A48 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9802 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9802 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13549/*"TerminalTimeStatusEventId"*/,
    v4->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_49F9803 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49F9803 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13550/*"TerminalTimeStatusLoopCount"*/,
    v6->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


float __fastcall TerminalPramsManager__GetAutoIntpTime(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t targetFrameRate; // w0

  if ( (byte_49F9A3B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, v1);
    byte_49F9A3B = 1;
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
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49F9A6D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, method);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v3);
    byte_49F9A6D = 1;
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
      sub_1B64324(v6);
  }
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         folderLastIdxs,
         warId,
         &value,
         (const MethodInfo_311C54C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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

  if ( (byte_49F9A3C & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v2);
    byte_49F9A3C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9177 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v2);
    byte_49F9177 = 1;
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
  if ( !byte_49F9667 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v2);
    byte_49F9667 = 1;
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

  if ( (byte_49F9A73 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A73 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v3);
  if ( !QuestFocusStateManager )
    sub_1B64324(0LL);
  return QuestFocusStateManager__GetFocusState(QuestFocusStateManager, questId, 0LL);
}


void __fastcall TerminalPramsManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_49F9A42 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A42 = 1;
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

  if ( (byte_49F9A6B & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49F9A6B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F84B0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F84B0 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsDispOnly_k__BackingField = 0;
  v6 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_49F9653 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49F9653 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = v6;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->_QuestWindowMessage_k__BackingField,
    (int32_t)v6,
    v2,
    v3);
  if ( !byte_49F9652 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v8);
    byte_49F9652 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_MessageDispType_k__BackingField = 0;
  if ( !byte_49F84AF )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v8);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F84AF = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v12 = v11->static_fields;
  v12->_BattleSetupKeep_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12->_BattleSetupKeep_k__BackingField, 0, v9, v10);
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

  if ( (byte_49F9A41 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49F9A41 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F904F )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F904F = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_49F904E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49F904E = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_SpotId_k__BackingField = 0;
  if ( !byte_49F9049 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49F9049 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_QuestId_k__BackingField = 0;
  if ( !byte_49F9682 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49F9682 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_LastPlayedQuestId_k__BackingField = 0;
  if ( !byte_49F9AB6 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49F9AB6 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
  if ( !byte_49F9683 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49F9683 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = 0;
  if ( !byte_49F935B )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49F935B = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_AfterActionFocusQuestId_k__BackingField = 0;
  if ( !byte_49F946B )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49F946B = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
  if ( !byte_49F81D7 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49F81D7 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  if ( !byte_49F946C )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49F946C = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
  if ( !byte_49F967B )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49F967B = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 0;
  if ( !byte_49F9679 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49F9679 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
  if ( !byte_49F8D25 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49F8D25 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField, 0, v2, v3);
  if ( !byte_49F904D )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
    byte_49F904D = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_PhaseCnt_k__BackingField = 0;
  if ( !byte_49F904A )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49F904A = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_EndTime_k__BackingField = 0LL;
  if ( !byte_49F904C )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
    v10 = TerminalPramsManager_TypeInfo;
    byte_49F904C = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->mTerminalWarStartedIds, v12, v8, v9);
  if ( !byte_49F9AB7 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v13);
    byte_49F9AB7 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->mDebug_IsQuestReleaseAll = 0;
  if ( !byte_49F9AB8 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v13);
    v16 = TerminalPramsManager_TypeInfo;
    byte_49F9AB8 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->mDebug_IsDummyErrorSelect = 0;
  if ( !byte_49F9AB9 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v13);
    v16 = TerminalPramsManager_TypeInfo;
    byte_49F9AB9 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->mDebug_IsBuildInfoDisp = 0;
  if ( !byte_49F967E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v13);
    v16 = TerminalPramsManager_TypeInfo;
    byte_49F967E = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_TimeStatusEventId_k__BackingField = 0;
  if ( !byte_49F967F )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v13);
    v16 = TerminalPramsManager_TypeInfo;
    byte_49F967F = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_TimeStatusLoopCount_k__BackingField = 0;
  if ( !byte_49F9ABA )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v13);
    v16 = TerminalPramsManager_TypeInfo;
    byte_49F9ABA = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  p_timeStatusRecord_k__BackingField = (ServantStatusBattleListViewItem_o *)&v16->static_fields->_timeStatusRecord_k__BackingField;
  p_timeStatusRecord_k__BackingField->klass = 0LL;
  sub_1B6406C(p_timeStatusRecord_k__BackingField, 0, v14, v15);
  if ( !byte_49F9ABB )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v18);
    byte_49F9ABB = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  v21->static_fields->_EventDailyPointEventId_k__BackingField = 0;
  if ( !byte_49F9ABC )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v18);
    v21 = TerminalPramsManager_TypeInfo;
    byte_49F9ABC = 1;
  }
  if ( !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = TerminalPramsManager_TypeInfo;
  }
  v21->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = 0LL;
  if ( !byte_49F9ABD )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v18);
    v21 = TerminalPramsManager_TypeInfo;
    byte_49F9ABD = 1;
  }
  if ( !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = TerminalPramsManager_TypeInfo;
  }
  v21->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
  if ( !byte_49F9ABE )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v18);
    v21 = TerminalPramsManager_TypeInfo;
    byte_49F9ABE = 1;
  }
  if ( !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = TerminalPramsManager_TypeInfo;
  }
  v21->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
  if ( !byte_49F9179 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v18);
    v21 = TerminalPramsManager_TypeInfo;
    byte_49F9179 = 1;
  }
  if ( !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = TerminalPramsManager_TypeInfo;
  }
  p_BeforeEventSubmarineSaveData_k__BackingField = (ServantStatusBattleListViewItem_o *)&v21->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  p_BeforeEventSubmarineSaveData_k__BackingField->klass = 0LL;
  sub_1B6406C(p_BeforeEventSubmarineSaveData_k__BackingField, 0, v19, v20);
  v23 = (int)StringLiteral_1/*""*/;
  p_lastPlayBgmName = (ServantStatusBattleListViewItem_o *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayBgmName;
  p_lastPlayBgmName->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  sub_1B6406C(p_lastPlayBgmName, v23, v25, v26);
  v30 = TerminalPramsManager_TypeInfo;
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayQuestConsumeAp = 0LL;
  if ( !byte_49F9ABF )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v27);
    v30 = TerminalPramsManager_TypeInfo;
    byte_49F9ABF = 1;
  }
  if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30);
    v30 = TerminalPramsManager_TypeInfo;
  }
  v31 = v30->static_fields;
  v31->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v31->_SpecifiedChangeSceneInfo_k__BackingField, 0, v28, v29);
  if ( !byte_49F9812 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v32);
    byte_49F9812 = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v33->static_fields->_EventBoardGameSquareIndex_k__BackingField = 0;
  if ( !byte_49F9814 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v32);
    v33 = TerminalPramsManager_TypeInfo;
    byte_49F9814 = 1;
  }
  if ( !v33->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v33);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v33->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = 0;
  if ( !byte_49F9816 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v32);
    v33 = TerminalPramsManager_TypeInfo;
    byte_49F9816 = 1;
  }
  if ( !v33->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v33);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v33->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
  if ( !byte_49F9AB3 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v32);
    v33 = TerminalPramsManager_TypeInfo;
    byte_49F9AB3 = 1;
  }
  if ( !v33->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v33);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v33->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v33);
  TerminalPramsManager__ResetResumeScriptWithMap(v34);
  if ( !byte_49F966E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v35);
    byte_49F966E = 1;
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v38 = TerminalPramsManager_TypeInfo;
  }
  v38->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
  v39 = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  if ( !byte_49F9AC0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v35);
    v38 = TerminalPramsManager_TypeInfo;
    byte_49F9AC0 = 1;
  }
  if ( !v38->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v38);
    v38 = TerminalPramsManager_TypeInfo;
  }
  p_PlayedTerminalEffects_k__BackingField = (ServantStatusBattleListViewItem_o *)&v38->static_fields->_PlayedTerminalEffects_k__BackingField;
  p_PlayedTerminalEffects_k__BackingField->klass = v39;
  sub_1B6406C(p_PlayedTerminalEffects_k__BackingField, (int32_t)v39, v36, v37);
  if ( !byte_49F98E8 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    byte_49F98E8 = 1;
  }
  v44 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = 0;
  if ( !byte_49F98E9 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49F98E9 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = 0;
  if ( !byte_49F9805 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49F9805 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v45 = v44->static_fields;
  v45->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  *(_QWORD *)&v45->ConnectMarkEventId = 0LL;
  if ( !byte_49F76BF )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49F76BF = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField = 0;
  if ( !byte_49F9AC1 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49F9AC1 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_isFortificationCheck_k__BackingField = 0;
  if ( !byte_49F9AC2 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49F9AC2 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !byte_49F9AC3 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49F9AC3 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !byte_49F980C )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49F980C = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_49F9672 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49F9672 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_49F980A )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49F980A = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_49F980B )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49F980B = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_49F9809 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49F9809 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_49F980C )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49F980C = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_49F97FF )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49F97FF = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 0.0;
  if ( !byte_49F9AC4 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49F9AC4 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  if ( !byte_49F9469 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49F9469 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_49F7B7C )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49F7B7C = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_PlayerGenderType_k__BackingField = 0;
  if ( !byte_49F9AC5 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49F9AC5 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  v46 = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  if ( !byte_49F9810 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    v44 = TerminalPramsManager_TypeInfo;
    byte_49F9810 = 1;
  }
  if ( !v44->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v44);
    v44 = TerminalPramsManager_TypeInfo;
  }
  p_SceneMoveQuestClearedInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v44->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
  p_SceneMoveQuestClearedInfo_k__BackingField->klass = v46;
  sub_1B6406C(p_SceneMoveQuestClearedInfo_k__BackingField, (int32_t)v46, v42, v43);
  if ( !byte_49F9AC6 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v48);
    byte_49F9AC6 = 1;
  }
  v51 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v51 = TerminalPramsManager_TypeInfo;
  }
  v52 = v51->static_fields;
  v52->_CampaignBonus_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v52->_CampaignBonus_k__BackingField, 0, v49, v50);
  if ( !byte_49F9AC7 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v53);
    byte_49F9AC7 = 1;
  }
  v56 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v56 = TerminalPramsManager_TypeInfo;
  }
  v57 = v56->static_fields;
  v57->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v57->_CampaignDirectBonus_k__BackingField, 0, v54, v55);
  if ( !byte_49F9AC8 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v58);
    byte_49F9AC8 = 1;
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

  if ( (byte_49F9A8B & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A8B = 1;
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
      sub_1B64324(v2);
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
      sub_1B6432C(v2, v1);
    v6 = (char *)v5 + 4 * i;
    *((_DWORD *)v6 + 8) = 0;
  }
}


bool __fastcall TerminalPramsManager__IsAuto(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_49F9A30 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A30 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9177 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9177 = 1;
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
  if ( !byte_49F9AB0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9AB0 = 1;
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

  if ( (byte_49F9A32 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v1);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarMaster___, v2);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v6);
    byte_49F9A32 = 1;
  }
  entity = 0LL;
  v14 = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9177 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9177 = 1;
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
  if ( !byte_49F9048 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9048 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_WarId_k__BackingField < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9048 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v10);
    byte_49F9048 = 1;
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
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !entity)
    || !Instance )
  {
LABEL_34:
    sub_1B64324(Instance);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v14,
          (int32_t)entity[6].klass,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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

  if ( (byte_49F9A5E & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11376/*"SAVEKEY_DataLostBattleAutoReset"*/, v2);
    byte_49F9A5E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9808 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9808 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11376/*"SAVEKEY_DataLostBattleAutoReset"*/,
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
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  int klass_high; // w19
  BalanceConfig_c *v10; // x0
  Il2CppObject *v12; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F9A89 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v6);
    byte_49F9A89 = 1;
  }
  v12 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestMaster___);
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
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !entity
    || (v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
        Master_object = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0LL),
        !v8) )
  {
LABEL_20:
    sub_1B64324(Master_object);
  }
  Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v8,
                                     &v12,
                                     (int32_t)Master_object,
                                     (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  if ( !v12 )
    goto LABEL_20;
  klass_high = HIDWORD(v12[1].klass);
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  return klass_high == v10->static_fields->OrdealCallWarId;
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
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F9A7B & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49F9A7B = 1;
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
            (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarMaster___);
        if ( Instance )
        {
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       &entity,
                                       warId,
                                       (const MethodInfo_30D3EF8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( entity )
            return LODWORD(entity[6].klass) == 0;
        }
      }
      sub_1B64324(Instance);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  const MethodInfo *v9; // x1
  int32_t klass_high; // w19
  Il2CppObject *v13; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F9A7C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_SpotMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v6);
    byte_49F9A7C = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SpotMaster___),
        !entity)
    || (v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (Il2CppObject *)QuestEntity__getSpotId(entity, 0LL),
        !v8) )
  {
LABEL_16:
    sub_1B64324(Instance);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               v8,
                               &v13,
                               (int32_t)Instance,
                               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !v13 )
    goto LABEL_16;
  klass_high = HIDWORD(v13[1].klass);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStory(klass_high, v9);
}


bool __fastcall TerminalPramsManager__IsMustPlayMainStory(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_49F9A7A & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v3);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v4);
    byte_49F9A7A = 1;
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
         (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___) )
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

  if ( (byte_49F9A6E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Contains__, method);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v3);
    byte_49F9A6E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v4->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1B64324(0LL);
  return System_Collections_Generic_HashSet_int___Contains(
           loginQuestNotifiedList,
           questId,
           (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9A57 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11382/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v2);
    byte_49F9A57 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9670 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9670 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11382/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v3->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9A56 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11381/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v2);
    byte_49F9A56 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F966F )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F966F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11381/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v3->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectNt2AfterAction_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9A58 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11383/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v2);
    byte_49F9A58 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9804 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9804 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11383/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
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

  if ( (byte_49F9A85 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, *(_QWORD *)&day);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v6);
    byte_49F9A85 = 1;
  }
  value = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9AE7 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    byte_49F9AE7 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_QWORD *)&v7[2].fields._entries->m_Items[17].fields.hashCode;
  if ( !v8 || (v7 = *(System_Collections_Generic_Dictionary_int__object__o **)(v8 + 16)) == 0LL )
    sub_1B64324(v7);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         v7,
         eventId,
         &value,
         (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v9 = (char)value;
    if ( value )
      v9 = System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             day,
             (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
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
  clsQuestCheck_o *v7; // x19
  clsQuestCheck_o *v8; // x19
  __int64 v9; // x1
  TerminalPramsManager_c *v10; // x0
  ScrTerminalListTop_c *v11; // x8
  int32_t QuestId_k__BackingField; // w19
  TerminalPramsManager_c *v13; // x0

  if ( (byte_49F9A67 & 1) == 0 )
  {
    sub_1B640C8(&ScrTerminalListTop_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v2);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v3);
    byte_49F9A67 = 1;
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v7 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v7 )
    goto LABEL_34;
  if ( !clsQuestCheck__IsQuestClear(
          v7,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0LL) )
    return 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v8 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v8 )
LABEL_34:
    sub_1B64324(Instance);
  if ( !clsQuestCheck__IsWarClear(
          v8,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
          0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9045 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v9);
      byte_49F9045 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v11 = ScrTerminalListTop_TypeInfo;
    QuestId_k__BackingField = v10->static_fields->_QuestId_k__BackingField;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v11 = ScrTerminalListTop_TypeInfo;
    }
    if ( QuestId_k__BackingField == v11->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9050 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v9);
        byte_49F9050 = 1;
      }
      v13 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v13 = TerminalPramsManager_TypeInfo;
      }
      if ( v13->static_fields->_PhaseCnt_k__BackingField == 2 )
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
  __int64 v9; // x1
  System_String_c *klass; // x8
  System_String_o *v11; // x20
  unsigned __int64 v12; // x21
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v14 = effectId;
  if ( (byte_49F9A65 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v2);
    sub_1B640C8(&StringLiteral_89/*"\r\n"*/, v3);
    byte_49F9A65 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9ACF )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9ACF = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( !v4->static_fields->_PlayedTerminalEffects_k__BackingField )
    goto LABEL_25;
  v6 = System_Int32__ToString((int32_t)&v14, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9ACF )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49F9ACF = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  PlayedTerminalEffects_k__BackingField = v7->static_fields->_PlayedTerminalEffects_k__BackingField;
  if ( !PlayedTerminalEffects_k__BackingField
    || (PlayedTerminalEffects_k__BackingField = System_String__Replace_61395016(
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
    sub_1B64324(PlayedTerminalEffects_k__BackingField);
  }
  klass = PlayedTerminalEffects_k__BackingField[1].klass;
  v11 = PlayedTerminalEffects_k__BackingField;
  if ( (int)klass >= 1 )
  {
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)klass )
        sub_1B6432C(PlayedTerminalEffects_k__BackingField, v9);
      PlayedTerminalEffects_k__BackingField = (System_String_o *)System_String__op_Equality(
                                                                   *((System_String_o **)&v11[1].monitor + v12),
                                                                   v6,
                                                                   0LL);
      if ( ((unsigned __int8)PlayedTerminalEffects_k__BackingField & 1) != 0 )
        break;
      LODWORD(klass) = v11[1].klass;
      ++v12;
    }
    while ( (__int64)v12 < (int)klass );
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
  __int64 v6; // x1
  System_String_c *klass; // x8
  System_String_o *v8; // x19
  bool v9; // w21
  unsigned __int64 v10; // x22
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  v14 = war_id;
  if ( (byte_49F9A69 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v2);
    sub_1B640C8(&StringLiteral_89/*"\r\n"*/, v3);
    byte_49F9A69 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  mTerminalWarStartedIds = v4->static_fields->mTerminalWarStartedIds;
  if ( !mTerminalWarStartedIds
    || (mTerminalWarStartedIds = System_String__Replace_61395016(
                                   mTerminalWarStartedIds,
                                   (System_String_o *)StringLiteral_89/*"\r\n"*/,
                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                   0LL)) == 0LL
    || (mTerminalWarStartedIds = (System_String_o *)System_String__Split(mTerminalWarStartedIds, 0xAu, 0, 0LL)) == 0LL )
  {
    sub_1B64324(mTerminalWarStartedIds);
  }
  klass = mTerminalWarStartedIds[1].klass;
  v8 = mTerminalWarStartedIds;
  v9 = (int)klass > 0;
  if ( (int)klass >= 1 )
  {
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)klass )
        sub_1B6432C(mTerminalWarStartedIds, v6);
      v11 = (System_String_o *)*((_QWORD *)&v8[1].monitor + v10);
      v12 = System_Int32__ToString((int32_t)&v14, 0LL);
      mTerminalWarStartedIds = (System_String_o *)System_String__op_Equality(v11, v12, 0LL);
      if ( ((unsigned __int8)mTerminalWarStartedIds & 1) != 0 )
        break;
      LODWORD(klass) = v8[1].klass;
      v9 = (__int64)++v10 < (int)klass;
    }
    while ( (__int64)v10 < (int)klass );
  }
  return v9;
}


void __fastcall TerminalPramsManager__LastPanelEventPointSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9A55 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_13537/*"TerminalLastPanelEventPoint"*/, v2);
    byte_49F9A55 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13537/*"TerminalLastPanelEventPoint"*/, v3->static_fields->panelEventPoint, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayBgmNameSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9A53 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11378/*"SAVEKEY_LastPlayBgmName"*/, v2);
    byte_49F9A53 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11378/*"SAVEKEY_LastPlayBgmName"*/, v3->static_fields->lastPlayBgmName, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9A54 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11379/*"SAVEKEY_LastPlayQuestConsumeType"*/, v2);
    byte_49F9A54 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11379/*"SAVEKEY_LastPlayQuestConsumeType"*/,
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
  Il2CppObject *String_69086012; // x19
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
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppClass *v35; // x8
  TerminalPramsManager_c *v36; // x0
  Il2CppClass *v37; // x20
  ServantStatusBattleListViewItem_o *p_mQuestPhaseRewardInfos; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  TerminalPramsManager_c *v43; // x8
  struct TerminalPramsManager_StaticFields *v44; // x9
  _QWORD *v45; // x9
  struct UserSuperBossEntity_array *v46; // x20
  TerminalPramsManager_c *v47; // x0
  struct TerminalPramsManager_StaticFields *v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppClass *v53; // x8
  Il2CppClass *v54; // x20
  TerminalPramsManager_c *v55; // x0
  struct TerminalPramsManager_StaticFields *v56; // x0
  __int64 v57; // x0
  __int64 v58; // x1
  int32_t v59; // w2
  int32_t v60; // w3
  int *v61; // x8
  ServantStatusBattleListViewItem_c *v62; // x20
  TerminalPramsManager_c *v63; // x0
  ServantStatusBattleListViewItem_o *p_eventPointWinReward_k__BackingField; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  int32_t v67; // w2
  int32_t v68; // w3
  int32_t v69; // w20
  TerminalPramsManager_c *v70; // x8
  int *v71; // x9
  ServantStatusBattleListViewItem_c *v72; // x20
  TerminalPramsManager_c *v73; // x0
  ServantStatusBattleListViewItem_o *p_eventRaceBoost_k__BackingField; // x0
  __int64 v75; // x0
  __int64 v76; // x1
  int32_t v77; // w2
  int32_t v78; // w3
  Il2CppClass *v79; // x8
  Il2CppClass *v80; // x20
  TerminalPramsManager_c *v81; // x0
  ServantStatusBattleListViewItem_o *p_questClearCostumeRelease_k__BackingField; // x0
  __int64 v83; // x0
  __int64 v84; // x1
  int32_t v85; // w2
  int32_t v86; // w3
  _QWORD *v87; // x8
  ServantStatusBattleListViewItem_c *v88; // x20
  TerminalPramsManager_c *v89; // x0
  ServantStatusBattleListViewItem_o *p_questClearCostumeGet_k__BackingField; // x0
  __int64 v91; // x0
  __int64 v92; // x1
  int32_t v93; // w2
  int32_t v94; // w3
  Il2CppClass *v95; // x8
  Il2CppClass *v96; // x20
  TerminalPramsManager_c *v97; // x0
  ServantStatusBattleListViewItem_o *p_eventTowerReward_k__BackingField; // x0
  __int64 v99; // x0
  __int64 v100; // x1
  int32_t v101; // w2
  int32_t v102; // w3
  _QWORD *v103; // x8
  __int64 v104; // x9
  __int64 v105; // x9
  ServantStatusBattleListViewItem_c *v106; // x20
  TerminalPramsManager_c *v107; // x0
  ServantStatusBattleListViewItem_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  __int64 v109; // x0
  __int64 v110; // x1
  int32_t v111; // w2
  int32_t v112; // w3
  Il2CppClass *v113; // x8
  Il2CppClass *v114; // x20
  TerminalPramsManager_c *v115; // x0
  ServantStatusBattleListViewItem_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  __int64 v117; // x0
  __int64 v118; // x1
  int32_t v119; // w2
  int32_t v120; // w3
  _QWORD *v121; // x8
  ServantStatusBattleListViewItem_c *v122; // x20
  TerminalPramsManager_c *v123; // x0
  ServantStatusBattleListViewItem_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  __int64 v125; // x0
  __int64 v126; // x1
  int32_t v127; // w2
  int32_t v128; // w3
  char v129; // w20
  TerminalPramsManager_c *v130; // x8
  _QWORD *v131; // x9
  ServantStatusBattleListViewItem_c *v132; // x20
  TerminalPramsManager_c *v133; // x0
  ServantStatusBattleListViewItem_o *p_warClearReward_k__BackingField; // x0
  __int64 v135; // x0
  __int64 v136; // x1
  int32_t v137; // w2
  int32_t v138; // w3
  int32_t v139; // w20
  TerminalPramsManager_c *v140; // x8
  char v141; // w21
  struct TerminalPramsManager_StaticFields *v142; // x9
  _QWORD *v143; // x10
  struct BattleDropItem_array *v144; // x20
  __int64 v145; // x0
  int32_t v146; // w2
  int32_t v147; // w3
  Il2CppClass *v148; // x8
  TerminalPramsManager_c *v149; // x0
  Il2CppClass *v150; // x20
  ServantStatusBattleListViewItem_o *p_mResultEventPanelRewardInfos; // x0
  __int64 v152; // x1
  int32_t v153; // w2
  int32_t v154; // w3
  TerminalPramsManager_c *v155; // x0
  Il2CppClass *v156; // x20
  ServantStatusBattleListViewItem_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v158; // x1
  char v159; // w20
  TerminalPramsManager_c *v160; // x8
  int32_t monitor_high; // w21
  TerminalPramsManager_c *v162; // x8
  TerminalPramsManager_c *v163; // x0

  if ( (byte_49F9A7F & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_1B640C8(&Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___, v2);
    sub_1B640C8(&JsonManager_TypeInfo, v3);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v4);
    byte_49F9A7F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9664 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9664 = 1;
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
      String_69086012 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69086012(
                                          v7->static_fields->SAVEKEY_CLEAR_REWARD_DISP,
                                          0LL);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v11 = JsonManager__Deserialize_object_(
              String_69086012,
              (const MethodInfo_2E9ED70 *)Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
      v12 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v12 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestClearHeroineInfo = (ServantStatusBattleListViewItem_o *)&v12->static_fields->mQuestClearHeroineInfo;
      p_mQuestClearHeroineInfo->klass = 0LL;
      sub_1B6406C(p_mQuestClearHeroineInfo, 0, v9, v10);
      if ( !v11 )
        sub_1B64324(v14);
      klass = v11[1].klass;
      if ( !klass )
        sub_1B64324(v14);
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
        sub_1B6406C(v24, (int32_t)Load, v20, v21);
      }
      v25 = (__int64)TerminalPramsManager_TypeInfo;
      monitor = (char)v11[2].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9352 )
      {
        v25 = sub_1B640C8(&TerminalPramsManager_TypeInfo, v15);
        byte_49F9352 = 1;
      }
      v27 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v27 = TerminalPramsManager_TypeInfo;
      }
      v27->static_fields->_IsQuestClear_k__BackingField = monitor;
      v28 = BYTE1(v11[2].monitor);
      if ( !byte_49F9353 )
      {
        v25 = sub_1B640C8(&TerminalPramsManager_TypeInfo, v15);
        v27 = TerminalPramsManager_TypeInfo;
        byte_49F9353 = 1;
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
        sub_1B64324(v25);
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->mQuestRewardInfos, (int32_t)v31, v16, v17);
      v35 = v11[2].klass;
      if ( !v35 )
        sub_1B64324(v32);
      v36 = TerminalPramsManager_TypeInfo;
      if ( v35->_1.namespaze )
        v37 = v11[2].klass;
      else
        v37 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v36 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestPhaseRewardInfos = (ServantStatusBattleListViewItem_o *)&v36->static_fields->mQuestPhaseRewardInfos;
      p_mQuestPhaseRewardInfos->klass = (ServantStatusBattleListViewItem_c *)v37;
      sub_1B6406C(p_mQuestPhaseRewardInfos, (int32_t)v37, v33, v34);
      v43 = TerminalPramsManager_TypeInfo;
      v44 = TerminalPramsManager_TypeInfo->static_fields;
      *(_QWORD *)&v44->clearLastBattleRaidId = *(void **)((char *)&v11[2].monitor + 4);
      v44->joinGroupId = HIDWORD(v11[3].klass);
      v45 = v11[3].monitor;
      if ( !v45 )
        sub_1B64324(v39);
      if ( v45[3] )
        v46 = (struct UserSuperBossEntity_array *)v11[3].monitor;
      else
        v46 = 0LL;
      if ( !v43->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v43);
      if ( !byte_49F9ADD )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v40);
        byte_49F9ADD = 1;
      }
      v47 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v47 = TerminalPramsManager_TypeInfo;
      }
      v48 = v47->static_fields;
      v48->_oldSuperBoss_k__BackingField = v46;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v48->_oldSuperBoss_k__BackingField, (int32_t)v46, v41, v42);
      v53 = v11[4].klass;
      if ( !v53 )
        sub_1B64324(v49);
      if ( v53->_1.namespaze )
        v54 = v11[4].klass;
      else
        v54 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9ADE )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v50);
        byte_49F9ADE = 1;
      }
      v55 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v55 = TerminalPramsManager_TypeInfo;
      }
      v56 = v55->static_fields;
      v56->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v54;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v56->_oldPersonalBoss_k__BackingField, (int32_t)v54, v51, v52);
      v61 = (int *)v11[4].monitor;
      if ( !v61 )
        sub_1B64324(v57);
      if ( v61[4] <= 0 )
        v62 = 0LL;
      else
        v62 = (ServantStatusBattleListViewItem_c *)v11[4].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9AD7 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v58);
        byte_49F9AD7 = 1;
      }
      v63 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v63 = TerminalPramsManager_TypeInfo;
      }
      p_eventPointWinReward_k__BackingField = (ServantStatusBattleListViewItem_o *)&v63->static_fields->_eventPointWinReward_k__BackingField;
      p_eventPointWinReward_k__BackingField->klass = v62;
      sub_1B6406C(p_eventPointWinReward_k__BackingField, (int32_t)v62, v59, v60);
      v69 = (int32_t)v11[5].klass;
      if ( !byte_49F9AD8 )
      {
        v65 = sub_1B640C8(&TerminalPramsManager_TypeInfo, v66);
        byte_49F9AD8 = 1;
      }
      v70 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v70 = TerminalPramsManager_TypeInfo;
      }
      v70->static_fields->_eventPointWinType_k__BackingField = v69;
      v71 = (int *)v11[5].monitor;
      if ( !v71 )
        sub_1B64324(v65);
      if ( v71[4] <= 0 )
        v72 = 0LL;
      else
        v72 = (ServantStatusBattleListViewItem_c *)v11[5].monitor;
      if ( !v70->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v70);
      if ( !byte_49F9811 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v66);
        byte_49F9811 = 1;
      }
      v73 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v73 = TerminalPramsManager_TypeInfo;
      }
      p_eventRaceBoost_k__BackingField = (ServantStatusBattleListViewItem_o *)&v73->static_fields->_eventRaceBoost_k__BackingField;
      p_eventRaceBoost_k__BackingField->klass = v72;
      sub_1B6406C(p_eventRaceBoost_k__BackingField, (int32_t)v72, v67, v68);
      v79 = v11[6].klass;
      if ( !v79 )
        sub_1B64324(v75);
      if ( v79->_1.namespaze )
        v80 = v11[6].klass;
      else
        v80 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F98E7 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v76);
        byte_49F98E7 = 1;
      }
      v81 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v81 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeRelease_k__BackingField = (ServantStatusBattleListViewItem_o *)&v81->static_fields->_questClearCostumeRelease_k__BackingField;
      p_questClearCostumeRelease_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v80;
      sub_1B6406C(p_questClearCostumeRelease_k__BackingField, (int32_t)v80, v77, v78);
      v87 = v11[6].monitor;
      if ( !v87 )
        sub_1B64324(v83);
      if ( v87[3] )
        v88 = (ServantStatusBattleListViewItem_c *)v11[6].monitor;
      else
        v88 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9661 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v84);
        byte_49F9661 = 1;
      }
      v89 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v89 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeGet_k__BackingField = (ServantStatusBattleListViewItem_o *)&v89->static_fields->_questClearCostumeGet_k__BackingField;
      p_questClearCostumeGet_k__BackingField->klass = v88;
      sub_1B6406C(p_questClearCostumeGet_k__BackingField, (int32_t)v88, v85, v86);
      v95 = v11[7].klass;
      if ( !v95 )
        sub_1B64324(v91);
      if ( SLODWORD(v95->_1.name) <= 0 )
        v96 = 0LL;
      else
        v96 = v11[7].klass;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9ADB )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v92);
        byte_49F9ADB = 1;
      }
      v97 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v97 = TerminalPramsManager_TypeInfo;
      }
      p_eventTowerReward_k__BackingField = (ServantStatusBattleListViewItem_o *)&v97->static_fields->_eventTowerReward_k__BackingField;
      p_eventTowerReward_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v96;
      sub_1B6406C(p_eventTowerReward_k__BackingField, (int32_t)v96, v93, v94);
      v103 = v11[7].monitor;
      if ( !v103 )
        sub_1B64324(v99);
      v104 = v103[3];
      if ( v104 )
      {
        if ( !(_DWORD)v104 )
          sub_1B6432C(v99, v100);
        v105 = v103[4];
        if ( !v105 )
          sub_1B64324(v99);
        if ( *(__int64 *)(v105 + 32) <= 0 )
          v106 = 0LL;
        else
          v106 = (ServantStatusBattleListViewItem_c *)v11[7].monitor;
      }
      else
      {
        v106 = 0LL;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9ADC )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v100);
        byte_49F9ADC = 1;
      }
      v107 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v107 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventTowerRewardInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v107->static_fields->_resultEventTowerRewardInfo_k__BackingField;
      p_resultEventTowerRewardInfo_k__BackingField->klass = v106;
      sub_1B6406C(p_resultEventTowerRewardInfo_k__BackingField, (int32_t)v106, v101, v102);
      v113 = v11[8].klass;
      if ( !v113 )
        sub_1B64324(v109);
      if ( v113->_1.namespaze )
        v114 = v11[8].klass;
      else
        v114 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F965B )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v110);
        byte_49F965B = 1;
      }
      v115 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v115 = TerminalPramsManager_TypeInfo;
      }
      p_resultBoostItemRewardInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v115->static_fields->_resultBoostItemRewardInfo_k__BackingField;
      p_resultBoostItemRewardInfo_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v114;
      sub_1B6406C(p_resultBoostItemRewardInfo_k__BackingField, (int32_t)v114, v111, v112);
      v121 = v11[8].monitor;
      if ( !v121 )
        sub_1B64324(v117);
      if ( v121[3] )
        v122 = (ServantStatusBattleListViewItem_c *)v11[8].monitor;
      else
        v122 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F965C )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v118);
        byte_49F965C = 1;
      }
      v123 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v123 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventBoardGameTokenRewardInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v123->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
      p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = v122;
      sub_1B6406C(p_resultEventBoardGameTokenRewardInfo_k__BackingField, (int32_t)v122, v119, v120);
      v129 = (char)v11[9].klass;
      if ( !byte_49F84B0 )
      {
        v125 = sub_1B640C8(&TerminalPramsManager_TypeInfo, v126);
        byte_49F84B0 = 1;
      }
      v130 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v130 = TerminalPramsManager_TypeInfo;
      }
      v130->static_fields->_IsDispOnly_k__BackingField = v129;
      v131 = v11[9].monitor;
      if ( !v131 )
        sub_1B64324(v125);
      if ( v131[3] )
        v132 = (ServantStatusBattleListViewItem_c *)v11[9].monitor;
      else
        v132 = 0LL;
      if ( !v130->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v130);
      if ( !byte_49F9666 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v126);
        byte_49F9666 = 1;
      }
      v133 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v133 = TerminalPramsManager_TypeInfo;
      }
      p_warClearReward_k__BackingField = (ServantStatusBattleListViewItem_o *)&v133->static_fields->_warClearReward_k__BackingField;
      p_warClearReward_k__BackingField->klass = v132;
      sub_1B6406C(p_warClearReward_k__BackingField, (int32_t)v132, v127, v128);
      v139 = (int32_t)v11[10].klass;
      if ( !byte_49F9AD5 )
      {
        v135 = sub_1B640C8(&TerminalPramsManager_TypeInfo, v136);
        byte_49F9AD5 = 1;
      }
      v140 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v140 = TerminalPramsManager_TypeInfo;
      }
      v140->static_fields->_EventActivityPointEffectState_k__BackingField = v139;
      v141 = BYTE4(v11[10].klass);
      if ( !byte_49F9663 )
      {
        v135 = sub_1B640C8(&TerminalPramsManager_TypeInfo, v136);
        v140 = TerminalPramsManager_TypeInfo;
        byte_49F9663 = 1;
      }
      if ( !v140->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v140);
        v140 = TerminalPramsManager_TypeInfo;
      }
      v142 = v140->static_fields;
      v142->_IsWarBoardClear_k__BackingField = v141;
      v143 = v11[10].monitor;
      if ( !v143 )
        sub_1B64324(v135);
      if ( v143[3] )
        v144 = (struct BattleDropItem_array *)v11[10].monitor;
      else
        v144 = 0LL;
      if ( !v140->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v140);
        v142 = TerminalPramsManager_TypeInfo->static_fields;
      }
      v142->mQuestResultAfterEventRewardInfos = v144;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&v142->mQuestResultAfterEventRewardInfos,
        (int32_t)v144,
        v137,
        v138);
      v148 = v11[11].klass;
      if ( !v148 )
        sub_1B64324(v145);
      v149 = TerminalPramsManager_TypeInfo;
      if ( v148->_1.namespaze )
        v150 = v11[11].klass;
      else
        v150 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v149 = TerminalPramsManager_TypeInfo;
      }
      p_mResultEventPanelRewardInfos = (ServantStatusBattleListViewItem_o *)&v149->static_fields->mResultEventPanelRewardInfos;
      p_mResultEventPanelRewardInfos->klass = (ServantStatusBattleListViewItem_c *)v150;
      sub_1B6406C(p_mResultEventPanelRewardInfos, (int32_t)v150, v146, v147);
      v155 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = (int32_t)v11[11].monitor;
      v156 = v11[12].klass;
      if ( !byte_49F965F )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v152);
        v155 = TerminalPramsManager_TypeInfo;
        byte_49F965F = 1;
      }
      if ( !v155->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v155);
        v155 = TerminalPramsManager_TypeInfo;
      }
      p_limitImageAnnounces_k__BackingField = (ServantStatusBattleListViewItem_o *)&v155->static_fields->_limitImageAnnounces_k__BackingField;
      p_limitImageAnnounces_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v156;
      sub_1B6406C(p_limitImageAnnounces_k__BackingField, (int32_t)v156, v153, v154);
      v159 = (char)v11[12].monitor;
      if ( !byte_49F9356 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v158);
        byte_49F9356 = 1;
      }
      v160 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v160 = TerminalPramsManager_TypeInfo;
      }
      v160->static_fields->_IsOrdealCallWarClear_k__BackingField = v159;
      monitor_high = HIDWORD(v11[12].monitor);
      if ( !byte_49F9658 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v158);
        v160 = TerminalPramsManager_TypeInfo;
        byte_49F9658 = 1;
      }
      if ( !v160->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v160);
        v160 = TerminalPramsManager_TypeInfo;
      }
      v160->static_fields->_EventMuralId_k__BackingField = monitor_high;
      if ( BYTE1(v11[2].monitor) )
      {
        if ( !v160->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v160);
        if ( !byte_49F7A3E )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v158);
          byte_49F7A3E = 1;
        }
        v160 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v160 = TerminalPramsManager_TypeInfo;
        }
        v160->static_fields->_IsAutoResume_k__BackingField = 1;
      }
      if ( !v160->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v160);
      if ( !byte_49F9665 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v158);
        byte_49F9665 = 1;
      }
      v162 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v162 = TerminalPramsManager_TypeInfo;
      }
      if ( v162->static_fields->_warClearReward_k__BackingField )
        goto LABEL_253;
      if ( !v162->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v162);
      if ( !byte_49F9662 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v158);
        byte_49F9662 = 1;
      }
      v162 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v162 = TerminalPramsManager_TypeInfo;
      }
      if ( v162->static_fields->_IsPlayScriptWithMap_k__BackingField )
      {
LABEL_253:
        if ( !v162->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v162);
        if ( !byte_49F9AE5 )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v158);
          byte_49F9AE5 = 1;
        }
        v163 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v163 = TerminalPramsManager_TypeInfo;
        }
        v163->static_fields->_isQuestRewardSetted_k__BackingField = 1;
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
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  TerminalPramsManager_c *v14; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49F9A82 & 1) == 0 )
  {
    sub_1B640C8(&EventRaidDefeatedEffectInfo_TypeInfo, v1);
    sub_1B640C8(&string_TypeInfo, v2);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_11377/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v4);
    byte_49F9A82 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9AE7 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9AE7 = 1;
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
               (System_String_o *)StringLiteral_11377/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v9 = (EventRaidDefeatedEffectInfo_o *)sub_1B64314(EventRaidDefeatedEffectInfo_TypeInfo, v7, v8);
    EventRaidDefeatedEffectInfo___ctor(v9, String, v10);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9AE6 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v11);
      byte_49F9AE6 = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v14->static_fields;
    static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = v9;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
      (int32_t)v9,
      v12,
      v13);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_Dictionary_int__int__o *v11; // x19
  System_String_array *v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int max_length; // w8
  System_String_array *v17; // x20
  unsigned int v18; // w23
  System_String_array *v19; // x21
  TerminalPramsManager_c *v20; // x0
  ServantStatusBattleListViewItem_o *p_QuestRandomGroupList_k__BackingField; // x0
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F9A87 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v2);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1B640C8(&string_TypeInfo, v4);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_11386/*"SAVEKEY_QuestRandomGroupList"*/, v6);
    byte_49F9A87 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9044 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9044 = 1;
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
               (System_String_o *)StringLiteral_11386/*"SAVEKEY_QuestRandomGroupList"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v11 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v9,
                                                                 v10);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v11,
      (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *(_QWORD *)result = 0LL;
    if ( !String )
      goto LABEL_35;
    v12 = System_String__Split(String, 0x2Cu, 0, 0LL);
    if ( !v12 )
      goto LABEL_35;
    max_length = v12->max_length;
    v17 = v12;
    if ( max_length >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= max_length )
LABEL_36:
          sub_1B6432C(v12, v13);
        v12 = (System_String_array *)v17->m_Items[v18];
        if ( !v12 )
          break;
        v12 = System_String__Split((System_String_o *)v12, 0x3Au, 0, 0LL);
        if ( !v12 )
          break;
        v19 = v12;
        if ( (int)v12->max_length >= 2 )
        {
          v12 = (System_String_array *)System_Int32__TryParse(v12->m_Items[0], &result[1], 0LL);
          if ( result[1] >= 1 && ((unsigned __int8)v12 & 1) != 0 )
          {
            if ( v19->max_length <= 1 )
              goto LABEL_36;
            v12 = (System_String_array *)System_Int32__TryParse(v19->m_Items[1], result, 0LL);
            v14 = result[0];
            if ( result[0] >= 1 && ((unsigned __int8)v12 & 1) != 0 )
            {
              if ( !v11 )
                break;
              System_Collections_Generic_Dictionary_int__int___Add(
                v11,
                result[1],
                result[0],
                (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
        }
        max_length = v17->max_length;
        if ( (int)++v18 >= max_length )
          goto LABEL_27;
      }
LABEL_35:
      sub_1B64324(v12);
    }
LABEL_27:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9AE8 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v13);
      byte_49F9AE8 = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v20 = TerminalPramsManager_TypeInfo;
    }
    p_QuestRandomGroupList_k__BackingField = (ServantStatusBattleListViewItem_o *)&v20->static_fields->_QuestRandomGroupList_k__BackingField;
    p_QuestRandomGroupList_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v11;
    sub_1B6406C(p_QuestRandomGroupList_k__BackingField, (int32_t)v11, v14, v15);
  }
}


void __fastcall TerminalPramsManager__LoadQuestReleasedFocusState(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  const MethodInfo *v4; // x0

  if ( (byte_49F9A70 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A70 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v2);
  if ( !QuestFocusStateManager
    || (QuestFocusStateManager__ClearQuestFocusStateDataList(QuestFocusStateManager, 0LL),
        (QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager(v4)) == 0LL) )
  {
    sub_1B64324(QuestFocusStateManager);
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
  int32_t Int_69085444; // w19
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
  System_String_o *String_69086012; // x20
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

  if ( (byte_49F9A43 & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, v1);
    sub_1B640C8(&Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____, v2);
    sub_1B640C8(&Method_JsonManager_Deserialize_EventConquestInfo_____, v3);
    sub_1B640C8(&Method_JsonManager_Deserialize_EventHarvestGrowthInfo___, v4);
    sub_1B640C8(&Method_JsonManager_Deserialize_EventSaveData___, v5);
    sub_1B640C8(&JsonManager_TypeInfo, v6);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_11378/*"SAVEKEY_LastPlayBgmName"*/, v8);
    sub_1B640C8(&StringLiteral_13534/*"TerminalEndTime"*/, v9);
    sub_1B640C8(&StringLiteral_11384/*"SAVEKEY_PlayedTerminalEffects"*/, v10);
    sub_1B640C8(&StringLiteral_13530/*"TerminalBeforeEventActivityPoint"*/, v11);
    sub_1B640C8(&StringLiteral_11372/*"SAVEKEY_CampaignDirectBonus"*/, v12);
    sub_1B640C8(&StringLiteral_11379/*"SAVEKEY_LastPlayQuestConsumeType"*/, v13);
    sub_1B640C8(&StringLiteral_11390/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, v14);
    sub_1B640C8(&StringLiteral_13535/*"TerminalEventDailyPointEventId"*/, v15);
    sub_1B640C8(&StringLiteral_13532/*"TerminalBeforeEventSubmarinePointData"*/, v16);
    sub_1B640C8(&StringLiteral_13541/*"TerminalPhaseCnt"*/, v17);
    sub_1B640C8(&StringLiteral_11388/*"SAVEKEY_TerminalConquestInfos"*/, v18);
    sub_1B640C8(&StringLiteral_13549/*"TerminalTimeStatusEventId"*/, v19);
    sub_1B640C8(&StringLiteral_13533/*"TerminalDispState"*/, v20);
    sub_1B640C8(&StringLiteral_11381/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v21);
    sub_1B640C8(&StringLiteral_13536/*"TerminalIsDoneShortcut"*/, v22);
    sub_1B640C8(&StringLiteral_11380/*"SAVEKEY_MapModelClearQuestInfo"*/, v23);
    sub_1B640C8(&StringLiteral_11385/*"SAVEKEY_PlayerGenderType"*/, v24);
    sub_1B640C8(&StringLiteral_11370/*"SAVEKEY_BlankEarthRank"*/, v25);
    sub_1B640C8(&StringLiteral_13537/*"TerminalLastPanelEventPoint"*/, v26);
    sub_1B640C8(&StringLiteral_11389/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v27);
    sub_1B640C8(&StringLiteral_11373/*"SAVEKEY_ClearEventQuestIds"*/, v28);
    sub_1B640C8(&StringLiteral_11382/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v29);
    sub_1B640C8(&StringLiteral_5196/*"Debug_IsQuestReleaseAll"*/, v30);
    sub_1B640C8(&StringLiteral_5193/*"Debug_IsDummyErrorSelect"*/, v31);
    sub_1B640C8(&StringLiteral_13544/*"TerminalQuestId"*/, v32);
    sub_1B640C8(&StringLiteral_11387/*"SAVEKEY_TerminalConquestInfoDisp"*/, v33);
    sub_1B640C8(&StringLiteral_11392/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v34);
    sub_1B640C8(&StringLiteral_13548/*"TerminalTimeStatusEventDailyPoint"*/, v35);
    sub_1B640C8(&StringLiteral_13553/*"TerminalWarId"*/, v36);
    sub_1B640C8(&StringLiteral_13546/*"TerminalSpotId"*/, v37);
    sub_1B640C8(&StringLiteral_13550/*"TerminalTimeStatusLoopCount"*/, v38);
    sub_1B640C8(&StringLiteral_13531/*"TerminalBeforeEventActivityPointGauge"*/, v39);
    sub_1B640C8(&StringLiteral_11371/*"SAVEKEY_BlankEarthSpotId"*/, v40);
    sub_1B640C8(&StringLiteral_11376/*"SAVEKEY_DataLostBattleAutoReset"*/, v41);
    sub_1B640C8(&StringLiteral_13554/*"TerminalWarStartedIds"*/, v42);
    sub_1B640C8(&StringLiteral_11375/*"SAVEKEY_ConnectMarkEventId"*/, v43);
    sub_1B640C8(&StringLiteral_13538/*"TerminalLastPlayedFreeQuestSpotId"*/, v44);
    sub_1B640C8(&StringLiteral_11374/*"SAVEKEY_ConnectMarkAnimationId"*/, v45);
    sub_1B640C8(&StringLiteral_11383/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v46);
    sub_1B640C8(&StringLiteral_1/*""*/, v47);
    sub_1B640C8(&StringLiteral_13539/*"TerminalLastPlayedQuestId"*/, v48);
    sub_1B640C8(&StringLiteral_5192/*"Debug_IsBuildInfoDisp"*/, v49);
    sub_1B640C8(&StringLiteral_11391/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v50);
    byte_49F9A43 = 1;
  }
  v51 = (System_String_o *)StringLiteral_13533/*"TerminalDispState"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13533/*"TerminalDispState"*/, 0LL) )
  {
    Int_69085444 = UnityEngine_PlayerPrefs__GetInt_69085444(v51, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F904B )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v52);
      byte_49F904B = 1;
    }
    v54 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v54 = TerminalPramsManager_TypeInfo;
    }
    v54->static_fields->_DispState_k__BackingField = Int_69085444;
  }
  v55 = (System_String_o *)StringLiteral_13553/*"TerminalWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13553/*"TerminalWarId"*/, 0LL) )
  {
    v57 = UnityEngine_PlayerPrefs__GetInt_69085444(v55, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F904F )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v56);
      byte_49F904F = 1;
    }
    v58 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v58 = TerminalPramsManager_TypeInfo;
    }
    v58->static_fields->_WarId_k__BackingField = v57;
  }
  v59 = (System_String_o *)StringLiteral_13546/*"TerminalSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13546/*"TerminalSpotId"*/, 0LL) )
  {
    v61 = UnityEngine_PlayerPrefs__GetInt_69085444(v59, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F904E )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v60);
      byte_49F904E = 1;
    }
    v62 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v62 = TerminalPramsManager_TypeInfo;
    }
    v62->static_fields->_SpotId_k__BackingField = v61;
  }
  v63 = (System_String_o *)StringLiteral_13544/*"TerminalQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13544/*"TerminalQuestId"*/, 0LL) )
  {
    v65 = UnityEngine_PlayerPrefs__GetInt_69085444(v63, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9049 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v64);
      byte_49F9049 = 1;
    }
    v66 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v66 = TerminalPramsManager_TypeInfo;
    }
    v66->static_fields->_QuestId_k__BackingField = v65;
  }
  v67 = (System_String_o *)StringLiteral_13539/*"TerminalLastPlayedQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13539/*"TerminalLastPlayedQuestId"*/, 0LL) )
  {
    v69 = UnityEngine_PlayerPrefs__GetInt_69085444(v67, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9682 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v68);
      byte_49F9682 = 1;
    }
    v70 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v70 = TerminalPramsManager_TypeInfo;
    }
    v70->static_fields->_LastPlayedQuestId_k__BackingField = v69;
  }
  v71 = (System_String_o *)StringLiteral_13541/*"TerminalPhaseCnt"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13541/*"TerminalPhaseCnt"*/, 0LL) )
  {
    v73 = UnityEngine_PlayerPrefs__GetInt_69085444(v71, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F904D )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v72);
      byte_49F904D = 1;
    }
    v74 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v74 = TerminalPramsManager_TypeInfo;
    }
    v74->static_fields->_PhaseCnt_k__BackingField = v73;
  }
  v75 = (System_String_o *)StringLiteral_13534/*"TerminalEndTime"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13534/*"TerminalEndTime"*/, 0LL) )
  {
    String_69086012 = UnityEngine_PlayerPrefs__GetString_69086012(v75, 0LL);
    v78 = 0LL;
    if ( System_String__op_Inequality(String_69086012, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v78 = System_Convert__ToInt64_62034348(String_69086012, 0LL);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F904A )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v77);
      byte_49F904A = 1;
    }
    v79 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v79 = TerminalPramsManager_TypeInfo;
    }
    v79->static_fields->_EndTime_k__BackingField = v78;
  }
  v80 = (System_String_o *)StringLiteral_13536/*"TerminalIsDoneShortcut"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13536/*"TerminalIsDoneShortcut"*/, 0LL) )
  {
    v82 = UnityEngine_PlayerPrefs__GetInt_69085444(v80, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F904C )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v81);
      byte_49F904C = 1;
    }
    v83 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v83 = TerminalPramsManager_TypeInfo;
    }
    v83->static_fields->_IsDoneShortcut_k__BackingField = v82 != 0;
  }
  v84 = (System_String_o *)StringLiteral_13554/*"TerminalWarStartedIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13554/*"TerminalWarStartedIds"*/, 0LL) )
  {
    v87 = UnityEngine_PlayerPrefs__GetString_69086012(v84, 0LL);
    v88 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v88 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v88->static_fields;
    static_fields->mTerminalWarStartedIds = v87;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->mTerminalWarStartedIds, (int32_t)v87, v85, v86);
  }
  v90 = (System_String_o *)StringLiteral_5196/*"Debug_IsQuestReleaseAll"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5196/*"Debug_IsQuestReleaseAll"*/, 0LL) )
  {
    v92 = UnityEngine_PlayerPrefs__GetInt_69085444(v90, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9AB7 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v91);
      byte_49F9AB7 = 1;
    }
    v93 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v93 = TerminalPramsManager_TypeInfo;
    }
    v93->static_fields->mDebug_IsQuestReleaseAll = v92 != 0;
  }
  v94 = (System_String_o *)StringLiteral_5193/*"Debug_IsDummyErrorSelect"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5193/*"Debug_IsDummyErrorSelect"*/, 0LL) )
  {
    v96 = UnityEngine_PlayerPrefs__GetInt_69085444(v94, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9AB8 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v95);
      byte_49F9AB8 = 1;
    }
    v97 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v97 = TerminalPramsManager_TypeInfo;
    }
    v97->static_fields->mDebug_IsDummyErrorSelect = v96 != 0;
  }
  v98 = (System_String_o *)StringLiteral_5192/*"Debug_IsBuildInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5192/*"Debug_IsBuildInfoDisp"*/, 0LL) )
  {
    v100 = UnityEngine_PlayerPrefs__GetInt_69085444(v98, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9AB9 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v99);
      byte_49F9AB9 = 1;
    }
    v101 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v101 = TerminalPramsManager_TypeInfo;
    }
    v101->static_fields->mDebug_IsBuildInfoDisp = v100 != 0;
  }
  v102 = (System_String_o *)StringLiteral_13549/*"TerminalTimeStatusEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13549/*"TerminalTimeStatusEventId"*/, 0LL) )
  {
    v104 = UnityEngine_PlayerPrefs__GetInt_69085444(v102, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F967E )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v103);
      byte_49F967E = 1;
    }
    v105 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v105 = TerminalPramsManager_TypeInfo;
    }
    v105->static_fields->_TimeStatusEventId_k__BackingField = v104;
  }
  v106 = (System_String_o *)StringLiteral_13550/*"TerminalTimeStatusLoopCount"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13550/*"TerminalTimeStatusLoopCount"*/, 0LL) )
  {
    v108 = UnityEngine_PlayerPrefs__GetInt_69085444(v106, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F967F )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v107);
      byte_49F967F = 1;
    }
    v109 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v109 = TerminalPramsManager_TypeInfo;
    }
    v109->static_fields->_TimeStatusLoopCount_k__BackingField = v108;
  }
  v110 = (System_String_o *)StringLiteral_13535/*"TerminalEventDailyPointEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13535/*"TerminalEventDailyPointEventId"*/, 0LL) )
  {
    v112 = UnityEngine_PlayerPrefs__GetInt_69085444(v110, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9ABB )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v111);
      byte_49F9ABB = 1;
    }
    v113 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v113 = TerminalPramsManager_TypeInfo;
    }
    v113->static_fields->_EventDailyPointEventId_k__BackingField = v112;
  }
  v114 = (System_String_o *)StringLiteral_13548/*"TerminalTimeStatusEventDailyPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13548/*"TerminalTimeStatusEventDailyPoint"*/, 0LL) )
  {
    v115 = UnityEngine_PlayerPrefs__GetString_69086012(v114, 0LL);
    v117 = 0LL;
    if ( !System_String__op_Equality(v115, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v117 = System_Convert__ToInt64_62034348(v115, 0LL);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9ABC )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v116);
      byte_49F9ABC = 1;
    }
    v118 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v118 = TerminalPramsManager_TypeInfo;
    }
    v118->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = v117;
  }
  v119 = (System_String_o *)StringLiteral_13530/*"TerminalBeforeEventActivityPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13530/*"TerminalBeforeEventActivityPoint"*/, 0LL) )
  {
    v121 = UnityEngine_PlayerPrefs__GetInt_69085444(v119, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9ABD )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v120);
      byte_49F9ABD = 1;
    }
    v122 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v122 = TerminalPramsManager_TypeInfo;
    }
    v122->static_fields->_BeforeEventActivityPoint_k__BackingField = v121;
  }
  v123 = (System_String_o *)StringLiteral_13531/*"TerminalBeforeEventActivityPointGauge"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13531/*"TerminalBeforeEventActivityPointGauge"*/, 0LL) )
  {
    v125 = UnityEngine_PlayerPrefs__GetInt_69085444(v123, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9ABE )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v124);
      byte_49F9ABE = 1;
    }
    v126 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v126 = TerminalPramsManager_TypeInfo;
    }
    v126->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v125;
  }
  v127 = (System_String_o *)StringLiteral_13532/*"TerminalBeforeEventSubmarinePointData"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13532/*"TerminalBeforeEventSubmarinePointData"*/, 0LL) )
  {
    v128 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69086012(v127, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v132 = JsonManager__Deserialize_object_(
             v128,
             (const MethodInfo_2E9ED70 *)Method_JsonManager_Deserialize_EventSaveData___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9179 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v129);
      byte_49F9179 = 1;
    }
    v133 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v133 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (ServantStatusBattleListViewItem_o *)&v133->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v132;
    sub_1B6406C(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v132, v130, v131);
  }
  v135 = (System_String_o *)StringLiteral_11390/*"SAVEKEY_TerminalLastSelectQuestIndex"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11390/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, 0LL) )
  {
    v138 = UnityEngine_PlayerPrefs__GetInt_69085444(v135, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9AB6 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v136);
      byte_49F9AB6 = 1;
    }
    v139 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v139 = TerminalPramsManager_TypeInfo;
    }
    v139->static_fields->_LastSelectQuestIndex_k__BackingField = v138;
    if ( !byte_49F9048 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v136);
      v139 = TerminalPramsManager_TypeInfo;
      byte_49F9048 = 1;
    }
    if ( !v139->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v139);
      v139 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v139->static_fields->_WarId_k__BackingField;
    if ( !byte_49F9AC9 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v136);
      v139 = TerminalPramsManager_TypeInfo;
      byte_49F9AC9 = 1;
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
  v141 = (System_String_o *)StringLiteral_11388/*"SAVEKEY_TerminalConquestInfos"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11388/*"SAVEKEY_TerminalConquestInfos"*/, 0LL) )
  {
    v142 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69086012(v141, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v145 = JsonManager__Deserialize_object_(
             v142,
             (const MethodInfo_2E9ED70 *)Method_JsonManager_Deserialize_EventConquestInfo_____);
    v146 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v146 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = (ServantStatusBattleListViewItem_o *)&v146->static_fields->eventConquestInfos;
    p_eventConquestInfos->klass = (ServantStatusBattleListViewItem_c *)v145;
    sub_1B6406C(p_eventConquestInfos, (int32_t)v145, v143, v144);
  }
  v148 = (System_String_o *)StringLiteral_11387/*"SAVEKEY_TerminalConquestInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11387/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL) )
  {
    v149 = UnityEngine_PlayerPrefs__GetInt_69085444(v148, 0LL);
    v150 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v150 = TerminalPramsManager_TypeInfo;
    }
    v150->static_fields->eventConquestInfoDisp = v149 != 0;
  }
  v151 = (System_String_o *)StringLiteral_11389/*"SAVEKEY_TerminalHarvestGrowthInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11389/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL) )
  {
    v152 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69086012(v151, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v155 = JsonManager__Deserialize_object_(
             v152,
             (const MethodInfo_2E9ED70 *)Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    v156 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v156 = TerminalPramsManager_TypeInfo;
    }
    p_eventHarvestGrowthInfo = (ServantStatusBattleListViewItem_o *)&v156->static_fields->eventHarvestGrowthInfo;
    p_eventHarvestGrowthInfo->klass = (ServantStatusBattleListViewItem_c *)v155;
    sub_1B6406C(p_eventHarvestGrowthInfo, (int32_t)v155, v153, v154);
  }
  v158 = (System_String_o *)StringLiteral_11378/*"SAVEKEY_LastPlayBgmName"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11378/*"SAVEKEY_LastPlayBgmName"*/, 0LL) )
  {
    v161 = UnityEngine_PlayerPrefs__GetString_69086012(v158, 0LL);
    v162 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v162 = TerminalPramsManager_TypeInfo;
    }
    p_lastPlayBgmName = (ServantStatusBattleListViewItem_o *)&v162->static_fields->lastPlayBgmName;
    p_lastPlayBgmName->klass = (ServantStatusBattleListViewItem_c *)v161;
    sub_1B6406C(p_lastPlayBgmName, (int32_t)v161, v159, v160);
  }
  v164 = (System_String_o *)StringLiteral_11379/*"SAVEKEY_LastPlayQuestConsumeType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11379/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL) )
  {
    v165 = UnityEngine_PlayerPrefs__GetInt_69085444(v164, 0LL);
    v166 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v166 = TerminalPramsManager_TypeInfo;
    }
    v166->static_fields->lastPlayQuestConsumeAp = v165;
  }
  v167 = (System_String_o *)StringLiteral_13538/*"TerminalLastPlayedFreeQuestSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13538/*"TerminalLastPlayedFreeQuestSpotId"*/, 0LL) )
  {
    v169 = UnityEngine_PlayerPrefs__GetInt_69085444(v167, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9683 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v168);
      byte_49F9683 = 1;
    }
    v170 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v170 = TerminalPramsManager_TypeInfo;
    }
    v170->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = v169;
  }
  v171 = (System_String_o *)StringLiteral_13537/*"TerminalLastPanelEventPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13537/*"TerminalLastPanelEventPoint"*/, 0LL) )
  {
    v172 = UnityEngine_PlayerPrefs__GetInt_69085444(v171, 0LL);
    v173 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v173 = TerminalPramsManager_TypeInfo;
    }
    v173->static_fields->panelEventPoint = v172;
  }
  v174 = (System_String_o *)StringLiteral_11384/*"SAVEKEY_PlayedTerminalEffects"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11384/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL) )
  {
    v178 = UnityEngine_PlayerPrefs__GetString_69086012(v174, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9AC0 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v175);
      byte_49F9AC0 = 1;
    }
    v179 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v179 = TerminalPramsManager_TypeInfo;
    }
    p_PlayedTerminalEffects_k__BackingField = (ServantStatusBattleListViewItem_o *)&v179->static_fields->_PlayedTerminalEffects_k__BackingField;
    p_PlayedTerminalEffects_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v178;
    sub_1B6406C(p_PlayedTerminalEffects_k__BackingField, (int32_t)v178, v176, v177);
  }
  v181 = (System_String_o *)StringLiteral_11381/*"SAVEKEY_PlayTerminalEffectDisappear"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11381/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL) )
  {
    v183 = UnityEngine_PlayerPrefs__GetInt_69085444(v181, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F98E8 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v182);
      byte_49F98E8 = 1;
    }
    v184 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v184 = TerminalPramsManager_TypeInfo;
    }
    v184->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = v183 != 0;
  }
  v185 = (System_String_o *)StringLiteral_11382/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11382/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL) )
  {
    v187 = UnityEngine_PlayerPrefs__GetInt_69085444(v185, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F98E9 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v186);
      byte_49F98E9 = 1;
    }
    v188 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v188 = TerminalPramsManager_TypeInfo;
    }
    v188->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = v187;
  }
  v189 = (System_String_o *)StringLiteral_11383/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11383/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL) )
  {
    v191 = UnityEngine_PlayerPrefs__GetInt_69085444(v189, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9805 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v190);
      byte_49F9805 = 1;
    }
    v192 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v192 = TerminalPramsManager_TypeInfo;
    }
    v192->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = v191 != 0;
  }
  v193 = (System_String_o *)StringLiteral_11392/*"SAVEKEY_TerminalSelectedStoryQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11392/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL) )
  {
    v195 = UnityEngine_PlayerPrefs__GetInt_69085444(v193, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F946B )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v194);
      byte_49F946B = 1;
    }
    v196 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v196 = TerminalPramsManager_TypeInfo;
    }
    v196->static_fields->_SelectedStoryQuestId_k__BackingField = v195;
  }
  v197 = (System_String_o *)StringLiteral_11375/*"SAVEKEY_ConnectMarkEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11375/*"SAVEKEY_ConnectMarkEventId"*/, 0LL) )
  {
    v198 = UnityEngine_PlayerPrefs__GetInt_69085444(v197, 0LL);
    v199 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v199 = TerminalPramsManager_TypeInfo;
    }
    v199->static_fields->ConnectMarkEventId = v198;
  }
  v200 = (System_String_o *)StringLiteral_11374/*"SAVEKEY_ConnectMarkAnimationId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11374/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL) )
  {
    v201 = UnityEngine_PlayerPrefs__GetInt_69085444(v200, 0LL);
    v202 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v202 = TerminalPramsManager_TypeInfo;
    }
    v202->static_fields->ConnectMarkAnimationId = v201;
  }
  v203 = (System_String_o *)StringLiteral_11391/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11391/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL) )
  {
    v205 = UnityEngine_PlayerPrefs__GetInt_69085444(v203, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F81D7 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v204);
      byte_49F81D7 = 1;
    }
    v206 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v206 = TerminalPramsManager_TypeInfo;
    }
    v206->static_fields->_SelectedRecollectionWarId_k__BackingField = v205;
  }
  v207 = (System_String_o *)StringLiteral_11373/*"SAVEKEY_ClearEventQuestIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11373/*"SAVEKEY_ClearEventQuestIds"*/, 0LL) )
  {
    v211 = UnityEngine_PlayerPrefs__GetString_69086012(v207, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9046 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v208);
      byte_49F9046 = 1;
    }
    v212 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v212 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (ServantStatusBattleListViewItem_o *)&v212->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v211;
    sub_1B6406C(p_ClearEventQuestIds_k__BackingField, (int32_t)v211, v209, v210);
  }
  v214 = (System_String_o *)StringLiteral_11380/*"SAVEKEY_MapModelClearQuestInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11380/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL) )
  {
    v215 = UnityEngine_PlayerPrefs__GetString_69086012(v214, 0LL);
    IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(v215, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v215 || (IsNullOrEmpty = System_String__Split(v215, 0x2Cu, 0, 0LL)) == 0LL )
        sub_1B64324(IsNullOrEmpty);
      v218 = *(_QWORD *)&IsNullOrEmpty->max_length;
      v219 = IsNullOrEmpty;
      if ( v218 )
      {
        if ( !(_DWORD)v218 )
          sub_1B6432C(IsNullOrEmpty, v217);
        v220 = System_Int32__Parse(IsNullOrEmpty->m_Items[0], 0LL);
      }
      else
      {
        v220 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9AC2 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v217);
        byte_49F9AC2 = 1;
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
      if ( !byte_49F9AC3 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v217);
        byte_49F9AC3 = 1;
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
  v225 = (System_String_o *)StringLiteral_11376/*"SAVEKEY_DataLostBattleAutoReset"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11376/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL) )
  {
    v227 = UnityEngine_PlayerPrefs__GetInt_69085444(v225, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F980C )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v226);
      byte_49F980C = 1;
    }
    v228 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v228 = TerminalPramsManager_TypeInfo;
    }
    v228->static_fields->_IsDataLostBattleAutoReset_k__BackingField = v227 != 0;
  }
  v229 = (System_String_o *)StringLiteral_11385/*"SAVEKEY_PlayerGenderType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11385/*"SAVEKEY_PlayerGenderType"*/, 0LL) )
  {
    v231 = UnityEngine_PlayerPrefs__GetInt_69085444(v229, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F7B7C )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v230);
      byte_49F7B7C = 1;
    }
    v232 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v232 = TerminalPramsManager_TypeInfo;
    }
    v232->static_fields->_PlayerGenderType_k__BackingField = v231;
  }
  v233 = (System_String_o *)StringLiteral_11372/*"SAVEKEY_CampaignDirectBonus"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11372/*"SAVEKEY_CampaignDirectBonus"*/, 0LL) )
  {
    v234 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69086012(v233, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v238 = JsonManager__Deserialize_object_(
             v234,
             (const MethodInfo_2E9ED70 *)Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9AC7 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v235);
      byte_49F9AC7 = 1;
    }
    v239 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v239 = TerminalPramsManager_TypeInfo;
    }
    v240 = v239->static_fields;
    v240->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)v238;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&v240->_CampaignDirectBonus_k__BackingField,
      (int32_t)v238,
      v236,
      v237);
  }
  v241 = (System_String_o *)StringLiteral_11371/*"SAVEKEY_BlankEarthSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11371/*"SAVEKEY_BlankEarthSpotId"*/, 0LL) )
  {
    v243 = UnityEngine_PlayerPrefs__GetInt_69085444(v241, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F903F )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v242);
      byte_49F903F = 1;
    }
    v244 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v244 = TerminalPramsManager_TypeInfo;
    }
    v244->static_fields->_BlankEarthSpotId_k__BackingField = v243;
  }
  v245 = (System_String_o *)StringLiteral_11370/*"SAVEKEY_BlankEarthRank"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11370/*"SAVEKEY_BlankEarthRank"*/, 0LL) )
  {
    v247 = UnityEngine_PlayerPrefs__GetInt_69085444(v245, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9ACA )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v246);
      byte_49F9ACA = 1;
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
  int32_t Int_69085444; // w0
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t v9; // w20
  const MethodInfo *v10; // x1
  __int64 v11; // x0
  System_String_o *v12; // x20
  System_String_o *String_69086012; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49F9A44 & 1) == 0 )
  {
    sub_1B640C8(&TerminalTransitionInfo_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_13552/*"TerminalTransitionInfoVoiceAssetName"*/, v2);
    sub_1B640C8(&StringLiteral_13551/*"TerminalTransitionInfoMissionId"*/, v3);
    byte_49F9A44 = 1;
  }
  v4 = (System_String_o *)StringLiteral_13551/*"TerminalTransitionInfoMissionId"*/;
  v5 = 0LL;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13551/*"TerminalTransitionInfoMissionId"*/, 0LL) )
  {
    Int_69085444 = UnityEngine_PlayerPrefs__GetInt_69085444(v4, 0LL);
    if ( Int_69085444 < 1 )
    {
      return 0LL;
    }
    else
    {
      v9 = Int_69085444;
      v5 = sub_1B64314(TerminalTransitionInfo_TypeInfo, v7, v8);
      System_Object___ctor((Il2CppObject *)v5, 0LL);
      TerminalTransitionInfo__Init((TerminalTransitionInfo_o *)v5, v10);
      if ( !v5 )
        sub_1B64324(v11);
      *(_DWORD *)(v5 + 16) = v9;
      v12 = (System_String_o *)StringLiteral_13552/*"TerminalTransitionInfoVoiceAssetName"*/;
      if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13552/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL) )
      {
        String_69086012 = UnityEngine_PlayerPrefs__GetString_69086012(v12, 0LL);
        *(_QWORD *)(v5 + 40) = String_69086012;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)String_69086012, v14, v15);
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

  if ( (byte_49F9A5D & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11380/*"SAVEKEY_MapModelClearQuestInfo"*/, v2);
    sub_1B640C8(&StringLiteral_869/*","*/, v3);
    byte_49F9A5D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9258 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9258 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v4->static_fields->_MapModelClearQuestId_k__BackingField;
  v6 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_49F9259 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49F9259 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v7->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v8 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v9 = System_String__Concat_61386656(v6, (System_String_o *)StringLiteral_869/*","*/, v8, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11380/*"SAVEKEY_MapModelClearQuestInfo"*/, v9, 0LL);
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

  if ( (byte_49F9A4A & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11390/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, v2);
    sub_1B640C8(&StringLiteral_13538/*"TerminalLastPlayedFreeQuestSpotId"*/, v3);
    sub_1B640C8(&StringLiteral_13539/*"TerminalLastPlayedQuestId"*/, v4);
    byte_49F9A4A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F93A6 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F93A6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13539/*"TerminalLastPlayedQuestId"*/,
    v5->static_fields->_LastPlayedQuestId_k__BackingField,
    0LL);
  if ( !byte_49F9AC9 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v6);
    byte_49F9AC9 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11390/*"SAVEKEY_TerminalLastSelectQuestIndex"*/,
    v7->static_fields->_LastSelectQuestIndex_k__BackingField,
    0LL);
  if ( !byte_49F9041 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v8);
    byte_49F9041 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13538/*"TerminalLastPlayedFreeQuestSpotId"*/,
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

  if ( (byte_49F9A3F & 1) == 0 )
  {
    sub_1B640C8(&Method_TerminalPramsManager_PlaySystemSE__, method);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v3);
    byte_49F9A3F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9AB4 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9AB4 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( TerminalPramsManager_TypeInfo->static_fields->_IsAutoNoSe_k__BackingField )
    {
LABEL_9:
      if ( !byte_49F9AB5 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
        byte_49F9AB5 = 1;
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
      v7 = (_QWORD *)sub_1B640E0(Method_TerminalPramsManager_PlaySystemSE__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
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
  if ( (byte_49F9A66 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v3);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49F9A66 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsTerminalEffectPlayed(effectId, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9ACF )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
      byte_49F9ACF = 1;
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
      if ( !byte_49F9AC0 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
        byte_49F9AC0 = 1;
      }
      v10 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v10 = TerminalPramsManager_TypeInfo;
      }
      p_PlayedTerminalEffects_k__BackingField = (ServantStatusBattleListViewItem_o *)&v10->static_fields->_PlayedTerminalEffects_k__BackingField;
      p_PlayedTerminalEffects_k__BackingField->klass = v9;
      sub_1B6406C(p_PlayedTerminalEffects_k__BackingField, (int32_t)v9, v6, v7);
      v8 = TerminalPramsManager_TypeInfo;
    }
    if ( !v8->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v8);
    if ( !byte_49F9ACF )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
      byte_49F9ACF = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    PlayedTerminalEffects_k__BackingField = v12->static_fields->_PlayedTerminalEffects_k__BackingField;
    v14 = System_Int32__ToString((int32_t)&v22, 0LL);
    v18 = System_String__Concat_61386656(
            PlayedTerminalEffects_k__BackingField,
            v14,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            0LL);
    if ( !byte_49F9AC0 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v15);
      byte_49F9AC0 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    v20 = (ServantStatusBattleListViewItem_o *)&v19->static_fields->_PlayedTerminalEffects_k__BackingField;
    v20->klass = (ServantStatusBattleListViewItem_c *)v18;
    sub_1B6406C(v20, (int32_t)v18, v16, v17);
    TerminalPramsManager__Save_SaveData(v21);
  }
}


void __fastcall TerminalPramsManager__PlayerGenderType_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9A5F & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11385/*"SAVEKEY_PlayerGenderType"*/, v2);
    byte_49F9A5F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9AD0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9AD0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11385/*"SAVEKEY_PlayerGenderType"*/,
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
  __int64 v72; // x1
  __int64 v73; // x2
  UserServantCollectionEntity_o *v74; // x24
  int32_t v75; // w2
  int32_t v76; // w3
  _DWORD *v77; // x23
  ServantStatusBattleListViewItem_o *v78; // x23
  ServantStatusBattleListViewItem_c *klass; // x8
  ServantStatusBattleListViewItem_c *v80; // x8
  TerminalPramsManager_c *v81; // x0
  ServantStatusBattleListViewItem_o *p_mQuestClearHeroineInfo; // x0
  __int64 v83; // x8
  BattleResultComponent_resultData_o *v84; // x9
  struct System_String_o *v85; // x10
  struct System_String_o *eventEndMessage; // x27
  __int128 v87; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v88; // x23
  UserServantEntity_o *v89; // x24
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x23
  void *v93; // x25
  void **p_monitor; // x27
  void *monitor; // t1
  void *v96; // x26
  Il2CppObject *MasterData_object; // x25
  int64_t UserId; // x0
  __int64 v99; // x27
  __int64 v100; // x28
  int64_t v101; // x26
  __int64 v102; // x2
  int v103; // w8
  UserServantCollectionEntity_o *v104; // x26
  int v105; // w9
  UserServantCollectionEntity_o *v106; // x25
  BattleResultComponent_resultData_array *v107; // x27
  int32_t SvtId; // w0
  __int64 v109; // x28
  __int64 v110; // x29
  int32_t v111; // w27
  __int64 v112; // x22
  int32_t v113; // w2
  int32_t v114; // w3
  int32_t v115; // w2
  int32_t v116; // w3
  bool v117; // w9
  Il2CppObject *Master_object; // x0
  __int64 v119; // x24
  __int64 v120; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v121; // x23
  int klass_high; // w8
  int32_t friendshipExceedCount; // w9
  TerminalPramsManager_c *v124; // x0
  ServantStatusBattleListViewItem_o *v125; // x0
  BattleResultComponent_resultData_o *v126; // x22
  BattleResultComponent_resultData_o *v127; // x8
  struct System_String_o *v128; // x9
  UserQuestEntity_o *v129; // x22
  int32_t questId; // w23
  TerminalPramsManager_c *v131; // x0
  __int64 v132; // x1
  int32_t QuestPhase; // w23
  TerminalPramsManager_c *v134; // x0
  int32_t v135; // w23
  Il2CppObject *v136; // x24
  UserQuestEntity_o *v137; // x0
  UserQuestEntity_o *v138; // x25
  int32_t v139; // w24
  __int64 v140; // x1
  bool v141; // w25
  TerminalPramsManager_c *v142; // x0
  const MethodInfo *v143; // x2
  TerminalPramsManager_c *v144; // x0
  System_String_o *ValidMessage; // x0
  const MethodInfo *v146; // x2
  TerminalPramsManager_c *v147; // x8
  TerminalPramsManager_c *v148; // x0
  const MethodInfo *v149; // x0
  TerminalPramsManager_c *v150; // x8
  int32_t v151; // w24
  const MethodInfo *v152; // x1
  WarEntity_o *v153; // x23
  TerminalPramsManager_c *v154; // x0
  __int64 v155; // x1
  bool v156; // w25
  TerminalPramsManager_c *v157; // x0
  char v158; // w8
  const MethodInfo *v159; // x1
  bool HasFlag; // w0
  int32_t v161; // w2
  int32_t v162; // w3
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  int32_t v164; // w2
  int32_t v165; // w3
  ServantStatusBattleListViewItem_c *v166; // x23
  TerminalPramsManager_c *v167; // x0
  ServantStatusBattleListViewItem_o *p_mResultEventPanelRewardInfos; // x0
  TerminalPramsManager_c *v169; // x0
  ServantStatusBattleListViewItem_o *p_eventConquestInfos; // x0
  int32_t v171; // w2
  int32_t v172; // w3
  struct TerminalPramsManager_StaticFields *v173; // x9
  __int64 v174; // x8
  BattleResultComponent_resultData_o *v175; // x23
  int32_t v176; // w23
  WarEntity_o *v177; // x0
  __int64 v178; // x1
  int32_t id; // w21
  Il2CppObject *v180; // x23
  int32_t v181; // w2
  int32_t v182; // w3
  int32_t v183; // w2
  int32_t v184; // w3
  ServantStatusBattleListViewItem_c *v185; // x24
  TerminalPramsManager_c *v186; // x0
  ServantStatusBattleListViewItem_o *p_OldUserEventPoint_k__BackingField; // x0
  signed int max_length; // w9
  BattleResultComponent_resultData_array *v189; // x24
  int v190; // w8
  Il2CppClass **v191; // x8
  Il2CppClass *v192; // x25
  int32_t RaidGroupDeadQuestId; // w26
  signed int v194; // w9
  BattleResultComponent_resultData_array *v195; // x26
  int v196; // w8
  int v197; // w27
  struct TerminalPramsManager_StaticFields *v198; // x8
  int32_t name_high; // w25
  signed int v200; // w9
  BattleResultComponent_resultData_array *v201; // x24
  int v202; // w8
  BattleResultComponent_resultData_o *v203; // x21
  int32_t RaidDeadQuestId; // w25
  struct TerminalPramsManager_StaticFields *v205; // x8
  int32_t v206; // w21
  TerminalPramsManager_c *v207; // x0
  TerminalPramsManager_c *v208; // x8
  bool v209; // w21
  TerminalPramsManager_c *v210; // x0
  int32_t v211; // w21
  int32_t eventId; // w23
  __int64 v213; // x2
  char *v214; // x26
  char *v215; // x27
  char *v216; // x24
  BattleResultComponent_resultData_o *v217; // x8
  int v218; // w9
  int v219; // w11
  __int64 v220; // x25
  TerminalPramsManager_c *v221; // x0
  int32_t bounds_high; // w23
  bool IsUserEventStatus; // w0
  TerminalPramsManager_c *v224; // x0
  TerminalPramsManager_c *v225; // x0
  Il2CppObject *v226; // x23
  __int64 v227; // x1
  int32_t v228; // w2
  int32_t v229; // w3
  TerminalPramsManager_c *v230; // x0
  ServantStatusBattleListViewItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  struct System_String_o *ultimateGetQpText; // x8
  struct System_String_o *v233; // x8
  signed int v234; // w8
  __int64 *v235; // x9
  __int64 v236; // x21
  __int64 *v237; // x9
  __int64 v238; // x23
  void **v239; // x8
  int32_t v240; // w26
  __int64 v241; // x1
  __int64 v242; // x2
  System_Collections_Generic_List_object__o *v243; // x26
  TerminalPramsManager___c_c *v244; // x8
  System_Predicate_object__o *_9__652_0; // x23
  Il2CppObject *v246; // x24
  struct TerminalPramsManager___c_StaticFields *v247; // x0
  int32_t v248; // w2
  int32_t v249; // w3
  __int64 v250; // x1
  System_String_o *v251; // x29
  TerminalPramsManager_c *v252; // x0
  TerminalPramsManager_c *v253; // x0
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x26
  System_String_o *v255; // x23
  int32_t v256; // w2
  int32_t v257; // w3
  TerminalPramsManager_c *v258; // x0
  int32_t v259; // w23
  int32_t PhaseCnt_k__BackingField; // w24
  _BOOL4 IsQuestClear_k__BackingField; // w21
  TerminalPramsManager_c *v262; // x0
  __int64 v263; // x1
  Il2CppObject *v264; // x23
  int v265; // w23
  TerminalPramsManager_c *v266; // x0
  ServantStatusBattleListViewItem_o *p_questClearCostumeRelease_k__BackingField; // x0
  int32_t v268; // w2
  int32_t v269; // w3
  BattleResultComponent_resultData_o *v270; // x8
  ServantStatusBattleListViewItem_c *v271; // x23
  TerminalPramsManager_c *v272; // x0
  ServantStatusBattleListViewItem_o *v273; // x0
  TerminalPramsManager_c *v274; // x0
  ServantStatusBattleListViewItem_o *p_questClearCostumeGet_k__BackingField; // x0
  int32_t v276; // w2
  int32_t v277; // w3
  ServantStatusBattleListViewItem_c *v278; // x23
  TerminalPramsManager_c *v279; // x0
  ServantStatusBattleListViewItem_o *v280; // x0
  TerminalPramsManager_c *v281; // x0
  ServantStatusBattleListViewItem_o *p_eventPointWinReward_k__BackingField; // x0
  int32_t v283; // w2
  int32_t v284; // w3
  TerminalPramsManager_c *v285; // x0
  int32_t v286; // w23
  QuestGroupMaster_o *v287; // x24
  int32_t GroupId; // w0
  TerminalPramsManager_c *v289; // x8
  int32_t v290; // w25
  int v291; // w24
  Il2CppObject *v292; // x25
  EventPointEntity_o *v293; // x24
  int32_t v294; // w23
  struct TerminalPramsManager_StaticFields *v295; // x8
  BattleResultComponent_resultData_o *v296; // x8
  struct System_String_o *v297; // x9
  ServantStatusBattleListViewItem_c *v298; // x23
  TerminalPramsManager_c *v299; // x0
  ServantStatusBattleListViewItem_o *v300; // x0
  int32_t v301; // w21
  TerminalPramsManager_c *v302; // x0
  TerminalPramsManager_c *v303; // x0
  ServantStatusBattleListViewItem_o *p_eventRaceBoost_k__BackingField; // x0
  int32_t v305; // w2
  int32_t v306; // w3
  __int64 v307; // x8
  BattleResultComponent_resultData_o *v308; // x22
  TerminalPramsManager_c *v309; // x0
  ServantStatusBattleListViewItem_o *v310; // x0
  __int64 v311; // x21
  BattleResultComponent_resultData_o *v312; // x9
  struct System_String_o *v313; // x10
  struct System_String_o *v314; // x22
  TerminalPramsManager_c *v315; // x0
  ServantStatusBattleListViewItem_o *p_eventTowerReward_k__BackingField; // x0
  int32_t v317; // w2
  int32_t v318; // w3
  ServantStatusBattleListViewItem_c *v319; // x22
  TerminalPramsManager_c *v320; // x0
  ServantStatusBattleListViewItem_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  ServantStatusBattleListViewItem_c *v322; // x22
  TerminalPramsManager_c *v323; // x0
  ServantStatusBattleListViewItem_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  ServantStatusBattleListViewItem_c *v325; // x22
  TerminalPramsManager_c *v326; // x0
  ServantStatusBattleListViewItem_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  ServantStatusBattleListViewItem_c *v328; // x22
  TerminalPramsManager_c *v329; // x0
  ServantStatusBattleListViewItem_o *p_warClearReward_k__BackingField; // x0
  TerminalPramsManager_c *v331; // x0
  struct TerminalPramsManager_StaticFields *v332; // x0
  __int64 v333; // x1
  int32_t v334; // w2
  int32_t v335; // w3
  TerminalPramsManager_c *v336; // x0
  struct TerminalPramsManager_StaticFields *v337; // x0
  __int64 v338; // x1
  Il2CppObject *Instance; // x22
  int32_t WarID_ByQuestID; // w22
  WarEntity_o *WarEntityByWarID; // x0
  int32_t v342; // w22
  int32_t v343; // w2
  int32_t v344; // w3
  __int64 v345; // x8
  BattleResultComponent_resultData_o *v346; // x21
  TerminalPramsManager_c *v347; // x0
  struct TerminalPramsManager_StaticFields *v348; // x0
  ServantStatusBattleListViewItem_o *p_oldPersonalBoss_k__BackingField; // x0
  TerminalPramsManager_c *v350; // x0
  struct TerminalPramsManager_StaticFields *v351; // x0
  struct EventTowerReward_array *eventTowerReward; // x8
  bool v353; // w21
  BalanceConfig_c *v354; // x8
  int32_t battleId; // w21
  TerminalPramsManager_c *v356; // x0
  __int64 v357; // x1
  TerminalPramsManager_c *v358; // x0
  BalanceConfig_c *v359; // x8
  int32_t v360; // w21
  TerminalPramsManager_c *v361; // x0
  BalanceConfig_c *v362; // x8
  int32_t v363; // w21
  TerminalPramsManager_c *v364; // x0
  BalanceConfig_c *v365; // x8
  int32_t v366; // w21
  Il2CppObject *v367; // x21
  BattleResultComponent_resultData_array *v368; // x23
  int32_t v369; // w2
  int32_t v370; // w3
  UserSuperBossEntity_o *v371; // x22
  BattleResultComponent_resultData_array *v372; // x21
  __int64 v373; // x1
  int32_t v374; // w2
  int32_t v375; // w3
  TerminalPramsManager_c *v376; // x0
  struct TerminalPramsManager_StaticFields *v377; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v379; // x21
  __int64 v380; // x1
  Il2CppObject *v381; // x22
  int32_t ScriptQuestId; // w22
  __int64 v383; // x1
  Il2CppObject *v384; // x23
  TerminalPramsManager_c *v385; // x0
  int32_t v386; // w27
  int32_t winResult; // w24
  int32_t v388; // w2
  int32_t v389; // w3
  __int64 v390; // x1
  Il2CppObject *v391; // x23
  TerminalPramsManager_c *v392; // x0
  int32_t v393; // w24
  int32_t v394; // w21
  TerminalPramsManager_c *v395; // x0
  int32_t v396; // w1
  ServantStatusBattleListViewItem_o *p_lastPlayBgmName; // x0
  const MethodInfo *v398; // x0
  __int64 v399; // x1
  Il2CppObject *v400; // x21
  int32_t v401; // w22
  int32_t v402; // w2
  int32_t v403; // w3
  TerminalPramsManager_c *v404; // x0
  il2cpp_array_size_t *v405; // x0
  int32_t v406; // w22
  TerminalPramsManager_c *v407; // x0
  int32_t v408; // w23
  __int64 v409; // x1
  int32_t v410; // w2
  int32_t v411; // w3
  SpecifiedSceneInfo_o *SpecifiedSceneInfo; // x22
  TerminalPramsManager_c *v413; // x0
  struct TerminalPramsManager_StaticFields *v414; // x0
  const MethodInfo *v415; // x0
  int32_t v416; // w2
  int32_t v417; // w3
  int32_t v418; // w22
  TerminalPramsManager_c *v419; // x0
  ServantStatusBattleListViewItem_o *p_eventHarvestGrowthInfo; // x0
  __int64 v421; // x1
  TerminalPramsManager_c *v422; // x0
  BattleResultComponent_resultData_array *v423; // x22
  int32_t ScriptIntParam; // w24
  int32_t v425; // w0
  __int64 v426; // x1
  __int64 v427; // x2
  int32_t v428; // w25
  __int64 v429; // x23
  int32_t v430; // w2
  int32_t v431; // w3
  Il2CppArrayBounds *bounds; // d0
  TerminalPramsManager_c *v433; // x0
  ServantStatusBattleListViewItem_o *v434; // x0
  __int64 v435; // x1
  Il2CppObject *v436; // x22
  QuestEntity_o *QuestEntity; // x0
  int32_t v438; // w2
  int32_t v439; // w3
  QuestEntity_o *v440; // x22
  TerminalPramsManager_c *v441; // x0
  int32_t SpotId; // w21
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v444; // x21
  TerminalPramsManager_c *v445; // x0
  struct EventAreaImproveResultInfo_o *eventAreaImproveResultInfo; // x8
  TerminalPramsManager_c *v447; // x0
  __int64 v448; // x1
  System_String_o *v449; // x21
  TerminalPramsManager_c *v450; // x0
  System_String_o *v451; // x0
  __int64 v452; // x1
  int32_t v453; // w2
  int32_t v454; // w3
  System_String_o *v455; // x21
  TerminalPramsManager_c *v456; // x0
  ServantStatusBattleListViewItem_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  ServantStatusBattleListViewItem_c *v458; // x21
  TerminalPramsManager_c *v459; // x0
  ServantStatusBattleListViewItem_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v461; // x1
  __int64 v462; // x21
  TerminalPramsManager_c *v463; // x0
  int32_t v464; // w2
  int32_t v465; // w3
  int32_t v466; // w2
  int32_t v467; // w3
  int32_t v468; // w1
  __int64 v469; // x1
  TerminalPramsManager_c *v470; // x0
  int32_t v471; // w2
  int32_t v472; // w3
  int32_t v473; // w2
  int32_t v474; // w3
  int32_t v475; // w1
  __int64 v476; // x1
  TerminalPramsManager_c *v477; // x0
  int32_t v478; // w2
  int32_t v479; // w3
  int32_t v480; // w2
  int32_t v481; // w3
  int32_t v482; // w1
  __int64 v483; // x1
  TerminalPramsManager_c *v484; // x0
  int32_t v485; // w2
  int32_t v486; // w3
  System_String_o *v487; // x0
  const MethodInfo *v488; // x1
  const MethodInfo *v489; // x0
  const MethodInfo *v490; // x0
  const MethodInfo *v491; // x0
  const MethodInfo *v492; // x0
  const MethodInfo *v493; // x0
  __int64 v494; // x1
  TerminalPramsManager_c *v495; // x0
  __int64 v496; // x0
  System_String_o *v497; // [xsp+8h] [xbp-118h]
  System_String_o *progressQuestId; // [xsp+10h] [xbp-110h]
  bool v499; // [xsp+1Ch] [xbp-104h]
  BattleResultComponent_resultData_array *resulta; // [xsp+20h] [xbp-100h]
  il2cpp_array_size_t *p_max_length; // [xsp+28h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v502; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v503; // [xsp+50h] [xbp-D0h]
  __int128 v504; // [xsp+70h] [xbp-B0h]
  char v505[4]; // [xsp+84h] [xbp-9Ch] BYREF
  UserSuperBossEntity_o *v506; // [xsp+88h] [xbp-98h] BYREF
  Il2CppObject *v507; // [xsp+90h] [xbp-90h] BYREF
  int QuestId_k__BackingField; // [xsp+9Ch] [xbp-84h] BYREF
  Il2CppObject *v509; // [xsp+A0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+A8h] [xbp-78h] BYREF
  int v511; // [xsp+B4h] [xbp-6Ch] BYREF
  QuestPhaseEntity_o *v512; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v513; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v514; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v515; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v516; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v517; // 0:x0.16

  v4 = result;
  if ( (byte_49F9A74 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, isWin);
    sub_1B640C8(&bool_TypeInfo, v5);
    sub_1B640C8(&CondType_TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventPointMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRaidMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMessageMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMaster_EventDetailMaster___, v19);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v20);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v21);
    sub_1B640C8(&Method_DataManager_GetMaster_UserSuperBossMaster___, v22);
    sub_1B640C8(&DataManager_TypeInfo, v23);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v24);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v25);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v26);
    sub_1B640C8(&EventHarvestGrowthInfo_TypeInfo, v27);
    sub_1B640C8(&EventSaveData_TypeInfo, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v29);
    sub_1B640C8(&NetworkManager_TypeInfo, v30);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
    sub_1B640C8(&System_Predicate_QuestReleaseEntity__TypeInfo, v33);
    sub_1B640C8(&QuestClearHeroineInfo_TypeInfo, v34);
    sub_1B640C8(&ScriptManager_TypeInfo, v35);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v36);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v38);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v39);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v40);
    sub_1B640C8(&string___TypeInfo, v41);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v42);
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v43);
    sub_1B640C8(&Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__652_0__, v44);
    sub_1B640C8(&TerminalPramsManager___c_TypeInfo, v45);
    sub_1B640C8(&UserServantCollectionEntity___TypeInfo, v46);
    sub_1B640C8(&UserServantCollectionEntity_TypeInfo, v47);
    sub_1B640C8(&UserServantEntity_TypeInfo, v48);
    sub_1B640C8(&UserSuperBossEntity___TypeInfo, v49);
    sub_1B640C8(&StringLiteral_19801/*"harvestGrowthAfterQuestId"*/, v50);
    sub_1B640C8(&StringLiteral_16640/*"afterActionBk"*/, v51);
    sub_1B640C8(&StringLiteral_869/*","*/, v52);
    sub_1B640C8(&StringLiteral_19802/*"harvestGrowthBeforeQuestId"*/, v53);
    sub_1B640C8(&StringLiteral_1/*""*/, v54);
    sub_1B640C8(&StringLiteral_6579/*"False"*/, v55);
    result = (BattleResultComponent_resultData_array *)sub_1B640C8(&StringLiteral_1213/*"0"*/, v56);
    byte_49F9A74 = 1;
  }
  v512 = 0LL;
  v509 = 0LL;
  entity = 0LL;
  QuestId_k__BackingField = 0;
  v506 = 0LL;
  v507 = 0LL;
  v505[0] = 0;
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
  v60 = (_DWORD *)sub_1B64170(UserServantCollectionEntity___TypeInfo, oldUserSvtCollection->max_length);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1078;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_max_length )
    goto LABEL_1079;
  resulta = v4;
  if ( !*m_Items )
    goto LABEL_1078;
  v63 = (*m_Items)->m_Items[11];
  v499 = isWin;
  v511 = 0;
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
      *(_QWORD *)&v513.fields.currentCryptoKey = v70;
      *(_QWORD *)&v513.fields.fakeValue = v69;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                           v513,
                                                           0LL);
      if ( !v65 )
        goto LABEL_1078;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v65, (int64_t)v68, (int32_t)result, 0LL);
      v74 = (UserServantCollectionEntity_o *)sub_1B64314(UserServantCollectionEntity_TypeInfo, v72, v73);
      UserServantCollectionEntity___ctor_39833508(v74, EntityDefinitely, 0LL);
      if ( !v60 )
        goto LABEL_1078;
      if ( v74 )
      {
        result = (BattleResultComponent_resultData_array *)sub_1B64204(v74, *(_QWORD *)(*(_QWORD *)v60 + 64LL));
        if ( !result )
          goto LABEL_1080;
      }
      if ( v66 >= v60[6] )
        break;
      v77 = &v60[2 * v66];
      *((_QWORD *)v77 + 4) = v74;
      v78 = (ServantStatusBattleListViewItem_o *)(v77 + 8);
      sub_1B6406C(v78, (int32_t)v74, v75, v76);
      if ( v66 >= v60[6] )
        break;
      klass = v78->klass;
      *(_OWORD *)&v503.fields.currentCryptoKey = *(_OWORD *)(v67 + 84);
      if ( !klass )
        goto LABEL_1078;
      *(_OWORD *)((char *)&klass->_1.declaringType + 4) = *(_OWORD *)&v503.fields.currentCryptoKey;
      if ( v66 >= v60[6] )
        break;
      v80 = v78->klass;
      v504 = *(_OWORD *)(v67 + 100);
      if ( !v80 )
        goto LABEL_1078;
      *(_OWORD *)((char *)&v80->_1.generic_class + 4) = v504;
      if ( v66 >= v60[6] )
        break;
      if ( !v78->klass )
        goto LABEL_1078;
      ++v66;
      HIDWORD(v78->klass->_1.interopData) = *(_DWORD *)(v67 + 116);
      v511 = v66;
      eventEndTitle = (int)v63->fields.eventEndTitle;
      if ( (int)v66 >= eventEndTitle )
        goto LABEL_31;
    }
LABEL_1079:
    sub_1B6432C(result, isWin);
  }
LABEL_31:
  v81 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v81 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestClearHeroineInfo = (ServantStatusBattleListViewItem_o *)&v81->static_fields->mQuestClearHeroineInfo;
  p_mQuestClearHeroineInfo->klass = 0LL;
  sub_1B6406C(p_mQuestClearHeroineInfo, 0, v61, v62);
  v83 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v84 = (*m_Items)->m_Items[5];
  if ( v84 )
  {
    v85 = v84->fields.eventEndTitle;
    if ( v85 )
    {
      if ( !(_DWORD)v85 )
        goto LABEL_1079;
      eventEndMessage = v84->fields.eventEndMessage;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1078;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !eventEndMessage )
        goto LABEL_1078;
      v87 = *(_OWORD *)&eventEndMessage[1].monitor;
      v88 = (DataMasterBase_TMaster__TEntity__PKType__o *)result;
      *(_OWORD *)&v503.fields.currentCryptoKey = *(_OWORD *)&eventEndMessage->fields._stringLength;
      *(_OWORD *)&v503.fields.fakeValue = v87;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v502 = v503;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                           &v502,
                                                           0LL);
      if ( !v88 )
        goto LABEL_1078;
      v89 = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                     v88,
                                     (int64_t)result,
                                     (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v92 = sub_1B64314(UserServantEntity_TypeInfo, v90, v91);
      UserServantEntity___ctor_39858792((UserServantEntity_o *)v92, v89, 0LL);
      v504 = *(_OWORD *)&eventEndMessage[4].klass;
      if ( !v92 )
        goto LABEL_1078;
      *(_OWORD *)(v92 + 96) = v504;
      *(_DWORD *)(v92 + 256) = eventEndMessage[10].fields._stringLength;
      *(_QWORD *)(v92 + 292) = *(System_String_c **)((char *)&eventEndMessage[12].klass + 4);
      monitor = eventEndMessage[5].monitor;
      p_monitor = &eventEndMessage[5].monitor;
      v93 = monitor;
      v96 = p_monitor[1];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v514.fields.currentCryptoKey = v93;
      *(_QWORD *)&v514.fields.fakeValue = v96;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v514, 0LL) >= 1 )
        *(_OWORD *)(v92 + 128) = *(_OWORD *)p_monitor;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1078;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)result,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      v100 = *(_QWORD *)(v92 + 80);
      v99 = *(_QWORD *)(v92 + 88);
      v101 = UserId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v515.fields.currentCryptoKey = v100;
      *(_QWORD *)&v515.fields.fakeValue = v99;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                           v515,
                                                           0LL);
      if ( !MasterData_object )
        goto LABEL_1078;
      result = (BattleResultComponent_resultData_array *)UserServantCollectionMaster__GetEntityDefinitely(
                                                           (UserServantCollectionMaster_o *)MasterData_object,
                                                           v101,
                                                           (int32_t)result,
                                                           0LL);
      v511 = 0;
      if ( !v60 )
        goto LABEL_1078;
      v103 = v60[6];
      v104 = (UserServantCollectionEntity_o *)result;
      if ( v103 >= 1 )
      {
        v105 = 0;
        while ( v105 < (unsigned int)v103 )
        {
          v106 = *(UserServantCollectionEntity_o **)&v60[2 * v105 + 8];
          if ( !v106 )
            goto LABEL_1078;
          v107 = (BattleResultComponent_resultData_array *)v106->fields.userId;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
          if ( v107 == result )
          {
            SvtId = UserServantCollectionEntity__getSvtId(v106, 0LL);
            v110 = *(_QWORD *)(v92 + 80);
            v109 = *(_QWORD *)(v92 + 88);
            v111 = SvtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v516.fields.currentCryptoKey = v110;
            *(_QWORD *)&v516.fields.fakeValue = v109;
            result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                 v516,
                                                                 0LL);
            if ( v111 == (_DWORD)result )
              goto LABEL_67;
          }
          v105 = v511 + 1;
          v511 = v105;
          v103 = v60[6];
          if ( v105 >= v103 )
            goto LABEL_66;
        }
        goto LABEL_1079;
      }
LABEL_66:
      v106 = 0LL;
LABEL_67:
      v112 = sub_1B64314(QuestClearHeroineInfo_TypeInfo, isWin, v102);
      System_Object___ctor((Il2CppObject *)v112, 0LL);
      if ( !v112 )
        goto LABEL_1078;
      *(_QWORD *)(v112 + 16) = v92;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v112 + 16), v92, v113, v114);
      result = (BattleResultComponent_resultData_array *)UserServantEntity__getLimitCount(
                                                           (UserServantEntity_o *)v92,
                                                           0LL);
      if ( !v89 )
        goto LABEL_1078;
      v117 = (_DWORD)result != UserServantEntity__getLimitCount(v89, 0LL);
      *(_BYTE *)(v112 + 25) = 0;
      *(_DWORD *)(v112 + 28) = 0;
      *(_DWORD *)(v112 + 32) = 0;
      *(_BYTE *)(v112 + 40) = 0;
      *(_DWORD *)(v112 + 36) = -1;
      *(_BYTE *)(v112 + 24) = v117;
      *(_BYTE *)(v112 + 41) = *(_DWORD *)(v92 + 296) != v89->fields.exceedCount;
      if ( v106 )
      {
        result = (BattleResultComponent_resultData_array *)UserServantCollectionEntity__getFriendShipRank(v106, 0LL);
        if ( !v104 )
          goto LABEL_1078;
        if ( (_DWORD)result != UserServantCollectionEntity__getFriendShipRank(v104, 0LL) )
          *(_DWORD *)(v112 + 36) = UserServantCollectionEntity__getFriendShipRank(v106, 0LL);
        if ( v106->fields.friendshipExceedCount != v104->fields.friendshipExceedCount )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
          v120 = *(_QWORD *)(v92 + 80);
          v119 = *(_QWORD *)(v92 + 88);
          v121 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v517.fields.currentCryptoKey = v120;
          *(_QWORD *)&v517.fields.fakeValue = v119;
          result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                               v517,
                                                               0LL);
          if ( !v121 )
            goto LABEL_1078;
          result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                               v121,
                                                               &entity,
                                                               (int32_t)result,
                                                               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_1078;
            klass_high = HIDWORD(entity[6].klass);
            friendshipExceedCount = v106->fields.friendshipExceedCount;
            *(_BYTE *)(v112 + 40) = 1;
            *(_DWORD *)(v112 + 36) = friendshipExceedCount + klass_high;
          }
        }
      }
      v124 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v124 = TerminalPramsManager_TypeInfo;
      }
      v125 = (ServantStatusBattleListViewItem_o *)&v124->static_fields->mQuestClearHeroineInfo;
      v125->klass = (ServantStatusBattleListViewItem_c *)v112;
      sub_1B6406C(v125, v112, v115, v116);
      v83 = *(_QWORD *)p_max_length;
    }
  }
  if ( !(_DWORD)v83 )
    goto LABEL_1079;
  v126 = (BattleResultComponent_resultData_o *)*m_Items;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetBattleResultCampaignBonus(v126, (const MethodInfo *)isWin);
  if ( !*p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v127 = (*m_Items)->m_Items[9];
  if ( v127 && (v128 = v127->fields.eventEndTitle) != 0LL )
  {
    if ( !(_DWORD)v128 )
      goto LABEL_1079;
    v129 = (UserQuestEntity_o *)v127->fields.eventEndMessage;
  }
  else
  {
    v129 = 0LL;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9353 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    byte_49F9353 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE5(result->m_Items[19]->fields.oldUserGame) = v129 != 0LL;
  if ( !byte_49F9352 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_49F9352 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE4(result->m_Items[19]->fields.oldUserGame) = 0;
  if ( !byte_49F9469 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_49F9469 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE1(result->m_Items[19]->fields.resultDamageRewardInfos) = 0;
  if ( !byte_49F9351 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_49F9351 = 1;
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
    if ( !byte_49F9045 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      byte_49F9045 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( result->m_Items[19]->fields.battleId )
    {
      if ( !v129 )
        goto LABEL_1078;
    }
    else
    {
      if ( !v129 )
        goto LABEL_1078;
      questId = v129->fields.questId;
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_49F9049 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
        byte_49F9049 = 1;
      }
      v131 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v131 = TerminalPramsManager_TypeInfo;
      }
      v131->static_fields->_QuestId_k__BackingField = questId;
      QuestPhase = UserQuestEntity__getQuestPhase(v129, 0LL);
      if ( !byte_49F904D )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v132);
        byte_49F904D = 1;
      }
      v134 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v134 = TerminalPramsManager_TypeInfo;
      }
      v134->static_fields->_PhaseCnt_k__BackingField = QuestPhase;
    }
    v135 = v129->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1078;
    v136 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
    if ( !v136 )
      goto LABEL_1078;
    v137 = UserQuestMaster__GetEntity((UserQuestMaster_o *)v136, (int64_t)result, v135, 0LL);
    if ( v137 )
    {
      v138 = v137;
      v139 = UserQuestEntity__getQuestPhase(v137, 0LL);
      if ( UserQuestEntity__getClearNum(v129, 0LL) || UserQuestEntity__getClearNum(v138, 0LL) != 1 )
        v141 = UserQuestEntity__IsResetStatus(v129, 0LL) && !UserQuestEntity__IsResetStatus(v138, 0LL);
      else
        v141 = 1;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9352 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v140);
        byte_49F9352 = 1;
      }
      v142 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v142 = TerminalPramsManager_TypeInfo;
      }
      v142->static_fields->_IsQuestClear_k__BackingField = v141;
      if ( !byte_49F9AC5 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v140);
        v142 = TerminalPramsManager_TypeInfo;
        byte_49F9AC5 = 1;
      }
      if ( !v142->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v142);
        v142 = TerminalPramsManager_TypeInfo;
      }
      v142->static_fields->_EventUIEffectClearQuestId_k__BackingField = v135;
      if ( !byte_49F9AC2 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v140);
        v142 = TerminalPramsManager_TypeInfo;
        byte_49F9AC2 = 1;
      }
      if ( !v142->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v142);
        v142 = TerminalPramsManager_TypeInfo;
      }
      v142->static_fields->_MapModelClearQuestId_k__BackingField = v135;
      if ( !byte_49F9AC3 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v140);
        v142 = TerminalPramsManager_TypeInfo;
        byte_49F9AC3 = 1;
      }
      if ( !v142->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v142);
        v142 = TerminalPramsManager_TypeInfo;
      }
      v142->static_fields->_MapModelClearPhaseCount_k__BackingField = v139;
      TerminalPramsManager__MapModelClearQuestInfo_SaveData((const MethodInfo *)v142);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !result )
        goto LABEL_1078;
      AdManager__TrackEvent((AdManager_o *)result, 4, 1, v135, v139, 0LL, 0LL);
      TerminalPramsManager__SendClearQuestToAdManager(v135, v139, v143);
    }
    else
    {
      v139 = 0;
    }
    v144 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v144);
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1078;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMessageMaster___);
    if ( !result )
      goto LABEL_1078;
    ValidMessage = QuestMessageMaster__GetValidMessage((QuestMessageMaster_o *)result, v135, v139, 3, 0LL);
    v147 = TerminalPramsManager_TypeInfo;
    if ( ValidMessage )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F84B0 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
        byte_49F84B0 = 1;
      }
      v147 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v147 = TerminalPramsManager_TypeInfo;
      }
      v147->static_fields->_IsDispOnly_k__BackingField = 1;
    }
    if ( !v147->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v147);
    if ( !byte_49F9AD3 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      byte_49F9AD3 = 1;
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
      if ( !byte_49F9AD3 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
        byte_49F9AD3 = 1;
      }
      v148 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v148 = TerminalPramsManager_TypeInfo;
      }
      TerminalPramsManager__SetQuestReleasedFocusState(
        v148->static_fields->_QuestReleaseFocusQuestId_k__BackingField,
        1,
        v146);
      TerminalPramsManager__SaveQuestReleasedFocusState(v149);
      if ( !byte_49F9679 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
        byte_49F9679 = 1;
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
  if ( !byte_49F9354 )
  {
    result = (BattleResultComponent_resultData_array *)sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    byte_49F9354 = 1;
  }
  v150 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v150 = TerminalPramsManager_TypeInfo;
  }
  if ( v150->static_fields->_IsQuestClear_k__BackingField )
  {
    if ( !v129 )
      goto LABEL_1078;
    v151 = v129->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1078;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !result )
      goto LABEL_1078;
    v153 = WarMaster__getByLastQuestId((WarMaster_o *)result, v151, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9355 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v152);
      byte_49F9355 = 1;
    }
    v154 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v154 = TerminalPramsManager_TypeInfo;
    }
    v154->static_fields->_IsWarClear_k__BackingField = v153 != 0LL;
    v156 = TerminalPramsManager__CheckIsOrdealCallWarClear(v153, v152);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v156 )
    {
      if ( !byte_49F9356 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v155);
        byte_49F9356 = 1;
      }
      v157 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v157 = TerminalPramsManager_TypeInfo;
      }
      v158 = 1;
    }
    else
    {
      if ( !byte_49F9356 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v155);
        byte_49F9356 = 1;
      }
      v157 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v157 = TerminalPramsManager_TypeInfo;
      }
      v158 = 0;
    }
    v157->static_fields->_IsOrdealCallWarClear_k__BackingField = v158;
    if ( !v157->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v157);
    if ( !byte_49F9357 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v155);
      byte_49F9357 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE3(result->m_Items[19]->fields.oldUserEvent) )
    {
      if ( !v153 )
        goto LABEL_1078;
      if ( !WarEntity__IsEvent(v153, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( !result )
          goto LABEL_1078;
        AdManager__TrackEvent((AdManager_o *)result, 6, 1, v153->fields.id, -1, 0LL, 0LL);
      }
    }
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !result )
      goto LABEL_1078;
    AdManager__TrackEvent((AdManager_o *)result, 5, 1, v151, -1, 0LL, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SendOpenedQuestIdToAdManager(v151, v159);
    if ( !byte_49F9357 )
    {
      result = (BattleResultComponent_resultData_array *)sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      byte_49F9357 = 1;
    }
    v150 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v150 = TerminalPramsManager_TypeInfo;
    }
    if ( v150->static_fields->_IsWarClear_k__BackingField )
    {
      if ( !v153 )
        goto LABEL_1078;
      HasFlag = WarEntity__HasFlag(v153, 128, 0LL);
      v150 = TerminalPramsManager_TypeInfo;
      if ( HasFlag )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49F966E )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
          byte_49F966E = 1;
        }
        v150 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v150 = TerminalPramsManager_TypeInfo;
        }
        v150->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
        if ( !byte_49F9469 )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
          v150 = TerminalPramsManager_TypeInfo;
          byte_49F9469 = 1;
        }
        if ( !v150->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v150);
          v150 = TerminalPramsManager_TypeInfo;
        }
        v150->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
      }
    }
  }
  if ( !v150->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v150);
  TerminalPramsManager__SetQuestRewardInfo(v4, (const MethodInfo *)isWin);
  if ( !v4->max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->panelEventPoint = HIDWORD((*m_Items)->m_Items[2]);
  static_fields->mResultEventPanelRewardInfos = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->mResultEventPanelRewardInfos, 0, v161, v162);
  if ( !*p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v166 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[19];
  if ( v166 && v166->_1.namespaze )
  {
    v167 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v167 = TerminalPramsManager_TypeInfo;
    }
    p_mResultEventPanelRewardInfos = (ServantStatusBattleListViewItem_o *)&v167->static_fields->mResultEventPanelRewardInfos;
    p_mResultEventPanelRewardInfos->klass = v166;
    sub_1B6406C(p_mResultEventPanelRewardInfos, (int32_t)v166, v164, v165);
  }
  v169 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v169 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = (ServantStatusBattleListViewItem_o *)&v169->static_fields->eventConquestInfos;
  p_eventConquestInfos->klass = 0LL;
  sub_1B6406C(p_eventConquestInfos, 0, v164, v165);
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  v173 = TerminalPramsManager_TypeInfo->static_fields;
  v173->eventConquestInfoDisp = 0;
  v174 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v175 = (*m_Items)->m_Items[43];
  if ( v175 && v175->fields.eventEndTitle )
  {
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      v173 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v173->eventConquestInfos = (struct EventConquestInfo_array *)v175;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v173->eventConquestInfos, (int32_t)v175, v171, v172);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 1;
    v174 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v174 )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  if ( LOBYTE((*m_Items)->m_Items[46]) )
  {
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_49F98E8 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      byte_49F98E8 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(result->m_Items[19][1].monitor) = 1;
    if ( !byte_49F9354 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_49F9354 = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE4(result->m_Items[19]->fields.oldUserGame) )
    {
      if ( !v129 )
        goto LABEL_1078;
      v176 = v129->fields.questId;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1078;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !result )
        goto LABEL_1078;
      v177 = WarMaster__getByLastQuestId((WarMaster_o *)result, v176, 0LL);
      if ( v177 )
      {
        id = v177->fields.id;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49F98E9 )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v178);
          byte_49F98E9 = 1;
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
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1078;
  v180 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1078;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1079;
  if ( !*m_Items || !result )
    goto LABEL_1078;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)result,
          &v509,
          HIDWORD((*m_Items)->bounds),
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_534;
  result = (BattleResultComponent_resultData_array *)v509;
  if ( !v509 )
    goto LABEL_1078;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPoint((EventDetailEntity_o *)v509, 0LL);
  v185 = 0LL;
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !*p_max_length )
      goto LABEL_1079;
    if ( !*m_Items )
      goto LABEL_1078;
    v185 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[10];
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9AD4 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    byte_49F9AD4 = 1;
  }
  v186 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v186 = TerminalPramsManager_TypeInfo;
  }
  p_OldUserEventPoint_k__BackingField = (ServantStatusBattleListViewItem_o *)&v186->static_fields->_OldUserEventPoint_k__BackingField;
  p_OldUserEventPoint_k__BackingField->klass = v185;
  sub_1B6406C(p_OldUserEventPoint_k__BackingField, (int32_t)v185, v183, v184);
  if ( !*p_max_length )
    goto LABEL_1079;
  if ( !*m_Items || !v180 )
    goto LABEL_1078;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidGorupMax(
                                                       (EventRaidMaster_o *)v180,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0LL);
  if ( (int)result >= 1 )
  {
    if ( !*p_max_length )
      goto LABEL_1079;
    if ( !*m_Items )
      goto LABEL_1078;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                         (EventRaidMaster_o *)v180,
                                                         HIDWORD((*m_Items)->bounds),
                                                         0LL);
    v511 = 0;
    if ( !result )
      goto LABEL_1078;
    max_length = result->max_length;
    v189 = result;
    if ( max_length < 1 )
      goto LABEL_534;
    v190 = 0;
    while ( 1 )
    {
      if ( v190 >= (unsigned int)max_length )
        goto LABEL_1079;
      v191 = &v189->obj.klass + v190;
      v192 = v191[4];
      if ( !v192 )
        goto LABEL_1078;
      result = (BattleResultComponent_resultData_array *)EventRaidEntity__IsJumbleSingleRaid(
                                                           (EventRaidEntity_o *)v191[4],
                                                           0LL);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !*p_max_length )
          goto LABEL_1079;
        if ( !*m_Items )
          goto LABEL_1078;
        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                 (EventRaidMaster_o *)v180,
                                 HIDWORD((*m_Items)->bounds),
                                 (int32_t)v192->_1.namespaze,
                                 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49F9045 )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
          byte_49F9045 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( RaidGroupDeadQuestId == result->m_Items[19]->fields.battleId )
        {
          result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
                                                           (EventRaidMaster_o *)v180,
                                                           HIDWORD((*m_Items)->bounds),
                                                           HIDWORD(v192->_1.name),
                                                           0LL);
      QuestId_k__BackingField = 0;
      if ( !result )
        goto LABEL_1078;
      v194 = result->max_length;
      v195 = result;
      if ( v194 >= 1 )
      {
        v196 = 0;
        while ( 1 )
        {
          if ( v196 >= (unsigned int)v194 )
            goto LABEL_1079;
          v197 = *((_DWORD *)v195->m_Items + v196);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49F9045 )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
            byte_49F9045 = 1;
          }
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          }
          v198 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
          if ( v197 == v198->_QuestId_k__BackingField )
            break;
          v196 = QuestId_k__BackingField + 1;
          QuestId_k__BackingField = v196;
          v194 = v195->max_length;
          if ( v196 >= v194 )
            goto LABEL_364;
        }
        name_high = HIDWORD(v192->_1.name);
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          v198 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v198->clearBattleRaidId = name_high;
      }
LABEL_364:
      v190 = v511 + 1;
      v511 = v190;
      max_length = v189->max_length;
      if ( v190 >= max_length )
        goto LABEL_534;
    }
    v210 = TerminalPramsManager_TypeInfo;
    v211 = HIDWORD(v192->_1.name);
    goto LABEL_413;
  }
  result = (BattleResultComponent_resultData_array *)v509;
  if ( !v509 )
    goto LABEL_1078;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__isRaidDefeatCount(
                                                       (EventDetailEntity_o *)v509,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_array *)v509;
    if ( !v509 )
      goto LABEL_1078;
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventActivityPoint(
                                                         (EventDetailEntity_o *)v509,
                                                         0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !*p_max_length )
        goto LABEL_1079;
      if ( !*m_Items )
        goto LABEL_1078;
      v206 = (int32_t)(*m_Items)->m_Items[42];
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9AD5 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
        byte_49F9AD5 = 1;
      }
      v207 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v207 = TerminalPramsManager_TypeInfo;
      }
      v207->static_fields->_EventActivityPointEffectState_k__BackingField = v206;
    }
    else
    {
      result = (BattleResultComponent_resultData_array *)v509;
      if ( !v509 )
        goto LABEL_1078;
      if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v509, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49F9AD6 )
        {
          result = (BattleResultComponent_resultData_array *)sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
          byte_49F9AD6 = 1;
        }
        v208 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v208 = TerminalPramsManager_TypeInfo;
        }
        if ( v208->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField )
        {
          v209 = 0;
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
          v208 = TerminalPramsManager_TypeInfo;
          v209 = IsUserEventStatus;
        }
        if ( !v208->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v208);
        if ( !byte_49F9816 )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
          byte_49F9816 = 1;
        }
        v224 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v224 = TerminalPramsManager_TypeInfo;
        }
        v224->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = v209;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)v509;
        if ( !v509 )
          goto LABEL_1078;
        result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPanel(
                                                             (EventDetailEntity_o *)v509,
                                                             0LL);
        if ( ((unsigned __int8)result & 1) != 0 )
        {
          if ( !*p_max_length )
            goto LABEL_1079;
          v214 = &byte_49F9000;
          v215 = &byte_49F9000;
          v216 = &byte_49F9000;
          if ( !*m_Items )
            goto LABEL_1078;
          v217 = (*m_Items)->m_Items[10];
          v511 = 0;
          if ( !v217 )
            goto LABEL_1078;
          v218 = (int)v217->fields.eventEndTitle;
          if ( v218 >= 1 )
          {
            v219 = 0;
            while ( 1 )
            {
              if ( v218 == v219 )
                goto LABEL_1079;
              if ( !v509 )
                goto LABEL_1078;
              v220 = *((_QWORD *)&v217->fields.eventEndMessage + v219);
              if ( !v220 )
                goto LABEL_1078;
              if ( LODWORD(v509[1].klass) == *(_DWORD *)(v220 + 24) )
                break;
              v511 = ++v219;
              if ( v218 == v219 )
                goto LABEL_515;
            }
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49F9178 )
            {
              sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
              byte_49F9178 = 1;
            }
            v225 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v225 = TerminalPramsManager_TypeInfo;
            }
            if ( !v225->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
            {
              v226 = (Il2CppObject *)sub_1B64314(EventSaveData_TypeInfo, isWin, v213);
              System_Object___ctor(v226, 0LL);
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_49F9179 )
              {
                sub_1B640C8(&TerminalPramsManager_TypeInfo, v227);
                byte_49F9179 = 1;
              }
              v230 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v230 = TerminalPramsManager_TypeInfo;
              }
              p_BeforeEventSubmarineSaveData_k__BackingField = (ServantStatusBattleListViewItem_o *)&v230->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
              p_BeforeEventSubmarineSaveData_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v226;
              sub_1B6406C(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v226, v228, v229);
              v225 = TerminalPramsManager_TypeInfo;
            }
            if ( !v225->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v225);
            if ( !byte_49F9178 )
            {
              sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
              byte_49F9178 = 1;
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
            ultimateGetQpText->fields._stringLength = *(_DWORD *)(v220 + 24);
            if ( !byte_49F9178 )
            {
              sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              byte_49F9178 = 1;
            }
            if ( !LODWORD(result->m_Items[24]) )
            {
              j_il2cpp_runtime_class_init_0(result);
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
            }
            v233 = result->m_Items[19]->fields.ultimateGetQpText;
            if ( !v233 )
              goto LABEL_1078;
            result = (BattleResultComponent_resultData_array *)v233[1].klass;
            if ( result
              && (result = (BattleResultComponent_resultData_array *)System_String__Split(
                                                                       (System_String_o *)result,
                                                                       0x2Cu,
                                                                       0,
                                                                       0LL)) != 0LL )
            {
              v234 = result->max_length;
              v235 = (__int64 *)&result->m_Items[1];
              if ( v234 <= 1 )
                v235 = &StringLiteral_1213/*"0"*/;
              v236 = *v235;
              v237 = v234 <= 2 ? &StringLiteral_1213/*"0"*/ : (__int64 *)&result->m_Items[2];
              v238 = *v237;
              v239 = v234 <= 3 ? &StringLiteral_6579/*"False"*/ : (void **)&result->m_Items[3];
            }
            else
            {
              v238 = StringLiteral_1213/*"0"*/;
              v239 = &StringLiteral_6579/*"False"*/;
              v236 = StringLiteral_1213/*"0"*/;
            }
            if ( !v509 )
              goto LABEL_1078;
            v240 = (int32_t)v509[1].klass;
            v497 = (System_String_o *)*v239;
            if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
            result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
                                                                 v240,
                                                                 0LL);
            v243 = (System_Collections_Generic_List_object__o *)result;
            progressQuestId = (System_String_o *)v238;
            v244 = TerminalPramsManager___c_TypeInfo;
            if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
              v244 = TerminalPramsManager___c_TypeInfo;
            }
            _9__652_0 = (System_Predicate_object__o *)v244->static_fields->__9__652_0;
            if ( !_9__652_0 )
            {
              if ( !v244->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v244);
                v244 = TerminalPramsManager___c_TypeInfo;
              }
              v246 = (Il2CppObject *)v244->static_fields->__9;
              _9__652_0 = (System_Predicate_object__o *)sub_1B64314(
                                                          System_Predicate_QuestReleaseEntity__TypeInfo,
                                                          v241,
                                                          v242);
              System_Predicate_object____ctor(
                _9__652_0,
                v246,
                Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__652_0__,
                0LL);
              v247 = TerminalPramsManager___c_TypeInfo->static_fields;
              v247->__9__652_0 = (struct System_Predicate_QuestReleaseEntity__o *)_9__652_0;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v247->__9__652_0, (int32_t)_9__652_0, v248, v249);
              v216 = &byte_49F9000;
            }
            if ( !v243 )
              goto LABEL_1078;
            v215 = &byte_49F9000;
            v251 = (System_String_o *)v236;
            if ( System_Collections_Generic_List_object___Find(
                   v243,
                   (System_Predicate_T__o *)_9__652_0,
                   (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
            {
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_49F9045 )
              {
                sub_1B640C8(&TerminalPramsManager_TypeInfo, v250);
                byte_49F9045 = 1;
              }
              v252 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v252 = TerminalPramsManager_TypeInfo;
              }
              QuestId_k__BackingField = v252->static_fields->_QuestId_k__BackingField;
              v251 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
            }
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49F9178 )
            {
              sub_1B640C8(&TerminalPramsManager_TypeInfo, v250);
              byte_49F9178 = 1;
            }
            v253 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v253 = TerminalPramsManager_TypeInfo;
            }
            BeforeEventSubmarineSaveData_k__BackingField = v253->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
            v255 = System_Int64__ToString(v220 + 32, 0LL);
            if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
            result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_36797796(
                                                                 v255,
                                                                 v251,
                                                                 progressQuestId,
                                                                 v497,
                                                                 0LL);
            if ( !BeforeEventSubmarineSaveData_k__BackingField )
              goto LABEL_1078;
            BeforeEventSubmarineSaveData_k__BackingField->fields.value = (struct System_String_o *)result;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&BeforeEventSubmarineSaveData_k__BackingField->fields.value,
              (int32_t)result,
              v256,
              v257);
            v214 = &byte_49F9000;
          }
LABEL_515:
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49F9045 )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
            byte_49F9045 = 1;
          }
          v258 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v258 = TerminalPramsManager_TypeInfo;
          }
          v259 = v258->static_fields->_QuestId_k__BackingField;
          if ( !v216[80] )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
            v258 = TerminalPramsManager_TypeInfo;
            v216[80] = 1;
          }
          if ( !v258->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v258);
            v258 = TerminalPramsManager_TypeInfo;
          }
          PhaseCnt_k__BackingField = v258->static_fields->_PhaseCnt_k__BackingField;
          if ( !v215[852] )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
            v258 = TerminalPramsManager_TypeInfo;
            v215[852] = 1;
          }
          if ( !v258->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v258);
            v258 = TerminalPramsManager_TypeInfo;
          }
          IsQuestClear_k__BackingField = v258->static_fields->_IsQuestClear_k__BackingField;
          if ( !v214[849] )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
            v258 = TerminalPramsManager_TypeInfo;
            v214[849] = 1;
          }
          if ( !v258->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v258);
            v258 = TerminalPramsManager_TypeInfo;
          }
          SubmarineSaveParamsManager__SaveClearQuestInfo(
            v259,
            PhaseCnt_k__BackingField,
            IsQuestClear_k__BackingField,
            v258->static_fields->_IsPhaseClear_k__BackingField,
            0LL);
        }
        else
        {
          result = (BattleResultComponent_resultData_array *)v509;
          if ( !v509 )
            goto LABEL_1078;
          if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)v509, 0LL) )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49F9AC8 )
            {
              sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
              byte_49F9AC8 = 1;
            }
            v221 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v221 = TerminalPramsManager_TypeInfo;
            }
            v221->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
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
                                                       (EventRaidMaster_o *)v180,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0LL);
  v511 = 0;
  if ( !result )
    goto LABEL_1078;
  v200 = result->max_length;
  v201 = result;
  if ( v200 >= 1 )
  {
    v202 = 0;
    while ( 1 )
    {
      if ( v202 >= (unsigned int)v200 || !*p_max_length )
        goto LABEL_1079;
      if ( !*m_Items )
        goto LABEL_1078;
      v203 = v201->m_Items[v202];
      if ( !v203 )
        goto LABEL_1078;
      RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                          (EventRaidMaster_o *)v180,
                          HIDWORD((*m_Items)->bounds),
                          v203->fields.eventId,
                          0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9045 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
        byte_49F9045 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v205 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( RaidDeadQuestId == v205->_QuestId_k__BackingField )
        break;
      v202 = v511 + 1;
      v511 = v202;
      v200 = v201->max_length;
      if ( v202 >= v200 )
        goto LABEL_534;
    }
    eventId = v203->fields.eventId;
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      v205 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v205->clearBattleRaidId = eventId;
    result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !result )
      goto LABEL_1078;
    if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)result, RaidDeadQuestId, 0, 0LL) )
    {
      v210 = TerminalPramsManager_TypeInfo;
      v211 = v203->fields.eventId;
LABEL_413:
      if ( !v210->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v210);
        v210 = TerminalPramsManager_TypeInfo;
      }
      v210->static_fields->clearLastBattleRaidId = v211;
    }
  }
LABEL_534:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9663 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    byte_49F9663 = 1;
  }
  v262 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v262 = TerminalPramsManager_TypeInfo;
  }
  v262->static_fields->_IsWarBoardClear_k__BackingField = 0;
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    v262 = TerminalPramsManager_TypeInfo;
    byte_49F9045 = 1;
  }
  if ( !v262->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v262);
    v262 = TerminalPramsManager_TypeInfo;
  }
  if ( v262->static_fields->_QuestId_k__BackingField >= 1 )
  {
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1078;
    v264 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9045 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v263);
      byte_49F9045 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v264 )
      goto LABEL_1078;
    result = (BattleResultComponent_resultData_array *)QuestMaster__getQuestEntity(
                                                         (QuestMaster_o *)v264,
                                                         result->m_Items[19]->fields.battleId,
                                                         0LL);
    if ( !result )
      goto LABEL_1078;
    v265 = (int)result->m_Items[1];
    if ( !byte_49F9663 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      byte_49F9663 = 1;
    }
    v262 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v262 = TerminalPramsManager_TypeInfo;
    }
    v262->static_fields->_IsWarBoardClear_k__BackingField = v265 == 7;
  }
  if ( !v262->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v262);
  if ( !byte_49F98E7 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    byte_49F98E7 = 1;
  }
  v266 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v266 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeRelease_k__BackingField = (ServantStatusBattleListViewItem_o *)&v266->static_fields->_questClearCostumeRelease_k__BackingField;
  p_questClearCostumeRelease_k__BackingField->klass = 0LL;
  sub_1B6406C(p_questClearCostumeRelease_k__BackingField, 0, v181, v182);
  if ( !*p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v270 = (*m_Items)->m_Items[22];
  if ( v270 && v270->fields.eventEndTitle )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9656 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      byte_49F9656 = 1;
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
      v271 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[22];
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_49F98E7 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
        byte_49F98E7 = 1;
      }
      v272 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v272 = TerminalPramsManager_TypeInfo;
      }
      v273 = (ServantStatusBattleListViewItem_o *)&v272->static_fields->_questClearCostumeRelease_k__BackingField;
      v273->klass = v271;
      sub_1B6406C(v273, (int32_t)v271, v268, v269);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9661 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    byte_49F9661 = 1;
  }
  v274 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v274 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeGet_k__BackingField = (ServantStatusBattleListViewItem_o *)&v274->static_fields->_questClearCostumeGet_k__BackingField;
  p_questClearCostumeGet_k__BackingField->klass = 0LL;
  sub_1B6406C(p_questClearCostumeGet_k__BackingField, 0, v268, v269);
  if ( !*p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v278 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[23];
  if ( v278 && v278->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9661 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      byte_49F9661 = 1;
    }
    v279 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v279 = TerminalPramsManager_TypeInfo;
    }
    v280 = (ServantStatusBattleListViewItem_o *)&v279->static_fields->_questClearCostumeGet_k__BackingField;
    v280->klass = v278;
    sub_1B6406C(v280, (int32_t)v278, v276, v277);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9AD7 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    byte_49F9AD7 = 1;
  }
  v281 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v281 = TerminalPramsManager_TypeInfo;
  }
  p_eventPointWinReward_k__BackingField = (ServantStatusBattleListViewItem_o *)&v281->static_fields->_eventPointWinReward_k__BackingField;
  p_eventPointWinReward_k__BackingField->klass = 0LL;
  sub_1B6406C(p_eventPointWinReward_k__BackingField, 0, v276, v277);
  if ( !byte_49F9AD8 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    byte_49F9AD8 = 1;
  }
  v285 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v285 = TerminalPramsManager_TypeInfo;
  }
  v285->static_fields->_eventPointWinType_k__BackingField = 0;
  if ( v129 && v509 && HIDWORD(v509[9].klass) == 4 )
  {
    v286 = v129->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1078;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !result )
      goto LABEL_1078;
    v287 = (QuestGroupMaster_o *)result;
    GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)result, v286, 4, 0LL);
    v289 = TerminalPramsManager_TypeInfo;
    v290 = GroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v289 = TerminalPramsManager_TypeInfo;
    }
    v289->static_fields->joinGroupId = v290;
    v291 = QuestGroupMaster__GetGroupId(v287, v286, 3, 0LL);
    if ( !byte_49F9354 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      byte_49F9354 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( v291 >= 1 && BYTE4(result->m_Items[19]->fields.oldUserGame) )
    {
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1078;
      v292 = DataManager__GetMasterData_object_(
               (DataManager_o *)result,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1078;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventPointMaster___);
      if ( !*p_max_length )
        goto LABEL_1079;
      if ( !*m_Items || !result )
        goto LABEL_1078;
      result = (BattleResultComponent_resultData_array *)EventPointMaster__GetEntity(
                                                           (EventPointMaster_o *)result,
                                                           v291,
                                                           HIDWORD((*m_Items)->bounds),
                                                           0LL);
      v293 = (EventPointEntity_o *)result;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v293 )
        goto LABEL_1078;
      result = (BattleResultComponent_resultData_array *)EventPointEntity__IsGroupOnGroup1(
                                                           v293,
                                                           TerminalPramsManager_TypeInfo->static_fields->joinGroupId,
                                                           0LL);
      if ( !v292 )
        goto LABEL_1078;
      v294 = QuestReleaseMaster__EventPointWinActionType(
               (QuestReleaseMaster_o *)v292,
               v286,
               (unsigned __int8)result & 1,
               0LL);
      if ( !byte_49F9AD8 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
        byte_49F9AD8 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(result->m_Items[19]->fields.warClearReward) = v294;
      if ( !byte_49F9AD9 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        byte_49F9AD9 = 1;
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v295 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( v295->_eventPointWinType_k__BackingField )
      {
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          v295 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v295->joinGroupId = -1;
      }
    }
    if ( !*p_max_length )
      goto LABEL_1079;
    if ( !*m_Items )
      goto LABEL_1078;
    v296 = (*m_Items)->m_Items[20];
    if ( v296 )
    {
      v297 = v296->fields.eventEndTitle;
      if ( v297 )
      {
        if ( !(_DWORD)v297 )
          goto LABEL_1079;
        v298 = (ServantStatusBattleListViewItem_c *)v296->fields.eventEndMessage;
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_49F9AD7 )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
          byte_49F9AD7 = 1;
        }
        v299 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v299 = TerminalPramsManager_TypeInfo;
        }
        v300 = (ServantStatusBattleListViewItem_o *)&v299->static_fields->_eventPointWinReward_k__BackingField;
        v300->klass = v298;
        sub_1B6406C(v300, (int32_t)v298, v283, v284);
      }
    }
  }
  if ( v129 && v509 && HIDWORD(v509[9].klass) == 6 )
  {
    v301 = v129->fields.questId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9ADA )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      byte_49F9ADA = 1;
    }
    v302 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v302 = TerminalPramsManager_TypeInfo;
    }
    v302->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = v301;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9811 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    byte_49F9811 = 1;
  }
  v303 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v303 = TerminalPramsManager_TypeInfo;
  }
  p_eventRaceBoost_k__BackingField = (ServantStatusBattleListViewItem_o *)&v303->static_fields->_eventRaceBoost_k__BackingField;
  p_eventRaceBoost_k__BackingField->klass = 0LL;
  sub_1B6406C(p_eventRaceBoost_k__BackingField, 0, v283, v284);
  v307 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v308 = (*m_Items)->m_Items[21];
  if ( v308 && v308->fields.battleId >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9811 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      byte_49F9811 = 1;
    }
    v309 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v309 = TerminalPramsManager_TypeInfo;
    }
    v310 = (ServantStatusBattleListViewItem_o *)&v309->static_fields->_eventRaceBoost_k__BackingField;
    v310->klass = (ServantStatusBattleListViewItem_c *)v308;
    sub_1B6406C(v310, (int32_t)v308, v305, v306);
    if ( !byte_49F97FA )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      byte_49F97FA = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v311 = *(_QWORD *)&result->m_Items[19]->fields.followerType;
    if ( !byte_49F9045 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_49F9045 = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v311 )
      goto LABEL_1078;
    *(_DWORD *)(v311 + 28) = result->m_Items[19]->fields.battleId;
    v307 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v307 )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v312 = (*m_Items)->m_Items[24];
  if ( v312 )
  {
    v313 = v312->fields.eventEndTitle;
    if ( v313 )
    {
      if ( !(_DWORD)v313 )
        goto LABEL_1079;
      v314 = v312->fields.eventEndMessage;
      if ( !v314 )
        goto LABEL_1078;
      if ( v314->fields._stringLength >= 1 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49F9ADB )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
          byte_49F9ADB = 1;
        }
        v315 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v315 = TerminalPramsManager_TypeInfo;
        }
        p_eventTowerReward_k__BackingField = (ServantStatusBattleListViewItem_o *)&v315->static_fields->_eventTowerReward_k__BackingField;
        p_eventTowerReward_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v314;
        sub_1B6406C(p_eventTowerReward_k__BackingField, (int32_t)v314, v305, v306);
        if ( !*p_max_length )
          goto LABEL_1079;
        if ( !*m_Items )
          goto LABEL_1078;
        v319 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[25];
        if ( !byte_49F9ADC )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
          byte_49F9ADC = 1;
        }
        v320 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v320 = TerminalPramsManager_TypeInfo;
        }
        p_resultEventTowerRewardInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v320->static_fields->_resultEventTowerRewardInfo_k__BackingField;
        p_resultEventTowerRewardInfo_k__BackingField->klass = v319;
        sub_1B6406C(p_resultEventTowerRewardInfo_k__BackingField, (int32_t)v319, v317, v318);
        v307 = *(_QWORD *)p_max_length;
      }
    }
  }
  if ( !(_DWORD)v307 )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v322 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[26];
  if ( v322 && v322->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F965B )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      byte_49F965B = 1;
    }
    v323 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v323 = TerminalPramsManager_TypeInfo;
    }
    p_resultBoostItemRewardInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v323->static_fields->_resultBoostItemRewardInfo_k__BackingField;
    p_resultBoostItemRewardInfo_k__BackingField->klass = v322;
    sub_1B6406C(p_resultBoostItemRewardInfo_k__BackingField, (int32_t)v322, v305, v306);
    v307 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v307 )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v325 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[27];
  if ( v325 && v325->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F965C )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      byte_49F965C = 1;
    }
    v326 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v326 = TerminalPramsManager_TypeInfo;
    }
    p_resultEventBoardGameTokenRewardInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v326->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
    p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = v325;
    sub_1B6406C(p_resultEventBoardGameTokenRewardInfo_k__BackingField, (int32_t)v325, v305, v306);
    v307 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v307 )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v328 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[28];
  if ( v328 && v328->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9666 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      byte_49F9666 = 1;
    }
    v329 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v329 = TerminalPramsManager_TypeInfo;
    }
    p_warClearReward_k__BackingField = (ServantStatusBattleListViewItem_o *)&v329->static_fields->_warClearReward_k__BackingField;
    p_warClearReward_k__BackingField->klass = v328;
    sub_1B6406C(p_warClearReward_k__BackingField, (int32_t)v328, v305, v306);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9ADD )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    byte_49F9ADD = 1;
  }
  v331 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v331 = TerminalPramsManager_TypeInfo;
  }
  v332 = v331->static_fields;
  v332->_oldSuperBoss_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v332->_oldSuperBoss_k__BackingField, 0, v305, v306);
  if ( !byte_49F9ADE )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v333);
    byte_49F9ADE = 1;
  }
  v336 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v336 = TerminalPramsManager_TypeInfo;
  }
  v337 = v336->static_fields;
  v337->_oldPersonalBoss_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v337->_oldPersonalBoss_k__BackingField, 0, v334, v335);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v338);
    byte_49F9045 = 1;
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
  result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !result )
    goto LABEL_1078;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)result, WarID_ByQuestID, 0LL);
  if ( WarEntityByWarID )
    v342 = WarEntityByWarID->fields.eventId;
  else
    v342 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !result )
    goto LABEL_1078;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v507,
                                                       v342,
                                                       (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( v499 )
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
    v345 = *(_QWORD *)p_max_length;
    if ( !(unsigned int)*(_QWORD *)p_max_length )
      goto LABEL_1079;
    if ( !*m_Items )
      goto LABEL_1078;
    if ( (*m_Items)->m_Items[41] )
    {
      result = (BattleResultComponent_resultData_array *)v507;
      if ( v507
        && (result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsPersonalBoss(
                                                                 (EventDetailEntity_o *)v507,
                                                                 0LL),
            v345 = *(_QWORD *)p_max_length,
            ((unsigned __int8)result & 1) != 0) )
      {
        if ( !(_DWORD)v345 )
          goto LABEL_1079;
        if ( !*m_Items )
          goto LABEL_1078;
        v346 = (*m_Items)->m_Items[41];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49F9ADE )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
          byte_49F9ADE = 1;
        }
        v347 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v347 = TerminalPramsManager_TypeInfo;
        }
        v348 = v347->static_fields;
        v348->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v346;
        p_oldPersonalBoss_k__BackingField = (ServantStatusBattleListViewItem_o *)&v348->_oldPersonalBoss_k__BackingField;
      }
      else
      {
        if ( !(_DWORD)v345 )
          goto LABEL_1079;
        if ( !*m_Items )
          goto LABEL_1078;
        v346 = (*m_Items)->m_Items[41];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49F9ADD )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
          byte_49F9ADD = 1;
        }
        v350 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v350 = TerminalPramsManager_TypeInfo;
        }
        v351 = v350->static_fields;
        v351->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v346;
        p_oldPersonalBoss_k__BackingField = (ServantStatusBattleListViewItem_o *)&v351->_oldSuperBoss_k__BackingField;
      }
      sub_1B6406C(p_oldPersonalBoss_k__BackingField, (int32_t)v346, v343, v344);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9ADF )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    byte_49F9ADF = 1;
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
  if ( !byte_49F9ADF )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    byte_49F9ADF = 1;
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
    v353 = 1;
  }
  else
  {
LABEL_1084:
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_49F9045 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      byte_49F9045 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v354 = BalanceConfig_TypeInfo;
    battleId = result->m_Items[19]->fields.battleId;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v354 = BalanceConfig_TypeInfo;
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v353 = battleId == v354->static_fields->OrtFirstQuestId;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_49F9672 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    byte_49F9672 = 1;
  }
  v356 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v356 = TerminalPramsManager_TypeInfo;
  }
  v356->static_fields->_isIncomingCall_k__BackingField = v353;
  if ( v507 && EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)v507, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9045 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v357);
      byte_49F9045 = 1;
    }
    v358 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v358 = TerminalPramsManager_TypeInfo;
    }
    v359 = BalanceConfig_TypeInfo;
    v360 = v358->static_fields->_QuestId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v359 = BalanceConfig_TypeInfo;
    }
    if ( v360 == v359->static_fields->OrtLateQuestId )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9050 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v357);
        byte_49F9050 = 1;
      }
      v361 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v361 = TerminalPramsManager_TypeInfo;
      }
      v362 = BalanceConfig_TypeInfo;
      v363 = v361->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v362 = BalanceConfig_TypeInfo;
      }
      if ( v363 + 1 == v362->static_fields->OrtLatePhaseBreak )
        goto LABEL_1085;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9050 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v357);
        byte_49F9050 = 1;
      }
      v364 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v364 = TerminalPramsManager_TypeInfo;
      }
      v365 = BalanceConfig_TypeInfo;
      v366 = v364->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v365 = BalanceConfig_TypeInfo;
      }
      if ( v366 + 1 == v365->static_fields->OrtLatePhaseDead )
      {
LABEL_1085:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v367 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserSuperBossMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
        v368 = result;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v367 )
          goto LABEL_1078;
        if ( UserSuperBossMaster__TryGetEntity(
               (UserSuperBossMaster_o *)v367,
               &v506,
               (int64_t)v368,
               v342,
               BalanceConfig_TypeInfo->static_fields->OrtThirdFormId,
               0LL) )
        {
          result = (BattleResultComponent_resultData_array *)sub_1B64170(UserSuperBossEntity___TypeInfo, 1LL);
          if ( !result )
            goto LABEL_1078;
          v371 = v506;
          v372 = result;
          if ( v506 )
          {
            result = (BattleResultComponent_resultData_array *)sub_1B64204(v506, result->obj.klass->_1.element_class);
            if ( !result )
            {
LABEL_1080:
              v496 = sub_1B64348();
              sub_1B641F0(v496, 0LL);
            }
          }
          if ( !v372->max_length )
            goto LABEL_1079;
          v372->m_Items[0] = (BattleResultComponent_resultData_o *)v371;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)v372->m_Items, (int32_t)v371, v369, v370);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49F9ADE )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, v373);
            byte_49F9ADE = 1;
          }
          v376 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v376 = TerminalPramsManager_TypeInfo;
          }
          v377 = v376->static_fields;
          v377->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v372;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&v377->_oldPersonalBoss_k__BackingField,
            (int32_t)v372,
            v374,
            v375);
        }
      }
    }
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  TalkResumeInfo = ScriptManager__GetTalkResumeInfo(0LL);
  if ( TalkResumeInfo )
  {
    v379 = TalkResumeInfo;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1078;
    v381 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9045 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v380);
      byte_49F9045 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v381 )
      goto LABEL_1078;
    ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)v381, result->m_Items[19]->fields.battleId, 0LL);
    v384 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !byte_49F9050 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v383);
      byte_49F9050 = 1;
    }
    v385 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v385 = TerminalPramsManager_TypeInfo;
    }
    v386 = v385->static_fields->_PhaseCnt_k__BackingField;
    winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v379, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd2(
                                                         ScriptQuestId,
                                                         v386 + 1,
                                                         winResult,
                                                         0LL);
    if ( !v384 )
      goto LABEL_1078;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v384, (System_String_o *)result, 0LL) )
      goto LABEL_905;
    v391 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9050 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v390);
      byte_49F9050 = 1;
    }
    v392 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v392 = TerminalPramsManager_TypeInfo;
    }
    v393 = v392->static_fields->_PhaseCnt_k__BackingField;
    v394 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v379, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd(
                                                         ScriptQuestId,
                                                         v393 + 1,
                                                         v394,
                                                         0LL);
    if ( !v391 )
      goto LABEL_1078;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v391, (System_String_o *)result, 0LL) )
    {
LABEL_905:
      v395 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v395 = TerminalPramsManager_TypeInfo;
      }
      v396 = (int)StringLiteral_1/*""*/;
      p_lastPlayBgmName = (ServantStatusBattleListViewItem_o *)&v395->static_fields->lastPlayBgmName;
      p_lastPlayBgmName->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
      sub_1B6406C(p_lastPlayBgmName, v396, v388, v389);
      TerminalPramsManager__LastPlayBgmNameSave_SaveData(v398);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1078;
  v400 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v399);
    byte_49F9045 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v401 = result->m_Items[19]->fields.battleId;
  if ( !byte_49F9050 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v399);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_49F9050 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v400 )
    goto LABEL_1078;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)v400, &v512, v401, result->m_Items[19]->fields.eventId + 1, 0LL);
  if ( !byte_49F9AE0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    byte_49F9AE0 = 1;
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
    if ( !byte_49F9AE0 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      byte_49F9AE0 = 1;
    }
    v404 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v404 = TerminalPramsManager_TypeInfo;
    }
    result = (BattleResultComponent_resultData_array *)v404->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
    if ( !result )
      goto LABEL_1078;
    *(_QWORD *)&result->max_length = 0LL;
    v405 = &result->max_length;
    *((_QWORD *)v405 - 1) = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)v405, 0, v402, v403);
  }
  if ( !*p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v406 = HIDWORD((*m_Items)->bounds);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    byte_49F9045 = 1;
  }
  v407 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v407 = TerminalPramsManager_TypeInfo;
  }
  v408 = v407->static_fields->_QuestId_k__BackingField;
  if ( !byte_49F9050 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
    v407 = TerminalPramsManager_TypeInfo;
    byte_49F9050 = 1;
  }
  if ( !v407->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v407);
    v407 = TerminalPramsManager_TypeInfo;
  }
  SpecifiedSceneInfo = QuestPhaseMaster__GetSpecifiedSceneInfo(
                         (QuestPhaseMaster_o *)v400,
                         v406,
                         v408,
                         v407->static_fields->_PhaseCnt_k__BackingField + 1,
                         0LL);
  if ( !byte_49F9ABF )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v409);
    byte_49F9ABF = 1;
  }
  v413 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v413 = TerminalPramsManager_TypeInfo;
  }
  v414 = v413->static_fields;
  v414->_SpecifiedChangeSceneInfo_k__BackingField = SpecifiedSceneInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v414->_SpecifiedChangeSceneInfo_k__BackingField,
    (int32_t)SpecifiedSceneInfo,
    v410,
    v411);
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId = 0LL;
  TerminalPramsManager__InitTipsArchiveScrollValueList(v415);
  if ( !*p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v418 = (int32_t)(*m_Items)->m_Items[52];
  v419 = TerminalPramsManager_TypeInfo;
  if ( v418 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9658 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      byte_49F9658 = 1;
    }
    v419 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v419 = TerminalPramsManager_TypeInfo;
    }
    v419->static_fields->_EventMuralId_k__BackingField = v418;
  }
  if ( !v419->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v419);
    v419 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = (ServantStatusBattleListViewItem_o *)&v419->static_fields->eventHarvestGrowthInfo;
  p_eventHarvestGrowthInfo->klass = 0LL;
  sub_1B6406C(p_eventHarvestGrowthInfo, 0, v416, v417);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v421);
    byte_49F9045 = 1;
  }
  v422 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v422 = TerminalPramsManager_TypeInfo;
  }
  result = (BattleResultComponent_resultData_array *)QuestPhaseMaster__GetEntity(
                                                       (QuestPhaseMaster_o *)v400,
                                                       v422->static_fields->_QuestId_k__BackingField,
                                                       1,
                                                       0LL);
  if ( !result )
    goto LABEL_1078;
  v423 = result;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(
                     (QuestPhaseEntity_o *)result,
                     (System_String_o *)StringLiteral_19802/*"harvestGrowthBeforeQuestId"*/,
                     -1,
                     0LL);
  v425 = QuestPhaseEntity__getScriptIntParam(
           (QuestPhaseEntity_o *)v423,
           (System_String_o *)StringLiteral_19801/*"harvestGrowthAfterQuestId"*/,
           -1,
           0LL);
  if ( ScriptIntParam >= 1 )
  {
    v428 = v425;
    if ( v425 >= 1 )
    {
      v429 = sub_1B64314(EventHarvestGrowthInfo_TypeInfo, v426, v427);
      System_Object___ctor((Il2CppObject *)v429, 0LL);
      if ( !v429 )
        goto LABEL_1078;
      bounds = v423->bounds;
      *(_DWORD *)(v429 + 24) = ScriptIntParam;
      *(_DWORD *)(v429 + 28) = v428;
      *(_QWORD *)(v429 + 16) = bounds;
      v433 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v433 = TerminalPramsManager_TypeInfo;
      }
      v434 = (ServantStatusBattleListViewItem_o *)&v433->static_fields->eventHarvestGrowthInfo;
      v434->klass = (ServantStatusBattleListViewItem_c *)v429;
      sub_1B6406C(v434, v429, v430, v431);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1078;
  v436 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v435);
    byte_49F9045 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v436 )
    goto LABEL_1078;
  QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)v436, result->m_Items[19]->fields.battleId, 0LL);
  if ( QuestEntity )
  {
    v440 = QuestEntity;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9045 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      byte_49F9045 = 1;
    }
    v441 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v441 = TerminalPramsManager_TypeInfo;
    }
    if ( QuestPhaseMaster__IsAreaImproveQuest(
           (QuestPhaseMaster_o *)v400,
           v441->static_fields->_QuestId_k__BackingField,
           0LL) )
    {
      SpotId = QuestEntity__getSpotId(v440, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
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
        v444 = CurrentLevelEntity;
        v445 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v445 = TerminalPramsManager_TypeInfo;
        }
        eventAreaImproveResultInfo = v445->static_fields->eventAreaImproveResultInfo;
        if ( eventAreaImproveResultInfo )
        {
          if ( !v445->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v445);
            eventAreaImproveResultInfo = TerminalPramsManager_TypeInfo->static_fields->eventAreaImproveResultInfo;
            if ( !eventAreaImproveResultInfo )
              goto LABEL_1078;
          }
          eventAreaImproveResultInfo->fields.afterLevel = v444->fields.lv;
        }
      }
    }
  }
  result = (BattleResultComponent_resultData_array *)v512;
  if ( v512 )
  {
    result = (BattleResultComponent_resultData_array *)QuestPhaseEntity__GetMoveSceneInfo(v512, 0LL);
    if ( !result )
      goto LABEL_1078;
    if ( *(_QWORD *)&result->max_length )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9045 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
        byte_49F9045 = 1;
      }
      v447 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v447 = TerminalPramsManager_TypeInfo;
      }
      v511 = v447->static_fields->_QuestId_k__BackingField;
      v449 = System_Int32__ToString((int32_t)&v511, 0LL);
      if ( !byte_49F9050 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v448);
        byte_49F9050 = 1;
      }
      v450 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v450 = TerminalPramsManager_TypeInfo;
      }
      v511 = v450->static_fields->_PhaseCnt_k__BackingField + 1;
      v451 = System_Int32__ToString((int32_t)&v511, 0LL);
      v455 = System_String__Concat_61386656(v449, (System_String_o *)StringLiteral_869/*","*/, v451, 0LL);
      if ( !byte_49F9810 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v452);
        byte_49F9810 = 1;
      }
      v456 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v456 = TerminalPramsManager_TypeInfo;
      }
      p_SceneMoveQuestClearedInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v456->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
      p_SceneMoveQuestClearedInfo_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v455;
      sub_1B6406C(p_SceneMoveQuestClearedInfo_k__BackingField, (int32_t)v455, v453, v454);
    }
  }
  if ( !*p_max_length )
    goto LABEL_1079;
  if ( !*m_Items )
    goto LABEL_1078;
  v458 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[47];
  if ( v458 && v458->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F965F )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isWin);
      byte_49F965F = 1;
    }
    v459 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v459 = TerminalPramsManager_TypeInfo;
    }
    p_limitImageAnnounces_k__BackingField = (ServantStatusBattleListViewItem_o *)&v459->static_fields->_limitImageAnnounces_k__BackingField;
    p_limitImageAnnounces_k__BackingField->klass = v458;
    sub_1B6406C(p_limitImageAnnounces_k__BackingField, (int32_t)v458, v438, v439);
  }
  v462 = sub_1B64170(string___TypeInfo, 7LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v461);
    byte_49F9045 = 1;
  }
  v463 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v463 = TerminalPramsManager_TypeInfo;
  }
  v511 = v463->static_fields->_QuestId_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v511, 0LL);
  if ( !v462 )
LABEL_1078:
    sub_1B64324(result);
  if ( !*(_DWORD *)(v462 + 24) )
    goto LABEL_1079;
  *(_QWORD *)(v462 + 32) = result;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v462 + 32), (int32_t)result, v464, v465);
  if ( *(_DWORD *)(v462 + 24) <= 1u )
    goto LABEL_1079;
  v468 = (int)StringLiteral_869/*","*/;
  *(_QWORD *)(v462 + 40) = StringLiteral_869/*","*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v462 + 40), v468, v466, v467);
  if ( !byte_49F9050 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v469);
    byte_49F9050 = 1;
  }
  v470 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v470 = TerminalPramsManager_TypeInfo;
  }
  v511 = v470->static_fields->_PhaseCnt_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v511, 0LL);
  if ( *(_DWORD *)(v462 + 24) <= 2u )
    goto LABEL_1079;
  *(_QWORD *)(v462 + 48) = result;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v462 + 48), (int32_t)result, v471, v472);
  if ( *(_DWORD *)(v462 + 24) <= 3u )
    goto LABEL_1079;
  v475 = (int)StringLiteral_869/*","*/;
  *(_QWORD *)(v462 + 56) = StringLiteral_869/*","*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v462 + 56), v475, v473, v474);
  if ( !byte_49F9354 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v476);
    byte_49F9354 = 1;
  }
  v477 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v477 = TerminalPramsManager_TypeInfo;
  }
  v505[0] = v477->static_fields->_IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v505, 0LL);
  if ( *(_DWORD *)(v462 + 24) <= 4u )
    goto LABEL_1079;
  *(_QWORD *)(v462 + 64) = result;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v462 + 64), (int32_t)result, v478, v479);
  if ( *(_DWORD *)(v462 + 24) <= 5u )
    goto LABEL_1079;
  v482 = (int)StringLiteral_869/*","*/;
  *(_QWORD *)(v462 + 72) = StringLiteral_869/*","*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v462 + 72), v482, v480, v481);
  if ( !byte_49F9351 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v483);
    byte_49F9351 = 1;
  }
  v484 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v484 = TerminalPramsManager_TypeInfo;
  }
  v505[0] = v484->static_fields->_IsPhaseClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v505, 0LL);
  if ( *(_DWORD *)(v462 + 24) <= 6u )
    goto LABEL_1079;
  *(_QWORD *)(v462 + 80) = result;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v462 + 80), (int32_t)result, v485, v486);
  v487 = System_String__Concat_61388924((System_String_array *)v462, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_16640/*"afterActionBk"*/, v487, 0LL);
  TerminalPramsManager__SaveClearDatas(resulta, v488);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v489);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v490);
  TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(v491);
  TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(v492);
  if ( TerminalPramsManager__IsTerminalEffectNT2BoardOpen(v493) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F904F )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v494);
      byte_49F904F = 1;
    }
    v495 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v495 = TerminalPramsManager_TypeInfo;
    }
    v495->static_fields->_WarId_k__BackingField = 0;
    if ( !byte_49F7A3E )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v494);
      v495 = TerminalPramsManager_TypeInfo;
      byte_49F7A3E = 1;
    }
    if ( !v495->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v495);
      v495 = TerminalPramsManager_TypeInfo;
    }
    v495->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_49F964B )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v494);
      v495 = TerminalPramsManager_TypeInfo;
      byte_49F964B = 1;
    }
    if ( !v495->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v495);
      v495 = TerminalPramsManager_TypeInfo;
    }
    v495->static_fields->_IsMapReturnFolder_k__BackingField = 0;
    if ( !byte_49F9805 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v494);
      v495 = TerminalPramsManager_TypeInfo;
      byte_49F9805 = 1;
    }
    if ( !v495->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v495);
      v495 = TerminalPramsManager_TypeInfo;
    }
    v495->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData((const MethodInfo *)v495);
  }
}


void __fastcall TerminalPramsManager__ResetBlankEarthSpotInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  const MethodInfo *v2; // x0

  if ( (byte_49F9A31 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A31 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F903F )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F903F = 1;
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

  if ( (byte_49F9A3A & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A3A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9AB1 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9AB1 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_QuestMessageScriptQuestId_k__BackingField = -1;
  if ( !byte_49F9AB2 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_49F9AB2 = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = -1;
  if ( !byte_49F98EB )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_49F98EB = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  p_TalkScriptInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v4->static_fields->_TalkScriptInfo_k__BackingField;
  p_TalkScriptInfo_k__BackingField->klass = 0LL;
  sub_1B6406C(p_TalkScriptInfo_k__BackingField, 0, v2, v3);
  if ( !byte_49F9AB3 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v6);
    byte_49F9AB3 = 1;
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
  _BOOL4 IsPhaseClear_k__BackingField; // w26
  _BOOL4 IsDispOnly_k__BackingField; // w27
  struct TerminalPramsManager_StaticFields *v16; // x8
  _BOOL4 IsWarBoardClear_k__BackingField; // w25
  BattleDropItem_array *questResultAfterEventRewardInfos; // x24
  BattleDropItem_array *mResultEventPanelRewardInfos; // x28
  int32_t panelEventPoint; // w20
  LimitImageAnnounce_array *limitImageAnnounces; // x21
  QuestRewardInfo_array *v22; // x29
  bool isWarBoardClear; // w22
  TerminalPramsManager_ClearData_o *v24; // x25
  __int64 v25; // x1
  TerminalPramsManager_c *v26; // x0
  TerminalPramsManager_ClearData_c *v27; // x0
  System_String_o *SAVEKEY_CLEAR_REWARD_DISP; // x19
  System_String_o *v29; // x1
  int32_t v30; // [xsp+98h] [xbp-F8h]
  const MethodInfo *v31; // [xsp+A0h] [xbp-F0h]
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

  if ( (byte_49F9A7E & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_ClearData_TypeInfo, method);
    sub_1B640C8(&JsonManager_TypeInfo, v4);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49F9A7E = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v6->static_fields->mQuestRewardInfos;
  if ( result )
  {
    if ( !v6->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v6);
    if ( !byte_49F9045 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
      byte_49F9045 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v9 = TerminalPramsManager__IsFreeQuestOnOrdealCall(v8->static_fields->_QuestId_k__BackingField, method);
    if ( v9 )
    {
      if ( !result->max_length )
        sub_1B6432C(v9, method);
      v10 = result->m_Items[0];
      if ( !v10 )
        sub_1B64324(0LL);
      if ( BattleResultComponent_resultData__checkResultDispFlag(v10, 2048, 0LL) )
        mQuestRewardInfos = 0LL;
    }
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  mQuestClearHeroineInfo = static_fields->mQuestClearHeroineInfo;
  mQuestPhaseRewardInfos = static_fields->mQuestPhaseRewardInfos;
  if ( !byte_49F9354 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F9354 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  IsQuestClear_k__BackingField = v11->static_fields->_IsQuestClear_k__BackingField;
  if ( !byte_49F9351 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F9351 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v13 = v11->static_fields;
  IsPhaseClear_k__BackingField = v13->_IsPhaseClear_k__BackingField;
  lastRaidId = v13->clearLastBattleRaidId;
  raidId = v13->clearBattleRaidId;
  groupjoin = v13->joinGroupId;
  if ( !byte_49F9AE1 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F9AE1 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  oldSuperBoss = v11->static_fields->_oldSuperBoss_k__BackingField;
  if ( !byte_49F9ADF )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F9ADF = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss = v11->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !byte_49F9AE2 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F9AE2 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  eventPointWinReward_k__BackingField = v11->static_fields->_eventPointWinReward_k__BackingField;
  if ( !byte_49F9AD9 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F9AD9 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  evpWinType = v11->static_fields->_eventPointWinType_k__BackingField;
  if ( !byte_49F97FA )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F97FA = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  evRace = v11->static_fields->_eventRaceBoost_k__BackingField;
  if ( !byte_49F965D )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F965D = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeRelease = v11->static_fields->_questClearCostumeRelease_k__BackingField;
  if ( !byte_49F9655 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F9655 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeGet_k__BackingField = v11->static_fields->_questClearCostumeGet_k__BackingField;
  if ( !byte_49F9659 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F9659 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  evTowerReward = v11->static_fields->_eventTowerReward_k__BackingField;
  if ( !byte_49F9AE3 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F9AE3 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v11->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  if ( !byte_49F84AD )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F84AD = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  IsDispOnly_k__BackingField = v11->static_fields->_IsDispOnly_k__BackingField;
  if ( !byte_49F9665 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F9665 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  warClearRewardIn = v11->static_fields->_warClearReward_k__BackingField;
  if ( !byte_49F9AE4 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F9AE4 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  eventActivityPointEffectState = v11->static_fields->_EventActivityPointEffectState_k__BackingField;
  if ( !byte_49F9656 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F9656 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v16 = v11->static_fields;
  IsWarBoardClear_k__BackingField = v16->_IsWarBoardClear_k__BackingField;
  questResultAfterEventRewardInfos = v16->mQuestResultAfterEventRewardInfos;
  mResultEventPanelRewardInfos = v16->mResultEventPanelRewardInfos;
  panelEventPoint = v16->panelEventPoint;
  if ( !byte_49F965E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F965E = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  limitImageAnnounces = v11->static_fields->_limitImageAnnounces_k__BackingField;
  if ( !byte_49F903E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F903E = 1;
  }
  if ( !v11->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v11);
  if ( !byte_49F9657 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9657 = 1;
  }
  v22 = mQuestRewardInfos;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  isWarBoardClear = IsWarBoardClear_k__BackingField;
  v24 = (TerminalPramsManager_ClearData_o *)sub_1B64314(TerminalPramsManager_ClearData_TypeInfo, method, v2);
  TerminalPramsManager_ClearData___ctor_34423000(
    v24,
    mQuestClearHeroineInfo,
    v22,
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
    v30,
    v31);
  if ( !byte_49F9AE5 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v25);
    byte_49F9AE5 = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_isQuestRewardSetted_k__BackingField = 1;
  v27 = TerminalPramsManager_ClearData_TypeInfo;
  if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
    v27 = TerminalPramsManager_ClearData_TypeInfo;
  }
  SAVEKEY_CLEAR_REWARD_DISP = v27->static_fields->SAVEKEY_CLEAR_REWARD_DISP;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v29 = JsonManager__toJson((Il2CppObject *)v24, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString(SAVEKEY_CLEAR_REWARD_DISP, v29, 0LL);
}


void __fastcall TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  EventRaidDefeatedEffectInfo_o *EventRaidDefeatedEffectInfo_k__BackingField; // x0
  System_String_o *v5; // x0

  if ( (byte_49F9A84 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11377/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v2);
    byte_49F9A84 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9AE7 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9AE7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EventRaidDefeatedEffectInfo_k__BackingField = v3->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  if ( !EventRaidDefeatedEffectInfo_k__BackingField )
    sub_1B64324(0LL);
  v5 = EventRaidDefeatedEffectInfo__ConvertToStringData(EventRaidDefeatedEffectInfo_k__BackingField, v1);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11377/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v5, 0LL);
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

  if ( (byte_49F9A47 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_13541/*"TerminalPhaseCnt"*/, v2);
    sub_1B640C8(&StringLiteral_13544/*"TerminalQuestId"*/, v3);
    byte_49F9A47 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9045 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13544/*"TerminalQuestId"*/,
    v4->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_49F9050 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49F9050 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13541/*"TerminalPhaseCnt"*/,
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
  Il2CppObject *v18; // x20
  Il2CppObject *v19; // x2
  System_String_o *v20; // x1
  int v21; // [xsp+Ch] [xbp-94h] BYREF
  __int128 v22[2]; // [xsp+10h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_49F9A88 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v2);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v4);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v7);
    sub_1B640C8(&string_TypeInfo, v8);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_11386/*"SAVEKEY_QuestRandomGroupList"*/, v10);
    sub_1B640C8(&StringLiteral_24975/*"{0}:{1}"*/, v11);
    sub_1B640C8(&StringLiteral_869/*","*/, v12);
    byte_49F9A88 = 1;
  }
  memset(&v23, 0, 32);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9044 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9044 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestRandomGroupList_k__BackingField = v14->static_fields->_QuestRandomGroupList_k__BackingField;
  if ( !QuestRandomGroupList_k__BackingField )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v22,
    QuestRandomGroupList_k__BackingField,
    (const MethodInfo_311B28C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v23.fields._dictionary = v22[0];
  v23.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v22[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v23,
            (const MethodInfo_32682F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int)v23.fields._current.fields.key;
    key_high = HIDWORD(v23.fields._current.fields.key);
    if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
      Empty = System_String__Concat_61375396(Empty, (System_String_o *)StringLiteral_869/*","*/, 0LL);
    LODWORD(v22[0]) = key;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v22);
    v21 = key_high;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    v20 = System_String__Format_61389768((System_String_o *)StringLiteral_24975/*"{0}:{1}"*/, v18, v19, 0LL);
    Empty = System_String__Concat_61375396(Empty, v20, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v23,
    (const MethodInfo_32683F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11386/*"SAVEKEY_QuestRandomGroupList"*/, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestReleasedFocusState(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0

  if ( (byte_49F9A71 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A71 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v2);
  if ( !QuestFocusStateManager )
    sub_1B64324(0LL);
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

  if ( (byte_49F9A45 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_13534/*"TerminalEndTime"*/, v2);
    sub_1B640C8(&StringLiteral_11384/*"SAVEKEY_PlayedTerminalEffects"*/, v3);
    sub_1B640C8(&StringLiteral_13530/*"TerminalBeforeEventActivityPoint"*/, v4);
    sub_1B640C8(&StringLiteral_13535/*"TerminalEventDailyPointEventId"*/, v5);
    sub_1B640C8(&StringLiteral_13541/*"TerminalPhaseCnt"*/, v6);
    sub_1B640C8(&StringLiteral_13549/*"TerminalTimeStatusEventId"*/, v7);
    sub_1B640C8(&StringLiteral_13533/*"TerminalDispState"*/, v8);
    sub_1B640C8(&StringLiteral_11381/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v9);
    sub_1B640C8(&StringLiteral_13536/*"TerminalIsDoneShortcut"*/, v10);
    sub_1B640C8(&StringLiteral_11380/*"SAVEKEY_MapModelClearQuestInfo"*/, v11);
    sub_1B640C8(&StringLiteral_11385/*"SAVEKEY_PlayerGenderType"*/, v12);
    sub_1B640C8(&StringLiteral_11373/*"SAVEKEY_ClearEventQuestIds"*/, v13);
    sub_1B640C8(&StringLiteral_11382/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v14);
    sub_1B640C8(&StringLiteral_13544/*"TerminalQuestId"*/, v15);
    sub_1B640C8(&StringLiteral_11392/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v16);
    sub_1B640C8(&StringLiteral_13548/*"TerminalTimeStatusEventDailyPoint"*/, v17);
    sub_1B640C8(&StringLiteral_13553/*"TerminalWarId"*/, v18);
    sub_1B640C8(&StringLiteral_13546/*"TerminalSpotId"*/, v19);
    sub_1B640C8(&StringLiteral_13550/*"TerminalTimeStatusLoopCount"*/, v20);
    sub_1B640C8(&StringLiteral_13531/*"TerminalBeforeEventActivityPointGauge"*/, v21);
    sub_1B640C8(&StringLiteral_11371/*"SAVEKEY_BlankEarthSpotId"*/, v22);
    sub_1B640C8(&StringLiteral_11376/*"SAVEKEY_DataLostBattleAutoReset"*/, v23);
    sub_1B640C8(&StringLiteral_13554/*"TerminalWarStartedIds"*/, v24);
    sub_1B640C8(&StringLiteral_11375/*"SAVEKEY_ConnectMarkEventId"*/, v25);
    sub_1B640C8(&StringLiteral_869/*","*/, v26);
    sub_1B640C8(&StringLiteral_11374/*"SAVEKEY_ConnectMarkAnimationId"*/, v27);
    sub_1B640C8(&StringLiteral_11383/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v28);
    sub_1B640C8(&StringLiteral_11391/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v29);
    byte_49F9A45 = 1;
  }
  EndTime_k__BackingField = 0LL;
  MapModelClearQuestId_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9257 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9257 = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13533/*"TerminalDispState"*/,
    v30->static_fields->_DispState_k__BackingField,
    0LL);
  if ( !byte_49F9048 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v31);
    byte_49F9048 = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13553/*"TerminalWarId"*/,
    v32->static_fields->_WarId_k__BackingField,
    0LL);
  if ( !byte_49F925B )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v33);
    byte_49F925B = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13546/*"TerminalSpotId"*/,
    v34->static_fields->_SpotId_k__BackingField,
    0LL);
  if ( !byte_49F903B )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v35);
    byte_49F903B = 1;
  }
  v36 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v36 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11371/*"SAVEKEY_BlankEarthSpotId"*/,
    v36->static_fields->_BlankEarthSpotId_k__BackingField,
    0LL);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v37);
    byte_49F9045 = 1;
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v38 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13544/*"TerminalQuestId"*/,
    v38->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_49F9050 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v39);
    byte_49F9050 = 1;
  }
  v40 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v40 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13541/*"TerminalPhaseCnt"*/,
    v40->static_fields->_PhaseCnt_k__BackingField,
    0LL);
  if ( !byte_49F925C )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    byte_49F925C = 1;
  }
  v42 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v42 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v42->static_fields->_EndTime_k__BackingField;
  v43 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13534/*"TerminalEndTime"*/, v43, 0LL);
  if ( !byte_49F967C )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v44);
    byte_49F967C = 1;
  }
  v45 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v45 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13536/*"TerminalIsDoneShortcut"*/,
    v45->static_fields->_IsDoneShortcut_k__BackingField,
    0LL);
  v46 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v46 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_13554/*"TerminalWarStartedIds"*/,
    v46->static_fields->mTerminalWarStartedIds,
    0LL);
  if ( !byte_49F9802 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v47);
    byte_49F9802 = 1;
  }
  v48 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v48 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13549/*"TerminalTimeStatusEventId"*/,
    v48->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_49F9803 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v49);
    byte_49F9803 = 1;
  }
  v50 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v50 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13550/*"TerminalTimeStatusLoopCount"*/,
    v50->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  if ( !byte_49F9ACB )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v51);
    byte_49F9ACB = 1;
  }
  v52 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v52 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13535/*"TerminalEventDailyPointEventId"*/,
    v52->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_49F9ACC )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v53);
    byte_49F9ACC = 1;
  }
  v54 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v54 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v54->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v55 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13548/*"TerminalTimeStatusEventDailyPoint"*/, v55, 0LL);
  if ( !byte_49F9ACD )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v56);
    byte_49F9ACD = 1;
  }
  v57 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13530/*"TerminalBeforeEventActivityPoint"*/,
    v57->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_49F9ACE )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v58);
    byte_49F9ACE = 1;
  }
  v59 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v59 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13531/*"TerminalBeforeEventActivityPointGauge"*/,
    v59->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  if ( !byte_49F9ACF )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v60);
    byte_49F9ACF = 1;
  }
  v61 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v61 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11384/*"SAVEKEY_PlayedTerminalEffects"*/,
    v61->static_fields->_PlayedTerminalEffects_k__BackingField,
    0LL);
  if ( !byte_49F966F )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v62);
    byte_49F966F = 1;
  }
  v63 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v63 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11381/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v63->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9670 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v64);
    byte_49F9670 = 1;
  }
  v65 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v65 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11382/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v65->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  if ( !byte_49F9804 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v66);
    byte_49F9804 = 1;
  }
  v67 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11383/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v67->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9807 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v68);
    byte_49F9807 = 1;
  }
  v69 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v69 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11392/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v69->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11375/*"SAVEKEY_ConnectMarkEventId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11374/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  if ( !byte_49F964D )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v70);
    byte_49F964D = 1;
  }
  v71 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v71 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11391/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v71->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  if ( !byte_49F9047 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v72);
    byte_49F9047 = 1;
  }
  v73 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v73 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11373/*"SAVEKEY_ClearEventQuestIds"*/,
    v73->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  if ( !byte_49F9258 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v74);
    byte_49F9258 = 1;
  }
  v75 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v75 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v75->static_fields->_MapModelClearQuestId_k__BackingField;
  v77 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_49F9259 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v76);
    byte_49F9259 = 1;
  }
  v78 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v78 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v78->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v79 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v80 = System_String__Concat_61386656(v77, (System_String_o *)StringLiteral_869/*","*/, v79, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11380/*"SAVEKEY_MapModelClearQuestInfo"*/, v80, 0LL);
  if ( !byte_49F9808 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v81);
    byte_49F9808 = 1;
  }
  v82 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v82 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11376/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v82->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9AD0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v83);
    byte_49F9AD0 = 1;
  }
  v84 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v84 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11385/*"SAVEKEY_PlayerGenderType"*/,
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
  int32_t v9; // w1

  if ( (byte_49F9A78 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49F9A78 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v6);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    if ( IsMainStoryForQuestId )
      v9 = 10;
    else
      v9 = 9;
    AdManager__TrackEvent((AdManager_o *)Instance, v9, 10, questId, questPhase, 0LL, 0LL);
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
  __int64 v29; // x20
  DataManager_o *Instance; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x21
  const MethodInfo *v34; // x1
  int32_t klass_high; // w21
  Il2CppObject *MasterData_object; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_IEnumerable_TSource__o *QuestIdsByTargetAndOpenCondType; // x19
  TerminalPramsManager___c_c *v42; // x8
  System_Func_int__bool__o *_9__657_0; // x21
  Il2CppObject *v44; // x22
  struct TerminalPramsManager___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x19
  __int64 v49; // x1
  __int64 v50; // x2
  System_Func_T__TResult__o *v51; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x19
  __int64 v53; // x1
  __int64 v54; // x2
  System_Func_object__bool__o *v55; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  TerminalPramsManager___c_c *v59; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x19
  System_Func_object__int__o *_9__657_3; // x20
  Il2CppObject *v62; // x21
  struct TerminalPramsManager___c_StaticFields *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  TerminalPramsManager___c_c *v69; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x19
  System_Func_int__int__o *_9__657_4; // x20
  Il2CppObject *v72; // x21
  struct TerminalPramsManager___c_StaticFields *v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  int32_t v77; // w0
  int32_t v78; // w19
  Il2CppObject *v79; // [xsp+0h] [xbp-40h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F9A79 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_SpotMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_int___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_int__int___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_int__QuestEntity___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_QuestEntity__int___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_int___, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_QuestEntity___, v13);
    sub_1B640C8(&System_Func_int__int__TypeInfo, v14);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v15);
    sub_1B640C8(&System_Func_QuestEntity__int__TypeInfo, v16);
    sub_1B640C8(&System_Func_QuestEntity__bool__TypeInfo, v17);
    sub_1B640C8(&System_Func_int__QuestEntity__TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v21);
    sub_1B640C8(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__657_0__, v22);
    sub_1B640C8(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__657_3__, v23);
    sub_1B640C8(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__657_4__, v24);
    sub_1B640C8(&Method_TerminalPramsManager___c__DisplayClass657_0__SendOpenedQuestIdToAdManager_b__1__, v25);
    sub_1B640C8(&Method_TerminalPramsManager___c__DisplayClass657_0__SendOpenedQuestIdToAdManager_b__2__, v26);
    sub_1B640C8(&TerminalPramsManager___c__DisplayClass657_0_TypeInfo, v27);
    sub_1B640C8(&TerminalPramsManager___c_TypeInfo, v28);
    byte_49F9A79 = 1;
  }
  v79 = 0LL;
  entity = 0LL;
  v29 = sub_1B64314(TerminalPramsManager___c__DisplayClass657_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( clearedQuestId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !v29 )
      goto LABEL_43;
    *(_QWORD *)(v29 + 16) = Instance;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 16), (int32_t)Instance, v31, v32);
    Instance = *(DataManager_o **)(v29 + 16);
    if ( !Instance )
      goto LABEL_43;
    if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, clearedQuestId, 0LL) )
      return;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SpotMaster___);
    if ( !entity )
      goto LABEL_43;
    v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0LL);
    if ( !v33 )
      goto LABEL_43;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  v33,
                                  &v79,
                                  (int32_t)Instance,
                                  (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      return;
    if ( !v79 )
      goto LABEL_43;
    klass_high = HIDWORD(v79[1].klass);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( TerminalPramsManager__IsMustPlayMainStory(klass_high, v34) )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_43;
      if ( QuestEntity__GetTypeFlag(entity, 0LL) != 2 )
        return;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v29 + 24) = MasterData_object;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 24), (int32_t)MasterData_object, v37, v38);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      if ( !Instance )
        goto LABEL_43;
      QuestIdsByTargetAndOpenCondType = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
                                                                                               (QuestReleaseMaster_o *)Instance,
                                                                                               clearedQuestId,
                                                                                               1,
                                                                                               0LL);
      v42 = TerminalPramsManager___c_TypeInfo;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v42 = TerminalPramsManager___c_TypeInfo;
      }
      _9__657_0 = v42->static_fields->__9__657_0;
      if ( !_9__657_0 )
      {
        if ( !v42->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v42);
          v42 = TerminalPramsManager___c_TypeInfo;
        }
        v44 = (Il2CppObject *)v42->static_fields->__9;
        _9__657_0 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v39, v40);
        System_Func_int__bool____ctor(
          _9__657_0,
          v44,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__657_0__,
          0LL);
        static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
        static_fields->__9__657_0 = _9__657_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__657_0, (int32_t)_9__657_0, v46, v47);
      }
      v48 = System_Linq_Enumerable__Where_int_(
              QuestIdsByTargetAndOpenCondType,
              (System_Func_TSource__bool__o *)_9__657_0,
              (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
      v51 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_int__QuestEntity__TypeInfo, v49, v50);
      System_Func_int__object____ctor(
        v51,
        (Il2CppObject *)v29,
        Method_TerminalPramsManager___c__DisplayClass657_0__SendOpenedQuestIdToAdManager_b__1__,
        0LL);
      v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v48,
                                                                   (System_Func_TSource__TResult__o *)v51,
                                                                   (const MethodInfo_2E66FCC *)Method_System_Linq_Enumerable_Select_int__QuestEntity___);
      v55 = (System_Func_object__bool__o *)sub_1B64314(System_Func_QuestEntity__bool__TypeInfo, v53, v54);
      System_Func_object__bool____ctor(
        v55,
        (Il2CppObject *)v29,
        Method_TerminalPramsManager___c__DisplayClass657_0__SendOpenedQuestIdToAdManager_b__2__,
        0LL);
      v56 = System_Linq_Enumerable__Where_object_(
              v52,
              (System_Func_TSource__bool__o *)v55,
              (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v59 = TerminalPramsManager___c_TypeInfo;
      v60 = v56;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v59 = TerminalPramsManager___c_TypeInfo;
      }
      _9__657_3 = (System_Func_object__int__o *)v59->static_fields->__9__657_3;
      if ( !_9__657_3 )
      {
        if ( !v59->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v59);
          v59 = TerminalPramsManager___c_TypeInfo;
        }
        v62 = (Il2CppObject *)v59->static_fields->__9;
        _9__657_3 = (System_Func_object__int__o *)sub_1B64314(System_Func_QuestEntity__int__TypeInfo, v57, v58);
        System_Func_object__int____ctor(
          _9__657_3,
          v62,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__657_3__,
          0LL);
        v63 = TerminalPramsManager___c_TypeInfo->static_fields;
        v63->__9__657_3 = (struct System_Func_QuestEntity__int__o *)_9__657_3;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v63->__9__657_3, (int32_t)_9__657_3, v64, v65);
      }
      v66 = System_Linq_Enumerable__Select_object__int_(
              v60,
              (System_Func_TSource__TResult__o *)_9__657_3,
              (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_QuestEntity__int___);
      v69 = TerminalPramsManager___c_TypeInfo;
      v70 = (System_Collections_Generic_IEnumerable_TSource__o *)v66;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v69 = TerminalPramsManager___c_TypeInfo;
      }
      _9__657_4 = v69->static_fields->__9__657_4;
      if ( !_9__657_4 )
      {
        if ( !v69->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v69);
          v69 = TerminalPramsManager___c_TypeInfo;
        }
        v72 = (Il2CppObject *)v69->static_fields->__9;
        _9__657_4 = (System_Func_int__int__o *)sub_1B64314(System_Func_int__int__TypeInfo, v67, v68);
        System_Func_int__int____ctor(
          _9__657_4,
          v72,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__657_4__,
          0LL);
        v73 = TerminalPramsManager___c_TypeInfo->static_fields;
        v73->__9__657_4 = _9__657_4;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v73->__9__657_4, (int32_t)_9__657_4, v74, v75);
      }
      v76 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_int__int_(
                                                                   v70,
                                                                   (System_Func_TSource__TKey__o *)_9__657_4,
                                                                   (const MethodInfo_2E634AC *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
      v77 = System_Linq_Enumerable__FirstOrDefault_int_(
              v76,
              (const MethodInfo_2E5C004 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      if ( v77 )
      {
        v78 = v77;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetOpenedStoryQuest((AdManager_o *)Instance, v78, 0LL);
          return;
        }
LABEL_43:
        sub_1B64324(Instance);
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
  int32_t v9; // w1

  if ( (byte_49F9A77 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49F9A77 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v6);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    if ( IsMainStoryForQuestId )
      v9 = 10;
    else
      v9 = 9;
    AdManager__TrackEvent((AdManager_o *)Instance, v9, 9, questId, questPhase, 0LL, 0LL);
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
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v13; // x1
  MapControl_QuestInfo_o *v14; // x20
  int32_t warId; // w21
  TerminalPramsManager_c *v16; // x0
  Il2CppObject *Master_object; // x21
  bool v18; // w22
  __int64 v19; // x1
  TerminalPramsManager_c *v20; // x0
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  int32_t parentBlankEarthSpotId; // w1
  unsigned __int64 v24; // x21
  TerminalPramsManager_c *v25; // x0
  int32_t v26; // w21
  TerminalPramsManager_c *v27; // x0
  int32_t questPhase; // w21
  int64_t endTime; // x20
  __int64 v30; // x1
  __int64 v31; // x1
  Il2CppObject *v32; // x20
  WarEntity_o *WarEntityByWarID; // x0
  bool IsFolder; // w20
  TerminalPramsManager_c *v35; // x0
  int v36; // w8
  TerminalSceneComponent_c *v37; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v39; // x1
  System_Collections_Generic_List_QuestReleaseEntity__c *klass; // x8
  UnityEngine_Object_o *v41; // x20
  __int64 v42; // x1
  System_Collections_Generic_List_QuestReleaseEntity__c *v43; // x8
  ScrTerminalListTop_o *v44; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v45; // x8
  UnityEngine_Object_o *v46; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v47; // x8
  const MethodInfo *v48; // x0
  unsigned __int64 v49; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_int__o v51; // 0:x0.8

  if ( (byte_49F9A38 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v4);
    sub_1B640C8(&Method_System_Nullable_int__GetValueOrDefault__, v5);
    sub_1B640C8(&Method_System_Nullable_int___ctor__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v9);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v10);
    byte_49F9A38 = 1;
  }
  entity = 0LL;
  if ( SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    QuestInfo = QuestTree__GetQuestInfo(Instance, questId, 0LL);
    if ( !QuestInfo )
      return;
    v14 = QuestInfo;
    warId = QuestInfo->fields.warId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F904F )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v13);
      byte_49F904F = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    v16->static_fields->_WarId_k__BackingField = warId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    Instance = (QuestTree_o *)MapControl_QuestInfo__GetSpotID(v14, 0LL);
    if ( !Master_object )
      goto LABEL_142;
    v18 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            (int32_t)Instance,
            (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    LODWORD(Master_object) = MapControl_QuestInfo__GetSpotID(v14, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v18 )
    {
      if ( byte_49F903F )
        goto LABEL_32;
    }
    else
    {
      if ( !byte_49F904E )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v19);
        byte_49F904E = 1;
      }
      v20 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v20 = TerminalPramsManager_TypeInfo;
      }
      v20->static_fields->_SpotId_k__BackingField = (int)Master_object;
      WarInfo_k__BackingField = v14->fields._WarInfo_k__BackingField;
      if ( WarInfo_k__BackingField && (Mine = MapControl_WarInfo__GetMine(WarInfo_k__BackingField, 0LL)) != 0LL )
      {
        parentBlankEarthSpotId = Mine->fields.parentBlankEarthSpotId;
        v51 = (System_Nullable_int__o)&v49;
        v49 = 0LL;
        System_Nullable_int____ctor(
          v51,
          parentBlankEarthSpotId,
          (const MethodInfo_35CDD88 *)Method_System_Nullable_int___ctor__);
        v24 = v49;
      }
      else
      {
        v24 = 0LL;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (Il2CppObject *)HIDWORD(v24);
      if ( byte_49F903F )
      {
LABEL_32:
        v25 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v25 = TerminalPramsManager_TypeInfo;
        }
        v25->static_fields->_BlankEarthSpotId_k__BackingField = (int)Master_object;
        v26 = v14->fields.questId;
        if ( !v25->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v25);
        if ( !byte_49F9049 )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v19);
          byte_49F9049 = 1;
        }
        v27 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v27 = TerminalPramsManager_TypeInfo;
        }
        v27->static_fields->_QuestId_k__BackingField = v26;
        questPhase = v14->fields.questPhase;
        if ( !byte_49F904D )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v19);
          v27 = TerminalPramsManager_TypeInfo;
          byte_49F904D = 1;
        }
        if ( !v27->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v27);
          v27 = TerminalPramsManager_TypeInfo;
        }
        v27->static_fields->_PhaseCnt_k__BackingField = questPhase;
        endTime = v14->fields.endTime;
        if ( !byte_49F904A )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v19);
          v27 = TerminalPramsManager_TypeInfo;
          byte_49F904A = 1;
        }
        if ( !v27->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v27);
          v27 = TerminalPramsManager_TypeInfo;
        }
        v27->static_fields->_EndTime_k__BackingField = endTime;
        if ( !byte_49F967B )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v19);
          v27 = TerminalPramsManager_TypeInfo;
          byte_49F967B = 1;
        }
        if ( !v27->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v27);
          v27 = TerminalPramsManager_TypeInfo;
        }
        v27->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 1;
        if ( !SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__) )
          goto LABEL_145;
        v32 = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49F9048 )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v31);
          byte_49F9048 = 1;
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
            if ( !byte_49F904B )
            {
              sub_1B640C8(&TerminalPramsManager_TypeInfo, v30);
              byte_49F904B = 1;
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
            if ( !byte_49F904B )
            {
              sub_1B640C8(&TerminalPramsManager_TypeInfo, v30);
              byte_49F904B = 1;
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
          if ( !byte_49F904B )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, v30);
            byte_49F904B = 1;
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
        if ( !byte_49F76BD )
        {
          sub_1B640C8(&TerminalSceneComponent_TypeInfo, v30);
          byte_49F76BD = 1;
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
        if ( !byte_49F76BD )
        {
          sub_1B640C8(&TerminalSceneComponent_TypeInfo, v39);
          byte_49F76BD = 1;
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
            if ( !byte_49F76BD )
            {
              sub_1B640C8(&TerminalSceneComponent_TypeInfo, v42);
              byte_49F76BD = 1;
            }
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            }
            v43 = Instance[1].fields.questReleaseEntList->klass;
            if ( !v43 )
              goto LABEL_142;
            v44 = *(ScrTerminalListTop_o **)&v43->_2.static_fields_size;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49F9048 )
            {
              sub_1B640C8(&TerminalPramsManager_TypeInfo, v42);
              byte_49F9048 = 1;
            }
            Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
            }
            if ( !v44 )
              goto LABEL_142;
            ScrTerminalListTop__RequestChangeTerminalListBG(
              v44,
              HIDWORD(Instance[1].fields.questReleaseEntList->klass),
              0LL);
          }
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_49F76BD )
          {
            sub_1B640C8(&TerminalSceneComponent_TypeInfo, v42);
            byte_49F76BD = 1;
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
            v46 = *(UnityEngine_Object_o **)&v45->_2.instance_size;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v46, 0LL, 0LL) )
              goto LABEL_134;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49F76BD )
            {
              sub_1B640C8(&TerminalSceneComponent_TypeInfo, v39);
              byte_49F76BD = 1;
            }
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            }
            v47 = Instance[1].fields.questReleaseEntList->klass;
            if ( v47 )
            {
              Instance = *(QuestTree_o **)&v47->_2.instance_size;
              if ( Instance )
              {
                TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)Instance, 0LL);
LABEL_134:
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_49F7A3E )
                {
                  sub_1B640C8(&TerminalPramsManager_TypeInfo, v39);
                  byte_49F7A3E = 1;
                }
                v48 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v48 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                }
                *((_BYTE *)v48[2].virtualMethodPointer + 710) = 1;
                TerminalPramsManager__Save_SaveData(v48);
                return;
              }
            }
          }
        }
LABEL_142:
        sub_1B64324(Instance);
      }
    }
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v19);
    byte_49F903F = 1;
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
  __int64 v20; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_Object_o *v22; // x19
  __int64 v23; // x1
  UnityEngine_GameObject_c *v24; // x8
  ScrTerminalListTop_o *v25; // x19
  UnityEngine_GameObject_c *v26; // x8
  UnityEngine_Object_o *v27; // x19
  UnityEngine_GameObject_c *v28; // x8
  const MethodInfo *v29; // x0

  if ( (byte_49F9A39 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v4);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v5);
    byte_49F9A39 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F904F )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F904F = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_WarId_k__BackingField = warId;
  if ( !SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__) )
    goto LABEL_108;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9048 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v8);
    byte_49F9048 = 1;
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
      if ( !byte_49F904B )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
        byte_49F904B = 1;
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
      if ( !byte_49F904B )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
        byte_49F904B = 1;
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
    if ( !byte_49F904B )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
      byte_49F904B = 1;
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
  if ( !byte_49F903F )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
    byte_49F903F = 1;
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
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v7);
    byte_49F76BD = 1;
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
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v20);
      byte_49F76BD = 1;
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
    v22 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_49F76BD )
      {
        sub_1B640C8(&TerminalSceneComponent_TypeInfo, v23);
        byte_49F76BD = 1;
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
      v25 = *(ScrTerminalListTop_o **)&v24->_2.static_fields_size;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9048 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v23);
        byte_49F9048 = 1;
      }
      v10 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v10 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v25 )
        goto LABEL_105;
      ScrTerminalListTop__RequestChangeTerminalListBG(v25, HIDWORD(v10->fields.mEventRoot->klass), 0LL);
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v23);
      byte_49F76BD = 1;
    }
    v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    v26 = v10->fields.mEventRoot->klass;
    if ( !v26 )
      goto LABEL_105;
    v27 = *(UnityEngine_Object_o **)&v26->_2.instance_size;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_49F76BD )
      {
        sub_1B640C8(&TerminalSceneComponent_TypeInfo, v20);
        byte_49F76BD = 1;
      }
      v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      }
      v28 = v10->fields.mEventRoot->klass;
      if ( v28 )
      {
        v10 = *(TitleInfoControl_o **)&v28->_2.instance_size;
        if ( v10 )
        {
          TitleInfoControl__CloseEventBannerWindow(v10, 0LL);
          goto LABEL_98;
        }
      }
LABEL_105:
      sub_1B64324(v10);
    }
  }
LABEL_98:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F7A3E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v20);
    byte_49F7A3E = 1;
  }
  v29 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_BYTE *)v29[2].virtualMethodPointer + 710) = 1;
  TerminalPramsManager__Save_SaveData(v29);
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
  if ( (byte_49F9A75 & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_o *)sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A75 = 1;
  }
  if ( !v4 )
    sub_1B64324(result);
  campaignDirectBonus = v4->fields.campaignDirectBonus;
  if ( campaignDirectBonus && *(_QWORD *)&campaignDirectBonus->max_length )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9AC7 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
      byte_49F9AC7 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v6->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = campaignDirectBonus;
    sub_1B6406C(
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

  if ( (byte_49F9A60 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A60 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9AC6 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9AC6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignBonus_k__BackingField = campaignBonuses;
  sub_1B6406C(
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

  if ( (byte_49F9A6C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&idx);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v7);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v8);
    byte_49F9A6C = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( !v9->static_fields->folderLastIdxs )
  {
    v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 *(_QWORD *)&idx,
                                                                 method);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v10,
      (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->folderLastIdxs = v10;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->folderLastIdxs, (int32_t)v10, v11, v12);
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
          (const MethodInfo_311C26C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__),
        (folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs) == 0LL) )
  {
    sub_1B64324(folderLastIdxs);
  }
  System_Collections_Generic_Dictionary_int__int___Add(
    folderLastIdxs,
    warId,
    idx,
    (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !byte_49F9AB6 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v16);
    byte_49F9AB6 = 1;
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

  if ( (byte_49F9A72 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, *(_QWORD *)&state);
    byte_49F9A72 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v5);
  if ( !QuestFocusStateManager )
    sub_1B64324(0LL);
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

  if ( (byte_49F9A76 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A76 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (ServantStatusBattleListViewItem_o *)&v5->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0LL;
  sub_1B6406C(p_mQuestRewardInfos, 0, v2, v3);
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
    sub_1B6406C(v14, (int32_t)rewardInfos, v9, v10);
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = (ServantStatusBattleListViewItem_o *)&v15->static_fields->mQuestPhaseRewardInfos;
  p_mQuestPhaseRewardInfos->klass = 0LL;
  sub_1B6406C(p_mQuestPhaseRewardInfos, 0, v9, v10);
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
    sub_1B6406C(v22, (int32_t)resultQuestPhaseRewardInfos, v17, v18);
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestResultAfterEventRewardInfos = (ServantStatusBattleListViewItem_o *)&v23->static_fields->mQuestResultAfterEventRewardInfos;
  p_mQuestResultAfterEventRewardInfos->klass = 0LL;
  sub_1B6406C(p_mQuestResultAfterEventRewardInfos, 0, v17, v18);
  if ( !result->max_length )
LABEL_33:
    sub_1B6432C(v7, v8);
  v27 = result->m_Items[0];
  if ( !v27 )
LABEL_32:
    sub_1B64324(v7);
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
    sub_1B6406C(
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
  if ( (byte_49F9A6A & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v3);
    byte_49F9A6A = 1;
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
    v7 = System_String__Concat_61386656(mTerminalWarStartedIds, v6, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
    static_fields->mTerminalWarStartedIds = v7;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->mTerminalWarStartedIds, (int32_t)v7, v9, v10);
    TerminalPramsManager__Save_SaveData(v11);
  }
}


void __fastcall TerminalPramsManager__SpotIdSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9A46 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_13546/*"TerminalSpotId"*/, v2);
    byte_49F9A46 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F925B )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F925B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13546/*"TerminalSpotId"*/,
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

  if ( (byte_49F9A4C & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_13530/*"TerminalBeforeEventActivityPoint"*/, v2);
    sub_1B640C8(&StringLiteral_13531/*"TerminalBeforeEventActivityPointGauge"*/, v3);
    byte_49F9A4C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9ACD )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9ACD = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13530/*"TerminalBeforeEventActivityPoint"*/,
    v4->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_49F9ACE )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49F9ACE = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13531/*"TerminalBeforeEventActivityPointGauge"*/,
    v6->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfoDispSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9A51 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11387/*"SAVEKEY_TerminalConquestInfoDisp"*/, v2);
    byte_49F9A51 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11387/*"SAVEKEY_TerminalConquestInfoDisp"*/, v3->static_fields->eventConquestInfoDisp, 0LL);
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

  if ( (byte_49F9A50 & 1) == 0 )
  {
    sub_1B640C8(&EventConquestInfo___TypeInfo, v1);
    sub_1B640C8(&JsonManager_TypeInfo, v2);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_11388/*"SAVEKEY_TerminalConquestInfos"*/, v4);
    sub_1B640C8(&StringLiteral_11387/*"SAVEKEY_TerminalConquestInfoDisp"*/, v5);
    byte_49F9A50 = 1;
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
    eventConquestInfos = (struct EventConquestInfo_array *)sub_1B64170(EventConquestInfo___TypeInfo, 0LL);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(&eventConquestInfos->obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11388/*"SAVEKEY_TerminalConquestInfos"*/, v8, 0LL);
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11387/*"SAVEKEY_TerminalConquestInfoDisp"*/, v9->static_fields->eventConquestInfoDisp, 0LL);
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
  Il2CppObject *eventHarvestGrowthInfo; // x19
  System_String_o *v8; // x0

  if ( (byte_49F9A52 & 1) == 0 )
  {
    sub_1B640C8(&EventHarvestGrowthInfo_TypeInfo, v1);
    sub_1B640C8(&JsonManager_TypeInfo, v3);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_11389/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v5);
    byte_49F9A52 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  eventHarvestGrowthInfo = (Il2CppObject *)v6->static_fields->eventHarvestGrowthInfo;
  if ( eventHarvestGrowthInfo )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      eventHarvestGrowthInfo = (Il2CppObject *)TerminalPramsManager_TypeInfo->static_fields->eventHarvestGrowthInfo;
    }
  }
  else
  {
    eventHarvestGrowthInfo = (Il2CppObject *)sub_1B64314(EventHarvestGrowthInfo_TypeInfo, v1, v2);
    System_Object___ctor(eventHarvestGrowthInfo, 0LL);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(eventHarvestGrowthInfo, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11389/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v8, 0LL);
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

  if ( (byte_49F9A4E & 1) == 0 )
  {
    sub_1B640C8(&JsonManager_TypeInfo, v1);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_13532/*"TerminalBeforeEventSubmarinePointData"*/, v3);
    byte_49F9A4E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9178 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9178 = 1;
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
    if ( !byte_49F9178 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
      byte_49F9178 = 1;
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
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13532/*"TerminalBeforeEventSubmarinePointData"*/, v7, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9A5A & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11391/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v2);
    byte_49F9A5A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F964D )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F964D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11391/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v3->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9A59 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11392/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v2);
    byte_49F9A59 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9807 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9807 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11392/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v3->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalTransitionInfoSave_SaveData(
        TerminalTransitionInfo_o *terminalTransitionInfo,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_49F9A4B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_13552/*"TerminalTransitionInfoVoiceAssetName"*/, method);
    sub_1B640C8(&StringLiteral_13551/*"TerminalTransitionInfoMissionId"*/, v3);
    byte_49F9A4B = 1;
  }
  if ( terminalTransitionInfo )
  {
    UnityEngine_PlayerPrefs__SetInt(
      (System_String_o *)StringLiteral_13551/*"TerminalTransitionInfoMissionId"*/,
      terminalTransitionInfo->fields.missionId,
      0LL);
    UnityEngine_PlayerPrefs__SetString(
      (System_String_o *)StringLiteral_13552/*"TerminalTransitionInfoVoiceAssetName"*/,
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_int__o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x8
  Il2CppClass *klass; // x8
  _QWORD *v19; // x9
  __int64 entries_low; // x10
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F9A83 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, *(_QWORD *)&day);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v10);
    byte_49F9A83 = 1;
  }
  value = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9AE7 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    byte_49F9AE7 = 1;
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
          (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v15 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v13, v14);
    System_Collections_Generic_List_int____ctor(
      v15,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    value = (Il2CppObject *)v15;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9AE7 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v16);
      byte_49F9AE7 = 1;
    }
    v11 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
    }
    v17 = *(_QWORD *)&v11[2].fields._entries->m_Items[17].fields.hashCode;
    if ( v17 )
    {
      v11 = *(System_Collections_Generic_Dictionary_int__object__o **)(v17 + 16);
      if ( v11 )
      {
        System_Collections_Generic_Dictionary_int__object___Add(
          v11,
          eventId,
          value,
          (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        goto LABEL_24;
      }
    }
LABEL_30:
    sub_1B64324(v11);
  }
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)value,
         day,
         (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return;
  }
LABEL_24:
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  klass = value[1].klass;
  v19 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(value[1].monitor);
  if ( !klass )
    goto LABEL_30;
  entries_low = SLODWORD(v11->fields._entries);
  if ( (unsigned int)entries_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)v11,
      day,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
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

  if ( (byte_49F995E & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F995E = 1;
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

  if ( (byte_49F997C & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F997C = 1;
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

  if ( (byte_49F99B0 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v2);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v3);
    byte_49F99B0 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__checkNowScene(Instance, 34, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v5);
      byte_49F76BD = 1;
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
      if ( !byte_49F76BD )
      {
        sub_1B640C8(&TerminalSceneComponent_TypeInfo, v5);
        byte_49F76BD = 1;
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
      sub_1B64324(Instance);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49F9045 = 1;
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

  if ( (byte_49F99CB & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99CB = 1;
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

  if ( (byte_49F99CD & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99CD = 1;
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

  if ( (byte_49F99D1 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99D1 = 1;
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

  if ( (byte_49F99BF & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99BF = 1;
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

  if ( (byte_49F99F1 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99F1 = 1;
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

  if ( (byte_49F99F5 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99F5 = 1;
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

  if ( (byte_49F99EF & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99EF = 1;
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

  if ( (byte_49F99F3 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99F3 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_BlankEarthTransformData_k__BackingField;
}


CommonUI_CampaignBonusData_array *__fastcall TerminalPramsManager__get_CampaignBonus(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_49F9998 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9998 = 1;
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

  if ( (byte_49F999A & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F999A = 1;
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

  if ( (byte_49F99C9 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99C9 = 1;
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

  if ( (byte_49F9988 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9988 = 1;
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

  if ( (byte_49F9990 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9990 = 1;
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

  if ( (byte_49F998A & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F998A = 1;
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

  if ( (byte_49F993E & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F993E = 1;
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

  if ( (byte_49F997E & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F997E = 1;
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

  if ( (byte_49F99CF & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99CF = 1;
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

  if ( (byte_49F99D7 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99D7 = 1;
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

  if ( (byte_49F99C1 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99C1 = 1;
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

  if ( (byte_49F99BD & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99BD = 1;
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

  if ( (byte_49F996A & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F996A = 1;
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

  if ( (byte_49F99D3 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99D3 = 1;
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

  if ( (byte_49F99FB & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99FB = 1;
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

  if ( (byte_49F9A16 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A16 = 1;
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

  if ( (byte_49F9A18 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A18 = 1;
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

  if ( (byte_49F9A34 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A34 = 1;
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

  if ( (byte_49F9A10 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A10 = 1;
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

  if ( (byte_49F9A12 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A12 = 1;
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

  if ( (byte_49F9A2E & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A2E = 1;
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

  if ( (byte_49F99F7 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99F7 = 1;
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

  if ( (byte_49F9A1A & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A1A = 1;
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

  if ( (byte_49F9986 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9986 = 1;
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

  if ( (byte_49F9992 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9992 = 1;
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

  if ( (byte_49F998E & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F998E = 1;
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

  if ( (byte_49F99FF & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99FF = 1;
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

  if ( (byte_49F9960 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9960 = 1;
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

  if ( (byte_49F9962 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9962 = 1;
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

  if ( (byte_49F9970 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9970 = 1;
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

  if ( (byte_49F9964 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9964 = 1;
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

  if ( (byte_49F994A & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F994A = 1;
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

  if ( (byte_49F99D9 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99D9 = 1;
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

  if ( (byte_49F9952 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9952 = 1;
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

  if ( (byte_49F9950 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9950 = 1;
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

  if ( (byte_49F9A06 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A06 = 1;
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

  if ( (byte_49F9A14 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A14 = 1;
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

  if ( (byte_49F9968 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9968 = 1;
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

  if ( (byte_49F996E & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F996E = 1;
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

  if ( (byte_49F9974 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9974 = 1;
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

  if ( (byte_49F99DB & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99DB = 1;
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

  if ( (byte_49F9972 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9972 = 1;
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

  if ( (byte_49F99E9 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99E9 = 1;
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

  if ( (byte_49F99EB & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99EB = 1;
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

  if ( (byte_49F99ED & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99ED = 1;
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

  if ( (byte_49F9994 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9994 = 1;
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

  if ( (byte_49F996C & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F996C = 1;
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

  if ( (byte_49F9976 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9976 = 1;
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

  if ( (byte_49F9A2C & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A2C = 1;
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

  if ( (byte_49F998C & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F998C = 1;
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

  if ( (byte_49F9A1C & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A1C = 1;
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

  if ( (byte_49F9980 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9980 = 1;
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

  if ( (byte_49F9966 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9966 = 1;
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

  if ( (byte_49F995A & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F995A = 1;
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

  if ( (byte_49F9958 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9958 = 1;
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

  if ( (byte_49F995C & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F995C = 1;
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

  if ( (byte_49F9984 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9984 = 1;
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

  if ( (byte_49F9982 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9982 = 1;
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

  if ( (byte_49F9A36 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A36 = 1;
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

  if ( (byte_49F9978 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9978 = 1;
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

  if ( (byte_49F99F9 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99F9 = 1;
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

  if ( (byte_49F9A03 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A03 = 1;
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

  if ( (byte_49F9948 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9948 = 1;
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

  if ( (byte_49F99E7 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99E7 = 1;
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

  if ( (byte_49F9996 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9996 = 1;
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
  __int64 v2; // x2
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  QuestFocusStateManager_o *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  TerminalPramsManager_c *v8; // x0
  ServantStatusBattleListViewItem_o *p_questFocusStateManager; // x0

  if ( (byte_49F9A05 & 1) == 0 )
  {
    sub_1B640C8(&QuestFocusStateManager_TypeInfo, v1);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v3);
    byte_49F9A05 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( !v4->static_fields->questFocusStateManager )
  {
    v5 = (QuestFocusStateManager_o *)sub_1B64314(QuestFocusStateManager_TypeInfo, v1, v2);
    QuestFocusStateManager___ctor(v5, 0LL);
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    p_questFocusStateManager = (ServantStatusBattleListViewItem_o *)&v8->static_fields->questFocusStateManager;
    p_questFocusStateManager->klass = (ServantStatusBattleListViewItem_c *)v5;
    sub_1B6406C(p_questFocusStateManager, (int32_t)v5, v6, v7);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->questFocusStateManager;
}


int32_t __fastcall TerminalPramsManager__get_QuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_49F9946 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9946 = 1;
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

  if ( (byte_49F9A1E & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A1E = 1;
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

  if ( (byte_49F9A20 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A20 = 1;
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

  if ( (byte_49F99E5 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99E5 = 1;
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

  if ( (byte_49F9954 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9954 = 1;
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

  if ( (byte_49F997A & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F997A = 1;
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

  if ( (byte_49F99FD & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99FD = 1;
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

  if ( (byte_49F9956 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9956 = 1;
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

  if ( (byte_49F994E & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F994E = 1;
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

  if ( (byte_49F994C & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F994C = 1;
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

  if ( (byte_49F9A01 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A01 = 1;
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

  if ( (byte_49F999E & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F999E = 1;
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

  if ( (byte_49F9944 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9944 = 1;
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

  if ( (byte_49F9942 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9942 = 1;
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

  if ( (byte_49F9A22 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A22 = 1;
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

  if ( (byte_49F99C5 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99C5 = 1;
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

  if ( (byte_49F99C7 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99C7 = 1;
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

  if ( (byte_49F99DD & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99DD = 1;
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

  if ( (byte_49F9940 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9940 = 1;
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

  if ( (byte_49F999C & 1) == 0 )
  {
    sub_1B640C8(&MapZoom_TypeInfo, v1);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v2);
    byte_49F999C = 1;
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

  if ( (byte_49F99BB & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99BB = 1;
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

  if ( (byte_49F99A6 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99A6 = 1;
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

  if ( (byte_49F99A4 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99A4 = 1;
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

  if ( (byte_49F99A8 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99A8 = 1;
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

  if ( (byte_49F99B1 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99B1 = 1;
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

  if ( (byte_49F9A26 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A26 = 1;
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

  if ( (byte_49F99E1 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99E1 = 1;
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

  if ( (byte_49F99D5 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99D5 = 1;
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

  if ( (byte_49F99E3 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99E3 = 1;
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

  if ( (byte_49F9A0E & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A0E = 1;
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

  if ( (byte_49F9A0C & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A0C = 1;
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

  if ( (byte_49F99DF & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99DF = 1;
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

  if ( (byte_49F9A28 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A28 = 1;
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

  if ( (byte_49F9A24 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A24 = 1;
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

  if ( (byte_49F99A2 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99A2 = 1;
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

  if ( (byte_49F99AE & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99AE = 1;
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

  if ( (byte_49F99A0 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99A0 = 1;
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

  if ( (byte_49F99AC & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99AC = 1;
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

  if ( (byte_49F99AA & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99AA = 1;
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

  if ( (byte_49F99B5 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99B5 = 1;
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

  if ( (byte_49F99B7 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99B7 = 1;
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

  if ( (byte_49F99B3 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99B3 = 1;
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

  if ( (byte_49F99B9 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99B9 = 1;
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

  if ( (byte_49F9A2A & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A2A = 1;
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

  if ( (byte_49F99C3 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F99C3 = 1;
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

  if ( (byte_49F9A3E & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9A3E = 1;
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

  if ( (byte_49F9A3D & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A3D = 1;
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

  if ( (byte_49F995F & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F995F = 1;
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

  if ( (byte_49F997D & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F997D = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BattleSetupKeep_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->_BattleSetupKeep_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_BeforeEventActivityPoint(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F99CC & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99CC = 1;
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

  if ( (byte_49F99CE & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99CE = 1;
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

  if ( (byte_49F99D2 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99D2 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BeforeEventSubmarineSaveData_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->_BeforeEventSubmarineSaveData_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_BeforeTimeEventDailyPoint(int64_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F99C0 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99C0 = 1;
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

  if ( (byte_49F99F2 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99F2 = 1;
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

  if ( (byte_49F99F6 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99F6 = 1;
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

  if ( (byte_49F99F0 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99F0 = 1;
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

  if ( (byte_49F99F4 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99F4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BlankEarthTransformData_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->_BlankEarthTransformData_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_CampaignBonus(
        CommonUI_CampaignBonusData_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_49F9999 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9999 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignBonus_k__BackingField = value;
  sub_1B6406C(
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

  if ( (byte_49F999B & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F999B = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = value;
  sub_1B6406C(
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

  if ( (byte_49F99CA & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99CA = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_ClearEventQuestIds_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->_ClearEventQuestIds_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_DataLostBattleEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9989 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9989 = 1;
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

  if ( (byte_49F9991 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v2);
    byte_49F9991 = 1;
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

  if ( (byte_49F998B & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F998B = 1;
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

  if ( (byte_49F9A0B & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A0B = 1;
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

  if ( (byte_49F9A0A & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A0A = 1;
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

  if ( (byte_49F9A08 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A08 = 1;
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

  if ( (byte_49F9A09 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A09 = 1;
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

  if ( (byte_49F993F & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F993F = 1;
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

  if ( (byte_49F997F & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F997F = 1;
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

  if ( (byte_49F99D0 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99D0 = 1;
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

  if ( (byte_49F99D8 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99D8 = 1;
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

  if ( (byte_49F99C2 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99C2 = 1;
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

  if ( (byte_49F99BE & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99BE = 1;
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

  if ( (byte_49F996B & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F996B = 1;
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

  if ( (byte_49F99D4 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99D4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_EventUIEffectClearQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F99FC & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99FC = 1;
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

  if ( (byte_49F9A17 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A17 = 1;
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

  if ( (byte_49F9A19 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A19 = 1;
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

  if ( (byte_49F9A35 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A35 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v3 = value;
  if ( !byte_49F7A3E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F7A3E = 1;
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

  if ( (byte_49F9A11 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A11 = 1;
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

  if ( (byte_49F9A13 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A13 = 1;
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

  if ( (byte_49F9A2F & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A2F = 1;
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

  if ( (byte_49F99F8 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99F8 = 1;
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

  if ( (byte_49F9A1B & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A1B = 1;
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

  if ( (byte_49F9987 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9987 = 1;
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

  if ( (byte_49F9993 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9993 = 1;
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

  if ( (byte_49F998F & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F998F = 1;
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

  if ( (byte_49F9A00 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A00 = 1;
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

  if ( (byte_49F9961 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9961 = 1;
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

  if ( (byte_49F9963 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9963 = 1;
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

  if ( (byte_49F9971 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9971 = 1;
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

  if ( (byte_49F9965 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9965 = 1;
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

  if ( (byte_49F994B & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F994B = 1;
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

  if ( (byte_49F99DA & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99DA = 1;
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

  if ( (byte_49F9953 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9953 = 1;
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

  if ( (byte_49F9951 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9951 = 1;
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

  if ( (byte_49F9A07 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A07 = 1;
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

  if ( (byte_49F9A15 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A15 = 1;
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

  if ( (byte_49F9969 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9969 = 1;
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

  if ( (byte_49F996F & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F996F = 1;
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

  if ( (byte_49F9975 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9975 = 1;
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

  if ( (byte_49F99DC & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99DC = 1;
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

  if ( (byte_49F9973 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9973 = 1;
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

  if ( (byte_49F99EA & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99EA = 1;
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

  if ( (byte_49F99EC & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99EC = 1;
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

  if ( (byte_49F99EE & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99EE = 1;
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

  if ( (byte_49F9995 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9995 = 1;
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

  if ( (byte_49F996D & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F996D = 1;
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

  if ( (byte_49F9977 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9977 = 1;
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

  if ( (byte_49F9A2D & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A2D = 1;
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

  if ( (byte_49F998D & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F998D = 1;
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

  if ( (byte_49F9A1D & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A1D = 1;
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

  if ( (byte_49F9981 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9981 = 1;
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

  if ( (byte_49F9967 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9967 = 1;
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

  if ( (byte_49F995B & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F995B = 1;
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

  if ( (byte_49F9959 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9959 = 1;
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

  if ( (byte_49F995D & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F995D = 1;
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

  if ( (byte_49F9985 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9985 = 1;
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

  if ( (byte_49F9983 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9983 = 1;
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

  if ( (byte_49F9A37 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A37 = 1;
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

  if ( (byte_49F9979 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9979 = 1;
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

  if ( (byte_49F99FA & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99FA = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_NoticeLastModified_k__BackingField = value;
  sub_1B6406C(
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

  if ( (byte_49F9A04 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A04 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_OldUserEventPoint_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->_OldUserEventPoint_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_PhaseCnt(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9949 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9949 = 1;
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

  if ( (byte_49F99E8 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99E8 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_PlayedTerminalEffects_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->_PlayedTerminalEffects_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_PlayerGenderType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9997 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9997 = 1;
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

  if ( (byte_49F9947 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9947 = 1;
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

  if ( (byte_49F9A1F & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A1F = 1;
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

  if ( (byte_49F9A21 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A21 = 1;
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

  if ( (byte_49F99E6 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99E6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_QuestRandomGroupList_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->_QuestRandomGroupList_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_QuestReleaseFocusQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9955 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9955 = 1;
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

  if ( (byte_49F997B & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F997B = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = value;
  sub_1B6406C(
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

  if ( (byte_49F99FE & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99FE = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SceneMoveQuestClearedInfo_k__BackingField = value;
  sub_1B6406C(
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

  if ( (byte_49F9957 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9957 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_SelectedRecollectionWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F994F & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F994F = 1;
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

  if ( (byte_49F994D & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F994D = 1;
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

  if ( (byte_49F9A02 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A02 = 1;
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

  if ( (byte_49F999F & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F999F = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SpecifiedChangeSceneInfo_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_SpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9945 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9945 = 1;
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

  if ( (byte_49F9943 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9943 = 1;
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

  if ( (byte_49F9A23 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A23 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_TalkScriptInfo_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->_TalkScriptInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_TimeStatusEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F99C6 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99C6 = 1;
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

  if ( (byte_49F99C8 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99C8 = 1;
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

  if ( (byte_49F99DE & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99DE = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_WarBoardData_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->_WarBoardData_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_WarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9941 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9941 = 1;
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

  if ( (byte_49F999D & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v2);
    byte_49F999D = 1;
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

  if ( (byte_49F99BC & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99BC = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventDailyPoint_k__BackingField = value;
  sub_1B6406C(
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

  if ( (byte_49F99A7 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99A7 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventPointWinReward_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->_eventPointWinReward_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_eventPointWinType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F99A5 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99A5 = 1;
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

  if ( (byte_49F99A9 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99A9 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventRaceBoost_k__BackingField = value;
  sub_1B6406C(
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

  if ( (byte_49F99B2 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99B2 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventTowerReward_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->_eventTowerReward_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_friendshipQuestDialogOpenId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F9A27 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A27 = 1;
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

  if ( (byte_49F99E2 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99E2 = 1;
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

  if ( (byte_49F99D6 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99D6 = 1;
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

  if ( (byte_49F99E4 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99E4 = 1;
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

  if ( (byte_49F9A0F & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A0F = 1;
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

  if ( (byte_49F9A0D & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A0D = 1;
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

  if ( (byte_49F99E0 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99E0 = 1;
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

  if ( (byte_49F9A29 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A29 = 1;
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

  if ( (byte_49F9A25 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A25 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_limitImageAnnounces_k__BackingField = value;
  sub_1B6406C(
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

  if ( (byte_49F99A3 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99A3 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_oldPersonalBoss_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->_oldPersonalBoss_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_oldQuestIdForHeaderEvent(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_49F99AF & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99AF = 1;
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

  if ( (byte_49F99A1 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99A1 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_oldSuperBoss_k__BackingField = value;
  sub_1B6406C(
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

  if ( (byte_49F99AD & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99AD = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_questClearCostumeGet_k__BackingField = value;
  sub_1B6406C(
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

  if ( (byte_49F99AB & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99AB = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_questClearCostumeRelease_k__BackingField = value;
  sub_1B6406C(
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

  if ( (byte_49F99B6 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99B6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultBoostItemRewardInfo_k__BackingField = value;
  sub_1B6406C(
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

  if ( (byte_49F99B8 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99B8 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (ServantStatusBattleListViewItem_o *)v5->static_fields;
  static_fields[2].klass = (ServantStatusBattleListViewItem_c *)value;
  sub_1B6406C(static_fields + 2, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_resultEventTowerRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_49F99B4 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99B4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultEventTowerRewardInfo_k__BackingField = value;
  sub_1B6406C(
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

  if ( (byte_49F99BA & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99BA = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_timeStatusRecord_k__BackingField = value;
  sub_1B6406C(
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

  if ( (byte_49F9A2B & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A2B = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_updateProfileInfoEntity_k__BackingField = value;
  sub_1B6406C(
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

  if ( (byte_49F99C4 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F99C4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_warClearReward_k__BackingField = value;
  sub_1B6406C(
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

  if ( (byte_49F9A93 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_13215/*"TERMINAL_CLEAR_REWARD_DISP"*/, v4);
    byte_49F9A93 = 1;
  }
  TerminalPramsManager_ClearData_TypeInfo->static_fields->SAVEKEY_CLEAR_REWARD_DISP = (struct System_String_o *)StringLiteral_13215/*"TERMINAL_CLEAR_REWARD_DISP"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)TerminalPramsManager_ClearData_TypeInfo->static_fields,
    StringLiteral_13215/*"TERMINAL_CLEAR_REWARD_DISP"*/,
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

  if ( (byte_49F9A91 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9A91 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.qClearHeroineInfo = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, 0, v3, v4);
  this->fields.questRewardInfos = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.questRewardInfos, 0, v5, v6);
  this->fields.questPhaseRewardInfos = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.questPhaseRewardInfos, 0, v7, v8);
  this->fields.questResultAfterEventRewardInfos = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.questResultAfterEventRewardInfos, 0, v9, v10);
  this->fields.resultEventPanelRewardInfos = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resultEventPanelRewardInfos, 0, v11, v12);
  this->fields.panelEventPoint = 0;
  *(_QWORD *)&this->fields.clearedLastBattleRaidId = -1LL;
  this->fields.joinGroup = -1;
  this->fields.mOldSuperBoss = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mOldSuperBoss, 0, v13, v14);
  this->fields.oldPersonalBoss = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.oldPersonalBoss, 0, v15, v16);
  this->fields.evPointWinReward = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.evPointWinReward, 0, v17, v18);
  this->fields.evPointWinType = 0;
  this->fields.evRaceBoost = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.evRaceBoost, 0, v19, v20);
  this->fields.questClearCostume = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.questClearCostume, 0, v21, v22);
  this->fields.questClearCostumeGetInfo = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.questClearCostumeGetInfo, 0, v23, v24);
  this->fields.eventTowerReward = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventTowerReward, 0, v25, v26);
  this->fields.resultEventTowerRewardInfo = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resultEventTowerRewardInfo, 0, v27, v28);
  this->fields.warClearReward = 0LL;
  this->fields.isDispOnly = 0;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.warClearReward, 0, v29, v30);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_limitImageAnnounces, 0, v31, v32);
  *((_BYTE *)p_limitImageAnnounces + 8) = 0;
  *((_DWORD *)p_limitImageAnnounces + 3) = 0;
}


void __fastcall TerminalPramsManager_ClearData___ctor_34423000(
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
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v48; // x27
  __int64 v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  bool v52; // w28
  int32_t v53; // w2
  int32_t v54; // w3
  struct UserSuperBossEntity_array *v55; // x24
  int32_t v56; // w2
  int32_t v57; // w3
  struct UserSuperBossEntity_array *v58; // x23
  int32_t v59; // w2
  int32_t v60; // w3
  struct CostumeReleaseAnnounce_array *v61; // x20
  int32_t v62; // w2
  int32_t v63; // w3
  struct CostumeReleaseAnnounce_array *v64; // x21
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w2
  int32_t v68; // w3
  int32_t v69; // w2
  int32_t v70; // w3
  struct QuestRewardInfo_array *v71; // x22
  int32_t v72; // w2
  int32_t v73; // w3
  int32_t v74; // w2
  int32_t v75; // w3
  int32_t v76; // w2
  int32_t v77; // w3
  __int64 v78; // x1
  int32_t v79; // w2
  int32_t v80; // w3
  TerminalPramsManager_c *v81; // x0
  TerminalPramsManager_c *v82; // x0
  struct QuestRewardInfo_array *resultBoostItemRewardInfo_k__BackingField; // x1
  int32_t v84; // w2
  int32_t v85; // w3
  __int64 v86; // x1
  int32_t v87; // w2
  int32_t v88; // w3
  TerminalPramsManager_c *v89; // x0
  struct WarClearReward_array *v90; // x21
  TerminalPramsManager_c *v91; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo_k__BackingField; // x1
  struct BattleDropItem_array *v93; // x22
  int32_t v94; // w2
  int32_t v95; // w3
  struct BattleDropItem_array *v96; // x23
  int32_t v97; // w2
  int32_t v98; // w3
  struct LimitImageAnnounce_array *v99; // x21
  int32_t v100; // w2
  int32_t v101; // w3
  int32_t v102; // w2
  int32_t v103; // w3
  __int64 v104; // x1
  TerminalPramsManager_c *v105; // x0

  if ( (byte_49F9A92 & 1) == 0 )
  {
    sub_1B640C8(&BattleDropItem___TypeInfo, qcrHeroineInfo);
    sub_1B640C8(&CostumeReleaseAnnounce___TypeInfo, v37);
    sub_1B640C8(&LimitImageAnnounce___TypeInfo, v38);
    sub_1B640C8(&TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo, v39);
    sub_1B640C8(&QuestRewardInfo___TypeInfo, v40);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
    sub_1B640C8(&UserSuperBossEntity___TypeInfo, v42);
    sub_1B640C8(&WarClearReward___TypeInfo, v43);
    byte_49F9A92 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v46 = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)sub_1B64314(
                                                                 TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo,
                                                                 v44,
                                                                 v45);
  v48 = v46;
  if ( qcrHeroineInfo )
  {
    TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_34431848(v46, qcrHeroineInfo, v47);
    if ( this )
      goto LABEL_5;
LABEL_34:
    sub_1B64324(v49);
  }
  System_Object___ctor((Il2CppObject *)v46, 0LL);
  v48->fields.oldUsrSvtData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v48->fields, 0, v84, v85);
  if ( !this )
    goto LABEL_34;
LABEL_5:
  this->fields.qClearHeroineInfo = v48;
  v52 = pclear;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v48, v50, v51);
  if ( !qri )
    qri = (QuestRewardInfo_array *)sub_1B64170(QuestRewardInfo___TypeInfo, 0LL);
  v55 = oldSuperBoss;
  this->fields.questRewardInfos = qri;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.questRewardInfos, (int32_t)qri, v53, v54);
  if ( !questPhaseRewardInfos )
    questPhaseRewardInfos = (QuestRewardInfo_array *)sub_1B64170(QuestRewardInfo___TypeInfo, 0LL);
  v58 = oldPersonalBoss;
  this->fields.questPhaseRewardInfos = questPhaseRewardInfos;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questPhaseRewardInfos,
    (int32_t)questPhaseRewardInfos,
    v56,
    v57);
  this->fields.questClear = qClear;
  this->fields.phaseClear = v52;
  this->fields.clearedLastBattleRaidId = lastRaidId;
  this->fields.clearedBattleRaidId = raidId;
  this->fields.joinGroup = groupjoin;
  if ( !oldSuperBoss )
    v55 = (struct UserSuperBossEntity_array *)sub_1B64170(UserSuperBossEntity___TypeInfo, 0LL);
  v61 = questClearCostumeRelease;
  this->fields.mOldSuperBoss = v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mOldSuperBoss, (int32_t)v55, v59, v60);
  if ( !oldPersonalBoss )
    v58 = (struct UserSuperBossEntity_array *)sub_1B64170(UserSuperBossEntity___TypeInfo, 0LL);
  v64 = questClearCostumeGet;
  this->fields.oldPersonalBoss = v58;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.oldPersonalBoss, (int32_t)v58, v62, v63);
  this->fields.evPointWinReward = evpWinReward;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.evPointWinReward, (int32_t)evpWinReward, v65, v66);
  this->fields.evRaceBoost = evRace;
  this->fields.evPointWinType = evpWinType;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.evRaceBoost, (int32_t)evRace, v67, v68);
  if ( !questClearCostumeRelease )
    v61 = (struct CostumeReleaseAnnounce_array *)sub_1B64170(CostumeReleaseAnnounce___TypeInfo, 0LL);
  v71 = resultEvTowerRewardInfo;
  this->fields.questClearCostume = v61;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.questClearCostume, (int32_t)v61, v69, v70);
  if ( !questClearCostumeGet )
    v64 = (struct CostumeReleaseAnnounce_array *)sub_1B64170(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostumeGetInfo = v64;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.questClearCostumeGetInfo, (int32_t)v64, v72, v73);
  this->fields.eventTowerReward = evTowerReward;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventTowerReward, (int32_t)evTowerReward, v74, v75);
  if ( !resultEvTowerRewardInfo )
    v71 = (struct QuestRewardInfo_array *)sub_1B64170(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.resultEventTowerRewardInfo = v71;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resultEventTowerRewardInfo, (int32_t)v71, v76, v77);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F965A )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v78);
    byte_49F965A = 1;
  }
  v81 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v81 = TerminalPramsManager_TypeInfo;
  }
  if ( v81->static_fields->_resultBoostItemRewardInfo_k__BackingField )
  {
    if ( !v81->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v81);
    if ( !byte_49F965A )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v78);
      byte_49F965A = 1;
    }
    v82 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v82 = TerminalPramsManager_TypeInfo;
    }
    resultBoostItemRewardInfo_k__BackingField = v82->static_fields->_resultBoostItemRewardInfo_k__BackingField;
  }
  else
  {
    resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1B64170(
                                                                                  QuestRewardInfo___TypeInfo,
                                                                                  0LL);
  }
  this->fields.resultBoostItemRewardInfo = resultBoostItemRewardInfo_k__BackingField;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultBoostItemRewardInfo,
    (int32_t)resultBoostItemRewardInfo_k__BackingField,
    v79,
    v80);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9654 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v86);
    byte_49F9654 = 1;
  }
  v89 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v89 = TerminalPramsManager_TypeInfo;
  }
  v90 = warClearRewardIn;
  if ( v89->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField )
  {
    if ( !v89->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v89);
    if ( !byte_49F9654 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v86);
      byte_49F9654 = 1;
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
    resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1B64170(
                                                                                            QuestRewardInfo___TypeInfo,
                                                                                            0LL);
  }
  v93 = questResultAfterEventRewardInfos;
  this->fields.resultEventBoardGameTokenRewardInfo = resultEventBoardGameTokenRewardInfo_k__BackingField;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultEventBoardGameTokenRewardInfo,
    (int32_t)resultEventBoardGameTokenRewardInfo_k__BackingField,
    v87,
    v88);
  this->fields.isDispOnly = dispOnly;
  if ( !warClearRewardIn )
    v90 = (struct WarClearReward_array *)sub_1B64170(WarClearReward___TypeInfo, 0LL);
  v96 = resultEventPanelRewardInfos;
  this->fields.warClearReward = v90;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.warClearReward, (int32_t)v90, v94, v95);
  this->fields.EventActivityPointEffectState = eventActivityPointEffectState;
  this->fields.isWarBoardClear = isWarBoardClear;
  if ( !questResultAfterEventRewardInfos )
    v93 = (struct BattleDropItem_array *)sub_1B64170(BattleDropItem___TypeInfo, 0LL);
  v99 = limitImageAnnounces;
  this->fields.questResultAfterEventRewardInfos = v93;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questResultAfterEventRewardInfos,
    (int32_t)v93,
    v97,
    v98);
  if ( !resultEventPanelRewardInfos )
    v96 = (struct BattleDropItem_array *)sub_1B64170(BattleDropItem___TypeInfo, 0LL);
  this->fields.resultEventPanelRewardInfos = v96;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resultEventPanelRewardInfos, (int32_t)v96, v100, v101);
  this->fields.panelEventPoint = panelEventPoint;
  if ( !limitImageAnnounces )
    v99 = (struct LimitImageAnnounce_array *)sub_1B64170(LimitImageAnnounce___TypeInfo, 0LL);
  this->fields.limitImageAnnounces = v99;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.limitImageAnnounces, (int32_t)v99, v102, v103);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F903E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v104);
    byte_49F903E = 1;
  }
  v105 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v105 = TerminalPramsManager_TypeInfo;
  }
  this->fields.isOrdealCallWarClear = v105->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_49F9657 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v104);
    v105 = TerminalPramsManager_TypeInfo;
    byte_49F9657 = 1;
  }
  if ( !v105->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v105);
    v105 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventMuralId = v105->static_fields->_EventMuralId_k__BackingField;
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor_34431084(
        TerminalPramsManager_OldHeroineLawData_o *this,
        UserServantEntity_o *uSvtEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  __int128 v7; // q1
  __int128 v8; // q1
  __int64 v9; // x21
  __int64 v10; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_49F9A8D & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, uSvtEnt);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_49F9A8D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !uSvtEnt )
    sub_1B64324(v6);
  v7 = *(_OWORD *)&uSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  this->fields.id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v12, 0LL);
  v8 = *(_OWORD *)&uSvtEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v11, 0LL);
  v10 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v14, 0LL);
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                              uSvtEnt->fields.limitCount,
                              0LL);
  this->fields.imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                   uSvtEnt->fields.imageLimitCount,
                                   0LL);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                  uSvtEnt->fields.dispLimitCount,
                                  0LL);
  this->fields.commandCardLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                         uSvtEnt->fields.commandCardLimitCount,
                                         0LL);
  this->fields.iconLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x20
  int64_t id; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v8; // x0
  __int128 v9; // q0
  __int128 v10; // q0
  int32_t svtId; // w21
  UserServantEntity_o *result; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+40h] [xbp-50h]

  if ( (byte_49F9A8E & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1B640C8(&UserServantEntity_TypeInfo, v5);
    byte_49F9A8E = 1;
  }
  v6 = sub_1B64314(UserServantEntity_TypeInfo, method, v2);
  UserServantEntity___ctor((UserServantEntity_o *)v6, 0LL);
  id = this->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v14, id, 0LL);
  v15 = v14;
  if ( !v6 )
    sub_1B64324(v8);
  v9 = *(_OWORD *)&v15.fields.fakeValue;
  *(_OWORD *)(v6 + 16) = *(_OWORD *)&v15.fields.currentCryptoKey;
  *(_OWORD *)(v6 + 32) = v9;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v13, this->fields.userId, 0LL);
  v10 = *(_OWORD *)&v13.fields.fakeValue;
  v14 = v13;
  *(_OWORD *)(v6 + 48) = *(_OWORD *)&v13.fields.currentCryptoKey;
  *(_OWORD *)(v6 + 64) = v10;
  svtId = this->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
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
  *(_OWORD *)(v6 + 256) = *(_OWORD *)&this->fields.lv;
  *(_OWORD *)(v6 + 272) = *(_OWORD *)&this->fields.adjustAtk;
  *(_OWORD *)(v6 + 288) = *(_OWORD *)&this->fields.skillLv3;
  *(_QWORD *)(v6 + 304) = this->fields.createdAt;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, 0, v3, v4);
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_34431848(
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
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49F9A8F & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_OldHeroineLawData_TypeInfo, qClearHeroineInfo);
    byte_49F9A8F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !qClearHeroineInfo )
    sub_1B64324(v5);
  oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
  v9 = (TerminalPramsManager_OldHeroineLawData_o *)sub_1B64314(TerminalPramsManager_OldHeroineLawData_TypeInfo, v6, v7);
  TerminalPramsManager_OldHeroineLawData___ctor_34431084(v9, oldUsrSvtData, v10);
  this->fields.oldUsrSvtData = v9;
  p_fields = &this->fields;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_fields, (int32_t)v9, v12, v13);
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
  __int64 v4; // x20
  const MethodInfo *v5; // x1
  TerminalPramsManager_OldHeroineLawData_o *oldUsrSvtData; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  QuestClearHeroineInfo_o *result; // x0

  if ( (byte_49F9A90 & 1) == 0 )
  {
    sub_1B640C8(&QuestClearHeroineInfo_TypeInfo, method);
    byte_49F9A90 = 1;
  }
  v4 = sub_1B64314(QuestClearHeroineInfo_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  oldUsrSvtData = this->fields.oldUsrSvtData;
  if ( !oldUsrSvtData
    || (oldUsrSvtData = (TerminalPramsManager_OldHeroineLawData_o *)TerminalPramsManager_OldHeroineLawData__GetLoad(
                                                                      oldUsrSvtData,
                                                                      v5),
        !v4) )
  {
    sub_1B64324(oldUsrSvtData);
  }
  *(_QWORD *)(v4 + 16) = oldUsrSvtData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)oldUsrSvtData, v7, v8);
  result = (QuestClearHeroineInfo_o *)v4;
  *(_BYTE *)(v4 + 24) = this->fields.isChangeLimitcnt;
  *(_BYTE *)(v4 + 25) = this->fields.isChangeTreasureDvc;
  *(_QWORD *)(v4 + 28) = *(_QWORD *)&this->fields.treasureDvcId;
  *(_DWORD *)(v4 + 36) = this->fields.oldFriendShipRank;
  *(_BYTE *)(v4 + 40) = this->fields.isFriendShipExceed;
  *(_BYTE *)(v4 + 41) = this->fields.isExceed;
  return result;
}


void __fastcall TerminalPramsManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F9A94 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager___c_TypeInfo, v1);
    byte_49F9A94 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(TerminalPramsManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  TerminalPramsManager___c_TypeInfo->static_fields->__9 = (struct TerminalPramsManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)TerminalPramsManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall TerminalPramsManager___c___ctor(TerminalPramsManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TerminalPramsManager___c___ReceiveQuestEndResultInfo_b__652_0(
        TerminalPramsManager___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  int32_t questId; // w19
  TerminalPramsManager_c *v5; // x0

  if ( (byte_49F9A95 & 1) == 0 )
  {
    this = (TerminalPramsManager___c_o *)sub_1B640C8(&TerminalPramsManager_TypeInfo, n);
    byte_49F9A95 = 1;
  }
  if ( !n )
    sub_1B64324(this);
  questId = n->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, n);
    byte_49F9045 = 1;
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
bool __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__657_0(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  if ( (byte_49F9A96 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, *(_QWORD *)&v);
    byte_49F9A96 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStoryForQuestId(v, *(const MethodInfo **)&v);
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__657_3(
        TerminalPramsManager___c_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1B64324(this);
  return v->fields.id;
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__657_4(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  return v;
}


void __fastcall TerminalPramsManager___c__DisplayClass640_0___ctor(
        TerminalPramsManager___c__DisplayClass640_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager___c__DisplayClass640_0___CheckResumeEffectNT2_b__0(
        TerminalPramsManager___c__DisplayClass640_0_o *this,
        System_String_o *effectId,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_fields; // x19
  System_String_o *effectIdsStr; // t1
  System_String_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49F9A97 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_43/*"\n"*/, effectId);
    byte_49F9A97 = 1;
  }
  effectIdsStr = this->fields.effectIdsStr;
  p_fields = (ServantStatusBattleListViewItem_o *)&this->fields;
  v7 = System_String__Concat_61386656(effectIdsStr, effectId, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  p_fields->klass = (ServantStatusBattleListViewItem_c *)v7;
  sub_1B6406C(p_fields, (int32_t)v7, v8, v9);
}


void __fastcall TerminalPramsManager___c__DisplayClass657_0___ctor(
        TerminalPramsManager___c__DisplayClass657_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


QuestEntity_o *__fastcall TerminalPramsManager___c__DisplayClass657_0___SendOpenedQuestIdToAdManager_b__1(
        TerminalPramsManager___c__DisplayClass657_0_o *this,
        int32_t v,
        const MethodInfo *method)
{
  QuestMaster_o *questMaster; // x0

  questMaster = this->fields.questMaster;
  if ( !questMaster )
    sub_1B64324(0LL);
  return QuestMaster__getQuestEntity(questMaster, v, 0LL);
}


bool __fastcall TerminalPramsManager___c__DisplayClass657_0___SendOpenedQuestIdToAdManager_b__2(
        TerminalPramsManager___c__DisplayClass657_0_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  UserQuestMaster_o *userQuestMaster; // x20
  int64_t UserId; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F9A98 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v);
    byte_49F9A98 = 1;
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
    sub_1B64324(UserId);
  }
  return 1;
}