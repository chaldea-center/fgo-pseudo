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

  if ( (byte_4C403D1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&float___TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C403D1 = 1;
  }
  v1 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v1,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->loginQuestNotifiedList = v1;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->loginQuestNotifiedList, (int32_t)v1, v3, v4);
  v5 = TerminalPramsManager_TypeInfo->static_fields;
  v5->_IsMainInterludeWarClear_k__BackingField = 0;
  v6 = StringLiteral_1/*""*/;
  v5->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v5->mTerminalWarStartedIds, v6, v7, v8);
  *(_OWORD *)&TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = xmmword_C0ED30;
  v9 = sub_1C37100(float___TypeInfo, 3);
  v10 = TerminalPramsManager_TypeInfo->static_fields;
  v10->TipsArchiveScrollValueList = (struct System_Single_array *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->TipsArchiveScrollValueList, v9, v11, v12);
  TerminalPramsManager_TypeInfo->static_fields->joinGroupId = -1;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  p_eventScriptMessages = (CGThumbnailListItem_o *)&TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  p_eventScriptMessages->klass = (CGThumbnailListItem_c *)v13;
  sub_1C36FFC(p_eventScriptMessages, (int32_t)v13, v15, v16);
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

  if ( (byte_4C403AD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403AD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v3->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1C372B4(0);
  System_Collections_Generic_HashSet_int___Add(
    loginQuestNotifiedList,
    questId,
    (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void TerminalPramsManager__AutoOff(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C4036F & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4036F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D786 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D786 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_IsAutoResume_k__BackingField = 0;
  if ( !byte_4C3FFAB )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_4C3FFAB = 1;
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

  if ( (byte_4C403A1 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11449/*"SAVEKEY_BlankEarthRank"*/);
    byte_4C403A1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403F4 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403F4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11449/*"SAVEKEY_BlankEarthRank"*/,
    v1->static_fields->_BlankEarthRank_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__BlankEarthSpotId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C403A0 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11450/*"SAVEKEY_BlankEarthSpotId"*/);
    byte_4C403A0 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F7DC )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F7DC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11450/*"SAVEKEY_BlankEarthSpotId"*/,
    v1->static_fields->_BlankEarthSpotId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__CampaignDirectBonus_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  Il2CppObject *p_obj; // x19
  System_String_o *v3; // x0

  if ( (byte_4C4039F & 1) == 0 )
  {
    sub_1C37058(&CommonUI_CampaignDirectBonusData___TypeInfo);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11451/*"SAVEKEY_CampaignDirectBonus"*/);
    byte_4C4039F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CF07 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CF07 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  p_obj = &v1->static_fields->_CampaignDirectBonus_k__BackingField->obj;
  if ( !p_obj )
    p_obj = (Il2CppObject *)sub_1C37100(CommonUI_CampaignDirectBonusData___TypeInfo, 0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(p_obj, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11451/*"SAVEKEY_CampaignDirectBonus"*/, v3, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool TerminalPramsManager__CanSendTrackEvent(int32_t questId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x19
  Il2CppObject *v7; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C403BC & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C37058(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C403BC = 1;
  }
  v7 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !entity )
    goto LABEL_16;
  v4 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0);
  if ( !v4 )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v4,
          &v7,
          (int32_t)Instance,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v7 )
LABEL_16:
    sub_1C372B4(Instance);
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
            HIDWORD(v7[1].klass),
            (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
}


void TerminalPramsManager__CheckClearSelectedStoryQuestId(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4C403A2 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403A2 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401B4 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401B4 = 1;
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
    if ( !byte_4C401B4 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401B4 = 1;
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
      if ( !byte_4C3FCB0 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FCB0 = 1;
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
  if ( (byte_4C4038A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_13696/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C37058(&StringLiteral_13697/*"TerminalBeforeEventActivityPointGauge"*/);
    byte_4C4038A = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13696/*"TerminalBeforeEventActivityPoint"*/, 0)
      && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13697/*"TerminalBeforeEventActivityPointGauge"*/, 0);
}


bool TerminalPramsManager__CheckEventSubmarinePointSaveData(const MethodInfo *method)
{
  if ( (byte_4C4038C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_13698/*"TerminalBeforeEventSubmarinePointData"*/);
    byte_4C4038C = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13698/*"TerminalBeforeEventSubmarinePointData"*/, 0);
}


bool TerminalPramsManager__CheckIsOrdealCallWarClear(WarEntity_o *warEntity, const MethodInfo *method)
{
  int32_t parentWarId; // w19
  BalanceConfig_c *v4; // x0

  if ( (byte_4C403C9 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C403C9 = 1;
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
  ScrTerminalListTop_c *v9; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  Il2CppObject *v11; // x20
  TerminalPramsManager_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  System_Action_object__o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  CGThumbnailListItem_c *v21; // x19
  TerminalPramsManager_c *v22; // x0
  CGThumbnailListItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  const MethodInfo *v24; // x0

  if ( (byte_4C403A6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_string__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C37058(&Method_System_Collections_Generic_List_string__ForEach__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C37058(&ScrTerminalListTop_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalPramsManager___c__DisplayClass712_0__CheckResumeEffectNT2_b__0__);
    sub_1C37058(&TerminalPramsManager___c__DisplayClass712_0_TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_87/*"\r\n"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C403A6 = 1;
  }
  v1 = sub_1C372A4(TerminalPramsManager___c__DisplayClass712_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass712_0___ctor((TerminalPramsManager___c__DisplayClass712_0_o *)v1, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403F2 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403F2 = 1;
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
        PlayedTerminalEffects_k__BackingField = v9->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
        if ( !PlayedTerminalEffects_k__BackingField )
          goto LABEL_39;
        v11 = (Il2CppObject *)((__int64 (__fastcall *)(System_String_o *, const MethodInfo *))PlayedTerminalEffects_k__BackingField->klass->vtable._3_ToString.methodPtr)(
                                PlayedTerminalEffects_k__BackingField,
                                PlayedTerminalEffects_k__BackingField->klass->vtable._3_ToString.method);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C403F2 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C403F2 = 1;
        }
        v12 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v12 = TerminalPramsManager_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v12->static_fields->_PlayedTerminalEffects_k__BackingField;
        if ( !PlayedTerminalEffects_k__BackingField
          || (PlayedTerminalEffects_k__BackingField = System_String__Replace_63608204(
                                                        PlayedTerminalEffects_k__BackingField,
                                                        (System_String_o *)StringLiteral_87/*"\r\n"*/,
                                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                                        0)) == 0
          || (v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                           PlayedTerminalEffects_k__BackingField,
                                                                           0xAu,
                                                                           0,
                                                                           0),
              (PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Linq_Enumerable__ToList_object_(
                                                                            v13,
                                                                            (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_string___)) == 0)
          || (v14 = (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
              PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Collections_Generic_List_object___Remove(
                                                                           (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
                                                                           v11,
                                                                           (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_string__Remove__),
              !v1) )
        {
LABEL_39:
          sub_1C372B4(PlayedTerminalEffects_k__BackingField);
        }
        v17 = StringLiteral_1/*""*/;
        *(_QWORD *)(v1 + 16) = StringLiteral_1/*""*/;
        sub_1C36FFC((CGThumbnailListItem_o *)(v1 + 16), v17, v15, v16);
        v18 = (System_Action_object__o *)sub_1C372A4(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v18,
          (Il2CppObject *)v1,
          Method_TerminalPramsManager___c__DisplayClass712_0__CheckResumeEffectNT2_b__0__,
          0);
        System_Collections_Generic_List_object___ForEach(
          v14,
          (System_Action_T__o *)v18,
          (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_string__ForEach__);
        v21 = *(CGThumbnailListItem_c **)(v1 + 16);
        if ( !byte_4C403E3 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C403E3 = 1;
        }
        v22 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v22 = TerminalPramsManager_TypeInfo;
        }
        p_PlayedTerminalEffects_k__BackingField = (CGThumbnailListItem_o *)&v22->static_fields->_PlayedTerminalEffects_k__BackingField;
        p_PlayedTerminalEffects_k__BackingField->klass = v21;
        sub_1C36FFC(p_PlayedTerminalEffects_k__BackingField, (int32_t)v21, v19, v20);
        TerminalPramsManager__Save_SaveData(v24);
      }
    }
  }
}


void TerminalPramsManager__ClearEventQuestIds_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C4039A & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11452/*"SAVEKEY_ClearEventQuestIds"*/);
    byte_4C4039A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F895 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F895 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11452/*"SAVEKEY_ClearEventQuestIds"*/,
    v1->static_fields->_ClearEventQuestIds_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__ConnectMark_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C40399 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11454/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C37058(&StringLiteral_11453/*"SAVEKEY_ConnectMarkAnimationId"*/);
    byte_4C40399 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11454/*"SAVEKEY_ConnectMarkEventId"*/, v1->static_fields->ConnectMarkEventId, 0);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11453/*"SAVEKEY_ConnectMarkAnimationId"*/,
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

  if ( (byte_4C403BF & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C403BF = 1;
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
  if ( !byte_4C40406 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40406 = 1;
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
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->lastPlayBgmName, v6, v2, v3);
}


void TerminalPramsManager__DeleteContinueData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_4C4037D & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11457/*"SAVEKEY_LastPlayBgmName"*/);
    sub_1C37058(&StringLiteral_13700/*"TerminalEndTime"*/);
    sub_1C37058(&StringLiteral_5186/*"Debug_IsOriginalGuestNPC"*/);
    sub_1C37058(&StringLiteral_11463/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_1C37058(&StringLiteral_13696/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C37058(&StringLiteral_11451/*"SAVEKEY_CampaignDirectBonus"*/);
    sub_1C37058(&StringLiteral_11458/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    sub_1C37058(&StringLiteral_11468/*"SAVEKEY_TerminalCraftInfoDisp"*/);
    sub_1C37058(&StringLiteral_13701/*"TerminalEventDailyPointEventId"*/);
    sub_1C37058(&StringLiteral_5182/*"Debug_GuestNPCInfoList"*/);
    sub_1C37058(&StringLiteral_13698/*"TerminalBeforeEventSubmarinePointData"*/);
    sub_1C37058(&StringLiteral_13707/*"TerminalPhaseCnt"*/);
    sub_1C37058(&StringLiteral_11467/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_1C37058(&StringLiteral_13715/*"TerminalTimeStatusEventId"*/);
    sub_1C37058(&StringLiteral_13699/*"TerminalDispState"*/);
    sub_1C37058(&StringLiteral_11460/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_1C37058(&StringLiteral_13702/*"TerminalIsDoneShortcut"*/);
    sub_1C37058(&StringLiteral_11459/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C37058(&StringLiteral_11464/*"SAVEKEY_PlayerGenderType"*/);
    sub_1C37058(&StringLiteral_11469/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    sub_1C37058(&StringLiteral_11452/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_1C37058(&StringLiteral_11461/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_1C37058(&StringLiteral_5187/*"Debug_IsQuestReleaseAll"*/);
    sub_1C37058(&StringLiteral_5184/*"Debug_IsDummyErrorSelect"*/);
    sub_1C37058(&StringLiteral_13710/*"TerminalQuestId"*/);
    sub_1C37058(&StringLiteral_11466/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    sub_1C37058(&StringLiteral_11472/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_1C37058(&StringLiteral_13714/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_1C37058(&StringLiteral_13719/*"TerminalWarId"*/);
    sub_1C37058(&StringLiteral_13712/*"TerminalSpotId"*/);
    sub_1C37058(&StringLiteral_13716/*"TerminalTimeStatusLoopCount"*/);
    sub_1C37058(&StringLiteral_13697/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_1C37058(&StringLiteral_11450/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_1C37058(&StringLiteral_11455/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_1C37058(&StringLiteral_5185/*"Debug_IsOriginalBattle"*/);
    sub_1C37058(&StringLiteral_13720/*"TerminalWarStartedIds"*/);
    sub_1C37058(&StringLiteral_5181/*"Debug_BattleEnemyList"*/);
    sub_1C37058(&StringLiteral_11454/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C37058(&StringLiteral_13718/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_1C37058(&StringLiteral_11453/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_1C37058(&StringLiteral_11462/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_1C37058(&StringLiteral_13705/*"TerminalLastPlayedQuestId"*/);
    sub_1C37058(&StringLiteral_5183/*"Debug_IsBuildInfoDisp"*/);
    sub_1C37058(&StringLiteral_13717/*"TerminalTransitionInfoMissionId"*/);
    sub_1C37058(&StringLiteral_11471/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4C4037D = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13699/*"TerminalDispState"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13719/*"TerminalWarId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13712/*"TerminalSpotId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13710/*"TerminalQuestId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13705/*"TerminalLastPlayedQuestId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13707/*"TerminalPhaseCnt"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13700/*"TerminalEndTime"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13702/*"TerminalIsDoneShortcut"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13720/*"TerminalWarStartedIds"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5187/*"Debug_IsQuestReleaseAll"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5184/*"Debug_IsDummyErrorSelect"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5183/*"Debug_IsBuildInfoDisp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5185/*"Debug_IsOriginalBattle"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5186/*"Debug_IsOriginalGuestNPC"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5181/*"Debug_BattleEnemyList"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5182/*"Debug_GuestNPCInfoList"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13715/*"TerminalTimeStatusEventId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13716/*"TerminalTimeStatusLoopCount"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13701/*"TerminalEventDailyPointEventId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13714/*"TerminalTimeStatusEventDailyPoint"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13717/*"TerminalTransitionInfoMissionId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13718/*"TerminalTransitionInfoVoiceAssetName"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13696/*"TerminalBeforeEventActivityPoint"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13697/*"TerminalBeforeEventActivityPointGauge"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13698/*"TerminalBeforeEventSubmarinePointData"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11467/*"SAVEKEY_TerminalConquestInfos"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11466/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11468/*"SAVEKEY_TerminalCraftInfoDisp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11469/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11457/*"SAVEKEY_LastPlayBgmName"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11458/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11463/*"SAVEKEY_PlayedTerminalEffects"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11460/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11461/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11462/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11472/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11454/*"SAVEKEY_ConnectMarkEventId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11453/*"SAVEKEY_ConnectMarkAnimationId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11471/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11452/*"SAVEKEY_ClearEventQuestIds"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11459/*"SAVEKEY_MapModelClearQuestInfo"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11455/*"SAVEKEY_DataLostBattleAutoReset"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11464/*"SAVEKEY_PlayerGenderType"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11451/*"SAVEKEY_CampaignDirectBonus"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11450/*"SAVEKEY_BlankEarthSpotId"*/, 0);
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

  if ( (byte_4C403C0 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11456/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_4C403C0 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C40407 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40407 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  p_EventRaidDefeatedEffectInfo_k__BackingField = (CGThumbnailListItem_o *)&v3->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  p_EventRaidDefeatedEffectInfo_k__BackingField->klass = 0;
  sub_1C36FFC(p_EventRaidDefeatedEffectInfo_k__BackingField, 0, v1, v2);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11456/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, 0);
}


void TerminalPramsManager__DeleteQuestRandomGroupList(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  TerminalPramsManager_c *v3; // x0
  CGThumbnailListItem_o *p_QuestRandomGroupList_k__BackingField; // x0

  if ( (byte_4C403C5 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11465/*"SAVEKEY_QuestRandomGroupList"*/);
    byte_4C403C5 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C40409 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40409 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  p_QuestRandomGroupList_k__BackingField = (CGThumbnailListItem_o *)&v3->static_fields->_QuestRandomGroupList_k__BackingField;
  p_QuestRandomGroupList_k__BackingField->klass = 0;
  sub_1C36FFC(p_QuestRandomGroupList_k__BackingField, 0, v1, v2);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11465/*"SAVEKEY_QuestRandomGroupList"*/, 0);
}


bool TerminalPramsManager__EnableResumeToBlankEarthMap(int32_t warId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C403CD & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403CD = 1;
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return QuestTree__IsActiveWar((QuestTree_o *)Instance, warId, 0);
}


void TerminalPramsManager__EventDailyPointSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  System_String_o *v3; // x0
  int64_t BeforeTimeEventDailyPoint_k__BackingField; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C40386 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_13701/*"TerminalEventDailyPointEventId"*/);
    sub_1C37058(&StringLiteral_13714/*"TerminalTimeStatusEventDailyPoint"*/);
    byte_4C40386 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403EE )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403EE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13701/*"TerminalEventDailyPointEventId"*/,
    v1->static_fields->_EventDailyPointEventId_k__BackingField,
    0);
  if ( !byte_4C403EF )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403EF = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  BeforeTimeEventDailyPoint_k__BackingField = v2->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v3 = System_Int64__ToString((int64_t)&BeforeTimeEventDailyPoint_k__BackingField, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13714/*"TerminalTimeStatusEventDailyPoint"*/, v3, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__EventStatusSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C40385 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_13715/*"TerminalTimeStatusEventId"*/);
    sub_1C37058(&StringLiteral_13716/*"TerminalTimeStatusLoopCount"*/);
    byte_4C40385 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401AF )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401AF = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13715/*"TerminalTimeStatusEventId"*/,
    v1->static_fields->_TimeStatusEventId_k__BackingField,
    0);
  if ( !byte_4C401B0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401B0 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13716/*"TerminalTimeStatusLoopCount"*/,
    v2->static_fields->_TimeStatusLoopCount_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool TerminalPramsManager__ExistBlankEarthTutorial(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  BalanceConfig_c *v3; // x0

  if ( (byte_4C403CC & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403CC = 1;
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
  System_Collections_ICollection_o *AvailableTutorialArray; // x0

  if ( (byte_4C403CB & 1) == 0 )
  {
    sub_1C37058(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    byte_4C403CB = 1;
  }
  v1 = sub_1C372A4(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v1, 0);
  if ( !v1 )
    sub_1C372B4(v2);
  *(_QWORD *)(v1 + 16) = 0x5300000000LL;
  AvailableTutorialArray = (System_Collections_ICollection_o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                                 (EventTutorialMaster_EventTutorialArgs_o *)v1,
                                                                 0);
  return !BasicHelper__IsNullOrEmpty(AvailableTutorialArray, 0);
}


float TerminalPramsManager__GetAutoIntpTime(const MethodInfo *method)
{
  int32_t targetFrameRate; // w0

  if ( (byte_4C40378 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    byte_4C40378 = 1;
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
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C403AB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403AB = 1;
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
      sub_1C372B4(v5);
  }
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         folderLastIdxs,
         warId,
         &value,
         (const MethodInfo_33F3164 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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

  if ( (byte_4C40379 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40379 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F9BB )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F9BB = 1;
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
  if ( !byte_4C3FFC6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFC6 = 1;
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

  if ( (byte_4C403B1 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403B1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v3);
  if ( !QuestFocusStateManager )
    sub_1C372B4(0);
  return QuestFocusStateManager__GetFocusState(QuestFocusStateManager, questId, 0);
}


void TerminalPramsManager__InitLoad(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C4037F & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4037F = 1;
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

  if ( (byte_4C403A9 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C403A9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3EC68 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3EC68 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispOnly_k__BackingField = 0;
  v4 = StringLiteral_1/*""*/;
  if ( !byte_4C3FFAE )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C3FFAE = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = (struct System_String_o *)v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_QuestWindowMessage_k__BackingField, v4, v1, v2);
  if ( !byte_4C3FFAD )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFAD = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_MessageDispType_k__BackingField = 0;
  if ( !byte_4C3EC67 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4C3EC67 = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v9 = v8->static_fields;
  v9->_BattleSetupKeep_k__BackingField = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->_BattleSetupKeep_k__BackingField, 0, v6, v7);
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

  if ( (byte_4C4037E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4037E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F89C )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F89C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4C3F89B )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C3F89B = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SpotId_k__BackingField = 0;
  if ( !byte_4C3F896 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C3F896 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestId_k__BackingField = 0;
  if ( !byte_4C3FCAA )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C3FCAA = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayedQuestId_k__BackingField = 0;
  if ( !byte_4C403D9 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C403D9 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
  if ( !byte_4C3FCAB )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C3FCAB = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = 0;
  if ( !byte_4C3FB5A )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C3FB5A = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_AfterActionFocusQuestId_k__BackingField = 0;
  if ( !byte_4C3FCB0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C3FCB0 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
  if ( !byte_4C3EBA0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C3EBA0 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  if ( !byte_4C3FCB1 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C3FCB1 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
  if ( !byte_4C3FFDD )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C3FFDD = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 0;
  if ( !byte_4C3FFDB )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C3FFDB = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
  if ( !byte_4C3F528 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C3F528 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField, 0, v1, v2);
  if ( !byte_4C3F89A )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F89A = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_PhaseCnt_k__BackingField = 0;
  if ( !byte_4C3F897 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4C3F897 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_EndTime_k__BackingField = 0;
  if ( !byte_4C3F899 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4C3F899 = 1;
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
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->mTerminalWarStartedIds, v9, v5, v6);
  if ( !byte_4C403DA )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403DA = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->mDebug_IsQuestReleaseAll = 0;
  if ( !byte_4C403DB )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4C403DB = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->mDebug_IsDummyErrorSelect = 0;
  if ( !byte_4C403DC )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4C403DC = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->mDebug_IsBuildInfoDisp = 0;
  if ( !byte_4C3FFE2 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4C3FFE2 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_TimeStatusEventId_k__BackingField = 0;
  if ( !byte_4C3FFE3 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4C3FFE3 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_TimeStatusLoopCount_k__BackingField = 0;
  if ( !byte_4C403DD )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4C403DD = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  p_timeStatusRecord_k__BackingField = (CGThumbnailListItem_o *)&v12->static_fields->_timeStatusRecord_k__BackingField;
  p_timeStatusRecord_k__BackingField->klass = 0;
  sub_1C36FFC(p_timeStatusRecord_k__BackingField, 0, v10, v11);
  if ( !byte_4C403DE )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403DE = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_EventDailyPointEventId_k__BackingField = 0;
  if ( !byte_4C403DF )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4C403DF = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = 0;
  if ( !byte_4C403E0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4C403E0 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
  if ( !byte_4C403E1 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4C403E1 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
  if ( !byte_4C3F9BE )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4C3F9BE = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  p_BeforeEventSubmarineSaveData_k__BackingField = (CGThumbnailListItem_o *)&v16->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  p_BeforeEventSubmarineSaveData_k__BackingField->klass = 0;
  sub_1C36FFC(p_BeforeEventSubmarineSaveData_k__BackingField, 0, v14, v15);
  v18 = StringLiteral_1/*""*/;
  p_lastPlayBgmName = (CGThumbnailListItem_o *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayBgmName;
  p_lastPlayBgmName->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
  sub_1C36FFC(p_lastPlayBgmName, v18, v20, v21);
  v24 = TerminalPramsManager_TypeInfo;
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayQuestConsumeAp = 0;
  if ( !byte_4C403E2 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
    byte_4C403E2 = 1;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v25 = v24->static_fields;
  v25->_SpecifiedChangeSceneInfo_k__BackingField = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v25->_SpecifiedChangeSceneInfo_k__BackingField, 0, v22, v23);
  if ( !byte_4C401C1 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401C1 = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_EventBoardGameSquareIndex_k__BackingField = 0;
  if ( !byte_4C401C3 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
    byte_4C401C3 = 1;
  }
  if ( !v26->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v26);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = 0;
  if ( !byte_4C401C5 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
    byte_4C401C5 = 1;
  }
  if ( !v26->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v26);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
  if ( !byte_4C403D6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
    byte_4C403D6 = 1;
  }
  if ( !v26->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v26);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v26);
  TerminalPramsManager__ResetResumeScriptWithMap(v27);
  if ( !byte_4C3FCAD )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FCAD = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  v30->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
  v31 = StringLiteral_1/*""*/;
  if ( !byte_4C403E3 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
    byte_4C403E3 = 1;
  }
  if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30);
    v30 = TerminalPramsManager_TypeInfo;
  }
  p_PlayedTerminalEffects_k__BackingField = (CGThumbnailListItem_o *)&v30->static_fields->_PlayedTerminalEffects_k__BackingField;
  p_PlayedTerminalEffects_k__BackingField->klass = (CGThumbnailListItem_c *)v31;
  sub_1C36FFC(p_PlayedTerminalEffects_k__BackingField, v31, v28, v29);
  if ( !byte_4C400BE )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C400BE = 1;
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = 0;
  if ( !byte_4C400BF )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C400BF = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = 0;
  if ( !byte_4C401B2 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C401B2 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v36 = v35->static_fields;
  v36->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  *(_QWORD *)&v36->ConnectMarkEventId = 0;
  if ( !byte_4C3D499 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C3D499 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_isFortificationCheck_k__BackingField = 0;
  if ( !byte_4C403E4 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C403E4 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !byte_4C403E5 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C403E5 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !byte_4C401BA )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C401BA = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4C3FFD2 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C3FFD2 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_4C401B8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C401B8 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_4C401B9 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C401B9 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_4C401B7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C401B7 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_4C401BA )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C401BA = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4C401AC )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C401AC = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 0.0;
  if ( !byte_4C403E6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C403E6 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  if ( !byte_4C3FCAE )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C3FCAE = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_4C3E108 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C3E108 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_PlayerGenderType_k__BackingField = 0;
  if ( !byte_4C403E7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C403E7 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  v37 = StringLiteral_1/*""*/;
  if ( !byte_4C401BF )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C401BF = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  p_SceneMoveQuestClearedInfo_k__BackingField = (CGThumbnailListItem_o *)&v35->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
  p_SceneMoveQuestClearedInfo_k__BackingField->klass = (CGThumbnailListItem_c *)v37;
  sub_1C36FFC(p_SceneMoveQuestClearedInfo_k__BackingField, v37, v33, v34);
  if ( !byte_4C403E8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403E8 = 1;
  }
  v41 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v41 = TerminalPramsManager_TypeInfo;
  }
  v42 = v41->static_fields;
  v42->_CampaignBonus_k__BackingField = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v42->_CampaignBonus_k__BackingField, 0, v39, v40);
  if ( !byte_4C403E9 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403E9 = 1;
  }
  v45 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v46 = v45->static_fields;
  v46->_CampaignDirectBonus_k__BackingField = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v46->_CampaignDirectBonus_k__BackingField, 0, v43, v44);
  if ( !byte_4C403EA )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403EA = 1;
  }
  v49 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v49 = TerminalPramsManager_TypeInfo;
  }
  v49->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
  v50 = StringLiteral_1/*""*/;
  if ( !byte_4C3CF09 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v49 = TerminalPramsManager_TypeInfo;
    byte_4C3CF09 = 1;
  }
  if ( !v49->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v49);
    v49 = TerminalPramsManager_TypeInfo;
  }
  p_TransitionScrollTabName_k__BackingField = (CGThumbnailListItem_o *)&v49->static_fields->_TransitionScrollTabName_k__BackingField;
  p_TransitionScrollTabName_k__BackingField->klass = (CGThumbnailListItem_c *)v50;
  sub_1C36FFC(p_TransitionScrollTabName_k__BackingField, v50, v47, v48);
  if ( !byte_4C403EB )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403EB = 1;
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
      (const MethodInfo_365A724 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
}


void TerminalPramsManager__InitTipsArchiveScrollValueList(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  unsigned __int64 i; // x20
  struct System_Single_array *TipsArchiveScrollValueList; // x8
  struct System_Single_array *v4; // x8
  char *v5; // x8

  if ( (byte_4C403CE & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403CE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      v1 = TerminalPramsManager_TypeInfo;
    }
    TipsArchiveScrollValueList = v1->static_fields->TipsArchiveScrollValueList;
    if ( !TipsArchiveScrollValueList )
LABEL_14:
      sub_1C372B4(v1);
    if ( (__int64)i >= SLODWORD(TipsArchiveScrollValueList->max_length) )
      break;
    if ( !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      v1 = TerminalPramsManager_TypeInfo;
    }
    v4 = v1->static_fields->TipsArchiveScrollValueList;
    if ( !v4 )
      goto LABEL_14;
    if ( i >= LODWORD(v4->max_length) )
      sub_1C372BC(v1);
    v5 = (char *)v4 + 4 * i;
    *((_DWORD *)v5 + 8) = 0;
  }
}


bool TerminalPramsManager__IsAuto(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C4036C & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4036C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F9BB )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F9BB = 1;
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
  if ( !byte_4C403D3 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403D3 = 1;
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
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v7; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C4036E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4036E = 1;
  }
  entity = 0;
  v7 = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F9BB )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F9BB = 1;
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
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( v2->static_fields->_WarId_k__BackingField < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
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
          (const MethodInfo_33A10EC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !entity)
    || !Instance )
  {
LABEL_34:
    sub_1C372B4(Instance);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v7,
          (int32_t)entity[6].klass,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)v7;
  if ( !v7 )
    goto LABEL_34;
  return EventDetailEntity__IsTimeProgressEvent((EventDetailEntity_o *)v7, 0);
}


bool TerminalPramsManager__IsBlankEarthWarByWarId(int32_t targetWarId, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  void *WarInfoByWarID; // x0
  Il2CppObject *Instance; // x0
  int32_t v6; // w1
  System_Nullable_int__o v7; // x0
  __int64 v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C403CA & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C37058(&Method_System_Nullable_int___ctor__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C403CA = 1;
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      sub_1C372B4(0);
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, targetWarId, 0);
    if ( WarInfoByWarID )
    {
      WarInfoByWarID = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)WarInfoByWarID, 0);
      if ( WarInfoByWarID )
      {
        v6 = *((_DWORD *)WarInfoByWarID + 31);
        v7 = (System_Nullable_int__o)&v9;
        v9 = 0;
        System_Nullable_int____ctor(v7, v6, (const MethodInfo_38C87A4 *)Method_System_Nullable_int___ctor__);
        LOBYTE(WarInfoByWarID) = HIDWORD(v9) != 0;
      }
    }
  }
  return (char)WarInfoByWarID;
}


void TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C4039C & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11455/*"SAVEKEY_DataLostBattleAutoReset"*/);
    byte_4C4039C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401B6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401B6 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11455/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v1->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool TerminalPramsManager__IsMainStory(int32_t warId, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C403BA & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C403BA = 1;
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
            (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarMaster___);
        if ( Instance )
        {
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       &entity,
                                       warId,
                                       (const MethodInfo_33A10EC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( entity )
            return LODWORD(entity[6].klass) == 0;
        }
      }
      sub_1C372B4(Instance);
    }
  }
  return 1;
}


bool TerminalPramsManager__IsMainStoryForQuestId(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x19
  const MethodInfo *v5; // x1
  int32_t klass_high; // w19
  Il2CppObject *v9; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C403BB & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C37058(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403BB = 1;
  }
  v9 = 0;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SpotMaster___),
        !entity)
    || (v4 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (Il2CppObject *)QuestEntity__getSpotId(entity, 0),
        !v4) )
  {
LABEL_16:
    sub_1C372B4(Instance);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               v4,
                               &v9,
                               (int32_t)Instance,
                               (const MethodInfo_33A10EC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !v9 )
    goto LABEL_16;
  klass_high = HIDWORD(v9[1].klass);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStory(klass_high, v5);
}


bool TerminalPramsManager__IsMustPlayMainStory(int32_t warId, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C403B9 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403B9 = 1;
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
         (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___) )
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

  if ( (byte_4C403AC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403AC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v3->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1C372B4(0);
  return System_Collections_Generic_HashSet_int___Contains(
           loginQuestNotifiedList,
           questId,
           (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C40395 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11461/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    byte_4C40395 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FFD0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFD0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11461/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v1->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C40394 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11460/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    byte_4C40394 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FFCF )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFCF = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11460/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v1->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__IsPlayTerminalEffectNt2AfterAction_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C40396 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11462/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    byte_4C40396 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401B1 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401B1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11462/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v1->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool TerminalPramsManager__IsPlayedEventRaidDefeatedEffect(int32_t eventId, int32_t day, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v5; // x0
  __int64 v6; // x8
  char v7; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C403C4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403C4 = 1;
  }
  value = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C40408 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40408 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  }
  v6 = *(_QWORD *)&v5[2].fields._entries->m_Items[17].fields.hashCode;
  if ( !v6 || (v5 = *(System_Collections_Generic_Dictionary_int__object__o **)(v6 + 16)) == 0 )
    sub_1C372B4(v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         v5,
         eventId,
         &value,
         (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v7 = (char)value;
    if ( value )
      v7 = System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             day,
             (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
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
  clsQuestCheck_o *v5; // x19
  clsQuestCheck_o *v6; // x19
  TerminalPramsManager_c *v7; // x0
  ScrTerminalListTop_c *v8; // x8
  int32_t QuestId_k__BackingField; // w19
  TerminalPramsManager_c *v10; // x0

  if ( (byte_4C403A5 & 1) == 0 )
  {
    sub_1C37058(&ScrTerminalListTop_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403A5 = 1;
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v5 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v5 )
    goto LABEL_34;
  if ( !clsQuestCheck__IsQuestClear(
          v5,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0) )
    return 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v6 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v6 )
LABEL_34:
    sub_1C372B4(Instance);
  if ( !clsQuestCheck__IsWarClear(
          v6,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
          0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3CFE7 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3CFE7 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v8 = ScrTerminalListTop_TypeInfo;
    QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v8 = ScrTerminalListTop_TypeInfo;
    }
    if ( QuestId_k__BackingField == v8->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3CFE6 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3CFE6 = 1;
      }
      v10 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v10 = TerminalPramsManager_TypeInfo;
      }
      if ( v10->static_fields->_PhaseCnt_k__BackingField == 2 )
        return 1;
    }
  }
  return 0;
}


bool TerminalPramsManager__IsTerminalEffectPlayed(System_String_o *effectName, const MethodInfo *method)
{
  __int64 v3; // x19
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  TerminalPramsManager_c *v7; // x0
  TerminalPramsManager_c *v8; // x0
  System_String_array *v9; // x20
  System_Func_object__bool__o *v10; // x21

  if ( (byte_4C403A3 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_string____78108176);
    sub_1C37058(&System_Func_string__bool__TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalPramsManager___c__DisplayClass709_0__IsTerminalEffectPlayed_b__0__);
    sub_1C37058(&TerminalPramsManager___c__DisplayClass709_0_TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_87/*"\r\n"*/);
    byte_4C403A3 = 1;
  }
  v3 = sub_1C372A4(TerminalPramsManager___c__DisplayClass709_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass709_0___ctor((TerminalPramsManager___c__DisplayClass709_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_21;
  *(_QWORD *)(v3 + 16) = effectName;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)effectName, v5, v6);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403F2 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403F2 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( v7->static_fields->_PlayedTerminalEffects_k__BackingField )
  {
    if ( !v7->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v7);
    if ( !byte_4C403F2 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403F2 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    PlayedTerminalEffects_k__BackingField = v8->static_fields->_PlayedTerminalEffects_k__BackingField;
    if ( PlayedTerminalEffects_k__BackingField )
    {
      PlayedTerminalEffects_k__BackingField = System_String__Replace_63608204(
                                                PlayedTerminalEffects_k__BackingField,
                                                (System_String_o *)StringLiteral_87/*"\r\n"*/,
                                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                                0);
      if ( PlayedTerminalEffects_k__BackingField )
      {
        v9 = System_String__Split(PlayedTerminalEffects_k__BackingField, 0xAu, 0, 0);
        v10 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v10,
          (Il2CppObject *)v3,
          Method_TerminalPramsManager___c__DisplayClass709_0__IsTerminalEffectPlayed_b__0__,
          0);
        return BasicHelper__Any_object__51187876(
                 (System_Object_array *)v9,
                 (System_Func_T__bool__o *)v10,
                 (const MethodInfo_30D10A4 *)Method_BasicHelper_Any_string____78108176);
      }
    }
LABEL_21:
    sub_1C372B4(PlayedTerminalEffects_k__BackingField);
  }
  return 0;
}


bool TerminalPramsManager__IsUsePopupQuestReward(int32_t questId, const MethodInfo *method)
{
  QuestMaster_o *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x19
  int klass_high; // w19
  BalanceConfig_c *v6; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  int monitor; // w19
  BalanceConfig_c *v10; // x0
  Il2CppObject *v12; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *v13; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *v14; // [xsp+18h] [xbp-38h] BYREF
  Il2CppObject *v15; // [xsp+20h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4C403C8 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4C403C8 = 1;
  }
  v15 = 0;
  entity = 0;
  v13 = 0;
  v14 = 0;
  v12 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_42;
  if ( !QuestMaster__TryGetQuestEntity(Master_object, &entity, questId, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !entity )
    goto LABEL_42;
  v4 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Master_object = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0);
  if ( !v4 )
    goto LABEL_42;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v4,
          &v15,
          (int32_t)Master_object,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__) )
    goto LABEL_45;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v15 || !Master_object )
    goto LABEL_42;
  Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     &v13,
                                     HIDWORD(v15[1].klass),
                                     (const MethodInfo_33A10EC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  if ( !v15 )
    goto LABEL_42;
  klass_high = HIDWORD(v15[1].klass);
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( klass_high != v6->static_fields->OrdealCallWarId )
  {
LABEL_45:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SpotMaster___);
    if ( !entity )
      goto LABEL_42;
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    Master_object = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0);
    if ( !v8 )
      goto LABEL_42;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v8,
           &v14,
           (int32_t)Master_object,
           (const MethodInfo_33A10EC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !v14 || !Master_object )
        goto LABEL_42;
      Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                         &v12,
                                         HIDWORD(v14[1].klass),
                                         (const MethodInfo_33A10EC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_42;
        monitor = (int)v12[3].monitor;
        v10 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v10 = BalanceConfig_TypeInfo;
        }
        if ( monitor == v10->static_fields->GrandBoardWarId )
        {
          Master_object = (QuestMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( entity && Master_object )
            return clsQuestCheck__IsConsumeStormPod((clsQuestCheck_o *)Master_object, entity->fields.id, 0);
LABEL_42:
          sub_1C372B4(Master_object);
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
  System_String_c *klass; // x8
  System_String_o *v5; // x19
  bool v6; // w21
  unsigned __int64 v7; // x22
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  v11 = war_id;
  if ( (byte_4C403A7 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_87/*"\r\n"*/);
    byte_4C403A7 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  mTerminalWarStartedIds = v2->static_fields->mTerminalWarStartedIds;
  if ( !mTerminalWarStartedIds
    || (mTerminalWarStartedIds = System_String__Replace_63608204(
                                   mTerminalWarStartedIds,
                                   (System_String_o *)StringLiteral_87/*"\r\n"*/,
                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                   0)) == 0
    || (mTerminalWarStartedIds = (System_String_o *)System_String__Split(mTerminalWarStartedIds, 0xAu, 0, 0)) == 0 )
  {
    sub_1C372B4(mTerminalWarStartedIds);
  }
  klass = mTerminalWarStartedIds[1].klass;
  v5 = mTerminalWarStartedIds;
  v6 = (int)klass > 0;
  if ( (int)klass >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)klass )
        sub_1C372BC(mTerminalWarStartedIds);
      v8 = (System_String_o *)*((_QWORD *)&v5[1].monitor + v7);
      v9 = System_Int32__ToString((int32_t)&v11, 0);
      mTerminalWarStartedIds = (System_String_o *)System_String__op_Equality(v8, v9, 0);
      if ( ((unsigned __int8)mTerminalWarStartedIds & 1) != 0 )
        break;
      LODWORD(klass) = v5[1].klass;
      v6 = (__int64)++v7 < (int)klass;
    }
    while ( (__int64)v7 < (int)klass );
  }
  return v6;
}


void TerminalPramsManager__LastPanelEventPointSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C40393 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_13703/*"TerminalLastPanelEventPoint"*/);
    byte_4C40393 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13703/*"TerminalLastPanelEventPoint"*/, v1->static_fields->panelEventPoint, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__LastPlayBgmNameSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C40391 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11457/*"SAVEKEY_LastPlayBgmName"*/);
    byte_4C40391 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11457/*"SAVEKEY_LastPlayBgmName"*/, v1->static_fields->lastPlayBgmName, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C40392 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11458/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    byte_4C40392 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11458/*"SAVEKEY_LastPlayQuestConsumeType"*/, v1->static_fields->lastPlayQuestConsumeAp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__LoadClearDatas(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_ClearData_c *v2; // x0
  TerminalPramsManager_ClearData_c *v3; // x0
  Il2CppObject *String_71225564; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *v7; // x19
  TerminalPramsManager_c *v8; // x0
  CGThumbnailListItem_o *p_mQuestClearHeroineInfo; // x0
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppClass *klass; // x8
  const char *name; // x9
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  QuestClearHeroineInfo_o *Load; // x20
  TerminalPramsManager_c *v18; // x0
  CGThumbnailListItem_o *v19; // x0
  TerminalPramsManager_c *v20; // x0
  char monitor; // w20
  TerminalPramsManager_c *v22; // x8
  char v23; // w21
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  _QWORD *v25; // x10
  struct QuestRewardInfo_array *v26; // x20
  __int64 v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppClass *v30; // x8
  TerminalPramsManager_c *v31; // x0
  Il2CppClass *v32; // x20
  CGThumbnailListItem_o *p_mQuestPhaseRewardInfos; // x0
  __int64 v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  TerminalPramsManager_c *v37; // x8
  struct TerminalPramsManager_StaticFields *v38; // x9
  _QWORD *v39; // x9
  struct UserSuperBossEntity_array *v40; // x20
  TerminalPramsManager_c *v41; // x0
  struct TerminalPramsManager_StaticFields *v42; // x0
  __int64 v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  Il2CppClass *v46; // x8
  Il2CppClass *v47; // x20
  TerminalPramsManager_c *v48; // x0
  struct TerminalPramsManager_StaticFields *v49; // x0
  __int64 v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int *v53; // x8
  CGThumbnailListItem_c *v54; // x20
  TerminalPramsManager_c *v55; // x0
  CGThumbnailListItem_o *p_eventPointWinReward_k__BackingField; // x0
  __int64 v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int32_t v60; // w20
  TerminalPramsManager_c *v61; // x8
  int *v62; // x9
  CGThumbnailListItem_c *v63; // x20
  TerminalPramsManager_c *v64; // x0
  CGThumbnailListItem_o *p_eventRaceBoost_k__BackingField; // x0
  __int64 v66; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  Il2CppClass *v69; // x8
  Il2CppClass *v70; // x20
  TerminalPramsManager_c *v71; // x0
  CGThumbnailListItem_o *p_questClearCostumeRelease_k__BackingField; // x0
  __int64 v73; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  _QWORD *v76; // x8
  CGThumbnailListItem_c *v77; // x20
  TerminalPramsManager_c *v78; // x0
  CGThumbnailListItem_o *p_questClearCostumeGet_k__BackingField; // x0
  __int64 v80; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  Il2CppClass *v83; // x8
  Il2CppClass *v84; // x20
  TerminalPramsManager_c *v85; // x0
  CGThumbnailListItem_o *p_eventTowerReward_k__BackingField; // x0
  __int64 v87; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  _QWORD *v90; // x8
  __int64 v91; // x9
  __int64 v92; // x9
  CGThumbnailListItem_c *v93; // x20
  TerminalPramsManager_c *v94; // x0
  CGThumbnailListItem_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  __int64 v96; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  Il2CppClass *v99; // x8
  Il2CppClass *v100; // x20
  TerminalPramsManager_c *v101; // x0
  CGThumbnailListItem_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  __int64 v103; // x0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  _QWORD *v106; // x8
  CGThumbnailListItem_c *v107; // x20
  TerminalPramsManager_c *v108; // x0
  CGThumbnailListItem_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  __int64 v110; // x0
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  char v113; // w20
  TerminalPramsManager_c *v114; // x8
  _QWORD *v115; // x9
  CGThumbnailListItem_c *v116; // x20
  TerminalPramsManager_c *v117; // x0
  CGThumbnailListItem_o *p_warClearReward_k__BackingField; // x0
  __int64 v119; // x0
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  int32_t v122; // w20
  TerminalPramsManager_c *v123; // x8
  char v124; // w21
  struct TerminalPramsManager_StaticFields *v125; // x9
  _QWORD *v126; // x10
  struct BattleDropItem_array *v127; // x20
  __int64 v128; // x0
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  Il2CppClass *v131; // x8
  TerminalPramsManager_c *v132; // x0
  Il2CppClass *v133; // x20
  CGThumbnailListItem_o *p_mResultEventPanelRewardInfos; // x0
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  TerminalPramsManager_c *v137; // x0
  Il2CppClass *v138; // x20
  CGThumbnailListItem_o *p_limitImageAnnounces_k__BackingField; // x0
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  char v142; // w20
  TerminalPramsManager_c *v143; // x0
  int32_t monitor_high; // w21
  int32_t v145; // w21
  char v146; // w21
  CGThumbnailListItem_c *v147; // x20
  CGThumbnailListItem_o *p_OldUserEventPoint_k__BackingField; // x0
  __int64 v149; // x0
  int32_t v150; // w2
  const MethodInfo *v151; // x3
  Il2CppClass *v152; // x8
  Il2CppClass *v153; // x20
  TerminalPramsManager_c *v154; // x0
  CGThumbnailListItem_o *p_UseAddRewardItemRewardInfos_k__BackingField; // x0
  TerminalPramsManager_c *v156; // x0
  TerminalPramsManager_c *v157; // x8
  TerminalPramsManager_c *v158; // x0

  if ( (byte_4C403BE & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C37058(&Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403BE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FFC2 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFC2 = 1;
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
      String_71225564 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71225564(
                                          v3->static_fields->SAVEKEY_CLEAR_REWARD_DISP,
                                          0);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v7 = JsonManager__Deserialize_object_(
             String_71225564,
             (const MethodInfo_3156F74 *)Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
      v8 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v8 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestClearHeroineInfo = (CGThumbnailListItem_o *)&v8->static_fields->mQuestClearHeroineInfo;
      p_mQuestClearHeroineInfo->klass = 0;
      sub_1C36FFC(p_mQuestClearHeroineInfo, 0, v5, v6);
      if ( !v7 )
        sub_1C372B4(v10);
      klass = v7[1].klass;
      if ( !klass )
        sub_1C372B4(v10);
      name = klass->_1.name;
      if ( name && *((int *)name + 8) >= 1 )
      {
        Load = TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(
                 (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)v7[1].klass,
                 0);
        v18 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v18 = TerminalPramsManager_TypeInfo;
        }
        v19 = (CGThumbnailListItem_o *)&v18->static_fields->mQuestClearHeroineInfo;
        v19->klass = (CGThumbnailListItem_c *)Load;
        sub_1C36FFC(v19, (int32_t)Load, v15, v16);
      }
      v20 = TerminalPramsManager_TypeInfo;
      monitor = (char)v7[2].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3FB4F )
      {
        v20 = (TerminalPramsManager_c *)sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FB4F = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
      }
      v22->static_fields->_IsQuestClear_k__BackingField = monitor;
      v23 = BYTE1(v7[2].monitor);
      if ( !byte_4C3FB50 )
      {
        v20 = (TerminalPramsManager_c *)sub_1C37058(&TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
        byte_4C3FB50 = 1;
      }
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v22->static_fields;
      static_fields->_IsPhaseClear_k__BackingField = v23;
      v25 = v7[1].monitor;
      if ( !v25 )
        sub_1C372B4(v20);
      if ( v25[3] )
        v26 = (struct QuestRewardInfo_array *)v7[1].monitor;
      else
        v26 = 0;
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        static_fields = TerminalPramsManager_TypeInfo->static_fields;
      }
      static_fields->mQuestRewardInfos = v26;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->mQuestRewardInfos, (int32_t)v26, v11, v12);
      v30 = v7[2].klass;
      if ( !v30 )
        sub_1C372B4(v27);
      v31 = TerminalPramsManager_TypeInfo;
      if ( v30->_1.namespaze )
        v32 = v7[2].klass;
      else
        v32 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v31 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestPhaseRewardInfos = (CGThumbnailListItem_o *)&v31->static_fields->mQuestPhaseRewardInfos;
      p_mQuestPhaseRewardInfos->klass = (CGThumbnailListItem_c *)v32;
      sub_1C36FFC(p_mQuestPhaseRewardInfos, (int32_t)v32, v28, v29);
      v37 = TerminalPramsManager_TypeInfo;
      v38 = TerminalPramsManager_TypeInfo->static_fields;
      *(_QWORD *)&v38->clearLastBattleRaidId = *(void **)((char *)&v7[2].monitor + 4);
      v38->joinGroupId = HIDWORD(v7[3].klass);
      v39 = v7[3].monitor;
      if ( !v39 )
        sub_1C372B4(v34);
      if ( v39[3] )
        v40 = (struct UserSuperBossEntity_array *)v7[3].monitor;
      else
        v40 = 0;
      if ( !v37->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v37);
      if ( !byte_4C403FE )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C403FE = 1;
      }
      v41 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v41 = TerminalPramsManager_TypeInfo;
      }
      v42 = v41->static_fields;
      v42->_oldSuperBoss_k__BackingField = v40;
      sub_1C36FFC((CGThumbnailListItem_o *)&v42->_oldSuperBoss_k__BackingField, (int32_t)v40, v35, v36);
      v46 = v7[4].klass;
      if ( !v46 )
        sub_1C372B4(v43);
      if ( v46->_1.namespaze )
        v47 = v7[4].klass;
      else
        v47 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C403FF )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C403FF = 1;
      }
      v48 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v48 = TerminalPramsManager_TypeInfo;
      }
      v49 = v48->static_fields;
      v49->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v47;
      sub_1C36FFC((CGThumbnailListItem_o *)&v49->_oldPersonalBoss_k__BackingField, (int32_t)v47, v44, v45);
      v53 = (int *)v7[4].monitor;
      if ( !v53 )
        sub_1C372B4(v50);
      if ( v53[4] <= 0 )
        v54 = 0;
      else
        v54 = (CGThumbnailListItem_c *)v7[4].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C403F8 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C403F8 = 1;
      }
      v55 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v55 = TerminalPramsManager_TypeInfo;
      }
      p_eventPointWinReward_k__BackingField = (CGThumbnailListItem_o *)&v55->static_fields->_eventPointWinReward_k__BackingField;
      p_eventPointWinReward_k__BackingField->klass = v54;
      sub_1C36FFC(p_eventPointWinReward_k__BackingField, (int32_t)v54, v51, v52);
      v60 = (int32_t)v7[5].klass;
      if ( !byte_4C403F9 )
      {
        v57 = sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C403F9 = 1;
      }
      v61 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v61 = TerminalPramsManager_TypeInfo;
      }
      v61->static_fields->_eventPointWinType_k__BackingField = v60;
      v62 = (int *)v7[5].monitor;
      if ( !v62 )
        sub_1C372B4(v57);
      if ( v62[4] <= 0 )
        v63 = 0;
      else
        v63 = (CGThumbnailListItem_c *)v7[5].monitor;
      if ( !v61->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v61);
      if ( !byte_4C401C0 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C401C0 = 1;
      }
      v64 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v64 = TerminalPramsManager_TypeInfo;
      }
      p_eventRaceBoost_k__BackingField = (CGThumbnailListItem_o *)&v64->static_fields->_eventRaceBoost_k__BackingField;
      p_eventRaceBoost_k__BackingField->klass = v63;
      sub_1C36FFC(p_eventRaceBoost_k__BackingField, (int32_t)v63, v58, v59);
      v69 = v7[6].klass;
      if ( !v69 )
        sub_1C372B4(v66);
      if ( v69->_1.namespaze )
        v70 = v7[6].klass;
      else
        v70 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C400BD )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C400BD = 1;
      }
      v71 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v71 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeRelease_k__BackingField = (CGThumbnailListItem_o *)&v71->static_fields->_questClearCostumeRelease_k__BackingField;
      p_questClearCostumeRelease_k__BackingField->klass = (CGThumbnailListItem_c *)v70;
      sub_1C36FFC(p_questClearCostumeRelease_k__BackingField, (int32_t)v70, v67, v68);
      v76 = v7[6].monitor;
      if ( !v76 )
        sub_1C372B4(v73);
      if ( v76[3] )
        v77 = (CGThumbnailListItem_c *)v7[6].monitor;
      else
        v77 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3FFBF )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FFBF = 1;
      }
      v78 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v78 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeGet_k__BackingField = (CGThumbnailListItem_o *)&v78->static_fields->_questClearCostumeGet_k__BackingField;
      p_questClearCostumeGet_k__BackingField->klass = v77;
      sub_1C36FFC(p_questClearCostumeGet_k__BackingField, (int32_t)v77, v74, v75);
      v83 = v7[7].klass;
      if ( !v83 )
        sub_1C372B4(v80);
      if ( SLODWORD(v83->_1.name) <= 0 )
        v84 = 0;
      else
        v84 = v7[7].klass;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C403FC )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C403FC = 1;
      }
      v85 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v85 = TerminalPramsManager_TypeInfo;
      }
      p_eventTowerReward_k__BackingField = (CGThumbnailListItem_o *)&v85->static_fields->_eventTowerReward_k__BackingField;
      p_eventTowerReward_k__BackingField->klass = (CGThumbnailListItem_c *)v84;
      sub_1C36FFC(p_eventTowerReward_k__BackingField, (int32_t)v84, v81, v82);
      v90 = v7[7].monitor;
      if ( !v90 )
        sub_1C372B4(v87);
      v91 = v90[3];
      if ( v91 )
      {
        if ( !(_DWORD)v91 )
          sub_1C372BC(v87);
        v92 = v90[4];
        if ( !v92 )
          sub_1C372B4(v87);
        if ( *(__int64 *)(v92 + 32) <= 0 )
          v93 = 0;
        else
          v93 = (CGThumbnailListItem_c *)v7[7].monitor;
      }
      else
      {
        v93 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C403FD )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C403FD = 1;
      }
      v94 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v94 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventTowerRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v94->static_fields->_resultEventTowerRewardInfo_k__BackingField;
      p_resultEventTowerRewardInfo_k__BackingField->klass = v93;
      sub_1C36FFC(p_resultEventTowerRewardInfo_k__BackingField, (int32_t)v93, v88, v89);
      v99 = v7[8].klass;
      if ( !v99 )
        sub_1C372B4(v96);
      if ( v99->_1.namespaze )
        v100 = v7[8].klass;
      else
        v100 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3FFB9 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FFB9 = 1;
      }
      v101 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v101 = TerminalPramsManager_TypeInfo;
      }
      p_resultBoostItemRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v101->static_fields->_resultBoostItemRewardInfo_k__BackingField;
      p_resultBoostItemRewardInfo_k__BackingField->klass = (CGThumbnailListItem_c *)v100;
      sub_1C36FFC(p_resultBoostItemRewardInfo_k__BackingField, (int32_t)v100, v97, v98);
      v106 = v7[8].monitor;
      if ( !v106 )
        sub_1C372B4(v103);
      if ( v106[3] )
        v107 = (CGThumbnailListItem_c *)v7[8].monitor;
      else
        v107 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3FFBA )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FFBA = 1;
      }
      v108 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v108 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventBoardGameTokenRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v108->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
      p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = v107;
      sub_1C36FFC(p_resultEventBoardGameTokenRewardInfo_k__BackingField, (int32_t)v107, v104, v105);
      v113 = (char)v7[9].klass;
      if ( !byte_4C3EC68 )
      {
        v110 = sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3EC68 = 1;
      }
      v114 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v114 = TerminalPramsManager_TypeInfo;
      }
      v114->static_fields->_IsDispOnly_k__BackingField = v113;
      v115 = v7[9].monitor;
      if ( !v115 )
        sub_1C372B4(v110);
      if ( v115[3] )
        v116 = (CGThumbnailListItem_c *)v7[9].monitor;
      else
        v116 = 0;
      if ( !v114->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v114);
      if ( !byte_4C3FFC4 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FFC4 = 1;
      }
      v117 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v117 = TerminalPramsManager_TypeInfo;
      }
      p_warClearReward_k__BackingField = (CGThumbnailListItem_o *)&v117->static_fields->_warClearReward_k__BackingField;
      p_warClearReward_k__BackingField->klass = v116;
      sub_1C36FFC(p_warClearReward_k__BackingField, (int32_t)v116, v111, v112);
      v122 = (int32_t)v7[10].klass;
      if ( !byte_4C3D784 )
      {
        v119 = sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3D784 = 1;
      }
      v123 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v123 = TerminalPramsManager_TypeInfo;
      }
      v123->static_fields->_EventActivityPointEffectState_k__BackingField = v122;
      v124 = BYTE4(v7[10].klass);
      if ( !byte_4C3FFC1 )
      {
        v119 = sub_1C37058(&TerminalPramsManager_TypeInfo);
        v123 = TerminalPramsManager_TypeInfo;
        byte_4C3FFC1 = 1;
      }
      if ( !v123->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v123);
        v123 = TerminalPramsManager_TypeInfo;
      }
      v125 = v123->static_fields;
      v125->_IsWarBoardClear_k__BackingField = v124;
      v126 = v7[10].monitor;
      if ( !v126 )
        sub_1C372B4(v119);
      if ( v126[3] )
        v127 = (struct BattleDropItem_array *)v7[10].monitor;
      else
        v127 = 0;
      if ( !v123->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v123);
        v125 = TerminalPramsManager_TypeInfo->static_fields;
      }
      v125->mQuestResultAfterEventRewardInfos = v127;
      sub_1C36FFC((CGThumbnailListItem_o *)&v125->mQuestResultAfterEventRewardInfos, (int32_t)v127, v120, v121);
      v131 = v7[11].klass;
      if ( !v131 )
        sub_1C372B4(v128);
      v132 = TerminalPramsManager_TypeInfo;
      if ( v131->_1.namespaze )
        v133 = v7[11].klass;
      else
        v133 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v132 = TerminalPramsManager_TypeInfo;
      }
      p_mResultEventPanelRewardInfos = (CGThumbnailListItem_o *)&v132->static_fields->mResultEventPanelRewardInfos;
      p_mResultEventPanelRewardInfos->klass = (CGThumbnailListItem_c *)v133;
      sub_1C36FFC(p_mResultEventPanelRewardInfos, (int32_t)v133, v129, v130);
      v137 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = (int32_t)v7[11].monitor;
      v138 = v7[12].klass;
      if ( !byte_4C3FFBD )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        v137 = TerminalPramsManager_TypeInfo;
        byte_4C3FFBD = 1;
      }
      if ( !v137->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v137);
        v137 = TerminalPramsManager_TypeInfo;
      }
      p_limitImageAnnounces_k__BackingField = (CGThumbnailListItem_o *)&v137->static_fields->_limitImageAnnounces_k__BackingField;
      p_limitImageAnnounces_k__BackingField->klass = (CGThumbnailListItem_c *)v138;
      sub_1C36FFC(p_limitImageAnnounces_k__BackingField, (int32_t)v138, v135, v136);
      v142 = (char)v7[12].monitor;
      if ( !byte_4C3FB53 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FB53 = 1;
      }
      v143 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v143 = TerminalPramsManager_TypeInfo;
      }
      v143->static_fields->_IsOrdealCallWarClear_k__BackingField = v142;
      monitor_high = HIDWORD(v7[12].monitor);
      if ( !byte_4C3FFB4 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        v143 = TerminalPramsManager_TypeInfo;
        byte_4C3FFB4 = 1;
      }
      if ( !v143->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v143);
        v143 = TerminalPramsManager_TypeInfo;
      }
      v143->static_fields->_EventMuralId_k__BackingField = monitor_high;
      v145 = (int32_t)v7[13].klass;
      if ( !byte_4C401BD )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        v143 = TerminalPramsManager_TypeInfo;
        byte_4C401BD = 1;
      }
      if ( !v143->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v143);
        v143 = TerminalPramsManager_TypeInfo;
      }
      v143->static_fields->_EventActionQuestId_k__BackingField = v145;
      v146 = BYTE4(v7[13].klass);
      if ( !byte_4C3FFB6 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        v143 = TerminalPramsManager_TypeInfo;
        byte_4C3FFB6 = 1;
      }
      if ( !v143->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v143);
        v143 = TerminalPramsManager_TypeInfo;
      }
      v143->static_fields->_PlayHappinessCounterEffect_k__BackingField = v146;
      v147 = (CGThumbnailListItem_c *)v7[13].monitor;
      if ( !byte_4C403F6 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        v143 = TerminalPramsManager_TypeInfo;
        byte_4C403F6 = 1;
      }
      if ( !v143->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v143);
        v143 = TerminalPramsManager_TypeInfo;
      }
      p_OldUserEventPoint_k__BackingField = (CGThumbnailListItem_o *)&v143->static_fields->_OldUserEventPoint_k__BackingField;
      p_OldUserEventPoint_k__BackingField->klass = v147;
      sub_1C36FFC(p_OldUserEventPoint_k__BackingField, (int32_t)v147, v140, v141);
      v152 = v7[14].klass;
      if ( !v152 )
        sub_1C372B4(v149);
      if ( v152->_1.namespaze )
        v153 = v7[14].klass;
      else
        v153 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3CFEA )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3CFEA = 1;
      }
      v154 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v154 = TerminalPramsManager_TypeInfo;
      }
      p_UseAddRewardItemRewardInfos_k__BackingField = (CGThumbnailListItem_o *)&v154->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
      p_UseAddRewardItemRewardInfos_k__BackingField->klass = (CGThumbnailListItem_c *)v153;
      sub_1C36FFC(p_UseAddRewardItemRewardInfos_k__BackingField, (int32_t)v153, v150, v151);
      v156 = TerminalPramsManager_TypeInfo;
      if ( BYTE1(v7[2].monitor) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C3D786 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C3D786 = 1;
        }
        v156 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v156 = TerminalPramsManager_TypeInfo;
        }
        v156->static_fields->_IsAutoResume_k__BackingField = 1;
      }
      if ( !v156->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v156);
      if ( !byte_4C3FFC3 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FFC3 = 1;
      }
      v157 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v157 = TerminalPramsManager_TypeInfo;
      }
      if ( v157->static_fields->_warClearReward_k__BackingField )
        goto LABEL_276;
      if ( !v157->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v157);
      if ( !byte_4C3FFC0 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FFC0 = 1;
      }
      v157 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v157 = TerminalPramsManager_TypeInfo;
      }
      if ( v157->static_fields->_IsPlayScriptWithMap_k__BackingField )
      {
LABEL_276:
        if ( !v157->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v157);
        if ( !byte_4C40406 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C40406 = 1;
        }
        v158 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v158 = TerminalPramsManager_TypeInfo;
        }
        v158->static_fields->_isQuestRewardSetted_k__BackingField = 1;
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

  if ( (byte_4C403C1 & 1) == 0 )
  {
    sub_1C37058(&EventRaidDefeatedEffectInfo_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11456/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_4C403C1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C40408 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40408 = 1;
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
               (System_String_o *)StringLiteral_11456/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/,
               string_TypeInfo->static_fields->Empty,
               0);
    v3 = (EventRaidDefeatedEffectInfo_o *)sub_1C372A4(EventRaidDefeatedEffectInfo_TypeInfo);
    EventRaidDefeatedEffectInfo___ctor(v3, String, v4);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C40407 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C40407 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v7->static_fields;
    static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = v3;
    sub_1C36FFC(
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int max_length; // w8
  System_String_array *v8; // x20
  unsigned int v9; // w23
  System_String_array *v10; // x21
  TerminalPramsManager_c *v11; // x0
  CGThumbnailListItem_o *p_QuestRandomGroupList_k__BackingField; // x0
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C403C6 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11465/*"SAVEKEY_QuestRandomGroupList"*/);
    byte_4C403C6 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F892 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F892 = 1;
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
               (System_String_o *)StringLiteral_11465/*"SAVEKEY_QuestRandomGroupList"*/,
               string_TypeInfo->static_fields->Empty,
               0);
    v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v3,
      (const MethodInfo_33F1108 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *(_QWORD *)result = 0;
    if ( !String )
      goto LABEL_35;
    v4 = System_String__Split(String, 0x2Cu, 0, 0);
    if ( !v4 )
      goto LABEL_35;
    max_length = v4->max_length;
    v8 = v4;
    if ( max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= max_length )
LABEL_36:
          sub_1C372BC(v4);
        v4 = (System_String_array *)v8->m_Items[v9];
        if ( !v4 )
          break;
        v4 = System_String__Split((System_String_o *)v4, 0x3Au, 0, 0);
        if ( !v4 )
          break;
        v10 = v4;
        if ( SLODWORD(v4->max_length) >= 2 )
        {
          v4 = (System_String_array *)System_Int32__TryParse(v4->m_Items[0], &result[1], 0);
          if ( result[1] >= 1 && ((unsigned __int8)v4 & 1) != 0 )
          {
            if ( LODWORD(v10->max_length) <= 1 )
              goto LABEL_36;
            v4 = (System_String_array *)System_Int32__TryParse(v10->m_Items[1], result, 0);
            v5 = result[0];
            if ( result[0] >= 1 && ((unsigned __int8)v4 & 1) != 0 )
            {
              if ( !v3 )
                break;
              System_Collections_Generic_Dictionary_int__int___Add(
                v3,
                result[1],
                result[0],
                (const MethodInfo_33F1ACC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
        }
        max_length = v8->max_length;
        if ( (int)++v9 >= max_length )
          goto LABEL_27;
      }
LABEL_35:
      sub_1C372B4(v4);
    }
LABEL_27:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C40409 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C40409 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    p_QuestRandomGroupList_k__BackingField = (CGThumbnailListItem_o *)&v11->static_fields->_QuestRandomGroupList_k__BackingField;
    p_QuestRandomGroupList_k__BackingField->klass = (CGThumbnailListItem_c *)v3;
    sub_1C36FFC(p_QuestRandomGroupList_k__BackingField, (int32_t)v3, v5, v6);
  }
}


void TerminalPramsManager__LoadQuestReleasedFocusState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0

  if ( (byte_4C403AE & 1) == 0 )
  {
    sub_1C37058(&QuestFocusStateManager_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403AE = 1;
  }
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
  QuestFocusStateManager__ClearQuestFocusStateDataList(0);
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v1);
  if ( !QuestFocusStateManager )
    sub_1C372B4(0);
  QuestFocusStateManager__ReadData(QuestFocusStateManager, 0);
}


