void __fastcall PartyOrganizationUtility___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_438ED60 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationUtility_TypeInfo);
    sub_B775C4(&StringLiteral_6960/*"FriendshipUpItemUseState"*/);
    byte_438ED60 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)PartyOrganizationUtility_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6960/*"FriendshipUpItemUseState"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6960/*"FriendshipUpItemUseState"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall PartyOrganizationUtility___ctor(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438ED5F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
    sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_438ED5F = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  this->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v10,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  this->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._npcFollowerInfos,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2D16BA8 *)Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
}


void __fastcall PartyOrganizationUtility__AddRestrictionDialogHistory(
        PartyOrganizationUtility_o *this,
        int32_t questId,
        int32_t phaseId,
        int32_t restrictionId,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  System_String_o *v7; // x21
  System_String_o *v8; // x0
  WarBoardManager_TaskList_o *restrictionDialogHistoryList; // x0
  __int64 v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x20
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF
  int32_t v13; // [xsp+18h] [xbp-18h] BYREF
  int32_t v14; // [xsp+1Ch] [xbp-14h] BYREF

  v14 = questId;
  v13 = phaseId;
  v12 = restrictionId;
  if ( (byte_438ED51 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Contains__);
    byte_438ED51 = 1;
  }
  v6 = System_Int32__ToString((int32_t)&v14, 0LL);
  v7 = System_Int32__ToString((int32_t)&v13, 0LL);
  v8 = System_Int32__ToString((int32_t)&v12, 0LL);
  restrictionDialogHistoryList = (WarBoardManager_TaskList_o *)System_String__Concat_44904220(v6, v7, v8, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_8;
  v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)restrictionDialogHistoryList;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.restrictionDialogHistoryList,
         restrictionDialogHistoryList,
         (const MethodInfo_30536E8 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    return;
  }
  restrictionDialogHistoryList = (WarBoardManager_TaskList_o *)this->fields.restrictionDialogHistoryList;
  if ( !restrictionDialogHistoryList )
LABEL_8:
    sub_B7769C(restrictionDialogHistoryList, v10);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)restrictionDialogHistoryList,
    v11,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
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
  sub_B77560((BattleServantConfConponent_o *)&this->fields._normalFollowerInfo, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_B77560((BattleServantConfConponent_o *)&this->fields._normalFollowerInfo, 0LL, v2, v3, v4, v5, v6, v7);
  p_normalFollowerInfo[1] = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUtility__ClearNpcFollowerInfo(
        PartyOrganizationUtility_o *this,
        int32_t key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcFollowerInfos; // x0

  if ( (byte_438ED57 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
    byte_438ED57 = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_B7769C(0LL, *(_QWORD *)&key);
  if ( (key & 0x80000000) != 0 )
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)npcFollowerInfos,
      (const MethodInfo_2FF4354 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
  else
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)npcFollowerInfos,
      key,
      (const MethodInfo_2FF5B54 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
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
  if ( (byte_438ED4F & 1) == 0 )
  {
    this = (PartyOrganizationUtility_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_438ED4F = 1;
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
    sub_B77560((BattleServantConfConponent_o *)&this->fields._npcFollowerInfos, v12, v2, v3, v4, v5, v6, v7);
    this = *p_temporaryPartyInfo;
    if ( !*p_temporaryPartyInfo )
      goto LABEL_14;
    *(_QWORD *)&this->fields._SelectedPartyPosition_k__BackingField = 0LL;
    sub_B77560(
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
    sub_B77560(
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
          sub_B77560(
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
          sub_B77560(
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
      sub_B7769C(this, method);
    }
    *(_DWORD *)&(*p_temporaryPartyInfo)->fields._IsForceDisableSupportSelectBackBtn_k__BackingField = -1;
    *p_temporaryPartyInfo = 0LL;
    sub_B77560((BattleServantConfConponent_o *)p_temporaryPartyInfo, 0LL, v37, v38, v39, v40, v41, v42);
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
  DataManager_o *Instance; // x0
  __int64 v3; // x1
  ItemEntity_o *AvailableFriendshipUpItemEventCampaigns; // x19
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  _QWORD *monitor; // x22
  __int64 v7; // x8
  unsigned __int64 v8; // x23
  ItemEntity_o *ItemData; // x0
  __int64 v10; // x1
  __int64 v12; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438ED59 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438ED59 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_26;
  AvailableFriendshipUpItemEventCampaigns = (ItemEntity_o *)EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                                              (EventCampaignMaster_o *)Instance,
                                                              0LL);
  if ( !AvailableFriendshipUpItemEventCampaigns )
    return AvailableFriendshipUpItemEventCampaigns;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_26:
    sub_B7769C(Instance, v3);
  MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AvailableFriendshipUpItemEventCampaigns,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  AvailableFriendshipUpItemEventCampaigns = 0LL;
  v14 = v13;
  while ( 1 )
  {
    ItemData = (ItemEntity_o *)System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                 &v14,
                                 (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( ((unsigned __int8)ItemData & 1) == 0 )
      break;
    if ( !v14.fields.current )
      sub_B7769C(ItemData, v10);
    monitor = v14.fields.current[2].monitor;
    if ( monitor )
    {
      v7 = monitor[3];
      if ( v7 )
      {
        if ( (int)v7 >= 1 )
        {
          v8 = 0LL;
          do
          {
            if ( v8 >= (unsigned int)v7 )
            {
              v12 = sub_B776C8(ItemData);
              sub_B77668(v12, 0LL);
            }
            if ( !MasterData_WarQuestSelectionMaster )
              sub_B7769C(ItemData, v10);
            ItemData = ItemMaster__GetItemData(MasterData_WarQuestSelectionMaster, *((_DWORD *)monitor + v8 + 8), 0LL);
            if ( ItemData
              && (!AvailableFriendshipUpItemEventCampaigns
               || ItemData->fields.endedAt <= AvailableFriendshipUpItemEventCampaigns->fields.endedAt) )
            {
              AvailableFriendshipUpItemEventCampaigns = ItemData;
            }
            LODWORD(v7) = *((_DWORD *)monitor + 6);
            ++v8;
          }
          while ( (__int64)v8 < (int)v7 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return AvailableFriendshipUpItemEventCampaigns;
}


int32_t __fastcall PartyOrganizationUtility__GetAvailableFriendshipUpItemNum(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v3; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableFriendshipUpItemEventCampaigns; // x19
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserItemMaster_o *v6; // x21
  _QWORD *monitor; // x26
  __int64 v8; // x8
  unsigned __int64 v9; // x27
  int32_t v10; // w22
  int64_t UserId; // x0
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v13; // x1
  UserItemEntity_o *v14; // x23
  ItemEntity_o *ItemData; // x0
  __int64 v16; // x1
  int num; // w9
  __int64 v19; // x1
  __int64 v21; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_438ED5A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438ED5A = 1;
  }
  memset(&v23, 0, sizeof(v23));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_35;
  AvailableFriendshipUpItemEventCampaigns = EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                              (EventCampaignMaster_o *)Instance,
                                              0LL);
  if ( !AvailableFriendshipUpItemEventCampaigns )
    return (int)AvailableFriendshipUpItemEventCampaigns;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_35:
    sub_B7769C(Instance, v3);
  }
  v6 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             Instance,
                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AvailableFriendshipUpItemEventCampaigns,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v23 = v22;
  LODWORD(AvailableFriendshipUpItemEventCampaigns) = 0;
  while ( 1 )
  {
    ItemData = (ItemEntity_o *)System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                 &v23,
                                 (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( ((unsigned __int8)ItemData & 1) == 0 )
      break;
    if ( !v23.fields.current )
      sub_B7769C(ItemData, v19);
    monitor = v23.fields.current[2].monitor;
    if ( monitor )
    {
      v8 = monitor[3];
      if ( v8 )
      {
        if ( (int)v8 >= 1 )
        {
          v9 = 0LL;
          do
          {
            if ( v9 >= (unsigned int)v8 )
            {
              v21 = sub_B776C8(ItemData);
              sub_B77668(v21, 0LL);
            }
            v10 = *((_DWORD *)monitor + v9 + 8);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            if ( !v6 )
              sub_B7769C(UserId, UserId);
            EntityDefinitely = UserItemMaster__GetEntityDefinitely(v6, UserId, v10, 0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              sub_B7769C(EntityDefinitely, v13);
            v14 = EntityDefinitely;
            ItemData = ItemMaster__GetItemData(MasterData_WarQuestSelectionMaster, v10, 0LL);
            if ( !v14 )
              sub_B7769C(ItemData, v16);
            num = v14->fields.num;
            LODWORD(v8) = *((_DWORD *)monitor + 6);
            ++v9;
            if ( num < 1 || ItemData == 0LL )
              num = 0;
            LODWORD(AvailableFriendshipUpItemEventCampaigns) = num + (_DWORD)AvailableFriendshipUpItemEventCampaigns;
          }
          while ( (__int64)v9 < (int)v8 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return (int)AvailableFriendshipUpItemEventCampaigns;
}


int64_t __fastcall PartyOrganizationUtility__GetFriendshipUpItemEndedTime(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v2; // x0
  const MethodInfo *v3; // x1
  int64_t result; // x0

  if ( (byte_438ED5B & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_438ED5B = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v2 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v2 )
    sub_B7769C(0LL, v3);
  result = (int64_t)PartyOrganizationUtility__GetAvailableFriendshipUpItemEntity(v2, v3);
  if ( result )
    return *(_QWORD *)(result + 96);
  return result;
}


int32_t __fastcall PartyOrganizationUtility__GetInterruptionUseFriendshipUpItemId(
        PartyOrganizationUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v8; // x1
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438ED5D & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438ED5D = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  UserId = UserInterruptionQuestMaster__TryGetEntity(
             (UserInterruptionQuestMaster_o *)Master_WarQuestSelectionMaster,
             &entity,
             UserId,
             questId,
             questPhase,
             0LL);
  if ( (UserId & 1) != 0 )
  {
    if ( entity )
      return entity->fields.campaignItemId;
LABEL_14:
    sub_B7769C(UserId, v8);
  }
  return 0;
}


FollowerInfo_o *__fastcall PartyOrganizationUtility__GetNormalFollowerInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._normalFollowerInfo;
}


FollowerInfo_o *__fastcall PartyOrganizationUtility__GetNpcFollowerInfo(
        PartyOrganizationUtility_o *this,
        int32_t key,
        const MethodInfo *method)
{
  if ( (byte_438ED56 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_GetValue_int__FollowerInfo___);
    byte_438ED56 = 1;
  }
  return (FollowerInfo_o *)BasicHelper__GetValue_int__object_(
                             (System_Collections_Generic_Dictionary_K__V__o *)this->fields._npcFollowerInfos,
                             key,
                             0LL,
                             (const MethodInfo_1C67FD4 *)Method_BasicHelper_GetValue_int__FollowerInfo___);
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
  System_Text_StringBuilder_o *v14; // x20
  System_String_o *v15; // x0
  System_String_o *v16; // x23
  System_String_o *v17; // x26
  Il2CppObject *RarityType; // x0
  System_String_o *v19; // x25
  System_String_o *v20; // x0
  System_String_o *v21; // x24
  System_String_o *v22; // x0
  System_String_o *v23; // x22
  System_String_o *v24; // x26
  System_String_o *v25; // x27
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x21
  int32_t m_stringLength; // w27
  int32_t v31; // w28

  if ( (byte_438ED54 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&System_Math_TypeInfo);
    sub_B775C4(&Rarity_TypeInfo);
    sub_B775C4(&System_Text_StringBuilder_TypeInfo);
    sub_B775C4(&StringLiteral_10394/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/);
    sub_B775C4(&StringLiteral_10398/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/);
    sub_B775C4(&StringLiteral_10397/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/);
    sub_B775C4(&StringLiteral_10393/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/);
    sub_B775C4(&StringLiteral_10396/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/);
    sub_B775C4(&StringLiteral_10395/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/);
    byte_438ED54 = 1;
  }
  v14 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v14, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_10393/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, 0LL);
  v16 = System_String__Format(v15, (Il2CppObject *)servantName, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_10394/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = (Il2CppObject *)Rarity__getRarityType(servantRarity, 0LL);
  v19 = System_String__Format(v17, RarityType, 0LL);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10395/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, 0LL);
  v21 = System_String__Format(v20, (Il2CppObject *)equipName, 0LL);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_10396/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, 0LL);
  v23 = System_String__Format(v22, (Il2CppObject *)skillName, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10397/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_10398/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, 0LL);
  v26 = (Il2CppObject *)Rarity__getRarityType(actMaxRarity, 0LL);
  v27 = System_String__Format(v25, v26, 0LL);
  if ( !v16 || !v21 )
    goto LABEL_17;
  v29 = v27;
  m_stringLength = v16->fields.m_stringLength;
  v31 = v21->fields.m_stringLength;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v27 = (System_String_o *)System_Math__Max_45851140(m_stringLength, v31, 0LL);
  *maxLength = (int)v27;
  if ( !v23
    || (v27 = (System_String_o *)System_Math__Max_45851140((int32_t)v27, v23->fields.m_stringLength, 0LL),
        *maxLength = (int)v27,
        !v14) )
  {
LABEL_17:
    sub_B7769C(v27, v28);
  }
  System_Text_StringBuilder__Append_42951964(v14, v16, 0LL);
  System_Text_StringBuilder__Append_42951964(v14, v19, 0LL);
  System_Text_StringBuilder__Append_42951964(v14, v21, 0LL);
  System_Text_StringBuilder__Append_42951964(v14, v23, 0LL);
  System_Text_StringBuilder__Append_42951964(v14, v24, 0LL);
  System_Text_StringBuilder__Append_42951964(v14, v29, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v14->klass->vtable._3_ToString.method)(
                              v14,
                              v14->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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

  if ( (byte_438ED5C & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    byte_438ED5C = 1;
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
          sub_B7769C(PartyItemSmc_k__BackingField, startingNum);
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
  DataManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_438ED58 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438ED58 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v3);
  }
  return EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns((EventCampaignMaster_o *)Instance, 0LL) != 0LL;
}


bool __fastcall PartyOrganizationUtility__IsDisplayedRestrictionDialog(
        PartyOrganizationUtility_o *this,
        int32_t questId,
        int32_t phaseId,
        int32_t restrictionId,
        bool isAddHistory,
        const MethodInfo *method)
{
  System_String_o *v8; // x21
  System_String_o *v9; // x22
  System_String_o *v10; // x0
  WarBoardManager_TaskList_o *restrictionDialogHistoryList; // x0
  __int64 v12; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x21
  bool v14; // w22
  int32_t v16; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v17; // [xsp+8h] [xbp-28h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v17 = phaseId;
  v18 = questId;
  v16 = restrictionId;
  if ( (byte_438ED50 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Contains__);
    byte_438ED50 = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v18, 0LL);
  v9 = System_Int32__ToString((int32_t)&v17, 0LL);
  v10 = System_Int32__ToString((int32_t)&v16, 0LL);
  restrictionDialogHistoryList = (WarBoardManager_TaskList_o *)System_String__Concat_44904220(v8, v9, v10, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_9;
  v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)restrictionDialogHistoryList;
  v14 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.restrictionDialogHistoryList,
          restrictionDialogHistoryList,
          (const MethodInfo_30536E8 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( !v14 && isAddHistory )
  {
    restrictionDialogHistoryList = (WarBoardManager_TaskList_o *)this->fields.restrictionDialogHistoryList;
    if ( restrictionDialogHistoryList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)restrictionDialogHistoryList,
        v13,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
      return v14;
    }
LABEL_9:
    sub_B7769C(restrictionDialogHistoryList, v12);
  }
  return v14;
}


bool __fastcall PartyOrganizationUtility__IsEnableFriendshipUpItem(
        PartyOrganizationUtility_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438ED5E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_438ED5E = 1;
  }
  entity = 0LL;
  if ( itemId < 1 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          itemId,
          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return 0;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)entity;
  if ( !entity )
LABEL_14:
    sub_B7769C(Master_WarQuestSelectionMaster, v5);
  if ( entity->fields.bannerId != 30 )
    return 0;
  return ItemEntity__IsEnable((ItemEntity_o *)entity, 0LL);
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
  void *Instance; // x0
  __int64 v15; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  ServantSkillMaster_o *v17; // x27
  WarQuestSelectionMaster_o *v18; // x25
  SkillLvMaster_o *v19; // x26
  int v20; // w8
  void *v21; // x23
  unsigned int v22; // w27
  __int64 v23; // x25
  int32_t v24; // w2
  System_String_o *Name; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_int__o *ActRarity; // x0
  __int64 v34; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // [xsp+0h] [xbp-70h]
  SkillLvEntity_o *skillLvEntity; // [xsp+8h] [xbp-68h] BYREF
  WarEntity_o *v37; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_438ED52 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438ED52 = 1;
  }
  v37 = 0LL;
  entity = 0LL;
  skillLvEntity = 0LL;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B77560(
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
           &entity,
           servantId,
           (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      v17 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      v18 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)Instance,
              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v17 )
        goto LABEL_33;
      v19 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList(v17, equipServantId, 0LL);
      if ( !Instance )
        goto LABEL_33;
      v20 = *((_DWORD *)Instance + 6);
      v21 = Instance;
      if ( v20 >= 1 )
      {
        v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)v18;
        v22 = 0;
        while ( 1 )
        {
          if ( v22 >= v20 )
          {
            v34 = sub_B776C8(Instance);
            sub_B77668(v34, 0LL);
          }
          v23 = *((_QWORD *)v21 + (int)v22 + 4);
          if ( !v23 )
            goto LABEL_33;
          v24 = *(_DWORD *)(v23 + 48);
          if ( v24 && (eventId < 0 || v24 == eventId) )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_33;
            Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 &v37,
                                 v24,
                                 (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = v37;
              if ( !v37 )
                goto LABEL_33;
              Instance = (void *)EventEntity__IsEventPeriod((EventEntity_o *)v37, 0LL, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v19 )
                  goto LABEL_33;
                Instance = (void *)SkillLvMaster__TryGetEntity(v19, &skillLvEntity, *(_DWORD *)(v23 + 28), 1, 0LL);
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
          v20 = *((_DWORD *)v21 + 6);
          if ( (int)++v22 >= v20 )
            return 0;
        }
        Instance = v35;
        if ( v35 )
        {
          Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v35,
                       *(_DWORD *)(v23 + 28),
                       (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( Instance )
          {
            Name = SkillEntity__getName((SkillEntity_o *)Instance, 0LL);
            *skillName = Name;
            sub_B77560(
              (BattleServantConfConponent_o *)skillName,
              (System_Int32_array **)Name,
              v27,
              v28,
              v29,
              v30,
              v31,
              v32);
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
        sub_B7769C(Instance, v15);
      }
    }
  }
  return 0;
}


bool __fastcall PartyOrganizationUtility__IsRarityRestriction_32340428(
        PartyOrganizationUtility_o *this,
        int32_t servantId,
        int32_t servantRarity,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  ServantEntity_o *Entity; // x22
  SkillLvEntity_o *v13; // x0

  if ( (byte_438ED53 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438ED53 = 1;
  }
  if ( ((servantId | servantRarity) & 0x80000000) != 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      servantId,
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v11);
  }
  v13 = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0LL);
  return Entity && v13 && RarityRestrictedSkillUtil__IsDisabled(v13, Entity, servantRarity, 0LL);
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
  sub_B77560(
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

  if ( (byte_438ED55 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
    byte_438ED55 = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_B7769C(0LL, *(_QWORD *)&key);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcFollowerInfos,
    key,
    (WarBoardAIRoute_RouteData_o *)followerInfo,
    (const MethodInfo_2FF4150 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
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
  if ( (byte_438ED4E & 1) == 0 )
  {
    this = (PartyOrganizationUtility_o *)sub_B775C4(&PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo);
    byte_438ED4E = 1;
  }
  temporaryPartyInfo = v18->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (BattleServantConfConponent_o *)&v18->fields.temporaryPartyInfo;
  klass = (BattleServantConfConponent_c *)temporaryPartyInfo;
  if ( !temporaryPartyInfo )
  {
    v22 = (PartyOrganizationUtility_TemporaryPartyInfo_o *)sub_B77694(PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo);
    PartyOrganizationUtility_TemporaryPartyInfo___ctor(v22, 0LL);
    p_temporaryPartyInfo->klass = (BattleServantConfConponent_c *)v22;
    sub_B77560(p_temporaryPartyInfo, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
        sub_B77560(
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
        sub_B77560(
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
    sub_B7769C(this, userServantId);
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


bool __fastcall PartyOrganizationUtility__get_IsWaveBattleRestart(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._IsWaveBattleRestart_k__BackingField;
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


int64_t __fastcall PartyOrganizationUtility__get_WaveBattleStartTime(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._WaveBattleStartTime_k__BackingField;
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
  sub_B77560(
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


void __fastcall PartyOrganizationUtility__set_IsWaveBattleRestart(
        PartyOrganizationUtility_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsWaveBattleRestart_k__BackingField = value;
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._TransitionDestinationFromDetail_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PartyOrganizationUtility__set_WaveBattleStartTime(
        PartyOrganizationUtility_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._WaveBattleStartTime_k__BackingField = value;
}


void __fastcall PartyOrganizationUtility_TemporaryPartyInfo___ctor(
        PartyOrganizationUtility_TemporaryPartyInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}