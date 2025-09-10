void TerminalPramsManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v1; // x19
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct TerminalPramsManager_StaticFields *v5; // x0
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  struct TerminalPramsManager_StaticFields *v10; // x8
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x19
  CGThumbnailListItem_o *p_eventScriptMessages; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct TerminalPramsManager_StaticFields *v17; // x8

  if ( (byte_4C24713 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&float___TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C24713 = 1;
  }
  v1 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v1,
    (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->loginQuestNotifiedList = v1;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->loginQuestNotifiedList, (int32_t)v1, v3, v4);
  v5 = TerminalPramsManager_TypeInfo->static_fields;
  v5->_IsMainInterludeWarClear_k__BackingField = 0;
  v6 = StringLiteral_1/*""*/;
  v5->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->mTerminalWarStartedIds, v6, v7, v8);
  *(_OWORD *)&TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = xmmword_C099D0;
  v9 = sub_1C2D538(float___TypeInfo, 3);
  v10 = TerminalPramsManager_TypeInfo->static_fields;
  v10->TipsArchiveScrollValueList = (struct System_Single_array *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->TipsArchiveScrollValueList, v9, v11, v12);
  TerminalPramsManager_TypeInfo->static_fields->joinGroupId = -1;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  p_eventScriptMessages = (CGThumbnailListItem_o *)&TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  p_eventScriptMessages->klass = (CGThumbnailListItem_c *)v13;
  sub_1C2D434(p_eventScriptMessages, (int32_t)v13, v15, v16);
  v17 = TerminalPramsManager_TypeInfo->static_fields;
  *(_QWORD *)&v17->EVENT_POINT_EFFECT_STATE_SUB = 0xFFFFFFFFLL;
  v17->EVENT_POINT_EFFECT_STATE_ADD = 1;
  v17->_IsTransFromOrdealCall_k__BackingField = 0;
  v17->isInvisibleConnectAndLoad = 0;
  *(_QWORD *)&v17->ConnectMarkEventId = 0;
  v17->meSceneStatus = 0;
  *(_OWORD *)&v17->_ShopFocusItemId_k__BackingField = 0u;
  v17->isCheckHomeExpirationDateEventMap = 1;
  v17->_IsMoveFolderByQuestAfterAction_k__BackingField = 0;
  *(_WORD *)&v17->IsEventMapLoading = 0;
  v17->_MasterMissionTargetType_k__BackingField = -1;
}


void TerminalPramsManager__AddNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_4C246EF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246EF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v3->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_HashSet_int___Add(
    loginQuestNotifiedList,
    questId,
    (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void TerminalPramsManager__AutoOff(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C246B1 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246B1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21ACD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21ACD = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_IsAutoResume_k__BackingField = 0;
  if ( !byte_4C242ED )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_4C242ED = 1;
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


void TerminalPramsManager__BlankEarthRank_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246E3 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11442/*"SAVEKEY_BlankEarthRank"*/);
    byte_4C246E3 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24736 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24736 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11442/*"SAVEKEY_BlankEarthRank"*/,
    v1->static_fields->_BlankEarthRank_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__BlankEarthSpotId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246E2 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11443/*"SAVEKEY_BlankEarthSpotId"*/);
    byte_4C246E2 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23B21 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23B21 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11443/*"SAVEKEY_BlankEarthSpotId"*/,
    v1->static_fields->_BlankEarthSpotId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__CampaignDirectBonus_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  Il2CppObject *p_obj; // x19
  System_String_o *v3; // x0

  if ( (byte_4C246E1 & 1) == 0 )
  {
    sub_1C2D490(&CommonUI_CampaignDirectBonusData___TypeInfo);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11444/*"SAVEKEY_CampaignDirectBonus"*/);
    byte_4C246E1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21384 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21384 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  p_obj = &v1->static_fields->_CampaignDirectBonus_k__BackingField->obj;
  if ( !p_obj )
    p_obj = (Il2CppObject *)sub_1C2D538(CommonUI_CampaignDirectBonusData___TypeInfo, 0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(p_obj, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11444/*"SAVEKEY_CampaignDirectBonus"*/, v3, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool TerminalPramsManager__CanSendTrackEvent(int32_t questId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x19
  Il2CppObject *v8; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C246FE & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C2D490(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C246FE = 1;
  }
  v8 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !entity )
    goto LABEL_16;
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0);
  if ( !v5 )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v5,
          &v8,
          (int32_t)Instance,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v8 )
LABEL_16:
    sub_1C2D6EC(Instance, v4);
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
            HIDWORD(v8[1].klass),
            (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
}


void TerminalPramsManager__CheckClearSelectedStoryQuestId(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4C246E4 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246E4 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244F6 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244F6 = 1;
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
    if ( !byte_4C244F6 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C244F6 = 1;
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
      if ( !byte_4C23FAD )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23FAD = 1;
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


bool TerminalPramsManager__CheckEventActivityPointSaveData(const MethodInfo *method)
{
  if ( (byte_4C246CC & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_13692/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C2D490(&StringLiteral_13693/*"TerminalBeforeEventActivityPointGauge"*/);
    byte_4C246CC = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13692/*"TerminalBeforeEventActivityPoint"*/, 0)
      && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13693/*"TerminalBeforeEventActivityPointGauge"*/, 0);
}


bool TerminalPramsManager__CheckEventSubmarinePointSaveData(const MethodInfo *method)
{
  if ( (byte_4C246CE & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_13694/*"TerminalBeforeEventSubmarinePointData"*/);
    byte_4C246CE = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13694/*"TerminalBeforeEventSubmarinePointData"*/, 0);
}


bool TerminalPramsManager__CheckIsOrdealCallWarClear(WarEntity_o *warEntity, const MethodInfo *method)
{
  int32_t parentWarId; // w19
  BalanceConfig_c *v4; // x0

  if ( (byte_4C2470B & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C2470B = 1;
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


void TerminalPramsManager__CheckResumeEffectNT2(const MethodInfo *method)
{
  __int64 v1; // x19
  const MethodInfo *v2; // x1
  TerminalPramsManager_c *v3; // x0
  ScrTerminalListTop_c *v4; // x8
  System_String_o *NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // x20
  const MethodInfo *v6; // x1
  ScrTerminalListTop_c *v7; // x0
  System_String_o *NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // x20
  __int64 v9; // x1
  ScrTerminalListTop_c *v10; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  Il2CppObject *v12; // x20
  TerminalPramsManager_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  System_Action_object__o *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  CGThumbnailListItem_c *v22; // x19
  TerminalPramsManager_c *v23; // x0
  CGThumbnailListItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  const MethodInfo *v25; // x0

  if ( (byte_4C246E8 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_string__TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ForEach__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C2D490(&ScrTerminalListTop_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_TerminalPramsManager___c__DisplayClass712_0__CheckResumeEffectNT2_b__0__);
    sub_1C2D490(&TerminalPramsManager___c__DisplayClass712_0_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_87/*"\r\n"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C246E8 = 1;
  }
  v1 = sub_1C2D6DC(TerminalPramsManager___c__DisplayClass712_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass712_0___ctor((TerminalPramsManager___c__DisplayClass712_0_o *)v1, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24734 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24734 = 1;
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
        v10 = ScrTerminalListTop_TypeInfo;
        if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
          v10 = ScrTerminalListTop_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v10->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
        if ( !PlayedTerminalEffects_k__BackingField )
          goto LABEL_39;
        v12 = (Il2CppObject *)((__int64 (__fastcall *)(System_String_o *, const MethodInfo *))PlayedTerminalEffects_k__BackingField->klass->vtable._3_ToString.methodPtr)(
                                PlayedTerminalEffects_k__BackingField,
                                PlayedTerminalEffects_k__BackingField->klass->vtable._3_ToString.method);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C24734 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C24734 = 1;
        }
        v13 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v13 = TerminalPramsManager_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v13->static_fields->_PlayedTerminalEffects_k__BackingField;
        if ( !PlayedTerminalEffects_k__BackingField
          || (PlayedTerminalEffects_k__BackingField = System_String__Replace_63504412(
                                                        PlayedTerminalEffects_k__BackingField,
                                                        (System_String_o *)StringLiteral_87/*"\r\n"*/,
                                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                                        0)) == 0
          || (v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                           PlayedTerminalEffects_k__BackingField,
                                                                           0xAu,
                                                                           0,
                                                                           0),
              (PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Linq_Enumerable__ToList_object_(
                                                                            v14,
                                                                            (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_string___)) == 0)
          || (v15 = (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
              PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Collections_Generic_List_object___Remove(
                                                                           (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
                                                                           v12,
                                                                           (const MethodInfo_378B0AC *)Method_System_Collections_Generic_List_string__Remove__),
              !v1) )
        {
LABEL_39:
          sub_1C2D6EC(PlayedTerminalEffects_k__BackingField, v9);
        }
        v18 = StringLiteral_1/*""*/;
        *(_QWORD *)(v1 + 16) = StringLiteral_1/*""*/;
        sub_1C2D434((CGThumbnailListItem_o *)(v1 + 16), v18, v16, v17);
        v19 = (System_Action_object__o *)sub_1C2D6DC(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v19,
          (Il2CppObject *)v1,
          Method_TerminalPramsManager___c__DisplayClass712_0__CheckResumeEffectNT2_b__0__,
          0);
        System_Collections_Generic_List_object___ForEach(
          v15,
          (System_Action_T__o *)v19,
          (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_string__ForEach__);
        v22 = *(CGThumbnailListItem_c **)(v1 + 16);
        if ( !byte_4C24725 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C24725 = 1;
        }
        v23 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v23 = TerminalPramsManager_TypeInfo;
        }
        p_PlayedTerminalEffects_k__BackingField = (CGThumbnailListItem_o *)&v23->static_fields->_PlayedTerminalEffects_k__BackingField;
        p_PlayedTerminalEffects_k__BackingField->klass = v22;
        sub_1C2D434(p_PlayedTerminalEffects_k__BackingField, (int32_t)v22, v20, v21);
        TerminalPramsManager__Save_SaveData(v25);
      }
    }
  }
}


void TerminalPramsManager__ClearEventQuestIds_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246DC & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11445/*"SAVEKEY_ClearEventQuestIds"*/);
    byte_4C246DC = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23BE0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BE0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11445/*"SAVEKEY_ClearEventQuestIds"*/,
    v1->static_fields->_ClearEventQuestIds_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__ConnectMark_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246DB & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11447/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C2D490(&StringLiteral_11446/*"SAVEKEY_ConnectMarkAnimationId"*/);
    byte_4C246DB = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11447/*"SAVEKEY_ConnectMarkEventId"*/, v1->static_fields->ConnectMarkEventId, 0);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11446/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__DeleteClearDatas(const MethodInfo *method)
{
  TerminalPramsManager_ClearData_c *v1; // x0
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v4; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t v6; // w1

  if ( (byte_4C24701 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C24701 = 1;
  }
  v1 = TerminalPramsManager_ClearData_TypeInfo;
  if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
    v1 = TerminalPramsManager_ClearData_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24748 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24748 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  static_fields->_isQuestRewardSetted_k__BackingField = 0;
  v6 = StringLiteral_1/*""*/;
  static_fields->lastPlayBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->lastPlayBgmName, v6, v2, v3);
}


void TerminalPramsManager__DeleteContinueData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_4C246BF & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11450/*"SAVEKEY_LastPlayBgmName"*/);
    sub_1C2D490(&StringLiteral_13696/*"TerminalEndTime"*/);
    sub_1C2D490(&StringLiteral_5177/*"Debug_IsOriginalGuestNPC"*/);
    sub_1C2D490(&StringLiteral_11456/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_1C2D490(&StringLiteral_13692/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C2D490(&StringLiteral_11444/*"SAVEKEY_CampaignDirectBonus"*/);
    sub_1C2D490(&StringLiteral_11451/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    sub_1C2D490(&StringLiteral_11461/*"SAVEKEY_TerminalCraftInfoDisp"*/);
    sub_1C2D490(&StringLiteral_13697/*"TerminalEventDailyPointEventId"*/);
    sub_1C2D490(&StringLiteral_5173/*"Debug_GuestNPCInfoList"*/);
    sub_1C2D490(&StringLiteral_13694/*"TerminalBeforeEventSubmarinePointData"*/);
    sub_1C2D490(&StringLiteral_13703/*"TerminalPhaseCnt"*/);
    sub_1C2D490(&StringLiteral_11460/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_1C2D490(&StringLiteral_13711/*"TerminalTimeStatusEventId"*/);
    sub_1C2D490(&StringLiteral_13695/*"TerminalDispState"*/);
    sub_1C2D490(&StringLiteral_11453/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_1C2D490(&StringLiteral_13698/*"TerminalIsDoneShortcut"*/);
    sub_1C2D490(&StringLiteral_11452/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C2D490(&StringLiteral_11457/*"SAVEKEY_PlayerGenderType"*/);
    sub_1C2D490(&StringLiteral_11462/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    sub_1C2D490(&StringLiteral_11445/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_1C2D490(&StringLiteral_11454/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_1C2D490(&StringLiteral_5178/*"Debug_IsQuestReleaseAll"*/);
    sub_1C2D490(&StringLiteral_5175/*"Debug_IsDummyErrorSelect"*/);
    sub_1C2D490(&StringLiteral_13706/*"TerminalQuestId"*/);
    sub_1C2D490(&StringLiteral_11459/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    sub_1C2D490(&StringLiteral_11465/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_1C2D490(&StringLiteral_13710/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_1C2D490(&StringLiteral_13715/*"TerminalWarId"*/);
    sub_1C2D490(&StringLiteral_13708/*"TerminalSpotId"*/);
    sub_1C2D490(&StringLiteral_13712/*"TerminalTimeStatusLoopCount"*/);
    sub_1C2D490(&StringLiteral_13693/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_1C2D490(&StringLiteral_11443/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_1C2D490(&StringLiteral_11448/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_1C2D490(&StringLiteral_5176/*"Debug_IsOriginalBattle"*/);
    sub_1C2D490(&StringLiteral_13716/*"TerminalWarStartedIds"*/);
    sub_1C2D490(&StringLiteral_5172/*"Debug_BattleEnemyList"*/);
    sub_1C2D490(&StringLiteral_11447/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C2D490(&StringLiteral_13714/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_1C2D490(&StringLiteral_11446/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_1C2D490(&StringLiteral_11455/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_1C2D490(&StringLiteral_13701/*"TerminalLastPlayedQuestId"*/);
    sub_1C2D490(&StringLiteral_5174/*"Debug_IsBuildInfoDisp"*/);
    sub_1C2D490(&StringLiteral_13713/*"TerminalTransitionInfoMissionId"*/);
    sub_1C2D490(&StringLiteral_11464/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4C246BF = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13695/*"TerminalDispState"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13715/*"TerminalWarId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13708/*"TerminalSpotId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13706/*"TerminalQuestId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13701/*"TerminalLastPlayedQuestId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13703/*"TerminalPhaseCnt"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13696/*"TerminalEndTime"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13698/*"TerminalIsDoneShortcut"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13716/*"TerminalWarStartedIds"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5178/*"Debug_IsQuestReleaseAll"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5175/*"Debug_IsDummyErrorSelect"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5174/*"Debug_IsBuildInfoDisp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5176/*"Debug_IsOriginalBattle"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5177/*"Debug_IsOriginalGuestNPC"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5172/*"Debug_BattleEnemyList"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5173/*"Debug_GuestNPCInfoList"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13711/*"TerminalTimeStatusEventId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13712/*"TerminalTimeStatusLoopCount"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13697/*"TerminalEventDailyPointEventId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13710/*"TerminalTimeStatusEventDailyPoint"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13713/*"TerminalTransitionInfoMissionId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13714/*"TerminalTransitionInfoVoiceAssetName"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13692/*"TerminalBeforeEventActivityPoint"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13693/*"TerminalBeforeEventActivityPointGauge"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13694/*"TerminalBeforeEventSubmarinePointData"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11460/*"SAVEKEY_TerminalConquestInfos"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11459/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11461/*"SAVEKEY_TerminalCraftInfoDisp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11462/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11450/*"SAVEKEY_LastPlayBgmName"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11451/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11456/*"SAVEKEY_PlayedTerminalEffects"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11453/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11454/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11455/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11465/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11447/*"SAVEKEY_ConnectMarkEventId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11446/*"SAVEKEY_ConnectMarkAnimationId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11464/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11445/*"SAVEKEY_ClearEventQuestIds"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11452/*"SAVEKEY_MapModelClearQuestInfo"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11448/*"SAVEKEY_DataLostBattleAutoReset"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11457/*"SAVEKEY_PlayerGenderType"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11444/*"SAVEKEY_CampaignDirectBonus"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11443/*"SAVEKEY_BlankEarthSpotId"*/, 0);
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__InitParameter((const MethodInfo *)v1);
  TerminalPramsManager__DeleteClearDatas(v2);
  TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(v3);
  TerminalPramsManager__DeleteQuestRandomGroupList(v4);
}


void TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  TerminalPramsManager_c *v3; // x0
  CGThumbnailListItem_o *p_EventRaidDefeatedEffectInfo_k__BackingField; // x0

  if ( (byte_4C24702 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11449/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_4C24702 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24749 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24749 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  p_EventRaidDefeatedEffectInfo_k__BackingField = (CGThumbnailListItem_o *)&v3->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  p_EventRaidDefeatedEffectInfo_k__BackingField->klass = 0;
  sub_1C2D434(p_EventRaidDefeatedEffectInfo_k__BackingField, 0, v1, v2);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11449/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, 0);
}


void TerminalPramsManager__DeleteQuestRandomGroupList(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  TerminalPramsManager_c *v3; // x0
  CGThumbnailListItem_o *p_QuestRandomGroupList_k__BackingField; // x0

  if ( (byte_4C24707 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11458/*"SAVEKEY_QuestRandomGroupList"*/);
    byte_4C24707 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C2474B )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2474B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  p_QuestRandomGroupList_k__BackingField = (CGThumbnailListItem_o *)&v3->static_fields->_QuestRandomGroupList_k__BackingField;
  p_QuestRandomGroupList_k__BackingField->klass = 0;
  sub_1C2D434(p_QuestRandomGroupList_k__BackingField, 0, v1, v2);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11458/*"SAVEKEY_QuestRandomGroupList"*/, 0);
}


bool TerminalPramsManager__EnableResumeToBlankEarthMap(int32_t warId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C2470F & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2470F = 1;
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v5);
  return QuestTree__IsActiveWar((QuestTree_o *)Instance, warId, 0);
}


void TerminalPramsManager__EventDailyPointSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  System_String_o *v3; // x0
  int64_t BeforeTimeEventDailyPoint_k__BackingField; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C246C8 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13697/*"TerminalEventDailyPointEventId"*/);
    sub_1C2D490(&StringLiteral_13710/*"TerminalTimeStatusEventDailyPoint"*/);
    byte_4C246C8 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24730 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24730 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13697/*"TerminalEventDailyPointEventId"*/,
    v1->static_fields->_EventDailyPointEventId_k__BackingField,
    0);
  if ( !byte_4C24731 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24731 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  BeforeTimeEventDailyPoint_k__BackingField = v2->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v3 = System_Int64__ToString((int64_t)&BeforeTimeEventDailyPoint_k__BackingField, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13710/*"TerminalTimeStatusEventDailyPoint"*/, v3, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__EventStatusSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C246C7 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13711/*"TerminalTimeStatusEventId"*/);
    sub_1C2D490(&StringLiteral_13712/*"TerminalTimeStatusLoopCount"*/);
    byte_4C246C7 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244F1 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244F1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13711/*"TerminalTimeStatusEventId"*/,
    v1->static_fields->_TimeStatusEventId_k__BackingField,
    0);
  if ( !byte_4C244F2 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244F2 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13712/*"TerminalTimeStatusLoopCount"*/,
    v2->static_fields->_TimeStatusLoopCount_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool TerminalPramsManager__ExistBlankEarthTutorial(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  BalanceConfig_c *v3; // x0

  if ( (byte_4C2470E & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2470E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__ExistBlankEarthTutorialAction((const MethodInfo *)v1) )
    return 1;
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  return EventTutorialMaster__IsTutorialAvailableWithTargetId(
           0,
           18,
           v3->static_fields->OrdealCallWarId,
           v3->static_fields->OrdealCallWarId,
           0,
           0,
           0,
           0);
}


bool TerminalPramsManager__ExistBlankEarthTutorialAction(const MethodInfo *method)
{
  __int64 v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  System_Collections_ICollection_o *AvailableTutorialArray; // x0

  if ( (byte_4C2470D & 1) == 0 )
  {
    sub_1C2D490(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    byte_4C2470D = 1;
  }
  v1 = sub_1C2D6DC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v1, 0);
  if ( !v1 )
    sub_1C2D6EC(v2, v3);
  *(_QWORD *)(v1 + 16) = 0x5300000000LL;
  AvailableTutorialArray = (System_Collections_ICollection_o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                                 (EventTutorialMaster_EventTutorialArgs_o *)v1,
                                                                 0);
  return !BasicHelper__IsNullOrEmpty(AvailableTutorialArray, 0);
}


float TerminalPramsManager__GetAutoIntpTime(const MethodInfo *method)
{
  int32_t targetFrameRate; // w0

  if ( (byte_4C246BA & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Application_TypeInfo);
    byte_4C246BA = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = UnityEngine_Application__get_targetFrameRate(0);
  return (float)(1.0 / (float)targetFrameRate) + (float)(1.0 / (float)targetFrameRate);
}


int32_t TerminalPramsManager__GetFolderLastClickedIdx(int32_t warId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x8
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C246ED & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246ED = 1;
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
      sub_1C2D6EC(v5, v6);
  }
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         folderLastIdxs,
         warId,
         &value,
         (const MethodInfo_33D9E5C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    return value;
  }
  else
  {
    return 0;
  }
}


float TerminalPramsManager__GetIntpTime_AutoResume(float time, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4C246BB & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246BB = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23CFD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23CFD = 1;
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
  if ( !byte_4C24308 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24308 = 1;
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


int32_t TerminalPramsManager__GetQuestReleasedFocusState(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v5; // x1

  if ( (byte_4C246F3 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246F3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v3);
  if ( !QuestFocusStateManager )
    sub_1C2D6EC(0, v5);
  return QuestFocusStateManager__GetFocusState(QuestFocusStateManager, questId, 0);
}


void TerminalPramsManager__InitLoad(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246C1 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246C1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__InitParameter((const MethodInfo *)v1);
}


void TerminalPramsManager__InitMessageWindowData(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  TerminalPramsManager_c *v3; // x0
  __int64 v4; // x20
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  TerminalPramsManager_c *v8; // x0
  struct TerminalPramsManager_StaticFields *v9; // x0

  if ( (byte_4C246EB & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C246EB = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C22ED0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C22ED0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispOnly_k__BackingField = 0;
  v4 = StringLiteral_1/*""*/;
  if ( !byte_4C242F0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C242F0 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = (struct System_String_o *)v4;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_QuestWindowMessage_k__BackingField, v4, v1, v2);
  if ( !byte_4C242EF )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C242EF = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_MessageDispType_k__BackingField = 0;
  if ( !byte_4C22ECF )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4C22ECF = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v9 = v8->static_fields;
  v9->_BattleSetupKeep_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->_BattleSetupKeep_k__BackingField, 0, v6, v7);
}


void TerminalPramsManager__InitParameter(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  TerminalPramsManager_c *v7; // x0
  struct TerminalPramsManager_StaticFields *v8; // x0
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  TerminalPramsManager_c *v12; // x0
  CGThumbnailListItem_o *p_timeStatusRecord_k__BackingField; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  TerminalPramsManager_c *v16; // x0
  CGThumbnailListItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  int32_t v18; // w1
  CGThumbnailListItem_o *p_lastPlayBgmName; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  TerminalPramsManager_c *v24; // x0
  struct TerminalPramsManager_StaticFields *v25; // x0
  TerminalPramsManager_c *v26; // x0
  const MethodInfo *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  TerminalPramsManager_c *v30; // x0
  __int64 v31; // x20
  CGThumbnailListItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  TerminalPramsManager_c *v35; // x0
  struct TerminalPramsManager_StaticFields *v36; // x8
  __int64 v37; // x20
  CGThumbnailListItem_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  TerminalPramsManager_c *v41; // x0
  struct TerminalPramsManager_StaticFields *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  TerminalPramsManager_c *v45; // x0
  struct TerminalPramsManager_StaticFields *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  TerminalPramsManager_c *v49; // x0
  __int64 v50; // x20
  CGThumbnailListItem_o *p_TransitionScrollTabName_k__BackingField; // x0
  TerminalPramsManager_c *v52; // x0
  System_Collections_Generic_HashSet_T__o *ForcePlayEventTutorialArray_k__BackingField; // x0

  if ( (byte_4C246C0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C246C0 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23BE7 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BE7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4C23BE6 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C23BE6 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SpotId_k__BackingField = 0;
  if ( !byte_4C23BE1 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C23BE1 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestId_k__BackingField = 0;
  if ( !byte_4C23FA7 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C23FA7 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayedQuestId_k__BackingField = 0;
  if ( !byte_4C2471B )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C2471B = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
  if ( !byte_4C23FA8 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C23FA8 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = 0;
  if ( !byte_4C23E9C )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C23E9C = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_AfterActionFocusQuestId_k__BackingField = 0;
  if ( !byte_4C23FAD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C23FAD = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
  if ( !byte_4C23031 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C23031 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  if ( !byte_4C23FAE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C23FAE = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
  if ( !byte_4C2431F )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C2431F = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 0;
  if ( !byte_4C2431D )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C2431D = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
  if ( !byte_4C237DF )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C237DF = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField, 0, v1, v2);
  if ( !byte_4C23BE5 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BE5 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_PhaseCnt_k__BackingField = 0;
  if ( !byte_4C23BE2 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4C23BE2 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_EndTime_k__BackingField = 0;
  if ( !byte_4C23BE4 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4C23BE4 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v8 = v7->static_fields;
  v8->_IsDoneShortcut_k__BackingField = 0;
  v9 = StringLiteral_1/*""*/;
  v8->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->mTerminalWarStartedIds, v9, v5, v6);
  if ( !byte_4C2471C )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2471C = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->mDebug_IsQuestReleaseAll = 0;
  if ( !byte_4C2471D )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4C2471D = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->mDebug_IsDummyErrorSelect = 0;
  if ( !byte_4C2471E )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4C2471E = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->mDebug_IsBuildInfoDisp = 0;
  if ( !byte_4C24324 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4C24324 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_TimeStatusEventId_k__BackingField = 0;
  if ( !byte_4C24325 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4C24325 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_TimeStatusLoopCount_k__BackingField = 0;
  if ( !byte_4C2471F )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4C2471F = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  p_timeStatusRecord_k__BackingField = (CGThumbnailListItem_o *)&v12->static_fields->_timeStatusRecord_k__BackingField;
  p_timeStatusRecord_k__BackingField->klass = 0;
  sub_1C2D434(p_timeStatusRecord_k__BackingField, 0, v10, v11);
  if ( !byte_4C24720 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24720 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_EventDailyPointEventId_k__BackingField = 0;
  if ( !byte_4C24721 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4C24721 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = 0;
  if ( !byte_4C24722 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4C24722 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
  if ( !byte_4C24723 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4C24723 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
  if ( !byte_4C23D00 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4C23D00 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  p_BeforeEventSubmarineSaveData_k__BackingField = (CGThumbnailListItem_o *)&v16->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  p_BeforeEventSubmarineSaveData_k__BackingField->klass = 0;
  sub_1C2D434(p_BeforeEventSubmarineSaveData_k__BackingField, 0, v14, v15);
  v18 = StringLiteral_1/*""*/;
  p_lastPlayBgmName = (CGThumbnailListItem_o *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayBgmName;
  p_lastPlayBgmName->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
  sub_1C2D434(p_lastPlayBgmName, v18, v20, v21);
  v24 = TerminalPramsManager_TypeInfo;
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayQuestConsumeAp = 0;
  if ( !byte_4C24724 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
    byte_4C24724 = 1;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v25 = v24->static_fields;
  v25->_SpecifiedChangeSceneInfo_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v25->_SpecifiedChangeSceneInfo_k__BackingField, 0, v22, v23);
  if ( !byte_4C24503 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24503 = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_EventBoardGameSquareIndex_k__BackingField = 0;
  if ( !byte_4C24505 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
    byte_4C24505 = 1;
  }
  if ( !v26->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v26);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = 0;
  if ( !byte_4C24507 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
    byte_4C24507 = 1;
  }
  if ( !v26->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v26);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
  if ( !byte_4C24718 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
    byte_4C24718 = 1;
  }
  if ( !v26->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v26);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v26);
  TerminalPramsManager__ResetResumeScriptWithMap(v27);
  if ( !byte_4C23FAA )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23FAA = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  v30->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
  v31 = StringLiteral_1/*""*/;
  if ( !byte_4C24725 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
    byte_4C24725 = 1;
  }
  if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30);
    v30 = TerminalPramsManager_TypeInfo;
  }
  p_PlayedTerminalEffects_k__BackingField = (CGThumbnailListItem_o *)&v30->static_fields->_PlayedTerminalEffects_k__BackingField;
  p_PlayedTerminalEffects_k__BackingField->klass = (CGThumbnailListItem_c *)v31;
  sub_1C2D434(p_PlayedTerminalEffects_k__BackingField, v31, v28, v29);
  if ( !byte_4C24400 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24400 = 1;
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = 0;
  if ( !byte_4C24401 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C24401 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = 0;
  if ( !byte_4C244F4 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C244F4 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v36 = v35->static_fields;
  v36->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  *(_QWORD *)&v36->ConnectMarkEventId = 0;
  if ( !byte_4C217E0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C217E0 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_isFortificationCheck_k__BackingField = 0;
  if ( !byte_4C24726 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C24726 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !byte_4C24727 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C24727 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !byte_4C244FC )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C244FC = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4C24314 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C24314 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_4C244FA )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C244FA = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_4C244FB )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C244FB = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_4C244F9 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C244F9 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_4C244FC )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C244FC = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4C244EE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C244EE = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 0.0;
  if ( !byte_4C24728 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C24728 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  if ( !byte_4C23FAB )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C23FAB = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_4C2244F )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C2244F = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_PlayerGenderType_k__BackingField = 0;
  if ( !byte_4C24729 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C24729 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  v37 = StringLiteral_1/*""*/;
  if ( !byte_4C24501 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C24501 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  p_SceneMoveQuestClearedInfo_k__BackingField = (CGThumbnailListItem_o *)&v35->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
  p_SceneMoveQuestClearedInfo_k__BackingField->klass = (CGThumbnailListItem_c *)v37;
  sub_1C2D434(p_SceneMoveQuestClearedInfo_k__BackingField, v37, v33, v34);
  if ( !byte_4C2472A )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2472A = 1;
  }
  v41 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v41 = TerminalPramsManager_TypeInfo;
  }
  v42 = v41->static_fields;
  v42->_CampaignBonus_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v42->_CampaignBonus_k__BackingField, 0, v39, v40);
  if ( !byte_4C2472B )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2472B = 1;
  }
  v45 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v46 = v45->static_fields;
  v46->_CampaignDirectBonus_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v46->_CampaignDirectBonus_k__BackingField, 0, v43, v44);
  if ( !byte_4C2472C )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2472C = 1;
  }
  v49 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v49 = TerminalPramsManager_TypeInfo;
  }
  v49->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
  v50 = StringLiteral_1/*""*/;
  if ( !byte_4C21386 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v49 = TerminalPramsManager_TypeInfo;
    byte_4C21386 = 1;
  }
  if ( !v49->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v49);
    v49 = TerminalPramsManager_TypeInfo;
  }
  p_TransitionScrollTabName_k__BackingField = (CGThumbnailListItem_o *)&v49->static_fields->_TransitionScrollTabName_k__BackingField;
  p_TransitionScrollTabName_k__BackingField->klass = (CGThumbnailListItem_c *)v50;
  sub_1C2D434(p_TransitionScrollTabName_k__BackingField, v50, v47, v48);
  if ( !byte_4C2472D )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2472D = 1;
  }
  v52 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v52 = TerminalPramsManager_TypeInfo;
  }
  ForcePlayEventTutorialArray_k__BackingField = (System_Collections_Generic_HashSet_T__o *)v52->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
  if ( ForcePlayEventTutorialArray_k__BackingField )
    System_Collections_Generic_HashSet_object___Clear(
      ForcePlayEventTutorialArray_k__BackingField,
      (const MethodInfo_364141C *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
}


void TerminalPramsManager__InitTipsArchiveScrollValueList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  unsigned __int64 i; // x20
  struct System_Single_array *TipsArchiveScrollValueList; // x8
  struct System_Single_array *v6; // x8
  char *v7; // x8

  if ( (byte_4C24710 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24710 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = TerminalPramsManager_TypeInfo;
    }
    TipsArchiveScrollValueList = v3->static_fields->TipsArchiveScrollValueList;
    if ( !TipsArchiveScrollValueList )
LABEL_14:
      sub_1C2D6EC(v3, v1);
    if ( (__int64)i >= SLODWORD(TipsArchiveScrollValueList->max_length) )
      break;
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = TerminalPramsManager_TypeInfo;
    }
    v6 = v3->static_fields->TipsArchiveScrollValueList;
    if ( !v6 )
      goto LABEL_14;
    if ( i >= LODWORD(v6->max_length) )
      sub_1C2D6F4(v3, v1, v2);
    v7 = (char *)v6 + 4 * i;
    *((_DWORD *)v7 + 8) = 0;
  }
}


bool TerminalPramsManager__IsAuto(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C246AE & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246AE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23CFD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23CFD = 1;
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
  if ( !byte_4C24715 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24715 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsAutoShortcut_k__BackingField;
}


bool TerminalPramsManager__IsAutoForTimeProgressEvents(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v8; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C246B0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246B0 = 1;
  }
  entity = 0;
  v8 = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23CFD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23CFD = 1;
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
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C216DE = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( v2->static_fields->_WarId_k__BackingField < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C216DE = 1;
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
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !entity)
    || !Instance )
  {
LABEL_34:
    sub_1C2D6EC(Instance, v4);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v8,
          (int32_t)entity[6].klass,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)v8;
  if ( !v8 )
    goto LABEL_34;
  return EventDetailEntity__IsTimeProgressEvent((EventDetailEntity_o *)v8, 0);
}


bool TerminalPramsManager__IsBlankEarthWarByWarId(int32_t targetWarId, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  void *WarInfoByWarID; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w1
  System_Nullable_int__o v8; // x0
  __int64 v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2470C & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_int___ctor__);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C2470C = 1;
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      sub_1C2D6EC(0, v6);
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, targetWarId, 0);
    if ( WarInfoByWarID )
    {
      WarInfoByWarID = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)WarInfoByWarID, 0);
      if ( WarInfoByWarID )
      {
        v7 = *((_DWORD *)WarInfoByWarID + 31);
        v8 = (System_Nullable_int__o)&v10;
        v10 = 0;
        System_Nullable_int____ctor(v8, v7, (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
        LOBYTE(WarInfoByWarID) = HIDWORD(v10) != 0;
      }
    }
  }
  return (char)WarInfoByWarID;
}


void TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246DE & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11448/*"SAVEKEY_DataLostBattleAutoReset"*/);
    byte_4C246DE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244F8 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244F8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11448/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v1->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool TerminalPramsManager__IsMainStory(int32_t warId, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C246FC & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C246FC = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  entity = 0;
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
            (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarMaster___);
        if ( Instance )
        {
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       &entity,
                                       warId,
                                       (const MethodInfo_3387DE4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( entity )
            return LODWORD(entity[6].klass) == 0;
        }
      }
      sub_1C2D6EC(Instance, v7);
    }
  }
  return 1;
}


bool TerminalPramsManager__IsMainStoryForQuestId(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x19
  int32_t klass_high; // w19
  Il2CppObject *v9; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C246FD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C2D490(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246FD = 1;
  }
  v9 = 0;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SpotMaster___),
        !entity)
    || (v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (Il2CppObject *)QuestEntity__getSpotId(entity, 0),
        !v5) )
  {
LABEL_16:
    sub_1C2D6EC(Instance, v4);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               v5,
                               &v9,
                               (int32_t)Instance,
                               (const MethodInfo_3387DE4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !v9 )
    goto LABEL_16;
  klass_high = HIDWORD(v9[1].klass);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStory(klass_high, v4);
}


bool TerminalPramsManager__IsMustPlayMainStory(int32_t warId, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C246FB & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246FB = 1;
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
         (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return 0;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStory(warId, v4);
}


bool TerminalPramsManager__IsNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_4C246EE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246EE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v3->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1C2D6EC(0, method);
  return System_Collections_Generic_HashSet_int___Contains(
           loginQuestNotifiedList,
           questId,
           (const MethodInfo_363AE74 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246D7 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11454/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    byte_4C246D7 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24312 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24312 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11454/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v1->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246D6 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11453/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    byte_4C246D6 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24311 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24311 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11453/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v1->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__IsPlayTerminalEffectNt2AfterAction_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246D8 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11455/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    byte_4C246D8 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244F3 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244F3 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11455/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v1->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
bool TerminalPramsManager__IsPlayedEventRaidDefeatedEffect(int32_t eventId, int32_t day, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v5; // x0
  __int64 v6; // x8
  char v7; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C24706 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24706 = 1;
  }
  value = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C2474A )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2474A = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  }
  v6 = *(_QWORD *)&v5[2].fields._entries->m_Items[17].fields.hashCode;
  if ( !v6 || (v5 = *(System_Collections_Generic_Dictionary_int__object__o **)(v6 + 16)) == 0 )
    sub_1C2D6EC(v5, *(_QWORD *)&day);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         v5,
         eventId,
         &value,
         (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v7 = (char)value;
    if ( value )
      v7 = System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             day,
             (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  else
  {
    v7 = 0;
  }
  return v7 & 1;
}


bool TerminalPramsManager__IsTerminalEffectNT2BoardOpen(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  ScrTerminalListTop_c *v2; // x0
  System_String_o *NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // x19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  clsQuestCheck_o *v6; // x19
  clsQuestCheck_o *v7; // x19
  TerminalPramsManager_c *v8; // x0
  ScrTerminalListTop_c *v9; // x8
  int32_t QuestId_k__BackingField; // w19
  TerminalPramsManager_c *v11; // x0

  if ( (byte_4C246E7 & 1) == 0 )
  {
    sub_1C2D490(&ScrTerminalListTop_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246E7 = 1;
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v6 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v6 )
    goto LABEL_34;
  if ( !clsQuestCheck__IsQuestClear(
          v6,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0) )
    return 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v7 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v7 )
LABEL_34:
    sub_1C2D6EC(Instance, v5);
  if ( !clsQuestCheck__IsWarClear(
          v7,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
          0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21464 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21464 = 1;
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
      if ( !byte_4C21463 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C21463 = 1;
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


bool TerminalPramsManager__IsTerminalEffectPlayed(System_String_o *effectName, const MethodInfo *method)
{
  __int64 v3; // x19
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  TerminalPramsManager_c *v8; // x0
  TerminalPramsManager_c *v9; // x0
  System_String_array *v10; // x20
  System_Func_object__bool__o *v11; // x21

  if ( (byte_4C246E5 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_string____77997088);
    sub_1C2D490(&System_Func_string__bool__TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_TerminalPramsManager___c__DisplayClass709_0__IsTerminalEffectPlayed_b__0__);
    sub_1C2D490(&TerminalPramsManager___c__DisplayClass709_0_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_87/*"\r\n"*/);
    byte_4C246E5 = 1;
  }
  v3 = sub_1C2D6DC(TerminalPramsManager___c__DisplayClass709_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass709_0___ctor((TerminalPramsManager___c__DisplayClass709_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_21;
  *(_QWORD *)(v3 + 16) = effectName;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)effectName, v6, v7);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24734 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24734 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_PlayedTerminalEffects_k__BackingField )
  {
    if ( !v8->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v8);
    if ( !byte_4C24734 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24734 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    PlayedTerminalEffects_k__BackingField = v9->static_fields->_PlayedTerminalEffects_k__BackingField;
    if ( PlayedTerminalEffects_k__BackingField )
    {
      PlayedTerminalEffects_k__BackingField = System_String__Replace_63504412(
                                                PlayedTerminalEffects_k__BackingField,
                                                (System_String_o *)StringLiteral_87/*"\r\n"*/,
                                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                                0);
      if ( PlayedTerminalEffects_k__BackingField )
      {
        v10 = System_String__Split(PlayedTerminalEffects_k__BackingField, 0xAu, 0, 0);
        v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v11,
          (Il2CppObject *)v3,
          Method_TerminalPramsManager___c__DisplayClass709_0__IsTerminalEffectPlayed_b__0__,
          0);
        return BasicHelper__Any_object__51084700(
                 (System_Object_array *)v10,
                 (System_Func_T__bool__o *)v11,
                 (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_string____77997088);
      }
    }
LABEL_21:
    sub_1C2D6EC(PlayedTerminalEffects_k__BackingField, v5);
  }
  return 0;
}


bool TerminalPramsManager__IsUsePopupQuestReward(int32_t questId, const MethodInfo *method)
{
  QuestMaster_o *Master_object; // x0
  __int64 v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x19
  int klass_high; // w19
  BalanceConfig_c *v7; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  int monitor; // w19
  BalanceConfig_c *v11; // x0
  Il2CppObject *v13; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *v14; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *v15; // [xsp+18h] [xbp-38h] BYREF
  Il2CppObject *v16; // [xsp+20h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4C2470A & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4C2470A = 1;
  }
  v16 = 0;
  entity = 0;
  v14 = 0;
  v15 = 0;
  v13 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_42;
  if ( !QuestMaster__TryGetQuestEntity(Master_object, &entity, questId, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !entity )
    goto LABEL_42;
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Master_object = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0);
  if ( !v5 )
    goto LABEL_42;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v5,
          &v16,
          (int32_t)Master_object,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__) )
    goto LABEL_45;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v16 || !Master_object )
    goto LABEL_42;
  Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     &v14,
                                     HIDWORD(v16[1].klass),
                                     (const MethodInfo_3387DE4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  if ( !v16 )
    goto LABEL_42;
  klass_high = HIDWORD(v16[1].klass);
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  if ( klass_high != v7->static_fields->OrdealCallWarId )
  {
LABEL_45:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SpotMaster___);
    if ( !entity )
      goto LABEL_42;
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    Master_object = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0);
    if ( !v9 )
      goto LABEL_42;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v9,
           &v15,
           (int32_t)Master_object,
           (const MethodInfo_3387DE4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarMaster___);
      if ( !v15 || !Master_object )
        goto LABEL_42;
      Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                         &v13,
                                         HIDWORD(v15[1].klass),
                                         (const MethodInfo_3387DE4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_42;
        monitor = (int)v13[3].monitor;
        v11 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v11 = BalanceConfig_TypeInfo;
        }
        if ( monitor == v11->static_fields->GrandBoardWarId )
        {
          Master_object = (QuestMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( entity && Master_object )
            return clsQuestCheck__IsConsumeStormPod((clsQuestCheck_o *)Master_object, entity->fields.id, 0);
LABEL_42:
          sub_1C2D6EC(Master_object, v4);
        }
      }
    }
    return 0;
  }
  Master_object = (QuestMaster_o *)entity;
  if ( !entity )
    goto LABEL_42;
  return QuestEntity__GetTypeFlag(entity, 0) == 4;
}


bool TerminalPramsManager__IsWarStartedId(int32_t war_id, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  System_String_o *mTerminalWarStartedIds; // x0
  __int64 v4; // x2
  System_String_c *klass; // x8
  System_String_o *v6; // x19
  bool v7; // w21
  unsigned __int64 v8; // x22
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  v12 = war_id;
  if ( (byte_4C246E9 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_87/*"\r\n"*/);
    byte_4C246E9 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  mTerminalWarStartedIds = v2->static_fields->mTerminalWarStartedIds;
  if ( !mTerminalWarStartedIds
    || (mTerminalWarStartedIds = System_String__Replace_63504412(
                                   mTerminalWarStartedIds,
                                   (System_String_o *)StringLiteral_87/*"\r\n"*/,
                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                   0)) == 0
    || (mTerminalWarStartedIds = (System_String_o *)System_String__Split(mTerminalWarStartedIds, 0xAu, 0, 0)) == 0 )
  {
    sub_1C2D6EC(mTerminalWarStartedIds, method);
  }
  klass = mTerminalWarStartedIds[1].klass;
  v6 = mTerminalWarStartedIds;
  v7 = (int)klass > 0;
  if ( (int)klass >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)klass )
        sub_1C2D6F4(mTerminalWarStartedIds, method, v4);
      v9 = (System_String_o *)*((_QWORD *)&v6[1].monitor + v8);
      v10 = System_Int32__ToString((int32_t)&v12, 0);
      mTerminalWarStartedIds = (System_String_o *)System_String__op_Equality(v9, v10, 0);
      if ( ((unsigned __int8)mTerminalWarStartedIds & 1) != 0 )
        break;
      LODWORD(klass) = v6[1].klass;
      v7 = (__int64)++v8 < (int)klass;
    }
    while ( (__int64)v8 < (int)klass );
  }
  return v7;
}


void TerminalPramsManager__LastPanelEventPointSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246D5 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13699/*"TerminalLastPanelEventPoint"*/);
    byte_4C246D5 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13699/*"TerminalLastPanelEventPoint"*/, v1->static_fields->panelEventPoint, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__LastPlayBgmNameSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246D3 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11450/*"SAVEKEY_LastPlayBgmName"*/);
    byte_4C246D3 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11450/*"SAVEKEY_LastPlayBgmName"*/, v1->static_fields->lastPlayBgmName, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246D4 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11451/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    byte_4C246D4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11451/*"SAVEKEY_LastPlayQuestConsumeType"*/, v1->static_fields->lastPlayQuestConsumeAp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__LoadClearDatas(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_ClearData_c *v2; // x0
  TerminalPramsManager_ClearData_c *v3; // x0
  Il2CppObject *String_71122516; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *v7; // x19
  TerminalPramsManager_c *v8; // x0
  CGThumbnailListItem_o *p_mQuestClearHeroineInfo; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppClass *klass; // x8
  const char *name; // x9
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  QuestClearHeroineInfo_o *Load; // x20
  TerminalPramsManager_c *v19; // x0
  CGThumbnailListItem_o *v20; // x0
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
  const MethodInfo *v31; // x3
  Il2CppClass *v32; // x8
  TerminalPramsManager_c *v33; // x0
  Il2CppClass *v34; // x20
  CGThumbnailListItem_o *p_mQuestPhaseRewardInfos; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  TerminalPramsManager_c *v40; // x8
  struct TerminalPramsManager_StaticFields *v41; // x9
  _QWORD *v42; // x9
  struct UserSuperBossEntity_array *v43; // x20
  TerminalPramsManager_c *v44; // x0
  struct TerminalPramsManager_StaticFields *v45; // x0
  __int64 v46; // x0
  __int64 v47; // x1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  Il2CppClass *v50; // x8
  Il2CppClass *v51; // x20
  TerminalPramsManager_c *v52; // x0
  struct TerminalPramsManager_StaticFields *v53; // x0
  __int64 v54; // x0
  __int64 v55; // x1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int *v58; // x8
  CGThumbnailListItem_c *v59; // x20
  TerminalPramsManager_c *v60; // x0
  CGThumbnailListItem_o *p_eventPointWinReward_k__BackingField; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  int32_t v66; // w20
  TerminalPramsManager_c *v67; // x8
  int *v68; // x9
  CGThumbnailListItem_c *v69; // x20
  TerminalPramsManager_c *v70; // x0
  CGThumbnailListItem_o *p_eventRaceBoost_k__BackingField; // x0
  __int64 v72; // x0
  __int64 v73; // x1
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  Il2CppClass *v76; // x8
  Il2CppClass *v77; // x20
  TerminalPramsManager_c *v78; // x0
  CGThumbnailListItem_o *p_questClearCostumeRelease_k__BackingField; // x0
  __int64 v80; // x0
  __int64 v81; // x1
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  _QWORD *v84; // x8
  CGThumbnailListItem_c *v85; // x20
  TerminalPramsManager_c *v86; // x0
  CGThumbnailListItem_o *p_questClearCostumeGet_k__BackingField; // x0
  __int64 v88; // x0
  __int64 v89; // x1
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  Il2CppClass *v92; // x8
  Il2CppClass *v93; // x20
  TerminalPramsManager_c *v94; // x0
  CGThumbnailListItem_o *p_eventTowerReward_k__BackingField; // x0
  __int64 v96; // x0
  __int64 v97; // x1
  __int64 v98; // x2
  const MethodInfo *v99; // x3
  _QWORD *v100; // x8
  __int64 v101; // x9
  __int64 v102; // x9
  CGThumbnailListItem_c *v103; // x20
  TerminalPramsManager_c *v104; // x0
  CGThumbnailListItem_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  __int64 v106; // x0
  __int64 v107; // x1
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  Il2CppClass *v110; // x8
  Il2CppClass *v111; // x20
  TerminalPramsManager_c *v112; // x0
  CGThumbnailListItem_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  __int64 v114; // x0
  __int64 v115; // x1
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  _QWORD *v118; // x8
  CGThumbnailListItem_c *v119; // x20
  TerminalPramsManager_c *v120; // x0
  CGThumbnailListItem_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  __int64 v122; // x0
  __int64 v123; // x1
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  char v126; // w20
  TerminalPramsManager_c *v127; // x8
  _QWORD *v128; // x9
  CGThumbnailListItem_c *v129; // x20
  TerminalPramsManager_c *v130; // x0
  CGThumbnailListItem_o *p_warClearReward_k__BackingField; // x0
  __int64 v132; // x0
  __int64 v133; // x1
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  int32_t v136; // w20
  TerminalPramsManager_c *v137; // x8
  char v138; // w21
  struct TerminalPramsManager_StaticFields *v139; // x9
  _QWORD *v140; // x10
  struct BattleDropItem_array *v141; // x20
  __int64 v142; // x0
  __int64 v143; // x1
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  Il2CppClass *v146; // x8
  TerminalPramsManager_c *v147; // x0
  Il2CppClass *v148; // x20
  CGThumbnailListItem_o *p_mResultEventPanelRewardInfos; // x0
  int32_t v150; // w2
  const MethodInfo *v151; // x3
  TerminalPramsManager_c *v152; // x0
  Il2CppClass *v153; // x20
  CGThumbnailListItem_o *p_limitImageAnnounces_k__BackingField; // x0
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  char v157; // w20
  TerminalPramsManager_c *v158; // x0
  int32_t monitor_high; // w21
  int32_t v160; // w21
  char v161; // w21
  CGThumbnailListItem_c *v162; // x20
  CGThumbnailListItem_o *p_OldUserEventPoint_k__BackingField; // x0
  __int64 v164; // x0
  __int64 v165; // x1
  int32_t v166; // w2
  const MethodInfo *v167; // x3
  Il2CppClass *v168; // x8
  Il2CppClass *v169; // x20
  TerminalPramsManager_c *v170; // x0
  CGThumbnailListItem_o *p_UseAddRewardItemRewardInfos_k__BackingField; // x0
  TerminalPramsManager_c *v172; // x0
  TerminalPramsManager_c *v173; // x8
  TerminalPramsManager_c *v174; // x0

  if ( (byte_4C24700 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C2D490(&Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24700 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24304 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24304 = 1;
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
    if ( UnityEngine_PlayerPrefs__HasKey(v2->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0) )
    {
      v3 = TerminalPramsManager_ClearData_TypeInfo;
      if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
        v3 = TerminalPramsManager_ClearData_TypeInfo;
      }
      String_71122516 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71122516(
                                          v3->static_fields->SAVEKEY_CLEAR_REWARD_DISP,
                                          0);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v7 = JsonManager__Deserialize_object_(
             String_71122516,
             (const MethodInfo_313DC6C *)Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
      v8 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v8 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestClearHeroineInfo = (CGThumbnailListItem_o *)&v8->static_fields->mQuestClearHeroineInfo;
      p_mQuestClearHeroineInfo->klass = 0;
      sub_1C2D434(p_mQuestClearHeroineInfo, 0, v5, v6);
      if ( !v7 )
        sub_1C2D6EC(v10, v11);
      klass = v7[1].klass;
      if ( !klass )
        sub_1C2D6EC(v10, v11);
      name = klass->_1.name;
      if ( name && *((int *)name + 8) >= 1 )
      {
        Load = TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(
                 (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)v7[1].klass,
                 0);
        v19 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
        }
        v20 = (CGThumbnailListItem_o *)&v19->static_fields->mQuestClearHeroineInfo;
        v20->klass = (CGThumbnailListItem_c *)Load;
        sub_1C2D434(v20, (int32_t)Load, v16, v17);
      }
      v21 = TerminalPramsManager_TypeInfo;
      monitor = (char)v7[2].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C23E91 )
      {
        v21 = (TerminalPramsManager_c *)sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23E91 = 1;
      }
      v23 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v23 = TerminalPramsManager_TypeInfo;
      }
      v23->static_fields->_IsQuestClear_k__BackingField = monitor;
      v24 = BYTE1(v7[2].monitor);
      if ( !byte_4C23E92 )
      {
        v21 = (TerminalPramsManager_c *)sub_1C2D490(&TerminalPramsManager_TypeInfo);
        v23 = TerminalPramsManager_TypeInfo;
        byte_4C23E92 = 1;
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
        sub_1C2D6EC(v21, v11);
      if ( v26[3] )
        v27 = (struct QuestRewardInfo_array *)v7[1].monitor;
      else
        v27 = 0;
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        static_fields = TerminalPramsManager_TypeInfo->static_fields;
      }
      static_fields->mQuestRewardInfos = v27;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->mQuestRewardInfos, (int32_t)v27, v12, v13);
      v32 = v7[2].klass;
      if ( !v32 )
        sub_1C2D6EC(v28, v29);
      v33 = TerminalPramsManager_TypeInfo;
      if ( v32->_1.namespaze )
        v34 = v7[2].klass;
      else
        v34 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v33 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestPhaseRewardInfos = (CGThumbnailListItem_o *)&v33->static_fields->mQuestPhaseRewardInfos;
      p_mQuestPhaseRewardInfos->klass = (CGThumbnailListItem_c *)v34;
      sub_1C2D434(p_mQuestPhaseRewardInfos, (int32_t)v34, v30, v31);
      v40 = TerminalPramsManager_TypeInfo;
      v41 = TerminalPramsManager_TypeInfo->static_fields;
      *(_QWORD *)&v41->clearLastBattleRaidId = *(void **)((char *)&v7[2].monitor + 4);
      v41->joinGroupId = HIDWORD(v7[3].klass);
      v42 = v7[3].monitor;
      if ( !v42 )
        sub_1C2D6EC(v36, v37);
      if ( v42[3] )
        v43 = (struct UserSuperBossEntity_array *)v7[3].monitor;
      else
        v43 = 0;
      if ( !v40->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v40);
      if ( !byte_4C24740 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24740 = 1;
      }
      v44 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v44 = TerminalPramsManager_TypeInfo;
      }
      v45 = v44->static_fields;
      v45->_oldSuperBoss_k__BackingField = v43;
      sub_1C2D434((CGThumbnailListItem_o *)&v45->_oldSuperBoss_k__BackingField, (int32_t)v43, v38, v39);
      v50 = v7[4].klass;
      if ( !v50 )
        sub_1C2D6EC(v46, v47);
      if ( v50->_1.namespaze )
        v51 = v7[4].klass;
      else
        v51 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C24741 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24741 = 1;
      }
      v52 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v52 = TerminalPramsManager_TypeInfo;
      }
      v53 = v52->static_fields;
      v53->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v51;
      sub_1C2D434((CGThumbnailListItem_o *)&v53->_oldPersonalBoss_k__BackingField, (int32_t)v51, v48, v49);
      v58 = (int *)v7[4].monitor;
      if ( !v58 )
        sub_1C2D6EC(v54, v55);
      if ( v58[4] <= 0 )
        v59 = 0;
      else
        v59 = (CGThumbnailListItem_c *)v7[4].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C2473A )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C2473A = 1;
      }
      v60 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v60 = TerminalPramsManager_TypeInfo;
      }
      p_eventPointWinReward_k__BackingField = (CGThumbnailListItem_o *)&v60->static_fields->_eventPointWinReward_k__BackingField;
      p_eventPointWinReward_k__BackingField->klass = v59;
      sub_1C2D434(p_eventPointWinReward_k__BackingField, (int32_t)v59, v56, v57);
      v66 = (int32_t)v7[5].klass;
      if ( !byte_4C2473B )
      {
        v62 = sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C2473B = 1;
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
        sub_1C2D6EC(v62, v63);
      if ( v68[4] <= 0 )
        v69 = 0;
      else
        v69 = (CGThumbnailListItem_c *)v7[5].monitor;
      if ( !v67->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v67);
      if ( !byte_4C24502 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24502 = 1;
      }
      v70 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v70 = TerminalPramsManager_TypeInfo;
      }
      p_eventRaceBoost_k__BackingField = (CGThumbnailListItem_o *)&v70->static_fields->_eventRaceBoost_k__BackingField;
      p_eventRaceBoost_k__BackingField->klass = v69;
      sub_1C2D434(p_eventRaceBoost_k__BackingField, (int32_t)v69, v64, v65);
      v76 = v7[6].klass;
      if ( !v76 )
        sub_1C2D6EC(v72, v73);
      if ( v76->_1.namespaze )
        v77 = v7[6].klass;
      else
        v77 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C243FF )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C243FF = 1;
      }
      v78 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v78 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeRelease_k__BackingField = (CGThumbnailListItem_o *)&v78->static_fields->_questClearCostumeRelease_k__BackingField;
      p_questClearCostumeRelease_k__BackingField->klass = (CGThumbnailListItem_c *)v77;
      sub_1C2D434(p_questClearCostumeRelease_k__BackingField, (int32_t)v77, v74, v75);
      v84 = v7[6].monitor;
      if ( !v84 )
        sub_1C2D6EC(v80, v81);
      if ( v84[3] )
        v85 = (CGThumbnailListItem_c *)v7[6].monitor;
      else
        v85 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C24301 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24301 = 1;
      }
      v86 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v86 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeGet_k__BackingField = (CGThumbnailListItem_o *)&v86->static_fields->_questClearCostumeGet_k__BackingField;
      p_questClearCostumeGet_k__BackingField->klass = v85;
      sub_1C2D434(p_questClearCostumeGet_k__BackingField, (int32_t)v85, v82, v83);
      v92 = v7[7].klass;
      if ( !v92 )
        sub_1C2D6EC(v88, v89);
      if ( SLODWORD(v92->_1.name) <= 0 )
        v93 = 0;
      else
        v93 = v7[7].klass;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C2473E )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C2473E = 1;
      }
      v94 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v94 = TerminalPramsManager_TypeInfo;
      }
      p_eventTowerReward_k__BackingField = (CGThumbnailListItem_o *)&v94->static_fields->_eventTowerReward_k__BackingField;
      p_eventTowerReward_k__BackingField->klass = (CGThumbnailListItem_c *)v93;
      sub_1C2D434(p_eventTowerReward_k__BackingField, (int32_t)v93, v90, v91);
      v100 = v7[7].monitor;
      if ( !v100 )
        sub_1C2D6EC(v96, v97);
      v101 = v100[3];
      if ( v101 )
      {
        if ( !(_DWORD)v101 )
          sub_1C2D6F4(v96, v97, v98);
        v102 = v100[4];
        if ( !v102 )
          sub_1C2D6EC(v96, v97);
        if ( *(__int64 *)(v102 + 32) <= 0 )
          v103 = 0;
        else
          v103 = (CGThumbnailListItem_c *)v7[7].monitor;
      }
      else
      {
        v103 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C2473F )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C2473F = 1;
      }
      v104 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v104 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventTowerRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v104->static_fields->_resultEventTowerRewardInfo_k__BackingField;
      p_resultEventTowerRewardInfo_k__BackingField->klass = v103;
      sub_1C2D434(p_resultEventTowerRewardInfo_k__BackingField, (int32_t)v103, v98, v99);
      v110 = v7[8].klass;
      if ( !v110 )
        sub_1C2D6EC(v106, v107);
      if ( v110->_1.namespaze )
        v111 = v7[8].klass;
      else
        v111 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C242FB )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C242FB = 1;
      }
      v112 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v112 = TerminalPramsManager_TypeInfo;
      }
      p_resultBoostItemRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v112->static_fields->_resultBoostItemRewardInfo_k__BackingField;
      p_resultBoostItemRewardInfo_k__BackingField->klass = (CGThumbnailListItem_c *)v111;
      sub_1C2D434(p_resultBoostItemRewardInfo_k__BackingField, (int32_t)v111, v108, v109);
      v118 = v7[8].monitor;
      if ( !v118 )
        sub_1C2D6EC(v114, v115);
      if ( v118[3] )
        v119 = (CGThumbnailListItem_c *)v7[8].monitor;
      else
        v119 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C242FC )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C242FC = 1;
      }
      v120 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v120 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventBoardGameTokenRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v120->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
      p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = v119;
      sub_1C2D434(p_resultEventBoardGameTokenRewardInfo_k__BackingField, (int32_t)v119, v116, v117);
      v126 = (char)v7[9].klass;
      if ( !byte_4C22ED0 )
      {
        v122 = sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C22ED0 = 1;
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
        sub_1C2D6EC(v122, v123);
      if ( v128[3] )
        v129 = (CGThumbnailListItem_c *)v7[9].monitor;
      else
        v129 = 0;
      if ( !v127->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v127);
      if ( !byte_4C24306 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24306 = 1;
      }
      v130 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v130 = TerminalPramsManager_TypeInfo;
      }
      p_warClearReward_k__BackingField = (CGThumbnailListItem_o *)&v130->static_fields->_warClearReward_k__BackingField;
      p_warClearReward_k__BackingField->klass = v129;
      sub_1C2D434(p_warClearReward_k__BackingField, (int32_t)v129, v124, v125);
      v136 = (int32_t)v7[10].klass;
      if ( !byte_4C21ACB )
      {
        v132 = sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C21ACB = 1;
      }
      v137 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v137 = TerminalPramsManager_TypeInfo;
      }
      v137->static_fields->_EventActivityPointEffectState_k__BackingField = v136;
      v138 = BYTE4(v7[10].klass);
      if ( !byte_4C24303 )
      {
        v132 = sub_1C2D490(&TerminalPramsManager_TypeInfo);
        v137 = TerminalPramsManager_TypeInfo;
        byte_4C24303 = 1;
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
        sub_1C2D6EC(v132, v133);
      if ( v140[3] )
        v141 = (struct BattleDropItem_array *)v7[10].monitor;
      else
        v141 = 0;
      if ( !v137->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v137);
        v139 = TerminalPramsManager_TypeInfo->static_fields;
      }
      v139->mQuestResultAfterEventRewardInfos = v141;
      sub_1C2D434((CGThumbnailListItem_o *)&v139->mQuestResultAfterEventRewardInfos, (int32_t)v141, v134, v135);
      v146 = v7[11].klass;
      if ( !v146 )
        sub_1C2D6EC(v142, v143);
      v147 = TerminalPramsManager_TypeInfo;
      if ( v146->_1.namespaze )
        v148 = v7[11].klass;
      else
        v148 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v147 = TerminalPramsManager_TypeInfo;
      }
      p_mResultEventPanelRewardInfos = (CGThumbnailListItem_o *)&v147->static_fields->mResultEventPanelRewardInfos;
      p_mResultEventPanelRewardInfos->klass = (CGThumbnailListItem_c *)v148;
      sub_1C2D434(p_mResultEventPanelRewardInfos, (int32_t)v148, v144, v145);
      v152 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = (int32_t)v7[11].monitor;
      v153 = v7[12].klass;
      if ( !byte_4C242FF )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        v152 = TerminalPramsManager_TypeInfo;
        byte_4C242FF = 1;
      }
      if ( !v152->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v152);
        v152 = TerminalPramsManager_TypeInfo;
      }
      p_limitImageAnnounces_k__BackingField = (CGThumbnailListItem_o *)&v152->static_fields->_limitImageAnnounces_k__BackingField;
      p_limitImageAnnounces_k__BackingField->klass = (CGThumbnailListItem_c *)v153;
      sub_1C2D434(p_limitImageAnnounces_k__BackingField, (int32_t)v153, v150, v151);
      v157 = (char)v7[12].monitor;
      if ( !byte_4C23E95 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23E95 = 1;
      }
      v158 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->_IsOrdealCallWarClear_k__BackingField = v157;
      monitor_high = HIDWORD(v7[12].monitor);
      if ( !byte_4C242F6 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        v158 = TerminalPramsManager_TypeInfo;
        byte_4C242F6 = 1;
      }
      if ( !v158->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v158);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->_EventMuralId_k__BackingField = monitor_high;
      v160 = (int32_t)v7[13].klass;
      if ( !byte_4C244FF )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        v158 = TerminalPramsManager_TypeInfo;
        byte_4C244FF = 1;
      }
      if ( !v158->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v158);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->_EventActionQuestId_k__BackingField = v160;
      v161 = BYTE4(v7[13].klass);
      if ( !byte_4C242F8 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        v158 = TerminalPramsManager_TypeInfo;
        byte_4C242F8 = 1;
      }
      if ( !v158->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v158);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->_PlayHappinessCounterEffect_k__BackingField = v161;
      v162 = (CGThumbnailListItem_c *)v7[13].monitor;
      if ( !byte_4C24738 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        v158 = TerminalPramsManager_TypeInfo;
        byte_4C24738 = 1;
      }
      if ( !v158->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v158);
        v158 = TerminalPramsManager_TypeInfo;
      }
      p_OldUserEventPoint_k__BackingField = (CGThumbnailListItem_o *)&v158->static_fields->_OldUserEventPoint_k__BackingField;
      p_OldUserEventPoint_k__BackingField->klass = v162;
      sub_1C2D434(p_OldUserEventPoint_k__BackingField, (int32_t)v162, v155, v156);
      v168 = v7[14].klass;
      if ( !v168 )
        sub_1C2D6EC(v164, v165);
      if ( v168->_1.namespaze )
        v169 = v7[14].klass;
      else
        v169 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C21467 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C21467 = 1;
      }
      v170 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v170 = TerminalPramsManager_TypeInfo;
      }
      p_UseAddRewardItemRewardInfos_k__BackingField = (CGThumbnailListItem_o *)&v170->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
      p_UseAddRewardItemRewardInfos_k__BackingField->klass = (CGThumbnailListItem_c *)v169;
      sub_1C2D434(p_UseAddRewardItemRewardInfos_k__BackingField, (int32_t)v169, v166, v167);
      v172 = TerminalPramsManager_TypeInfo;
      if ( BYTE1(v7[2].monitor) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C21ACD )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C21ACD = 1;
        }
        v172 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v172 = TerminalPramsManager_TypeInfo;
        }
        v172->static_fields->_IsAutoResume_k__BackingField = 1;
      }
      if ( !v172->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v172);
      if ( !byte_4C24305 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24305 = 1;
      }
      v173 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v173 = TerminalPramsManager_TypeInfo;
      }
      if ( v173->static_fields->_warClearReward_k__BackingField )
        goto LABEL_276;
      if ( !v173->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v173);
      if ( !byte_4C24302 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24302 = 1;
      }
      v173 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v173 = TerminalPramsManager_TypeInfo;
      }
      if ( v173->static_fields->_IsPlayScriptWithMap_k__BackingField )
      {
LABEL_276:
        if ( !v173->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v173);
        if ( !byte_4C24748 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C24748 = 1;
        }
        v174 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v174 = TerminalPramsManager_TypeInfo;
        }
        v174->static_fields->_isQuestRewardSetted_k__BackingField = 1;
      }
    }
  }
}


