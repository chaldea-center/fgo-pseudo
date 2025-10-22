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

  if ( (byte_4C5416E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C3E564(&float___TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5416E = 1;
  }
  v1 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v1,
    (const MethodInfo_3665EC4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->loginQuestNotifiedList = v1;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->loginQuestNotifiedList, (int32_t)v1, v3, v4);
  v5 = TerminalPramsManager_TypeInfo->static_fields;
  v5->_IsMainInterludeWarClear_k__BackingField = 0;
  v6 = StringLiteral_1/*""*/;
  v5->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v5->mTerminalWarStartedIds, v6, v7, v8);
  *(_OWORD *)&TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = xmmword_C123A0;
  v9 = sub_1C3E60C(float___TypeInfo, 3);
  v10 = TerminalPramsManager_TypeInfo->static_fields;
  v10->TipsArchiveScrollValueList = (struct System_Single_array *)v9;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->TipsArchiveScrollValueList, v9, v11, v12);
  TerminalPramsManager_TypeInfo->static_fields->joinGroupId = -1;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
  p_eventScriptMessages = (CGThumbnailListItem_o *)&TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  p_eventScriptMessages->klass = (CGThumbnailListItem_c *)v13;
  sub_1C3E508(p_eventScriptMessages, (int32_t)v13, v15, v16);
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

  if ( (byte_4C5414A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5414A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v3->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1C3E7C0(0, method);
  System_Collections_Generic_HashSet_int___Add(
    loginQuestNotifiedList,
    questId,
    (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void TerminalPramsManager__AutoOff(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C5410C & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5410C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C51506 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C51506 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_IsAutoResume_k__BackingField = 0;
  if ( !byte_4C53D48 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_4C53D48 = 1;
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

  if ( (byte_4C5413E & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11451/*"SAVEKEY_BlankEarthRank"*/);
    byte_4C5413E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C54191 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54191 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11451/*"SAVEKEY_BlankEarthRank"*/,
    v1->static_fields->_BlankEarthRank_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__BlankEarthSpotId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C5413D & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11452/*"SAVEKEY_BlankEarthSpotId"*/);
    byte_4C5413D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53577 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53577 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11452/*"SAVEKEY_BlankEarthSpotId"*/,
    v1->static_fields->_BlankEarthSpotId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__CampaignDirectBonus_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  Il2CppObject *p_obj; // x19
  System_String_o *v3; // x0

  if ( (byte_4C5413C & 1) == 0 )
  {
    sub_1C3E564(&CommonUI_CampaignDirectBonusData___TypeInfo);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11453/*"SAVEKEY_CampaignDirectBonus"*/);
    byte_4C5413C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C50C87 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50C87 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  p_obj = &v1->static_fields->_CampaignDirectBonus_k__BackingField->obj;
  if ( !p_obj )
    p_obj = (Il2CppObject *)sub_1C3E60C(CommonUI_CampaignDirectBonusData___TypeInfo, 0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(p_obj, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11453/*"SAVEKEY_CampaignDirectBonus"*/, v3, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool TerminalPramsManager__CanSendTrackEvent(int32_t questId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x19
  Il2CppObject *v8; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C54159 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C3E564(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C54159 = 1;
  }
  v8 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SpotMaster___);
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
          (const MethodInfo_33B2FA4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v8 )
LABEL_16:
    sub_1C3E7C0(Instance, v4);
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
            HIDWORD(v8[1].klass),
            (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___);
}


void TerminalPramsManager__CheckClearSelectedStoryQuestId(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4C5413F & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5413F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53F51 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53F51 = 1;
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
    if ( !byte_4C53F51 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53F51 = 1;
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
      if ( !byte_4C53A4D )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53A4D = 1;
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
  if ( (byte_4C54127 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_13706/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C3E564(&StringLiteral_13707/*"TerminalBeforeEventActivityPointGauge"*/);
    byte_4C54127 = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13706/*"TerminalBeforeEventActivityPoint"*/, 0)
      && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13707/*"TerminalBeforeEventActivityPointGauge"*/, 0);
}


bool TerminalPramsManager__CheckEventSubmarinePointSaveData(const MethodInfo *method)
{
  if ( (byte_4C54129 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_13708/*"TerminalBeforeEventSubmarinePointData"*/);
    byte_4C54129 = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13708/*"TerminalBeforeEventSubmarinePointData"*/, 0);
}


bool TerminalPramsManager__CheckIsOrdealCallWarClear(WarEntity_o *warEntity, const MethodInfo *method)
{
  int32_t parentWarId; // w19
  BalanceConfig_c *v4; // x0

  if ( (byte_4C54166 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C54166 = 1;
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

  if ( (byte_4C54143 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_string__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__ForEach__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C3E564(&ScrTerminalListTop_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&Method_TerminalPramsManager___c__DisplayClass712_0__CheckResumeEffectNT2_b__0__);
    sub_1C3E564(&TerminalPramsManager___c__DisplayClass712_0_TypeInfo);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_87/*"\r\n"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C54143 = 1;
  }
  v1 = sub_1C3E7B0(TerminalPramsManager___c__DisplayClass712_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass712_0___ctor((TerminalPramsManager___c__DisplayClass712_0_o *)v1, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C5418F )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5418F = 1;
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
        if ( !byte_4C5418F )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C5418F = 1;
        }
        v13 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v13 = TerminalPramsManager_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v13->static_fields->_PlayedTerminalEffects_k__BackingField;
        if ( !PlayedTerminalEffects_k__BackingField
          || (PlayedTerminalEffects_k__BackingField = System_String__Replace_63683016(
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
                                                                            (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_string___)) == 0)
          || (v15 = (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
              PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Collections_Generic_List_object___Remove(
                                                                           (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
                                                                           v12,
                                                                           (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_string__Remove__),
              !v1) )
        {
LABEL_39:
          sub_1C3E7C0(PlayedTerminalEffects_k__BackingField, v9);
        }
        v18 = StringLiteral_1/*""*/;
        *(_QWORD *)(v1 + 16) = StringLiteral_1/*""*/;
        sub_1C3E508((CGThumbnailListItem_o *)(v1 + 16), v18, v16, v17);
        v19 = (System_Action_object__o *)sub_1C3E7B0(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v19,
          (Il2CppObject *)v1,
          Method_TerminalPramsManager___c__DisplayClass712_0__CheckResumeEffectNT2_b__0__,
          0);
        System_Collections_Generic_List_object___ForEach(
          v15,
          (System_Action_T__o *)v19,
          (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_string__ForEach__);
        v22 = *(CGThumbnailListItem_c **)(v1 + 16);
        if ( !byte_4C54180 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C54180 = 1;
        }
        v23 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v23 = TerminalPramsManager_TypeInfo;
        }
        p_PlayedTerminalEffects_k__BackingField = (CGThumbnailListItem_o *)&v23->static_fields->_PlayedTerminalEffects_k__BackingField;
        p_PlayedTerminalEffects_k__BackingField->klass = v22;
        sub_1C3E508(p_PlayedTerminalEffects_k__BackingField, (int32_t)v22, v20, v21);
        TerminalPramsManager__Save_SaveData(v25);
      }
    }
  }
}


void TerminalPramsManager__ClearEventQuestIds_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C54137 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11454/*"SAVEKEY_ClearEventQuestIds"*/);
    byte_4C54137 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53630 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53630 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11454/*"SAVEKEY_ClearEventQuestIds"*/,
    v1->static_fields->_ClearEventQuestIds_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__ConnectMark_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C54136 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11456/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C3E564(&StringLiteral_11455/*"SAVEKEY_ConnectMarkAnimationId"*/);
    byte_4C54136 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11456/*"SAVEKEY_ConnectMarkEventId"*/, v1->static_fields->ConnectMarkEventId, 0);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11455/*"SAVEKEY_ConnectMarkAnimationId"*/,
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

  if ( (byte_4C5415C & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5415C = 1;
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
  if ( !byte_4C541A3 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C541A3 = 1;
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
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->lastPlayBgmName, v6, v2, v3);
}


void TerminalPramsManager__DeleteContinueData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_4C5411A & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11459/*"SAVEKEY_LastPlayBgmName"*/);
    sub_1C3E564(&StringLiteral_13710/*"TerminalEndTime"*/);
    sub_1C3E564(&StringLiteral_5186/*"Debug_IsOriginalGuestNPC"*/);
    sub_1C3E564(&StringLiteral_11465/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_1C3E564(&StringLiteral_13706/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C3E564(&StringLiteral_11453/*"SAVEKEY_CampaignDirectBonus"*/);
    sub_1C3E564(&StringLiteral_11460/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    sub_1C3E564(&StringLiteral_11470/*"SAVEKEY_TerminalCraftInfoDisp"*/);
    sub_1C3E564(&StringLiteral_13711/*"TerminalEventDailyPointEventId"*/);
    sub_1C3E564(&StringLiteral_5182/*"Debug_GuestNPCInfoList"*/);
    sub_1C3E564(&StringLiteral_13708/*"TerminalBeforeEventSubmarinePointData"*/);
    sub_1C3E564(&StringLiteral_13717/*"TerminalPhaseCnt"*/);
    sub_1C3E564(&StringLiteral_11469/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_1C3E564(&StringLiteral_13725/*"TerminalTimeStatusEventId"*/);
    sub_1C3E564(&StringLiteral_13709/*"TerminalDispState"*/);
    sub_1C3E564(&StringLiteral_11462/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_1C3E564(&StringLiteral_13712/*"TerminalIsDoneShortcut"*/);
    sub_1C3E564(&StringLiteral_11461/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C3E564(&StringLiteral_11466/*"SAVEKEY_PlayerGenderType"*/);
    sub_1C3E564(&StringLiteral_11471/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    sub_1C3E564(&StringLiteral_11454/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_1C3E564(&StringLiteral_11463/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_1C3E564(&StringLiteral_5187/*"Debug_IsQuestReleaseAll"*/);
    sub_1C3E564(&StringLiteral_5184/*"Debug_IsDummyErrorSelect"*/);
    sub_1C3E564(&StringLiteral_13720/*"TerminalQuestId"*/);
    sub_1C3E564(&StringLiteral_11468/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    sub_1C3E564(&StringLiteral_11474/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_1C3E564(&StringLiteral_13724/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_1C3E564(&StringLiteral_13729/*"TerminalWarId"*/);
    sub_1C3E564(&StringLiteral_13722/*"TerminalSpotId"*/);
    sub_1C3E564(&StringLiteral_13726/*"TerminalTimeStatusLoopCount"*/);
    sub_1C3E564(&StringLiteral_13707/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_1C3E564(&StringLiteral_11452/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_1C3E564(&StringLiteral_11457/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_1C3E564(&StringLiteral_5185/*"Debug_IsOriginalBattle"*/);
    sub_1C3E564(&StringLiteral_13730/*"TerminalWarStartedIds"*/);
    sub_1C3E564(&StringLiteral_5181/*"Debug_BattleEnemyList"*/);
    sub_1C3E564(&StringLiteral_11456/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C3E564(&StringLiteral_13728/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_1C3E564(&StringLiteral_11455/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_1C3E564(&StringLiteral_11464/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_1C3E564(&StringLiteral_13715/*"TerminalLastPlayedQuestId"*/);
    sub_1C3E564(&StringLiteral_5183/*"Debug_IsBuildInfoDisp"*/);
    sub_1C3E564(&StringLiteral_13727/*"TerminalTransitionInfoMissionId"*/);
    sub_1C3E564(&StringLiteral_11473/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4C5411A = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13709/*"TerminalDispState"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13729/*"TerminalWarId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13722/*"TerminalSpotId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13720/*"TerminalQuestId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13715/*"TerminalLastPlayedQuestId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13717/*"TerminalPhaseCnt"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13710/*"TerminalEndTime"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13712/*"TerminalIsDoneShortcut"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13730/*"TerminalWarStartedIds"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5187/*"Debug_IsQuestReleaseAll"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5184/*"Debug_IsDummyErrorSelect"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5183/*"Debug_IsBuildInfoDisp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5185/*"Debug_IsOriginalBattle"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5186/*"Debug_IsOriginalGuestNPC"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5181/*"Debug_BattleEnemyList"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5182/*"Debug_GuestNPCInfoList"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13725/*"TerminalTimeStatusEventId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13726/*"TerminalTimeStatusLoopCount"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13711/*"TerminalEventDailyPointEventId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13724/*"TerminalTimeStatusEventDailyPoint"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13727/*"TerminalTransitionInfoMissionId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13728/*"TerminalTransitionInfoVoiceAssetName"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13706/*"TerminalBeforeEventActivityPoint"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13707/*"TerminalBeforeEventActivityPointGauge"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13708/*"TerminalBeforeEventSubmarinePointData"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11469/*"SAVEKEY_TerminalConquestInfos"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11468/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11470/*"SAVEKEY_TerminalCraftInfoDisp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11471/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11459/*"SAVEKEY_LastPlayBgmName"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11460/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11465/*"SAVEKEY_PlayedTerminalEffects"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11462/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11463/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11464/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11474/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11456/*"SAVEKEY_ConnectMarkEventId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11455/*"SAVEKEY_ConnectMarkAnimationId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11473/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11454/*"SAVEKEY_ClearEventQuestIds"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11461/*"SAVEKEY_MapModelClearQuestInfo"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11457/*"SAVEKEY_DataLostBattleAutoReset"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11466/*"SAVEKEY_PlayerGenderType"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11453/*"SAVEKEY_CampaignDirectBonus"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11452/*"SAVEKEY_BlankEarthSpotId"*/, 0);
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

  if ( (byte_4C5415D & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11458/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_4C5415D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C541A4 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C541A4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  p_EventRaidDefeatedEffectInfo_k__BackingField = (CGThumbnailListItem_o *)&v3->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  p_EventRaidDefeatedEffectInfo_k__BackingField->klass = 0;
  sub_1C3E508(p_EventRaidDefeatedEffectInfo_k__BackingField, 0, v1, v2);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11458/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, 0);
}


void TerminalPramsManager__DeleteQuestRandomGroupList(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  TerminalPramsManager_c *v3; // x0
  CGThumbnailListItem_o *p_QuestRandomGroupList_k__BackingField; // x0

  if ( (byte_4C54162 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11467/*"SAVEKEY_QuestRandomGroupList"*/);
    byte_4C54162 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C541A6 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C541A6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  p_QuestRandomGroupList_k__BackingField = (CGThumbnailListItem_o *)&v3->static_fields->_QuestRandomGroupList_k__BackingField;
  p_QuestRandomGroupList_k__BackingField->klass = 0;
  sub_1C3E508(p_QuestRandomGroupList_k__BackingField, 0, v1, v2);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11467/*"SAVEKEY_QuestRandomGroupList"*/, 0);
}


bool TerminalPramsManager__EnableResumeToBlankEarthMap(int32_t warId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C5416A & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5416A = 1;
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v5);
  return QuestTree__IsActiveWar((QuestTree_o *)Instance, warId, 0);
}


void TerminalPramsManager__EventDailyPointSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  System_String_o *v3; // x0
  int64_t BeforeTimeEventDailyPoint_k__BackingField; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C54123 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_13711/*"TerminalEventDailyPointEventId"*/);
    sub_1C3E564(&StringLiteral_13724/*"TerminalTimeStatusEventDailyPoint"*/);
    byte_4C54123 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C5418B )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5418B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13711/*"TerminalEventDailyPointEventId"*/,
    v1->static_fields->_EventDailyPointEventId_k__BackingField,
    0);
  if ( !byte_4C5418C )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5418C = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  BeforeTimeEventDailyPoint_k__BackingField = v2->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v3 = System_Int64__ToString((int64_t)&BeforeTimeEventDailyPoint_k__BackingField, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13724/*"TerminalTimeStatusEventDailyPoint"*/, v3, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__EventStatusSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C54122 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_13725/*"TerminalTimeStatusEventId"*/);
    sub_1C3E564(&StringLiteral_13726/*"TerminalTimeStatusLoopCount"*/);
    byte_4C54122 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53F4C )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53F4C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13725/*"TerminalTimeStatusEventId"*/,
    v1->static_fields->_TimeStatusEventId_k__BackingField,
    0);
  if ( !byte_4C53F4D )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53F4D = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13726/*"TerminalTimeStatusLoopCount"*/,
    v2->static_fields->_TimeStatusLoopCount_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool TerminalPramsManager__ExistBlankEarthTutorial(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  BalanceConfig_c *v3; // x0

  if ( (byte_4C54169 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54169 = 1;
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

  if ( (byte_4C54168 & 1) == 0 )
  {
    sub_1C3E564(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    byte_4C54168 = 1;
  }
  v1 = sub_1C3E7B0(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v1, 0);
  if ( !v1 )
    sub_1C3E7C0(v2, v3);
  *(_QWORD *)(v1 + 16) = 0x5300000000LL;
  AvailableTutorialArray = (System_Collections_ICollection_o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                                 (EventTutorialMaster_EventTutorialArgs_o *)v1,
                                                                 0);
  return !BasicHelper__IsNullOrEmpty(AvailableTutorialArray, 0);
}


float TerminalPramsManager__GetAutoIntpTime(const MethodInfo *method)
{
  int32_t targetFrameRate; // w0

  if ( (byte_4C54115 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    byte_4C54115 = 1;
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

  if ( (byte_4C54148 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54148 = 1;
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
      sub_1C3E7C0(v5, v6);
  }
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         folderLastIdxs,
         warId,
         &value,
         (const MethodInfo_340501C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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

  if ( (byte_4C54116 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54116 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53756 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53756 = 1;
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
  if ( !byte_4C53D63 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53D63 = 1;
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

  if ( (byte_4C5414E & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5414E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v3);
  if ( !QuestFocusStateManager )
    sub_1C3E7C0(0, v5);
  return QuestFocusStateManager__GetFocusState(QuestFocusStateManager, questId, 0);
}


void TerminalPramsManager__InitLoad(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C5411C & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5411C = 1;
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

  if ( (byte_4C54146 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C54146 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C529F8 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C529F8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispOnly_k__BackingField = 0;
  v4 = StringLiteral_1/*""*/;
  if ( !byte_4C53D4B )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C53D4B = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = (struct System_String_o *)v4;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_QuestWindowMessage_k__BackingField, v4, v1, v2);
  if ( !byte_4C53D4A )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53D4A = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_MessageDispType_k__BackingField = 0;
  if ( !byte_4C529F7 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4C529F7 = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v9 = v8->static_fields;
  v9->_BattleSetupKeep_k__BackingField = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v9->_BattleSetupKeep_k__BackingField, 0, v6, v7);
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

  if ( (byte_4C5411B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5411B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53637 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53637 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4C53636 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C53636 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SpotId_k__BackingField = 0;
  if ( !byte_4C53631 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C53631 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestId_k__BackingField = 0;
  if ( !byte_4C53A47 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C53A47 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayedQuestId_k__BackingField = 0;
  if ( !byte_4C54176 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C54176 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
  if ( !byte_4C53A48 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C53A48 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = 0;
  if ( !byte_4C538F5 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C538F5 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_AfterActionFocusQuestId_k__BackingField = 0;
  if ( !byte_4C53A4D )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C53A4D = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
  if ( !byte_4C52930 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C52930 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  if ( !byte_4C53A4E )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C53A4E = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
  if ( !byte_4C53D7A )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C53D7A = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 0;
  if ( !byte_4C53D78 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C53D78 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
  if ( !byte_4C532C2 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C532C2 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField, 0, v1, v2);
  if ( !byte_4C53635 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53635 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_PhaseCnt_k__BackingField = 0;
  if ( !byte_4C53632 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4C53632 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_EndTime_k__BackingField = 0;
  if ( !byte_4C53634 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4C53634 = 1;
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
  sub_1C3E508((CGThumbnailListItem_o *)&v8->mTerminalWarStartedIds, v9, v5, v6);
  if ( !byte_4C54177 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54177 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->mDebug_IsQuestReleaseAll = 0;
  if ( !byte_4C54178 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4C54178 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->mDebug_IsDummyErrorSelect = 0;
  if ( !byte_4C54179 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4C54179 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->mDebug_IsBuildInfoDisp = 0;
  if ( !byte_4C53D7F )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4C53D7F = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_TimeStatusEventId_k__BackingField = 0;
  if ( !byte_4C53D80 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4C53D80 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_TimeStatusLoopCount_k__BackingField = 0;
  if ( !byte_4C5417A )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4C5417A = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  p_timeStatusRecord_k__BackingField = (CGThumbnailListItem_o *)&v12->static_fields->_timeStatusRecord_k__BackingField;
  p_timeStatusRecord_k__BackingField->klass = 0;
  sub_1C3E508(p_timeStatusRecord_k__BackingField, 0, v10, v11);
  if ( !byte_4C5417B )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5417B = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_EventDailyPointEventId_k__BackingField = 0;
  if ( !byte_4C5417C )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4C5417C = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = 0;
  if ( !byte_4C5417D )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4C5417D = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
  if ( !byte_4C5417E )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4C5417E = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
  if ( !byte_4C53759 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4C53759 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  p_BeforeEventSubmarineSaveData_k__BackingField = (CGThumbnailListItem_o *)&v16->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  p_BeforeEventSubmarineSaveData_k__BackingField->klass = 0;
  sub_1C3E508(p_BeforeEventSubmarineSaveData_k__BackingField, 0, v14, v15);
  v18 = StringLiteral_1/*""*/;
  p_lastPlayBgmName = (CGThumbnailListItem_o *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayBgmName;
  p_lastPlayBgmName->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
  sub_1C3E508(p_lastPlayBgmName, v18, v20, v21);
  v24 = TerminalPramsManager_TypeInfo;
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayQuestConsumeAp = 0;
  if ( !byte_4C5417F )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
    byte_4C5417F = 1;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v25 = v24->static_fields;
  v25->_SpecifiedChangeSceneInfo_k__BackingField = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v25->_SpecifiedChangeSceneInfo_k__BackingField, 0, v22, v23);
  if ( !byte_4C53F5E )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53F5E = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_EventBoardGameSquareIndex_k__BackingField = 0;
  if ( !byte_4C53F60 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
    byte_4C53F60 = 1;
  }
  if ( !v26->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v26);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = 0;
  if ( !byte_4C53F62 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
    byte_4C53F62 = 1;
  }
  if ( !v26->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v26);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
  if ( !byte_4C54173 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
    byte_4C54173 = 1;
  }
  if ( !v26->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v26);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v26);
  TerminalPramsManager__ResetResumeScriptWithMap(v27);
  if ( !byte_4C53A4A )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53A4A = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  v30->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
  v31 = StringLiteral_1/*""*/;
  if ( !byte_4C54180 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
    byte_4C54180 = 1;
  }
  if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30);
    v30 = TerminalPramsManager_TypeInfo;
  }
  p_PlayedTerminalEffects_k__BackingField = (CGThumbnailListItem_o *)&v30->static_fields->_PlayedTerminalEffects_k__BackingField;
  p_PlayedTerminalEffects_k__BackingField->klass = (CGThumbnailListItem_c *)v31;
  sub_1C3E508(p_PlayedTerminalEffects_k__BackingField, v31, v28, v29);
  if ( !byte_4C53E5B )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53E5B = 1;
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = 0;
  if ( !byte_4C53E5C )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C53E5C = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = 0;
  if ( !byte_4C53F4F )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C53F4F = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v36 = v35->static_fields;
  v36->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  *(_QWORD *)&v36->ConnectMarkEventId = 0;
  if ( !byte_4C51219 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C51219 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_isFortificationCheck_k__BackingField = 0;
  if ( !byte_4C54181 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C54181 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !byte_4C54182 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C54182 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !byte_4C53F57 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C53F57 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4C53D6F )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C53D6F = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_4C53F55 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C53F55 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_4C53F56 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C53F56 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_4C53F54 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C53F54 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_4C53F57 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C53F57 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4C53F49 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C53F49 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 0.0;
  if ( !byte_4C54183 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C54183 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  if ( !byte_4C53A4B )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C53A4B = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_4C51E88 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C51E88 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_PlayerGenderType_k__BackingField = 0;
  if ( !byte_4C54184 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C54184 = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  v37 = StringLiteral_1/*""*/;
  if ( !byte_4C53F5C )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4C53F5C = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  p_SceneMoveQuestClearedInfo_k__BackingField = (CGThumbnailListItem_o *)&v35->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
  p_SceneMoveQuestClearedInfo_k__BackingField->klass = (CGThumbnailListItem_c *)v37;
  sub_1C3E508(p_SceneMoveQuestClearedInfo_k__BackingField, v37, v33, v34);
  if ( !byte_4C54185 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54185 = 1;
  }
  v41 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v41 = TerminalPramsManager_TypeInfo;
  }
  v42 = v41->static_fields;
  v42->_CampaignBonus_k__BackingField = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v42->_CampaignBonus_k__BackingField, 0, v39, v40);
  if ( !byte_4C54186 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54186 = 1;
  }
  v45 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v46 = v45->static_fields;
  v46->_CampaignDirectBonus_k__BackingField = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v46->_CampaignDirectBonus_k__BackingField, 0, v43, v44);
  if ( !byte_4C54187 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54187 = 1;
  }
  v49 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v49 = TerminalPramsManager_TypeInfo;
  }
  v49->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
  v50 = StringLiteral_1/*""*/;
  if ( !byte_4C50C89 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v49 = TerminalPramsManager_TypeInfo;
    byte_4C50C89 = 1;
  }
  if ( !v49->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v49);
    v49 = TerminalPramsManager_TypeInfo;
  }
  p_TransitionScrollTabName_k__BackingField = (CGThumbnailListItem_o *)&v49->static_fields->_TransitionScrollTabName_k__BackingField;
  p_TransitionScrollTabName_k__BackingField->klass = (CGThumbnailListItem_c *)v50;
  sub_1C3E508(p_TransitionScrollTabName_k__BackingField, v50, v47, v48);
  if ( !byte_4C54188 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54188 = 1;
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
      (const MethodInfo_366CB60 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
}


void TerminalPramsManager__InitTipsArchiveScrollValueList(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  unsigned __int64 i; // x20
  struct System_Single_array *TipsArchiveScrollValueList; // x8
  struct System_Single_array *v5; // x8
  char *v6; // x8

  if ( (byte_4C5416B & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5416B = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      v2 = TerminalPramsManager_TypeInfo;
    }
    TipsArchiveScrollValueList = v2->static_fields->TipsArchiveScrollValueList;
    if ( !TipsArchiveScrollValueList )
LABEL_14:
      sub_1C3E7C0(v2, v1);
    if ( (__int64)i >= SLODWORD(TipsArchiveScrollValueList->max_length) )
      break;
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      v2 = TerminalPramsManager_TypeInfo;
    }
    v5 = v2->static_fields->TipsArchiveScrollValueList;
    if ( !v5 )
      goto LABEL_14;
    if ( i >= LODWORD(v5->max_length) )
      sub_1C3E7C8(v2, v1);
    v6 = (char *)v5 + 4 * i;
    *((_DWORD *)v6 + 8) = 0;
  }
}


bool TerminalPramsManager__IsAuto(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C54109 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54109 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53756 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53756 = 1;
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
  if ( !byte_4C54170 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54170 = 1;
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

  if ( (byte_4C5410B & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C3E564(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5410B = 1;
  }
  entity = 0;
  v8 = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53756 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53756 = 1;
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
  if ( !byte_4C51117 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C51117 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( v2->static_fields->_WarId_k__BackingField < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C51117 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C51117 = 1;
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
          (const MethodInfo_33B2FA4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !entity)
    || !Instance )
  {
LABEL_34:
    sub_1C3E7C0(Instance, v4);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v8,
          (int32_t)entity[6].klass,
          (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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

  if ( (byte_4C54167 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C3E564(&Method_System_Nullable_int___ctor__);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C54167 = 1;
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      sub_1C3E7C0(0, v6);
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, targetWarId, 0);
    if ( WarInfoByWarID )
    {
      WarInfoByWarID = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)WarInfoByWarID, 0);
      if ( WarInfoByWarID )
      {
        v7 = *((_DWORD *)WarInfoByWarID + 31);
        v8 = (System_Nullable_int__o)&v10;
        v10 = 0;
        System_Nullable_int____ctor(v8, v7, (const MethodInfo_38DABE0 *)Method_System_Nullable_int___ctor__);
        LOBYTE(WarInfoByWarID) = HIDWORD(v10) != 0;
      }
    }
  }
  return (char)WarInfoByWarID;
}


void TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C54139 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11457/*"SAVEKEY_DataLostBattleAutoReset"*/);
    byte_4C54139 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53F53 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53F53 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11457/*"SAVEKEY_DataLostBattleAutoReset"*/,
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

  if ( (byte_4C54157 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C3E564(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C54157 = 1;
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
            (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarMaster___);
        if ( Instance )
        {
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       &entity,
                                       warId,
                                       (const MethodInfo_33B2FA4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( entity )
            return LODWORD(entity[6].klass) == 0;
        }
      }
      sub_1C3E7C0(Instance, v7);
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

  if ( (byte_4C54158 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C3E564(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54158 = 1;
  }
  v9 = 0;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SpotMaster___),
        !entity)
    || (v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (Il2CppObject *)QuestEntity__getSpotId(entity, 0),
        !v5) )
  {
LABEL_16:
    sub_1C3E7C0(Instance, v4);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               v5,
                               &v9,
                               (int32_t)Instance,
                               (const MethodInfo_33B2FA4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
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

  if ( (byte_4C54156 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54156 = 1;
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
         (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___) )
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

  if ( (byte_4C54149 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54149 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v3->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1C3E7C0(0, method);
  return System_Collections_Generic_HashSet_int___Contains(
           loginQuestNotifiedList,
           questId,
           (const MethodInfo_36665B8 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C54132 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11463/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    byte_4C54132 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53D6D )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53D6D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11463/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v1->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C54131 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11462/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    byte_4C54131 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53D6C )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53D6C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11462/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v1->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__IsPlayTerminalEffectNt2AfterAction_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C54133 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11464/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    byte_4C54133 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53F4E )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53F4E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11464/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
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

  if ( (byte_4C54161 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54161 = 1;
  }
  value = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C541A5 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C541A5 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  }
  v6 = *(_QWORD *)&v5[2].fields._entries->m_Items[17].fields.hashCode;
  if ( !v6 || (v5 = *(System_Collections_Generic_Dictionary_int__object__o **)(v6 + 16)) == 0 )
    sub_1C3E7C0(v5, *(_QWORD *)&day);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         v5,
         eventId,
         &value,
         (const MethodInfo_340DBC8 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v7 = (char)value;
    if ( value )
      v7 = System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             day,
             (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
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

  if ( (byte_4C54142 & 1) == 0 )
  {
    sub_1C3E564(&ScrTerminalListTop_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54142 = 1;
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v7 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v7 )
LABEL_34:
    sub_1C3E7C0(Instance, v5);
  if ( !clsQuestCheck__IsWarClear(
          v7,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
          0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C50D67 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C50D67 = 1;
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
      if ( !byte_4C50D66 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C50D66 = 1;
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

  if ( (byte_4C54140 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_string____78188160);
    sub_1C3E564(&System_Func_string__bool__TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&Method_TerminalPramsManager___c__DisplayClass709_0__IsTerminalEffectPlayed_b__0__);
    sub_1C3E564(&TerminalPramsManager___c__DisplayClass709_0_TypeInfo);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_87/*"\r\n"*/);
    byte_4C54140 = 1;
  }
  v3 = sub_1C3E7B0(TerminalPramsManager___c__DisplayClass709_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass709_0___ctor((TerminalPramsManager___c__DisplayClass709_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_21;
  *(_QWORD *)(v3 + 16) = effectName;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 16), (int32_t)effectName, v6, v7);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C5418F )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5418F = 1;
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
    if ( !byte_4C5418F )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C5418F = 1;
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
      PlayedTerminalEffects_k__BackingField = System_String__Replace_63683016(
                                                PlayedTerminalEffects_k__BackingField,
                                                (System_String_o *)StringLiteral_87/*"\r\n"*/,
                                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                                0);
      if ( PlayedTerminalEffects_k__BackingField )
      {
        v10 = System_String__Split(PlayedTerminalEffects_k__BackingField, 0xAu, 0, 0);
        v11 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v11,
          (Il2CppObject *)v3,
          Method_TerminalPramsManager___c__DisplayClass709_0__IsTerminalEffectPlayed_b__0__,
          0);
        return BasicHelper__Any_object__51261116(
                 (System_Object_array *)v10,
                 (System_Func_T__bool__o *)v11,
                 (const MethodInfo_30E2EBC *)Method_BasicHelper_Any_string____78188160);
      }
    }
LABEL_21:
    sub_1C3E7C0(PlayedTerminalEffects_k__BackingField, v5);
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

  if ( (byte_4C54165 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4C54165 = 1;
  }
  v16 = 0;
  entity = 0;
  v14 = 0;
  v15 = 0;
  v13 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_42;
  if ( !QuestMaster__TryGetQuestEntity(Master_object, &entity, questId, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
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
          (const MethodInfo_33B2FA4 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__) )
    goto LABEL_45;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v16 || !Master_object )
    goto LABEL_42;
  Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     &v14,
                                     HIDWORD(v16[1].klass),
                                     (const MethodInfo_33B2FA4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
    Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_SpotMaster___);
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
           (const MethodInfo_33B2FA4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarMaster___);
      if ( !v15 || !Master_object )
        goto LABEL_42;
      Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                         &v13,
                                         HIDWORD(v15[1].klass),
                                         (const MethodInfo_33B2FA4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
          Master_object = (QuestMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( entity && Master_object )
            return clsQuestCheck__IsConsumeStormPod((clsQuestCheck_o *)Master_object, entity->fields.id, 0);
LABEL_42:
          sub_1C3E7C0(Master_object, v4);
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
  if ( (byte_4C54144 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_87/*"\r\n"*/);
    byte_4C54144 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  mTerminalWarStartedIds = v2->static_fields->mTerminalWarStartedIds;
  if ( !mTerminalWarStartedIds
    || (mTerminalWarStartedIds = System_String__Replace_63683016(
                                   mTerminalWarStartedIds,
                                   (System_String_o *)StringLiteral_87/*"\r\n"*/,
                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                   0)) == 0
    || (mTerminalWarStartedIds = (System_String_o *)System_String__Split(mTerminalWarStartedIds, 0xAu, 0, 0)) == 0 )
  {
    sub_1C3E7C0(mTerminalWarStartedIds, method);
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
        sub_1C3E7C8(mTerminalWarStartedIds, method);
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

  if ( (byte_4C54130 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_13713/*"TerminalLastPanelEventPoint"*/);
    byte_4C54130 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13713/*"TerminalLastPanelEventPoint"*/, v1->static_fields->panelEventPoint, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__LastPlayBgmNameSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C5412E & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11459/*"SAVEKEY_LastPlayBgmName"*/);
    byte_4C5412E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11459/*"SAVEKEY_LastPlayBgmName"*/, v1->static_fields->lastPlayBgmName, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C5412F & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11460/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    byte_4C5412F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11460/*"SAVEKEY_LastPlayQuestConsumeType"*/, v1->static_fields->lastPlayQuestConsumeAp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__LoadClearDatas(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_ClearData_c *v2; // x0
  TerminalPramsManager_ClearData_c *v3; // x0
  Il2CppObject *String_71300376; // x19
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
  __int64 v21; // x0
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
  int32_t v98; // w2
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

  if ( (byte_4C5415B & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C3E564(&Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5415B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53D5F )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53D5F = 1;
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
      String_71300376 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71300376(
                                          v3->static_fields->SAVEKEY_CLEAR_REWARD_DISP,
                                          0);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v7 = JsonManager__Deserialize_object_(
             String_71300376,
             (const MethodInfo_3168E68 *)Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
      v8 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v8 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestClearHeroineInfo = (CGThumbnailListItem_o *)&v8->static_fields->mQuestClearHeroineInfo;
      p_mQuestClearHeroineInfo->klass = 0;
      sub_1C3E508(p_mQuestClearHeroineInfo, 0, v5, v6);
      if ( !v7 )
        sub_1C3E7C0(v10, v11);
      klass = v7[1].klass;
      if ( !klass )
        sub_1C3E7C0(v10, v11);
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
        sub_1C3E508(v20, (int32_t)Load, v16, v17);
      }
      v21 = (__int64)TerminalPramsManager_TypeInfo;
      monitor = (char)v7[2].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C538EA )
      {
        v21 = sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C538EA = 1;
      }
      v23 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v23 = TerminalPramsManager_TypeInfo;
      }
      v23->static_fields->_IsQuestClear_k__BackingField = monitor;
      v24 = BYTE1(v7[2].monitor);
      if ( !byte_4C538EB )
      {
        v21 = sub_1C3E564(&TerminalPramsManager_TypeInfo);
        v23 = TerminalPramsManager_TypeInfo;
        byte_4C538EB = 1;
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
        sub_1C3E7C0(v21, v11);
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
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->mQuestRewardInfos, (int32_t)v27, v12, v13);
      v32 = v7[2].klass;
      if ( !v32 )
        sub_1C3E7C0(v28, v29);
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
      sub_1C3E508(p_mQuestPhaseRewardInfos, (int32_t)v34, v30, v31);
      v40 = TerminalPramsManager_TypeInfo;
      v41 = TerminalPramsManager_TypeInfo->static_fields;
      *(_QWORD *)&v41->clearLastBattleRaidId = *(void **)((char *)&v7[2].monitor + 4);
      v41->joinGroupId = HIDWORD(v7[3].klass);
      v42 = v7[3].monitor;
      if ( !v42 )
        sub_1C3E7C0(v36, v37);
      if ( v42[3] )
        v43 = (struct UserSuperBossEntity_array *)v7[3].monitor;
      else
        v43 = 0;
      if ( !v40->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v40);
      if ( !byte_4C5419B )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C5419B = 1;
      }
      v44 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v44 = TerminalPramsManager_TypeInfo;
      }
      v45 = v44->static_fields;
      v45->_oldSuperBoss_k__BackingField = v43;
      sub_1C3E508((CGThumbnailListItem_o *)&v45->_oldSuperBoss_k__BackingField, (int32_t)v43, v38, v39);
      v50 = v7[4].klass;
      if ( !v50 )
        sub_1C3E7C0(v46, v47);
      if ( v50->_1.namespaze )
        v51 = v7[4].klass;
      else
        v51 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C5419C )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C5419C = 1;
      }
      v52 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v52 = TerminalPramsManager_TypeInfo;
      }
      v53 = v52->static_fields;
      v53->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v51;
      sub_1C3E508((CGThumbnailListItem_o *)&v53->_oldPersonalBoss_k__BackingField, (int32_t)v51, v48, v49);
      v58 = (int *)v7[4].monitor;
      if ( !v58 )
        sub_1C3E7C0(v54, v55);
      if ( v58[4] <= 0 )
        v59 = 0;
      else
        v59 = (CGThumbnailListItem_c *)v7[4].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C54195 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C54195 = 1;
      }
      v60 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v60 = TerminalPramsManager_TypeInfo;
      }
      p_eventPointWinReward_k__BackingField = (CGThumbnailListItem_o *)&v60->static_fields->_eventPointWinReward_k__BackingField;
      p_eventPointWinReward_k__BackingField->klass = v59;
      sub_1C3E508(p_eventPointWinReward_k__BackingField, (int32_t)v59, v56, v57);
      v66 = (int32_t)v7[5].klass;
      if ( !byte_4C54196 )
      {
        v62 = sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C54196 = 1;
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
        sub_1C3E7C0(v62, v63);
      if ( v68[4] <= 0 )
        v69 = 0;
      else
        v69 = (CGThumbnailListItem_c *)v7[5].monitor;
      if ( !v67->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v67);
      if ( !byte_4C53F5D )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53F5D = 1;
      }
      v70 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v70 = TerminalPramsManager_TypeInfo;
      }
      p_eventRaceBoost_k__BackingField = (CGThumbnailListItem_o *)&v70->static_fields->_eventRaceBoost_k__BackingField;
      p_eventRaceBoost_k__BackingField->klass = v69;
      sub_1C3E508(p_eventRaceBoost_k__BackingField, (int32_t)v69, v64, v65);
      v76 = v7[6].klass;
      if ( !v76 )
        sub_1C3E7C0(v72, v73);
      if ( v76->_1.namespaze )
        v77 = v7[6].klass;
      else
        v77 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C53E5A )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53E5A = 1;
      }
      v78 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v78 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeRelease_k__BackingField = (CGThumbnailListItem_o *)&v78->static_fields->_questClearCostumeRelease_k__BackingField;
      p_questClearCostumeRelease_k__BackingField->klass = (CGThumbnailListItem_c *)v77;
      sub_1C3E508(p_questClearCostumeRelease_k__BackingField, (int32_t)v77, v74, v75);
      v84 = v7[6].monitor;
      if ( !v84 )
        sub_1C3E7C0(v80, v81);
      if ( v84[3] )
        v85 = (CGThumbnailListItem_c *)v7[6].monitor;
      else
        v85 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C53D5C )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53D5C = 1;
      }
      v86 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v86 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeGet_k__BackingField = (CGThumbnailListItem_o *)&v86->static_fields->_questClearCostumeGet_k__BackingField;
      p_questClearCostumeGet_k__BackingField->klass = v85;
      sub_1C3E508(p_questClearCostumeGet_k__BackingField, (int32_t)v85, v82, v83);
      v92 = v7[7].klass;
      if ( !v92 )
        sub_1C3E7C0(v88, v89);
      if ( SLODWORD(v92->_1.name) <= 0 )
        v93 = 0;
      else
        v93 = v7[7].klass;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C54199 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C54199 = 1;
      }
      v94 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v94 = TerminalPramsManager_TypeInfo;
      }
      p_eventTowerReward_k__BackingField = (CGThumbnailListItem_o *)&v94->static_fields->_eventTowerReward_k__BackingField;
      p_eventTowerReward_k__BackingField->klass = (CGThumbnailListItem_c *)v93;
      sub_1C3E508(p_eventTowerReward_k__BackingField, (int32_t)v93, v90, v91);
      v100 = v7[7].monitor;
      if ( !v100 )
        sub_1C3E7C0(v96, v97);
      v101 = v100[3];
      if ( v101 )
      {
        if ( !(_DWORD)v101 )
          sub_1C3E7C8(v96, v97);
        v102 = v100[4];
        if ( !v102 )
          sub_1C3E7C0(v96, v97);
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
      if ( !byte_4C5419A )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C5419A = 1;
      }
      v104 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v104 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventTowerRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v104->static_fields->_resultEventTowerRewardInfo_k__BackingField;
      p_resultEventTowerRewardInfo_k__BackingField->klass = v103;
      sub_1C3E508(p_resultEventTowerRewardInfo_k__BackingField, (int32_t)v103, v98, v99);
      v110 = v7[8].klass;
      if ( !v110 )
        sub_1C3E7C0(v106, v107);
      if ( v110->_1.namespaze )
        v111 = v7[8].klass;
      else
        v111 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C53D56 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53D56 = 1;
      }
      v112 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v112 = TerminalPramsManager_TypeInfo;
      }
      p_resultBoostItemRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v112->static_fields->_resultBoostItemRewardInfo_k__BackingField;
      p_resultBoostItemRewardInfo_k__BackingField->klass = (CGThumbnailListItem_c *)v111;
      sub_1C3E508(p_resultBoostItemRewardInfo_k__BackingField, (int32_t)v111, v108, v109);
      v118 = v7[8].monitor;
      if ( !v118 )
        sub_1C3E7C0(v114, v115);
      if ( v118[3] )
        v119 = (CGThumbnailListItem_c *)v7[8].monitor;
      else
        v119 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C53D57 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53D57 = 1;
      }
      v120 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v120 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventBoardGameTokenRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v120->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
      p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = v119;
      sub_1C3E508(p_resultEventBoardGameTokenRewardInfo_k__BackingField, (int32_t)v119, v116, v117);
      v126 = (char)v7[9].klass;
      if ( !byte_4C529F8 )
      {
        v122 = sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C529F8 = 1;
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
        sub_1C3E7C0(v122, v123);
      if ( v128[3] )
        v129 = (CGThumbnailListItem_c *)v7[9].monitor;
      else
        v129 = 0;
      if ( !v127->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v127);
      if ( !byte_4C53D61 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53D61 = 1;
      }
      v130 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v130 = TerminalPramsManager_TypeInfo;
      }
      p_warClearReward_k__BackingField = (CGThumbnailListItem_o *)&v130->static_fields->_warClearReward_k__BackingField;
      p_warClearReward_k__BackingField->klass = v129;
      sub_1C3E508(p_warClearReward_k__BackingField, (int32_t)v129, v124, v125);
      v136 = (int32_t)v7[10].klass;
      if ( !byte_4C51504 )
      {
        v132 = sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C51504 = 1;
      }
      v137 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v137 = TerminalPramsManager_TypeInfo;
      }
      v137->static_fields->_EventActivityPointEffectState_k__BackingField = v136;
      v138 = BYTE4(v7[10].klass);
      if ( !byte_4C53D5E )
      {
        v132 = sub_1C3E564(&TerminalPramsManager_TypeInfo);
        v137 = TerminalPramsManager_TypeInfo;
        byte_4C53D5E = 1;
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
        sub_1C3E7C0(v132, v133);
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
      sub_1C3E508((CGThumbnailListItem_o *)&v139->mQuestResultAfterEventRewardInfos, (int32_t)v141, v134, v135);
      v146 = v7[11].klass;
      if ( !v146 )
        sub_1C3E7C0(v142, v143);
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
      sub_1C3E508(p_mResultEventPanelRewardInfos, (int32_t)v148, v144, v145);
      v152 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = (int32_t)v7[11].monitor;
      v153 = v7[12].klass;
      if ( !byte_4C53D5A )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        v152 = TerminalPramsManager_TypeInfo;
        byte_4C53D5A = 1;
      }
      if ( !v152->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v152);
        v152 = TerminalPramsManager_TypeInfo;
      }
      p_limitImageAnnounces_k__BackingField = (CGThumbnailListItem_o *)&v152->static_fields->_limitImageAnnounces_k__BackingField;
      p_limitImageAnnounces_k__BackingField->klass = (CGThumbnailListItem_c *)v153;
      sub_1C3E508(p_limitImageAnnounces_k__BackingField, (int32_t)v153, v150, v151);
      v157 = (char)v7[12].monitor;
      if ( !byte_4C538EE )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C538EE = 1;
      }
      v158 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->_IsOrdealCallWarClear_k__BackingField = v157;
      monitor_high = HIDWORD(v7[12].monitor);
      if ( !byte_4C53D51 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        v158 = TerminalPramsManager_TypeInfo;
        byte_4C53D51 = 1;
      }
      if ( !v158->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v158);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->_EventMuralId_k__BackingField = monitor_high;
      v160 = (int32_t)v7[13].klass;
      if ( !byte_4C53F5A )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        v158 = TerminalPramsManager_TypeInfo;
        byte_4C53F5A = 1;
      }
      if ( !v158->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v158);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->_EventActionQuestId_k__BackingField = v160;
      v161 = BYTE4(v7[13].klass);
      if ( !byte_4C53D53 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        v158 = TerminalPramsManager_TypeInfo;
        byte_4C53D53 = 1;
      }
      if ( !v158->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v158);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->_PlayHappinessCounterEffect_k__BackingField = v161;
      v162 = (CGThumbnailListItem_c *)v7[13].monitor;
      if ( !byte_4C54193 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        v158 = TerminalPramsManager_TypeInfo;
        byte_4C54193 = 1;
      }
      if ( !v158->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v158);
        v158 = TerminalPramsManager_TypeInfo;
      }
      p_OldUserEventPoint_k__BackingField = (CGThumbnailListItem_o *)&v158->static_fields->_OldUserEventPoint_k__BackingField;
      p_OldUserEventPoint_k__BackingField->klass = v162;
      sub_1C3E508(p_OldUserEventPoint_k__BackingField, (int32_t)v162, v155, v156);
      v168 = v7[14].klass;
      if ( !v168 )
        sub_1C3E7C0(v164, v165);
      if ( v168->_1.namespaze )
        v169 = v7[14].klass;
      else
        v169 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C50D6A )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C50D6A = 1;
      }
      v170 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v170 = TerminalPramsManager_TypeInfo;
      }
      p_UseAddRewardItemRewardInfos_k__BackingField = (CGThumbnailListItem_o *)&v170->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
      p_UseAddRewardItemRewardInfos_k__BackingField->klass = (CGThumbnailListItem_c *)v169;
      sub_1C3E508(p_UseAddRewardItemRewardInfos_k__BackingField, (int32_t)v169, v166, v167);
      v172 = TerminalPramsManager_TypeInfo;
      if ( BYTE1(v7[2].monitor) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C51506 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C51506 = 1;
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
      if ( !byte_4C53D60 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53D60 = 1;
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
      if ( !byte_4C53D5D )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53D5D = 1;
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
        if ( !byte_4C541A3 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C541A3 = 1;
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

  if ( (byte_4C5415E & 1) == 0 )
  {
    sub_1C3E564(&EventRaidDefeatedEffectInfo_TypeInfo);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11458/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_4C5415E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C541A5 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C541A5 = 1;
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
               (System_String_o *)StringLiteral_11458/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/,
               string_TypeInfo->static_fields->Empty,
               0);
    v3 = (EventRaidDefeatedEffectInfo_o *)sub_1C3E7B0(EventRaidDefeatedEffectInfo_TypeInfo);
    EventRaidDefeatedEffectInfo___ctor(v3, String, v4);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C541A4 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C541A4 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v7->static_fields;
    static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = v3;
    sub_1C3E508(
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int max_length; // w8
  System_String_array *v9; // x20
  unsigned int v10; // w23
  System_String_array *v11; // x21
  TerminalPramsManager_c *v12; // x0
  CGThumbnailListItem_o *p_QuestRandomGroupList_k__BackingField; // x0
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C54163 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11467/*"SAVEKEY_QuestRandomGroupList"*/);
    byte_4C54163 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C5362D )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5362D = 1;
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
               (System_String_o *)StringLiteral_11467/*"SAVEKEY_QuestRandomGroupList"*/,
               string_TypeInfo->static_fields->Empty,
               0);
    v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v3,
      (const MethodInfo_3402FC0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
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
          sub_1C3E7C8(v4, v5);
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
            v6 = result[0];
            if ( result[0] >= 1 && ((unsigned __int8)v4 & 1) != 0 )
            {
              if ( !v3 )
                break;
              System_Collections_Generic_Dictionary_int__int___Add(
                v3,
                result[1],
                result[0],
                (const MethodInfo_3403984 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
        }
        max_length = v9->max_length;
        if ( (int)++v10 >= max_length )
          goto LABEL_27;
      }
LABEL_35:
      sub_1C3E7C0(v4, v5);
    }
LABEL_27:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C541A6 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C541A6 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    p_QuestRandomGroupList_k__BackingField = (CGThumbnailListItem_o *)&v12->static_fields->_QuestRandomGroupList_k__BackingField;
    p_QuestRandomGroupList_k__BackingField->klass = (CGThumbnailListItem_c *)v3;
    sub_1C3E508(p_QuestRandomGroupList_k__BackingField, (int32_t)v3, v6, v7);
  }
}


void TerminalPramsManager__LoadQuestReleasedFocusState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v3; // x1

  if ( (byte_4C5414B & 1) == 0 )
  {
    sub_1C3E564(&QuestFocusStateManager_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5414B = 1;
  }
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
  QuestFocusStateManager__ClearQuestFocusStateDataList(0);
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v1);
  if ( !QuestFocusStateManager )
    sub_1C3E7C0(0, v3);
  QuestFocusStateManager__ReadData(QuestFocusStateManager, 0);
}


void TerminalPramsManager__Load_SaveData(const MethodInfo *method)
{
  System_String_o *v1; // x19
  int32_t Int_71299808; // w19
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
  System_String_o *String_71300376; // x20
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
  il2cpp_array_size_t max_length; // x8
  System_String_array *v145; // x19
  int32_t v146; // w20
  TerminalPramsManager_c *v147; // x8
  int32_t v148; // w0
  int32_t v149; // w19
  TerminalPramsManager_c *v150; // x0
  System_String_o *v151; // x19
  int32_t v152; // w19
  TerminalPramsManager_c *v153; // x0
  System_String_o *v154; // x19
  int32_t v155; // w19
  TerminalPramsManager_c *v156; // x0
  System_String_o *v157; // x19
  Il2CppObject *v158; // x19
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  Il2CppObject *v161; // x19
  TerminalPramsManager_c *v162; // x0
  struct TerminalPramsManager_StaticFields *v163; // x0
  System_String_o *v164; // x19
  int32_t v165; // w19
  TerminalPramsManager_c *v166; // x0
  System_String_o *v167; // x19
  int32_t v168; // w19
  TerminalPramsManager_c *v169; // x0

  if ( (byte_4C5411D & 1) == 0 )
  {
    sub_1C3E564(&System_Convert_TypeInfo);
    sub_1C3E564(&Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    sub_1C3E564(&Method_JsonManager_Deserialize_EventConquestInfo_____);
    sub_1C3E564(&Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    sub_1C3E564(&Method_JsonManager_Deserialize_EventSaveData___);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11459/*"SAVEKEY_LastPlayBgmName"*/);
    sub_1C3E564(&StringLiteral_13710/*"TerminalEndTime"*/);
    sub_1C3E564(&StringLiteral_11465/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_1C3E564(&StringLiteral_13706/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C3E564(&StringLiteral_11453/*"SAVEKEY_CampaignDirectBonus"*/);
    sub_1C3E564(&StringLiteral_11460/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    sub_1C3E564(&StringLiteral_11472/*"SAVEKEY_TerminalLastSelectQuestIndex"*/);
    sub_1C3E564(&StringLiteral_11470/*"SAVEKEY_TerminalCraftInfoDisp"*/);
    sub_1C3E564(&StringLiteral_13711/*"TerminalEventDailyPointEventId"*/);
    sub_1C3E564(&StringLiteral_13708/*"TerminalBeforeEventSubmarinePointData"*/);
    sub_1C3E564(&StringLiteral_13717/*"TerminalPhaseCnt"*/);
    sub_1C3E564(&StringLiteral_11469/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_1C3E564(&StringLiteral_13725/*"TerminalTimeStatusEventId"*/);
    sub_1C3E564(&StringLiteral_13709/*"TerminalDispState"*/);
    sub_1C3E564(&StringLiteral_11462/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_1C3E564(&StringLiteral_13712/*"TerminalIsDoneShortcut"*/);
    sub_1C3E564(&StringLiteral_11461/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C3E564(&StringLiteral_11466/*"SAVEKEY_PlayerGenderType"*/);
    sub_1C3E564(&StringLiteral_11451/*"SAVEKEY_BlankEarthRank"*/);
    sub_1C3E564(&StringLiteral_13713/*"TerminalLastPanelEventPoint"*/);
    sub_1C3E564(&StringLiteral_11471/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    sub_1C3E564(&StringLiteral_11454/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_1C3E564(&StringLiteral_11463/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_1C3E564(&StringLiteral_5187/*"Debug_IsQuestReleaseAll"*/);
    sub_1C3E564(&StringLiteral_5184/*"Debug_IsDummyErrorSelect"*/);
    sub_1C3E564(&StringLiteral_13720/*"TerminalQuestId"*/);
    sub_1C3E564(&StringLiteral_11468/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    sub_1C3E564(&StringLiteral_11474/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_1C3E564(&StringLiteral_13724/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_1C3E564(&StringLiteral_13729/*"TerminalWarId"*/);
    sub_1C3E564(&StringLiteral_13722/*"TerminalSpotId"*/);
    sub_1C3E564(&StringLiteral_13726/*"TerminalTimeStatusLoopCount"*/);
    sub_1C3E564(&StringLiteral_13707/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_1C3E564(&StringLiteral_11452/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_1C3E564(&StringLiteral_11457/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_1C3E564(&StringLiteral_13730/*"TerminalWarStartedIds"*/);
    sub_1C3E564(&StringLiteral_11456/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C3E564(&StringLiteral_13714/*"TerminalLastPlayedFreeQuestSpotId"*/);
    sub_1C3E564(&StringLiteral_11455/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_1C3E564(&StringLiteral_11464/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_13715/*"TerminalLastPlayedQuestId"*/);
    sub_1C3E564(&StringLiteral_5183/*"Debug_IsBuildInfoDisp"*/);
    sub_1C3E564(&StringLiteral_11473/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4C5411D = 1;
  }
  v1 = (System_String_o *)StringLiteral_13709/*"TerminalDispState"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13709/*"TerminalDispState"*/, 0) )
  {
    Int_71299808 = UnityEngine_PlayerPrefs__GetInt_71299808(v1, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53633 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53633 = 1;
    }
    v3 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v3 = TerminalPramsManager_TypeInfo;
    }
    v3->static_fields->_DispState_k__BackingField = Int_71299808;
  }
  v4 = (System_String_o *)StringLiteral_13729/*"TerminalWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13729/*"TerminalWarId"*/, 0) )
  {
    v5 = UnityEngine_PlayerPrefs__GetInt_71299808(v4, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53637 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53637 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_WarId_k__BackingField = v5;
  }
  v7 = (System_String_o *)StringLiteral_13722/*"TerminalSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13722/*"TerminalSpotId"*/, 0) )
  {
    v8 = UnityEngine_PlayerPrefs__GetInt_71299808(v7, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53636 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53636 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_SpotId_k__BackingField = v8;
  }
  v10 = (System_String_o *)StringLiteral_13720/*"TerminalQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13720/*"TerminalQuestId"*/, 0) )
  {
    v11 = UnityEngine_PlayerPrefs__GetInt_71299808(v10, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53631 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53631 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v12->static_fields->_QuestId_k__BackingField = v11;
  }
  v13 = (System_String_o *)StringLiteral_13715/*"TerminalLastPlayedQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13715/*"TerminalLastPlayedQuestId"*/, 0) )
  {
    v14 = UnityEngine_PlayerPrefs__GetInt_71299808(v13, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53A47 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53A47 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_LastPlayedQuestId_k__BackingField = v14;
  }
  v16 = (System_String_o *)StringLiteral_13717/*"TerminalPhaseCnt"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13717/*"TerminalPhaseCnt"*/, 0) )
  {
    v17 = UnityEngine_PlayerPrefs__GetInt_71299808(v16, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53635 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53635 = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    v18->static_fields->_PhaseCnt_k__BackingField = v17;
  }
  v19 = (System_String_o *)StringLiteral_13710/*"TerminalEndTime"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13710/*"TerminalEndTime"*/, 0) )
  {
    String_71300376 = UnityEngine_PlayerPrefs__GetString_71300376(v19, 0);
    v21 = 0;
    if ( System_String__op_Inequality(String_71300376, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v21 = System_Convert__ToInt64_64726660(String_71300376, 0);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53632 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53632 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    v22->static_fields->_EndTime_k__BackingField = v21;
  }
  v23 = (System_String_o *)StringLiteral_13712/*"TerminalIsDoneShortcut"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13712/*"TerminalIsDoneShortcut"*/, 0) )
  {
    v24 = UnityEngine_PlayerPrefs__GetInt_71299808(v23, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53634 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53634 = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = TerminalPramsManager_TypeInfo;
    }
    v25->static_fields->_IsDoneShortcut_k__BackingField = v24 != 0;
  }
  v26 = (System_String_o *)StringLiteral_13730/*"TerminalWarStartedIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13730/*"TerminalWarStartedIds"*/, 0) )
  {
    v29 = UnityEngine_PlayerPrefs__GetString_71300376(v26, 0);
    v30 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v30 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v30->static_fields;
    static_fields->mTerminalWarStartedIds = v29;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->mTerminalWarStartedIds, (int32_t)v29, v27, v28);
  }
  v32 = (System_String_o *)StringLiteral_5187/*"Debug_IsQuestReleaseAll"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5187/*"Debug_IsQuestReleaseAll"*/, 0) )
  {
    v33 = UnityEngine_PlayerPrefs__GetInt_71299808(v32, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C54177 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C54177 = 1;
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
    v36 = UnityEngine_PlayerPrefs__GetInt_71299808(v35, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C54178 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C54178 = 1;
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
    v39 = UnityEngine_PlayerPrefs__GetInt_71299808(v38, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C54179 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C54179 = 1;
    }
    v40 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v40 = TerminalPramsManager_TypeInfo;
    }
    v40->static_fields->mDebug_IsBuildInfoDisp = v39 != 0;
  }
  v41 = (System_String_o *)StringLiteral_13725/*"TerminalTimeStatusEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13725/*"TerminalTimeStatusEventId"*/, 0) )
  {
    v42 = UnityEngine_PlayerPrefs__GetInt_71299808(v41, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53D7F )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53D7F = 1;
    }
    v43 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v43 = TerminalPramsManager_TypeInfo;
    }
    v43->static_fields->_TimeStatusEventId_k__BackingField = v42;
  }
  v44 = (System_String_o *)StringLiteral_13726/*"TerminalTimeStatusLoopCount"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13726/*"TerminalTimeStatusLoopCount"*/, 0) )
  {
    v45 = UnityEngine_PlayerPrefs__GetInt_71299808(v44, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53D80 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53D80 = 1;
    }
    v46 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v46 = TerminalPramsManager_TypeInfo;
    }
    v46->static_fields->_TimeStatusLoopCount_k__BackingField = v45;
  }
  v47 = (System_String_o *)StringLiteral_13711/*"TerminalEventDailyPointEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13711/*"TerminalEventDailyPointEventId"*/, 0) )
  {
    v48 = UnityEngine_PlayerPrefs__GetInt_71299808(v47, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C5417B )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C5417B = 1;
    }
    v49 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v49 = TerminalPramsManager_TypeInfo;
    }
    v49->static_fields->_EventDailyPointEventId_k__BackingField = v48;
  }
  v50 = (System_String_o *)StringLiteral_13724/*"TerminalTimeStatusEventDailyPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13724/*"TerminalTimeStatusEventDailyPoint"*/, 0) )
  {
    v51 = UnityEngine_PlayerPrefs__GetString_71300376(v50, 0);
    v52 = 0;
    if ( !System_String__op_Equality(v51, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v52 = System_Convert__ToInt64_64726660(v51, 0);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C5417C )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C5417C = 1;
    }
    v53 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v53 = TerminalPramsManager_TypeInfo;
    }
    v53->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = v52;
  }
  v54 = (System_String_o *)StringLiteral_13706/*"TerminalBeforeEventActivityPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13706/*"TerminalBeforeEventActivityPoint"*/, 0) )
  {
    v55 = UnityEngine_PlayerPrefs__GetInt_71299808(v54, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C5417D )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C5417D = 1;
    }
    v56 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v56 = TerminalPramsManager_TypeInfo;
    }
    v56->static_fields->_BeforeEventActivityPoint_k__BackingField = v55;
  }
  v57 = (System_String_o *)StringLiteral_13707/*"TerminalBeforeEventActivityPointGauge"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13707/*"TerminalBeforeEventActivityPointGauge"*/, 0) )
  {
    v58 = UnityEngine_PlayerPrefs__GetInt_71299808(v57, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C5417E )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C5417E = 1;
    }
    v59 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v59 = TerminalPramsManager_TypeInfo;
    }
    v59->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v58;
  }
  v60 = (System_String_o *)StringLiteral_13708/*"TerminalBeforeEventSubmarinePointData"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13708/*"TerminalBeforeEventSubmarinePointData"*/, 0) )
  {
    v61 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71300376(v60, 0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v64 = JsonManager__Deserialize_object_(
            v61,
            (const MethodInfo_3168E68 *)Method_JsonManager_Deserialize_EventSaveData___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53759 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53759 = 1;
    }
    v65 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v65 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (CGThumbnailListItem_o *)&v65->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (CGThumbnailListItem_c *)v64;
    sub_1C3E508(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v64, v62, v63);
  }
  v67 = (System_String_o *)StringLiteral_11472/*"SAVEKEY_TerminalLastSelectQuestIndex"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11472/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, 0) )
  {
    v69 = UnityEngine_PlayerPrefs__GetInt_71299808(v67, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C54176 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C54176 = 1;
    }
    v70 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v70 = TerminalPramsManager_TypeInfo;
    }
    v70->static_fields->_LastSelectQuestIndex_k__BackingField = v69;
    if ( !byte_4C51117 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      v70 = TerminalPramsManager_TypeInfo;
      byte_4C51117 = 1;
    }
    if ( !v70->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v70);
      v70 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v70->static_fields->_WarId_k__BackingField;
    if ( !byte_4C54189 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      v70 = TerminalPramsManager_TypeInfo;
      byte_4C54189 = 1;
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
  v72 = (System_String_o *)StringLiteral_11469/*"SAVEKEY_TerminalConquestInfos"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11469/*"SAVEKEY_TerminalConquestInfos"*/, 0) )
  {
    v73 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71300376(v72, 0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v76 = JsonManager__Deserialize_object_(
            v73,
            (const MethodInfo_3168E68 *)Method_JsonManager_Deserialize_EventConquestInfo_____);
    v77 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v77 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = (CGThumbnailListItem_o *)&v77->static_fields->eventConquestInfos;
    p_eventConquestInfos->klass = (CGThumbnailListItem_c *)v76;
    sub_1C3E508(p_eventConquestInfos, (int32_t)v76, v74, v75);
  }
  v79 = (System_String_o *)StringLiteral_11468/*"SAVEKEY_TerminalConquestInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11468/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0) )
  {
    v80 = UnityEngine_PlayerPrefs__GetInt_71299808(v79, 0);
    v81 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v81 = TerminalPramsManager_TypeInfo;
    }
    v81->static_fields->eventConquestInfoDisp = v80 != 0;
  }
  v82 = (System_String_o *)StringLiteral_11470/*"SAVEKEY_TerminalCraftInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11470/*"SAVEKEY_TerminalCraftInfoDisp"*/, 0) )
  {
    v83 = UnityEngine_PlayerPrefs__GetInt_71299808(v82, 0);
    v84 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v84 = TerminalPramsManager_TypeInfo;
    }
    v84->static_fields->eventCraftInfoDisp = v83 != 0;
  }
  v85 = (System_String_o *)StringLiteral_11471/*"SAVEKEY_TerminalHarvestGrowthInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11471/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0) )
  {
    v86 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71300376(v85, 0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v89 = JsonManager__Deserialize_object_(
            v86,
            (const MethodInfo_3168E68 *)Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    v90 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v90 = TerminalPramsManager_TypeInfo;
    }
    p_eventHarvestGrowthInfo = (CGThumbnailListItem_o *)&v90->static_fields->eventHarvestGrowthInfo;
    p_eventHarvestGrowthInfo->klass = (CGThumbnailListItem_c *)v89;
    sub_1C3E508(p_eventHarvestGrowthInfo, (int32_t)v89, v87, v88);
  }
  v92 = (System_String_o *)StringLiteral_11459/*"SAVEKEY_LastPlayBgmName"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11459/*"SAVEKEY_LastPlayBgmName"*/, 0) )
  {
    v95 = UnityEngine_PlayerPrefs__GetString_71300376(v92, 0);
    v96 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v96 = TerminalPramsManager_TypeInfo;
    }
    p_lastPlayBgmName = (CGThumbnailListItem_o *)&v96->static_fields->lastPlayBgmName;
    p_lastPlayBgmName->klass = (CGThumbnailListItem_c *)v95;
    sub_1C3E508(p_lastPlayBgmName, (int32_t)v95, v93, v94);
  }
  v98 = (System_String_o *)StringLiteral_11460/*"SAVEKEY_LastPlayQuestConsumeType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11460/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0) )
  {
    v99 = UnityEngine_PlayerPrefs__GetInt_71299808(v98, 0);
    v100 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v100 = TerminalPramsManager_TypeInfo;
    }
    v100->static_fields->lastPlayQuestConsumeAp = v99;
  }
  v101 = (System_String_o *)StringLiteral_13714/*"TerminalLastPlayedFreeQuestSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13714/*"TerminalLastPlayedFreeQuestSpotId"*/, 0) )
  {
    v102 = UnityEngine_PlayerPrefs__GetInt_71299808(v101, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53A48 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53A48 = 1;
    }
    v103 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v103 = TerminalPramsManager_TypeInfo;
    }
    v103->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = v102;
  }
  v104 = (System_String_o *)StringLiteral_13713/*"TerminalLastPanelEventPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13713/*"TerminalLastPanelEventPoint"*/, 0) )
  {
    v105 = UnityEngine_PlayerPrefs__GetInt_71299808(v104, 0);
    v106 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v106 = TerminalPramsManager_TypeInfo;
    }
    v106->static_fields->panelEventPoint = v105;
  }
  v107 = (System_String_o *)StringLiteral_11465/*"SAVEKEY_PlayedTerminalEffects"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11465/*"SAVEKEY_PlayedTerminalEffects"*/, 0) )
  {
    v110 = UnityEngine_PlayerPrefs__GetString_71300376(v107, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C54180 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C54180 = 1;
    }
    v111 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v111 = TerminalPramsManager_TypeInfo;
    }
    p_PlayedTerminalEffects_k__BackingField = (CGThumbnailListItem_o *)&v111->static_fields->_PlayedTerminalEffects_k__BackingField;
    p_PlayedTerminalEffects_k__BackingField->klass = (CGThumbnailListItem_c *)v110;
    sub_1C3E508(p_PlayedTerminalEffects_k__BackingField, (int32_t)v110, v108, v109);
  }
  v113 = (System_String_o *)StringLiteral_11462/*"SAVEKEY_PlayTerminalEffectDisappear"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11462/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0) )
  {
    v114 = UnityEngine_PlayerPrefs__GetInt_71299808(v113, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53E5B )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53E5B = 1;
    }
    v115 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v115 = TerminalPramsManager_TypeInfo;
    }
    v115->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = v114 != 0;
  }
  v116 = (System_String_o *)StringLiteral_11463/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11463/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0) )
  {
    v117 = UnityEngine_PlayerPrefs__GetInt_71299808(v116, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53E5C )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53E5C = 1;
    }
    v118 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v118 = TerminalPramsManager_TypeInfo;
    }
    v118->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = v117;
  }
  v119 = (System_String_o *)StringLiteral_11464/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11464/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0) )
  {
    v120 = UnityEngine_PlayerPrefs__GetInt_71299808(v119, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53F4F )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53F4F = 1;
    }
    v121 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v121 = TerminalPramsManager_TypeInfo;
    }
    v121->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = v120 != 0;
  }
  v122 = (System_String_o *)StringLiteral_11474/*"SAVEKEY_TerminalSelectedStoryQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11474/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0) )
  {
    v123 = UnityEngine_PlayerPrefs__GetInt_71299808(v122, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53A4D )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53A4D = 1;
    }
    v124 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v124 = TerminalPramsManager_TypeInfo;
    }
    v124->static_fields->_SelectedStoryQuestId_k__BackingField = v123;
  }
  v125 = (System_String_o *)StringLiteral_11456/*"SAVEKEY_ConnectMarkEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11456/*"SAVEKEY_ConnectMarkEventId"*/, 0) )
  {
    v126 = UnityEngine_PlayerPrefs__GetInt_71299808(v125, 0);
    v127 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v127 = TerminalPramsManager_TypeInfo;
    }
    v127->static_fields->ConnectMarkEventId = v126;
  }
  v128 = (System_String_o *)StringLiteral_11455/*"SAVEKEY_ConnectMarkAnimationId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11455/*"SAVEKEY_ConnectMarkAnimationId"*/, 0) )
  {
    v129 = UnityEngine_PlayerPrefs__GetInt_71299808(v128, 0);
    v130 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v130 = TerminalPramsManager_TypeInfo;
    }
    v130->static_fields->ConnectMarkAnimationId = v129;
  }
  v131 = (System_String_o *)StringLiteral_11473/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11473/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0) )
  {
    v132 = UnityEngine_PlayerPrefs__GetInt_71299808(v131, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C52930 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C52930 = 1;
    }
    v133 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v133 = TerminalPramsManager_TypeInfo;
    }
    v133->static_fields->_SelectedRecollectionWarId_k__BackingField = v132;
  }
  v134 = (System_String_o *)StringLiteral_11454/*"SAVEKEY_ClearEventQuestIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11454/*"SAVEKEY_ClearEventQuestIds"*/, 0) )
  {
    v137 = UnityEngine_PlayerPrefs__GetString_71300376(v134, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C5362F )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C5362F = 1;
    }
    v138 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v138 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (CGThumbnailListItem_o *)&v138->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (CGThumbnailListItem_c *)v137;
    sub_1C3E508(p_ClearEventQuestIds_k__BackingField, (int32_t)v137, v135, v136);
  }
  v140 = (System_String_o *)StringLiteral_11461/*"SAVEKEY_MapModelClearQuestInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11461/*"SAVEKEY_MapModelClearQuestInfo"*/, 0) )
  {
    v141 = UnityEngine_PlayerPrefs__GetString_71300376(v140, 0);
    IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(v141, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v141 || (IsNullOrEmpty = System_String__Split(v141, 0x2Cu, 0, 0)) == 0 )
        sub_1C3E7C0(IsNullOrEmpty, v143);
      max_length = IsNullOrEmpty->max_length;
      v145 = IsNullOrEmpty;
      if ( max_length )
      {
        if ( !(_DWORD)max_length )
          sub_1C3E7C8(IsNullOrEmpty, v143);
        v146 = System_Int32__Parse(IsNullOrEmpty->m_Items[0], 0);
      }
      else
      {
        v146 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C54181 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C54181 = 1;
      }
      v147 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v147 = TerminalPramsManager_TypeInfo;
      }
      v147->static_fields->_MapModelClearQuestId_k__BackingField = v146;
      if ( SLODWORD(v145->max_length) < 2 )
      {
        v149 = 0;
      }
      else
      {
        v148 = System_Int32__Parse(v145->m_Items[1], 0);
        v147 = TerminalPramsManager_TypeInfo;
        v149 = v148;
      }
      if ( !v147->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v147);
      if ( !byte_4C54182 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C54182 = 1;
      }
      v150 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v150 = TerminalPramsManager_TypeInfo;
      }
      v150->static_fields->_MapModelClearPhaseCount_k__BackingField = v149;
    }
  }
  v151 = (System_String_o *)StringLiteral_11457/*"SAVEKEY_DataLostBattleAutoReset"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11457/*"SAVEKEY_DataLostBattleAutoReset"*/, 0) )
  {
    v152 = UnityEngine_PlayerPrefs__GetInt_71299808(v151, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53F57 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53F57 = 1;
    }
    v153 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v153 = TerminalPramsManager_TypeInfo;
    }
    v153->static_fields->_IsDataLostBattleAutoReset_k__BackingField = v152 != 0;
  }
  v154 = (System_String_o *)StringLiteral_11466/*"SAVEKEY_PlayerGenderType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11466/*"SAVEKEY_PlayerGenderType"*/, 0) )
  {
    v155 = UnityEngine_PlayerPrefs__GetInt_71299808(v154, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C51E88 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C51E88 = 1;
    }
    v156 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v156 = TerminalPramsManager_TypeInfo;
    }
    v156->static_fields->_PlayerGenderType_k__BackingField = v155;
  }
  v157 = (System_String_o *)StringLiteral_11453/*"SAVEKEY_CampaignDirectBonus"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11453/*"SAVEKEY_CampaignDirectBonus"*/, 0) )
  {
    v158 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71300376(v157, 0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v161 = JsonManager__Deserialize_object_(
             v158,
             (const MethodInfo_3168E68 *)Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C54186 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C54186 = 1;
    }
    v162 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v162 = TerminalPramsManager_TypeInfo;
    }
    v163 = v162->static_fields;
    v163->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)v161;
    sub_1C3E508((CGThumbnailListItem_o *)&v163->_CampaignDirectBonus_k__BackingField, (int32_t)v161, v159, v160);
  }
  v164 = (System_String_o *)StringLiteral_11452/*"SAVEKEY_BlankEarthSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11452/*"SAVEKEY_BlankEarthSpotId"*/, 0) )
  {
    v165 = UnityEngine_PlayerPrefs__GetInt_71299808(v164, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C5357B )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C5357B = 1;
    }
    v166 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v166 = TerminalPramsManager_TypeInfo;
    }
    v166->static_fields->_BlankEarthSpotId_k__BackingField = v165;
  }
  v167 = (System_String_o *)StringLiteral_11451/*"SAVEKEY_BlankEarthRank"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11451/*"SAVEKEY_BlankEarthRank"*/, 0) )
  {
    v168 = UnityEngine_PlayerPrefs__GetInt_71299808(v167, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C5418A )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C5418A = 1;
    }
    v169 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v169 = TerminalPramsManager_TypeInfo;
    }
    v169->static_fields->_BlankEarthRank_k__BackingField = v168;
  }
}


