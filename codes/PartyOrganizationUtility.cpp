void __fastcall PartyOrganizationUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4217F9A & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationUtility_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_6828/*"FriendshipUpItemUseState"*/, v8);
    byte_4217F9A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)PartyOrganizationUtility_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_6828/*"FriendshipUpItemUseState"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6828/*"FriendshipUpItemUseState"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall PartyOrganizationUtility___ctor(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_4217F99 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility___ctor__, v7);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v8);
    byte_4217F99 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)v9;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  v18 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo,
                                                                                                   v16,
                                                                                                   v17);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v18,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  this->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v18;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._npcFollowerInfos,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2A716D0 *)Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUtility__AddRestrictionDialogHistory(
        PartyOrganizationUtility_o *this,
        int32_t questId,
        int32_t phaseId,
        int32_t restrictionId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_String_o *v7; // x20
  System_String_o *v8; // x21
  System_String_o *v9; // x0
  WarBoardManager_TaskList_o *restrictionDialogHistoryList; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x20
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF
  int32_t v13; // [xsp+18h] [xbp-18h] BYREF
  int32_t v14; // [xsp+1Ch] [xbp-14h] BYREF

  v14 = questId;
  v13 = phaseId;
  v12 = restrictionId;
  if ( (byte_4217F8D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v6);
    byte_4217F8D = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v14, 0LL);
  v8 = System_Int32__ToString((int32_t)&v13, 0LL);
  v9 = System_Int32__ToString((int32_t)&v12, 0LL);
  restrictionDialogHistoryList = (WarBoardManager_TaskList_o *)System_String__Concat_43852188(v7, v8, v9, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_8;
  v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)restrictionDialogHistoryList;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.restrictionDialogHistoryList,
         restrictionDialogHistoryList,
         (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    return;
  }
  restrictionDialogHistoryList = (WarBoardManager_TaskList_o *)this->fields.restrictionDialogHistoryList;
  if ( !restrictionDialogHistoryList )
LABEL_8:
    sub_B0D97C(restrictionDialogHistoryList);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)restrictionDialogHistoryList,
    v11,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
}


void __fastcall PartyOrganizationUtility__ClearFollowerInfo(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x2

  this->fields._normalFollowerInfo = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields._normalFollowerInfo, 0LL, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields._SelectedNormalFollowerClassId_k__BackingField = 0LL;
  PartyOrganizationUtility__ClearNpcFollowerInfo(this, -1, v9);
}


void __fastcall PartyOrganizationUtility__ClearNormalFollowerInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct FollowerInfo_o **p_normalFollowerInfo; // x19

  this->fields._normalFollowerInfo = 0LL;
  p_normalFollowerInfo = &this->fields._normalFollowerInfo;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields._normalFollowerInfo, 0LL, v2, v3, v4, v5, v6, v7);
  p_normalFollowerInfo[1] = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUtility__ClearNpcFollowerInfo(
        PartyOrganizationUtility_o *this,
        int32_t key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcFollowerInfos; // x0

  if ( (byte_4217F93 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__, *(_QWORD *)&key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__, v5);
    byte_4217F93 = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_B0D97C(0LL);
  if ( (key & 0x80000000) != 0 )
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)npcFollowerInfos,
      (const MethodInfo_2E90604 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
  else
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)npcFollowerInfos,
      key,
      (const MethodInfo_2E91E04 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
}


void __fastcall PartyOrganizationUtility__ClearTemporaryPartyInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  PartyOrganizationUtility_o *v8; // x19
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *v9; // x8
  PartyOrganizationUtility_o **p_temporaryPartyInfo; // x19
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *temporaryPartyInfo; // t1
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  v8 = this;
  if ( (byte_4217F8B & 1) == 0 )
  {
    this = (PartyOrganizationUtility_o *)sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4217F8B = 1;
  }
  temporaryPartyInfo = v8->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (PartyOrganizationUtility_o **)&v8->fields.temporaryPartyInfo;
  v9 = temporaryPartyInfo;
  if ( temporaryPartyInfo )
  {
    v9->fields.userServantId = 0LL;
    if ( !*p_temporaryPartyInfo )
      goto LABEL_14;
    (*p_temporaryPartyInfo)->fields._normalFollowerInfo = 0LL;
    if ( !*p_temporaryPartyInfo )
      goto LABEL_14;
    (*p_temporaryPartyInfo)->fields._SelectedNormalFollowerClassId_k__BackingField = -1;
    this = *p_temporaryPartyInfo;
    if ( !*p_temporaryPartyInfo )
      goto LABEL_14;
    v12 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)StringLiteral_1/*""*/;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields._npcFollowerInfos, v12, v2, v3, v4, v5, v6, v7);
    this = *p_temporaryPartyInfo;
    if ( !*p_temporaryPartyInfo )
      goto LABEL_14;
    *(_QWORD *)&this->fields._SelectedPartyPosition_k__BackingField = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields._SelectedPartyPosition_k__BackingField,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    this = *p_temporaryPartyInfo;
    if ( !*p_temporaryPartyInfo )
      goto LABEL_14;
    *(_QWORD *)&this->fields._SelectedPartyMemberPosition_k__BackingField = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields._SelectedPartyMemberPosition_k__BackingField,
      0LL,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    this = *p_temporaryPartyInfo;
    if ( !*p_temporaryPartyInfo
      || (this->fields._BasePartyItem_k__BackingField = 0LL,
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields._BasePartyItem_k__BackingField,
            0LL,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30),
          (this = *p_temporaryPartyInfo) == 0LL)
      || (this->fields._PartyItem_k__BackingField = 0LL,
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields._PartyItem_k__BackingField,
            0LL,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36),
          !*p_temporaryPartyInfo) )
    {
LABEL_14:
      sub_B0D97C(this);
    }
    *(_DWORD *)&(*p_temporaryPartyInfo)->fields._IsForceDisableSupportSelectBackBtn_k__BackingField = -1;
    *p_temporaryPartyInfo = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)p_temporaryPartyInfo, 0LL, v37, v38, v39, v40, v41, v42);
  }
}