void TerminalPramsManager__LoadEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  System_String_o *String; // x20
  EventRaidDefeatedEffectInfo_o *v3; // x19
  const MethodInfo *v4; // x2
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  TerminalPramsManager_c *v7; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C24703 & 1) == 0 )
  {
    sub_1C2D490(&EventRaidDefeatedEffectInfo_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11449/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_4C24703 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C2474A )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2474A = 1;
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
               (System_String_o *)StringLiteral_11449/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/,
               string_TypeInfo->static_fields->Empty,
               0);
    v3 = (EventRaidDefeatedEffectInfo_o *)sub_1C2D6DC(EventRaidDefeatedEffectInfo_TypeInfo);
    EventRaidDefeatedEffectInfo___ctor(v3, String, v4);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24749 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24749 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v7->static_fields;
    static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = v3;
    sub_1C2D434(
      (CGThumbnailListItem_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
      (int32_t)v3,
      v5,
      v6);
  }
}


void TerminalPramsManager__LoadQuestRandomGroupList(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  System_String_o *String; // x20
  System_Collections_Generic_Dictionary_int__int__o *v3; // x19
  System_String_array *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  int max_length; // w8
  System_String_array *v9; // x20
  unsigned int v10; // w23
  System_String_array *v11; // x21
  TerminalPramsManager_c *v12; // x0
  CGThumbnailListItem_o *p_QuestRandomGroupList_k__BackingField; // x0
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C24708 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11458/*"SAVEKEY_QuestRandomGroupList"*/);
    byte_4C24708 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23BDE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BDE = 1;
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
               (System_String_o *)StringLiteral_11458/*"SAVEKEY_QuestRandomGroupList"*/,
               string_TypeInfo->static_fields->Empty,
               0);
    v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v3,
      (const MethodInfo_33D7E00 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *(_QWORD *)result = 0;
    if ( !String )
      goto LABEL_35;
    v4 = System_String__Split(String, 0x2Cu, 0, 0);
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
          sub_1C2D6F4(v4, v5, v6);
        v4 = (System_String_array *)v9->m_Items[v10];
        if ( !v4 )
          break;
        v4 = System_String__Split((System_String_o *)v4, 0x3Au, 0, 0);
        if ( !v4 )
          break;
        v11 = v4;
        if ( SLODWORD(v4->max_length) >= 2 )
        {
          v4 = (System_String_array *)System_Int32__TryParse(v4->m_Items[0], &result[1], 0);
          if ( result[1] >= 1 && ((unsigned __int8)v4 & 1) != 0 )
          {
            if ( LODWORD(v11->max_length) <= 1 )
              goto LABEL_36;
            v4 = (System_String_array *)System_Int32__TryParse(v11->m_Items[1], result, 0);
            v6 = (unsigned int)result[0];
            if ( result[0] >= 1 && ((unsigned __int8)v4 & 1) != 0 )
            {
              if ( !v3 )
                break;
              System_Collections_Generic_Dictionary_int__int___Add(
                v3,
                result[1],
                result[0],
                (const MethodInfo_33D87C4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
        }
        max_length = v9->max_length;
        if ( (int)++v10 >= max_length )
          goto LABEL_27;
      }
LABEL_35:
      sub_1C2D6EC(v4, v5);
    }
LABEL_27:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C2474B )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C2474B = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    p_QuestRandomGroupList_k__BackingField = (CGThumbnailListItem_o *)&v12->static_fields->_QuestRandomGroupList_k__BackingField;
    p_QuestRandomGroupList_k__BackingField->klass = (CGThumbnailListItem_c *)v3;
    sub_1C2D434(p_QuestRandomGroupList_k__BackingField, (int32_t)v3, v6, v7);
  }
}


void TerminalPramsManager__LoadQuestReleasedFocusState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v3; // x1
  const MethodInfo *v4; // x0

  if ( (byte_4C246F0 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246F0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v1);
  if ( !QuestFocusStateManager
    || (QuestFocusStateManager__ClearQuestFocusStateDataList(QuestFocusStateManager, 0),
        (QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager(v4)) == 0) )
  {
    sub_1C2D6EC(QuestFocusStateManager, v3);
  }
  QuestFocusStateManager__ReadData(QuestFocusStateManager, 0);
}


