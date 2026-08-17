void BattleSetupInfo___ctor(BattleSetupInfo_o *this, const MethodInfo *method)
{
  this->fields.needFirstOpenAutoOrganizationConfirmDialog = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleSetupInfo___ctor_48583600(
        BattleSetupInfo_o *this,
        BattleSetupInfo_BattleSetupSaveInfo_o *saveInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  bool isQuestNew; // w9
  __int128 v14; // q0
  int32_t questPhase; // w8
  __int128 v16; // q1
  bool battleBefore; // w9
  struct System_String_o *demoInfo; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  struct System_String_o *choiceRandomLimitCounts; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_String_o *choiceTransformRandomLimitCounts; // x1
  __int64 v30; // d0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_Int32_array *useRewardAddItemIds; // x1
  __int128 v38; // q0
  struct System_Int32_array **p_useRewardAddItemIds; // x20
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7

  this->fields.needFirstOpenAutoOrganizationConfirmDialog = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !saveInfo )
    sub_2213CDC(v5, v6);
  isQuestNew = saveInfo->fields.isQuestNew;
  *(_QWORD *)&this->fields.warId = *(_QWORD *)&saveInfo->fields.warId;
  v14 = *(_OWORD *)&saveInfo->fields.deckId;
  questPhase = saveInfo->fields.questPhase;
  this->fields.isQuestNew = isQuestNew;
  *(_OWORD *)&this->fields.deckId = v14;
  this->fields.questPhase = questPhase;
  v16 = *(_OWORD *)&saveInfo->fields.followerClassId;
  this->fields.userEquipId = saveInfo->fields.userEquipId;
  *(_OWORD *)&this->fields.followerClassId = v16;
  *(_WORD *)&this->fields.isScriptBeforePartySelect = *(_WORD *)&saveInfo->fields.isScriptBeforePartySelect;
  battleBefore = saveInfo->fields.battleBefore;
  demoInfo = saveInfo->fields.demoInfo;
  this->fields.eventId = saveInfo->fields.eventId;
  LOBYTE(questPhase) = saveInfo->fields.isBefore;
  this->fields.battleBefore = battleBefore;
  this->fields.isBefore = questPhase;
  this->fields.demoInfo = demoInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.demoInfo, (int32_t)demoInfo, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)&this->fields.selectedBranchIdx = *(_QWORD *)&saveInfo->fields.selectedBranchIdx;
  this->fields.originQuestId = saveInfo->fields.originQuestId;
  BattleSetupInfo__SetEventUpValues(this, v19);
  BattleSetupInfo__SetRestriction(this, 0, v20);
  BattleSetupInfo__SetSelectableQuests(this, 0, v21);
  choiceRandomLimitCounts = saveInfo->fields.choiceRandomLimitCounts;
  this->fields.followrRandomLimitCount = saveInfo->fields.followrRandomLimitCount;
  this->fields.choiceRandomLimitCounts = choiceRandomLimitCounts;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.choiceRandomLimitCounts,
    (int32_t)choiceRandomLimitCounts,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  choiceTransformRandomLimitCounts = saveInfo->fields.choiceTransformRandomLimitCounts;
  *(_OWORD *)&this->fields.followerSpoilerProtectionLimitCount = *(_OWORD *)&saveInfo->fields.followerSpoilerProtectionLimitCount;
  v30 = *(_QWORD *)&saveInfo->fields.followerCommandCardLimitCount;
  this->fields.choiceTransformRandomLimitCounts = choiceTransformRandomLimitCounts;
  *(_QWORD *)&this->fields.followerCommandCardLimitCount = v30;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.choiceTransformRandomLimitCounts,
    (int32_t)choiceTransformRandomLimitCounts,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  useRewardAddItemIds = saveInfo->fields.useRewardAddItemIds;
  v38 = *(_OWORD *)&saveInfo->fields.followerTransformSpoilerProtectionLimitCount;
  this->fields.useRewardAddItemIds = useRewardAddItemIds;
  p_useRewardAddItemIds = &this->fields.useRewardAddItemIds;
  *(_OWORD *)(p_useRewardAddItemIds - 5) = v38;
  *((_DWORD *)p_useRewardAddItemIds - 6) = saveInfo->fields.followerTransformCommandCardLimitCount;
  *(_QWORD *)&v38 = *(_QWORD *)&saveInfo->fields.recommendSupportIdx;
  *((_BYTE *)p_useRewardAddItemIds - 20) = saveInfo->fields.isScriptBeforeWarBoard;
  *(p_useRewardAddItemIds - 2) = (struct System_Int32_array *)v38;
  *((_DWORD *)p_useRewardAddItemIds - 2) = saveInfo->fields.campaignItemId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_useRewardAddItemIds,
    (int32_t)useRewardAddItemIds,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  *((_DWORD *)p_useRewardAddItemIds + 2) = saveInfo->fields.restartWave;
}