void __fastcall PartyOrganizationUtility__DecisionFontSize(
        PartyOrganizationUtility_o *this,
        int32_t *maxFontSize,
        int32_t *minFontSize,
        int32_t maxLength,
        const MethodInfo *method)
{
  int32_t v5; // w9
  int32_t v6; // w8

  *maxFontSize = 24;
  *minFontSize = 24;
  if ( maxLength <= 43 )
  {
    if ( maxLength <= 41 )
    {
      if ( maxLength <= 37 )
      {
        if ( maxLength <= 34 )
        {
          if ( maxLength < 32 )
            return;
          v6 = 22;
          v5 = 22;
        }
        else
        {
          v6 = 20;
          v5 = 20;
        }
      }
      else
      {
        v6 = 18;
        v5 = 18;
      }
    }
    else
    {
      v6 = 17;
      v5 = 17;
    }
  }
  else
  {
    v5 = 0;
    v6 = 16;
  }
  *maxFontSize = v6;
  *minFontSize = v5;
}


bool __fastcall PartyOrganizationUtility__ExistsTemporaryPartyInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields.temporaryPartyInfo != 0LL;
}


System_Collections_Generic_Dictionary_int__FollowerInfo__o *__fastcall PartyOrganizationUtility__GetAllNpcFollowerInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._npcFollowerInfos;
}