TerminalTransitionInfo_o *TerminalPramsManager__Load_TerminalTransitionInfoData(const MethodInfo *method)
{
  System_String_o *v1; // x20
  __int64 v2; // x19
  int32_t Int_71299808; // w0
  int32_t v4; // w20
  const MethodInfo *v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  System_String_o *String_71300376; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C5411E & 1) == 0 )
  {
    sub_1C3E564(&TerminalTransitionInfo_TypeInfo);
    sub_1C3E564(&StringLiteral_13728/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_1C3E564(&StringLiteral_13727/*"TerminalTransitionInfoMissionId"*/);
    byte_4C5411E = 1;
  }
  v1 = (System_String_o *)StringLiteral_13727/*"TerminalTransitionInfoMissionId"*/;
  v2 = 0;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13727/*"TerminalTransitionInfoMissionId"*/, 0) )
  {
    Int_71299808 = UnityEngine_PlayerPrefs__GetInt_71299808(v1, 0);
    if ( Int_71299808 < 1 )
    {
      return 0;
    }
    else
    {
      v4 = Int_71299808;
      v2 = sub_1C3E7B0(TerminalTransitionInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v2, 0);
      TerminalTransitionInfo__Init((TerminalTransitionInfo_o *)v2, v5);
      if ( !v2 )
        sub_1C3E7C0(v6, v7);
      *(_DWORD *)(v2 + 16) = v4;
      v8 = (System_String_o *)StringLiteral_13728/*"TerminalTransitionInfoVoiceAssetName"*/;
      if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13728/*"TerminalTransitionInfoVoiceAssetName"*/, 0) )
      {
        String_71300376 = UnityEngine_PlayerPrefs__GetString_71300376(v8, 0);
        *(_QWORD *)(v2 + 40) = String_71300376;
        sub_1C3E508((CGThumbnailListItem_o *)(v2 + 40), (int32_t)String_71300376, v10, v11);
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

  if ( (byte_4C54138 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11461/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C3E564(&StringLiteral_811/*","*/);
    byte_4C54138 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53836 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53836 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v1->static_fields->_MapModelClearQuestId_k__BackingField;
  v2 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  if ( !byte_4C53837 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53837 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v3->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  v5 = System_String__Concat_63674716(v2, (System_String_o *)StringLiteral_811/*","*/, v4, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11461/*"SAVEKEY_MapModelClearQuestInfo"*/, v5, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__PlayQuestSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C54124 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11472/*"SAVEKEY_TerminalLastSelectQuestIndex"*/);
    sub_1C3E564(&StringLiteral_13714/*"TerminalLastPlayedFreeQuestSpotId"*/);
    sub_1C3E564(&StringLiteral_13715/*"TerminalLastPlayedQuestId"*/);
    byte_4C54124 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53993 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53993 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13715/*"TerminalLastPlayedQuestId"*/,
    v1->static_fields->_LastPlayedQuestId_k__BackingField,
    0);
  if ( !byte_4C54189 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54189 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11472/*"SAVEKEY_TerminalLastSelectQuestIndex"*/,
    v2->static_fields->_LastSelectQuestIndex_k__BackingField,
    0);
  if ( !byte_4C5362A )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5362A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13714/*"TerminalLastPlayedFreeQuestSpotId"*/,
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

  if ( (byte_4C54119 & 1) == 0 )
  {
    sub_1C3E564(&Method_TerminalPramsManager_PlaySystemSE__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54119 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C54174 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54174 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( TerminalPramsManager_TypeInfo->static_fields->_IsAutoNoSe_k__BackingField )
    {
LABEL_9:
      if ( !byte_4C54175 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C54175 = 1;
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
      v6 = (_QWORD *)sub_1C3E57C(Method_TerminalPramsManager_PlaySystemSE__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C3E548(v6, v6[4]);
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

  if ( (byte_4C54141 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C54141 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsTerminalEffectPlayed(effectName, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C5418F )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C5418F = 1;
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
      if ( !byte_4C54180 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C54180 = 1;
      }
      v7 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v7 = TerminalPramsManager_TypeInfo;
      }
      p_PlayedTerminalEffects_k__BackingField = (CGThumbnailListItem_o *)&v7->static_fields->_PlayedTerminalEffects_k__BackingField;
      p_PlayedTerminalEffects_k__BackingField->klass = (CGThumbnailListItem_c *)v6;
      sub_1C3E508(p_PlayedTerminalEffects_k__BackingField, v6, v3, v4);
      v5 = TerminalPramsManager_TypeInfo;
    }
    if ( !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    if ( !byte_4C5418F )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C5418F = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v12 = System_String__Concat_63674716(
            v9->static_fields->_PlayedTerminalEffects_k__BackingField,
            effectName,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            0);
    if ( !byte_4C54180 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C54180 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v14 = (CGThumbnailListItem_o *)&v13->static_fields->_PlayedTerminalEffects_k__BackingField;
    v14->klass = (CGThumbnailListItem_c *)v12;
    sub_1C3E508(v14, (int32_t)v12, v10, v11);
    TerminalPramsManager__Save_SaveData(v15);
  }
}


void TerminalPramsManager__PlayerGenderType_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C5413A & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11466/*"SAVEKEY_PlayerGenderType"*/);
    byte_4C5413A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C54190 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54190 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11466/*"SAVEKEY_PlayerGenderType"*/,
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
  il2cpp_array_size_t v29; // x8
  BattleResultComponent_resultData_o *v30; // x9
  struct System_String_o *v31; // x10
  struct System_String_o *eventEndMessage; // x19
  __int128 v33; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x24
  UserServantEntity_o *v35; // x26
  __int64 v36; // x24
  void **p_monitor; // x19
  void *v38; // x25
  void *monitor; // t1
  void *v40; // x27
  int v41; // w9
  int v42; // w8
  UserServantCollectionEntity_o *v43; // x25
  struct DeckData_o *userId; // x21
  int32_t SvtId; // w0
  __int64 v46; // x28
  __int64 v47; // x29
  int32_t v48; // w27
  __int64 v49; // x23
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  bool v54; // w9
  Il2CppObject *Master_object; // x26
  NetworkManager_c *v56; // x0
  __int64 v57; // x28
  __int64 v58; // x29
  int64_t userIdNumber; // x27
  UserServantCollectionEntity_o *v60; // x26
  Il2CppObject *v61; // x0
  __int64 v62; // x26
  __int64 v63; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // x24
  int klass_high; // w8
  int32_t friendshipExceedCount; // w9
  TerminalPramsManager_c *v67; // x0
  CGThumbnailListItem_o *v68; // x0
  BattleResultComponent_resultData_o *v69; // x23
  BattleResultComponent_resultData_o *v70; // x8
  struct System_String_o *v71; // x9
  UserQuestEntity_o *v72; // x23
  int32_t questId; // w19
  TerminalPramsManager_c *v74; // x0
  int32_t QuestPhase; // w24
  TerminalPramsManager_c *v76; // x0
  int32_t v77; // w24
  Il2CppObject *MasterData_object; // x25
  UserQuestEntity_o *v79; // x0
  UserQuestEntity_o *v80; // x26
  int32_t v81; // w25
  bool v82; // w19
  TerminalPramsManager_c *v83; // x0
  const MethodInfo *v84; // x2
  TerminalPramsManager_c *v85; // x0
  System_String_o *ValidMessage; // x0
  const MethodInfo *v87; // x2
  TerminalPramsManager_c *v88; // x8
  TerminalPramsManager_c *v89; // x0
  TerminalPramsManager_c *v90; // x0
  const MethodInfo *v91; // x0
  TerminalPramsManager_c *v92; // x8
  int32_t v93; // w24
  const MethodInfo *v94; // x1
  WarEntity_o *v95; // x25
  BalanceConfig_c *v96; // x0
  TerminalPramsManager_c *v97; // x0
  TerminalPramsManager_c *v98; // x0
  bool v99; // w26
  TerminalPramsManager_c *v100; // x0
  char v101; // w8
  const MethodInfo *v102; // x1
  bool HasFlag; // w0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  CGThumbnailListItem_c *v109; // x24
  TerminalPramsManager_c *v110; // x0
  CGThumbnailListItem_o *p_mResultEventPanelRewardInfos; // x0
  TerminalPramsManager_c *v112; // x0
  CGThumbnailListItem_o *p_eventConquestInfos; // x0
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  CGThumbnailListItem_c *v116; // x24
  TerminalPramsManager_c *v117; // x0
  CGThumbnailListItem_o *v118; // x0
  bool Farm; // w19
  TerminalPramsManager_c *v120; // x0
  char v121; // w19
  int32_t v122; // w24
  WarEntity_o *v123; // x0
  int32_t id; // w19
  TerminalPramsManager_c *v125; // x0
  TerminalPramsManager_c *v126; // x0
  Il2CppObject *v127; // x24
  Il2CppObject *v128; // x25
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  CGThumbnailListItem_c *v133; // x25
  TerminalPramsManager_c *v134; // x0
  CGThumbnailListItem_o *p_OldUserEventPoint_k__BackingField; // x0
  int max_length; // w9
  BattleResultComponent_resultData_array *v137; // x25
  int v138; // w8
  Il2CppClass **v139; // x8
  Il2CppClass *v140; // x26
  int32_t RaidGroupDeadQuestId; // w27
  int v142; // w9
  BattleResultComponent_resultData_array *v143; // x27
  int v144; // w8
  int v145; // w19
  struct TerminalPramsManager_StaticFields *v146; // x8
  int32_t name_high; // w19
  int v148; // w9
  BattleResultComponent_resultData_array *v149; // x25
  int v150; // w8
  BattleResultComponent_resultData_o *v151; // x19
  int32_t RaidDeadQuestId; // w26
  struct TerminalPramsManager_StaticFields *v153; // x8
  TerminalPramsManager_c *v154; // x8
  bool v155; // w19
  TerminalPramsManager_c *v156; // x0
  int32_t v157; // w19
  Il2CppObject *v158; // x24
  int32_t eventId; // w25
  bool v160; // w24
  TerminalPramsManager_c *v161; // x0
  int32_t v162; // w21
  BattleResultComponent_resultData_o *v163; // x8
  int v164; // w9
  int v165; // w11
  __int64 v166; // x26
  int32_t v167; // w19
  TerminalPramsManager_c *v168; // x0
  int32_t bounds_high; // w24
  bool IsUserEventStatus; // w0
  TerminalPramsManager_c *v171; // x0
  TerminalPramsManager_c *v172; // x0
  TerminalPramsManager_c *v173; // x0
  Il2CppObject *v174; // x24
  int32_t v175; // w2
  const MethodInfo *v176; // x3
  TerminalPramsManager_c *v177; // x0
  CGThumbnailListItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  struct BattleResultAddRewardBonus_o *rewardBonus; // x8
  struct BattleResultAddRewardBonus_o *v180; // x8
  int v181; // w8
  __int64 *v182; // x9
  __int64 v183; // x12
  System_String_o **v184; // x9
  System_String_o *v185; // x25
  System_String_o **v186; // x8
  System_String_o *v187; // x22
  int32_t v188; // w27
  System_Collections_Generic_List_object__o *v189; // x27
  TerminalPramsManager___c_c *v190; // x8
  System_Predicate_object__o *_9__724_0; // x24
  System_String_o *v192; // x21
  Il2CppObject *v193; // x25
  struct TerminalPramsManager___c_StaticFields *v194; // x0
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  System_String_o *v197; // x28
  TerminalPramsManager_c *v198; // x0
  TerminalPramsManager_c *v199; // x0
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x27
  System_String_o *v201; // x24
  int32_t v202; // w2
  const MethodInfo *v203; // x3
  TerminalPramsManager_c *v204; // x0
  int32_t v205; // w24
  int32_t PhaseCnt_k__BackingField; // w25
  _BOOL4 IsQuestClear_k__BackingField; // w19
  TerminalPramsManager_c *v208; // x0
  Il2CppObject *v209; // x24
  TerminalPramsManager_c *v210; // x0
  Il2CppObject *v211; // x24
  int v212; // w21
  TerminalPramsManager_c *v213; // x0
  CGThumbnailListItem_o *p_questClearCostumeRelease_k__BackingField; // x0
  int32_t v215; // w2
  const MethodInfo *v216; // x3
  BattleResultComponent_resultData_o *v217; // x8
  CGThumbnailListItem_c *v218; // x24
  TerminalPramsManager_c *v219; // x0
  CGThumbnailListItem_o *v220; // x0
  TerminalPramsManager_c *v221; // x0
  CGThumbnailListItem_o *p_questClearCostumeGet_k__BackingField; // x0
  int32_t v223; // w2
  const MethodInfo *v224; // x3
  CGThumbnailListItem_c *v225; // x24
  TerminalPramsManager_c *v226; // x0
  CGThumbnailListItem_o *v227; // x0
  TerminalPramsManager_c *v228; // x0
  CGThumbnailListItem_o *p_eventPointWinReward_k__BackingField; // x0
  int32_t v230; // w2
  const MethodInfo *v231; // x3
  TerminalPramsManager_c *v232; // x0
  int32_t v233; // w24
  QuestGroupMaster_o *v234; // x25
  int32_t GroupId; // w0
  TerminalPramsManager_c *v236; // x8
  int32_t v237; // w26
  int v238; // w25
  Il2CppObject *v239; // x26
  EventPointEntity_o *v240; // x25
  int32_t v241; // w24
  struct TerminalPramsManager_StaticFields *v242; // x8
  BattleResultComponent_resultData_o *v243; // x8
  struct System_String_o *v244; // x9
  CGThumbnailListItem_c *v245; // x24
  TerminalPramsManager_c *v246; // x0
  CGThumbnailListItem_o *v247; // x0
  int32_t v248; // w19
  TerminalPramsManager_c *v249; // x0
  TerminalPramsManager_c *v250; // x0
  CGThumbnailListItem_o *p_eventRaceBoost_k__BackingField; // x0
  int32_t v252; // w2
  const MethodInfo *v253; // x3
  il2cpp_array_size_t v254; // x8
  BattleResultComponent_resultData_o *v255; // x23
  TerminalPramsManager_c *v256; // x0
  CGThumbnailListItem_o *v257; // x0
  __int64 v258; // x19
  BattleResultComponent_resultData_o *v259; // x9
  struct System_String_o *v260; // x10
  struct System_String_o *v261; // x23
  TerminalPramsManager_c *v262; // x0
  CGThumbnailListItem_o *p_eventTowerReward_k__BackingField; // x0
  int32_t v264; // w2
  const MethodInfo *v265; // x3
  CGThumbnailListItem_c *v266; // x23
  TerminalPramsManager_c *v267; // x0
  CGThumbnailListItem_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  CGThumbnailListItem_c *v269; // x23
  TerminalPramsManager_c *v270; // x0
  CGThumbnailListItem_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  CGThumbnailListItem_c *v272; // x23
  TerminalPramsManager_c *v273; // x0
  CGThumbnailListItem_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  CGThumbnailListItem_c *v275; // x23
  TerminalPramsManager_c *v276; // x0
  CGThumbnailListItem_o *p_warClearReward_k__BackingField; // x0
  TerminalPramsManager_c *v278; // x0
  struct TerminalPramsManager_StaticFields *v279; // x0
  int32_t v280; // w2
  const MethodInfo *v281; // x3
  TerminalPramsManager_c *v282; // x0
  struct TerminalPramsManager_StaticFields *v283; // x0
  Il2CppObject *Instance; // x23
  int32_t WarID_ByQuestID; // w23
  WarEntity_o *WarEntityByWarID; // x0
  int32_t v287; // w23
  int32_t v288; // w2
  const MethodInfo *v289; // x3
  il2cpp_array_size_t v290; // x8
  BattleResultComponent_resultData_o *v291; // x22
  TerminalPramsManager_c *v292; // x0
  struct TerminalPramsManager_StaticFields *v293; // x0
  CGThumbnailListItem_o *p_oldPersonalBoss_k__BackingField; // x0
  TerminalPramsManager_c *v295; // x0
  struct TerminalPramsManager_StaticFields *v296; // x0
  struct EventTowerReward_array *eventTowerReward; // x8
  bool v298; // w19
  BalanceConfig_c *v299; // x8
  int32_t v300; // w19
  TerminalPramsManager_c *v301; // x0
  TerminalPramsManager_c *v302; // x0
  BalanceConfig_c *v303; // x8
  int32_t v304; // w19
  TerminalPramsManager_c *v305; // x0
  BalanceConfig_c *v306; // x8
  int32_t v307; // w19
  TerminalPramsManager_c *v308; // x0
  BalanceConfig_c *v309; // x8
  int32_t v310; // w19
  Il2CppObject *v311; // x22
  struct DeckData_o *v312; // x21
  int32_t v313; // w2
  const MethodInfo *v314; // x3
  UserSuperBossEntity_o *v315; // x22
  BattleResultComponent_resultData_array *v316; // x21
  int32_t v317; // w2
  const MethodInfo *v318; // x3
  TerminalPramsManager_c *v319; // x0
  struct TerminalPramsManager_StaticFields *v320; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v322; // x21
  Il2CppObject *v323; // x22
  int32_t ScriptQuestId; // w22
  Il2CppObject *v325; // x23
  TerminalPramsManager_c *v326; // x0
  int32_t v327; // w26
  int32_t winResult; // w24
  int32_t v329; // w2
  const MethodInfo *v330; // x3
  Il2CppObject *v331; // x23
  TerminalPramsManager_c *v332; // x0
  int32_t v333; // w19
  int32_t v334; // w21
  TerminalPramsManager_c *v335; // x0
  int32_t v336; // w1
  CGThumbnailListItem_o *p_lastPlayBgmName; // x0
  const MethodInfo *v338; // x0
  Il2CppObject *v339; // x21
  int32_t v340; // w22
  int32_t v341; // w2
  const MethodInfo *v342; // x3
  TerminalPramsManager_c *v343; // x0
  il2cpp_array_size_t *v344; // x0
  int32_t v345; // w22
  TerminalPramsManager_c *v346; // x0
  int32_t v347; // w23
  int32_t v348; // w2
  const MethodInfo *v349; // x3
  SpecifiedSceneInfo_o *SpecifiedSceneInfo; // x22
  TerminalPramsManager_c *v351; // x0
  struct TerminalPramsManager_StaticFields *v352; // x0
  const MethodInfo *v353; // x0
  int32_t v354; // w2
  const MethodInfo *v355; // x3
  int32_t v356; // w19
  TerminalPramsManager_c *v357; // x0
  CGThumbnailListItem_o *p_eventHarvestGrowthInfo; // x0
  TerminalPramsManager_c *v359; // x0
  BattleResultComponent_resultData_array *v360; // x22
  int32_t ScriptIntParam; // w24
  int32_t v362; // w0
  int32_t v363; // w25
  __int64 v364; // x23
  int32_t v365; // w2
  const MethodInfo *v366; // x3
  Il2CppArrayBounds *bounds; // d0
  TerminalPramsManager_c *v368; // x0
  CGThumbnailListItem_o *v369; // x0
  Il2CppObject *v370; // x22
  QuestEntity_o *QuestEntity; // x0
  QuestEntity_o *v372; // x22
  TerminalPramsManager_c *v373; // x0
  int32_t SpotId; // w21
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v376; // x21
  TerminalPramsManager_c *v377; // x0
  struct EventAreaImproveResultInfo_o *eventAreaImproveResultInfo; // x8
  TerminalPramsManager_c *v379; // x0
  int32_t v380; // w2
  const MethodInfo *v381; // x3
  TerminalPramsManager_c *v382; // x0
  System_String_o *v383; // x21
  TerminalPramsManager_c *v384; // x0
  System_String_o *v385; // x0
  int32_t v386; // w2
  const MethodInfo *v387; // x3
  System_String_o *v388; // x21
  TerminalPramsManager_c *v389; // x0
  CGThumbnailListItem_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  CGThumbnailListItem_c *v391; // x21
  TerminalPramsManager_c *v392; // x0
  CGThumbnailListItem_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v394; // x21
  TerminalPramsManager_c *v395; // x0
  int32_t v396; // w2
  const MethodInfo *v397; // x3
  int32_t v398; // w2
  const MethodInfo *v399; // x3
  int32_t v400; // w1
  TerminalPramsManager_c *v401; // x0
  int32_t v402; // w2
  const MethodInfo *v403; // x3
  int32_t v404; // w2
  const MethodInfo *v405; // x3
  int32_t v406; // w1
  TerminalPramsManager_c *v407; // x0
  int32_t v408; // w2
  const MethodInfo *v409; // x3
  int32_t v410; // w2
  const MethodInfo *v411; // x3
  int32_t v412; // w1
  TerminalPramsManager_c *v413; // x0
  int32_t v414; // w2
  const MethodInfo *v415; // x3
  System_String_o *v416; // x0
  const MethodInfo *v417; // x1
  const MethodInfo *v418; // x0
  const MethodInfo *v419; // x0
  const MethodInfo *v420; // x0
  const MethodInfo *v421; // x0
  const MethodInfo *v422; // x0
  TerminalPramsManager_c *v423; // x0
  int32_t v424; // w19
  const MethodInfo *v425; // x0
  TerminalPramsManager_c *v426; // x0
  __int64 v427; // x0
  System_String_o *v428; // [xsp+8h] [xbp-138h]
  bool v429; // [xsp+14h] [xbp-12Ch]
  BattleResultComponent_resultData_array *resulta; // [xsp+18h] [xbp-128h]
  il2cpp_array_size_t *p_max_length; // [xsp+20h] [xbp-120h]
  BattleResultComponent_resultData_array **m_Items; // [xsp+28h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v433; // [xsp+30h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v434; // [xsp+50h] [xbp-F0h]
  __int128 v435; // [xsp+70h] [xbp-D0h]
  _BYTE v436[4]; // [xsp+8Ch] [xbp-B4h] BYREF
  UserSuperBossEntity_o *v437; // [xsp+90h] [xbp-B0h] BYREF
  Il2CppObject *v438; // [xsp+98h] [xbp-A8h] BYREF
  Il2CppObject *v439; // [xsp+A0h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *v440; // [xsp+A8h] [xbp-98h] BYREF
  int32_t QuestId_k__BackingField; // [xsp+B4h] [xbp-8Ch] BYREF
  Il2CppObject *v442; // [xsp+B8h] [xbp-88h] BYREF
  Il2CppObject *v443; // [xsp+C0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+C8h] [xbp-78h] BYREF
  int v445; // [xsp+D4h] [xbp-6Ch] BYREF
  QuestPhaseEntity_o *v446; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v447; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v448; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v449; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v450; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v451; // 0:x0.16

  v4 = result;
  if ( (byte_4C5414F & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventPointMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestMessageMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserSuperBossMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C3E564(&EventHarvestGrowthInfo_TypeInfo);
    sub_1C3E564(&EventSaveData_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_1C3E564(&MyRoomParamsManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_1C3E564(&QuestClearHeroineInfo_TypeInfo);
    sub_1C3E564(&ScriptManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C3E564(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C3E564(&Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__724_0__);
    sub_1C3E564(&TerminalPramsManager___c_TypeInfo);
    sub_1C3E564(&UserServantCollectionEntity___TypeInfo);
    sub_1C3E564(&UserServantCollectionEntity_TypeInfo);
    sub_1C3E564(&UserServantEntity_TypeInfo);
    sub_1C3E564(&UserSuperBossEntity___TypeInfo);
    sub_1C3E564(&StringLiteral_19954/*"harvestGrowthAfterQuestId"*/);
    sub_1C3E564(&StringLiteral_16728/*"afterActionBk"*/);
    sub_1C3E564(&StringLiteral_811/*","*/);
    sub_1C3E564(&StringLiteral_19955/*"harvestGrowthBeforeQuestId"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_6641/*"False"*/);
    result = (BattleResultComponent_resultData_array *)sub_1C3E564(&StringLiteral_1122/*"0"*/);
    byte_4C5414F = 1;
  }
  v446 = 0;
  v445 = 0;
  v443 = 0;
  entity = 0;
  v442 = 0;
  QuestId_k__BackingField = 0;
  v439 = 0;
  v440 = 0;
  v437 = 0;
  v438 = 0;
  v436[0] = 0;
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
  v7 = (_DWORD *)sub_1C3E60C(UserServantCollectionEntity___TypeInfo, LODWORD(oldUserSvtCollection->max_length));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !LODWORD(v4->max_length) )
    goto LABEL_1212;
  p_max_length = &v4->max_length;
  if ( !*m_Items )
    goto LABEL_1211;
  v10 = (*m_Items)->m_Items[11];
  v429 = isWin;
  resulta = v4;
  v445 = 0;
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
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
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
      *(_QWORD *)&v447.fields.currentCryptoKey = v16;
      *(_QWORD *)&v447.fields.fakeValue = v15;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
                                                           v447,
                                                           0);
      if ( !v12 )
        goto LABEL_1211;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v12, (int64_t)myDeck, (int32_t)result, 0);
      v19 = (UserServantCollectionEntity_o *)sub_1C3E7B0(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor_43183148(v19, EntityDefinitely, 0);
      if ( !v7 )
        goto LABEL_1211;
      if ( v19 )
      {
        result = (BattleResultComponent_resultData_array *)sub_1C3E6A0(v19, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !result )
          goto LABEL_1213;
      }
      if ( v13 >= v7[6] )
        break;
      v22 = &v7[2 * v13];
      *((_QWORD *)v22 + 4) = v19;
      v23 = (CGThumbnailListItem_o *)(v22 + 8);
      sub_1C3E508(v23, (int32_t)v19, v20, v21);
      if ( v13 >= v7[6] )
        break;
      klass = v23->klass;
      *(_OWORD *)&v434.fields.currentCryptoKey = *(_OWORD *)(v14 + 84);
      if ( !klass )
        goto LABEL_1211;
      *(_OWORD *)((char *)&klass->_1.declaringType + 4) = *(_OWORD *)&v434.fields.currentCryptoKey;
      if ( v13 >= v7[6] )
        break;
      v25 = v23->klass;
      v435 = *(_OWORD *)(v14 + 100);
      if ( !v25 )
        goto LABEL_1211;
      *(_OWORD *)((char *)&v25->_1.generic_class + 4) = v435;
      if ( v13 >= v7[6] )
        break;
      if ( !v23->klass )
        goto LABEL_1211;
      ++v13;
      HIDWORD(v23->klass->_1.interopData) = *(_DWORD *)(v14 + 116);
      v445 = v13;
      eventEndTitle = (int)v10->fields.eventEndTitle;
      if ( (int)v13 >= eventEndTitle )
        goto LABEL_36;
    }
LABEL_1212:
    sub_1C3E7C8(result, isWin);
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
  sub_1C3E508(p_mQuestClearHeroineInfo, 0, v8, v9);
  v29 = *p_max_length;
  if ( !(unsigned int)*p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v30 = (*m_Items)->m_Items[5];
  if ( v30 )
  {
    v31 = v30->fields.eventEndTitle;
    if ( v31 )
    {
      if ( !(_DWORD)v31 )
        goto LABEL_1212;
      eventEndMessage = v30->fields.eventEndMessage;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !eventEndMessage )
        goto LABEL_1211;
      v33 = *(_OWORD *)&eventEndMessage[1].monitor;
      v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)result;
      *(_OWORD *)&v434.fields.currentCryptoKey = *(_OWORD *)&eventEndMessage->fields._stringLength;
      *(_OWORD *)&v434.fields.fakeValue = v33;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v433 = v434;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(
                                                           &v433,
                                                           0);
      if ( !v34 )
        goto LABEL_1211;
      v35 = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                     v34,
                                     (int64_t)result,
                                     (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v36 = sub_1C3E7B0(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_43210756((UserServantEntity_o *)v36, v35, 0);
      v435 = *(_OWORD *)&eventEndMessage[4].klass;
      if ( !v36 )
        goto LABEL_1211;
      *(_OWORD *)(v36 + 96) = v435;
      *(_DWORD *)(v36 + 256) = eventEndMessage[10].fields._stringLength;
      *(_QWORD *)(v36 + 292) = *(System_String_c **)((char *)&eventEndMessage[12].klass + 4);
      monitor = eventEndMessage[5].monitor;
      p_monitor = &eventEndMessage[5].monitor;
      v38 = monitor;
      v40 = p_monitor[1];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v448.fields.currentCryptoKey = v38;
      *(_QWORD *)&v448.fields.fakeValue = v40;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
                                                           v448,
                                                           0);
      if ( (int)result >= 1 )
        *(_OWORD *)(v36 + 128) = *(_OWORD *)p_monitor;
      v445 = 0;
      if ( !v7 )
        goto LABEL_1211;
      v41 = v7[6];
      if ( v41 >= 1 )
      {
        v42 = 0;
        while ( v42 < (unsigned int)v41 )
        {
          v43 = *(UserServantCollectionEntity_o **)&v7[2 * v42 + 8];
          if ( !v43 )
            goto LABEL_1211;
          userId = (struct DeckData_o *)v43->fields.userId;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C50AE2 )
          {
            sub_1C3E564(&NetworkManager_TypeInfo);
            byte_4C50AE2 = 1;
          }
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          }
          if ( userId == result->m_Items[19]->fields.myDeck )
          {
            SvtId = UserServantCollectionEntity__getSvtId(v43, 0);
            v47 = *(_QWORD *)(v36 + 80);
            v46 = *(_QWORD *)(v36 + 88);
            v48 = SvtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v449.fields.currentCryptoKey = v47;
            *(_QWORD *)&v449.fields.fakeValue = v46;
            result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
                                                                 v449,
                                                                 0);
            if ( v48 == (_DWORD)result )
              goto LABEL_70;
          }
          v42 = v445 + 1;
          v445 = v42;
          v41 = v7[6];
          if ( v42 >= v41 )
            goto LABEL_69;
        }
        goto LABEL_1212;
      }
LABEL_69:
      v43 = 0;
LABEL_70:
      v49 = sub_1C3E7B0(QuestClearHeroineInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v49, 0);
      if ( !v49 )
        goto LABEL_1211;
      *(_QWORD *)(v49 + 16) = v36;
      sub_1C3E508((CGThumbnailListItem_o *)(v49 + 16), v36, v50, v51);
      result = (BattleResultComponent_resultData_array *)UserServantEntity__getLimitCount((UserServantEntity_o *)v36, 0);
      if ( !v35 )
        goto LABEL_1211;
      v54 = (_DWORD)result != UserServantEntity__getLimitCount(v35, 0);
      *(_BYTE *)(v49 + 25) = 0;
      *(_DWORD *)(v49 + 28) = 0;
      *(_DWORD *)(v49 + 32) = 0;
      *(_BYTE *)(v49 + 40) = 0;
      *(_DWORD *)(v49 + 36) = -1;
      *(_BYTE *)(v49 + 24) = v54;
      v27 = p_max_length;
      *(_BYTE *)(v49 + 41) = *(_DWORD *)(v36 + 296) != v35->fields.exceedCount;
      if ( v43 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C50AE2 )
        {
          sub_1C3E564(&NetworkManager_TypeInfo);
          byte_4C50AE2 = 1;
        }
        v56 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v56 = NetworkManager_TypeInfo;
        }
        v58 = *(_QWORD *)(v36 + 80);
        v57 = *(_QWORD *)(v36 + 88);
        userIdNumber = v56->static_fields->userIdNumber;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v450.fields.currentCryptoKey = v58;
        *(_QWORD *)&v450.fields.fakeValue = v57;
        result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
                                                             v450,
                                                             0);
        if ( !Master_object )
          goto LABEL_1211;
        v60 = UserServantCollectionMaster__GetEntityDefinitely(
                (UserServantCollectionMaster_o *)Master_object,
                userIdNumber,
                (int32_t)result,
                0);
        result = (BattleResultComponent_resultData_array *)UserServantCollectionEntity__getFriendShipRank(v43, 0);
        if ( !v60 )
          goto LABEL_1211;
        if ( (_DWORD)result != UserServantCollectionEntity__getFriendShipRank(v60, 0) )
          *(_DWORD *)(v49 + 36) = UserServantCollectionEntity__getFriendShipRank(v43, 0);
        v27 = p_max_length;
        if ( v43->fields.friendshipExceedCount != v60->fields.friendshipExceedCount )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v61 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
          v63 = *(_QWORD *)(v36 + 80);
          v62 = *(_QWORD *)(v36 + 88);
          v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)v61;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v451.fields.currentCryptoKey = v63;
          *(_QWORD *)&v451.fields.fakeValue = v62;
          result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
                                                               v451,
                                                               0);
          if ( !v64 )
            goto LABEL_1211;
          result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                               v64,
                                                               &entity,
                                                               (int32_t)result,
                                                               (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
          v27 = p_max_length;
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_1211;
            klass_high = HIDWORD(entity[6].klass);
            friendshipExceedCount = v43->fields.friendshipExceedCount;
            *(_BYTE *)(v49 + 40) = 1;
            *(_DWORD *)(v49 + 36) = friendshipExceedCount + klass_high;
          }
        }
      }
      v67 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v67 = TerminalPramsManager_TypeInfo;
      }
      v68 = (CGThumbnailListItem_o *)&v67->static_fields->mQuestClearHeroineInfo;
      v68->klass = (CGThumbnailListItem_c *)v49;
      sub_1C3E508(v68, v49, v52, v53);
      v29 = *v27;
    }
  }
  if ( !(_DWORD)v29 )
    goto LABEL_1212;
  v69 = (BattleResultComponent_resultData_o *)*m_Items;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetBattleResultCampaignBonus(v69, (const MethodInfo *)isWin);
  if ( !*(_DWORD *)v27 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v70 = (*m_Items)->m_Items[9];
  if ( v70 && (v71 = v70->fields.eventEndTitle) != 0 )
  {
    if ( !(_DWORD)v71 )
      goto LABEL_1212;
    v72 = (UserQuestEntity_o *)v70->fields.eventEndMessage;
  }
  else
  {
    v72 = 0;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C538EB )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C538EB = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE6(result->m_Items[19]->fields.oldUserGame) = v72 != 0;
  if ( !byte_4C538EA )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4C538EA = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE5(result->m_Items[19]->fields.oldUserGame) = 0;
  if ( !byte_4C53A4B )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4C53A4B = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE1(result->m_Items[19]->fields.resultDamageRewardInfos) = 0;
  if ( !byte_4C538E9 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4C538E9 = 1;
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
    if ( !byte_4C50D67 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C50D67 = 1;
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
        goto LABEL_1211;
    }
    else
    {
      if ( !v72 )
        goto LABEL_1211;
      questId = v72->fields.questId;
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4C53631 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53631 = 1;
      }
      v74 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v74 = TerminalPramsManager_TypeInfo;
      }
      v74->static_fields->_QuestId_k__BackingField = questId;
      QuestPhase = UserQuestEntity__getQuestPhase(v72, 0);
      if ( !byte_4C53635 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53635 = 1;
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
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)result,
                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C50AE2 )
    {
      sub_1C3E564(&NetworkManager_TypeInfo);
      byte_4C50AE2 = 1;
    }
    result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_1211;
    v79 = UserQuestMaster__GetEntity(
            (UserQuestMaster_o *)MasterData_object,
            (int64_t)result->m_Items[19]->fields.myDeck,
            v77,
            0);
    if ( v79 )
    {
      v80 = v79;
      v81 = UserQuestEntity__getQuestPhase(v79, 0);
      if ( UserQuestEntity__getClearNum(v72, 0) || UserQuestEntity__getClearNum(v80, 0) != 1 )
        v82 = UserQuestEntity__IsResetStatus(v72, 0) && !UserQuestEntity__IsResetStatus(v80, 0);
      else
        v82 = 1;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C538EA )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C538EA = 1;
      }
      v83 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v83 = TerminalPramsManager_TypeInfo;
      }
      v83->static_fields->_IsQuestClear_k__BackingField = v82;
      if ( !byte_4C54184 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        v83 = TerminalPramsManager_TypeInfo;
        byte_4C54184 = 1;
      }
      if ( !v83->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v83);
        v83 = TerminalPramsManager_TypeInfo;
      }
      v83->static_fields->_EventUIEffectClearQuestId_k__BackingField = v77;
      if ( !byte_4C54181 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        v83 = TerminalPramsManager_TypeInfo;
        byte_4C54181 = 1;
      }
      if ( !v83->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v83);
        v83 = TerminalPramsManager_TypeInfo;
      }
      v83->static_fields->_MapModelClearQuestId_k__BackingField = v77;
      if ( !byte_4C54182 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        v83 = TerminalPramsManager_TypeInfo;
        byte_4C54182 = 1;
      }
      if ( !v83->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v83);
        v83 = TerminalPramsManager_TypeInfo;
      }
      v83->static_fields->_MapModelClearPhaseCount_k__BackingField = v81;
      TerminalPramsManager__MapModelClearQuestInfo_SaveData((const MethodInfo *)v83);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      AdManager__TrackEvent((AdManager_o *)result, 4, 1, v77, v81, 0, 0);
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
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
    if ( !result )
      goto LABEL_1211;
    ValidMessage = QuestMessageMaster__GetValidMessage((QuestMessageMaster_o *)result, v77, v81, 3, 0);
    v88 = TerminalPramsManager_TypeInfo;
    if ( ValidMessage )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C529F8 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C529F8 = 1;
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
    if ( !byte_4C54192 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C54192 = 1;
    }
    v89 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v89 = TerminalPramsManager_TypeInfo;
    }
    if ( v89->static_fields->_QuestReleaseFocusQuestId_k__BackingField >= 1 )
    {
      if ( !v89->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v89);
      if ( !byte_4C54192 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C54192 = 1;
      }
      v90 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v90 = TerminalPramsManager_TypeInfo;
      }
      TerminalPramsManager__SetQuestReleasedFocusState(
        v90->static_fields->_QuestReleaseFocusQuestId_k__BackingField,
        1,
        v87);
      TerminalPramsManager__SaveQuestReleasedFocusState(v91);
      if ( !byte_4C53D78 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53D78 = 1;
      }
      v89 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v89 = TerminalPramsManager_TypeInfo;
      }
      v89->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
    }
    if ( !v89->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v89);
    if ( !byte_4C53F5A )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53F5A = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(result->m_Items[19]->fields.eventPointWinReward) = v77;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4C538EC )
  {
    result = (BattleResultComponent_resultData_array *)sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C538EC = 1;
  }
  v92 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v92 = TerminalPramsManager_TypeInfo;
  }
  if ( v92->static_fields->_IsQuestClear_k__BackingField )
  {
    if ( !v72 )
      goto LABEL_1211;
    v93 = v72->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !result )
      goto LABEL_1211;
    v95 = WarMaster__getByLastQuestId((WarMaster_o *)result, v93, 0);
    if ( v95 )
    {
      v96 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v96 = BalanceConfig_TypeInfo;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v96->static_fields->MainInterludeMapReturnWarIds,
             v95->fields.id,
             (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C538ED )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C538ED = 1;
        }
        v97 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v97 = TerminalPramsManager_TypeInfo;
        }
        v95 = 0;
        v97->static_fields->_IsWarClear_k__BackingField = 0;
      }
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C538ED )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C538ED = 1;
    }
    v98 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v98 = TerminalPramsManager_TypeInfo;
    }
    v98->static_fields->_IsWarClear_k__BackingField = v95 != 0;
    v99 = TerminalPramsManager__CheckIsOrdealCallWarClear(v95, v94);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v99 )
    {
      if ( !byte_4C538EE )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C538EE = 1;
      }
      v100 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v100 = TerminalPramsManager_TypeInfo;
      }
      v101 = 1;
    }
    else
    {
      if ( !byte_4C538EE )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C538EE = 1;
      }
      v100 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v100 = TerminalPramsManager_TypeInfo;
      }
      v101 = 0;
    }
    v100->static_fields->_IsOrdealCallWarClear_k__BackingField = v101;
    if ( !v100->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v100);
    if ( !byte_4C538EF )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C538EF = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE3(result->m_Items[19]->fields.oldUserEvent) )
    {
      if ( !v95 )
        goto LABEL_1211;
      if ( !WarEntity__IsEvent(v95, 0) )
      {
        result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( !result )
          goto LABEL_1211;
        AdManager__TrackEvent((AdManager_o *)result, 6, 1, v95->fields.id, -1, 0, 0);
      }
    }
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    AdManager__TrackEvent((AdManager_o *)result, 5, 1, v93, -1, 0, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SendOpenedQuestIdToAdManager(v93, v102);
    if ( !byte_4C538EF )
    {
      result = (BattleResultComponent_resultData_array *)sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C538EF = 1;
    }
    v92 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v92 = TerminalPramsManager_TypeInfo;
    }
    if ( v92->static_fields->_IsWarClear_k__BackingField )
    {
      if ( !v95 )
        goto LABEL_1211;
      HasFlag = WarEntity__HasFlag(v95, 128, 0);
      v92 = TerminalPramsManager_TypeInfo;
      if ( HasFlag )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C53A4A )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C53A4A = 1;
        }
        v92 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v92 = TerminalPramsManager_TypeInfo;
        }
        v92->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
        if ( !byte_4C53A4B )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          v92 = TerminalPramsManager_TypeInfo;
          byte_4C53A4B = 1;
        }
        if ( !v92->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v92);
          v92 = TerminalPramsManager_TypeInfo;
        }
        v92->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
      }
    }
  }
  if ( !v92->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v92);
  TerminalPramsManager__SetQuestRewardInfo(resulta, (const MethodInfo *)isWin);
  if ( !LODWORD(resulta->max_length) )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->panelEventPoint = HIDWORD((*m_Items)->m_Items[2]);
  static_fields->mResultEventPanelRewardInfos = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->mResultEventPanelRewardInfos, 0, v104, v105);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v109 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[19];
  if ( v109 && v109->_1.namespaze )
  {
    v110 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v110 = TerminalPramsManager_TypeInfo;
    }
    p_mResultEventPanelRewardInfos = (CGThumbnailListItem_o *)&v110->static_fields->mResultEventPanelRewardInfos;
    p_mResultEventPanelRewardInfos->klass = v109;
    sub_1C3E508(p_mResultEventPanelRewardInfos, (int32_t)v109, v107, v108);
  }
  v112 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v112 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = (CGThumbnailListItem_o *)&v112->static_fields->eventConquestInfos;
  p_eventConquestInfos->klass = 0;
  sub_1C3E508(p_eventConquestInfos, 0, v107, v108);
  TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items || !result )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v443,
                                                       HIDWORD((*m_Items)->bounds),
                                                       (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v116 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[44];
  if ( v116 && v116->_1.namespaze )
  {
    v117 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v117 = TerminalPramsManager_TypeInfo;
    }
    v118 = (CGThumbnailListItem_o *)&v117->static_fields->eventConquestInfos;
    v118->klass = v116;
    sub_1C3E508(v118, (int32_t)v116, v114, v115);
    if ( v443 )
      Farm = EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v443, 0);
    else
      Farm = 0;
    v120 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v120 = TerminalPramsManager_TypeInfo;
    }
    v120->static_fields->eventConquestInfoDisp = !Farm;
  }
  result = (BattleResultComponent_resultData_array *)v443;
  if ( v443 )
  {
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v443, 0);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C538EC )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C538EC = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
      {
        v121 = 1;
      }
      else
      {
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_4C538E9 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C538E9 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        v121 = BYTE6(result->m_Items[19]->fields.oldUserGame);
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      BYTE1(result->m_Items[19][1].fields.eventPointWinReward) = v121;
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
    if ( !byte_4C53E5B )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53E5B = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(result->m_Items[19]->fields.resultUseRewardAddItemRewardInfos) = 1;
    if ( !byte_4C538EC )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4C538EC = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      if ( !v72 )
        goto LABEL_1211;
      v122 = v72->fields.questId;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !result )
        goto LABEL_1211;
      v123 = WarMaster__getByLastQuestId((WarMaster_o *)result, v122, 0);
      if ( v123 )
      {
        id = v123->fields.id;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C53E5C )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C53E5C = 1;
        }
        v125 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v125 = TerminalPramsManager_TypeInfo;
        }
        v125->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = id;
      }
    }
  }
  v126 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v126 = TerminalPramsManager_TypeInfo;
  }
  *(_QWORD *)&v126->static_fields->clearLastBattleRaidId = -1;
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  v127 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  v128 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items || !v128 )
    goto LABEL_1211;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v128,
          &v442,
          HIDWORD((*m_Items)->bounds),
          (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_631;
  result = (BattleResultComponent_resultData_array *)v442;
  if ( !v442 )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPoint((EventDetailEntity_o *)v442, 0);
  v133 = 0;
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !*(_DWORD *)p_max_length )
      goto LABEL_1212;
    if ( !*m_Items )
      goto LABEL_1211;
    v133 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[10];
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C54193 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54193 = 1;
  }
  v134 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v134 = TerminalPramsManager_TypeInfo;
  }
  p_OldUserEventPoint_k__BackingField = (CGThumbnailListItem_o *)&v134->static_fields->_OldUserEventPoint_k__BackingField;
  p_OldUserEventPoint_k__BackingField->klass = v133;
  sub_1C3E508(p_OldUserEventPoint_k__BackingField, (int32_t)v133, v131, v132);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items || !v127 )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidGorupMax(
                                                       (EventRaidMaster_o *)v127,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0);
  if ( (int)result >= 1 )
  {
    if ( !*(_DWORD *)p_max_length )
      goto LABEL_1212;
    if ( !*m_Items )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                         (EventRaidMaster_o *)v127,
                                                         HIDWORD((*m_Items)->bounds),
                                                         0);
    v445 = 0;
    if ( !result )
      goto LABEL_1211;
    max_length = result->max_length;
    v137 = result;
    if ( max_length < 1 )
      goto LABEL_631;
    v138 = 0;
    while ( 1 )
    {
      if ( v138 >= (unsigned int)max_length )
        goto LABEL_1212;
      v139 = &v137->obj.klass + v138;
      v140 = v139[4];
      if ( !v140 )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)EventRaidEntity__IsJumbleSingleRaid(
                                                           (EventRaidEntity_o *)v139[4],
                                                           0);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !*(_DWORD *)p_max_length )
          goto LABEL_1212;
        if ( !*m_Items )
          goto LABEL_1211;
        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                 (EventRaidMaster_o *)v127,
                                 HIDWORD((*m_Items)->bounds),
                                 (int32_t)v140->_1.namespaze,
                                 0);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C50D67 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C50D67 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( RaidGroupDeadQuestId == result->m_Items[19]->fields.eventId )
        {
          result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
                                                           (EventRaidMaster_o *)v127,
                                                           HIDWORD((*m_Items)->bounds),
                                                           HIDWORD(v140->_1.name),
                                                           0);
      QuestId_k__BackingField = 0;
      if ( !result )
        goto LABEL_1211;
      v142 = result->max_length;
      v143 = result;
      if ( v142 >= 1 )
      {
        v144 = 0;
        while ( 1 )
        {
          if ( v144 >= (unsigned int)v142 )
            goto LABEL_1212;
          v145 = *((_DWORD *)v143->m_Items + v144);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C50D67 )
          {
            sub_1C3E564(&TerminalPramsManager_TypeInfo);
            byte_4C50D67 = 1;
          }
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          }
          v146 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
          if ( v145 == v146->_QuestId_k__BackingField )
            break;
          v144 = QuestId_k__BackingField + 1;
          QuestId_k__BackingField = v144;
          v142 = v143->max_length;
          if ( v144 >= v142 )
            goto LABEL_431;
        }
        name_high = HIDWORD(v140->_1.name);
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          v146 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v146->clearBattleRaidId = name_high;
      }
