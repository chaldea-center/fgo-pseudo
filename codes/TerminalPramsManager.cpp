void __fastcall TerminalPramsManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v1; // x19
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  int32_t v3; // w2
  int32_t v4; // w3
  int32_t v5; // w1
  struct TerminalPramsManager_StaticFields *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x0
  struct TerminalPramsManager_StaticFields *v10; // x8
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_List_object__o *v13; // x19
  ServantStatusBattleListViewItem_o *p_eventScriptMessages; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct TerminalPramsManager_StaticFields *v17; // x8

  if ( (byte_4A5887C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&float___TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5887C = 1;
  }
  v1 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v1,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->loginQuestNotifiedList = v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->loginQuestNotifiedList, (int32_t)v1, v3, v4);
  v5 = (int)StringLiteral_1/*""*/;
  v6 = TerminalPramsManager_TypeInfo->static_fields;
  v6->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->mTerminalWarStartedIds, v5, v7, v8);
  *(_OWORD *)&TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = xmmword_BB4980;
  v9 = sub_1B88658(float___TypeInfo, 3LL);
  v10 = TerminalPramsManager_TypeInfo->static_fields;
  v10->TipsArchiveScrollValueList = (struct System_Single_array *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->TipsArchiveScrollValueList, v9, v11, v12);
  TerminalPramsManager_TypeInfo->static_fields->joinGroupId = -1;
  v13 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  p_eventScriptMessages = (ServantStatusBattleListViewItem_o *)&TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  p_eventScriptMessages->klass = (ServantStatusBattleListViewItem_c *)v13;
  sub_1B88554(p_eventScriptMessages, (int32_t)v13, v15, v16);
  v17 = TerminalPramsManager_TypeInfo->static_fields;
  *(_QWORD *)&v17->EVENT_POINT_EFFECT_STATE_SUB = 0xFFFFFFFFLL;
  v17->EVENT_POINT_EFFECT_STATE_ADD = 1;
  *(_QWORD *)&v17->_ShopFocusItemId_k__BackingField = 0LL;
  v17->isInvisibleConnectAndLoad = 0;
  *(_QWORD *)&v17->ConnectMarkEventId = 0LL;
  v17->meSceneStatus = 0;
  v17->isCheckHomeExpirationDateEventMap = 1;
  *(_WORD *)&v17->IsEventMapLoading = 0;
  v17->_MasterMissionTargetType_k__BackingField = -1;
}