BattleSetupInfo_o *BattleSetupInfo__ConvertBattleSetupInfo(
        BattleSetupInfo_o *this,
        int32_t warId,
        int32_t qId,
        int32_t qPhase,
        bool isScriptBeforePartySelect,
        bool isScriptBeforeWarBoard,
        int32_t selectedBranch,
        const MethodInfo *method)
{
  __int64 v14; // x19
  bool v15; // w0
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  const MethodInfo_47A29F8 *v18; // x0
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  void *v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  void *v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  BattleSetupInfo_o *result; // x0

  if ( (byte_5970293 & 1) == 0 )
  {
    sub_2213A60(&BattleSetupInfo_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970293 = 1;
  }
  v14 = sub_2213CCC(BattleSetupInfo_TypeInfo);
  *(_BYTE *)(v14 + 237) = 1;
  System_Object___ctor((Il2CppObject *)v14, 0);
  *(_DWORD *)(v14 + 16) = warId;
  *(_DWORD *)(v14 + 20) = qId;
  *(_DWORD *)(v14 + 124) = selectedBranch;
  *(_DWORD *)(v14 + 24) = qPhase;
  if ( isScriptBeforePartySelect )
  {
    v15 = 0;
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    v15 = clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)Instance, qId, 0);
  }
  *(_BYTE *)(v14 + 72) = v15;
  *(_BYTE *)(v14 + 73) = isScriptBeforePartySelect;
  *(_QWORD *)(v14 + 48) = 0;
  *(_QWORD *)(v14 + 56) = 0;
  v18 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  *(_QWORD *)(v14 + 40) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance(v18);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        Instance = (Il2CppObject *)BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)v14, v20),
        !MasterData_object) )
  {
LABEL_10:
    sub_2213CDC(Instance, v17);
  }
  *(_DWORD *)(v14 + 76) = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)MasterData_object, (int32_t)Instance, 0);
  BattleSetupInfo__SetEventUpValues((BattleSetupInfo_o *)v14, v21);
  BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)v14, 1, v22);
  BattleSetupInfo__SetSelectableQuests((BattleSetupInfo_o *)v14, 0, v23);
  v24 = StringLiteral_1/*""*/;
  *(_DWORD *)(v14 + 136) = 0;
  *(_QWORD *)(v14 + 144) = v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 144), (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_1/*""*/;
  *(_QWORD *)(v14 + 152) = 0;
  *(_QWORD *)(v14 + 160) = 0;
  *(_QWORD *)(v14 + 168) = 0;
  *(_QWORD *)(v14 + 176) = v31;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 176), (int32_t)v31, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)(v14 + 184) = 0;
  *(_QWORD *)(v14 + 192) = 0;
  result = (BattleSetupInfo_o *)v14;
  *(_DWORD *)(v14 + 200) = 0;
  *(_BYTE *)(v14 + 204) = isScriptBeforeWarBoard;
  return result;
}