void TerminalPramsManager__Load_SaveData(const MethodInfo *method)
{
  System_String_o *v1; // x19
  int32_t Int_71224996; // w19
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
  System_String_o *String_71225564; // x20
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
  il2cpp_array_size_t max_length; // x8
  System_String_array *v144; // x19
  int32_t v145; // w20
  TerminalPramsManager_c *v146; // x8
  int32_t v147; // w0
  int32_t v148; // w19
  TerminalPramsManager_c *v149; // x0
  System_String_o *v150; // x19
  int32_t v151; // w19
  TerminalPramsManager_c *v152; // x0
  System_String_o *v153; // x19
  int32_t v154; // w19
  TerminalPramsManager_c *v155; // x0
  System_String_o *v156; // x19
  Il2CppObject *v157; // x19
  int32_t v158; // w2
  const MethodInfo *v159; // x3
  Il2CppObject *v160; // x19
  TerminalPramsManager_c *v161; // x0
  struct TerminalPramsManager_StaticFields *v162; // x0
  System_String_o *v163; // x19
  int32_t v164; // w19
  TerminalPramsManager_c *v165; // x0
  System_String_o *v166; // x19
  int32_t v167; // w19
  TerminalPramsManager_c *v168; // x0

  if ( (byte_4C40380 & 1) == 0 )
  {
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    sub_1C37058(&Method_JsonManager_Deserialize_EventConquestInfo_____);
    sub_1C37058(&Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    sub_1C37058(&Method_JsonManager_Deserialize_EventSaveData___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11457/*"SAVEKEY_LastPlayBgmName"*/);
    sub_1C37058(&StringLiteral_13700/*"TerminalEndTime"*/);
    sub_1C37058(&StringLiteral_11463/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_1C37058(&StringLiteral_13696/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C37058(&StringLiteral_11451/*"SAVEKEY_CampaignDirectBonus"*/);
    sub_1C37058(&StringLiteral_11458/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    sub_1C37058(&StringLiteral_11470/*"SAVEKEY_TerminalLastSelectQuestIndex"*/);
    sub_1C37058(&StringLiteral_11468/*"SAVEKEY_TerminalCraftInfoDisp"*/);
    sub_1C37058(&StringLiteral_13701/*"TerminalEventDailyPointEventId"*/);
    sub_1C37058(&StringLiteral_13698/*"TerminalBeforeEventSubmarinePointData"*/);
    sub_1C37058(&StringLiteral_13707/*"TerminalPhaseCnt"*/);
    sub_1C37058(&StringLiteral_11467/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_1C37058(&StringLiteral_13715/*"TerminalTimeStatusEventId"*/);
    sub_1C37058(&StringLiteral_13699/*"TerminalDispState"*/);
    sub_1C37058(&StringLiteral_11460/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_1C37058(&StringLiteral_13702/*"TerminalIsDoneShortcut"*/);
    sub_1C37058(&StringLiteral_11459/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C37058(&StringLiteral_11464/*"SAVEKEY_PlayerGenderType"*/);
    sub_1C37058(&StringLiteral_11449/*"SAVEKEY_BlankEarthRank"*/);
    sub_1C37058(&StringLiteral_13703/*"TerminalLastPanelEventPoint"*/);
    sub_1C37058(&StringLiteral_11469/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    sub_1C37058(&StringLiteral_11452/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_1C37058(&StringLiteral_11461/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_1C37058(&StringLiteral_5187/*"Debug_IsQuestReleaseAll"*/);
    sub_1C37058(&StringLiteral_5184/*"Debug_IsDummyErrorSelect"*/);
    sub_1C37058(&StringLiteral_13710/*"TerminalQuestId"*/);
    sub_1C37058(&StringLiteral_11466/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    sub_1C37058(&StringLiteral_11472/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_1C37058(&StringLiteral_13714/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_1C37058(&StringLiteral_13719/*"TerminalWarId"*/);
    sub_1C37058(&StringLiteral_13712/*"TerminalSpotId"*/);
    sub_1C37058(&StringLiteral_13716/*"TerminalTimeStatusLoopCount"*/);
    sub_1C37058(&StringLiteral_13697/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_1C37058(&StringLiteral_11450/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_1C37058(&StringLiteral_11455/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_1C37058(&StringLiteral_13720/*"TerminalWarStartedIds"*/);
    sub_1C37058(&StringLiteral_11454/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C37058(&StringLiteral_13704/*"TerminalLastPlayedFreeQuestSpotId"*/);
    sub_1C37058(&StringLiteral_11453/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_1C37058(&StringLiteral_11462/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_13705/*"TerminalLastPlayedQuestId"*/);
    sub_1C37058(&StringLiteral_5183/*"Debug_IsBuildInfoDisp"*/);
    sub_1C37058(&StringLiteral_11471/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4C40380 = 1;
  }
  v1 = (System_String_o *)StringLiteral_13699/*"TerminalDispState"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13699/*"TerminalDispState"*/, 0) )
  {
    Int_71224996 = UnityEngine_PlayerPrefs__GetInt_71224996(v1, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F898 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F898 = 1;
    }
    v3 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v3 = TerminalPramsManager_TypeInfo;
    }
    v3->static_fields->_DispState_k__BackingField = Int_71224996;
  }
  v4 = (System_String_o *)StringLiteral_13719/*"TerminalWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13719/*"TerminalWarId"*/, 0) )
  {
    v5 = UnityEngine_PlayerPrefs__GetInt_71224996(v4, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F89C )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F89C = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_WarId_k__BackingField = v5;
  }
  v7 = (System_String_o *)StringLiteral_13712/*"TerminalSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13712/*"TerminalSpotId"*/, 0) )
  {
    v8 = UnityEngine_PlayerPrefs__GetInt_71224996(v7, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F89B )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F89B = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_SpotId_k__BackingField = v8;
  }
  v10 = (System_String_o *)StringLiteral_13710/*"TerminalQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13710/*"TerminalQuestId"*/, 0) )
  {
    v11 = UnityEngine_PlayerPrefs__GetInt_71224996(v10, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F896 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F896 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v12->static_fields->_QuestId_k__BackingField = v11;
  }
  v13 = (System_String_o *)StringLiteral_13705/*"TerminalLastPlayedQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13705/*"TerminalLastPlayedQuestId"*/, 0) )
  {
    v14 = UnityEngine_PlayerPrefs__GetInt_71224996(v13, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FCAA )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FCAA = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_LastPlayedQuestId_k__BackingField = v14;
  }
  v16 = (System_String_o *)StringLiteral_13707/*"TerminalPhaseCnt"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13707/*"TerminalPhaseCnt"*/, 0) )
  {
    v17 = UnityEngine_PlayerPrefs__GetInt_71224996(v16, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F89A )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F89A = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    v18->static_fields->_PhaseCnt_k__BackingField = v17;
  }
  v19 = (System_String_o *)StringLiteral_13700/*"TerminalEndTime"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13700/*"TerminalEndTime"*/, 0) )
  {
    String_71225564 = UnityEngine_PlayerPrefs__GetString_71225564(v19, 0);
    v21 = 0;
    if ( System_String__op_Inequality(String_71225564, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v21 = System_Convert__ToInt64_64651848(String_71225564, 0);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F897 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F897 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    v22->static_fields->_EndTime_k__BackingField = v21;
  }
  v23 = (System_String_o *)StringLiteral_13702/*"TerminalIsDoneShortcut"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13702/*"TerminalIsDoneShortcut"*/, 0) )
  {
    v24 = UnityEngine_PlayerPrefs__GetInt_71224996(v23, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F899 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F899 = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = TerminalPramsManager_TypeInfo;
    }
    v25->static_fields->_IsDoneShortcut_k__BackingField = v24 != 0;
  }
  v26 = (System_String_o *)StringLiteral_13720/*"TerminalWarStartedIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13720/*"TerminalWarStartedIds"*/, 0) )
  {
    v29 = UnityEngine_PlayerPrefs__GetString_71225564(v26, 0);
    v30 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v30 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v30->static_fields;
    static_fields->mTerminalWarStartedIds = v29;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->mTerminalWarStartedIds, (int32_t)v29, v27, v28);
  }
  v32 = (System_String_o *)StringLiteral_5187/*"Debug_IsQuestReleaseAll"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5187/*"Debug_IsQuestReleaseAll"*/, 0) )
  {
    v33 = UnityEngine_PlayerPrefs__GetInt_71224996(v32, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C403DA )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403DA = 1;
    }
    v34 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v34 = TerminalPramsManager_TypeInfo;
    }
    v34->static_fields->mDebug_IsQuestReleaseAll = v33 != 0;
  }
  v35 = (System_String_o *)StringLiteral_5184/*"Debug_IsDummyErrorSelect"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5184/*"Debug_IsDummyErrorSelect"*/, 0) )
  {
    v36 = UnityEngine_PlayerPrefs__GetInt_71224996(v35, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C403DB )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403DB = 1;
    }
    v37 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v37 = TerminalPramsManager_TypeInfo;
    }
    v37->static_fields->mDebug_IsDummyErrorSelect = v36 != 0;
  }
  v38 = (System_String_o *)StringLiteral_5183/*"Debug_IsBuildInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5183/*"Debug_IsBuildInfoDisp"*/, 0) )
  {
    v39 = UnityEngine_PlayerPrefs__GetInt_71224996(v38, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C403DC )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403DC = 1;
    }
    v40 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v40 = TerminalPramsManager_TypeInfo;
    }
    v40->static_fields->mDebug_IsBuildInfoDisp = v39 != 0;
  }
  v41 = (System_String_o *)StringLiteral_13715/*"TerminalTimeStatusEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13715/*"TerminalTimeStatusEventId"*/, 0) )
  {
    v42 = UnityEngine_PlayerPrefs__GetInt_71224996(v41, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FFE2 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FFE2 = 1;
    }
    v43 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v43 = TerminalPramsManager_TypeInfo;
    }
    v43->static_fields->_TimeStatusEventId_k__BackingField = v42;
  }
  v44 = (System_String_o *)StringLiteral_13716/*"TerminalTimeStatusLoopCount"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13716/*"TerminalTimeStatusLoopCount"*/, 0) )
  {
    v45 = UnityEngine_PlayerPrefs__GetInt_71224996(v44, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FFE3 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FFE3 = 1;
    }
    v46 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v46 = TerminalPramsManager_TypeInfo;
    }
    v46->static_fields->_TimeStatusLoopCount_k__BackingField = v45;
  }
  v47 = (System_String_o *)StringLiteral_13701/*"TerminalEventDailyPointEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13701/*"TerminalEventDailyPointEventId"*/, 0) )
  {
    v48 = UnityEngine_PlayerPrefs__GetInt_71224996(v47, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C403DE )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403DE = 1;
    }
    v49 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v49 = TerminalPramsManager_TypeInfo;
    }
    v49->static_fields->_EventDailyPointEventId_k__BackingField = v48;
  }
  v50 = (System_String_o *)StringLiteral_13714/*"TerminalTimeStatusEventDailyPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13714/*"TerminalTimeStatusEventDailyPoint"*/, 0) )
  {
    v51 = UnityEngine_PlayerPrefs__GetString_71225564(v50, 0);
    v52 = 0;
    if ( !System_String__op_Equality(v51, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v52 = System_Convert__ToInt64_64651848(v51, 0);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C403DF )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403DF = 1;
    }
    v53 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v53 = TerminalPramsManager_TypeInfo;
    }
    v53->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = v52;
  }
  v54 = (System_String_o *)StringLiteral_13696/*"TerminalBeforeEventActivityPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13696/*"TerminalBeforeEventActivityPoint"*/, 0) )
  {
    v55 = UnityEngine_PlayerPrefs__GetInt_71224996(v54, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C403E0 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403E0 = 1;
    }
    v56 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v56 = TerminalPramsManager_TypeInfo;
    }
    v56->static_fields->_BeforeEventActivityPoint_k__BackingField = v55;
  }
  v57 = (System_String_o *)StringLiteral_13697/*"TerminalBeforeEventActivityPointGauge"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13697/*"TerminalBeforeEventActivityPointGauge"*/, 0) )
  {
    v58 = UnityEngine_PlayerPrefs__GetInt_71224996(v57, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C403E1 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403E1 = 1;
    }
    v59 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v59 = TerminalPramsManager_TypeInfo;
    }
    v59->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v58;
  }
  v60 = (System_String_o *)StringLiteral_13698/*"TerminalBeforeEventSubmarinePointData"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13698/*"TerminalBeforeEventSubmarinePointData"*/, 0) )
  {
    v61 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71225564(v60, 0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v64 = JsonManager__Deserialize_object_(
            v61,
            (const MethodInfo_3156F74 *)Method_JsonManager_Deserialize_EventSaveData___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F9BE )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F9BE = 1;
    }
    v65 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v65 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (CGThumbnailListItem_o *)&v65->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (CGThumbnailListItem_c *)v64;
    sub_1C36FFC(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v64, v62, v63);
  }
  v67 = (System_String_o *)StringLiteral_11470/*"SAVEKEY_TerminalLastSelectQuestIndex"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11470/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, 0) )
  {
    v69 = UnityEngine_PlayerPrefs__GetInt_71224996(v67, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C403D9 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403D9 = 1;
    }
    v70 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v70 = TerminalPramsManager_TypeInfo;
    }
    v70->static_fields->_LastSelectQuestIndex_k__BackingField = v69;
    if ( !byte_4C3D397 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      v70 = TerminalPramsManager_TypeInfo;
      byte_4C3D397 = 1;
    }
    if ( !v70->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v70);
      v70 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v70->static_fields->_WarId_k__BackingField;
    if ( !byte_4C403EC )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      v70 = TerminalPramsManager_TypeInfo;
      byte_4C403EC = 1;
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
  v72 = (System_String_o *)StringLiteral_11467/*"SAVEKEY_TerminalConquestInfos"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11467/*"SAVEKEY_TerminalConquestInfos"*/, 0) )
  {
    v73 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71225564(v72, 0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v76 = JsonManager__Deserialize_object_(
            v73,
            (const MethodInfo_3156F74 *)Method_JsonManager_Deserialize_EventConquestInfo_____);
    v77 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v77 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = (CGThumbnailListItem_o *)&v77->static_fields->eventConquestInfos;
    p_eventConquestInfos->klass = (CGThumbnailListItem_c *)v76;
    sub_1C36FFC(p_eventConquestInfos, (int32_t)v76, v74, v75);
  }
  v79 = (System_String_o *)StringLiteral_11466/*"SAVEKEY_TerminalConquestInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11466/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0) )
  {
    v80 = UnityEngine_PlayerPrefs__GetInt_71224996(v79, 0);
    v81 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v81 = TerminalPramsManager_TypeInfo;
    }
    v81->static_fields->eventConquestInfoDisp = v80 != 0;
  }
  v82 = (System_String_o *)StringLiteral_11468/*"SAVEKEY_TerminalCraftInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11468/*"SAVEKEY_TerminalCraftInfoDisp"*/, 0) )
  {
    v83 = UnityEngine_PlayerPrefs__GetInt_71224996(v82, 0);
    v84 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v84 = TerminalPramsManager_TypeInfo;
    }
    v84->static_fields->eventCraftInfoDisp = v83 != 0;
  }
  v85 = (System_String_o *)StringLiteral_11469/*"SAVEKEY_TerminalHarvestGrowthInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11469/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0) )
  {
    v86 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71225564(v85, 0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v89 = JsonManager__Deserialize_object_(
            v86,
            (const MethodInfo_3156F74 *)Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    v90 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v90 = TerminalPramsManager_TypeInfo;
    }
    p_eventHarvestGrowthInfo = (CGThumbnailListItem_o *)&v90->static_fields->eventHarvestGrowthInfo;
    p_eventHarvestGrowthInfo->klass = (CGThumbnailListItem_c *)v89;
    sub_1C36FFC(p_eventHarvestGrowthInfo, (int32_t)v89, v87, v88);
  }
  v92 = (System_String_o *)StringLiteral_11457/*"SAVEKEY_LastPlayBgmName"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11457/*"SAVEKEY_LastPlayBgmName"*/, 0) )
  {
    v95 = UnityEngine_PlayerPrefs__GetString_71225564(v92, 0);
    v96 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v96 = TerminalPramsManager_TypeInfo;
    }
    p_lastPlayBgmName = (CGThumbnailListItem_o *)&v96->static_fields->lastPlayBgmName;
    p_lastPlayBgmName->klass = (CGThumbnailListItem_c *)v95;
    sub_1C36FFC(p_lastPlayBgmName, (int32_t)v95, v93, v94);
  }
  v98 = (System_String_o *)StringLiteral_11458/*"SAVEKEY_LastPlayQuestConsumeType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11458/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0) )
  {
    v99 = UnityEngine_PlayerPrefs__GetInt_71224996(v98, 0);
    v100 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v100 = TerminalPramsManager_TypeInfo;
    }
    v100->static_fields->lastPlayQuestConsumeAp = v99;
  }
  v101 = (System_String_o *)StringLiteral_13704/*"TerminalLastPlayedFreeQuestSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13704/*"TerminalLastPlayedFreeQuestSpotId"*/, 0) )
  {
    v102 = UnityEngine_PlayerPrefs__GetInt_71224996(v101, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FCAB )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FCAB = 1;
    }
    v103 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v103 = TerminalPramsManager_TypeInfo;
    }
    v103->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = v102;
  }
  v104 = (System_String_o *)StringLiteral_13703/*"TerminalLastPanelEventPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13703/*"TerminalLastPanelEventPoint"*/, 0) )
  {
    v105 = UnityEngine_PlayerPrefs__GetInt_71224996(v104, 0);
    v106 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v106 = TerminalPramsManager_TypeInfo;
    }
    v106->static_fields->panelEventPoint = v105;
  }
  v107 = (System_String_o *)StringLiteral_11463/*"SAVEKEY_PlayedTerminalEffects"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11463/*"SAVEKEY_PlayedTerminalEffects"*/, 0) )
  {
    v110 = UnityEngine_PlayerPrefs__GetString_71225564(v107, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C403E3 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403E3 = 1;
    }
    v111 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v111 = TerminalPramsManager_TypeInfo;
    }
    p_PlayedTerminalEffects_k__BackingField = (CGThumbnailListItem_o *)&v111->static_fields->_PlayedTerminalEffects_k__BackingField;
    p_PlayedTerminalEffects_k__BackingField->klass = (CGThumbnailListItem_c *)v110;
    sub_1C36FFC(p_PlayedTerminalEffects_k__BackingField, (int32_t)v110, v108, v109);
  }
  v113 = (System_String_o *)StringLiteral_11460/*"SAVEKEY_PlayTerminalEffectDisappear"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11460/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0) )
  {
    v114 = UnityEngine_PlayerPrefs__GetInt_71224996(v113, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C400BE )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C400BE = 1;
    }
    v115 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v115 = TerminalPramsManager_TypeInfo;
    }
    v115->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = v114 != 0;
  }
  v116 = (System_String_o *)StringLiteral_11461/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11461/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0) )
  {
    v117 = UnityEngine_PlayerPrefs__GetInt_71224996(v116, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C400BF )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C400BF = 1;
    }
    v118 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v118 = TerminalPramsManager_TypeInfo;
    }
    v118->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = v117;
  }
  v119 = (System_String_o *)StringLiteral_11462/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11462/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0) )
  {
    v120 = UnityEngine_PlayerPrefs__GetInt_71224996(v119, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C401B2 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401B2 = 1;
    }
    v121 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v121 = TerminalPramsManager_TypeInfo;
    }
    v121->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = v120 != 0;
  }
  v122 = (System_String_o *)StringLiteral_11472/*"SAVEKEY_TerminalSelectedStoryQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11472/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0) )
  {
    v123 = UnityEngine_PlayerPrefs__GetInt_71224996(v122, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FCB0 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FCB0 = 1;
    }
    v124 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v124 = TerminalPramsManager_TypeInfo;
    }
    v124->static_fields->_SelectedStoryQuestId_k__BackingField = v123;
  }
  v125 = (System_String_o *)StringLiteral_11454/*"SAVEKEY_ConnectMarkEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11454/*"SAVEKEY_ConnectMarkEventId"*/, 0) )
  {
    v126 = UnityEngine_PlayerPrefs__GetInt_71224996(v125, 0);
    v127 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v127 = TerminalPramsManager_TypeInfo;
    }
    v127->static_fields->ConnectMarkEventId = v126;
  }
  v128 = (System_String_o *)StringLiteral_11453/*"SAVEKEY_ConnectMarkAnimationId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11453/*"SAVEKEY_ConnectMarkAnimationId"*/, 0) )
  {
    v129 = UnityEngine_PlayerPrefs__GetInt_71224996(v128, 0);
    v130 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v130 = TerminalPramsManager_TypeInfo;
    }
    v130->static_fields->ConnectMarkAnimationId = v129;
  }
  v131 = (System_String_o *)StringLiteral_11471/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11471/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0) )
  {
    v132 = UnityEngine_PlayerPrefs__GetInt_71224996(v131, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3EBA0 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3EBA0 = 1;
    }
    v133 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v133 = TerminalPramsManager_TypeInfo;
    }
    v133->static_fields->_SelectedRecollectionWarId_k__BackingField = v132;
  }
  v134 = (System_String_o *)StringLiteral_11452/*"SAVEKEY_ClearEventQuestIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11452/*"SAVEKEY_ClearEventQuestIds"*/, 0) )
  {
    v137 = UnityEngine_PlayerPrefs__GetString_71225564(v134, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F894 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F894 = 1;
    }
    v138 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v138 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (CGThumbnailListItem_o *)&v138->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (CGThumbnailListItem_c *)v137;
    sub_1C36FFC(p_ClearEventQuestIds_k__BackingField, (int32_t)v137, v135, v136);
  }
  v140 = (System_String_o *)StringLiteral_11459/*"SAVEKEY_MapModelClearQuestInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11459/*"SAVEKEY_MapModelClearQuestInfo"*/, 0) )
  {
    v141 = UnityEngine_PlayerPrefs__GetString_71225564(v140, 0);
    IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(v141, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v141 || (IsNullOrEmpty = System_String__Split(v141, 0x2Cu, 0, 0)) == 0 )
        sub_1C372B4(IsNullOrEmpty);
      max_length = IsNullOrEmpty->max_length;
      v144 = IsNullOrEmpty;
      if ( max_length )
      {
        if ( !(_DWORD)max_length )
          sub_1C372BC(IsNullOrEmpty);
        v145 = System_Int32__Parse(IsNullOrEmpty->m_Items[0], 0);
      }
      else
      {
        v145 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C403E4 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C403E4 = 1;
      }
      v146 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v146 = TerminalPramsManager_TypeInfo;
      }
      v146->static_fields->_MapModelClearQuestId_k__BackingField = v145;
      if ( SLODWORD(v144->max_length) < 2 )
      {
        v148 = 0;
      }
      else
      {
        v147 = System_Int32__Parse(v144->m_Items[1], 0);
        v146 = TerminalPramsManager_TypeInfo;
        v148 = v147;
      }
      if ( !v146->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v146);
      if ( !byte_4C403E5 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C403E5 = 1;
      }
      v149 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v149 = TerminalPramsManager_TypeInfo;
      }
      v149->static_fields->_MapModelClearPhaseCount_k__BackingField = v148;
    }
  }
  v150 = (System_String_o *)StringLiteral_11455/*"SAVEKEY_DataLostBattleAutoReset"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11455/*"SAVEKEY_DataLostBattleAutoReset"*/, 0) )
  {
    v151 = UnityEngine_PlayerPrefs__GetInt_71224996(v150, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C401BA )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401BA = 1;
    }
    v152 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v152 = TerminalPramsManager_TypeInfo;
    }
    v152->static_fields->_IsDataLostBattleAutoReset_k__BackingField = v151 != 0;
  }
  v153 = (System_String_o *)StringLiteral_11464/*"SAVEKEY_PlayerGenderType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11464/*"SAVEKEY_PlayerGenderType"*/, 0) )
  {
    v154 = UnityEngine_PlayerPrefs__GetInt_71224996(v153, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3E108 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3E108 = 1;
    }
    v155 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v155 = TerminalPramsManager_TypeInfo;
    }
    v155->static_fields->_PlayerGenderType_k__BackingField = v154;
  }
  v156 = (System_String_o *)StringLiteral_11451/*"SAVEKEY_CampaignDirectBonus"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11451/*"SAVEKEY_CampaignDirectBonus"*/, 0) )
  {
    v157 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71225564(v156, 0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v160 = JsonManager__Deserialize_object_(
             v157,
             (const MethodInfo_3156F74 *)Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C403E9 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403E9 = 1;
    }
    v161 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v161 = TerminalPramsManager_TypeInfo;
    }
    v162 = v161->static_fields;
    v162->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)v160;
    sub_1C36FFC((CGThumbnailListItem_o *)&v162->_CampaignDirectBonus_k__BackingField, (int32_t)v160, v158, v159);
  }
  v163 = (System_String_o *)StringLiteral_11450/*"SAVEKEY_BlankEarthSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11450/*"SAVEKEY_BlankEarthSpotId"*/, 0) )
  {
    v164 = UnityEngine_PlayerPrefs__GetInt_71224996(v163, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F7E0 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F7E0 = 1;
    }
    v165 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v165 = TerminalPramsManager_TypeInfo;
    }
    v165->static_fields->_BlankEarthSpotId_k__BackingField = v164;
  }
  v166 = (System_String_o *)StringLiteral_11449/*"SAVEKEY_BlankEarthRank"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11449/*"SAVEKEY_BlankEarthRank"*/, 0) )
  {
    v167 = UnityEngine_PlayerPrefs__GetInt_71224996(v166, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C403ED )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403ED = 1;
    }
    v168 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v168 = TerminalPramsManager_TypeInfo;
    }
    v168->static_fields->_BlankEarthRank_k__BackingField = v167;
  }
}