void TerminalPramsManager__Load_SaveData(const MethodInfo *method)
{
  System_String_o *v1; // x19
  int32_t Int_71121948; // w19
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
  System_String_o *String_71122516; // x20
  int64_t v21; // x19
  TerminalPramsManager_c *v22; // x0
  System_String_o *v23; // x19
  int32_t v24; // w19
  TerminalPramsManager_c *v25; // x0
  System_String_o *v26; // x19
  int32_t v27; // w2
  const MethodInfo *v28; // x3
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
  const MethodInfo *v63; // x3
  Il2CppObject *v64; // x19
  TerminalPramsManager_c *v65; // x0
  CGThumbnailListItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  System_String_o *v67; // x19
  const MethodInfo *v68; // x2
  int32_t v69; // w20
  TerminalPramsManager_c *v70; // x0
  int32_t WarId_k__BackingField; // w20
  System_String_o *v72; // x19
  Il2CppObject *v73; // x19
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  Il2CppObject *v76; // x19
  TerminalPramsManager_c *v77; // x8
  CGThumbnailListItem_o *p_eventConquestInfos; // x0
  System_String_o *v79; // x19
  int32_t v80; // w19
  TerminalPramsManager_c *v81; // x8
  System_String_o *v82; // x19
  int32_t v83; // w19
  TerminalPramsManager_c *v84; // x8
  System_String_o *v85; // x19
  Il2CppObject *v86; // x19
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  Il2CppObject *v89; // x19
  TerminalPramsManager_c *v90; // x8
  CGThumbnailListItem_o *p_eventHarvestGrowthInfo; // x0
  System_String_o *v92; // x19
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  System_String_o *v95; // x19
  TerminalPramsManager_c *v96; // x8
  CGThumbnailListItem_o *p_lastPlayBgmName; // x0
  System_String_o *v98; // x19
  int32_t v99; // w19
  TerminalPramsManager_c *v100; // x8
  System_String_o *v101; // x19
  int32_t v102; // w19
  TerminalPramsManager_c *v103; // x0
  System_String_o *v104; // x19
  int32_t v105; // w19
  TerminalPramsManager_c *v106; // x8
  System_String_o *v107; // x19
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  System_String_o *v110; // x19
  TerminalPramsManager_c *v111; // x0
  CGThumbnailListItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
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
  TerminalPramsManager_c *v124; // x0
  System_String_o *v125; // x19
  int32_t v126; // w19
  TerminalPramsManager_c *v127; // x8
  System_String_o *v128; // x19
  int32_t v129; // w19
  TerminalPramsManager_c *v130; // x8
  System_String_o *v131; // x19
  int32_t v132; // w19
  TerminalPramsManager_c *v133; // x0
  System_String_o *v134; // x19
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  System_String_o *v137; // x19
  TerminalPramsManager_c *v138; // x0
  CGThumbnailListItem_o *p_ClearEventQuestIds_k__BackingField; // x0
  System_String_o *v140; // x19
  System_String_o *v141; // x19
  System_String_array *IsNullOrEmpty; // x0
  __int64 v143; // x1
  __int64 v144; // x2
  il2cpp_array_size_t max_length; // x8
  System_String_array *v146; // x19
  int32_t v147; // w20
  TerminalPramsManager_c *v148; // x8
  int32_t v149; // w0
  int32_t v150; // w19
  TerminalPramsManager_c *v151; // x0
  System_String_o *v152; // x19
  int32_t v153; // w19
  TerminalPramsManager_c *v154; // x0
  System_String_o *v155; // x19
  int32_t v156; // w19
  TerminalPramsManager_c *v157; // x0
  System_String_o *v158; // x19
  Il2CppObject *v159; // x19
  int32_t v160; // w2
  const MethodInfo *v161; // x3
  Il2CppObject *v162; // x19
  TerminalPramsManager_c *v163; // x0
  struct TerminalPramsManager_StaticFields *v164; // x0
  System_String_o *v165; // x19
  int32_t v166; // w19
  TerminalPramsManager_c *v167; // x0
  System_String_o *v168; // x19
  int32_t v169; // w19
  TerminalPramsManager_c *v170; // x0

  if ( (byte_4C246C2 & 1) == 0 )
  {
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    sub_1C2D490(&Method_JsonManager_Deserialize_EventConquestInfo_____);
    sub_1C2D490(&Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    sub_1C2D490(&Method_JsonManager_Deserialize_EventSaveData___);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11450/*"SAVEKEY_LastPlayBgmName"*/);
    sub_1C2D490(&StringLiteral_13696/*"TerminalEndTime"*/);
    sub_1C2D490(&StringLiteral_11456/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_1C2D490(&StringLiteral_13692/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C2D490(&StringLiteral_11444/*"SAVEKEY_CampaignDirectBonus"*/);
    sub_1C2D490(&StringLiteral_11451/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    sub_1C2D490(&StringLiteral_11463/*"SAVEKEY_TerminalLastSelectQuestIndex"*/);
    sub_1C2D490(&StringLiteral_11461/*"SAVEKEY_TerminalCraftInfoDisp"*/);
    sub_1C2D490(&StringLiteral_13697/*"TerminalEventDailyPointEventId"*/);
    sub_1C2D490(&StringLiteral_13694/*"TerminalBeforeEventSubmarinePointData"*/);
    sub_1C2D490(&StringLiteral_13703/*"TerminalPhaseCnt"*/);
    sub_1C2D490(&StringLiteral_11460/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_1C2D490(&StringLiteral_13711/*"TerminalTimeStatusEventId"*/);
    sub_1C2D490(&StringLiteral_13695/*"TerminalDispState"*/);
    sub_1C2D490(&StringLiteral_11453/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_1C2D490(&StringLiteral_13698/*"TerminalIsDoneShortcut"*/);
    sub_1C2D490(&StringLiteral_11452/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C2D490(&StringLiteral_11457/*"SAVEKEY_PlayerGenderType"*/);
    sub_1C2D490(&StringLiteral_11442/*"SAVEKEY_BlankEarthRank"*/);
    sub_1C2D490(&StringLiteral_13699/*"TerminalLastPanelEventPoint"*/);
    sub_1C2D490(&StringLiteral_11462/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    sub_1C2D490(&StringLiteral_11445/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_1C2D490(&StringLiteral_11454/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_1C2D490(&StringLiteral_5178/*"Debug_IsQuestReleaseAll"*/);
    sub_1C2D490(&StringLiteral_5175/*"Debug_IsDummyErrorSelect"*/);
    sub_1C2D490(&StringLiteral_13706/*"TerminalQuestId"*/);
    sub_1C2D490(&StringLiteral_11459/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    sub_1C2D490(&StringLiteral_11465/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_1C2D490(&StringLiteral_13710/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_1C2D490(&StringLiteral_13715/*"TerminalWarId"*/);
    sub_1C2D490(&StringLiteral_13708/*"TerminalSpotId"*/);
    sub_1C2D490(&StringLiteral_13712/*"TerminalTimeStatusLoopCount"*/);
    sub_1C2D490(&StringLiteral_13693/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_1C2D490(&StringLiteral_11443/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_1C2D490(&StringLiteral_11448/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_1C2D490(&StringLiteral_13716/*"TerminalWarStartedIds"*/);
    sub_1C2D490(&StringLiteral_11447/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C2D490(&StringLiteral_13700/*"TerminalLastPlayedFreeQuestSpotId"*/);
    sub_1C2D490(&StringLiteral_11446/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_1C2D490(&StringLiteral_11455/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_13701/*"TerminalLastPlayedQuestId"*/);
    sub_1C2D490(&StringLiteral_5174/*"Debug_IsBuildInfoDisp"*/);
    sub_1C2D490(&StringLiteral_11464/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4C246C2 = 1;
  }
  v1 = (System_String_o *)StringLiteral_13695/*"TerminalDispState"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13695/*"TerminalDispState"*/, 0) )
  {
    Int_71121948 = UnityEngine_PlayerPrefs__GetInt_71121948(v1, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23BE3 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BE3 = 1;
    }
    v3 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v3 = TerminalPramsManager_TypeInfo;
    }
    v3->static_fields->_DispState_k__BackingField = Int_71121948;
  }
  v4 = (System_String_o *)StringLiteral_13715/*"TerminalWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13715/*"TerminalWarId"*/, 0) )
  {
    v5 = UnityEngine_PlayerPrefs__GetInt_71121948(v4, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23BE7 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BE7 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_WarId_k__BackingField = v5;
  }
  v7 = (System_String_o *)StringLiteral_13708/*"TerminalSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13708/*"TerminalSpotId"*/, 0) )
  {
    v8 = UnityEngine_PlayerPrefs__GetInt_71121948(v7, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23BE6 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BE6 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_SpotId_k__BackingField = v8;
  }
  v10 = (System_String_o *)StringLiteral_13706/*"TerminalQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13706/*"TerminalQuestId"*/, 0) )
  {
    v11 = UnityEngine_PlayerPrefs__GetInt_71121948(v10, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23BE1 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BE1 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v12->static_fields->_QuestId_k__BackingField = v11;
  }
  v13 = (System_String_o *)StringLiteral_13701/*"TerminalLastPlayedQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13701/*"TerminalLastPlayedQuestId"*/, 0) )
  {
    v14 = UnityEngine_PlayerPrefs__GetInt_71121948(v13, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23FA7 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23FA7 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_LastPlayedQuestId_k__BackingField = v14;
  }
  v16 = (System_String_o *)StringLiteral_13703/*"TerminalPhaseCnt"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13703/*"TerminalPhaseCnt"*/, 0) )
  {
    v17 = UnityEngine_PlayerPrefs__GetInt_71121948(v16, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23BE5 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BE5 = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    v18->static_fields->_PhaseCnt_k__BackingField = v17;
  }
  v19 = (System_String_o *)StringLiteral_13696/*"TerminalEndTime"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13696/*"TerminalEndTime"*/, 0) )
  {
    String_71122516 = UnityEngine_PlayerPrefs__GetString_71122516(v19, 0);
    v21 = 0;
    if ( System_String__op_Inequality(String_71122516, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v21 = System_Convert__ToInt64_64548800(String_71122516, 0);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23BE2 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BE2 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    v22->static_fields->_EndTime_k__BackingField = v21;
  }
  v23 = (System_String_o *)StringLiteral_13698/*"TerminalIsDoneShortcut"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13698/*"TerminalIsDoneShortcut"*/, 0) )
  {
    v24 = UnityEngine_PlayerPrefs__GetInt_71121948(v23, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23BE4 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BE4 = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = TerminalPramsManager_TypeInfo;
    }
    v25->static_fields->_IsDoneShortcut_k__BackingField = v24 != 0;
  }
  v26 = (System_String_o *)StringLiteral_13716/*"TerminalWarStartedIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13716/*"TerminalWarStartedIds"*/, 0) )
  {
    v29 = UnityEngine_PlayerPrefs__GetString_71122516(v26, 0);
    v30 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v30 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v30->static_fields;
    static_fields->mTerminalWarStartedIds = v29;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->mTerminalWarStartedIds, (int32_t)v29, v27, v28);
  }
  v32 = (System_String_o *)StringLiteral_5178/*"Debug_IsQuestReleaseAll"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5178/*"Debug_IsQuestReleaseAll"*/, 0) )
  {
    v33 = UnityEngine_PlayerPrefs__GetInt_71121948(v32, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C2471C )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C2471C = 1;
    }
    v34 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v34 = TerminalPramsManager_TypeInfo;
    }
    v34->static_fields->mDebug_IsQuestReleaseAll = v33 != 0;
  }
  v35 = (System_String_o *)StringLiteral_5175/*"Debug_IsDummyErrorSelect"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5175/*"Debug_IsDummyErrorSelect"*/, 0) )
  {
    v36 = UnityEngine_PlayerPrefs__GetInt_71121948(v35, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C2471D )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C2471D = 1;
    }
    v37 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v37 = TerminalPramsManager_TypeInfo;
    }
    v37->static_fields->mDebug_IsDummyErrorSelect = v36 != 0;
  }
  v38 = (System_String_o *)StringLiteral_5174/*"Debug_IsBuildInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5174/*"Debug_IsBuildInfoDisp"*/, 0) )
  {
    v39 = UnityEngine_PlayerPrefs__GetInt_71121948(v38, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C2471E )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C2471E = 1;
    }
    v40 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v40 = TerminalPramsManager_TypeInfo;
    }
    v40->static_fields->mDebug_IsBuildInfoDisp = v39 != 0;
  }
  v41 = (System_String_o *)StringLiteral_13711/*"TerminalTimeStatusEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13711/*"TerminalTimeStatusEventId"*/, 0) )
  {
    v42 = UnityEngine_PlayerPrefs__GetInt_71121948(v41, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24324 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24324 = 1;
    }
    v43 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v43 = TerminalPramsManager_TypeInfo;
    }
    v43->static_fields->_TimeStatusEventId_k__BackingField = v42;
  }
  v44 = (System_String_o *)StringLiteral_13712/*"TerminalTimeStatusLoopCount"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13712/*"TerminalTimeStatusLoopCount"*/, 0) )
  {
    v45 = UnityEngine_PlayerPrefs__GetInt_71121948(v44, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24325 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24325 = 1;
    }
    v46 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v46 = TerminalPramsManager_TypeInfo;
    }
    v46->static_fields->_TimeStatusLoopCount_k__BackingField = v45;
  }
  v47 = (System_String_o *)StringLiteral_13697/*"TerminalEventDailyPointEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13697/*"TerminalEventDailyPointEventId"*/, 0) )
  {
    v48 = UnityEngine_PlayerPrefs__GetInt_71121948(v47, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24720 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24720 = 1;
    }
    v49 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v49 = TerminalPramsManager_TypeInfo;
    }
    v49->static_fields->_EventDailyPointEventId_k__BackingField = v48;
  }
  v50 = (System_String_o *)StringLiteral_13710/*"TerminalTimeStatusEventDailyPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13710/*"TerminalTimeStatusEventDailyPoint"*/, 0) )
  {
    v51 = UnityEngine_PlayerPrefs__GetString_71122516(v50, 0);
    v52 = 0;
    if ( !System_String__op_Equality(v51, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v52 = System_Convert__ToInt64_64548800(v51, 0);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24721 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24721 = 1;
    }
    v53 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v53 = TerminalPramsManager_TypeInfo;
    }
    v53->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = v52;
  }
  v54 = (System_String_o *)StringLiteral_13692/*"TerminalBeforeEventActivityPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13692/*"TerminalBeforeEventActivityPoint"*/, 0) )
  {
    v55 = UnityEngine_PlayerPrefs__GetInt_71121948(v54, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24722 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24722 = 1;
    }
    v56 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v56 = TerminalPramsManager_TypeInfo;
    }
    v56->static_fields->_BeforeEventActivityPoint_k__BackingField = v55;
  }
  v57 = (System_String_o *)StringLiteral_13693/*"TerminalBeforeEventActivityPointGauge"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13693/*"TerminalBeforeEventActivityPointGauge"*/, 0) )
  {
    v58 = UnityEngine_PlayerPrefs__GetInt_71121948(v57, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24723 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24723 = 1;
    }
    v59 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v59 = TerminalPramsManager_TypeInfo;
    }
    v59->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v58;
  }
  v60 = (System_String_o *)StringLiteral_13694/*"TerminalBeforeEventSubmarinePointData"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13694/*"TerminalBeforeEventSubmarinePointData"*/, 0) )
  {
    v61 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71122516(v60, 0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v64 = JsonManager__Deserialize_object_(
            v61,
            (const MethodInfo_313DC6C *)Method_JsonManager_Deserialize_EventSaveData___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23D00 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23D00 = 1;
    }
    v65 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v65 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (CGThumbnailListItem_o *)&v65->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (CGThumbnailListItem_c *)v64;
    sub_1C2D434(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v64, v62, v63);
  }
  v67 = (System_String_o *)StringLiteral_11463/*"SAVEKEY_TerminalLastSelectQuestIndex"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11463/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, 0) )
  {
    v69 = UnityEngine_PlayerPrefs__GetInt_71121948(v67, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C2471B )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C2471B = 1;
    }
    v70 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v70 = TerminalPramsManager_TypeInfo;
    }
    v70->static_fields->_LastSelectQuestIndex_k__BackingField = v69;
    if ( !byte_4C216DE )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      v70 = TerminalPramsManager_TypeInfo;
      byte_4C216DE = 1;
    }
    if ( !v70->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v70);
      v70 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v70->static_fields->_WarId_k__BackingField;
    if ( !byte_4C2472E )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      v70 = TerminalPramsManager_TypeInfo;
      byte_4C2472E = 1;
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
  v72 = (System_String_o *)StringLiteral_11460/*"SAVEKEY_TerminalConquestInfos"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11460/*"SAVEKEY_TerminalConquestInfos"*/, 0) )
  {
    v73 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71122516(v72, 0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v76 = JsonManager__Deserialize_object_(
            v73,
            (const MethodInfo_313DC6C *)Method_JsonManager_Deserialize_EventConquestInfo_____);
    v77 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v77 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = (CGThumbnailListItem_o *)&v77->static_fields->eventConquestInfos;
    p_eventConquestInfos->klass = (CGThumbnailListItem_c *)v76;
    sub_1C2D434(p_eventConquestInfos, (int32_t)v76, v74, v75);
  }
  v79 = (System_String_o *)StringLiteral_11459/*"SAVEKEY_TerminalConquestInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11459/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0) )
  {
    v80 = UnityEngine_PlayerPrefs__GetInt_71121948(v79, 0);
    v81 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v81 = TerminalPramsManager_TypeInfo;
    }
    v81->static_fields->eventConquestInfoDisp = v80 != 0;
  }
  v82 = (System_String_o *)StringLiteral_11461/*"SAVEKEY_TerminalCraftInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11461/*"SAVEKEY_TerminalCraftInfoDisp"*/, 0) )
  {
    v83 = UnityEngine_PlayerPrefs__GetInt_71121948(v82, 0);
    v84 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v84 = TerminalPramsManager_TypeInfo;
    }
    v84->static_fields->eventCraftInfoDisp = v83 != 0;
  }
  v85 = (System_String_o *)StringLiteral_11462/*"SAVEKEY_TerminalHarvestGrowthInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11462/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0) )
  {
    v86 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71122516(v85, 0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v89 = JsonManager__Deserialize_object_(
            v86,
            (const MethodInfo_313DC6C *)Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    v90 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v90 = TerminalPramsManager_TypeInfo;
    }
    p_eventHarvestGrowthInfo = (CGThumbnailListItem_o *)&v90->static_fields->eventHarvestGrowthInfo;
    p_eventHarvestGrowthInfo->klass = (CGThumbnailListItem_c *)v89;
    sub_1C2D434(p_eventHarvestGrowthInfo, (int32_t)v89, v87, v88);
  }
  v92 = (System_String_o *)StringLiteral_11450/*"SAVEKEY_LastPlayBgmName"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11450/*"SAVEKEY_LastPlayBgmName"*/, 0) )
  {
    v95 = UnityEngine_PlayerPrefs__GetString_71122516(v92, 0);
    v96 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v96 = TerminalPramsManager_TypeInfo;
    }
    p_lastPlayBgmName = (CGThumbnailListItem_o *)&v96->static_fields->lastPlayBgmName;
    p_lastPlayBgmName->klass = (CGThumbnailListItem_c *)v95;
    sub_1C2D434(p_lastPlayBgmName, (int32_t)v95, v93, v94);
  }
  v98 = (System_String_o *)StringLiteral_11451/*"SAVEKEY_LastPlayQuestConsumeType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11451/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0) )
  {
    v99 = UnityEngine_PlayerPrefs__GetInt_71121948(v98, 0);
    v100 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v100 = TerminalPramsManager_TypeInfo;
    }
    v100->static_fields->lastPlayQuestConsumeAp = v99;
  }
  v101 = (System_String_o *)StringLiteral_13700/*"TerminalLastPlayedFreeQuestSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13700/*"TerminalLastPlayedFreeQuestSpotId"*/, 0) )
  {
    v102 = UnityEngine_PlayerPrefs__GetInt_71121948(v101, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23FA8 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23FA8 = 1;
    }
    v103 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v103 = TerminalPramsManager_TypeInfo;
    }
    v103->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = v102;
  }
  v104 = (System_String_o *)StringLiteral_13699/*"TerminalLastPanelEventPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13699/*"TerminalLastPanelEventPoint"*/, 0) )
  {
    v105 = UnityEngine_PlayerPrefs__GetInt_71121948(v104, 0);
    v106 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v106 = TerminalPramsManager_TypeInfo;
    }
    v106->static_fields->panelEventPoint = v105;
  }
  v107 = (System_String_o *)StringLiteral_11456/*"SAVEKEY_PlayedTerminalEffects"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11456/*"SAVEKEY_PlayedTerminalEffects"*/, 0) )
  {
    v110 = UnityEngine_PlayerPrefs__GetString_71122516(v107, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24725 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24725 = 1;
    }
    v111 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v111 = TerminalPramsManager_TypeInfo;
    }
    p_PlayedTerminalEffects_k__BackingField = (CGThumbnailListItem_o *)&v111->static_fields->_PlayedTerminalEffects_k__BackingField;
    p_PlayedTerminalEffects_k__BackingField->klass = (CGThumbnailListItem_c *)v110;
    sub_1C2D434(p_PlayedTerminalEffects_k__BackingField, (int32_t)v110, v108, v109);
  }
  v113 = (System_String_o *)StringLiteral_11453/*"SAVEKEY_PlayTerminalEffectDisappear"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11453/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0) )
  {
    v114 = UnityEngine_PlayerPrefs__GetInt_71121948(v113, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24400 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24400 = 1;
    }
    v115 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v115 = TerminalPramsManager_TypeInfo;
    }
    v115->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = v114 != 0;
  }
  v116 = (System_String_o *)StringLiteral_11454/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11454/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0) )
  {
    v117 = UnityEngine_PlayerPrefs__GetInt_71121948(v116, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24401 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24401 = 1;
    }
    v118 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v118 = TerminalPramsManager_TypeInfo;
    }
    v118->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = v117;
  }
  v119 = (System_String_o *)StringLiteral_11455/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11455/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0) )
  {
    v120 = UnityEngine_PlayerPrefs__GetInt_71121948(v119, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C244F4 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C244F4 = 1;
    }
    v121 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v121 = TerminalPramsManager_TypeInfo;
    }
    v121->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = v120 != 0;
  }
  v122 = (System_String_o *)StringLiteral_11465/*"SAVEKEY_TerminalSelectedStoryQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11465/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0) )
  {
    v123 = UnityEngine_PlayerPrefs__GetInt_71121948(v122, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23FAD )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23FAD = 1;
    }
    v124 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v124 = TerminalPramsManager_TypeInfo;
    }
    v124->static_fields->_SelectedStoryQuestId_k__BackingField = v123;
  }
  v125 = (System_String_o *)StringLiteral_11447/*"SAVEKEY_ConnectMarkEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11447/*"SAVEKEY_ConnectMarkEventId"*/, 0) )
  {
    v126 = UnityEngine_PlayerPrefs__GetInt_71121948(v125, 0);
    v127 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v127 = TerminalPramsManager_TypeInfo;
    }
    v127->static_fields->ConnectMarkEventId = v126;
  }
  v128 = (System_String_o *)StringLiteral_11446/*"SAVEKEY_ConnectMarkAnimationId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11446/*"SAVEKEY_ConnectMarkAnimationId"*/, 0) )
  {
    v129 = UnityEngine_PlayerPrefs__GetInt_71121948(v128, 0);
    v130 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v130 = TerminalPramsManager_TypeInfo;
    }
    v130->static_fields->ConnectMarkAnimationId = v129;
  }
  v131 = (System_String_o *)StringLiteral_11464/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11464/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0) )
  {
    v132 = UnityEngine_PlayerPrefs__GetInt_71121948(v131, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23031 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23031 = 1;
    }
    v133 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v133 = TerminalPramsManager_TypeInfo;
    }
    v133->static_fields->_SelectedRecollectionWarId_k__BackingField = v132;
  }
  v134 = (System_String_o *)StringLiteral_11445/*"SAVEKEY_ClearEventQuestIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11445/*"SAVEKEY_ClearEventQuestIds"*/, 0) )
  {
    v137 = UnityEngine_PlayerPrefs__GetString_71122516(v134, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23BDF )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BDF = 1;
    }
    v138 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v138 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (CGThumbnailListItem_o *)&v138->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (CGThumbnailListItem_c *)v137;
    sub_1C2D434(p_ClearEventQuestIds_k__BackingField, (int32_t)v137, v135, v136);
  }
  v140 = (System_String_o *)StringLiteral_11452/*"SAVEKEY_MapModelClearQuestInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11452/*"SAVEKEY_MapModelClearQuestInfo"*/, 0) )
  {
    v141 = UnityEngine_PlayerPrefs__GetString_71122516(v140, 0);
    IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(v141, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v141 || (IsNullOrEmpty = System_String__Split(v141, 0x2Cu, 0, 0)) == 0 )
        sub_1C2D6EC(IsNullOrEmpty, v143);
      max_length = IsNullOrEmpty->max_length;
      v146 = IsNullOrEmpty;
      if ( max_length )
      {
        if ( !(_DWORD)max_length )
          sub_1C2D6F4(IsNullOrEmpty, v143, v144);
        v147 = System_Int32__Parse(IsNullOrEmpty->m_Items[0], 0);
      }
      else
      {
        v147 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C24726 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24726 = 1;
      }
      v148 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v148 = TerminalPramsManager_TypeInfo;
      }
      v148->static_fields->_MapModelClearQuestId_k__BackingField = v147;
      if ( SLODWORD(v146->max_length) < 2 )
      {
        v150 = 0;
      }
      else
      {
        v149 = System_Int32__Parse(v146->m_Items[1], 0);
        v148 = TerminalPramsManager_TypeInfo;
        v150 = v149;
      }
      if ( !v148->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v148);
      if ( !byte_4C24727 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24727 = 1;
      }
      v151 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v151 = TerminalPramsManager_TypeInfo;
      }
      v151->static_fields->_MapModelClearPhaseCount_k__BackingField = v150;
    }
  }
  v152 = (System_String_o *)StringLiteral_11448/*"SAVEKEY_DataLostBattleAutoReset"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11448/*"SAVEKEY_DataLostBattleAutoReset"*/, 0) )
  {
    v153 = UnityEngine_PlayerPrefs__GetInt_71121948(v152, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C244FC )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C244FC = 1;
    }
    v154 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v154 = TerminalPramsManager_TypeInfo;
    }
    v154->static_fields->_IsDataLostBattleAutoReset_k__BackingField = v153 != 0;
  }
  v155 = (System_String_o *)StringLiteral_11457/*"SAVEKEY_PlayerGenderType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11457/*"SAVEKEY_PlayerGenderType"*/, 0) )
  {
    v156 = UnityEngine_PlayerPrefs__GetInt_71121948(v155, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C2244F )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C2244F = 1;
    }
    v157 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v157 = TerminalPramsManager_TypeInfo;
    }
    v157->static_fields->_PlayerGenderType_k__BackingField = v156;
  }
  v158 = (System_String_o *)StringLiteral_11444/*"SAVEKEY_CampaignDirectBonus"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11444/*"SAVEKEY_CampaignDirectBonus"*/, 0) )
  {
    v159 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71122516(v158, 0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v162 = JsonManager__Deserialize_object_(
             v159,
             (const MethodInfo_313DC6C *)Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C2472B )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C2472B = 1;
    }
    v163 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v163 = TerminalPramsManager_TypeInfo;
    }
    v164 = v163->static_fields;
    v164->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)v162;
    sub_1C2D434((CGThumbnailListItem_o *)&v164->_CampaignDirectBonus_k__BackingField, (int32_t)v162, v160, v161);
  }
  v165 = (System_String_o *)StringLiteral_11443/*"SAVEKEY_BlankEarthSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11443/*"SAVEKEY_BlankEarthSpotId"*/, 0) )
  {
    v166 = UnityEngine_PlayerPrefs__GetInt_71121948(v165, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23B25 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23B25 = 1;
    }
    v167 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v167 = TerminalPramsManager_TypeInfo;
    }
    v167->static_fields->_BlankEarthSpotId_k__BackingField = v166;
  }
  v168 = (System_String_o *)StringLiteral_11442/*"SAVEKEY_BlankEarthRank"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11442/*"SAVEKEY_BlankEarthRank"*/, 0) )
  {
    v169 = UnityEngine_PlayerPrefs__GetInt_71121948(v168, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C2472F )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C2472F = 1;
    }
    v170 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v170 = TerminalPramsManager_TypeInfo;
    }
    v170->static_fields->_BlankEarthRank_k__BackingField = v169;
  }
}


TerminalTransitionInfo_o *TerminalPramsManager__Load_TerminalTransitionInfoData(const MethodInfo *method)
{
  System_String_o *v1; // x20
  __int64 v2; // x19
  int32_t Int_71121948; // w0
  int32_t v4; // w20
  const MethodInfo *v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  System_String_o *String_71122516; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C246C3 & 1) == 0 )
  {
    sub_1C2D490(&TerminalTransitionInfo_TypeInfo);
    sub_1C2D490(&StringLiteral_13714/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_1C2D490(&StringLiteral_13713/*"TerminalTransitionInfoMissionId"*/);
    byte_4C246C3 = 1;
  }
  v1 = (System_String_o *)StringLiteral_13713/*"TerminalTransitionInfoMissionId"*/;
  v2 = 0;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13713/*"TerminalTransitionInfoMissionId"*/, 0) )
  {
    Int_71121948 = UnityEngine_PlayerPrefs__GetInt_71121948(v1, 0);
    if ( Int_71121948 < 1 )
    {
      return 0;
    }
    else
    {
      v4 = Int_71121948;
      v2 = sub_1C2D6DC(TerminalTransitionInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v2, 0);
      TerminalTransitionInfo__Init((TerminalTransitionInfo_o *)v2, v5);
      if ( !v2 )
        sub_1C2D6EC(v6, v7);
      *(_DWORD *)(v2 + 16) = v4;
      v8 = (System_String_o *)StringLiteral_13714/*"TerminalTransitionInfoVoiceAssetName"*/;
      if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13714/*"TerminalTransitionInfoVoiceAssetName"*/, 0) )
      {
        String_71122516 = UnityEngine_PlayerPrefs__GetString_71122516(v8, 0);
        *(_QWORD *)(v2 + 40) = String_71122516;
        sub_1C2D434((CGThumbnailListItem_o *)(v2 + 40), (int32_t)String_71122516, v10, v11);
      }
    }
  }
  return (TerminalTransitionInfo_o *)v2;
}


