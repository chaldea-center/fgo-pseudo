void __fastcall PartyOrganizationUtility___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42EC3A6 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationUtility_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_6891/*"FriendshipUpItemUseState"*/, v8, v9, v10);
    byte_42EC3A6 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)PartyOrganizationUtility_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6891/*"FriendshipUpItemUseState"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6891/*"FriendshipUpItemUseState"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall PartyOrganizationUtility___ctor(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42EC3A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility___ctor__, v14, v15, v16);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v17, v18, v19);
    byte_42EC3A5 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)v20;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  v27 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v27,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  this->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v27;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._npcFollowerInfos,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2A304CC *)Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUtility__AddRestrictionDialogHistory(
        PartyOrganizationUtility_o *this,
        int32_t questId,
        int32_t phaseId,
        int32_t restrictionId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o *v9; // x20
  System_String_o *v10; // x21
  System_String_o *v11; // x0
  WarBoardManager_TaskList_o *restrictionDialogHistoryList; // x0
  __int64 v13; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x20
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF
  int32_t v16; // [xsp+18h] [xbp-18h] BYREF
  int32_t v17; // [xsp+1Ch] [xbp-14h] BYREF

  v17 = questId;
  v16 = phaseId;
  v15 = restrictionId;
  if ( (byte_42EC397 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, questId, phaseId, *(_QWORD *)&restrictionId);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v6, v7, v8);
    byte_42EC397 = 1;
  }
  v9 = System_Int32__ToString((int32_t)&v17, 0LL);
  v10 = System_Int32__ToString((int32_t)&v16, 0LL);
  v11 = System_Int32__ToString((int32_t)&v15, 0LL);
  restrictionDialogHistoryList = (WarBoardManager_TaskList_o *)System_String__Concat_44580072(v9, v10, v11, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_8;
  v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)restrictionDialogHistoryList;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.restrictionDialogHistoryList,
         restrictionDialogHistoryList,
         (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    return;
  }
  restrictionDialogHistoryList = (WarBoardManager_TaskList_o *)this->fields.restrictionDialogHistoryList;
  if ( !restrictionDialogHistoryList )
LABEL_8:
    sub_B5D69C(restrictionDialogHistoryList, v13);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)restrictionDialogHistoryList,
    v14,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields._normalFollowerInfo, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields._normalFollowerInfo, 0LL, v2, v3, v4, v5, v6, v7);
  p_normalFollowerInfo[1] = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUtility__ClearNpcFollowerInfo(
        PartyOrganizationUtility_o *this,
        int32_t key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcFollowerInfos; // x0

  if ( (byte_42EC39D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__, key, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__, v6, v7, v8);
    byte_42EC39D = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_B5D69C(0LL, *(_QWORD *)&key);
  if ( (key & 0x80000000) != 0 )
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)npcFollowerInfos,
      (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
  else
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)npcFollowerInfos,
      key,
      (const MethodInfo_2F33AA0 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
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
  if ( (byte_42EC395 & 1) == 0 )
  {
    this = (PartyOrganizationUtility_o *)sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EC395 = 1;
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields._npcFollowerInfos, v12, v2, v3, v4, v5, v6, v7);
    this = *p_temporaryPartyInfo;
    if ( !*p_temporaryPartyInfo )
      goto LABEL_14;
    *(_QWORD *)&this->fields._SelectedPartyPosition_k__BackingField = 0LL;
    sub_B5D560(
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
    sub_B5D560(
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
          sub_B5D560(
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
          sub_B5D560(
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
      sub_B5D69C(this, method);
    }
    *(_DWORD *)&(*p_temporaryPartyInfo)->fields._IsForceDisableSupportSelectBackBtn_k__BackingField = -1;
    *p_temporaryPartyInfo = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_temporaryPartyInfo, 0LL, v37, v38, v39, v40, v41, v42);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  ItemEntity_o *AvailableFriendshipUpItemEventCampaigns; // x19
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  _QWORD *monitor; // x22
  __int64 v27; // x8
  unsigned __int64 v28; // x23
  ItemEntity_o *ItemData; // x0
  __int64 v30; // x1
  __int64 v32; // x0
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EC39F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    byte_42EC39F = 1;
  }
  memset(&v34, 0, sizeof(v34));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_26;
  AvailableFriendshipUpItemEventCampaigns = (ItemEntity_o *)EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                                              (EventCampaignMaster_o *)Instance,
                                                              0LL);
  if ( !AvailableFriendshipUpItemEventCampaigns )
    return AvailableFriendshipUpItemEventCampaigns;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_26:
    sub_B5D69C(Instance, v23);
  MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AvailableFriendshipUpItemEventCampaigns,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  AvailableFriendshipUpItemEventCampaigns = 0LL;
  v34 = v33;
  while ( 1 )
  {
    ItemData = (ItemEntity_o *)System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                 &v34,
                                 (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( ((unsigned __int8)ItemData & 1) == 0 )
      break;
    if ( !v34.fields.current )
      sub_B5D69C(ItemData, v30);
    monitor = v34.fields.current[2].monitor;
    if ( monitor )
    {
      v27 = monitor[3];
      if ( v27 )
      {
        if ( (int)v27 >= 1 )
        {
          v28 = 0LL;
          do
          {
            if ( v28 >= (unsigned int)v27 )
            {
              v32 = sub_B5D6C8(ItemData);
              sub_B5D668(v32, 0LL);
            }
            if ( !MasterData_WarQuestSelectionMaster )
              sub_B5D69C(ItemData, v30);
            ItemData = ItemMaster__GetItemData(MasterData_WarQuestSelectionMaster, *((_DWORD *)monitor + v28 + 8), 0LL);
            if ( ItemData
              && (!AvailableFriendshipUpItemEventCampaigns
               || ItemData->fields.endedAt <= AvailableFriendshipUpItemEventCampaigns->fields.endedAt) )
            {
              AvailableFriendshipUpItemEventCampaigns = ItemData;
            }
            LODWORD(v27) = *((_DWORD *)monitor + 6);
            ++v28;
          }
          while ( (__int64)v28 < (int)v27 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return AvailableFriendshipUpItemEventCampaigns;
}


int32_t __fastcall PartyOrganizationUtility__GetAvailableFriendshipUpItemNum(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableFriendshipUpItemEventCampaigns; // x19
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserItemMaster_o *v32; // x21
  _QWORD *monitor; // x26
  __int64 v34; // x8
  unsigned __int64 v35; // x27
  int32_t v36; // w22
  int64_t UserId; // x0
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v39; // x1
  UserItemEntity_o *v40; // x23
  ItemEntity_o *ItemData; // x0
  __int64 v42; // x1
  int num; // w9
  __int64 v45; // x1
  __int64 v47; // x0
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42EC3A0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v19, v20, v21);
    sub_B5D5C4(&NetworkManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26, v27);
    byte_42EC3A0 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_35;
  AvailableFriendshipUpItemEventCampaigns = EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                              (EventCampaignMaster_o *)Instance,
                                              0LL);
  if ( !AvailableFriendshipUpItemEventCampaigns )
    return (int)AvailableFriendshipUpItemEventCampaigns;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_35:
    sub_B5D69C(Instance, v29);
  }
  v32 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v48,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AvailableFriendshipUpItemEventCampaigns,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v49 = v48;
  LODWORD(AvailableFriendshipUpItemEventCampaigns) = 0;
  while ( 1 )
  {
    ItemData = (ItemEntity_o *)System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                 &v49,
                                 (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( ((unsigned __int8)ItemData & 1) == 0 )
      break;
    if ( !v49.fields.current )
      sub_B5D69C(ItemData, v45);
    monitor = v49.fields.current[2].monitor;
    if ( monitor )
    {
      v34 = monitor[3];
      if ( v34 )
      {
        if ( (int)v34 >= 1 )
        {
          v35 = 0LL;
          do
          {
            if ( v35 >= (unsigned int)v34 )
            {
              v47 = sub_B5D6C8(ItemData);
              sub_B5D668(v47, 0LL);
            }
            v36 = *((_DWORD *)monitor + v35 + 8);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            if ( !v32 )
              sub_B5D69C(UserId, UserId);
            EntityDefinitely = UserItemMaster__GetEntityDefinitely(v32, UserId, v36, 0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              sub_B5D69C(EntityDefinitely, v39);
            v40 = EntityDefinitely;
            ItemData = ItemMaster__GetItemData(MasterData_WarQuestSelectionMaster, v36, 0LL);
            if ( !v40 )
              sub_B5D69C(ItemData, v42);
            num = v40->fields.num;
            LODWORD(v34) = *((_DWORD *)monitor + 6);
            ++v35;
            if ( num < 1 || ItemData == 0LL )
              num = 0;
            LODWORD(AvailableFriendshipUpItemEventCampaigns) = num + (_DWORD)AvailableFriendshipUpItemEventCampaigns;
          }
          while ( (__int64)v35 < (int)v34 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v49,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return (int)AvailableFriendshipUpItemEventCampaigns;
}


int64_t __fastcall PartyOrganizationUtility__GetFriendshipUpItemEndedTime(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  PartyOrganizationUtility_o *v7; // x0
  const MethodInfo *v8; // x1
  int64_t result; // x0

  if ( (byte_42EC3A1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v4, v5, v6);
    byte_42EC3A1 = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v7 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v7 )
    sub_B5D69C(0LL, v8);
  result = (int64_t)PartyOrganizationUtility__GetAvailableFriendshipUpItemEntity(v7, v8);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v14; // x1
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EC3A3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___, questId, questPhase, method);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    byte_42EC3A3 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
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
    sub_B5D69C(UserId, v14);
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
  __int64 v3; // x3

  if ( (byte_42EC39C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_GetValue_int__FollowerInfo___, key, (_DWORD)method, v3);
    byte_42EC39C = 1;
  }
  return (FollowerInfo_o *)BasicHelper__GetValue_int__object_(
                             (System_Collections_Generic_Dictionary_K__V__o *)this->fields._npcFollowerInfos,
                             key,
                             0LL,
                             (const MethodInfo_1AD8BC4 *)Method_BasicHelper_GetValue_int__FollowerInfo___);
}


// local variable allocation has failed, the output may be wrong!
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  System_Text_StringBuilder_o *v41; // x20
  System_String_o *v42; // x0
  System_String_o *v43; // x23
  System_String_o *v44; // x26
  Il2CppObject *RarityType; // x0
  System_String_o *v46; // x25
  System_String_o *v47; // x0
  System_String_o *v48; // x24
  System_String_o *v49; // x0
  System_String_o *v50; // x22
  System_String_o *v51; // x26
  System_String_o *v52; // x27
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  __int64 v55; // x1
  System_String_o *v56; // x21
  int32_t m_stringLength; // w27
  int32_t v58; // w28

  if ( (byte_42EC39A & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)maxLength, (_DWORD)servantName, *(_QWORD *)&servantRarity);
    sub_B5D5C4(&System_Math_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Rarity_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_10316/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10320/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_10319/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_10315/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_10318/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_10317/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, v38, v39, v40);
    byte_42EC39A = 1;
  }
  v41 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v41, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_10315/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, 0LL);
  v43 = System_String__Format(v42, (Il2CppObject *)servantName, 0LL);
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_10316/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = (Il2CppObject *)Rarity__getRarityType(servantRarity, 0LL);
  v46 = System_String__Format(v44, RarityType, 0LL);
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_10317/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, 0LL);
  v48 = System_String__Format(v47, (Il2CppObject *)equipName, 0LL);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_10318/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, 0LL);
  v50 = System_String__Format(v49, (Il2CppObject *)skillName, 0LL);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_10319/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, 0LL);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_10320/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, 0LL);
  v53 = (Il2CppObject *)Rarity__getRarityType(actMaxRarity, 0LL);
  v54 = System_String__Format(v52, v53, 0LL);
  if ( !v43 || !v48 )
    goto LABEL_17;
  v56 = v54;
  m_stringLength = v43->fields.m_stringLength;
  v58 = v48->fields.m_stringLength;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v54 = (System_String_o *)System_Math__Max_45149472(m_stringLength, v58, 0LL);
  *maxLength = (int)v54;
  if ( !v50
    || (v54 = (System_String_o *)System_Math__Max_45149472((int32_t)v54, v50->fields.m_stringLength, 0LL),
        *maxLength = (int)v54,
        !v41) )
  {
LABEL_17:
    sub_B5D69C(v54, v55);
  }
  System_Text_StringBuilder__Append_42953744(v41, v43, 0LL);
  System_Text_StringBuilder__Append_42953744(v41, v46, 0LL);
  System_Text_StringBuilder__Append_42953744(v41, v48, 0LL);
  System_Text_StringBuilder__Append_42953744(v41, v50, 0LL);
  System_Text_StringBuilder__Append_42953744(v41, v51, 0LL);
  System_Text_StringBuilder__Append_42953744(v41, v56, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v41->klass->vtable._3_ToString.method)(
                              v41,
                              v41->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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

  if ( (byte_42EC3A2 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)startingNum, (_DWORD)subNum, myCnt);
    byte_42EC3A2 = 1;
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
          sub_B5D69C(PartyItemSmc_k__BackingField, startingNum);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42EC39E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42EC39E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v8);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *v11; // x21
  System_String_o *v12; // x22
  System_String_o *v13; // x0
  WarBoardManager_TaskList_o *restrictionDialogHistoryList; // x0
  __int64 v15; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x21
  bool v17; // w22
  int32_t v19; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v20; // [xsp+8h] [xbp-28h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  v20 = phaseId;
  v21 = questId;
  v19 = restrictionId;
  if ( (byte_42EC396 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, questId, phaseId, *(_QWORD *)&restrictionId);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v8, v9, v10);
    byte_42EC396 = 1;
  }
  v11 = System_Int32__ToString((int32_t)&v21, 0LL);
  v12 = System_Int32__ToString((int32_t)&v20, 0LL);
  v13 = System_Int32__ToString((int32_t)&v19, 0LL);
  restrictionDialogHistoryList = (WarBoardManager_TaskList_o *)System_String__Concat_44580072(v11, v12, v13, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_9;
  v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)restrictionDialogHistoryList;
  v17 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.restrictionDialogHistoryList,
          restrictionDialogHistoryList,
          (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( !v17 && isAddHistory )
  {
    restrictionDialogHistoryList = (WarBoardManager_TaskList_o *)this->fields.restrictionDialogHistoryList;
    if ( restrictionDialogHistoryList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)restrictionDialogHistoryList,
        v16,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      return v17;
    }
LABEL_9:
    sub_B5D69C(restrictionDialogHistoryList, v15);
  }
  return v17;
}


bool __fastcall PartyOrganizationUtility__IsEnableFriendshipUpItem(
        PartyOrganizationUtility_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EC3A4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, itemId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8, v9, v10);
    byte_42EC3A4 = 1;
  }
  entity = 0LL;
  if ( itemId < 1 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          itemId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return 0;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)entity;
  if ( !entity )
LABEL_14:
    sub_B5D69C(Master_WarQuestSelectionMaster, v12);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  void *Instance; // x0
  __int64 v42; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  ServantSkillMaster_o *v44; // x27
  WarQuestSelectionMaster_o *v45; // x25
  SkillLvMaster_o *v46; // x26
  int v47; // w8
  void *v48; // x23
  unsigned int v49; // w27
  __int64 v50; // x25
  int32_t v51; // w2
  System_String_o *Name; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_IEnumerable_int__o *ActRarity; // x0
  __int64 v61; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v62; // [xsp+0h] [xbp-70h]
  SkillLvEntity_o *skillLvEntity; // [xsp+8h] [xbp-68h] BYREF
  WarEntity_o *v64; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42EC398 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_EventMaster___,
      (_DWORD)skillName,
      (_DWORD)actMaxRarity,
      *(_QWORD *)&servantId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v26, v27, v28);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v29, v30, v31);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_1/*""*/, v38, v39, v40);
    byte_42EC398 = 1;
  }
  v64 = 0LL;
  entity = 0LL;
  skillLvEntity = 0LL;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
           &entity,
           servantId,
           (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      v44 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      v45 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)Instance,
              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v44 )
        goto LABEL_33;
      v46 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList(v44, equipServantId, 0LL);
      if ( !Instance )
        goto LABEL_33;
      v47 = *((_DWORD *)Instance + 6);
      v48 = Instance;
      if ( v47 >= 1 )
      {
        v62 = (DataMasterBase_WarMaster__WarEntity__int__o *)v45;
        v49 = 0;
        while ( 1 )
        {
          if ( v49 >= v47 )
          {
            v61 = sub_B5D6C8(Instance);
            sub_B5D668(v61, 0LL);
          }
          v50 = *((_QWORD *)v48 + (int)v49 + 4);
          if ( !v50 )
            goto LABEL_33;
          v51 = *(_DWORD *)(v50 + 48);
          if ( v51 && (eventId < 0 || v51 == eventId) )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_33;
            Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 &v64,
                                 v51,
                                 (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = v64;
              if ( !v64 )
                goto LABEL_33;
              Instance = (void *)EventEntity__IsEventPeriod((EventEntity_o *)v64, 0LL, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v46 )
                  goto LABEL_33;
                Instance = (void *)SkillLvMaster__TryGetEntity(v46, &skillLvEntity, *(_DWORD *)(v50 + 28), 1, 0LL);
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
          v47 = *((_DWORD *)v48 + 6);
          if ( (int)++v49 >= v47 )
            return 0;
        }
        Instance = v62;
        if ( v62 )
        {
          Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v62,
                       *(_DWORD *)(v50 + 28),
                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( Instance )
          {
            Name = SkillEntity__getName((SkillEntity_o *)Instance, 0LL);
            *skillName = Name;
            sub_B5D560(
              (BattleServantConfConponent_o *)skillName,
              (System_Int32_array **)Name,
              v54,
              v55,
              v56,
              v57,
              v58,
              v59);
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
        sub_B5D69C(Instance, v42);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationUtility__IsRarityRestriction_32053400(
        PartyOrganizationUtility_o *this,
        int32_t servantId,
        int32_t servantRarity,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  ServantEntity_o *Entity; // x22
  SkillLvEntity_o *v22; // x0

  if ( (byte_42EC399 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, servantId, servantRarity, *(_QWORD *)&skillId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42EC399 = 1;
  }
  if ( ((servantId | servantRarity) & 0x80000000) != 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      servantId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v20);
  }
  v22 = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0LL);
  return Entity && v22 && RarityRestrictedSkillUtil__IsDisabled(v22, Entity, servantRarity, 0LL);
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
  sub_B5D560(
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

  if ( (byte_42EC39B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__,
      key,
      (_DWORD)followerInfo,
      method);
    byte_42EC39B = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_B5D69C(0LL, *(_QWORD *)&key);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcFollowerInfos,
    key,
    (WarBoardAIRoute_RouteData_o *)followerInfo,
    (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
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
  if ( (byte_42EC394 & 1) == 0 )
  {
    this = (PartyOrganizationUtility_o *)sub_B5D5C4(
                                           &PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo,
                                           userServantId,
                                           userEquipId,
                                           *(_QWORD *)&deckNumber);
    byte_42EC394 = 1;
  }
  temporaryPartyInfo = v18->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (BattleServantConfConponent_o *)&v18->fields.temporaryPartyInfo;
  klass = (BattleServantConfConponent_c *)temporaryPartyInfo;
  if ( !temporaryPartyInfo )
  {
    v22 = (PartyOrganizationUtility_TemporaryPartyInfo_o *)sub_B5D694(PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo);
    PartyOrganizationUtility_TemporaryPartyInfo___ctor(v22, 0LL);
    p_temporaryPartyInfo->klass = (BattleServantConfConponent_c *)v22;
    sub_B5D560(p_temporaryPartyInfo, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
        sub_B5D560(
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
        sub_B5D560(
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
    sub_B5D69C(this, userServantId);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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