ItemEntity_o *__fastcall PartyOrganizationUtility__GetAvailableFriendshipUpItemEntity(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  ItemEntity_o *AvailableFriendshipUpItemEventCampaigns; // x19
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  _QWORD *monitor; // x22
  __int64 v12; // x8
  unsigned __int64 v13; // x23
  ItemEntity_o *ItemData; // x0
  __int64 v16; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4217F95 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4217F95 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_26;
  AvailableFriendshipUpItemEventCampaigns = (ItemEntity_o *)EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                                              (EventCampaignMaster_o *)Instance,
                                                              0LL);
  if ( !AvailableFriendshipUpItemEventCampaigns )
    return AvailableFriendshipUpItemEventCampaigns;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_26:
    sub_B0D97C(Instance);
  MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AvailableFriendshipUpItemEventCampaigns,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  AvailableFriendshipUpItemEventCampaigns = 0LL;
  v18 = v17;
  while ( 1 )
  {
    ItemData = (ItemEntity_o *)System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                 &v18,
                                 (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( ((unsigned __int8)ItemData & 1) == 0 )
      break;
    if ( !v18.fields.current )
      sub_B0D97C(ItemData);
    monitor = v18.fields.current[2].monitor;
    if ( monitor )
    {
      v12 = monitor[3];
      if ( v12 )
      {
        if ( (int)v12 >= 1 )
        {
          v13 = 0LL;
          do
          {
            if ( v13 >= (unsigned int)v12 )
            {
              v16 = sub_B0D9A8(ItemData);
              sub_B0D948(v16, 0LL);
            }
            if ( !MasterData_WarQuestSelectionMaster )
              sub_B0D97C(ItemData);
            ItemData = ItemMaster__GetItemData(MasterData_WarQuestSelectionMaster, *((_DWORD *)monitor + v13 + 8), 0LL);
            if ( ItemData
              && (!AvailableFriendshipUpItemEventCampaigns
               || ItemData->fields.endedAt <= AvailableFriendshipUpItemEventCampaigns->fields.endedAt) )
            {
              AvailableFriendshipUpItemEventCampaigns = ItemData;
            }
            LODWORD(v12) = *((_DWORD *)monitor + 6);
            ++v13;
          }
          while ( (__int64)v13 < (int)v12 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return AvailableFriendshipUpItemEventCampaigns;
}


int32_t __fastcall PartyOrganizationUtility__GetAvailableFriendshipUpItemNum(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableFriendshipUpItemEventCampaigns; // x19
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserItemMaster_o *v13; // x21
  _QWORD *monitor; // x26
  __int64 v15; // x8
  unsigned __int64 v16; // x27
  int32_t v17; // w22
  int64_t UserId; // x0
  UserItemEntity_o *EntityDefinitely; // x0
  UserItemEntity_o *v20; // x23
  ItemEntity_o *ItemData; // x0
  int num; // w9
  __int64 v25; // x0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4217F96 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v2);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4217F96 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_35;
  AvailableFriendshipUpItemEventCampaigns = EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                              (EventCampaignMaster_o *)Instance,
                                              0LL);
  if ( !AvailableFriendshipUpItemEventCampaigns )
    return (int)AvailableFriendshipUpItemEventCampaigns;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_35:
    sub_B0D97C(Instance);
  }
  v13 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AvailableFriendshipUpItemEventCampaigns,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v27 = v26;
  LODWORD(AvailableFriendshipUpItemEventCampaigns) = 0;
  while ( 1 )
  {
    ItemData = (ItemEntity_o *)System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                 &v27,
                                 (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( ((unsigned __int8)ItemData & 1) == 0 )
      break;
    if ( !v27.fields.current )
      sub_B0D97C(ItemData);
    monitor = v27.fields.current[2].monitor;
    if ( monitor )
    {
      v15 = monitor[3];
      if ( v15 )
      {
        if ( (int)v15 >= 1 )
        {
          v16 = 0LL;
          do
          {
            if ( v16 >= (unsigned int)v15 )
            {
              v25 = sub_B0D9A8(ItemData);
              sub_B0D948(v25, 0LL);
            }
            v17 = *((_DWORD *)monitor + v16 + 8);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            if ( !v13 )
              sub_B0D97C(UserId);
            EntityDefinitely = UserItemMaster__GetEntityDefinitely(v13, UserId, v17, 0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              sub_B0D97C(EntityDefinitely);
            v20 = EntityDefinitely;
            ItemData = ItemMaster__GetItemData(MasterData_WarQuestSelectionMaster, v17, 0LL);
            if ( !v20 )
              sub_B0D97C(ItemData);
            num = v20->fields.num;
            LODWORD(v15) = *((_DWORD *)monitor + 6);
            ++v16;
            if ( num < 1 || ItemData == 0LL )
              num = 0;
            LODWORD(AvailableFriendshipUpItemEventCampaigns) = num + (_DWORD)AvailableFriendshipUpItemEventCampaigns;
          }
          while ( (__int64)v16 < (int)v15 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return (int)AvailableFriendshipUpItemEventCampaigns;
}


int64_t __fastcall PartyOrganizationUtility__GetFriendshipUpItemEndedTime(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  PartyOrganizationUtility_o *v3; // x0
  const MethodInfo *v4; // x1
  int64_t result; // x0

  if ( (byte_4217F97 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v2);
    byte_4217F97 = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v3 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v3 )
    sub_B0D97C(0LL);
  result = (int64_t)PartyOrganizationUtility__GetAvailableFriendshipUpItemEntity(v3, v4);
  if ( result )
    return *(_QWORD *)(result + 96);
  return result;
}


FollowerInfo_o *__fastcall PartyOrganizationUtility__GetNormalFollowerInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._normalFollowerInfo;
}


// local variable allocation has failed, the output may be wrong!
FollowerInfo_o *__fastcall PartyOrganizationUtility__GetNpcFollowerInfo(
        PartyOrganizationUtility_o *this,
        int32_t key,
        const MethodInfo *method)
{
  if ( (byte_4217F92 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_GetValue_int__FollowerInfo___, *(_QWORD *)&key);
    byte_4217F92 = 1;
  }
  return (FollowerInfo_o *)BasicHelper__GetValue_int__object_(
                             (System_Collections_Generic_Dictionary_K__V__o *)this->fields._npcFollowerInfos,
                             key,
                             0LL,
                             (const MethodInfo_1708FC8 *)Method_BasicHelper_GetValue_int__FollowerInfo___);
}


System_String_o *__fastcall PartyOrganizationUtility__GetRarityInvalidMessage(
        PartyOrganizationUtility_o *this,
        int32_t *maxLength,
        System_String_o *servantName,
        int32_t servantRarity,
        System_String_o *equipName,
        System_String_o *skillName,
        int32_t actMaxRarity,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_Text_StringBuilder_o *v23; // x20
  System_String_o *v24; // x0
  System_String_o *v25; // x23
  System_String_o *v26; // x26
  Il2CppObject *RarityType; // x0
  System_String_o *v28; // x25
  System_String_o *v29; // x0
  System_String_o *v30; // x24
  System_String_o *v31; // x0
  System_String_o *v32; // x22
  System_String_o *v33; // x26
  System_String_o *v34; // x27
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  System_String_o *v37; // x21
  int32_t m_stringLength; // w27
  int32_t v39; // w28

  if ( (byte_4217F90 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, maxLength);
    sub_B0D8A4(&System_Math_TypeInfo, v14);
    sub_B0D8A4(&Rarity_TypeInfo, v15);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_10234/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, v17);
    sub_B0D8A4(&StringLiteral_10238/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, v18);
    sub_B0D8A4(&StringLiteral_10237/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, v19);
    sub_B0D8A4(&StringLiteral_10233/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, v20);
    sub_B0D8A4(&StringLiteral_10236/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, v21);
    sub_B0D8A4(&StringLiteral_10235/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, v22);
    byte_4217F90 = 1;
  }
  v23 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, maxLength, servantName);
  System_Text_StringBuilder___ctor(v23, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10233/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, 0LL);
  v25 = System_String__Format(v24, (Il2CppObject *)servantName, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_10234/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = (Il2CppObject *)Rarity__getRarityType(servantRarity, 0LL);
  v28 = System_String__Format(v26, RarityType, 0LL);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_10235/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, 0LL);
  v30 = System_String__Format(v29, (Il2CppObject *)equipName, 0LL);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_10236/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, 0LL);
  v32 = System_String__Format(v31, (Il2CppObject *)skillName, 0LL);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_10237/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, 0LL);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_10238/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, 0LL);
  v35 = (Il2CppObject *)Rarity__getRarityType(actMaxRarity, 0LL);
  v36 = System_String__Format(v34, v35, 0LL);
  if ( !v25 || !v30 )
    goto LABEL_17;
  v37 = v36;
  m_stringLength = v25->fields.m_stringLength;
  v39 = v30->fields.m_stringLength;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v36 = (System_String_o *)System_Math__Max_44559528(m_stringLength, v39, 0LL);
  *maxLength = (int)v36;
  if ( !v32
    || (v36 = (System_String_o *)System_Math__Max_44559528((int32_t)v36, v32->fields.m_stringLength, 0LL),
        *maxLength = (int)v36,
        !v23) )
  {
LABEL_17:
    sub_B0D97C(v36);
  }
  System_Text_StringBuilder__Append_42155400(v23, v25, 0LL);
  System_Text_StringBuilder__Append_42155400(v23, v28, 0LL);
  System_Text_StringBuilder__Append_42155400(v23, v30, 0LL);
  System_Text_StringBuilder__Append_42155400(v23, v32, 0LL);
  System_Text_StringBuilder__Append_42155400(v23, v33, 0LL);
  System_Text_StringBuilder__Append_42155400(v23, v37, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v23->klass->vtable._3_ToString.method)(
                              v23,
                              v23->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


void __fastcall PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
        PartyOrganizationUtility_o *this,
        int32_t *startingNum,
        int32_t *subNum,
        int32_t *myCnt,
        const MethodInfo *method)
{
  BalanceConfig_c *v9; // x0
  int32_t v10; // w23
  int v11; // w25
  PartyListViewItem_o *PartyItemSmc_k__BackingField; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t v14; // w8

  if ( (byte_4217F98 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, startingNum);
    byte_4217F98 = 1;
  }
  *startingNum = 0;
  *subNum = 0;
  *myCnt = 0;
  v9 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  if ( v9->static_fields->StartingMemberFriendshipRate >= 1000 && this->fields._PartyItemSmc_k__BackingField )
  {
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = BalanceConfig_TypeInfo;
      }
      static_fields = v9->static_fields;
      if ( v10 >= static_fields->DeckMemberMax )
        break;
      PartyItemSmc_k__BackingField = this->fields._PartyItemSmc_k__BackingField;
      if ( !PartyItemSmc_k__BackingField )
        goto LABEL_30;
      PartyItemSmc_k__BackingField = (PartyListViewItem_o *)PartyListViewItem__GetMember(
                                                              PartyItemSmc_k__BackingField,
                                                              v10,
                                                              0LL);
      if ( (unsigned int)v10 <= 2 )
      {
        if ( !PartyItemSmc_k__BackingField )
LABEL_30:
          sub_B0D97C(PartyItemSmc_k__BackingField);
        v11 += LOBYTE(PartyItemSmc_k__BackingField->fields.id);
      }
      else if ( !PartyItemSmc_k__BackingField )
      {
        goto LABEL_30;
      }
      if ( !LOBYTE(PartyItemSmc_k__BackingField->fields.id)
        && !PartyOrganizationListViewItem__get_IsEmpty(
              (PartyOrganizationListViewItem_o *)PartyItemSmc_k__BackingField,
              0LL) )
      {
        ++*myCnt;
      }
      v9 = BalanceConfig_TypeInfo;
      ++v10;
    }
    if ( *myCnt )
    {
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      v14 = static_fields->StartingMemberFriendshipRate - 1000;
      *startingNum = v14;
      if ( v11 >= 1 )
        *subNum = v14 / 5;
    }
  }
}


PartyOrganizationUtility_TemporaryPartyInfo_o *__fastcall PartyOrganizationUtility__GetTemporaryPartyInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields.temporaryPartyInfo;
}


bool __fastcall PartyOrganizationUtility__IsAvailableFriendshipUpItem(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  DataManager_o *Instance; // x0

  if ( (byte_4217F94 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4217F94 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  return EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns((EventCampaignMaster_o *)Instance, 0LL) != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationUtility__IsDisplayedRestrictionDialog(
        PartyOrganizationUtility_o *this,
        int32_t questId,
        int32_t phaseId,
        int32_t restrictionId,
        bool isAddHistory,
        const MethodInfo *method)
{
  __int64 v8; // x1
  System_String_o *v9; // x21
  System_String_o *v10; // x22
  System_String_o *v11; // x0
  WarBoardManager_TaskList_o *restrictionDialogHistoryList; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x21
  bool v14; // w22
  int32_t v16; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v17; // [xsp+8h] [xbp-28h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v17 = phaseId;
  v18 = questId;
  v16 = restrictionId;
  if ( (byte_4217F8C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v8);
    byte_4217F8C = 1;
  }
  v9 = System_Int32__ToString((int32_t)&v18, 0LL);
  v10 = System_Int32__ToString((int32_t)&v17, 0LL);
  v11 = System_Int32__ToString((int32_t)&v16, 0LL);
  restrictionDialogHistoryList = (WarBoardManager_TaskList_o *)System_String__Concat_43852188(v9, v10, v11, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_9;
  v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)restrictionDialogHistoryList;
  v14 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.restrictionDialogHistoryList,
          restrictionDialogHistoryList,
          (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( !v14 && isAddHistory )
  {
    restrictionDialogHistoryList = (WarBoardManager_TaskList_o *)this->fields.restrictionDialogHistoryList;
    if ( restrictionDialogHistoryList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)restrictionDialogHistoryList,
        v13,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
      return v14;
    }
LABEL_9:
    sub_B0D97C(restrictionDialogHistoryList);
  }
  return v14;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationUtility__IsRarityRestriction(
        PartyOrganizationUtility_o *this,
        System_String_o **skillName,
        int32_t *actMaxRarity,
        int32_t servantId,
        int32_t servantRarity,
        int32_t equipServantId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  void *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  ServantSkillMaster_o *v25; // x27
  WarQuestSelectionMaster_o *v26; // x25
  SkillLvMaster_o *v27; // x26
  int v28; // w8
  void *v29; // x23
  unsigned int v30; // w27
  __int64 v31; // x25
  int32_t v32; // w2
  System_String_o *Name; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_IEnumerable_int__o *ActRarity; // x0
  __int64 v42; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v43; // [xsp+0h] [xbp-70h]
  SkillLvEntity_o *skillLvEntity; // [xsp+8h] [xbp-68h] BYREF
  WarEntity_o *v45; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4217F8E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, skillName);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v17);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v19);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B0D8A4(&StringLiteral_1/*""*/, v22);
    byte_4217F8E = 1;
  }
  v45 = 0LL;
  entity = 0LL;
  skillLvEntity = 0LL;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)skillName,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)actMaxRarity,
    *(System_String_array ***)&servantId,
    *(System_Boolean_array ***)&servantRarity,
    *(System_Int32_array ***)&equipServantId,
    *(System_Int32_array **)&eventId,
    (System_Int32_array *)method);
  *actMaxRarity = 0;
  if ( ((servantId | servantRarity | equipServantId) & 0x80000000) == 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
           &entity,
           servantId,
           (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      v25 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      v26 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)Instance,
              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v25 )
        goto LABEL_33;
      v27 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList(v25, equipServantId, 0LL);
      if ( !Instance )
        goto LABEL_33;
      v28 = *((_DWORD *)Instance + 6);
      v29 = Instance;
      if ( v28 >= 1 )
      {
        v43 = (DataMasterBase_WarMaster__WarEntity__int__o *)v26;
        v30 = 0;
        while ( 1 )
        {
          if ( v30 >= v28 )
          {
            v42 = sub_B0D9A8(Instance);
            sub_B0D948(v42, 0LL);
          }
          v31 = *((_QWORD *)v29 + (int)v30 + 4);
          if ( !v31 )
            goto LABEL_33;
          v32 = *(_DWORD *)(v31 + 48);
          if ( v32 && (eventId < 0 || v32 == eventId) )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_33;
            Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 &v45,
                                 v32,
                                 (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = v45;
              if ( !v45 )
                goto LABEL_33;
              Instance = (void *)EventEntity__IsEventPeriod((EventEntity_o *)v45, 0LL, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v27 )
                  goto LABEL_33;
                Instance = (void *)SkillLvMaster__TryGetEntity(v27, &skillLvEntity, *(_DWORD *)(v31 + 28), 1, 0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  Instance = (void *)RarityRestrictedSkillUtil__IsDisabled(
                                       skillLvEntity,
                                       (ServantEntity_o *)entity,
                                       servantRarity,
                                       0LL);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                    break;
                }
              }
            }
          }
          v28 = *((_DWORD *)v29 + 6);
          if ( (int)++v30 >= v28 )
            return 0;
        }
        Instance = v43;
        if ( v43 )
        {
          Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v43,
                       *(_DWORD *)(v31 + 28),
                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( Instance )
          {
            Name = SkillEntity__getName((SkillEntity_o *)Instance, 0LL);
            *skillName = Name;
            sub_B0D840(
              (BattleServantConfConponent_o *)skillName,
              (System_Int32_array **)Name,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
            Instance = skillLvEntity;
            if ( skillLvEntity )
            {
              ActRarity = (System_Collections_Generic_IEnumerable_int__o *)SkillLvEntity__GetActRarity(
                                                                             skillLvEntity,
                                                                             0LL);
              *actMaxRarity = System_Linq_Enumerable__Max(ActRarity, 0LL);
              return 1;
            }
          }
        }
LABEL_33:
        sub_B0D97C(Instance);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationUtility__IsRarityRestriction_31064984(
        PartyOrganizationUtility_o *this,
        int32_t servantId,
        int32_t servantRarity,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  ServantEntity_o *Entity; // x22
  SkillLvEntity_o *v15; // x0

  if ( (byte_4217F8F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4217F8F = 1;
  }
  if ( ((servantId | servantRarity) & 0x80000000) != 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      servantId,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  v15 = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0LL);
  return Entity && v15 && RarityRestrictedSkillUtil__IsDisabled(v15, Entity, servantRarity, 0LL);
}


void __fastcall PartyOrganizationUtility__SetNormalFollowerInfo(
        PartyOrganizationUtility_o *this,
        FollowerInfo_o *followerInfo,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._normalFollowerInfo = followerInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._normalFollowerInfo,
    (System_Int32_array **)followerInfo,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUtility__SetNpcFollowerInfo(
        PartyOrganizationUtility_o *this,
        int32_t key,
        FollowerInfo_o *followerInfo,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcFollowerInfos; // x0

  if ( (byte_4217F91 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__, *(_QWORD *)&key);
    byte_4217F91 = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcFollowerInfos,
    key,
    (WarBoardAIRoute_RouteData_o *)followerInfo,
    (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUtility__SetTemporaryPartyInfo(
        PartyOrganizationUtility_o *this,
        int64_t userServantId,
        int64_t userEquipId,
        int32_t deckNumber,
        System_String_o *bgmName,
        BattleSetupInfo_o *battleSetupInfo,
        FollowerInfo_o *followerInfo,
        PartyListViewItem_o *basePartyItem,
        PartyListViewItem_o *partyItem,
        int32_t selectPartyMemberNum,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v18; // x19
  BattleServantConfConponent_c *klass; // x8
  BattleServantConfConponent_o *p_temporaryPartyInfo; // x19
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *temporaryPartyInfo; // t1
  PartyOrganizationUtility_TemporaryPartyInfo_o *v22; // x27
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  v18 = this;
  if ( (byte_4217F8A & 1) == 0 )
  {
    this = (PartyOrganizationUtility_o *)sub_B0D8A4(
                                           &PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo,
                                           userServantId);
    byte_4217F8A = 1;
  }
  temporaryPartyInfo = v18->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (BattleServantConfConponent_o *)&v18->fields.temporaryPartyInfo;
  klass = (BattleServantConfConponent_c *)temporaryPartyInfo;
  if ( !temporaryPartyInfo )
  {
    v22 = (PartyOrganizationUtility_TemporaryPartyInfo_o *)sub_B0D974(
                                                             PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo,
                                                             userServantId,
                                                             userEquipId);
    PartyOrganizationUtility_TemporaryPartyInfo___ctor(v22, 0LL);
    p_temporaryPartyInfo->klass = (BattleServantConfConponent_c *)v22;
    sub_B0D840(p_temporaryPartyInfo, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_14;
  }
  klass->_1.name = (const char *)userServantId;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_14;
  p_temporaryPartyInfo->klass->_1.namespaze = (const char *)userEquipId;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_14;
  LODWORD(p_temporaryPartyInfo->klass->_1.byval_arg.data) = deckNumber;
  this = (PartyOrganizationUtility_o *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_14;
  this->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)bgmName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._npcFollowerInfos,
    (System_Int32_array **)bgmName,
    (System_String_array **)userEquipId,
    *(System_String_array ***)&deckNumber,
    (System_Boolean_array **)bgmName,
    (System_Int32_array **)battleSetupInfo,
    (System_Int32_array *)followerInfo,
    (System_Int32_array *)basePartyItem);
  this = (PartyOrganizationUtility_o *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_14;
  *(_QWORD *)&this->fields._SelectedPartyPosition_k__BackingField = battleSetupInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._SelectedPartyPosition_k__BackingField,
    (System_Int32_array **)battleSetupInfo,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this = (PartyOrganizationUtility_o *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_14;
  *(_QWORD *)&this->fields._SelectedPartyMemberPosition_k__BackingField = followerInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._SelectedPartyMemberPosition_k__BackingField,
    (System_Int32_array **)followerInfo,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this = (PartyOrganizationUtility_o *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass
    || (this->fields._BasePartyItem_k__BackingField = basePartyItem,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields._BasePartyItem_k__BackingField,
          (System_Int32_array **)basePartyItem,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46),
        (this = (PartyOrganizationUtility_o *)p_temporaryPartyInfo->klass) == 0LL)
    || (this->fields._PartyItem_k__BackingField = partyItem,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields._PartyItem_k__BackingField,
          (System_Int32_array **)partyItem,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52),
        !p_temporaryPartyInfo->klass) )
  {
LABEL_14:
    sub_B0D97C(this);
  }
  LODWORD(p_temporaryPartyInfo->klass->_1.declaringType) = selectPartyMemberNum;
}


PartyListViewItem_o *__fastcall PartyOrganizationUtility__get_BasePartyItem(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._BasePartyItem_k__BackingField;
}


bool __fastcall PartyOrganizationUtility__get_IsExitPartyOrganization(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._IsExitPartyOrganization_k__BackingField;
}


bool __fastcall PartyOrganizationUtility__get_IsForceDisableSupportSelectBackBtn(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._IsForceDisableSupportSelectBackBtn_k__BackingField;
}


bool __fastcall PartyOrganizationUtility__get_IsNormalFlowQuest(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._IsNormalFlowQuest_k__BackingField;
}


PartyListViewItem_o *__fastcall PartyOrganizationUtility__get_PartyItem(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._PartyItem_k__BackingField;
}


PartyListViewItem_o *__fastcall PartyOrganizationUtility__get_PartyItemSmc(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._PartyItemSmc_k__BackingField;
}


int32_t __fastcall PartyOrganizationUtility__get_SelectedInitPosition(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectedInitPosition_k__BackingField;
}


int32_t __fastcall PartyOrganizationUtility__get_SelectedNormalFollowerClassId(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectedNormalFollowerClassId_k__BackingField;
}


int32_t __fastcall PartyOrganizationUtility__get_SelectedNormalFollowerDeckId(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectedNormalFollowerDeckId_k__BackingField;
}


int32_t __fastcall PartyOrganizationUtility__get_SelectedPartyMemberPosition(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectedPartyMemberPosition_k__BackingField;
}


int32_t __fastcall PartyOrganizationUtility__get_SelectedPartyPosition(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectedPartyPosition_k__BackingField;
}


System_String_o *__fastcall PartyOrganizationUtility__get_TransitionDestinationFromDetail(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._TransitionDestinationFromDetail_k__BackingField;
}


void __fastcall PartyOrganizationUtility__set_BasePartyItem(
        PartyOrganizationUtility_o *this,
        PartyListViewItem_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._BasePartyItem_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._BasePartyItem_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PartyOrganizationUtility__set_IsExitPartyOrganization(
        PartyOrganizationUtility_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsExitPartyOrganization_k__BackingField = value;
}


void __fastcall PartyOrganizationUtility__set_IsForceDisableSupportSelectBackBtn(
        PartyOrganizationUtility_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsForceDisableSupportSelectBackBtn_k__BackingField = value;
}


void __fastcall PartyOrganizationUtility__set_IsNormalFlowQuest(
        PartyOrganizationUtility_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNormalFlowQuest_k__BackingField = value;
}


void __fastcall PartyOrganizationUtility__set_PartyItem(
        PartyOrganizationUtility_o *this,
        PartyListViewItem_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._PartyItem_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._PartyItem_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PartyOrganizationUtility__set_PartyItemSmc(
        PartyOrganizationUtility_o *this,
        PartyListViewItem_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._PartyItemSmc_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._PartyItemSmc_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PartyOrganizationUtility__set_SelectedInitPosition(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectedInitPosition_k__BackingField = value;
}


void __fastcall PartyOrganizationUtility__set_SelectedNormalFollowerClassId(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectedNormalFollowerClassId_k__BackingField = value;
}


void __fastcall PartyOrganizationUtility__set_SelectedNormalFollowerDeckId(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectedNormalFollowerDeckId_k__BackingField = value;
}


void __fastcall PartyOrganizationUtility__set_SelectedPartyMemberPosition(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectedPartyMemberPosition_k__BackingField = value;
}


void __fastcall PartyOrganizationUtility__set_SelectedPartyPosition(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectedPartyPosition_k__BackingField = value;
}


void __fastcall PartyOrganizationUtility__set_TransitionDestinationFromDetail(
        PartyOrganizationUtility_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._TransitionDestinationFromDetail_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._TransitionDestinationFromDetail_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PartyOrganizationUtility_TemporaryPartyInfo___ctor(
        PartyOrganizationUtility_TemporaryPartyInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}