void TerminalPramsManager__MapModelClearQuestInfo_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  System_String_o *v2; // x19
  TerminalPramsManager_c *v3; // x0
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t MapModelClearQuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C246DD & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11452/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C2D490(&StringLiteral_811/*","*/);
    byte_4C246DD = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23DDD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23DDD = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v1->static_fields->_MapModelClearQuestId_k__BackingField;
  v2 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  if ( !byte_4C23DDE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23DDE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v3->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  v5 = System_String__Concat_63496112(v2, (System_String_o *)StringLiteral_811/*","*/, v4, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11452/*"SAVEKEY_MapModelClearQuestInfo"*/, v5, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__PlayQuestSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C246C9 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11463/*"SAVEKEY_TerminalLastSelectQuestIndex"*/);
    sub_1C2D490(&StringLiteral_13700/*"TerminalLastPlayedFreeQuestSpotId"*/);
    sub_1C2D490(&StringLiteral_13701/*"TerminalLastPlayedQuestId"*/);
    byte_4C246C9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23EF3 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23EF3 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13701/*"TerminalLastPlayedQuestId"*/,
    v1->static_fields->_LastPlayedQuestId_k__BackingField,
    0);
  if ( !byte_4C2472E )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2472E = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11463/*"SAVEKEY_TerminalLastSelectQuestIndex"*/,
    v2->static_fields->_LastSelectQuestIndex_k__BackingField,
    0);
  if ( !byte_4C23BDB )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BDB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13700/*"TerminalLastPlayedFreeQuestSpotId"*/,
    v3->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__PlaySystemSE(int32_t seKind, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  _BOOL4 IsAutoNoSe_k__BackingField; // w21
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_4C246BE & 1) == 0 )
  {
    sub_1C2D490(&Method_TerminalPramsManager_PlaySystemSE__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246BE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24719 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24719 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( TerminalPramsManager_TypeInfo->static_fields->_IsAutoNoSe_k__BackingField )
    {
LABEL_9:
      if ( !byte_4C2471A )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C2471A = 1;
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
      v6 = (_QWORD *)sub_1C2D4A8(Method_TerminalPramsManager_PlaySystemSE__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, seKind, 0, 0);
  }
}


void TerminalPramsManager__PlayedTerminalEffectsSave_SaveData(System_String_o *effectName, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  TerminalPramsManager_c *v5; // x0
  __int64 v6; // x20
  TerminalPramsManager_c *v7; // x0
  CGThumbnailListItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  TerminalPramsManager_c *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *v12; // x19
  TerminalPramsManager_c *v13; // x0
  CGThumbnailListItem_o *v14; // x0
  const MethodInfo *v15; // x0

  if ( (byte_4C246E6 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C246E6 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsTerminalEffectPlayed(effectName, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24734 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24734 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    if ( !v5->static_fields->_PlayedTerminalEffects_k__BackingField )
    {
      v6 = StringLiteral_1/*""*/;
      if ( !v5->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v5);
      if ( !byte_4C24725 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24725 = 1;
      }
      v7 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v7 = TerminalPramsManager_TypeInfo;
      }
      p_PlayedTerminalEffects_k__BackingField = (CGThumbnailListItem_o *)&v7->static_fields->_PlayedTerminalEffects_k__BackingField;
      p_PlayedTerminalEffects_k__BackingField->klass = (CGThumbnailListItem_c *)v6;
      sub_1C2D434(p_PlayedTerminalEffects_k__BackingField, v6, v3, v4);
      v5 = TerminalPramsManager_TypeInfo;
    }
    if ( !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    if ( !byte_4C24734 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24734 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v12 = System_String__Concat_63496112(
            v9->static_fields->_PlayedTerminalEffects_k__BackingField,
            effectName,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            0);
    if ( !byte_4C24725 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24725 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v14 = (CGThumbnailListItem_o *)&v13->static_fields->_PlayedTerminalEffects_k__BackingField;
    v14->klass = (CGThumbnailListItem_c *)v12;
    sub_1C2D434(v14, (int32_t)v12, v10, v11);
    TerminalPramsManager__Save_SaveData(v15);
  }
}


void TerminalPramsManager__PlayerGenderType_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246DF & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11457/*"SAVEKEY_PlayerGenderType"*/);
    byte_4C246DF = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24735 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24735 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11457/*"SAVEKEY_PlayerGenderType"*/,
    v1->static_fields->_PlayerGenderType_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__ReceiveQuestEndResultInfo(
        BattleResultComponent_resultData_array *result,
        bool isWin,
        const MethodInfo *method)
{
  BattleResultComponent_resultData_array *v4; // x21
  BattleResultComponent_resultData_o *v5; // x8
  struct UserServantCollectionEntity_array *oldUserSvtCollection; // x8
  _DWORD *v7; // x23
  const MethodInfo *v8; // x3
  BattleResultComponent_resultData_o *v9; // x27
  int eventEndTitle; // w8
  UserServantCollectionMaster_o *v11; // x20
  unsigned int v12; // w28
  __int64 v13; // x21
  __int64 v14; // x25
  __int64 v15; // x26
  struct DeckData_o *myDeck; // x24
  UserServantCollectionEntity_o *EntityDefinitely; // x24
  UserServantCollectionEntity_o *v18; // x25
  const MethodInfo *v19; // x3
  _DWORD *v20; // x24
  CGThumbnailListItem_o *v21; // x24
  CGThumbnailListItem_c *klass; // x8
  CGThumbnailListItem_c *v23; // x8
  TerminalPramsManager_c *v24; // x0
  il2cpp_array_size_t *v25; // x19
  CGThumbnailListItem_o *p_mQuestClearHeroineInfo; // x0
  il2cpp_array_size_t v27; // x8
  BattleResultComponent_resultData_o *v28; // x9
  struct System_String_o *v29; // x10
  struct System_String_o *eventEndMessage; // x19
  __int128 v31; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x24
  UserServantEntity_o *v33; // x26
  __int64 v34; // x24
  void **p_monitor; // x19
  void *v36; // x25
  void *monitor; // t1
  void *v38; // x27
  int v39; // w9
  int v40; // w8
  UserServantCollectionEntity_o *v41; // x25
  struct DeckData_o *userId; // x21
  int32_t SvtId; // w0
  __int64 v44; // x28
  __int64 v45; // x29
  int32_t v46; // w27
  __int64 v47; // x23
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  bool v52; // w9
  Il2CppObject *Master_object; // x26
  NetworkManager_c *v54; // x0
  __int64 v55; // x28
  __int64 v56; // x29
  int64_t userIdNumber; // x27
  UserServantCollectionEntity_o *v58; // x26
  Il2CppObject *v59; // x0
  __int64 v60; // x26
  __int64 v61; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v62; // x24
  int klass_high; // w8
  int32_t friendshipExceedCount; // w9
  TerminalPramsManager_c *v65; // x0
  CGThumbnailListItem_o *v66; // x0
  BattleResultComponent_resultData_o *v67; // x23
  BattleResultComponent_resultData_o *v68; // x8
  struct System_String_o *v69; // x9
  UserQuestEntity_o *v70; // x23
  int32_t questId; // w19
  TerminalPramsManager_c *v72; // x0
  int32_t QuestPhase; // w24
  TerminalPramsManager_c *v74; // x0
  int32_t v75; // w24
  Il2CppObject *MasterData_object; // x25
  UserQuestEntity_o *v77; // x0
  UserQuestEntity_o *v78; // x26
  int32_t v79; // w25
  bool v80; // w19
  TerminalPramsManager_c *v81; // x0
  const MethodInfo *v82; // x2
  TerminalPramsManager_c *v83; // x0
  System_String_o *ValidMessage; // x0
  const MethodInfo *v85; // x2
  TerminalPramsManager_c *v86; // x8
  TerminalPramsManager_c *v87; // x0
  TerminalPramsManager_c *v88; // x0
  const MethodInfo *v89; // x0
  TerminalPramsManager_c *v90; // x8
  int32_t v91; // w24
  const MethodInfo *v92; // x1
  WarEntity_o *v93; // x25
  BalanceConfig_c *v94; // x0
  TerminalPramsManager_c *v95; // x0
  TerminalPramsManager_c *v96; // x0
  bool v97; // w26
  TerminalPramsManager_c *v98; // x0
  char v99; // w8
  const MethodInfo *v100; // x1
  bool HasFlag; // w0
  const MethodInfo *v102; // x3
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  const MethodInfo *v104; // x3
  CGThumbnailListItem_c *v105; // x24
  TerminalPramsManager_c *v106; // x0
  CGThumbnailListItem_o *p_mResultEventPanelRewardInfos; // x0
  TerminalPramsManager_c *v108; // x0
  CGThumbnailListItem_o *p_eventConquestInfos; // x0
  const MethodInfo *v110; // x3
  CGThumbnailListItem_c *v111; // x24
  TerminalPramsManager_c *v112; // x0
  CGThumbnailListItem_o *v113; // x0
  bool Farm; // w19
  TerminalPramsManager_c *v115; // x0
  char v116; // w19
  int32_t v117; // w24
  WarEntity_o *v118; // x0
  int32_t id; // w19
  TerminalPramsManager_c *v120; // x0
  TerminalPramsManager_c *v121; // x0
  Il2CppObject *v122; // x24
  Il2CppObject *v123; // x25
  const MethodInfo *v124; // x3
  const MethodInfo *v125; // x3
  CGThumbnailListItem_c *v126; // x25
  TerminalPramsManager_c *v127; // x0
  CGThumbnailListItem_o *p_OldUserEventPoint_k__BackingField; // x0
  int max_length; // w9
  BattleResultComponent_resultData_array *v130; // x25
  int v131; // w8
  Il2CppClass **v132; // x8
  Il2CppClass *v133; // x26
  int32_t RaidGroupDeadQuestId; // w27
  int v135; // w9
  BattleResultComponent_resultData_array *v136; // x27
  int v137; // w8
  int v138; // w19
  struct TerminalPramsManager_StaticFields *v139; // x8
  int32_t name_high; // w19
  int v141; // w9
  BattleResultComponent_resultData_array *v142; // x25
  int v143; // w8
  BattleResultComponent_resultData_o *v144; // x19
  int32_t RaidDeadQuestId; // w26
  struct TerminalPramsManager_StaticFields *v146; // x8
  TerminalPramsManager_c *v147; // x8
  bool v148; // w19
  TerminalPramsManager_c *v149; // x0
  int32_t v150; // w19
  Il2CppObject *v151; // x24
  int32_t eventId; // w25
  bool v153; // w24
  TerminalPramsManager_c *v154; // x0
  int32_t v155; // w21
  BattleResultComponent_resultData_o *v156; // x8
  int v157; // w9
  int v158; // w11
  __int64 v159; // x26
  int32_t v160; // w19
  TerminalPramsManager_c *v161; // x0
  int32_t bounds_high; // w24
  bool IsUserEventStatus; // w0
  TerminalPramsManager_c *v164; // x0
  TerminalPramsManager_c *v165; // x0
  TerminalPramsManager_c *v166; // x0
  Il2CppObject *v167; // x24
  int32_t v168; // w2
  const MethodInfo *v169; // x3
  TerminalPramsManager_c *v170; // x0
  CGThumbnailListItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  struct BattleResultAddRewardBonus_o *rewardBonus; // x8
  struct BattleResultAddRewardBonus_o *v173; // x8
  int v174; // w8
  __int64 *v175; // x9
  __int64 v176; // x12
  System_String_o **v177; // x9
  System_String_o *v178; // x25
  System_String_o **v179; // x8
  System_String_o *v180; // x22
  int32_t v181; // w27
  System_Collections_Generic_List_object__o *v182; // x27
  TerminalPramsManager___c_c *v183; // x8
  System_Predicate_object__o *_9__724_0; // x24
  System_String_o *v185; // x21
  Il2CppObject *v186; // x25
  struct TerminalPramsManager___c_StaticFields *v187; // x0
  int32_t v188; // w2
  const MethodInfo *v189; // x3
  System_String_o *v190; // x28
  TerminalPramsManager_c *v191; // x0
  TerminalPramsManager_c *v192; // x0
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x27
  System_String_o *v194; // x24
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  TerminalPramsManager_c *v197; // x0
  int32_t v198; // w24
  int32_t PhaseCnt_k__BackingField; // w25
  _BOOL4 IsQuestClear_k__BackingField; // w19
  TerminalPramsManager_c *v201; // x0
  Il2CppObject *v202; // x24
  TerminalPramsManager_c *v203; // x0
  Il2CppObject *v204; // x24
  int v205; // w21
  TerminalPramsManager_c *v206; // x0
  CGThumbnailListItem_o *p_questClearCostumeRelease_k__BackingField; // x0
  const MethodInfo *v208; // x3
  BattleResultComponent_resultData_o *v209; // x8
  CGThumbnailListItem_c *v210; // x24
  TerminalPramsManager_c *v211; // x0
  CGThumbnailListItem_o *v212; // x0
  TerminalPramsManager_c *v213; // x0
  CGThumbnailListItem_o *p_questClearCostumeGet_k__BackingField; // x0
  const MethodInfo *v215; // x3
  CGThumbnailListItem_c *v216; // x24
  TerminalPramsManager_c *v217; // x0
  CGThumbnailListItem_o *v218; // x0
  TerminalPramsManager_c *v219; // x0
  CGThumbnailListItem_o *p_eventPointWinReward_k__BackingField; // x0
  const MethodInfo *v221; // x3
  TerminalPramsManager_c *v222; // x0
  int32_t v223; // w24
  QuestGroupMaster_o *v224; // x25
  int32_t GroupId; // w0
  TerminalPramsManager_c *v226; // x8
  int32_t v227; // w26
  int v228; // w25
  Il2CppObject *v229; // x26
  EventPointEntity_o *v230; // x25
  int32_t v231; // w24
  struct TerminalPramsManager_StaticFields *v232; // x8
  BattleResultComponent_resultData_o *v233; // x8
  struct System_String_o *v234; // x9
  CGThumbnailListItem_c *v235; // x24
  TerminalPramsManager_c *v236; // x0
  CGThumbnailListItem_o *v237; // x0
  int32_t v238; // w19
  TerminalPramsManager_c *v239; // x0
  TerminalPramsManager_c *v240; // x0
  CGThumbnailListItem_o *p_eventRaceBoost_k__BackingField; // x0
  const MethodInfo *v242; // x3
  il2cpp_array_size_t v243; // x8
  BattleResultComponent_resultData_o *v244; // x23
  TerminalPramsManager_c *v245; // x0
  CGThumbnailListItem_o *v246; // x0
  __int64 v247; // x19
  BattleResultComponent_resultData_o *v248; // x9
  struct System_String_o *v249; // x10
  struct System_String_o *v250; // x23
  TerminalPramsManager_c *v251; // x0
  CGThumbnailListItem_o *p_eventTowerReward_k__BackingField; // x0
  const MethodInfo *v253; // x3
  CGThumbnailListItem_c *v254; // x23
  TerminalPramsManager_c *v255; // x0
  CGThumbnailListItem_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  CGThumbnailListItem_c *v257; // x23
  TerminalPramsManager_c *v258; // x0
  CGThumbnailListItem_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  CGThumbnailListItem_c *v260; // x23
  TerminalPramsManager_c *v261; // x0
  CGThumbnailListItem_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  CGThumbnailListItem_c *v263; // x23
  TerminalPramsManager_c *v264; // x0
  CGThumbnailListItem_o *p_warClearReward_k__BackingField; // x0
  TerminalPramsManager_c *v266; // x0
  struct TerminalPramsManager_StaticFields *v267; // x0
  int32_t v268; // w2
  const MethodInfo *v269; // x3
  TerminalPramsManager_c *v270; // x0
  struct TerminalPramsManager_StaticFields *v271; // x0
  Il2CppObject *Instance; // x23
  int32_t WarID_ByQuestID; // w23
  WarEntity_o *WarEntityByWarID; // x0
  int32_t v275; // w23
  const MethodInfo *v276; // x3
  il2cpp_array_size_t v277; // x8
  BattleResultComponent_resultData_o *v278; // x22
  TerminalPramsManager_c *v279; // x0
  struct TerminalPramsManager_StaticFields *v280; // x0
  CGThumbnailListItem_o *p_oldPersonalBoss_k__BackingField; // x0
  TerminalPramsManager_c *v282; // x0
  struct TerminalPramsManager_StaticFields *v283; // x0
  struct EventTowerReward_array *eventTowerReward; // x8
  bool v285; // w19
  BalanceConfig_c *v286; // x8
  int32_t v287; // w19
  TerminalPramsManager_c *v288; // x0
  TerminalPramsManager_c *v289; // x0
  BalanceConfig_c *v290; // x8
  int32_t v291; // w19
  TerminalPramsManager_c *v292; // x0
  BalanceConfig_c *v293; // x8
  int32_t v294; // w19
  TerminalPramsManager_c *v295; // x0
  BalanceConfig_c *v296; // x8
  int32_t v297; // w19
  Il2CppObject *v298; // x22
  struct DeckData_o *v299; // x21
  const MethodInfo *v300; // x3
  UserSuperBossEntity_o *v301; // x22
  BattleResultComponent_resultData_array *v302; // x21
  int32_t v303; // w2
  const MethodInfo *v304; // x3
  TerminalPramsManager_c *v305; // x0
  struct TerminalPramsManager_StaticFields *v306; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v308; // x21
  Il2CppObject *v309; // x22
  int32_t ScriptQuestId; // w22
  Il2CppObject *v311; // x23
  TerminalPramsManager_c *v312; // x0
  int32_t v313; // w26
  int32_t winResult; // w24
  int32_t v315; // w2
  const MethodInfo *v316; // x3
  Il2CppObject *v317; // x23
  TerminalPramsManager_c *v318; // x0
  int32_t v319; // w19
  int32_t v320; // w21
  TerminalPramsManager_c *v321; // x0
  int32_t v322; // w1
  CGThumbnailListItem_o *p_lastPlayBgmName; // x0
  const MethodInfo *v324; // x0
  Il2CppObject *v325; // x21
  int32_t v326; // w22
  const MethodInfo *v327; // x3
  TerminalPramsManager_c *v328; // x0
  il2cpp_array_size_t *v329; // x0
  int32_t v330; // w22
  TerminalPramsManager_c *v331; // x0
  int32_t v332; // w23
  int32_t v333; // w2
  const MethodInfo *v334; // x3
  SpecifiedSceneInfo_o *SpecifiedSceneInfo; // x22
  TerminalPramsManager_c *v336; // x0
  struct TerminalPramsManager_StaticFields *v337; // x0
  const MethodInfo *v338; // x0
  const MethodInfo *v339; // x3
  int32_t v340; // w19
  TerminalPramsManager_c *v341; // x0
  CGThumbnailListItem_o *p_eventHarvestGrowthInfo; // x0
  TerminalPramsManager_c *v343; // x0
  BattleResultComponent_resultData_array *v344; // x22
  int32_t ScriptIntParam; // w24
  int32_t v346; // w0
  int32_t v347; // w25
  __int64 v348; // x23
  int32_t v349; // w2
  const MethodInfo *v350; // x3
  Il2CppArrayBounds *bounds; // d0
  TerminalPramsManager_c *v352; // x0
  CGThumbnailListItem_o *v353; // x0
  Il2CppObject *v354; // x22
  QuestEntity_o *QuestEntity; // x0
  QuestEntity_o *v356; // x22
  TerminalPramsManager_c *v357; // x0
  int32_t SpotId; // w21
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v360; // x21
  TerminalPramsManager_c *v361; // x0
  struct EventAreaImproveResultInfo_o *eventAreaImproveResultInfo; // x8
  TerminalPramsManager_c *v363; // x0
  const MethodInfo *v364; // x3
  TerminalPramsManager_c *v365; // x0
  System_String_o *v366; // x21
  TerminalPramsManager_c *v367; // x0
  System_String_o *v368; // x0
  int32_t v369; // w2
  const MethodInfo *v370; // x3
  System_String_o *v371; // x21
  TerminalPramsManager_c *v372; // x0
  CGThumbnailListItem_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  CGThumbnailListItem_c *v374; // x21
  TerminalPramsManager_c *v375; // x0
  CGThumbnailListItem_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v377; // x21
  TerminalPramsManager_c *v378; // x0
  const MethodInfo *v379; // x3
  const MethodInfo *v380; // x3
  int32_t v381; // w1
  TerminalPramsManager_c *v382; // x0
  const MethodInfo *v383; // x3
  const MethodInfo *v384; // x3
  int32_t v385; // w1
  TerminalPramsManager_c *v386; // x0
  const MethodInfo *v387; // x3
  const MethodInfo *v388; // x3
  int32_t v389; // w1
  TerminalPramsManager_c *v390; // x0
  const MethodInfo *v391; // x3
  System_String_o *v392; // x0
  const MethodInfo *v393; // x1
  const MethodInfo *v394; // x0
  const MethodInfo *v395; // x0
  const MethodInfo *v396; // x0
  const MethodInfo *v397; // x0
  const MethodInfo *v398; // x0
  TerminalPramsManager_c *v399; // x0
  int32_t v400; // w19
  const MethodInfo *v401; // x0
  TerminalPramsManager_c *v402; // x0
  __int64 v403; // x0
  System_String_o *v404; // [xsp+8h] [xbp-138h]
  bool v405; // [xsp+14h] [xbp-12Ch]
  BattleResultComponent_resultData_array *resulta; // [xsp+18h] [xbp-128h]
  il2cpp_array_size_t *p_max_length; // [xsp+20h] [xbp-120h]
  BattleResultComponent_resultData_array **m_Items; // [xsp+28h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v409; // [xsp+30h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v410; // [xsp+50h] [xbp-F0h]
  __int128 v411; // [xsp+70h] [xbp-D0h]
  _BYTE v412[4]; // [xsp+8Ch] [xbp-B4h] BYREF
  UserSuperBossEntity_o *v413; // [xsp+90h] [xbp-B0h] BYREF
  Il2CppObject *v414; // [xsp+98h] [xbp-A8h] BYREF
  Il2CppObject *v415; // [xsp+A0h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *v416; // [xsp+A8h] [xbp-98h] BYREF
  int32_t QuestId_k__BackingField; // [xsp+B4h] [xbp-8Ch] BYREF
  Il2CppObject *v418; // [xsp+B8h] [xbp-88h] BYREF
  Il2CppObject *v419; // [xsp+C0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+C8h] [xbp-78h] BYREF
  int v421; // [xsp+D4h] [xbp-6Ch] BYREF
  QuestPhaseEntity_o *v422; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v423; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v424; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v425; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v426; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v427; // 0:x0.16

  v4 = result;
  if ( (byte_4C246F4 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventPointMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMessageMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserSuperBossMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&EventHarvestGrowthInfo_TypeInfo);
    sub_1C2D490(&EventSaveData_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_1C2D490(&MyRoomParamsManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_1C2D490(&QuestClearHeroineInfo_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C2D490(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C2D490(&Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__724_0__);
    sub_1C2D490(&TerminalPramsManager___c_TypeInfo);
    sub_1C2D490(&UserServantCollectionEntity___TypeInfo);
    sub_1C2D490(&UserServantCollectionEntity_TypeInfo);
    sub_1C2D490(&UserServantEntity_TypeInfo);
    sub_1C2D490(&UserSuperBossEntity___TypeInfo);
    sub_1C2D490(&StringLiteral_19921/*"harvestGrowthAfterQuestId"*/);
    sub_1C2D490(&StringLiteral_16709/*"afterActionBk"*/);
    sub_1C2D490(&StringLiteral_811/*","*/);
    sub_1C2D490(&StringLiteral_19922/*"harvestGrowthBeforeQuestId"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_6635/*"False"*/);
    result = (BattleResultComponent_resultData_array *)sub_1C2D490(&StringLiteral_1122/*"0"*/);
    byte_4C246F4 = 1;
  }
  v422 = 0;
  v421 = 0;
  v419 = 0;
  entity = 0;
  v418 = 0;
  QuestId_k__BackingField = 0;
  v415 = 0;
  v416 = 0;
  v413 = 0;
  v414 = 0;
  v412[0] = 0;
  if ( !v4 )
    goto LABEL_1211;
  if ( !LODWORD(v4->max_length) )
    goto LABEL_1212;
  v5 = v4->m_Items[0];
  m_Items = (BattleResultComponent_resultData_array **)v4->m_Items;
  if ( !v5 )
    goto LABEL_1211;
  oldUserSvtCollection = v5->fields.oldUserSvtCollection;
  if ( !oldUserSvtCollection )
    goto LABEL_1211;
  v7 = (_DWORD *)sub_1C2D538(UserServantCollectionEntity___TypeInfo, LODWORD(oldUserSvtCollection->max_length));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !LODWORD(v4->max_length) )
    goto LABEL_1212;
  p_max_length = &v4->max_length;
  if ( !*m_Items )
    goto LABEL_1211;
  v9 = (*m_Items)->m_Items[11];
  v405 = isWin;
  resulta = v4;
  v421 = 0;
  if ( !v9 )
    goto LABEL_1211;
  eventEndTitle = (int)v9->fields.eventEndTitle;
  if ( eventEndTitle >= 1 )
  {
    v11 = (UserServantCollectionMaster_o *)result;
    v12 = 0;
    while ( v12 < eventEndTitle )
    {
      v13 = *((_QWORD *)&v9->fields.eventEndMessage + (int)v12);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
      }
      if ( !v13 )
        goto LABEL_1211;
      v15 = *(_QWORD *)(v13 + 24);
      v14 = *(_QWORD *)(v13 + 32);
      myDeck = result->m_Items[19]->fields.myDeck;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v423.fields.currentCryptoKey = v15;
      *(_QWORD *)&v423.fields.fakeValue = v14;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                           v423,
                                                           0);
      if ( !v11 )
        goto LABEL_1211;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v11, (int64_t)myDeck, (int32_t)result, 0);
      v18 = (UserServantCollectionEntity_o *)sub_1C2D6DC(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor_42895988(v18, EntityDefinitely, 0);
      if ( !v7 )
        goto LABEL_1211;
      if ( v18 )
      {
        result = (BattleResultComponent_resultData_array *)sub_1C2D5CC(v18, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !result )
          goto LABEL_1213;
      }
      if ( v12 >= v7[6] )
        break;
      v20 = &v7[2 * v12];
      *((_QWORD *)v20 + 4) = v18;
      v21 = (CGThumbnailListItem_o *)(v20 + 8);
      sub_1C2D434(v21, (int32_t)v18, (int32_t)method, v19);
      if ( v12 >= v7[6] )
        break;
      klass = v21->klass;
      *(_OWORD *)&v410.fields.currentCryptoKey = *(_OWORD *)(v13 + 84);
      if ( !klass )
        goto LABEL_1211;
      *(_OWORD *)((char *)&klass->_1.declaringType + 4) = *(_OWORD *)&v410.fields.currentCryptoKey;
      if ( v12 >= v7[6] )
        break;
      v23 = v21->klass;
      v411 = *(_OWORD *)(v13 + 100);
      if ( !v23 )
        goto LABEL_1211;
      *(_OWORD *)((char *)&v23->_1.generic_class + 4) = v411;
      if ( v12 >= v7[6] )
        break;
      if ( !v21->klass )
        goto LABEL_1211;
      ++v12;
      HIDWORD(v21->klass->_1.interopData) = *(_DWORD *)(v13 + 116);
      v421 = v12;
      eventEndTitle = (int)v9->fields.eventEndTitle;
      if ( (int)v12 >= eventEndTitle )
        goto LABEL_36;
    }
LABEL_1212:
    sub_1C2D6F4(result, isWin, method);
  }
LABEL_36:
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v25 = p_max_length;
  p_mQuestClearHeroineInfo = (CGThumbnailListItem_o *)&v24->static_fields->mQuestClearHeroineInfo;
  p_mQuestClearHeroineInfo->klass = 0;
  sub_1C2D434(p_mQuestClearHeroineInfo, 0, (int32_t)method, v8);
  v27 = *p_max_length;
  if ( !(unsigned int)*p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v28 = (*m_Items)->m_Items[5];
  if ( v28 )
  {
    v29 = v28->fields.eventEndTitle;
    if ( v29 )
    {
      if ( !(_DWORD)v29 )
        goto LABEL_1212;
      eventEndMessage = v28->fields.eventEndMessage;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !eventEndMessage )
        goto LABEL_1211;
      v31 = *(_OWORD *)&eventEndMessage[1].monitor;
      v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)result;
      *(_OWORD *)&v410.fields.currentCryptoKey = *(_OWORD *)&eventEndMessage->fields._stringLength;
      *(_OWORD *)&v410.fields.fakeValue = v31;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v409 = v410;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                           &v409,
                                                           0);
      if ( !v32 )
        goto LABEL_1211;
      v33 = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                     v32,
                                     (int64_t)result,
                                     (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v34 = sub_1C2D6DC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_42922220((UserServantEntity_o *)v34, v33, 0);
      v411 = *(_OWORD *)&eventEndMessage[4].klass;
      if ( !v34 )
        goto LABEL_1211;
      *(_OWORD *)(v34 + 96) = v411;
      *(_DWORD *)(v34 + 256) = eventEndMessage[10].fields._stringLength;
      *(_QWORD *)(v34 + 292) = *(System_String_c **)((char *)&eventEndMessage[12].klass + 4);
      monitor = eventEndMessage[5].monitor;
      p_monitor = &eventEndMessage[5].monitor;
      v36 = monitor;
      v38 = p_monitor[1];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v424.fields.currentCryptoKey = v36;
      *(_QWORD *)&v424.fields.fakeValue = v38;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                           v424,
                                                           0);
      if ( (int)result >= 1 )
        *(_OWORD *)(v34 + 128) = *(_OWORD *)p_monitor;
      v421 = 0;
      if ( !v7 )
        goto LABEL_1211;
      v39 = v7[6];
      if ( v39 >= 1 )
      {
        v40 = 0;
        while ( v40 < (unsigned int)v39 )
        {
          v41 = *(UserServantCollectionEntity_o **)&v7[2 * v40 + 8];
          if ( !v41 )
            goto LABEL_1211;
          userId = (struct DeckData_o *)v41->fields.userId;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C211E1 )
          {
            sub_1C2D490(&NetworkManager_TypeInfo);
            byte_4C211E1 = 1;
          }
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          }
          if ( userId == result->m_Items[19]->fields.myDeck )
          {
            SvtId = UserServantCollectionEntity__getSvtId(v41, 0);
            v45 = *(_QWORD *)(v34 + 80);
            v44 = *(_QWORD *)(v34 + 88);
            v46 = SvtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v425.fields.currentCryptoKey = v45;
            *(_QWORD *)&v425.fields.fakeValue = v44;
            result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                 v425,
                                                                 0);
            if ( v46 == (_DWORD)result )
              goto LABEL_70;
          }
          v40 = v421 + 1;
          v421 = v40;
          v39 = v7[6];
          if ( v40 >= v39 )
            goto LABEL_69;
        }
        goto LABEL_1212;
      }
LABEL_69:
      v41 = 0;
LABEL_70:
      v47 = sub_1C2D6DC(QuestClearHeroineInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v47, 0);
      if ( !v47 )
        goto LABEL_1211;
      *(_QWORD *)(v47 + 16) = v34;
      sub_1C2D434((CGThumbnailListItem_o *)(v47 + 16), v34, v48, v49);
      result = (BattleResultComponent_resultData_array *)UserServantEntity__getLimitCount((UserServantEntity_o *)v34, 0);
      if ( !v33 )
        goto LABEL_1211;
      v52 = (_DWORD)result != UserServantEntity__getLimitCount(v33, 0);
      *(_BYTE *)(v47 + 25) = 0;
      *(_DWORD *)(v47 + 28) = 0;
      *(_DWORD *)(v47 + 32) = 0;
      *(_BYTE *)(v47 + 40) = 0;
      *(_DWORD *)(v47 + 36) = -1;
      *(_BYTE *)(v47 + 24) = v52;
      v25 = p_max_length;
      *(_BYTE *)(v47 + 41) = *(_DWORD *)(v34 + 296) != v33->fields.exceedCount;
      if ( v41 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
        }
        v54 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v54 = NetworkManager_TypeInfo;
        }
        v56 = *(_QWORD *)(v34 + 80);
        v55 = *(_QWORD *)(v34 + 88);
        userIdNumber = v54->static_fields->userIdNumber;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v426.fields.currentCryptoKey = v56;
        *(_QWORD *)&v426.fields.fakeValue = v55;
        result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                             v426,
                                                             0);
        if ( !Master_object )
          goto LABEL_1211;
        v58 = UserServantCollectionMaster__GetEntityDefinitely(
                (UserServantCollectionMaster_o *)Master_object,
                userIdNumber,
                (int32_t)result,
                0);
        result = (BattleResultComponent_resultData_array *)UserServantCollectionEntity__getFriendShipRank(v41, 0);
        if ( !v58 )
          goto LABEL_1211;
        if ( (_DWORD)result != UserServantCollectionEntity__getFriendShipRank(v58, 0) )
          *(_DWORD *)(v47 + 36) = UserServantCollectionEntity__getFriendShipRank(v41, 0);
        v25 = p_max_length;
        if ( v41->fields.friendshipExceedCount != v58->fields.friendshipExceedCount )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v59 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
          v61 = *(_QWORD *)(v34 + 80);
          v60 = *(_QWORD *)(v34 + 88);
          v62 = (DataMasterBase_TMaster__TEntity__PKType__o *)v59;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v427.fields.currentCryptoKey = v61;
          *(_QWORD *)&v427.fields.fakeValue = v60;
          result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                               v427,
                                                               0);
          if ( !v62 )
            goto LABEL_1211;
          result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                               v62,
                                                               &entity,
                                                               (int32_t)result,
                                                               (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
          v25 = p_max_length;
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_1211;
            klass_high = HIDWORD(entity[6].klass);
            friendshipExceedCount = v41->fields.friendshipExceedCount;
            *(_BYTE *)(v47 + 40) = 1;
            *(_DWORD *)(v47 + 36) = friendshipExceedCount + klass_high;
          }
        }
      }
      v65 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v65 = TerminalPramsManager_TypeInfo;
      }
      v66 = (CGThumbnailListItem_o *)&v65->static_fields->mQuestClearHeroineInfo;
      v66->klass = (CGThumbnailListItem_c *)v47;
      sub_1C2D434(v66, v47, v50, v51);
      v27 = *v25;
    }
  }
  if ( !(_DWORD)v27 )
    goto LABEL_1212;
  v67 = (BattleResultComponent_resultData_o *)*m_Items;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetBattleResultCampaignBonus(v67, (const MethodInfo *)isWin);
  if ( !*(_DWORD *)v25 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v68 = (*m_Items)->m_Items[9];
  if ( v68 && (v69 = v68->fields.eventEndTitle) != 0 )
  {
    if ( !(_DWORD)v69 )
      goto LABEL_1212;
    v70 = (UserQuestEntity_o *)v68->fields.eventEndMessage;
  }
  else
  {
    v70 = 0;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23E92 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E92 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE6(result->m_Items[19]->fields.oldUserGame) = v70 != 0;
  if ( !byte_4C23E91 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4C23E91 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE5(result->m_Items[19]->fields.oldUserGame) = 0;
  if ( !byte_4C23FAB )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4C23FAB = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE1(result->m_Items[19]->fields.resultDamageRewardInfos) = 0;
  if ( !byte_4C23E90 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4C23E90 = 1;
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
    if ( !byte_4C21464 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21464 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( result->m_Items[19]->fields.eventId )
    {
      if ( !v70 )
        goto LABEL_1211;
    }
    else
    {
      if ( !v70 )
        goto LABEL_1211;
      questId = v70->fields.questId;
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4C23BE1 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23BE1 = 1;
      }
      v72 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v72 = TerminalPramsManager_TypeInfo;
      }
      v72->static_fields->_QuestId_k__BackingField = questId;
      QuestPhase = UserQuestEntity__getQuestPhase(v70, 0);
      if ( !byte_4C23BE5 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23BE5 = 1;
      }
      v74 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v74 = TerminalPramsManager_TypeInfo;
      }
      v74->static_fields->_PhaseCnt_k__BackingField = QuestPhase;
    }
    v75 = v70->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)result,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_1211;
    v77 = UserQuestMaster__GetEntity(
            (UserQuestMaster_o *)MasterData_object,
            (int64_t)result->m_Items[19]->fields.myDeck,
            v75,
            0);
    if ( v77 )
    {
      v78 = v77;
      v79 = UserQuestEntity__getQuestPhase(v77, 0);
      if ( UserQuestEntity__getClearNum(v70, 0) || UserQuestEntity__getClearNum(v78, 0) != 1 )
        v80 = UserQuestEntity__IsResetStatus(v70, 0) && !UserQuestEntity__IsResetStatus(v78, 0);
      else
        v80 = 1;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C23E91 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23E91 = 1;
      }
      v81 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v81 = TerminalPramsManager_TypeInfo;
      }
      v81->static_fields->_IsQuestClear_k__BackingField = v80;
      if ( !byte_4C24729 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        v81 = TerminalPramsManager_TypeInfo;
        byte_4C24729 = 1;
      }
      if ( !v81->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v81);
        v81 = TerminalPramsManager_TypeInfo;
      }
      v81->static_fields->_EventUIEffectClearQuestId_k__BackingField = v75;
      if ( !byte_4C24726 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        v81 = TerminalPramsManager_TypeInfo;
        byte_4C24726 = 1;
      }
      if ( !v81->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v81);
        v81 = TerminalPramsManager_TypeInfo;
      }
      v81->static_fields->_MapModelClearQuestId_k__BackingField = v75;
      if ( !byte_4C24727 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        v81 = TerminalPramsManager_TypeInfo;
        byte_4C24727 = 1;
      }
      if ( !v81->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v81);
        v81 = TerminalPramsManager_TypeInfo;
      }
      v81->static_fields->_MapModelClearPhaseCount_k__BackingField = v79;
      TerminalPramsManager__MapModelClearQuestInfo_SaveData((const MethodInfo *)v81);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      AdManager__TrackEvent((AdManager_o *)result, 4, 1, v75, v79, 0, 0);
      TerminalPramsManager__SendClearQuestToAdManager(v75, v79, v82);
    }
    else
    {
      v79 = 0;
    }
    v83 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v83);
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
    if ( !result )
      goto LABEL_1211;
    ValidMessage = QuestMessageMaster__GetValidMessage((QuestMessageMaster_o *)result, v75, v79, 3, 0);
    v86 = TerminalPramsManager_TypeInfo;
    if ( ValidMessage )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C22ED0 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C22ED0 = 1;
      }
      v86 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v86 = TerminalPramsManager_TypeInfo;
      }
      v86->static_fields->_IsDispOnly_k__BackingField = 1;
    }
    if ( !v86->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v86);
    if ( !byte_4C24737 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24737 = 1;
    }
    v87 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v87 = TerminalPramsManager_TypeInfo;
    }
    if ( v87->static_fields->_QuestReleaseFocusQuestId_k__BackingField >= 1 )
    {
      if ( !v87->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v87);
      if ( !byte_4C24737 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24737 = 1;
      }
      v88 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v88 = TerminalPramsManager_TypeInfo;
      }
      TerminalPramsManager__SetQuestReleasedFocusState(
        v88->static_fields->_QuestReleaseFocusQuestId_k__BackingField,
        1,
        v85);
      TerminalPramsManager__SaveQuestReleasedFocusState(v89);
      if ( !byte_4C2431D )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C2431D = 1;
      }
      v87 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v87 = TerminalPramsManager_TypeInfo;
      }
      v87->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
    }
    if ( !v87->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v87);
    if ( !byte_4C244FF )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C244FF = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(result->m_Items[19]->fields.eventPointWinReward) = v75;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4C23E93 )
  {
    result = (BattleResultComponent_resultData_array *)sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E93 = 1;
  }
  v90 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v90 = TerminalPramsManager_TypeInfo;
  }
  if ( v90->static_fields->_IsQuestClear_k__BackingField )
  {
    if ( !v70 )
      goto LABEL_1211;
    v91 = v70->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !result )
      goto LABEL_1211;
    v93 = WarMaster__getByLastQuestId((WarMaster_o *)result, v91, 0);
    if ( v93 )
    {
      v94 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v94 = BalanceConfig_TypeInfo;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v94->static_fields->MainInterludeMapReturnWarIds,
             v93->fields.id,
             (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C23E94 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C23E94 = 1;
        }
        v95 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v95 = TerminalPramsManager_TypeInfo;
        }
        v93 = 0;
        v95->static_fields->_IsWarClear_k__BackingField = 0;
      }
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23E94 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23E94 = 1;
    }
    v96 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v96 = TerminalPramsManager_TypeInfo;
    }
    v96->static_fields->_IsWarClear_k__BackingField = v93 != 0;
    v97 = TerminalPramsManager__CheckIsOrdealCallWarClear(v93, v92);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v97 )
    {
      if ( !byte_4C23E95 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23E95 = 1;
      }
      v98 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v98 = TerminalPramsManager_TypeInfo;
      }
      v99 = 1;
    }
    else
    {
      if ( !byte_4C23E95 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23E95 = 1;
      }
      v98 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v98 = TerminalPramsManager_TypeInfo;
      }
      v99 = 0;
    }
    v98->static_fields->_IsOrdealCallWarClear_k__BackingField = v99;
    if ( !v98->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v98);
    if ( !byte_4C23E96 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23E96 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE3(result->m_Items[19]->fields.oldUserEvent) )
    {
      if ( !v93 )
        goto LABEL_1211;
      if ( !WarEntity__IsEvent(v93, 0) )
      {
        result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( !result )
          goto LABEL_1211;
        AdManager__TrackEvent((AdManager_o *)result, 6, 1, v93->fields.id, -1, 0, 0);
      }
    }
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    AdManager__TrackEvent((AdManager_o *)result, 5, 1, v91, -1, 0, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SendOpenedQuestIdToAdManager(v91, v100);
    if ( !byte_4C23E96 )
    {
      result = (BattleResultComponent_resultData_array *)sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23E96 = 1;
    }
    v90 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v90 = TerminalPramsManager_TypeInfo;
    }
    if ( v90->static_fields->_IsWarClear_k__BackingField )
    {
      if ( !v93 )
        goto LABEL_1211;
      HasFlag = WarEntity__HasFlag(v93, 128, 0);
      v90 = TerminalPramsManager_TypeInfo;
      if ( HasFlag )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C23FAA )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C23FAA = 1;
        }
        v90 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v90 = TerminalPramsManager_TypeInfo;
        }
        v90->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
        if ( !byte_4C23FAB )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          v90 = TerminalPramsManager_TypeInfo;
          byte_4C23FAB = 1;
        }
        if ( !v90->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v90);
          v90 = TerminalPramsManager_TypeInfo;
        }
        v90->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
      }
    }
  }
  if ( !v90->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v90);
  TerminalPramsManager__SetQuestRewardInfo(resulta, (const MethodInfo *)isWin);
  if ( !LODWORD(resulta->max_length) )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->panelEventPoint = HIDWORD((*m_Items)->m_Items[2]);
  static_fields->mResultEventPanelRewardInfos = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->mResultEventPanelRewardInfos, 0, (int32_t)method, v102);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v105 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[19];
  if ( v105 && v105->_1.namespaze )
  {
    v106 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v106 = TerminalPramsManager_TypeInfo;
    }
    p_mResultEventPanelRewardInfos = (CGThumbnailListItem_o *)&v106->static_fields->mResultEventPanelRewardInfos;
    p_mResultEventPanelRewardInfos->klass = v105;
    sub_1C2D434(p_mResultEventPanelRewardInfos, (int32_t)v105, (int32_t)method, v104);
  }
  v108 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v108 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = (CGThumbnailListItem_o *)&v108->static_fields->eventConquestInfos;
  p_eventConquestInfos->klass = 0;
  sub_1C2D434(p_eventConquestInfos, 0, (int32_t)method, v104);
  TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items || !result )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v419,
                                                       HIDWORD((*m_Items)->bounds),
                                                       (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v111 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[44];
  if ( v111 && v111->_1.namespaze )
  {
    v112 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v112 = TerminalPramsManager_TypeInfo;
    }
    v113 = (CGThumbnailListItem_o *)&v112->static_fields->eventConquestInfos;
    v113->klass = v111;
    sub_1C2D434(v113, (int32_t)v111, (int32_t)method, v110);
    if ( v419 )
      Farm = EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v419, 0);
    else
      Farm = 0;
    v115 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v115 = TerminalPramsManager_TypeInfo;
    }
    v115->static_fields->eventConquestInfoDisp = !Farm;
  }
  result = (BattleResultComponent_resultData_array *)v419;
  if ( v419 )
  {
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v419, 0);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C23E93 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23E93 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
      {
        v116 = 1;
      }
      else
      {
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_4C23E90 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C23E90 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        v116 = BYTE6(result->m_Items[19]->fields.oldUserGame);
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      BYTE1(result->m_Items[19][1].fields.eventPointWinReward) = v116;
    }
  }
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  if ( LOBYTE((*m_Items)->m_Items[47]) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24400 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24400 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(result->m_Items[19]->fields.resultUseRewardAddItemRewardInfos) = 1;
    if ( !byte_4C23E93 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4C23E93 = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      if ( !v70 )
        goto LABEL_1211;
      v117 = v70->fields.questId;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !result )
        goto LABEL_1211;
      v118 = WarMaster__getByLastQuestId((WarMaster_o *)result, v117, 0);
      if ( v118 )
      {
        id = v118->fields.id;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C24401 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C24401 = 1;
        }
        v120 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v120 = TerminalPramsManager_TypeInfo;
        }
        v120->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = id;
      }
    }
  }
  v121 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v121 = TerminalPramsManager_TypeInfo;
  }
  *(_QWORD *)&v121->static_fields->clearLastBattleRaidId = -1;
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  v122 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  v123 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items || !v123 )
    goto LABEL_1211;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v123,
          &v418,
          HIDWORD((*m_Items)->bounds),
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_631;
  result = (BattleResultComponent_resultData_array *)v418;
  if ( !v418 )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPoint((EventDetailEntity_o *)v418, 0);
  v126 = 0;
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !*(_DWORD *)p_max_length )
      goto LABEL_1212;
    if ( !*m_Items )
      goto LABEL_1211;
    v126 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[10];
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24738 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24738 = 1;
  }
  v127 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v127 = TerminalPramsManager_TypeInfo;
  }
  p_OldUserEventPoint_k__BackingField = (CGThumbnailListItem_o *)&v127->static_fields->_OldUserEventPoint_k__BackingField;
  p_OldUserEventPoint_k__BackingField->klass = v126;
  sub_1C2D434(p_OldUserEventPoint_k__BackingField, (int32_t)v126, (int32_t)method, v125);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items || !v122 )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidGorupMax(
                                                       (EventRaidMaster_o *)v122,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0);
  if ( (int)result >= 1 )
  {
    if ( !*(_DWORD *)p_max_length )
      goto LABEL_1212;
    if ( !*m_Items )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                         (EventRaidMaster_o *)v122,
                                                         HIDWORD((*m_Items)->bounds),
                                                         0);
    v421 = 0;
    if ( !result )
      goto LABEL_1211;
    max_length = result->max_length;
    v130 = result;
    if ( max_length < 1 )
      goto LABEL_631;
    v131 = 0;
    while ( 1 )
    {
      if ( v131 >= (unsigned int)max_length )
        goto LABEL_1212;
      v132 = &v130->obj.klass + v131;
      v133 = v132[4];
      if ( !v133 )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)EventRaidEntity__IsJumbleSingleRaid(
                                                           (EventRaidEntity_o *)v132[4],
                                                           0);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !*(_DWORD *)p_max_length )
          goto LABEL_1212;
        if ( !*m_Items )
          goto LABEL_1211;
        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                 (EventRaidMaster_o *)v122,
                                 HIDWORD((*m_Items)->bounds),
                                 (int32_t)v133->_1.namespaze,
                                 0);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C21464 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C21464 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( RaidGroupDeadQuestId == result->m_Items[19]->fields.eventId )
        {
          result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !result )
            goto LABEL_1211;
          result = (BattleResultComponent_resultData_array *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)result,
                                                               RaidGroupDeadQuestId,
                                                               0,
                                                               0);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
        }
      }
      if ( !*(_DWORD *)p_max_length )
        goto LABEL_1212;
      if ( !*m_Items )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidAliveQuestIds(
                                                           (EventRaidMaster_o *)v122,
                                                           HIDWORD((*m_Items)->bounds),
                                                           HIDWORD(v133->_1.name),
                                                           0);
      QuestId_k__BackingField = 0;
      if ( !result )
        goto LABEL_1211;
      v135 = result->max_length;
      v136 = result;
      if ( v135 >= 1 )
      {
        v137 = 0;
        while ( 1 )
        {
          if ( v137 >= (unsigned int)v135 )
            goto LABEL_1212;
          v138 = *((_DWORD *)v136->m_Items + v137);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C21464 )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            byte_4C21464 = 1;
          }
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          }
          v139 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
          if ( v138 == v139->_QuestId_k__BackingField )
            break;
          v137 = QuestId_k__BackingField + 1;
          QuestId_k__BackingField = v137;
          v135 = v136->max_length;
          if ( v137 >= v135 )
            goto LABEL_431;
        }
        name_high = HIDWORD(v133->_1.name);
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          v139 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v139->clearBattleRaidId = name_high;
      }
LABEL_431:
      v131 = v421 + 1;
      v421 = v131;
      max_length = v130->max_length;
      if ( v131 >= max_length )
        goto LABEL_631;
    }
    v149 = TerminalPramsManager_TypeInfo;
    v150 = HIDWORD(v133->_1.name);
    goto LABEL_501;
  }
  result = (BattleResultComponent_resultData_array *)v418;
  if ( !v418 )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__isRaidDefeatCount(
                                                       (EventDetailEntity_o *)v418,
                                                       0);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_array *)v418;
    if ( !v418 )
      goto LABEL_1211;
    if ( !EventDetailEntity__IsEventActivityPoint((EventDetailEntity_o *)v418, 0) )
      goto LABEL_461;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventUiMaster___);
    if ( !*(_DWORD *)p_max_length )
      goto LABEL_1212;
    if ( !*m_Items || !result )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)EventUiMaster__HasEntity(
                                                         (EventUiMaster_o *)result,
                                                         HIDWORD((*m_Items)->bounds),
                                                         0);
    if ( ((unsigned __int8)result & 1) == 0 )
    {
      if ( !*(_DWORD *)p_max_length )
        goto LABEL_1212;
      if ( !*m_Items )
        goto LABEL_1211;
      v160 = (int32_t)(*m_Items)->m_Items[43];
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C21ACB )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C21ACB = 1;
      }
      v161 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v161 = TerminalPramsManager_TypeInfo;
      }
      v161->static_fields->_EventActivityPointEffectState_k__BackingField = v160;
    }
    else
    {
LABEL_461:
      result = (BattleResultComponent_resultData_array *)v418;
      if ( !v418 )
        goto LABEL_1211;
      if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v418, 0) )
      {
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C24739 )
        {
          result = (BattleResultComponent_resultData_array *)sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C24739 = 1;
        }
        v147 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v147 = TerminalPramsManager_TypeInfo;
        }
        if ( v147->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField )
        {
          v148 = 0;
        }
        else
        {
          if ( !*(_DWORD *)p_max_length )
            goto LABEL_1212;
          if ( !*m_Items )
            goto LABEL_1211;
          bounds_high = HIDWORD((*m_Items)->bounds);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsUserEventStatus = CondType__IsUserEventStatus(bounds_high, 7, 0);
          v147 = TerminalPramsManager_TypeInfo;
          v148 = IsUserEventStatus;
        }
        if ( !v147->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v147);
        if ( !byte_4C24507 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C24507 = 1;
        }
        v164 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v164 = TerminalPramsManager_TypeInfo;
        }
        v164->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = v148;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)v418;
        if ( !v418 )
          goto LABEL_1211;
        if ( !EventDetailEntity__IsEventHappiness((EventDetailEntity_o *)v418, 0) )
          goto LABEL_504;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v151 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C21464 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C21464 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        eventId = result->m_Items[19]->fields.eventId;
        if ( !byte_4C21463 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          byte_4C21463 = 1;
        }
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( !v151 )
          goto LABEL_1211;
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)v151,
               &v416,
               eventId,
               LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
               0) )
        {
          result = (BattleResultComponent_resultData_array *)v416;
          if ( !v416 )
            goto LABEL_1211;
          v153 = QuestPhaseEntity__PlayHappinessCounterEffect(v416, 0);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C242F8 )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            byte_4C242F8 = 1;
          }
          v154 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v154 = TerminalPramsManager_TypeInfo;
          }
          v154->static_fields->_PlayHappinessCounterEffect_k__BackingField = v153;
        }
        else
        {
LABEL_504:
          result = (BattleResultComponent_resultData_array *)v418;
          if ( !v418 )
            goto LABEL_1211;
          result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPanel(
                                                               (EventDetailEntity_o *)v418,
                                                               0);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !*(_DWORD *)p_max_length )
              goto LABEL_1212;
            if ( !*m_Items )
              goto LABEL_1211;
            v156 = (*m_Items)->m_Items[10];
            v421 = 0;
            if ( !v156 )
              goto LABEL_1211;
            v157 = (int)v156->fields.eventEndTitle;
            if ( v157 >= 1 )
            {
              v158 = 0;
              while ( 1 )
              {
                if ( v157 == v158 )
                  goto LABEL_1212;
                if ( !v418 )
                  goto LABEL_1211;
                v159 = *((_QWORD *)&v156->fields.eventEndMessage + v158);
                if ( !v159 )
                  goto LABEL_1211;
                if ( LODWORD(v418[1].klass) == *(_DWORD *)(v159 + 24) )
                  break;
                v421 = ++v158;
                if ( v157 == v158 )
                  goto LABEL_612;
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4C23CFF )
              {
                sub_1C2D490(&TerminalPramsManager_TypeInfo);
                byte_4C23CFF = 1;
              }
              v166 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v166 = TerminalPramsManager_TypeInfo;
              }
              if ( !v166->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
              {
                v167 = (Il2CppObject *)sub_1C2D6DC(EventSaveData_TypeInfo);
                System_Object___ctor(v167, 0);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4C23D00 )
                {
                  sub_1C2D490(&TerminalPramsManager_TypeInfo);
                  byte_4C23D00 = 1;
                }
                v170 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v170 = TerminalPramsManager_TypeInfo;
                }
                p_BeforeEventSubmarineSaveData_k__BackingField = (CGThumbnailListItem_o *)&v170->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
                p_BeforeEventSubmarineSaveData_k__BackingField->klass = (CGThumbnailListItem_c *)v167;
                sub_1C2D434(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v167, v168, v169);
                v166 = TerminalPramsManager_TypeInfo;
              }
              if ( !v166->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v166);
              if ( !byte_4C23CFF )
              {
                sub_1C2D490(&TerminalPramsManager_TypeInfo);
                byte_4C23CFF = 1;
              }
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              rewardBonus = result->m_Items[19]->fields.rewardBonus;
              if ( !rewardBonus )
                goto LABEL_1211;
              rewardBonus->fields.animationId = *(_DWORD *)(v159 + 24);
              if ( !byte_4C23CFF )
              {
                sub_1C2D490(&TerminalPramsManager_TypeInfo);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
                byte_4C23CFF = 1;
              }
              if ( !LODWORD(result->m_Items[24]) )
              {
                j_il2cpp_runtime_class_init_0(result);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              v173 = result->m_Items[19]->fields.rewardBonus;
              if ( !v173 )
                goto LABEL_1211;
              result = (BattleResultComponent_resultData_array *)v173->fields.voiceIds;
              if ( result
                && (result = (BattleResultComponent_resultData_array *)System_String__Split(
                                                                         (System_String_o *)result,
                                                                         0x2Cu,
                                                                         0,
                                                                         0)) != 0 )
              {
                v174 = result->max_length;
                v175 = (__int64 *)&result->m_Items[1];
                if ( v174 <= 1 )
                  v175 = &StringLiteral_1122/*"0"*/;
                v176 = *v175;
                v177 = v174 <= 2 ? (System_String_o **)&StringLiteral_1122/*"0"*/ : (System_String_o **)&result->m_Items[2];
                v178 = *v177;
                v179 = v174 <= 3 ? (System_String_o **)&StringLiteral_6635/*"False"*/ : (System_String_o **)&result->m_Items[3];
              }
              else
              {
                v178 = (System_String_o *)StringLiteral_1122/*"0"*/;
                v179 = (System_String_o **)&StringLiteral_6635/*"False"*/;
                v176 = StringLiteral_1122/*"0"*/;
              }
              if ( !v418 )
                goto LABEL_1211;
              v404 = (System_String_o *)v176;
              v180 = *v179;
              v181 = (int32_t)v418[1].klass;
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
                                                                   v181,
                                                                   0);
              v182 = (System_Collections_Generic_List_object__o *)result;
              v183 = TerminalPramsManager___c_TypeInfo;
              if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
                v183 = TerminalPramsManager___c_TypeInfo;
              }
              _9__724_0 = (System_Predicate_object__o *)v183->static_fields->__9__724_0;
              if ( !_9__724_0 )
              {
                v185 = v178;
                if ( !v183->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v183);
                  v183 = TerminalPramsManager___c_TypeInfo;
                }
                v186 = (Il2CppObject *)v183->static_fields->__9;
                _9__724_0 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_QuestReleaseEntity__TypeInfo);
                System_Predicate_object____ctor(
                  _9__724_0,
                  v186,
                  Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__724_0__,
                  0);
                v187 = TerminalPramsManager___c_TypeInfo->static_fields;
                v187->__9__724_0 = (struct System_Predicate_QuestReleaseEntity__o *)_9__724_0;
                sub_1C2D434((CGThumbnailListItem_o *)&v187->__9__724_0, (int32_t)_9__724_0, v188, v189);
                v178 = v185;
              }
              if ( !v182 )
                goto LABEL_1211;
              v190 = v404;
              if ( System_Collections_Generic_List_object___Find(
                     v182,
                     (System_Predicate_T__o *)_9__724_0,
                     (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4C21464 )
                {
                  sub_1C2D490(&TerminalPramsManager_TypeInfo);
                  byte_4C21464 = 1;
                }
                v191 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v191 = TerminalPramsManager_TypeInfo;
                }
                QuestId_k__BackingField = v191->static_fields->_QuestId_k__BackingField;
                v190 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0);
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4C23CFF )
              {
                sub_1C2D490(&TerminalPramsManager_TypeInfo);
                byte_4C23CFF = 1;
              }
              v192 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v192 = TerminalPramsManager_TypeInfo;
              }
              BeforeEventSubmarineSaveData_k__BackingField = v192->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
              v194 = System_Int64__ToString(v159 + 32, 0);
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_39580780(
                                                                   v194,
                                                                   v190,
                                                                   v178,
                                                                   v180,
                                                                   0);
              if ( !BeforeEventSubmarineSaveData_k__BackingField )
                goto LABEL_1211;
              BeforeEventSubmarineSaveData_k__BackingField->fields.value = (struct System_String_o *)result;
              sub_1C2D434(
                (CGThumbnailListItem_o *)&BeforeEventSubmarineSaveData_k__BackingField->fields.value,
                (int32_t)result,
                v195,
                v196);
            }