TerminalTransitionInfo_o *TerminalPramsManager__Load_TerminalTransitionInfoData(const MethodInfo *method)
{
  System_String_o *v1; // x20
  __int64 v2; // x19
  int32_t Int_71224996; // w0
  int32_t v4; // w20
  const MethodInfo *v5; // x1
  __int64 v6; // x0
  System_String_o *v7; // x20
  System_String_o *String_71225564; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C40381 & 1) == 0 )
  {
    sub_1C37058(&TerminalTransitionInfo_TypeInfo);
    sub_1C37058(&StringLiteral_13718/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_1C37058(&StringLiteral_13717/*"TerminalTransitionInfoMissionId"*/);
    byte_4C40381 = 1;
  }
  v1 = (System_String_o *)StringLiteral_13717/*"TerminalTransitionInfoMissionId"*/;
  v2 = 0;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13717/*"TerminalTransitionInfoMissionId"*/, 0) )
  {
    Int_71224996 = UnityEngine_PlayerPrefs__GetInt_71224996(v1, 0);
    if ( Int_71224996 < 1 )
    {
      return 0;
    }
    else
    {
      v4 = Int_71224996;
      v2 = sub_1C372A4(TerminalTransitionInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v2, 0);
      TerminalTransitionInfo__Init((TerminalTransitionInfo_o *)v2, v5);
      if ( !v2 )
        sub_1C372B4(v6);
      *(_DWORD *)(v2 + 16) = v4;
      v7 = (System_String_o *)StringLiteral_13718/*"TerminalTransitionInfoVoiceAssetName"*/;
      if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13718/*"TerminalTransitionInfoVoiceAssetName"*/, 0) )
      {
        String_71225564 = UnityEngine_PlayerPrefs__GetString_71225564(v7, 0);
        *(_QWORD *)(v2 + 40) = String_71225564;
        sub_1C36FFC((CGThumbnailListItem_o *)(v2 + 40), (int32_t)String_71225564, v9, v10);
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

  if ( (byte_4C4039B & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11459/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C37058(&StringLiteral_811/*","*/);
    byte_4C4039B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FA9B )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FA9B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v1->static_fields->_MapModelClearQuestId_k__BackingField;
  v2 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  if ( !byte_4C3FA9C )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FA9C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v3->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  v5 = System_String__Concat_63599904(v2, (System_String_o *)StringLiteral_811/*","*/, v4, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11459/*"SAVEKEY_MapModelClearQuestInfo"*/, v5, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__PlayQuestSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C40387 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11470/*"SAVEKEY_TerminalLastSelectQuestIndex"*/);
    sub_1C37058(&StringLiteral_13704/*"TerminalLastPlayedFreeQuestSpotId"*/);
    sub_1C37058(&StringLiteral_13705/*"TerminalLastPlayedQuestId"*/);
    byte_4C40387 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FBF6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FBF6 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13705/*"TerminalLastPlayedQuestId"*/,
    v1->static_fields->_LastPlayedQuestId_k__BackingField,
    0);
  if ( !byte_4C403EC )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403EC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11470/*"SAVEKEY_TerminalLastSelectQuestIndex"*/,
    v2->static_fields->_LastSelectQuestIndex_k__BackingField,
    0);
  if ( !byte_4C3F88F )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F88F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13704/*"TerminalLastPlayedFreeQuestSpotId"*/,
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

  if ( (byte_4C4037C & 1) == 0 )
  {
    sub_1C37058(&Method_TerminalPramsManager_PlaySystemSE__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4037C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403D7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403D7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( TerminalPramsManager_TypeInfo->static_fields->_IsAutoNoSe_k__BackingField )
    {
LABEL_9:
      if ( !byte_4C403D8 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C403D8 = 1;
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
      v6 = (_QWORD *)sub_1C37070(Method_TerminalPramsManager_PlaySystemSE__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
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

  if ( (byte_4C403A4 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C403A4 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsTerminalEffectPlayed(effectName, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C403F2 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403F2 = 1;
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
      if ( !byte_4C403E3 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C403E3 = 1;
      }
      v7 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v7 = TerminalPramsManager_TypeInfo;
      }
      p_PlayedTerminalEffects_k__BackingField = (CGThumbnailListItem_o *)&v7->static_fields->_PlayedTerminalEffects_k__BackingField;
      p_PlayedTerminalEffects_k__BackingField->klass = (CGThumbnailListItem_c *)v6;
      sub_1C36FFC(p_PlayedTerminalEffects_k__BackingField, v6, v3, v4);
      v5 = TerminalPramsManager_TypeInfo;
    }
    if ( !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    if ( !byte_4C403F2 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403F2 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v12 = System_String__Concat_63599904(
            v9->static_fields->_PlayedTerminalEffects_k__BackingField,
            effectName,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            0);
    if ( !byte_4C403E3 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403E3 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v14 = (CGThumbnailListItem_o *)&v13->static_fields->_PlayedTerminalEffects_k__BackingField;
    v14->klass = (CGThumbnailListItem_c *)v12;
    sub_1C36FFC(v14, (int32_t)v12, v10, v11);
    TerminalPramsManager__Save_SaveData(v15);
  }
}


void TerminalPramsManager__PlayerGenderType_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C4039D & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11464/*"SAVEKEY_PlayerGenderType"*/);
    byte_4C4039D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403F3 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403F3 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11464/*"SAVEKEY_PlayerGenderType"*/,
    v1->static_fields->_PlayerGenderType_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__ReceiveQuestEndResultInfo(
        BattleResultComponent_resultData_array *result,
        bool isWin,
        const MethodInfo *method)
{
  BattleResultComponent_resultData_array *v4; // x21
  BattleResultComponent_resultData_o *v5; // x8
  struct UserServantCollectionEntity_array *oldUserSvtCollection; // x8
  _DWORD *v7; // x23
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  BattleResultComponent_resultData_o *v10; // x27
  int eventEndTitle; // w8
  UserServantCollectionMaster_o *v12; // x20
  unsigned int v13; // w28
  __int64 v14; // x21
  __int64 v15; // x25
  __int64 v16; // x26
  struct DeckData_o *myDeck; // x24
  UserServantCollectionEntity_o *EntityDefinitely; // x24
  UserServantCollectionEntity_o *v19; // x25
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  _DWORD *v22; // x24
  CGThumbnailListItem_o *v23; // x24
  CGThumbnailListItem_c *klass; // x8
  CGThumbnailListItem_c *v25; // x8
  TerminalPramsManager_c *v26; // x0
  il2cpp_array_size_t *v27; // x19
  CGThumbnailListItem_o *p_mQuestClearHeroineInfo; // x0
  const MethodInfo *v29; // x1
  il2cpp_array_size_t v30; // x8
  BattleResultComponent_resultData_o *v31; // x9
  struct System_String_o *v32; // x10
  struct System_String_o *eventEndMessage; // x19
  __int128 v34; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x24
  UserServantEntity_o *v36; // x26
  __int64 v37; // x24
  void **p_monitor; // x19
  void *v39; // x25
  void *monitor; // t1
  void *v41; // x27
  int v42; // w9
  int v43; // w8
  UserServantCollectionEntity_o *v44; // x25
  struct DeckData_o *userId; // x21
  int32_t SvtId; // w0
  __int64 v47; // x28
  __int64 v48; // x29
  int32_t v49; // w27
  __int64 v50; // x23
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  bool v55; // w9
  Il2CppObject *Master_object; // x26
  NetworkManager_c *v57; // x0
  __int64 v58; // x28
  __int64 v59; // x29
  int64_t userIdNumber; // x27
  UserServantCollectionEntity_o *v61; // x26
  Il2CppObject *v62; // x0
  __int64 v63; // x26
  __int64 v64; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v65; // x24
  int klass_high; // w8
  int32_t friendshipExceedCount; // w9
  TerminalPramsManager_c *v68; // x0
  CGThumbnailListItem_o *v69; // x0
  BattleResultComponent_resultData_o *v70; // x23
  const MethodInfo *v71; // x1
  BattleResultComponent_resultData_o *v72; // x8
  struct System_String_o *v73; // x9
  UserQuestEntity_o *v74; // x23
  int32_t questId; // w19
  TerminalPramsManager_c *v76; // x0
  int32_t QuestPhase; // w24
  TerminalPramsManager_c *v78; // x0
  int32_t v79; // w24
  Il2CppObject *MasterData_object; // x25
  UserQuestEntity_o *v81; // x0
  UserQuestEntity_o *v82; // x26
  int32_t v83; // w25
  bool v84; // w19
  TerminalPramsManager_c *v85; // x0
  const MethodInfo *v86; // x2
  TerminalPramsManager_c *v87; // x0
  System_String_o *ValidMessage; // x0
  const MethodInfo *v89; // x2
  TerminalPramsManager_c *v90; // x8
  TerminalPramsManager_c *v91; // x0
  TerminalPramsManager_c *v92; // x0
  const MethodInfo *v93; // x0
  TerminalPramsManager_c *v94; // x8
  int32_t v95; // w24
  const MethodInfo *v96; // x1
  WarEntity_o *v97; // x25
  BalanceConfig_c *v98; // x0
  TerminalPramsManager_c *v99; // x0
  TerminalPramsManager_c *v100; // x0
  bool v101; // w26
  TerminalPramsManager_c *v102; // x0
  char v103; // w8
  const MethodInfo *v104; // x1
  bool HasFlag; // w0
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  CGThumbnailListItem_c *v111; // x24
  TerminalPramsManager_c *v112; // x0
  CGThumbnailListItem_o *p_mResultEventPanelRewardInfos; // x0
  TerminalPramsManager_c *v114; // x0
  CGThumbnailListItem_o *p_eventConquestInfos; // x0
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  CGThumbnailListItem_c *v118; // x24
  TerminalPramsManager_c *v119; // x0
  CGThumbnailListItem_o *v120; // x0
  bool Farm; // w19
  TerminalPramsManager_c *v122; // x0
  char v123; // w19
  int32_t v124; // w24
  WarEntity_o *v125; // x0
  int32_t id; // w19
  TerminalPramsManager_c *v127; // x0
  TerminalPramsManager_c *v128; // x0
  Il2CppObject *v129; // x24
  Il2CppObject *v130; // x25
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  CGThumbnailListItem_c *v135; // x25
  TerminalPramsManager_c *v136; // x0
  CGThumbnailListItem_o *p_OldUserEventPoint_k__BackingField; // x0
  int max_length; // w9
  BattleResultComponent_resultData_array *v139; // x25
  int v140; // w8
  Il2CppClass **v141; // x8
  Il2CppClass *v142; // x26
  int32_t RaidGroupDeadQuestId; // w27
  int v144; // w9
  BattleResultComponent_resultData_array *v145; // x27
  int v146; // w8
  int v147; // w19
  struct TerminalPramsManager_StaticFields *v148; // x8
  int32_t name_high; // w19
  int v150; // w9
  BattleResultComponent_resultData_array *v151; // x25
  int v152; // w8
  BattleResultComponent_resultData_o *v153; // x19
  int32_t RaidDeadQuestId; // w26
  struct TerminalPramsManager_StaticFields *v155; // x8
  TerminalPramsManager_c *v156; // x8
  bool v157; // w19
  TerminalPramsManager_c *v158; // x0
  int32_t v159; // w19
  Il2CppObject *v160; // x24
  int32_t eventId; // w25
  bool v162; // w24
  TerminalPramsManager_c *v163; // x0
  int32_t v164; // w21
  BattleResultComponent_resultData_o *v165; // x8
  int v166; // w9
  int v167; // w11
  __int64 v168; // x26
  int32_t v169; // w19
  TerminalPramsManager_c *v170; // x0
  int32_t bounds_high; // w24
  bool IsUserEventStatus; // w0
  TerminalPramsManager_c *v173; // x0
  TerminalPramsManager_c *v174; // x0
  TerminalPramsManager_c *v175; // x0
  Il2CppObject *v176; // x24
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  TerminalPramsManager_c *v179; // x0
  CGThumbnailListItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  struct BattleResultAddRewardBonus_o *rewardBonus; // x8
  struct BattleResultAddRewardBonus_o *v182; // x8
  int v183; // w8
  __int64 *v184; // x9
  __int64 v185; // x12
  System_String_o **v186; // x9
  System_String_o *v187; // x25
  System_String_o **v188; // x8
  System_String_o *v189; // x22
  int32_t v190; // w27
  System_Collections_Generic_List_object__o *v191; // x27
  TerminalPramsManager___c_c *v192; // x8
  System_Predicate_object__o *_9__724_0; // x24
  System_String_o *v194; // x21
  Il2CppObject *v195; // x25
  struct TerminalPramsManager___c_StaticFields *v196; // x0
  int32_t v197; // w2
  const MethodInfo *v198; // x3
  System_String_o *v199; // x28
  TerminalPramsManager_c *v200; // x0
  TerminalPramsManager_c *v201; // x0
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x27
  System_String_o *v203; // x24
  int32_t v204; // w2
  const MethodInfo *v205; // x3
  TerminalPramsManager_c *v206; // x0
  int32_t v207; // w24
  int32_t PhaseCnt_k__BackingField; // w25
  _BOOL4 IsQuestClear_k__BackingField; // w19
  TerminalPramsManager_c *v210; // x0
  Il2CppObject *v211; // x24
  TerminalPramsManager_c *v212; // x0
  Il2CppObject *v213; // x24
  int v214; // w21
  TerminalPramsManager_c *v215; // x0
  CGThumbnailListItem_o *p_questClearCostumeRelease_k__BackingField; // x0
  int32_t v217; // w2
  const MethodInfo *v218; // x3
  BattleResultComponent_resultData_o *v219; // x8
  CGThumbnailListItem_c *v220; // x24
  TerminalPramsManager_c *v221; // x0
  CGThumbnailListItem_o *v222; // x0
  TerminalPramsManager_c *v223; // x0
  CGThumbnailListItem_o *p_questClearCostumeGet_k__BackingField; // x0
  int32_t v225; // w2
  const MethodInfo *v226; // x3
  CGThumbnailListItem_c *v227; // x24
  TerminalPramsManager_c *v228; // x0
  CGThumbnailListItem_o *v229; // x0
  TerminalPramsManager_c *v230; // x0
  CGThumbnailListItem_o *p_eventPointWinReward_k__BackingField; // x0
  int32_t v232; // w2
  const MethodInfo *v233; // x3
  TerminalPramsManager_c *v234; // x0
  int32_t v235; // w24
  QuestGroupMaster_o *v236; // x25
  int32_t GroupId; // w0
  TerminalPramsManager_c *v238; // x8
  int32_t v239; // w26
  int v240; // w25
  Il2CppObject *v241; // x26
  EventPointEntity_o *v242; // x25
  int32_t v243; // w24
  struct TerminalPramsManager_StaticFields *v244; // x8
  BattleResultComponent_resultData_o *v245; // x8
  struct System_String_o *v246; // x9
  CGThumbnailListItem_c *v247; // x24
  TerminalPramsManager_c *v248; // x0
  CGThumbnailListItem_o *v249; // x0
  int32_t v250; // w19
  TerminalPramsManager_c *v251; // x0
  TerminalPramsManager_c *v252; // x0
  CGThumbnailListItem_o *p_eventRaceBoost_k__BackingField; // x0
  int32_t v254; // w2
  const MethodInfo *v255; // x3
  il2cpp_array_size_t v256; // x8
  BattleResultComponent_resultData_o *v257; // x23
  TerminalPramsManager_c *v258; // x0
  CGThumbnailListItem_o *v259; // x0
  __int64 v260; // x19
  BattleResultComponent_resultData_o *v261; // x9
  struct System_String_o *v262; // x10
  struct System_String_o *v263; // x23
  TerminalPramsManager_c *v264; // x0
  CGThumbnailListItem_o *p_eventTowerReward_k__BackingField; // x0
  int32_t v266; // w2
  const MethodInfo *v267; // x3
  CGThumbnailListItem_c *v268; // x23
  TerminalPramsManager_c *v269; // x0
  CGThumbnailListItem_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  CGThumbnailListItem_c *v271; // x23
  TerminalPramsManager_c *v272; // x0
  CGThumbnailListItem_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  CGThumbnailListItem_c *v274; // x23
  TerminalPramsManager_c *v275; // x0
  CGThumbnailListItem_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  CGThumbnailListItem_c *v277; // x23
  TerminalPramsManager_c *v278; // x0
  CGThumbnailListItem_o *p_warClearReward_k__BackingField; // x0
  TerminalPramsManager_c *v280; // x0
  struct TerminalPramsManager_StaticFields *v281; // x0
  int32_t v282; // w2
  const MethodInfo *v283; // x3
  TerminalPramsManager_c *v284; // x0
  struct TerminalPramsManager_StaticFields *v285; // x0
  Il2CppObject *Instance; // x23
  int32_t WarID_ByQuestID; // w23
  WarEntity_o *WarEntityByWarID; // x0
  int32_t v289; // w23
  int32_t v290; // w2
  const MethodInfo *v291; // x3
  il2cpp_array_size_t v292; // x8
  BattleResultComponent_resultData_o *v293; // x22
  TerminalPramsManager_c *v294; // x0
  struct TerminalPramsManager_StaticFields *v295; // x0
  CGThumbnailListItem_o *p_oldPersonalBoss_k__BackingField; // x0
  TerminalPramsManager_c *v297; // x0
  struct TerminalPramsManager_StaticFields *v298; // x0
  struct EventTowerReward_array *eventTowerReward; // x8
  bool v300; // w19
  BalanceConfig_c *v301; // x8
  int32_t v302; // w19
  TerminalPramsManager_c *v303; // x0
  TerminalPramsManager_c *v304; // x0
  BalanceConfig_c *v305; // x8
  int32_t v306; // w19
  TerminalPramsManager_c *v307; // x0
  BalanceConfig_c *v308; // x8
  int32_t v309; // w19
  TerminalPramsManager_c *v310; // x0
  BalanceConfig_c *v311; // x8
  int32_t v312; // w19
  Il2CppObject *v313; // x22
  struct DeckData_o *v314; // x21
  int32_t v315; // w2
  const MethodInfo *v316; // x3
  UserSuperBossEntity_o *v317; // x22
  BattleResultComponent_resultData_array *v318; // x21
  int32_t v319; // w2
  const MethodInfo *v320; // x3
  TerminalPramsManager_c *v321; // x0
  struct TerminalPramsManager_StaticFields *v322; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v324; // x21
  Il2CppObject *v325; // x22
  int32_t ScriptQuestId; // w22
  Il2CppObject *v327; // x23
  TerminalPramsManager_c *v328; // x0
  int32_t v329; // w26
  int32_t winResult; // w24
  int32_t v331; // w2
  const MethodInfo *v332; // x3
  Il2CppObject *v333; // x23
  TerminalPramsManager_c *v334; // x0
  int32_t v335; // w19
  int32_t v336; // w21
  TerminalPramsManager_c *v337; // x0
  int32_t v338; // w1
  CGThumbnailListItem_o *p_lastPlayBgmName; // x0
  const MethodInfo *v340; // x0
  Il2CppObject *v341; // x21
  int32_t v342; // w22
  int32_t v343; // w2
  const MethodInfo *v344; // x3
  TerminalPramsManager_c *v345; // x0
  il2cpp_array_size_t *v346; // x0
  int32_t v347; // w22
  TerminalPramsManager_c *v348; // x0
  int32_t v349; // w23
  int32_t v350; // w2
  const MethodInfo *v351; // x3
  SpecifiedSceneInfo_o *SpecifiedSceneInfo; // x22
  TerminalPramsManager_c *v353; // x0
  struct TerminalPramsManager_StaticFields *v354; // x0
  const MethodInfo *v355; // x0
  int32_t v356; // w2
  const MethodInfo *v357; // x3
  int32_t v358; // w19
  TerminalPramsManager_c *v359; // x0
  CGThumbnailListItem_o *p_eventHarvestGrowthInfo; // x0
  TerminalPramsManager_c *v361; // x0
  BattleResultComponent_resultData_array *v362; // x22
  int32_t ScriptIntParam; // w24
  int32_t v364; // w0
  int32_t v365; // w25
  __int64 v366; // x23
  int32_t v367; // w2
  const MethodInfo *v368; // x3
  Il2CppArrayBounds *bounds; // d0
  TerminalPramsManager_c *v370; // x0
  CGThumbnailListItem_o *v371; // x0
  Il2CppObject *v372; // x22
  QuestEntity_o *QuestEntity; // x0
  const MethodInfo *v374; // x1
  QuestEntity_o *v375; // x22
  TerminalPramsManager_c *v376; // x0
  int32_t SpotId; // w21
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v379; // x21
  TerminalPramsManager_c *v380; // x0
  struct EventAreaImproveResultInfo_o *eventAreaImproveResultInfo; // x8
  TerminalPramsManager_c *v382; // x0
  int32_t v383; // w2
  const MethodInfo *v384; // x3
  TerminalPramsManager_c *v385; // x0
  System_String_o *v386; // x21
  TerminalPramsManager_c *v387; // x0
  System_String_o *v388; // x0
  int32_t v389; // w2
  const MethodInfo *v390; // x3
  System_String_o *v391; // x21
  TerminalPramsManager_c *v392; // x0
  CGThumbnailListItem_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  CGThumbnailListItem_c *v394; // x21
  TerminalPramsManager_c *v395; // x0
  CGThumbnailListItem_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v397; // x21
  TerminalPramsManager_c *v398; // x0
  int32_t v399; // w2
  const MethodInfo *v400; // x3
  int32_t v401; // w2
  const MethodInfo *v402; // x3
  int32_t v403; // w1
  TerminalPramsManager_c *v404; // x0
  int32_t v405; // w2
  const MethodInfo *v406; // x3
  int32_t v407; // w2
  const MethodInfo *v408; // x3
  int32_t v409; // w1
  TerminalPramsManager_c *v410; // x0
  int32_t v411; // w2
  const MethodInfo *v412; // x3
  int32_t v413; // w2
  const MethodInfo *v414; // x3
  int32_t v415; // w1
  TerminalPramsManager_c *v416; // x0
  int32_t v417; // w2
  const MethodInfo *v418; // x3
  System_String_o *v419; // x0
  const MethodInfo *v420; // x1
  const MethodInfo *v421; // x0
  const MethodInfo *v422; // x0
  const MethodInfo *v423; // x0
  const MethodInfo *v424; // x0
  const MethodInfo *v425; // x0
  TerminalPramsManager_c *v426; // x0
  int32_t v427; // w19
  const MethodInfo *v428; // x0
  TerminalPramsManager_c *v429; // x0
  __int64 v430; // x0
  System_String_o *v431; // [xsp+8h] [xbp-138h]
  bool v432; // [xsp+14h] [xbp-12Ch]
  BattleResultComponent_resultData_array *resulta; // [xsp+18h] [xbp-128h]
  il2cpp_array_size_t *p_max_length; // [xsp+20h] [xbp-120h]
  BattleResultComponent_resultData_array **m_Items; // [xsp+28h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v436; // [xsp+30h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v437; // [xsp+50h] [xbp-F0h]
  __int128 v438; // [xsp+70h] [xbp-D0h]
  _BYTE v439[4]; // [xsp+8Ch] [xbp-B4h] BYREF
  UserSuperBossEntity_o *v440; // [xsp+90h] [xbp-B0h] BYREF
  Il2CppObject *v441; // [xsp+98h] [xbp-A8h] BYREF
  Il2CppObject *v442; // [xsp+A0h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *v443; // [xsp+A8h] [xbp-98h] BYREF
  int32_t QuestId_k__BackingField; // [xsp+B4h] [xbp-8Ch] BYREF
  Il2CppObject *v445; // [xsp+B8h] [xbp-88h] BYREF
  Il2CppObject *v446; // [xsp+C0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+C8h] [xbp-78h] BYREF
  int v448; // [xsp+D4h] [xbp-6Ch] BYREF
  QuestPhaseEntity_o *v449; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v450; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v451; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v452; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v453; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v454; // 0:x0.16

  v4 = result;
  if ( (byte_4C403B2 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventPointMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMessageMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserSuperBossMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&EventHarvestGrowthInfo_TypeInfo);
    sub_1C37058(&EventSaveData_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_1C37058(&MyRoomParamsManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_1C37058(&QuestClearHeroineInfo_TypeInfo);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C37058(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C37058(&Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__724_0__);
    sub_1C37058(&TerminalPramsManager___c_TypeInfo);
    sub_1C37058(&UserServantCollectionEntity___TypeInfo);
    sub_1C37058(&UserServantCollectionEntity_TypeInfo);
    sub_1C37058(&UserServantEntity_TypeInfo);
    sub_1C37058(&UserSuperBossEntity___TypeInfo);
    sub_1C37058(&StringLiteral_19936/*"harvestGrowthAfterQuestId"*/);
    sub_1C37058(&StringLiteral_16713/*"afterActionBk"*/);
    sub_1C37058(&StringLiteral_811/*","*/);
    sub_1C37058(&StringLiteral_19937/*"harvestGrowthBeforeQuestId"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_6641/*"False"*/);
    result = (BattleResultComponent_resultData_array *)sub_1C37058(&StringLiteral_1122/*"0"*/);
    byte_4C403B2 = 1;
  }
  v449 = 0;
  v448 = 0;
  v446 = 0;
  entity = 0;
  v445 = 0;
  QuestId_k__BackingField = 0;
  v442 = 0;
  v443 = 0;
  v440 = 0;
  v441 = 0;
  v439[0] = 0;
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
  v7 = (_DWORD *)sub_1C37100(UserServantCollectionEntity___TypeInfo, LODWORD(oldUserSvtCollection->max_length));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !LODWORD(v4->max_length) )
    goto LABEL_1212;
  p_max_length = &v4->max_length;
  if ( !*m_Items )
    goto LABEL_1211;
  v10 = (*m_Items)->m_Items[11];
  v432 = isWin;
  resulta = v4;
  v448 = 0;
  if ( !v10 )
    goto LABEL_1211;
  eventEndTitle = (int)v10->fields.eventEndTitle;
  if ( eventEndTitle >= 1 )
  {
    v12 = (UserServantCollectionMaster_o *)result;
    v13 = 0;
    while ( v13 < eventEndTitle )
    {
      v14 = *((_QWORD *)&v10->fields.eventEndMessage + (int)v13);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C3CD62 )
      {
        sub_1C37058(&NetworkManager_TypeInfo);
        byte_4C3CD62 = 1;
      }
      result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
      }
      if ( !v14 )
        goto LABEL_1211;
      v16 = *(_QWORD *)(v14 + 24);
      v15 = *(_QWORD *)(v14 + 32);
      myDeck = result->m_Items[19]->fields.myDeck;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v450.fields.currentCryptoKey = v16;
      *(_QWORD *)&v450.fields.fakeValue = v15;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                           v450,
                                                           0);
      if ( !v12 )
        goto LABEL_1211;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v12, (int64_t)myDeck, (int32_t)result, 0);
      v19 = (UserServantCollectionEntity_o *)sub_1C372A4(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor_43131052(v19, EntityDefinitely, 0);
      if ( !v7 )
        goto LABEL_1211;
      if ( v19 )
      {
        result = (BattleResultComponent_resultData_array *)sub_1C37194(v19, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !result )
          goto LABEL_1213;
      }
      if ( v13 >= v7[6] )
        break;
      v22 = &v7[2 * v13];
      *((_QWORD *)v22 + 4) = v19;
      v23 = (CGThumbnailListItem_o *)(v22 + 8);
      sub_1C36FFC(v23, (int32_t)v19, v20, v21);
      if ( v13 >= v7[6] )
        break;
      klass = v23->klass;
      *(_OWORD *)&v437.fields.currentCryptoKey = *(_OWORD *)(v14 + 84);
      if ( !klass )
        goto LABEL_1211;
      *(_OWORD *)((char *)&klass->_1.declaringType + 4) = *(_OWORD *)&v437.fields.currentCryptoKey;
      if ( v13 >= v7[6] )
        break;
      v25 = v23->klass;
      v438 = *(_OWORD *)(v14 + 100);
      if ( !v25 )
        goto LABEL_1211;
      *(_OWORD *)((char *)&v25->_1.generic_class + 4) = v438;
      if ( v13 >= v7[6] )
        break;
      if ( !v23->klass )
        goto LABEL_1211;
      ++v13;
      HIDWORD(v23->klass->_1.interopData) = *(_DWORD *)(v14 + 116);
      v448 = v13;
      eventEndTitle = (int)v10->fields.eventEndTitle;
      if ( (int)v13 >= eventEndTitle )
        goto LABEL_36;
    }
LABEL_1212:
    sub_1C372BC(result);
  }
LABEL_36:
  v26 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v27 = p_max_length;
  p_mQuestClearHeroineInfo = (CGThumbnailListItem_o *)&v26->static_fields->mQuestClearHeroineInfo;
  p_mQuestClearHeroineInfo->klass = 0;
  sub_1C36FFC(p_mQuestClearHeroineInfo, 0, v8, v9);
  v30 = *p_max_length;
  if ( !(unsigned int)*p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v31 = (*m_Items)->m_Items[5];
  if ( v31 )
  {
    v32 = v31->fields.eventEndTitle;
    if ( v32 )
    {
      if ( !(_DWORD)v32 )
        goto LABEL_1212;
      eventEndMessage = v31->fields.eventEndMessage;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !eventEndMessage )
        goto LABEL_1211;
      v34 = *(_OWORD *)&eventEndMessage[1].monitor;
      v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)result;
      *(_OWORD *)&v437.fields.currentCryptoKey = *(_OWORD *)&eventEndMessage->fields._stringLength;
      *(_OWORD *)&v437.fields.fakeValue = v34;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v436 = v437;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                           &v436,
                                                           0);
      if ( !v35 )
        goto LABEL_1211;
      v36 = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                     v35,
                                     (int64_t)result,
                                     (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v37 = sub_1C372A4(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_43157284((UserServantEntity_o *)v37, v36, 0);
      v438 = *(_OWORD *)&eventEndMessage[4].klass;
      if ( !v37 )
        goto LABEL_1211;
      *(_OWORD *)(v37 + 96) = v438;
      *(_DWORD *)(v37 + 256) = eventEndMessage[10].fields._stringLength;
      *(_QWORD *)(v37 + 292) = *(System_String_c **)((char *)&eventEndMessage[12].klass + 4);
      monitor = eventEndMessage[5].monitor;
      p_monitor = &eventEndMessage[5].monitor;
      v39 = monitor;
      v41 = p_monitor[1];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v451.fields.currentCryptoKey = v39;
      *(_QWORD *)&v451.fields.fakeValue = v41;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                           v451,
                                                           0);
      if ( (int)result >= 1 )
        *(_OWORD *)(v37 + 128) = *(_OWORD *)p_monitor;
      v448 = 0;
      if ( !v7 )
        goto LABEL_1211;
      v42 = v7[6];
      if ( v42 >= 1 )
      {
        v43 = 0;
        while ( v43 < (unsigned int)v42 )
        {
          v44 = *(UserServantCollectionEntity_o **)&v7[2 * v43 + 8];
          if ( !v44 )
            goto LABEL_1211;
          userId = (struct DeckData_o *)v44->fields.userId;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C3CD62 )
          {
            sub_1C37058(&NetworkManager_TypeInfo);
            byte_4C3CD62 = 1;
          }
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          }
          if ( userId == result->m_Items[19]->fields.myDeck )
          {
            SvtId = UserServantCollectionEntity__getSvtId(v44, 0);
            v48 = *(_QWORD *)(v37 + 80);
            v47 = *(_QWORD *)(v37 + 88);
            v49 = SvtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v452.fields.currentCryptoKey = v48;
            *(_QWORD *)&v452.fields.fakeValue = v47;
            result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                                 v452,
                                                                 0);
            if ( v49 == (_DWORD)result )
              goto LABEL_70;
          }
          v43 = v448 + 1;
          v448 = v43;
          v42 = v7[6];
          if ( v43 >= v42 )
            goto LABEL_69;
        }
        goto LABEL_1212;
      }
LABEL_69:
      v44 = 0;
LABEL_70:
      v50 = sub_1C372A4(QuestClearHeroineInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v50, 0);
      if ( !v50 )
        goto LABEL_1211;
      *(_QWORD *)(v50 + 16) = v37;
      sub_1C36FFC((CGThumbnailListItem_o *)(v50 + 16), v37, v51, v52);
      result = (BattleResultComponent_resultData_array *)UserServantEntity__getLimitCount((UserServantEntity_o *)v37, 0);
      if ( !v36 )
        goto LABEL_1211;
      v55 = (_DWORD)result != UserServantEntity__getLimitCount(v36, 0);
      *(_BYTE *)(v50 + 25) = 0;
      *(_DWORD *)(v50 + 28) = 0;
      *(_DWORD *)(v50 + 32) = 0;
      *(_BYTE *)(v50 + 40) = 0;
      *(_DWORD *)(v50 + 36) = -1;
      *(_BYTE *)(v50 + 24) = v55;
      v27 = p_max_length;
      *(_BYTE *)(v50 + 41) = *(_DWORD *)(v37 + 296) != v36->fields.exceedCount;
      if ( v44 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C3CD62 )
        {
          sub_1C37058(&NetworkManager_TypeInfo);
          byte_4C3CD62 = 1;
        }
        v57 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v57 = NetworkManager_TypeInfo;
        }
        v59 = *(_QWORD *)(v37 + 80);
        v58 = *(_QWORD *)(v37 + 88);
        userIdNumber = v57->static_fields->userIdNumber;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v453.fields.currentCryptoKey = v59;
        *(_QWORD *)&v453.fields.fakeValue = v58;
        result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                             v453,
                                                             0);
        if ( !Master_object )
          goto LABEL_1211;
        v61 = UserServantCollectionMaster__GetEntityDefinitely(
                (UserServantCollectionMaster_o *)Master_object,
                userIdNumber,
                (int32_t)result,
                0);
        result = (BattleResultComponent_resultData_array *)UserServantCollectionEntity__getFriendShipRank(v44, 0);
        if ( !v61 )
          goto LABEL_1211;
        if ( (_DWORD)result != UserServantCollectionEntity__getFriendShipRank(v61, 0) )
          *(_DWORD *)(v50 + 36) = UserServantCollectionEntity__getFriendShipRank(v44, 0);
        v27 = p_max_length;
        if ( v44->fields.friendshipExceedCount != v61->fields.friendshipExceedCount )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v62 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
          v64 = *(_QWORD *)(v37 + 80);
          v63 = *(_QWORD *)(v37 + 88);
          v65 = (DataMasterBase_TMaster__TEntity__PKType__o *)v62;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v454.fields.currentCryptoKey = v64;
          *(_QWORD *)&v454.fields.fakeValue = v63;
          result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                               v454,
                                                               0);
          if ( !v65 )
            goto LABEL_1211;
          result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                               v65,
                                                               &entity,
                                                               (int32_t)result,
                                                               (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
          v27 = p_max_length;
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_1211;
            klass_high = HIDWORD(entity[6].klass);
            friendshipExceedCount = v44->fields.friendshipExceedCount;
            *(_BYTE *)(v50 + 40) = 1;
            *(_DWORD *)(v50 + 36) = friendshipExceedCount + klass_high;
          }
        }
      }
      v68 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v68 = TerminalPramsManager_TypeInfo;
      }
      v69 = (CGThumbnailListItem_o *)&v68->static_fields->mQuestClearHeroineInfo;
      v69->klass = (CGThumbnailListItem_c *)v50;
      sub_1C36FFC(v69, v50, v53, v54);
      v30 = *v27;
    }
  }
  if ( !(_DWORD)v30 )
    goto LABEL_1212;
  v70 = (BattleResultComponent_resultData_o *)*m_Items;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetBattleResultCampaignBonus(v70, v29);
  if ( !*(_DWORD *)v27 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v72 = (*m_Items)->m_Items[9];
  if ( v72 && (v73 = v72->fields.eventEndTitle) != 0 )
  {
    if ( !(_DWORD)v73 )
      goto LABEL_1212;
    v74 = (UserQuestEntity_o *)v72->fields.eventEndMessage;
  }
  else
  {
    v74 = 0;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FB50 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FB50 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE6(result->m_Items[19]->fields.oldUserGame) = v74 != 0;
  if ( !byte_4C3FB4F )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4C3FB4F = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE5(result->m_Items[19]->fields.oldUserGame) = 0;
  if ( !byte_4C3FCAE )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4C3FCAE = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE1(result->m_Items[19]->fields.resultDamageRewardInfos) = 0;
  if ( !byte_4C3FB4E )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4C3FB4E = 1;
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
    if ( !byte_4C3CFE7 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3CFE7 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( result->m_Items[19]->fields.eventId )
    {
      if ( !v74 )
        goto LABEL_1211;
    }
    else
    {
      if ( !v74 )
        goto LABEL_1211;
      questId = v74->fields.questId;
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4C3F896 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3F896 = 1;
      }
      v76 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v76 = TerminalPramsManager_TypeInfo;
      }
      v76->static_fields->_QuestId_k__BackingField = questId;
      QuestPhase = UserQuestEntity__getQuestPhase(v74, 0);
      if ( !byte_4C3F89A )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3F89A = 1;
      }
      v78 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v78 = TerminalPramsManager_TypeInfo;
      }
      v78->static_fields->_PhaseCnt_k__BackingField = QuestPhase;
    }
    v79 = v74->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)result,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
    }
    result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_1211;
    v81 = UserQuestMaster__GetEntity(
            (UserQuestMaster_o *)MasterData_object,
            (int64_t)result->m_Items[19]->fields.myDeck,
            v79,
            0);
    if ( v81 )
    {
      v82 = v81;
      v83 = UserQuestEntity__getQuestPhase(v81, 0);
      if ( UserQuestEntity__getClearNum(v74, 0) || UserQuestEntity__getClearNum(v82, 0) != 1 )
        v84 = UserQuestEntity__IsResetStatus(v74, 0) && !UserQuestEntity__IsResetStatus(v82, 0);
      else
        v84 = 1;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3FB4F )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FB4F = 1;
      }
      v85 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v85 = TerminalPramsManager_TypeInfo;
      }
      v85->static_fields->_IsQuestClear_k__BackingField = v84;
      if ( !byte_4C403E7 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        v85 = TerminalPramsManager_TypeInfo;
        byte_4C403E7 = 1;
      }
      if ( !v85->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v85);
        v85 = TerminalPramsManager_TypeInfo;
      }
      v85->static_fields->_EventUIEffectClearQuestId_k__BackingField = v79;
      if ( !byte_4C403E4 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        v85 = TerminalPramsManager_TypeInfo;
        byte_4C403E4 = 1;
      }
      if ( !v85->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v85);
        v85 = TerminalPramsManager_TypeInfo;
      }
      v85->static_fields->_MapModelClearQuestId_k__BackingField = v79;
      if ( !byte_4C403E5 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        v85 = TerminalPramsManager_TypeInfo;
        byte_4C403E5 = 1;
      }
      if ( !v85->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v85);
        v85 = TerminalPramsManager_TypeInfo;
      }
      v85->static_fields->_MapModelClearPhaseCount_k__BackingField = v83;
      TerminalPramsManager__MapModelClearQuestInfo_SaveData((const MethodInfo *)v85);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      AdManager__TrackEvent((AdManager_o *)result, 4, 1, v79, v83, 0, 0);
      TerminalPramsManager__SendClearQuestToAdManager(v79, v83, v86);
    }
    else
    {
      v83 = 0;
    }
    v87 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v87);
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
    if ( !result )
      goto LABEL_1211;
    ValidMessage = QuestMessageMaster__GetValidMessage((QuestMessageMaster_o *)result, v79, v83, 3, 0);
    v90 = TerminalPramsManager_TypeInfo;
    if ( ValidMessage )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3EC68 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3EC68 = 1;
      }
      v90 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v90 = TerminalPramsManager_TypeInfo;
      }
      v90->static_fields->_IsDispOnly_k__BackingField = 1;
    }
    if ( !v90->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v90);
    if ( !byte_4C403F5 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403F5 = 1;
    }
    v91 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v91 = TerminalPramsManager_TypeInfo;
    }
    if ( v91->static_fields->_QuestReleaseFocusQuestId_k__BackingField >= 1 )
    {
      if ( !v91->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v91);
      if ( !byte_4C403F5 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C403F5 = 1;
      }
      v92 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v92 = TerminalPramsManager_TypeInfo;
      }
      TerminalPramsManager__SetQuestReleasedFocusState(
        v92->static_fields->_QuestReleaseFocusQuestId_k__BackingField,
        1,
        v89);
      TerminalPramsManager__SaveQuestReleasedFocusState(v93);
      if ( !byte_4C3FFDB )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FFDB = 1;
      }
      v91 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v91 = TerminalPramsManager_TypeInfo;
      }
      v91->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
    }
    if ( !v91->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v91);
    if ( !byte_4C401BD )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401BD = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(result->m_Items[19]->fields.eventPointWinReward) = v79;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4C3FB51 )
  {
    result = (BattleResultComponent_resultData_array *)sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FB51 = 1;
  }
  v94 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v94 = TerminalPramsManager_TypeInfo;
  }
  if ( v94->static_fields->_IsQuestClear_k__BackingField )
  {
    if ( !v74 )
      goto LABEL_1211;
    v95 = v74->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !result )
      goto LABEL_1211;
    v97 = WarMaster__getByLastQuestId((WarMaster_o *)result, v95, 0);
    if ( v97 )
    {
      v98 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v98 = BalanceConfig_TypeInfo;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v98->static_fields->MainInterludeMapReturnWarIds,
             v97->fields.id,
             (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C3FB52 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C3FB52 = 1;
        }
        v99 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v99 = TerminalPramsManager_TypeInfo;
        }
        v97 = 0;
        v99->static_fields->_IsWarClear_k__BackingField = 0;
      }
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FB52 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FB52 = 1;
    }
    v100 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v100 = TerminalPramsManager_TypeInfo;
    }
    v100->static_fields->_IsWarClear_k__BackingField = v97 != 0;
    v101 = TerminalPramsManager__CheckIsOrdealCallWarClear(v97, v96);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v101 )
    {
      if ( !byte_4C3FB53 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FB53 = 1;
      }
      v102 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v102 = TerminalPramsManager_TypeInfo;
      }
      v103 = 1;
    }
    else
    {
      if ( !byte_4C3FB53 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FB53 = 1;
      }
      v102 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v102 = TerminalPramsManager_TypeInfo;
      }
      v103 = 0;
    }
    v102->static_fields->_IsOrdealCallWarClear_k__BackingField = v103;
    if ( !v102->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v102);
    if ( !byte_4C3FB54 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FB54 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE3(result->m_Items[19]->fields.oldUserEvent) )
    {
      if ( !v97 )
        goto LABEL_1211;
      if ( !WarEntity__IsEvent(v97, 0) )
      {
        result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( !result )
          goto LABEL_1211;
        AdManager__TrackEvent((AdManager_o *)result, 6, 1, v97->fields.id, -1, 0, 0);
      }
    }
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    AdManager__TrackEvent((AdManager_o *)result, 5, 1, v95, -1, 0, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SendOpenedQuestIdToAdManager(v95, v104);
    if ( !byte_4C3FB54 )
    {
      result = (BattleResultComponent_resultData_array *)sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FB54 = 1;
    }
    v94 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v94 = TerminalPramsManager_TypeInfo;
    }
    if ( v94->static_fields->_IsWarClear_k__BackingField )
    {
      if ( !v97 )
        goto LABEL_1211;
      HasFlag = WarEntity__HasFlag(v97, 128, 0);
      v94 = TerminalPramsManager_TypeInfo;
      if ( HasFlag )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C3FCAD )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C3FCAD = 1;
        }
        v94 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v94 = TerminalPramsManager_TypeInfo;
        }
        v94->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
        if ( !byte_4C3FCAE )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          v94 = TerminalPramsManager_TypeInfo;
          byte_4C3FCAE = 1;
        }
        if ( !v94->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v94);
          v94 = TerminalPramsManager_TypeInfo;
        }
        v94->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
      }
    }
  }
  if ( !v94->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v94);
  TerminalPramsManager__SetQuestRewardInfo(resulta, v71);
  if ( !LODWORD(resulta->max_length) )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->panelEventPoint = HIDWORD((*m_Items)->m_Items[2]);
  static_fields->mResultEventPanelRewardInfos = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->mResultEventPanelRewardInfos, 0, v106, v107);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v111 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[19];
  if ( v111 && v111->_1.namespaze )
  {
    v112 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v112 = TerminalPramsManager_TypeInfo;
    }
    p_mResultEventPanelRewardInfos = (CGThumbnailListItem_o *)&v112->static_fields->mResultEventPanelRewardInfos;
    p_mResultEventPanelRewardInfos->klass = v111;
    sub_1C36FFC(p_mResultEventPanelRewardInfos, (int32_t)v111, v109, v110);
  }
  v114 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v114 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = (CGThumbnailListItem_o *)&v114->static_fields->eventConquestInfos;
  p_eventConquestInfos->klass = 0;
  sub_1C36FFC(p_eventConquestInfos, 0, v109, v110);
  TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items || !result )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v446,
                                                       HIDWORD((*m_Items)->bounds),
                                                       (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v118 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[44];
  if ( v118 && v118->_1.namespaze )
  {
    v119 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v119 = TerminalPramsManager_TypeInfo;
    }
    v120 = (CGThumbnailListItem_o *)&v119->static_fields->eventConquestInfos;
    v120->klass = v118;
    sub_1C36FFC(v120, (int32_t)v118, v116, v117);
    if ( v446 )
      Farm = EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v446, 0);
    else
      Farm = 0;
    v122 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v122 = TerminalPramsManager_TypeInfo;
    }
    v122->static_fields->eventConquestInfoDisp = !Farm;
  }
  result = (BattleResultComponent_resultData_array *)v446;
  if ( v446 )
  {
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v446, 0);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3FB51 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FB51 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
      {
        v123 = 1;
      }
      else
      {
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_4C3FB4E )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C3FB4E = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        v123 = BYTE6(result->m_Items[19]->fields.oldUserGame);
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      BYTE1(result->m_Items[19][1].fields.eventPointWinReward) = v123;
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
    if ( !byte_4C400BE )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C400BE = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(result->m_Items[19]->fields.resultUseRewardAddItemRewardInfos) = 1;
    if ( !byte_4C3FB51 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4C3FB51 = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      if ( !v74 )
        goto LABEL_1211;
      v124 = v74->fields.questId;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !result )
        goto LABEL_1211;
      v125 = WarMaster__getByLastQuestId((WarMaster_o *)result, v124, 0);
      if ( v125 )
      {
        id = v125->fields.id;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C400BF )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C400BF = 1;
        }
        v127 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v127 = TerminalPramsManager_TypeInfo;
        }
        v127->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = id;
      }
    }
  }
  v128 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v128 = TerminalPramsManager_TypeInfo;
  }
  *(_QWORD *)&v128->static_fields->clearLastBattleRaidId = -1;
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  v129 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  v130 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items || !v130 )
    goto LABEL_1211;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v130,
          &v445,
          HIDWORD((*m_Items)->bounds),
          (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_631;
  result = (BattleResultComponent_resultData_array *)v445;
  if ( !v445 )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPoint((EventDetailEntity_o *)v445, 0);
  v135 = 0;
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !*(_DWORD *)p_max_length )
      goto LABEL_1212;
    if ( !*m_Items )
      goto LABEL_1211;
    v135 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[10];
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403F6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403F6 = 1;
  }
  v136 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v136 = TerminalPramsManager_TypeInfo;
  }
  p_OldUserEventPoint_k__BackingField = (CGThumbnailListItem_o *)&v136->static_fields->_OldUserEventPoint_k__BackingField;
  p_OldUserEventPoint_k__BackingField->klass = v135;
  sub_1C36FFC(p_OldUserEventPoint_k__BackingField, (int32_t)v135, v133, v134);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items || !v129 )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidGorupMax(
                                                       (EventRaidMaster_o *)v129,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0);
  if ( (int)result >= 1 )
  {
    if ( !*(_DWORD *)p_max_length )
      goto LABEL_1212;
    if ( !*m_Items )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                         (EventRaidMaster_o *)v129,
                                                         HIDWORD((*m_Items)->bounds),
                                                         0);
    v448 = 0;
    if ( !result )
      goto LABEL_1211;
    max_length = result->max_length;
    v139 = result;
    if ( max_length < 1 )
      goto LABEL_631;
    v140 = 0;
    while ( 1 )
    {
      if ( v140 >= (unsigned int)max_length )
        goto LABEL_1212;
      v141 = &v139->obj.klass + v140;
      v142 = v141[4];
      if ( !v142 )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)EventRaidEntity__IsJumbleSingleRaid(
                                                           (EventRaidEntity_o *)v141[4],
                                                           0);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !*(_DWORD *)p_max_length )
          goto LABEL_1212;
        if ( !*m_Items )
          goto LABEL_1211;
        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                 (EventRaidMaster_o *)v129,
                                 HIDWORD((*m_Items)->bounds),
                                 (int32_t)v142->_1.namespaze,
                                 0);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C3CFE7 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C3CFE7 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( RaidGroupDeadQuestId == result->m_Items[19]->fields.eventId )
        {
          result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
                                                           (EventRaidMaster_o *)v129,
                                                           HIDWORD((*m_Items)->bounds),
                                                           HIDWORD(v142->_1.name),
                                                           0);
      QuestId_k__BackingField = 0;
      if ( !result )
        goto LABEL_1211;
      v144 = result->max_length;
      v145 = result;
      if ( v144 >= 1 )
      {
        v146 = 0;
        while ( 1 )
        {
          if ( v146 >= (unsigned int)v144 )
            goto LABEL_1212;
          v147 = *((_DWORD *)v145->m_Items + v146);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C3CFE7 )
          {
            sub_1C37058(&TerminalPramsManager_TypeInfo);
            byte_4C3CFE7 = 1;
          }
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          }
          v148 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
          if ( v147 == v148->_QuestId_k__BackingField )
            break;
          v146 = QuestId_k__BackingField + 1;
          QuestId_k__BackingField = v146;
          v144 = v145->max_length;
          if ( v146 >= v144 )
            goto LABEL_431;
        }
        name_high = HIDWORD(v142->_1.name);
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          v148 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v148->clearBattleRaidId = name_high;
      }