BattleSetupInfo_BattleSetupSaveInfo_o *BattleSetupInfo__GetInfoForSave(
        BattleSetupInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  bool isQuestNew; // w9
  __int128 v13; // q0
  int32_t questPhase; // w8
  __int128 v15; // q1
  bool battleBefore; // w9
  struct System_String_o *demoInfo; // x1
  struct System_String_o *choiceRandomLimitCounts; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_String_o *choiceTransformRandomLimitCounts; // x1
  __int64 v26; // d0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Int32_array *useRewardAddItemIds; // x1
  int32_t followerTransformCommandCardLimitCount; // w8
  __int64 v35; // d0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  BattleSetupInfo_BattleSetupSaveInfo_o *result; // x0

  if ( (byte_597028F & 1) == 0 )
  {
    sub_2213A60(&BattleSetupInfo_BattleSetupSaveInfo_TypeInfo);
    byte_597028F = 1;
  }
  v3 = sub_2213CCC(BattleSetupInfo_BattleSetupSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  isQuestNew = this->fields.isQuestNew;
  *(_QWORD *)(v3 + 16) = *(_QWORD *)&this->fields.warId;
  v13 = *(_OWORD *)&this->fields.deckId;
  questPhase = this->fields.questPhase;
  *(_BYTE *)(v3 + 72) = isQuestNew;
  *(_OWORD *)(v3 + 32) = v13;
  *(_DWORD *)(v3 + 24) = questPhase;
  v15 = *(_OWORD *)&this->fields.followerClassId;
  *(_QWORD *)(v3 + 64) = this->fields.userEquipId;
  *(_OWORD *)(v3 + 48) = v15;
  *(_WORD *)(v3 + 73) = *(_WORD *)&this->fields.isScriptBeforePartySelect;
  battleBefore = this->fields.battleBefore;
  demoInfo = this->fields.demoInfo;
  *(_DWORD *)(v3 + 76) = this->fields.eventId;
  LOBYTE(questPhase) = this->fields.isBefore;
  *(_BYTE *)(v3 + 80) = battleBefore;
  *(_BYTE *)(v3 + 81) = questPhase;
  *(_QWORD *)(v3 + 88) = demoInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 88), (int32_t)demoInfo, v6, v7, v8, v9, v10, v11);
  choiceRandomLimitCounts = this->fields.choiceRandomLimitCounts;
  *(_OWORD *)(v3 + 96) = *(_OWORD *)&this->fields.selectedBranchIdx;
  *(_QWORD *)(v3 + 112) = choiceRandomLimitCounts;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v3 + 112),
    (int32_t)choiceRandomLimitCounts,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  choiceTransformRandomLimitCounts = this->fields.choiceTransformRandomLimitCounts;
  *(_OWORD *)(v3 + 120) = *(_OWORD *)&this->fields.followerSpoilerProtectionLimitCount;
  v26 = *(_QWORD *)&this->fields.followerCommandCardLimitCount;
  *(_QWORD *)(v3 + 144) = choiceTransformRandomLimitCounts;
  *(_QWORD *)(v3 + 136) = v26;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v3 + 144),
    (int32_t)choiceTransformRandomLimitCounts,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  useRewardAddItemIds = this->fields.useRewardAddItemIds;
  *(_OWORD *)(v3 + 152) = *(_OWORD *)&this->fields.followerTransformSpoilerProtectionLimitCount;
  followerTransformCommandCardLimitCount = this->fields.followerTransformCommandCardLimitCount;
  *(_QWORD *)(v3 + 192) = useRewardAddItemIds;
  *(_DWORD *)(v3 + 168) = followerTransformCommandCardLimitCount;
  v35 = *(_QWORD *)&this->fields.recommendSupportIdx;
  *(_BYTE *)(v3 + 172) = this->fields.isScriptBeforeWarBoard;
  *(_QWORD *)(v3 + 176) = v35;
  *(_DWORD *)(v3 + 184) = this->fields.campaignItemId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v3 + 192),
    (int32_t)useRewardAddItemIds,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  result = (BattleSetupInfo_BattleSetupSaveInfo_o *)v3;
  *(_DWORD *)(v3 + 188) = this->fields.restartWave;
  return result;
}