void __fastcall TerminalPramsManager__AddNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_4A5885D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5885D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v3->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_HashSet_int___Add(
    loginQuestNotifiedList,
    questId,
    (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall TerminalPramsManager__AutoOff(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A58820 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58820 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5644B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5644B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_IsAutoResume_k__BackingField = 0;
  if ( !byte_4A5835D )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_4A5835D = 1;
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

  if ( (byte_4A58851 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11424/*"SAVEKEY_BlankEarthRank"*/);
    byte_4A58851 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588E2 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588E2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11424/*"SAVEKEY_BlankEarthRank"*/,
    v1->static_fields->_BlankEarthRank_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__BlankEarthSpotId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A58850 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11425/*"SAVEKEY_BlankEarthSpotId"*/);
    byte_4A58850 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57CDB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57CDB = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11425/*"SAVEKEY_BlankEarthSpotId"*/,
    v1->static_fields->_BlankEarthSpotId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__CampaignDirectBonus_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  Il2CppObject *p_obj; // x19
  System_String_o *v3; // x0

  if ( (byte_4A5884F & 1) == 0 )
  {
    sub_1B885B0(&CommonUI_CampaignDirectBonusData___TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11426/*"SAVEKEY_CampaignDirectBonus"*/);
    byte_4A5884F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588E1 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588E1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  p_obj = &v1->static_fields->_CampaignDirectBonus_k__BackingField->obj;
  if ( !p_obj )
    p_obj = (Il2CppObject *)sub_1B88658(CommonUI_CampaignDirectBonusData___TypeInfo, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(p_obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11426/*"SAVEKEY_CampaignDirectBonus"*/, v3, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall TerminalPramsManager__CanSendTrackEvent(int32_t questId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x19
  Il2CppObject *v8; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5886B & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1B885B0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5886B = 1;
  }
  v8 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SpotMaster___);
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
          (const MethodInfo_311D988 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v8 )
LABEL_16:
    sub_1B8880C(Instance, v4);
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
            HIDWORD(v8[1].klass),
            (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall TerminalPramsManager__CheckClearSelectedStoryQuestId(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4A58852 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58852 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58541 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58541 = 1;
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
    if ( !byte_4A58541 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58541 = 1;
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
      if ( !byte_4A5818A )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A5818A = 1;
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
  if ( (byte_4A5883B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_13599/*"TerminalBeforeEventActivityPoint"*/);
    sub_1B885B0(&StringLiteral_13600/*"TerminalBeforeEventActivityPointGauge"*/);
    byte_4A5883B = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13599/*"TerminalBeforeEventActivityPoint"*/, 0LL)
      && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13600/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckEventSubmarinePointSaveData(const MethodInfo *method)
{
  if ( (byte_4A5883D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_13601/*"TerminalBeforeEventSubmarinePointData"*/);
    byte_4A5883D = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13601/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckIsOrdealCallWarClear(WarEntity_o *warEntity, const MethodInfo *method)
{
  int32_t parentWarId; // w19
  BalanceConfig_c *v4; // x0

  if ( (byte_4A58878 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A58878 = 1;
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  System_Action_object__o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  ServantStatusBattleListViewItem_c *v22; // x19
  TerminalPramsManager_c *v23; // x0
  ServantStatusBattleListViewItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  const MethodInfo *v25; // x0
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A58856 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_string__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1B885B0(&ScrTerminalListTop_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_TerminalPramsManager___c__DisplayClass657_0__CheckResumeEffectNT2_b__0__);
    sub_1B885B0(&TerminalPramsManager___c__DisplayClass657_0_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_89/*"\r\n"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A58856 = 1;
  }
  v26 = 0;
  v1 = sub_1B887FC(TerminalPramsManager___c__DisplayClass657_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v1, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588DF )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588DF = 1;
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
        v26 = v9->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
        v11 = (Il2CppObject *)System_Int32__ToString((int32_t)&v26, 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A588DF )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A588DF = 1;
        }
        v12 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v12 = TerminalPramsManager_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v12->static_fields->_PlayedTerminalEffects_k__BackingField;
        if ( !PlayedTerminalEffects_k__BackingField
          || (PlayedTerminalEffects_k__BackingField = System_String__Replace_61726660(
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
                                                                            (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL)
          || (v15 = (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
              PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Collections_Generic_List_object___Remove(
                                                                           (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
                                                                           v11,
                                                                           (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_string__Remove__),
              !v1) )
        {
          sub_1B8880C(PlayedTerminalEffects_k__BackingField, v10);
        }
        v18 = (int)StringLiteral_1/*""*/;
        *(_QWORD *)(v1 + 16) = StringLiteral_1/*""*/;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v1 + 16), v18, v16, v17);
        v19 = (System_Action_object__o *)sub_1B887FC(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v19,
          (Il2CppObject *)v1,
          Method_TerminalPramsManager___c__DisplayClass657_0__CheckResumeEffectNT2_b__0__,
          0LL);
        System_Collections_Generic_List_object___ForEach(
          v15,
          (System_Action_T__o *)v19,
          (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_string__ForEach__);
        v22 = *(ServantStatusBattleListViewItem_c **)(v1 + 16);
        if ( !byte_4A588D0 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A588D0 = 1;
        }
        v23 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v23 = TerminalPramsManager_TypeInfo;
        }
        p_PlayedTerminalEffects_k__BackingField = (ServantStatusBattleListViewItem_o *)&v23->static_fields->_PlayedTerminalEffects_k__BackingField;
        p_PlayedTerminalEffects_k__BackingField->klass = v22;
        sub_1B88554(p_PlayedTerminalEffects_k__BackingField, (int32_t)v22, v20, v21);
        TerminalPramsManager__Save_SaveData(v25);
      }
    }
  }
}


void __fastcall TerminalPramsManager__ClearEventQuestIds_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A5884A & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11427/*"SAVEKEY_ClearEventQuestIds"*/);
    byte_4A5884A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC2 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11427/*"SAVEKEY_ClearEventQuestIds"*/,
    v1->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__ConnectMark_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A58849 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11429/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1B885B0(&StringLiteral_11428/*"SAVEKEY_ConnectMarkAnimationId"*/);
    byte_4A58849 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11429/*"SAVEKEY_ConnectMarkEventId"*/, v1->static_fields->ConnectMarkEventId, 0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11428/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__DeleteClearDatas(const MethodInfo *method)
{
  TerminalPramsManager_ClearData_c *v1; // x0
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v4; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t v6; // w1

  if ( (byte_4A5886E & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5886E = 1;
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
  if ( !byte_4A588F5 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588F5 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  static_fields->_isQuestRewardSetted_k__BackingField = 0;
  v6 = (int)StringLiteral_1/*""*/;
  static_fields->lastPlayBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->lastPlayBgmName, v6, v2, v3);
}


void __fastcall TerminalPramsManager__DeleteContinueData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_4A5882E & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11432/*"SAVEKEY_LastPlayBgmName"*/);
    sub_1B885B0(&StringLiteral_13603/*"TerminalEndTime"*/);
    sub_1B885B0(&StringLiteral_5218/*"Debug_IsOriginalGuestNPC"*/);
    sub_1B885B0(&StringLiteral_11438/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_1B885B0(&StringLiteral_13599/*"TerminalBeforeEventActivityPoint"*/);
    sub_1B885B0(&StringLiteral_11426/*"SAVEKEY_CampaignDirectBonus"*/);
    sub_1B885B0(&StringLiteral_11433/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    sub_1B885B0(&StringLiteral_13604/*"TerminalEventDailyPointEventId"*/);
    sub_1B885B0(&StringLiteral_5214/*"Debug_GuestNPCInfoList"*/);
    sub_1B885B0(&StringLiteral_13601/*"TerminalBeforeEventSubmarinePointData"*/);
    sub_1B885B0(&StringLiteral_13610/*"TerminalPhaseCnt"*/);
    sub_1B885B0(&StringLiteral_11442/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_1B885B0(&StringLiteral_13618/*"TerminalTimeStatusEventId"*/);
    sub_1B885B0(&StringLiteral_13602/*"TerminalDispState"*/);
    sub_1B885B0(&StringLiteral_11435/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_1B885B0(&StringLiteral_13605/*"TerminalIsDoneShortcut"*/);
    sub_1B885B0(&StringLiteral_11434/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1B885B0(&StringLiteral_11439/*"SAVEKEY_PlayerGenderType"*/);
    sub_1B885B0(&StringLiteral_11443/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    sub_1B885B0(&StringLiteral_11427/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_1B885B0(&StringLiteral_11436/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_1B885B0(&StringLiteral_5219/*"Debug_IsQuestReleaseAll"*/);
    sub_1B885B0(&StringLiteral_5216/*"Debug_IsDummyErrorSelect"*/);
    sub_1B885B0(&StringLiteral_13613/*"TerminalQuestId"*/);
    sub_1B885B0(&StringLiteral_11441/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    sub_1B885B0(&StringLiteral_11446/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_1B885B0(&StringLiteral_13617/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_1B885B0(&StringLiteral_13622/*"TerminalWarId"*/);
    sub_1B885B0(&StringLiteral_13615/*"TerminalSpotId"*/);
    sub_1B885B0(&StringLiteral_13619/*"TerminalTimeStatusLoopCount"*/);
    sub_1B885B0(&StringLiteral_13600/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_1B885B0(&StringLiteral_11425/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_1B885B0(&StringLiteral_11430/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_1B885B0(&StringLiteral_5217/*"Debug_IsOriginalBattle"*/);
    sub_1B885B0(&StringLiteral_13623/*"TerminalWarStartedIds"*/);
    sub_1B885B0(&StringLiteral_5213/*"Debug_BattleEnemyList"*/);
    sub_1B885B0(&StringLiteral_11429/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1B885B0(&StringLiteral_13621/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_1B885B0(&StringLiteral_11428/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_1B885B0(&StringLiteral_11437/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_1B885B0(&StringLiteral_13608/*"TerminalLastPlayedQuestId"*/);
    sub_1B885B0(&StringLiteral_5215/*"Debug_IsBuildInfoDisp"*/);
    sub_1B885B0(&StringLiteral_13620/*"TerminalTransitionInfoMissionId"*/);
    sub_1B885B0(&StringLiteral_11445/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4A5882E = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13602/*"TerminalDispState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13622/*"TerminalWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13615/*"TerminalSpotId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13613/*"TerminalQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13608/*"TerminalLastPlayedQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13610/*"TerminalPhaseCnt"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13603/*"TerminalEndTime"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13605/*"TerminalIsDoneShortcut"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13623/*"TerminalWarStartedIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5219/*"Debug_IsQuestReleaseAll"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5216/*"Debug_IsDummyErrorSelect"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5215/*"Debug_IsBuildInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5217/*"Debug_IsOriginalBattle"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5218/*"Debug_IsOriginalGuestNPC"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5213/*"Debug_BattleEnemyList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5214/*"Debug_GuestNPCInfoList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13618/*"TerminalTimeStatusEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13619/*"TerminalTimeStatusLoopCount"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13604/*"TerminalEventDailyPointEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13617/*"TerminalTimeStatusEventDailyPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13620/*"TerminalTransitionInfoMissionId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13621/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13599/*"TerminalBeforeEventActivityPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13600/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13601/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11442/*"SAVEKEY_TerminalConquestInfos"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11441/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11443/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11432/*"SAVEKEY_LastPlayBgmName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11433/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11438/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11435/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11436/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11437/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11446/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11429/*"SAVEKEY_ConnectMarkEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11428/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11445/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11427/*"SAVEKEY_ClearEventQuestIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11434/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11430/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11439/*"SAVEKEY_PlayerGenderType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11426/*"SAVEKEY_CampaignDirectBonus"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11425/*"SAVEKEY_BlankEarthSpotId"*/, 0LL);
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
  int32_t v1; // w2
  int32_t v2; // w3
  TerminalPramsManager_c *v3; // x0
  ServantStatusBattleListViewItem_o *p_EventRaidDefeatedEffectInfo_k__BackingField; // x0

  if ( (byte_4A5886F & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11431/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_4A5886F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588F6 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588F6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  p_EventRaidDefeatedEffectInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v3->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  p_EventRaidDefeatedEffectInfo_k__BackingField->klass = 0LL;
  sub_1B88554(p_EventRaidDefeatedEffectInfo_k__BackingField, 0, v1, v2);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11431/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, 0LL);
}


void __fastcall TerminalPramsManager__DeleteQuestRandomGroupList(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  TerminalPramsManager_c *v3; // x0
  ServantStatusBattleListViewItem_o *p_QuestRandomGroupList_k__BackingField; // x0

  if ( (byte_4A58874 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11440/*"SAVEKEY_QuestRandomGroupList"*/);
    byte_4A58874 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588F8 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588F8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  p_QuestRandomGroupList_k__BackingField = (ServantStatusBattleListViewItem_o *)&v3->static_fields->_QuestRandomGroupList_k__BackingField;
  p_QuestRandomGroupList_k__BackingField->klass = 0LL;
  sub_1B88554(p_QuestRandomGroupList_k__BackingField, 0, v1, v2);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11440/*"SAVEKEY_QuestRandomGroupList"*/, 0LL);
}


void __fastcall TerminalPramsManager__EventDailyPointSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  System_String_o *v3; // x0
  int64_t BeforeTimeEventDailyPoint_k__BackingField; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A58837 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13604/*"TerminalEventDailyPointEventId"*/);
    sub_1B885B0(&StringLiteral_13617/*"TerminalTimeStatusEventDailyPoint"*/);
    byte_4A58837 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588DB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588DB = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13604/*"TerminalEventDailyPointEventId"*/,
    v1->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4A588DC )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588DC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  BeforeTimeEventDailyPoint_k__BackingField = v2->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v3 = System_Int64__ToString((int64_t)&BeforeTimeEventDailyPoint_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13617/*"TerminalTimeStatusEventDailyPoint"*/, v3, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__EventStatusSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4A58836 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13618/*"TerminalTimeStatusEventId"*/);
    sub_1B885B0(&StringLiteral_13619/*"TerminalTimeStatusLoopCount"*/);
    byte_4A58836 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5853C )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5853C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13618/*"TerminalTimeStatusEventId"*/,
    v1->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_4A5853D )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5853D = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13619/*"TerminalTimeStatusLoopCount"*/,
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

  if ( (byte_4A5887A & 1) == 0 )
  {
    sub_1B885B0(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    byte_4A5887A = 1;
  }
  v1 = sub_1B887FC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v1, 0LL);
  if ( !v1 )
    sub_1B8880C(v2, v3);
  *(_QWORD *)(v1 + 16) = 0x5300000000LL;
  AvailableTutorialArray = (System_Collections_ICollection_o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                                 (EventTutorialMaster_EventTutorialArgs_o *)v1,
                                                                 0LL);
  return !BasicHelper__IsNullOrEmpty(AvailableTutorialArray, 0LL);
}


float __fastcall TerminalPramsManager__GetAutoIntpTime(const MethodInfo *method)
{
  int32_t targetFrameRate; // w0

  if ( (byte_4A58829 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    byte_4A58829 = 1;
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

  if ( (byte_4A5885B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5885B = 1;
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
      sub_1B8880C(v5, v6);
  }
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         folderLastIdxs,
         warId,
         &value,
         (const MethodInfo_3166520 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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

  if ( (byte_4A5882A & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5882A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DCC )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DCC = 1;
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
  if ( !byte_4A58376 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58376 = 1;
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

  if ( (byte_4A58861 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58861 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v3);
  if ( !QuestFocusStateManager )
    sub_1B8880C(0LL, v5);
  return QuestFocusStateManager__GetFocusState(QuestFocusStateManager, questId, 0LL);
}


void __fastcall TerminalPramsManager__InitLoad(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A58830 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58830 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__InitParameter((const MethodInfo *)v1);
}


void __fastcall TerminalPramsManager__InitMessageWindowData(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  TerminalPramsManager_c *v3; // x0
  struct System_String_o *v4; // x20
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  TerminalPramsManager_c *v8; // x0
  struct TerminalPramsManager_StaticFields *v9; // x0

  if ( (byte_4A58859 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A58859 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5717A )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5717A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispOnly_k__BackingField = 0;
  v4 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4A58360 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A58360 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = v4;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_QuestWindowMessage_k__BackingField,
    (int32_t)v4,
    v1,
    v2);
  if ( !byte_4A5835F )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5835F = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_MessageDispType_k__BackingField = 0;
  if ( !byte_4A57179 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4A57179 = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v9 = v8->static_fields;
  v9->_BattleSetupKeep_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->_BattleSetupKeep_k__BackingField, 0, v6, v7);
}


void __fastcall TerminalPramsManager__InitParameter(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  TerminalPramsManager_c *v7; // x0
  struct TerminalPramsManager_StaticFields *v8; // x0
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  TerminalPramsManager_c *v12; // x0
  ServantStatusBattleListViewItem_o *p_timeStatusRecord_k__BackingField; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  TerminalPramsManager_c *v16; // x0
  ServantStatusBattleListViewItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  int32_t v18; // w1
  ServantStatusBattleListViewItem_o *p_lastPlayBgmName; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  TerminalPramsManager_c *v24; // x0
  struct TerminalPramsManager_StaticFields *v25; // x0
  TerminalPramsManager_c *v26; // x0
  const MethodInfo *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  TerminalPramsManager_c *v30; // x0
  ServantStatusBattleListViewItem_c *v31; // x20
  ServantStatusBattleListViewItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  TerminalPramsManager_c *v35; // x0
  struct TerminalPramsManager_StaticFields *v36; // x8
  ServantStatusBattleListViewItem_c *v37; // x20
  ServantStatusBattleListViewItem_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  TerminalPramsManager_c *v41; // x0
  struct TerminalPramsManager_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  TerminalPramsManager_c *v45; // x0
  struct TerminalPramsManager_StaticFields *v46; // x0
  TerminalPramsManager_c *v47; // x0

  if ( (byte_4A5882F & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5882F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DCA )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DCA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4A57DC9 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A57DC9 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SpotId_k__BackingField = 0;
  if ( !byte_4A57DC4 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A57DC4 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestId_k__BackingField = 0;
  if ( !byte_4A58393 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A58393 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayedQuestId_k__BackingField = 0;
  if ( !byte_4A588C6 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A588C6 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
  if ( !byte_4A58394 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A58394 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = 0;
  if ( !byte_4A58086 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A58086 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_AfterActionFocusQuestId_k__BackingField = 0;
  if ( !byte_4A5818A )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A5818A = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
  if ( !byte_4A56DA1 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A56DA1 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  if ( !byte_4A5818B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A5818B = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
  if ( !byte_4A5838C )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A5838C = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 0;
  if ( !byte_4A5838A )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A5838A = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
  if ( !byte_4A579F6 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A579F6 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField, 0, v1, v2);
  if ( !byte_4A57DC8 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC8 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_PhaseCnt_k__BackingField = 0;
  if ( !byte_4A57DC5 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4A57DC5 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_EndTime_k__BackingField = 0LL;
  if ( !byte_4A57DC7 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4A57DC7 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v8 = v7->static_fields;
  v8->_IsDoneShortcut_k__BackingField = 0;
  v9 = (int)StringLiteral_1/*""*/;
  v8->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->mTerminalWarStartedIds, v9, v5, v6);
  if ( !byte_4A588C7 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588C7 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->mDebug_IsQuestReleaseAll = 0;
  if ( !byte_4A588C8 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4A588C8 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->mDebug_IsDummyErrorSelect = 0;
  if ( !byte_4A588C9 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4A588C9 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->mDebug_IsBuildInfoDisp = 0;
  if ( !byte_4A5838F )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4A5838F = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_TimeStatusEventId_k__BackingField = 0;
  if ( !byte_4A58390 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4A58390 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_TimeStatusLoopCount_k__BackingField = 0;
  if ( !byte_4A588CA )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4A588CA = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  p_timeStatusRecord_k__BackingField = (ServantStatusBattleListViewItem_o *)&v12->static_fields->_timeStatusRecord_k__BackingField;
  p_timeStatusRecord_k__BackingField->klass = 0LL;
  sub_1B88554(p_timeStatusRecord_k__BackingField, 0, v10, v11);
  if ( !byte_4A588CB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588CB = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_EventDailyPointEventId_k__BackingField = 0;
  if ( !byte_4A588CC )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4A588CC = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = 0LL;
  if ( !byte_4A588CD )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4A588CD = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
  if ( !byte_4A588CE )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4A588CE = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
  if ( !byte_4A57F0B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4A57F0B = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  p_BeforeEventSubmarineSaveData_k__BackingField = (ServantStatusBattleListViewItem_o *)&v16->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  p_BeforeEventSubmarineSaveData_k__BackingField->klass = 0LL;
  sub_1B88554(p_BeforeEventSubmarineSaveData_k__BackingField, 0, v14, v15);
  v18 = (int)StringLiteral_1/*""*/;
  p_lastPlayBgmName = (ServantStatusBattleListViewItem_o *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayBgmName;
  p_lastPlayBgmName->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  sub_1B88554(p_lastPlayBgmName, v18, v20, v21);
  v24 = TerminalPramsManager_TypeInfo;
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayQuestConsumeAp = 0LL;
  if ( !byte_4A588CF )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
    byte_4A588CF = 1;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v25 = v24->static_fields;
  v25->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v25->_SpecifiedChangeSceneInfo_k__BackingField, 0, v22, v23);
  if ( !byte_4A5854C )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5854C = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_EventBoardGameSquareIndex_k__BackingField = 0;
  if ( !byte_4A5854E )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
    byte_4A5854E = 1;
  }
  if ( !v26->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v26);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = 0;
  if ( !byte_4A58550 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
    byte_4A58550 = 1;
  }
  if ( !v26->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v26);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
  if ( !byte_4A588C3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
    byte_4A588C3 = 1;
  }
  if ( !v26->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v26);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v26);
  TerminalPramsManager__ResetResumeScriptWithMap(v27);
  if ( !byte_4A5837D )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5837D = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  v30->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
  v31 = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  if ( !byte_4A588D0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
    byte_4A588D0 = 1;
  }
  if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30);
    v30 = TerminalPramsManager_TypeInfo;
  }
  p_PlayedTerminalEffects_k__BackingField = (ServantStatusBattleListViewItem_o *)&v30->static_fields->_PlayedTerminalEffects_k__BackingField;
  p_PlayedTerminalEffects_k__BackingField->klass = v31;
  sub_1B88554(p_PlayedTerminalEffects_k__BackingField, (int32_t)v31, v28, v29);
  if ( !byte_4A58615 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58615 = 1;
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = 0;
  if ( !byte_4A58616 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4A58616 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = 0;
  if ( !byte_4A5853F )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4A5853F = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v36 = v35->static_fields;
  v36->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  *(_QWORD *)&v36->ConnectMarkEventId = 0LL;
  if ( !byte_4A5629F )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4A5629F = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField = 0;
  if ( !byte_4A588D1 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4A588D1 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_isFortificationCheck_k__BackingField = 0;
  if ( !byte_4A588D2 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4A588D2 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !byte_4A588D3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4A588D3 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !byte_4A58546 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4A58546 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4A58383 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4A58383 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_4A58544 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4A58544 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_4A58545 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4A58545 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_4A58543 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4A58543 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_4A58546 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4A58546 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4A58539 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4A58539 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 0.0;
  if ( !byte_4A588D4 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4A588D4 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  if ( !byte_4A58188 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4A58188 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_4A568C8 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4A568C8 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_PlayerGenderType_k__BackingField = 0;
  if ( !byte_4A588D5 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4A588D5 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  v37 = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  if ( !byte_4A5854A )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4A5854A = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  p_SceneMoveQuestClearedInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v35->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
  p_SceneMoveQuestClearedInfo_k__BackingField->klass = v37;
  sub_1B88554(p_SceneMoveQuestClearedInfo_k__BackingField, (int32_t)v37, v33, v34);
  if ( !byte_4A588D6 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588D6 = 1;
  }
  v41 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v41 = TerminalPramsManager_TypeInfo;
  }
  v42 = v41->static_fields;
  v42->_CampaignBonus_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v42->_CampaignBonus_k__BackingField, 0, v39, v40);
  if ( !byte_4A588D7 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588D7 = 1;
  }
  v45 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v46 = v45->static_fields;
  v46->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v46->_CampaignDirectBonus_k__BackingField, 0, v43, v44);
  if ( !byte_4A588D8 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588D8 = 1;
  }
  v47 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v47 = TerminalPramsManager_TypeInfo;
  }
  v47->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
}


void __fastcall TerminalPramsManager__InitTipsArchiveScrollValueList(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  unsigned __int64 i; // x20
  struct System_Single_array *TipsArchiveScrollValueList; // x8
  struct System_Single_array *v5; // x8
  char *v6; // x8

  if ( (byte_4A5887B & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5887B = 1;
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
      sub_1B8880C(v2, v1);
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
      sub_1B88814(v2, v1);
    v6 = (char *)v5 + 4 * i;
    *((_DWORD *)v6 + 8) = 0;
  }
}


bool __fastcall TerminalPramsManager__IsAuto(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A5881D & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5881D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DCC )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DCC = 1;
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
  if ( !byte_4A588C0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588C0 = 1;
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

  if ( (byte_4A5881F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5881F = 1;
  }
  entity = 0LL;
  v8 = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DCC )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DCC = 1;
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
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( v2->static_fields->_WarId_k__BackingField < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
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
          (const MethodInfo_311D988 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !entity)
    || !Instance )
  {
LABEL_34:
    sub_1B8880C(Instance, v4);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v8,
          (int32_t)entity[6].klass,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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

  if ( (byte_4A58879 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_int___ctor__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4A58879 = 1;
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v6);
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, targetWarId, 0LL);
    if ( WarInfoByWarID )
    {
      WarInfoByWarID = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)WarInfoByWarID, 0LL);
      if ( WarInfoByWarID )
      {
        v7 = *((_DWORD *)WarInfoByWarID + 31);
        v10 = (System_Nullable_int__o)&v9;
        v9 = 0LL;
        System_Nullable_int____ctor(v10, v7, (const MethodInfo_361A2C0 *)Method_System_Nullable_int___ctor__);
        LOBYTE(WarInfoByWarID) = HIDWORD(v9) != 0;
      }
    }
  }
  return (char)WarInfoByWarID;
}


void __fastcall TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A5884C & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11430/*"SAVEKEY_DataLostBattleAutoReset"*/);
    byte_4A5884C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58542 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58542 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11430/*"SAVEKEY_DataLostBattleAutoReset"*/,
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

  if ( (byte_4A58877 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    byte_4A58877 = 1;
  }
  v9 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestMaster___);
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
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !entity
    || (v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
        Master_object = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0LL),
        !v5) )
  {
LABEL_20:
    sub_1B8880C(Master_object, v4);
  }
  Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v5,
                                     &v9,
                                     (int32_t)Master_object,
                                     (const MethodInfo_311D988 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
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

  if ( (byte_4A58869 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A58869 = 1;
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
            (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___);
        if ( Instance )
        {
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       &entity,
                                       warId,
                                       (const MethodInfo_311D988 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( entity )
            return LODWORD(entity[6].klass) == 0;
        }
      }
      sub_1B8880C(Instance, v7);
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

  if ( (byte_4A5886A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1B885B0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5886A = 1;
  }
  v9 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SpotMaster___),
        !entity)
    || (v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (Il2CppObject *)QuestEntity__getSpotId(entity, 0LL),
        !v5) )
  {
LABEL_16:
    sub_1B8880C(Instance, v4);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               v5,
                               &v9,
                               (int32_t)Instance,
                               (const MethodInfo_311D988 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
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

  if ( (byte_4A58868 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58868 = 1;
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
         (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___) )
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

  if ( (byte_4A5885C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5885C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v3->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1B8880C(0LL, method);
  return System_Collections_Generic_HashSet_int___Contains(
           loginQuestNotifiedList,
           questId,
           (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A58845 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11436/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    byte_4A58845 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58381 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58381 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11436/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v1->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A58844 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11435/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    byte_4A58844 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58380 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58380 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11435/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v1->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectNt2AfterAction_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A58846 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11437/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    byte_4A58846 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5853E )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5853E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11437/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
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

  if ( (byte_4A58873 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58873 = 1;
  }
  value = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588F7 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588F7 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  }
  v6 = *(_QWORD *)&v5[2].fields._entries->m_Items[17].fields.hashCode;
  if ( !v6 || (v5 = *(System_Collections_Generic_Dictionary_int__object__o **)(v6 + 16)) == 0LL )
    sub_1B8880C(v5, *(_QWORD *)&day);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         v5,
         eventId,
         &value,
         (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v7 = (char)value;
    if ( value )
      v7 = System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             day,
             (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
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

  if ( (byte_4A58855 & 1) == 0 )
  {
    sub_1B885B0(&ScrTerminalListTop_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58855 = 1;
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v7 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v7 )
LABEL_34:
    sub_1B8880C(Instance, v5);
  if ( !clsQuestCheck__IsWarClear(
          v7,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
          0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC0 = 1;
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
      if ( !byte_4A57DCB )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DCB = 1;
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
  if ( (byte_4A58853 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_89/*"\r\n"*/);
    byte_4A58853 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588DF )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588DF = 1;
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
  if ( !byte_4A588DF )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588DF = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  PlayedTerminalEffects_k__BackingField = v5->static_fields->_PlayedTerminalEffects_k__BackingField;
  if ( !PlayedTerminalEffects_k__BackingField
    || (PlayedTerminalEffects_k__BackingField = System_String__Replace_61726660(
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
    sub_1B8880C(PlayedTerminalEffects_k__BackingField, v3);
  }
  klass = PlayedTerminalEffects_k__BackingField[1].klass;
  v8 = PlayedTerminalEffects_k__BackingField;
  if ( (int)klass >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)klass )
        sub_1B88814(PlayedTerminalEffects_k__BackingField, v3);
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
  if ( (byte_4A58857 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_89/*"\r\n"*/);
    byte_4A58857 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  mTerminalWarStartedIds = v2->static_fields->mTerminalWarStartedIds;
  if ( !mTerminalWarStartedIds
    || (mTerminalWarStartedIds = System_String__Replace_61726660(
                                   mTerminalWarStartedIds,
                                   (System_String_o *)StringLiteral_89/*"\r\n"*/,
                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                   0LL)) == 0LL
    || (mTerminalWarStartedIds = (System_String_o *)System_String__Split(mTerminalWarStartedIds, 0xAu, 0, 0LL)) == 0LL )
  {
    sub_1B8880C(mTerminalWarStartedIds, method);
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
        sub_1B88814(mTerminalWarStartedIds, method);
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

  if ( (byte_4A58843 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13606/*"TerminalLastPanelEventPoint"*/);
    byte_4A58843 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13606/*"TerminalLastPanelEventPoint"*/, v1->static_fields->panelEventPoint, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayBgmNameSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A58841 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11432/*"SAVEKEY_LastPlayBgmName"*/);
    byte_4A58841 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11432/*"SAVEKEY_LastPlayBgmName"*/, v1->static_fields->lastPlayBgmName, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A58842 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11433/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    byte_4A58842 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11433/*"SAVEKEY_LastPlayQuestConsumeType"*/,
    v1->static_fields->lastPlayQuestConsumeAp,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LoadClearDatas(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_ClearData_c *v2; // x0
  TerminalPramsManager_ClearData_c *v3; // x0
  Il2CppObject *String_69417656; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  Il2CppObject *v7; // x19
  TerminalPramsManager_c *v8; // x0
  ServantStatusBattleListViewItem_o *p_mQuestClearHeroineInfo; // x0
  __int64 v10; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppClass *klass; // x8
  const char *name; // x9
  int32_t v16; // w2
  int32_t v17; // w3
  QuestClearHeroineInfo_o *Load; // x20
  TerminalPramsManager_c *v19; // x0
  ServantStatusBattleListViewItem_o *v20; // x0
  TerminalPramsManager_c *v21; // x0
  char monitor; // w20
  TerminalPramsManager_c *v23; // x8
  char v24; // w21
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  _QWORD *v26; // x10
  struct QuestRewardInfo_array *v27; // x20
  __int64 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  Il2CppClass *v32; // x8
  TerminalPramsManager_c *v33; // x0
  Il2CppClass *v34; // x20
  ServantStatusBattleListViewItem_o *p_mQuestPhaseRewardInfos; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  TerminalPramsManager_c *v40; // x8
  struct TerminalPramsManager_StaticFields *v41; // x9
  _QWORD *v42; // x9
  struct UserSuperBossEntity_array *v43; // x20
  TerminalPramsManager_c *v44; // x0
  struct TerminalPramsManager_StaticFields *v45; // x0
  __int64 v46; // x0
  __int64 v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppClass *v50; // x8
  Il2CppClass *v51; // x20
  TerminalPramsManager_c *v52; // x0
  struct TerminalPramsManager_StaticFields *v53; // x0
  __int64 v54; // x0
  __int64 v55; // x1
  int32_t v56; // w2
  int32_t v57; // w3
  int *v58; // x8
  ServantStatusBattleListViewItem_c *v59; // x20
  TerminalPramsManager_c *v60; // x0
  ServantStatusBattleListViewItem_o *p_eventPointWinReward_k__BackingField; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  int32_t v64; // w2
  int32_t v65; // w3
  int32_t v66; // w20
  TerminalPramsManager_c *v67; // x8
  int *v68; // x9
  ServantStatusBattleListViewItem_c *v69; // x20
  TerminalPramsManager_c *v70; // x0
  ServantStatusBattleListViewItem_o *p_eventRaceBoost_k__BackingField; // x0
  __int64 v72; // x0
  __int64 v73; // x1
  int32_t v74; // w2
  int32_t v75; // w3
  Il2CppClass *v76; // x8
  Il2CppClass *v77; // x20
  TerminalPramsManager_c *v78; // x0
  ServantStatusBattleListViewItem_o *p_questClearCostumeRelease_k__BackingField; // x0
  __int64 v80; // x0
  __int64 v81; // x1
  int32_t v82; // w2
  int32_t v83; // w3
  _QWORD *v84; // x8
  ServantStatusBattleListViewItem_c *v85; // x20
  TerminalPramsManager_c *v86; // x0
  ServantStatusBattleListViewItem_o *p_questClearCostumeGet_k__BackingField; // x0
  __int64 v88; // x0
  __int64 v89; // x1
  int32_t v90; // w2
  int32_t v91; // w3
  Il2CppClass *v92; // x8
  Il2CppClass *v93; // x20
  TerminalPramsManager_c *v94; // x0
  ServantStatusBattleListViewItem_o *p_eventTowerReward_k__BackingField; // x0
  __int64 v96; // x0
  __int64 v97; // x1
  int32_t v98; // w2
  int32_t v99; // w3
  _QWORD *v100; // x8
  __int64 v101; // x9
  __int64 v102; // x9
  ServantStatusBattleListViewItem_c *v103; // x20
  TerminalPramsManager_c *v104; // x0
  ServantStatusBattleListViewItem_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  __int64 v106; // x0
  __int64 v107; // x1
  int32_t v108; // w2
  int32_t v109; // w3
  Il2CppClass *v110; // x8
  Il2CppClass *v111; // x20
  TerminalPramsManager_c *v112; // x0
  ServantStatusBattleListViewItem_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  __int64 v114; // x0
  __int64 v115; // x1
  int32_t v116; // w2
  int32_t v117; // w3
  _QWORD *v118; // x8
  ServantStatusBattleListViewItem_c *v119; // x20
  TerminalPramsManager_c *v120; // x0
  ServantStatusBattleListViewItem_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  __int64 v122; // x0
  __int64 v123; // x1
  int32_t v124; // w2
  int32_t v125; // w3
  char v126; // w20
  TerminalPramsManager_c *v127; // x8
  _QWORD *v128; // x9
  ServantStatusBattleListViewItem_c *v129; // x20
  TerminalPramsManager_c *v130; // x0
  ServantStatusBattleListViewItem_o *p_warClearReward_k__BackingField; // x0
  __int64 v132; // x0
  __int64 v133; // x1
  int32_t v134; // w2
  int32_t v135; // w3
  int32_t v136; // w20
  TerminalPramsManager_c *v137; // x8
  char v138; // w21
  struct TerminalPramsManager_StaticFields *v139; // x9
  _QWORD *v140; // x10
  struct BattleDropItem_array *v141; // x20
  __int64 v142; // x0
  __int64 v143; // x1
  int32_t v144; // w2
  int32_t v145; // w3
  Il2CppClass *v146; // x8
  TerminalPramsManager_c *v147; // x0
  Il2CppClass *v148; // x20
  ServantStatusBattleListViewItem_o *p_mResultEventPanelRewardInfos; // x0
  int32_t v150; // w2
  int32_t v151; // w3
  TerminalPramsManager_c *v152; // x0
  Il2CppClass *v153; // x20
  ServantStatusBattleListViewItem_o *p_limitImageAnnounces_k__BackingField; // x0
  int32_t v155; // w2
  int32_t v156; // w3
  char v157; // w20
  TerminalPramsManager_c *v158; // x0
  int32_t monitor_high; // w21
  char v160; // w21
  ServantStatusBattleListViewItem_c *v161; // x20
  ServantStatusBattleListViewItem_o *p_OldUserEventPoint_k__BackingField; // x0
  TerminalPramsManager_c *v163; // x0
  TerminalPramsManager_c *v164; // x8
  TerminalPramsManager_c *v165; // x0

  if ( (byte_4A5886D & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1B885B0(&Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5886D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58373 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58373 = 1;
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
      String_69417656 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69417656(
                                          v3->static_fields->SAVEKEY_CLEAR_REWARD_DISP,
                                          0LL);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v7 = JsonManager__Deserialize_object_(
             String_69417656,
             (const MethodInfo_2EE5DF0 *)Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
      v8 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v8 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestClearHeroineInfo = (ServantStatusBattleListViewItem_o *)&v8->static_fields->mQuestClearHeroineInfo;
      p_mQuestClearHeroineInfo->klass = 0LL;
      sub_1B88554(p_mQuestClearHeroineInfo, 0, v5, v6);
      if ( !v7 )
        sub_1B8880C(v10, v11);
      klass = v7[1].klass;
      if ( !klass )
        sub_1B8880C(v10, v11);
      name = klass->_1.name;
      if ( name && *((int *)name + 8) >= 1 )
      {
        Load = TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(
                 (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)v7[1].klass,
                 v11);
        v19 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
        }
        v20 = (ServantStatusBattleListViewItem_o *)&v19->static_fields->mQuestClearHeroineInfo;
        v20->klass = (ServantStatusBattleListViewItem_c *)Load;
        sub_1B88554(v20, (int32_t)Load, v16, v17);
      }
      v21 = TerminalPramsManager_TypeInfo;
      monitor = (char)v7[2].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A5807D )
      {
        v21 = (TerminalPramsManager_c *)sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A5807D = 1;
      }
      v23 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v23 = TerminalPramsManager_TypeInfo;
      }
      v23->static_fields->_IsQuestClear_k__BackingField = monitor;
      v24 = BYTE1(v7[2].monitor);
      if ( !byte_4A5807E )
      {
        v21 = (TerminalPramsManager_c *)sub_1B885B0(&TerminalPramsManager_TypeInfo);
        v23 = TerminalPramsManager_TypeInfo;
        byte_4A5807E = 1;
      }
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v23->static_fields;
      static_fields->_IsPhaseClear_k__BackingField = v24;
      v26 = v7[1].monitor;
      if ( !v26 )
        sub_1B8880C(v21, v11);
      if ( v26[3] )
        v27 = (struct QuestRewardInfo_array *)v7[1].monitor;
      else
        v27 = 0LL;
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        static_fields = TerminalPramsManager_TypeInfo->static_fields;
      }
      static_fields->mQuestRewardInfos = v27;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->mQuestRewardInfos, (int32_t)v27, v12, v13);
      v32 = v7[2].klass;
      if ( !v32 )
        sub_1B8880C(v28, v29);
      v33 = TerminalPramsManager_TypeInfo;
      if ( v32->_1.namespaze )
        v34 = v7[2].klass;
      else
        v34 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v33 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestPhaseRewardInfos = (ServantStatusBattleListViewItem_o *)&v33->static_fields->mQuestPhaseRewardInfos;
      p_mQuestPhaseRewardInfos->klass = (ServantStatusBattleListViewItem_c *)v34;
      sub_1B88554(p_mQuestPhaseRewardInfos, (int32_t)v34, v30, v31);
      v40 = TerminalPramsManager_TypeInfo;
      v41 = TerminalPramsManager_TypeInfo->static_fields;
      *(_QWORD *)&v41->clearLastBattleRaidId = *(void **)((char *)&v7[2].monitor + 4);
      v41->joinGroupId = HIDWORD(v7[3].klass);
      v42 = v7[3].monitor;
      if ( !v42 )
        sub_1B8880C(v36, v37);
      if ( v42[3] )
        v43 = (struct UserSuperBossEntity_array *)v7[3].monitor;
      else
        v43 = 0LL;
      if ( !v40->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v40);
      if ( !byte_4A588ED )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588ED = 1;
      }
      v44 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v44 = TerminalPramsManager_TypeInfo;
      }
      v45 = v44->static_fields;
      v45->_oldSuperBoss_k__BackingField = v43;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v45->_oldSuperBoss_k__BackingField, (int32_t)v43, v38, v39);
      v50 = v7[4].klass;
      if ( !v50 )
        sub_1B8880C(v46, v47);
      if ( v50->_1.namespaze )
        v51 = v7[4].klass;
      else
        v51 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A588EE )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588EE = 1;
      }
      v52 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v52 = TerminalPramsManager_TypeInfo;
      }
      v53 = v52->static_fields;
      v53->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v51;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v53->_oldPersonalBoss_k__BackingField, (int32_t)v51, v48, v49);
      v58 = (int *)v7[4].monitor;
      if ( !v58 )
        sub_1B8880C(v54, v55);
      if ( v58[4] <= 0 )
        v59 = 0LL;
      else
        v59 = (ServantStatusBattleListViewItem_c *)v7[4].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A588E7 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588E7 = 1;
      }
      v60 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v60 = TerminalPramsManager_TypeInfo;
      }
      p_eventPointWinReward_k__BackingField = (ServantStatusBattleListViewItem_o *)&v60->static_fields->_eventPointWinReward_k__BackingField;
      p_eventPointWinReward_k__BackingField->klass = v59;
      sub_1B88554(p_eventPointWinReward_k__BackingField, (int32_t)v59, v56, v57);
      v66 = (int32_t)v7[5].klass;
      if ( !byte_4A588E8 )
      {
        v62 = sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588E8 = 1;
      }
      v67 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v67 = TerminalPramsManager_TypeInfo;
      }
      v67->static_fields->_eventPointWinType_k__BackingField = v66;
      v68 = (int *)v7[5].monitor;
      if ( !v68 )
        sub_1B8880C(v62, v63);
      if ( v68[4] <= 0 )
        v69 = 0LL;
      else
        v69 = (ServantStatusBattleListViewItem_c *)v7[5].monitor;
      if ( !v67->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v67);
      if ( !byte_4A5854B )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A5854B = 1;
      }
      v70 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v70 = TerminalPramsManager_TypeInfo;
      }
      p_eventRaceBoost_k__BackingField = (ServantStatusBattleListViewItem_o *)&v70->static_fields->_eventRaceBoost_k__BackingField;
      p_eventRaceBoost_k__BackingField->klass = v69;
      sub_1B88554(p_eventRaceBoost_k__BackingField, (int32_t)v69, v64, v65);
      v76 = v7[6].klass;
      if ( !v76 )
        sub_1B8880C(v72, v73);
      if ( v76->_1.namespaze )
        v77 = v7[6].klass;
      else
        v77 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A58614 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A58614 = 1;
      }
      v78 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v78 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeRelease_k__BackingField = (ServantStatusBattleListViewItem_o *)&v78->static_fields->_questClearCostumeRelease_k__BackingField;
      p_questClearCostumeRelease_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v77;
      sub_1B88554(p_questClearCostumeRelease_k__BackingField, (int32_t)v77, v74, v75);
      v84 = v7[6].monitor;
      if ( !v84 )
        sub_1B8880C(v80, v81);
      if ( v84[3] )
        v85 = (ServantStatusBattleListViewItem_c *)v7[6].monitor;
      else
        v85 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A58370 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A58370 = 1;
      }
      v86 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v86 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeGet_k__BackingField = (ServantStatusBattleListViewItem_o *)&v86->static_fields->_questClearCostumeGet_k__BackingField;
      p_questClearCostumeGet_k__BackingField->klass = v85;
      sub_1B88554(p_questClearCostumeGet_k__BackingField, (int32_t)v85, v82, v83);
      v92 = v7[7].klass;
      if ( !v92 )
        sub_1B8880C(v88, v89);
      if ( SLODWORD(v92->_1.name) <= 0 )
        v93 = 0LL;
      else
        v93 = v7[7].klass;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A588EB )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588EB = 1;
      }
      v94 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v94 = TerminalPramsManager_TypeInfo;
      }
      p_eventTowerReward_k__BackingField = (ServantStatusBattleListViewItem_o *)&v94->static_fields->_eventTowerReward_k__BackingField;
      p_eventTowerReward_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v93;
      sub_1B88554(p_eventTowerReward_k__BackingField, (int32_t)v93, v90, v91);
      v100 = v7[7].monitor;
      if ( !v100 )
        sub_1B8880C(v96, v97);
      v101 = v100[3];
      if ( v101 )
      {
        if ( !(_DWORD)v101 )
          sub_1B88814(v96, v97);
        v102 = v100[4];
        if ( !v102 )
          sub_1B8880C(v96, v97);
        if ( *(__int64 *)(v102 + 32) <= 0 )
          v103 = 0LL;
        else
          v103 = (ServantStatusBattleListViewItem_c *)v7[7].monitor;
      }
      else
      {
        v103 = 0LL;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A588EC )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588EC = 1;
      }
      v104 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v104 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventTowerRewardInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v104->static_fields->_resultEventTowerRewardInfo_k__BackingField;
      p_resultEventTowerRewardInfo_k__BackingField->klass = v103;
      sub_1B88554(p_resultEventTowerRewardInfo_k__BackingField, (int32_t)v103, v98, v99);
      v110 = v7[8].klass;
      if ( !v110 )
        sub_1B8880C(v106, v107);
      if ( v110->_1.namespaze )
        v111 = v7[8].klass;
      else
        v111 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A5836A )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A5836A = 1;
      }
      v112 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v112 = TerminalPramsManager_TypeInfo;
      }
      p_resultBoostItemRewardInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v112->static_fields->_resultBoostItemRewardInfo_k__BackingField;
      p_resultBoostItemRewardInfo_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v111;
      sub_1B88554(p_resultBoostItemRewardInfo_k__BackingField, (int32_t)v111, v108, v109);
      v118 = v7[8].monitor;
      if ( !v118 )
        sub_1B8880C(v114, v115);
      if ( v118[3] )
        v119 = (ServantStatusBattleListViewItem_c *)v7[8].monitor;
      else
        v119 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A5836B )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A5836B = 1;
      }
      v120 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v120 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventBoardGameTokenRewardInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v120->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
      p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = v119;
      sub_1B88554(p_resultEventBoardGameTokenRewardInfo_k__BackingField, (int32_t)v119, v116, v117);
      v126 = (char)v7[9].klass;
      if ( !byte_4A5717A )
      {
        v122 = sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A5717A = 1;
      }
      v127 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v127 = TerminalPramsManager_TypeInfo;
      }
      v127->static_fields->_IsDispOnly_k__BackingField = v126;
      v128 = v7[9].monitor;
      if ( !v128 )
        sub_1B8880C(v122, v123);
      if ( v128[3] )
        v129 = (ServantStatusBattleListViewItem_c *)v7[9].monitor;
      else
        v129 = 0LL;
      if ( !v127->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v127);
      if ( !byte_4A58375 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A58375 = 1;
      }
      v130 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v130 = TerminalPramsManager_TypeInfo;
      }
      p_warClearReward_k__BackingField = (ServantStatusBattleListViewItem_o *)&v130->static_fields->_warClearReward_k__BackingField;
      p_warClearReward_k__BackingField->klass = v129;
      sub_1B88554(p_warClearReward_k__BackingField, (int32_t)v129, v124, v125);
      v136 = (int32_t)v7[10].klass;
      if ( !byte_4A588E5 )
      {
        v132 = sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588E5 = 1;
      }
      v137 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v137 = TerminalPramsManager_TypeInfo;
      }
      v137->static_fields->_EventActivityPointEffectState_k__BackingField = v136;
      v138 = BYTE4(v7[10].klass);
      if ( !byte_4A58372 )
      {
        v132 = sub_1B885B0(&TerminalPramsManager_TypeInfo);
        v137 = TerminalPramsManager_TypeInfo;
        byte_4A58372 = 1;
      }
      if ( !v137->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v137);
        v137 = TerminalPramsManager_TypeInfo;
      }
      v139 = v137->static_fields;
      v139->_IsWarBoardClear_k__BackingField = v138;
      v140 = v7[10].monitor;
      if ( !v140 )
        sub_1B8880C(v132, v133);
      if ( v140[3] )
        v141 = (struct BattleDropItem_array *)v7[10].monitor;
      else
        v141 = 0LL;
      if ( !v137->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v137);
        v139 = TerminalPramsManager_TypeInfo->static_fields;
      }
      v139->mQuestResultAfterEventRewardInfos = v141;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v139->mQuestResultAfterEventRewardInfos,
        (int32_t)v141,
        v134,
        v135);
      v146 = v7[11].klass;
      if ( !v146 )
        sub_1B8880C(v142, v143);
      v147 = TerminalPramsManager_TypeInfo;
      if ( v146->_1.namespaze )
        v148 = v7[11].klass;
      else
        v148 = 0LL;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v147 = TerminalPramsManager_TypeInfo;
      }
      p_mResultEventPanelRewardInfos = (ServantStatusBattleListViewItem_o *)&v147->static_fields->mResultEventPanelRewardInfos;
      p_mResultEventPanelRewardInfos->klass = (ServantStatusBattleListViewItem_c *)v148;
      sub_1B88554(p_mResultEventPanelRewardInfos, (int32_t)v148, v144, v145);
      v152 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = (int32_t)v7[11].monitor;
      v153 = v7[12].klass;
      if ( !byte_4A5836E )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        v152 = TerminalPramsManager_TypeInfo;
        byte_4A5836E = 1;
      }
      if ( !v152->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v152);
        v152 = TerminalPramsManager_TypeInfo;
      }
      p_limitImageAnnounces_k__BackingField = (ServantStatusBattleListViewItem_o *)&v152->static_fields->_limitImageAnnounces_k__BackingField;
      p_limitImageAnnounces_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v153;
      sub_1B88554(p_limitImageAnnounces_k__BackingField, (int32_t)v153, v150, v151);
      v157 = (char)v7[12].monitor;
      if ( !byte_4A58081 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A58081 = 1;
      }
      v158 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->_IsOrdealCallWarClear_k__BackingField = v157;
      monitor_high = HIDWORD(v7[12].monitor);
      if ( !byte_4A58365 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        v158 = TerminalPramsManager_TypeInfo;
        byte_4A58365 = 1;
      }
      if ( !v158->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v158);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->_EventMuralId_k__BackingField = monitor_high;
      v160 = (char)v7[13].klass;
      if ( !byte_4A58367 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        v158 = TerminalPramsManager_TypeInfo;
        byte_4A58367 = 1;
      }
      if ( !v158->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v158);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->_PlayHappinessCounterEffect_k__BackingField = v160;
      v161 = (ServantStatusBattleListViewItem_c *)v7[13].monitor;
      if ( !byte_4A588E4 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        v158 = TerminalPramsManager_TypeInfo;
        byte_4A588E4 = 1;
      }
      if ( !v158->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v158);
        v158 = TerminalPramsManager_TypeInfo;
      }
      p_OldUserEventPoint_k__BackingField = (ServantStatusBattleListViewItem_o *)&v158->static_fields->_OldUserEventPoint_k__BackingField;
      p_OldUserEventPoint_k__BackingField->klass = v161;
      sub_1B88554(p_OldUserEventPoint_k__BackingField, (int32_t)v161, v155, v156);
      v163 = TerminalPramsManager_TypeInfo;
      if ( BYTE1(v7[2].monitor) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A5644B )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A5644B = 1;
        }
        v163 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v163 = TerminalPramsManager_TypeInfo;
        }
        v163->static_fields->_IsAutoResume_k__BackingField = 1;
      }
      if ( !v163->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v163);
      if ( !byte_4A58374 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A58374 = 1;
      }
      v164 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v164 = TerminalPramsManager_TypeInfo;
      }
      if ( v164->static_fields->_warClearReward_k__BackingField )
        goto LABEL_261;
      if ( !v164->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v164);
      if ( !byte_4A58371 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A58371 = 1;
      }
      v164 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v164 = TerminalPramsManager_TypeInfo;
      }
      if ( v164->static_fields->_IsPlayScriptWithMap_k__BackingField )
      {
LABEL_261:
        if ( !v164->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v164);
        if ( !byte_4A588F5 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A588F5 = 1;
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
  TerminalPramsManager_c *v1; // x0
  System_String_o *String; // x20
  EventRaidDefeatedEffectInfo_o *v3; // x19
  const MethodInfo *v4; // x2
  int32_t v5; // w2
  int32_t v6; // w3
  TerminalPramsManager_c *v7; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A58870 & 1) == 0 )
  {
    sub_1B885B0(&EventRaidDefeatedEffectInfo_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11431/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_4A58870 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588F7 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588F7 = 1;
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
               (System_String_o *)StringLiteral_11431/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v3 = (EventRaidDefeatedEffectInfo_o *)sub_1B887FC(EventRaidDefeatedEffectInfo_TypeInfo);
    EventRaidDefeatedEffectInfo___ctor(v3, String, v4);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588F6 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588F6 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v7->static_fields;
    static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = v3;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
      (int32_t)v3,
      v5,
      v6);
  }
}


void __fastcall TerminalPramsManager__LoadQuestRandomGroupList(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  System_String_o *String; // x20
  System_Collections_Generic_Dictionary_int__int__o *v3; // x19
  System_String_array *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  int max_length; // w8
  System_String_array *v9; // x20
  unsigned int v10; // w23
  System_String_array *v11; // x21
  TerminalPramsManager_c *v12; // x0
  ServantStatusBattleListViewItem_o *p_QuestRandomGroupList_k__BackingField; // x0
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A58875 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11440/*"SAVEKEY_QuestRandomGroupList"*/);
    byte_4A58875 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DBF )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DBF = 1;
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
               (System_String_o *)StringLiteral_11440/*"SAVEKEY_QuestRandomGroupList"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v3,
      (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *(_QWORD *)result = 0LL;
    if ( !String )
      goto LABEL_35;
    v4 = System_String__Split(String, 0x2Cu, 0, 0LL);
    if ( !v4 )
      goto LABEL_35;
    max_length = v4->max_length;
    v9 = v4;
    if ( max_length >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= max_length )
LABEL_36:
          sub_1B88814(v4, v5);
        v4 = (System_String_array *)v9->m_Items[v10];
        if ( !v4 )
          break;
        v4 = System_String__Split((System_String_o *)v4, 0x3Au, 0, 0LL);
        if ( !v4 )
          break;
        v11 = v4;
        if ( (int)v4->max_length >= 2 )
        {
          v4 = (System_String_array *)System_Int32__TryParse(v4->m_Items[0], &result[1], 0LL);
          if ( result[1] >= 1 && ((unsigned __int8)v4 & 1) != 0 )
          {
            if ( v11->max_length <= 1 )
              goto LABEL_36;
            v4 = (System_String_array *)System_Int32__TryParse(v11->m_Items[1], result, 0LL);
            v6 = result[0];
            if ( result[0] >= 1 && ((unsigned __int8)v4 & 1) != 0 )
            {
              if ( !v3 )
                break;
              System_Collections_Generic_Dictionary_int__int___Add(
                v3,
                result[1],
                result[0],
                (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
        }
        max_length = v9->max_length;
        if ( (int)++v10 >= max_length )
          goto LABEL_27;
      }
LABEL_35:
      sub_1B8880C(v4, v5);
    }
LABEL_27:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588F8 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588F8 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    p_QuestRandomGroupList_k__BackingField = (ServantStatusBattleListViewItem_o *)&v12->static_fields->_QuestRandomGroupList_k__BackingField;
    p_QuestRandomGroupList_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v3;
    sub_1B88554(p_QuestRandomGroupList_k__BackingField, (int32_t)v3, v6, v7);
  }
}


void __fastcall TerminalPramsManager__LoadQuestReleasedFocusState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v3; // x1
  const MethodInfo *v4; // x0

  if ( (byte_4A5885E & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5885E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v1);
  if ( !QuestFocusStateManager
    || (QuestFocusStateManager__ClearQuestFocusStateDataList(QuestFocusStateManager, 0LL),
        (QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager(v4)) == 0LL) )
  {
    sub_1B8880C(QuestFocusStateManager, v3);
  }
  QuestFocusStateManager__ReadData(QuestFocusStateManager, 0LL);
}


void __fastcall TerminalPramsManager__Load_SaveData(const MethodInfo *method)
{
  System_String_o *v1; // x19
  int32_t Int_69417088; // w19
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
  System_String_o *String_69417656; // x20
  int64_t v21; // x19
  TerminalPramsManager_c *v22; // x0
  System_String_o *v23; // x19
  int32_t v24; // w19
  TerminalPramsManager_c *v25; // x0
  System_String_o *v26; // x19
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x19
  TerminalPramsManager_c *v30; // x8
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_o *v32; // x19
  int32_t v33; // w19
  TerminalPramsManager_c *v34; // x0
  System_String_o *v35; // x19
  int32_t v36; // w19
  TerminalPramsManager_c *v37; // x0
  System_String_o *v38; // x19
  int32_t v39; // w19
  TerminalPramsManager_c *v40; // x0
  System_String_o *v41; // x19
  int32_t v42; // w19
  TerminalPramsManager_c *v43; // x0
  System_String_o *v44; // x19
  int32_t v45; // w19
  TerminalPramsManager_c *v46; // x0
  System_String_o *v47; // x19
  int32_t v48; // w19
  TerminalPramsManager_c *v49; // x0
  System_String_o *v50; // x19
  System_String_o *v51; // x20
  int64_t v52; // x19
  TerminalPramsManager_c *v53; // x0
  System_String_o *v54; // x19
  int32_t v55; // w19
  TerminalPramsManager_c *v56; // x0
  System_String_o *v57; // x19
  int32_t v58; // w19
  TerminalPramsManager_c *v59; // x0
  System_String_o *v60; // x19
  Il2CppObject *v61; // x19
  int32_t v62; // w2
  int32_t v63; // w3
  Il2CppObject *v64; // x19
  TerminalPramsManager_c *v65; // x0
  ServantStatusBattleListViewItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  System_String_o *v67; // x19
  const MethodInfo *v68; // x2
  int32_t v69; // w20
  TerminalPramsManager_c *v70; // x0
  int32_t WarId_k__BackingField; // w20
  System_String_o *v72; // x19
  Il2CppObject *v73; // x19
  int32_t v74; // w2
  int32_t v75; // w3
  Il2CppObject *v76; // x19
  TerminalPramsManager_c *v77; // x8
  ServantStatusBattleListViewItem_o *p_eventConquestInfos; // x0
  System_String_o *v79; // x19
  int32_t v80; // w19
  TerminalPramsManager_c *v81; // x8
  System_String_o *v82; // x19
  Il2CppObject *v83; // x19
  int32_t v84; // w2
  int32_t v85; // w3
  Il2CppObject *v86; // x19
  TerminalPramsManager_c *v87; // x8
  ServantStatusBattleListViewItem_o *p_eventHarvestGrowthInfo; // x0
  System_String_o *v89; // x19
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x19
  TerminalPramsManager_c *v93; // x8
  ServantStatusBattleListViewItem_o *p_lastPlayBgmName; // x0
  System_String_o *v95; // x19
  int32_t v96; // w19
  TerminalPramsManager_c *v97; // x8
  System_String_o *v98; // x19
  int32_t v99; // w19
  TerminalPramsManager_c *v100; // x0
  System_String_o *v101; // x19
  int32_t v102; // w19
  TerminalPramsManager_c *v103; // x8
  System_String_o *v104; // x19
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x19
  TerminalPramsManager_c *v108; // x0
  ServantStatusBattleListViewItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  System_String_o *v110; // x19
  int32_t v111; // w19
  TerminalPramsManager_c *v112; // x0
  System_String_o *v113; // x19
  int32_t v114; // w19
  TerminalPramsManager_c *v115; // x0
  System_String_o *v116; // x19
  int32_t v117; // w19
  TerminalPramsManager_c *v118; // x0
  System_String_o *v119; // x19
  int32_t v120; // w19
  TerminalPramsManager_c *v121; // x0
  System_String_o *v122; // x19
  int32_t v123; // w19
  TerminalPramsManager_c *v124; // x8
  System_String_o *v125; // x19
  int32_t v126; // w19
  TerminalPramsManager_c *v127; // x8
  System_String_o *v128; // x19
  int32_t v129; // w19
  TerminalPramsManager_c *v130; // x0
  System_String_o *v131; // x19
  int32_t v132; // w2
  int32_t v133; // w3
  System_String_o *v134; // x19
  TerminalPramsManager_c *v135; // x0
  ServantStatusBattleListViewItem_o *p_ClearEventQuestIds_k__BackingField; // x0
  System_String_o *v137; // x19
  System_String_o *v138; // x19
  System_String_array *IsNullOrEmpty; // x0
  __int64 v140; // x1
  __int64 v141; // x8
  System_String_array *v142; // x19
  int32_t v143; // w20
  TerminalPramsManager_c *v144; // x8
  int32_t v145; // w0
  int32_t v146; // w19
  TerminalPramsManager_c *v147; // x0
  System_String_o *v148; // x19
  int32_t v149; // w19
  TerminalPramsManager_c *v150; // x0
  System_String_o *v151; // x19
  int32_t v152; // w19
  TerminalPramsManager_c *v153; // x0
  System_String_o *v154; // x19
  Il2CppObject *v155; // x19
  int32_t v156; // w2
  int32_t v157; // w3
  Il2CppObject *v158; // x19
  TerminalPramsManager_c *v159; // x0
  struct TerminalPramsManager_StaticFields *v160; // x0
  System_String_o *v161; // x19
  int32_t v162; // w19
  TerminalPramsManager_c *v163; // x0
  System_String_o *v164; // x19
  int32_t v165; // w19
  TerminalPramsManager_c *v166; // x0

  if ( (byte_4A58831 & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    sub_1B885B0(&Method_JsonManager_Deserialize_EventConquestInfo_____);
    sub_1B885B0(&Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    sub_1B885B0(&Method_JsonManager_Deserialize_EventSaveData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11432/*"SAVEKEY_LastPlayBgmName"*/);
    sub_1B885B0(&StringLiteral_13603/*"TerminalEndTime"*/);
    sub_1B885B0(&StringLiteral_11438/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_1B885B0(&StringLiteral_13599/*"TerminalBeforeEventActivityPoint"*/);
    sub_1B885B0(&StringLiteral_11426/*"SAVEKEY_CampaignDirectBonus"*/);
    sub_1B885B0(&StringLiteral_11433/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    sub_1B885B0(&StringLiteral_11444/*"SAVEKEY_TerminalLastSelectQuestIndex"*/);
    sub_1B885B0(&StringLiteral_13604/*"TerminalEventDailyPointEventId"*/);
    sub_1B885B0(&StringLiteral_13601/*"TerminalBeforeEventSubmarinePointData"*/);
    sub_1B885B0(&StringLiteral_13610/*"TerminalPhaseCnt"*/);
    sub_1B885B0(&StringLiteral_11442/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_1B885B0(&StringLiteral_13618/*"TerminalTimeStatusEventId"*/);
    sub_1B885B0(&StringLiteral_13602/*"TerminalDispState"*/);
    sub_1B885B0(&StringLiteral_11435/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_1B885B0(&StringLiteral_13605/*"TerminalIsDoneShortcut"*/);
    sub_1B885B0(&StringLiteral_11434/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1B885B0(&StringLiteral_11439/*"SAVEKEY_PlayerGenderType"*/);
    sub_1B885B0(&StringLiteral_11424/*"SAVEKEY_BlankEarthRank"*/);
    sub_1B885B0(&StringLiteral_13606/*"TerminalLastPanelEventPoint"*/);
    sub_1B885B0(&StringLiteral_11443/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    sub_1B885B0(&StringLiteral_11427/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_1B885B0(&StringLiteral_11436/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_1B885B0(&StringLiteral_5219/*"Debug_IsQuestReleaseAll"*/);
    sub_1B885B0(&StringLiteral_5216/*"Debug_IsDummyErrorSelect"*/);
    sub_1B885B0(&StringLiteral_13613/*"TerminalQuestId"*/);
    sub_1B885B0(&StringLiteral_11441/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    sub_1B885B0(&StringLiteral_11446/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_1B885B0(&StringLiteral_13617/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_1B885B0(&StringLiteral_13622/*"TerminalWarId"*/);
    sub_1B885B0(&StringLiteral_13615/*"TerminalSpotId"*/);
    sub_1B885B0(&StringLiteral_13619/*"TerminalTimeStatusLoopCount"*/);
    sub_1B885B0(&StringLiteral_13600/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_1B885B0(&StringLiteral_11425/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_1B885B0(&StringLiteral_11430/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_1B885B0(&StringLiteral_13623/*"TerminalWarStartedIds"*/);
    sub_1B885B0(&StringLiteral_11429/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1B885B0(&StringLiteral_13607/*"TerminalLastPlayedFreeQuestSpotId"*/);
    sub_1B885B0(&StringLiteral_11428/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_1B885B0(&StringLiteral_11437/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_13608/*"TerminalLastPlayedQuestId"*/);
    sub_1B885B0(&StringLiteral_5215/*"Debug_IsBuildInfoDisp"*/);
    sub_1B885B0(&StringLiteral_11445/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4A58831 = 1;
  }
  v1 = (System_String_o *)StringLiteral_13602/*"TerminalDispState"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13602/*"TerminalDispState"*/, 0LL) )
  {
    Int_69417088 = UnityEngine_PlayerPrefs__GetInt_69417088(v1, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC6 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC6 = 1;
    }
    v3 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v3 = TerminalPramsManager_TypeInfo;
    }
    v3->static_fields->_DispState_k__BackingField = Int_69417088;
  }
  v4 = (System_String_o *)StringLiteral_13622/*"TerminalWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13622/*"TerminalWarId"*/, 0LL) )
  {
    v5 = UnityEngine_PlayerPrefs__GetInt_69417088(v4, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DCA )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DCA = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_WarId_k__BackingField = v5;
  }
  v7 = (System_String_o *)StringLiteral_13615/*"TerminalSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13615/*"TerminalSpotId"*/, 0LL) )
  {
    v8 = UnityEngine_PlayerPrefs__GetInt_69417088(v7, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC9 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC9 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_SpotId_k__BackingField = v8;
  }
  v10 = (System_String_o *)StringLiteral_13613/*"TerminalQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13613/*"TerminalQuestId"*/, 0LL) )
  {
    v11 = UnityEngine_PlayerPrefs__GetInt_69417088(v10, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC4 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC4 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v12->static_fields->_QuestId_k__BackingField = v11;
  }
  v13 = (System_String_o *)StringLiteral_13608/*"TerminalLastPlayedQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13608/*"TerminalLastPlayedQuestId"*/, 0LL) )
  {
    v14 = UnityEngine_PlayerPrefs__GetInt_69417088(v13, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A58393 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58393 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_LastPlayedQuestId_k__BackingField = v14;
  }
  v16 = (System_String_o *)StringLiteral_13610/*"TerminalPhaseCnt"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13610/*"TerminalPhaseCnt"*/, 0LL) )
  {
    v17 = UnityEngine_PlayerPrefs__GetInt_69417088(v16, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC8 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC8 = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    v18->static_fields->_PhaseCnt_k__BackingField = v17;
  }
  v19 = (System_String_o *)StringLiteral_13603/*"TerminalEndTime"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13603/*"TerminalEndTime"*/, 0LL) )
  {
    String_69417656 = UnityEngine_PlayerPrefs__GetString_69417656(v19, 0LL);
    v21 = 0LL;
    if ( System_String__op_Inequality(String_69417656, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v21 = System_Convert__ToInt64_62365992(String_69417656, 0LL);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC5 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC5 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    v22->static_fields->_EndTime_k__BackingField = v21;
  }
  v23 = (System_String_o *)StringLiteral_13605/*"TerminalIsDoneShortcut"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13605/*"TerminalIsDoneShortcut"*/, 0LL) )
  {
    v24 = UnityEngine_PlayerPrefs__GetInt_69417088(v23, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC7 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC7 = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = TerminalPramsManager_TypeInfo;
    }
    v25->static_fields->_IsDoneShortcut_k__BackingField = v24 != 0;
  }
  v26 = (System_String_o *)StringLiteral_13623/*"TerminalWarStartedIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13623/*"TerminalWarStartedIds"*/, 0LL) )
  {
    v29 = UnityEngine_PlayerPrefs__GetString_69417656(v26, 0LL);
    v30 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v30 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v30->static_fields;
    static_fields->mTerminalWarStartedIds = v29;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->mTerminalWarStartedIds, (int32_t)v29, v27, v28);
  }
  v32 = (System_String_o *)StringLiteral_5219/*"Debug_IsQuestReleaseAll"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5219/*"Debug_IsQuestReleaseAll"*/, 0LL) )
  {
    v33 = UnityEngine_PlayerPrefs__GetInt_69417088(v32, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588C7 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588C7 = 1;
    }
    v34 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v34 = TerminalPramsManager_TypeInfo;
    }
    v34->static_fields->mDebug_IsQuestReleaseAll = v33 != 0;
  }
  v35 = (System_String_o *)StringLiteral_5216/*"Debug_IsDummyErrorSelect"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5216/*"Debug_IsDummyErrorSelect"*/, 0LL) )
  {
    v36 = UnityEngine_PlayerPrefs__GetInt_69417088(v35, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588C8 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588C8 = 1;
    }
    v37 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v37 = TerminalPramsManager_TypeInfo;
    }
    v37->static_fields->mDebug_IsDummyErrorSelect = v36 != 0;
  }
  v38 = (System_String_o *)StringLiteral_5215/*"Debug_IsBuildInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5215/*"Debug_IsBuildInfoDisp"*/, 0LL) )
  {
    v39 = UnityEngine_PlayerPrefs__GetInt_69417088(v38, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588C9 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588C9 = 1;
    }
    v40 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v40 = TerminalPramsManager_TypeInfo;
    }
    v40->static_fields->mDebug_IsBuildInfoDisp = v39 != 0;
  }
  v41 = (System_String_o *)StringLiteral_13618/*"TerminalTimeStatusEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13618/*"TerminalTimeStatusEventId"*/, 0LL) )
  {
    v42 = UnityEngine_PlayerPrefs__GetInt_69417088(v41, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A5838F )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5838F = 1;
    }
    v43 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v43 = TerminalPramsManager_TypeInfo;
    }
    v43->static_fields->_TimeStatusEventId_k__BackingField = v42;
  }
  v44 = (System_String_o *)StringLiteral_13619/*"TerminalTimeStatusLoopCount"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13619/*"TerminalTimeStatusLoopCount"*/, 0LL) )
  {
    v45 = UnityEngine_PlayerPrefs__GetInt_69417088(v44, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A58390 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58390 = 1;
    }
    v46 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v46 = TerminalPramsManager_TypeInfo;
    }
    v46->static_fields->_TimeStatusLoopCount_k__BackingField = v45;
  }
  v47 = (System_String_o *)StringLiteral_13604/*"TerminalEventDailyPointEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13604/*"TerminalEventDailyPointEventId"*/, 0LL) )
  {
    v48 = UnityEngine_PlayerPrefs__GetInt_69417088(v47, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588CB )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588CB = 1;
    }
    v49 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v49 = TerminalPramsManager_TypeInfo;
    }
    v49->static_fields->_EventDailyPointEventId_k__BackingField = v48;
  }
  v50 = (System_String_o *)StringLiteral_13617/*"TerminalTimeStatusEventDailyPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13617/*"TerminalTimeStatusEventDailyPoint"*/, 0LL) )
  {
    v51 = UnityEngine_PlayerPrefs__GetString_69417656(v50, 0LL);
    v52 = 0LL;
    if ( !System_String__op_Equality(v51, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v52 = System_Convert__ToInt64_62365992(v51, 0LL);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588CC )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588CC = 1;
    }
    v53 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v53 = TerminalPramsManager_TypeInfo;
    }
    v53->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = v52;
  }
  v54 = (System_String_o *)StringLiteral_13599/*"TerminalBeforeEventActivityPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13599/*"TerminalBeforeEventActivityPoint"*/, 0LL) )
  {
    v55 = UnityEngine_PlayerPrefs__GetInt_69417088(v54, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588CD )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588CD = 1;
    }
    v56 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v56 = TerminalPramsManager_TypeInfo;
    }
    v56->static_fields->_BeforeEventActivityPoint_k__BackingField = v55;
  }
  v57 = (System_String_o *)StringLiteral_13600/*"TerminalBeforeEventActivityPointGauge"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13600/*"TerminalBeforeEventActivityPointGauge"*/, 0LL) )
  {
    v58 = UnityEngine_PlayerPrefs__GetInt_69417088(v57, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588CE )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588CE = 1;
    }
    v59 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v59 = TerminalPramsManager_TypeInfo;
    }
    v59->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v58;
  }
  v60 = (System_String_o *)StringLiteral_13601/*"TerminalBeforeEventSubmarinePointData"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13601/*"TerminalBeforeEventSubmarinePointData"*/, 0LL) )
  {
    v61 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69417656(v60, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v64 = JsonManager__Deserialize_object_(
            v61,
            (const MethodInfo_2EE5DF0 *)Method_JsonManager_Deserialize_EventSaveData___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57F0B )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57F0B = 1;
    }
    v65 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v65 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (ServantStatusBattleListViewItem_o *)&v65->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v64;
    sub_1B88554(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v64, v62, v63);
  }
  v67 = (System_String_o *)StringLiteral_11444/*"SAVEKEY_TerminalLastSelectQuestIndex"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11444/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, 0LL) )
  {
    v69 = UnityEngine_PlayerPrefs__GetInt_69417088(v67, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588C6 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588C6 = 1;
    }
    v70 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v70 = TerminalPramsManager_TypeInfo;
    }
    v70->static_fields->_LastSelectQuestIndex_k__BackingField = v69;
    if ( !byte_4A57DC3 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      v70 = TerminalPramsManager_TypeInfo;
      byte_4A57DC3 = 1;
    }
    if ( !v70->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v70);
      v70 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v70->static_fields->_WarId_k__BackingField;
    if ( !byte_4A588D9 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      v70 = TerminalPramsManager_TypeInfo;
      byte_4A588D9 = 1;
    }
    if ( !v70->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v70);
      v70 = TerminalPramsManager_TypeInfo;
    }
    TerminalPramsManager__SetFolderLastClickedIdx(
      WarId_k__BackingField,
      v70->static_fields->_LastSelectQuestIndex_k__BackingField,
      v68);
  }
  v72 = (System_String_o *)StringLiteral_11442/*"SAVEKEY_TerminalConquestInfos"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11442/*"SAVEKEY_TerminalConquestInfos"*/, 0LL) )
  {
    v73 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69417656(v72, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v76 = JsonManager__Deserialize_object_(
            v73,
            (const MethodInfo_2EE5DF0 *)Method_JsonManager_Deserialize_EventConquestInfo_____);
    v77 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v77 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = (ServantStatusBattleListViewItem_o *)&v77->static_fields->eventConquestInfos;
    p_eventConquestInfos->klass = (ServantStatusBattleListViewItem_c *)v76;
    sub_1B88554(p_eventConquestInfos, (int32_t)v76, v74, v75);
  }
  v79 = (System_String_o *)StringLiteral_11441/*"SAVEKEY_TerminalConquestInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11441/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL) )
  {
    v80 = UnityEngine_PlayerPrefs__GetInt_69417088(v79, 0LL);
    v81 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v81 = TerminalPramsManager_TypeInfo;
    }
    v81->static_fields->eventConquestInfoDisp = v80 != 0;
  }
  v82 = (System_String_o *)StringLiteral_11443/*"SAVEKEY_TerminalHarvestGrowthInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11443/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL) )
  {
    v83 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69417656(v82, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v86 = JsonManager__Deserialize_object_(
            v83,
            (const MethodInfo_2EE5DF0 *)Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    v87 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v87 = TerminalPramsManager_TypeInfo;
    }
    p_eventHarvestGrowthInfo = (ServantStatusBattleListViewItem_o *)&v87->static_fields->eventHarvestGrowthInfo;
    p_eventHarvestGrowthInfo->klass = (ServantStatusBattleListViewItem_c *)v86;
    sub_1B88554(p_eventHarvestGrowthInfo, (int32_t)v86, v84, v85);
  }
  v89 = (System_String_o *)StringLiteral_11432/*"SAVEKEY_LastPlayBgmName"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11432/*"SAVEKEY_LastPlayBgmName"*/, 0LL) )
  {
    v92 = UnityEngine_PlayerPrefs__GetString_69417656(v89, 0LL);
    v93 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v93 = TerminalPramsManager_TypeInfo;
    }
    p_lastPlayBgmName = (ServantStatusBattleListViewItem_o *)&v93->static_fields->lastPlayBgmName;
    p_lastPlayBgmName->klass = (ServantStatusBattleListViewItem_c *)v92;
    sub_1B88554(p_lastPlayBgmName, (int32_t)v92, v90, v91);
  }
  v95 = (System_String_o *)StringLiteral_11433/*"SAVEKEY_LastPlayQuestConsumeType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11433/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL) )
  {
    v96 = UnityEngine_PlayerPrefs__GetInt_69417088(v95, 0LL);
    v97 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v97 = TerminalPramsManager_TypeInfo;
    }
    v97->static_fields->lastPlayQuestConsumeAp = v96;
  }
  v98 = (System_String_o *)StringLiteral_13607/*"TerminalLastPlayedFreeQuestSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13607/*"TerminalLastPlayedFreeQuestSpotId"*/, 0LL) )
  {
    v99 = UnityEngine_PlayerPrefs__GetInt_69417088(v98, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A58394 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58394 = 1;
    }
    v100 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v100 = TerminalPramsManager_TypeInfo;
    }
    v100->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = v99;
  }
  v101 = (System_String_o *)StringLiteral_13606/*"TerminalLastPanelEventPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13606/*"TerminalLastPanelEventPoint"*/, 0LL) )
  {
    v102 = UnityEngine_PlayerPrefs__GetInt_69417088(v101, 0LL);
    v103 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v103 = TerminalPramsManager_TypeInfo;
    }
    v103->static_fields->panelEventPoint = v102;
  }
  v104 = (System_String_o *)StringLiteral_11438/*"SAVEKEY_PlayedTerminalEffects"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11438/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL) )
  {
    v107 = UnityEngine_PlayerPrefs__GetString_69417656(v104, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588D0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588D0 = 1;
    }
    v108 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v108 = TerminalPramsManager_TypeInfo;
    }
    p_PlayedTerminalEffects_k__BackingField = (ServantStatusBattleListViewItem_o *)&v108->static_fields->_PlayedTerminalEffects_k__BackingField;
    p_PlayedTerminalEffects_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v107;
    sub_1B88554(p_PlayedTerminalEffects_k__BackingField, (int32_t)v107, v105, v106);
  }
  v110 = (System_String_o *)StringLiteral_11435/*"SAVEKEY_PlayTerminalEffectDisappear"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11435/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL) )
  {
    v111 = UnityEngine_PlayerPrefs__GetInt_69417088(v110, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A58615 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58615 = 1;
    }
    v112 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v112 = TerminalPramsManager_TypeInfo;
    }
    v112->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = v111 != 0;
  }
  v113 = (System_String_o *)StringLiteral_11436/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11436/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL) )
  {
    v114 = UnityEngine_PlayerPrefs__GetInt_69417088(v113, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A58616 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58616 = 1;
    }
    v115 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v115 = TerminalPramsManager_TypeInfo;
    }
    v115->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = v114;
  }
  v116 = (System_String_o *)StringLiteral_11437/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11437/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL) )
  {
    v117 = UnityEngine_PlayerPrefs__GetInt_69417088(v116, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A5853F )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5853F = 1;
    }
    v118 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v118 = TerminalPramsManager_TypeInfo;
    }
    v118->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = v117 != 0;
  }
  v119 = (System_String_o *)StringLiteral_11446/*"SAVEKEY_TerminalSelectedStoryQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11446/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL) )
  {
    v120 = UnityEngine_PlayerPrefs__GetInt_69417088(v119, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A5818A )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5818A = 1;
    }
    v121 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v121 = TerminalPramsManager_TypeInfo;
    }
    v121->static_fields->_SelectedStoryQuestId_k__BackingField = v120;
  }
  v122 = (System_String_o *)StringLiteral_11429/*"SAVEKEY_ConnectMarkEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11429/*"SAVEKEY_ConnectMarkEventId"*/, 0LL) )
  {
    v123 = UnityEngine_PlayerPrefs__GetInt_69417088(v122, 0LL);
    v124 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v124 = TerminalPramsManager_TypeInfo;
    }
    v124->static_fields->ConnectMarkEventId = v123;
  }
  v125 = (System_String_o *)StringLiteral_11428/*"SAVEKEY_ConnectMarkAnimationId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11428/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL) )
  {
    v126 = UnityEngine_PlayerPrefs__GetInt_69417088(v125, 0LL);
    v127 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v127 = TerminalPramsManager_TypeInfo;
    }
    v127->static_fields->ConnectMarkAnimationId = v126;
  }
  v128 = (System_String_o *)StringLiteral_11445/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11445/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL) )
  {
    v129 = UnityEngine_PlayerPrefs__GetInt_69417088(v128, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A56DA1 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A56DA1 = 1;
    }
    v130 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v130 = TerminalPramsManager_TypeInfo;
    }
    v130->static_fields->_SelectedRecollectionWarId_k__BackingField = v129;
  }
  v131 = (System_String_o *)StringLiteral_11427/*"SAVEKEY_ClearEventQuestIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11427/*"SAVEKEY_ClearEventQuestIds"*/, 0LL) )
  {
    v134 = UnityEngine_PlayerPrefs__GetString_69417656(v131, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC1 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC1 = 1;
    }
    v135 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v135 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (ServantStatusBattleListViewItem_o *)&v135->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v134;
    sub_1B88554(p_ClearEventQuestIds_k__BackingField, (int32_t)v134, v132, v133);
  }
  v137 = (System_String_o *)StringLiteral_11434/*"SAVEKEY_MapModelClearQuestInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11434/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL) )
  {
    v138 = UnityEngine_PlayerPrefs__GetString_69417656(v137, 0LL);
    IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(v138, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v138 || (IsNullOrEmpty = System_String__Split(v138, 0x2Cu, 0, 0LL)) == 0LL )
        sub_1B8880C(IsNullOrEmpty, v140);
      v141 = *(_QWORD *)&IsNullOrEmpty->max_length;
      v142 = IsNullOrEmpty;
      if ( v141 )
      {
        if ( !(_DWORD)v141 )
          sub_1B88814(IsNullOrEmpty, v140);
        v143 = System_Int32__Parse(IsNullOrEmpty->m_Items[0], 0LL);
      }
      else
      {
        v143 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A588D2 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588D2 = 1;
      }
      v144 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v144 = TerminalPramsManager_TypeInfo;
      }
      v144->static_fields->_MapModelClearQuestId_k__BackingField = v143;
      if ( (int)v142->max_length < 2 )
      {
        v146 = 0;
      }
      else
      {
        v145 = System_Int32__Parse(v142->m_Items[1], 0LL);
        v144 = TerminalPramsManager_TypeInfo;
        v146 = v145;
      }
      if ( !v144->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v144);
      if ( !byte_4A588D3 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588D3 = 1;
      }
      v147 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v147 = TerminalPramsManager_TypeInfo;
      }
      v147->static_fields->_MapModelClearPhaseCount_k__BackingField = v146;
    }
  }
  v148 = (System_String_o *)StringLiteral_11430/*"SAVEKEY_DataLostBattleAutoReset"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11430/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL) )
  {
    v149 = UnityEngine_PlayerPrefs__GetInt_69417088(v148, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A58546 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58546 = 1;
    }
    v150 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v150 = TerminalPramsManager_TypeInfo;
    }
    v150->static_fields->_IsDataLostBattleAutoReset_k__BackingField = v149 != 0;
  }
  v151 = (System_String_o *)StringLiteral_11439/*"SAVEKEY_PlayerGenderType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11439/*"SAVEKEY_PlayerGenderType"*/, 0LL) )
  {
    v152 = UnityEngine_PlayerPrefs__GetInt_69417088(v151, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A568C8 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A568C8 = 1;
    }
    v153 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v153 = TerminalPramsManager_TypeInfo;
    }
    v153->static_fields->_PlayerGenderType_k__BackingField = v152;
  }
  v154 = (System_String_o *)StringLiteral_11426/*"SAVEKEY_CampaignDirectBonus"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11426/*"SAVEKEY_CampaignDirectBonus"*/, 0LL) )
  {
    v155 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69417656(v154, 0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v158 = JsonManager__Deserialize_object_(
             v155,
             (const MethodInfo_2EE5DF0 *)Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588D7 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588D7 = 1;
    }
    v159 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v159 = TerminalPramsManager_TypeInfo;
    }
    v160 = v159->static_fields;
    v160->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)v158;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&v160->_CampaignDirectBonus_k__BackingField,
      (int32_t)v158,
      v156,
      v157);
  }
  v161 = (System_String_o *)StringLiteral_11425/*"SAVEKEY_BlankEarthSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11425/*"SAVEKEY_BlankEarthSpotId"*/, 0LL) )
  {
    v162 = UnityEngine_PlayerPrefs__GetInt_69417088(v161, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57CDF )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57CDF = 1;
    }
    v163 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v163 = TerminalPramsManager_TypeInfo;
    }
    v163->static_fields->_BlankEarthSpotId_k__BackingField = v162;
  }
  v164 = (System_String_o *)StringLiteral_11424/*"SAVEKEY_BlankEarthRank"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11424/*"SAVEKEY_BlankEarthRank"*/, 0LL) )
  {
    v165 = UnityEngine_PlayerPrefs__GetInt_69417088(v164, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588DA )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588DA = 1;
    }
    v166 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v166 = TerminalPramsManager_TypeInfo;
    }
    v166->static_fields->_BlankEarthRank_k__BackingField = v165;
  }
}