LABEL_431:
      v140 = v448 + 1;
      v448 = v140;
      max_length = v139->max_length;
      if ( v140 >= max_length )
        goto LABEL_631;
    }
    v158 = TerminalPramsManager_TypeInfo;
    v159 = HIDWORD(v142->_1.name);
    goto LABEL_501;
  }
  result = (BattleResultComponent_resultData_array *)v445;
  if ( !v445 )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__isRaidDefeatCount(
                                                       (EventDetailEntity_o *)v445,
                                                       0);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_array *)v445;
    if ( !v445 )
      goto LABEL_1211;
    if ( !EventDetailEntity__IsEventActivityPoint((EventDetailEntity_o *)v445, 0) )
      goto LABEL_461;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventUiMaster___);
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
      v169 = (int32_t)(*m_Items)->m_Items[43];
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3D784 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3D784 = 1;
      }
      v170 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v170 = TerminalPramsManager_TypeInfo;
      }
      v170->static_fields->_EventActivityPointEffectState_k__BackingField = v169;
    }
    else
    {
LABEL_461:
      result = (BattleResultComponent_resultData_array *)v445;
      if ( !v445 )
        goto LABEL_1211;
      if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v445, 0) )
      {
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C403F7 )
        {
          result = (BattleResultComponent_resultData_array *)sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C403F7 = 1;
        }
        v156 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v156 = TerminalPramsManager_TypeInfo;
        }
        if ( v156->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField )
        {
          v157 = 0;
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
          v156 = TerminalPramsManager_TypeInfo;
          v157 = IsUserEventStatus;
        }
        if ( !v156->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v156);
        if ( !byte_4C401C5 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C401C5 = 1;
        }
        v173 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v173 = TerminalPramsManager_TypeInfo;
        }
        v173->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = v157;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)v445;
        if ( !v445 )
          goto LABEL_1211;
        if ( !EventDetailEntity__IsEventHappiness((EventDetailEntity_o *)v445, 0) )
          goto LABEL_504;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v160 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C3CFE7 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C3CFE7 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        eventId = result->m_Items[19]->fields.eventId;
        if ( !byte_4C3CFE6 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          byte_4C3CFE6 = 1;
        }
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( !v160 )
          goto LABEL_1211;
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)v160,
               &v443,
               eventId,
               LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
               0) )
        {
          result = (BattleResultComponent_resultData_array *)v443;
          if ( !v443 )
            goto LABEL_1211;
          v162 = QuestPhaseEntity__PlayHappinessCounterEffect(v443, 0);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C3FFB6 )
          {
            sub_1C37058(&TerminalPramsManager_TypeInfo);
            byte_4C3FFB6 = 1;
          }
          v163 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v163 = TerminalPramsManager_TypeInfo;
          }
          v163->static_fields->_PlayHappinessCounterEffect_k__BackingField = v162;
        }
        else
        {
LABEL_504:
          result = (BattleResultComponent_resultData_array *)v445;
          if ( !v445 )
            goto LABEL_1211;
          result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPanel(
                                                               (EventDetailEntity_o *)v445,
                                                               0);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !*(_DWORD *)p_max_length )
              goto LABEL_1212;
            if ( !*m_Items )
              goto LABEL_1211;
            v165 = (*m_Items)->m_Items[10];
            v448 = 0;
            if ( !v165 )
              goto LABEL_1211;
            v166 = (int)v165->fields.eventEndTitle;
            if ( v166 >= 1 )
            {
              v167 = 0;
              while ( 1 )
              {
                if ( v166 == v167 )
                  goto LABEL_1212;
                if ( !v445 )
                  goto LABEL_1211;
                v168 = *((_QWORD *)&v165->fields.eventEndMessage + v167);
                if ( !v168 )
                  goto LABEL_1211;
                if ( LODWORD(v445[1].klass) == *(_DWORD *)(v168 + 24) )
                  break;
                v448 = ++v167;
                if ( v166 == v167 )
                  goto LABEL_612;
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4C3F9BD )
              {
                sub_1C37058(&TerminalPramsManager_TypeInfo);
                byte_4C3F9BD = 1;
              }
              v175 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v175 = TerminalPramsManager_TypeInfo;
              }
              if ( !v175->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
              {
                v176 = (Il2CppObject *)sub_1C372A4(EventSaveData_TypeInfo);
                System_Object___ctor(v176, 0);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4C3F9BE )
                {
                  sub_1C37058(&TerminalPramsManager_TypeInfo);
                  byte_4C3F9BE = 1;
                }
                v179 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v179 = TerminalPramsManager_TypeInfo;
                }
                p_BeforeEventSubmarineSaveData_k__BackingField = (CGThumbnailListItem_o *)&v179->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
                p_BeforeEventSubmarineSaveData_k__BackingField->klass = (CGThumbnailListItem_c *)v176;
                sub_1C36FFC(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v176, v177, v178);
                v175 = TerminalPramsManager_TypeInfo;
              }
              if ( !v175->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v175);
              if ( !byte_4C3F9BD )
              {
                sub_1C37058(&TerminalPramsManager_TypeInfo);
                byte_4C3F9BD = 1;
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
              rewardBonus->fields.animationId = *(_DWORD *)(v168 + 24);
              if ( !byte_4C3F9BD )
              {
                sub_1C37058(&TerminalPramsManager_TypeInfo);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
                byte_4C3F9BD = 1;
              }
              if ( !LODWORD(result->m_Items[24]) )
              {
                j_il2cpp_runtime_class_init_0(result);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              v182 = result->m_Items[19]->fields.rewardBonus;
              if ( !v182 )
                goto LABEL_1211;
              result = (BattleResultComponent_resultData_array *)v182->fields.voiceIds;
              if ( result
                && (result = (BattleResultComponent_resultData_array *)System_String__Split(
                                                                         (System_String_o *)result,
                                                                         0x2Cu,
                                                                         0,
                                                                         0)) != 0 )
              {
                v183 = result->max_length;
                v184 = (__int64 *)&result->m_Items[1];
                if ( v183 <= 1 )
                  v184 = &StringLiteral_1122/*"0"*/;
                v185 = *v184;
                v186 = v183 <= 2 ? (System_String_o **)&StringLiteral_1122/*"0"*/ : (System_String_o **)&result->m_Items[2];
                v187 = *v186;
                v188 = v183 <= 3 ? (System_String_o **)&StringLiteral_6641/*"False"*/ : (System_String_o **)&result->m_Items[3];
              }
              else
              {
                v187 = (System_String_o *)StringLiteral_1122/*"0"*/;
                v188 = (System_String_o **)&StringLiteral_6641/*"False"*/;
                v185 = StringLiteral_1122/*"0"*/;
              }
              if ( !v445 )
                goto LABEL_1211;
              v431 = (System_String_o *)v185;
              v189 = *v188;
              v190 = (int32_t)v445[1].klass;
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
                                                                   v190,
                                                                   0);
              v191 = (System_Collections_Generic_List_object__o *)result;
              v192 = TerminalPramsManager___c_TypeInfo;
              if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
                v192 = TerminalPramsManager___c_TypeInfo;
              }
              _9__724_0 = (System_Predicate_object__o *)v192->static_fields->__9__724_0;
              if ( !_9__724_0 )
              {
                v194 = v187;
                if ( !v192->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v192);
                  v192 = TerminalPramsManager___c_TypeInfo;
                }
                v195 = (Il2CppObject *)v192->static_fields->__9;
                _9__724_0 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_QuestReleaseEntity__TypeInfo);
                System_Predicate_object____ctor(
                  _9__724_0,
                  v195,
                  Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__724_0__,
                  0);
                v196 = TerminalPramsManager___c_TypeInfo->static_fields;
                v196->__9__724_0 = (struct System_Predicate_QuestReleaseEntity__o *)_9__724_0;
                sub_1C36FFC((CGThumbnailListItem_o *)&v196->__9__724_0, (int32_t)_9__724_0, v197, v198);
                v187 = v194;
              }
              if ( !v191 )
                goto LABEL_1211;
              v199 = v431;
              if ( System_Collections_Generic_List_object___Find(
                     v191,
                     (System_Predicate_T__o *)_9__724_0,
                     (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4C3CFE7 )
                {
                  sub_1C37058(&TerminalPramsManager_TypeInfo);
                  byte_4C3CFE7 = 1;
                }
                v200 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v200 = TerminalPramsManager_TypeInfo;
                }
                QuestId_k__BackingField = v200->static_fields->_QuestId_k__BackingField;
                v199 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0);
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4C3F9BD )
              {
                sub_1C37058(&TerminalPramsManager_TypeInfo);
                byte_4C3F9BD = 1;
              }
              v201 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v201 = TerminalPramsManager_TypeInfo;
              }
              BeforeEventSubmarineSaveData_k__BackingField = v201->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
              v203 = System_Int64__ToString(v168 + 32, 0);
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_39801392(
                                                                   v203,
                                                                   v199,
                                                                   v187,
                                                                   v189,
                                                                   0);
              if ( !BeforeEventSubmarineSaveData_k__BackingField )
                goto LABEL_1211;
              BeforeEventSubmarineSaveData_k__BackingField->fields.value = (struct System_String_o *)result;
              sub_1C36FFC(
                (CGThumbnailListItem_o *)&BeforeEventSubmarineSaveData_k__BackingField->fields.value,
                (int32_t)result,
                v204,
                v205);
            }