LABEL_612:
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C21464 )
            {
              sub_1C2D490(&TerminalPramsManager_TypeInfo);
              byte_4C21464 = 1;
            }
            v197 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v197 = TerminalPramsManager_TypeInfo;
            }
            v198 = v197->static_fields->_QuestId_k__BackingField;
            if ( !byte_4C21463 )
            {
              sub_1C2D490(&TerminalPramsManager_TypeInfo);
              v197 = TerminalPramsManager_TypeInfo;
              byte_4C21463 = 1;
            }
            if ( !v197->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v197);
              v197 = TerminalPramsManager_TypeInfo;
            }
            PhaseCnt_k__BackingField = v197->static_fields->_PhaseCnt_k__BackingField;
            if ( !byte_4C23E93 )
            {
              sub_1C2D490(&TerminalPramsManager_TypeInfo);
              v197 = TerminalPramsManager_TypeInfo;
              byte_4C23E93 = 1;
            }
            if ( !v197->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v197);
              v197 = TerminalPramsManager_TypeInfo;
            }
            IsQuestClear_k__BackingField = v197->static_fields->_IsQuestClear_k__BackingField;
            if ( !byte_4C23E90 )
            {
              sub_1C2D490(&TerminalPramsManager_TypeInfo);
              v197 = TerminalPramsManager_TypeInfo;
              byte_4C23E90 = 1;
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
              0);
          }
          else
          {
            result = (BattleResultComponent_resultData_array *)v418;
            if ( !v418 )
              goto LABEL_1211;
            if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)v418, 0) )
            {
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4C2472C )
              {
                sub_1C2D490(&TerminalPramsManager_TypeInfo);
                byte_4C2472C = 1;
              }
              v165 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v165 = TerminalPramsManager_TypeInfo;
              }
              v165->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
            }
          }
        }
      }
    }
    goto LABEL_631;
  }
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                       (EventRaidMaster_o *)v122,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0);
  v421 = 0;
  if ( !result )
    goto LABEL_1211;
  v141 = result->max_length;
  v142 = result;
  if ( v141 >= 1 )
  {
    v143 = 0;
    while ( 1 )
    {
      if ( v143 >= (unsigned int)v141 || !*(_DWORD *)p_max_length )
        goto LABEL_1212;
      if ( !*m_Items )
        goto LABEL_1211;
      v144 = v142->m_Items[v143];
      if ( !v144 )
        goto LABEL_1211;
      RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                          (EventRaidMaster_o *)v122,
                          HIDWORD((*m_Items)->bounds),
                          v144->fields.eventId,
                          0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C21464 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C21464 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v146 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( RaidDeadQuestId == v146->_QuestId_k__BackingField )
        break;
      v143 = v421 + 1;
      v421 = v143;
      v141 = v142->max_length;
      if ( v143 >= v141 )
        goto LABEL_631;
    }
    v155 = v144->fields.eventId;
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      v146 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v146->clearBattleRaidId = v155;
    result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)result, RaidDeadQuestId, 0, 0) )
    {
      v149 = TerminalPramsManager_TypeInfo;
      v150 = v144->fields.eventId;
LABEL_501:
      if ( !v149->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v149);
        v149 = TerminalPramsManager_TypeInfo;
      }
      v149->static_fields->clearLastBattleRaidId = v150;
    }
  }
LABEL_631:
  v201 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v201 = TerminalPramsManager_TypeInfo;
  }
  if ( v201->static_fields->clearLastBattleRaidId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v202 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C216DE )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C216DE = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v202 )
      goto LABEL_1211;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v202,
           &v415,
           HIDWORD(result->m_Items[19]->klass),
           (const MethodInfo_3387DE4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      result = (BattleResultComponent_resultData_array *)v415;
      if ( !v415 )
        goto LABEL_1211;
      if ( WarEntity__IsFolder((WarEntity_o *)v415, 0) )
      {
        result = (BattleResultComponent_resultData_array *)TitleInfoEventRaidBossComponent_TypeInfo;
        if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TitleInfoEventRaidBossComponent_TypeInfo;
        }
        if ( !*(_DWORD *)p_max_length )
          goto LABEL_1212;
        if ( !*m_Items )
          goto LABEL_1211;
        UnityEngine_PlayerPrefs__SetInt(result->m_Items[19]->fields.eventEndTitle, HIDWORD((*m_Items)->bounds), 0);
        UnityEngine_PlayerPrefs__Save(0);
      }
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24303 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24303 = 1;
  }
  v203 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v203 = TerminalPramsManager_TypeInfo;
  }
  v203->static_fields->_IsWarBoardClear_k__BackingField = 0;
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v203 = TerminalPramsManager_TypeInfo;
    byte_4C21464 = 1;
  }
  if ( !v203->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v203);
    v203 = TerminalPramsManager_TypeInfo;
  }
  if ( v203->static_fields->_QuestId_k__BackingField >= 1 )
  {
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    v204 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21464 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21464 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v204 )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)QuestMaster__getQuestEntity(
                                                         (QuestMaster_o *)v204,
                                                         result->m_Items[19]->fields.eventId,
                                                         0);
    if ( !result )
      goto LABEL_1211;
    v205 = (int)result->m_Items[1];
    if ( !byte_4C24303 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24303 = 1;
    }
    v203 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v203 = TerminalPramsManager_TypeInfo;
    }
    v203->static_fields->_IsWarBoardClear_k__BackingField = v205 == 7;
  }
  if ( !v203->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v203);
  if ( !byte_4C243FF )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C243FF = 1;
  }
  v206 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v206 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeRelease_k__BackingField = (CGThumbnailListItem_o *)&v206->static_fields->_questClearCostumeRelease_k__BackingField;
  p_questClearCostumeRelease_k__BackingField->klass = 0;
  sub_1C2D434(p_questClearCostumeRelease_k__BackingField, 0, (int32_t)method, v124);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v209 = (*m_Items)->m_Items[22];
  if ( v209 && v209->fields.eventEndTitle )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C242F4 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C242F4 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !LOBYTE(result->m_Items[19]->fields.resultQuestPhaseRewardInfos) )
    {
      if ( !*(_DWORD *)p_max_length )
        goto LABEL_1212;
      if ( !*m_Items )
        goto LABEL_1211;
      v210 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[22];
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4C243FF )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C243FF = 1;
      }
      v211 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v211 = TerminalPramsManager_TypeInfo;
      }
      v212 = (CGThumbnailListItem_o *)&v211->static_fields->_questClearCostumeRelease_k__BackingField;
      v212->klass = v210;
      sub_1C2D434(v212, (int32_t)v210, (int32_t)method, v208);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24301 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24301 = 1;
  }
  v213 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v213 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeGet_k__BackingField = (CGThumbnailListItem_o *)&v213->static_fields->_questClearCostumeGet_k__BackingField;
  p_questClearCostumeGet_k__BackingField->klass = 0;
  sub_1C2D434(p_questClearCostumeGet_k__BackingField, 0, (int32_t)method, v208);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v216 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[23];
  if ( v216 && v216->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24301 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24301 = 1;
    }
    v217 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v217 = TerminalPramsManager_TypeInfo;
    }
    v218 = (CGThumbnailListItem_o *)&v217->static_fields->_questClearCostumeGet_k__BackingField;
    v218->klass = v216;
    sub_1C2D434(v218, (int32_t)v216, (int32_t)method, v215);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C2473A )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2473A = 1;
  }
  v219 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v219 = TerminalPramsManager_TypeInfo;
  }
  p_eventPointWinReward_k__BackingField = (CGThumbnailListItem_o *)&v219->static_fields->_eventPointWinReward_k__BackingField;
  p_eventPointWinReward_k__BackingField->klass = 0;
  sub_1C2D434(p_eventPointWinReward_k__BackingField, 0, (int32_t)method, v215);
  if ( !byte_4C2473B )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2473B = 1;
  }
  v222 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v222 = TerminalPramsManager_TypeInfo;
  }
  v222->static_fields->_eventPointWinType_k__BackingField = 0;
  if ( v70 && v418 && HIDWORD(v418[9].klass) == 4 )
  {
    v223 = v70->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !result )
      goto LABEL_1211;
    v224 = (QuestGroupMaster_o *)result;
    GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)result, v223, 4, 0);
    v226 = TerminalPramsManager_TypeInfo;
    v227 = GroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v226 = TerminalPramsManager_TypeInfo;
    }
    v226->static_fields->joinGroupId = v227;
    v228 = QuestGroupMaster__GetGroupId(v224, v223, 3, 0);
    if ( !byte_4C23E93 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23E93 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( v228 >= 1 && BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      v229 = DataManager__GetMasterData_object_(
               (DataManager_o *)result,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventPointMaster___);
      if ( !*(_DWORD *)p_max_length )
        goto LABEL_1212;
      if ( !*m_Items || !result )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)EventPointMaster__GetEntity(
                                                           (EventPointMaster_o *)result,
                                                           v228,
                                                           HIDWORD((*m_Items)->bounds),
                                                           0);
      v230 = (EventPointEntity_o *)result;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v230 )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)EventPointEntity__IsGroupOnGroup1(
                                                           v230,
                                                           TerminalPramsManager_TypeInfo->static_fields->joinGroupId,
                                                           0);
      if ( !v229 )
        goto LABEL_1211;
      v231 = QuestReleaseMaster__EventPointWinActionType(
               (QuestReleaseMaster_o *)v229,
               v223,
               (unsigned __int8)result & 1,
               0);
      if ( !byte_4C2473B )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C2473B = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(result->m_Items[19]->fields.warClearReward) = v231;
      if ( !byte_4C2473C )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        byte_4C2473C = 1;
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v232 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( v232->_eventPointWinType_k__BackingField )
      {
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          v232 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v232->joinGroupId = -1;
      }
    }
    if ( !*(_DWORD *)p_max_length )
      goto LABEL_1212;
    if ( !*m_Items )
      goto LABEL_1211;
    v233 = (*m_Items)->m_Items[20];
    if ( v233 )
    {
      v234 = v233->fields.eventEndTitle;
      if ( v234 )
      {
        if ( !(_DWORD)v234 )
          goto LABEL_1212;
        v235 = (CGThumbnailListItem_c *)v233->fields.eventEndMessage;
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_4C2473A )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C2473A = 1;
        }
        v236 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v236 = TerminalPramsManager_TypeInfo;
        }
        v237 = (CGThumbnailListItem_o *)&v236->static_fields->_eventPointWinReward_k__BackingField;
        v237->klass = v235;
        sub_1C2D434(v237, (int32_t)v235, (int32_t)method, v221);
      }
    }
  }
  if ( v70 && v418 && HIDWORD(v418[9].klass) == 6 )
  {
    v238 = v70->fields.questId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C2473D )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C2473D = 1;
    }
    v239 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v239 = TerminalPramsManager_TypeInfo;
    }
    v239->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = v238;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24502 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24502 = 1;
  }
  v240 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v240 = TerminalPramsManager_TypeInfo;
  }
  p_eventRaceBoost_k__BackingField = (CGThumbnailListItem_o *)&v240->static_fields->_eventRaceBoost_k__BackingField;
  p_eventRaceBoost_k__BackingField->klass = 0;
  sub_1C2D434(p_eventRaceBoost_k__BackingField, 0, (int32_t)method, v221);
  v243 = *p_max_length;
  if ( !(unsigned int)*p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v244 = (*m_Items)->m_Items[21];
  if ( v244 && v244->fields.battleId >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24502 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24502 = 1;
    }
    v245 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v245 = TerminalPramsManager_TypeInfo;
    }
    v246 = (CGThumbnailListItem_o *)&v245->static_fields->_eventRaceBoost_k__BackingField;
    v246->klass = (CGThumbnailListItem_c *)v244;
    sub_1C2D434(v246, (int32_t)v244, (int32_t)method, v242);
    if ( !byte_4C244E9 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C244E9 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v247 = *(_QWORD *)&result->m_Items[19]->fields.followerType;
    if ( !byte_4C21464 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4C21464 = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v247 )
      goto LABEL_1211;
    *(_DWORD *)(v247 + 28) = result->m_Items[19]->fields.eventId;
    v243 = *p_max_length;
  }
  if ( !(_DWORD)v243 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v248 = (*m_Items)->m_Items[24];
  if ( v248 )
  {
    v249 = v248->fields.eventEndTitle;
    if ( v249 )
    {
      if ( !(_DWORD)v249 )
        goto LABEL_1212;
      v250 = v248->fields.eventEndMessage;
      if ( !v250 )
        goto LABEL_1211;
      if ( v250->fields._stringLength >= 1 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C2473E )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C2473E = 1;
        }
        v251 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v251 = TerminalPramsManager_TypeInfo;
        }
        p_eventTowerReward_k__BackingField = (CGThumbnailListItem_o *)&v251->static_fields->_eventTowerReward_k__BackingField;
        p_eventTowerReward_k__BackingField->klass = (CGThumbnailListItem_c *)v250;
        sub_1C2D434(p_eventTowerReward_k__BackingField, (int32_t)v250, (int32_t)method, v242);
        if ( !*(_DWORD *)p_max_length )
          goto LABEL_1212;
        if ( !*m_Items )
          goto LABEL_1211;
        v254 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[25];
        if ( !byte_4C2473F )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C2473F = 1;
        }
        v255 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v255 = TerminalPramsManager_TypeInfo;
        }
        p_resultEventTowerRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v255->static_fields->_resultEventTowerRewardInfo_k__BackingField;
        p_resultEventTowerRewardInfo_k__BackingField->klass = v254;
        sub_1C2D434(p_resultEventTowerRewardInfo_k__BackingField, (int32_t)v254, (int32_t)method, v253);
        v243 = *p_max_length;
      }
    }
  }
  if ( !(_DWORD)v243 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v257 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[26];
  if ( v257 && v257->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C242FB )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C242FB = 1;
    }
    v258 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v258 = TerminalPramsManager_TypeInfo;
    }
    p_resultBoostItemRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v258->static_fields->_resultBoostItemRewardInfo_k__BackingField;
    p_resultBoostItemRewardInfo_k__BackingField->klass = v257;
    sub_1C2D434(p_resultBoostItemRewardInfo_k__BackingField, (int32_t)v257, (int32_t)method, v242);
    v243 = *p_max_length;
  }
  if ( !(_DWORD)v243 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v260 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[27];
  if ( v260 && v260->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C242FC )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C242FC = 1;
    }
    v261 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v261 = TerminalPramsManager_TypeInfo;
    }
    p_resultEventBoardGameTokenRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v261->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
    p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = v260;
    sub_1C2D434(p_resultEventBoardGameTokenRewardInfo_k__BackingField, (int32_t)v260, (int32_t)method, v242);
    v243 = *p_max_length;
  }
  if ( !(_DWORD)v243 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v263 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[28];
  if ( v263 && v263->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24306 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24306 = 1;
    }
    v264 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v264 = TerminalPramsManager_TypeInfo;
    }
    p_warClearReward_k__BackingField = (CGThumbnailListItem_o *)&v264->static_fields->_warClearReward_k__BackingField;
    p_warClearReward_k__BackingField->klass = v263;
    sub_1C2D434(p_warClearReward_k__BackingField, (int32_t)v263, (int32_t)method, v242);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24740 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24740 = 1;
  }
  v266 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v266 = TerminalPramsManager_TypeInfo;
  }
  v267 = v266->static_fields;
  v267->_oldSuperBoss_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v267->_oldSuperBoss_k__BackingField, 0, (int32_t)method, v242);
  if ( !byte_4C24741 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24741 = 1;
  }
  v270 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v270 = TerminalPramsManager_TypeInfo;
  }
  v271 = v270->static_fields;
  v271->_oldPersonalBoss_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v271->_oldPersonalBoss_k__BackingField, 0, v268, v269);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_1211;
  WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, result->m_Items[19]->fields.eventId, 0);
  result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)result, WarID_ByQuestID, 0);
  if ( WarEntityByWarID )
    v275 = WarEntityByWarID->fields.eventId;
  else
    v275 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !result )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v414,
                                                       v275,
                                                       (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( v405 )
    goto LABEL_1216;
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  result = *m_Items;
  if ( !*m_Items )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)BattleResultComponent_resultData__checkResultDispFlag(
                                                       (BattleResultComponent_resultData_o *)result,
                                                       256,
                                                       0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
LABEL_1216:
    v277 = *p_max_length;
    if ( !(unsigned int)*p_max_length )
      goto LABEL_1212;
    if ( !*m_Items )
      goto LABEL_1211;
    if ( (*m_Items)->m_Items[42] )
    {
      result = (BattleResultComponent_resultData_array *)v414;
      if ( v414
        && (result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsPersonalBoss(
                                                                 (EventDetailEntity_o *)v414,
                                                                 0),
            v277 = *p_max_length,
            ((unsigned __int8)result & 1) != 0) )
      {
        if ( !(_DWORD)v277 )
          goto LABEL_1212;
        if ( !*m_Items )
          goto LABEL_1211;
        v278 = (*m_Items)->m_Items[42];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C24741 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C24741 = 1;
        }
        v279 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v279 = TerminalPramsManager_TypeInfo;
        }
        v280 = v279->static_fields;
        v280->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v278;
        p_oldPersonalBoss_k__BackingField = (CGThumbnailListItem_o *)&v280->_oldPersonalBoss_k__BackingField;
      }
      else
      {
        if ( !(_DWORD)v277 )
          goto LABEL_1212;
        if ( !*m_Items )
          goto LABEL_1211;
        v278 = (*m_Items)->m_Items[42];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C24740 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C24740 = 1;
        }
        v282 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v282 = TerminalPramsManager_TypeInfo;
        }
        v283 = v282->static_fields;
        v283->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v278;
        p_oldPersonalBoss_k__BackingField = (CGThumbnailListItem_o *)&v283->_oldSuperBoss_k__BackingField;
      }
      sub_1C2D434(p_oldPersonalBoss_k__BackingField, (int32_t)v278, (int32_t)method, v276);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24742 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24742 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !result->m_Items[19]->fields.eventTowerReward )
    goto LABEL_1217;
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4C24742 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24742 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  eventTowerReward = result->m_Items[19]->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_1211;
  if ( eventTowerReward->max_length )
  {
    v285 = 1;
  }
  else
  {
LABEL_1217:
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_4C21464 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21464 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v286 = BalanceConfig_TypeInfo;
    v287 = result->m_Items[19]->fields.eventId;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v286 = BalanceConfig_TypeInfo;
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v285 = v287 == v286->static_fields->OrtFirstQuestId;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4C24314 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24314 = 1;
  }
  v288 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v288 = TerminalPramsManager_TypeInfo;
  }
  v288->static_fields->_isIncomingCall_k__BackingField = v285;
  if ( v414 && EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)v414, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21464 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21464 = 1;
    }
    v289 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v289 = TerminalPramsManager_TypeInfo;
    }
    v290 = BalanceConfig_TypeInfo;
    v291 = v289->static_fields->_QuestId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v290 = BalanceConfig_TypeInfo;
    }
    if ( v291 == v290->static_fields->OrtLateQuestId )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C21463 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C21463 = 1;
      }
      v292 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v292 = TerminalPramsManager_TypeInfo;
      }
      v293 = BalanceConfig_TypeInfo;
      v294 = v292->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v293 = BalanceConfig_TypeInfo;
      }
      if ( v294 + 1 == v293->static_fields->OrtLatePhaseBreak )
        goto LABEL_1218;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C21463 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C21463 = 1;
      }
      v295 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v295 = TerminalPramsManager_TypeInfo;
      }
      v296 = BalanceConfig_TypeInfo;
      v297 = v295->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v296 = BalanceConfig_TypeInfo;
      }
      if ( v297 + 1 == v296->static_fields->OrtLatePhaseDead )
      {
LABEL_1218:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v298 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserSuperBossMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
        }
        result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        }
        v299 = result->m_Items[19]->fields.myDeck;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v298 )
          goto LABEL_1211;
        if ( UserSuperBossMaster__TryGetEntity(
               (UserSuperBossMaster_o *)v298,
               &v413,
               (int64_t)v299,
               v275,
               BalanceConfig_TypeInfo->static_fields->OrtThirdFormId,
               0) )
        {
          result = (BattleResultComponent_resultData_array *)sub_1C2D538(UserSuperBossEntity___TypeInfo, 1);
          if ( !result )
            goto LABEL_1211;
          v301 = v413;
          v302 = result;
          if ( v413 )
          {
            result = (BattleResultComponent_resultData_array *)sub_1C2D5CC(v413, result->obj.klass->_1.element_class);
            if ( !result )
            {
LABEL_1213:
              v403 = sub_1C2D710();
              sub_1C2D5B8(v403, 0);
            }
          }
          if ( !LODWORD(v302->max_length) )
            goto LABEL_1212;
          v302->m_Items[0] = (BattleResultComponent_resultData_o *)v301;
          sub_1C2D434((CGThumbnailListItem_o *)v302->m_Items, (int32_t)v301, (int32_t)method, v300);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C24741 )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            byte_4C24741 = 1;
          }
          v305 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v305 = TerminalPramsManager_TypeInfo;
          }
          v306 = v305->static_fields;
          v306->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v302;
          sub_1C2D434((CGThumbnailListItem_o *)&v306->_oldPersonalBoss_k__BackingField, (int32_t)v302, v303, v304);
        }
      }
    }
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  TalkResumeInfo = ScriptManager__GetTalkResumeInfo(0);
  if ( TalkResumeInfo )
  {
    v308 = TalkResumeInfo;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    v309 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21464 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21464 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v309 )
      goto LABEL_1211;
    ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)v309, result->m_Items[19]->fields.eventId, 0);
    v311 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !byte_4C21463 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21463 = 1;
    }
    v312 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v312 = TerminalPramsManager_TypeInfo;
    }
    v313 = v312->static_fields->_PhaseCnt_k__BackingField;
    winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v308, 0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd2(
                                                         ScriptQuestId,
                                                         v313 + 1,
                                                         winResult,
                                                         0);
    if ( !v311 )
      goto LABEL_1211;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v311, (System_String_o *)result, 0) )
      goto LABEL_1026;
    v317 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21463 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21463 = 1;
    }
    v318 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v318 = TerminalPramsManager_TypeInfo;
    }
    v319 = v318->static_fields->_PhaseCnt_k__BackingField;
    v320 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v308, 0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd(
                                                         ScriptQuestId,
                                                         v319 + 1,
                                                         v320,
                                                         0);
    if ( !v317 )
      goto LABEL_1211;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v317, (System_String_o *)result, 0) )
    {
LABEL_1026:
      v321 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v321 = TerminalPramsManager_TypeInfo;
      }
      v322 = StringLiteral_1/*""*/;
      p_lastPlayBgmName = (CGThumbnailListItem_o *)&v321->static_fields->lastPlayBgmName;
      p_lastPlayBgmName->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
      sub_1C2D434(p_lastPlayBgmName, v322, v315, v316);
      TerminalPramsManager__LastPlayBgmNameSave_SaveData(v324);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  v325 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v326 = result->m_Items[19]->fields.eventId;
  if ( !byte_4C21463 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4C21463 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v325 )
    goto LABEL_1211;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)v325,
    &v422,
    v326,
    LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
    0);
  if ( !byte_4C24743 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24743 = 1;
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
    if ( !byte_4C24743 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24743 = 1;
    }
    v328 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v328 = TerminalPramsManager_TypeInfo;
    }
    result = (BattleResultComponent_resultData_array *)v328->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
    if ( !result )
      goto LABEL_1211;
    result->max_length = 0;
    v329 = &result->max_length;
    *(v329 - 1) = 0;
    sub_1C2D434((CGThumbnailListItem_o *)v329, 0, (int32_t)method, v327);
  }
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v330 = HIDWORD((*m_Items)->bounds);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  v331 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v331 = TerminalPramsManager_TypeInfo;
  }
  v332 = v331->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C21463 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v331 = TerminalPramsManager_TypeInfo;
    byte_4C21463 = 1;
  }
  if ( !v331->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v331);
    v331 = TerminalPramsManager_TypeInfo;
  }
  SpecifiedSceneInfo = QuestPhaseMaster__GetSpecifiedSceneInfo(
                         (QuestPhaseMaster_o *)v325,
                         v330,
                         v332,
                         v331->static_fields->_PhaseCnt_k__BackingField + 1,
                         0);
  if ( !byte_4C24724 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24724 = 1;
  }
  v336 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v336 = TerminalPramsManager_TypeInfo;
  }
  v337 = v336->static_fields;
  v337->_SpecifiedChangeSceneInfo_k__BackingField = SpecifiedSceneInfo;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&v337->_SpecifiedChangeSceneInfo_k__BackingField,
    (int32_t)SpecifiedSceneInfo,
    v333,
    v334);
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId = 0;
  TerminalPramsManager__InitTipsArchiveScrollValueList(v338);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v340 = (int32_t)(*m_Items)->m_Items[53];
  v341 = TerminalPramsManager_TypeInfo;
  if ( v340 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C242F6 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C242F6 = 1;
    }
    v341 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v341 = TerminalPramsManager_TypeInfo;
    }
    v341->static_fields->_EventMuralId_k__BackingField = v340;
  }
  if ( !v341->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v341);
    v341 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = (CGThumbnailListItem_o *)&v341->static_fields->eventHarvestGrowthInfo;
  p_eventHarvestGrowthInfo->klass = 0;
  sub_1C2D434(p_eventHarvestGrowthInfo, 0, (int32_t)method, v339);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  v343 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v343 = TerminalPramsManager_TypeInfo;
  }
  result = (BattleResultComponent_resultData_array *)QuestPhaseMaster__GetEntity(
                                                       (QuestPhaseMaster_o *)v325,
                                                       v343->static_fields->_QuestId_k__BackingField,
                                                       1,
                                                       0);
  if ( !result )
    goto LABEL_1211;
  v344 = result;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(
                     (QuestPhaseEntity_o *)result,
                     (System_String_o *)StringLiteral_19922/*"harvestGrowthBeforeQuestId"*/,
                     -1,
                     0);
  v346 = QuestPhaseEntity__getScriptIntParam((QuestPhaseEntity_o *)v344, (System_String_o *)StringLiteral_19921/*"harvestGrowthAfterQuestId"*/, -1, 0);
  if ( ScriptIntParam >= 1 )
  {
    v347 = v346;
    if ( v346 >= 1 )
    {
      v348 = sub_1C2D6DC(EventHarvestGrowthInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v348, 0);
      if ( !v348 )
        goto LABEL_1211;
      bounds = v344->bounds;
      *(_DWORD *)(v348 + 24) = ScriptIntParam;
      *(_DWORD *)(v348 + 28) = v347;
      *(_QWORD *)(v348 + 16) = bounds;
      v352 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v352 = TerminalPramsManager_TypeInfo;
      }
      v353 = (CGThumbnailListItem_o *)&v352->static_fields->eventHarvestGrowthInfo;
      v353->klass = (CGThumbnailListItem_c *)v348;
      sub_1C2D434(v353, v348, v349, v350);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  v354 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v354 )
    goto LABEL_1211;
  QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)v354, result->m_Items[19]->fields.eventId, 0);
  if ( QuestEntity )
  {
    v356 = QuestEntity;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21464 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21464 = 1;
    }
    v357 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v357 = TerminalPramsManager_TypeInfo;
    }
    if ( QuestPhaseMaster__IsAreaImproveQuest(
           (QuestPhaseMaster_o *)v325,
           v357->static_fields->_QuestId_k__BackingField,
           0) )
    {
      SpotId = QuestEntity__getSpotId(v356, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
      if ( !*(_DWORD *)p_max_length )
        goto LABEL_1212;
      if ( !*m_Items || !result )
        goto LABEL_1211;
      CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                             (UserEventCooltimeRewardMaster_o *)result,
                             HIDWORD((*m_Items)->bounds),
                             SpotId,
                             0);
      if ( CurrentLevelEntity )
      {
        v360 = CurrentLevelEntity;
        v361 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v361 = TerminalPramsManager_TypeInfo;
        }
        eventAreaImproveResultInfo = v361->static_fields->eventAreaImproveResultInfo;
        if ( eventAreaImproveResultInfo )
        {
          if ( !v361->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v361);
            eventAreaImproveResultInfo = TerminalPramsManager_TypeInfo->static_fields->eventAreaImproveResultInfo;
            if ( !eventAreaImproveResultInfo )
              goto LABEL_1211;
          }
          eventAreaImproveResultInfo->fields.afterLevel = v360->fields.lv;
        }
      }
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C216DE = 1;
  }
  v363 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v363 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__SaveLastClearedGrandWar(v363->static_fields->_WarId_k__BackingField, (const MethodInfo *)isWin);
  result = (BattleResultComponent_resultData_array *)v422;
  if ( v422 )
  {
    result = (BattleResultComponent_resultData_array *)QuestPhaseEntity__GetMoveSceneInfo(v422, 0);
    if ( !result )
      goto LABEL_1211;
    if ( result->max_length )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C21464 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C21464 = 1;
      }
      v365 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v365 = TerminalPramsManager_TypeInfo;
      }
      v421 = v365->static_fields->_QuestId_k__BackingField;
      v366 = System_Int32__ToString((int32_t)&v421, 0);
      if ( !byte_4C21463 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C21463 = 1;
      }
      v367 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v367 = TerminalPramsManager_TypeInfo;
      }
      v421 = v367->static_fields->_PhaseCnt_k__BackingField + 1;
      v368 = System_Int32__ToString((int32_t)&v421, 0);
      v371 = System_String__Concat_63496112(v366, (System_String_o *)StringLiteral_811/*","*/, v368, 0);
      if ( !byte_4C24501 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24501 = 1;
      }
      v372 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v372 = TerminalPramsManager_TypeInfo;
      }
      p_SceneMoveQuestClearedInfo_k__BackingField = (CGThumbnailListItem_o *)&v372->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
      p_SceneMoveQuestClearedInfo_k__BackingField->klass = (CGThumbnailListItem_c *)v371;
      sub_1C2D434(p_SceneMoveQuestClearedInfo_k__BackingField, (int32_t)v371, v369, v370);
    }
  }
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v374 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[48];
  if ( v374 && v374->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C242FF )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C242FF = 1;
    }
    v375 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v375 = TerminalPramsManager_TypeInfo;
    }
    p_limitImageAnnounces_k__BackingField = (CGThumbnailListItem_o *)&v375->static_fields->_limitImageAnnounces_k__BackingField;
    p_limitImageAnnounces_k__BackingField->klass = v374;
    sub_1C2D434(p_limitImageAnnounces_k__BackingField, (int32_t)v374, (int32_t)method, v364);
  }
  v377 = sub_1C2D538(string___TypeInfo, 7);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  v378 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v378 = TerminalPramsManager_TypeInfo;
  }
  v421 = v378->static_fields->_QuestId_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v421, 0);
  if ( !v377 )
LABEL_1211:
    sub_1C2D6EC(result, isWin);
  if ( !*(_DWORD *)(v377 + 24) )
    goto LABEL_1212;
  *(_QWORD *)(v377 + 32) = result;
  sub_1C2D434((CGThumbnailListItem_o *)(v377 + 32), (int32_t)result, (int32_t)method, v379);
  if ( *(_DWORD *)(v377 + 24) <= 1u )
    goto LABEL_1212;
  v381 = StringLiteral_811/*","*/;
  *(_QWORD *)(v377 + 40) = StringLiteral_811/*","*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v377 + 40), v381, (int32_t)method, v380);
  if ( !byte_4C21463 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21463 = 1;
  }
  v382 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v382 = TerminalPramsManager_TypeInfo;
  }
  v421 = v382->static_fields->_PhaseCnt_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v421, 0);
  if ( *(_DWORD *)(v377 + 24) <= 2u )
    goto LABEL_1212;
  *(_QWORD *)(v377 + 48) = result;
  sub_1C2D434((CGThumbnailListItem_o *)(v377 + 48), (int32_t)result, (int32_t)method, v383);
  if ( *(_DWORD *)(v377 + 24) <= 3u )
    goto LABEL_1212;
  v385 = StringLiteral_811/*","*/;
  *(_QWORD *)(v377 + 56) = StringLiteral_811/*","*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v377 + 56), v385, (int32_t)method, v384);
  if ( !byte_4C23E93 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E93 = 1;
  }
  v386 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v386 = TerminalPramsManager_TypeInfo;
  }
  v412[0] = v386->static_fields->_IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v412, 0);
  if ( *(_DWORD *)(v377 + 24) <= 4u )
    goto LABEL_1212;
  *(_QWORD *)(v377 + 64) = result;
  sub_1C2D434((CGThumbnailListItem_o *)(v377 + 64), (int32_t)result, (int32_t)method, v387);
  if ( *(_DWORD *)(v377 + 24) <= 5u )
    goto LABEL_1212;
  v389 = StringLiteral_811/*","*/;
  *(_QWORD *)(v377 + 72) = StringLiteral_811/*","*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v377 + 72), v389, (int32_t)method, v388);
  if ( !byte_4C23E90 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E90 = 1;
  }
  v390 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v390 = TerminalPramsManager_TypeInfo;
  }
  v412[0] = v390->static_fields->_IsPhaseClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v412, 0);
  if ( *(_DWORD *)(v377 + 24) <= 6u )
    goto LABEL_1212;
  *(_QWORD *)(v377 + 80) = result;
  sub_1C2D434((CGThumbnailListItem_o *)(v377 + 80), (int32_t)result, (int32_t)method, v391);
  v392 = System_String__Concat_63498380((System_String_array *)v377, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_16709/*"afterActionBk"*/, v392, 0);
  TerminalPramsManager__SaveClearDatas(resulta, v393);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v394);
  TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(v395);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v396);
  TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(v397);
  TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(v398);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  v399 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v399 = TerminalPramsManager_TypeInfo;
  }
  v400 = v399->static_fields->_QuestId_k__BackingField;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__SetClearQuestWarEnableMyRoomBgChange(v400, 0);
  if ( TerminalPramsManager__IsTerminalEffectNT2BoardOpen(v401) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23BE7 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BE7 = 1;
    }
    v402 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v402 = TerminalPramsManager_TypeInfo;
    }
    v402->static_fields->_WarId_k__BackingField = 0;
    if ( !byte_4C21ACD )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      v402 = TerminalPramsManager_TypeInfo;
      byte_4C21ACD = 1;
    }
    if ( !v402->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v402);
      v402 = TerminalPramsManager_TypeInfo;
    }
    v402->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4C242E8 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      v402 = TerminalPramsManager_TypeInfo;
      byte_4C242E8 = 1;
    }
    if ( !v402->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v402);
      v402 = TerminalPramsManager_TypeInfo;
    }
    v402->static_fields->_IsMapReturnFolder_k__BackingField = 0;
    if ( !byte_4C244F4 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      v402 = TerminalPramsManager_TypeInfo;
      byte_4C244F4 = 1;
    }
    if ( !v402->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v402);
      v402 = TerminalPramsManager_TypeInfo;
    }
    v402->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData((const MethodInfo *)v402);
  }
}