TerminalTransitionInfo_o *__fastcall TerminalPramsManager__Load_TerminalTransitionInfoData(const MethodInfo *method)
{
  System_String_o *v1; // x20
  __int64 v2; // x19
  int32_t Int_69417088; // w0
  int32_t v4; // w20
  const MethodInfo *v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  System_String_o *String_69417656; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A58832 & 1) == 0 )
  {
    sub_1B885B0(&TerminalTransitionInfo_TypeInfo);
    sub_1B885B0(&StringLiteral_13621/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_1B885B0(&StringLiteral_13620/*"TerminalTransitionInfoMissionId"*/);
    byte_4A58832 = 1;
  }
  v1 = (System_String_o *)StringLiteral_13620/*"TerminalTransitionInfoMissionId"*/;
  v2 = 0LL;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13620/*"TerminalTransitionInfoMissionId"*/, 0LL) )
  {
    Int_69417088 = UnityEngine_PlayerPrefs__GetInt_69417088(v1, 0LL);
    if ( Int_69417088 < 1 )
    {
      return 0LL;
    }
    else
    {
      v4 = Int_69417088;
      v2 = sub_1B887FC(TerminalTransitionInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v2, 0LL);
      TerminalTransitionInfo__Init((TerminalTransitionInfo_o *)v2, v5);
      if ( !v2 )
        sub_1B8880C(v6, v7);
      *(_DWORD *)(v2 + 16) = v4;
      v8 = (System_String_o *)StringLiteral_13621/*"TerminalTransitionInfoVoiceAssetName"*/;
      if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13621/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL) )
      {
        String_69417656 = UnityEngine_PlayerPrefs__GetString_69417656(v8, 0LL);
        *(_QWORD *)(v2 + 40) = String_69417656;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v2 + 40), (int32_t)String_69417656, v10, v11);
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

  if ( (byte_4A5884B & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11434/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A5884B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57FF1 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57FF1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v1->static_fields->_MapModelClearQuestId_k__BackingField;
  v2 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_4A57FF2 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57FF2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v3->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v5 = System_String__Concat_61718292(v2, (System_String_o *)StringLiteral_868/*","*/, v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11434/*"SAVEKEY_MapModelClearQuestInfo"*/, v5, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__PlayQuestSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A58838 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11444/*"SAVEKEY_TerminalLastSelectQuestIndex"*/);
    sub_1B885B0(&StringLiteral_13607/*"TerminalLastPlayedFreeQuestSpotId"*/);
    sub_1B885B0(&StringLiteral_13608/*"TerminalLastPlayedQuestId"*/);
    byte_4A58838 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A580D2 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A580D2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13608/*"TerminalLastPlayedQuestId"*/,
    v1->static_fields->_LastPlayedQuestId_k__BackingField,
    0LL);
  if ( !byte_4A588D9 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588D9 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11444/*"SAVEKEY_TerminalLastSelectQuestIndex"*/,
    v2->static_fields->_LastSelectQuestIndex_k__BackingField,
    0LL);
  if ( !byte_4A57CE1 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57CE1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13607/*"TerminalLastPlayedFreeQuestSpotId"*/,
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

  if ( (byte_4A5882D & 1) == 0 )
  {
    sub_1B885B0(&Method_TerminalPramsManager_PlaySystemSE__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5882D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588C4 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588C4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( TerminalPramsManager_TypeInfo->static_fields->_IsAutoNoSe_k__BackingField )
    {
LABEL_9:
      if ( !byte_4A588C5 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588C5 = 1;
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
      v6 = (_QWORD *)sub_1B885C8(Method_TerminalPramsManager_PlaySystemSE__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, seKind, 0LL);
  }
}


void __fastcall TerminalPramsManager__PlayedTerminalEffectsSave_SaveData(int32_t effectId, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  TerminalPramsManager_c *v5; // x0
  ServantStatusBattleListViewItem_c *v6; // x19
  TerminalPramsManager_c *v7; // x0
  ServantStatusBattleListViewItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  TerminalPramsManager_c *v9; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x19
  System_String_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x19
  TerminalPramsManager_c *v15; // x0
  ServantStatusBattleListViewItem_o *v16; // x0
  const MethodInfo *v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v18 = effectId;
  if ( (byte_4A58854 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A58854 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsTerminalEffectPlayed(effectId, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588DF )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588DF = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    if ( !v5->static_fields->_PlayedTerminalEffects_k__BackingField )
    {
      if ( !v5->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v5);
      v6 = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
      if ( !byte_4A588D0 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588D0 = 1;
      }
      v7 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v7 = TerminalPramsManager_TypeInfo;
      }
      p_PlayedTerminalEffects_k__BackingField = (ServantStatusBattleListViewItem_o *)&v7->static_fields->_PlayedTerminalEffects_k__BackingField;
      p_PlayedTerminalEffects_k__BackingField->klass = v6;
      sub_1B88554(p_PlayedTerminalEffects_k__BackingField, (int32_t)v6, v3, v4);
      v5 = TerminalPramsManager_TypeInfo;
    }
    if ( !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    if ( !byte_4A588DF )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588DF = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    PlayedTerminalEffects_k__BackingField = v9->static_fields->_PlayedTerminalEffects_k__BackingField;
    v11 = System_Int32__ToString((int32_t)&v18, 0LL);
    v14 = System_String__Concat_61718292(
            PlayedTerminalEffects_k__BackingField,
            v11,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            0LL);
    if ( !byte_4A588D0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588D0 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v16 = (ServantStatusBattleListViewItem_o *)&v15->static_fields->_PlayedTerminalEffects_k__BackingField;
    v16->klass = (ServantStatusBattleListViewItem_c *)v14;
    sub_1B88554(v16, (int32_t)v14, v12, v13);
    TerminalPramsManager__Save_SaveData(v17);
  }
}


void __fastcall TerminalPramsManager__PlayerGenderType_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A5884D & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11439/*"SAVEKEY_PlayerGenderType"*/);
    byte_4A5884D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588E0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588E0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11439/*"SAVEKEY_PlayerGenderType"*/,
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
  BattleResultComponent_resultData_array **m_Items; // x19
  struct UserServantCollectionEntity_array *oldUserSvtCollection; // x8
  _DWORD *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  BattleResultComponent_resultData_o *v11; // x26
  int eventEndTitle; // w8
  UserServantCollectionMaster_o *v13; // x20
  unsigned int v14; // w28
  __int64 v15; // x27
  BattleResultComponent_resultData_array *v16; // x23
  __int64 v17; // x24
  __int64 v18; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x23
  UserServantCollectionEntity_o *v20; // x24
  int32_t v21; // w2
  int32_t v22; // w3
  _DWORD *v23; // x23
  ServantStatusBattleListViewItem_o *v24; // x23
  ServantStatusBattleListViewItem_c *klass; // x8
  ServantStatusBattleListViewItem_c *v26; // x8
  TerminalPramsManager_c *v27; // x0
  ServantStatusBattleListViewItem_o *p_mQuestClearHeroineInfo; // x0
  __int64 v29; // x8
  BattleResultComponent_resultData_o *v30; // x9
  struct System_String_o *v31; // x10
  struct System_String_o *eventEndMessage; // x27
  __int128 v33; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x23
  UserServantEntity_o *v35; // x24
  __int64 v36; // x23
  void *v37; // x25
  void **p_monitor; // x27
  void *monitor; // t1
  void *v40; // x26
  Il2CppObject *MasterData_object; // x25
  int64_t UserId; // x0
  __int64 v43; // x27
  __int64 v44; // x28
  int64_t v45; // x26
  int v46; // w8
  UserServantCollectionEntity_o *v47; // x26
  int v48; // w9
  UserServantCollectionEntity_o *v49; // x25
  BattleResultComponent_resultData_array *v50; // x27
  int32_t SvtId; // w0
  __int64 v52; // x28
  __int64 v53; // x29
  int32_t v54; // w27
  __int64 v55; // x22
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w2
  int32_t v59; // w3
  bool v60; // w9
  Il2CppObject *Master_object; // x0
  __int64 v62; // x24
  __int64 v63; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // x23
  int klass_high; // w8
  int32_t friendshipExceedCount; // w9
  TerminalPramsManager_c *v67; // x0
  ServantStatusBattleListViewItem_o *v68; // x0
  BattleResultComponent_resultData_o *v69; // x22
  BattleResultComponent_resultData_o *v70; // x8
  struct System_String_o *v71; // x9
  UserQuestEntity_o *v72; // x22
  int32_t questId; // w23
  TerminalPramsManager_c *v74; // x0
  int32_t QuestPhase; // w23
  TerminalPramsManager_c *v76; // x0
  int32_t v77; // w23
  Il2CppObject *v78; // x24
  UserQuestEntity_o *v79; // x0
  UserQuestEntity_o *v80; // x25
  int32_t v81; // w24
  bool v82; // w25
  TerminalPramsManager_c *v83; // x0
  const MethodInfo *v84; // x2
  TerminalPramsManager_c *v85; // x0
  System_String_o *ValidMessage; // x0
  const MethodInfo *v87; // x2
  TerminalPramsManager_c *v88; // x8
  TerminalPramsManager_c *v89; // x0
  const MethodInfo *v90; // x0
  TerminalPramsManager_c *v91; // x8
  int32_t v92; // w24
  const MethodInfo *v93; // x1
  WarEntity_o *v94; // x23
  TerminalPramsManager_c *v95; // x0
  bool v96; // w25
  TerminalPramsManager_c *v97; // x0
  char v98; // w8
  const MethodInfo *v99; // x1
  bool HasFlag; // w0
  int32_t v101; // w2
  int32_t v102; // w3
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  int32_t v104; // w2
  int32_t v105; // w3
  ServantStatusBattleListViewItem_c *v106; // x23
  TerminalPramsManager_c *v107; // x0
  ServantStatusBattleListViewItem_o *p_mResultEventPanelRewardInfos; // x0
  TerminalPramsManager_c *v109; // x0
  ServantStatusBattleListViewItem_o *p_eventConquestInfos; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  struct TerminalPramsManager_StaticFields *v113; // x9
  __int64 v114; // x8
  BattleResultComponent_resultData_o *v115; // x23
  int32_t v116; // w23
  WarEntity_o *v117; // x0
  int32_t id; // w21
  Il2CppObject *v119; // x23
  int32_t v120; // w2
  int32_t v121; // w3
  int32_t v122; // w2
  int32_t v123; // w3
  ServantStatusBattleListViewItem_c *v124; // x24
  TerminalPramsManager_c *v125; // x0
  ServantStatusBattleListViewItem_o *p_OldUserEventPoint_k__BackingField; // x0
  char *v127; // x24
  signed int max_length; // w9
  BattleResultComponent_resultData_array *v129; // x24
  int v130; // w8
  Il2CppClass **v131; // x8
  Il2CppClass *v132; // x25
  int32_t RaidGroupDeadQuestId; // w26
  signed int v134; // w9
  BattleResultComponent_resultData_array *v135; // x26
  int v136; // w8
  int v137; // w29
  struct TerminalPramsManager_StaticFields *v138; // x8
  int32_t name_high; // w25
  signed int v140; // w9
  BattleResultComponent_resultData_array *v141; // x24
  int v142; // w8
  BattleResultComponent_resultData_o *v143; // x21
  int32_t RaidDeadQuestId; // w25
  struct TerminalPramsManager_StaticFields *v145; // x8
  int32_t v146; // w21
  TerminalPramsManager_c *v147; // x0
  TerminalPramsManager_c *v148; // x8
  bool v149; // w21
  TerminalPramsManager_c *v150; // x0
  int32_t v151; // w21
  int32_t v152; // w23
  Il2CppObject *v153; // x23
  int32_t eventId; // w24
  bool v155; // w0
  bool v156; // w23
  TerminalPramsManager_c *v157; // x0
  char *v158; // x26
  char *v159; // x27
  BattleResultComponent_resultData_o *v160; // x8
  int v161; // w9
  int v162; // w11
  __int64 v163; // x25
  int32_t bounds_high; // w23
  bool IsUserEventStatus; // w0
  TerminalPramsManager_c *v166; // x0
  TerminalPramsManager_c *v167; // x0
  TerminalPramsManager_c *v168; // x0
  Il2CppObject *v169; // x23
  int32_t v170; // w2
  int32_t v171; // w3
  TerminalPramsManager_c *v172; // x0
  ServantStatusBattleListViewItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  struct System_String_o *ultimateGetQpText; // x8
  struct System_String_o *v175; // x8
  signed int v176; // w8
  __int64 *v177; // x9
  __int64 v178; // x23
  System_String_o **v179; // x9
  System_String_o *v180; // x21
  void **v181; // x8
  System_String_o *v182; // x29
  int32_t v183; // w26
  System_Collections_Generic_List_object__o *v184; // x26
  TerminalPramsManager___c_c *v185; // x8
  System_Predicate_object__o *_9__669_0; // x23
  Il2CppObject *v187; // x24
  struct TerminalPramsManager___c_StaticFields *v188; // x0
  int32_t v189; // w2
  int32_t v190; // w3
  TerminalPramsManager_c *v191; // x0
  TerminalPramsManager_c *v192; // x0
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x26
  System_String_o *v194; // x23
  int32_t v195; // w2
  int32_t v196; // w3
  TerminalPramsManager_c *v197; // x0
  int32_t v198; // w23
  int32_t PhaseCnt_k__BackingField; // w24
  _BOOL4 IsQuestClear_k__BackingField; // w21
  TerminalPramsManager_c *v201; // x0
  Il2CppObject *v202; // x23
  int v203; // w23
  TerminalPramsManager_c *v204; // x0
  ServantStatusBattleListViewItem_o *p_questClearCostumeRelease_k__BackingField; // x0
  int32_t v206; // w2
  int32_t v207; // w3
  BattleResultComponent_resultData_o *v208; // x8
  ServantStatusBattleListViewItem_c *v209; // x23
  TerminalPramsManager_c *v210; // x0
  ServantStatusBattleListViewItem_o *v211; // x0
  TerminalPramsManager_c *v212; // x0
  ServantStatusBattleListViewItem_o *p_questClearCostumeGet_k__BackingField; // x0
  int32_t v214; // w2
  int32_t v215; // w3
  ServantStatusBattleListViewItem_c *v216; // x23
  TerminalPramsManager_c *v217; // x0
  ServantStatusBattleListViewItem_o *v218; // x0
  TerminalPramsManager_c *v219; // x0
  ServantStatusBattleListViewItem_o *p_eventPointWinReward_k__BackingField; // x0
  int32_t v221; // w2
  int32_t v222; // w3
  TerminalPramsManager_c *v223; // x0
  int32_t v224; // w23
  QuestGroupMaster_o *v225; // x24
  int32_t GroupId; // w0
  TerminalPramsManager_c *v227; // x8
  int32_t v228; // w25
  int v229; // w24
  Il2CppObject *v230; // x25
  EventPointEntity_o *v231; // x24
  int32_t v232; // w23
  struct TerminalPramsManager_StaticFields *v233; // x8
  BattleResultComponent_resultData_o *v234; // x8
  struct System_String_o *v235; // x9
  ServantStatusBattleListViewItem_c *v236; // x23
  TerminalPramsManager_c *v237; // x0
  ServantStatusBattleListViewItem_o *v238; // x0
  int32_t v239; // w21
  TerminalPramsManager_c *v240; // x0
  TerminalPramsManager_c *v241; // x0
  ServantStatusBattleListViewItem_o *p_eventRaceBoost_k__BackingField; // x0
  int32_t v243; // w2
  int32_t v244; // w3
  __int64 v245; // x8
  BattleResultComponent_resultData_o *v246; // x22
  TerminalPramsManager_c *v247; // x0
  ServantStatusBattleListViewItem_o *v248; // x0
  __int64 v249; // x21
  BattleResultComponent_resultData_o *v250; // x9
  struct System_String_o *v251; // x10
  struct System_String_o *v252; // x22
  TerminalPramsManager_c *v253; // x0
  ServantStatusBattleListViewItem_o *p_eventTowerReward_k__BackingField; // x0
  int32_t v255; // w2
  int32_t v256; // w3
  ServantStatusBattleListViewItem_c *v257; // x22
  TerminalPramsManager_c *v258; // x0
  ServantStatusBattleListViewItem_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  ServantStatusBattleListViewItem_c *v260; // x22
  TerminalPramsManager_c *v261; // x0
  ServantStatusBattleListViewItem_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  ServantStatusBattleListViewItem_c *v263; // x22
  TerminalPramsManager_c *v264; // x0
  ServantStatusBattleListViewItem_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  ServantStatusBattleListViewItem_c *v266; // x22
  TerminalPramsManager_c *v267; // x0
  ServantStatusBattleListViewItem_o *p_warClearReward_k__BackingField; // x0
  TerminalPramsManager_c *v269; // x0
  struct TerminalPramsManager_StaticFields *v270; // x0
  int32_t v271; // w2
  int32_t v272; // w3
  TerminalPramsManager_c *v273; // x0
  struct TerminalPramsManager_StaticFields *v274; // x0
  Il2CppObject *Instance; // x22
  int32_t WarID_ByQuestID; // w22
  WarEntity_o *WarEntityByWarID; // x0
  int32_t v278; // w22
  int32_t v279; // w2
  int32_t v280; // w3
  __int64 v281; // x8
  BattleResultComponent_resultData_o *v282; // x21
  TerminalPramsManager_c *v283; // x0
  struct TerminalPramsManager_StaticFields *v284; // x0
  ServantStatusBattleListViewItem_o *p_oldPersonalBoss_k__BackingField; // x0
  TerminalPramsManager_c *v286; // x0
  struct TerminalPramsManager_StaticFields *v287; // x0
  struct EventTowerReward_array *eventTowerReward; // x8
  bool v289; // w21
  BalanceConfig_c *v290; // x8
  int32_t v291; // w21
  TerminalPramsManager_c *v292; // x0
  TerminalPramsManager_c *v293; // x0
  BalanceConfig_c *v294; // x8
  int32_t v295; // w21
  TerminalPramsManager_c *v296; // x0
  BalanceConfig_c *v297; // x8
  int32_t v298; // w21
  TerminalPramsManager_c *v299; // x0
  BalanceConfig_c *v300; // x8
  int32_t v301; // w21
  Il2CppObject *v302; // x21
  BattleResultComponent_resultData_array *v303; // x23
  int32_t v304; // w2
  int32_t v305; // w3
  UserSuperBossEntity_o *v306; // x22
  BattleResultComponent_resultData_array *v307; // x21
  int32_t v308; // w2
  int32_t v309; // w3
  TerminalPramsManager_c *v310; // x0
  struct TerminalPramsManager_StaticFields *v311; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v313; // x21
  Il2CppObject *v314; // x22
  int32_t ScriptQuestId; // w22
  Il2CppObject *v316; // x23
  TerminalPramsManager_c *v317; // x0
  int32_t v318; // w29
  int32_t winResult; // w24
  int32_t v320; // w2
  int32_t v321; // w3
  Il2CppObject *v322; // x23
  TerminalPramsManager_c *v323; // x0
  int32_t v324; // w24
  int32_t v325; // w21
  TerminalPramsManager_c *v326; // x0
  int32_t v327; // w1
  ServantStatusBattleListViewItem_o *p_lastPlayBgmName; // x0
  const MethodInfo *v329; // x0
  Il2CppObject *v330; // x21
  int32_t v331; // w22
  int32_t v332; // w2
  int32_t v333; // w3
  TerminalPramsManager_c *v334; // x0
  il2cpp_array_size_t *v335; // x0
  int32_t v336; // w22
  TerminalPramsManager_c *v337; // x0
  int32_t v338; // w23
  int32_t v339; // w2
  int32_t v340; // w3
  SpecifiedSceneInfo_o *SpecifiedSceneInfo; // x22
  TerminalPramsManager_c *v342; // x0
  struct TerminalPramsManager_StaticFields *v343; // x0
  const MethodInfo *v344; // x0
  int32_t v345; // w2
  int32_t v346; // w3
  int32_t v347; // w22
  TerminalPramsManager_c *v348; // x0
  ServantStatusBattleListViewItem_o *p_eventHarvestGrowthInfo; // x0
  TerminalPramsManager_c *v350; // x0
  BattleResultComponent_resultData_array *v351; // x22
  int32_t ScriptIntParam; // w24
  int32_t v353; // w0
  int32_t v354; // w25
  __int64 v355; // x23
  int32_t v356; // w2
  int32_t v357; // w3
  Il2CppArrayBounds *bounds; // d0
  TerminalPramsManager_c *v359; // x0
  ServantStatusBattleListViewItem_o *v360; // x0
  Il2CppObject *v361; // x22
  QuestEntity_o *QuestEntity; // x0
  int32_t v363; // w2
  int32_t v364; // w3
  QuestEntity_o *v365; // x22
  TerminalPramsManager_c *v366; // x0
  int32_t SpotId; // w21
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v369; // x21
  TerminalPramsManager_c *v370; // x0
  struct EventAreaImproveResultInfo_o *eventAreaImproveResultInfo; // x8
  TerminalPramsManager_c *v372; // x0
  System_String_o *v373; // x21
  TerminalPramsManager_c *v374; // x0
  System_String_o *v375; // x0
  int32_t v376; // w2
  int32_t v377; // w3
  System_String_o *v378; // x21
  TerminalPramsManager_c *v379; // x0
  ServantStatusBattleListViewItem_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  ServantStatusBattleListViewItem_c *v381; // x21
  TerminalPramsManager_c *v382; // x0
  ServantStatusBattleListViewItem_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v384; // x21
  TerminalPramsManager_c *v385; // x0
  int32_t v386; // w2
  int32_t v387; // w3
  int32_t v388; // w2
  int32_t v389; // w3
  int32_t v390; // w1
  TerminalPramsManager_c *v391; // x0
  int32_t v392; // w2
  int32_t v393; // w3
  int32_t v394; // w2
  int32_t v395; // w3
  int32_t v396; // w1
  TerminalPramsManager_c *v397; // x0
  int32_t v398; // w2
  int32_t v399; // w3
  int32_t v400; // w2
  int32_t v401; // w3
  int32_t v402; // w1
  TerminalPramsManager_c *v403; // x0
  int32_t v404; // w2
  int32_t v405; // w3
  System_String_o *v406; // x0
  const MethodInfo *v407; // x1
  const MethodInfo *v408; // x0
  const MethodInfo *v409; // x0
  const MethodInfo *v410; // x0
  const MethodInfo *v411; // x0
  const MethodInfo *v412; // x0
  TerminalPramsManager_c *v413; // x0
  __int64 v414; // x0
  System_String_o *currentQuestId; // [xsp+10h] [xbp-120h]
  bool v416; // [xsp+1Ch] [xbp-114h]
  BattleResultComponent_resultData_array *resulta; // [xsp+20h] [xbp-110h]
  il2cpp_array_size_t *p_max_length; // [xsp+28h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v419; // [xsp+30h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v420; // [xsp+50h] [xbp-E0h]
  __int128 v421; // [xsp+70h] [xbp-C0h]
  char v422[4]; // [xsp+8Ch] [xbp-A4h] BYREF
  UserSuperBossEntity_o *v423; // [xsp+90h] [xbp-A0h] BYREF
  Il2CppObject *v424; // [xsp+98h] [xbp-98h] BYREF
  QuestPhaseEntity_o *v425; // [xsp+A0h] [xbp-90h] BYREF
  int QuestId_k__BackingField; // [xsp+ACh] [xbp-84h] BYREF
  Il2CppObject *v427; // [xsp+B0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+B8h] [xbp-78h] BYREF
  int v429; // [xsp+C4h] [xbp-6Ch] BYREF
  QuestPhaseEntity_o *v430; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v431; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v432; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v433; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v434; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v435; // 0:x0.16

  v4 = result;
  if ( (byte_4A58862 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPointMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMessageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserSuperBossMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&EventHarvestGrowthInfo_TypeInfo);
    sub_1B885B0(&EventSaveData_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_1B885B0(&QuestClearHeroineInfo_TypeInfo);
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1B885B0(&Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__669_0__);
    sub_1B885B0(&TerminalPramsManager___c_TypeInfo);
    sub_1B885B0(&UserServantCollectionEntity___TypeInfo);
    sub_1B885B0(&UserServantCollectionEntity_TypeInfo);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    sub_1B885B0(&UserSuperBossEntity___TypeInfo);
    sub_1B885B0(&StringLiteral_19880/*"harvestGrowthAfterQuestId"*/);
    sub_1B885B0(&StringLiteral_16709/*"afterActionBk"*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    sub_1B885B0(&StringLiteral_19881/*"harvestGrowthBeforeQuestId"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_6605/*"False"*/);
    result = (BattleResultComponent_resultData_array *)sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A58862 = 1;
  }
  v430 = 0LL;
  v429 = 0;
  v427 = 0LL;
  entity = 0LL;
  QuestId_k__BackingField = 0;
  v424 = 0LL;
  v425 = 0LL;
  v423 = 0LL;
  v422[0] = 0;
  if ( !v4 )
    goto LABEL_1103;
  p_max_length = &v4->max_length;
  if ( !v4->max_length )
    goto LABEL_1104;
  m_Items = (BattleResultComponent_resultData_array **)v4->m_Items;
  v5 = v4->m_Items[0];
  if ( !v5 )
    goto LABEL_1103;
  oldUserSvtCollection = v5->fields.oldUserSvtCollection;
  if ( !oldUserSvtCollection )
    goto LABEL_1103;
  v8 = (_DWORD *)sub_1B88658(UserServantCollectionEntity___TypeInfo, oldUserSvtCollection->max_length);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1103;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_max_length )
    goto LABEL_1104;
  resulta = v4;
  if ( !*m_Items )
    goto LABEL_1103;
  v11 = (*m_Items)->m_Items[11];
  v416 = isWin;
  v429 = 0;
  if ( !v11 )
    goto LABEL_1103;
  eventEndTitle = (int)v11->fields.eventEndTitle;
  if ( eventEndTitle >= 1 )
  {
    v13 = (UserServantCollectionMaster_o *)result;
    v14 = 0;
    while ( v14 < eventEndTitle )
    {
      v15 = *((_QWORD *)&v11->fields.eventEndMessage + (int)v14);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
      if ( !v15 )
        goto LABEL_1103;
      v16 = result;
      v18 = *(_QWORD *)(v15 + 24);
      v17 = *(_QWORD *)(v15 + 32);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v431.fields.currentCryptoKey = v18;
      *(_QWORD *)&v431.fields.fakeValue = v17;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                           v431,
                                                           0LL);
      if ( !v13 )
        goto LABEL_1103;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v13, (int64_t)v16, (int32_t)result, 0LL);
      v20 = (UserServantCollectionEntity_o *)sub_1B887FC(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor_40166064(v20, EntityDefinitely, 0LL);
      if ( !v8 )
        goto LABEL_1103;
      if ( v20 )
      {
        result = (BattleResultComponent_resultData_array *)sub_1B886EC(v20, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
        if ( !result )
          goto LABEL_1105;
      }
      if ( v14 >= v8[6] )
        break;
      v23 = &v8[2 * v14];
      *((_QWORD *)v23 + 4) = v20;
      v24 = (ServantStatusBattleListViewItem_o *)(v23 + 8);
      sub_1B88554(v24, (int32_t)v20, v21, v22);
      if ( v14 >= v8[6] )
        break;
      klass = v24->klass;
      *(_OWORD *)&v420.fields.currentCryptoKey = *(_OWORD *)(v15 + 84);
      if ( !klass )
        goto LABEL_1103;
      *(_OWORD *)((char *)&klass->_1.declaringType + 4) = *(_OWORD *)&v420.fields.currentCryptoKey;
      if ( v14 >= v8[6] )
        break;
      v26 = v24->klass;
      v421 = *(_OWORD *)(v15 + 100);
      if ( !v26 )
        goto LABEL_1103;
      *(_OWORD *)((char *)&v26->_1.generic_class + 4) = v421;
      if ( v14 >= v8[6] )
        break;
      if ( !v24->klass )
        goto LABEL_1103;
      ++v14;
      HIDWORD(v24->klass->_1.interopData) = *(_DWORD *)(v15 + 116);
      v429 = v14;
      eventEndTitle = (int)v11->fields.eventEndTitle;
      if ( (int)v14 >= eventEndTitle )
        goto LABEL_31;
    }
LABEL_1104:
    sub_1B88814(result, isWin);
  }
LABEL_31:
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestClearHeroineInfo = (ServantStatusBattleListViewItem_o *)&v27->static_fields->mQuestClearHeroineInfo;
  p_mQuestClearHeroineInfo->klass = 0LL;
  sub_1B88554(p_mQuestClearHeroineInfo, 0, v9, v10);
  v29 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1104;
  if ( !*m_Items )
    goto LABEL_1103;
  v30 = (*m_Items)->m_Items[5];
  if ( v30 )
  {
    v31 = v30->fields.eventEndTitle;
    if ( v31 )
    {
      if ( !(_DWORD)v31 )
        goto LABEL_1104;
      eventEndMessage = v30->fields.eventEndMessage;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1103;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !eventEndMessage )
        goto LABEL_1103;
      v33 = *(_OWORD *)&eventEndMessage[1].monitor;
      v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)result;
      *(_OWORD *)&v420.fields.currentCryptoKey = *(_OWORD *)&eventEndMessage->fields._stringLength;
      *(_OWORD *)&v420.fields.fakeValue = v33;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v419 = v420;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                           &v419,
                                                           0LL);
      if ( !v34 )
        goto LABEL_1103;
      v35 = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                     v34,
                                     (int64_t)result,
                                     (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v36 = sub_1B887FC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_40192384((UserServantEntity_o *)v36, v35, 0LL);
      v421 = *(_OWORD *)&eventEndMessage[4].klass;
      if ( !v36 )
        goto LABEL_1103;
      *(_OWORD *)(v36 + 96) = v421;
      *(_DWORD *)(v36 + 256) = eventEndMessage[10].fields._stringLength;
      *(_QWORD *)(v36 + 292) = *(System_String_c **)((char *)&eventEndMessage[12].klass + 4);
      monitor = eventEndMessage[5].monitor;
      p_monitor = &eventEndMessage[5].monitor;
      v37 = monitor;
      v40 = p_monitor[1];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v432.fields.currentCryptoKey = v37;
      *(_QWORD *)&v432.fields.fakeValue = v40;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v432, 0LL) >= 1 )
        *(_OWORD *)(v36 + 128) = *(_OWORD *)p_monitor;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1103;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)result,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      v44 = *(_QWORD *)(v36 + 80);
      v43 = *(_QWORD *)(v36 + 88);
      v45 = UserId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v433.fields.currentCryptoKey = v44;
      *(_QWORD *)&v433.fields.fakeValue = v43;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                           v433,
                                                           0LL);
      if ( !MasterData_object )
        goto LABEL_1103;
      result = (BattleResultComponent_resultData_array *)UserServantCollectionMaster__GetEntityDefinitely(
                                                           (UserServantCollectionMaster_o *)MasterData_object,
                                                           v45,
                                                           (int32_t)result,
                                                           0LL);
      v429 = 0;
      if ( !v8 )
        goto LABEL_1103;
      v46 = v8[6];
      v47 = (UserServantCollectionEntity_o *)result;
      if ( v46 >= 1 )
      {
        v48 = 0;
        while ( v48 < (unsigned int)v46 )
        {
          v49 = *(UserServantCollectionEntity_o **)&v8[2 * v48 + 8];
          if ( !v49 )
            goto LABEL_1103;
          v50 = (BattleResultComponent_resultData_array *)v49->fields.userId;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
          if ( v50 == result )
          {
            SvtId = UserServantCollectionEntity__getSvtId(v49, 0LL);
            v53 = *(_QWORD *)(v36 + 80);
            v52 = *(_QWORD *)(v36 + 88);
            v54 = SvtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v434.fields.currentCryptoKey = v53;
            *(_QWORD *)&v434.fields.fakeValue = v52;
            result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                 v434,
                                                                 0LL);
            if ( v54 == (_DWORD)result )
              goto LABEL_67;
          }
          v48 = v429 + 1;
          v429 = v48;
          v46 = v8[6];
          if ( v48 >= v46 )
            goto LABEL_66;
        }
        goto LABEL_1104;
      }
