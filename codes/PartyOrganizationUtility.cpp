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

  if ( (byte_418B7F6 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationUtility_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_6808/*"FriendshipUpItemUseState"*/, v8);
    byte_418B7F6 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)PartyOrganizationUtility_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_6808/*"FriendshipUpItemUseState"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6808/*"FriendshipUpItemUseState"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall PartyOrganizationUtility___ctor(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_418B7F5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v4);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility___ctor__, v6);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v7);
    byte_418B7F5 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)v8;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v15,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  this->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._npcFollowerInfos,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2841CD4 *)Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
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
  __int64 v11; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v12; // x20
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF
  int32_t v14; // [xsp+18h] [xbp-18h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-14h] BYREF

  v15 = questId;
  v14 = phaseId;
  v13 = restrictionId;
  if ( (byte_418B7E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v6);
    byte_418B7E9 = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v15, 0LL);
  v8 = System_Int32__ToString((int32_t)&v14, 0LL);
  v9 = System_Int32__ToString((int32_t)&v13, 0LL);
  restrictionDialogHistoryList = (WarBoardManager_TaskList_o *)System_String__Concat_44307816(v7, v8, v9, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_8;
  v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)restrictionDialogHistoryList;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.restrictionDialogHistoryList,
         restrictionDialogHistoryList,
         (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    return;
  }
  restrictionDialogHistoryList = (WarBoardManager_TaskList_o *)this->fields.restrictionDialogHistoryList;
  if ( !restrictionDialogHistoryList )
LABEL_8:
    sub_B2C434(restrictionDialogHistoryList, v11);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)restrictionDialogHistoryList,
    v12,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields._normalFollowerInfo, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields._normalFollowerInfo, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_418B7EF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__, *(_QWORD *)&key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__, v5);
    byte_418B7EF = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_B2C434(0LL, *(_QWORD *)&key);
  if ( (key & 0x80000000) != 0 )
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)npcFollowerInfos,
      (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
  else
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)npcFollowerInfos,
      key,
      (const MethodInfo_2E66128 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
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
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  ItemEntity_o *AvailableFriendshipUpItemEventCampaigns; // x19
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  _QWORD *monitor; // x22
  __int64 v13; // x8
  unsigned __int64 v14; // x23
  ItemEntity_o *ItemData; // x0
  __int64 v16; // x1
  __int64 v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418B7F1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418B7F1 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_26;
  AvailableFriendshipUpItemEventCampaigns = (ItemEntity_o *)EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                                              (EventCampaignMaster_o *)Instance,
                                                              0LL);
  if ( !AvailableFriendshipUpItemEventCampaigns )
    return AvailableFriendshipUpItemEventCampaigns;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_26:
    sub_B2C434(Instance, v9);
  MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AvailableFriendshipUpItemEventCampaigns,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  AvailableFriendshipUpItemEventCampaigns = 0LL;
  v20 = v19;
  while ( 1 )
  {
    ItemData = (ItemEntity_o *)System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                 &v20,
                                 (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( ((unsigned __int8)ItemData & 1) == 0 )
      break;
    if ( !v20.fields.current )
      sub_B2C434(ItemData, v16);
    monitor = v20.fields.current[2].monitor;
    if ( monitor )
    {
      v13 = monitor[3];
      if ( v13 )
      {
        if ( (int)v13 >= 1 )
        {
          v14 = 0LL;
          do
          {
            if ( v14 >= (unsigned int)v13 )
            {
              v18 = sub_B2C460(ItemData);
              sub_B2C400(v18, 0LL);
            }
            if ( !MasterData_WarQuestSelectionMaster )
              sub_B2C434(ItemData, v16);
            ItemData = ItemMaster__GetItemData(MasterData_WarQuestSelectionMaster, *((_DWORD *)monitor + v14 + 8), 0LL);
            if ( ItemData
              && (!AvailableFriendshipUpItemEventCampaigns
               || ItemData->fields.endedAt <= AvailableFriendshipUpItemEventCampaigns->fields.endedAt) )
            {
              AvailableFriendshipUpItemEventCampaigns = ItemData;
            }
            LODWORD(v13) = *((_DWORD *)monitor + 6);
            ++v14;
          }
          while ( (__int64)v14 < (int)v13 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
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
  __int64 v11; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableFriendshipUpItemEventCampaigns; // x19
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserItemMaster_o *v14; // x21
  _QWORD *monitor; // x26
  __int64 v16; // x8
  unsigned __int64 v17; // x27
  int32_t v18; // w22
  int64_t UserId; // x0
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v21; // x1
  UserItemEntity_o *v22; // x23
  ItemEntity_o *ItemData; // x0
  __int64 v24; // x1
  int num; // w9
  __int64 v27; // x1
  __int64 v29; // x0
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_418B7F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v2);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418B7F2 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_35;
  AvailableFriendshipUpItemEventCampaigns = EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                              (EventCampaignMaster_o *)Instance,
                                              0LL);
  if ( !AvailableFriendshipUpItemEventCampaigns )
    return (int)AvailableFriendshipUpItemEventCampaigns;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_35:
    sub_B2C434(Instance, v11);
  }
  v14 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AvailableFriendshipUpItemEventCampaigns,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v31 = v30;
  LODWORD(AvailableFriendshipUpItemEventCampaigns) = 0;
  while ( 1 )
  {
    ItemData = (ItemEntity_o *)System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                 &v31,
                                 (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( ((unsigned __int8)ItemData & 1) == 0 )
      break;
    if ( !v31.fields.current )
      sub_B2C434(ItemData, v27);
    monitor = v31.fields.current[2].monitor;
    if ( monitor )
    {
      v16 = monitor[3];
      if ( v16 )
      {
        if ( (int)v16 >= 1 )
        {
          v17 = 0LL;
          do
          {
            if ( v17 >= (unsigned int)v16 )
            {
              v29 = sub_B2C460(ItemData);
              sub_B2C400(v29, 0LL);
            }
            v18 = *((_DWORD *)monitor + v17 + 8);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            if ( !v14 )
              sub_B2C434(UserId, UserId);
            EntityDefinitely = UserItemMaster__GetEntityDefinitely(v14, UserId, v18, 0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              sub_B2C434(EntityDefinitely, v21);
            v22 = EntityDefinitely;
            ItemData = ItemMaster__GetItemData(MasterData_WarQuestSelectionMaster, v18, 0LL);
            if ( !v22 )
              sub_B2C434(ItemData, v24);
            num = v22->fields.num;
            LODWORD(v16) = *((_DWORD *)monitor + 6);
            ++v17;
            if ( num < 1 || ItemData == 0LL )
              num = 0;
            LODWORD(AvailableFriendshipUpItemEventCampaigns) = num + (_DWORD)AvailableFriendshipUpItemEventCampaigns;
          }
          while ( (__int64)v17 < (int)v16 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
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

  if ( (byte_418B7F3 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v2);
    byte_418B7F3 = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v3 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v3 )
    sub_B2C434(0LL, v4);
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
  if ( (byte_418B7EE & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_GetValue_int__FollowerInfo___, *(_QWORD *)&key);
    byte_418B7EE = 1;
  }
  return (FollowerInfo_o *)BasicHelper__GetValue_int__object_(
                             (System_Collections_Generic_Dictionary_K__V__o *)this->fields._npcFollowerInfos,
                             key,
                             0LL,
                             (const MethodInfo_172853C *)Method_BasicHelper_GetValue_int__FollowerInfo___);
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
  __int64 v37; // x1
  System_String_o *v38; // x21
  int32_t m_stringLength; // w27
  int32_t v40; // w28

  if ( (byte_418B7EC & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, maxLength);
    sub_B2C35C(&System_Math_TypeInfo, v14);
    sub_B2C35C(&Rarity_TypeInfo, v15);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_10210/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, v17);
    sub_B2C35C(&StringLiteral_10214/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, v18);
    sub_B2C35C(&StringLiteral_10213/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, v19);
    sub_B2C35C(&StringLiteral_10209/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, v20);
    sub_B2C35C(&StringLiteral_10212/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, v21);
    sub_B2C35C(&StringLiteral_10211/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, v22);
    byte_418B7EC = 1;
  }
  v23 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v23, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10209/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, 0LL);
  v25 = System_String__Format(v24, (Il2CppObject *)servantName, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_10210/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = (Il2CppObject *)Rarity__getRarityType(servantRarity, 0LL);
  v28 = System_String__Format(v26, RarityType, 0LL);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_10211/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, 0LL);
  v30 = System_String__Format(v29, (Il2CppObject *)equipName, 0LL);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_10212/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, 0LL);
  v32 = System_String__Format(v31, (Il2CppObject *)skillName, 0LL);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_10213/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, 0LL);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_10214/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, 0LL);
  v35 = (Il2CppObject *)Rarity__getRarityType(actMaxRarity, 0LL);
  v36 = System_String__Format(v34, v35, 0LL);
  if ( !v25 || !v30 )
    goto LABEL_17;
  v38 = v36;
  m_stringLength = v25->fields.m_stringLength;
  v40 = v30->fields.m_stringLength;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v36 = (System_String_o *)System_Math__Max_45012344(m_stringLength, v40, 0LL);
  *maxLength = (int)v36;
  if ( !v32
    || (v36 = (System_String_o *)System_Math__Max_45012344((int32_t)v36, v32->fields.m_stringLength, 0LL),
        *maxLength = (int)v36,
        !v23) )
  {
LABEL_17:
    sub_B2C434(v36, v37);
  }
  System_Text_StringBuilder__Append_42408700(v23, v25, 0LL);
  System_Text_StringBuilder__Append_42408700(v23, v28, 0LL);
  System_Text_StringBuilder__Append_42408700(v23, v30, 0LL);
  System_Text_StringBuilder__Append_42408700(v23, v32, 0LL);
  System_Text_StringBuilder__Append_42408700(v23, v33, 0LL);
  System_Text_StringBuilder__Append_42408700(v23, v38, 0LL);
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

  if ( (byte_418B7F4 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, startingNum);
    byte_418B7F4 = 1;
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
          sub_B2C434(PartyItemSmc_k__BackingField, startingNum);
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


bool __fastcall PartyOrganizationUtility__IsAvailableFriendshipUpItem(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418B7F0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_418B7F0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v4);
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
  __int64 v13; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x21
  bool v15; // w22
  int32_t v17; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  v18 = phaseId;
  v19 = questId;
  v17 = restrictionId;
  if ( (byte_418B7E8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v8);
    byte_418B7E8 = 1;
  }
  v9 = System_Int32__ToString((int32_t)&v19, 0LL);
  v10 = System_Int32__ToString((int32_t)&v18, 0LL);
  v11 = System_Int32__ToString((int32_t)&v17, 0LL);
  restrictionDialogHistoryList = (WarBoardManager_TaskList_o *)System_String__Concat_44307816(v9, v10, v11, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_9;
  v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)restrictionDialogHistoryList;
  v15 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.restrictionDialogHistoryList,
          restrictionDialogHistoryList,
          (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( !v15 && isAddHistory )
  {
    restrictionDialogHistoryList = (WarBoardManager_TaskList_o *)this->fields.restrictionDialogHistoryList;
    if ( restrictionDialogHistoryList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)restrictionDialogHistoryList,
        v14,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      return v15;
    }
LABEL_9:
    sub_B2C434(restrictionDialogHistoryList, v13);
  }
  return v15;
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
  __int64 v24; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  ServantSkillMaster_o *v26; // x27
  WarQuestSelectionMaster_o *v27; // x25
  SkillLvMaster_o *v28; // x26
  int v29; // w8
  void *v30; // x23
  unsigned int v31; // w27
  __int64 v32; // x25
  int32_t v33; // w2
  System_String_o *Name; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_int__o *ActRarity; // x0
  __int64 v43; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v44; // [xsp+0h] [xbp-70h]
  SkillLvEntity_o *skillLvEntity; // [xsp+8h] [xbp-68h] BYREF
  WarEntity_o *v46; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_418B7EA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, skillName);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v17);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v19);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&StringLiteral_1/*""*/, v22);
    byte_418B7EA = 1;
  }
  v46 = 0LL;
  entity = 0LL;
  skillLvEntity = 0LL;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
           &entity,
           servantId,
           (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      v26 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      v27 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)Instance,
              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v26 )
        goto LABEL_33;
      v28 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList(v26, equipServantId, 0LL);
      if ( !Instance )
        goto LABEL_33;
      v29 = *((_DWORD *)Instance + 6);
      v30 = Instance;
      if ( v29 >= 1 )
      {
        v44 = (DataMasterBase_WarMaster__WarEntity__int__o *)v27;
        v31 = 0;
        while ( 1 )
        {
          if ( v31 >= v29 )
          {
            v43 = sub_B2C460(Instance);
            sub_B2C400(v43, 0LL);
          }
          v32 = *((_QWORD *)v30 + (int)v31 + 4);
          if ( !v32 )
            goto LABEL_33;
          v33 = *(_DWORD *)(v32 + 48);
          if ( v33 && (eventId < 0 || v33 == eventId) )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_33;
            Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 &v46,
                                 v33,
                                 (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = v46;
              if ( !v46 )
                goto LABEL_33;
              Instance = (void *)EventEntity__IsEventPeriod((EventEntity_o *)v46, 0LL, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v28 )
                  goto LABEL_33;
                Instance = (void *)SkillLvMaster__TryGetEntity(v28, &skillLvEntity, *(_DWORD *)(v32 + 28), 1, 0LL);
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
          v29 = *((_DWORD *)v30 + 6);
          if ( (int)++v31 >= v29 )
            return 0;
        }
        Instance = v44;
        if ( v44 )
        {
          Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v44,
                       *(_DWORD *)(v32 + 28),
                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( Instance )
          {
            Name = SkillEntity__getName((SkillEntity_o *)Instance, 0LL);
            *skillName = Name;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)skillName,
              (System_Int32_array **)Name,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41);
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
        sub_B2C434(Instance, v24);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationUtility__IsRarityRestriction_32345144(
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
  __int64 v14; // x1
  ServantEntity_o *Entity; // x22
  SkillLvEntity_o *v16; // x0

  if ( (byte_418B7EB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_418B7EB = 1;
  }
  if ( ((servantId | servantRarity) & 0x80000000) != 0 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      servantId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v14);
  }
  v16 = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0LL);
  return Entity && v16 && RarityRestrictedSkillUtil__IsDisabled(v16, Entity, servantRarity, 0LL);
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
  sub_B2C2F8(
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

  if ( (byte_418B7ED & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__, *(_QWORD *)&key);
    byte_418B7ED = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_B2C434(0LL, *(_QWORD *)&key);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)npcFollowerInfos,
    key,
    (WarBoardAIRoute_RouteData_o *)followerInfo,
    (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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