void TerminalPramsManager__ResetBlankEarthSpotInfo(const MethodInfo *method)
{
  const MethodInfo *v1; // x0

  if ( (byte_4C246AF & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246AF = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23B25 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23B25 = 1;
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


void TerminalPramsManager__ResetResumeScriptWithMap(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  TerminalPramsManager_c *v3; // x0
  CGThumbnailListItem_o *p_TalkScriptInfo_k__BackingField; // x0
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4C246B9 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246B9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24716 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24716 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestMessageScriptQuestId_k__BackingField = -1;
  if ( !byte_4C24717 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C24717 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = -1;
  if ( !byte_4C24404 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C24404 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  p_TalkScriptInfo_k__BackingField = (CGThumbnailListItem_o *)&v3->static_fields->_TalkScriptInfo_k__BackingField;
  p_TalkScriptInfo_k__BackingField->klass = 0;
  sub_1C2D434(p_TalkScriptInfo_k__BackingField, 0, v1, v2);
  if ( !byte_4C24718 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24718 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
}


void TerminalPramsManager__SaveClearDatas(BattleResultComponent_resultData_array *result, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x22
  QuestRewardInfo_array *UseAddRewardItemRewardInfos_k__BackingField; // x20
  BattleResultComponent_resultData_o *v7; // x0
  const MethodInfo *v8; // x1
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
  TerminalPramsManager_c *v26; // x0
  TerminalPramsManager_ClearData_c *v27; // x0
  System_String_o *SAVEKEY_CLEAR_REWARD_DISP; // x19
  System_String_o *v29; // x1
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

  if ( (byte_4C246FF & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246FF = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v4->static_fields->mQuestRewardInfos;
  if ( !byte_4C21466 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4C21466 = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UseAddRewardItemRewardInfos_k__BackingField = v4->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
  if ( result )
  {
    if ( !LODWORD(result->max_length) )
      sub_1C2D6F4(v4, method, v2);
    v7 = result->m_Items[0];
    if ( !v7 )
      sub_1C2D6EC(0, method);
    if ( BattleResultComponent_resultData__checkResultDispFlag(v7, 2048, 0) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C21464 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C21464 = 1;
      }
      v9 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v9 = TerminalPramsManager_TypeInfo;
      }
      UseAddRewardItemRewardInfos_k__BackingField = 0;
      if ( TerminalPramsManager__IsUsePopupQuestReward(v9->static_fields->_QuestId_k__BackingField, v8) )
        mQuestRewardInfos = 0;
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
  if ( !byte_4C23E93 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C23E93 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  IsQuestClear_k__BackingField = v10->static_fields->_IsQuestClear_k__BackingField;
  if ( !byte_4C23E90 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C23E90 = 1;
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
  if ( !byte_4C24744 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C24744 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  oldSuperBoss = v10->static_fields->_oldSuperBoss_k__BackingField;
  if ( !byte_4C24742 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C24742 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss = v10->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !byte_4C24745 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C24745 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventPointWinReward_k__BackingField = v10->static_fields->_eventPointWinReward_k__BackingField;
  if ( !byte_4C2473C )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C2473C = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evpWinType = v10->static_fields->_eventPointWinType_k__BackingField;
  if ( !byte_4C244E9 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C244E9 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evRace = v10->static_fields->_eventRaceBoost_k__BackingField;
  if ( !byte_4C242FD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C242FD = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeRelease = v10->static_fields->_questClearCostumeRelease_k__BackingField;
  if ( !byte_4C242F3 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C242F3 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeGet_k__BackingField = v10->static_fields->_questClearCostumeGet_k__BackingField;
  if ( !byte_4C242F9 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C242F9 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  evTowerReward = v10->static_fields->_eventTowerReward_k__BackingField;
  if ( !byte_4C24746 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C24746 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v10->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  if ( !byte_4C22ECD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C22ECD = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  IsDispOnly_k__BackingField = v10->static_fields->_IsDispOnly_k__BackingField;
  if ( !byte_4C24305 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C24305 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  warClearRewardIn = v10->static_fields->_warClearReward_k__BackingField;
  if ( !byte_4C24747 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C24747 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventActivityPointEffectState = v10->static_fields->_EventActivityPointEffectState_k__BackingField;
  if ( !byte_4C242F4 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C242F4 = 1;
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
  if ( !byte_4C242FE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C242FE = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  limitImageAnnounces = v10->static_fields->_limitImageAnnounces_k__BackingField;
  if ( !byte_4C23B24 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C23B24 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  IsOrdealCallWarClear_k__BackingField = v10->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4C242F5 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C242F5 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  eventMuralId = v10->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_4C244F7 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C244F7 = 1;
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
  v25 = (TerminalPramsManager_ClearData_o *)sub_1C2D6DC(TerminalPramsManager_ClearData_TypeInfo);
  TerminalPramsManager_ClearData___ctor_37105360(
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
    0);
  if ( !byte_4C24748 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24748 = 1;
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
  v29 = JsonManager__toJson((Il2CppObject *)v25, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString(SAVEKEY_CLEAR_REWARD_DISP, v29, 0);
}


void TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  TerminalPramsManager_c *v2; // x0
  EventRaidDefeatedEffectInfo_o *EventRaidDefeatedEffectInfo_k__BackingField; // x0
  System_String_o *v4; // x0

  if ( (byte_4C24705 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11449/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_4C24705 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C2474A )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2474A = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  EventRaidDefeatedEffectInfo_k__BackingField = v2->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  if ( !EventRaidDefeatedEffectInfo_k__BackingField )
    sub_1C2D6EC(0, v1);
  v4 = EventRaidDefeatedEffectInfo__ConvertToStringData(EventRaidDefeatedEffectInfo_k__BackingField, v1);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11449/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v4, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveLastClearedGrandWar(int32_t warId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  int monitor; // w20
  BalanceConfig_c *v6; // x0
  GrandQuestRootComponent_c *v7; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C24711 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C2D490(&GrandQuestRootComponent_TypeInfo);
    byte_4C24711 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    warId,
                                    (const MethodInfo_3387DE4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
LABEL_15:
    sub_1C2D6EC(Master_object, v4);
  monitor = (int)entity[3].monitor;
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( monitor == v6->static_fields->GrandBoardWarId )
  {
    v7 = GrandQuestRootComponent_TypeInfo;
    if ( !GrandQuestRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GrandQuestRootComponent_TypeInfo);
      v7 = GrandQuestRootComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v7->static_fields->SAVE_KEY_LAST_CLEAR_GRAND_WAR, warId, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void TerminalPramsManager__SaveQuestInfo_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C246C6 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13703/*"TerminalPhaseCnt"*/);
    sub_1C2D490(&StringLiteral_13706/*"TerminalQuestId"*/);
    byte_4C246C6 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13706/*"TerminalQuestId"*/,
    v1->static_fields->_QuestId_k__BackingField,
    0);
  if ( !byte_4C21463 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21463 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13703/*"TerminalPhaseCnt"*/,
    v2->static_fields->_PhaseCnt_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveQuestRandomGroupList(const MethodInfo *method)
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
  _OWORD v17[2]; // [xsp+10h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C24709 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11458/*"SAVEKEY_QuestRandomGroupList"*/);
    sub_1C2D490(&StringLiteral_25154/*"{0}:{1}"*/);
    sub_1C2D490(&StringLiteral_811/*","*/);
    byte_4C24709 = 1;
  }
  memset(&v18, 0, 32);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23BDE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BDE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  QuestRandomGroupList_k__BackingField = v3->static_fields->_QuestRandomGroupList_k__BackingField;
  if ( !QuestRandomGroupList_k__BackingField )
    sub_1C2D6EC(0, v1);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v17,
    QuestRandomGroupList_k__BackingField,
    (const MethodInfo_33D8B9C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v18.fields._dictionary = v17[0];
  v18.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v17[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v18,
            (const MethodInfo_3536774 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int)v18.fields._current.fields.key;
    key_high = HIDWORD(v18.fields._current.fields.key);
    if ( !System_String__IsNullOrEmpty(Empty, 0) )
      Empty = System_String__Concat_63457864(Empty, (System_String_o *)StringLiteral_811/*","*/, 0);
    LODWORD(v17[0]) = key;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v17, v7, v8, v9);
    v16 = key_high;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v11, v12, v13);
    v15 = System_String__Format_63499156((System_String_o *)StringLiteral_25154/*"{0}:{1}"*/, v10, v14, 0);
    Empty = System_String__Concat_63457864(Empty, v15, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v18,
    (const MethodInfo_3536874 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11458/*"SAVEKEY_QuestRandomGroupList"*/, Empty, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveQuestReleasedFocusState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v3; // x1

  if ( (byte_4C246F1 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246F1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v1);
  if ( !QuestFocusStateManager )
    sub_1C2D6EC(0, v3);
  QuestFocusStateManager__WriteData(QuestFocusStateManager, 0);
}


void TerminalPramsManager__Save_SaveData(const MethodInfo *method)
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

  if ( (byte_4C246C4 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13696/*"TerminalEndTime"*/);
    sub_1C2D490(&StringLiteral_11456/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_1C2D490(&StringLiteral_13692/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C2D490(&StringLiteral_13697/*"TerminalEventDailyPointEventId"*/);
    sub_1C2D490(&StringLiteral_13703/*"TerminalPhaseCnt"*/);
    sub_1C2D490(&StringLiteral_13711/*"TerminalTimeStatusEventId"*/);
    sub_1C2D490(&StringLiteral_13695/*"TerminalDispState"*/);
    sub_1C2D490(&StringLiteral_11453/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_1C2D490(&StringLiteral_13698/*"TerminalIsDoneShortcut"*/);
    sub_1C2D490(&StringLiteral_11452/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C2D490(&StringLiteral_11457/*"SAVEKEY_PlayerGenderType"*/);
    sub_1C2D490(&StringLiteral_11445/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_1C2D490(&StringLiteral_11454/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_1C2D490(&StringLiteral_13706/*"TerminalQuestId"*/);
    sub_1C2D490(&StringLiteral_11465/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_1C2D490(&StringLiteral_13710/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_1C2D490(&StringLiteral_13715/*"TerminalWarId"*/);
    sub_1C2D490(&StringLiteral_13708/*"TerminalSpotId"*/);
    sub_1C2D490(&StringLiteral_13712/*"TerminalTimeStatusLoopCount"*/);
    sub_1C2D490(&StringLiteral_13693/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_1C2D490(&StringLiteral_11443/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_1C2D490(&StringLiteral_11448/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_1C2D490(&StringLiteral_13716/*"TerminalWarStartedIds"*/);
    sub_1C2D490(&StringLiteral_11447/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C2D490(&StringLiteral_811/*","*/);
    sub_1C2D490(&StringLiteral_11446/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_1C2D490(&StringLiteral_11455/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_1C2D490(&StringLiteral_11464/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4C246C4 = 1;
  }
  EndTime_k__BackingField = 0;
  MapModelClearQuestId_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23DDC )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23DDC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13695/*"TerminalDispState"*/,
    v1->static_fields->_DispState_k__BackingField,
    0);
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C216DE = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13715/*"TerminalWarId"*/, v2->static_fields->_WarId_k__BackingField, 0);
  if ( !byte_4C23DE0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23DE0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13708/*"TerminalSpotId"*/, v3->static_fields->_SpotId_k__BackingField, 0);
  if ( !byte_4C23B21 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23B21 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11443/*"SAVEKEY_BlankEarthSpotId"*/,
    v4->static_fields->_BlankEarthSpotId_k__BackingField,
    0);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13706/*"TerminalQuestId"*/,
    v5->static_fields->_QuestId_k__BackingField,
    0);
  if ( !byte_4C21463 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21463 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13703/*"TerminalPhaseCnt"*/,
    v6->static_fields->_PhaseCnt_k__BackingField,
    0);
  if ( !byte_4C23DE1 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23DE1 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v7->static_fields->_EndTime_k__BackingField;
  v8 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13696/*"TerminalEndTime"*/, v8, 0);
  if ( !byte_4C24320 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24320 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13698/*"TerminalIsDoneShortcut"*/,
    v9->static_fields->_IsDoneShortcut_k__BackingField,
    0);
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_13716/*"TerminalWarStartedIds"*/,
    v10->static_fields->mTerminalWarStartedIds,
    0);
  if ( !byte_4C244F1 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244F1 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13711/*"TerminalTimeStatusEventId"*/,
    v11->static_fields->_TimeStatusEventId_k__BackingField,
    0);
  if ( !byte_4C244F2 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244F2 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13712/*"TerminalTimeStatusLoopCount"*/,
    v12->static_fields->_TimeStatusLoopCount_k__BackingField,
    0);
  if ( !byte_4C24730 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24730 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13697/*"TerminalEventDailyPointEventId"*/,
    v13->static_fields->_EventDailyPointEventId_k__BackingField,
    0);
  if ( !byte_4C24731 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24731 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v14->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v15 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13710/*"TerminalTimeStatusEventDailyPoint"*/, v15, 0);
  if ( !byte_4C24732 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24732 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13692/*"TerminalBeforeEventActivityPoint"*/,
    v16->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0);
  if ( !byte_4C24733 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24733 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13693/*"TerminalBeforeEventActivityPointGauge"*/,
    v17->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0);
  if ( !byte_4C24734 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24734 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11456/*"SAVEKEY_PlayedTerminalEffects"*/,
    v18->static_fields->_PlayedTerminalEffects_k__BackingField,
    0);
  if ( !byte_4C24311 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24311 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11453/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v19->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24312 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24312 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11454/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v20->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0);
  if ( !byte_4C244F3 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244F3 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11455/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v21->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244F6 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244F6 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11465/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v22->static_fields->_SelectedStoryQuestId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11447/*"SAVEKEY_ConnectMarkEventId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    0);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11446/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0);
  if ( !byte_4C242EA )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C242EA = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11464/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v23->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0);
  if ( !byte_4C23BE0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BE0 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11445/*"SAVEKEY_ClearEventQuestIds"*/,
    v24->static_fields->_ClearEventQuestIds_k__BackingField,
    0);
  if ( !byte_4C23DDD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23DDD = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v25->static_fields->_MapModelClearQuestId_k__BackingField;
  v26 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  if ( !byte_4C23DDE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23DDE = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v27->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v28 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  v29 = System_String__Concat_63496112(v26, (System_String_o *)StringLiteral_811/*","*/, v28, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11452/*"SAVEKEY_MapModelClearQuestInfo"*/, v29, 0);
  if ( !byte_4C244F8 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244F8 = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11448/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v30->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24735 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24735 = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11457/*"SAVEKEY_PlayerGenderType"*/,
    v31->static_fields->_PlayerGenderType_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__SendClearQuestToAdManager(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  bool IsMainStoryForQuestId; // w21
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w1

  if ( (byte_4C246F9 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246F9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v5);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1C2D6EC(0, v8);
    if ( IsMainStoryForQuestId )
      v9 = 10;
    else
      v9 = 9;
    AdManager__TrackEvent((AdManager_o *)Instance, v9, 10, questId, questPhase, 0, 0);
  }
}


void TerminalPramsManager__SendOpenedQuestIdToAdManager(int32_t clearedQuestId, const MethodInfo *method)
{
  __int64 v3; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  int32_t klass_high; // w21
  Il2CppObject *MasterData_object; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *QuestIdsByTargetAndOpenCondType; // x19
  TerminalPramsManager___c_c *v14; // x8
  System_Func_int__bool__o *_9__730_0; // x21
  Il2CppObject *v16; // x22
  struct TerminalPramsManager___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_T__TResult__o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  System_Func_object__bool__o *v23; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  TerminalPramsManager___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  System_Func_object__int__o *_9__730_3; // x20
  Il2CppObject *v28; // x21
  struct TerminalPramsManager___c_StaticFields *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v32; // x0
  TerminalPramsManager___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  System_Func_int__int__o *_9__730_4; // x20
  Il2CppObject *v36; // x21
  struct TerminalPramsManager___c_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  int32_t v41; // w0
  int32_t v42; // w19
  Il2CppObject *v43; // [xsp+0h] [xbp-40h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C246FA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C2D490(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_int__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_int__QuestEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_QuestEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_1C2D490(&System_Func_int__int__TypeInfo);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&System_Func_QuestEntity__int__TypeInfo);
    sub_1C2D490(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1C2D490(&System_Func_int__QuestEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__730_0__);
    sub_1C2D490(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__730_3__);
    sub_1C2D490(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__730_4__);
    sub_1C2D490(&Method_TerminalPramsManager___c__DisplayClass730_0__SendOpenedQuestIdToAdManager_b__1__);
    sub_1C2D490(&Method_TerminalPramsManager___c__DisplayClass730_0__SendOpenedQuestIdToAdManager_b__2__);
    sub_1C2D490(&TerminalPramsManager___c__DisplayClass730_0_TypeInfo);
    sub_1C2D490(&TerminalPramsManager___c_TypeInfo);
    byte_4C246FA = 1;
  }
  v43 = 0;
  entity = 0;
  v3 = sub_1C2D6DC(TerminalPramsManager___c__DisplayClass730_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass730_0___ctor((TerminalPramsManager___c__DisplayClass730_0_o *)v3, 0);
  if ( clearedQuestId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !v3 )
      goto LABEL_43;
    *(_QWORD *)(v3 + 16) = Instance;
    sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Instance, v6, v7);
    Instance = *(DataManager_o **)(v3 + 16);
    if ( !Instance )
      goto LABEL_43;
    if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, clearedQuestId, 0) )
      return;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SpotMaster___);
    if ( !entity )
      goto LABEL_43;
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0);
    if ( !v8 )
      goto LABEL_43;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  v8,
                                  &v43,
                                  (int32_t)Instance,
                                  (const MethodInfo_3387DE4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
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
      if ( QuestEntity__GetTypeFlag(entity, 0) != 2 )
        return;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v3 + 24) = MasterData_object;
      sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)MasterData_object, v11, v12);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      if ( !Instance )
        goto LABEL_43;
      QuestIdsByTargetAndOpenCondType = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
                                                                                               (QuestReleaseMaster_o *)Instance,
                                                                                               clearedQuestId,
                                                                                               1,
                                                                                               0);
      v14 = TerminalPramsManager___c_TypeInfo;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v14 = TerminalPramsManager___c_TypeInfo;
      }
      _9__730_0 = v14->static_fields->__9__730_0;
      if ( !_9__730_0 )
      {
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          v14 = TerminalPramsManager___c_TypeInfo;
        }
        v16 = (Il2CppObject *)v14->static_fields->__9;
        _9__730_0 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__730_0,
          v16,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__730_0__,
          0);
        static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
        static_fields->__9__730_0 = _9__730_0;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__730_0, (int32_t)_9__730_0, v18, v19);
      }
      v20 = System_Linq_Enumerable__Where_int_(
              QuestIdsByTargetAndOpenCondType,
              (System_Func_TSource__bool__o *)_9__730_0,
              (const MethodInfo_3114B60 *)Method_System_Linq_Enumerable_Where_int___);
      v21 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_int__QuestEntity__TypeInfo);
      System_Func_int__object____ctor(
        v21,
        (Il2CppObject *)v3,
        Method_TerminalPramsManager___c__DisplayClass730_0__SendOpenedQuestIdToAdManager_b__1__,
        0);
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v20,
                                                                   (System_Func_TSource__TResult__o *)v21,
                                                                   (const MethodInfo_3102360 *)Method_System_Linq_Enumerable_Select_int__QuestEntity___);
      v23 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v23,
        (Il2CppObject *)v3,
        Method_TerminalPramsManager___c__DisplayClass730_0__SendOpenedQuestIdToAdManager_b__2__,
        0);
      v24 = System_Linq_Enumerable__Where_object_(
              v22,
              (System_Func_TSource__bool__o *)v23,
              (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v25 = TerminalPramsManager___c_TypeInfo;
      v26 = v24;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v25 = TerminalPramsManager___c_TypeInfo;
      }
      _9__730_3 = (System_Func_object__int__o *)v25->static_fields->__9__730_3;
      if ( !_9__730_3 )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          v25 = TerminalPramsManager___c_TypeInfo;
        }
        v28 = (Il2CppObject *)v25->static_fields->__9;
        _9__730_3 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_QuestEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__730_3,
          v28,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__730_3__,
          0);
        v29 = TerminalPramsManager___c_TypeInfo->static_fields;
        v29->__9__730_3 = (struct System_Func_QuestEntity__int__o *)_9__730_3;
        sub_1C2D434((CGThumbnailListItem_o *)&v29->__9__730_3, (int32_t)_9__730_3, v30, v31);
      }
      v32 = System_Linq_Enumerable__Select_object__int_(
              v26,
              (System_Func_TSource__TResult__o *)_9__730_3,
              (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_QuestEntity__int___);
      v33 = TerminalPramsManager___c_TypeInfo;
      v34 = (System_Collections_Generic_IEnumerable_TSource__o *)v32;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v33 = TerminalPramsManager___c_TypeInfo;
      }
      _9__730_4 = v33->static_fields->__9__730_4;
      if ( !_9__730_4 )
      {
        if ( !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          v33 = TerminalPramsManager___c_TypeInfo;
        }
        v36 = (Il2CppObject *)v33->static_fields->__9;
        _9__730_4 = (System_Func_int__int__o *)sub_1C2D6DC(System_Func_int__int__TypeInfo);
        System_Func_int__int____ctor(
          _9__730_4,
          v36,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__730_4__,
          0);
        v37 = TerminalPramsManager___c_TypeInfo->static_fields;
        v37->__9__730_4 = _9__730_4;
        sub_1C2D434((CGThumbnailListItem_o *)&v37->__9__730_4, (int32_t)_9__730_4, v38, v39);
      }
      v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_int__int_(
                                                                   v34,
                                                                   (System_Func_TSource__TKey__o *)_9__730_4,
                                                                   (const MethodInfo_30FE4E0 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
      v41 = System_Linq_Enumerable__FirstOrDefault_int_(
              v40,
              (const MethodInfo_30F67C4 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      if ( v41 )
      {
        v42 = v41;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetOpenedStoryQuest((AdManager_o *)Instance, v42, 0);
          return;
        }
LABEL_43:
        sub_1C2D6EC(Instance, v5);
      }
    }
  }
}


void TerminalPramsManager__SendResumeQuestToAdManager(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x19
  int32_t v7; // [xsp+8h] [xbp-18h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v7 = questPhase;
  v8 = questId;
  if ( (byte_4C246F8 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C2D490(&StringLiteral_19731/*"game.resume_quest_id"*/);
    sub_1C2D490(&StringLiteral_19732/*"game.resume_quest_phase"*/);
    byte_4C246F8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  if ( !Instance
    || (CrashReporter__AddCustomKey((CrashReporter_o *)Instance, (System_String_o *)StringLiteral_19731/*"game.resume_quest_id"*/, v4, 0),
        v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__),
        v4 = System_Int32__ToString((int32_t)&v7, 0),
        !v6) )
  {
    sub_1C2D6EC(v4, v5);
  }
  CrashReporter__AddCustomKey((CrashReporter_o *)v6, (System_String_o *)StringLiteral_19732/*"game.resume_quest_phase"*/, v4, 0);
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__SendStartQuestToAdManager(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  bool IsMainStoryForQuestId; // w21
  AdManager_o *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w1
  Il2CppObject *v10; // x19
  Il2CppObject *v11; // x19
  int32_t v12; // [xsp+8h] [xbp-28h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v12 = questPhase;
  v13 = questId;
  if ( (byte_4C246F7 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_19725/*"game.last_quest_id"*/);
    sub_1C2D490(&StringLiteral_19727/*"game.last_quest_phase"*/);
    byte_4C246F7 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v5);
    Instance = (AdManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance
      || (!IsMainStoryForQuestId ? (v9 = 9) : (v9 = 10),
          (AdManager__TrackEvent(Instance, v9, 9, questId, questPhase, 0, 0),
           v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__),
           Instance = (AdManager_o *)System_Int32__ToString((int32_t)&v13, 0),
           !v10)
       || (CrashReporter__AddCustomKey(
             (CrashReporter_o *)v10,
             (System_String_o *)StringLiteral_19725/*"game.last_quest_id"*/,
             (System_String_o *)Instance,
             0),
           v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__),
           Instance = (AdManager_o *)System_Int32__ToString((int32_t)&v12, 0),
           !v11)) )
    {
      sub_1C2D6EC(Instance, v8);
    }
    CrashReporter__AddCustomKey(
      (CrashReporter_o *)v11,
      (System_String_o *)StringLiteral_19727/*"game.last_quest_phase"*/,
      (System_String_o *)Instance,
      0);
  }
}


void TerminalPramsManager__SetAutoResumeByQuestId(int32_t questId, const MethodInfo *method)
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
  System_Nullable_int__o v16; // x0
  unsigned __int64 v17; // x21
  TerminalPramsManager_c *v18; // x0
  int32_t v19; // w21
  TerminalPramsManager_c *v20; // x0
  int32_t questPhase; // w21
  int64_t endTime; // x20
  Il2CppObject *v23; // x20
  WarEntity_o *WarEntityByWarID; // x0
  bool IsFolder; // w20
  TerminalPramsManager_c *v26; // x0
  int v27; // w8
  TerminalSceneComponent_c *v28; // x0
  UnityEngine_Object_o *mInstance; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *klass; // x8
  UnityEngine_Object_o *v31; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v32; // x8
  ScrTerminalListTop_o *v33; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v34; // x8
  UnityEngine_Object_o *genericContainerHandle; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v36; // x8
  const MethodInfo *v37; // x0
  unsigned __int64 v38; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C246B6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_int___ctor__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C246B6 = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23E95 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E95 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    QuestInfo = QuestTree__GetQuestInfo(Instance, questId, 0);
    if ( !QuestInfo )
      return;
    v7 = QuestInfo;
    warId = QuestInfo->fields.warId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23BE7 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BE7 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    Instance = (QuestTree_o *)MapControl_QuestInfo__GetSpotID(v7, 0);
    if ( !Master_object )
      goto LABEL_148;
    v11 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            (int32_t)Instance,
            (const MethodInfo_3387DE4 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    LODWORD(Master_object) = MapControl_QuestInfo__GetSpotID(v7, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v11 )
    {
      if ( byte_4C23B25 )
        goto LABEL_38;
    }
    else
    {
      if ( !byte_4C23BE6 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23BE6 = 1;
      }
      v12 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v12 = TerminalPramsManager_TypeInfo;
      }
      v12->static_fields->_SpotId_k__BackingField = (int)Master_object;
      WarInfo_k__BackingField = v7->fields._WarInfo_k__BackingField;
      if ( WarInfo_k__BackingField && (Mine = MapControl_WarInfo__GetMine(WarInfo_k__BackingField, 0)) != 0 )
      {
        parentBlankEarthSpotId = Mine->fields.parentBlankEarthSpotId;
        v16 = (System_Nullable_int__o)&v38;
        v38 = 0;
        System_Nullable_int____ctor(
          v16,
          parentBlankEarthSpotId,
          (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
        v17 = v38;
      }
      else
      {
        v17 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (Il2CppObject *)HIDWORD(v17);
      if ( byte_4C23B25 )
      {
LABEL_38:
        v18 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v18 = TerminalPramsManager_TypeInfo;
        }
        v18->static_fields->_BlankEarthSpotId_k__BackingField = (int)Master_object;
        v19 = v7->fields.questId;
        if ( !v18->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v18);
        if ( !byte_4C23BE1 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C23BE1 = 1;
        }
        v20 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v20 = TerminalPramsManager_TypeInfo;
        }
        v20->static_fields->_QuestId_k__BackingField = v19;
        questPhase = v7->fields.questPhase;
        if ( !byte_4C23BE5 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          v20 = TerminalPramsManager_TypeInfo;
          byte_4C23BE5 = 1;
        }
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = TerminalPramsManager_TypeInfo;
        }
        v20->static_fields->_PhaseCnt_k__BackingField = questPhase;
        endTime = v7->fields.endTime;
        if ( !byte_4C23BE2 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          v20 = TerminalPramsManager_TypeInfo;
          byte_4C23BE2 = 1;
        }
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = TerminalPramsManager_TypeInfo;
        }
        v20->static_fields->_EndTime_k__BackingField = endTime;
        if ( !byte_4C2431F )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          v20 = TerminalPramsManager_TypeInfo;
          byte_4C2431F = 1;
        }
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = TerminalPramsManager_TypeInfo;
        }
        v20->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 1;
        if ( !SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__) )
          goto LABEL_151;
        v23 = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C216DE )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C216DE = 1;
        }
        Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !v23 )
          goto LABEL_148;
        WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(
                             (QuestTree_o *)v23,
                             HIDWORD(Instance[1].fields.questReleaseEntList->klass),
                             0);
        if ( WarEntityByWarID )
        {
          IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( IsFolder )
          {
            if ( !byte_4C23BE3 )
            {
              sub_1C2D490(&TerminalPramsManager_TypeInfo);
              byte_4C23BE3 = 1;
            }
            v26 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v26 = TerminalPramsManager_TypeInfo;
            }
            v27 = 3;
          }
          else
          {
            if ( !byte_4C23BE3 )
            {
              sub_1C2D490(&TerminalPramsManager_TypeInfo);
              byte_4C23BE3 = 1;
            }
            v26 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v26 = TerminalPramsManager_TypeInfo;
            }
            v27 = 2;
          }
        }
        else
        {
LABEL_151:
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C23BE3 )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            byte_4C23BE3 = 1;
          }
          v26 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v26 = TerminalPramsManager_TypeInfo;
          }
          v27 = 1;
        }
        v26->static_fields->_DispState_k__BackingField = v27;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C21383 )
        {
          sub_1C2D490(&TerminalSceneComponent_TypeInfo);
          byte_4C21383 = 1;
        }
        v28 = TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v28 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = (UnityEngine_Object_o *)v28->static_fields->mInstance;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
          goto LABEL_140;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C21383 )
        {
          sub_1C2D490(&TerminalSceneComponent_TypeInfo);
          byte_4C21383 = 1;
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
          v31 = *(UnityEngine_Object_o **)&klass->_2.element_size;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4C21383 )
            {
              sub_1C2D490(&TerminalSceneComponent_TypeInfo);
              byte_4C21383 = 1;
            }
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            }
            v32 = Instance[1].fields.questReleaseEntList->klass;
            if ( !v32 )
              goto LABEL_148;
            v33 = *(ScrTerminalListTop_o **)&v32->_2.element_size;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C216DE )
            {
              sub_1C2D490(&TerminalPramsManager_TypeInfo);
              byte_4C216DE = 1;
            }
            Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
            }
            if ( !v33 )
              goto LABEL_148;
            ScrTerminalListTop__RequestChangeTerminalListBG(
              v33,
              HIDWORD(Instance[1].fields.questReleaseEntList->klass),
              0);
          }
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4C21383 )
          {
            sub_1C2D490(&TerminalSceneComponent_TypeInfo);
            byte_4C21383 = 1;
          }
          Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
          }
          v34 = Instance[1].fields.questReleaseEntList->klass;
          if ( v34 )
          {
            genericContainerHandle = (UnityEngine_Object_o *)v34->_2.genericContainerHandle;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(genericContainerHandle, 0, 0) )
              goto LABEL_140;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4C21383 )
            {
              sub_1C2D490(&TerminalSceneComponent_TypeInfo);
              byte_4C21383 = 1;
            }
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            }
            v36 = Instance[1].fields.questReleaseEntList->klass;
            if ( v36 )
            {
              Instance = (QuestTree_o *)v36->_2.genericContainerHandle;
              if ( Instance )
              {
                TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)Instance, 0);
LABEL_140:
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4C21ACD )
                {
                  sub_1C2D490(&TerminalPramsManager_TypeInfo);
                  byte_4C21ACD = 1;
                }
                v37 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v37 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                }
                *((_BYTE *)v37[2].virtualMethodPointer + 725) = 1;
                TerminalPramsManager__Save_SaveData(v37);
                return;
              }
            }
          }
        }
LABEL_148:
        sub_1C2D6EC(Instance, v5);
      }
    }
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23B25 = 1;
    goto LABEL_38;
  }
}


void TerminalPramsManager__SetAutoResumeByWarId(int32_t warId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  __int64 v4; // x1
  Il2CppObject *Instance; // x21
  TitleInfoControl_o *v6; // x0
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v8; // x21
  bool IsFolder; // w22
  TerminalPramsManager_c *v10; // x0
  char v11; // w22
  int v12; // w8
  BalanceConfig_c *v13; // x0
  TerminalPramsManager_c *v14; // x0
  int32_t parentBlankEarthSpotId; // w20
  TerminalPramsManager_c *v16; // x0
  TerminalSceneComponent_c *v17; // x0
  UnityEngine_Object_o *mInstance; // x20
  UISprite_c *klass; // x8
  UnityEngine_Object_o *v20; // x20
  UISprite_c *v21; // x8
  ScrTerminalListTop_o *v22; // x20
  UISprite_c *v23; // x8
  UnityEngine_Object_o *genericContainerHandle; // x20
  UISprite_c *v25; // x8
  const MethodInfo *v26; // x0

  if ( (byte_4C246B7 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C246B7 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23E95 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E95 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4C23BE7 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C23BE7 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = warId;
  if ( !SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__) )
    goto LABEL_124;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C216DE = 1;
  }
  v6 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_121;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, HIDWORD(v6->fields.mEventBgSp->klass), 0);
  if ( WarEntityByWarID )
  {
    v8 = WarEntityByWarID;
    IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( IsFolder )
    {
      if ( !byte_4C23BE3 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23BE3 = 1;
      }
      v10 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v10 = TerminalPramsManager_TypeInfo;
      }
      v11 = 0;
      v12 = 3;
    }
    else
    {
      if ( !byte_4C23BE3 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23BE3 = 1;
      }
      v10 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v10 = TerminalPramsManager_TypeInfo;
      }
      v11 = 0;
      v12 = 2;
    }
  }
  else
  {
LABEL_124:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23BE3 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BE3 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v8 = 0;
    v12 = 1;
    v11 = 1;
  }
  v10->static_fields->_DispState_k__BackingField = v12;
  v13 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  if ( v13->static_fields->GrandBoardWarId == warId )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C22143 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C22143 = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = TerminalPramsManager_TypeInfo;
    }
    v14->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField = 1;
  }
  if ( (v11 & 1) != 0 )
    parentBlankEarthSpotId = 0;
  else
    parentBlankEarthSpotId = v8->fields.parentBlankEarthSpotId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23B25 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23B25 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_BlankEarthSpotId_k__BackingField = parentBlankEarthSpotId;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
  }
  v17 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v17 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v17->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C21383 )
    {
      sub_1C2D490(&TerminalSceneComponent_TypeInfo);
      byte_4C21383 = 1;
    }
    v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v6->fields.mEventBgSp->klass;
    if ( !klass )
      goto LABEL_121;
    v20 = *(UnityEngine_Object_o **)&klass->_2.element_size;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C21383 )
      {
        sub_1C2D490(&TerminalSceneComponent_TypeInfo);
        byte_4C21383 = 1;
      }
      v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      }
      v21 = v6->fields.mEventBgSp->klass;
      if ( !v21 )
        goto LABEL_121;
      v22 = *(ScrTerminalListTop_o **)&v21->_2.element_size;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C216DE )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C216DE = 1;
      }
      v6 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v6 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v22 )
        goto LABEL_121;
      ScrTerminalListTop__RequestChangeTerminalListBG(v22, HIDWORD(v6->fields.mEventBgSp->klass), 0);
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C21383 )
    {
      sub_1C2D490(&TerminalSceneComponent_TypeInfo);
      byte_4C21383 = 1;
    }
    v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    v23 = v6->fields.mEventBgSp->klass;
    if ( !v23 )
      goto LABEL_121;
    genericContainerHandle = (UnityEngine_Object_o *)v23->_2.genericContainerHandle;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(genericContainerHandle, 0, 0) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C21383 )
      {
        sub_1C2D490(&TerminalSceneComponent_TypeInfo);
        byte_4C21383 = 1;
      }
      v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      }
      v25 = v6->fields.mEventBgSp->klass;
      if ( v25 )
      {
        v6 = (TitleInfoControl_o *)v25->_2.genericContainerHandle;
        if ( v6 )
        {
          TitleInfoControl__CloseEventBannerWindow(v6, 0);
          goto LABEL_114;
        }
      }
LABEL_121:
      sub_1C2D6EC(v6, v4);
    }
  }
LABEL_114:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21ACD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21ACD = 1;
  }
  v26 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_BYTE *)v26[2].virtualMethodPointer + 725) = 1;
  TerminalPramsManager__Save_SaveData(v26);
}


void TerminalPramsManager__SetAutoResumeForFolder(int32_t warId, const MethodInfo *method)
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
  BalanceConfig_c *v12; // x0
  TerminalPramsManager_c *v13; // x0
  int32_t monitor_high; // w20
  TerminalPramsManager_c *v15; // x0
  TerminalSceneComponent_c *v16; // x0
  UnityEngine_Object_o *mInstance; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *klass; // x8
  UnityEngine_Object_o *v19; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v20; // x8
  ScrTerminalListTop_o *v21; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v22; // x8
  UnityEngine_Object_o *genericContainerHandle; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v24; // x8
  const MethodInfo *v25; // x0
  WarEntity_o *WarEntityByWarID; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C246B8 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C246B8 = 1;
  }
  WarEntityByWarID = 0;
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23E95 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E95 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4C23BE7 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C23BE7 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4C23BE3 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C23BE3 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DispState_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( Instance )
  {
    entity = (Il2CppObject *)QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0);
    if ( entity )
      goto LABEL_25;
  }
  else
  {
    entity = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_135;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    warId,
    (const MethodInfo_3387DE4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( !entity )
    return;
LABEL_25:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C22145 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C22145 = 1;
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
    goto LABEL_135;
  PrioredParentId = WarEntity__GetPrioredParentId((WarEntity_o *)entity, 0);
  v9 = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( v9 )
  {
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)v9, PrioredParentId, 0);
    if ( WarEntityByWarID )
      goto LABEL_40;
  }
  else
  {
    WarEntityByWarID = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_135;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    (Il2CppObject **)&WarEntityByWarID,
    PrioredParentId,
    (const MethodInfo_3387DE4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( !WarEntityByWarID )
    return;
LABEL_40:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23BE7 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BE7 = 1;
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
    goto LABEL_135;
  if ( WarEntity__IsFolder(WarEntityByWarID, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23BE3 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BE3 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->_DispState_k__BackingField = 3;
  }
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( PrioredParentId == v12->static_fields->GrandBoardWarId )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C22143 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C22143 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v13->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField = 1;
  }
  if ( entity )
    monitor_high = HIDWORD(entity[7].monitor);
  else
    monitor_high = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23B25 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23B25 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_BlankEarthSpotId_k__BackingField = monitor_high;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
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
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
    goto LABEL_127;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Master_object[2].fields.list->klass;
  if ( !klass )
    goto LABEL_135;
  v19 = *(UnityEngine_Object_o **)&klass->_2.element_size;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C21383 )
    {
      sub_1C2D490(&TerminalSceneComponent_TypeInfo);
      byte_4C21383 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v20 = Master_object[2].fields.list->klass;
    if ( !v20 )
      goto LABEL_135;
    v21 = *(ScrTerminalListTop_o **)&v20->_2.element_size;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C216DE )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C216DE = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v21 )
      goto LABEL_135;
    ScrTerminalListTop__RequestChangeTerminalListBG(v21, HIDWORD(Master_object[2].fields.list->klass), 0);
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v22 = Master_object[2].fields.list->klass;
  if ( !v22 )
    goto LABEL_135;
  genericContainerHandle = (UnityEngine_Object_o *)v22->_2.genericContainerHandle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(genericContainerHandle, 0, 0) )
    goto LABEL_127;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v24 = Master_object[2].fields.list->klass;
  if ( !v24 || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v24->_2.genericContainerHandle) == 0 )