LABEL_66:
      v49 = 0LL;
LABEL_67:
      v55 = sub_1B887FC(QuestClearHeroineInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v55, 0LL);
      if ( !v55 )
        goto LABEL_1103;
      *(_QWORD *)(v55 + 16) = v36;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v55 + 16), v36, v56, v57);
      result = (BattleResultComponent_resultData_array *)UserServantEntity__getLimitCount(
                                                           (UserServantEntity_o *)v36,
                                                           0LL);
      if ( !v35 )
        goto LABEL_1103;
      v60 = (_DWORD)result != UserServantEntity__getLimitCount(v35, 0LL);
      *(_BYTE *)(v55 + 25) = 0;
      *(_DWORD *)(v55 + 28) = 0;
      *(_DWORD *)(v55 + 32) = 0;
      *(_BYTE *)(v55 + 40) = 0;
      *(_DWORD *)(v55 + 36) = -1;
      *(_BYTE *)(v55 + 24) = v60;
      *(_BYTE *)(v55 + 41) = *(_DWORD *)(v36 + 296) != v35->fields.exceedCount;
      if ( v49 )
      {
        result = (BattleResultComponent_resultData_array *)UserServantCollectionEntity__getFriendShipRank(v49, 0LL);
        if ( !v47 )
          goto LABEL_1103;
        if ( (_DWORD)result != UserServantCollectionEntity__getFriendShipRank(v47, 0LL) )
          *(_DWORD *)(v55 + 36) = UserServantCollectionEntity__getFriendShipRank(v49, 0LL);
        if ( v49->fields.friendshipExceedCount != v47->fields.friendshipExceedCount )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
          v63 = *(_QWORD *)(v36 + 80);
          v62 = *(_QWORD *)(v36 + 88);
          v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v435.fields.currentCryptoKey = v63;
          *(_QWORD *)&v435.fields.fakeValue = v62;
          result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                               v435,
                                                               0LL);
          if ( !v64 )
            goto LABEL_1103;
          result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                               v64,
                                                               &entity,
                                                               (int32_t)result,
                                                               (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_1103;
            klass_high = HIDWORD(entity[6].klass);
            friendshipExceedCount = v49->fields.friendshipExceedCount;
            *(_BYTE *)(v55 + 40) = 1;
            *(_DWORD *)(v55 + 36) = friendshipExceedCount + klass_high;
          }
        }
      }
      v67 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v67 = TerminalPramsManager_TypeInfo;
      }
      v68 = (ServantStatusBattleListViewItem_o *)&v67->static_fields->mQuestClearHeroineInfo;
      v68->klass = (ServantStatusBattleListViewItem_c *)v55;
      sub_1B88554(v68, v55, v58, v59);
      v29 = *(_QWORD *)p_max_length;
    }
  }
  if ( !(_DWORD)v29 )
    goto LABEL_1104;
  v69 = (BattleResultComponent_resultData_o *)*m_Items;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetBattleResultCampaignBonus(v69, (const MethodInfo *)isWin);
  if ( !*p_max_length )
    goto LABEL_1104;
  if ( !*m_Items )
    goto LABEL_1103;
  v70 = (*m_Items)->m_Items[9];
  if ( v70 && (v71 = v70->fields.eventEndTitle) != 0LL )
  {
    if ( !(_DWORD)v71 )
      goto LABEL_1104;
    v72 = (UserQuestEntity_o *)v70->fields.eventEndMessage;
  }
  else
  {
    v72 = 0LL;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5807E )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5807E = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE6(result->m_Items[19]->fields.oldUserGame) = v72 != 0LL;
  if ( !byte_4A5807D )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4A5807D = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE5(result->m_Items[19]->fields.oldUserGame) = 0;
  if ( !byte_4A58188 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4A58188 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE1(result->m_Items[19]->fields.resultDamageRewardInfos) = 0;
  if ( !byte_4A5807C )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4A5807C = 1;
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
    if ( !byte_4A57DC0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC0 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( result->m_Items[19]->fields.eventId )
    {
      if ( !v72 )
        goto LABEL_1103;
    }
    else
    {
      if ( !v72 )
        goto LABEL_1103;
      questId = v72->fields.questId;
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4A57DC4 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC4 = 1;
      }
      v74 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v74 = TerminalPramsManager_TypeInfo;
      }
      v74->static_fields->_QuestId_k__BackingField = questId;
      QuestPhase = UserQuestEntity__getQuestPhase(v72, 0LL);
      if ( !byte_4A57DC8 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC8 = 1;
      }
      v76 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v76 = TerminalPramsManager_TypeInfo;
      }
      v76->static_fields->_PhaseCnt_k__BackingField = QuestPhase;
    }
    v77 = v72->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1103;
    v78 = DataManager__GetMasterData_object_(
            (DataManager_o *)result,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
    if ( !v78 )
      goto LABEL_1103;
    v79 = UserQuestMaster__GetEntity((UserQuestMaster_o *)v78, (int64_t)result, v77, 0LL);
    if ( v79 )
    {
      v80 = v79;
      v81 = UserQuestEntity__getQuestPhase(v79, 0LL);
      if ( UserQuestEntity__getClearNum(v72, 0LL) || UserQuestEntity__getClearNum(v80, 0LL) != 1 )
        v82 = UserQuestEntity__IsResetStatus(v72, 0LL) && !UserQuestEntity__IsResetStatus(v80, 0LL);
      else
        v82 = 1;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A5807D )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A5807D = 1;
      }
      v83 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v83 = TerminalPramsManager_TypeInfo;
      }
      v83->static_fields->_IsQuestClear_k__BackingField = v82;
      if ( !byte_4A588D5 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        v83 = TerminalPramsManager_TypeInfo;
        byte_4A588D5 = 1;
      }
      if ( !v83->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v83);
        v83 = TerminalPramsManager_TypeInfo;
      }
      v83->static_fields->_EventUIEffectClearQuestId_k__BackingField = v77;
      if ( !byte_4A588D2 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        v83 = TerminalPramsManager_TypeInfo;
        byte_4A588D2 = 1;
      }
      if ( !v83->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v83);
        v83 = TerminalPramsManager_TypeInfo;
      }
      v83->static_fields->_MapModelClearQuestId_k__BackingField = v77;
      if ( !byte_4A588D3 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        v83 = TerminalPramsManager_TypeInfo;
        byte_4A588D3 = 1;
      }
      if ( !v83->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v83);
        v83 = TerminalPramsManager_TypeInfo;
      }
      v83->static_fields->_MapModelClearPhaseCount_k__BackingField = v81;
      TerminalPramsManager__MapModelClearQuestInfo_SaveData((const MethodInfo *)v83);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !result )
        goto LABEL_1103;
      AdManager__TrackEvent((AdManager_o *)result, 4, 1, v77, v81, 0LL, 0LL);
      TerminalPramsManager__SendClearQuestToAdManager(v77, v81, v84);
    }
    else
    {
      v81 = 0;
    }
    v85 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v85);
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1103;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
    if ( !result )
      goto LABEL_1103;
    ValidMessage = QuestMessageMaster__GetValidMessage((QuestMessageMaster_o *)result, v77, v81, 3, 0LL);
    v88 = TerminalPramsManager_TypeInfo;
    if ( ValidMessage )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A5717A )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A5717A = 1;
      }
      v88 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v88 = TerminalPramsManager_TypeInfo;
      }
      v88->static_fields->_IsDispOnly_k__BackingField = 1;
    }
    if ( !v88->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v88);
    if ( !byte_4A588E3 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588E3 = 1;
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
      if ( !byte_4A588E3 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588E3 = 1;
      }
      v89 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v89 = TerminalPramsManager_TypeInfo;
      }
      TerminalPramsManager__SetQuestReleasedFocusState(
        v89->static_fields->_QuestReleaseFocusQuestId_k__BackingField,
        1,
        v87);
      TerminalPramsManager__SaveQuestReleasedFocusState(v90);
      if ( !byte_4A5838A )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A5838A = 1;
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
  if ( !byte_4A5807F )
  {
    result = (BattleResultComponent_resultData_array *)sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5807F = 1;
  }
  v91 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v91 = TerminalPramsManager_TypeInfo;
  }
  if ( v91->static_fields->_IsQuestClear_k__BackingField )
  {
    if ( !v72 )
      goto LABEL_1103;
    v92 = v72->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1103;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !result )
      goto LABEL_1103;
    v94 = WarMaster__getByLastQuestId((WarMaster_o *)result, v92, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A58080 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58080 = 1;
    }
    v95 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v95 = TerminalPramsManager_TypeInfo;
    }
    v95->static_fields->_IsWarClear_k__BackingField = v94 != 0LL;
    v96 = TerminalPramsManager__CheckIsOrdealCallWarClear(v94, v93);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v96 )
    {
      if ( !byte_4A58081 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A58081 = 1;
      }
      v97 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v97 = TerminalPramsManager_TypeInfo;
      }
      v98 = 1;
    }
    else
    {
      if ( !byte_4A58081 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A58081 = 1;
      }
      v97 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v97 = TerminalPramsManager_TypeInfo;
      }
      v98 = 0;
    }
    v97->static_fields->_IsOrdealCallWarClear_k__BackingField = v98;
    if ( !v97->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v97);
    if ( !byte_4A58082 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58082 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE3(result->m_Items[19]->fields.oldUserEvent) )
    {
      if ( !v94 )
        goto LABEL_1103;
      if ( !WarEntity__IsEvent(v94, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( !result )
          goto LABEL_1103;
        AdManager__TrackEvent((AdManager_o *)result, 6, 1, v94->fields.id, -1, 0LL, 0LL);
      }
    }
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !result )
      goto LABEL_1103;
    AdManager__TrackEvent((AdManager_o *)result, 5, 1, v92, -1, 0LL, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SendOpenedQuestIdToAdManager(v92, v99);
    if ( !byte_4A58082 )
    {
      result = (BattleResultComponent_resultData_array *)sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58082 = 1;
    }
    v91 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v91 = TerminalPramsManager_TypeInfo;
    }
    if ( v91->static_fields->_IsWarClear_k__BackingField )
    {
      if ( !v94 )
        goto LABEL_1103;
      HasFlag = WarEntity__HasFlag(v94, 128, 0LL);
      v91 = TerminalPramsManager_TypeInfo;
      if ( HasFlag )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A5837D )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A5837D = 1;
        }
        v91 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v91 = TerminalPramsManager_TypeInfo;
        }
        v91->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
        if ( !byte_4A58188 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          v91 = TerminalPramsManager_TypeInfo;
          byte_4A58188 = 1;
        }
        if ( !v91->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v91);
          v91 = TerminalPramsManager_TypeInfo;
        }
        v91->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
      }
    }
  }
  if ( !v91->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v91);
  TerminalPramsManager__SetQuestRewardInfo(v4, (const MethodInfo *)isWin);
  if ( !v4->max_length )
    goto LABEL_1104;
  if ( !*m_Items )
    goto LABEL_1103;
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->panelEventPoint = HIDWORD((*m_Items)->m_Items[2]);
  static_fields->mResultEventPanelRewardInfos = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->mResultEventPanelRewardInfos, 0, v101, v102);
  if ( !*p_max_length )
    goto LABEL_1104;
  if ( !*m_Items )
    goto LABEL_1103;
  v106 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[19];
  if ( v106 && v106->_1.namespaze )
  {
    v107 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v107 = TerminalPramsManager_TypeInfo;
    }
    p_mResultEventPanelRewardInfos = (ServantStatusBattleListViewItem_o *)&v107->static_fields->mResultEventPanelRewardInfos;
    p_mResultEventPanelRewardInfos->klass = v106;
    sub_1B88554(p_mResultEventPanelRewardInfos, (int32_t)v106, v104, v105);
  }
  v109 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v109 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = (ServantStatusBattleListViewItem_o *)&v109->static_fields->eventConquestInfos;
  p_eventConquestInfos->klass = 0LL;
  sub_1B88554(p_eventConquestInfos, 0, v104, v105);
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  v113 = TerminalPramsManager_TypeInfo->static_fields;
  v113->eventConquestInfoDisp = 0;
  v114 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1104;
  if ( !*m_Items )
    goto LABEL_1103;
  v115 = (*m_Items)->m_Items[43];
  if ( v115 && v115->fields.eventEndTitle )
  {
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      v113 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v113->eventConquestInfos = (struct EventConquestInfo_array *)v115;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v113->eventConquestInfos, (int32_t)v115, v111, v112);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 1;
    v114 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v114 )
    goto LABEL_1104;
  if ( !*m_Items )
    goto LABEL_1103;
  if ( LOBYTE((*m_Items)->m_Items[46]) )
  {
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_4A58615 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58615 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(result->m_Items[19][1].monitor) = 1;
    if ( !byte_4A5807F )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4A5807F = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      if ( !v72 )
        goto LABEL_1103;
      v116 = v72->fields.questId;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1103;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !result )
        goto LABEL_1103;
      v117 = WarMaster__getByLastQuestId((WarMaster_o *)result, v116, 0LL);
      if ( v117 )
      {
        id = v117->fields.id;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A58616 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A58616 = 1;
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
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1103;
  v119 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1103;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1104;
  if ( !*m_Items || !result )
    goto LABEL_1103;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)result,
          &v427,
          HIDWORD((*m_Items)->bounds),
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_559;
  result = (BattleResultComponent_resultData_array *)v427;
  if ( !v427 )
    goto LABEL_1103;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPoint((EventDetailEntity_o *)v427, 0LL);
  v124 = 0LL;
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !*p_max_length )
      goto LABEL_1104;
    if ( !*m_Items )
      goto LABEL_1103;
    v124 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[10];
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588E4 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588E4 = 1;
  }
  v125 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v125 = TerminalPramsManager_TypeInfo;
  }
  p_OldUserEventPoint_k__BackingField = (ServantStatusBattleListViewItem_o *)&v125->static_fields->_OldUserEventPoint_k__BackingField;
  p_OldUserEventPoint_k__BackingField->klass = v124;
  sub_1B88554(p_OldUserEventPoint_k__BackingField, (int32_t)v124, v122, v123);
  if ( !*p_max_length )
    goto LABEL_1104;
  v127 = &byte_4A57000;
  if ( !*m_Items || !v119 )
    goto LABEL_1103;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidGorupMax(
                                                       (EventRaidMaster_o *)v119,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0LL);
  if ( (int)result >= 1 )
  {
    if ( !*p_max_length )
      goto LABEL_1104;
    if ( !*m_Items )
      goto LABEL_1103;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                         (EventRaidMaster_o *)v119,
                                                         HIDWORD((*m_Items)->bounds),
                                                         0LL);
    v429 = 0;
    if ( !result )
      goto LABEL_1103;
    max_length = result->max_length;
    v129 = result;
    if ( max_length < 1 )
      goto LABEL_559;
    v130 = 0;
    while ( 1 )
    {
      if ( v130 >= (unsigned int)max_length )
        goto LABEL_1104;
      v131 = &v129->obj.klass + v130;
      v132 = v131[4];
      if ( !v132 )
        goto LABEL_1103;
      result = (BattleResultComponent_resultData_array *)EventRaidEntity__IsJumbleSingleRaid(
                                                           (EventRaidEntity_o *)v131[4],
                                                           0LL);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !*p_max_length )
          goto LABEL_1104;
        if ( !*m_Items )
          goto LABEL_1103;
        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                 (EventRaidMaster_o *)v119,
                                 HIDWORD((*m_Items)->bounds),
                                 (int32_t)v132->_1.namespaze,
                                 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A57DC0 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A57DC0 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( RaidGroupDeadQuestId == result->m_Items[19]->fields.eventId )
        {
          result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !result )
            goto LABEL_1103;
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
        goto LABEL_1104;
      if ( !*m_Items )
        goto LABEL_1103;
      result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidAliveQuestIds(
                                                           (EventRaidMaster_o *)v119,
                                                           HIDWORD((*m_Items)->bounds),
                                                           HIDWORD(v132->_1.name),
                                                           0LL);
      QuestId_k__BackingField = 0;
      if ( !result )
        goto LABEL_1103;
      v134 = result->max_length;
      v135 = result;
      if ( v134 >= 1 )
      {
        v136 = 0;
        while ( 1 )
        {
          if ( v136 >= (unsigned int)v134 )
            goto LABEL_1104;
          v137 = *((_DWORD *)v135->m_Items + v136);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A57DC0 )
          {
            sub_1B885B0(&TerminalPramsManager_TypeInfo);
            byte_4A57DC0 = 1;
          }
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          }
          v138 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
          if ( v137 == v138->_QuestId_k__BackingField )
            break;
          v136 = QuestId_k__BackingField + 1;
          QuestId_k__BackingField = v136;
          v134 = v135->max_length;
          if ( v136 >= v134 )
            goto LABEL_365;
        }
        name_high = HIDWORD(v132->_1.name);
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          v138 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v138->clearBattleRaidId = name_high;
      }
