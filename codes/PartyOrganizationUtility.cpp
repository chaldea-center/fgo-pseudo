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

  if ( (byte_40FDE20 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationUtility_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_6780, v8);
    byte_40FDE20 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)PartyOrganizationUtility_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_6780;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6780;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall PartyOrganizationUtility___ctor(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40FDE1F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v8);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility___ctor__, v9);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v10);
    byte_40FDE1F = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)v11;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  v22 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo,
                                                                                                   v18,
                                                                                                   v19,
                                                                                                   v20,
                                                                                                   v21);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v22,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  this->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._npcFollowerInfos,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2A555A4 *)Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
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
  System_String_o *v10; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x20
  struct System_Collections_Generic_List_string__o *restrictionDialogHistoryList; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF
  int32_t v14; // [xsp+18h] [xbp-18h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-14h] BYREF

  v15 = questId;
  v14 = phaseId;
  v13 = restrictionId;
  if ( (byte_40FDE13 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v6);
    byte_40FDE13 = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v15, 0LL);
  v8 = System_Int32__ToString((int32_t)&v14, 0LL);
  v9 = System_Int32__ToString((int32_t)&v13, 0LL);
  v10 = System_String__Concat_43746016(v7, v8, v9, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_8;
  v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)v10;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.restrictionDialogHistoryList,
         (WarBoardManager_TaskList_o *)v10,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    return;
  }
  restrictionDialogHistoryList = this->fields.restrictionDialogHistoryList;
  if ( !restrictionDialogHistoryList )