LABEL_135:
    sub_1C2D6EC(Master_object, v5);
  TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)Master_object, 0);
LABEL_127:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21ACD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21ACD = 1;
  }
  v25 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_BYTE *)v25[2].virtualMethodPointer + 725) = 1;
  TerminalPramsManager__Save_SaveData(v25);
}


void TerminalPramsManager__SetBattleResultCampaignBonus(
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
  CommonUI_CampaignBonusData_array *campaignbonus; // x19

  v4 = result;
  if ( (byte_4C246F5 & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_o *)sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246F5 = 1;
  }
  if ( !v4 )
    sub_1C2D6EC(result, method);
  campaignDirectBonus = v4->fields.campaignDirectBonus;
  if ( campaignDirectBonus && campaignDirectBonus->max_length )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C2472B )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C2472B = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v6->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = campaignDirectBonus;
    sub_1C2D434(
      (CGThumbnailListItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
      (int32_t)campaignDirectBonus,
      v2,
      v3);
    TerminalPramsManager__CampaignDirectBonus_SaveData(v8);
  }
  campaignbonus = v4->fields.campaignbonus;
  if ( campaignbonus && campaignbonus->max_length )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SetCampaignBonus(campaignbonus, method);
  }
}


void TerminalPramsManager__SetCampaignBonus(
        CommonUI_CampaignBonusData_array *campaignBonuses,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C246E0 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246E0 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C2472A )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2472A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignBonus_k__BackingField = campaignBonuses;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_CampaignBonus_k__BackingField, (int32_t)campaignBonuses, v2, v3);
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__SetFolderLastClickedIdx(int32_t warId, int32_t idx, const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  System_Collections_Generic_Dictionary_int__int__o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x0
  TerminalPramsManager_c *v12; // x0

  if ( (byte_4C246EC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246EC = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->folderLastIdxs )
  {
    v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v6,
      (const MethodInfo_33D7E00 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->folderLastIdxs = v6;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->folderLastIdxs, (int32_t)v6, v7, v8);
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
          (const MethodInfo_33D9B7C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__),
        (folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs) == 0) )
  {
    sub_1C2D6EC(folderLastIdxs, *(_QWORD *)&idx);
  }
  System_Collections_Generic_Dictionary_int__int___Add(
    folderLastIdxs,
    warId,
    idx,
    (const MethodInfo_33D87C4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !byte_4C2471B )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2471B = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_LastSelectQuestIndex_k__BackingField = idx;
}


void TerminalPramsManager__SetForcePlayEventTutorialArray(int32_t eventId, int32_t flagType, const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  System_Collections_Generic_HashSet_T__o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  TerminalPramsManager_c *v9; // x0
  CGThumbnailListItem_o *p_ForcePlayEventTutorialArray_k__BackingField; // x0
  System_Collections_Generic_Dictionary_int__int__o *v11; // x21
  System_Collections_Generic_HashSet_T__o *ForcePlayEventTutorialArray_k__BackingField; // x0
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0

  if ( (byte_4C24712 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Dictionary_int__int____ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_Dictionary_int__int___TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24712 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C2472D )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2472D = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->_ForcePlayEventTutorialArray_k__BackingField )
  {
    v6 = (System_Collections_Generic_HashSet_T__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_Dictionary_int__int___TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v6,
      (const MethodInfo_3640D88 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int____ctor__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C2474C )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C2474C = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    p_ForcePlayEventTutorialArray_k__BackingField = (CGThumbnailListItem_o *)&v9->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
    p_ForcePlayEventTutorialArray_k__BackingField->klass = (CGThumbnailListItem_c *)v6;
    sub_1C2D434(p_ForcePlayEventTutorialArray_k__BackingField, (int32_t)v6, v7, v8);
  }
  v11 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v11,
    (const MethodInfo_33D7E00 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v11 )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_int__int___Add(
    v11,
    eventId,
    flagType,
    (const MethodInfo_33D87C4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C2472D )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2472D = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  ForcePlayEventTutorialArray_k__BackingField = (System_Collections_Generic_HashSet_T__o *)v14->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
  if ( !ForcePlayEventTutorialArray_k__BackingField )
LABEL_26:
    sub_1C2D6EC(ForcePlayEventTutorialArray_k__BackingField, v13);
  System_Collections_Generic_HashSet_object___Add(
    ForcePlayEventTutorialArray_k__BackingField,
    (Il2CppObject *)v11,
    (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___Add__);
}


void TerminalPramsManager__SetQuestReleasedFocusState(int32_t questId, int32_t state, const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v7; // x1

  if ( (byte_4C246F2 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246F2 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v5);
  if ( !QuestFocusStateManager )
    sub_1C2D6EC(0, v7);
  QuestFocusStateManager__SetFocusState(QuestFocusStateManager, questId, state, 0);
}


void TerminalPramsManager__SetQuestRewardInfo(BattleResultComponent_resultData_array *result, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  CGThumbnailListItem_o *p_mQuestRewardInfos; // x0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  BattleResultComponent_resultData_o *v11; // x8
  CGThumbnailListItem_c *rewardInfos; // x20
  TerminalPramsManager_c *v13; // x0
  CGThumbnailListItem_o *v14; // x0
  TerminalPramsManager_c *v15; // x0
  CGThumbnailListItem_o *p_mQuestPhaseRewardInfos; // x0
  const MethodInfo *v17; // x3
  BattleResultComponent_resultData_o *v18; // x8
  CGThumbnailListItem_c *resultQuestPhaseRewardInfos; // x20
  TerminalPramsManager_c *v20; // x0
  CGThumbnailListItem_o *v21; // x0
  TerminalPramsManager_c *v22; // x0
  CGThumbnailListItem_o *p_mQuestResultAfterEventRewardInfos; // x0
  const MethodInfo *v24; // x3
  il2cpp_array_size_t max_length; // x8
  BattleResultComponent_resultData_o *v26; // x9
  CGThumbnailListItem_c *resultAfterEventRewardInfos; // x20
  TerminalPramsManager_c *v28; // x0
  CGThumbnailListItem_o *v29; // x0
  BattleResultComponent_resultData_o *v30; // x8
  const MethodInfo *v31; // x3
  struct QuestRewardInfo_array *resultUseRewardAddItemRewardInfos; // x20
  BattleResultComponent_resultData_o *v33; // x8
  TerminalPramsManager_c *v34; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C246F6 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246F6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (CGThumbnailListItem_o *)&v5->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0;
  sub_1C2D434(p_mQuestRewardInfos, 0, v2, v3);
  if ( !result )
    goto LABEL_44;
  if ( !LODWORD(result->max_length) )
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
    sub_1C2D434(v14, (int32_t)rewardInfos, v9, v10);
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = (CGThumbnailListItem_o *)&v15->static_fields->mQuestPhaseRewardInfos;
  p_mQuestPhaseRewardInfos->klass = 0;
  sub_1C2D434(p_mQuestPhaseRewardInfos, 0, v9, v10);
  if ( !LODWORD(result->max_length) )
    goto LABEL_45;
  v18 = result->m_Items[0];
  if ( !v18 )
    goto LABEL_44;
  resultQuestPhaseRewardInfos = (CGThumbnailListItem_c *)v18->fields.resultQuestPhaseRewardInfos;
  if ( resultQuestPhaseRewardInfos && resultQuestPhaseRewardInfos->_1.namespaze )
  {
    v20 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v20 = TerminalPramsManager_TypeInfo;
    }
    v21 = (CGThumbnailListItem_o *)&v20->static_fields->mQuestPhaseRewardInfos;
    v21->klass = resultQuestPhaseRewardInfos;
    sub_1C2D434(v21, (int32_t)resultQuestPhaseRewardInfos, v9, v17);
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestResultAfterEventRewardInfos = (CGThumbnailListItem_o *)&v22->static_fields->mQuestResultAfterEventRewardInfos;
  p_mQuestResultAfterEventRewardInfos->klass = 0;
  sub_1C2D434(p_mQuestResultAfterEventRewardInfos, 0, v9, v17);
  max_length = result->max_length;
  if ( !(_DWORD)max_length )
    goto LABEL_45;
  v26 = result->m_Items[0];
  if ( !v26 )
    goto LABEL_44;
  resultAfterEventRewardInfos = (CGThumbnailListItem_c *)v26->fields.resultAfterEventRewardInfos;
  if ( resultAfterEventRewardInfos && resultAfterEventRewardInfos->_1.namespaze )
  {
    v28 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v28 = TerminalPramsManager_TypeInfo;
    }
    v29 = (CGThumbnailListItem_o *)&v28->static_fields->mQuestResultAfterEventRewardInfos;
    v29->klass = resultAfterEventRewardInfos;
    sub_1C2D434(v29, (int32_t)resultAfterEventRewardInfos, v9, v24);
    max_length = result->max_length;
  }
  if ( !(_DWORD)max_length )
    goto LABEL_45;
  v30 = result->m_Items[0];
  if ( !v30 )
    goto LABEL_44;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)v30->fields.resultUseRewardAddItemRewardInfos,
                    0);
  resultUseRewardAddItemRewardInfos = 0;
  if ( IsNullOrEmpty )
    goto LABEL_37;
  if ( !LODWORD(result->max_length) )
LABEL_45:
    sub_1C2D6F4(IsNullOrEmpty, v8, v9);
  v33 = result->m_Items[0];
  if ( !v33 )
LABEL_44:
    sub_1C2D6EC(IsNullOrEmpty, v8);
  resultUseRewardAddItemRewardInfos = v33->fields.resultUseRewardAddItemRewardInfos;
LABEL_37:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21467 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21467 = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v34->static_fields;
  static_fields->_UseAddRewardItemRewardInfos_k__BackingField = resultUseRewardAddItemRewardInfos;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&static_fields->_UseAddRewardItemRewardInfos_k__BackingField,
    (int32_t)resultUseRewardAddItemRewardInfos,
    v9,
    v31);
}


void TerminalPramsManager__SetWarStartedId(int32_t war_id, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  System_String_o *mTerminalWarStartedIds; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = war_id;
  if ( (byte_4C246EA & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    byte_4C246EA = 1;
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
    v5 = System_Int32__ToString((int32_t)&v11, 0);
    v6 = System_String__Concat_63496112(mTerminalWarStartedIds, v5, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
    static_fields->mTerminalWarStartedIds = v6;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->mTerminalWarStartedIds, (int32_t)v6, v8, v9);
    TerminalPramsManager__Save_SaveData(v10);
  }
}


void TerminalPramsManager__SpotIdSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246C5 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13708/*"TerminalSpotId"*/);
    byte_4C246C5 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23DE0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23DE0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13708/*"TerminalSpotId"*/, v1->static_fields->_SpotId_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C246CB & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13692/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C2D490(&StringLiteral_13693/*"TerminalBeforeEventActivityPointGauge"*/);
    byte_4C246CB = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24732 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24732 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13692/*"TerminalBeforeEventActivityPoint"*/,
    v1->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0);
  if ( !byte_4C24733 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24733 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13693/*"TerminalBeforeEventActivityPointGauge"*/,
    v2->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventConquestInfoDispSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246D0 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11459/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    byte_4C246D0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11459/*"SAVEKEY_TerminalConquestInfoDisp"*/, v1->static_fields->eventConquestInfoDisp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  struct EventConquestInfo_array *eventConquestInfos; // x19
  System_String_o *v3; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4C246CF & 1) == 0 )
  {
    sub_1C2D490(&EventConquestInfo___TypeInfo);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11460/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_1C2D490(&StringLiteral_11459/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    byte_4C246CF = 1;
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
    eventConquestInfos = (struct EventConquestInfo_array *)sub_1C2D538(EventConquestInfo___TypeInfo, 0);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(&eventConquestInfos->obj, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11460/*"SAVEKEY_TerminalConquestInfos"*/, v3, 0);
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11459/*"SAVEKEY_TerminalConquestInfoDisp"*/, v4->static_fields->eventConquestInfoDisp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246D1 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11461/*"SAVEKEY_TerminalCraftInfoDisp"*/);
    byte_4C246D1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11461/*"SAVEKEY_TerminalCraftInfoDisp"*/, v1->static_fields->eventCraftInfoDisp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  Il2CppObject *eventHarvestGrowthInfo; // x19
  System_String_o *v3; // x0

  if ( (byte_4C246D2 & 1) == 0 )
  {
    sub_1C2D490(&EventHarvestGrowthInfo_TypeInfo);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11462/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    byte_4C246D2 = 1;
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
    eventHarvestGrowthInfo = (Il2CppObject *)sub_1C2D6DC(EventHarvestGrowthInfo_TypeInfo);
    System_Object___ctor(eventHarvestGrowthInfo, 0);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(eventHarvestGrowthInfo, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11462/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v3, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *BeforeEventSubmarineSaveData_k__BackingField; // x19
  System_String_o *v4; // x0

  if ( (byte_4C246CD & 1) == 0 )
  {
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13694/*"TerminalBeforeEventSubmarinePointData"*/);
    byte_4C246CD = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23CFF )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23CFF = 1;
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
    if ( !byte_4C23CFF )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23CFF = 1;
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
    v4 = JsonManager__toJson(BeforeEventSubmarineSaveData_k__BackingField, 0, 0, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13694/*"TerminalBeforeEventSubmarinePointData"*/, v4, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246DA & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11464/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4C246DA = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C242EA )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C242EA = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11464/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v1->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246D9 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11465/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    byte_4C246D9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C244F6 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244F6 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11465/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v1->static_fields->_SelectedStoryQuestId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalTransitionInfoSave_SaveData(
        TerminalTransitionInfo_o *terminalTransitionInfo,
        const MethodInfo *method)
{
  if ( (byte_4C246CA & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_13714/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_1C2D490(&StringLiteral_13713/*"TerminalTransitionInfoMissionId"*/);
    byte_4C246CA = 1;
  }
  if ( terminalTransitionInfo )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13713/*"TerminalTransitionInfoMissionId"*/, terminalTransitionInfo->fields.missionId, 0);
    UnityEngine_PlayerPrefs__SetString(
      (System_String_o *)StringLiteral_13714/*"TerminalTransitionInfoVoiceAssetName"*/,
      terminalTransitionInfo->fields.voiceAssetName,
      0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__UpdateEventRaidDefeatedEffectInfo(int32_t eventId, int32_t day, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v5; // x0
  __int64 v6; // x8
  System_Collections_Generic_List_int__o *v7; // x21
  __int64 v8; // x8
  Il2CppClass *klass; // x8
  _QWORD *v10; // x9
  __int64 entries_low; // x10
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C24704 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24704 = 1;
  }
  value = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C2474A )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2474A = 1;
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
          (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v7 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
    value = (Il2CppObject *)v7;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C2474A )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C2474A = 1;
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
          (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        goto LABEL_24;
      }
    }
LABEL_30:
    sub_1C2D6EC(v5, *(_QWORD *)&day);
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)value,
         day,
         (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
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
      *(const MethodInfo_376CB60 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(v5->fields._entries) = entries_low + 1;
    *((_DWORD *)&klass->_1.byval_arg.data + entries_low) = day;
  }
}


int32_t TerminalPramsManager__get_AfterActionFocusQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245BC & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245BC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_AfterActionFocusQuestId_k__BackingField;
}


BattleSetupInfo_o *TerminalPramsManager__get_BattleSetupKeep(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245DE & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245DE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BattleSetupKeep_k__BackingField;
}


int32_t TerminalPramsManager__get_BeforeClearQuest(const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v2; // x1
  Il2CppClass *klass; // x8
  __int64 v4; // x8
  Il2CppClass *v5; // x8
  __int64 v6; // x8
  int32_t *p_QuestId_k__BackingField; // x8
  TerminalPramsManager_c *v8; // x0

  if ( (byte_4C24616 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C24616 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__checkNowScene(Instance, 34, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C21383 )
    {
      sub_1C2D490(&TerminalSceneComponent_TypeInfo);
      byte_4C21383 = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = Instance[1].fields.sendData->klass;
    if ( !klass )
      goto LABEL_31;
    v4 = *(_QWORD *)&klass->_2.static_fields_size;
    if ( !v4 )
      goto LABEL_31;
    if ( *(_DWORD *)(v4 + 420) )
    {
      if ( !LODWORD(Instance[2].klass) )
        j_il2cpp_runtime_class_init_0(Instance);
      if ( !byte_4C21383 )
      {
        sub_1C2D490(&TerminalSceneComponent_TypeInfo);
        byte_4C21383 = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v5 = Instance[1].fields.sendData->klass;
      if ( v5 )
      {
        v6 = *(_QWORD *)&v5->_2.static_fields_size;
        if ( v6 )
        {
          p_QuestId_k__BackingField = (int32_t *)(v6 + 420);
          return *p_QuestId_k__BackingField;
        }
      }
LABEL_31:
      sub_1C2D6EC(Instance, v2);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
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


int32_t TerminalPramsManager__get_BeforeEventActivityPoint(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24631 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24631 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeEventActivityPoint_k__BackingField;
}


int32_t TerminalPramsManager__get_BeforeEventActivityPointGauge(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24633 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24633 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeEventActivityPointGauge_k__BackingField;
}


EventSaveData_o *TerminalPramsManager__get_BeforeEventSubmarineSaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24637 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24637 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
}


int32_t TerminalPramsManager__get_BeforeQuestStartWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246A0 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246A0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeQuestStartWarId_k__BackingField;
}


int64_t TerminalPramsManager__get_BeforeTimeEventDailyPoint(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24625 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24625 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
}


int32_t TerminalPramsManager__get_BlankEarthAfterActionFocusSpotId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24657 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24657 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField;
}


int32_t TerminalPramsManager__get_BlankEarthRank(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2465B & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2465B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BlankEarthRank_k__BackingField;
}


int32_t TerminalPramsManager__get_BlankEarthSpotId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24655 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24655 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BlankEarthSpotId_k__BackingField;
}


BlankEarthTransform_o *TerminalPramsManager__get_BlankEarthTransformData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24659 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24659 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BlankEarthTransformData_k__BackingField;
}


int32_t TerminalPramsManager__get_CaldeaGateFolderFocusWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2466D & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2466D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField;
}


CommonUI_CampaignBonusData_array *TerminalPramsManager__get_CampaignBonus(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245FC & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245FC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_CampaignBonus_k__BackingField;
}


CommonUI_CampaignDirectBonusData_array *TerminalPramsManager__get_CampaignDirectBonus(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245FE & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245FE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_CampaignDirectBonus_k__BackingField;
}


System_String_o *TerminalPramsManager__get_ClearEventQuestIds(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2462F & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2462F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_ClearEventQuestIds_k__BackingField;
}


int32_t TerminalPramsManager__get_CurrentWaveNum(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24671 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24671 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_CurrentWaveNum_k__BackingField;
}


int32_t TerminalPramsManager__get_DataLostBattleEventId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245EA & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245EA = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_DataLostBattleEventId_k__BackingField;
}


float TerminalPramsManager__get_DataLostBattleResetFadeInTime(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245F2 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245F2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_DataLostBattleResetFadeInTime_k__BackingField;
}


int32_t TerminalPramsManager__get_DataLostBattleWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245EC & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245EC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_DataLostBattleWarId_k__BackingField;
}


bool TerminalPramsManager__get_Debug_IsBuildInfoDisp(const MethodInfo *method)
{
  return 0;
}


bool TerminalPramsManager__get_Debug_IsDummyErrorSelect(const MethodInfo *method)
{
  return 0;
}


bool TerminalPramsManager__get_Debug_IsQuestReleaseAll(const MethodInfo *method)
{
  return 0;
}


bool TerminalPramsManager__get_Debug_IsSpeedUp(const MethodInfo *method)
{
  return 0;
}


bool TerminalPramsManager__get_Debug_IsWarStartActionSkip(const MethodInfo *method)
{
  return 0;
}


int32_t TerminalPramsManager__get_DispState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2459A & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2459A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_DispState_k__BackingField;
}


int64_t TerminalPramsManager__get_EndTime(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245E0 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245E0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EndTime_k__BackingField;
}


int32_t TerminalPramsManager__get_EventActionQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24600 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24600 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventActionQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_EventActivityPointEffectState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24635 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24635 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventActivityPointEffectState_k__BackingField;
}


int32_t TerminalPramsManager__get_EventBoardGameSquareIndex(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2463D & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2463D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventBoardGameSquareIndex_k__BackingField;
}


int32_t TerminalPramsManager__get_EventDailyPointEventId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24627 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24627 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventDailyPointEventId_k__BackingField;
}


int32_t TerminalPramsManager__get_EventDailyPointItem(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24623 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24623 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventDailyPointItem_k__BackingField;
}


int32_t TerminalPramsManager__get_EventMuralId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245CA & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245CA = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventMuralId_k__BackingField;
}


EventRaidDefeatedEffectInfo_o *TerminalPramsManager__get_EventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24639 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24639 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
}


int32_t TerminalPramsManager__get_EventUIEffectClearQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24661 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24661 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventUIEffectClearQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_EventUiWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246A2 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246A2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventUiWarId_k__BackingField;
}


System_Collections_Generic_HashSet_Dictionary_int__int___o *TerminalPramsManager__get_ForcePlayEventTutorialArray(
        const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246AC & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246AC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
}


int32_t TerminalPramsManager__get_FriendshipQuestDialogOpenId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24696 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24696 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_FriendshipQuestDialogOpenId_k__BackingField;
}


bool TerminalPramsManager__get_IsAutoFolder(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24684 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24684 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsAutoFolder_k__BackingField;
}


bool TerminalPramsManager__get_IsAutoNoSe(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24688 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24688 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsAutoNoSe_k__BackingField;
}


bool TerminalPramsManager__get_IsAutoOpenMasterMission(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246B2 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246B2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->mIsAutoOpenMasterMission;
}


bool TerminalPramsManager__get_IsAutoResume(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2467E & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2467E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsAutoResume_k__BackingField;
}


bool TerminalPramsManager__get_IsAutoShortcut(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24680 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24680 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsAutoShortcut_k__BackingField;
}


bool TerminalPramsManager__get_IsBackQuestBoardDisable(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2469E & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2469E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsBackQuestBoardDisable_k__BackingField;
}


bool TerminalPramsManager__get_IsBlankEarthShortcutMoving(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2465D & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2465D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsBlankEarthShortcutMoving_k__BackingField;
}


bool TerminalPramsManager__get_IsCheckHomeExpirationDateEventMap(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2468A & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2468A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->isCheckHomeExpirationDateEventMap;
}


bool TerminalPramsManager__get_IsDataLostBattleAutoReset(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245E8 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245E8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDataLostBattleAutoReset_k__BackingField;
}


bool TerminalPramsManager__get_IsDataLostBattleNoticePause(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245F4 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245F4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDataLostBattleNoticePause_k__BackingField;
}


bool TerminalPramsManager__get_IsDataLostBattleResetFadeIn(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245F0 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245F0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField;
}


bool TerminalPramsManager__get_IsDirectTransition(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24669 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24669 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDirectTransition_k__BackingField;
}


bool TerminalPramsManager__get_IsDispDone_AutoWebView(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245BE & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245BE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDispDone_AutoWebView_k__BackingField;
}


bool TerminalPramsManager__get_IsDispDone_UIStandFigure(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245C0 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245C0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDispDone_UIStandFigure_k__BackingField;
}


bool TerminalPramsManager__get_IsDispOnly(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245D2 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245D2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDispOnly_k__BackingField;
}


bool TerminalPramsManager__get_IsDispUIStandFigure(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245C2 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245C2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDispUIStandFigure_k__BackingField;
}


bool TerminalPramsManager__get_IsDoneShortcut(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245A8 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245A8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDoneShortcut_k__BackingField;
}


bool TerminalPramsManager__get_IsErrorDialogReturnTerminal(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246A6 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246A6 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsErrorDialogReturnTerminal_k__BackingField;
}


bool TerminalPramsManager__get_IsEventBoardGameDiceBtnActive(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2463F & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2463F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField;
}


bool TerminalPramsManager__get_IsForceFocusTerminalQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245B0 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245B0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsForceFocusTerminalQuestId_k__BackingField;
}


bool TerminalPramsManager__get_IsFromRecollectionBoard(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245AE & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245AE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsFromRecollectionBoard_k__BackingField;
}


bool TerminalPramsManager__get_IsInvisibleConnectAndLoad(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24676 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24676 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->isInvisibleConnectAndLoad;
}


bool TerminalPramsManager__get_IsMainInterludeWarClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245C8 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245C8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsMainInterludeWarClear_k__BackingField;
}


bool TerminalPramsManager__get_IsMapReturnFolder(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24682 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24682 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsMapReturnFolder_k__BackingField;
}


bool TerminalPramsManager__get_IsMoveFolderByQuestAfterAction(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24686 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24686 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField;
}


bool TerminalPramsManager__get_IsMoveToGrandQuestClassSelect(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246AA & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246AA = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField;
}


bool TerminalPramsManager__get_IsOrdealCallWarClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245C6 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245C6 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsOrdealCallWarClear_k__BackingField;
}


bool TerminalPramsManager__get_IsPhaseClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245D0 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245D0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPhaseClear_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayEventBoardGameArrivalEffectAuto(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245D6 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245D6 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayEventBoardGameDiceBtnActiveEffect(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24641 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24641 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayGetEffect(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245F8 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245F8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayGetEffect_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayScriptWithMap(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245D4 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245D4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayScriptWithMap_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayTerminalEffectDisappear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2464F & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2464F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField;
}


int32_t TerminalPramsManager__get_IsPlayTerminalEffectDisappearWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24651 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24651 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayTerminalEffectNt2AfterAction(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24653 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24653 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayedEntryBanner(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245F6 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245F6 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayedEntryBanner_k__BackingField;
}


bool TerminalPramsManager__get_IsQuestClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245CE & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245CE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsQuestClear_k__BackingField;
}


bool TerminalPramsManager__get_IsScriptDisp(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245D8 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245D8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsScriptDisp_k__BackingField;
}


bool TerminalPramsManager__get_IsSkipNoticeLoginQuestAtOnce(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2469C & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2469C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField;
}


bool TerminalPramsManager__get_IsStopMasterFaceOverwrite(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245EE & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245EE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsStopMasterFaceOverwrite_k__BackingField;
}


bool TerminalPramsManager__get_IsTopLastIdxNextBoardRequest(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2468C & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2468C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField;
}


bool TerminalPramsManager__get_IsTransFromOrdealCall(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24667 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24667 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsTransFromOrdealCall_k__BackingField;
}


bool TerminalPramsManager__get_IsTransOrdealCall(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24665 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24665 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsTransOrdealCall_k__BackingField;
}


bool TerminalPramsManager__get_IsWarBoardClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245E2 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245E2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsWarBoardClear_k__BackingField;
}


bool TerminalPramsManager__get_IsWarClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245C4 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245C4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsWarClear_k__BackingField;
}


int32_t TerminalPramsManager__get_LastPlayedFreeQuestSpotId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245B8 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245B8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
}


int32_t TerminalPramsManager__get_LastPlayedQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245B6 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245B6 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayedQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_LastSelectQuestIndex(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245BA & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245BA = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_LastSelectQuestIndex_k__BackingField;
}


int32_t TerminalPramsManager__get_LimitCountUnSealQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24698 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24698 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_LimitCountUnSealQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_MapModelClearPhaseCount(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245E6 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245E6 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_MapModelClearPhaseCount_k__BackingField;
}


int32_t TerminalPramsManager__get_MapModelClearQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245E4 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245E4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_MapModelClearQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_MasterMissionTargetType(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246B4 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246B4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_MasterMissionTargetType_k__BackingField;
}


int32_t TerminalPramsManager__get_MessageDispType(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245DA & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245DA = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_MessageDispType_k__BackingField;
}


System_String_o *TerminalPramsManager__get_NoticeLastModified(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2465F & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2465F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_NoticeLastModified_k__BackingField;
}


UserEventPointEntity_array *TerminalPramsManager__get_OldUserEventPoint(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24673 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24673 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_OldUserEventPoint_k__BackingField;
}


int32_t TerminalPramsManager__get_PhaseCnt(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245A6 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245A6 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_PhaseCnt_k__BackingField;
}


bool TerminalPramsManager__get_PlayHappinessCounterEffect(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245CC & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245CC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_PlayHappinessCounterEffect_k__BackingField;
}


System_String_o *TerminalPramsManager__get_PlayedTerminalEffects(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2464D & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2464D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_PlayedTerminalEffects_k__BackingField;
}


int32_t TerminalPramsManager__get_PlayerGenderType(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245FA & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245FA = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_PlayerGenderType_k__BackingField;
}


QuestFocusStateManager_o *TerminalPramsManager__get_QuestFocusStateManager(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  QuestFocusStateManager_o *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  TerminalPramsManager_c *v5; // x0
  CGThumbnailListItem_o *p_questFocusStateManager; // x0

  if ( (byte_4C24675 & 1) == 0 )
  {
    sub_1C2D490(&QuestFocusStateManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24675 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->questFocusStateManager )
  {
    v2 = (QuestFocusStateManager_o *)sub_1C2D6DC(QuestFocusStateManager_TypeInfo);
    QuestFocusStateManager___ctor(v2, 0);
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    p_questFocusStateManager = (CGThumbnailListItem_o *)&v5->static_fields->questFocusStateManager;
    p_questFocusStateManager->klass = (CGThumbnailListItem_c *)v2;
    sub_1C2D434(p_questFocusStateManager, (int32_t)v2, v3, v4);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->questFocusStateManager;
}


int32_t TerminalPramsManager__get_QuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245A4 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245A4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_QuestMessageScriptQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2468E & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2468E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestMessageScriptQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_QuestMessageScriptQuestPhase(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24690 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24690 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestMessageScriptQuestPhase_k__BackingField;
}


System_Collections_Generic_Dictionary_int__int__o *TerminalPramsManager__get_QuestRandomGroupList(
        const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2464B & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2464B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestRandomGroupList_k__BackingField;
}


int32_t TerminalPramsManager__get_QuestReleaseFocusQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245B2 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245B2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestReleaseFocusQuestId_k__BackingField;
}


System_String_o *TerminalPramsManager__get_QuestWindowMessage(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245DC & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245DC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestWindowMessage_k__BackingField;
}


System_String_o *TerminalPramsManager__get_SceneMoveQuestClearedInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24663 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24663 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
}


BannerEntity_o *TerminalPramsManager__get_SelectedBannerEntity(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245B4 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245B4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SelectedBannerEntity_k__BackingField;
}


int32_t TerminalPramsManager__get_SelectedRecollectionWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245AC & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245AC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SelectedRecollectionWarId_k__BackingField;
}


int32_t TerminalPramsManager__get_SelectedStoryQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245AA & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245AA = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SelectedStoryQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_ShopFocusItemId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2466B & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2466B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_ShopFocusItemId_k__BackingField;
}


SpecifiedSceneInfo_o *TerminalPramsManager__get_SpecifiedChangeSceneInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24604 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24604 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
}


int32_t TerminalPramsManager__get_SpotId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245A2 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245A2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SpotId_k__BackingField;
}


int32_t TerminalPramsManager__get_SummonId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C245A0 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245A0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SummonId_k__BackingField;
}


int32_t TerminalPramsManager__get_SummonType(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2459E & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2459E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SummonType_k__BackingField;
}


BattleScriptRootComponent_TalkScriptInfo_o *TerminalPramsManager__get_TalkScriptInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24692 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24692 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_TalkScriptInfo_k__BackingField;
}


int32_t TerminalPramsManager__get_TerminalTopFocusWarIdByShortcut(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2466F & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2466F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_TerminalTopFocusWarIdByShortcut_k__BackingField;
}


int32_t TerminalPramsManager__get_TimeStatusEventId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2462B & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2462B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_TimeStatusEventId_k__BackingField;
}


int32_t TerminalPramsManager__get_TimeStatusLoopCount(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2462D & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2462D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_TimeStatusLoopCount_k__BackingField;
}


System_String_o *TerminalPramsManager__get_TransitionScrollTabName(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246A4 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246A4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_TransitionScrollTabName_k__BackingField;
}


QuestRewardInfo_array *TerminalPramsManager__get_UseAddRewardItemRewardInfos(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246A8 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246A8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
}


WarBoardDataEntity_o *TerminalPramsManager__get_WarBoardData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24643 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24643 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_WarBoardData_k__BackingField;
}


int32_t TerminalPramsManager__get_WarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2459C & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2459C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_WarId_k__BackingField;
}


float TerminalPramsManager__get_ZoomSize(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  MapZoom_c *v2; // x8
  float ZOOM_DEFAULT; // s8

  if ( (byte_4C24602 & 1) == 0 )
  {
    sub_1C2D490(&MapZoom_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24602 = 1;
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


EventDailyPoint_o *TerminalPramsManager__get_eventDailyPoint(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24621 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24621 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventDailyPoint_k__BackingField;
}


EventPointWinReward_o *TerminalPramsManager__get_eventPointWinReward(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2460C & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2460C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventPointWinReward_k__BackingField;
}


int32_t TerminalPramsManager__get_eventPointWinType(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2460A & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2460A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventPointWinType_k__BackingField;
}


EventRaceBoostInfo_o *TerminalPramsManager__get_eventRaceBoost(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2460E & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2460E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventRaceBoost_k__BackingField;
}


EventTowerReward_o *TerminalPramsManager__get_eventTowerReward(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24617 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24617 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventTowerReward_k__BackingField;
}


bool TerminalPramsManager__get_isFortificationCheck(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24647 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24647 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isFortificationCheck_k__BackingField;
}


bool TerminalPramsManager__get_isIncomingCall(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2463B & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2463B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isIncomingCall_k__BackingField;
}


bool TerminalPramsManager__get_isPlayRiverActionCheck(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24649 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24649 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isPlayRiverActionCheck_k__BackingField;
}


bool TerminalPramsManager__get_isQuestRewardSetted(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2467C & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2467C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isQuestRewardSetted_k__BackingField;
}


bool TerminalPramsManager__get_isWarBoardPlay(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24645 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24645 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isWarBoardPlay_k__BackingField;
}


LimitImageAnnounce_array *TerminalPramsManager__get_limitImageAnnounces(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24694 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24694 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_limitImageAnnounces_k__BackingField;
}


UserSuperBossEntity_array *TerminalPramsManager__get_oldPersonalBoss(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24608 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24608 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_oldPersonalBoss_k__BackingField;
}


int32_t TerminalPramsManager__get_oldQuestIdForHeaderEvent(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24614 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24614 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_oldQuestIdForHeaderEvent_k__BackingField;
}


UserSuperBossEntity_array *TerminalPramsManager__get_oldSuperBoss(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24606 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24606 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_oldSuperBoss_k__BackingField;
}


CostumeReleaseAnnounce_array *TerminalPramsManager__get_questClearCostumeGet(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24612 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24612 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_questClearCostumeGet_k__BackingField;
}


CostumeReleaseAnnounce_array *TerminalPramsManager__get_questClearCostumeRelease(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24610 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24610 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_questClearCostumeRelease_k__BackingField;
}


QuestRewardInfo_array *TerminalPramsManager__get_resultBoostItemRewardInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2461B & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2461B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_resultBoostItemRewardInfo_k__BackingField;
}


QuestRewardInfo_array *TerminalPramsManager__get_resultEventBoardGameTokenRewardInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2461D & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2461D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
}


QuestRewardInfo_array *TerminalPramsManager__get_resultEventTowerRewardInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24619 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24619 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_resultEventTowerRewardInfo_k__BackingField;
}


TimeStatusRecord_o *TerminalPramsManager__get_timeStatusRecord(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2461F & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2461F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_timeStatusRecord_k__BackingField;
}


UpdateProfileDialogInfoEntity_array *TerminalPramsManager__get_updateProfileInfoEntity(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C2469A & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2469A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_updateProfileInfoEntity_k__BackingField;
}


WarClearReward_array *TerminalPramsManager__get_warClearReward(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C24629 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24629 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_warClearReward_k__BackingField;
}


int32_t TerminalPramsManager__mfGetSceneStatus(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C246BD & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246BD = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->meSceneStatus;
}


void TerminalPramsManager__mfSetSceneStatus(int32_t eSceneStatus, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C246BC & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246BC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->meSceneStatus = eSceneStatus;
}