LABEL_365:
      v130 = v429 + 1;
      v429 = v130;
      max_length = v129->max_length;
      if ( v130 >= max_length )
        goto LABEL_559;
    }
    v150 = TerminalPramsManager_TypeInfo;
    v151 = HIDWORD(v132->_1.name);
    goto LABEL_414;
  }
  result = (BattleResultComponent_resultData_array *)v427;
  if ( !v427 )
    goto LABEL_1103;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__isRaidDefeatCount(
                                                       (EventDetailEntity_o *)v427,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_array *)v427;
    if ( !v427 )
      goto LABEL_1103;
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventActivityPoint(
                                                         (EventDetailEntity_o *)v427,
                                                         0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !*p_max_length )
        goto LABEL_1104;
      if ( !*m_Items )
        goto LABEL_1103;
      v146 = (int32_t)(*m_Items)->m_Items[42];
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A588E5 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588E5 = 1;
      }
      v147 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v147 = TerminalPramsManager_TypeInfo;
      }
      v147->static_fields->_EventActivityPointEffectState_k__BackingField = v146;
    }
    else
    {
      result = (BattleResultComponent_resultData_array *)v427;
      if ( !v427 )
        goto LABEL_1103;
      if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v427, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A588E6 )
        {
          result = (BattleResultComponent_resultData_array *)sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A588E6 = 1;
        }
        v148 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v148 = TerminalPramsManager_TypeInfo;
        }
        if ( v148->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField )
        {
          v149 = 0;
        }
        else
        {
          if ( !*p_max_length )
            goto LABEL_1104;
          if ( !*m_Items )
            goto LABEL_1103;
          bounds_high = HIDWORD((*m_Items)->bounds);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsUserEventStatus = CondType__IsUserEventStatus(bounds_high, 7, 0LL);
          v148 = TerminalPramsManager_TypeInfo;
          v149 = IsUserEventStatus;
        }
        if ( !v148->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v148);
        if ( !byte_4A58550 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A58550 = 1;
        }
        v166 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v166 = TerminalPramsManager_TypeInfo;
        }
        v166->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = v149;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)v427;
        if ( !v427 )
          goto LABEL_1103;
        if ( !EventDetailEntity__IsEventHappiness((EventDetailEntity_o *)v427, 0LL) )
          goto LABEL_441;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v153 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A57DC0 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A57DC0 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        eventId = result->m_Items[19]->fields.eventId;
        if ( !byte_4A57DCB )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          byte_4A57DCB = 1;
        }
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( !v153 )
          goto LABEL_1103;
        v155 = QuestPhaseMaster__TryGetEntity(
                 (QuestPhaseMaster_o *)v153,
                 &v425,
                 eventId,
                 LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
                 0LL);
        v127 = &byte_4A57000;
        if ( v155 )
        {
          result = (BattleResultComponent_resultData_array *)v425;
          if ( !v425 )
            goto LABEL_1103;
          v156 = QuestPhaseEntity__PlayHappinessCounterEffect(v425, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A58367 )
          {
            sub_1B885B0(&TerminalPramsManager_TypeInfo);
            byte_4A58367 = 1;
          }
          v157 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v157 = TerminalPramsManager_TypeInfo;
          }
          v157->static_fields->_PlayHappinessCounterEffect_k__BackingField = v156;
        }
        else
        {
LABEL_441:
          result = (BattleResultComponent_resultData_array *)v427;
          if ( !v427 )
            goto LABEL_1103;
          result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPanel(
                                                               (EventDetailEntity_o *)v427,
                                                               0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !*p_max_length )
              goto LABEL_1104;
            v158 = &byte_4A58000;
            v159 = &byte_4A58000;
            if ( !*m_Items )
              goto LABEL_1103;
            v160 = (*m_Items)->m_Items[10];
            v429 = 0;
            if ( !v160 )
              goto LABEL_1103;
            v161 = (int)v160->fields.eventEndTitle;
            if ( v161 >= 1 )
            {
              v162 = 0;
              while ( 1 )
              {
                if ( v161 == v162 )
                  goto LABEL_1104;
                if ( !v427 )
                  goto LABEL_1103;
                v163 = *((_QWORD *)&v160->fields.eventEndMessage + v162);
                if ( !v163 )
                  goto LABEL_1103;
                if ( LODWORD(v427[1].klass) == *(_DWORD *)(v163 + 24) )
                  break;
                v429 = ++v162;
                if ( v161 == v162 )
                  goto LABEL_540;
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4A57F0A )
              {
                sub_1B885B0(&TerminalPramsManager_TypeInfo);
                byte_4A57F0A = 1;
              }
              v168 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v168 = TerminalPramsManager_TypeInfo;
              }
              if ( !v168->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
              {
                v169 = (Il2CppObject *)sub_1B887FC(EventSaveData_TypeInfo);
                System_Object___ctor(v169, 0LL);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4A57F0B )
                {
                  sub_1B885B0(&TerminalPramsManager_TypeInfo);
                  byte_4A57F0B = 1;
                }
                v172 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v172 = TerminalPramsManager_TypeInfo;
                }
                p_BeforeEventSubmarineSaveData_k__BackingField = (ServantStatusBattleListViewItem_o *)&v172->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
                p_BeforeEventSubmarineSaveData_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v169;
                sub_1B88554(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v169, v170, v171);
                v168 = TerminalPramsManager_TypeInfo;
              }
              if ( !v168->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v168);
              if ( !byte_4A57F0A )
              {
                sub_1B885B0(&TerminalPramsManager_TypeInfo);
                byte_4A57F0A = 1;
              }
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              ultimateGetQpText = result->m_Items[19]->fields.ultimateGetQpText;
              if ( !ultimateGetQpText )
                goto LABEL_1103;
              ultimateGetQpText->fields._stringLength = *(_DWORD *)(v163 + 24);
              if ( !byte_4A57F0A )
              {
                sub_1B885B0(&TerminalPramsManager_TypeInfo);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
                byte_4A57F0A = 1;
              }
              if ( !LODWORD(result->m_Items[24]) )
              {
                j_il2cpp_runtime_class_init_0(result);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              v175 = result->m_Items[19]->fields.ultimateGetQpText;
              if ( !v175 )
                goto LABEL_1103;
              result = (BattleResultComponent_resultData_array *)v175[1].klass;
              if ( result
                && (result = (BattleResultComponent_resultData_array *)System_String__Split(
                                                                         (System_String_o *)result,
                                                                         0x2Cu,
                                                                         0,
                                                                         0LL)) != 0LL )
              {
                v176 = result->max_length;
                v177 = (__int64 *)&result->m_Items[1];
                if ( v176 <= 1 )
                  v177 = &StringLiteral_1212/*"0"*/;
                v178 = *v177;
                v179 = v176 <= 2 ? (System_String_o **)&StringLiteral_1212/*"0"*/ : (System_String_o **)&result->m_Items[2];
                v180 = *v179;
                v181 = v176 <= 3 ? &StringLiteral_6605/*"False"*/ : (void **)&result->m_Items[3];
              }
              else
              {
                v180 = (System_String_o *)StringLiteral_1212/*"0"*/;
                v181 = &StringLiteral_6605/*"False"*/;
                v178 = StringLiteral_1212/*"0"*/;
              }
              if ( !v427 )
                goto LABEL_1103;
              v182 = (System_String_o *)*v181;
              v183 = (int32_t)v427[1].klass;
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
                                                                   v183,
                                                                   0LL);
              v184 = (System_Collections_Generic_List_object__o *)result;
              currentQuestId = (System_String_o *)v178;
              v185 = TerminalPramsManager___c_TypeInfo;
              if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
                v185 = TerminalPramsManager___c_TypeInfo;
              }
              _9__669_0 = (System_Predicate_object__o *)v185->static_fields->__9__669_0;
              if ( !_9__669_0 )
              {
                if ( !v185->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v185);
                  v185 = TerminalPramsManager___c_TypeInfo;
                }
                v187 = (Il2CppObject *)v185->static_fields->__9;
                _9__669_0 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_QuestReleaseEntity__TypeInfo);
                System_Predicate_object____ctor(
                  _9__669_0,
                  v187,
                  Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__669_0__,
                  0LL);
                v188 = TerminalPramsManager___c_TypeInfo->static_fields;
                v188->__9__669_0 = (struct System_Predicate_QuestReleaseEntity__o *)_9__669_0;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v188->__9__669_0, (int32_t)_9__669_0, v189, v190);
                v127 = &byte_4A57000;
              }
              if ( !v184 )
                goto LABEL_1103;
              v159 = &byte_4A58000;
              if ( System_Collections_Generic_List_object___Find(
                     v184,
                     (System_Predicate_T__o *)_9__669_0,
                     (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4A57DC0 )
                {
                  sub_1B885B0(&TerminalPramsManager_TypeInfo);
                  byte_4A57DC0 = 1;
                }
                v191 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v191 = TerminalPramsManager_TypeInfo;
                }
                QuestId_k__BackingField = v191->static_fields->_QuestId_k__BackingField;
                currentQuestId = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4A57F0A )
              {
                sub_1B885B0(&TerminalPramsManager_TypeInfo);
                byte_4A57F0A = 1;
              }
              v192 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v192 = TerminalPramsManager_TypeInfo;
              }
              BeforeEventSubmarineSaveData_k__BackingField = v192->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
              v194 = System_Int64__ToString(v163 + 32, 0LL);
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_37098120(
                                                                   v194,
                                                                   currentQuestId,
                                                                   v180,
                                                                   v182,
                                                                   0LL);
              if ( !BeforeEventSubmarineSaveData_k__BackingField )
                goto LABEL_1103;
              BeforeEventSubmarineSaveData_k__BackingField->fields.value = (struct System_String_o *)result;
              sub_1B88554(
                (ServantStatusBattleListViewItem_o *)&BeforeEventSubmarineSaveData_k__BackingField->fields.value,
                (int32_t)result,
                v195,
                v196);
              v158 = &byte_4A58000;
            }
LABEL_540:
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4A57DC0 )
            {
              sub_1B885B0(&TerminalPramsManager_TypeInfo);
              byte_4A57DC0 = 1;
            }
            v197 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v197 = TerminalPramsManager_TypeInfo;
            }
            v198 = v197->static_fields->_QuestId_k__BackingField;
            if ( !v127[3531] )
            {
              sub_1B885B0(&TerminalPramsManager_TypeInfo);
              v197 = TerminalPramsManager_TypeInfo;
              v127[3531] = 1;
            }
            if ( !v197->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v197);
              v197 = TerminalPramsManager_TypeInfo;
            }
            PhaseCnt_k__BackingField = v197->static_fields->_PhaseCnt_k__BackingField;
            if ( !v159[127] )
            {
              sub_1B885B0(&TerminalPramsManager_TypeInfo);
              v197 = TerminalPramsManager_TypeInfo;
              v159[127] = 1;
            }
            if ( !v197->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v197);
              v197 = TerminalPramsManager_TypeInfo;
            }
            IsQuestClear_k__BackingField = v197->static_fields->_IsQuestClear_k__BackingField;
            if ( !v158[124] )
            {
              sub_1B885B0(&TerminalPramsManager_TypeInfo);
              v197 = TerminalPramsManager_TypeInfo;
              v158[124] = 1;
            }
            if ( !v197->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v197);
              v197 = TerminalPramsManager_TypeInfo;
            }
            SubmarineSaveParamsManager__SaveClearQuestInfo(
              v198,
              PhaseCnt_k__BackingField,
              IsQuestClear_k__BackingField,
              v197->static_fields->_IsPhaseClear_k__BackingField,
              0LL);
          }
          else
          {
            result = (BattleResultComponent_resultData_array *)v427;
            if ( !v427 )
              goto LABEL_1103;
            if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)v427, 0LL) )
            {
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4A588D8 )
              {
                sub_1B885B0(&TerminalPramsManager_TypeInfo);
                byte_4A588D8 = 1;
              }
              v167 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v167 = TerminalPramsManager_TypeInfo;
              }
              v167->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
            }
          }
        }
      }
    }
    goto LABEL_559;
  }
  if ( !*p_max_length )
    goto LABEL_1104;
  if ( !*m_Items )
    goto LABEL_1103;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                       (EventRaidMaster_o *)v119,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0LL);
  v429 = 0;
  if ( !result )
    goto LABEL_1103;
  v140 = result->max_length;
  v141 = result;
  if ( v140 >= 1 )
  {
    v142 = 0;
    while ( 1 )
    {
      if ( v142 >= (unsigned int)v140 || !*p_max_length )
        goto LABEL_1104;
      if ( !*m_Items )
        goto LABEL_1103;
      v143 = v141->m_Items[v142];
      if ( !v143 )
        goto LABEL_1103;
      RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                          (EventRaidMaster_o *)v119,
                          HIDWORD((*m_Items)->bounds),
                          v143->fields.eventId,
                          0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57DC0 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC0 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v145 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( RaidDeadQuestId == v145->_QuestId_k__BackingField )
        break;
      v142 = v429 + 1;
      v429 = v142;
      v140 = v141->max_length;
      if ( v142 >= v140 )
        goto LABEL_559;
    }
    v152 = v143->fields.eventId;
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      v145 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v145->clearBattleRaidId = v152;
    result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !result )
      goto LABEL_1103;
    if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)result, RaidDeadQuestId, 0, 0LL) )
    {
      v150 = TerminalPramsManager_TypeInfo;
      v151 = v143->fields.eventId;
LABEL_414:
      if ( !v150->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v150);
        v150 = TerminalPramsManager_TypeInfo;
      }
      v150->static_fields->clearLastBattleRaidId = v151;
    }
  }