LABEL_612:
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C3CFE7 )
            {
              sub_1C37058(&TerminalPramsManager_TypeInfo);
              byte_4C3CFE7 = 1;
            }
            v206 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v206 = TerminalPramsManager_TypeInfo;
            }
            v207 = v206->static_fields->_QuestId_k__BackingField;
            if ( !byte_4C3CFE6 )
            {
              sub_1C37058(&TerminalPramsManager_TypeInfo);
              v206 = TerminalPramsManager_TypeInfo;
              byte_4C3CFE6 = 1;
            }
            if ( !v206->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v206);
              v206 = TerminalPramsManager_TypeInfo;
            }
            PhaseCnt_k__BackingField = v206->static_fields->_PhaseCnt_k__BackingField;
            if ( !byte_4C3FB51 )
            {
              sub_1C37058(&TerminalPramsManager_TypeInfo);
              v206 = TerminalPramsManager_TypeInfo;
              byte_4C3FB51 = 1;
            }
            if ( !v206->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v206);
              v206 = TerminalPramsManager_TypeInfo;
            }
            IsQuestClear_k__BackingField = v206->static_fields->_IsQuestClear_k__BackingField;
            if ( !byte_4C3FB4E )
            {
              sub_1C37058(&TerminalPramsManager_TypeInfo);
              v206 = TerminalPramsManager_TypeInfo;
              byte_4C3FB4E = 1;
            }
            if ( !v206->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v206);
              v206 = TerminalPramsManager_TypeInfo;
            }
            SubmarineSaveParamsManager__SaveClearQuestInfo(
              v207,
              PhaseCnt_k__BackingField,
              IsQuestClear_k__BackingField,
              v206->static_fields->_IsPhaseClear_k__BackingField,
              0);
          }
          else
          {
            result = (BattleResultComponent_resultData_array *)v445;
            if ( !v445 )
              goto LABEL_1211;
            if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)v445, 0) )
            {
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4C403EA )
              {
                sub_1C37058(&TerminalPramsManager_TypeInfo);
                byte_4C403EA = 1;
              }
              v174 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v174 = TerminalPramsManager_TypeInfo;
              }
              v174->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
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
                                                       (EventRaidMaster_o *)v129,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0);
  v448 = 0;
  if ( !result )
    goto LABEL_1211;
  v150 = result->max_length;
  v151 = result;
  if ( v150 >= 1 )
  {
    v152 = 0;
    while ( 1 )
    {
      if ( v152 >= (unsigned int)v150 || !*(_DWORD *)p_max_length )
        goto LABEL_1212;
      if ( !*m_Items )
        goto LABEL_1211;
      v153 = v151->m_Items[v152];
      if ( !v153 )
        goto LABEL_1211;
      RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                          (EventRaidMaster_o *)v129,
                          HIDWORD((*m_Items)->bounds),
                          v153->fields.eventId,
                          0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3CFE7 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3CFE7 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v155 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( RaidDeadQuestId == v155->_QuestId_k__BackingField )
        break;
      v152 = v448 + 1;
      v448 = v152;
      v150 = v151->max_length;
      if ( v152 >= v150 )
        goto LABEL_631;
    }
    v164 = v153->fields.eventId;
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      v155 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v155->clearBattleRaidId = v164;
    result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)result, RaidDeadQuestId, 0, 0) )
    {
      v158 = TerminalPramsManager_TypeInfo;
      v159 = v153->fields.eventId;
LABEL_501:
      if ( !v158->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v158);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->clearLastBattleRaidId = v159;
    }
  }
LABEL_631:
  v210 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v210 = TerminalPramsManager_TypeInfo;
  }
  if ( v210->static_fields->clearLastBattleRaidId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v211 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3D397 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3D397 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v211 )
      goto LABEL_1211;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v211,
           &v442,
           HIDWORD(result->m_Items[19]->klass),
           (const MethodInfo_33A10EC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      result = (BattleResultComponent_resultData_array *)v442;
      if ( !v442 )
        goto LABEL_1211;
      if ( WarEntity__IsFolder((WarEntity_o *)v442, 0) )
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
  if ( !byte_4C3FFC1 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFC1 = 1;
  }
  v212 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v212 = TerminalPramsManager_TypeInfo;
  }
  v212->static_fields->_IsWarBoardClear_k__BackingField = 0;
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v212 = TerminalPramsManager_TypeInfo;
    byte_4C3CFE7 = 1;
  }
  if ( !v212->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v212);
    v212 = TerminalPramsManager_TypeInfo;
  }
  if ( v212->static_fields->_QuestId_k__BackingField >= 1 )
  {
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    v213 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3CFE7 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3CFE7 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v213 )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)QuestMaster__getQuestEntity(
                                                         (QuestMaster_o *)v213,
                                                         result->m_Items[19]->fields.eventId,
                                                         0);
    if ( !result )
      goto LABEL_1211;
    v214 = (int)result->m_Items[1];
    if ( !byte_4C3FFC1 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FFC1 = 1;
    }
    v212 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v212 = TerminalPramsManager_TypeInfo;
    }
    v212->static_fields->_IsWarBoardClear_k__BackingField = v214 == 7;
  }
  if ( !v212->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v212);
  if ( !byte_4C400BD )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C400BD = 1;
  }
  v215 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v215 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeRelease_k__BackingField = (CGThumbnailListItem_o *)&v215->static_fields->_questClearCostumeRelease_k__BackingField;
  p_questClearCostumeRelease_k__BackingField->klass = 0;
  sub_1C36FFC(p_questClearCostumeRelease_k__BackingField, 0, v131, v132);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v219 = (*m_Items)->m_Items[22];
  if ( v219 && v219->fields.eventEndTitle )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FFB2 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FFB2 = 1;
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
      v220 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[22];
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4C400BD )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C400BD = 1;
      }
      v221 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v221 = TerminalPramsManager_TypeInfo;
      }
      v222 = (CGThumbnailListItem_o *)&v221->static_fields->_questClearCostumeRelease_k__BackingField;
      v222->klass = v220;
      sub_1C36FFC(v222, (int32_t)v220, v217, v218);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FFBF )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFBF = 1;
  }
  v223 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v223 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeGet_k__BackingField = (CGThumbnailListItem_o *)&v223->static_fields->_questClearCostumeGet_k__BackingField;
  p_questClearCostumeGet_k__BackingField->klass = 0;
  sub_1C36FFC(p_questClearCostumeGet_k__BackingField, 0, v217, v218);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v227 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[23];
  if ( v227 && v227->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FFBF )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FFBF = 1;
    }
    v228 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v228 = TerminalPramsManager_TypeInfo;
    }
    v229 = (CGThumbnailListItem_o *)&v228->static_fields->_questClearCostumeGet_k__BackingField;
    v229->klass = v227;
    sub_1C36FFC(v229, (int32_t)v227, v225, v226);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403F8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403F8 = 1;
  }
  v230 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v230 = TerminalPramsManager_TypeInfo;
  }
  p_eventPointWinReward_k__BackingField = (CGThumbnailListItem_o *)&v230->static_fields->_eventPointWinReward_k__BackingField;
  p_eventPointWinReward_k__BackingField->klass = 0;
  sub_1C36FFC(p_eventPointWinReward_k__BackingField, 0, v225, v226);
  if ( !byte_4C403F9 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403F9 = 1;
  }
  v234 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v234 = TerminalPramsManager_TypeInfo;
  }
  v234->static_fields->_eventPointWinType_k__BackingField = 0;
  if ( v74 && v445 && HIDWORD(v445[9].klass) == 4 )
  {
    v235 = v74->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !result )
      goto LABEL_1211;
    v236 = (QuestGroupMaster_o *)result;
    GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)result, v235, 4, 0);
    v238 = TerminalPramsManager_TypeInfo;
    v239 = GroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v238 = TerminalPramsManager_TypeInfo;
    }
    v238->static_fields->joinGroupId = v239;
    v240 = QuestGroupMaster__GetGroupId(v236, v235, 3, 0);
    if ( !byte_4C3FB51 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FB51 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( v240 >= 1 && BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      v241 = DataManager__GetMasterData_object_(
               (DataManager_o *)result,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventPointMaster___);
      if ( !*(_DWORD *)p_max_length )
        goto LABEL_1212;
      if ( !*m_Items || !result )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)EventPointMaster__GetEntity(
                                                           (EventPointMaster_o *)result,
                                                           v240,
                                                           HIDWORD((*m_Items)->bounds),
                                                           0);
      v242 = (EventPointEntity_o *)result;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v242 )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)EventPointEntity__IsGroupOnGroup1(
                                                           v242,
                                                           TerminalPramsManager_TypeInfo->static_fields->joinGroupId,
                                                           0);
      if ( !v241 )
        goto LABEL_1211;
      v243 = QuestReleaseMaster__EventPointWinActionType(
               (QuestReleaseMaster_o *)v241,
               v235,
               (unsigned __int8)result & 1,
               0);
      if ( !byte_4C403F9 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C403F9 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(result->m_Items[19]->fields.warClearReward) = v243;
      if ( !byte_4C403FA )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        byte_4C403FA = 1;
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v244 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( v244->_eventPointWinType_k__BackingField )
      {
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          v244 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v244->joinGroupId = -1;
      }
    }
    if ( !*(_DWORD *)p_max_length )
      goto LABEL_1212;
    if ( !*m_Items )
      goto LABEL_1211;
    v245 = (*m_Items)->m_Items[20];
    if ( v245 )
    {
      v246 = v245->fields.eventEndTitle;
      if ( v246 )
      {
        if ( !(_DWORD)v246 )
          goto LABEL_1212;
        v247 = (CGThumbnailListItem_c *)v245->fields.eventEndMessage;
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_4C403F8 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C403F8 = 1;
        }
        v248 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v248 = TerminalPramsManager_TypeInfo;
        }
        v249 = (CGThumbnailListItem_o *)&v248->static_fields->_eventPointWinReward_k__BackingField;
        v249->klass = v247;
        sub_1C36FFC(v249, (int32_t)v247, v232, v233);
      }
    }
  }
  if ( v74 && v445 && HIDWORD(v445[9].klass) == 6 )
  {
    v250 = v74->fields.questId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C403FB )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403FB = 1;
    }
    v251 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v251 = TerminalPramsManager_TypeInfo;
    }
    v251->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = v250;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401C0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401C0 = 1;
  }
  v252 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v252 = TerminalPramsManager_TypeInfo;
  }
  p_eventRaceBoost_k__BackingField = (CGThumbnailListItem_o *)&v252->static_fields->_eventRaceBoost_k__BackingField;
  p_eventRaceBoost_k__BackingField->klass = 0;
  sub_1C36FFC(p_eventRaceBoost_k__BackingField, 0, v232, v233);
  v256 = *p_max_length;
  if ( !(unsigned int)*p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v257 = (*m_Items)->m_Items[21];
  if ( v257 && v257->fields.battleId >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C401C0 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401C0 = 1;
    }
    v258 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v258 = TerminalPramsManager_TypeInfo;
    }
    v259 = (CGThumbnailListItem_o *)&v258->static_fields->_eventRaceBoost_k__BackingField;
    v259->klass = (CGThumbnailListItem_c *)v257;
    sub_1C36FFC(v259, (int32_t)v257, v254, v255);
    if ( !byte_4C401A7 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C401A7 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v260 = *(_QWORD *)&result->m_Items[19]->fields.followerType;
    if ( !byte_4C3CFE7 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4C3CFE7 = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v260 )
      goto LABEL_1211;
    *(_DWORD *)(v260 + 28) = result->m_Items[19]->fields.eventId;
    v256 = *p_max_length;
  }
  if ( !(_DWORD)v256 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v261 = (*m_Items)->m_Items[24];
  if ( v261 )
  {
    v262 = v261->fields.eventEndTitle;
    if ( v262 )
    {
      if ( !(_DWORD)v262 )
        goto LABEL_1212;
      v263 = v261->fields.eventEndMessage;
      if ( !v263 )
        goto LABEL_1211;
      if ( v263->fields._stringLength >= 1 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C403FC )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C403FC = 1;
        }
        v264 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v264 = TerminalPramsManager_TypeInfo;
        }
        p_eventTowerReward_k__BackingField = (CGThumbnailListItem_o *)&v264->static_fields->_eventTowerReward_k__BackingField;
        p_eventTowerReward_k__BackingField->klass = (CGThumbnailListItem_c *)v263;
        sub_1C36FFC(p_eventTowerReward_k__BackingField, (int32_t)v263, v254, v255);
        if ( !*(_DWORD *)p_max_length )
          goto LABEL_1212;
        if ( !*m_Items )
          goto LABEL_1211;
        v268 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[25];
        if ( !byte_4C403FD )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C403FD = 1;
        }
        v269 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v269 = TerminalPramsManager_TypeInfo;
        }
        p_resultEventTowerRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v269->static_fields->_resultEventTowerRewardInfo_k__BackingField;
        p_resultEventTowerRewardInfo_k__BackingField->klass = v268;
        sub_1C36FFC(p_resultEventTowerRewardInfo_k__BackingField, (int32_t)v268, v266, v267);
        v256 = *p_max_length;
      }
    }
  }
  if ( !(_DWORD)v256 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v271 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[26];
  if ( v271 && v271->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FFB9 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FFB9 = 1;
    }
    v272 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v272 = TerminalPramsManager_TypeInfo;
    }
    p_resultBoostItemRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v272->static_fields->_resultBoostItemRewardInfo_k__BackingField;
    p_resultBoostItemRewardInfo_k__BackingField->klass = v271;
    sub_1C36FFC(p_resultBoostItemRewardInfo_k__BackingField, (int32_t)v271, v254, v255);
    v256 = *p_max_length;
  }
  if ( !(_DWORD)v256 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v274 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[27];
  if ( v274 && v274->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FFBA )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FFBA = 1;
    }
    v275 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v275 = TerminalPramsManager_TypeInfo;
    }
    p_resultEventBoardGameTokenRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v275->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
    p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = v274;
    sub_1C36FFC(p_resultEventBoardGameTokenRewardInfo_k__BackingField, (int32_t)v274, v254, v255);
    v256 = *p_max_length;
  }
  if ( !(_DWORD)v256 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v277 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[28];
  if ( v277 && v277->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FFC4 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FFC4 = 1;
    }
    v278 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v278 = TerminalPramsManager_TypeInfo;
    }
    p_warClearReward_k__BackingField = (CGThumbnailListItem_o *)&v278->static_fields->_warClearReward_k__BackingField;
    p_warClearReward_k__BackingField->klass = v277;
    sub_1C36FFC(p_warClearReward_k__BackingField, (int32_t)v277, v254, v255);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403FE )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403FE = 1;
  }
  v280 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v280 = TerminalPramsManager_TypeInfo;
  }
  v281 = v280->static_fields;
  v281->_oldSuperBoss_k__BackingField = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v281->_oldSuperBoss_k__BackingField, 0, v254, v255);
  if ( !byte_4C403FF )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403FF = 1;
  }
  v284 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v284 = TerminalPramsManager_TypeInfo;
  }
  v285 = v284->static_fields;
  v285->_oldPersonalBoss_k__BackingField = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v285->_oldPersonalBoss_k__BackingField, 0, v282, v283);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE7 = 1;
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
  result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)result, WarID_ByQuestID, 0);
  if ( WarEntityByWarID )
    v289 = WarEntityByWarID->fields.eventId;
  else
    v289 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !result )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v441,
                                                       v289,
                                                       (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( v432 )
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
    v292 = *p_max_length;
    if ( !(unsigned int)*p_max_length )
      goto LABEL_1212;
    if ( !*m_Items )
      goto LABEL_1211;
    if ( (*m_Items)->m_Items[42] )
    {
      result = (BattleResultComponent_resultData_array *)v441;
      if ( v441
        && (result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsPersonalBoss(
                                                                 (EventDetailEntity_o *)v441,
                                                                 0),
            v292 = *p_max_length,
            ((unsigned __int8)result & 1) != 0) )
      {
        if ( !(_DWORD)v292 )
          goto LABEL_1212;
        if ( !*m_Items )
          goto LABEL_1211;
        v293 = (*m_Items)->m_Items[42];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C403FF )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C403FF = 1;
        }
        v294 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v294 = TerminalPramsManager_TypeInfo;
        }
        v295 = v294->static_fields;
        v295->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v293;
        p_oldPersonalBoss_k__BackingField = (CGThumbnailListItem_o *)&v295->_oldPersonalBoss_k__BackingField;
      }
      else
      {
        if ( !(_DWORD)v292 )
          goto LABEL_1212;
        if ( !*m_Items )
          goto LABEL_1211;
        v293 = (*m_Items)->m_Items[42];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C403FE )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C403FE = 1;
        }
        v297 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v297 = TerminalPramsManager_TypeInfo;
        }
        v298 = v297->static_fields;
        v298->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v293;
        p_oldPersonalBoss_k__BackingField = (CGThumbnailListItem_o *)&v298->_oldSuperBoss_k__BackingField;
      }
      sub_1C36FFC(p_oldPersonalBoss_k__BackingField, (int32_t)v293, v290, v291);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C40400 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40400 = 1;
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
  if ( !byte_4C40400 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40400 = 1;
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
    v300 = 1;
  }
  else
  {
LABEL_1217:
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_4C3CFE7 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3CFE7 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v301 = BalanceConfig_TypeInfo;
    v302 = result->m_Items[19]->fields.eventId;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v301 = BalanceConfig_TypeInfo;
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v300 = v302 == v301->static_fields->OrtFirstQuestId;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4C3FFD2 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFD2 = 1;
  }
  v303 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v303 = TerminalPramsManager_TypeInfo;
  }
  v303->static_fields->_isIncomingCall_k__BackingField = v300;
  if ( v441 && EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)v441, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3CFE7 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3CFE7 = 1;
    }
    v304 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v304 = TerminalPramsManager_TypeInfo;
    }
    v305 = BalanceConfig_TypeInfo;
    v306 = v304->static_fields->_QuestId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v305 = BalanceConfig_TypeInfo;
    }
    if ( v306 == v305->static_fields->OrtLateQuestId )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3CFE6 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3CFE6 = 1;
      }
      v307 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v307 = TerminalPramsManager_TypeInfo;
      }
      v308 = BalanceConfig_TypeInfo;
      v309 = v307->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v308 = BalanceConfig_TypeInfo;
      }
      if ( v309 + 1 == v308->static_fields->OrtLatePhaseBreak )
        goto LABEL_1218;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3CFE6 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3CFE6 = 1;
      }
      v310 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v310 = TerminalPramsManager_TypeInfo;
      }
      v311 = BalanceConfig_TypeInfo;
      v312 = v310->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v311 = BalanceConfig_TypeInfo;
      }
      if ( v312 + 1 == v311->static_fields->OrtLatePhaseDead )
      {
LABEL_1218:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v313 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserSuperBossMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C3CD62 )
        {
          sub_1C37058(&NetworkManager_TypeInfo);
          byte_4C3CD62 = 1;
        }
        result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        }
        v314 = result->m_Items[19]->fields.myDeck;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v313 )
          goto LABEL_1211;
        if ( UserSuperBossMaster__TryGetEntity(
               (UserSuperBossMaster_o *)v313,
               &v440,
               (int64_t)v314,
               v289,
               BalanceConfig_TypeInfo->static_fields->OrtThirdFormId,
               0) )
        {
          result = (BattleResultComponent_resultData_array *)sub_1C37100(UserSuperBossEntity___TypeInfo, 1);
          if ( !result )
            goto LABEL_1211;
          v317 = v440;
          v318 = result;
          if ( v440 )
          {
            result = (BattleResultComponent_resultData_array *)sub_1C37194(v440, result->obj.klass->_1.element_class);
            if ( !result )
            {
LABEL_1213:
              v430 = sub_1C372D8();
              sub_1C37180(v430, 0);
            }
          }
          if ( !LODWORD(v318->max_length) )
            goto LABEL_1212;
          v318->m_Items[0] = (BattleResultComponent_resultData_o *)v317;
          sub_1C36FFC((CGThumbnailListItem_o *)v318->m_Items, (int32_t)v317, v315, v316);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C403FF )
          {
            sub_1C37058(&TerminalPramsManager_TypeInfo);
            byte_4C403FF = 1;
          }
          v321 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v321 = TerminalPramsManager_TypeInfo;
          }
          v322 = v321->static_fields;
          v322->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v318;
          sub_1C36FFC((CGThumbnailListItem_o *)&v322->_oldPersonalBoss_k__BackingField, (int32_t)v318, v319, v320);
        }
      }
    }
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  TalkResumeInfo = ScriptManager__GetTalkResumeInfo(0);
  if ( TalkResumeInfo )
  {
    v324 = TalkResumeInfo;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    v325 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3CFE7 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3CFE7 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v325 )
      goto LABEL_1211;
    ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)v325, result->m_Items[19]->fields.eventId, 0);
    v327 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !byte_4C3CFE6 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3CFE6 = 1;
    }
    v328 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v328 = TerminalPramsManager_TypeInfo;
    }
    v329 = v328->static_fields->_PhaseCnt_k__BackingField;
    winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v324, 0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd2(
                                                         ScriptQuestId,
                                                         v329 + 1,
                                                         winResult,
                                                         0);
    if ( !v327 )
      goto LABEL_1211;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v327, (System_String_o *)result, 0) )
      goto LABEL_1026;
    v333 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3CFE6 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3CFE6 = 1;
    }
    v334 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v334 = TerminalPramsManager_TypeInfo;
    }
    v335 = v334->static_fields->_PhaseCnt_k__BackingField;
    v336 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v324, 0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd(
                                                         ScriptQuestId,
                                                         v335 + 1,
                                                         v336,
                                                         0);
    if ( !v333 )
      goto LABEL_1211;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v333, (System_String_o *)result, 0) )
    {
LABEL_1026:
      v337 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v337 = TerminalPramsManager_TypeInfo;
      }
      v338 = StringLiteral_1/*""*/;
      p_lastPlayBgmName = (CGThumbnailListItem_o *)&v337->static_fields->lastPlayBgmName;
      p_lastPlayBgmName->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
      sub_1C36FFC(p_lastPlayBgmName, v338, v331, v332);
      TerminalPramsManager__LastPlayBgmNameSave_SaveData(v340);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  v341 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE7 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v342 = result->m_Items[19]->fields.eventId;
  if ( !byte_4C3CFE6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4C3CFE6 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v341 )
    goto LABEL_1211;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)v341,
    &v449,
    v342,
    LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
    0);
  if ( !byte_4C40401 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40401 = 1;
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
    if ( !byte_4C40401 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C40401 = 1;
    }
    v345 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v345 = TerminalPramsManager_TypeInfo;
    }
    result = (BattleResultComponent_resultData_array *)v345->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
    if ( !result )
      goto LABEL_1211;
    result->max_length = 0;
    v346 = &result->max_length;
    *(v346 - 1) = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)v346, 0, v343, v344);
  }
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v347 = HIDWORD((*m_Items)->bounds);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE7 = 1;
  }
  v348 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v348 = TerminalPramsManager_TypeInfo;
  }
  v349 = v348->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C3CFE6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v348 = TerminalPramsManager_TypeInfo;
    byte_4C3CFE6 = 1;
  }
  if ( !v348->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v348);
    v348 = TerminalPramsManager_TypeInfo;
  }
  SpecifiedSceneInfo = QuestPhaseMaster__GetSpecifiedSceneInfo(
                         (QuestPhaseMaster_o *)v341,
                         v347,
                         v349,
                         v348->static_fields->_PhaseCnt_k__BackingField + 1,
                         0);
  if ( !byte_4C403E2 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403E2 = 1;
  }
  v353 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v353 = TerminalPramsManager_TypeInfo;
  }
  v354 = v353->static_fields;
  v354->_SpecifiedChangeSceneInfo_k__BackingField = SpecifiedSceneInfo;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&v354->_SpecifiedChangeSceneInfo_k__BackingField,
    (int32_t)SpecifiedSceneInfo,
    v350,
    v351);
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId = 0;
  TerminalPramsManager__InitTipsArchiveScrollValueList(v355);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v358 = (int32_t)(*m_Items)->m_Items[53];
  v359 = TerminalPramsManager_TypeInfo;
  if ( v358 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FFB4 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FFB4 = 1;
    }
    v359 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v359 = TerminalPramsManager_TypeInfo;
    }
    v359->static_fields->_EventMuralId_k__BackingField = v358;
  }
  if ( !v359->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v359);
    v359 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = (CGThumbnailListItem_o *)&v359->static_fields->eventHarvestGrowthInfo;
  p_eventHarvestGrowthInfo->klass = 0;
  sub_1C36FFC(p_eventHarvestGrowthInfo, 0, v356, v357);
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE7 = 1;
  }
  v361 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v361 = TerminalPramsManager_TypeInfo;
  }
  result = (BattleResultComponent_resultData_array *)QuestPhaseMaster__GetEntity(
                                                       (QuestPhaseMaster_o *)v341,
                                                       v361->static_fields->_QuestId_k__BackingField,
                                                       1,
                                                       0);
  if ( !result )
    goto LABEL_1211;
  v362 = result;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(
                     (QuestPhaseEntity_o *)result,
                     (System_String_o *)StringLiteral_19937/*"harvestGrowthBeforeQuestId"*/,
                     -1,
                     0);
  v364 = QuestPhaseEntity__getScriptIntParam((QuestPhaseEntity_o *)v362, (System_String_o *)StringLiteral_19936/*"harvestGrowthAfterQuestId"*/, -1, 0);
  if ( ScriptIntParam >= 1 )
  {
    v365 = v364;
    if ( v364 >= 1 )
    {
      v366 = sub_1C372A4(EventHarvestGrowthInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v366, 0);
      if ( !v366 )
        goto LABEL_1211;
      bounds = v362->bounds;
      *(_DWORD *)(v366 + 24) = ScriptIntParam;
      *(_DWORD *)(v366 + 28) = v365;
      *(_QWORD *)(v366 + 16) = bounds;
      v370 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v370 = TerminalPramsManager_TypeInfo;
      }
      v371 = (CGThumbnailListItem_o *)&v370->static_fields->eventHarvestGrowthInfo;
      v371->klass = (CGThumbnailListItem_c *)v366;
      sub_1C36FFC(v371, v366, v367, v368);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  v372 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE7 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v372 )
    goto LABEL_1211;
  QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)v372, result->m_Items[19]->fields.eventId, 0);
  if ( QuestEntity )
  {
    v375 = QuestEntity;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3CFE7 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3CFE7 = 1;
    }
    v376 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v376 = TerminalPramsManager_TypeInfo;
    }
    if ( QuestPhaseMaster__IsAreaImproveQuest(
           (QuestPhaseMaster_o *)v341,
           v376->static_fields->_QuestId_k__BackingField,
           0) )
    {
      SpotId = QuestEntity__getSpotId(v375, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
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
        v379 = CurrentLevelEntity;
        v380 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v380 = TerminalPramsManager_TypeInfo;
        }
        eventAreaImproveResultInfo = v380->static_fields->eventAreaImproveResultInfo;
        if ( eventAreaImproveResultInfo )
        {
          if ( !v380->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v380);
            eventAreaImproveResultInfo = TerminalPramsManager_TypeInfo->static_fields->eventAreaImproveResultInfo;
            if ( !eventAreaImproveResultInfo )
              goto LABEL_1211;
          }
          eventAreaImproveResultInfo->fields.afterLevel = v379->fields.lv;
        }
      }
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
  }
  v382 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v382 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__SaveLastClearedGrandWar(v382->static_fields->_WarId_k__BackingField, v374);
  result = (BattleResultComponent_resultData_array *)v449;
  if ( v449 )
  {
    result = (BattleResultComponent_resultData_array *)QuestPhaseEntity__GetMoveSceneInfo(v449, 0);
    if ( !result )
      goto LABEL_1211;
    if ( result->max_length )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3CFE7 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3CFE7 = 1;
      }
      v385 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v385 = TerminalPramsManager_TypeInfo;
      }
      v448 = v385->static_fields->_QuestId_k__BackingField;
      v386 = System_Int32__ToString((int32_t)&v448, 0);
      if ( !byte_4C3CFE6 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3CFE6 = 1;
      }
      v387 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v387 = TerminalPramsManager_TypeInfo;
      }
      v448 = v387->static_fields->_PhaseCnt_k__BackingField + 1;
      v388 = System_Int32__ToString((int32_t)&v448, 0);
      v391 = System_String__Concat_63599904(v386, (System_String_o *)StringLiteral_811/*","*/, v388, 0);
      if ( !byte_4C401BF )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C401BF = 1;
      }
      v392 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v392 = TerminalPramsManager_TypeInfo;
      }
      p_SceneMoveQuestClearedInfo_k__BackingField = (CGThumbnailListItem_o *)&v392->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
      p_SceneMoveQuestClearedInfo_k__BackingField->klass = (CGThumbnailListItem_c *)v391;
      sub_1C36FFC(p_SceneMoveQuestClearedInfo_k__BackingField, (int32_t)v391, v389, v390);
    }
  }
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v394 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[48];
  if ( v394 && v394->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FFBD )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FFBD = 1;
    }
    v395 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v395 = TerminalPramsManager_TypeInfo;
    }
    p_limitImageAnnounces_k__BackingField = (CGThumbnailListItem_o *)&v395->static_fields->_limitImageAnnounces_k__BackingField;
    p_limitImageAnnounces_k__BackingField->klass = v394;
    sub_1C36FFC(p_limitImageAnnounces_k__BackingField, (int32_t)v394, v383, v384);
  }
  v397 = sub_1C37100(string___TypeInfo, 7);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE7 = 1;
  }
  v398 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v398 = TerminalPramsManager_TypeInfo;
  }
  v448 = v398->static_fields->_QuestId_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v448, 0);
  if ( !v397 )