LABEL_431:
      v138 = v445 + 1;
      v445 = v138;
      max_length = v137->max_length;
      if ( v138 >= max_length )
        goto LABEL_631;
    }
    v156 = TerminalPramsManager_TypeInfo;
    v157 = HIDWORD(v140->_1.name);
    goto LABEL_501;
  }
  result = (BattleResultComponent_resultData_array *)v442;
  if ( !v442 )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__isRaidDefeatCount(
                                                       (EventDetailEntity_o *)v442,
                                                       0);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_array *)v442;
    if ( !v442 )
      goto LABEL_1211;
    if ( !EventDetailEntity__IsEventActivityPoint((EventDetailEntity_o *)v442, 0) )
      goto LABEL_461;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventUiMaster___);
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
      v167 = (int32_t)(*m_Items)->m_Items[43];
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C51504 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C51504 = 1;
      }
      v168 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v168 = TerminalPramsManager_TypeInfo;
      }
      v168->static_fields->_EventActivityPointEffectState_k__BackingField = v167;
    }
    else
    {
LABEL_461:
      result = (BattleResultComponent_resultData_array *)v442;
      if ( !v442 )
        goto LABEL_1211;
      if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v442, 0) )
      {
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C54194 )
        {
          result = (BattleResultComponent_resultData_array *)sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C54194 = 1;
        }
        v154 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v154 = TerminalPramsManager_TypeInfo;
        }
        if ( v154->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField )
        {
          v155 = 0;
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
          v154 = TerminalPramsManager_TypeInfo;
          v155 = IsUserEventStatus;
        }
        if ( !v154->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v154);
        if ( !byte_4C53F62 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C53F62 = 1;
        }
        v171 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v171 = TerminalPramsManager_TypeInfo;
        }
        v171->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = v155;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)v442;
        if ( !v442 )
          goto LABEL_1211;
        if ( !EventDetailEntity__IsEventHappiness((EventDetailEntity_o *)v442, 0) )
          goto LABEL_504;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v158 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C50D67 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C50D67 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        eventId = result->m_Items[19]->fields.eventId;
        if ( !byte_4C50D66 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          byte_4C50D66 = 1;
        }
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( !v158 )
          goto LABEL_1211;
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)v158,
               &v440,
               eventId,
               LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
               0) )
        {
          result = (BattleResultComponent_resultData_array *)v440;
          if ( !v440 )
            goto LABEL_1211;
          v160 = QuestPhaseEntity__PlayHappinessCounterEffect(v440, 0);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C53D53 )
          {
            sub_1C3E564(&TerminalPramsManager_TypeInfo);
            byte_4C53D53 = 1;
          }
          v161 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v161 = TerminalPramsManager_TypeInfo;
          }
          v161->static_fields->_PlayHappinessCounterEffect_k__BackingField = v160;
        }
        else
        {
LABEL_504:
          result = (BattleResultComponent_resultData_array *)v442;
          if ( !v442 )
            goto LABEL_1211;
          result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPanel(
                                                               (EventDetailEntity_o *)v442,
                                                               0);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !*(_DWORD *)p_max_length )
              goto LABEL_1212;
            if ( !*m_Items )
              goto LABEL_1211;
            v163 = (*m_Items)->m_Items[10];
            v445 = 0;
            if ( !v163 )
              goto LABEL_1211;
            v164 = (int)v163->fields.eventEndTitle;
            if ( v164 >= 1 )
            {
              v165 = 0;
              while ( 1 )
              {
                if ( v164 == v165 )
                  goto LABEL_1212;
                if ( !v442 )
                  goto LABEL_1211;
                v166 = *((_QWORD *)&v163->fields.eventEndMessage + v165);
                if ( !v166 )
                  goto LABEL_1211;
                if ( LODWORD(v442[1].klass) == *(_DWORD *)(v166 + 24) )
                  break;
                v445 = ++v165;
                if ( v164 == v165 )
                  goto LABEL_612;
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4C53758 )
              {
                sub_1C3E564(&TerminalPramsManager_TypeInfo);
                byte_4C53758 = 1;
              }
              v173 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v173 = TerminalPramsManager_TypeInfo;
              }
              if ( !v173->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
              {
                v174 = (Il2CppObject *)sub_1C3E7B0(EventSaveData_TypeInfo);
                System_Object___ctor(v174, 0);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4C53759 )
                {
                  sub_1C3E564(&TerminalPramsManager_TypeInfo);
                  byte_4C53759 = 1;
                }
                v177 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v177 = TerminalPramsManager_TypeInfo;
                }
                p_BeforeEventSubmarineSaveData_k__BackingField = (CGThumbnailListItem_o *)&v177->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
                p_BeforeEventSubmarineSaveData_k__BackingField->klass = (CGThumbnailListItem_c *)v174;
                sub_1C3E508(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v174, v175, v176);
                v173 = TerminalPramsManager_TypeInfo;
              }
              if ( !v173->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v173);
              if ( !byte_4C53758 )
              {
                sub_1C3E564(&TerminalPramsManager_TypeInfo);
                byte_4C53758 = 1;
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
              rewardBonus->fields.animationId = *(_DWORD *)(v166 + 24);
              if ( !byte_4C53758 )
              {
                sub_1C3E564(&TerminalPramsManager_TypeInfo);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
                byte_4C53758 = 1;
              }
              if ( !LODWORD(result->m_Items[24]) )
              {
                j_il2cpp_runtime_class_init_0(result);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              v180 = result->m_Items[19]->fields.rewardBonus;
              if ( !v180 )
                goto LABEL_1211;
              result = (BattleResultComponent_resultData_array *)v180->fields.voiceIds;
              if ( result
                && (result = (BattleResultComponent_resultData_array *)System_String__Split(
                                                                         (System_String_o *)result,
                                                                         0x2Cu,
                                                                         0,
                                                                         0)) != 0 )
              {
                v181 = result->max_length;
                v182 = (__int64 *)&result->m_Items[1];
                if ( v181 <= 1 )
                  v182 = &StringLiteral_1122/*"0"*/;
                v183 = *v182;
                v184 = v181 <= 2 ? (System_String_o **)&StringLiteral_1122/*"0"*/ : (System_String_o **)&result->m_Items[2];
                v185 = *v184;
                v186 = v181 <= 3 ? (System_String_o **)&StringLiteral_6641/*"False"*/ : (System_String_o **)&result->m_Items[3];
              }
              else
              {
                v185 = (System_String_o *)StringLiteral_1122/*"0"*/;
                v186 = (System_String_o **)&StringLiteral_6641/*"False"*/;
                v183 = StringLiteral_1122/*"0"*/;
              }
              if ( !v442 )
                goto LABEL_1211;
              v428 = (System_String_o *)v183;
              v187 = *v186;
              v188 = (int32_t)v442[1].klass;
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
                                                                   v188,
                                                                   0);
              v189 = (System_Collections_Generic_List_object__o *)result;
              v190 = TerminalPramsManager___c_TypeInfo;
              if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
                v190 = TerminalPramsManager___c_TypeInfo;
              }
              _9__724_0 = (System_Predicate_object__o *)v190->static_fields->__9__724_0;
              if ( !_9__724_0 )
              {
                v192 = v185;
                if ( !v190->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v190);
                  v190 = TerminalPramsManager___c_TypeInfo;
                }
                v193 = (Il2CppObject *)v190->static_fields->__9;
                _9__724_0 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_QuestReleaseEntity__TypeInfo);
                System_Predicate_object____ctor(
                  _9__724_0,
                  v193,
                  Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__724_0__,
                  0);
                v194 = TerminalPramsManager___c_TypeInfo->static_fields;
                v194->__9__724_0 = (struct System_Predicate_QuestReleaseEntity__o *)_9__724_0;
                sub_1C3E508((CGThumbnailListItem_o *)&v194->__9__724_0, (int32_t)_9__724_0, v195, v196);
                v185 = v192;
              }
              if ( !v189 )
                goto LABEL_1211;
              v197 = v428;
              if ( System_Collections_Generic_List_object___Find(
                     v189,
                     (System_Predicate_T__o *)_9__724_0,
                     (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4C50D67 )
                {
                  sub_1C3E564(&TerminalPramsManager_TypeInfo);
                  byte_4C50D67 = 1;
                }
                v198 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v198 = TerminalPramsManager_TypeInfo;
                }
                QuestId_k__BackingField = v198->static_fields->_QuestId_k__BackingField;
                v197 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0);
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4C53758 )
              {
                sub_1C3E564(&TerminalPramsManager_TypeInfo);
                byte_4C53758 = 1;
              }
              v199 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v199 = TerminalPramsManager_TypeInfo;
              }
              BeforeEventSubmarineSaveData_k__BackingField = v199->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
              v201 = System_Int64__ToString(v166 + 32, 0);
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_39847644(
                                                                   v201,
                                                                   v197,
                                                                   v185,
                                                                   v187,
                                                                   0);
              if ( !BeforeEventSubmarineSaveData_k__BackingField )
                goto LABEL_1211;
              BeforeEventSubmarineSaveData_k__BackingField->fields.value = (struct System_String_o *)result;
              sub_1C3E508(
                (CGThumbnailListItem_o *)&BeforeEventSubmarineSaveData_k__BackingField->fields.value,
                (int32_t)result,
                v202,
                v203);
            }