void BattleSetupInfo__SetEventUpValues(BattleSetupInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w22
  int32_t questPhase; // w20
  int32_t eventId; // w21
  EventUpValSetupInfo_o *v10; // x23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5970290 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&EventUpValSetupInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970290 = 1;
  }
  if ( this->fields.eventId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
    {
      sub_2213CDC(Instance, v4);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.eventId,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( EventDetailEntity__IsBonusSkill((EventDetailEntity_o *)Entity, 0) )
      {
        v7 = BattleSetupInfo__TargetQuestId(this, v6);
        questPhase = this->fields.questPhase;
        eventId = this->fields.eventId;
        v10 = (EventUpValSetupInfo_o *)sub_2213CCC(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor(v10, v7, questPhase, eventId, 0);
        this->fields.eventUpValSetupInfo = v10;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.eventUpValSetupInfo,
          (int32_t)v10,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleSetupInfo__SetRestriction(BattleSetupInfo_o *this, bool isResetDeck, const MethodInfo *method)
{
  int32_t eventId; // w21
  int32_t v6; // w0
  int32_t questPhase; // w22
  int32_t v8; // w23
  QuestRestrictionInfo_o *v9; // x24
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v18; // x1
  UserGameEntity_o *v19; // x20
  int64_t ActiveUserEquipId; // x0
  int64_t activeDeckId; // x8

  if ( (byte_5970291 & 1) == 0 )
  {
    sub_2213A60(&QuestRestrictionInfo_TypeInfo);
    byte_5970291 = 1;
  }
  eventId = this->fields.eventId;
  v6 = BattleSetupInfo__TargetQuestId(this, (const MethodInfo *)isResetDeck);
  questPhase = this->fields.questPhase;
  v8 = v6;
  v9 = (QuestRestrictionInfo_o *)sub_2213CCC(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_50415132(v9, eventId, v8, questPhase, 0);
  this->fields.questRestrictionInfo = v9;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( isResetDeck )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( !*p_questRestrictionInfo )
      goto LABEL_19;
    v19 = SelfUserGame;
    if ( (*p_questRestrictionInfo)->fields.isNoSupportBattle )
      goto LABEL_13;
    SelfUserGame = (UserGameEntity_o *)QuestRestrictionInfo__IsSupportOnly(*p_questRestrictionInfo, 0);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
      goto LABEL_13;
    SelfUserGame = (UserGameEntity_o *)*p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_19;
    SelfUserGame = (UserGameEntity_o *)QuestRestrictionInfo__IsServantNum((QuestRestrictionInfo_o *)SelfUserGame, 0);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
      goto LABEL_13;
    SelfUserGame = (UserGameEntity_o *)*p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_19;
    SelfUserGame = (UserGameEntity_o *)QuestRestrictionInfo__IsNpcMulitipleOrOnly(
                                         (QuestRestrictionInfo_o *)SelfUserGame,
                                         0);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
      goto LABEL_13;
    if ( !*p_questRestrictionInfo )
      goto LABEL_19;
    if ( (*p_questRestrictionInfo)->fields.eventDeckNum >= 1 )
    {
LABEL_13:
      if ( v19 )
      {
        ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(v19, 0);
        activeDeckId = 0;
        this->fields.userEquipId = ActiveUserEquipId;
LABEL_15:
        this->fields.deckId = activeDeckId;
        this->fields.isChildFollower = 0;
        return;
      }
    }
    else
    {
      this->fields.userEquipId = 0;
      if ( v19 )
      {
        activeDeckId = v19->fields.activeDeckId;
        goto LABEL_15;
      }
    }
LABEL_19:
    sub_2213CDC(SelfUserGame, v18);
  }
}


void BattleSetupInfo__SetSelectableQuests(BattleSetupInfo_o *this, bool isIncludeTempData, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo_47A29F8 *v10; // x0
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct System_Int32_array *SelectableQuests; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970292 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970292 = 1;
  }
  this->fields.selectableQuestIds = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectableQuestIds,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.selectableRouteQuestId = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v10);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !QuestPhaseMaster__TryGetEntity(
          (QuestPhaseMaster_o *)Instance,
          &entity,
          this->fields.questId,
          this->fields.questPhase,
          0) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity
    || (SelectableQuests = QuestPhaseEntity__GetSelectableQuests(entity, 0),
        this->fields.selectableQuestIds = SelectableQuests,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.selectableQuestIds,
          (int32_t)SelectableQuests,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        (Instance = (DataManager_o *)entity) == 0) )
  {
LABEL_10:
    sub_2213CDC(Instance, v12);
  }
  this->fields.selectableRouteQuestId = QuestPhaseEntity__GetQuestPhaseSelectRoute(entity, isIncludeTempData, 0);
}


int32_t BattleSetupInfo__TargetQuestBranchIdx(BattleSetupInfo_o *this, const MethodInfo *method)
{
  struct System_Int32_array *selectableQuestIds; // x8

  selectableQuestIds = this->fields.selectableQuestIds;
  if ( !selectableQuestIds )
    return 0;
  if ( this->fields.selectedBranchIdx >= SLODWORD(selectableQuestIds->max_length) )
    return 0;
  return this->fields.selectedBranchIdx;
}


int32_t BattleSetupInfo__TargetQuestId(BattleSetupInfo_o *this, const MethodInfo *method)
{
  struct System_Int32_array *selectableQuestIds; // x8
  __int64 selectedBranchIdx; // x9
  int max_length; // w10
  int32_t *p_questId; // x8
  int32_t selectableRouteQuestId; // w8

  selectableQuestIds = this->fields.selectableQuestIds;
  if ( selectableQuestIds )
  {
    selectedBranchIdx = this->fields.selectedBranchIdx;
    max_length = selectableQuestIds->max_length;
    if ( (int)selectedBranchIdx < max_length )
    {
      if ( (unsigned int)selectedBranchIdx >= max_length )
        sub_2213CE4(this);
      p_questId = &selectableQuestIds->m_Items[selectedBranchIdx];
      return *p_questId;
    }
  }
  selectableRouteQuestId = this->fields.selectableRouteQuestId;
  if ( !selectableRouteQuestId )
  {
    p_questId = &this->fields.questId;
    return *p_questId;
  }
  return selectableRouteQuestId;
}


void BattleSetupInfo_BattleSetupSaveInfo___ctor(BattleSetupInfo_BattleSetupSaveInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}