void TerminalPramsManager__set_AfterActionFocusQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245BD & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245BD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_AfterActionFocusQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_BattleSetupKeep(BattleSetupInfo_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C245DF & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245DF = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BattleSetupKeep_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_BattleSetupKeep_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_BeforeEventActivityPoint(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24632 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24632 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeEventActivityPoint_k__BackingField = value;
}


void TerminalPramsManager__set_BeforeEventActivityPointGauge(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24634 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24634 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeEventActivityPointGauge_k__BackingField = value;
}


void TerminalPramsManager__set_BeforeEventSubmarineSaveData(EventSaveData_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  CGThumbnailListItem_o *static_fields; // x8

  if ( (byte_4C24638 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24638 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (CGThumbnailListItem_o *)v5->static_fields;
  static_fields[3].klass = (CGThumbnailListItem_c *)value;
  sub_1C2D434(static_fields + 3, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_BeforeQuestStartWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C246A1 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246A1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeQuestStartWarId_k__BackingField = value;
}


void TerminalPramsManager__set_BeforeTimeEventDailyPoint(int64_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24626 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24626 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = value;
}


void TerminalPramsManager__set_BlankEarthAfterActionFocusSpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24658 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24658 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = value;
}


void TerminalPramsManager__set_BlankEarthRank(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2465C & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2465C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BlankEarthRank_k__BackingField = value;
}


void TerminalPramsManager__set_BlankEarthSpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24656 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24656 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BlankEarthSpotId_k__BackingField = value;
}


void TerminalPramsManager__set_BlankEarthTransformData(BlankEarthTransform_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C2465A & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2465A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BlankEarthTransformData_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_BlankEarthTransformData_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_CaldeaGateFolderFocusWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2466E & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2466E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField = value;
}


void TerminalPramsManager__set_CampaignBonus(CommonUI_CampaignBonusData_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C245FD & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245FD = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignBonus_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_CampaignBonus_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_CampaignDirectBonus(
        CommonUI_CampaignDirectBonusData_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C245FF & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245FF = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_ClearEventQuestIds(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C24630 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24630 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_ClearEventQuestIds_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_ClearEventQuestIds_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_CurrentWaveNum(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24672 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24672 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_CurrentWaveNum_k__BackingField = value;
}


void TerminalPramsManager__set_DataLostBattleEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245EB & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245EB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DataLostBattleEventId_k__BackingField = value;
}


void TerminalPramsManager__set_DataLostBattleResetFadeInTime(float value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245F3 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245F3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = value;
}


void TerminalPramsManager__set_DataLostBattleWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245ED & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245ED = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DataLostBattleWarId_k__BackingField = value;
}


void TerminalPramsManager__set_Debug_IsBuildInfoDisp(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2467B & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2467B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mDebug_IsBuildInfoDisp = value;
}


void TerminalPramsManager__set_Debug_IsDummyErrorSelect(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2467A & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2467A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mDebug_IsDummyErrorSelect = value;
}


void TerminalPramsManager__set_Debug_IsQuestReleaseAll(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24678 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24678 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mDebug_IsQuestReleaseAll = value;
}


void TerminalPramsManager__set_Debug_IsWarStartActionSkip(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24679 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24679 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mDebug_IsWarStartActionSkip = value;
}


void TerminalPramsManager__set_DispState(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2459B & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2459B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DispState_k__BackingField = value;
}


void TerminalPramsManager__set_EndTime(int64_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245E1 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245E1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EndTime_k__BackingField = value;
}


void TerminalPramsManager__set_EventActionQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24601 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24601 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventActionQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_EventActivityPointEffectState(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24636 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24636 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventActivityPointEffectState_k__BackingField = value;
}


void TerminalPramsManager__set_EventBoardGameSquareIndex(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2463E & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2463E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventBoardGameSquareIndex_k__BackingField = value;
}


void TerminalPramsManager__set_EventDailyPointEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24628 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24628 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventDailyPointEventId_k__BackingField = value;
}


void TerminalPramsManager__set_EventDailyPointItem(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24624 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24624 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventDailyPointItem_k__BackingField = value;
}


void TerminalPramsManager__set_EventMuralId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245CB & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245CB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventMuralId_k__BackingField = value;
}


void TerminalPramsManager__set_EventRaidDefeatedEffectInfo(
        EventRaidDefeatedEffectInfo_o *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C2463A & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2463A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void TerminalPramsManager__set_EventUIEffectClearQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24662 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24662 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventUIEffectClearQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_EventUiWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C246A3 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246A3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventUiWarId_k__BackingField = value;
}


void TerminalPramsManager__set_ForcePlayEventTutorialArray(
        System_Collections_Generic_HashSet_Dictionary_int__int___o *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C246AD & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246AD = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_ForcePlayEventTutorialArray_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&static_fields->_ForcePlayEventTutorialArray_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void TerminalPramsManager__set_FriendshipQuestDialogOpenId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24697 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24697 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_FriendshipQuestDialogOpenId_k__BackingField = value;
}


void TerminalPramsManager__set_IsAutoFolder(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24685 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24685 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoFolder_k__BackingField = value;
}


void TerminalPramsManager__set_IsAutoNoSe(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24689 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24689 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoNoSe_k__BackingField = value;
}


void TerminalPramsManager__set_IsAutoOpenMasterMission(bool value, const MethodInfo *method)
{
  bool v3; // w19
  TerminalPramsManager_c *v4; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C246B3 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246B3 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v3 = value;
  if ( !byte_4C21ACD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21ACD = 1;
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


void TerminalPramsManager__set_IsAutoResume(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2467F & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2467F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = value;
}


void TerminalPramsManager__set_IsAutoShortcut(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24681 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24681 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoShortcut_k__BackingField = value;
}


void TerminalPramsManager__set_IsBackQuestBoardDisable(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2469F & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2469F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsBackQuestBoardDisable_k__BackingField = value;
}


void TerminalPramsManager__set_IsBlankEarthShortcutMoving(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2465E & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2465E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsBlankEarthShortcutMoving_k__BackingField = value;
}


void TerminalPramsManager__set_IsCheckHomeExpirationDateEventMap(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2468B & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2468B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->isCheckHomeExpirationDateEventMap = value;
}


void TerminalPramsManager__set_IsDataLostBattleAutoReset(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245E9 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245E9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDataLostBattleAutoReset_k__BackingField = value;
}


void TerminalPramsManager__set_IsDataLostBattleNoticePause(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245F5 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245F5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDataLostBattleNoticePause_k__BackingField = value;
}


void TerminalPramsManager__set_IsDataLostBattleResetFadeIn(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245F1 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245F1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField = value;
}


void TerminalPramsManager__set_IsDirectTransition(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2466A & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2466A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDirectTransition_k__BackingField = value;
}


void TerminalPramsManager__set_IsDispDone_AutoWebView(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245BF & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245BF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispDone_AutoWebView_k__BackingField = value;
}


void TerminalPramsManager__set_IsDispDone_UIStandFigure(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245C1 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245C1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispDone_UIStandFigure_k__BackingField = value;
}


void TerminalPramsManager__set_IsDispOnly(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245D3 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245D3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispOnly_k__BackingField = value;
}


void TerminalPramsManager__set_IsDispUIStandFigure(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245C3 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245C3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispUIStandFigure_k__BackingField = value;
}


void TerminalPramsManager__set_IsDoneShortcut(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245A9 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245A9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDoneShortcut_k__BackingField = value;
}


void TerminalPramsManager__set_IsErrorDialogReturnTerminal(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C246A7 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246A7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsErrorDialogReturnTerminal_k__BackingField = value;
}


void TerminalPramsManager__set_IsEventBoardGameDiceBtnActive(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24640 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24640 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = value;
}


void TerminalPramsManager__set_IsForceFocusTerminalQuestId(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245B1 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245B1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_IsFromRecollectionBoard(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245AF & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245AF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsFromRecollectionBoard_k__BackingField = value;
}


void TerminalPramsManager__set_IsInvisibleConnectAndLoad(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24677 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24677 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->isInvisibleConnectAndLoad = value;
}


void TerminalPramsManager__set_IsMainInterludeWarClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245C9 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245C9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsMainInterludeWarClear_k__BackingField = value;
}


void TerminalPramsManager__set_IsMapReturnFolder(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24683 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24683 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsMapReturnFolder_k__BackingField = value;
}


void TerminalPramsManager__set_IsMoveFolderByQuestAfterAction(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24687 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24687 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField = value;
}


void TerminalPramsManager__set_IsMoveToGrandQuestClassSelect(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C246AB & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246AB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField = value;
}


void TerminalPramsManager__set_IsOrdealCallWarClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245C7 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245C7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = value;
}


void TerminalPramsManager__set_IsPhaseClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245D1 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245D1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPhaseClear_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayEventBoardGameArrivalEffectAuto(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245D7 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245D7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayEventBoardGameDiceBtnActiveEffect(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24642 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24642 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayGetEffect(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245F9 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245F9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayGetEffect_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayScriptWithMap(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245D5 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245D5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayScriptWithMap_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayTerminalEffectDisappear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24650 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24650 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayTerminalEffectDisappearWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24652 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24652 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayTerminalEffectNt2AfterAction(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24654 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24654 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayedEntryBanner(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245F7 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245F7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayedEntryBanner_k__BackingField = value;
}


void TerminalPramsManager__set_IsQuestClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245CF & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245CF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsQuestClear_k__BackingField = value;
}


void TerminalPramsManager__set_IsScriptDisp(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245D9 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245D9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsScriptDisp_k__BackingField = value;
}


void TerminalPramsManager__set_IsSkipNoticeLoginQuestAtOnce(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2469D & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2469D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = value;
}


void TerminalPramsManager__set_IsStopMasterFaceOverwrite(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245EF & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245EF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = value;
}


void TerminalPramsManager__set_IsTopLastIdxNextBoardRequest(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2468D & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2468D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = value;
}


void TerminalPramsManager__set_IsTransFromOrdealCall(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24668 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24668 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsTransFromOrdealCall_k__BackingField = value;
}


void TerminalPramsManager__set_IsTransOrdealCall(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24666 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24666 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsTransOrdealCall_k__BackingField = value;
}


void TerminalPramsManager__set_IsWarBoardClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245E3 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245E3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsWarBoardClear_k__BackingField = value;
}


void TerminalPramsManager__set_IsWarClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245C5 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245C5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsWarClear_k__BackingField = value;
}


void TerminalPramsManager__set_LastPlayedFreeQuestSpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245B9 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245B9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = value;
}


void TerminalPramsManager__set_LastPlayedQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245B7 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245B7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayedQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_LastSelectQuestIndex(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245BB & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245BB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastSelectQuestIndex_k__BackingField = value;
}


void TerminalPramsManager__set_LimitCountUnSealQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24699 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24699 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LimitCountUnSealQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_MapModelClearPhaseCount(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245E7 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245E7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_MapModelClearPhaseCount_k__BackingField = value;
}


void TerminalPramsManager__set_MapModelClearQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245E5 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245E5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_MapModelClearQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_MasterMissionTargetType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C246B5 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246B5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_MasterMissionTargetType_k__BackingField = value;
}


void TerminalPramsManager__set_MessageDispType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245DB & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245DB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_MessageDispType_k__BackingField = value;
}


void TerminalPramsManager__set_NoticeLastModified(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C24660 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24660 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_NoticeLastModified_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_NoticeLastModified_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_OldUserEventPoint(UserEventPointEntity_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C24674 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24674 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_OldUserEventPoint_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_OldUserEventPoint_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_PhaseCnt(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245A7 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245A7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_PhaseCnt_k__BackingField = value;
}


void TerminalPramsManager__set_PlayHappinessCounterEffect(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245CD & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245CD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_PlayHappinessCounterEffect_k__BackingField = value;
}


void TerminalPramsManager__set_PlayedTerminalEffects(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C2464E & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2464E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_PlayedTerminalEffects_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_PlayedTerminalEffects_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_PlayerGenderType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245FB & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245FB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_PlayerGenderType_k__BackingField = value;
}


void TerminalPramsManager__set_QuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245A5 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245A5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestId_k__BackingField = value;
}


void TerminalPramsManager__set_QuestMessageScriptQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2468F & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2468F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestMessageScriptQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_QuestMessageScriptQuestPhase(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24691 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24691 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = value;
}


void TerminalPramsManager__set_QuestRandomGroupList(
        System_Collections_Generic_Dictionary_int__int__o *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C2464C & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2464C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_QuestRandomGroupList_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_QuestRandomGroupList_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_QuestReleaseFocusQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245B3 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245B3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestReleaseFocusQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_QuestWindowMessage(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C245DD & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245DD = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_QuestWindowMessage_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_SceneMoveQuestClearedInfo(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C24664 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24664 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SceneMoveQuestClearedInfo_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&static_fields->_SceneMoveQuestClearedInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void TerminalPramsManager__set_SelectedBannerEntity(BannerEntity_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C245B5 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245B5 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_SelectedRecollectionWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245AD & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245AD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SelectedRecollectionWarId_k__BackingField = value;
}


void TerminalPramsManager__set_SelectedStoryQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245AB & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245AB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SelectedStoryQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_ShopFocusItemId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2466C & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2466C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_ShopFocusItemId_k__BackingField = value;
}


void TerminalPramsManager__set_SpecifiedChangeSceneInfo(SpecifiedSceneInfo_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C24605 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24605 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SpecifiedChangeSceneInfo_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void TerminalPramsManager__set_SpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245A3 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245A3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SpotId_k__BackingField = value;
}


void TerminalPramsManager__set_SummonId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C245A1 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C245A1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SummonId_k__BackingField = value;
}


void TerminalPramsManager__set_SummonType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2459F & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2459F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SummonType_k__BackingField = value;
}


void TerminalPramsManager__set_TalkScriptInfo(
        BattleScriptRootComponent_TalkScriptInfo_o *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C24693 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24693 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_TalkScriptInfo_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_TalkScriptInfo_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_TerminalTopFocusWarIdByShortcut(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24670 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24670 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_TerminalTopFocusWarIdByShortcut_k__BackingField = value;
}


void TerminalPramsManager__set_TimeStatusEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2462C & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2462C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_TimeStatusEventId_k__BackingField = value;
}


void TerminalPramsManager__set_TimeStatusLoopCount(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2462E & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2462E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_TimeStatusLoopCount_k__BackingField = value;
}


void TerminalPramsManager__set_TransitionScrollTabName(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C246A5 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246A5 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_TransitionScrollTabName_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_TransitionScrollTabName_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_UseAddRewardItemRewardInfos(QuestRewardInfo_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C246A9 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C246A9 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_UseAddRewardItemRewardInfos_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&static_fields->_UseAddRewardItemRewardInfos_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void TerminalPramsManager__set_WarBoardData(WarBoardDataEntity_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C24644 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24644 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_WarBoardData_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_WarBoardData_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_WarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2459D & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2459D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = value;
}


void TerminalPramsManager__set_ZoomSize(float value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24603 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24603 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mZoomSize = value;
}


void TerminalPramsManager__set_eventDailyPoint(EventDailyPoint_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C24622 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24622 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventDailyPoint_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_eventDailyPoint_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_eventPointWinReward(EventPointWinReward_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C2460D & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2460D = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventPointWinReward_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_eventPointWinReward_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_eventPointWinType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2460B & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2460B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_eventPointWinType_k__BackingField = value;
}


void TerminalPramsManager__set_eventRaceBoost(EventRaceBoostInfo_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C2460F & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2460F = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventRaceBoost_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_eventRaceBoost_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_eventTowerReward(EventTowerReward_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C24618 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24618 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventTowerReward_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_eventTowerReward_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_isFortificationCheck(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24648 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24648 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isFortificationCheck_k__BackingField = value;
}


void TerminalPramsManager__set_isIncomingCall(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2463C & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2463C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isIncomingCall_k__BackingField = value;
}


void TerminalPramsManager__set_isPlayRiverActionCheck(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2464A & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2464A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isPlayRiverActionCheck_k__BackingField = value;
}


void TerminalPramsManager__set_isQuestRewardSetted(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C2467D & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2467D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isQuestRewardSetted_k__BackingField = value;
}


void TerminalPramsManager__set_isWarBoardPlay(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24646 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24646 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isWarBoardPlay_k__BackingField = value;
}


void TerminalPramsManager__set_limitImageAnnounces(LimitImageAnnounce_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C24695 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24695 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_limitImageAnnounces_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_limitImageAnnounces_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_oldPersonalBoss(UserSuperBossEntity_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C24609 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24609 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_oldPersonalBoss_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_oldPersonalBoss_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_oldQuestIdForHeaderEvent(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C24615 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24615 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = value;
}


void TerminalPramsManager__set_oldSuperBoss(UserSuperBossEntity_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C24607 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24607 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_oldSuperBoss_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_oldSuperBoss_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_questClearCostumeGet(CostumeReleaseAnnounce_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  CGThumbnailListItem_o *static_fields; // x8

  if ( (byte_4C24613 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24613 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (CGThumbnailListItem_o *)v5->static_fields;
  static_fields[2].klass = (CGThumbnailListItem_c *)value;
  sub_1C2D434(static_fields + 2, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_questClearCostumeRelease(CostumeReleaseAnnounce_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C24611 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24611 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_questClearCostumeRelease_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&static_fields->_questClearCostumeRelease_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void TerminalPramsManager__set_resultBoostItemRewardInfo(QuestRewardInfo_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C2461C & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2461C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultBoostItemRewardInfo_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&static_fields->_resultBoostItemRewardInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void TerminalPramsManager__set_resultEventBoardGameTokenRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C2461E & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2461E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void TerminalPramsManager__set_resultEventTowerRewardInfo(QuestRewardInfo_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C2461A & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2461A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultEventTowerRewardInfo_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&static_fields->_resultEventTowerRewardInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void TerminalPramsManager__set_timeStatusRecord(TimeStatusRecord_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C24620 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24620 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_timeStatusRecord_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_timeStatusRecord_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_updateProfileInfoEntity(
        UpdateProfileDialogInfoEntity_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C2469B & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2469B = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_updateProfileInfoEntity_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_updateProfileInfoEntity_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_warClearReward(WarClearReward_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C2462A & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2462A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_warClearReward_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_warClearReward_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager_ClearData___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C24753 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C2D490(&StringLiteral_13362/*"TERMINAL_CLEAR_REWARD_DISP"*/);
    byte_4C24753 = 1;
  }
  TerminalPramsManager_ClearData_TypeInfo->static_fields->SAVEKEY_CLEAR_REWARD_DISP = (struct System_String_o *)StringLiteral_13362/*"TERMINAL_CLEAR_REWARD_DISP"*/;
  sub_1C2D434(
    (CGThumbnailListItem_o *)TerminalPramsManager_ClearData_TypeInfo->static_fields,
    StringLiteral_13362/*"TERMINAL_CLEAR_REWARD_DISP"*/,
    v1,
    v2);
}


void TerminalPramsManager_ClearData___ctor(TerminalPramsManager_ClearData_o *this, const MethodInfo *method)
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

  if ( (byte_4C24751 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24751 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.qClearHeroineInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, 0, v3, v4);
  this->fields.questRewardInfos = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRewardInfos, 0, v5, v6);
  this->fields.questPhaseRewardInfos = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questPhaseRewardInfos, 0, v7, v8);
  this->fields.questResultAfterEventRewardInfos = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questResultAfterEventRewardInfos, 0, v9, v10);
  this->fields.resultEventPanelRewardInfos = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resultEventPanelRewardInfos, 0, v11, v12);
  this->fields.panelEventPoint = 0;
  *(_QWORD *)&this->fields.clearedLastBattleRaidId = -1;
  this->fields.joinGroup = -1;
  this->fields.mOldSuperBoss = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mOldSuperBoss, 0, v13, v14);
  this->fields.oldPersonalBoss = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.oldPersonalBoss, 0, v15, v16);
  this->fields.evPointWinReward = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.evPointWinReward, 0, v17, v18);
  this->fields.evPointWinType = 0;
  this->fields.evRaceBoost = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.evRaceBoost, 0, v19, v20);
  this->fields.questClearCostume = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questClearCostume, 0, v21, v22);
  this->fields.questClearCostumeGetInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questClearCostumeGetInfo, 0, v23, v24);
  this->fields.eventTowerReward = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventTowerReward, 0, v25, v26);
  this->fields.resultEventTowerRewardInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resultEventTowerRewardInfo, 0, v27, v28);
  this->fields.warClearReward = 0;
  this->fields.isDispOnly = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.warClearReward, 0, v29, v30);
  v33 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  this->fields.EventActivityPointEffectState = v33->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  this->fields.limitImageAnnounces = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.limitImageAnnounces, 0, v31, v32);
  this->fields.isOrdealCallWarClear = 0;
  this->fields.eventMuralId = 0;
  this->fields.playHappinessCounterEffect = 0;
  this->fields.oldUserEventPoint = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.oldUserEventPoint, 0, v34, v35);
  this->fields.UseAddRewardItemRewardInfos = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.UseAddRewardItemRewardInfos, 0, v36, v37);
}


void TerminalPramsManager_ClearData___ctor_37105360(
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
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v43; // x26
  __int64 v44; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  bool v48; // w29
  bool v49; // w23
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int32_t v56; // w2
  const MethodInfo *v57; // x3
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
  struct QuestRewardInfo_array *v70; // x1
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  TerminalPramsManager_c *v73; // x0
  TerminalPramsManager_c *v74; // x0
  struct QuestRewardInfo_array *resultBoostItemRewardInfo_k__BackingField; // x1
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  TerminalPramsManager_c *v80; // x0
  TerminalPramsManager_c *v81; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo_k__BackingField; // x1
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  struct WarClearReward_array *v85; // x1
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  struct BattleDropItem_array *v88; // x1
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  struct BattleDropItem_array *v91; // x1
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  struct LimitImageAnnounce_array *v94; // x1
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  TerminalPramsManager_c *v97; // x0
  struct QuestRewardInfo_array *v98; // x20
  struct UserEventPointEntity_array *OldUserEventPoint_k__BackingField; // x1
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  long double inited; // q0
  _QWORD *v103; // x20
  __int64 v104; // x8
  __int64 v105; // x0
  __int64 v106; // x0

  v31 = oldSuperBoss;
  v38 = questClearCostumeGet;
  v39 = questClearCostumeRelease;
  v40 = oldPersonalBoss;
  if ( (byte_4C24752 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_QuestRewardInfo___);
    sub_1C2D490(&BattleDropItem___TypeInfo);
    sub_1C2D490(&CostumeReleaseAnnounce___TypeInfo);
    sub_1C2D490(&LimitImageAnnounce___TypeInfo);
    sub_1C2D490(&TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
    sub_1C2D490(&QuestRewardInfo___TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&UserSuperBossEntity___TypeInfo);
    sub_1C2D490(&WarClearReward___TypeInfo);
    byte_4C24752 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v41 = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)sub_1C2D6DC(TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
  v43 = v41;
  if ( qcrHeroineInfo )
  {
    TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_37104588(v41, qcrHeroineInfo, v42);
    if ( this )
      goto LABEL_5;
LABEL_34:
    sub_1C2D6EC(v44, v45);
  }
  System_Object___ctor((Il2CppObject *)v41, 0);
  v43->fields.oldUsrSvtData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v43->fields, 0, v76, v77);
  if ( !this )
    goto LABEL_34;
LABEL_5:
  this->fields.qClearHeroineInfo = v43;
  v48 = qClear;
  v49 = pclear;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v43, v46, v47);
  if ( !qri )
    qri = (QuestRewardInfo_array *)sub_1C2D538(QuestRewardInfo___TypeInfo, 0);
  this->fields.questRewardInfos = qri;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRewardInfos, (int32_t)qri, v50, v51);
  if ( !questPhaseRewardInfos )
    questPhaseRewardInfos = (QuestRewardInfo_array *)sub_1C2D538(QuestRewardInfo___TypeInfo, 0);
  this->fields.questPhaseRewardInfos = questPhaseRewardInfos;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questPhaseRewardInfos, (int32_t)questPhaseRewardInfos, v52, v53);
  this->fields.questClear = v48;
  this->fields.phaseClear = v49;
  this->fields.clearedLastBattleRaidId = lastRaidId;
  this->fields.clearedBattleRaidId = raidId;
  this->fields.joinGroup = groupjoin;
  if ( !oldSuperBoss )
    v31 = (struct UserSuperBossEntity_array *)sub_1C2D538(UserSuperBossEntity___TypeInfo, 0);
  this->fields.mOldSuperBoss = v31;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mOldSuperBoss, (int32_t)v31, v54, v55);
  if ( !oldPersonalBoss )
    v40 = (struct UserSuperBossEntity_array *)sub_1C2D538(UserSuperBossEntity___TypeInfo, 0);
  this->fields.oldPersonalBoss = v40;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.oldPersonalBoss, (int32_t)v40, v56, v57);
  this->fields.evPointWinReward = evpWinReward;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.evPointWinReward, (int32_t)evpWinReward, v58, v59);
  this->fields.evRaceBoost = evRace;
  this->fields.evPointWinType = evpWinType;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.evRaceBoost, (int32_t)evRace, v60, v61);
  if ( !questClearCostumeRelease )
    v39 = (struct CostumeReleaseAnnounce_array *)sub_1C2D538(CostumeReleaseAnnounce___TypeInfo, 0);
  this->fields.questClearCostume = v39;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questClearCostume, (int32_t)v39, v62, v63);
  if ( !questClearCostumeGet )
    v38 = (struct CostumeReleaseAnnounce_array *)sub_1C2D538(CostumeReleaseAnnounce___TypeInfo, 0);
  this->fields.questClearCostumeGetInfo = v38;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questClearCostumeGetInfo, (int32_t)v38, v64, v65);
  this->fields.eventTowerReward = evTowerReward;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventTowerReward, (int32_t)evTowerReward, v66, v67);
  v70 = resultEvTowerRewardInfo;
  if ( !resultEvTowerRewardInfo )
    v70 = (struct QuestRewardInfo_array *)sub_1C2D538(QuestRewardInfo___TypeInfo, 0);
  this->fields.resultEventTowerRewardInfo = v70;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resultEventTowerRewardInfo, (int32_t)v70, v68, v69);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C242FA )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C242FA = 1;
  }
  v73 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v73 = TerminalPramsManager_TypeInfo;
  }
  if ( v73->static_fields->_resultBoostItemRewardInfo_k__BackingField )
  {
    if ( !v73->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v73);
    if ( !byte_4C242FA )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C242FA = 1;
    }
    v74 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v74 = TerminalPramsManager_TypeInfo;
    }
    resultBoostItemRewardInfo_k__BackingField = v74->static_fields->_resultBoostItemRewardInfo_k__BackingField;
  }
  else
  {
    resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1C2D538(
                                                                                  QuestRewardInfo___TypeInfo,
                                                                                  0);
  }
  this->fields.resultBoostItemRewardInfo = resultBoostItemRewardInfo_k__BackingField;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.resultBoostItemRewardInfo,
    (int32_t)resultBoostItemRewardInfo_k__BackingField,
    v71,
    v72);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C242F2 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C242F2 = 1;
  }
  v80 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v80 = TerminalPramsManager_TypeInfo;
  }
  if ( v80->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField )
  {
    if ( !v80->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v80);
    if ( !byte_4C242F2 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C242F2 = 1;
    }
    v81 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v81 = TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfo_k__BackingField = v81->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
  }
  else
  {
    resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1C2D538(
                                                                                            QuestRewardInfo___TypeInfo,
                                                                                            0);
  }
  this->fields.resultEventBoardGameTokenRewardInfo = resultEventBoardGameTokenRewardInfo_k__BackingField;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.resultEventBoardGameTokenRewardInfo,
    (int32_t)resultEventBoardGameTokenRewardInfo_k__BackingField,
    v78,
    v79);
  v85 = warClearRewardIn;
  this->fields.isDispOnly = dispOnly;
  if ( !warClearRewardIn )
    v85 = (struct WarClearReward_array *)sub_1C2D538(WarClearReward___TypeInfo, 0);
  this->fields.warClearReward = v85;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.warClearReward, (int32_t)v85, v83, v84);
  v88 = questResultAfterEventRewardInfos;
  this->fields.isWarBoardClear = isWarBoardClear;
  this->fields.EventActivityPointEffectState = eventActivityPointEffectState;
  if ( !questResultAfterEventRewardInfos )
    v88 = (struct BattleDropItem_array *)sub_1C2D538(BattleDropItem___TypeInfo, 0);
  this->fields.questResultAfterEventRewardInfos = v88;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questResultAfterEventRewardInfos, (int32_t)v88, v86, v87);
  v91 = resultEventPanelRewardInfos;
  if ( !resultEventPanelRewardInfos )
    v91 = (struct BattleDropItem_array *)sub_1C2D538(BattleDropItem___TypeInfo, 0);
  this->fields.resultEventPanelRewardInfos = v91;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resultEventPanelRewardInfos, (int32_t)v91, v89, v90);
  v94 = limitImageAnnounces;
  this->fields.panelEventPoint = panelEventPoint;
  if ( !limitImageAnnounces )
    v94 = (struct LimitImageAnnounce_array *)sub_1C2D538(LimitImageAnnounce___TypeInfo, 0);
  this->fields.limitImageAnnounces = v94;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.limitImageAnnounces, (int32_t)v94, v92, v93);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23B24 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23B24 = 1;
  }
  v97 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v97 = TerminalPramsManager_TypeInfo;
  }
  this->fields.isOrdealCallWarClear = v97->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4C242F5 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v97 = TerminalPramsManager_TypeInfo;
    byte_4C242F5 = 1;
  }
  if ( !v97->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v97);
    v97 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventMuralId = v97->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_4C244F7 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v97 = TerminalPramsManager_TypeInfo;
    byte_4C244F7 = 1;
  }
  if ( !v97->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v97);
    v97 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventActionQuestId = v97->static_fields->_EventActionQuestId_k__BackingField;
  if ( !byte_4C242F7 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v97 = TerminalPramsManager_TypeInfo;
    byte_4C242F7 = 1;
  }
  if ( !v97->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v97);
    v97 = TerminalPramsManager_TypeInfo;
  }
  this->fields.playHappinessCounterEffect = v97->static_fields->_PlayHappinessCounterEffect_k__BackingField;
  if ( !byte_4C23CFE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v97 = TerminalPramsManager_TypeInfo;
    byte_4C23CFE = 1;
  }
  if ( !v97->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v97);
    v97 = TerminalPramsManager_TypeInfo;
  }
  v98 = useAddRewardItemRewardInfos;
  OldUserEventPoint_k__BackingField = v97->static_fields->_OldUserEventPoint_k__BackingField;
  this->fields.oldUserEventPoint = OldUserEventPoint_k__BackingField;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.oldUserEventPoint,
    (int32_t)OldUserEventPoint_k__BackingField,
    v95,
    v96);
  if ( !useAddRewardItemRewardInfos )
  {
    v103 = Method_System_Array_Empty_QuestRewardInfo___;
    v104 = *((_QWORD *)Method_System_Array_Empty_QuestRewardInfo___ + 7);
    if ( !v104 )
    {
      sub_1C7DC00(Method_System_Array_Empty_QuestRewardInfo___);
      v104 = v103[7];
    }
    v105 = *(_QWORD *)(v104 + 16);
    if ( (*(_BYTE *)(v105 + 309) & 1) == 0 )
      v105 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v105 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v105);
    v106 = *(_QWORD *)(v103[7] + 16LL);
    if ( (*(_BYTE *)(v106 + 309) & 1) == 0 )
      v106 = sub_1C7DBA4(inited);
    v98 = **(struct QuestRewardInfo_array ***)(v106 + 184);
  }
  this->fields.UseAddRewardItemRewardInfos = v98;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.UseAddRewardItemRewardInfos, (int32_t)v98, v100, v101);
}


void TerminalPramsManager_OldHeroineLawData___ctor(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalPramsManager_OldHeroineLawData___ctor_37103824(
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

  if ( (byte_4C2474D & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2474D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !uSvtEnt )
    sub_1C2D6EC(v5, v6);
  v7 = *(_OWORD *)&uSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  this->fields.id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v12, 0);
  v8 = *(_OWORD *)&uSvtEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v11, 0);
  v10 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v14, 0);
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                              uSvtEnt->fields.limitCount,
                              0);
  this->fields.imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                   uSvtEnt->fields.imageLimitCount,
                                   0);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                  uSvtEnt->fields.dispLimitCount,
                                  0);
  this->fields.commandCardLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                         uSvtEnt->fields.commandCardLimitCount,
                                         0);
  this->fields.iconLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                  uSvtEnt->fields.iconLimitCount,
                                  0);
  *(_OWORD *)&this->fields.lv = *(_OWORD *)&uSvtEnt->fields.lv;
  *(_OWORD *)&this->fields.adjustAtk = *(_OWORD *)&uSvtEnt->fields.adjustAtk;
  *(_OWORD *)&this->fields.skillLv3 = *(_OWORD *)&uSvtEnt->fields.skillLv3;
  this->fields.createdAt = uSvtEnt->fields.createdAt;
}


UserServantEntity_o *TerminalPramsManager_OldHeroineLawData__GetLoad(
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

  if ( (byte_4C2474E & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&UserServantEntity_TypeInfo);
    byte_4C2474E = 1;
  }
  v3 = sub_1C2D6DC(UserServantEntity_TypeInfo);
  UserServantEntity___ctor((UserServantEntity_o *)v3, 0);
  id = this->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v12, id, 0);
  v13 = v12;
  if ( !v3 )
    sub_1C2D6EC(v5, v6);
  v7 = *(_OWORD *)&v13.fields.fakeValue;
  *(_OWORD *)(v3 + 16) = *(_OWORD *)&v13.fields.currentCryptoKey;
  *(_OWORD *)(v3 + 32) = v7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v11, this->fields.userId, 0);
  v8 = *(_OWORD *)&v11.fields.fakeValue;
  v12 = v11;
  *(_OWORD *)(v3 + 48) = *(_OWORD *)&v11.fields.currentCryptoKey;
  *(_OWORD *)(v3 + 64) = v8;
  svtId = this->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v3 + 80) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                    svtId,
                                                                    0);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v3 + 96) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                    this->fields.limitCount,
                                                                    0);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v3 + 112) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.imageLimitCount,
                                                                     0);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v3 + 128) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.dispLimitCount,
                                                                     0);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v3 + 144) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.commandCardLimitCount,
                                                                     0);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v3 + 160) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.iconLimitCount,
                                                                     0);
  result = (UserServantEntity_o *)v3;
  *(_OWORD *)(v3 + 256) = *(_OWORD *)&this->fields.lv;
  *(_OWORD *)(v3 + 272) = *(_OWORD *)&this->fields.adjustAtk;
  *(_OWORD *)(v3 + 288) = *(_OWORD *)&this->fields.skillLv3;
  *(_QWORD *)(v3 + 312) = this->fields.createdAt;
  return result;
}


void TerminalPramsManager_QuestClearHeroineInfoForSave___ctor(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.oldUsrSvtData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, 0, v3, v4);
}


void TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_37104588(
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

  if ( (byte_4C2474F & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_OldHeroineLawData_TypeInfo);
    byte_4C2474F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !qClearHeroineInfo )
    sub_1C2D6EC(v5, v6);
  oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
  v8 = (TerminalPramsManager_OldHeroineLawData_o *)sub_1C2D6DC(TerminalPramsManager_OldHeroineLawData_TypeInfo);
  TerminalPramsManager_OldHeroineLawData___ctor_37103824(v8, oldUsrSvtData, v9);
  this->fields.oldUsrSvtData = v8;
  p_fields = &this->fields;
  sub_1C2D434((CGThumbnailListItem_o *)p_fields, (int32_t)v8, v11, v12);
  p_fields->isChangeLimitcnt = qClearHeroineInfo->fields.isChangeLimitcnt;
  p_fields->isChangeTreasureDvc = qClearHeroineInfo->fields.isChangeTreasureDvc;
  *(_QWORD *)&p_fields->treasureDvcId = *(_QWORD *)&qClearHeroineInfo->fields.treasureDvcId;
  p_fields->oldFriendShipRank = qClearHeroineInfo->fields.oldFriendShipRank;
  p_fields->isFriendShipExceed = qClearHeroineInfo->fields.isFriendShipExceed;
  p_fields->isExceed = qClearHeroineInfo->fields.isExceed;
}


QuestClearHeroineInfo_o *TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  TerminalPramsManager_OldHeroineLawData_o *oldUsrSvtData; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  QuestClearHeroineInfo_o *result; // x0

  if ( (byte_4C24750 & 1) == 0 )
  {
    sub_1C2D490(&QuestClearHeroineInfo_TypeInfo);
    byte_4C24750 = 1;
  }
  v3 = sub_1C2D6DC(QuestClearHeroineInfo_TypeInfo);
  QuestClearHeroineInfo___ctor((QuestClearHeroineInfo_o *)v3, 0);
  oldUsrSvtData = this->fields.oldUsrSvtData;
  if ( !oldUsrSvtData
    || (oldUsrSvtData = (TerminalPramsManager_OldHeroineLawData_o *)TerminalPramsManager_OldHeroineLawData__GetLoad(
                                                                      oldUsrSvtData,
                                                                      v4),
        !v3) )
  {
    sub_1C2D6EC(oldUsrSvtData, v4);
  }
  *(_QWORD *)(v3 + 16) = oldUsrSvtData;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)oldUsrSvtData, v6, v7);
  result = (QuestClearHeroineInfo_o *)v3;
  *(_BYTE *)(v3 + 24) = this->fields.isChangeLimitcnt;
  *(_BYTE *)(v3 + 25) = this->fields.isChangeTreasureDvc;
  *(_QWORD *)(v3 + 28) = *(_QWORD *)&this->fields.treasureDvcId;
  *(_DWORD *)(v3 + 36) = this->fields.oldFriendShipRank;
  *(_BYTE *)(v3 + 40) = this->fields.isFriendShipExceed;
  *(_BYTE *)(v3 + 41) = this->fields.isExceed;
  return result;
}


void TerminalPramsManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C24754 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager___c_TypeInfo);
    byte_4C24754 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(TerminalPramsManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalPramsManager___c_TypeInfo->static_fields->__9 = (struct TerminalPramsManager___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)TerminalPramsManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void TerminalPramsManager___c___ctor(TerminalPramsManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TerminalPramsManager___c___ReceiveQuestEndResultInfo_b__724_0(
        TerminalPramsManager___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  int32_t questId; // w19
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4C24755 & 1) == 0 )
  {
    this = (TerminalPramsManager___c_o *)sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24755 = 1;
  }
  if ( !n )
    sub_1C2D6EC(this, n);
  questId = n->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  return questId == v5->static_fields->_QuestId_k__BackingField;
}


bool TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__730_0(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  if ( (byte_4C24756 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24756 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStoryForQuestId(v, 0);
}


int32_t TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__730_3(
        TerminalPramsManager___c_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C2D6EC(this, 0);
  return v->fields.id;
}


int32_t TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__730_4(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  return v;
}


void TerminalPramsManager___c__DisplayClass709_0___ctor(
        TerminalPramsManager___c__DisplayClass709_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TerminalPramsManager___c__DisplayClass709_0___IsTerminalEffectPlayed_b__0(
        TerminalPramsManager___c__DisplayClass709_0_o *this,
        System_String_o *playedEffectName,
        const MethodInfo *method)
{
  return System_String__op_Equality(playedEffectName, this->fields.effectName, 0);
}


void TerminalPramsManager___c__DisplayClass712_0___ctor(
        TerminalPramsManager___c__DisplayClass712_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalPramsManager___c__DisplayClass712_0___CheckResumeEffectNT2_b__0(
        TerminalPramsManager___c__DisplayClass712_0_o *this,
        System_String_o *effectId,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_fields; // x19
  System_String_o *effectIdsStr; // t1
  System_String_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C24757 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    byte_4C24757 = 1;
  }
  effectIdsStr = this->fields.effectIdsStr;
  p_fields = (CGThumbnailListItem_o *)&this->fields;
  v7 = System_String__Concat_63496112(effectIdsStr, effectId, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  p_fields->klass = (CGThumbnailListItem_c *)v7;
  sub_1C2D434(p_fields, (int32_t)v7, v8, v9);
}


void TerminalPramsManager___c__DisplayClass730_0___ctor(
        TerminalPramsManager___c__DisplayClass730_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


QuestEntity_o *TerminalPramsManager___c__DisplayClass730_0___SendOpenedQuestIdToAdManager_b__1(
        TerminalPramsManager___c__DisplayClass730_0_o *this,
        int32_t v,
        const MethodInfo *method)
{
  QuestMaster_o *questMaster; // x0

  questMaster = this->fields.questMaster;
  if ( !questMaster )
    sub_1C2D6EC(0, v);
  return QuestMaster__getQuestEntity(questMaster, v, 0);
}


bool TerminalPramsManager___c__DisplayClass730_0___SendOpenedQuestIdToAdManager_b__2(
        TerminalPramsManager___c__DisplayClass730_0_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  UserQuestMaster_o *userQuestMaster; // x20
  NetworkManager_c *v6; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C24758 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C24758 = 1;
  }
  entity = 0;
  userQuestMaster = this->fields.userQuestMaster;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
                             0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    if ( entity )
      return entity->fields.clearNum == 0;
LABEL_15:
    sub_1C2D6EC(v6, v);
  }
  return 1;
}