LABEL_559:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58372 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58372 = 1;
  }
  v201 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v201 = TerminalPramsManager_TypeInfo;
  }
  v201->static_fields->_IsWarBoardClear_k__BackingField = 0;
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v201 = TerminalPramsManager_TypeInfo;
    byte_4A57DC0 = 1;
  }
  if ( !v201->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v201);
    v201 = TerminalPramsManager_TypeInfo;
  }
  if ( v201->static_fields->_QuestId_k__BackingField >= 1 )
  {
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1103;
    v202 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC0 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v202 )
      goto LABEL_1103;
    result = (BattleResultComponent_resultData_array *)QuestMaster__getQuestEntity(
                                                         (QuestMaster_o *)v202,
                                                         result->m_Items[19]->fields.eventId,
                                                         0LL);
    if ( !result )
      goto LABEL_1103;
    v203 = (int)result->m_Items[1];
    if ( !byte_4A58372 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58372 = 1;
    }
    v201 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v201 = TerminalPramsManager_TypeInfo;
    }
    v201->static_fields->_IsWarBoardClear_k__BackingField = v203 == 7;
  }
  if ( !v201->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v201);
  if ( !byte_4A58614 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58614 = 1;
  }
  v204 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v204 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeRelease_k__BackingField = (ServantStatusBattleListViewItem_o *)&v204->static_fields->_questClearCostumeRelease_k__BackingField;
  p_questClearCostumeRelease_k__BackingField->klass = 0LL;
  sub_1B88554(p_questClearCostumeRelease_k__BackingField, 0, v120, v121);
  if ( !*p_max_length )
    goto LABEL_1104;
  if ( !*m_Items )
    goto LABEL_1103;
  v208 = (*m_Items)->m_Items[22];
  if ( v208 && v208->fields.eventEndTitle )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A58363 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58363 = 1;
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
        goto LABEL_1104;
      if ( !*m_Items )
        goto LABEL_1103;
      v209 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[22];
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4A58614 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A58614 = 1;
      }
      v210 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v210 = TerminalPramsManager_TypeInfo;
      }
      v211 = (ServantStatusBattleListViewItem_o *)&v210->static_fields->_questClearCostumeRelease_k__BackingField;
      v211->klass = v209;
      sub_1B88554(v211, (int32_t)v209, v206, v207);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58370 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58370 = 1;
  }
  v212 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v212 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeGet_k__BackingField = (ServantStatusBattleListViewItem_o *)&v212->static_fields->_questClearCostumeGet_k__BackingField;
  p_questClearCostumeGet_k__BackingField->klass = 0LL;
  sub_1B88554(p_questClearCostumeGet_k__BackingField, 0, v206, v207);
  if ( !*p_max_length )
    goto LABEL_1104;
  if ( !*m_Items )
    goto LABEL_1103;
  v216 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[23];
  if ( v216 && v216->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A58370 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58370 = 1;
    }
    v217 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v217 = TerminalPramsManager_TypeInfo;
    }
    v218 = (ServantStatusBattleListViewItem_o *)&v217->static_fields->_questClearCostumeGet_k__BackingField;
    v218->klass = v216;
    sub_1B88554(v218, (int32_t)v216, v214, v215);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588E7 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588E7 = 1;
  }
  v219 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v219 = TerminalPramsManager_TypeInfo;
  }
  p_eventPointWinReward_k__BackingField = (ServantStatusBattleListViewItem_o *)&v219->static_fields->_eventPointWinReward_k__BackingField;
  p_eventPointWinReward_k__BackingField->klass = 0LL;
  sub_1B88554(p_eventPointWinReward_k__BackingField, 0, v214, v215);
  if ( !byte_4A588E8 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588E8 = 1;
  }
  v223 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v223 = TerminalPramsManager_TypeInfo;
  }
  v223->static_fields->_eventPointWinType_k__BackingField = 0;
  if ( v72 && v427 && HIDWORD(v427[9].klass) == 4 )
  {
    v224 = v72->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1103;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !result )
      goto LABEL_1103;
    v225 = (QuestGroupMaster_o *)result;
    GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)result, v224, 4, 0LL);
    v227 = TerminalPramsManager_TypeInfo;
    v228 = GroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v227 = TerminalPramsManager_TypeInfo;
    }
    v227->static_fields->joinGroupId = v228;
    v229 = QuestGroupMaster__GetGroupId(v225, v224, 3, 0LL);
    if ( !byte_4A5807F )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5807F = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( v229 >= 1 && BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1103;
      v230 = DataManager__GetMasterData_object_(
               (DataManager_o *)result,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1103;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPointMaster___);
      if ( !*p_max_length )
        goto LABEL_1104;
      if ( !*m_Items || !result )
        goto LABEL_1103;
      result = (BattleResultComponent_resultData_array *)EventPointMaster__GetEntity(
                                                           (EventPointMaster_o *)result,
                                                           v229,
                                                           HIDWORD((*m_Items)->bounds),
                                                           0LL);
      v231 = (EventPointEntity_o *)result;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v231 )
        goto LABEL_1103;
      result = (BattleResultComponent_resultData_array *)EventPointEntity__IsGroupOnGroup1(
                                                           v231,
                                                           TerminalPramsManager_TypeInfo->static_fields->joinGroupId,
                                                           0LL);
      if ( !v230 )
        goto LABEL_1103;
      v232 = QuestReleaseMaster__EventPointWinActionType(
               (QuestReleaseMaster_o *)v230,
               v224,
               (unsigned __int8)result & 1,
               0LL);
      if ( !byte_4A588E8 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588E8 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(result->m_Items[19]->fields.warClearReward) = v232;
      if ( !byte_4A588E9 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        byte_4A588E9 = 1;
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v233 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( v233->_eventPointWinType_k__BackingField )
      {
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          v233 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v233->joinGroupId = -1;
      }
    }
    if ( !*p_max_length )
      goto LABEL_1104;
    if ( !*m_Items )
      goto LABEL_1103;
    v234 = (*m_Items)->m_Items[20];
    if ( v234 )
    {
      v235 = v234->fields.eventEndTitle;
      if ( v235 )
      {
        if ( !(_DWORD)v235 )
          goto LABEL_1104;
        v236 = (ServantStatusBattleListViewItem_c *)v234->fields.eventEndMessage;
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_4A588E7 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A588E7 = 1;
        }
        v237 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v237 = TerminalPramsManager_TypeInfo;
        }
        v238 = (ServantStatusBattleListViewItem_o *)&v237->static_fields->_eventPointWinReward_k__BackingField;
        v238->klass = v236;
        sub_1B88554(v238, (int32_t)v236, v221, v222);
      }
    }
  }
  if ( v72 && v427 && HIDWORD(v427[9].klass) == 6 )
  {
    v239 = v72->fields.questId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588EA )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588EA = 1;
    }
    v240 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v240 = TerminalPramsManager_TypeInfo;
    }
    v240->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = v239;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5854B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5854B = 1;
  }
  v241 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v241 = TerminalPramsManager_TypeInfo;
  }
  p_eventRaceBoost_k__BackingField = (ServantStatusBattleListViewItem_o *)&v241->static_fields->_eventRaceBoost_k__BackingField;
  p_eventRaceBoost_k__BackingField->klass = 0LL;
  sub_1B88554(p_eventRaceBoost_k__BackingField, 0, v221, v222);
  v245 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1104;
  if ( !*m_Items )
    goto LABEL_1103;
  v246 = (*m_Items)->m_Items[21];
  if ( v246 && v246->fields.battleId >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A5854B )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5854B = 1;
    }
    v247 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v247 = TerminalPramsManager_TypeInfo;
    }
    v248 = (ServantStatusBattleListViewItem_o *)&v247->static_fields->_eventRaceBoost_k__BackingField;
    v248->klass = (ServantStatusBattleListViewItem_c *)v246;
    sub_1B88554(v248, (int32_t)v246, v243, v244);
    if ( !byte_4A58534 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58534 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v249 = *(_QWORD *)&result->m_Items[19]->fields.followerType;
    if ( !byte_4A57DC0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4A57DC0 = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v249 )
      goto LABEL_1103;
    *(_DWORD *)(v249 + 28) = result->m_Items[19]->fields.eventId;
    v245 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v245 )
    goto LABEL_1104;
  if ( !*m_Items )
    goto LABEL_1103;
  v250 = (*m_Items)->m_Items[24];
  if ( v250 )
  {
    v251 = v250->fields.eventEndTitle;
    if ( v251 )
    {
      if ( !(_DWORD)v251 )
        goto LABEL_1104;
      v252 = v250->fields.eventEndMessage;
      if ( !v252 )
        goto LABEL_1103;
      if ( v252->fields._stringLength >= 1 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A588EB )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A588EB = 1;
        }
        v253 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v253 = TerminalPramsManager_TypeInfo;
        }
        p_eventTowerReward_k__BackingField = (ServantStatusBattleListViewItem_o *)&v253->static_fields->_eventTowerReward_k__BackingField;
        p_eventTowerReward_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v252;
        sub_1B88554(p_eventTowerReward_k__BackingField, (int32_t)v252, v243, v244);
        if ( !*p_max_length )
          goto LABEL_1104;
        if ( !*m_Items )
          goto LABEL_1103;
        v257 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[25];
        if ( !byte_4A588EC )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A588EC = 1;
        }
        v258 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v258 = TerminalPramsManager_TypeInfo;
        }
        p_resultEventTowerRewardInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v258->static_fields->_resultEventTowerRewardInfo_k__BackingField;
        p_resultEventTowerRewardInfo_k__BackingField->klass = v257;
        sub_1B88554(p_resultEventTowerRewardInfo_k__BackingField, (int32_t)v257, v255, v256);
        v245 = *(_QWORD *)p_max_length;
      }
    }
  }
  if ( !(_DWORD)v245 )
    goto LABEL_1104;
  if ( !*m_Items )
    goto LABEL_1103;
  v260 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[26];
  if ( v260 && v260->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A5836A )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5836A = 1;
    }
    v261 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v261 = TerminalPramsManager_TypeInfo;
    }
    p_resultBoostItemRewardInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v261->static_fields->_resultBoostItemRewardInfo_k__BackingField;
    p_resultBoostItemRewardInfo_k__BackingField->klass = v260;
    sub_1B88554(p_resultBoostItemRewardInfo_k__BackingField, (int32_t)v260, v243, v244);
    v245 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v245 )
    goto LABEL_1104;
  if ( !*m_Items )
    goto LABEL_1103;
  v263 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[27];
  if ( v263 && v263->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A5836B )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5836B = 1;
    }
    v264 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v264 = TerminalPramsManager_TypeInfo;
    }
    p_resultEventBoardGameTokenRewardInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v264->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
    p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = v263;
    sub_1B88554(p_resultEventBoardGameTokenRewardInfo_k__BackingField, (int32_t)v263, v243, v244);
    v245 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v245 )
    goto LABEL_1104;
  if ( !*m_Items )
    goto LABEL_1103;
  v266 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[28];
  if ( v266 && v266->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A58375 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58375 = 1;
    }
    v267 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v267 = TerminalPramsManager_TypeInfo;
    }
    p_warClearReward_k__BackingField = (ServantStatusBattleListViewItem_o *)&v267->static_fields->_warClearReward_k__BackingField;
    p_warClearReward_k__BackingField->klass = v266;
    sub_1B88554(p_warClearReward_k__BackingField, (int32_t)v266, v243, v244);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588ED )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588ED = 1;
  }
  v269 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v269 = TerminalPramsManager_TypeInfo;
  }
  v270 = v269->static_fields;
  v270->_oldSuperBoss_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v270->_oldSuperBoss_k__BackingField, 0, v243, v244);
  if ( !byte_4A588EE )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588EE = 1;
  }
  v273 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v273 = TerminalPramsManager_TypeInfo;
  }
  v274 = v273->static_fields;
  v274->_oldPersonalBoss_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v274->_oldPersonalBoss_k__BackingField, 0, v271, v272);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_1103;
  WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, result->m_Items[19]->fields.eventId, 0LL);
  result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !result )
    goto LABEL_1103;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)result, WarID_ByQuestID, 0LL);
  if ( WarEntityByWarID )
    v278 = WarEntityByWarID->fields.eventId;
  else
    v278 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !result )
    goto LABEL_1103;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v424,
                                                       v278,
                                                       (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( v416 )
    goto LABEL_1108;
  if ( !*p_max_length )
    goto LABEL_1104;
  result = *m_Items;
  if ( !*m_Items )
    goto LABEL_1103;
  result = (BattleResultComponent_resultData_array *)BattleResultComponent_resultData__checkResultDispFlag(
                                                       (BattleResultComponent_resultData_o *)result,
                                                       256,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
LABEL_1108:
    v281 = *(_QWORD *)p_max_length;
    if ( !(unsigned int)*(_QWORD *)p_max_length )
      goto LABEL_1104;
    if ( !*m_Items )
      goto LABEL_1103;
    if ( (*m_Items)->m_Items[41] )
    {
      result = (BattleResultComponent_resultData_array *)v424;
      if ( v424
        && (result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsPersonalBoss(
                                                                 (EventDetailEntity_o *)v424,
                                                                 0LL),
            v281 = *(_QWORD *)p_max_length,
            ((unsigned __int8)result & 1) != 0) )
      {
        if ( !(_DWORD)v281 )
          goto LABEL_1104;
        if ( !*m_Items )
          goto LABEL_1103;
        v282 = (*m_Items)->m_Items[41];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A588EE )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A588EE = 1;
        }
        v283 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v283 = TerminalPramsManager_TypeInfo;
        }
        v284 = v283->static_fields;
        v284->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v282;
        p_oldPersonalBoss_k__BackingField = (ServantStatusBattleListViewItem_o *)&v284->_oldPersonalBoss_k__BackingField;
      }
      else
      {
        if ( !(_DWORD)v281 )
          goto LABEL_1104;
        if ( !*m_Items )
          goto LABEL_1103;
        v282 = (*m_Items)->m_Items[41];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A588ED )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A588ED = 1;
        }
        v286 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v286 = TerminalPramsManager_TypeInfo;
        }
        v287 = v286->static_fields;
        v287->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v282;
        p_oldPersonalBoss_k__BackingField = (ServantStatusBattleListViewItem_o *)&v287->_oldSuperBoss_k__BackingField;
      }
      sub_1B88554(p_oldPersonalBoss_k__BackingField, (int32_t)v282, v279, v280);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588EF )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588EF = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !result->m_Items[19]->fields.eventTowerReward )
    goto LABEL_1109;
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4A588EF )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588EF = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  eventTowerReward = result->m_Items[19]->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_1103;
  if ( *(_QWORD *)&eventTowerReward->max_length )
  {
    v289 = 1;
  }
  else
  {
LABEL_1109:
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_4A57DC0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC0 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v290 = BalanceConfig_TypeInfo;
    v291 = result->m_Items[19]->fields.eventId;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v290 = BalanceConfig_TypeInfo;
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v289 = v291 == v290->static_fields->OrtFirstQuestId;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4A58383 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58383 = 1;
  }
  v292 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v292 = TerminalPramsManager_TypeInfo;
  }
  v292->static_fields->_isIncomingCall_k__BackingField = v289;
  if ( v424 && EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)v424, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC0 = 1;
    }
    v293 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v293 = TerminalPramsManager_TypeInfo;
    }
    v294 = BalanceConfig_TypeInfo;
    v295 = v293->static_fields->_QuestId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v294 = BalanceConfig_TypeInfo;
    }
    if ( v295 == v294->static_fields->OrtLateQuestId )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57DCB )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DCB = 1;
      }
      v296 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v296 = TerminalPramsManager_TypeInfo;
      }
      v297 = BalanceConfig_TypeInfo;
      v298 = v296->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v297 = BalanceConfig_TypeInfo;
      }
      if ( v298 + 1 == v297->static_fields->OrtLatePhaseBreak )
        goto LABEL_1110;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57DCB )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DCB = 1;
      }
      v299 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v299 = TerminalPramsManager_TypeInfo;
      }
      v300 = BalanceConfig_TypeInfo;
      v301 = v299->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v300 = BalanceConfig_TypeInfo;
      }
      if ( v301 + 1 == v300->static_fields->OrtLatePhaseDead )
      {
LABEL_1110:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v302 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserSuperBossMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
        v303 = result;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v302 )
          goto LABEL_1103;
        if ( UserSuperBossMaster__TryGetEntity(
               (UserSuperBossMaster_o *)v302,
               &v423,
               (int64_t)v303,
               v278,
               BalanceConfig_TypeInfo->static_fields->OrtThirdFormId,
               0LL) )
        {
          result = (BattleResultComponent_resultData_array *)sub_1B88658(UserSuperBossEntity___TypeInfo, 1LL);
          if ( !result )
            goto LABEL_1103;
          v306 = v423;
          v307 = result;
          if ( v423 )
          {
            result = (BattleResultComponent_resultData_array *)sub_1B886EC(v423, result->obj.klass->_1.element_class);
            if ( !result )
            {
LABEL_1105:
              v414 = sub_1B88830(result);
              sub_1B886D8(v414, 0LL);
            }
          }
          if ( !v307->max_length )
            goto LABEL_1104;
          v307->m_Items[0] = (BattleResultComponent_resultData_o *)v306;
          sub_1B88554((ServantStatusBattleListViewItem_o *)v307->m_Items, (int32_t)v306, v304, v305);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A588EE )
          {
            sub_1B885B0(&TerminalPramsManager_TypeInfo);
            byte_4A588EE = 1;
          }
          v310 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v310 = TerminalPramsManager_TypeInfo;
          }
          v311 = v310->static_fields;
          v311->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v307;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&v311->_oldPersonalBoss_k__BackingField,
            (int32_t)v307,
            v308,
            v309);
        }
      }
    }
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  TalkResumeInfo = ScriptManager__GetTalkResumeInfo(0LL);
  if ( TalkResumeInfo )
  {
    v313 = TalkResumeInfo;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1103;
    v314 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC0 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v314 )
      goto LABEL_1103;
    ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)v314, result->m_Items[19]->fields.eventId, 0LL);
    v316 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !byte_4A57DCB )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DCB = 1;
    }
    v317 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v317 = TerminalPramsManager_TypeInfo;
    }
    v318 = v317->static_fields->_PhaseCnt_k__BackingField;
    winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v313, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd2(
                                                         ScriptQuestId,
                                                         v318 + 1,
                                                         winResult,
                                                         0LL);
    if ( !v316 )
      goto LABEL_1103;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v316, (System_String_o *)result, 0LL) )
      goto LABEL_930;
    v322 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DCB )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DCB = 1;
    }
    v323 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v323 = TerminalPramsManager_TypeInfo;
    }
    v324 = v323->static_fields->_PhaseCnt_k__BackingField;
    v325 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v313, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd(
                                                         ScriptQuestId,
                                                         v324 + 1,
                                                         v325,
                                                         0LL);
    if ( !v322 )
      goto LABEL_1103;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v322, (System_String_o *)result, 0LL) )
    {
LABEL_930:
      v326 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v326 = TerminalPramsManager_TypeInfo;
      }
      v327 = (int)StringLiteral_1/*""*/;
      p_lastPlayBgmName = (ServantStatusBattleListViewItem_o *)&v326->static_fields->lastPlayBgmName;
      p_lastPlayBgmName->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
      sub_1B88554(p_lastPlayBgmName, v327, v320, v321);
      TerminalPramsManager__LastPlayBgmNameSave_SaveData(v329);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1103;
  v330 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v331 = result->m_Items[19]->fields.eventId;
  if ( !byte_4A57DCB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4A57DCB = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v330 )
    goto LABEL_1103;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)v330,
    &v430,
    v331,
    LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
    0LL);
  if ( !byte_4A588F0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588F0 = 1;
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
    if ( !byte_4A588F0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588F0 = 1;
    }
    v334 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v334 = TerminalPramsManager_TypeInfo;
    }
    result = (BattleResultComponent_resultData_array *)v334->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
    if ( !result )
      goto LABEL_1103;
    *(_QWORD *)&result->max_length = 0LL;
    v335 = &result->max_length;
    *((_QWORD *)v335 - 1) = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v335, 0, v332, v333);
  }
  if ( !*p_max_length )
    goto LABEL_1104;
  if ( !*m_Items )
    goto LABEL_1103;
  v336 = HIDWORD((*m_Items)->bounds);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  v337 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v337 = TerminalPramsManager_TypeInfo;
  }
  v338 = v337->static_fields->_QuestId_k__BackingField;
  if ( !byte_4A57DCB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v337 = TerminalPramsManager_TypeInfo;
    byte_4A57DCB = 1;
  }
  if ( !v337->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v337);
    v337 = TerminalPramsManager_TypeInfo;
  }
  SpecifiedSceneInfo = QuestPhaseMaster__GetSpecifiedSceneInfo(
                         (QuestPhaseMaster_o *)v330,
                         v336,
                         v338,
                         v337->static_fields->_PhaseCnt_k__BackingField + 1,
                         0LL);
  if ( !byte_4A588CF )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588CF = 1;
  }
  v342 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v342 = TerminalPramsManager_TypeInfo;
  }
  v343 = v342->static_fields;
  v343->_SpecifiedChangeSceneInfo_k__BackingField = SpecifiedSceneInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v343->_SpecifiedChangeSceneInfo_k__BackingField,
    (int32_t)SpecifiedSceneInfo,
    v339,
    v340);
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId = 0LL;
  TerminalPramsManager__InitTipsArchiveScrollValueList(v344);
  if ( !*p_max_length )
    goto LABEL_1104;
  if ( !*m_Items )
    goto LABEL_1103;
  v347 = (int32_t)(*m_Items)->m_Items[52];
  v348 = TerminalPramsManager_TypeInfo;
  if ( v347 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A58365 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58365 = 1;
    }
    v348 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v348 = TerminalPramsManager_TypeInfo;
    }
    v348->static_fields->_EventMuralId_k__BackingField = v347;
  }
  if ( !v348->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v348);
    v348 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = (ServantStatusBattleListViewItem_o *)&v348->static_fields->eventHarvestGrowthInfo;
  p_eventHarvestGrowthInfo->klass = 0LL;
  sub_1B88554(p_eventHarvestGrowthInfo, 0, v345, v346);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  v350 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v350 = TerminalPramsManager_TypeInfo;
  }
  result = (BattleResultComponent_resultData_array *)QuestPhaseMaster__GetEntity(
                                                       (QuestPhaseMaster_o *)v330,
                                                       v350->static_fields->_QuestId_k__BackingField,
                                                       1,
                                                       0LL);
  if ( !result )
    goto LABEL_1103;
  v351 = result;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(
                     (QuestPhaseEntity_o *)result,
                     (System_String_o *)StringLiteral_19881/*"harvestGrowthBeforeQuestId"*/,
                     -1,
                     0LL);
  v353 = QuestPhaseEntity__getScriptIntParam(
           (QuestPhaseEntity_o *)v351,
           (System_String_o *)StringLiteral_19880/*"harvestGrowthAfterQuestId"*/,
           -1,
           0LL);
  if ( ScriptIntParam >= 1 )
  {
    v354 = v353;
    if ( v353 >= 1 )
    {
      v355 = sub_1B887FC(EventHarvestGrowthInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v355, 0LL);
      if ( !v355 )
        goto LABEL_1103;
      bounds = v351->bounds;
      *(_DWORD *)(v355 + 24) = ScriptIntParam;
      *(_DWORD *)(v355 + 28) = v354;
      *(_QWORD *)(v355 + 16) = bounds;
      v359 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v359 = TerminalPramsManager_TypeInfo;
      }
      v360 = (ServantStatusBattleListViewItem_o *)&v359->static_fields->eventHarvestGrowthInfo;
      v360->klass = (ServantStatusBattleListViewItem_c *)v355;
      sub_1B88554(v360, v355, v356, v357);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1103;
  v361 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v361 )
    goto LABEL_1103;
  QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)v361, result->m_Items[19]->fields.eventId, 0LL);
  if ( QuestEntity )
  {
    v365 = QuestEntity;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC0 = 1;
    }
    v366 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v366 = TerminalPramsManager_TypeInfo;
    }
    if ( QuestPhaseMaster__IsAreaImproveQuest(
           (QuestPhaseMaster_o *)v330,
           v366->static_fields->_QuestId_k__BackingField,
           0LL) )
    {
      SpotId = QuestEntity__getSpotId(v365, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
      if ( !*p_max_length )
        goto LABEL_1104;
      if ( !*m_Items || !result )
        goto LABEL_1103;
      CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                             (UserEventCooltimeRewardMaster_o *)result,
                             HIDWORD((*m_Items)->bounds),
                             SpotId,
                             0LL);
      if ( CurrentLevelEntity )
      {
        v369 = CurrentLevelEntity;
        v370 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v370 = TerminalPramsManager_TypeInfo;
        }
        eventAreaImproveResultInfo = v370->static_fields->eventAreaImproveResultInfo;
        if ( eventAreaImproveResultInfo )
        {
          if ( !v370->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v370);
            eventAreaImproveResultInfo = TerminalPramsManager_TypeInfo->static_fields->eventAreaImproveResultInfo;
            if ( !eventAreaImproveResultInfo )
              goto LABEL_1103;
          }
          eventAreaImproveResultInfo->fields.afterLevel = v369->fields.lv;
        }
      }
    }
  }
  result = (BattleResultComponent_resultData_array *)v430;
  if ( v430 )
  {
    result = (BattleResultComponent_resultData_array *)QuestPhaseEntity__GetMoveSceneInfo(v430, 0LL);
    if ( !result )
      goto LABEL_1103;
    if ( *(_QWORD *)&result->max_length )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57DC0 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC0 = 1;
      }
      v372 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v372 = TerminalPramsManager_TypeInfo;
      }
      v429 = v372->static_fields->_QuestId_k__BackingField;
      v373 = System_Int32__ToString((int32_t)&v429, 0LL);
      if ( !byte_4A57DCB )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DCB = 1;
      }
      v374 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v374 = TerminalPramsManager_TypeInfo;
      }
      v429 = v374->static_fields->_PhaseCnt_k__BackingField + 1;
      v375 = System_Int32__ToString((int32_t)&v429, 0LL);
      v378 = System_String__Concat_61718292(v373, (System_String_o *)StringLiteral_868/*","*/, v375, 0LL);
      if ( !byte_4A5854A )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A5854A = 1;
      }
      v379 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v379 = TerminalPramsManager_TypeInfo;
      }
      p_SceneMoveQuestClearedInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v379->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
      p_SceneMoveQuestClearedInfo_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v378;
      sub_1B88554(p_SceneMoveQuestClearedInfo_k__BackingField, (int32_t)v378, v376, v377);
    }
  }
  if ( !*p_max_length )
    goto LABEL_1104;
  if ( !*m_Items )
    goto LABEL_1103;
  v381 = (ServantStatusBattleListViewItem_c *)(*m_Items)->m_Items[47];
  if ( v381 && v381->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A5836E )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5836E = 1;
    }
    v382 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v382 = TerminalPramsManager_TypeInfo;
    }
    p_limitImageAnnounces_k__BackingField = (ServantStatusBattleListViewItem_o *)&v382->static_fields->_limitImageAnnounces_k__BackingField;
    p_limitImageAnnounces_k__BackingField->klass = v381;
    sub_1B88554(p_limitImageAnnounces_k__BackingField, (int32_t)v381, v363, v364);
  }
  v384 = sub_1B88658(string___TypeInfo, 7LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  v385 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v385 = TerminalPramsManager_TypeInfo;
  }
  v429 = v385->static_fields->_QuestId_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v429, 0LL);
  if ( !v384 )
LABEL_1103:
    sub_1B8880C(result, isWin);
  if ( !*(_DWORD *)(v384 + 24) )
    goto LABEL_1104;
  *(_QWORD *)(v384 + 32) = result;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v384 + 32), (int32_t)result, v386, v387);
  if ( *(_DWORD *)(v384 + 24) <= 1u )
    goto LABEL_1104;
  v390 = (int)StringLiteral_868/*","*/;
  *(_QWORD *)(v384 + 40) = StringLiteral_868/*","*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v384 + 40), v390, v388, v389);
  if ( !byte_4A57DCB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DCB = 1;
  }
  v391 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v391 = TerminalPramsManager_TypeInfo;
  }
  v429 = v391->static_fields->_PhaseCnt_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v429, 0LL);
  if ( *(_DWORD *)(v384 + 24) <= 2u )
    goto LABEL_1104;
  *(_QWORD *)(v384 + 48) = result;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v384 + 48), (int32_t)result, v392, v393);
  if ( *(_DWORD *)(v384 + 24) <= 3u )
    goto LABEL_1104;
  v396 = (int)StringLiteral_868/*","*/;
  *(_QWORD *)(v384 + 56) = StringLiteral_868/*","*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v384 + 56), v396, v394, v395);
  if ( !byte_4A5807F )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5807F = 1;
  }
  v397 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v397 = TerminalPramsManager_TypeInfo;
  }
  v422[0] = v397->static_fields->_IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v422, 0LL);
  if ( *(_DWORD *)(v384 + 24) <= 4u )
    goto LABEL_1104;
  *(_QWORD *)(v384 + 64) = result;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v384 + 64), (int32_t)result, v398, v399);
  if ( *(_DWORD *)(v384 + 24) <= 5u )
    goto LABEL_1104;
  v402 = (int)StringLiteral_868/*","*/;
  *(_QWORD *)(v384 + 72) = StringLiteral_868/*","*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v384 + 72), v402, v400, v401);
  if ( !byte_4A5807C )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5807C = 1;
  }
  v403 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v403 = TerminalPramsManager_TypeInfo;
  }
  v422[0] = v403->static_fields->_IsPhaseClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v422, 0LL);
  if ( *(_DWORD *)(v384 + 24) <= 6u )
    goto LABEL_1104;
  *(_QWORD *)(v384 + 80) = result;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v384 + 80), (int32_t)result, v404, v405);
  v406 = System_String__Concat_61720560((System_String_array *)v384, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_16709/*"afterActionBk"*/, v406, 0LL);
  TerminalPramsManager__SaveClearDatas(resulta, v407);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v408);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v409);
  TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(v410);
  TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(v411);
  if ( TerminalPramsManager__IsTerminalEffectNT2BoardOpen(v412) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DCA )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DCA = 1;
    }
    v413 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v413 = TerminalPramsManager_TypeInfo;
    }
    v413->static_fields->_WarId_k__BackingField = 0;
    if ( !byte_4A5644B )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      v413 = TerminalPramsManager_TypeInfo;
      byte_4A5644B = 1;
    }
    if ( !v413->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v413);
      v413 = TerminalPramsManager_TypeInfo;
    }
    v413->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4A58358 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      v413 = TerminalPramsManager_TypeInfo;
      byte_4A58358 = 1;
    }
    if ( !v413->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v413);
      v413 = TerminalPramsManager_TypeInfo;
    }
    v413->static_fields->_IsMapReturnFolder_k__BackingField = 0;
    if ( !byte_4A5853F )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      v413 = TerminalPramsManager_TypeInfo;
      byte_4A5853F = 1;
    }
    if ( !v413->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v413);
      v413 = TerminalPramsManager_TypeInfo;
    }
    v413->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData((const MethodInfo *)v413);
  }
}