LABEL_612:
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C50D67 )
            {
              sub_1C3E564(&TerminalPramsManager_TypeInfo);
              byte_4C50D67 = 1;
            }
            v204 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v204 = TerminalPramsManager_TypeInfo;
            }
            v205 = v204->static_fields->_QuestId_k__BackingField;
            if ( !byte_4C50D66 )
            {
              sub_1C3E564(&TerminalPramsManager_TypeInfo);
              v204 = TerminalPramsManager_TypeInfo;
              byte_4C50D66 = 1;
            }
            if ( !v204->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v204);
              v204 = TerminalPramsManager_TypeInfo;
            }
            PhaseCnt_k__BackingField = v204->static_fields->_PhaseCnt_k__BackingField;
            if ( !byte_4C538EC )
            {
              sub_1C3E564(&TerminalPramsManager_TypeInfo);
              v204 = TerminalPramsManager_TypeInfo;
              byte_4C538EC = 1;
            }
            if ( !v204->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v204);
              v204 = TerminalPramsManager_TypeInfo;
            }
            IsQuestClear_k__BackingField = v204->static_fields->_IsQuestClear_k__BackingField;
            if ( !byte_4C538E9 )
            {
              sub_1C3E564(&TerminalPramsManager_TypeInfo);
              v204 = TerminalPramsManager_TypeInfo;
              byte_4C538E9 = 1;
            }
            if ( !v204->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v204);
              v204 = TerminalPramsManager_TypeInfo;
            }
            SubmarineSaveParamsManager__SaveClearQuestInfo(
              v205,
              PhaseCnt_k__BackingField,
              IsQuestClear_k__BackingField,
              v204->static_fields->_IsPhaseClear_k__BackingField,
              0);
          }
          else
          {
            result = (BattleResultComponent_resultData_array *)v442;
            if ( !v442 )
              goto LABEL_1211;
            if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)v442, 0) )
            {
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4C54187 )
              {
                sub_1C3E564(&TerminalPramsManager_TypeInfo);
                byte_4C54187 = 1;
              }
              v172 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v172 = TerminalPramsManager_TypeInfo;
              }
              v172->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
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
                                                       (EventRaidMaster_o *)v127,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0);
  v445 = 0;
  if ( !result )
    goto LABEL_1211;
  v148 = result->max_length;
  v149 = result;
  if ( v148 >= 1 )
  {
    v150 = 0;
    while ( 1 )
    {
      if ( v150 >= (unsigned int)v148 || !*(_DWORD *)p_max_length )
        goto LABEL_1212;
      if ( !*m_Items )
        goto LABEL_1211;
      v151 = v149->m_Items[v150];
      if ( !v151 )
        goto LABEL_1211;
      RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                          (EventRaidMaster_o *)v127,
                          HIDWORD((*m_Items)->bounds),
                          v151->fields.eventId,
                          0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C50D67 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C50D67 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v153 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( RaidDeadQuestId == v153->_QuestId_k__BackingField )
        break;
      v150 = v445 + 1;
      v445 = v150;
      v148 = v149->max_length;
      if ( v150 >= v148 )
        goto LABEL_631;
    }
    v162 = v151->fields.eventId;
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      v153 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v153->clearBattleRaidId = v162;
    result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)result, RaidDeadQuestId, 0, 0) )
    {
      v156 = TerminalPramsManager_TypeInfo;
      v157 = v151->fields.eventId;
LABEL_501:
      if ( !v156->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v156);
        v156 = TerminalPramsManager_TypeInfo;
      }
      v156->static_fields->clearLastBattleRaidId = v157;
    }
  }