LABEL_1211:
    sub_1C372B4(result);
  if ( !*(_DWORD *)(v397 + 24) )
    goto LABEL_1212;
  *(_QWORD *)(v397 + 32) = result;
  sub_1C36FFC((CGThumbnailListItem_o *)(v397 + 32), (int32_t)result, v399, v400);
  if ( *(_DWORD *)(v397 + 24) <= 1u )
    goto LABEL_1212;
  v403 = StringLiteral_811/*","*/;
  *(_QWORD *)(v397 + 40) = StringLiteral_811/*","*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v397 + 40), v403, v401, v402);
  if ( !byte_4C3CFE6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE6 = 1;
  }
  v404 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v404 = TerminalPramsManager_TypeInfo;
  }
  v448 = v404->static_fields->_PhaseCnt_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v448, 0);
  if ( *(_DWORD *)(v397 + 24) <= 2u )
    goto LABEL_1212;
  *(_QWORD *)(v397 + 48) = result;
  sub_1C36FFC((CGThumbnailListItem_o *)(v397 + 48), (int32_t)result, v405, v406);
  if ( *(_DWORD *)(v397 + 24) <= 3u )
    goto LABEL_1212;
  v409 = StringLiteral_811/*","*/;
  *(_QWORD *)(v397 + 56) = StringLiteral_811/*","*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v397 + 56), v409, v407, v408);
  if ( !byte_4C3FB51 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FB51 = 1;
  }
  v410 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v410 = TerminalPramsManager_TypeInfo;
  }
  v439[0] = v410->static_fields->_IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v439, 0);
  if ( *(_DWORD *)(v397 + 24) <= 4u )
    goto LABEL_1212;
  *(_QWORD *)(v397 + 64) = result;
  sub_1C36FFC((CGThumbnailListItem_o *)(v397 + 64), (int32_t)result, v411, v412);
  if ( *(_DWORD *)(v397 + 24) <= 5u )
    goto LABEL_1212;
  v415 = StringLiteral_811/*","*/;
  *(_QWORD *)(v397 + 72) = StringLiteral_811/*","*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v397 + 72), v415, v413, v414);
  if ( !byte_4C3FB4E )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FB4E = 1;
  }
  v416 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v416 = TerminalPramsManager_TypeInfo;
  }
  v439[0] = v416->static_fields->_IsPhaseClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v439, 0);
  if ( *(_DWORD *)(v397 + 24) <= 6u )
    goto LABEL_1212;
  *(_QWORD *)(v397 + 80) = result;
  sub_1C36FFC((CGThumbnailListItem_o *)(v397 + 80), (int32_t)result, v417, v418);
  v419 = System_String__Concat_63602172((System_String_array *)v397, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_16713/*"afterActionBk"*/, v419, 0);
  TerminalPramsManager__SaveClearDatas(resulta, v420);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v421);
  TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(v422);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v423);
  TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(v424);
  TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(v425);
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE7 = 1;
  }
  v426 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v426 = TerminalPramsManager_TypeInfo;
  }
  v427 = v426->static_fields->_QuestId_k__BackingField;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__SetClearQuestWarEnableMyRoomBgChange(v427, 0);
  if ( TerminalPramsManager__IsTerminalEffectNT2BoardOpen(v428) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F89C )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F89C = 1;
    }
    v429 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v429 = TerminalPramsManager_TypeInfo;
    }
    v429->static_fields->_WarId_k__BackingField = 0;
    if ( !byte_4C3D786 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      v429 = TerminalPramsManager_TypeInfo;
      byte_4C3D786 = 1;
    }
    if ( !v429->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v429);
      v429 = TerminalPramsManager_TypeInfo;
    }
    v429->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4C3FFA6 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      v429 = TerminalPramsManager_TypeInfo;
      byte_4C3FFA6 = 1;
    }
    if ( !v429->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v429);
      v429 = TerminalPramsManager_TypeInfo;
    }
    v429->static_fields->_IsMapReturnFolder_k__BackingField = 0;
    if ( !byte_4C401B2 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      v429 = TerminalPramsManager_TypeInfo;
      byte_4C401B2 = 1;
    }
    if ( !v429->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v429);
      v429 = TerminalPramsManager_TypeInfo;
    }
    v429->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData((const MethodInfo *)v429);
  }
}


void TerminalPramsManager__ResetBlankEarthSpotInfo(const MethodInfo *method)
{
  const MethodInfo *v1; // x0

  if ( (byte_4C4036D & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4036D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F7E0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F7E0 = 1;
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

  if ( (byte_4C40377 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40377 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403D4 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403D4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestMessageScriptQuestId_k__BackingField = -1;
  if ( !byte_4C403D5 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C403D5 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = -1;
  if ( !byte_4C400C2 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C400C2 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  p_TalkScriptInfo_k__BackingField = (CGThumbnailListItem_o *)&v3->static_fields->_TalkScriptInfo_k__BackingField;
  p_TalkScriptInfo_k__BackingField->klass = 0;
  sub_1C36FFC(p_TalkScriptInfo_k__BackingField, 0, v1, v2);
  if ( !byte_4C403D6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403D6 = 1;
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

  if ( (byte_4C403BD & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403BD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v3->static_fields->mQuestRewardInfos;
  if ( !byte_4C3CFE9 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C3CFE9 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UseAddRewardItemRewardInfos_k__BackingField = v3->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
  if ( result )
  {
    if ( !LODWORD(result->max_length) )
      sub_1C372BC(v3);
    v6 = result->m_Items[0];
    if ( !v6 )
      sub_1C372B4(0);
    if ( BattleResultComponent_resultData__checkResultDispFlag(v6, 2048, 0) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3CFE7 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3CFE7 = 1;
      }
      v8 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v8 = TerminalPramsManager_TypeInfo;
      }
      UseAddRewardItemRewardInfos_k__BackingField = 0;
      if ( TerminalPramsManager__IsUsePopupQuestReward(v8->static_fields->_QuestId_k__BackingField, v7) )
        mQuestRewardInfos = 0;
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
  if ( !byte_4C3FB51 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C3FB51 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  IsQuestClear_k__BackingField = v9->static_fields->_IsQuestClear_k__BackingField;
  if ( !byte_4C3FB4E )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C3FB4E = 1;
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
  if ( !byte_4C40402 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C40402 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  oldSuperBoss = v9->static_fields->_oldSuperBoss_k__BackingField;
  if ( !byte_4C40400 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C40400 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss = v9->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !byte_4C40403 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C40403 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  eventPointWinReward_k__BackingField = v9->static_fields->_eventPointWinReward_k__BackingField;
  if ( !byte_4C403FA )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C403FA = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  evpWinType = v9->static_fields->_eventPointWinType_k__BackingField;
  if ( !byte_4C401A7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C401A7 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  evRace = v9->static_fields->_eventRaceBoost_k__BackingField;
  if ( !byte_4C3FFBB )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C3FFBB = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeRelease = v9->static_fields->_questClearCostumeRelease_k__BackingField;
  if ( !byte_4C3FFB1 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C3FFB1 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeGet_k__BackingField = v9->static_fields->_questClearCostumeGet_k__BackingField;
  if ( !byte_4C3FFB7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C3FFB7 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  evTowerReward = v9->static_fields->_eventTowerReward_k__BackingField;
  if ( !byte_4C40404 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C40404 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v9->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  if ( !byte_4C3EC65 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C3EC65 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  IsDispOnly_k__BackingField = v9->static_fields->_IsDispOnly_k__BackingField;
  if ( !byte_4C3FFC3 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C3FFC3 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  warClearRewardIn = v9->static_fields->_warClearReward_k__BackingField;
  if ( !byte_4C40405 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C40405 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  eventActivityPointEffectState = v9->static_fields->_EventActivityPointEffectState_k__BackingField;
  if ( !byte_4C3FFB2 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C3FFB2 = 1;
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
  if ( !byte_4C3FFBC )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C3FFBC = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  limitImageAnnounces = v9->static_fields->_limitImageAnnounces_k__BackingField;
  if ( !byte_4C3F7DF )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C3F7DF = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  IsOrdealCallWarClear_k__BackingField = v9->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4C3FFB3 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C3FFB3 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  eventMuralId = v9->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_4C401B5 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C401B5 = 1;
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
  v24 = (TerminalPramsManager_ClearData_o *)sub_1C372A4(TerminalPramsManager_ClearData_TypeInfo);
  TerminalPramsManager_ClearData___ctor_37319364(
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
    0);
  if ( !byte_4C40406 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40406 = 1;
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
  v28 = JsonManager__toJson((Il2CppObject *)v24, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString(SAVEKEY_CLEAR_REWARD_DISP, v28, 0);
}


void TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  TerminalPramsManager_c *v2; // x0
  EventRaidDefeatedEffectInfo_o *EventRaidDefeatedEffectInfo_k__BackingField; // x0
  System_String_o *v4; // x0

  if ( (byte_4C403C3 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11456/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_4C403C3 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C40408 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40408 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  EventRaidDefeatedEffectInfo_k__BackingField = v2->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  if ( !EventRaidDefeatedEffectInfo_k__BackingField )
    sub_1C372B4(0);
  v4 = EventRaidDefeatedEffectInfo__ConvertToStringData(EventRaidDefeatedEffectInfo_k__BackingField, v1);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11456/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v4, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveLastClearedGrandWar(int32_t warId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  int monitor; // w20
  BalanceConfig_c *v5; // x0
  GrandQuestRootComponent_c *v6; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C403CF & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C37058(&GrandQuestRootComponent_TypeInfo);
    byte_4C403CF = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    warId,
                                    (const MethodInfo_33A10EC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
LABEL_15:
    sub_1C372B4(Master_object);
  monitor = (int)entity[3].monitor;
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  if ( monitor == v5->static_fields->GrandBoardWarId )
  {
    v6 = GrandQuestRootComponent_TypeInfo;
    if ( !GrandQuestRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GrandQuestRootComponent_TypeInfo);
      v6 = GrandQuestRootComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_LAST_CLEAR_GRAND_WAR, warId, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void TerminalPramsManager__SaveQuestInfo_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C40384 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_13707/*"TerminalPhaseCnt"*/);
    sub_1C37058(&StringLiteral_13710/*"TerminalQuestId"*/);
    byte_4C40384 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE7 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13710/*"TerminalQuestId"*/,
    v1->static_fields->_QuestId_k__BackingField,
    0);
  if ( !byte_4C3CFE6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE6 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13707/*"TerminalPhaseCnt"*/,
    v2->static_fields->_PhaseCnt_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveQuestRandomGroupList(const MethodInfo *method)
{
  System_String_o *Empty; // x19
  TerminalPramsManager_c *v2; // x0
  System_Collections_Generic_Dictionary_int__int__o *QuestRandomGroupList_k__BackingField; // x0
  int key; // w20
  int key_high; // w27
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  Il2CppObject *v12; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  Il2CppObject *v19; // x2
  System_String_o *v20; // x1
  int v21; // [xsp+Ch] [xbp-94h] BYREF
  _OWORD v22[2]; // [xsp+10h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C403C7 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11465/*"SAVEKEY_QuestRandomGroupList"*/);
    sub_1C37058(&StringLiteral_25177/*"{0}:{1}"*/);
    sub_1C37058(&StringLiteral_811/*","*/);
    byte_4C403C7 = 1;
  }
  memset(&v23, 0, 32);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F892 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F892 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  QuestRandomGroupList_k__BackingField = v2->static_fields->_QuestRandomGroupList_k__BackingField;
  if ( !QuestRandomGroupList_k__BackingField )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v22,
    QuestRandomGroupList_k__BackingField,
    (const MethodInfo_33F1EA4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v23.fields._dictionary = v22[0];
  v23.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v22[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v23,
            (const MethodInfo_354FA7C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int)v23.fields._current.fields.key;
    key_high = HIDWORD(v23.fields._current.fields.key);
    if ( !System_String__IsNullOrEmpty(Empty, 0) )
      Empty = System_String__Concat_63561656(Empty, (System_String_o *)StringLiteral_811/*","*/, 0);
    LODWORD(v22[0]) = key;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v22, v6, v7, v8, v9, v10, v11);
    v21 = key_high;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v13, v14, v15, v16, v17, v18);
    v20 = System_String__Format_63602948((System_String_o *)StringLiteral_25177/*"{0}:{1}"*/, v12, v19, 0);
    Empty = System_String__Concat_63561656(Empty, v20, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v23,
    (const MethodInfo_354FB7C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11465/*"SAVEKEY_QuestRandomGroupList"*/, Empty, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveQuestReleasedFocusState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0

  if ( (byte_4C403AF & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403AF = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v1);
  if ( !QuestFocusStateManager )
    sub_1C372B4(0);
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

  if ( (byte_4C40382 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_13700/*"TerminalEndTime"*/);
    sub_1C37058(&StringLiteral_11463/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_1C37058(&StringLiteral_13696/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C37058(&StringLiteral_13701/*"TerminalEventDailyPointEventId"*/);
    sub_1C37058(&StringLiteral_13707/*"TerminalPhaseCnt"*/);
    sub_1C37058(&StringLiteral_13715/*"TerminalTimeStatusEventId"*/);
    sub_1C37058(&StringLiteral_13699/*"TerminalDispState"*/);
    sub_1C37058(&StringLiteral_11460/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_1C37058(&StringLiteral_13702/*"TerminalIsDoneShortcut"*/);
    sub_1C37058(&StringLiteral_11459/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C37058(&StringLiteral_11464/*"SAVEKEY_PlayerGenderType"*/);
    sub_1C37058(&StringLiteral_11452/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_1C37058(&StringLiteral_11461/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_1C37058(&StringLiteral_13710/*"TerminalQuestId"*/);
    sub_1C37058(&StringLiteral_11472/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_1C37058(&StringLiteral_13714/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_1C37058(&StringLiteral_13719/*"TerminalWarId"*/);
    sub_1C37058(&StringLiteral_13712/*"TerminalSpotId"*/);
    sub_1C37058(&StringLiteral_13716/*"TerminalTimeStatusLoopCount"*/);
    sub_1C37058(&StringLiteral_13697/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_1C37058(&StringLiteral_11450/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_1C37058(&StringLiteral_11455/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_1C37058(&StringLiteral_13720/*"TerminalWarStartedIds"*/);
    sub_1C37058(&StringLiteral_11454/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C37058(&StringLiteral_811/*","*/);
    sub_1C37058(&StringLiteral_11453/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_1C37058(&StringLiteral_11462/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_1C37058(&StringLiteral_11471/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4C40382 = 1;
  }
  EndTime_k__BackingField = 0;
  MapModelClearQuestId_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FA9A )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FA9A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13699/*"TerminalDispState"*/,
    v1->static_fields->_DispState_k__BackingField,
    0);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13719/*"TerminalWarId"*/, v2->static_fields->_WarId_k__BackingField, 0);
  if ( !byte_4C3FA9E )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FA9E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13712/*"TerminalSpotId"*/, v3->static_fields->_SpotId_k__BackingField, 0);
  if ( !byte_4C3F7DC )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F7DC = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11450/*"SAVEKEY_BlankEarthSpotId"*/,
    v4->static_fields->_BlankEarthSpotId_k__BackingField,
    0);
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE7 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13710/*"TerminalQuestId"*/,
    v5->static_fields->_QuestId_k__BackingField,
    0);
  if ( !byte_4C3CFE6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE6 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13707/*"TerminalPhaseCnt"*/,
    v6->static_fields->_PhaseCnt_k__BackingField,
    0);
  if ( !byte_4C3FA9F )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FA9F = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v7->static_fields->_EndTime_k__BackingField;
  v8 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13700/*"TerminalEndTime"*/, v8, 0);
  if ( !byte_4C3FFDE )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFDE = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13702/*"TerminalIsDoneShortcut"*/,
    v9->static_fields->_IsDoneShortcut_k__BackingField,
    0);
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_13720/*"TerminalWarStartedIds"*/,
    v10->static_fields->mTerminalWarStartedIds,
    0);
  if ( !byte_4C401AF )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401AF = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13715/*"TerminalTimeStatusEventId"*/,
    v11->static_fields->_TimeStatusEventId_k__BackingField,
    0);
  if ( !byte_4C401B0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401B0 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13716/*"TerminalTimeStatusLoopCount"*/,
    v12->static_fields->_TimeStatusLoopCount_k__BackingField,
    0);
  if ( !byte_4C403EE )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403EE = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13701/*"TerminalEventDailyPointEventId"*/,
    v13->static_fields->_EventDailyPointEventId_k__BackingField,
    0);
  if ( !byte_4C403EF )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403EF = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v14->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v15 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13714/*"TerminalTimeStatusEventDailyPoint"*/, v15, 0);
  if ( !byte_4C403F0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403F0 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13696/*"TerminalBeforeEventActivityPoint"*/,
    v16->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0);
  if ( !byte_4C403F1 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403F1 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13697/*"TerminalBeforeEventActivityPointGauge"*/,
    v17->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0);
  if ( !byte_4C403F2 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403F2 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11463/*"SAVEKEY_PlayedTerminalEffects"*/,
    v18->static_fields->_PlayedTerminalEffects_k__BackingField,
    0);
  if ( !byte_4C3FFCF )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFCF = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11460/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v19->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FFD0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFD0 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11461/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v20->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0);
  if ( !byte_4C401B1 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401B1 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11462/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v21->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401B4 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401B4 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11472/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v22->static_fields->_SelectedStoryQuestId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11454/*"SAVEKEY_ConnectMarkEventId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    0);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11453/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0);
  if ( !byte_4C3FFA8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFA8 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11471/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v23->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0);
  if ( !byte_4C3F895 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F895 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11452/*"SAVEKEY_ClearEventQuestIds"*/,
    v24->static_fields->_ClearEventQuestIds_k__BackingField,
    0);
  if ( !byte_4C3FA9B )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FA9B = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v25->static_fields->_MapModelClearQuestId_k__BackingField;
  v26 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  if ( !byte_4C3FA9C )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FA9C = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v27->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v28 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  v29 = System_String__Concat_63599904(v26, (System_String_o *)StringLiteral_811/*","*/, v28, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11459/*"SAVEKEY_MapModelClearQuestInfo"*/, v29, 0);
  if ( !byte_4C401B6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401B6 = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11455/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v30->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403F3 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403F3 = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11464/*"SAVEKEY_PlayerGenderType"*/,
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
  int32_t v8; // w1

  if ( (byte_4C403B7 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403B7 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v5);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1C372B4(0);
    if ( IsMainStoryForQuestId )
      v8 = 10;
    else
      v8 = 9;
    AdManager__TrackEvent((AdManager_o *)Instance, v8, 10, questId, questPhase, 0, 0);
  }
}


void TerminalPramsManager__SendOpenedQuestIdToAdManager(int32_t clearedQuestId, const MethodInfo *method)
{
  __int64 v3; // x20
  DataManager_o *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  const MethodInfo *v8; // x1
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

  if ( (byte_4C403B8 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C37058(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_int__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_int__QuestEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_QuestEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_1C37058(&System_Func_int__int__TypeInfo);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&System_Func_QuestEntity__int__TypeInfo);
    sub_1C37058(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1C37058(&System_Func_int__QuestEntity__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__730_0__);
    sub_1C37058(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__730_3__);
    sub_1C37058(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__730_4__);
    sub_1C37058(&Method_TerminalPramsManager___c__DisplayClass730_0__SendOpenedQuestIdToAdManager_b__1__);
    sub_1C37058(&Method_TerminalPramsManager___c__DisplayClass730_0__SendOpenedQuestIdToAdManager_b__2__);
    sub_1C37058(&TerminalPramsManager___c__DisplayClass730_0_TypeInfo);
    sub_1C37058(&TerminalPramsManager___c_TypeInfo);
    byte_4C403B8 = 1;
  }
  v43 = 0;
  entity = 0;
  v3 = sub_1C372A4(TerminalPramsManager___c__DisplayClass730_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass730_0___ctor((TerminalPramsManager___c__DisplayClass730_0_o *)v3, 0);
  if ( clearedQuestId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !v3 )
      goto LABEL_43;
    *(_QWORD *)(v3 + 16) = Instance;
    sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Instance, v5, v6);
    Instance = *(DataManager_o **)(v3 + 16);
    if ( !Instance )
      goto LABEL_43;
    if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, clearedQuestId, 0) )
      return;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SpotMaster___);
    if ( !entity )
      goto LABEL_43;
    v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0);
    if ( !v7 )
      goto LABEL_43;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  v7,
                                  &v43,
                                  (int32_t)Instance,
                                  (const MethodInfo_33A10EC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      return;
    if ( !v43 )
      goto LABEL_43;
    klass_high = HIDWORD(v43[1].klass);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( TerminalPramsManager__IsMustPlayMainStory(klass_high, v8) )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_43;
      if ( QuestEntity__GetTypeFlag(entity, 0) != 2 )
        return;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v3 + 24) = MasterData_object;
      sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)MasterData_object, v11, v12);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
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
        _9__730_0 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__730_0,
          v16,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__730_0__,
          0);
        static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
        static_fields->__9__730_0 = _9__730_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__730_0, (int32_t)_9__730_0, v18, v19);
      }
      v20 = System_Linq_Enumerable__Where_int_(
              QuestIdsByTargetAndOpenCondType,
              (System_Func_TSource__bool__o *)_9__730_0,
              (const MethodInfo_312DE68 *)Method_System_Linq_Enumerable_Where_int___);
      v21 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_int__QuestEntity__TypeInfo);
      System_Func_int__object____ctor(
        v21,
        (Il2CppObject *)v3,
        Method_TerminalPramsManager___c__DisplayClass730_0__SendOpenedQuestIdToAdManager_b__1__,
        0);
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v20,
                                                                   (System_Func_TSource__TResult__o *)v21,
                                                                   (const MethodInfo_311B668 *)Method_System_Linq_Enumerable_Select_int__QuestEntity___);
      v23 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v23,
        (Il2CppObject *)v3,
        Method_TerminalPramsManager___c__DisplayClass730_0__SendOpenedQuestIdToAdManager_b__2__,
        0);
      v24 = System_Linq_Enumerable__Where_object_(
              v22,
              (System_Func_TSource__bool__o *)v23,
              (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
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
        _9__730_3 = (System_Func_object__int__o *)sub_1C372A4(System_Func_QuestEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__730_3,
          v28,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__730_3__,
          0);
        v29 = TerminalPramsManager___c_TypeInfo->static_fields;
        v29->__9__730_3 = (struct System_Func_QuestEntity__int__o *)_9__730_3;
        sub_1C36FFC((CGThumbnailListItem_o *)&v29->__9__730_3, (int32_t)_9__730_3, v30, v31);
      }
      v32 = System_Linq_Enumerable__Select_object__int_(
              v26,
              (System_Func_TSource__TResult__o *)_9__730_3,
              (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_QuestEntity__int___);
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
        _9__730_4 = (System_Func_int__int__o *)sub_1C372A4(System_Func_int__int__TypeInfo);
        System_Func_int__int____ctor(
          _9__730_4,
          v36,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__730_4__,
          0);
        v37 = TerminalPramsManager___c_TypeInfo->static_fields;
        v37->__9__730_4 = _9__730_4;
        sub_1C36FFC((CGThumbnailListItem_o *)&v37->__9__730_4, (int32_t)_9__730_4, v38, v39);
      }
      v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_int__int_(
                                                                   v34,
                                                                   (System_Func_TSource__TKey__o *)_9__730_4,
                                                                   (const MethodInfo_31177E8 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
      v41 = System_Linq_Enumerable__FirstOrDefault_int_(
              v40,
              (const MethodInfo_310FACC *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      if ( v41 )
      {
        v42 = v41;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetOpenedStoryQuest((AdManager_o *)Instance, v42, 0);
          return;
        }
LABEL_43:
        sub_1C372B4(Instance);
      }
    }
  }
}


void TerminalPramsManager__SendResumeQuestToAdManager(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_String_o *v4; // x0
  Il2CppObject *v5; // x19
  int32_t v6; // [xsp+8h] [xbp-18h] BYREF
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v6 = questPhase;
  v7 = questId;
  if ( (byte_4C403B6 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C37058(&StringLiteral_19746/*"game.resume_quest_id"*/);
    sub_1C37058(&StringLiteral_19747/*"game.resume_quest_phase"*/);
    byte_4C403B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  v4 = System_Int32__ToString((int32_t)&v7, 0);
  if ( !Instance
    || (CrashReporter__AddCustomKey((CrashReporter_o *)Instance, (System_String_o *)StringLiteral_19746/*"game.resume_quest_id"*/, v4, 0),
        v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__),
        v4 = System_Int32__ToString((int32_t)&v6, 0),
        !v5) )
  {
    sub_1C372B4(v4);
  }
  CrashReporter__AddCustomKey((CrashReporter_o *)v5, (System_String_o *)StringLiteral_19747/*"game.resume_quest_phase"*/, v4, 0);
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__SendStartQuestToAdManager(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  bool IsMainStoryForQuestId; // w21
  AdManager_o *Instance; // x0
  int32_t v8; // w1
  Il2CppObject *v9; // x19
  Il2CppObject *v10; // x19
  int32_t v11; // [xsp+8h] [xbp-28h] BYREF
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v11 = questPhase;
  v12 = questId;
  if ( (byte_4C403B5 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_19740/*"game.last_quest_id"*/);
    sub_1C37058(&StringLiteral_19742/*"game.last_quest_phase"*/);
    byte_4C403B5 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v5);
    Instance = (AdManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance
      || (!IsMainStoryForQuestId ? (v8 = 9) : (v8 = 10),
          (AdManager__TrackEvent(Instance, v8, 9, questId, questPhase, 0, 0),
           v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__),
           Instance = (AdManager_o *)System_Int32__ToString((int32_t)&v12, 0),
           !v9)
       || (CrashReporter__AddCustomKey(
             (CrashReporter_o *)v9,
             (System_String_o *)StringLiteral_19740/*"game.last_quest_id"*/,
             (System_String_o *)Instance,
             0),
           v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__),
           Instance = (AdManager_o *)System_Int32__ToString((int32_t)&v11, 0),
           !v10)) )
    {
      sub_1C372B4(Instance);
    }
    CrashReporter__AddCustomKey(
      (CrashReporter_o *)v10,
      (System_String_o *)StringLiteral_19742/*"game.last_quest_phase"*/,
      (System_String_o *)Instance,
      0);
  }
}


void TerminalPramsManager__SetAutoResumeByQuestId(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  QuestTree_o *Instance; // x0
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v6; // x20
  int32_t warId; // w21
  TerminalPramsManager_c *v8; // x0
  Il2CppObject *Master_object; // x21
  bool v10; // w22
  TerminalPramsManager_c *v11; // x0
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  int32_t parentBlankEarthSpotId; // w1
  System_Nullable_int__o v15; // x0
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
  UnityEngine_Object_o *genericContainerHandle; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v35; // x8
  const MethodInfo *v36; // x0
  unsigned __int64 v37; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C40374 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C37058(&Method_System_Nullable_int___ctor__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C40374 = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FB53 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FB53 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    QuestInfo = QuestTree__GetQuestInfo(Instance, questId, 0);
    if ( !QuestInfo )
      return;
    v6 = QuestInfo;
    warId = QuestInfo->fields.warId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F89C )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F89C = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v8->static_fields->_WarId_k__BackingField = warId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    Instance = (QuestTree_o *)MapControl_QuestInfo__GetSpotID(v6, 0);
    if ( !Master_object )
      goto LABEL_148;
    v10 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            (int32_t)Instance,
            (const MethodInfo_33A10EC *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    LODWORD(Master_object) = MapControl_QuestInfo__GetSpotID(v6, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v10 )
    {
      if ( byte_4C3F7E0 )
        goto LABEL_38;
    }
    else
    {
      if ( !byte_4C3F89B )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3F89B = 1;
      }
      v11 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v11 = TerminalPramsManager_TypeInfo;
      }
      v11->static_fields->_SpotId_k__BackingField = (int)Master_object;
      WarInfo_k__BackingField = v6->fields._WarInfo_k__BackingField;
      if ( WarInfo_k__BackingField && (Mine = MapControl_WarInfo__GetMine(WarInfo_k__BackingField, 0)) != 0 )
      {
        parentBlankEarthSpotId = Mine->fields.parentBlankEarthSpotId;
        v15 = (System_Nullable_int__o)&v37;
        v37 = 0;
        System_Nullable_int____ctor(
          v15,
          parentBlankEarthSpotId,
          (const MethodInfo_38C87A4 *)Method_System_Nullable_int___ctor__);
        v16 = v37;
      }
      else
      {
        v16 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (Il2CppObject *)HIDWORD(v16);
      if ( byte_4C3F7E0 )
      {
LABEL_38:
        v17 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v17 = TerminalPramsManager_TypeInfo;
        }
        v17->static_fields->_BlankEarthSpotId_k__BackingField = (int)Master_object;
        v18 = v6->fields.questId;
        if ( !v17->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v17);
        if ( !byte_4C3F896 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C3F896 = 1;
        }
        v19 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
        }
        v19->static_fields->_QuestId_k__BackingField = v18;
        questPhase = v6->fields.questPhase;
        if ( !byte_4C3F89A )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
          byte_4C3F89A = 1;
        }
        if ( !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          v19 = TerminalPramsManager_TypeInfo;
        }
        v19->static_fields->_PhaseCnt_k__BackingField = questPhase;
        endTime = v6->fields.endTime;
        if ( !byte_4C3F897 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
          byte_4C3F897 = 1;
        }
        if ( !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          v19 = TerminalPramsManager_TypeInfo;
        }
        v19->static_fields->_EndTime_k__BackingField = endTime;
        if ( !byte_4C3FFDD )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
          byte_4C3FFDD = 1;
        }
        if ( !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          v19 = TerminalPramsManager_TypeInfo;
        }
        v19->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 1;
        if ( !SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__) )
          goto LABEL_151;
        v22 = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C3D397 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C3D397 = 1;
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
                             0);
        if ( WarEntityByWarID )
        {
          IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( IsFolder )
          {
            if ( !byte_4C3F898 )
            {
              sub_1C37058(&TerminalPramsManager_TypeInfo);
              byte_4C3F898 = 1;
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
            if ( !byte_4C3F898 )
            {
              sub_1C37058(&TerminalPramsManager_TypeInfo);
              byte_4C3F898 = 1;
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
          if ( !byte_4C3F898 )
          {
            sub_1C37058(&TerminalPramsManager_TypeInfo);
            byte_4C3F898 = 1;
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
        if ( !byte_4C3CF06 )
        {
          sub_1C37058(&TerminalSceneComponent_TypeInfo);
          byte_4C3CF06 = 1;
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
        if ( !UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
          goto LABEL_140;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C3CF06 )
        {
          sub_1C37058(&TerminalSceneComponent_TypeInfo);
          byte_4C3CF06 = 1;
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
          v30 = *(UnityEngine_Object_o **)&klass->_2.element_size;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v30, 0, 0) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4C3CF06 )
            {
              sub_1C37058(&TerminalSceneComponent_TypeInfo);
              byte_4C3CF06 = 1;
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
            v32 = *(ScrTerminalListTop_o **)&v31->_2.element_size;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C3D397 )
            {
              sub_1C37058(&TerminalPramsManager_TypeInfo);
              byte_4C3D397 = 1;
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
              0);
          }
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4C3CF06 )
          {
            sub_1C37058(&TerminalSceneComponent_TypeInfo);
            byte_4C3CF06 = 1;
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
            genericContainerHandle = (UnityEngine_Object_o *)v33->_2.genericContainerHandle;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(genericContainerHandle, 0, 0) )
              goto LABEL_140;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4C3CF06 )
            {
              sub_1C37058(&TerminalSceneComponent_TypeInfo);
              byte_4C3CF06 = 1;
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
              Instance = (QuestTree_o *)v35->_2.genericContainerHandle;
              if ( Instance )
              {
                TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)Instance, 0);
LABEL_140:
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4C3D786 )
                {
                  sub_1C37058(&TerminalPramsManager_TypeInfo);
                  byte_4C3D786 = 1;
                }
                v36 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v36 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                }
                *((_BYTE *)v36[2].virtualMethodPointer + 725) = 1;
                TerminalPramsManager__Save_SaveData(v36);
                return;
              }
            }
          }
        }
LABEL_148:
        sub_1C372B4(Instance);
      }
    }
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F7E0 = 1;
    goto LABEL_38;
  }
}


void TerminalPramsManager__SetAutoResumeByWarId(int32_t warId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *Instance; // x21
  TitleInfoControl_o *v5; // x0
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v7; // x21
  bool IsFolder; // w22
  TerminalPramsManager_c *v9; // x0
  char v10; // w22
  int v11; // w8
  BalanceConfig_c *v12; // x0
  TerminalPramsManager_c *v13; // x0
  int32_t parentBlankEarthSpotId; // w20
  TerminalPramsManager_c *v15; // x0
  TerminalSceneComponent_c *v16; // x0
  UnityEngine_Object_o *mInstance; // x20
  UISprite_c *klass; // x8
  UnityEngine_Object_o *v19; // x20
  UISprite_c *v20; // x8
  ScrTerminalListTop_o *v21; // x20
  UISprite_c *v22; // x8
  UnityEngine_Object_o *genericContainerHandle; // x20
  UISprite_c *v24; // x8
  const MethodInfo *v25; // x0

  if ( (byte_4C40375 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C40375 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FB53 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FB53 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4C3F89C )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C3F89C = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = warId;
  if ( !SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__) )
    goto LABEL_124;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
  }
  v5 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_121;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, HIDWORD(v5->fields.mEventBgSp->klass), 0);
  if ( WarEntityByWarID )
  {
    v7 = WarEntityByWarID;
    IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( IsFolder )
    {
      if ( !byte_4C3F898 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3F898 = 1;
      }
      v9 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v9 = TerminalPramsManager_TypeInfo;
      }
      v10 = 0;
      v11 = 3;
    }
    else
    {
      if ( !byte_4C3F898 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3F898 = 1;
      }
      v9 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v9 = TerminalPramsManager_TypeInfo;
      }
      v10 = 0;
      v11 = 2;
    }
  }
  else
  {
LABEL_124:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F898 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F898 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v7 = 0;
    v11 = 1;
    v10 = 1;
  }
  v9->static_fields->_DispState_k__BackingField = v11;
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( v12->static_fields->GrandBoardWarId == warId )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3DDFC )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3DDFC = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v13->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField = 1;
  }
  if ( (v10 & 1) != 0 )
    parentBlankEarthSpotId = 0;
  else
    parentBlankEarthSpotId = v7->fields.parentBlankEarthSpotId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F7E0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F7E0 = 1;
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
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
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
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C3CF06 )
    {
      sub_1C37058(&TerminalSceneComponent_TypeInfo);
      byte_4C3CF06 = 1;
    }
    v5 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v5 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v5->fields.mEventBgSp->klass;
    if ( !klass )
      goto LABEL_121;
    v19 = *(UnityEngine_Object_o **)&klass->_2.element_size;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C3CF06 )
      {
        sub_1C37058(&TerminalSceneComponent_TypeInfo);
        byte_4C3CF06 = 1;
      }
      v5 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v5 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      }
      v20 = v5->fields.mEventBgSp->klass;
      if ( !v20 )
        goto LABEL_121;
      v21 = *(ScrTerminalListTop_o **)&v20->_2.element_size;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3D397 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3D397 = 1;
      }
      v5 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v5 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v21 )
        goto LABEL_121;
      ScrTerminalListTop__RequestChangeTerminalListBG(v21, HIDWORD(v5->fields.mEventBgSp->klass), 0);
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C3CF06 )
    {
      sub_1C37058(&TerminalSceneComponent_TypeInfo);
      byte_4C3CF06 = 1;
    }
    v5 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v5 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    v22 = v5->fields.mEventBgSp->klass;
    if ( !v22 )
      goto LABEL_121;
    genericContainerHandle = (UnityEngine_Object_o *)v22->_2.genericContainerHandle;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(genericContainerHandle, 0, 0) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C3CF06 )
      {
        sub_1C37058(&TerminalSceneComponent_TypeInfo);
        byte_4C3CF06 = 1;
      }
      v5 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v5 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      }
      v24 = v5->fields.mEventBgSp->klass;
      if ( v24 )
      {
        v5 = (TitleInfoControl_o *)v24->_2.genericContainerHandle;
        if ( v5 )
        {
          TitleInfoControl__CloseEventBannerWindow(v5, 0);
          goto LABEL_114;
        }
      }