void __fastcall TerminalPramsManager__ResetBlankEarthSpotInfo(const MethodInfo *method)
{
  const MethodInfo *v1; // x0

  if ( (byte_4A5881E & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5881E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57CDF )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57CDF = 1;
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
  int32_t v1; // w2
  int32_t v2; // w3
  TerminalPramsManager_c *v3; // x0
  ServantStatusBattleListViewItem_o *p_TalkScriptInfo_k__BackingField; // x0
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4A58828 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58828 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588C1 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588C1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestMessageScriptQuestId_k__BackingField = -1;
  if ( !byte_4A588C2 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A588C2 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = -1;
  if ( !byte_4A58618 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A58618 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  p_TalkScriptInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&v3->static_fields->_TalkScriptInfo_k__BackingField;
  p_TalkScriptInfo_k__BackingField->klass = 0LL;
  sub_1B88554(p_TalkScriptInfo_k__BackingField, 0, v1, v2);
  if ( !byte_4A588C3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588C3 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  TerminalPramsManager_c *v3; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x22
  TerminalPramsManager_c *v5; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  BattleResultComponent_resultData_o *v8; // x0
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct TerminalPramsManager_StaticFields *v11; // x8
  _BOOL4 IsPhaseClear_k__BackingField; // w26
  _BOOL4 IsDispOnly_k__BackingField; // w27
  struct TerminalPramsManager_StaticFields *v14; // x8
  _BOOL4 IsWarBoardClear_k__BackingField; // w25
  BattleDropItem_array *questResultAfterEventRewardInfos; // x24
  BattleDropItem_array *mResultEventPanelRewardInfos; // x28
  int32_t panelEventPoint; // w20
  LimitImageAnnounce_array *limitImageAnnounces; // x21
  QuestRewardInfo_array *v20; // x29
  bool isWarBoardClear; // w22
  TerminalPramsManager_ClearData_o *v22; // x25
  TerminalPramsManager_c *v23; // x0
  TerminalPramsManager_ClearData_c *v24; // x0
  System_String_o *SAVEKEY_CLEAR_REWARD_DISP; // x19
  System_String_o *v26; // x1
  int32_t v27; // [xsp+98h] [xbp-F8h]
  const MethodInfo *v28; // [xsp+A0h] [xbp-F0h]
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

  if ( (byte_4A5886C & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5886C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v3->static_fields->mQuestRewardInfos;
  if ( result )
  {
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( !byte_4A57DC0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC0 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    v6 = TerminalPramsManager__IsFreeQuestOnOrdealCall(v5->static_fields->_QuestId_k__BackingField, method);
    if ( v6 )
    {
      if ( !result->max_length )
        sub_1B88814(v6, v7);
      v8 = result->m_Items[0];
      if ( !v8 )
        sub_1B8880C(0LL, v7);
      if ( BattleResultComponent_resultData__checkResultDispFlag(v8, 2048, 0LL) )
        mQuestRewardInfos = 0LL;
    }
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  mQuestClearHeroineInfo = static_fields->mQuestClearHeroineInfo;
  mQuestPhaseRewardInfos = static_fields->mQuestPhaseRewardInfos;
  if ( !byte_4A5807F )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4A5807F = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  IsQuestClear_k__BackingField = v9->static_fields->_IsQuestClear_k__BackingField;
  if ( !byte_4A5807C )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4A5807C = 1;
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
  if ( !byte_4A588F1 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4A588F1 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  oldSuperBoss = v9->static_fields->_oldSuperBoss_k__BackingField;
  if ( !byte_4A588EF )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4A588EF = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss = v9->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !byte_4A588F2 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4A588F2 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  eventPointWinReward_k__BackingField = v9->static_fields->_eventPointWinReward_k__BackingField;
  if ( !byte_4A588E9 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4A588E9 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  evpWinType = v9->static_fields->_eventPointWinType_k__BackingField;
  if ( !byte_4A58534 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4A58534 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  evRace = v9->static_fields->_eventRaceBoost_k__BackingField;
  if ( !byte_4A5836C )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4A5836C = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeRelease = v9->static_fields->_questClearCostumeRelease_k__BackingField;
  if ( !byte_4A58362 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4A58362 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeGet_k__BackingField = v9->static_fields->_questClearCostumeGet_k__BackingField;
  if ( !byte_4A58368 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4A58368 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  evTowerReward = v9->static_fields->_eventTowerReward_k__BackingField;
  if ( !byte_4A588F3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4A588F3 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v9->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  if ( !byte_4A57177 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4A57177 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  IsDispOnly_k__BackingField = v9->static_fields->_IsDispOnly_k__BackingField;
  if ( !byte_4A58374 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4A58374 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  warClearRewardIn = v9->static_fields->_warClearReward_k__BackingField;
  if ( !byte_4A588F4 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4A588F4 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  eventActivityPointEffectState = v9->static_fields->_EventActivityPointEffectState_k__BackingField;
  if ( !byte_4A58363 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4A58363 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v14 = v9->static_fields;
  IsWarBoardClear_k__BackingField = v14->_IsWarBoardClear_k__BackingField;
  questResultAfterEventRewardInfos = v14->mQuestResultAfterEventRewardInfos;
  mResultEventPanelRewardInfos = v14->mResultEventPanelRewardInfos;
  panelEventPoint = v14->panelEventPoint;
  if ( !byte_4A5836D )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4A5836D = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  limitImageAnnounces = v9->static_fields->_limitImageAnnounces_k__BackingField;
  if ( !byte_4A57CDE )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4A57CDE = 1;
  }
  if ( !v9->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v9);
  if ( !byte_4A58364 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58364 = 1;
  }
  v20 = mQuestRewardInfos;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  isWarBoardClear = IsWarBoardClear_k__BackingField;
  v22 = (TerminalPramsManager_ClearData_o *)sub_1B887FC(TerminalPramsManager_ClearData_TypeInfo);
  TerminalPramsManager_ClearData___ctor_34806380(
    v22,
    mQuestClearHeroineInfo,
    v20,
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
    v27,
    v28);
  if ( !byte_4A588F5 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588F5 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->_isQuestRewardSetted_k__BackingField = 1;
  v24 = TerminalPramsManager_ClearData_TypeInfo;
  if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
    v24 = TerminalPramsManager_ClearData_TypeInfo;
  }
  SAVEKEY_CLEAR_REWARD_DISP = v24->static_fields->SAVEKEY_CLEAR_REWARD_DISP;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v26 = JsonManager__toJson((Il2CppObject *)v22, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString(SAVEKEY_CLEAR_REWARD_DISP, v26, 0LL);
}


void __fastcall TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  TerminalPramsManager_c *v2; // x0
  EventRaidDefeatedEffectInfo_o *EventRaidDefeatedEffectInfo_k__BackingField; // x0
  System_String_o *v4; // x0

  if ( (byte_4A58872 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11431/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_4A58872 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588F7 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588F7 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  EventRaidDefeatedEffectInfo_k__BackingField = v2->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  if ( !EventRaidDefeatedEffectInfo_k__BackingField )
    sub_1B8880C(0LL, v1);
  v4 = EventRaidDefeatedEffectInfo__ConvertToStringData(EventRaidDefeatedEffectInfo_k__BackingField, v1);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11431/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestInfo_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4A58835 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13610/*"TerminalPhaseCnt"*/);
    sub_1B885B0(&StringLiteral_13613/*"TerminalQuestId"*/);
    byte_4A58835 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13613/*"TerminalQuestId"*/,
    v1->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4A57DCB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DCB = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13610/*"TerminalPhaseCnt"*/,
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

  if ( (byte_4A58876 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11440/*"SAVEKEY_QuestRandomGroupList"*/);
    sub_1B885B0(&StringLiteral_25076/*"{0}:{1}"*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A58876 = 1;
  }
  memset(&v18, 0, 32);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DBF )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DBF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  QuestRandomGroupList_k__BackingField = v3->static_fields->_QuestRandomGroupList_k__BackingField;
  if ( !QuestRandomGroupList_k__BackingField )
    sub_1B8880C(0LL, v1);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v17,
    QuestRandomGroupList_k__BackingField,
    (const MethodInfo_3165260 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v18.fields._dictionary = v17[0];
  v18.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v17[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v18,
            (const MethodInfo_32B5A9C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int)v18.fields._current.fields.key;
    key_high = HIDWORD(v18.fields._current.fields.key);
    if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
      Empty = System_String__Concat_61707032(Empty, (System_String_o *)StringLiteral_868/*","*/, 0LL);
    LODWORD(v17[0]) = key;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v17, v7, v8, v9);
    v16 = key_high;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v11, v12, v13);
    v15 = System_String__Format_61721404((System_String_o *)StringLiteral_25076/*"{0}:{1}"*/, v10, v14, 0LL);
    Empty = System_String__Concat_61707032(Empty, v15, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v18,
    (const MethodInfo_32B5B9C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11440/*"SAVEKEY_QuestRandomGroupList"*/, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestReleasedFocusState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v3; // x1

  if ( (byte_4A5885F & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5885F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v1);
  if ( !QuestFocusStateManager )
    sub_1B8880C(0LL, v3);
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

  if ( (byte_4A58833 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13603/*"TerminalEndTime"*/);
    sub_1B885B0(&StringLiteral_11438/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_1B885B0(&StringLiteral_13599/*"TerminalBeforeEventActivityPoint"*/);
    sub_1B885B0(&StringLiteral_13604/*"TerminalEventDailyPointEventId"*/);
    sub_1B885B0(&StringLiteral_13610/*"TerminalPhaseCnt"*/);
    sub_1B885B0(&StringLiteral_13618/*"TerminalTimeStatusEventId"*/);
    sub_1B885B0(&StringLiteral_13602/*"TerminalDispState"*/);
    sub_1B885B0(&StringLiteral_11435/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_1B885B0(&StringLiteral_13605/*"TerminalIsDoneShortcut"*/);
    sub_1B885B0(&StringLiteral_11434/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1B885B0(&StringLiteral_11439/*"SAVEKEY_PlayerGenderType"*/);
    sub_1B885B0(&StringLiteral_11427/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_1B885B0(&StringLiteral_11436/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_1B885B0(&StringLiteral_13613/*"TerminalQuestId"*/);
    sub_1B885B0(&StringLiteral_11446/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_1B885B0(&StringLiteral_13617/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_1B885B0(&StringLiteral_13622/*"TerminalWarId"*/);
    sub_1B885B0(&StringLiteral_13615/*"TerminalSpotId"*/);
    sub_1B885B0(&StringLiteral_13619/*"TerminalTimeStatusLoopCount"*/);
    sub_1B885B0(&StringLiteral_13600/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_1B885B0(&StringLiteral_11425/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_1B885B0(&StringLiteral_11430/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_1B885B0(&StringLiteral_13623/*"TerminalWarStartedIds"*/);
    sub_1B885B0(&StringLiteral_11429/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    sub_1B885B0(&StringLiteral_11428/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_1B885B0(&StringLiteral_11437/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_1B885B0(&StringLiteral_11445/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4A58833 = 1;
  }
  EndTime_k__BackingField = 0LL;
  MapModelClearQuestId_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57FF0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57FF0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13602/*"TerminalDispState"*/,
    v1->static_fields->_DispState_k__BackingField,
    0LL);
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13622/*"TerminalWarId"*/,
    v2->static_fields->_WarId_k__BackingField,
    0LL);
  if ( !byte_4A57FF4 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57FF4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13615/*"TerminalSpotId"*/,
    v3->static_fields->_SpotId_k__BackingField,
    0LL);
  if ( !byte_4A57CDB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57CDB = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11425/*"SAVEKEY_BlankEarthSpotId"*/,
    v4->static_fields->_BlankEarthSpotId_k__BackingField,
    0LL);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13613/*"TerminalQuestId"*/,
    v5->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4A57DCB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DCB = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13610/*"TerminalPhaseCnt"*/,
    v6->static_fields->_PhaseCnt_k__BackingField,
    0LL);
  if ( !byte_4A57FF5 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57FF5 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v7->static_fields->_EndTime_k__BackingField;
  v8 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13603/*"TerminalEndTime"*/, v8, 0LL);
  if ( !byte_4A5838D )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5838D = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13605/*"TerminalIsDoneShortcut"*/,
    v9->static_fields->_IsDoneShortcut_k__BackingField,
    0LL);
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_13623/*"TerminalWarStartedIds"*/,
    v10->static_fields->mTerminalWarStartedIds,
    0LL);
  if ( !byte_4A5853C )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5853C = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13618/*"TerminalTimeStatusEventId"*/,
    v11->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_4A5853D )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5853D = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13619/*"TerminalTimeStatusLoopCount"*/,
    v12->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  if ( !byte_4A588DB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588DB = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13604/*"TerminalEventDailyPointEventId"*/,
    v13->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4A588DC )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588DC = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v14->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v15 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13617/*"TerminalTimeStatusEventDailyPoint"*/, v15, 0LL);
  if ( !byte_4A588DD )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588DD = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13599/*"TerminalBeforeEventActivityPoint"*/,
    v16->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_4A588DE )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588DE = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13600/*"TerminalBeforeEventActivityPointGauge"*/,
    v17->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  if ( !byte_4A588DF )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588DF = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11438/*"SAVEKEY_PlayedTerminalEffects"*/,
    v18->static_fields->_PlayedTerminalEffects_k__BackingField,
    0LL);
  if ( !byte_4A58380 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58380 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11435/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v19->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58381 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58381 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11436/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v20->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  if ( !byte_4A5853E )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5853E = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11437/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v21->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58541 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58541 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11446/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v22->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11429/*"SAVEKEY_ConnectMarkEventId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11428/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  if ( !byte_4A5835A )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5835A = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11445/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v23->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  if ( !byte_4A57DC2 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC2 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11427/*"SAVEKEY_ClearEventQuestIds"*/,
    v24->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  if ( !byte_4A57FF1 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57FF1 = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v25->static_fields->_MapModelClearQuestId_k__BackingField;
  v26 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_4A57FF2 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57FF2 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v27->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v28 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v29 = System_String__Concat_61718292(v26, (System_String_o *)StringLiteral_868/*","*/, v28, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11434/*"SAVEKEY_MapModelClearQuestInfo"*/, v29, 0LL);
  if ( !byte_4A58542 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58542 = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11430/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v30->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588E0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588E0 = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11439/*"SAVEKEY_PlayerGenderType"*/,
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

  if ( (byte_4A58866 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58866 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v5);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v8);
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
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  int32_t klass_high; // w21
  Il2CppObject *MasterData_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_IEnumerable_TSource__o *QuestIdsByTargetAndOpenCondType; // x19
  TerminalPramsManager___c_c *v14; // x8
  System_Func_int__bool__o *_9__674_0; // x21
  Il2CppObject *v16; // x22
  struct TerminalPramsManager___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_T__TResult__o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  System_Func_object__bool__o *v23; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  TerminalPramsManager___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  System_Func_object__int__o *_9__674_3; // x20
  Il2CppObject *v28; // x21
  struct TerminalPramsManager___c_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v32; // x0
  TerminalPramsManager___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  System_Func_int__int__o *_9__674_4; // x20
  Il2CppObject *v36; // x21
  struct TerminalPramsManager___c_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  int32_t v41; // w0
  int32_t v42; // w19
  Il2CppObject *v43; // [xsp+0h] [xbp-40h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A58867 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_int__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__QuestEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_QuestEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_1B885B0(&System_Func_int__int__TypeInfo);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&System_Func_QuestEntity__int__TypeInfo);
    sub_1B885B0(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_int__QuestEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__674_0__);
    sub_1B885B0(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__674_3__);
    sub_1B885B0(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__674_4__);
    sub_1B885B0(&Method_TerminalPramsManager___c__DisplayClass674_0__SendOpenedQuestIdToAdManager_b__1__);
    sub_1B885B0(&Method_TerminalPramsManager___c__DisplayClass674_0__SendOpenedQuestIdToAdManager_b__2__);
    sub_1B885B0(&TerminalPramsManager___c__DisplayClass674_0_TypeInfo);
    sub_1B885B0(&TerminalPramsManager___c_TypeInfo);
    byte_4A58867 = 1;
  }
  v43 = 0LL;
  entity = 0LL;
  v3 = sub_1B887FC(TerminalPramsManager___c__DisplayClass674_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( clearedQuestId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !v3 )
      goto LABEL_43;
    *(_QWORD *)(v3 + 16) = Instance;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)Instance, v6, v7);
    Instance = *(DataManager_o **)(v3 + 16);
    if ( !Instance )
      goto LABEL_43;
    if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, clearedQuestId, 0LL) )
      return;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SpotMaster___);
    if ( !entity )
      goto LABEL_43;
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0LL);
    if ( !v8 )
      goto LABEL_43;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  v8,
                                  &v43,
                                  (int32_t)Instance,
                                  (const MethodInfo_311D988 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      return;
    if ( !v43 )
      goto LABEL_43;
    klass_high = HIDWORD(v43[1].klass);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( TerminalPramsManager__IsMustPlayMainStory(klass_high, v5) )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_43;
      if ( QuestEntity__GetTypeFlag(entity, 0LL) != 2 )
        return;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v3 + 24) = MasterData_object;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)MasterData_object, v11, v12);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      if ( !Instance )
        goto LABEL_43;
      QuestIdsByTargetAndOpenCondType = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
                                                                                               (QuestReleaseMaster_o *)Instance,
                                                                                               clearedQuestId,
                                                                                               1,
                                                                                               0LL);
      v14 = TerminalPramsManager___c_TypeInfo;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v14 = TerminalPramsManager___c_TypeInfo;
      }
      _9__674_0 = v14->static_fields->__9__674_0;
      if ( !_9__674_0 )
      {
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          v14 = TerminalPramsManager___c_TypeInfo;
        }
        v16 = (Il2CppObject *)v14->static_fields->__9;
        _9__674_0 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__674_0,
          v16,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__674_0__,
          0LL);
        static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
        static_fields->__9__674_0 = _9__674_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__674_0, (int32_t)_9__674_0, v18, v19);
      }
      v20 = System_Linq_Enumerable__Where_int_(
              QuestIdsByTargetAndOpenCondType,
              (System_Func_TSource__bool__o *)_9__674_0,
              (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
      v21 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_int__QuestEntity__TypeInfo);
      System_Func_int__object____ctor(
        v21,
        (Il2CppObject *)v3,
        Method_TerminalPramsManager___c__DisplayClass674_0__SendOpenedQuestIdToAdManager_b__1__,
        0LL);
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v20,
                                                                   (System_Func_TSource__TResult__o *)v21,
                                                                   (const MethodInfo_2EADD38 *)Method_System_Linq_Enumerable_Select_int__QuestEntity___);
      v23 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v23,
        (Il2CppObject *)v3,
        Method_TerminalPramsManager___c__DisplayClass674_0__SendOpenedQuestIdToAdManager_b__2__,
        0LL);
      v24 = System_Linq_Enumerable__Where_object_(
              v22,
              (System_Func_TSource__bool__o *)v23,
              (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v25 = TerminalPramsManager___c_TypeInfo;
      v26 = v24;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v25 = TerminalPramsManager___c_TypeInfo;
      }
      _9__674_3 = (System_Func_object__int__o *)v25->static_fields->__9__674_3;
      if ( !_9__674_3 )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          v25 = TerminalPramsManager___c_TypeInfo;
        }
        v28 = (Il2CppObject *)v25->static_fields->__9;
        _9__674_3 = (System_Func_object__int__o *)sub_1B887FC(System_Func_QuestEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__674_3,
          v28,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__674_3__,
          0LL);
        v29 = TerminalPramsManager___c_TypeInfo->static_fields;
        v29->__9__674_3 = (struct System_Func_QuestEntity__int__o *)_9__674_3;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->__9__674_3, (int32_t)_9__674_3, v30, v31);
      }
      v32 = System_Linq_Enumerable__Select_object__int_(
              v26,
              (System_Func_TSource__TResult__o *)_9__674_3,
              (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_QuestEntity__int___);
      v33 = TerminalPramsManager___c_TypeInfo;
      v34 = (System_Collections_Generic_IEnumerable_TSource__o *)v32;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v33 = TerminalPramsManager___c_TypeInfo;
      }
      _9__674_4 = v33->static_fields->__9__674_4;
      if ( !_9__674_4 )
      {
        if ( !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          v33 = TerminalPramsManager___c_TypeInfo;
        }
        v36 = (Il2CppObject *)v33->static_fields->__9;
        _9__674_4 = (System_Func_int__int__o *)sub_1B887FC(System_Func_int__int__TypeInfo);
        System_Func_int__int____ctor(
          _9__674_4,
          v36,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__674_4__,
          0LL);
        v37 = TerminalPramsManager___c_TypeInfo->static_fields;
        v37->__9__674_4 = _9__674_4;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v37->__9__674_4, (int32_t)_9__674_4, v38, v39);
      }
      v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_int__int_(
                                                                   v34,
                                                                   (System_Func_TSource__TKey__o *)_9__674_4,
                                                                   (const MethodInfo_2EAA218 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
      v41 = System_Linq_Enumerable__FirstOrDefault_int_(
              v40,
              (const MethodInfo_2EA2D70 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      if ( v41 )
      {
        v42 = v41;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetOpenedStoryQuest((AdManager_o *)Instance, v42, 0LL);
          return;
        }
LABEL_43:
        sub_1B8880C(Instance, v5);
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

  if ( (byte_4A58865 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58865 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v5);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v8);
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

  if ( (byte_4A58825 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_int___ctor__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A58825 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58081 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58081 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    QuestInfo = QuestTree__GetQuestInfo(Instance, questId, 0LL);
    if ( !QuestInfo )
      return;
    v7 = QuestInfo;
    warId = QuestInfo->fields.warId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DCA )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DCA = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    Instance = (QuestTree_o *)MapControl_QuestInfo__GetSpotID(v7, 0LL);
    if ( !Master_object )
      goto LABEL_148;
    v11 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            (int32_t)Instance,
            (const MethodInfo_311D988 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    LODWORD(Master_object) = MapControl_QuestInfo__GetSpotID(v7, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v11 )
    {
      if ( byte_4A57CDF )
        goto LABEL_38;
    }
    else
    {
      if ( !byte_4A57DC9 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC9 = 1;
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
          (const MethodInfo_361A2C0 *)Method_System_Nullable_int___ctor__);
        v16 = v37;
      }
      else
      {
        v16 = 0LL;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (Il2CppObject *)HIDWORD(v16);
      if ( byte_4A57CDF )
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
        if ( !byte_4A57DC4 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A57DC4 = 1;
        }
        v19 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
        }
        v19->static_fields->_QuestId_k__BackingField = v18;
        questPhase = v7->fields.questPhase;
        if ( !byte_4A57DC8 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
          byte_4A57DC8 = 1;
        }
        if ( !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          v19 = TerminalPramsManager_TypeInfo;
        }
        v19->static_fields->_PhaseCnt_k__BackingField = questPhase;
        endTime = v7->fields.endTime;
        if ( !byte_4A57DC5 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
          byte_4A57DC5 = 1;
        }
        if ( !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          v19 = TerminalPramsManager_TypeInfo;
        }
        v19->static_fields->_EndTime_k__BackingField = endTime;
        if ( !byte_4A5838C )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
          byte_4A5838C = 1;
        }
        if ( !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          v19 = TerminalPramsManager_TypeInfo;
        }
        v19->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 1;
        if ( !SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
          goto LABEL_151;
        v22 = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A57DC3 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A57DC3 = 1;
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
            if ( !byte_4A57DC6 )
            {
              sub_1B885B0(&TerminalPramsManager_TypeInfo);
              byte_4A57DC6 = 1;
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
            if ( !byte_4A57DC6 )
            {
              sub_1B885B0(&TerminalPramsManager_TypeInfo);
              byte_4A57DC6 = 1;
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
          if ( !byte_4A57DC6 )
          {
            sub_1B885B0(&TerminalPramsManager_TypeInfo);
            byte_4A57DC6 = 1;
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
        if ( !byte_4A5629D )
        {
          sub_1B885B0(&TerminalSceneComponent_TypeInfo);
          byte_4A5629D = 1;
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
        if ( !byte_4A5629D )
        {
          sub_1B885B0(&TerminalSceneComponent_TypeInfo);
          byte_4A5629D = 1;
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
            if ( !byte_4A5629D )
            {
              sub_1B885B0(&TerminalSceneComponent_TypeInfo);
              byte_4A5629D = 1;
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
            if ( !byte_4A57DC3 )
            {
              sub_1B885B0(&TerminalPramsManager_TypeInfo);
              byte_4A57DC3 = 1;
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
          if ( !byte_4A5629D )
          {
            sub_1B885B0(&TerminalSceneComponent_TypeInfo);
            byte_4A5629D = 1;
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
            if ( !byte_4A5629D )
            {
              sub_1B885B0(&TerminalSceneComponent_TypeInfo);
              byte_4A5629D = 1;
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
                if ( !byte_4A5644B )
                {
                  sub_1B885B0(&TerminalPramsManager_TypeInfo);
                  byte_4A5644B = 1;
                }
                v36 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v36 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                }
                *((_BYTE *)v36[2].virtualMethodPointer + 718) = 1;
                TerminalPramsManager__Save_SaveData(v36);
                return;
              }
            }
          }
        }
LABEL_148:
        sub_1B8880C(Instance, v5);
      }
    }
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57CDF = 1;
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

  if ( (byte_4A58826 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A58826 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58081 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58081 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4A57DCA )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A57DCA = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = warId;
  if ( !SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
    goto LABEL_112;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
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
      if ( !byte_4A57DC6 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC6 = 1;
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
      if ( !byte_4A57DC6 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC6 = 1;
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
    if ( !byte_4A57DC6 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC6 = 1;
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
  if ( !byte_4A57CDF )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57CDF = 1;
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
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
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
      if ( !byte_4A5629D )
      {
        sub_1B885B0(&TerminalSceneComponent_TypeInfo);
        byte_4A5629D = 1;
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
      if ( !byte_4A57DC3 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC3 = 1;
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
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
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
      if ( !byte_4A5629D )
      {
        sub_1B885B0(&TerminalSceneComponent_TypeInfo);
        byte_4A5629D = 1;
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
      sub_1B8880C(v6, v4);
    }
  }
LABEL_102:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5644B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5644B = 1;
  }
  v23 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_BYTE *)v23[2].virtualMethodPointer + 718) = 1;
  TerminalPramsManager__Save_SaveData(v23);
}


void __fastcall TerminalPramsManager__SetAutoResumeForFolder(int32_t warId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v6; // x21
  TerminalPramsManager_c *v7; // x0
  int32_t PrioredParentId; // w20
  Il2CppObject *v9; // x0
  WarEntity_o *v10; // x0
  WarEntity_o *v11; // x22
  TerminalPramsManager_c *v12; // x0
  TerminalPramsManager_c *v13; // x0
  int32_t parentBlankEarthSpotId; // w20
  TerminalPramsManager_c *v15; // x0
  TerminalSceneComponent_c *v16; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v18; // x1
  TitleInfoControl_o *v19; // x0
  ExUITexture_c *klass; // x8
  UnityEngine_Object_o *v21; // x20
  ExUITexture_c *v22; // x8
  ScrTerminalListTop_o *v23; // x20
  ExUITexture_c *v24; // x8
  UnityEngine_Object_o *v25; // x20
  ExUITexture_c *v26; // x8
  const MethodInfo *v27; // x0

  if ( (byte_4A58827 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A58827 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58081 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58081 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4A57DCA )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A57DCA = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4A57DC6 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A57DC6 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DispState_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( Instance )
  {
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0LL);
    if ( WarEntityByWarID )
    {
      v6 = WarEntityByWarID;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A5837F )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A5837F = 1;
      }
      v7 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v7 = TerminalPramsManager_TypeInfo;
      }
      v7->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField = warId;
      PrioredParentId = WarEntity__GetPrioredParentId(v6, 0LL);
      v9 = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( v9 )
      {
        v10 = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)v9, PrioredParentId, 0LL);
        if ( v10 )
        {
          v11 = v10;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A57DCA )
          {
            sub_1B885B0(&TerminalPramsManager_TypeInfo);
            byte_4A57DCA = 1;
          }
          v12 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v12 = TerminalPramsManager_TypeInfo;
          }
          v12->static_fields->_WarId_k__BackingField = PrioredParentId;
          if ( WarEntity__IsFolder(v11, 0LL) )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4A57DC6 )
            {
              sub_1B885B0(&TerminalPramsManager_TypeInfo);
              byte_4A57DC6 = 1;
            }
            v13 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v13 = TerminalPramsManager_TypeInfo;
            }
            v13->static_fields->_DispState_k__BackingField = 3;
          }
          parentBlankEarthSpotId = v6->fields.parentBlankEarthSpotId;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A57CDF )
          {
            sub_1B885B0(&TerminalPramsManager_TypeInfo);
            byte_4A57CDF = 1;
          }
          v15 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v15 = TerminalPramsManager_TypeInfo;
          }
          v15->static_fields->_BlankEarthSpotId_k__BackingField = parentBlankEarthSpotId;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4A5629D )
          {
            sub_1B885B0(&TerminalSceneComponent_TypeInfo);
            byte_4A5629D = 1;
          }
          v16 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v16 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_Object_o *)v16->static_fields->mInstance;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
            goto LABEL_100;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4A5629D )
          {
            sub_1B885B0(&TerminalSceneComponent_TypeInfo);
            byte_4A5629D = 1;
          }
          v19 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v19 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
          }
          klass = v19->fields.mEventBgTexture->klass;
          if ( klass )
          {
            v21 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
            {
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4A5629D )
              {
                sub_1B885B0(&TerminalSceneComponent_TypeInfo);
                byte_4A5629D = 1;
              }
              v19 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v19 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
              }
              v22 = v19->fields.mEventBgTexture->klass;
              if ( !v22 )
                goto LABEL_108;
              v23 = *(ScrTerminalListTop_o **)&v22->_2.static_fields_size;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4A57DC3 )
              {
                sub_1B885B0(&TerminalPramsManager_TypeInfo);
                byte_4A57DC3 = 1;
              }
              v19 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v19 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
              }
              if ( !v23 )
                goto LABEL_108;
              ScrTerminalListTop__RequestChangeTerminalListBG(v23, HIDWORD(v19->fields.mEventBgTexture->klass), 0LL);
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A5629D )
            {
              sub_1B885B0(&TerminalSceneComponent_TypeInfo);
              byte_4A5629D = 1;
            }
            v19 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v19 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
            }
            v24 = v19->fields.mEventBgTexture->klass;
            if ( v24 )
            {
              v25 = *(UnityEngine_Object_o **)&v24->_2.instance_size;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
                goto LABEL_100;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4A5629D )
              {
                sub_1B885B0(&TerminalSceneComponent_TypeInfo);
                byte_4A5629D = 1;
              }
              v19 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v19 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
              }
              v26 = v19->fields.mEventBgTexture->klass;
              if ( v26 )
              {
                v19 = *(TitleInfoControl_o **)&v26->_2.instance_size;
                if ( v19 )
                {
                  TitleInfoControl__CloseEventBannerWindow(v19, 0LL);
LABEL_100:
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  if ( !byte_4A5644B )
                  {
                    sub_1B885B0(&TerminalPramsManager_TypeInfo);
                    byte_4A5644B = 1;
                  }
                  v27 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    v27 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                  }
                  *((_BYTE *)v27[2].virtualMethodPointer + 718) = 1;
                  TerminalPramsManager__Save_SaveData(v27);
                  return;
                }
              }
            }
          }
LABEL_108:
          sub_1B8880C(v19, v18);
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
  if ( (byte_4A58863 & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_o *)sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58863 = 1;
  }
  if ( !v4 )
    sub_1B8880C(result, method);
  campaignDirectBonus = v4->fields.campaignDirectBonus;
  if ( campaignDirectBonus && *(_QWORD *)&campaignDirectBonus->max_length )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588D7 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588D7 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v6->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = campaignDirectBonus;
    sub_1B88554(
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

  if ( (byte_4A5884E & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5884E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588D6 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588D6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignBonus_k__BackingField = campaignBonuses;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_CampaignBonus_k__BackingField,
    (int32_t)campaignBonuses,
    v2,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalPramsManager__SetFolderLastClickedIdx(int32_t warId, int32_t idx, const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  System_Collections_Generic_Dictionary_int__int__o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x0
  TerminalPramsManager_c *v12; // x0

  if ( (byte_4A5885A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5885A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->folderLastIdxs )
  {
    v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v6,
      (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->folderLastIdxs = v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->folderLastIdxs, (int32_t)v6, v7, v8);
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
          (const MethodInfo_3166240 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__),
        (folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs) == 0LL) )
  {
    sub_1B8880C(folderLastIdxs, *(_QWORD *)&idx);
  }
  System_Collections_Generic_Dictionary_int__int___Add(
    folderLastIdxs,
    warId,
    idx,
    (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !byte_4A588C6 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588C6 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_LastSelectQuestIndex_k__BackingField = idx;
}


void __fastcall TerminalPramsManager__SetQuestReleasedFocusState(
        int32_t questId,
        int32_t state,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v7; // x1

  if ( (byte_4A58860 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58860 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v5);
  if ( !QuestFocusStateManager )
    sub_1B8880C(0LL, v7);
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

  if ( (byte_4A58864 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58864 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (ServantStatusBattleListViewItem_o *)&v5->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0LL;
  sub_1B88554(p_mQuestRewardInfos, 0, v2, v3);
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
    sub_1B88554(v14, (int32_t)rewardInfos, v9, v10);
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = (ServantStatusBattleListViewItem_o *)&v15->static_fields->mQuestPhaseRewardInfos;
  p_mQuestPhaseRewardInfos->klass = 0LL;
  sub_1B88554(p_mQuestPhaseRewardInfos, 0, v9, v10);
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
    sub_1B88554(v22, (int32_t)resultQuestPhaseRewardInfos, v17, v18);
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestResultAfterEventRewardInfos = (ServantStatusBattleListViewItem_o *)&v23->static_fields->mQuestResultAfterEventRewardInfos;
  p_mQuestResultAfterEventRewardInfos->klass = 0LL;
  sub_1B88554(p_mQuestResultAfterEventRewardInfos, 0, v17, v18);
  if ( !result->max_length )
LABEL_33:
    sub_1B88814(v7, v8);
  v27 = result->m_Items[0];
  if ( !v27 )
LABEL_32:
    sub_1B8880C(v7, v8);
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
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&static_fields->mQuestResultAfterEventRewardInfos,
      (int32_t)resultAfterEventRewardInfos,
      v25,
      v26);
  }
}


void __fastcall TerminalPramsManager__SetWarStartedId(int32_t war_id, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  System_String_o *mTerminalWarStartedIds; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = war_id;
  if ( (byte_4A58858 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    byte_4A58858 = 1;
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
    v5 = System_Int32__ToString((int32_t)&v11, 0LL);
    v6 = System_String__Concat_61718292(mTerminalWarStartedIds, v5, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
    static_fields->mTerminalWarStartedIds = v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->mTerminalWarStartedIds, (int32_t)v6, v8, v9);
    TerminalPramsManager__Save_SaveData(v10);
  }
}


void __fastcall TerminalPramsManager__SpotIdSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A58834 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13615/*"TerminalSpotId"*/);
    byte_4A58834 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57FF4 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57FF4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13615/*"TerminalSpotId"*/,
    v1->static_fields->_SpotId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4A5883A & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13599/*"TerminalBeforeEventActivityPoint"*/);
    sub_1B885B0(&StringLiteral_13600/*"TerminalBeforeEventActivityPointGauge"*/);
    byte_4A5883A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588DD )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588DD = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13599/*"TerminalBeforeEventActivityPoint"*/,
    v1->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_4A588DE )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588DE = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13600/*"TerminalBeforeEventActivityPointGauge"*/,
    v2->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfoDispSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A5883F & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11441/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    byte_4A5883F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11441/*"SAVEKEY_TerminalConquestInfoDisp"*/, v1->static_fields->eventConquestInfoDisp, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  struct EventConquestInfo_array *eventConquestInfos; // x19
  System_String_o *v3; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4A5883E & 1) == 0 )
  {
    sub_1B885B0(&EventConquestInfo___TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11442/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_1B885B0(&StringLiteral_11441/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    byte_4A5883E = 1;
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
    eventConquestInfos = (struct EventConquestInfo_array *)sub_1B88658(EventConquestInfo___TypeInfo, 0LL);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(&eventConquestInfos->obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11442/*"SAVEKEY_TerminalConquestInfos"*/, v3, 0LL);
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11441/*"SAVEKEY_TerminalConquestInfoDisp"*/, v4->static_fields->eventConquestInfoDisp, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  Il2CppObject *eventHarvestGrowthInfo; // x19
  System_String_o *v3; // x0

  if ( (byte_4A58840 & 1) == 0 )
  {
    sub_1B885B0(&EventHarvestGrowthInfo_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11443/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    byte_4A58840 = 1;
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
    eventHarvestGrowthInfo = (Il2CppObject *)sub_1B887FC(EventHarvestGrowthInfo_TypeInfo);
    System_Object___ctor(eventHarvestGrowthInfo, 0LL);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(eventHarvestGrowthInfo, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11443/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v3, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *BeforeEventSubmarineSaveData_k__BackingField; // x19
  System_String_o *v4; // x0

  if ( (byte_4A5883C & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13601/*"TerminalBeforeEventSubmarinePointData"*/);
    byte_4A5883C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57F0A )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57F0A = 1;
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
    if ( !byte_4A57F0A )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57F0A = 1;
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
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13601/*"TerminalBeforeEventSubmarinePointData"*/, v4, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A58848 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11445/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4A58848 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5835A )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5835A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11445/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v1->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A58847 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11446/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    byte_4A58847 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58541 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58541 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11446/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v1->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalTransitionInfoSave_SaveData(
        TerminalTransitionInfo_o *terminalTransitionInfo,
        const MethodInfo *method)
{
  if ( (byte_4A58839 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_13621/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_1B885B0(&StringLiteral_13620/*"TerminalTransitionInfoMissionId"*/);
    byte_4A58839 = 1;
  }
  if ( terminalTransitionInfo )
  {
    UnityEngine_PlayerPrefs__SetInt(
      (System_String_o *)StringLiteral_13620/*"TerminalTransitionInfoMissionId"*/,
      terminalTransitionInfo->fields.missionId,
      0LL);
    UnityEngine_PlayerPrefs__SetString(
      (System_String_o *)StringLiteral_13621/*"TerminalTransitionInfoVoiceAssetName"*/,
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

  if ( (byte_4A58871 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58871 = 1;
  }
  value = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588F7 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588F7 = 1;
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
          (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    value = (Il2CppObject *)v7;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588F7 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588F7 = 1;
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
          (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        goto LABEL_24;
      }
    }
LABEL_30:
    sub_1B8880C(v5, *(_QWORD *)&day);
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)value,
         day,
         (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
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
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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

  if ( (byte_4A58745 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58745 = 1;
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

  if ( (byte_4A58765 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58765 = 1;
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
  System_Collections_Generic_List_string__c *klass; // x8
  __int64 v4; // x8
  System_Collections_Generic_List_string__c *v5; // x8
  __int64 v6; // x8
  int32_t *p_QuestId_k__BackingField; // x8
  TerminalPramsManager_c *v8; // x0

  if ( (byte_4A58799 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A58799 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__checkNowScene(Instance, 34, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
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
    v4 = *(_QWORD *)&klass->_2.thread_static_fields_offset;
    if ( !v4 )
      goto LABEL_31;
    if ( *(_DWORD *)(v4 + 412) )
    {
      if ( !LODWORD(Instance[2].fields.targetRoot) )
        j_il2cpp_runtime_class_init_0(Instance);
      if ( !byte_4A5629D )
      {
        sub_1B885B0(&TerminalSceneComponent_TypeInfo);
        byte_4A5629D = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v5 = Instance[1].fields.m_listUnloadScenes->klass;
      if ( v5 )
      {
        v6 = *(_QWORD *)&v5->_2.thread_static_fields_offset;
        if ( v6 )
        {
          p_QuestId_k__BackingField = (int32_t *)(v6 + 412);
          return *p_QuestId_k__BackingField;
        }
      }
LABEL_31:
      sub_1B8880C(Instance, v2);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
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

  if ( (byte_4A587B4 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587B4 = 1;
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

  if ( (byte_4A587B6 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587B6 = 1;
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

  if ( (byte_4A587BA & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587BA = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
}


int64_t __fastcall TerminalPramsManager__get_BeforeTimeEventDailyPoint(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A587A8 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587A8 = 1;
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

  if ( (byte_4A587DA & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587DA = 1;
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

  if ( (byte_4A587DE & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587DE = 1;
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

  if ( (byte_4A587D8 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587D8 = 1;
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

  if ( (byte_4A587DC & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587DC = 1;
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

  if ( (byte_4A587EE & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587EE = 1;
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

  if ( (byte_4A58781 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58781 = 1;
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

  if ( (byte_4A58783 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58783 = 1;
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

  if ( (byte_4A587B2 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587B2 = 1;
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

  if ( (byte_4A58771 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58771 = 1;
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

  if ( (byte_4A58779 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58779 = 1;
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

  if ( (byte_4A58773 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58773 = 1;
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

  if ( (byte_4A58723 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58723 = 1;
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

  if ( (byte_4A58767 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58767 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EndTime_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventActivityPointEffectState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A587B8 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587B8 = 1;
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

  if ( (byte_4A587C0 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587C0 = 1;
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

  if ( (byte_4A587AA & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587AA = 1;
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

  if ( (byte_4A587A6 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587A6 = 1;
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

  if ( (byte_4A58751 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58751 = 1;
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

  if ( (byte_4A587BC & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587BC = 1;
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

  if ( (byte_4A587E4 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587E4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventUIEffectClearQuestId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoFolder(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A58803 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58803 = 1;
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

  if ( (byte_4A58805 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58805 = 1;
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

  if ( (byte_4A58821 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58821 = 1;
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

  if ( (byte_4A587FD & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587FD = 1;
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

  if ( (byte_4A587FF & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587FF = 1;
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

  if ( (byte_4A5881B & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5881B = 1;
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

  if ( (byte_4A587E0 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587E0 = 1;
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

  if ( (byte_4A58807 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58807 = 1;
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

  if ( (byte_4A5876F & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5876F = 1;
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

  if ( (byte_4A5877B & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5877B = 1;
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

  if ( (byte_4A58777 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58777 = 1;
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

  if ( (byte_4A587EA & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587EA = 1;
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

  if ( (byte_4A58747 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58747 = 1;
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

  if ( (byte_4A58749 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58749 = 1;
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

  if ( (byte_4A58759 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58759 = 1;
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

  if ( (byte_4A5874B & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5874B = 1;
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

  if ( (byte_4A58731 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58731 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDoneShortcut_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsEventBoardGameDiceBtnActive(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A587C2 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587C2 = 1;
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

  if ( (byte_4A58739 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58739 = 1;
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

  if ( (byte_4A58737 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58737 = 1;
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

  if ( (byte_4A587F3 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587F3 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->isInvisibleConnectAndLoad;
}


bool __fastcall TerminalPramsManager__get_IsMapReturnFolder(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A58801 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58801 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsMapReturnFolder_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsOrdealCallWarClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A5874F & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5874F = 1;
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

  if ( (byte_4A58757 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58757 = 1;
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

  if ( (byte_4A5875D & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5875D = 1;
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

  if ( (byte_4A587C4 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587C4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayScriptWithMap(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A5875B & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5875B = 1;
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

  if ( (byte_4A587D2 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587D2 = 1;
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

  if ( (byte_4A587D4 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587D4 = 1;
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

  if ( (byte_4A587D6 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587D6 = 1;
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

  if ( (byte_4A5877D & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5877D = 1;
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

  if ( (byte_4A58755 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58755 = 1;
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

  if ( (byte_4A5875F & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5875F = 1;
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

  if ( (byte_4A58819 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58819 = 1;
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

  if ( (byte_4A58775 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58775 = 1;
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

  if ( (byte_4A58809 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58809 = 1;
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

  if ( (byte_4A587E8 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587E8 = 1;
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

  if ( (byte_4A58769 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58769 = 1;
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

  if ( (byte_4A5874D & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5874D = 1;
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

  if ( (byte_4A58741 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58741 = 1;
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

  if ( (byte_4A5873F & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5873F = 1;
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

  if ( (byte_4A58743 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58743 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_LastSelectQuestIndex_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MapModelClearPhaseCount(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A5876D & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5876D = 1;
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

  if ( (byte_4A5876B & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5876B = 1;
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

  if ( (byte_4A58823 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58823 = 1;
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

  if ( (byte_4A58761 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58761 = 1;
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

  if ( (byte_4A587E2 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587E2 = 1;
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

  if ( (byte_4A587F0 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587F0 = 1;
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

  if ( (byte_4A5872F & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5872F = 1;
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

  if ( (byte_4A58753 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58753 = 1;
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

  if ( (byte_4A587D0 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587D0 = 1;
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

  if ( (byte_4A5877F & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5877F = 1;
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
  int32_t v3; // w2
  int32_t v4; // w3
  TerminalPramsManager_c *v5; // x0
  ServantStatusBattleListViewItem_o *p_questFocusStateManager; // x0

  if ( (byte_4A587F2 & 1) == 0 )
  {
    sub_1B885B0(&QuestFocusStateManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587F2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->questFocusStateManager )
  {
    v2 = (QuestFocusStateManager_o *)sub_1B887FC(QuestFocusStateManager_TypeInfo);
    QuestFocusStateManager___ctor(v2, 0LL);
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    p_questFocusStateManager = (ServantStatusBattleListViewItem_o *)&v5->static_fields->questFocusStateManager;
    p_questFocusStateManager->klass = (ServantStatusBattleListViewItem_c *)v2;
    sub_1B88554(p_questFocusStateManager, (int32_t)v2, v3, v4);
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

  if ( (byte_4A5872D & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5872D = 1;
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

  if ( (byte_4A5880B & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5880B = 1;
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

  if ( (byte_4A5880D & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5880D = 1;
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

  if ( (byte_4A587CE & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587CE = 1;
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

  if ( (byte_4A5873B & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5873B = 1;
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

  if ( (byte_4A58763 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58763 = 1;
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

  if ( (byte_4A587E6 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587E6 = 1;
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

  if ( (byte_4A5873D & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5873D = 1;
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

  if ( (byte_4A58735 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58735 = 1;
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

  if ( (byte_4A58733 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58733 = 1;
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

  if ( (byte_4A587EC & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587EC = 1;
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

  if ( (byte_4A58787 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58787 = 1;
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

  if ( (byte_4A5872B & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5872B = 1;
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

  if ( (byte_4A58729 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58729 = 1;
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

  if ( (byte_4A58727 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58727 = 1;
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

  if ( (byte_4A5880F & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5880F = 1;
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

  if ( (byte_4A587AE & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587AE = 1;
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

  if ( (byte_4A587B0 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587B0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_TimeStatusLoopCount_k__BackingField;
}


WarBoardDataEntity_o *__fastcall TerminalPramsManager__get_WarBoardData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A587C6 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587C6 = 1;
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

  if ( (byte_4A58725 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58725 = 1;
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

  if ( (byte_4A58785 & 1) == 0 )
  {
    sub_1B885B0(&MapZoom_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58785 = 1;
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

  if ( (byte_4A587A4 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587A4 = 1;
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

  if ( (byte_4A5878F & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5878F = 1;
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

  if ( (byte_4A5878D & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5878D = 1;
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

  if ( (byte_4A58791 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58791 = 1;
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

  if ( (byte_4A5879A & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5879A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventTowerReward_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_friendshipQuestDialogOpenId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A58813 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58813 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_friendshipQuestDialogOpenId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isFortificationCheck(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A587CA & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587CA = 1;
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

  if ( (byte_4A587BE & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587BE = 1;
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

  if ( (byte_4A587CC & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587CC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isPlayRiverActionCheck_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isPlayingQuestPhaseRewardEffect(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A587FB & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587FB = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isQuestRewardSetted(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A587F9 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587F9 = 1;
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

  if ( (byte_4A587C8 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587C8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isWarBoardPlay_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_limitCountUnSealQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A58815 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58815 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_limitCountUnSealQuestId_k__BackingField;
}


LimitImageAnnounce_array *__fastcall TerminalPramsManager__get_limitImageAnnounces(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4A58811 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58811 = 1;
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

  if ( (byte_4A5878B & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5878B = 1;
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

  if ( (byte_4A58797 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58797 = 1;
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

  if ( (byte_4A58789 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58789 = 1;
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

  if ( (byte_4A58795 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58795 = 1;
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

  if ( (byte_4A58793 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58793 = 1;
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

  if ( (byte_4A5879E & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5879E = 1;
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

  if ( (byte_4A587A0 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587A0 = 1;
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

  if ( (byte_4A5879C & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5879C = 1;
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

  if ( (byte_4A587A2 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587A2 = 1;
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

  if ( (byte_4A58817 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58817 = 1;
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

  if ( (byte_4A587AC & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587AC = 1;
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

  if ( (byte_4A5882C & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5882C = 1;
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

  if ( (byte_4A5882B & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5882B = 1;
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

  if ( (byte_4A58746 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58746 = 1;
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

  if ( (byte_4A58766 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58766 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BattleSetupKeep_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_BattleSetupKeep_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_BeforeEventActivityPoint(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A587B5 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587B5 = 1;
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

  if ( (byte_4A587B7 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587B7 = 1;
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

  if ( (byte_4A587BB & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587BB = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BeforeEventSubmarineSaveData_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_BeforeEventSubmarineSaveData_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_BeforeTimeEventDailyPoint(int64_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A587A9 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587A9 = 1;
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

  if ( (byte_4A587DB & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587DB = 1;
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

  if ( (byte_4A587DF & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587DF = 1;
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

  if ( (byte_4A587D9 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587D9 = 1;
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

  if ( (byte_4A587DD & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587DD = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BlankEarthTransformData_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_BlankEarthTransformData_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_CaldeaGateFolderFocusWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A587EF & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587EF = 1;
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

  if ( (byte_4A58782 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58782 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignBonus_k__BackingField = value;
  sub_1B88554(
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

  if ( (byte_4A58784 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58784 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = value;
  sub_1B88554(
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

  if ( (byte_4A587B3 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587B3 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_ClearEventQuestIds_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_ClearEventQuestIds_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_DataLostBattleEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A58772 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58772 = 1;
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

  if ( (byte_4A5877A & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5877A = 1;
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

  if ( (byte_4A58774 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58774 = 1;
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

  if ( (byte_4A587F8 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587F8 = 1;
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

  if ( (byte_4A587F7 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587F7 = 1;
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

  if ( (byte_4A587F5 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587F5 = 1;
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

  if ( (byte_4A587F6 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587F6 = 1;
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

  if ( (byte_4A58724 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58724 = 1;
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

  if ( (byte_4A58768 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58768 = 1;
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

  if ( (byte_4A587B9 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587B9 = 1;
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

  if ( (byte_4A587C1 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587C1 = 1;
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

  if ( (byte_4A587AB & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587AB = 1;
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

  if ( (byte_4A587A7 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587A7 = 1;
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

  if ( (byte_4A58752 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58752 = 1;
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

  if ( (byte_4A587BD & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587BD = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_EventUIEffectClearQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A587E5 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587E5 = 1;
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

  if ( (byte_4A58804 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58804 = 1;
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

  if ( (byte_4A58806 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58806 = 1;
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

  if ( (byte_4A58822 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58822 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v3 = value;
  if ( !byte_4A5644B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5644B = 1;
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

  if ( (byte_4A587FE & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587FE = 1;
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

  if ( (byte_4A58800 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58800 = 1;
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

  if ( (byte_4A5881C & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5881C = 1;
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

  if ( (byte_4A587E1 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587E1 = 1;
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

  if ( (byte_4A58808 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58808 = 1;
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

  if ( (byte_4A58770 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58770 = 1;
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

  if ( (byte_4A5877C & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5877C = 1;
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

  if ( (byte_4A58778 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58778 = 1;
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

  if ( (byte_4A587EB & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587EB = 1;
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

  if ( (byte_4A58748 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58748 = 1;
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

  if ( (byte_4A5874A & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5874A = 1;
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

  if ( (byte_4A5875A & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5875A = 1;
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

  if ( (byte_4A5874C & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5874C = 1;
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

  if ( (byte_4A58732 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58732 = 1;
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

  if ( (byte_4A587C3 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587C3 = 1;
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

  if ( (byte_4A5873A & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5873A = 1;
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

  if ( (byte_4A58738 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58738 = 1;
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

  if ( (byte_4A587F4 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587F4 = 1;
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

  if ( (byte_4A58802 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58802 = 1;
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

  if ( (byte_4A58750 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58750 = 1;
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

  if ( (byte_4A58758 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58758 = 1;
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

  if ( (byte_4A5875E & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5875E = 1;
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

  if ( (byte_4A587C5 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587C5 = 1;
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

  if ( (byte_4A5875C & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5875C = 1;
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

  if ( (byte_4A587D3 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587D3 = 1;
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

  if ( (byte_4A587D5 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587D5 = 1;
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

  if ( (byte_4A587D7 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587D7 = 1;
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

  if ( (byte_4A5877E & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5877E = 1;
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

  if ( (byte_4A58756 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58756 = 1;
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

  if ( (byte_4A58760 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58760 = 1;
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

  if ( (byte_4A5881A & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5881A = 1;
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

  if ( (byte_4A58776 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58776 = 1;
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

  if ( (byte_4A5880A & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5880A = 1;
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

  if ( (byte_4A587E9 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587E9 = 1;
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

  if ( (byte_4A5876A & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5876A = 1;
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

  if ( (byte_4A5874E & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5874E = 1;
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

  if ( (byte_4A58742 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58742 = 1;
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

  if ( (byte_4A58740 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58740 = 1;
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

  if ( (byte_4A58744 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58744 = 1;
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

  if ( (byte_4A5876E & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5876E = 1;
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

  if ( (byte_4A5876C & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5876C = 1;
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

  if ( (byte_4A58824 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58824 = 1;
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

  if ( (byte_4A58762 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58762 = 1;
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

  if ( (byte_4A587E3 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587E3 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_NoticeLastModified_k__BackingField = value;
  sub_1B88554(
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

  if ( (byte_4A587F1 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587F1 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_OldUserEventPoint_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_OldUserEventPoint_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_PhaseCnt(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A58730 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58730 = 1;
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

  if ( (byte_4A58754 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58754 = 1;
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
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A587D1 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587D1 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_PlayedTerminalEffects_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_PlayedTerminalEffects_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_PlayerGenderType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A58780 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58780 = 1;
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

  if ( (byte_4A5872E & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5872E = 1;
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

  if ( (byte_4A5880C & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5880C = 1;
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

  if ( (byte_4A5880E & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5880E = 1;
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

  if ( (byte_4A587CF & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587CF = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_QuestRandomGroupList_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_QuestRandomGroupList_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_QuestReleaseFocusQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A5873C & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5873C = 1;
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

  if ( (byte_4A58764 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58764 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = value;
  sub_1B88554(
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

  if ( (byte_4A587E7 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587E7 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SceneMoveQuestClearedInfo_k__BackingField = value;
  sub_1B88554(
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

  if ( (byte_4A5873E & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5873E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_SelectedRecollectionWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A58736 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58736 = 1;
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

  if ( (byte_4A58734 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58734 = 1;
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

  if ( (byte_4A587ED & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587ED = 1;
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

  if ( (byte_4A58788 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58788 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SpecifiedChangeSceneInfo_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_SpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A5872C & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5872C = 1;
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

  if ( (byte_4A5872A & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5872A = 1;
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

  if ( (byte_4A58728 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58728 = 1;
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

  if ( (byte_4A58810 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58810 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_TalkScriptInfo_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_TalkScriptInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_TimeStatusEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A587AF & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587AF = 1;
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

  if ( (byte_4A587B1 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587B1 = 1;
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

  if ( (byte_4A587C7 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587C7 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_WarBoardData_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_WarBoardData_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_WarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A58726 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58726 = 1;
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

  if ( (byte_4A58786 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58786 = 1;
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
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A587A5 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587A5 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventDailyPoint_k__BackingField = value;
  sub_1B88554(
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

  if ( (byte_4A58790 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58790 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventPointWinReward_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_eventPointWinReward_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_eventPointWinType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A5878E & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5878E = 1;
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

  if ( (byte_4A58792 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58792 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventRaceBoost_k__BackingField = value;
  sub_1B88554(
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

  if ( (byte_4A5879B & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5879B = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventTowerReward_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_eventTowerReward_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_friendshipQuestDialogOpenId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A58814 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58814 = 1;
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

  if ( (byte_4A587CB & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587CB = 1;
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

  if ( (byte_4A587BF & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587BF = 1;
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

  if ( (byte_4A587CD & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587CD = 1;
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

  if ( (byte_4A587FC & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587FC = 1;
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

  if ( (byte_4A587FA & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587FA = 1;
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

  if ( (byte_4A587C9 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587C9 = 1;
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

  if ( (byte_4A58816 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58816 = 1;
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

  if ( (byte_4A58812 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58812 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_limitImageAnnounces_k__BackingField = value;
  sub_1B88554(
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

  if ( (byte_4A5878C & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5878C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_oldPersonalBoss_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_oldPersonalBoss_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager__set_oldQuestIdForHeaderEvent(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A58798 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58798 = 1;
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

  if ( (byte_4A5878A & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5878A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_oldSuperBoss_k__BackingField = value;
  sub_1B88554(
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

  if ( (byte_4A58796 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58796 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_questClearCostumeGet_k__BackingField = value;
  sub_1B88554(
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

  if ( (byte_4A58794 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58794 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_questClearCostumeRelease_k__BackingField = value;
  sub_1B88554(
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

  if ( (byte_4A5879F & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5879F = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultBoostItemRewardInfo_k__BackingField = value;
  sub_1B88554(
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

  if ( (byte_4A587A1 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587A1 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (ServantStatusBattleListViewItem_o *)v5->static_fields;
  static_fields[2].klass = (ServantStatusBattleListViewItem_c *)value;
  sub_1B88554(static_fields + 2, (int32_t)value, v2, v3);
}


void __fastcall TerminalPramsManager__set_resultEventTowerRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4A5879D & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5879D = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultEventTowerRewardInfo_k__BackingField = value;
  sub_1B88554(
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

  if ( (byte_4A587A3 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587A3 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_timeStatusRecord_k__BackingField = value;
  sub_1B88554(
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

  if ( (byte_4A58818 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58818 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_updateProfileInfoEntity_k__BackingField = value;
  sub_1B88554(
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

  if ( (byte_4A587AD & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A587AD = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_warClearReward_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_warClearReward_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall TerminalPramsManager_ClearData___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A58883 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1B885B0(&StringLiteral_13279/*"TERMINAL_CLEAR_REWARD_DISP"*/);
    byte_4A58883 = 1;
  }
  TerminalPramsManager_ClearData_TypeInfo->static_fields->SAVEKEY_CLEAR_REWARD_DISP = (struct System_String_o *)StringLiteral_13279/*"TERMINAL_CLEAR_REWARD_DISP"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)TerminalPramsManager_ClearData_TypeInfo->static_fields,
    StringLiteral_13279/*"TERMINAL_CLEAR_REWARD_DISP"*/,
    v1,
    v2);
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
  struct UserEventPointEntity_array **p_oldUserEventPoint; // x19
  int32_t v35; // w2
  int32_t v36; // w3

  if ( (byte_4A58881 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58881 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.qClearHeroineInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v3, v4);
  this->fields.questRewardInfos = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questRewardInfos, 0, v5, v6);
  this->fields.questPhaseRewardInfos = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questPhaseRewardInfos, 0, v7, v8);
  this->fields.questResultAfterEventRewardInfos = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questResultAfterEventRewardInfos, 0, v9, v10);
  this->fields.resultEventPanelRewardInfos = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resultEventPanelRewardInfos, 0, v11, v12);
  this->fields.panelEventPoint = 0;
  *(_QWORD *)&this->fields.clearedLastBattleRaidId = -1LL;
  this->fields.joinGroup = -1;
  this->fields.mOldSuperBoss = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mOldSuperBoss, 0, v13, v14);
  this->fields.oldPersonalBoss = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.oldPersonalBoss, 0, v15, v16);
  this->fields.evPointWinReward = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.evPointWinReward, 0, v17, v18);
  this->fields.evPointWinType = 0;
  this->fields.evRaceBoost = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.evRaceBoost, 0, v19, v20);
  this->fields.questClearCostume = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questClearCostume, 0, v21, v22);
  this->fields.questClearCostumeGetInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questClearCostumeGetInfo, 0, v23, v24);
  this->fields.eventTowerReward = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventTowerReward, 0, v25, v26);
  this->fields.resultEventTowerRewardInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resultEventTowerRewardInfo, 0, v27, v28);
  this->fields.warClearReward = 0LL;
  this->fields.isDispOnly = 0;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.warClearReward, 0, v29, v30);
  v33 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  this->fields.EventActivityPointEffectState = v33->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  this->fields.limitImageAnnounces = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.limitImageAnnounces, 0, v31, v32);
  this->fields.oldUserEventPoint = 0LL;
  p_oldUserEventPoint = &this->fields.oldUserEventPoint;
  *((_BYTE *)p_oldUserEventPoint - 16) = 0;
  *((_DWORD *)p_oldUserEventPoint - 3) = 0;
  *((_BYTE *)p_oldUserEventPoint - 8) = 0;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_oldUserEventPoint, 0, v35, v36);
}


void __fastcall TerminalPramsManager_ClearData___ctor_34806380(
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
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v39; // x0
  const MethodInfo *v40; // x2
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v41; // x25
  __int64 v42; // x0
  __int64 v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  bool v46; // w28
  bool v47; // w22
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w2
  int32_t v53; // w3
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w2
  int32_t v61; // w3
  int32_t v62; // w2
  int32_t v63; // w3
  int32_t v64; // w2
  int32_t v65; // w3
  int32_t v66; // w2
  int32_t v67; // w3
  struct QuestRewardInfo_array *v68; // x1
  int32_t v69; // w2
  int32_t v70; // w3
  TerminalPramsManager_c *v71; // x0
  TerminalPramsManager_c *v72; // x0
  struct QuestRewardInfo_array *resultBoostItemRewardInfo_k__BackingField; // x1
  int32_t v74; // w2
  int32_t v75; // w3
  int32_t v76; // w2
  int32_t v77; // w3
  TerminalPramsManager_c *v78; // x0
  TerminalPramsManager_c *v79; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo_k__BackingField; // x1
  int32_t v81; // w2
  int32_t v82; // w3
  struct WarClearReward_array *v83; // x1
  int32_t v84; // w2
  int32_t v85; // w3
  struct BattleDropItem_array *v86; // x1
  int32_t v87; // w2
  int32_t v88; // w3
  struct BattleDropItem_array *v89; // x1
  int32_t v90; // w2
  int32_t v91; // w3
  struct LimitImageAnnounce_array *v92; // x1
  int32_t v93; // w2
  int32_t v94; // w3
  TerminalPramsManager_c *v95; // x0
  struct UserEventPointEntity_array *OldUserEventPoint_k__BackingField; // x1

  v29 = oldSuperBoss;
  v36 = questClearCostumeGet;
  v37 = questClearCostumeRelease;
  v38 = oldPersonalBoss;
  if ( (byte_4A58882 & 1) == 0 )
  {
    sub_1B885B0(&BattleDropItem___TypeInfo);
    sub_1B885B0(&CostumeReleaseAnnounce___TypeInfo);
    sub_1B885B0(&LimitImageAnnounce___TypeInfo);
    sub_1B885B0(&TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
    sub_1B885B0(&QuestRewardInfo___TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&UserSuperBossEntity___TypeInfo);
    sub_1B885B0(&WarClearReward___TypeInfo);
    byte_4A58882 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v39 = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)sub_1B887FC(TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
  v41 = v39;
  if ( qcrHeroineInfo )
  {
    TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_34815920(v39, qcrHeroineInfo, v40);
    if ( this )
      goto LABEL_5;
LABEL_34:
    sub_1B8880C(v42, v43);
  }
  System_Object___ctor((Il2CppObject *)v39, 0LL);
  v41->fields.oldUsrSvtData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v41->fields, 0, v74, v75);
  if ( !this )
    goto LABEL_34;
LABEL_5:
  this->fields.qClearHeroineInfo = v41;
  v46 = qClear;
  v47 = pclear;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v41, v44, v45);
  if ( !qri )
    qri = (QuestRewardInfo_array *)sub_1B88658(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.questRewardInfos = qri;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questRewardInfos, (int32_t)qri, v48, v49);
  if ( !questPhaseRewardInfos )
    questPhaseRewardInfos = (QuestRewardInfo_array *)sub_1B88658(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.questPhaseRewardInfos = questPhaseRewardInfos;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questPhaseRewardInfos,
    (int32_t)questPhaseRewardInfos,
    v50,
    v51);
  this->fields.questClear = v46;
  this->fields.phaseClear = v47;
  this->fields.clearedLastBattleRaidId = lastRaidId;
  this->fields.clearedBattleRaidId = raidId;
  this->fields.joinGroup = groupjoin;
  if ( !oldSuperBoss )
    v29 = (struct UserSuperBossEntity_array *)sub_1B88658(UserSuperBossEntity___TypeInfo, 0LL);
  this->fields.mOldSuperBoss = v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mOldSuperBoss, (int32_t)v29, v52, v53);
  if ( !oldPersonalBoss )
    v38 = (struct UserSuperBossEntity_array *)sub_1B88658(UserSuperBossEntity___TypeInfo, 0LL);
  this->fields.oldPersonalBoss = v38;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.oldPersonalBoss, (int32_t)v38, v54, v55);
  this->fields.evPointWinReward = evpWinReward;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.evPointWinReward, (int32_t)evpWinReward, v56, v57);
  this->fields.evRaceBoost = evRace;
  this->fields.evPointWinType = evpWinType;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.evRaceBoost, (int32_t)evRace, v58, v59);
  if ( !questClearCostumeRelease )
    v37 = (struct CostumeReleaseAnnounce_array *)sub_1B88658(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostume = v37;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questClearCostume, (int32_t)v37, v60, v61);
  if ( !questClearCostumeGet )
    v36 = (struct CostumeReleaseAnnounce_array *)sub_1B88658(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostumeGetInfo = v36;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questClearCostumeGetInfo, (int32_t)v36, v62, v63);
  this->fields.eventTowerReward = evTowerReward;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventTowerReward, (int32_t)evTowerReward, v64, v65);
  v68 = resultEvTowerRewardInfo;
  if ( !resultEvTowerRewardInfo )
    v68 = (struct QuestRewardInfo_array *)sub_1B88658(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.resultEventTowerRewardInfo = v68;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resultEventTowerRewardInfo, (int32_t)v68, v66, v67);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58369 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58369 = 1;
  }
  v71 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v71 = TerminalPramsManager_TypeInfo;
  }
  if ( v71->static_fields->_resultBoostItemRewardInfo_k__BackingField )
  {
    if ( !v71->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v71);
    if ( !byte_4A58369 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58369 = 1;
    }
    v72 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v72 = TerminalPramsManager_TypeInfo;
    }
    resultBoostItemRewardInfo_k__BackingField = v72->static_fields->_resultBoostItemRewardInfo_k__BackingField;
  }
  else
  {
    resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1B88658(
                                                                                  QuestRewardInfo___TypeInfo,
                                                                                  0LL);
  }
  this->fields.resultBoostItemRewardInfo = resultBoostItemRewardInfo_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultBoostItemRewardInfo,
    (int32_t)resultBoostItemRewardInfo_k__BackingField,
    v69,
    v70);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58361 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58361 = 1;
  }
  v78 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v78 = TerminalPramsManager_TypeInfo;
  }
  if ( v78->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField )
  {
    if ( !v78->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v78);
    if ( !byte_4A58361 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58361 = 1;
    }
    v79 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v79 = TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfo_k__BackingField = v79->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
  }
  else
  {
    resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1B88658(
                                                                                            QuestRewardInfo___TypeInfo,
                                                                                            0LL);
  }
  this->fields.resultEventBoardGameTokenRewardInfo = resultEventBoardGameTokenRewardInfo_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultEventBoardGameTokenRewardInfo,
    (int32_t)resultEventBoardGameTokenRewardInfo_k__BackingField,
    v76,
    v77);
  v83 = warClearRewardIn;
  this->fields.isDispOnly = dispOnly;
  if ( !warClearRewardIn )
    v83 = (struct WarClearReward_array *)sub_1B88658(WarClearReward___TypeInfo, 0LL);
  this->fields.warClearReward = v83;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.warClearReward, (int32_t)v83, v81, v82);
  v86 = questResultAfterEventRewardInfos;
  this->fields.isWarBoardClear = isWarBoardClear;
  this->fields.EventActivityPointEffectState = eventActivityPointEffectState;
  if ( !questResultAfterEventRewardInfos )
    v86 = (struct BattleDropItem_array *)sub_1B88658(BattleDropItem___TypeInfo, 0LL);
  this->fields.questResultAfterEventRewardInfos = v86;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questResultAfterEventRewardInfos,
    (int32_t)v86,
    v84,
    v85);
  v89 = resultEventPanelRewardInfos;
  if ( !resultEventPanelRewardInfos )
    v89 = (struct BattleDropItem_array *)sub_1B88658(BattleDropItem___TypeInfo, 0LL);
  this->fields.resultEventPanelRewardInfos = v89;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resultEventPanelRewardInfos, (int32_t)v89, v87, v88);
  v92 = limitImageAnnounces;
  this->fields.panelEventPoint = panelEventPoint;
  if ( !limitImageAnnounces )
    v92 = (struct LimitImageAnnounce_array *)sub_1B88658(LimitImageAnnounce___TypeInfo, 0LL);
  this->fields.limitImageAnnounces = v92;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.limitImageAnnounces, (int32_t)v92, v90, v91);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57CDE )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57CDE = 1;
  }
  v95 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v95 = TerminalPramsManager_TypeInfo;
  }
  this->fields.isOrdealCallWarClear = v95->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4A58364 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v95 = TerminalPramsManager_TypeInfo;
    byte_4A58364 = 1;
  }
  if ( !v95->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v95);
    v95 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventMuralId = v95->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_4A58366 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v95 = TerminalPramsManager_TypeInfo;
    byte_4A58366 = 1;
  }
  if ( !v95->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v95);
    v95 = TerminalPramsManager_TypeInfo;
  }
  this->fields.playHappinessCounterEffect = v95->static_fields->_PlayHappinessCounterEffect_k__BackingField;
  if ( !byte_4A57DCD )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v95 = TerminalPramsManager_TypeInfo;
    byte_4A57DCD = 1;
  }
  if ( !v95->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v95);
    v95 = TerminalPramsManager_TypeInfo;
  }
  OldUserEventPoint_k__BackingField = v95->static_fields->_OldUserEventPoint_k__BackingField;
  this->fields.oldUserEventPoint = OldUserEventPoint_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.oldUserEventPoint,
    (int32_t)OldUserEventPoint_k__BackingField,
    v93,
    v94);
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor_34815156(
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

  if ( (byte_4A5887D & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5887D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !uSvtEnt )
    sub_1B8880C(v5, v6);
  v7 = *(_OWORD *)&uSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  this->fields.id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v12, 0LL);
  v8 = *(_OWORD *)&uSvtEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v11, 0LL);
  v10 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                              uSvtEnt->fields.limitCount,
                              0LL);
  this->fields.imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                   uSvtEnt->fields.imageLimitCount,
                                   0LL);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                  uSvtEnt->fields.dispLimitCount,
                                  0LL);
  this->fields.commandCardLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                         uSvtEnt->fields.commandCardLimitCount,
                                         0LL);
  this->fields.iconLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
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

  if ( (byte_4A5887E & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5887E = 1;
  }
  v3 = sub_1B887FC(UserServantEntity_TypeInfo);
  UserServantEntity___ctor((UserServantEntity_o *)v3, 0LL);
  id = this->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v12, id, 0LL);
  v13 = v12;
  if ( !v3 )
    sub_1B8880C(v5, v6);
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
  int32_t v3; // w2
  int32_t v4; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.oldUsrSvtData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v3, v4);
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_34815920(
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

  if ( (byte_4A5887F & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_OldHeroineLawData_TypeInfo);
    byte_4A5887F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !qClearHeroineInfo )
    sub_1B8880C(v5, v6);
  oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
  v8 = (TerminalPramsManager_OldHeroineLawData_o *)sub_1B887FC(TerminalPramsManager_OldHeroineLawData_TypeInfo);
  TerminalPramsManager_OldHeroineLawData___ctor_34815156(v8, oldUsrSvtData, v9);
  this->fields.oldUsrSvtData = v8;
  p_fields = &this->fields;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_fields, (int32_t)v8, v11, v12);
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

  if ( (byte_4A58880 & 1) == 0 )
  {
    sub_1B885B0(&QuestClearHeroineInfo_TypeInfo);
    byte_4A58880 = 1;
  }
  v3 = sub_1B887FC(QuestClearHeroineInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  oldUsrSvtData = this->fields.oldUsrSvtData;
  if ( !oldUsrSvtData
    || (oldUsrSvtData = (TerminalPramsManager_OldHeroineLawData_o *)TerminalPramsManager_OldHeroineLawData__GetLoad(
                                                                      oldUsrSvtData,
                                                                      v4),
        !v3) )
  {
    sub_1B8880C(oldUsrSvtData, v4);
  }
  *(_QWORD *)(v3 + 16) = oldUsrSvtData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)oldUsrSvtData, v6, v7);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A58884 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager___c_TypeInfo);
    byte_4A58884 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(TerminalPramsManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TerminalPramsManager___c_TypeInfo->static_fields->__9 = (struct TerminalPramsManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)TerminalPramsManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall TerminalPramsManager___c___ctor(TerminalPramsManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TerminalPramsManager___c___ReceiveQuestEndResultInfo_b__669_0(
        TerminalPramsManager___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  int32_t questId; // w19
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4A58885 & 1) == 0 )
  {
    this = (TerminalPramsManager___c_o *)sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58885 = 1;
  }
  if ( !n )
    sub_1B8880C(this, n);
  questId = n->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
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
bool __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__674_0(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  if ( (byte_4A58886 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58886 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStoryForQuestId(v, *(const MethodInfo **)&v);
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__674_3(
        TerminalPramsManager___c_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1B8880C(this, 0LL);
  return v->fields.id;
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__674_4(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  return v;
}


void __fastcall TerminalPramsManager___c__DisplayClass657_0___ctor(
        TerminalPramsManager___c__DisplayClass657_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager___c__DisplayClass657_0___CheckResumeEffectNT2_b__0(
        TerminalPramsManager___c__DisplayClass657_0_o *this,
        System_String_o *effectId,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_fields; // x19
  System_String_o *effectIdsStr; // t1
  System_String_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A58887 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    byte_4A58887 = 1;
  }
  effectIdsStr = this->fields.effectIdsStr;
  p_fields = (ServantStatusBattleListViewItem_o *)&this->fields;
  v7 = System_String__Concat_61718292(effectIdsStr, effectId, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  p_fields->klass = (ServantStatusBattleListViewItem_c *)v7;
  sub_1B88554(p_fields, (int32_t)v7, v8, v9);
}


void __fastcall TerminalPramsManager___c__DisplayClass674_0___ctor(
        TerminalPramsManager___c__DisplayClass674_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


QuestEntity_o *__fastcall TerminalPramsManager___c__DisplayClass674_0___SendOpenedQuestIdToAdManager_b__1(
        TerminalPramsManager___c__DisplayClass674_0_o *this,
        int32_t v,
        const MethodInfo *method)
{
  QuestMaster_o *questMaster; // x0

  questMaster = this->fields.questMaster;
  if ( !questMaster )
    sub_1B8880C(0LL, v);
  return QuestMaster__getQuestEntity(questMaster, v, 0LL);
}


bool __fastcall TerminalPramsManager___c__DisplayClass674_0___SendOpenedQuestIdToAdManager_b__2(
        TerminalPramsManager___c__DisplayClass674_0_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  UserQuestMaster_o *userQuestMaster; // x20
  int64_t UserId; // x0
  __int64 v7; // x1
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A58888 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A58888 = 1;
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
    sub_1B8880C(UserId, v7);
  }
  return 1;
}