LABEL_631:
  v208 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v208 = TerminalPramsManager_TypeInfo;
  }
  if ( v208->static_fields->clearLastBattleRaidId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v209 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C51117 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C51117 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v209 )
      goto LABEL_1211;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v209,
           &v439,
           HIDWORD(result->m_Items[19]->klass),
           (const MethodInfo_33B2FA4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      result = (BattleResultComponent_resultData_array *)v439;
      if ( !v439 )
        goto LABEL_1211;
      if ( WarEntity__IsFolder((WarEntity_o *)v439, 0) )
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
  if ( !byte_4C53D5E )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53D5E = 1;
  }
  v210 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v210 = TerminalPramsManager_TypeInfo;
  }
  v210->static_fields->_IsWarBoardClear_k__BackingField = 0;
  if ( !byte_4C50D67 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v210 = TerminalPramsManager_TypeInfo;
    byte_4C50D67 = 1;
  }
  if ( !v210->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v210);
    v210 = TerminalPramsManager_TypeInfo;
  }
  if ( v210->static_fields->_QuestId_k__BackingField >= 1 )
  {
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    v211 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C50D67 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C50D67 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v211 )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)QuestMaster__getQuestEntity(
                                                         (QuestMaster_o *)v211,
                                                         result->m_Items[19]->fields.eventId,
                                                         0);
    if ( !result )
      goto LABEL_1211;
    v212 = (int)result->m_Items[1];
    if ( !byte_4C53D5E )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53D5E = 1;
    }
    v210 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v210 = TerminalPramsManager_TypeInfo;
    }
    v210->static_fields->_IsWarBoardClear_k__BackingField = v212 == 7;
  }
  if ( !v210->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v210);
  if ( !byte_4C53E5A )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53E5A = 1;
  }
  v213 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v213 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeRelease_k__BackingField = (CGThumbnailListItem_o *)&v213->static_fields->_questClearCostumeRelease_k__BackingField;
  p_questClearCostumeRelease_k__BackingField->klass = 0;
  sub_1C3E508(p_questClearCostumeRelease_k__BackingField, 0, v129, v130);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v217 = (*m_Items)->m_Items[22];
  if ( v217 && v217->fields.eventEndTitle )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53D4F )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53D4F = 1;
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
      v218 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[22];
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4C53E5A )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53E5A = 1;
      }
      v219 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v219 = TerminalPramsManager_TypeInfo;
      }
      v220 = (CGThumbnailListItem_o *)&v219->static_fields->_questClearCostumeRelease_k__BackingField;
      v220->klass = v218;
      sub_1C3E508(v220, (int32_t)v218, v215, v216);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53D5C )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53D5C = 1;
  }
  v221 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v221 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeGet_k__BackingField = (CGThumbnailListItem_o *)&v221->static_fields->_questClearCostumeGet_k__BackingField;
  p_questClearCostumeGet_k__BackingField->klass = 0;
  sub_1C3E508(p_questClearCostumeGet_k__BackingField, 0, v215, v216);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v225 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[23];
  if ( v225 && v225->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53D5C )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53D5C = 1;
    }
    v226 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v226 = TerminalPramsManager_TypeInfo;
    }
    v227 = (CGThumbnailListItem_o *)&v226->static_fields->_questClearCostumeGet_k__BackingField;
    v227->klass = v225;
    sub_1C3E508(v227, (int32_t)v225, v223, v224);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C54195 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54195 = 1;
  }
  v228 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v228 = TerminalPramsManager_TypeInfo;
  }
  p_eventPointWinReward_k__BackingField = (CGThumbnailListItem_o *)&v228->static_fields->_eventPointWinReward_k__BackingField;
  p_eventPointWinReward_k__BackingField->klass = 0;
  sub_1C3E508(p_eventPointWinReward_k__BackingField, 0, v223, v224);
  if ( !byte_4C54196 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54196 = 1;
  }
  v232 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v232 = TerminalPramsManager_TypeInfo;
  }
  v232->static_fields->_eventPointWinType_k__BackingField = 0;
  if ( v72 && v442 && HIDWORD(v442[9].klass) == 4 )
  {
    v233 = v72->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !result )
      goto LABEL_1211;
    v234 = (QuestGroupMaster_o *)result;
    GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)result, v233, 4, 0);
    v236 = TerminalPramsManager_TypeInfo;
    v237 = GroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v236 = TerminalPramsManager_TypeInfo;
    }
    v236->static_fields->joinGroupId = v237;
    v238 = QuestGroupMaster__GetGroupId(v234, v233, 3, 0);
    if ( !byte_4C538EC )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C538EC = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( v238 >= 1 && BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      v239 = DataManager__GetMasterData_object_(
               (DataManager_o *)result,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventPointMaster___);
      if ( !*(_DWORD *)p_max_length )
        goto LABEL_1212;
      if ( !*m_Items || !result )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)EventPointMaster__GetEntity(
                                                           (EventPointMaster_o *)result,
                                                           v238,
                                                           HIDWORD((*m_Items)->bounds),
                                                           0);
      v240 = (EventPointEntity_o *)result;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v240 )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)EventPointEntity__IsGroupOnGroup1(
                                                           v240,
                                                           TerminalPramsManager_TypeInfo->static_fields->joinGroupId,
                                                           0);
      if ( !v239 )
        goto LABEL_1211;
      v241 = QuestReleaseMaster__EventPointWinActionType(
               (QuestReleaseMaster_o *)v239,
               v233,
               (unsigned __int8)result & 1,
               0);
      if ( !byte_4C54196 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C54196 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(result->m_Items[19]->fields.warClearReward) = v241;
      if ( !byte_4C54197 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        byte_4C54197 = 1;
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v242 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( v242->_eventPointWinType_k__BackingField )
      {
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          v242 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v242->joinGroupId = -1;
      }
    }
    if ( !*(_DWORD *)p_max_length )
      goto LABEL_1212;
    if ( !*m_Items )
      goto LABEL_1211;
    v243 = (*m_Items)->m_Items[20];
    if ( v243 )
    {
      v244 = v243->fields.eventEndTitle;
      if ( v244 )
      {
        if ( !(_DWORD)v244 )
          goto LABEL_1212;
        v245 = (CGThumbnailListItem_c *)v243->fields.eventEndMessage;
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_4C54195 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C54195 = 1;
        }
        v246 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v246 = TerminalPramsManager_TypeInfo;
        }
        v247 = (CGThumbnailListItem_o *)&v246->static_fields->_eventPointWinReward_k__BackingField;
        v247->klass = v245;
        sub_1C3E508(v247, (int32_t)v245, v230, v231);
      }
    }
  }
  if ( v72 && v442 && HIDWORD(v442[9].klass) == 6 )
  {
    v248 = v72->fields.questId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C54198 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C54198 = 1;
    }
    v249 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v249 = TerminalPramsManager_TypeInfo;
    }
    v249->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = v248;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53F5D )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53F5D = 1;
  }
  v250 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v250 = TerminalPramsManager_TypeInfo;
  }
  p_eventRaceBoost_k__BackingField = (CGThumbnailListItem_o *)&v250->static_fields->_eventRaceBoost_k__BackingField;
  p_eventRaceBoost_k__BackingField->klass = 0;
  sub_1C3E508(p_eventRaceBoost_k__BackingField, 0, v230, v231);
  v254 = *p_max_length;
  if ( !(unsigned int)*p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v255 = (*m_Items)->m_Items[21];
  if ( v255 && v255->fields.battleId >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53F5D )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53F5D = 1;
    }
    v256 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v256 = TerminalPramsManager_TypeInfo;
    }
    v257 = (CGThumbnailListItem_o *)&v256->static_fields->_eventRaceBoost_k__BackingField;
    v257->klass = (CGThumbnailListItem_c *)v255;
    sub_1C3E508(v257, (int32_t)v255, v252, v253);
    if ( !byte_4C53F44 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53F44 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v258 = *(_QWORD *)&result->m_Items[19]->fields.followerType;
    if ( !byte_4C50D67 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4C50D67 = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v258 )
      goto LABEL_1211;
    *(_DWORD *)(v258 + 28) = result->m_Items[19]->fields.eventId;
    v254 = *p_max_length;
  }
  if ( !(_DWORD)v254 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v259 = (*m_Items)->m_Items[24];
  if ( v259 )
  {
    v260 = v259->fields.eventEndTitle;
    if ( v260 )
    {
      if ( !(_DWORD)v260 )
        goto LABEL_1212;
      v261 = v259->fields.eventEndMessage;
      if ( !v261 )
        goto LABEL_1211;
      if ( v261->fields._stringLength >= 1 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C54199 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C54199 = 1;
        }
        v262 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v262 = TerminalPramsManager_TypeInfo;
        }
        p_eventTowerReward_k__BackingField = (CGThumbnailListItem_o *)&v262->static_fields->_eventTowerReward_k__BackingField;
        p_eventTowerReward_k__BackingField->klass = (CGThumbnailListItem_c *)v261;
        sub_1C3E508(p_eventTowerReward_k__BackingField, (int32_t)v261, v252, v253);
        if ( !*(_DWORD *)p_max_length )
          goto LABEL_1212;
        if ( !*m_Items )
          goto LABEL_1211;
        v266 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[25];
        if ( !byte_4C5419A )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C5419A = 1;
        }
        v267 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v267 = TerminalPramsManager_TypeInfo;
        }
        p_resultEventTowerRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v267->static_fields->_resultEventTowerRewardInfo_k__BackingField;
        p_resultEventTowerRewardInfo_k__BackingField->klass = v266;
        sub_1C3E508(p_resultEventTowerRewardInfo_k__BackingField, (int32_t)v266, v264, v265);
        v254 = *p_max_length;
      }
    }
  }
  if ( !(_DWORD)v254 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v269 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[26];
  if ( v269 && v269->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53D56 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53D56 = 1;
    }
    v270 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v270 = TerminalPramsManager_TypeInfo;
    }
    p_resultBoostItemRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v270->static_fields->_resultBoostItemRewardInfo_k__BackingField;
    p_resultBoostItemRewardInfo_k__BackingField->klass = v269;
    sub_1C3E508(p_resultBoostItemRewardInfo_k__BackingField, (int32_t)v269, v252, v253);
    v254 = *p_max_length;
  }
  if ( !(_DWORD)v254 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v272 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[27];
  if ( v272 && v272->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53D57 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53D57 = 1;
    }
    v273 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v273 = TerminalPramsManager_TypeInfo;
    }
    p_resultEventBoardGameTokenRewardInfo_k__BackingField = (CGThumbnailListItem_o *)&v273->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
    p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = v272;
    sub_1C3E508(p_resultEventBoardGameTokenRewardInfo_k__BackingField, (int32_t)v272, v252, v253);
    v254 = *p_max_length;
  }
  if ( !(_DWORD)v254 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v275 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[28];
  if ( v275 && v275->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53D61 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53D61 = 1;
    }
    v276 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v276 = TerminalPramsManager_TypeInfo;
    }
    p_warClearReward_k__BackingField = (CGThumbnailListItem_o *)&v276->static_fields->_warClearReward_k__BackingField;
    p_warClearReward_k__BackingField->klass = v275;
    sub_1C3E508(p_warClearReward_k__BackingField, (int32_t)v275, v252, v253);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C5419B )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5419B = 1;
  }
  v278 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v278 = TerminalPramsManager_TypeInfo;
  }
  v279 = v278->static_fields;
  v279->_oldSuperBoss_k__BackingField = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v279->_oldSuperBoss_k__BackingField, 0, v252, v253);
  if ( !byte_4C5419C )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5419C = 1;
  }
  v282 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v282 = TerminalPramsManager_TypeInfo;
  }
  v283 = v282->static_fields;
  v283->_oldPersonalBoss_k__BackingField = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v283->_oldPersonalBoss_k__BackingField, 0, v280, v281);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !byte_4C50D67 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D67 = 1;
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
  result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)result, WarID_ByQuestID, 0);
  if ( WarEntityByWarID )
    v287 = WarEntityByWarID->fields.eventId;
  else
    v287 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !result )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v438,
                                                       v287,
                                                       (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( v429 )
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
    v290 = *p_max_length;
    if ( !(unsigned int)*p_max_length )
      goto LABEL_1212;
    if ( !*m_Items )
      goto LABEL_1211;
    if ( (*m_Items)->m_Items[42] )
    {
      result = (BattleResultComponent_resultData_array *)v438;
      if ( v438
        && (result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsPersonalBoss(
                                                                 (EventDetailEntity_o *)v438,
                                                                 0),
            v290 = *p_max_length,
            ((unsigned __int8)result & 1) != 0) )
      {
        if ( !(_DWORD)v290 )
          goto LABEL_1212;
        if ( !*m_Items )
          goto LABEL_1211;
        v291 = (*m_Items)->m_Items[42];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C5419C )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C5419C = 1;
        }
        v292 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v292 = TerminalPramsManager_TypeInfo;
        }
        v293 = v292->static_fields;
        v293->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v291;
        p_oldPersonalBoss_k__BackingField = (CGThumbnailListItem_o *)&v293->_oldPersonalBoss_k__BackingField;
      }
      else
      {
        if ( !(_DWORD)v290 )
          goto LABEL_1212;
        if ( !*m_Items )
          goto LABEL_1211;
        v291 = (*m_Items)->m_Items[42];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C5419B )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C5419B = 1;
        }
        v295 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v295 = TerminalPramsManager_TypeInfo;
        }
        v296 = v295->static_fields;
        v296->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v291;
        p_oldPersonalBoss_k__BackingField = (CGThumbnailListItem_o *)&v296->_oldSuperBoss_k__BackingField;
      }
      sub_1C3E508(p_oldPersonalBoss_k__BackingField, (int32_t)v291, v288, v289);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C5419D )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5419D = 1;
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
  if ( !byte_4C5419D )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5419D = 1;
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
    v298 = 1;
  }
  else
  {
LABEL_1217:
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_4C50D67 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C50D67 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v299 = BalanceConfig_TypeInfo;
    v300 = result->m_Items[19]->fields.eventId;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v299 = BalanceConfig_TypeInfo;
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v298 = v300 == v299->static_fields->OrtFirstQuestId;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4C53D6F )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53D6F = 1;
  }
  v301 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v301 = TerminalPramsManager_TypeInfo;
  }
  v301->static_fields->_isIncomingCall_k__BackingField = v298;
  if ( v438 && EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)v438, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C50D67 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C50D67 = 1;
    }
    v302 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v302 = TerminalPramsManager_TypeInfo;
    }
    v303 = BalanceConfig_TypeInfo;
    v304 = v302->static_fields->_QuestId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v303 = BalanceConfig_TypeInfo;
    }
    if ( v304 == v303->static_fields->OrtLateQuestId )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C50D66 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C50D66 = 1;
      }
      v305 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v305 = TerminalPramsManager_TypeInfo;
      }
      v306 = BalanceConfig_TypeInfo;
      v307 = v305->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v306 = BalanceConfig_TypeInfo;
      }
      if ( v307 + 1 == v306->static_fields->OrtLatePhaseBreak )
        goto LABEL_1218;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C50D66 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C50D66 = 1;
      }
      v308 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v308 = TerminalPramsManager_TypeInfo;
      }
      v309 = BalanceConfig_TypeInfo;
      v310 = v308->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v309 = BalanceConfig_TypeInfo;
      }
      if ( v310 + 1 == v309->static_fields->OrtLatePhaseDead )
      {
LABEL_1218:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v311 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserSuperBossMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C50AE2 )
        {
          sub_1C3E564(&NetworkManager_TypeInfo);
          byte_4C50AE2 = 1;
        }
        result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        }
        v312 = result->m_Items[19]->fields.myDeck;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v311 )
          goto LABEL_1211;
        if ( UserSuperBossMaster__TryGetEntity(
               (UserSuperBossMaster_o *)v311,
               &v437,
               (int64_t)v312,
               v287,
               BalanceConfig_TypeInfo->static_fields->OrtThirdFormId,
               0) )
        {
          result = (BattleResultComponent_resultData_array *)sub_1C3E60C(UserSuperBossEntity___TypeInfo, 1);
          if ( !result )
            goto LABEL_1211;
          v315 = v437;
          v316 = result;
          if ( v437 )
          {
            result = (BattleResultComponent_resultData_array *)sub_1C3E6A0(v437, result->obj.klass->_1.element_class);
            if ( !result )
            {
LABEL_1213:
              v427 = sub_1C3E7E4();
              sub_1C3E68C(v427, 0);
            }
          }
          if ( !LODWORD(v316->max_length) )
            goto LABEL_1212;
          v316->m_Items[0] = (BattleResultComponent_resultData_o *)v315;
          sub_1C3E508((CGThumbnailListItem_o *)v316->m_Items, (int32_t)v315, v313, v314);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C5419C )
          {
            sub_1C3E564(&TerminalPramsManager_TypeInfo);
            byte_4C5419C = 1;
          }
          v319 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v319 = TerminalPramsManager_TypeInfo;
          }
          v320 = v319->static_fields;
          v320->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v316;
          sub_1C3E508((CGThumbnailListItem_o *)&v320->_oldPersonalBoss_k__BackingField, (int32_t)v316, v317, v318);
        }
      }
    }
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  TalkResumeInfo = ScriptManager__GetTalkResumeInfo(0);
  if ( TalkResumeInfo )
  {
    v322 = TalkResumeInfo;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    v323 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C50D67 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C50D67 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v323 )
      goto LABEL_1211;
    ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)v323, result->m_Items[19]->fields.eventId, 0);
    v325 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !byte_4C50D66 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C50D66 = 1;
    }
    v326 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v326 = TerminalPramsManager_TypeInfo;
    }
    v327 = v326->static_fields->_PhaseCnt_k__BackingField;
    winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v322, 0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd2(
                                                         ScriptQuestId,
                                                         v327 + 1,
                                                         winResult,
                                                         0);
    if ( !v325 )
      goto LABEL_1211;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v325, (System_String_o *)result, 0) )
      goto LABEL_1026;
    v331 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C50D66 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C50D66 = 1;
    }
    v332 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v332 = TerminalPramsManager_TypeInfo;
    }
    v333 = v332->static_fields->_PhaseCnt_k__BackingField;
    v334 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v322, 0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd(
                                                         ScriptQuestId,
                                                         v333 + 1,
                                                         v334,
                                                         0);
    if ( !v331 )
      goto LABEL_1211;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v331, (System_String_o *)result, 0) )
    {
LABEL_1026:
      v335 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v335 = TerminalPramsManager_TypeInfo;
      }
      v336 = StringLiteral_1/*""*/;
      p_lastPlayBgmName = (CGThumbnailListItem_o *)&v335->static_fields->lastPlayBgmName;
      p_lastPlayBgmName->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
      sub_1C3E508(p_lastPlayBgmName, v336, v329, v330);
      TerminalPramsManager__LastPlayBgmNameSave_SaveData(v338);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  v339 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C50D67 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D67 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v340 = result->m_Items[19]->fields.eventId;
  if ( !byte_4C50D66 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4C50D66 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v339 )
    goto LABEL_1211;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)v339,
    &v446,
    v340,
    LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
    0);
  if ( !byte_4C5419E )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5419E = 1;
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
    if ( !byte_4C5419E )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C5419E = 1;
    }
    v343 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v343 = TerminalPramsManager_TypeInfo;
    }
    result = (BattleResultComponent_resultData_array *)v343->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
    if ( !result )
      goto LABEL_1211;
    result->max_length = 0;
    v344 = &result->max_length;
    *(v344 - 1) = 0;
    sub_1C3E508((CGThumbnailListItem_o *)v344, 0, v341, v342);
  }
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v345 = HIDWORD((*m_Items)->bounds);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C50D67 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D67 = 1;
  }
  v346 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v346 = TerminalPramsManager_TypeInfo;
  }
  v347 = v346->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C50D66 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v346 = TerminalPramsManager_TypeInfo;
    byte_4C50D66 = 1;
  }
  if ( !v346->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v346);
    v346 = TerminalPramsManager_TypeInfo;
  }
  SpecifiedSceneInfo = QuestPhaseMaster__GetSpecifiedSceneInfo(
                         (QuestPhaseMaster_o *)v339,
                         v345,
                         v347,
                         v346->static_fields->_PhaseCnt_k__BackingField + 1,
                         0);
  if ( !byte_4C5417F )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5417F = 1;
  }
  v351 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v351 = TerminalPramsManager_TypeInfo;
  }
  v352 = v351->static_fields;
  v352->_SpecifiedChangeSceneInfo_k__BackingField = SpecifiedSceneInfo;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&v352->_SpecifiedChangeSceneInfo_k__BackingField,
    (int32_t)SpecifiedSceneInfo,
    v348,
    v349);
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId = 0;
  TerminalPramsManager__InitTipsArchiveScrollValueList(v353);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v356 = (int32_t)(*m_Items)->m_Items[53];
  v357 = TerminalPramsManager_TypeInfo;
  if ( v356 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53D51 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53D51 = 1;
    }
    v357 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v357 = TerminalPramsManager_TypeInfo;
    }
    v357->static_fields->_EventMuralId_k__BackingField = v356;
  }
  if ( !v357->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v357);
    v357 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = (CGThumbnailListItem_o *)&v357->static_fields->eventHarvestGrowthInfo;
  p_eventHarvestGrowthInfo->klass = 0;
  sub_1C3E508(p_eventHarvestGrowthInfo, 0, v354, v355);
  if ( !byte_4C50D67 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D67 = 1;
  }
  v359 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v359 = TerminalPramsManager_TypeInfo;
  }
  result = (BattleResultComponent_resultData_array *)QuestPhaseMaster__GetEntity(
                                                       (QuestPhaseMaster_o *)v339,
                                                       v359->static_fields->_QuestId_k__BackingField,
                                                       1,
                                                       0);
  if ( !result )
    goto LABEL_1211;
  v360 = result;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(
                     (QuestPhaseEntity_o *)result,
                     (System_String_o *)StringLiteral_19955/*"harvestGrowthBeforeQuestId"*/,
                     -1,
                     0);
  v362 = QuestPhaseEntity__getScriptIntParam((QuestPhaseEntity_o *)v360, (System_String_o *)StringLiteral_19954/*"harvestGrowthAfterQuestId"*/, -1, 0);
  if ( ScriptIntParam >= 1 )
  {
    v363 = v362;
    if ( v362 >= 1 )
    {
      v364 = sub_1C3E7B0(EventHarvestGrowthInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v364, 0);
      if ( !v364 )
        goto LABEL_1211;
      bounds = v360->bounds;
      *(_DWORD *)(v364 + 24) = ScriptIntParam;
      *(_DWORD *)(v364 + 28) = v363;
      *(_QWORD *)(v364 + 16) = bounds;
      v368 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v368 = TerminalPramsManager_TypeInfo;
      }
      v369 = (CGThumbnailListItem_o *)&v368->static_fields->eventHarvestGrowthInfo;
      v369->klass = (CGThumbnailListItem_c *)v364;
      sub_1C3E508(v369, v364, v365, v366);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  v370 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C50D67 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D67 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v370 )
    goto LABEL_1211;
  QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)v370, result->m_Items[19]->fields.eventId, 0);
  if ( QuestEntity )
  {
    v372 = QuestEntity;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C50D67 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C50D67 = 1;
    }
    v373 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v373 = TerminalPramsManager_TypeInfo;
    }
    if ( QuestPhaseMaster__IsAreaImproveQuest(
           (QuestPhaseMaster_o *)v339,
           v373->static_fields->_QuestId_k__BackingField,
           0) )
    {
      SpotId = QuestEntity__getSpotId(v372, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
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
        v376 = CurrentLevelEntity;
        v377 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v377 = TerminalPramsManager_TypeInfo;
        }
        eventAreaImproveResultInfo = v377->static_fields->eventAreaImproveResultInfo;
        if ( eventAreaImproveResultInfo )
        {
          if ( !v377->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v377);
            eventAreaImproveResultInfo = TerminalPramsManager_TypeInfo->static_fields->eventAreaImproveResultInfo;
            if ( !eventAreaImproveResultInfo )
              goto LABEL_1211;
          }
          eventAreaImproveResultInfo->fields.afterLevel = v376->fields.lv;
        }
      }
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C51117 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C51117 = 1;
  }
  v379 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v379 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__SaveLastClearedGrandWar(v379->static_fields->_WarId_k__BackingField, (const MethodInfo *)isWin);
  result = (BattleResultComponent_resultData_array *)v446;
  if ( v446 )
  {
    result = (BattleResultComponent_resultData_array *)QuestPhaseEntity__GetMoveSceneInfo(v446, 0);
    if ( !result )
      goto LABEL_1211;
    if ( result->max_length )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C50D67 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C50D67 = 1;
      }
      v382 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v382 = TerminalPramsManager_TypeInfo;
      }
      v445 = v382->static_fields->_QuestId_k__BackingField;
      v383 = System_Int32__ToString((int32_t)&v445, 0);
      if ( !byte_4C50D66 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C50D66 = 1;
      }
      v384 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v384 = TerminalPramsManager_TypeInfo;
      }
      v445 = v384->static_fields->_PhaseCnt_k__BackingField + 1;
      v385 = System_Int32__ToString((int32_t)&v445, 0);
      v388 = System_String__Concat_63674716(v383, (System_String_o *)StringLiteral_811/*","*/, v385, 0);
      if ( !byte_4C53F5C )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53F5C = 1;
      }
      v389 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v389 = TerminalPramsManager_TypeInfo;
      }
      p_SceneMoveQuestClearedInfo_k__BackingField = (CGThumbnailListItem_o *)&v389->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
      p_SceneMoveQuestClearedInfo_k__BackingField->klass = (CGThumbnailListItem_c *)v388;
      sub_1C3E508(p_SceneMoveQuestClearedInfo_k__BackingField, (int32_t)v388, v386, v387);
    }
  }
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v391 = (CGThumbnailListItem_c *)(*m_Items)->m_Items[48];
  if ( v391 && v391->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53D5A )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53D5A = 1;
    }
    v392 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v392 = TerminalPramsManager_TypeInfo;
    }
    p_limitImageAnnounces_k__BackingField = (CGThumbnailListItem_o *)&v392->static_fields->_limitImageAnnounces_k__BackingField;
    p_limitImageAnnounces_k__BackingField->klass = v391;
    sub_1C3E508(p_limitImageAnnounces_k__BackingField, (int32_t)v391, v380, v381);
  }
  v394 = sub_1C3E60C(string___TypeInfo, 7);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C50D67 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D67 = 1;
  }
  v395 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v395 = TerminalPramsManager_TypeInfo;
  }
  v445 = v395->static_fields->_QuestId_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v445, 0);
  if ( !v394 )