LABEL_121:
      sub_1C372B4(v5);
    }
  }
LABEL_114:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D786 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D786 = 1;
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


void TerminalPramsManager__SetAutoResumeForFolder(int32_t warId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  TerminalPramsManager_c *v6; // x0
  int32_t PrioredParentId; // w20
  Il2CppObject *v8; // x0
  TerminalPramsManager_c *v9; // x0
  TerminalPramsManager_c *v10; // x0
  BalanceConfig_c *v11; // x0
  TerminalPramsManager_c *v12; // x0
  int32_t monitor_high; // w20
  TerminalPramsManager_c *v14; // x0
  TerminalSceneComponent_c *v15; // x0
  UnityEngine_Object_o *mInstance; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *klass; // x8
  UnityEngine_Object_o *v18; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v19; // x8
  ScrTerminalListTop_o *v20; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v21; // x8
  UnityEngine_Object_o *genericContainerHandle; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v23; // x8
  const MethodInfo *v24; // x0
  WarEntity_o *WarEntityByWarID; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C40376 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C40376 = 1;
  }
  WarEntityByWarID = 0;
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FB53 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FB53 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4C3F89C )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C3F89C = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4C3F898 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C3F898 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DispState_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_135;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    warId,
    (const MethodInfo_33A10EC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( !entity )
    return;
LABEL_25:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3DDFE )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3DDFE = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField = warId;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_135;
  PrioredParentId = WarEntity__GetPrioredParentId((WarEntity_o *)entity, 0);
  v8 = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( v8 )
  {
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)v8, PrioredParentId, 0);
    if ( WarEntityByWarID )
      goto LABEL_40;
  }
  else
  {
    WarEntityByWarID = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_135;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    (Il2CppObject **)&WarEntityByWarID,
    PrioredParentId,
    (const MethodInfo_33A10EC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( !WarEntityByWarID )
    return;
LABEL_40:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F89C )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F89C = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_WarId_k__BackingField = PrioredParentId;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarEntityByWarID;
  if ( !WarEntityByWarID )
    goto LABEL_135;
  if ( WarEntity__IsFolder(WarEntityByWarID, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F898 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F898 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v10->static_fields->_DispState_k__BackingField = 3;
  }
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  if ( PrioredParentId == v11->static_fields->GrandBoardWarId )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3DDFC )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3DDFC = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v12->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField = 1;
  }
  if ( entity )
    monitor_high = HIDWORD(entity[7].monitor);
  else
    monitor_high = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F7E0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F7E0 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_BlankEarthSpotId_k__BackingField = monitor_high;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  v15 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v15 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v15->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
    goto LABEL_127;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
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
  v18 = *(UnityEngine_Object_o **)&klass->_2.element_size;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v18, 0, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C3CF06 )
    {
      sub_1C37058(&TerminalSceneComponent_TypeInfo);
      byte_4C3CF06 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v19 = Master_object[2].fields.list->klass;
    if ( !v19 )
      goto LABEL_135;
    v20 = *(ScrTerminalListTop_o **)&v19->_2.element_size;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3D397 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3D397 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v20 )
      goto LABEL_135;
    ScrTerminalListTop__RequestChangeTerminalListBG(v20, HIDWORD(Master_object[2].fields.list->klass), 0);
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v21 = Master_object[2].fields.list->klass;
  if ( !v21 )
    goto LABEL_135;
  genericContainerHandle = (UnityEngine_Object_o *)v21->_2.genericContainerHandle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(genericContainerHandle, 0, 0) )
    goto LABEL_127;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v23 = Master_object[2].fields.list->klass;
  if ( !v23 || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v23->_2.genericContainerHandle) == 0 )
LABEL_135:
    sub_1C372B4(Master_object);
  TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)Master_object, 0);