LABEL_8:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)restrictionDialogHistoryList,
    v11,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._normalFollowerInfo, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._normalFollowerInfo, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_40FDE19 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__, *(_QWORD *)&key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__, v5);
    byte_40FDE19 = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_B170D4();
  if ( (key & 0x80000000) != 0 )
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)npcFollowerInfos,
      (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
  else
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)npcFollowerInfos,
      key,
      (const MethodInfo_2DEAD98 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
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
  WebViewManager_o *Instance; // x0
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ItemEntity_o *AvailableFriendshipUpItemEventCampaigns; // x19
  WebViewManager_o *v11; // x0
  ItemMaster_o *v12; // x20
  _QWORD *monitor; // x22
  __int64 v14; // x8
  unsigned __int64 v15; // x23
  ItemEntity_o *ItemData; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FDE1B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FDE1B = 1;
  }
  memset(&v21, 0, sizeof(v21));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  AvailableFriendshipUpItemEventCampaigns = (ItemEntity_o *)EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                                              MasterData_WarQuestSelectionMaster,
                                                              0LL);
  if ( !AvailableFriendshipUpItemEventCampaigns )
    return AvailableFriendshipUpItemEventCampaigns;
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v11 )
LABEL_26:
    sub_B170D4();
  v12 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)v11,
                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AvailableFriendshipUpItemEventCampaigns,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  AvailableFriendshipUpItemEventCampaigns = 0LL;
  v21 = v20;
  while ( 1 )
  {
    ItemData = (ItemEntity_o *)System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                 &v21,
                                 (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( ((unsigned __int8)ItemData & 1) == 0 )
      break;
    if ( !v21.fields.current )
      sub_B170D4();
    monitor = v21.fields.current[2].monitor;
    if ( monitor )
    {
      v14 = monitor[3];
      if ( v14 )
      {
        if ( (int)v14 >= 1 )
        {
          v15 = 0LL;
          do
          {
            if ( v15 >= (unsigned int)v14 )
            {
              sub_B17100(ItemData, v17, v18);
              sub_B170A0();
            }
            if ( !v12 )
              sub_B170D4();
            ItemData = ItemMaster__GetItemData(v12, *((_DWORD *)monitor + v15 + 8), 0LL);
            if ( ItemData
              && (!AvailableFriendshipUpItemEventCampaigns
               || ItemData->fields.endedAt <= AvailableFriendshipUpItemEventCampaigns->fields.endedAt) )
            {
              AvailableFriendshipUpItemEventCampaigns = ItemData;
            }
            LODWORD(v14) = *((_DWORD *)monitor + 6);
            ++v15;
          }
          while ( (__int64)v15 < (int)v14 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
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
  WebViewManager_o *Instance; // x0
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableFriendshipUpItemEventCampaigns; // x19
  WebViewManager_o *v13; // x0
  ItemMaster_o *v14; // x20
  WebViewManager_o *v15; // x0
  UserItemMaster_o *v16; // x21
  _QWORD *monitor; // x26
  __int64 v18; // x8
  unsigned __int64 v19; // x27
  int32_t v20; // w22
  int64_t UserId; // x1
  UserItemEntity_o *EntityDefinitely; // x0
  UserItemEntity_o *v23; // x23
  ItemEntity_o *ItemData; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  int num; // w9
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FDE1C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v2);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FDE1C = 1;
  }
  memset(&v31, 0, sizeof(v31));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_35;
  AvailableFriendshipUpItemEventCampaigns = EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                              MasterData_WarQuestSelectionMaster,
                                              0LL);
  if ( !AvailableFriendshipUpItemEventCampaigns )
    return (int)AvailableFriendshipUpItemEventCampaigns;
  v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v13
    || (v14 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v13,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___),
        (v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_35:
    sub_B170D4();
  }
  v16 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)v15,
                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AvailableFriendshipUpItemEventCampaigns,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v31 = v30;
  LODWORD(AvailableFriendshipUpItemEventCampaigns) = 0;
  while ( 1 )
  {
    ItemData = (ItemEntity_o *)System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                 &v31,
                                 (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( ((unsigned __int8)ItemData & 1) == 0 )
      break;
    if ( !v31.fields.current )
      sub_B170D4();
    monitor = v31.fields.current[2].monitor;
    if ( monitor )
    {
      v18 = monitor[3];
      if ( v18 )
      {
        if ( (int)v18 >= 1 )
        {
          v19 = 0LL;
          do
          {
            if ( v19 >= (unsigned int)v18 )
            {
              sub_B17100(ItemData, v25, v26);
              sub_B170A0();
            }
            v20 = *((_DWORD *)monitor + v19 + 8);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            if ( !v16 )
              sub_B170D4();
            EntityDefinitely = UserItemMaster__GetEntityDefinitely(v16, UserId, v20, 0LL);
            if ( !v14 )
              sub_B170D4();
            v23 = EntityDefinitely;
            ItemData = ItemMaster__GetItemData(v14, v20, 0LL);
            if ( !v23 )
              sub_B170D4();
            num = v23->fields.num;
            LODWORD(v18) = *((_DWORD *)monitor + 6);
            ++v19;
            if ( num < 1 || ItemData == 0LL )
              num = 0;
            LODWORD(AvailableFriendshipUpItemEventCampaigns) = num + (_DWORD)AvailableFriendshipUpItemEventCampaigns;
          }
          while ( (__int64)v19 < (int)v18 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
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

  if ( (byte_40FDE1D & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v2);
    byte_40FDE1D = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v3 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v3 )
    sub_B170D4();
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
  if ( (byte_40FDE18 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_GetValue_int__FollowerInfo___, *(_QWORD *)&key);
    byte_40FDE18 = 1;
  }
  return (FollowerInfo_o *)BasicHelper__GetValue_int__object_(
                             (System_Collections_Generic_Dictionary_K__V__o *)this->fields._npcFollowerInfos,
                             key,
                             0LL,
                             (const MethodInfo_18B7E58 *)Method_BasicHelper_GetValue_int__FollowerInfo___);
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
  int32_t v40; // w0

  if ( (byte_40FDE16 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, maxLength);
    sub_B16FFC(&System_Math_TypeInfo, v14);
    sub_B16FFC(&Rarity_TypeInfo, v15);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_10177, v17);
    sub_B16FFC(&StringLiteral_10181, v18);
    sub_B16FFC(&StringLiteral_10180, v19);
    sub_B16FFC(&StringLiteral_10176, v20);
    sub_B16FFC(&StringLiteral_10179, v21);
    sub_B16FFC(&StringLiteral_10178, v22);
    byte_40FDE16 = 1;
  }
  v23 = (System_Text_StringBuilder_o *)sub_B170CC(
                                         System_Text_StringBuilder_TypeInfo,
                                         maxLength,
                                         servantName,
                                         *(_QWORD *)&servantRarity,
                                         equipName);
  System_Text_StringBuilder___ctor(v23, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10176, 0LL);
  v25 = System_String__Format(v24, (Il2CppObject *)servantName, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_10177, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = (Il2CppObject *)Rarity__getRarityType(servantRarity, 0LL);
  v28 = System_String__Format(v26, RarityType, 0LL);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_10178, 0LL);
  v30 = System_String__Format(v29, (Il2CppObject *)equipName, 0LL);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_10179, 0LL);
  v32 = System_String__Format(v31, (Il2CppObject *)skillName, 0LL);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_10180, 0LL);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_10181, 0LL);
  v35 = (Il2CppObject *)Rarity__getRarityType(actMaxRarity, 0LL);
  v36 = System_String__Format(v34, v35, 0LL);
  if ( !v25 || !v30 )
    goto LABEL_17;
  v37 = v36;
  m_stringLength = v25->fields.m_stringLength;
  v39 = v30->fields.m_stringLength;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v40 = System_Math__Max_44463768(m_stringLength, v39, 0LL);
  *maxLength = v40;
  if ( !v32 || (*maxLength = System_Math__Max_44463768(v40, v32->fields.m_stringLength, 0LL), !v23) )
LABEL_17:
    sub_B170D4();
  System_Text_StringBuilder__Append_41914240(v23, v25, 0LL);
  System_Text_StringBuilder__Append_41914240(v23, v28, 0LL);
  System_Text_StringBuilder__Append_41914240(v23, v30, 0LL);
  System_Text_StringBuilder__Append_41914240(v23, v32, 0LL);
  System_Text_StringBuilder__Append_41914240(v23, v33, 0LL);
  System_Text_StringBuilder__Append_41914240(v23, v37, 0LL);
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
  PartyOrganizationListViewItem_o *Member; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t v15; // w8

  if ( (byte_40FDE1E & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, startingNum);
    byte_40FDE1E = 1;
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
      Member = PartyListViewItem__GetMember(PartyItemSmc_k__BackingField, v10, 0LL);
      if ( (unsigned int)v10 <= 2 )
      {
        if ( !Member )
LABEL_30:
          sub_B170D4();
        v11 += Member->fields.isFollower;
      }
      else if ( !Member )
      {
        goto LABEL_30;
      }
      if ( !Member->fields.isFollower && !PartyOrganizationListViewItem__get_IsEmpty(Member, 0LL) )
        ++*myCnt;
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
      v15 = static_fields->StartingMemberFriendshipRate - 1000;
      *startingNum = v15;
      if ( v11 >= 1 )
        *subNum = v15 / 5;
    }
  }
}


bool __fastcall PartyOrganizationUtility__IsAvailableFriendshipUpItem(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FDE1A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40FDE1A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(MasterData_WarQuestSelectionMaster, 0LL) != 0LL;
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
  System_String_o *v12; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x21
  bool v14; // w22
  struct System_Collections_Generic_List_string__o *restrictionDialogHistoryList; // x0
  int32_t v17; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  v18 = phaseId;
  v19 = questId;
  v17 = restrictionId;
  if ( (byte_40FDE12 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v8);
    byte_40FDE12 = 1;
  }
  v9 = System_Int32__ToString((int32_t)&v19, 0LL);
  v10 = System_Int32__ToString((int32_t)&v18, 0LL);
  v11 = System_Int32__ToString((int32_t)&v17, 0LL);
  v12 = System_String__Concat_43746016(v9, v10, v11, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_9;
  v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)v12;
  v14 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.restrictionDialogHistoryList,
          (WarBoardManager_TaskList_o *)v12,
          (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( !v14 && isAddHistory )
  {
    restrictionDialogHistoryList = this->fields.restrictionDialogHistoryList;
    if ( restrictionDialogHistoryList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)restrictionDialogHistoryList,
        v13,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      return v14;
    }
LABEL_9:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v25; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x24
  WebViewManager_o *v27; // x0
  ServantSkillMaster_o *v28; // x27
  WebViewManager_o *v29; // x0
  WarQuestSelectionMaster_o *v30; // x25
  WebViewManager_o *v31; // x0
  WarQuestSelectionMaster_o *v32; // x0
  SkillLvMaster_o *v33; // x26
  ServantSkillEntity_array *ServantSkillList; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  int max_length; // w8
  ServantSkillEntity_array *v38; // x23
  unsigned int v39; // w27
  ServantSkillEntity_o *v40; // x25
  SkillEntity_o *v42; // x0
  System_String_o *Name; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_IEnumerable_int__o *ActRarity; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // [xsp+0h] [xbp-70h]
  SkillLvEntity_o *skillLvEntity; // [xsp+8h] [xbp-68h] BYREF
  WarEntity_o *v53; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40FDE14 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, skillName);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v17);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v19);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&StringLiteral_1, v22);
    byte_40FDE14 = 1;
  }
  v53 = 0LL;
  entity = 0LL;
  skillLvEntity = 0LL;
  *skillName = (System_String_o *)StringLiteral_1;
  sub_B16F98(
    (BattleServantConfConponent_o *)skillName,
    (System_Int32_array **)StringLiteral_1,
    (System_String_array **)actMaxRarity,
    *(System_String_array ***)&servantId,
    *(System_Boolean_array ***)&servantRarity,
    *(System_Int32_array ***)&equipServantId,
    *(System_Int32_array **)&eventId,
    (System_Int32_array *)method);
  *actMaxRarity = 0;
  if ( ((servantId | servantRarity | equipServantId) & 0x80000000) == 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_33;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           MasterData_WarQuestSelectionMaster,
           &entity,
           servantId,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v25 )
        goto LABEL_33;
      v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v25,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
      v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v27 )
        goto LABEL_33;
      v28 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v27,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v29 )
        goto LABEL_33;
      v30 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)v29,
              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
      v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v31 )
        goto LABEL_33;
      v32 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)v31,
              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v28 )
        goto LABEL_33;
      v33 = (SkillLvMaster_o *)v32;
      ServantSkillList = ServantSkillMaster__getServantSkillList(v28, equipServantId, 0LL);
      if ( !ServantSkillList )
        goto LABEL_33;
      max_length = ServantSkillList->max_length;
      v38 = ServantSkillList;
      if ( max_length >= 1 )
      {
        v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)v30;
        v39 = 0;
        while ( 1 )
        {
          if ( v39 >= max_length )
          {
            sub_B17100(ServantSkillList, v35, v36);
            sub_B170A0();
          }
          v40 = v38->m_Items[v39];
          if ( !v40 )
            goto LABEL_33;
          v36 = (unsigned int)v40->fields.eventId;
          if ( (_DWORD)v36 && (eventId < 0 || (_DWORD)v36 == eventId) )
          {
            if ( !v26 )
              goto LABEL_33;
            ServantSkillList = (ServantSkillEntity_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                             v26,
                                                             &v53,
                                                             v36,
                                                             (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
            {
              if ( !v53 )
                goto LABEL_33;
              ServantSkillList = (ServantSkillEntity_array *)EventEntity__IsEventPeriod((EventEntity_o *)v53, 0LL, 0LL);
              if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
              {
                if ( !v33 )
                  goto LABEL_33;
                ServantSkillList = (ServantSkillEntity_array *)SkillLvMaster__TryGetEntity(
                                                                 v33,
                                                                 &skillLvEntity,
                                                                 v40->fields.skillId,
                                                                 1,
                                                                 0LL);
                if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
                {
                  ServantSkillList = (ServantSkillEntity_array *)RarityRestrictedSkillUtil__IsDisabled(
                                                                   skillLvEntity,
                                                                   (ServantEntity_o *)entity,
                                                                   servantRarity,
                                                                   0LL);
                  if ( ((unsigned __int8)ServantSkillList & 1) != 0 )
                    break;
                }
              }
            }
          }
          max_length = v38->max_length;
          if ( (int)++v39 >= max_length )
            return 0;
        }
        if ( v51 )
        {
          v42 = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v51,
                                   v40->fields.skillId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( v42 )
          {
            Name = SkillEntity__getName(v42, 0LL);
            *skillName = Name;
            sub_B16F98(
              (BattleServantConfConponent_o *)skillName,
              (System_Int32_array **)Name,
              v44,
              v45,
              v46,
              v47,
              v48,
              v49);
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
        sub_B170D4();
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationUtility__IsRarityRestriction_32530996(
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *Entity; // x22
  WebViewManager_o *v16; // x0
  SkillLvMaster_o *v17; // x0
  SkillLvEntity_o *v18; // x0

  if ( (byte_40FDE15 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FDE15 = 1;
  }
  if ( ((servantId | servantRarity) & 0x80000000) != 0 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      servantId,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v17 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v16,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  v18 = SkillLvMaster__GetEntity(v17, skillId, skillLv, 0LL);
  return Entity && v18 && RarityRestrictedSkillUtil__IsDisabled(v18, Entity, servantRarity, 0LL);
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
  sub_B16F98(
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

  if ( (byte_40FDE17 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__, *(_QWORD *)&key);
    byte_40FDE17 = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcFollowerInfos,
    key,
    (WarBoardAIRoute_RouteData_o *)followerInfo,
    (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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