LABEL_1211:
    sub_1C3E7C0(result, isWin);
  if ( !*(_DWORD *)(v394 + 24) )
    goto LABEL_1212;
  *(_QWORD *)(v394 + 32) = result;
  sub_1C3E508((CGThumbnailListItem_o *)(v394 + 32), (int32_t)result, v396, v397);
  if ( *(_DWORD *)(v394 + 24) <= 1u )
    goto LABEL_1212;
  v400 = StringLiteral_811/*","*/;
  *(_QWORD *)(v394 + 40) = StringLiteral_811/*","*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v394 + 40), v400, v398, v399);
  if ( !byte_4C50D66 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D66 = 1;
  }
  v401 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v401 = TerminalPramsManager_TypeInfo;
  }
  v445 = v401->static_fields->_PhaseCnt_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v445, 0);
  if ( *(_DWORD *)(v394 + 24) <= 2u )
    goto LABEL_1212;
  *(_QWORD *)(v394 + 48) = result;
  sub_1C3E508((CGThumbnailListItem_o *)(v394 + 48), (int32_t)result, v402, v403);
  if ( *(_DWORD *)(v394 + 24) <= 3u )
    goto LABEL_1212;
  v406 = StringLiteral_811/*","*/;
  *(_QWORD *)(v394 + 56) = StringLiteral_811/*","*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v394 + 56), v406, v404, v405);
  if ( !byte_4C538EC )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C538EC = 1;
  }
  v407 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v407 = TerminalPramsManager_TypeInfo;
  }
  v436[0] = v407->static_fields->_IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v436, 0);
  if ( *(_DWORD *)(v394 + 24) <= 4u )
    goto LABEL_1212;
  *(_QWORD *)(v394 + 64) = result;
  sub_1C3E508((CGThumbnailListItem_o *)(v394 + 64), (int32_t)result, v408, v409);
  if ( *(_DWORD *)(v394 + 24) <= 5u )
    goto LABEL_1212;
  v412 = StringLiteral_811/*","*/;
  *(_QWORD *)(v394 + 72) = StringLiteral_811/*","*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v394 + 72), v412, v410, v411);
  if ( !byte_4C538E9 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C538E9 = 1;
  }
  v413 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v413 = TerminalPramsManager_TypeInfo;
  }
  v436[0] = v413->static_fields->_IsPhaseClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v436, 0);
  if ( *(_DWORD *)(v394 + 24) <= 6u )
    goto LABEL_1212;
  *(_QWORD *)(v394 + 80) = result;
  sub_1C3E508((CGThumbnailListItem_o *)(v394 + 80), (int32_t)result, v414, v415);
  v416 = System_String__Concat_63676984((System_String_array *)v394, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_16728/*"afterActionBk"*/, v416, 0);
  TerminalPramsManager__SaveClearDatas(resulta, v417);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v418);
  TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(v419);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v420);
  TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(v421);
  TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(v422);
  if ( !byte_4C50D67 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D67 = 1;
  }
  v423 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v423 = TerminalPramsManager_TypeInfo;
  }
  v424 = v423->static_fields->_QuestId_k__BackingField;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__SetClearQuestWarEnableMyRoomBgChange(v424, 0);
  if ( TerminalPramsManager__IsTerminalEffectNT2BoardOpen(v425) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53637 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53637 = 1;
    }
    v426 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v426 = TerminalPramsManager_TypeInfo;
    }
    v426->static_fields->_WarId_k__BackingField = 0;
    if ( !byte_4C51506 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      v426 = TerminalPramsManager_TypeInfo;
      byte_4C51506 = 1;
    }
    if ( !v426->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v426);
      v426 = TerminalPramsManager_TypeInfo;
    }
    v426->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4C53D43 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      v426 = TerminalPramsManager_TypeInfo;
      byte_4C53D43 = 1;
    }
    if ( !v426->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v426);
      v426 = TerminalPramsManager_TypeInfo;
    }
    v426->static_fields->_IsMapReturnFolder_k__BackingField = 0;
    if ( !byte_4C53F4F )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      v426 = TerminalPramsManager_TypeInfo;
      byte_4C53F4F = 1;
    }
    if ( !v426->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v426);
      v426 = TerminalPramsManager_TypeInfo;
    }
    v426->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData((const MethodInfo *)v426);
  }
}