LABEL_127:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D786 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D786 = 1;
  }
  v24 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_BYTE *)v24[2].virtualMethodPointer + 725) = 1;
  TerminalPramsManager__Save_SaveData(v24);
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
  if ( (byte_4C403B3 & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_o *)sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403B3 = 1;
  }
  if ( !v4 )
    sub_1C372B4(result);
  campaignDirectBonus = v4->fields.campaignDirectBonus;
  if ( campaignDirectBonus && campaignDirectBonus->max_length )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C403E9 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403E9 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v6->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = campaignDirectBonus;
    sub_1C36FFC(
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

  if ( (byte_4C4039E & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4039E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403E8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403E8 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignBonus_k__BackingField = campaignBonuses;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_CampaignBonus_k__BackingField, (int32_t)campaignBonuses, v2, v3);
}


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

  if ( (byte_4C403AA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403AA = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->folderLastIdxs )
  {
    v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v6,
      (const MethodInfo_33F1108 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->folderLastIdxs = v6;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->folderLastIdxs, (int32_t)v6, v7, v8);
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
          (const MethodInfo_33F2E84 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__),
        (folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs) == 0) )
  {
    sub_1C372B4(folderLastIdxs);
  }
  System_Collections_Generic_Dictionary_int__int___Add(
    folderLastIdxs,
    warId,
    idx,
    (const MethodInfo_33F1ACC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !byte_4C403D9 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403D9 = 1;
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
  TerminalPramsManager_c *v13; // x0

  if ( (byte_4C403D0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Dictionary_int__int____ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_Dictionary_int__int___TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403D0 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403EB )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403EB = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->_ForcePlayEventTutorialArray_k__BackingField )
  {
    v6 = (System_Collections_Generic_HashSet_T__o *)sub_1C372A4(System_Collections_Generic_HashSet_Dictionary_int__int___TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v6,
      (const MethodInfo_365A090 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int____ctor__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C4040A )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C4040A = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    p_ForcePlayEventTutorialArray_k__BackingField = (CGThumbnailListItem_o *)&v9->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
    p_ForcePlayEventTutorialArray_k__BackingField->klass = (CGThumbnailListItem_c *)v6;
    sub_1C36FFC(p_ForcePlayEventTutorialArray_k__BackingField, (int32_t)v6, v7, v8);
  }
  v11 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v11,
    (const MethodInfo_33F1108 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v11 )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_int__int___Add(
    v11,
    eventId,
    flagType,
    (const MethodInfo_33F1ACC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403EB )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403EB = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  ForcePlayEventTutorialArray_k__BackingField = (System_Collections_Generic_HashSet_T__o *)v13->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
  if ( !ForcePlayEventTutorialArray_k__BackingField )
LABEL_26:
    sub_1C372B4(ForcePlayEventTutorialArray_k__BackingField);
  System_Collections_Generic_HashSet_object___Add(
    ForcePlayEventTutorialArray_k__BackingField,
    (Il2CppObject *)v11,
    (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___Add__);
}


void TerminalPramsManager__SetQuestReleasedFocusState(int32_t questId, int32_t state, const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0

  if ( (byte_4C403B0 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403B0 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v5);
  if ( !QuestFocusStateManager )
    sub_1C372B4(0);
  QuestFocusStateManager__SetFocusState(QuestFocusStateManager, questId, state, 0);
}


void TerminalPramsManager__SetQuestRewardInfo(BattleResultComponent_resultData_array *result, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  CGThumbnailListItem_o *p_mQuestRewardInfos; // x0
  _BOOL8 IsNullOrEmpty; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  BattleResultComponent_resultData_o *v10; // x8
  CGThumbnailListItem_c *rewardInfos; // x20
  TerminalPramsManager_c *v12; // x0
  CGThumbnailListItem_o *v13; // x0
  TerminalPramsManager_c *v14; // x0
  CGThumbnailListItem_o *p_mQuestPhaseRewardInfos; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  BattleResultComponent_resultData_o *v18; // x8
  CGThumbnailListItem_c *resultQuestPhaseRewardInfos; // x20
  TerminalPramsManager_c *v20; // x0
  CGThumbnailListItem_o *v21; // x0
  TerminalPramsManager_c *v22; // x0
  CGThumbnailListItem_o *p_mQuestResultAfterEventRewardInfos; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  il2cpp_array_size_t max_length; // x8
  BattleResultComponent_resultData_o *v27; // x9
  CGThumbnailListItem_c *resultAfterEventRewardInfos; // x20
  TerminalPramsManager_c *v29; // x0
  CGThumbnailListItem_o *v30; // x0
  BattleResultComponent_resultData_o *v31; // x8
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct QuestRewardInfo_array *resultUseRewardAddItemRewardInfos; // x20
  BattleResultComponent_resultData_o *v35; // x8
  TerminalPramsManager_c *v36; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C403B4 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403B4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (CGThumbnailListItem_o *)&v5->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0;
  sub_1C36FFC(p_mQuestRewardInfos, 0, v2, v3);
  if ( !result )
    goto LABEL_44;
  if ( !LODWORD(result->max_length) )
    goto LABEL_45;
  v10 = result->m_Items[0];
  if ( !v10 )
    goto LABEL_44;
  rewardInfos = (CGThumbnailListItem_c *)v10->fields.rewardInfos;
  if ( rewardInfos && rewardInfos->_1.namespaze )
  {
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v13 = (CGThumbnailListItem_o *)&v12->static_fields->mQuestRewardInfos;
    v13->klass = rewardInfos;
    sub_1C36FFC(v13, (int32_t)rewardInfos, v8, v9);
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = (CGThumbnailListItem_o *)&v14->static_fields->mQuestPhaseRewardInfos;
  p_mQuestPhaseRewardInfos->klass = 0;
  sub_1C36FFC(p_mQuestPhaseRewardInfos, 0, v8, v9);
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
    sub_1C36FFC(v21, (int32_t)resultQuestPhaseRewardInfos, v16, v17);
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestResultAfterEventRewardInfos = (CGThumbnailListItem_o *)&v22->static_fields->mQuestResultAfterEventRewardInfos;
  p_mQuestResultAfterEventRewardInfos->klass = 0;
  sub_1C36FFC(p_mQuestResultAfterEventRewardInfos, 0, v16, v17);
  max_length = result->max_length;
  if ( !(_DWORD)max_length )
    goto LABEL_45;
  v27 = result->m_Items[0];
  if ( !v27 )
    goto LABEL_44;
  resultAfterEventRewardInfos = (CGThumbnailListItem_c *)v27->fields.resultAfterEventRewardInfos;
  if ( resultAfterEventRewardInfos && resultAfterEventRewardInfos->_1.namespaze )
  {
    v29 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v29 = TerminalPramsManager_TypeInfo;
    }
    v30 = (CGThumbnailListItem_o *)&v29->static_fields->mQuestResultAfterEventRewardInfos;
    v30->klass = resultAfterEventRewardInfos;
    sub_1C36FFC(v30, (int32_t)resultAfterEventRewardInfos, v24, v25);
    max_length = result->max_length;
  }
  if ( !(_DWORD)max_length )
    goto LABEL_45;
  v31 = result->m_Items[0];
  if ( !v31 )
    goto LABEL_44;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)v31->fields.resultUseRewardAddItemRewardInfos,
                    0);
  resultUseRewardAddItemRewardInfos = 0;
  if ( IsNullOrEmpty )
    goto LABEL_37;
  if ( !LODWORD(result->max_length) )
LABEL_45:
    sub_1C372BC(IsNullOrEmpty);
  v35 = result->m_Items[0];
  if ( !v35 )
LABEL_44:
    sub_1C372B4(IsNullOrEmpty);
  resultUseRewardAddItemRewardInfos = v35->fields.resultUseRewardAddItemRewardInfos;
LABEL_37:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CFEA )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFEA = 1;
  }
  v36 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v36 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v36->static_fields;
  static_fields->_UseAddRewardItemRewardInfos_k__BackingField = resultUseRewardAddItemRewardInfos;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&static_fields->_UseAddRewardItemRewardInfos_k__BackingField,
    (int32_t)resultUseRewardAddItemRewardInfos,
    v32,
    v33);
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
  if ( (byte_4C403A8 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    byte_4C403A8 = 1;
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
    v6 = System_String__Concat_63599904(mTerminalWarStartedIds, v5, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
    static_fields->mTerminalWarStartedIds = v6;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->mTerminalWarStartedIds, (int32_t)v6, v8, v9);
    TerminalPramsManager__Save_SaveData(v10);
  }
}


void TerminalPramsManager__SpotIdSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C40383 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_13712/*"TerminalSpotId"*/);
    byte_4C40383 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FA9E )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FA9E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13712/*"TerminalSpotId"*/, v1->static_fields->_SpotId_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C40389 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_13696/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C37058(&StringLiteral_13697/*"TerminalBeforeEventActivityPointGauge"*/);
    byte_4C40389 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403F0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403F0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13696/*"TerminalBeforeEventActivityPoint"*/,
    v1->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0);
  if ( !byte_4C403F1 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403F1 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13697/*"TerminalBeforeEventActivityPointGauge"*/,
    v2->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventConquestInfoDispSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C4038E & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11466/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    byte_4C4038E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11466/*"SAVEKEY_TerminalConquestInfoDisp"*/, v1->static_fields->eventConquestInfoDisp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  struct EventConquestInfo_array *eventConquestInfos; // x19
  System_String_o *v3; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4C4038D & 1) == 0 )
  {
    sub_1C37058(&EventConquestInfo___TypeInfo);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11467/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_1C37058(&StringLiteral_11466/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    byte_4C4038D = 1;
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
    eventConquestInfos = (struct EventConquestInfo_array *)sub_1C37100(EventConquestInfo___TypeInfo, 0);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(&eventConquestInfos->obj, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11467/*"SAVEKEY_TerminalConquestInfos"*/, v3, 0);
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11466/*"SAVEKEY_TerminalConquestInfoDisp"*/, v4->static_fields->eventConquestInfoDisp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C4038F & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11468/*"SAVEKEY_TerminalCraftInfoDisp"*/);
    byte_4C4038F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11468/*"SAVEKEY_TerminalCraftInfoDisp"*/, v1->static_fields->eventCraftInfoDisp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  Il2CppObject *eventHarvestGrowthInfo; // x19
  System_String_o *v3; // x0

  if ( (byte_4C40390 & 1) == 0 )
  {
    sub_1C37058(&EventHarvestGrowthInfo_TypeInfo);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11469/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    byte_4C40390 = 1;
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
    eventHarvestGrowthInfo = (Il2CppObject *)sub_1C372A4(EventHarvestGrowthInfo_TypeInfo);
    System_Object___ctor(eventHarvestGrowthInfo, 0);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(eventHarvestGrowthInfo, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11469/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v3, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *BeforeEventSubmarineSaveData_k__BackingField; // x19
  System_String_o *v4; // x0

  if ( (byte_4C4038B & 1) == 0 )
  {
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_13698/*"TerminalBeforeEventSubmarinePointData"*/);
    byte_4C4038B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F9BD )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F9BD = 1;
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
    if ( !byte_4C3F9BD )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F9BD = 1;
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
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13698/*"TerminalBeforeEventSubmarinePointData"*/, v4, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C40398 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11471/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4C40398 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FFA8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFA8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11471/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v1->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C40397 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11472/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    byte_4C40397 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C401B4 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C401B4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11472/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v1->static_fields->_SelectedStoryQuestId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalTransitionInfoSave_SaveData(
        TerminalTransitionInfo_o *terminalTransitionInfo,
        const MethodInfo *method)
{
  if ( (byte_4C40388 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_13718/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_1C37058(&StringLiteral_13717/*"TerminalTransitionInfoMissionId"*/);
    byte_4C40388 = 1;
  }
  if ( terminalTransitionInfo )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13717/*"TerminalTransitionInfoMissionId"*/, terminalTransitionInfo->fields.missionId, 0);
    UnityEngine_PlayerPrefs__SetString(
      (System_String_o *)StringLiteral_13718/*"TerminalTransitionInfoVoiceAssetName"*/,
      terminalTransitionInfo->fields.voiceAssetName,
      0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


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

  if ( (byte_4C403C2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403C2 = 1;
  }
  value = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C40408 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40408 = 1;
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
          (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v7 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
    value = (Il2CppObject *)v7;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C40408 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C40408 = 1;
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
          (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        goto LABEL_24;
      }
    }
LABEL_30:
    sub_1C372B4(v5);
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)value,
         day,
         (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__) )
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
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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

  if ( (byte_4C4027A & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4027A = 1;
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

  if ( (byte_4C4029C & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4029C = 1;
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
  Il2CppClass *klass; // x8
  __int64 v3; // x8
  Il2CppClass *v4; // x8
  __int64 v5; // x8
  int32_t *p_QuestId_k__BackingField; // x8
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4C402D4 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C402D4 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__checkNowScene(Instance, 34, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C3CF06 )
    {
      sub_1C37058(&TerminalSceneComponent_TypeInfo);
      byte_4C3CF06 = 1;
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
    v3 = *(_QWORD *)&klass->_2.static_fields_size;
    if ( !v3 )
      goto LABEL_31;
    if ( *(_DWORD *)(v3 + 420) )
    {
      if ( !LODWORD(Instance[2].klass) )
        j_il2cpp_runtime_class_init_0(Instance);
      if ( !byte_4C3CF06 )
      {
        sub_1C37058(&TerminalSceneComponent_TypeInfo);
        byte_4C3CF06 = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v4 = Instance[1].fields.sendData->klass;
      if ( v4 )
      {
        v5 = *(_QWORD *)&v4->_2.static_fields_size;
        if ( v5 )
        {
          p_QuestId_k__BackingField = (int32_t *)(v5 + 420);
          return *p_QuestId_k__BackingField;
        }
      }
LABEL_31:
      sub_1C372B4(Instance);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE7 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  p_QuestId_k__BackingField = &v7->static_fields->_QuestId_k__BackingField;
  return *p_QuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_BeforeEventActivityPoint(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C402EF & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402EF = 1;
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

  if ( (byte_4C402F1 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402F1 = 1;
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

  if ( (byte_4C402F5 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402F5 = 1;
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

  if ( (byte_4C4035E & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4035E = 1;
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

  if ( (byte_4C402E3 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402E3 = 1;
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

  if ( (byte_4C40315 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40315 = 1;
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

  if ( (byte_4C40319 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40319 = 1;
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

  if ( (byte_4C40313 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40313 = 1;
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

  if ( (byte_4C40317 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40317 = 1;
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

  if ( (byte_4C4032B & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4032B = 1;
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

  if ( (byte_4C402BA & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402BA = 1;
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

  if ( (byte_4C402BC & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402BC = 1;
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

  if ( (byte_4C402ED & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402ED = 1;
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

  if ( (byte_4C4032F & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4032F = 1;
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

  if ( (byte_4C402A8 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402A8 = 1;
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

  if ( (byte_4C402B0 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402B0 = 1;
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

  if ( (byte_4C402AA & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402AA = 1;
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

  if ( (byte_4C40258 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40258 = 1;
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

  if ( (byte_4C4029E & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4029E = 1;
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

  if ( (byte_4C402BE & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402BE = 1;
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

  if ( (byte_4C402F3 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402F3 = 1;
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

  if ( (byte_4C402FB & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402FB = 1;
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

  if ( (byte_4C402E5 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402E5 = 1;
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

  if ( (byte_4C402E1 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402E1 = 1;
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

  if ( (byte_4C40288 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40288 = 1;
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

  if ( (byte_4C402F7 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402F7 = 1;
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

  if ( (byte_4C4031F & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4031F = 1;
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

  if ( (byte_4C40360 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40360 = 1;
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

  if ( (byte_4C4036A & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4036A = 1;
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

  if ( (byte_4C40354 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40354 = 1;
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

  if ( (byte_4C40342 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40342 = 1;
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

  if ( (byte_4C40346 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40346 = 1;
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

  if ( (byte_4C40370 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40370 = 1;
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

  if ( (byte_4C4033C & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4033C = 1;
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

  if ( (byte_4C4033E & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4033E = 1;
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

  if ( (byte_4C4035C & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4035C = 1;
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

  if ( (byte_4C4031B & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4031B = 1;
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

  if ( (byte_4C40348 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40348 = 1;
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

  if ( (byte_4C402A6 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402A6 = 1;
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

  if ( (byte_4C402B2 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402B2 = 1;
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

  if ( (byte_4C402AE & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402AE = 1;
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

  if ( (byte_4C40327 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40327 = 1;
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

  if ( (byte_4C4027C & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4027C = 1;
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

  if ( (byte_4C4027E & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4027E = 1;
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

  if ( (byte_4C40290 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40290 = 1;
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

  if ( (byte_4C40280 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40280 = 1;
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

  if ( (byte_4C40266 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40266 = 1;
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

  if ( (byte_4C40364 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40364 = 1;
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

  if ( (byte_4C402FD & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402FD = 1;
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

  if ( (byte_4C4026E & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4026E = 1;
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

  if ( (byte_4C4026C & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4026C = 1;
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

  if ( (byte_4C40334 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40334 = 1;
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

  if ( (byte_4C40286 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40286 = 1;
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

  if ( (byte_4C40340 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40340 = 1;
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

  if ( (byte_4C40344 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40344 = 1;
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

  if ( (byte_4C40368 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40368 = 1;
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

  if ( (byte_4C40284 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40284 = 1;
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

  if ( (byte_4C4028E & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4028E = 1;
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

  if ( (byte_4C40294 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40294 = 1;
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

  if ( (byte_4C402FF & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402FF = 1;
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

  if ( (byte_4C402B6 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402B6 = 1;
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

  if ( (byte_4C40292 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40292 = 1;
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

  if ( (byte_4C4030D & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4030D = 1;
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

  if ( (byte_4C4030F & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4030F = 1;
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

  if ( (byte_4C40311 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40311 = 1;
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

  if ( (byte_4C402B4 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402B4 = 1;
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

  if ( (byte_4C4028C & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4028C = 1;
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

  if ( (byte_4C40296 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40296 = 1;
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

  if ( (byte_4C4035A & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4035A = 1;
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

  if ( (byte_4C402AC & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402AC = 1;
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

  if ( (byte_4C4034A & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4034A = 1;
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

  if ( (byte_4C40325 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40325 = 1;
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

  if ( (byte_4C40323 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40323 = 1;
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

  if ( (byte_4C402A0 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402A0 = 1;
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

  if ( (byte_4C40282 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40282 = 1;
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

  if ( (byte_4C40276 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40276 = 1;
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

  if ( (byte_4C40274 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40274 = 1;
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

  if ( (byte_4C40278 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40278 = 1;
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

  if ( (byte_4C40356 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40356 = 1;
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

  if ( (byte_4C402A4 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402A4 = 1;
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

  if ( (byte_4C402A2 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402A2 = 1;
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

  if ( (byte_4C40372 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40372 = 1;
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

  if ( (byte_4C40298 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40298 = 1;
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

  if ( (byte_4C4031D & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4031D = 1;
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

  if ( (byte_4C40331 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40331 = 1;
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

  if ( (byte_4C40264 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40264 = 1;
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

  if ( (byte_4C4028A & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4028A = 1;
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

  if ( (byte_4C4030B & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4030B = 1;
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

  if ( (byte_4C402B8 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402B8 = 1;
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

  if ( (byte_4C40333 & 1) == 0 )
  {
    sub_1C37058(&QuestFocusStateManager_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40333 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->questFocusStateManager )
  {
    v2 = (QuestFocusStateManager_o *)sub_1C372A4(QuestFocusStateManager_TypeInfo);
    QuestFocusStateManager___ctor(v2, 0);
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    p_questFocusStateManager = (CGThumbnailListItem_o *)&v5->static_fields->questFocusStateManager;
    p_questFocusStateManager->klass = (CGThumbnailListItem_c *)v2;
    sub_1C36FFC(p_questFocusStateManager, (int32_t)v2, v3, v4);
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

  if ( (byte_4C40262 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40262 = 1;
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

  if ( (byte_4C4034C & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4034C = 1;
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

  if ( (byte_4C4034E & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4034E = 1;
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

  if ( (byte_4C40309 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40309 = 1;
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

  if ( (byte_4C40270 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40270 = 1;
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

  if ( (byte_4C4029A & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4029A = 1;
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

  if ( (byte_4C40321 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40321 = 1;
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

  if ( (byte_4C40272 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40272 = 1;
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

  if ( (byte_4C4026A & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4026A = 1;
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

  if ( (byte_4C40268 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40268 = 1;
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

  if ( (byte_4C40329 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40329 = 1;
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

  if ( (byte_4C402C2 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402C2 = 1;
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

  if ( (byte_4C40260 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40260 = 1;
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

  if ( (byte_4C4025E & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4025E = 1;
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

  if ( (byte_4C4025C & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4025C = 1;
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

  if ( (byte_4C40350 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40350 = 1;
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

  if ( (byte_4C4032D & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4032D = 1;
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

  if ( (byte_4C402E9 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402E9 = 1;
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

  if ( (byte_4C402EB & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402EB = 1;
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

  if ( (byte_4C40362 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40362 = 1;
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

  if ( (byte_4C40366 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40366 = 1;
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

  if ( (byte_4C40301 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40301 = 1;
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

  if ( (byte_4C4025A & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4025A = 1;
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

  if ( (byte_4C402C0 & 1) == 0 )
  {
    sub_1C37058(&MapZoom_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402C0 = 1;
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

  if ( (byte_4C402DF & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402DF = 1;
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

  if ( (byte_4C402CA & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402CA = 1;
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

  if ( (byte_4C402C8 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402C8 = 1;
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

  if ( (byte_4C402CC & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402CC = 1;
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

  if ( (byte_4C402D5 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402D5 = 1;
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

  if ( (byte_4C40305 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40305 = 1;
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

  if ( (byte_4C402F9 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402F9 = 1;
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

  if ( (byte_4C40307 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40307 = 1;
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

  if ( (byte_4C4033A & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4033A = 1;
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

  if ( (byte_4C40303 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40303 = 1;
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

  if ( (byte_4C40352 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40352 = 1;
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

  if ( (byte_4C402C6 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402C6 = 1;
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

  if ( (byte_4C402D2 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402D2 = 1;
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

  if ( (byte_4C402C4 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402C4 = 1;
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

  if ( (byte_4C402D0 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402D0 = 1;
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

  if ( (byte_4C402CE & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402CE = 1;
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

  if ( (byte_4C402D9 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402D9 = 1;
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

  if ( (byte_4C402DB & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402DB = 1;
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

  if ( (byte_4C402D7 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402D7 = 1;
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

  if ( (byte_4C402DD & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402DD = 1;
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

  if ( (byte_4C40358 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40358 = 1;
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

  if ( (byte_4C402E7 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402E7 = 1;
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

  if ( (byte_4C4037B & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4037B = 1;
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

  if ( (byte_4C4037A & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4037A = 1;
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

  if ( (byte_4C4027B & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4027B = 1;
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

  if ( (byte_4C4029D & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4029D = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BattleSetupKeep_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_BattleSetupKeep_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_BeforeEventActivityPoint(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C402F0 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402F0 = 1;
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

  if ( (byte_4C402F2 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402F2 = 1;
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

  if ( (byte_4C402F6 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402F6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (CGThumbnailListItem_o *)v5->static_fields;
  static_fields[3].klass = (CGThumbnailListItem_c *)value;
  sub_1C36FFC(static_fields + 3, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_BeforeQuestStartWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C4035F & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4035F = 1;
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

  if ( (byte_4C402E4 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402E4 = 1;
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

  if ( (byte_4C40316 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40316 = 1;
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

  if ( (byte_4C4031A & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4031A = 1;
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

  if ( (byte_4C40314 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40314 = 1;
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

  if ( (byte_4C40318 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40318 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BlankEarthTransformData_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_BlankEarthTransformData_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_CaldeaGateFolderFocusWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C4032C & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4032C = 1;
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

  if ( (byte_4C402BB & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402BB = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignBonus_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_CampaignBonus_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_CampaignDirectBonus(
        CommonUI_CampaignDirectBonusData_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C402BD & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402BD = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_ClearEventQuestIds(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C402EE & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402EE = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_ClearEventQuestIds_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_ClearEventQuestIds_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_CurrentWaveNum(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C40330 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40330 = 1;
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

  if ( (byte_4C402A9 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402A9 = 1;
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

  if ( (byte_4C402B1 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402B1 = 1;
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

  if ( (byte_4C402AB & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402AB = 1;
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

  if ( (byte_4C40339 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40339 = 1;
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

  if ( (byte_4C40338 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40338 = 1;
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

  if ( (byte_4C40336 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40336 = 1;
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

  if ( (byte_4C40337 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40337 = 1;
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

  if ( (byte_4C40259 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40259 = 1;
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

  if ( (byte_4C4029F & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4029F = 1;
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

  if ( (byte_4C402BF & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402BF = 1;
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

  if ( (byte_4C402F4 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402F4 = 1;
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

  if ( (byte_4C402FC & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402FC = 1;
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

  if ( (byte_4C402E6 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402E6 = 1;
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

  if ( (byte_4C402E2 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402E2 = 1;
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

  if ( (byte_4C40289 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40289 = 1;
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

  if ( (byte_4C402F8 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402F8 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void TerminalPramsManager__set_EventUIEffectClearQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C40320 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40320 = 1;
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

  if ( (byte_4C40361 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40361 = 1;
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

  if ( (byte_4C4036B & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4036B = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_ForcePlayEventTutorialArray_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&static_fields->_ForcePlayEventTutorialArray_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void TerminalPramsManager__set_FriendshipQuestDialogOpenId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C40355 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40355 = 1;
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

  if ( (byte_4C40343 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40343 = 1;
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

  if ( (byte_4C40347 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40347 = 1;
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

  if ( (byte_4C40371 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40371 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v3 = value;
  if ( !byte_4C3D786 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D786 = 1;
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

  if ( (byte_4C4033D & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4033D = 1;
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

  if ( (byte_4C4033F & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4033F = 1;
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

  if ( (byte_4C4035D & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4035D = 1;
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

  if ( (byte_4C4031C & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4031C = 1;
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

  if ( (byte_4C40349 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40349 = 1;
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

  if ( (byte_4C402A7 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402A7 = 1;
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

  if ( (byte_4C402B3 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402B3 = 1;
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

  if ( (byte_4C402AF & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402AF = 1;
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

  if ( (byte_4C40328 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40328 = 1;
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

  if ( (byte_4C4027D & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4027D = 1;
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

  if ( (byte_4C4027F & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4027F = 1;
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

  if ( (byte_4C40291 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40291 = 1;
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

  if ( (byte_4C40281 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40281 = 1;
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

  if ( (byte_4C40267 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40267 = 1;
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

  if ( (byte_4C40365 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40365 = 1;
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

  if ( (byte_4C402FE & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402FE = 1;
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

  if ( (byte_4C4026F & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4026F = 1;
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

  if ( (byte_4C4026D & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4026D = 1;
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

  if ( (byte_4C40335 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40335 = 1;
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

  if ( (byte_4C40287 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40287 = 1;
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

  if ( (byte_4C40341 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40341 = 1;
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

  if ( (byte_4C40345 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40345 = 1;
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

  if ( (byte_4C40369 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40369 = 1;
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

  if ( (byte_4C40285 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40285 = 1;
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

  if ( (byte_4C4028F & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4028F = 1;
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

  if ( (byte_4C40295 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40295 = 1;
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

  if ( (byte_4C40300 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40300 = 1;
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

  if ( (byte_4C402B7 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402B7 = 1;
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

  if ( (byte_4C40293 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40293 = 1;
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

  if ( (byte_4C4030E & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4030E = 1;
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

  if ( (byte_4C40310 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40310 = 1;
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

  if ( (byte_4C40312 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40312 = 1;
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

  if ( (byte_4C402B5 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402B5 = 1;
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

  if ( (byte_4C4028D & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4028D = 1;
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

  if ( (byte_4C40297 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40297 = 1;
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

  if ( (byte_4C4035B & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4035B = 1;
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

  if ( (byte_4C402AD & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402AD = 1;
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

  if ( (byte_4C4034B & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4034B = 1;
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

  if ( (byte_4C40326 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40326 = 1;
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

  if ( (byte_4C40324 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40324 = 1;
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

  if ( (byte_4C402A1 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402A1 = 1;
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

  if ( (byte_4C40283 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40283 = 1;
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

  if ( (byte_4C40277 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40277 = 1;
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

  if ( (byte_4C40275 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40275 = 1;
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

  if ( (byte_4C40279 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40279 = 1;
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

  if ( (byte_4C40357 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40357 = 1;
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

  if ( (byte_4C402A5 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402A5 = 1;
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

  if ( (byte_4C402A3 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402A3 = 1;
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

  if ( (byte_4C40373 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40373 = 1;
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

  if ( (byte_4C40299 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40299 = 1;
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

  if ( (byte_4C4031E & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4031E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_NoticeLastModified_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_NoticeLastModified_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_OldUserEventPoint(UserEventPointEntity_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C40332 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40332 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_OldUserEventPoint_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_OldUserEventPoint_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_PhaseCnt(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C40265 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40265 = 1;
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

  if ( (byte_4C4028B & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4028B = 1;
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

  if ( (byte_4C4030C & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4030C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_PlayedTerminalEffects_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_PlayedTerminalEffects_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_PlayerGenderType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C402B9 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402B9 = 1;
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

  if ( (byte_4C40263 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40263 = 1;
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

  if ( (byte_4C4034D & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4034D = 1;
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

  if ( (byte_4C4034F & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4034F = 1;
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

  if ( (byte_4C4030A & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4030A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_QuestRandomGroupList_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_QuestRandomGroupList_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_QuestReleaseFocusQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C40271 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40271 = 1;
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

  if ( (byte_4C4029B & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4029B = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_QuestWindowMessage_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_SceneMoveQuestClearedInfo(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C40322 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40322 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SceneMoveQuestClearedInfo_k__BackingField = value;
  sub_1C36FFC(
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

  if ( (byte_4C40273 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40273 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_SelectedRecollectionWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C4026B & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4026B = 1;
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

  if ( (byte_4C40269 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40269 = 1;
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

  if ( (byte_4C4032A & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4032A = 1;
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

  if ( (byte_4C402C3 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402C3 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SpecifiedChangeSceneInfo_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void TerminalPramsManager__set_SpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C40261 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40261 = 1;
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

  if ( (byte_4C4025F & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4025F = 1;
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

  if ( (byte_4C4025D & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4025D = 1;
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

  if ( (byte_4C40351 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40351 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_TalkScriptInfo_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_TalkScriptInfo_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_TerminalTopFocusWarIdByShortcut(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C4032E & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4032E = 1;
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

  if ( (byte_4C402EA & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402EA = 1;
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

  if ( (byte_4C402EC & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402EC = 1;
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

  if ( (byte_4C40363 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40363 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_TransitionScrollTabName_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_TransitionScrollTabName_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_UseAddRewardItemRewardInfos(QuestRewardInfo_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C40367 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40367 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_UseAddRewardItemRewardInfos_k__BackingField = value;
  sub_1C36FFC(
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

  if ( (byte_4C40302 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40302 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_WarBoardData_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_WarBoardData_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_WarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C4025B & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4025B = 1;
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

  if ( (byte_4C402C1 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402C1 = 1;
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

  if ( (byte_4C402E0 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402E0 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventDailyPoint_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_eventDailyPoint_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_eventPointWinReward(EventPointWinReward_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C402CB & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402CB = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventPointWinReward_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_eventPointWinReward_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_eventPointWinType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C402C9 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402C9 = 1;
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

  if ( (byte_4C402CD & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402CD = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventRaceBoost_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_eventRaceBoost_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_eventTowerReward(EventTowerReward_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C402D6 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402D6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventTowerReward_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_eventTowerReward_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_isFortificationCheck(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C40306 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40306 = 1;
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

  if ( (byte_4C402FA & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402FA = 1;
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

  if ( (byte_4C40308 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40308 = 1;
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

  if ( (byte_4C4033B & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4033B = 1;
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

  if ( (byte_4C40304 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40304 = 1;
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

  if ( (byte_4C40353 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40353 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_limitImageAnnounces_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_limitImageAnnounces_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_oldPersonalBoss(UserSuperBossEntity_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C402C7 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402C7 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_oldPersonalBoss_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_oldPersonalBoss_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_oldQuestIdForHeaderEvent(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C402D3 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402D3 = 1;
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

  if ( (byte_4C402C5 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402C5 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_oldSuperBoss_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_oldSuperBoss_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_questClearCostumeGet(CostumeReleaseAnnounce_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  CGThumbnailListItem_o *static_fields; // x8

  if ( (byte_4C402D1 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402D1 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (CGThumbnailListItem_o *)v5->static_fields;
  static_fields[2].klass = (CGThumbnailListItem_c *)value;
  sub_1C36FFC(static_fields + 2, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_questClearCostumeRelease(CostumeReleaseAnnounce_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C402CF & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402CF = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_questClearCostumeRelease_k__BackingField = value;
  sub_1C36FFC(
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

  if ( (byte_4C402DA & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402DA = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultBoostItemRewardInfo_k__BackingField = value;
  sub_1C36FFC(
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

  if ( (byte_4C402DC & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402DC = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField = value;
  sub_1C36FFC(
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

  if ( (byte_4C402D8 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402D8 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultEventTowerRewardInfo_k__BackingField = value;
  sub_1C36FFC(
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

  if ( (byte_4C402DE & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402DE = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_timeStatusRecord_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_timeStatusRecord_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_updateProfileInfoEntity(
        UpdateProfileDialogInfoEntity_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C40359 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40359 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_updateProfileInfoEntity_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_updateProfileInfoEntity_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_warClearReward(WarClearReward_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C402E8 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C402E8 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_warClearReward_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_warClearReward_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager_ClearData___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C40411 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C37058(&StringLiteral_13366/*"TERMINAL_CLEAR_REWARD_DISP"*/);
    byte_4C40411 = 1;
  }
  TerminalPramsManager_ClearData_TypeInfo->static_fields->SAVEKEY_CLEAR_REWARD_DISP = (struct System_String_o *)StringLiteral_13366/*"TERMINAL_CLEAR_REWARD_DISP"*/;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)TerminalPramsManager_ClearData_TypeInfo->static_fields,
    StringLiteral_13366/*"TERMINAL_CLEAR_REWARD_DISP"*/,
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

  if ( (byte_4C4040F & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4040F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.qClearHeroineInfo = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, 0, v3, v4);
  this->fields.questRewardInfos = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.questRewardInfos, 0, v5, v6);
  this->fields.questPhaseRewardInfos = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.questPhaseRewardInfos, 0, v7, v8);
  this->fields.questResultAfterEventRewardInfos = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.questResultAfterEventRewardInfos, 0, v9, v10);
  this->fields.resultEventPanelRewardInfos = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resultEventPanelRewardInfos, 0, v11, v12);
  this->fields.panelEventPoint = 0;
  *(_QWORD *)&this->fields.clearedLastBattleRaidId = -1;
  this->fields.joinGroup = -1;
  this->fields.mOldSuperBoss = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mOldSuperBoss, 0, v13, v14);
  this->fields.oldPersonalBoss = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.oldPersonalBoss, 0, v15, v16);
  this->fields.evPointWinReward = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.evPointWinReward, 0, v17, v18);
  this->fields.evPointWinType = 0;
  this->fields.evRaceBoost = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.evRaceBoost, 0, v19, v20);
  this->fields.questClearCostume = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.questClearCostume, 0, v21, v22);
  this->fields.questClearCostumeGetInfo = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.questClearCostumeGetInfo, 0, v23, v24);
  this->fields.eventTowerReward = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventTowerReward, 0, v25, v26);
  this->fields.resultEventTowerRewardInfo = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resultEventTowerRewardInfo, 0, v27, v28);
  this->fields.warClearReward = 0;
  this->fields.isDispOnly = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.warClearReward, 0, v29, v30);
  v33 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  this->fields.EventActivityPointEffectState = v33->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  this->fields.limitImageAnnounces = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.limitImageAnnounces, 0, v31, v32);
  this->fields.isOrdealCallWarClear = 0;
  this->fields.eventMuralId = 0;
  this->fields.playHappinessCounterEffect = 0;
  this->fields.oldUserEventPoint = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.oldUserEventPoint, 0, v34, v35);
  this->fields.UseAddRewardItemRewardInfos = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.UseAddRewardItemRewardInfos, 0, v36, v37);
}


void TerminalPramsManager_ClearData___ctor_37319364(
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
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  bool v47; // w29
  bool v48; // w23
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  struct QuestRewardInfo_array *v69; // x1
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  TerminalPramsManager_c *v72; // x0
  TerminalPramsManager_c *v73; // x0
  struct QuestRewardInfo_array *resultBoostItemRewardInfo_k__BackingField; // x1
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  TerminalPramsManager_c *v79; // x0
  TerminalPramsManager_c *v80; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo_k__BackingField; // x1
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  struct WarClearReward_array *v84; // x1
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  struct BattleDropItem_array *v87; // x1
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  struct BattleDropItem_array *v90; // x1
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  struct LimitImageAnnounce_array *v93; // x1
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  TerminalPramsManager_c *v96; // x0
  struct QuestRewardInfo_array *v97; // x20
  struct UserEventPointEntity_array *OldUserEventPoint_k__BackingField; // x1
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  long double inited; // q0
  _QWORD *v102; // x20
  __int64 v103; // x8
  __int64 v104; // x0
  __int64 v105; // x0

  v31 = oldSuperBoss;
  v38 = questClearCostumeGet;
  v39 = questClearCostumeRelease;
  v40 = oldPersonalBoss;
  if ( (byte_4C40410 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_QuestRewardInfo___);
    sub_1C37058(&BattleDropItem___TypeInfo);
    sub_1C37058(&CostumeReleaseAnnounce___TypeInfo);
    sub_1C37058(&LimitImageAnnounce___TypeInfo);
    sub_1C37058(&TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
    sub_1C37058(&QuestRewardInfo___TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&UserSuperBossEntity___TypeInfo);
    sub_1C37058(&WarClearReward___TypeInfo);
    byte_4C40410 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v41 = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)sub_1C372A4(TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
  v43 = v41;
  if ( qcrHeroineInfo )
  {
    TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_37318592(v41, qcrHeroineInfo, v42);
    if ( this )
      goto LABEL_5;
LABEL_34:
    sub_1C372B4(v44);
  }
  System_Object___ctor((Il2CppObject *)v41, 0);
  v43->fields.oldUsrSvtData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v43->fields, 0, v75, v76);
  if ( !this )
    goto LABEL_34;
LABEL_5:
  this->fields.qClearHeroineInfo = v43;
  v47 = qClear;
  v48 = pclear;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v43, v45, v46);
  if ( !qri )
    qri = (QuestRewardInfo_array *)sub_1C37100(QuestRewardInfo___TypeInfo, 0);
  this->fields.questRewardInfos = qri;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.questRewardInfos, (int32_t)qri, v49, v50);
  if ( !questPhaseRewardInfos )
    questPhaseRewardInfos = (QuestRewardInfo_array *)sub_1C37100(QuestRewardInfo___TypeInfo, 0);
  this->fields.questPhaseRewardInfos = questPhaseRewardInfos;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.questPhaseRewardInfos, (int32_t)questPhaseRewardInfos, v51, v52);
  this->fields.questClear = v47;
  this->fields.phaseClear = v48;
  this->fields.clearedLastBattleRaidId = lastRaidId;
  this->fields.clearedBattleRaidId = raidId;
  this->fields.joinGroup = groupjoin;
  if ( !oldSuperBoss )
    v31 = (struct UserSuperBossEntity_array *)sub_1C37100(UserSuperBossEntity___TypeInfo, 0);
  this->fields.mOldSuperBoss = v31;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mOldSuperBoss, (int32_t)v31, v53, v54);
  if ( !oldPersonalBoss )
    v40 = (struct UserSuperBossEntity_array *)sub_1C37100(UserSuperBossEntity___TypeInfo, 0);
  this->fields.oldPersonalBoss = v40;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.oldPersonalBoss, (int32_t)v40, v55, v56);
  this->fields.evPointWinReward = evpWinReward;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.evPointWinReward, (int32_t)evpWinReward, v57, v58);
  this->fields.evRaceBoost = evRace;
  this->fields.evPointWinType = evpWinType;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.evRaceBoost, (int32_t)evRace, v59, v60);
  if ( !questClearCostumeRelease )
    v39 = (struct CostumeReleaseAnnounce_array *)sub_1C37100(CostumeReleaseAnnounce___TypeInfo, 0);
  this->fields.questClearCostume = v39;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.questClearCostume, (int32_t)v39, v61, v62);
  if ( !questClearCostumeGet )
    v38 = (struct CostumeReleaseAnnounce_array *)sub_1C37100(CostumeReleaseAnnounce___TypeInfo, 0);
  this->fields.questClearCostumeGetInfo = v38;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.questClearCostumeGetInfo, (int32_t)v38, v63, v64);
  this->fields.eventTowerReward = evTowerReward;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventTowerReward, (int32_t)evTowerReward, v65, v66);
  v69 = resultEvTowerRewardInfo;
  if ( !resultEvTowerRewardInfo )
    v69 = (struct QuestRewardInfo_array *)sub_1C37100(QuestRewardInfo___TypeInfo, 0);
  this->fields.resultEventTowerRewardInfo = v69;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resultEventTowerRewardInfo, (int32_t)v69, v67, v68);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FFB8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFB8 = 1;
  }
  v72 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v72 = TerminalPramsManager_TypeInfo;
  }
  if ( v72->static_fields->_resultBoostItemRewardInfo_k__BackingField )
  {
    if ( !v72->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v72);
    if ( !byte_4C3FFB8 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FFB8 = 1;
    }
    v73 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v73 = TerminalPramsManager_TypeInfo;
    }
    resultBoostItemRewardInfo_k__BackingField = v73->static_fields->_resultBoostItemRewardInfo_k__BackingField;
  }
  else
  {
    resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1C37100(
                                                                                  QuestRewardInfo___TypeInfo,
                                                                                  0);
  }
  this->fields.resultBoostItemRewardInfo = resultBoostItemRewardInfo_k__BackingField;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.resultBoostItemRewardInfo,
    (int32_t)resultBoostItemRewardInfo_k__BackingField,
    v70,
    v71);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FFB0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFB0 = 1;
  }
  v79 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v79 = TerminalPramsManager_TypeInfo;
  }
  if ( v79->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField )
  {
    if ( !v79->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v79);
    if ( !byte_4C3FFB0 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FFB0 = 1;
    }
    v80 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v80 = TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfo_k__BackingField = v80->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
  }
  else
  {
    resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1C37100(
                                                                                            QuestRewardInfo___TypeInfo,
                                                                                            0);
  }
  this->fields.resultEventBoardGameTokenRewardInfo = resultEventBoardGameTokenRewardInfo_k__BackingField;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.resultEventBoardGameTokenRewardInfo,
    (int32_t)resultEventBoardGameTokenRewardInfo_k__BackingField,
    v77,
    v78);
  v84 = warClearRewardIn;
  this->fields.isDispOnly = dispOnly;
  if ( !warClearRewardIn )
    v84 = (struct WarClearReward_array *)sub_1C37100(WarClearReward___TypeInfo, 0);
  this->fields.warClearReward = v84;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.warClearReward, (int32_t)v84, v82, v83);
  v87 = questResultAfterEventRewardInfos;
  this->fields.isWarBoardClear = isWarBoardClear;
  this->fields.EventActivityPointEffectState = eventActivityPointEffectState;
  if ( !questResultAfterEventRewardInfos )
    v87 = (struct BattleDropItem_array *)sub_1C37100(BattleDropItem___TypeInfo, 0);
  this->fields.questResultAfterEventRewardInfos = v87;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.questResultAfterEventRewardInfos, (int32_t)v87, v85, v86);
  v90 = resultEventPanelRewardInfos;
  if ( !resultEventPanelRewardInfos )
    v90 = (struct BattleDropItem_array *)sub_1C37100(BattleDropItem___TypeInfo, 0);
  this->fields.resultEventPanelRewardInfos = v90;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resultEventPanelRewardInfos, (int32_t)v90, v88, v89);
  v93 = limitImageAnnounces;
  this->fields.panelEventPoint = panelEventPoint;
  if ( !limitImageAnnounces )
    v93 = (struct LimitImageAnnounce_array *)sub_1C37100(LimitImageAnnounce___TypeInfo, 0);
  this->fields.limitImageAnnounces = v93;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.limitImageAnnounces, (int32_t)v93, v91, v92);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F7DF )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F7DF = 1;
  }
  v96 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v96 = TerminalPramsManager_TypeInfo;
  }
  this->fields.isOrdealCallWarClear = v96->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4C3FFB3 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v96 = TerminalPramsManager_TypeInfo;
    byte_4C3FFB3 = 1;
  }
  if ( !v96->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v96);
    v96 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventMuralId = v96->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_4C401B5 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v96 = TerminalPramsManager_TypeInfo;
    byte_4C401B5 = 1;
  }
  if ( !v96->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v96);
    v96 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventActionQuestId = v96->static_fields->_EventActionQuestId_k__BackingField;
  if ( !byte_4C3FFB5 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v96 = TerminalPramsManager_TypeInfo;
    byte_4C3FFB5 = 1;
  }
  if ( !v96->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v96);
    v96 = TerminalPramsManager_TypeInfo;
  }
  this->fields.playHappinessCounterEffect = v96->static_fields->_PlayHappinessCounterEffect_k__BackingField;
  if ( !byte_4C3F9BC )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v96 = TerminalPramsManager_TypeInfo;
    byte_4C3F9BC = 1;
  }
  if ( !v96->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v96);
    v96 = TerminalPramsManager_TypeInfo;
  }
  v97 = useAddRewardItemRewardInfos;
  OldUserEventPoint_k__BackingField = v96->static_fields->_OldUserEventPoint_k__BackingField;
  this->fields.oldUserEventPoint = OldUserEventPoint_k__BackingField;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.oldUserEventPoint,
    (int32_t)OldUserEventPoint_k__BackingField,
    v94,
    v95);
  if ( !useAddRewardItemRewardInfos )
  {
    v102 = Method_System_Array_Empty_QuestRewardInfo___;
    v103 = *((_QWORD *)Method_System_Array_Empty_QuestRewardInfo___ + 7);
    if ( !v103 )
    {
      sub_1C877C8(Method_System_Array_Empty_QuestRewardInfo___);
      v103 = v102[7];
    }
    v104 = *(_QWORD *)(v103 + 16);
    if ( (*(_BYTE *)(v104 + 309) & 1) == 0 )
      v104 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v104 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v104);
    v105 = *(_QWORD *)(v102[7] + 16LL);
    if ( (*(_BYTE *)(v105 + 309) & 1) == 0 )
      v105 = sub_1C8776C(inited);
    v97 = **(struct QuestRewardInfo_array ***)(v105 + 184);
  }
  this->fields.UseAddRewardItemRewardInfos = v97;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.UseAddRewardItemRewardInfos, (int32_t)v97, v99, v100);
}


void TerminalPramsManager_OldHeroineLawData___ctor(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalPramsManager_OldHeroineLawData___ctor_37317828(
        TerminalPramsManager_OldHeroineLawData_o *this,
        UserServantEntity_o *uSvtEnt,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int128 v6; // q1
  __int128 v7; // q1
  __int64 v8; // x21
  __int64 v9; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4C4040B & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C4040B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !uSvtEnt )
    sub_1C372B4(v5);
  v6 = *(_OWORD *)&uSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v11 = v12;
  this->fields.id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v11, 0);
  v7 = *(_OWORD *)&uSvtEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v10, 0);
  v9 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v13, 0);
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                              uSvtEnt->fields.limitCount,
                              0);
  this->fields.imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                   uSvtEnt->fields.imageLimitCount,
                                   0);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                  uSvtEnt->fields.dispLimitCount,
                                  0);
  this->fields.commandCardLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                         uSvtEnt->fields.commandCardLimitCount,
                                         0);
  this->fields.iconLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
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
  __int128 v6; // q0
  __int128 v7; // q0
  int32_t svtId; // w21
  UserServantEntity_o *result; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-50h]

  if ( (byte_4C4040C & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&UserServantEntity_TypeInfo);
    byte_4C4040C = 1;
  }
  v3 = sub_1C372A4(UserServantEntity_TypeInfo);
  UserServantEntity___ctor((UserServantEntity_o *)v3, 0);
  id = this->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v11, id, 0);
  v12 = v11;
  if ( !v3 )
    sub_1C372B4(v5);
  v6 = *(_OWORD *)&v12.fields.fakeValue;
  *(_OWORD *)(v3 + 16) = *(_OWORD *)&v12.fields.currentCryptoKey;
  *(_OWORD *)(v3 + 32) = v6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v10, this->fields.userId, 0);
  v7 = *(_OWORD *)&v10.fields.fakeValue;
  v11 = v10;
  *(_OWORD *)(v3 + 48) = *(_OWORD *)&v10.fields.currentCryptoKey;
  *(_OWORD *)(v3 + 64) = v7;
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, 0, v3, v4);
}


void TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_37318592(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        QuestClearHeroineInfo_o *qClearHeroineInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  UserServantEntity_o *oldUsrSvtData; // x21
  TerminalPramsManager_OldHeroineLawData_o *v7; // x22
  const MethodInfo *v8; // x2
  TerminalPramsManager_QuestClearHeroineInfoForSave_Fields *p_fields; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C4040D & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_OldHeroineLawData_TypeInfo);
    byte_4C4040D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !qClearHeroineInfo )
    sub_1C372B4(v5);
  oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
  v7 = (TerminalPramsManager_OldHeroineLawData_o *)sub_1C372A4(TerminalPramsManager_OldHeroineLawData_TypeInfo);
  TerminalPramsManager_OldHeroineLawData___ctor_37317828(v7, oldUsrSvtData, v8);
  this->fields.oldUsrSvtData = v7;
  p_fields = &this->fields;
  sub_1C36FFC((CGThumbnailListItem_o *)p_fields, (int32_t)v7, v10, v11);
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

  if ( (byte_4C4040E & 1) == 0 )
  {
    sub_1C37058(&QuestClearHeroineInfo_TypeInfo);
    byte_4C4040E = 1;
  }
  v3 = sub_1C372A4(QuestClearHeroineInfo_TypeInfo);
  QuestClearHeroineInfo___ctor((QuestClearHeroineInfo_o *)v3, 0);
  oldUsrSvtData = this->fields.oldUsrSvtData;
  if ( !oldUsrSvtData
    || (oldUsrSvtData = (TerminalPramsManager_OldHeroineLawData_o *)TerminalPramsManager_OldHeroineLawData__GetLoad(
                                                                      oldUsrSvtData,
                                                                      v4),
        !v3) )
  {
    sub_1C372B4(oldUsrSvtData);
  }
  *(_QWORD *)(v3 + 16) = oldUsrSvtData;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)oldUsrSvtData, v6, v7);
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

  if ( (byte_4C40412 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager___c_TypeInfo);
    byte_4C40412 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(TerminalPramsManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalPramsManager___c_TypeInfo->static_fields->__9 = (struct TerminalPramsManager___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)TerminalPramsManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C40413 & 1) == 0 )
  {
    this = (TerminalPramsManager___c_o *)sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40413 = 1;
  }
  if ( !n )
    sub_1C372B4(this);
  questId = n->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE7 = 1;
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
  if ( (byte_4C40414 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40414 = 1;
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
    sub_1C372B4(this);
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

  if ( (byte_4C40415 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    byte_4C40415 = 1;
  }
  effectIdsStr = this->fields.effectIdsStr;
  p_fields = (CGThumbnailListItem_o *)&this->fields;
  v7 = System_String__Concat_63599904(effectIdsStr, effectId, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  p_fields->klass = (CGThumbnailListItem_c *)v7;
  sub_1C36FFC(p_fields, (int32_t)v7, v8, v9);
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
    sub_1C372B4(0);
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

  if ( (byte_4C40416 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C40416 = 1;
  }
  entity = 0;
  userQuestMaster = this->fields.userQuestMaster;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
    sub_1C372B4(v6);
  }
  return 1;
}