void TerminalPramsManager__ResetBlankEarthSpotInfo(const MethodInfo *method)
{
  const MethodInfo *v1; // x0

  if ( (byte_4C5410A & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5410A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C5357B )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5357B = 1;
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

  if ( (byte_4C54114 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54114 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C54171 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54171 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestMessageScriptQuestId_k__BackingField = -1;
  if ( !byte_4C54172 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C54172 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = -1;
  if ( !byte_4C53E5F )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C53E5F = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  p_TalkScriptInfo_k__BackingField = (CGThumbnailListItem_o *)&v3->static_fields->_TalkScriptInfo_k__BackingField;
  p_TalkScriptInfo_k__BackingField->klass = 0;
  sub_1C3E508(p_TalkScriptInfo_k__BackingField, 0, v1, v2);
  if ( !byte_4C54173 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54173 = 1;
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

  if ( (byte_4C5415A & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5415A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v3->static_fields->mQuestRewardInfos;
  if ( !byte_4C50D69 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C50D69 = 1;
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
      sub_1C3E7C8(v3, method);
    v6 = result->m_Items[0];
    if ( !v6 )
      sub_1C3E7C0(0, method);
    if ( BattleResultComponent_resultData__checkResultDispFlag(v6, 2048, 0) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C50D67 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C50D67 = 1;
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
  if ( !byte_4C538EC )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C538EC = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  IsQuestClear_k__BackingField = v9->static_fields->_IsQuestClear_k__BackingField;
  if ( !byte_4C538E9 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C538E9 = 1;
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
  if ( !byte_4C5419F )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C5419F = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  oldSuperBoss = v9->static_fields->_oldSuperBoss_k__BackingField;
  if ( !byte_4C5419D )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C5419D = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss = v9->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !byte_4C541A0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C541A0 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  eventPointWinReward_k__BackingField = v9->static_fields->_eventPointWinReward_k__BackingField;
  if ( !byte_4C54197 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C54197 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  evpWinType = v9->static_fields->_eventPointWinType_k__BackingField;
  if ( !byte_4C53F44 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C53F44 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  evRace = v9->static_fields->_eventRaceBoost_k__BackingField;
  if ( !byte_4C53D58 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C53D58 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeRelease = v9->static_fields->_questClearCostumeRelease_k__BackingField;
  if ( !byte_4C53D4E )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C53D4E = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeGet_k__BackingField = v9->static_fields->_questClearCostumeGet_k__BackingField;
  if ( !byte_4C53D54 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C53D54 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  evTowerReward = v9->static_fields->_eventTowerReward_k__BackingField;
  if ( !byte_4C541A1 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C541A1 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v9->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  if ( !byte_4C529F5 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C529F5 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  IsDispOnly_k__BackingField = v9->static_fields->_IsDispOnly_k__BackingField;
  if ( !byte_4C53D60 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C53D60 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  warClearRewardIn = v9->static_fields->_warClearReward_k__BackingField;
  if ( !byte_4C541A2 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C541A2 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  eventActivityPointEffectState = v9->static_fields->_EventActivityPointEffectState_k__BackingField;
  if ( !byte_4C53D4F )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C53D4F = 1;
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
  if ( !byte_4C53D59 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C53D59 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  limitImageAnnounces = v9->static_fields->_limitImageAnnounces_k__BackingField;
  if ( !byte_4C5357A )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C5357A = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  IsOrdealCallWarClear_k__BackingField = v9->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4C53D50 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C53D50 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  eventMuralId = v9->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_4C53F52 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4C53F52 = 1;
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
  v24 = (TerminalPramsManager_ClearData_o *)sub_1C3E7B0(TerminalPramsManager_ClearData_TypeInfo);
  TerminalPramsManager_ClearData___ctor_37364076(
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
  if ( !byte_4C541A3 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C541A3 = 1;
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

  if ( (byte_4C54160 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11458/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_4C54160 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C541A5 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C541A5 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  EventRaidDefeatedEffectInfo_k__BackingField = v2->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  if ( !EventRaidDefeatedEffectInfo_k__BackingField )
    sub_1C3E7C0(0, v1);
  v4 = EventRaidDefeatedEffectInfo__ConvertToStringData(EventRaidDefeatedEffectInfo_k__BackingField, v1);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11458/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v4, 0);
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

  if ( (byte_4C5416C & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C3E564(&GrandQuestRootComponent_TypeInfo);
    byte_4C5416C = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    warId,
                                    (const MethodInfo_33B2FA4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
LABEL_15:
    sub_1C3E7C0(Master_object, v4);
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

  if ( (byte_4C54121 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_13717/*"TerminalPhaseCnt"*/);
    sub_1C3E564(&StringLiteral_13720/*"TerminalQuestId"*/);
    byte_4C54121 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C50D67 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D67 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13720/*"TerminalQuestId"*/,
    v1->static_fields->_QuestId_k__BackingField,
    0);
  if ( !byte_4C50D66 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D66 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13717/*"TerminalPhaseCnt"*/,
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
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  Il2CppObject *v13; // x20
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  Il2CppObject *v20; // x2
  System_String_o *v21; // x1
  int v22; // [xsp+Ch] [xbp-94h] BYREF
  _OWORD v23[2]; // [xsp+10h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C54164 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11467/*"SAVEKEY_QuestRandomGroupList"*/);
    sub_1C3E564(&StringLiteral_25197/*"{0}:{1}"*/);
    sub_1C3E564(&StringLiteral_811/*","*/);
    byte_4C54164 = 1;
  }
  memset(&v24, 0, 32);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C5362D )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5362D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  QuestRandomGroupList_k__BackingField = v3->static_fields->_QuestRandomGroupList_k__BackingField;
  if ( !QuestRandomGroupList_k__BackingField )
    sub_1C3E7C0(0, v1);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v23,
    QuestRandomGroupList_k__BackingField,
    (const MethodInfo_3403D5C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v24.fields._dictionary = v23[0];
  v24.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v23[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v24,
            (const MethodInfo_3561EB8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int)v24.fields._current.fields.key;
    key_high = HIDWORD(v24.fields._current.fields.key);
    if ( !System_String__IsNullOrEmpty(Empty, 0) )
      Empty = System_String__Concat_63636468(Empty, (System_String_o *)StringLiteral_811/*","*/, 0);
    LODWORD(v23[0]) = key;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v23, v7, v8, v9, v10, v11, v12);
    v22 = key_high;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v14, v15, v16, v17, v18, v19);
    v21 = System_String__Format_63677760((System_String_o *)StringLiteral_25197/*"{0}:{1}"*/, v13, v20, 0);
    Empty = System_String__Concat_63636468(Empty, v21, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v24,
    (const MethodInfo_3561FB8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11467/*"SAVEKEY_QuestRandomGroupList"*/, Empty, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveQuestReleasedFocusState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v3; // x1

  if ( (byte_4C5414C & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5414C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v1);
  if ( !QuestFocusStateManager )
    sub_1C3E7C0(0, v3);
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

  if ( (byte_4C5411F & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_13710/*"TerminalEndTime"*/);
    sub_1C3E564(&StringLiteral_11465/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_1C3E564(&StringLiteral_13706/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C3E564(&StringLiteral_13711/*"TerminalEventDailyPointEventId"*/);
    sub_1C3E564(&StringLiteral_13717/*"TerminalPhaseCnt"*/);
    sub_1C3E564(&StringLiteral_13725/*"TerminalTimeStatusEventId"*/);
    sub_1C3E564(&StringLiteral_13709/*"TerminalDispState"*/);
    sub_1C3E564(&StringLiteral_11462/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_1C3E564(&StringLiteral_13712/*"TerminalIsDoneShortcut"*/);
    sub_1C3E564(&StringLiteral_11461/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C3E564(&StringLiteral_11466/*"SAVEKEY_PlayerGenderType"*/);
    sub_1C3E564(&StringLiteral_11454/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_1C3E564(&StringLiteral_11463/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_1C3E564(&StringLiteral_13720/*"TerminalQuestId"*/);
    sub_1C3E564(&StringLiteral_11474/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_1C3E564(&StringLiteral_13724/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_1C3E564(&StringLiteral_13729/*"TerminalWarId"*/);
    sub_1C3E564(&StringLiteral_13722/*"TerminalSpotId"*/);
    sub_1C3E564(&StringLiteral_13726/*"TerminalTimeStatusLoopCount"*/);
    sub_1C3E564(&StringLiteral_13707/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_1C3E564(&StringLiteral_11452/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_1C3E564(&StringLiteral_11457/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_1C3E564(&StringLiteral_13730/*"TerminalWarStartedIds"*/);
    sub_1C3E564(&StringLiteral_11456/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C3E564(&StringLiteral_811/*","*/);
    sub_1C3E564(&StringLiteral_11455/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_1C3E564(&StringLiteral_11464/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_1C3E564(&StringLiteral_11473/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4C5411F = 1;
  }
  EndTime_k__BackingField = 0;
  MapModelClearQuestId_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53835 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53835 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13709/*"TerminalDispState"*/,
    v1->static_fields->_DispState_k__BackingField,
    0);
  if ( !byte_4C51117 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C51117 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13729/*"TerminalWarId"*/, v2->static_fields->_WarId_k__BackingField, 0);
  if ( !byte_4C53839 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53839 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13722/*"TerminalSpotId"*/, v3->static_fields->_SpotId_k__BackingField, 0);
  if ( !byte_4C53577 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53577 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11452/*"SAVEKEY_BlankEarthSpotId"*/,
    v4->static_fields->_BlankEarthSpotId_k__BackingField,
    0);
  if ( !byte_4C50D67 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D67 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13720/*"TerminalQuestId"*/,
    v5->static_fields->_QuestId_k__BackingField,
    0);
  if ( !byte_4C50D66 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D66 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13717/*"TerminalPhaseCnt"*/,
    v6->static_fields->_PhaseCnt_k__BackingField,
    0);
  if ( !byte_4C5383A )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5383A = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v7->static_fields->_EndTime_k__BackingField;
  v8 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13710/*"TerminalEndTime"*/, v8, 0);
  if ( !byte_4C53D7B )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53D7B = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13712/*"TerminalIsDoneShortcut"*/,
    v9->static_fields->_IsDoneShortcut_k__BackingField,
    0);
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_13730/*"TerminalWarStartedIds"*/,
    v10->static_fields->mTerminalWarStartedIds,
    0);
  if ( !byte_4C53F4C )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53F4C = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13725/*"TerminalTimeStatusEventId"*/,
    v11->static_fields->_TimeStatusEventId_k__BackingField,
    0);
  if ( !byte_4C53F4D )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53F4D = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13726/*"TerminalTimeStatusLoopCount"*/,
    v12->static_fields->_TimeStatusLoopCount_k__BackingField,
    0);
  if ( !byte_4C5418B )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5418B = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13711/*"TerminalEventDailyPointEventId"*/,
    v13->static_fields->_EventDailyPointEventId_k__BackingField,
    0);
  if ( !byte_4C5418C )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5418C = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v14->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v15 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13724/*"TerminalTimeStatusEventDailyPoint"*/, v15, 0);
  if ( !byte_4C5418D )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5418D = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13706/*"TerminalBeforeEventActivityPoint"*/,
    v16->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0);
  if ( !byte_4C5418E )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5418E = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13707/*"TerminalBeforeEventActivityPointGauge"*/,
    v17->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0);
  if ( !byte_4C5418F )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5418F = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11465/*"SAVEKEY_PlayedTerminalEffects"*/,
    v18->static_fields->_PlayedTerminalEffects_k__BackingField,
    0);
  if ( !byte_4C53D6C )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53D6C = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11462/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v19->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53D6D )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53D6D = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11463/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v20->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0);
  if ( !byte_4C53F4E )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53F4E = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11464/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v21->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53F51 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53F51 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11474/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v22->static_fields->_SelectedStoryQuestId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11456/*"SAVEKEY_ConnectMarkEventId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    0);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11455/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0);
  if ( !byte_4C53D45 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53D45 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11473/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v23->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0);
  if ( !byte_4C53630 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53630 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11454/*"SAVEKEY_ClearEventQuestIds"*/,
    v24->static_fields->_ClearEventQuestIds_k__BackingField,
    0);
  if ( !byte_4C53836 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53836 = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v25->static_fields->_MapModelClearQuestId_k__BackingField;
  v26 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  if ( !byte_4C53837 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53837 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v27->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v28 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  v29 = System_String__Concat_63674716(v26, (System_String_o *)StringLiteral_811/*","*/, v28, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11461/*"SAVEKEY_MapModelClearQuestInfo"*/, v29, 0);
  if ( !byte_4C53F53 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53F53 = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11457/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v30->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C54190 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54190 = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11466/*"SAVEKEY_PlayerGenderType"*/,
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

  if ( (byte_4C54154 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54154 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v5);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1C3E7C0(0, v8);
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

  if ( (byte_4C54155 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C3E564(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderByDescending_int__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_int__QuestEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_QuestEntity__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_1C3E564(&System_Func_int__int__TypeInfo);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&System_Func_QuestEntity__int__TypeInfo);
    sub_1C3E564(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1C3E564(&System_Func_int__QuestEntity__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__730_0__);
    sub_1C3E564(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__730_3__);
    sub_1C3E564(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__730_4__);
    sub_1C3E564(&Method_TerminalPramsManager___c__DisplayClass730_0__SendOpenedQuestIdToAdManager_b__1__);
    sub_1C3E564(&Method_TerminalPramsManager___c__DisplayClass730_0__SendOpenedQuestIdToAdManager_b__2__);
    sub_1C3E564(&TerminalPramsManager___c__DisplayClass730_0_TypeInfo);
    sub_1C3E564(&TerminalPramsManager___c_TypeInfo);
    byte_4C54155 = 1;
  }
  v43 = 0;
  entity = 0;
  v3 = sub_1C3E7B0(TerminalPramsManager___c__DisplayClass730_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass730_0___ctor((TerminalPramsManager___c__DisplayClass730_0_o *)v3, 0);
  if ( clearedQuestId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !v3 )
      goto LABEL_43;
    *(_QWORD *)(v3 + 16) = Instance;
    sub_1C3E508((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Instance, v6, v7);
    Instance = *(DataManager_o **)(v3 + 16);
    if ( !Instance )
      goto LABEL_43;
    if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, clearedQuestId, 0) )
      return;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SpotMaster___);
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
                                  (const MethodInfo_33B2FA4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v3 + 24) = MasterData_object;
      sub_1C3E508((CGThumbnailListItem_o *)(v3 + 24), (int32_t)MasterData_object, v11, v12);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
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
        _9__730_0 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__730_0,
          v16,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__730_0__,
          0);
        static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
        static_fields->__9__730_0 = _9__730_0;
        sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__730_0, (int32_t)_9__730_0, v18, v19);
      }
      v20 = System_Linq_Enumerable__Where_int_(
              QuestIdsByTargetAndOpenCondType,
              (System_Func_TSource__bool__o *)_9__730_0,
              (const MethodInfo_313FD5C *)Method_System_Linq_Enumerable_Where_int___);
      v21 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_int__QuestEntity__TypeInfo);
      System_Func_int__object____ctor(
        v21,
        (Il2CppObject *)v3,
        Method_TerminalPramsManager___c__DisplayClass730_0__SendOpenedQuestIdToAdManager_b__1__,
        0);
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v20,
                                                                   (System_Func_TSource__TResult__o *)v21,
                                                                   (const MethodInfo_312D55C *)Method_System_Linq_Enumerable_Select_int__QuestEntity___);
      v23 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v23,
        (Il2CppObject *)v3,
        Method_TerminalPramsManager___c__DisplayClass730_0__SendOpenedQuestIdToAdManager_b__2__,
        0);
      v24 = System_Linq_Enumerable__Where_object_(
              v22,
              (System_Func_TSource__bool__o *)v23,
              (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
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
        _9__730_3 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_QuestEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__730_3,
          v28,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__730_3__,
          0);
        v29 = TerminalPramsManager___c_TypeInfo->static_fields;
        v29->__9__730_3 = (struct System_Func_QuestEntity__int__o *)_9__730_3;
        sub_1C3E508((CGThumbnailListItem_o *)&v29->__9__730_3, (int32_t)_9__730_3, v30, v31);
      }
      v32 = System_Linq_Enumerable__Select_object__int_(
              v26,
              (System_Func_TSource__TResult__o *)_9__730_3,
              (const MethodInfo_312F93C *)Method_System_Linq_Enumerable_Select_QuestEntity__int___);
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
        _9__730_4 = (System_Func_int__int__o *)sub_1C3E7B0(System_Func_int__int__TypeInfo);
        System_Func_int__int____ctor(
          _9__730_4,
          v36,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__730_4__,
          0);
        v37 = TerminalPramsManager___c_TypeInfo->static_fields;
        v37->__9__730_4 = _9__730_4;
        sub_1C3E508((CGThumbnailListItem_o *)&v37->__9__730_4, (int32_t)_9__730_4, v38, v39);
      }
      v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_int__int_(
                                                                   v34,
                                                                   (System_Func_TSource__TKey__o *)_9__730_4,
                                                                   (const MethodInfo_31296DC *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
      v41 = System_Linq_Enumerable__FirstOrDefault_int_(
              v40,
              (const MethodInfo_31219C0 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      if ( v41 )
      {
        v42 = v41;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetOpenedStoryQuest((AdManager_o *)Instance, v42, 0);
          return;
        }
LABEL_43:
        sub_1C3E7C0(Instance, v5);
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
  if ( (byte_4C54153 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C3E564(&StringLiteral_19764/*"game.resume_quest_id"*/);
    sub_1C3E564(&StringLiteral_19765/*"game.resume_quest_phase"*/);
    byte_4C54153 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  if ( !Instance
    || (CrashReporter__AddCustomKey((CrashReporter_o *)Instance, (System_String_o *)StringLiteral_19764/*"game.resume_quest_id"*/, v4, 0),
        v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__),
        v4 = System_Int32__ToString((int32_t)&v7, 0),
        !v6) )
  {
    sub_1C3E7C0(v4, v5);
  }
  CrashReporter__AddCustomKey((CrashReporter_o *)v6, (System_String_o *)StringLiteral_19765/*"game.resume_quest_phase"*/, v4, 0);
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
  if ( (byte_4C54152 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_19758/*"game.last_quest_id"*/);
    sub_1C3E564(&StringLiteral_19760/*"game.last_quest_phase"*/);
    byte_4C54152 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v5);
    Instance = (AdManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance
      || (!IsMainStoryForQuestId ? (v9 = 9) : (v9 = 10),
          (AdManager__TrackEvent(Instance, v9, 9, questId, questPhase, 0, 0),
           v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__),
           Instance = (AdManager_o *)System_Int32__ToString((int32_t)&v13, 0),
           !v10)
       || (CrashReporter__AddCustomKey(
             (CrashReporter_o *)v10,
             (System_String_o *)StringLiteral_19758/*"game.last_quest_id"*/,
             (System_String_o *)Instance,
             0),
           v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__),
           Instance = (AdManager_o *)System_Int32__ToString((int32_t)&v12, 0),
           !v11)) )
    {
      sub_1C3E7C0(Instance, v8);
    }
    CrashReporter__AddCustomKey(
      (CrashReporter_o *)v11,
      (System_String_o *)StringLiteral_19760/*"game.last_quest_phase"*/,
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

  if ( (byte_4C54111 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C3E564(&Method_System_Nullable_int___ctor__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C54111 = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C538EE )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C538EE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    QuestInfo = QuestTree__GetQuestInfo(Instance, questId, 0);
    if ( !QuestInfo )
      return;
    v7 = QuestInfo;
    warId = QuestInfo->fields.warId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53637 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53637 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    Instance = (QuestTree_o *)MapControl_QuestInfo__GetSpotID(v7, 0);
    if ( !Master_object )
      goto LABEL_148;
    v11 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            (int32_t)Instance,
            (const MethodInfo_33B2FA4 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    LODWORD(Master_object) = MapControl_QuestInfo__GetSpotID(v7, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v11 )
    {
      if ( byte_4C5357B )
        goto LABEL_38;
    }
    else
    {
      if ( !byte_4C53636 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53636 = 1;
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
          (const MethodInfo_38DABE0 *)Method_System_Nullable_int___ctor__);
        v17 = v38;
      }
      else
      {
        v17 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (Il2CppObject *)HIDWORD(v17);
      if ( byte_4C5357B )
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
        if ( !byte_4C53631 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C53631 = 1;
        }
        v20 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v20 = TerminalPramsManager_TypeInfo;
        }
        v20->static_fields->_QuestId_k__BackingField = v19;
        questPhase = v7->fields.questPhase;
        if ( !byte_4C53635 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          v20 = TerminalPramsManager_TypeInfo;
          byte_4C53635 = 1;
        }
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = TerminalPramsManager_TypeInfo;
        }
        v20->static_fields->_PhaseCnt_k__BackingField = questPhase;
        endTime = v7->fields.endTime;
        if ( !byte_4C53632 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          v20 = TerminalPramsManager_TypeInfo;
          byte_4C53632 = 1;
        }
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = TerminalPramsManager_TypeInfo;
        }
        v20->static_fields->_EndTime_k__BackingField = endTime;
        if ( !byte_4C53D7A )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          v20 = TerminalPramsManager_TypeInfo;
          byte_4C53D7A = 1;
        }
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = TerminalPramsManager_TypeInfo;
        }
        v20->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 1;
        if ( !SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
          goto LABEL_151;
        v23 = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C51117 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C51117 = 1;
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
            if ( !byte_4C53633 )
            {
              sub_1C3E564(&TerminalPramsManager_TypeInfo);
              byte_4C53633 = 1;
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
            if ( !byte_4C53633 )
            {
              sub_1C3E564(&TerminalPramsManager_TypeInfo);
              byte_4C53633 = 1;
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
          if ( !byte_4C53633 )
          {
            sub_1C3E564(&TerminalPramsManager_TypeInfo);
            byte_4C53633 = 1;
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
        if ( !byte_4C50C86 )
        {
          sub_1C3E564(&TerminalSceneComponent_TypeInfo);
          byte_4C50C86 = 1;
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
        if ( !byte_4C50C86 )
        {
          sub_1C3E564(&TerminalSceneComponent_TypeInfo);
          byte_4C50C86 = 1;
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
            if ( !byte_4C50C86 )
            {
              sub_1C3E564(&TerminalSceneComponent_TypeInfo);
              byte_4C50C86 = 1;
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
            if ( !byte_4C51117 )
            {
              sub_1C3E564(&TerminalPramsManager_TypeInfo);
              byte_4C51117 = 1;
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
          if ( !byte_4C50C86 )
          {
            sub_1C3E564(&TerminalSceneComponent_TypeInfo);
            byte_4C50C86 = 1;
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
            if ( !byte_4C50C86 )
            {
              sub_1C3E564(&TerminalSceneComponent_TypeInfo);
              byte_4C50C86 = 1;
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
                if ( !byte_4C51506 )
                {
                  sub_1C3E564(&TerminalPramsManager_TypeInfo);
                  byte_4C51506 = 1;
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
        sub_1C3E7C0(Instance, v5);
      }
    }
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5357B = 1;
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

  if ( (byte_4C54112 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C54112 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C538EE )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C538EE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4C53637 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C53637 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = warId;
  if ( !SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
    goto LABEL_124;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C51117 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C51117 = 1;
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
      if ( !byte_4C53633 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53633 = 1;
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
      if ( !byte_4C53633 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53633 = 1;
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
    if ( !byte_4C53633 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53633 = 1;
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
    if ( !byte_4C51B7C )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C51B7C = 1;
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
  if ( !byte_4C5357B )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5357B = 1;
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
  if ( !byte_4C50C86 )
  {
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C50C86 = 1;
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
    if ( !byte_4C50C86 )
    {
      sub_1C3E564(&TerminalSceneComponent_TypeInfo);
      byte_4C50C86 = 1;
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
      if ( !byte_4C50C86 )
      {
        sub_1C3E564(&TerminalSceneComponent_TypeInfo);
        byte_4C50C86 = 1;
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
      if ( !byte_4C51117 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C51117 = 1;
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
    if ( !byte_4C50C86 )
    {
      sub_1C3E564(&TerminalSceneComponent_TypeInfo);
      byte_4C50C86 = 1;
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
      if ( !byte_4C50C86 )
      {
        sub_1C3E564(&TerminalSceneComponent_TypeInfo);
        byte_4C50C86 = 1;
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
      sub_1C3E7C0(v6, v4);
    }
  }
LABEL_114:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C51506 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C51506 = 1;
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

  if ( (byte_4C54113 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C54113 = 1;
  }
  WarEntityByWarID = 0;
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C538EE )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C538EE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4C53637 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C53637 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4C53633 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C53633 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DispState_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_135;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    warId,
    (const MethodInfo_33B2FA4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( !entity )
    return;
LABEL_25:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C51B7E )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C51B7E = 1;
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
  v9 = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_135;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    (Il2CppObject **)&WarEntityByWarID,
    PrioredParentId,
    (const MethodInfo_33B2FA4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( !WarEntityByWarID )
    return;
LABEL_40:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53637 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53637 = 1;
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
    if ( !byte_4C53633 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53633 = 1;
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
    if ( !byte_4C51B7C )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C51B7C = 1;
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
  if ( !byte_4C5357B )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5357B = 1;
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
  if ( !byte_4C50C86 )
  {
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C50C86 = 1;
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
  if ( !byte_4C50C86 )
  {
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C50C86 = 1;
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
    if ( !byte_4C50C86 )
    {
      sub_1C3E564(&TerminalSceneComponent_TypeInfo);
      byte_4C50C86 = 1;
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
    if ( !byte_4C51117 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C51117 = 1;
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
  if ( !byte_4C50C86 )
  {
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C50C86 = 1;
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
  if ( !byte_4C50C86 )
  {
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C50C86 = 1;
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
    sub_1C3E7C0(Master_object, v5);
  TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)Master_object, 0);
LABEL_127:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C51506 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C51506 = 1;
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
  if ( (byte_4C54150 & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_o *)sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54150 = 1;
  }
  if ( !v4 )
    sub_1C3E7C0(result, method);
  campaignDirectBonus = v4->fields.campaignDirectBonus;
  if ( campaignDirectBonus && campaignDirectBonus->max_length )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C54186 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C54186 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v6->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = campaignDirectBonus;
    sub_1C3E508(
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

  if ( (byte_4C5413B & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5413B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C54185 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54185 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignBonus_k__BackingField = campaignBonuses;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_CampaignBonus_k__BackingField, (int32_t)campaignBonuses, v2, v3);
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

  if ( (byte_4C54147 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54147 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->folderLastIdxs )
  {
    v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v6,
      (const MethodInfo_3402FC0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->folderLastIdxs = v6;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->folderLastIdxs, (int32_t)v6, v7, v8);
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
          (const MethodInfo_3404D3C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__),
        (folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs) == 0) )
  {
    sub_1C3E7C0(folderLastIdxs, *(_QWORD *)&idx);
  }
  System_Collections_Generic_Dictionary_int__int___Add(
    folderLastIdxs,
    warId,
    idx,
    (const MethodInfo_3403984 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !byte_4C54176 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54176 = 1;
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

  if ( (byte_4C5416D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___Add__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_Dictionary_int__int____ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_Dictionary_int__int___TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5416D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C54188 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54188 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->_ForcePlayEventTutorialArray_k__BackingField )
  {
    v6 = (System_Collections_Generic_HashSet_T__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_Dictionary_int__int___TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v6,
      (const MethodInfo_366C4CC *)Method_System_Collections_Generic_HashSet_Dictionary_int__int____ctor__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C541A7 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C541A7 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    p_ForcePlayEventTutorialArray_k__BackingField = (CGThumbnailListItem_o *)&v9->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
    p_ForcePlayEventTutorialArray_k__BackingField->klass = (CGThumbnailListItem_c *)v6;
    sub_1C3E508(p_ForcePlayEventTutorialArray_k__BackingField, (int32_t)v6, v7, v8);
  }
  v11 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v11,
    (const MethodInfo_3402FC0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v11 )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_int__int___Add(
    v11,
    eventId,
    flagType,
    (const MethodInfo_3403984 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C54188 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54188 = 1;
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
    sub_1C3E7C0(ForcePlayEventTutorialArray_k__BackingField, v13);
  System_Collections_Generic_HashSet_object___Add(
    ForcePlayEventTutorialArray_k__BackingField,
    (Il2CppObject *)v11,
    (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___Add__);
}


void TerminalPramsManager__SetQuestReleasedFocusState(int32_t questId, int32_t state, const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v7; // x1

  if ( (byte_4C5414D & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5414D = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v5);
  if ( !QuestFocusStateManager )
    sub_1C3E7C0(0, v7);
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
  il2cpp_array_size_t max_length; // x8
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

  if ( (byte_4C54151 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54151 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (CGThumbnailListItem_o *)&v5->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0;
  sub_1C3E508(p_mQuestRewardInfos, 0, v2, v3);
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
    sub_1C3E508(v14, (int32_t)rewardInfos, v9, v10);
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = (CGThumbnailListItem_o *)&v15->static_fields->mQuestPhaseRewardInfos;
  p_mQuestPhaseRewardInfos->klass = 0;
  sub_1C3E508(p_mQuestPhaseRewardInfos, 0, v9, v10);
  if ( !LODWORD(result->max_length) )
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
    sub_1C3E508(v22, (int32_t)resultQuestPhaseRewardInfos, v17, v18);
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestResultAfterEventRewardInfos = (CGThumbnailListItem_o *)&v23->static_fields->mQuestResultAfterEventRewardInfos;
  p_mQuestResultAfterEventRewardInfos->klass = 0;
  sub_1C3E508(p_mQuestResultAfterEventRewardInfos, 0, v17, v18);
  max_length = result->max_length;
  if ( !(_DWORD)max_length )
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
    sub_1C3E508(v31, (int32_t)resultAfterEventRewardInfos, v25, v26);
    max_length = result->max_length;
  }
  if ( !(_DWORD)max_length )
    goto LABEL_45;
  v32 = result->m_Items[0];
  if ( !v32 )
    goto LABEL_44;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)v32->fields.resultUseRewardAddItemRewardInfos,
                    0);
  resultUseRewardAddItemRewardInfos = 0;
  if ( IsNullOrEmpty )
    goto LABEL_37;
  if ( !LODWORD(result->max_length) )
LABEL_45:
    sub_1C3E7C8(IsNullOrEmpty, v8);
  v36 = result->m_Items[0];
  if ( !v36 )
LABEL_44:
    sub_1C3E7C0(IsNullOrEmpty, v8);
  resultUseRewardAddItemRewardInfos = v36->fields.resultUseRewardAddItemRewardInfos;
LABEL_37:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C50D6A )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D6A = 1;
  }
  v37 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v37 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v37->static_fields;
  static_fields->_UseAddRewardItemRewardInfos_k__BackingField = resultUseRewardAddItemRewardInfos;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&static_fields->_UseAddRewardItemRewardInfos_k__BackingField,
    (int32_t)resultUseRewardAddItemRewardInfos,
    v33,
    v34);
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
  if ( (byte_4C54145 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    byte_4C54145 = 1;
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
    v6 = System_String__Concat_63674716(mTerminalWarStartedIds, v5, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
    static_fields->mTerminalWarStartedIds = v6;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->mTerminalWarStartedIds, (int32_t)v6, v8, v9);
    TerminalPramsManager__Save_SaveData(v10);
  }
}


void TerminalPramsManager__SpotIdSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C54120 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_13722/*"TerminalSpotId"*/);
    byte_4C54120 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53839 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53839 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13722/*"TerminalSpotId"*/, v1->static_fields->_SpotId_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4C54126 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_13706/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C3E564(&StringLiteral_13707/*"TerminalBeforeEventActivityPointGauge"*/);
    byte_4C54126 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C5418D )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5418D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13706/*"TerminalBeforeEventActivityPoint"*/,
    v1->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0);
  if ( !byte_4C5418E )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5418E = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13707/*"TerminalBeforeEventActivityPointGauge"*/,
    v2->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventConquestInfoDispSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C5412B & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11468/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    byte_4C5412B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11468/*"SAVEKEY_TerminalConquestInfoDisp"*/, v1->static_fields->eventConquestInfoDisp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  struct EventConquestInfo_array *eventConquestInfos; // x19
  System_String_o *v3; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4C5412A & 1) == 0 )
  {
    sub_1C3E564(&EventConquestInfo___TypeInfo);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11469/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_1C3E564(&StringLiteral_11468/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    byte_4C5412A = 1;
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
    eventConquestInfos = (struct EventConquestInfo_array *)sub_1C3E60C(EventConquestInfo___TypeInfo, 0);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(&eventConquestInfos->obj, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11469/*"SAVEKEY_TerminalConquestInfos"*/, v3, 0);
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11468/*"SAVEKEY_TerminalConquestInfoDisp"*/, v4->static_fields->eventConquestInfoDisp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C5412C & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11470/*"SAVEKEY_TerminalCraftInfoDisp"*/);
    byte_4C5412C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11470/*"SAVEKEY_TerminalCraftInfoDisp"*/, v1->static_fields->eventCraftInfoDisp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  Il2CppObject *eventHarvestGrowthInfo; // x19
  System_String_o *v3; // x0

  if ( (byte_4C5412D & 1) == 0 )
  {
    sub_1C3E564(&EventHarvestGrowthInfo_TypeInfo);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11471/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    byte_4C5412D = 1;
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
    eventHarvestGrowthInfo = (Il2CppObject *)sub_1C3E7B0(EventHarvestGrowthInfo_TypeInfo);
    System_Object___ctor(eventHarvestGrowthInfo, 0);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(eventHarvestGrowthInfo, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11471/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v3, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *BeforeEventSubmarineSaveData_k__BackingField; // x19
  System_String_o *v4; // x0

  if ( (byte_4C54128 & 1) == 0 )
  {
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_13708/*"TerminalBeforeEventSubmarinePointData"*/);
    byte_4C54128 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53758 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53758 = 1;
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
    if ( !byte_4C53758 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53758 = 1;
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
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13708/*"TerminalBeforeEventSubmarinePointData"*/, v4, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C54135 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11473/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4C54135 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53D45 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53D45 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11473/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v1->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4C54134 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11474/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    byte_4C54134 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53F51 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53F51 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11474/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v1->static_fields->_SelectedStoryQuestId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalTransitionInfoSave_SaveData(
        TerminalTransitionInfo_o *terminalTransitionInfo,
        const MethodInfo *method)
{
  if ( (byte_4C54125 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_13728/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_1C3E564(&StringLiteral_13727/*"TerminalTransitionInfoMissionId"*/);
    byte_4C54125 = 1;
  }
  if ( terminalTransitionInfo )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13727/*"TerminalTransitionInfoMissionId"*/, terminalTransitionInfo->fields.missionId, 0);
    UnityEngine_PlayerPrefs__SetString(
      (System_String_o *)StringLiteral_13728/*"TerminalTransitionInfoVoiceAssetName"*/,
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

  if ( (byte_4C5415F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5415F = 1;
  }
  value = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C541A5 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C541A5 = 1;
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
          (const MethodInfo_340DBC8 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v7 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
    value = (Il2CppObject *)v7;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C541A5 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C541A5 = 1;
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
          (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        goto LABEL_24;
      }
    }
LABEL_30:
    sub_1C3E7C0(v5, *(_QWORD *)&day);
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)value,
         day,
         (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__) )
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
      *(const MethodInfo_379843C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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

  if ( (byte_4C54017 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54017 = 1;
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

  if ( (byte_4C54039 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54039 = 1;
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

  if ( (byte_4C54071 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C54071 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__checkNowScene(Instance, 34, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C50C86 )
    {
      sub_1C3E564(&TerminalSceneComponent_TypeInfo);
      byte_4C50C86 = 1;
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
      if ( !byte_4C50C86 )
      {
        sub_1C3E564(&TerminalSceneComponent_TypeInfo);
        byte_4C50C86 = 1;
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
      sub_1C3E7C0(Instance, v2);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C50D67 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D67 = 1;
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

  if ( (byte_4C5408C & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5408C = 1;
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

  if ( (byte_4C5408E & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5408E = 1;
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

  if ( (byte_4C54092 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54092 = 1;
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

  if ( (byte_4C540FB & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540FB = 1;
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

  if ( (byte_4C54080 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54080 = 1;
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

  if ( (byte_4C540B2 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540B2 = 1;
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

  if ( (byte_4C540B6 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540B6 = 1;
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

  if ( (byte_4C540B0 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540B0 = 1;
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

  if ( (byte_4C540B4 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540B4 = 1;
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

  if ( (byte_4C540C8 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540C8 = 1;
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

  if ( (byte_4C54057 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54057 = 1;
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

  if ( (byte_4C54059 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54059 = 1;
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

  if ( (byte_4C5408A & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5408A = 1;
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

  if ( (byte_4C540CC & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540CC = 1;
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

  if ( (byte_4C54045 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54045 = 1;
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

  if ( (byte_4C5404D & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5404D = 1;
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

  if ( (byte_4C54047 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54047 = 1;
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

  if ( (byte_4C53FF5 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53FF5 = 1;
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

  if ( (byte_4C5403B & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5403B = 1;
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

  if ( (byte_4C5405B & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5405B = 1;
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

  if ( (byte_4C54090 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54090 = 1;
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

  if ( (byte_4C54098 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54098 = 1;
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

  if ( (byte_4C54082 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54082 = 1;
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

  if ( (byte_4C5407E & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5407E = 1;
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

  if ( (byte_4C54025 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54025 = 1;
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

  if ( (byte_4C54094 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54094 = 1;
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

  if ( (byte_4C540BC & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540BC = 1;
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

  if ( (byte_4C540FD & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540FD = 1;
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

  if ( (byte_4C54107 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54107 = 1;
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

  if ( (byte_4C540F1 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540F1 = 1;
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

  if ( (byte_4C540DF & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540DF = 1;
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

  if ( (byte_4C540E3 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540E3 = 1;
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

  if ( (byte_4C5410D & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5410D = 1;
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

  if ( (byte_4C540D9 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540D9 = 1;
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

  if ( (byte_4C540DB & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540DB = 1;
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

  if ( (byte_4C540F9 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540F9 = 1;
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

  if ( (byte_4C540B8 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540B8 = 1;
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

  if ( (byte_4C540E5 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540E5 = 1;
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

  if ( (byte_4C54043 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54043 = 1;
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

  if ( (byte_4C5404F & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5404F = 1;
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

  if ( (byte_4C5404B & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5404B = 1;
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

  if ( (byte_4C540C4 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540C4 = 1;
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

  if ( (byte_4C54019 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54019 = 1;
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

  if ( (byte_4C5401B & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5401B = 1;
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

  if ( (byte_4C5402D & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5402D = 1;
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

  if ( (byte_4C5401D & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5401D = 1;
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

  if ( (byte_4C54003 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54003 = 1;
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

  if ( (byte_4C54101 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54101 = 1;
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

  if ( (byte_4C5409A & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5409A = 1;
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

  if ( (byte_4C5400B & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5400B = 1;
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

  if ( (byte_4C54009 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54009 = 1;
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

  if ( (byte_4C540D1 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540D1 = 1;
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

  if ( (byte_4C54023 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54023 = 1;
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

  if ( (byte_4C540DD & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540DD = 1;
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

  if ( (byte_4C540E1 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540E1 = 1;
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

  if ( (byte_4C54105 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54105 = 1;
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

  if ( (byte_4C54021 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54021 = 1;
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

  if ( (byte_4C5402B & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5402B = 1;
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

  if ( (byte_4C54031 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54031 = 1;
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

  if ( (byte_4C5409C & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5409C = 1;
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

  if ( (byte_4C54053 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54053 = 1;
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

  if ( (byte_4C5402F & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5402F = 1;
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

  if ( (byte_4C540AA & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540AA = 1;
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

  if ( (byte_4C540AC & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540AC = 1;
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

  if ( (byte_4C540AE & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540AE = 1;
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

  if ( (byte_4C54051 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54051 = 1;
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

  if ( (byte_4C54029 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54029 = 1;
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

  if ( (byte_4C54033 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54033 = 1;
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

  if ( (byte_4C540F7 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540F7 = 1;
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

  if ( (byte_4C54049 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54049 = 1;
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

  if ( (byte_4C540E7 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540E7 = 1;
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

  if ( (byte_4C540C2 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540C2 = 1;
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

  if ( (byte_4C540C0 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540C0 = 1;
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

  if ( (byte_4C5403D & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5403D = 1;
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

  if ( (byte_4C5401F & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5401F = 1;
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

  if ( (byte_4C54013 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54013 = 1;
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

  if ( (byte_4C54011 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54011 = 1;
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

  if ( (byte_4C54015 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54015 = 1;
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

  if ( (byte_4C540F3 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540F3 = 1;
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

  if ( (byte_4C54041 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54041 = 1;
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

  if ( (byte_4C5403F & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5403F = 1;
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

  if ( (byte_4C5410F & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5410F = 1;
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

  if ( (byte_4C54035 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54035 = 1;
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

  if ( (byte_4C540BA & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540BA = 1;
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

  if ( (byte_4C540CE & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540CE = 1;
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

  if ( (byte_4C54001 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54001 = 1;
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

  if ( (byte_4C54027 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54027 = 1;
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

  if ( (byte_4C540A8 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540A8 = 1;
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

  if ( (byte_4C54055 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54055 = 1;
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

  if ( (byte_4C540D0 & 1) == 0 )
  {
    sub_1C3E564(&QuestFocusStateManager_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540D0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->questFocusStateManager )
  {
    v2 = (QuestFocusStateManager_o *)sub_1C3E7B0(QuestFocusStateManager_TypeInfo);
    QuestFocusStateManager___ctor(v2, 0);
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    p_questFocusStateManager = (CGThumbnailListItem_o *)&v5->static_fields->questFocusStateManager;
    p_questFocusStateManager->klass = (CGThumbnailListItem_c *)v2;
    sub_1C3E508(p_questFocusStateManager, (int32_t)v2, v3, v4);
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

  if ( (byte_4C53FFF & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53FFF = 1;
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

  if ( (byte_4C540E9 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540E9 = 1;
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

  if ( (byte_4C540EB & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540EB = 1;
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

  if ( (byte_4C540A6 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540A6 = 1;
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

  if ( (byte_4C5400D & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5400D = 1;
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

  if ( (byte_4C54037 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54037 = 1;
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

  if ( (byte_4C540BE & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540BE = 1;
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

  if ( (byte_4C5400F & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5400F = 1;
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

  if ( (byte_4C54007 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54007 = 1;
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

  if ( (byte_4C54005 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54005 = 1;
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

  if ( (byte_4C540C6 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540C6 = 1;
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

  if ( (byte_4C5405F & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5405F = 1;
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

  if ( (byte_4C53FFD & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53FFD = 1;
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

  if ( (byte_4C53FFB & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53FFB = 1;
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

  if ( (byte_4C53FF9 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53FF9 = 1;
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

  if ( (byte_4C540ED & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540ED = 1;
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

  if ( (byte_4C540CA & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540CA = 1;
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

  if ( (byte_4C54086 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54086 = 1;
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

  if ( (byte_4C54088 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54088 = 1;
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

  if ( (byte_4C540FF & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540FF = 1;
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

  if ( (byte_4C54103 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54103 = 1;
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

  if ( (byte_4C5409E & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5409E = 1;
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

  if ( (byte_4C53FF7 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53FF7 = 1;
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

  if ( (byte_4C5405D & 1) == 0 )
  {
    sub_1C3E564(&MapZoom_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5405D = 1;
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

  if ( (byte_4C5407C & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5407C = 1;
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

  if ( (byte_4C54067 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54067 = 1;
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

  if ( (byte_4C54065 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54065 = 1;
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

  if ( (byte_4C54069 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54069 = 1;
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

  if ( (byte_4C54072 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54072 = 1;
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

  if ( (byte_4C540A2 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540A2 = 1;
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

  if ( (byte_4C54096 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54096 = 1;
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

  if ( (byte_4C540A4 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540A4 = 1;
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

  if ( (byte_4C540D7 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540D7 = 1;
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

  if ( (byte_4C540A0 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540A0 = 1;
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

  if ( (byte_4C540EF & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540EF = 1;
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

  if ( (byte_4C54063 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54063 = 1;
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

  if ( (byte_4C5406F & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5406F = 1;
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

  if ( (byte_4C54061 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54061 = 1;
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

  if ( (byte_4C5406D & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5406D = 1;
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

  if ( (byte_4C5406B & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5406B = 1;
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

  if ( (byte_4C54076 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54076 = 1;
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

  if ( (byte_4C54078 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54078 = 1;
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

  if ( (byte_4C54074 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54074 = 1;
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

  if ( (byte_4C5407A & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5407A = 1;
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

  if ( (byte_4C540F5 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540F5 = 1;
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

  if ( (byte_4C54084 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54084 = 1;
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

  if ( (byte_4C54118 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54118 = 1;
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

  if ( (byte_4C54117 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54117 = 1;
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

  if ( (byte_4C54018 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54018 = 1;
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

  if ( (byte_4C5403A & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5403A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BattleSetupKeep_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_BattleSetupKeep_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_BeforeEventActivityPoint(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C5408D & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5408D = 1;
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

  if ( (byte_4C5408F & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5408F = 1;
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

  if ( (byte_4C54093 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54093 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (CGThumbnailListItem_o *)v5->static_fields;
  static_fields[3].klass = (CGThumbnailListItem_c *)value;
  sub_1C3E508(static_fields + 3, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_BeforeQuestStartWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C540FC & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540FC = 1;
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

  if ( (byte_4C54081 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54081 = 1;
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

  if ( (byte_4C540B3 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540B3 = 1;
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

  if ( (byte_4C540B7 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540B7 = 1;
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

  if ( (byte_4C540B1 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540B1 = 1;
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

  if ( (byte_4C540B5 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540B5 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BlankEarthTransformData_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_BlankEarthTransformData_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_CaldeaGateFolderFocusWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C540C9 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540C9 = 1;
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

  if ( (byte_4C54058 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54058 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignBonus_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_CampaignBonus_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_CampaignDirectBonus(
        CommonUI_CampaignDirectBonusData_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C5405A & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5405A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_ClearEventQuestIds(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C5408B & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5408B = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_ClearEventQuestIds_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_ClearEventQuestIds_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_CurrentWaveNum(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C540CD & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540CD = 1;
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

  if ( (byte_4C54046 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54046 = 1;
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

  if ( (byte_4C5404E & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5404E = 1;
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

  if ( (byte_4C54048 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54048 = 1;
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

  if ( (byte_4C540D6 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540D6 = 1;
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

  if ( (byte_4C540D5 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540D5 = 1;
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

  if ( (byte_4C540D3 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540D3 = 1;
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

  if ( (byte_4C540D4 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540D4 = 1;
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

  if ( (byte_4C53FF6 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53FF6 = 1;
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

  if ( (byte_4C5403C & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5403C = 1;
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

  if ( (byte_4C5405C & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5405C = 1;
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

  if ( (byte_4C54091 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54091 = 1;
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

  if ( (byte_4C54099 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54099 = 1;
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

  if ( (byte_4C54083 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54083 = 1;
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

  if ( (byte_4C5407F & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5407F = 1;
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

  if ( (byte_4C54026 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54026 = 1;
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

  if ( (byte_4C54095 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54095 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void TerminalPramsManager__set_EventUIEffectClearQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C540BD & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540BD = 1;
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

  if ( (byte_4C540FE & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540FE = 1;
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

  if ( (byte_4C54108 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54108 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_ForcePlayEventTutorialArray_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&static_fields->_ForcePlayEventTutorialArray_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void TerminalPramsManager__set_FriendshipQuestDialogOpenId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C540F2 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540F2 = 1;
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

  if ( (byte_4C540E0 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540E0 = 1;
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

  if ( (byte_4C540E4 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540E4 = 1;
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

  if ( (byte_4C5410E & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5410E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v3 = value;
  if ( !byte_4C51506 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C51506 = 1;
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

  if ( (byte_4C540DA & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540DA = 1;
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

  if ( (byte_4C540DC & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540DC = 1;
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

  if ( (byte_4C540FA & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540FA = 1;
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

  if ( (byte_4C540B9 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540B9 = 1;
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

  if ( (byte_4C540E6 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540E6 = 1;
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

  if ( (byte_4C54044 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54044 = 1;
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

  if ( (byte_4C54050 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54050 = 1;
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

  if ( (byte_4C5404C & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5404C = 1;
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

  if ( (byte_4C540C5 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540C5 = 1;
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

  if ( (byte_4C5401A & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5401A = 1;
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

  if ( (byte_4C5401C & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5401C = 1;
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

  if ( (byte_4C5402E & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5402E = 1;
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

  if ( (byte_4C5401E & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5401E = 1;
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

  if ( (byte_4C54004 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54004 = 1;
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

  if ( (byte_4C54102 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54102 = 1;
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

  if ( (byte_4C5409B & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5409B = 1;
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

  if ( (byte_4C5400C & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5400C = 1;
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

  if ( (byte_4C5400A & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5400A = 1;
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

  if ( (byte_4C540D2 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540D2 = 1;
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

  if ( (byte_4C54024 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54024 = 1;
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

  if ( (byte_4C540DE & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540DE = 1;
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

  if ( (byte_4C540E2 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540E2 = 1;
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

  if ( (byte_4C54106 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54106 = 1;
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

  if ( (byte_4C54022 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54022 = 1;
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

  if ( (byte_4C5402C & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5402C = 1;
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

  if ( (byte_4C54032 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54032 = 1;
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

  if ( (byte_4C5409D & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5409D = 1;
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

  if ( (byte_4C54054 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54054 = 1;
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

  if ( (byte_4C54030 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54030 = 1;
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

  if ( (byte_4C540AB & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540AB = 1;
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

  if ( (byte_4C540AD & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540AD = 1;
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

  if ( (byte_4C540AF & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540AF = 1;
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

  if ( (byte_4C54052 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54052 = 1;
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

  if ( (byte_4C5402A & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5402A = 1;
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

  if ( (byte_4C54034 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54034 = 1;
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

  if ( (byte_4C540F8 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540F8 = 1;
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

  if ( (byte_4C5404A & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5404A = 1;
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

  if ( (byte_4C540E8 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540E8 = 1;
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

  if ( (byte_4C540C3 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540C3 = 1;
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

  if ( (byte_4C540C1 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540C1 = 1;
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

  if ( (byte_4C5403E & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5403E = 1;
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

  if ( (byte_4C54020 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54020 = 1;
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

  if ( (byte_4C54014 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54014 = 1;
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

  if ( (byte_4C54012 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54012 = 1;
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

  if ( (byte_4C54016 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54016 = 1;
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

  if ( (byte_4C540F4 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540F4 = 1;
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

  if ( (byte_4C54042 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54042 = 1;
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

  if ( (byte_4C54040 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54040 = 1;
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

  if ( (byte_4C54110 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54110 = 1;
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

  if ( (byte_4C54036 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54036 = 1;
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

  if ( (byte_4C540BB & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540BB = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_NoticeLastModified_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_NoticeLastModified_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_OldUserEventPoint(UserEventPointEntity_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C540CF & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540CF = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_OldUserEventPoint_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_OldUserEventPoint_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_PhaseCnt(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C54002 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54002 = 1;
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

  if ( (byte_4C54028 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54028 = 1;
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

  if ( (byte_4C540A9 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540A9 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_PlayedTerminalEffects_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_PlayedTerminalEffects_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_PlayerGenderType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C54056 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54056 = 1;
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

  if ( (byte_4C54000 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54000 = 1;
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

  if ( (byte_4C540EA & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540EA = 1;
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

  if ( (byte_4C540EC & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540EC = 1;
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

  if ( (byte_4C540A7 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540A7 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_QuestRandomGroupList_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_QuestRandomGroupList_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_QuestReleaseFocusQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C5400E & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5400E = 1;
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

  if ( (byte_4C54038 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54038 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_QuestWindowMessage_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_SceneMoveQuestClearedInfo(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C540BF & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540BF = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SceneMoveQuestClearedInfo_k__BackingField = value;
  sub_1C3E508(
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

  if ( (byte_4C54010 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54010 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_SelectedRecollectionWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C54008 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54008 = 1;
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

  if ( (byte_4C54006 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54006 = 1;
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

  if ( (byte_4C540C7 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540C7 = 1;
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

  if ( (byte_4C54060 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54060 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SpecifiedChangeSceneInfo_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void TerminalPramsManager__set_SpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C53FFE & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53FFE = 1;
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

  if ( (byte_4C53FFC & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53FFC = 1;
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

  if ( (byte_4C53FFA & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53FFA = 1;
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

  if ( (byte_4C540EE & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540EE = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_TalkScriptInfo_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_TalkScriptInfo_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_TerminalTopFocusWarIdByShortcut(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C540CB & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540CB = 1;
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

  if ( (byte_4C54087 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54087 = 1;
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

  if ( (byte_4C54089 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54089 = 1;
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

  if ( (byte_4C54100 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54100 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_TransitionScrollTabName_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_TransitionScrollTabName_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_UseAddRewardItemRewardInfos(QuestRewardInfo_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C54104 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54104 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_UseAddRewardItemRewardInfos_k__BackingField = value;
  sub_1C3E508(
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

  if ( (byte_4C5409F & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5409F = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_WarBoardData_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_WarBoardData_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_WarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C53FF8 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53FF8 = 1;
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

  if ( (byte_4C5405E & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5405E = 1;
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

  if ( (byte_4C5407D & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5407D = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventDailyPoint_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_eventDailyPoint_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_eventPointWinReward(EventPointWinReward_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C54068 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54068 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventPointWinReward_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_eventPointWinReward_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_eventPointWinType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C54066 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54066 = 1;
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

  if ( (byte_4C5406A & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5406A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventRaceBoost_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_eventRaceBoost_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_eventTowerReward(EventTowerReward_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C54073 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54073 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventTowerReward_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_eventTowerReward_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_isFortificationCheck(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C540A3 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540A3 = 1;
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

  if ( (byte_4C54097 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54097 = 1;
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

  if ( (byte_4C540A5 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540A5 = 1;
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

  if ( (byte_4C540D8 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540D8 = 1;
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

  if ( (byte_4C540A1 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540A1 = 1;
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

  if ( (byte_4C540F0 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540F0 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_limitImageAnnounces_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_limitImageAnnounces_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_oldPersonalBoss(UserSuperBossEntity_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C54064 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54064 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_oldPersonalBoss_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_oldPersonalBoss_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_oldQuestIdForHeaderEvent(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C54070 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54070 = 1;
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

  if ( (byte_4C54062 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54062 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_oldSuperBoss_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_oldSuperBoss_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_questClearCostumeGet(CostumeReleaseAnnounce_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  CGThumbnailListItem_o *static_fields; // x8

  if ( (byte_4C5406E & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5406E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (CGThumbnailListItem_o *)v5->static_fields;
  static_fields[2].klass = (CGThumbnailListItem_c *)value;
  sub_1C3E508(static_fields + 2, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_questClearCostumeRelease(CostumeReleaseAnnounce_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C5406C & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5406C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_questClearCostumeRelease_k__BackingField = value;
  sub_1C3E508(
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

  if ( (byte_4C54077 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54077 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultBoostItemRewardInfo_k__BackingField = value;
  sub_1C3E508(
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

  if ( (byte_4C54079 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54079 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField = value;
  sub_1C3E508(
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

  if ( (byte_4C54075 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54075 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultEventTowerRewardInfo_k__BackingField = value;
  sub_1C3E508(
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

  if ( (byte_4C5407B & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5407B = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_timeStatusRecord_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_timeStatusRecord_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_updateProfileInfoEntity(
        UpdateProfileDialogInfoEntity_array *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C540F6 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C540F6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_updateProfileInfoEntity_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_updateProfileInfoEntity_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager__set_warClearReward(WarClearReward_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4C54085 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C54085 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_warClearReward_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_warClearReward_k__BackingField, (int32_t)value, v2, v3);
}


void TerminalPramsManager_ClearData___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C541AE & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C3E564(&StringLiteral_13376/*"TERMINAL_CLEAR_REWARD_DISP"*/);
    byte_4C541AE = 1;
  }
  TerminalPramsManager_ClearData_TypeInfo->static_fields->SAVEKEY_CLEAR_REWARD_DISP = (struct System_String_o *)StringLiteral_13376/*"TERMINAL_CLEAR_REWARD_DISP"*/;
  sub_1C3E508(
    (CGThumbnailListItem_o *)TerminalPramsManager_ClearData_TypeInfo->static_fields,
    StringLiteral_13376/*"TERMINAL_CLEAR_REWARD_DISP"*/,
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

  if ( (byte_4C541AC & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C541AC = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.qClearHeroineInfo = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, 0, v3, v4);
  this->fields.questRewardInfos = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questRewardInfos, 0, v5, v6);
  this->fields.questPhaseRewardInfos = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questPhaseRewardInfos, 0, v7, v8);
  this->fields.questResultAfterEventRewardInfos = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questResultAfterEventRewardInfos, 0, v9, v10);
  this->fields.resultEventPanelRewardInfos = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.resultEventPanelRewardInfos, 0, v11, v12);
  this->fields.panelEventPoint = 0;
  *(_QWORD *)&this->fields.clearedLastBattleRaidId = -1;
  this->fields.joinGroup = -1;
  this->fields.mOldSuperBoss = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mOldSuperBoss, 0, v13, v14);
  this->fields.oldPersonalBoss = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.oldPersonalBoss, 0, v15, v16);
  this->fields.evPointWinReward = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.evPointWinReward, 0, v17, v18);
  this->fields.evPointWinType = 0;
  this->fields.evRaceBoost = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.evRaceBoost, 0, v19, v20);
  this->fields.questClearCostume = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questClearCostume, 0, v21, v22);
  this->fields.questClearCostumeGetInfo = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questClearCostumeGetInfo, 0, v23, v24);
  this->fields.eventTowerReward = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventTowerReward, 0, v25, v26);
  this->fields.resultEventTowerRewardInfo = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.resultEventTowerRewardInfo, 0, v27, v28);
  this->fields.warClearReward = 0;
  this->fields.isDispOnly = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.warClearReward, 0, v29, v30);
  v33 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  this->fields.EventActivityPointEffectState = v33->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  this->fields.limitImageAnnounces = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.limitImageAnnounces, 0, v31, v32);
  this->fields.isOrdealCallWarClear = 0;
  this->fields.eventMuralId = 0;
  this->fields.playHappinessCounterEffect = 0;
  this->fields.oldUserEventPoint = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.oldUserEventPoint, 0, v34, v35);
  this->fields.UseAddRewardItemRewardInfos = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.UseAddRewardItemRewardInfos, 0, v36, v37);
}


void TerminalPramsManager_ClearData___ctor_37364076(
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
  if ( (byte_4C541AD & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Empty_QuestRewardInfo___);
    sub_1C3E564(&BattleDropItem___TypeInfo);
    sub_1C3E564(&CostumeReleaseAnnounce___TypeInfo);
    sub_1C3E564(&LimitImageAnnounce___TypeInfo);
    sub_1C3E564(&TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
    sub_1C3E564(&QuestRewardInfo___TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&UserSuperBossEntity___TypeInfo);
    sub_1C3E564(&WarClearReward___TypeInfo);
    byte_4C541AD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v41 = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)sub_1C3E7B0(TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
  v43 = v41;
  if ( qcrHeroineInfo )
  {
    TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_37363304(v41, qcrHeroineInfo, v42);
    if ( this )
      goto LABEL_5;
LABEL_34:
    sub_1C3E7C0(v44, v45);
  }
  System_Object___ctor((Il2CppObject *)v41, 0);
  v43->fields.oldUsrSvtData = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v43->fields, 0, v76, v77);
  if ( !this )
    goto LABEL_34;
LABEL_5:
  this->fields.qClearHeroineInfo = v43;
  v48 = qClear;
  v49 = pclear;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v43, v46, v47);
  if ( !qri )
    qri = (QuestRewardInfo_array *)sub_1C3E60C(QuestRewardInfo___TypeInfo, 0);
  this->fields.questRewardInfos = qri;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questRewardInfos, (int32_t)qri, v50, v51);
  if ( !questPhaseRewardInfos )
    questPhaseRewardInfos = (QuestRewardInfo_array *)sub_1C3E60C(QuestRewardInfo___TypeInfo, 0);
  this->fields.questPhaseRewardInfos = questPhaseRewardInfos;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questPhaseRewardInfos, (int32_t)questPhaseRewardInfos, v52, v53);
  this->fields.questClear = v48;
  this->fields.phaseClear = v49;
  this->fields.clearedLastBattleRaidId = lastRaidId;
  this->fields.clearedBattleRaidId = raidId;
  this->fields.joinGroup = groupjoin;
  if ( !oldSuperBoss )
    v31 = (struct UserSuperBossEntity_array *)sub_1C3E60C(UserSuperBossEntity___TypeInfo, 0);
  this->fields.mOldSuperBoss = v31;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mOldSuperBoss, (int32_t)v31, v54, v55);
  if ( !oldPersonalBoss )
    v40 = (struct UserSuperBossEntity_array *)sub_1C3E60C(UserSuperBossEntity___TypeInfo, 0);
  this->fields.oldPersonalBoss = v40;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.oldPersonalBoss, (int32_t)v40, v56, v57);
  this->fields.evPointWinReward = evpWinReward;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.evPointWinReward, (int32_t)evpWinReward, v58, v59);
  this->fields.evRaceBoost = evRace;
  this->fields.evPointWinType = evpWinType;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.evRaceBoost, (int32_t)evRace, v60, v61);
  if ( !questClearCostumeRelease )
    v39 = (struct CostumeReleaseAnnounce_array *)sub_1C3E60C(CostumeReleaseAnnounce___TypeInfo, 0);
  this->fields.questClearCostume = v39;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questClearCostume, (int32_t)v39, v62, v63);
  if ( !questClearCostumeGet )
    v38 = (struct CostumeReleaseAnnounce_array *)sub_1C3E60C(CostumeReleaseAnnounce___TypeInfo, 0);
  this->fields.questClearCostumeGetInfo = v38;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questClearCostumeGetInfo, (int32_t)v38, v64, v65);
  this->fields.eventTowerReward = evTowerReward;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventTowerReward, (int32_t)evTowerReward, v66, v67);
  v70 = resultEvTowerRewardInfo;
  if ( !resultEvTowerRewardInfo )
    v70 = (struct QuestRewardInfo_array *)sub_1C3E60C(QuestRewardInfo___TypeInfo, 0);
  this->fields.resultEventTowerRewardInfo = v70;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.resultEventTowerRewardInfo, (int32_t)v70, v68, v69);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53D55 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53D55 = 1;
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
    if ( !byte_4C53D55 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53D55 = 1;
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
    resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1C3E60C(
                                                                                  QuestRewardInfo___TypeInfo,
                                                                                  0);
  }
  this->fields.resultBoostItemRewardInfo = resultBoostItemRewardInfo_k__BackingField;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.resultBoostItemRewardInfo,
    (int32_t)resultBoostItemRewardInfo_k__BackingField,
    v71,
    v72);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53D4D )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53D4D = 1;
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
    if ( !byte_4C53D4D )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53D4D = 1;
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
    resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1C3E60C(
                                                                                            QuestRewardInfo___TypeInfo,
                                                                                            0);
  }
  this->fields.resultEventBoardGameTokenRewardInfo = resultEventBoardGameTokenRewardInfo_k__BackingField;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.resultEventBoardGameTokenRewardInfo,
    (int32_t)resultEventBoardGameTokenRewardInfo_k__BackingField,
    v78,
    v79);
  v85 = warClearRewardIn;
  this->fields.isDispOnly = dispOnly;
  if ( !warClearRewardIn )
    v85 = (struct WarClearReward_array *)sub_1C3E60C(WarClearReward___TypeInfo, 0);
  this->fields.warClearReward = v85;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.warClearReward, (int32_t)v85, v83, v84);
  v88 = questResultAfterEventRewardInfos;
  this->fields.isWarBoardClear = isWarBoardClear;
  this->fields.EventActivityPointEffectState = eventActivityPointEffectState;
  if ( !questResultAfterEventRewardInfos )
    v88 = (struct BattleDropItem_array *)sub_1C3E60C(BattleDropItem___TypeInfo, 0);
  this->fields.questResultAfterEventRewardInfos = v88;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questResultAfterEventRewardInfos, (int32_t)v88, v86, v87);
  v91 = resultEventPanelRewardInfos;
  if ( !resultEventPanelRewardInfos )
    v91 = (struct BattleDropItem_array *)sub_1C3E60C(BattleDropItem___TypeInfo, 0);
  this->fields.resultEventPanelRewardInfos = v91;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.resultEventPanelRewardInfos, (int32_t)v91, v89, v90);
  v94 = limitImageAnnounces;
  this->fields.panelEventPoint = panelEventPoint;
  if ( !limitImageAnnounces )
    v94 = (struct LimitImageAnnounce_array *)sub_1C3E60C(LimitImageAnnounce___TypeInfo, 0);
  this->fields.limitImageAnnounces = v94;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.limitImageAnnounces, (int32_t)v94, v92, v93);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C5357A )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5357A = 1;
  }
  v97 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v97 = TerminalPramsManager_TypeInfo;
  }
  this->fields.isOrdealCallWarClear = v97->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4C53D50 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v97 = TerminalPramsManager_TypeInfo;
    byte_4C53D50 = 1;
  }
  if ( !v97->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v97);
    v97 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventMuralId = v97->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_4C53F52 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v97 = TerminalPramsManager_TypeInfo;
    byte_4C53F52 = 1;
  }
  if ( !v97->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v97);
    v97 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventActionQuestId = v97->static_fields->_EventActionQuestId_k__BackingField;
  if ( !byte_4C53D52 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v97 = TerminalPramsManager_TypeInfo;
    byte_4C53D52 = 1;
  }
  if ( !v97->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v97);
    v97 = TerminalPramsManager_TypeInfo;
  }
  this->fields.playHappinessCounterEffect = v97->static_fields->_PlayHappinessCounterEffect_k__BackingField;
  if ( !byte_4C53757 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    v97 = TerminalPramsManager_TypeInfo;
    byte_4C53757 = 1;
  }
  if ( !v97->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v97);
    v97 = TerminalPramsManager_TypeInfo;
  }
  v98 = useAddRewardItemRewardInfos;
  OldUserEventPoint_k__BackingField = v97->static_fields->_OldUserEventPoint_k__BackingField;
  this->fields.oldUserEventPoint = OldUserEventPoint_k__BackingField;
  sub_1C3E508(
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
      sub_1C8ECD4(Method_System_Array_Empty_QuestRewardInfo___);
      v104 = v103[7];
    }
    v105 = *(_QWORD *)(v104 + 16);
    if ( (*(_BYTE *)(v105 + 309) & 1) == 0 )
      v105 = sub_1C8EC78(inited);
    if ( !*(_DWORD *)(v105 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v105);
    v106 = *(_QWORD *)(v103[7] + 16LL);
    if ( (*(_BYTE *)(v106 + 309) & 1) == 0 )
      v106 = sub_1C8EC78(inited);
    v98 = **(struct QuestRewardInfo_array ***)(v106 + 184);
  }
  this->fields.UseAddRewardItemRewardInfos = v98;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.UseAddRewardItemRewardInfos, (int32_t)v98, v100, v101);
}


void TerminalPramsManager_OldHeroineLawData___ctor(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalPramsManager_OldHeroineLawData___ctor_37362540(
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

  if ( (byte_4C541A8 & 1) == 0 )
  {
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C541A8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !uSvtEnt )
    sub_1C3E7C0(v5, v6);
  v7 = *(_OWORD *)&uSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  this->fields.id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v12, 0);
  v8 = *(_OWORD *)&uSvtEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v11, 0);
  v10 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v14, 0);
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
                              uSvtEnt->fields.limitCount,
                              0);
  this->fields.imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
                                   uSvtEnt->fields.imageLimitCount,
                                   0);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
                                  uSvtEnt->fields.dispLimitCount,
                                  0);
  this->fields.commandCardLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
                                         uSvtEnt->fields.commandCardLimitCount,
                                         0);
  this->fields.iconLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
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

  if ( (byte_4C541A9 & 1) == 0 )
  {
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&UserServantEntity_TypeInfo);
    byte_4C541A9 = 1;
  }
  v3 = sub_1C3E7B0(UserServantEntity_TypeInfo);
  UserServantEntity___ctor((UserServantEntity_o *)v3, 0);
  id = this->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v12, id, 0);
  v13 = v12;
  if ( !v3 )
    sub_1C3E7C0(v5, v6);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, 0, v3, v4);
}


void TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_37363304(
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

  if ( (byte_4C541AA & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_OldHeroineLawData_TypeInfo);
    byte_4C541AA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !qClearHeroineInfo )
    sub_1C3E7C0(v5, v6);
  oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
  v8 = (TerminalPramsManager_OldHeroineLawData_o *)sub_1C3E7B0(TerminalPramsManager_OldHeroineLawData_TypeInfo);
  TerminalPramsManager_OldHeroineLawData___ctor_37362540(v8, oldUsrSvtData, v9);
  this->fields.oldUsrSvtData = v8;
  p_fields = &this->fields;
  sub_1C3E508((CGThumbnailListItem_o *)p_fields, (int32_t)v8, v11, v12);
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

  if ( (byte_4C541AB & 1) == 0 )
  {
    sub_1C3E564(&QuestClearHeroineInfo_TypeInfo);
    byte_4C541AB = 1;
  }
  v3 = sub_1C3E7B0(QuestClearHeroineInfo_TypeInfo);
  QuestClearHeroineInfo___ctor((QuestClearHeroineInfo_o *)v3, 0);
  oldUsrSvtData = this->fields.oldUsrSvtData;
  if ( !oldUsrSvtData
    || (oldUsrSvtData = (TerminalPramsManager_OldHeroineLawData_o *)TerminalPramsManager_OldHeroineLawData__GetLoad(
                                                                      oldUsrSvtData,
                                                                      v4),
        !v3) )
  {
    sub_1C3E7C0(oldUsrSvtData, v4);
  }
  *(_QWORD *)(v3 + 16) = oldUsrSvtData;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 16), (int32_t)oldUsrSvtData, v6, v7);
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

  if ( (byte_4C541AF & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager___c_TypeInfo);
    byte_4C541AF = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(TerminalPramsManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalPramsManager___c_TypeInfo->static_fields->__9 = (struct TerminalPramsManager___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)TerminalPramsManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C541B0 & 1) == 0 )
  {
    this = (TerminalPramsManager___c_o *)sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C541B0 = 1;
  }
  if ( !n )
    sub_1C3E7C0(this, n);
  questId = n->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C50D67 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D67 = 1;
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
  if ( (byte_4C541B1 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C541B1 = 1;
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
    sub_1C3E7C0(this, 0);
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

  if ( (byte_4C541B2 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    byte_4C541B2 = 1;
  }
  effectIdsStr = this->fields.effectIdsStr;
  p_fields = (CGThumbnailListItem_o *)&this->fields;
  v7 = System_String__Concat_63674716(effectIdsStr, effectId, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  p_fields->klass = (CGThumbnailListItem_c *)v7;
  sub_1C3E508(p_fields, (int32_t)v7, v8, v9);
}


void TerminalPramsManager___c__DisplayClass730_0___ctor(
        TerminalPramsManager___c__DisplayClass730_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
QuestEntity_o *TerminalPramsManager___c__DisplayClass730_0___SendOpenedQuestIdToAdManager_b__1(
        TerminalPramsManager___c__DisplayClass730_0_o *this,
        int32_t v,
        const MethodInfo *method)
{
  QuestMaster_o *questMaster; // x0

  questMaster = this->fields.questMaster;
  if ( !questMaster )
    sub_1C3E7C0(0, *(_QWORD *)&v);
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

  if ( (byte_4C541B3 & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C541B3 = 1;
  }
  entity = 0;
  userQuestMaster = this->fields.userQuestMaster;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
    sub_1C3E7C0(v6, v);
  }
  return 1;
}