void __fastcall PartyOrganizationUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_48DEBF7 & 1) == 0 )
  {
    sub_1B00CCC(&PartyOrganizationUtility_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_6781/*"FriendshipUpItemUseState"*/, v4);
    byte_48DEBF7 = 1;
  }
  PartyOrganizationUtility_TypeInfo->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE = (struct System_String_o *)StringLiteral_6781/*"FriendshipUpItemUseState"*/;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)PartyOrganizationUtility_TypeInfo->static_fields,
    StringLiteral_6781/*"FriendshipUpItemUseState"*/,
    v2,
    v3);
}


void __fastcall PartyOrganizationUtility___ctor(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_48DEBF6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, method);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1B00CCC(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility___ctor__, v6);
    byte_48DEBF6 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)v7;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_3035B58 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  this->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v10;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._npcFollowerInfos, (int32_t)v10, v11, v12);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_35FC108 *)Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
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
  Il2CppObject *restrictionDialogHistoryList; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppClass *klass; // x8
  _QWORD *v16; // x9
  __int64 monitor_low; // x10
  __int64 v18; // x8
  int32_t v19; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v20; // [xsp+8h] [xbp-28h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  v20 = phaseId;
  v21 = questId;
  v19 = restrictionId;
  if ( (byte_48DEBE8 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&questId);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__Contains__, v6);
    byte_48DEBE8 = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v21, 0LL);
  v8 = System_Int32__ToString((int32_t)&v20, 0LL);
  v9 = System_Int32__ToString((int32_t)&v19, 0LL);
  restrictionDialogHistoryList = (Il2CppObject *)System_String__Concat_60337008(v7, v8, v9, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_11;
  v12 = restrictionDialogHistoryList;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)this->fields.restrictionDialogHistoryList,
         restrictionDialogHistoryList,
         (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    return;
  }
  restrictionDialogHistoryList = (Il2CppObject *)this->fields.restrictionDialogHistoryList;
  if ( !restrictionDialogHistoryList
    || (klass = restrictionDialogHistoryList[1].klass,
        v16 = Method_System_Collections_Generic_List_string__Add__,
        ++HIDWORD(restrictionDialogHistoryList[1].monitor),
        !klass) )
  {
LABEL_11:
    sub_1B00F28(restrictionDialogHistoryList, v11);
  }
  monitor_low = SLODWORD(restrictionDialogHistoryList[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)restrictionDialogHistoryList,
      v12,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = (__int64)klass + 8 * monitor_low;
    LODWORD(restrictionDialogHistoryList[1].monitor) = monitor_low + 1;
    *(_QWORD *)(v18 + 32) = v12;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)v12, v13, v14);
  }
}


void __fastcall PartyOrganizationUtility__ClearFollowerInfo(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  const MethodInfo *v5; // x2

  this->fields._normalFollowerInfo = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._normalFollowerInfo, 0, v2, v3);
  *(_QWORD *)&this->fields._SelectedNormalFollowerClassId_k__BackingField = 0LL;
  PartyOrganizationUtility__ClearNpcFollowerInfo(this, -1, v5);
}


void __fastcall PartyOrganizationUtility__ClearNormalFollowerInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct FollowerInfo_o **p_normalFollowerInfo; // x19

  this->fields._normalFollowerInfo = 0LL;
  p_normalFollowerInfo = &this->fields._normalFollowerInfo;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._normalFollowerInfo, 0, v2, v3);
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

  if ( (byte_48DEBEE & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__, *(_QWORD *)&key);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__, v5);
    byte_48DEBEE = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_1B00F28(0LL, *(_QWORD *)&key);
  if ( (key & 0x80000000) != 0 )
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
      (const MethodInfo_30366B4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
  else
    System_Collections_Generic_Dictionary_int__object___Remove(
      (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
      key,
      (const MethodInfo_30379B4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
}


void __fastcall PartyOrganizationUtility__ClearTemporaryPartyInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *v5; // x0
  ServantStatusBattleListViewItem_o *p_temporaryPartyInfo; // x19
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *temporaryPartyInfo; // t1
  int32_t v8; // w1
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  ServantStatusBattleListViewItem_c *klass; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  ServantStatusBattleListViewItem_o *p_parent; // x0
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_48DEBE6 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, method);
    byte_48DEBE6 = 1;
  }
  temporaryPartyInfo = this->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (ServantStatusBattleListViewItem_o *)&this->fields.temporaryPartyInfo;
  v5 = temporaryPartyInfo;
  if ( temporaryPartyInfo )
  {
    v5->fields.userServantId = 0LL;
    v5->fields.userEquipId = 0LL;
    v5->fields.deckNumber = -1;
    v8 = (int)StringLiteral_1/*""*/;
    v5->fields.bgmName = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields.bgmName, v8, v2, v3);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    klass->_1.this_arg.data = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&klass->_1.this_arg, 0, v10, v11);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    *(_QWORD *)&klass->_1.this_arg.bits = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&klass->_1.this_arg.bits, 0, v13, v14);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass
      || (klass->_1.element_class = 0LL,
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&klass->_1.element_class, 0, v15, v16),
          (klass = p_temporaryPartyInfo->klass) == 0LL)
      || (klass->_1.castClass = 0LL,
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&klass->_1.castClass, 0, v17, v18),
          (klass = p_temporaryPartyInfo->klass) == 0LL) )
    {
LABEL_11:
      sub_1B00F28(klass, v9);
    }
    klass->_1.parent = 0LL;
    p_parent = (ServantStatusBattleListViewItem_o *)&klass->_1.parent;
    *(_DWORD *)&p_parent[-1].fields.isMine = -1;
    sub_1B00C70(p_parent, 0, v19, v20);
    p_temporaryPartyInfo->klass = 0LL;
    sub_1B00C70(p_temporaryPartyInfo, 0, v22, v23);
  }
}


void __fastcall PartyOrganizationUtility__DecisionFontSize(
        PartyOrganizationUtility_o *this,
        int32_t *maxFontSize,
        int32_t *minFontSize,
        int32_t maxLength,
        const MethodInfo *method)
{
  int32_t v5; // w8
  int32_t v6; // w9

  *maxFontSize = 24;
  *minFontSize = 24;
  if ( maxLength > 43 )
  {
    v6 = 0;
    v5 = 16;
  }
  else if ( maxLength > 41 )
  {
    v5 = 17;
    v6 = 17;
  }
  else if ( maxLength > 37 )
  {
    v5 = 18;
    v6 = 18;
  }
  else if ( maxLength > 34 )
  {
    v5 = 20;
    v6 = 20;
  }
  else
  {
    if ( maxLength < 32 )
      return;
    v5 = 22;
    v6 = 22;
  }
  *maxFontSize = v5;
  *minFontSize = v6;
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
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  ItemEntity_o *AvailableFriendshipUpItemEventCampaigns; // x19
  Il2CppObject *MasterData_object; // x20
  ItemEntity_o *v12; // x23
  ItemEntity_o *ItemData; // x0
  __int64 v14; // x1
  _QWORD *monitor; // x24
  __int64 v16; // x8
  unsigned __int64 v17; // x25
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_48DEBF0 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ItemMaster___, v2);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_48DEBF0 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_28;
  AvailableFriendshipUpItemEventCampaigns = (ItemEntity_o *)EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                                              (EventCampaignMaster_o *)Instance,
                                                              0LL);
  if ( !AvailableFriendshipUpItemEventCampaigns )
    return AvailableFriendshipUpItemEventCampaigns;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1B00F28(Instance, v9);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ItemMaster___);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)AvailableFriendshipUpItemEventCampaigns,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v12 = 0LL;
  v20 = v19;
LABEL_8:
  AvailableFriendshipUpItemEventCampaigns = v12;
  while ( 1 )
  {
    ItemData = (ItemEntity_o *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                 &v20,
                                 (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( ((unsigned __int8)ItemData & 1) == 0 )
      break;
    if ( !v20.fields._current )
      sub_1B00F28(ItemData, v14);
    monitor = v20.fields._current[2].monitor;
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
              sub_1B00F30(ItemData, v14);
            if ( !MasterData_object )
              sub_1B00F28(ItemData, v14);
            ItemData = ItemMaster__GetItemData((ItemMaster_o *)MasterData_object, *((_DWORD *)monitor + v17 + 8), 0LL);
            if ( ItemData && (!v12 || ItemData->fields.endedAt <= v12->fields.endedAt) )
              v12 = ItemData;
            LODWORD(v16) = *((_DWORD *)monitor + 6);
            ++v17;
          }
          while ( (__int64)v17 < (int)v16 );
          goto LABEL_8;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
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
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *AvailableFriendshipUpItemEventCampaigns; // x19
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v14; // x21
  int v15; // w25
  ItemEntity_o *ItemData; // x0
  __int64 v17; // x1
  _QWORD *monitor; // x28
  __int64 v19; // x8
  unsigned __int64 v20; // x29
  int32_t v21; // w22
  int64_t UserId; // x0
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v24; // x1
  UserItemEntity_o *v25; // x23
  int num; // w9
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48DEBF1 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ItemMaster___, v2);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserItemMaster___, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v7);
    sub_1B00CCC(&NetworkManager_TypeInfo, v8);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_48DEBF1 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_36;
  AvailableFriendshipUpItemEventCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                                                                           (EventCampaignMaster_o *)Instance,
                                                                                           0LL);
  if ( !AvailableFriendshipUpItemEventCampaigns )
    return (int)AvailableFriendshipUpItemEventCampaigns;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ItemMaster___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_36:
    sub_1B00F28(Instance, v11);
  }
  v14 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserItemMaster___);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    AvailableFriendshipUpItemEventCampaigns,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v15 = 0;
  v30 = v29;
LABEL_9:
  LODWORD(AvailableFriendshipUpItemEventCampaigns) = v15;
  while ( 1 )
  {
    ItemData = (ItemEntity_o *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                 &v30,
                                 (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( ((unsigned __int8)ItemData & 1) == 0 )
      break;
    if ( !v30.fields._current )
      sub_1B00F28(ItemData, v17);
    monitor = v30.fields._current[2].monitor;
    if ( monitor )
    {
      v19 = monitor[3];
      if ( v19 )
      {
        if ( (int)v19 >= 1 )
        {
          v20 = 0LL;
          do
          {
            if ( v20 >= (unsigned int)v19 )
              sub_1B00F30(ItemData, v17);
            v21 = *((_DWORD *)monitor + v20 + 8);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            UserId = NetworkManager__get_UserId(0LL);
            if ( !v14 )
              sub_1B00F28(UserId, UserId);
            EntityDefinitely = UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)v14, UserId, v21, 0LL);
            if ( !MasterData_object )
              sub_1B00F28(EntityDefinitely, v24);
            v25 = EntityDefinitely;
            ItemData = ItemMaster__GetItemData((ItemMaster_o *)MasterData_object, v21, 0LL);
            if ( !v25 )
              sub_1B00F28(ItemData, v17);
            num = v25->fields.num;
            LODWORD(v19) = *((_DWORD *)monitor + 6);
            ++v20;
            if ( num < 1 || ItemData == 0LL )
              num = 0;
            v15 += num;
          }
          while ( (__int64)v20 < (int)v19 );
          goto LABEL_9;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return (int)AvailableFriendshipUpItemEventCampaigns;
}


int64_t __fastcall PartyOrganizationUtility__GetFriendshipUpItemEndedTime(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x1
  int64_t result; // x0

  if ( (byte_48DEBF2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    byte_48DEBF2 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v3);
  result = (int64_t)PartyOrganizationUtility__GetAvailableFriendshipUpItemEntity(
                      (PartyOrganizationUtility_o *)Instance,
                      v3);
  if ( result )
    return *(_QWORD *)(result + 96);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PartyOrganizationUtility__GetInterruptionUseFriendshipUpItemId(
        PartyOrganizationUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  __int64 v10; // x1
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_48DEBF4 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___, *(_QWORD *)&questId);
    sub_1B00CCC(&DataManager_TypeInfo, v6);
    sub_1B00CCC(&NetworkManager_TypeInfo, v7);
    byte_48DEBF4 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_12;
  UserId = UserInterruptionQuestMaster__TryGetEntity(
             (UserInterruptionQuestMaster_o *)Master_object,
             &entity,
             UserId,
             questId,
             questPhase,
             0LL);
  if ( (UserId & 1) != 0 )
  {
    if ( entity )
      return entity->fields.campaignItemId;
LABEL_12:
    sub_1B00F28(UserId, v10);
  }
  return 0;
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
  if ( (byte_48DEBED & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_GetValue_int__FollowerInfo___, *(_QWORD *)&key);
    byte_48DEBED = 1;
  }
  return (FollowerInfo_o *)BasicHelper__GetValue_int__object_(
                             (System_Collections_Generic_Dictionary_K__V__o *)this->fields._npcFollowerInfos,
                             key,
                             0LL,
                             (const MethodInfo_2D513C4 *)Method_BasicHelper_GetValue_int__FollowerInfo___);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Text_StringBuilder_o *v22; // x20
  System_String_o *v23; // x0
  System_String_o *v24; // x24
  System_String_o *v25; // x26
  Il2CppObject *RarityType; // x0
  System_String_o *v27; // x25
  System_String_o *v28; // x0
  System_String_o *v29; // x23
  System_String_o *v30; // x0
  System_String_o *v31; // x22
  System_String_o *v32; // x26
  System_String_o *v33; // x27
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  __int64 v36; // x1
  System_String_o *v37; // x21
  int32_t stringLength; // w27
  int32_t v39; // w28

  if ( (byte_48DEBEB & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, maxLength);
    sub_1B00CCC(&System_Math_TypeInfo, v13);
    sub_1B00CCC(&Rarity_TypeInfo, v14);
    sub_1B00CCC(&System_Text_StringBuilder_TypeInfo, v15);
    sub_1B00CCC(&StringLiteral_10012/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, v16);
    sub_1B00CCC(&StringLiteral_10016/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, v17);
    sub_1B00CCC(&StringLiteral_10015/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, v18);
    sub_1B00CCC(&StringLiteral_10011/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, v19);
    sub_1B00CCC(&StringLiteral_10014/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, v20);
    sub_1B00CCC(&StringLiteral_10013/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, v21);
    byte_48DEBEB = 1;
  }
  v22 = (System_Text_StringBuilder_o *)sub_1B00F18(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v22, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10011/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, 0LL);
  v24 = System_String__Format(v23, (Il2CppObject *)servantName, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_10012/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = (Il2CppObject *)Rarity__getRarityType(servantRarity, 0LL);
  v27 = System_String__Format(v25, RarityType, 0LL);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_10013/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, 0LL);
  v29 = System_String__Format(v28, (Il2CppObject *)equipName, 0LL);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_10014/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, 0LL);
  v31 = System_String__Format(v30, (Il2CppObject *)skillName, 0LL);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_10015/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, 0LL);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_10016/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, 0LL);
  v34 = (Il2CppObject *)Rarity__getRarityType(actMaxRarity, 0LL);
  v35 = System_String__Format(v33, v34, 0LL);
  if ( !v24 || !v29 )
    goto LABEL_14;
  v37 = v35;
  stringLength = v24->fields._stringLength;
  v39 = v29->fields._stringLength;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v35 = (System_String_o *)System_Math__Max_61144256(stringLength, v39, 0LL);
  *maxLength = (int)v35;
  if ( !v31
    || (v35 = (System_String_o *)System_Math__Max_61144256((int32_t)v35, v31->fields._stringLength, 0LL),
        *maxLength = (int)v35,
        !v22) )
  {
LABEL_14:
    sub_1B00F28(v35, v36);
  }
  System_Text_StringBuilder__Append_59487644(v22, v24, 0LL);
  System_Text_StringBuilder__Append_59487644(v22, v27, 0LL);
  System_Text_StringBuilder__Append_59487644(v22, v29, 0LL);
  System_Text_StringBuilder__Append_59487644(v22, v31, 0LL);
  System_Text_StringBuilder__Append_59487644(v22, v32, 0LL);
  System_Text_StringBuilder__Append_59487644(v22, v37, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v22->klass->vtable._3_ToString.method)(
                              v22,
                              v22->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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
  struct BalanceConfig_StaticFields *static_fields; // x8
  PartyListViewItem_o *PartyItemSmc_k__BackingField; // x0
  int32_t v14; // w8

  if ( (byte_48DEBF3 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, startingNum);
    byte_48DEBF3 = 1;
  }
  *startingNum = 0;
  *subNum = 0;
  *myCnt = 0;
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = BalanceConfig_TypeInfo;
      }
      static_fields = v9->static_fields;
      if ( v10 >= static_fields->DeckMemberMax )
        break;
      PartyItemSmc_k__BackingField = this->fields._PartyItemSmc_k__BackingField;
      if ( !PartyItemSmc_k__BackingField )
        goto LABEL_27;
      PartyItemSmc_k__BackingField = (PartyListViewItem_o *)PartyListViewItem__GetMember(
                                                              PartyItemSmc_k__BackingField,
                                                              v10,
                                                              0LL);
      if ( (unsigned int)v10 <= 2 )
      {
        if ( !PartyItemSmc_k__BackingField )
LABEL_27:
          sub_1B00F28(PartyItemSmc_k__BackingField, startingNum);
        v11 += LOBYTE(PartyItemSmc_k__BackingField->fields.id);
      }
      else if ( !PartyItemSmc_k__BackingField )
      {
        goto LABEL_27;
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
      if ( !v9->_2.cctor_finished )
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
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableFriendshipUpItemEventCampaigns; // x0

  if ( (byte_48DEBEF & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v2);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_48DEBEF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventCampaignMaster___)) == 0LL )
  {
    sub_1B00F28(Instance, v5);
  }
  AvailableFriendshipUpItemEventCampaigns = EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                              (EventCampaignMaster_o *)Instance,
                                              0LL);
  if ( AvailableFriendshipUpItemEventCampaigns )
    LOBYTE(AvailableFriendshipUpItemEventCampaigns) = AvailableFriendshipUpItemEventCampaigns->fields._size != 0;
  return (char)AvailableFriendshipUpItemEventCampaigns;
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
  Il2CppObject *restrictionDialogHistoryList; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  bool v17; // w22
  Il2CppClass *klass; // x8
  _QWORD *v19; // x9
  __int64 monitor_low; // x10
  __int64 v21; // x8
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v24; // [xsp+18h] [xbp-28h] BYREF
  int32_t v25; // [xsp+1Ch] [xbp-24h] BYREF

  v24 = phaseId;
  v25 = questId;
  v23 = restrictionId;
  if ( (byte_48DEBE7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&questId);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__Contains__, v8);
    byte_48DEBE7 = 1;
  }
  v9 = System_Int32__ToString((int32_t)&v25, 0LL);
  v10 = System_Int32__ToString((int32_t)&v24, 0LL);
  v11 = System_Int32__ToString((int32_t)&v23, 0LL);
  restrictionDialogHistoryList = (Il2CppObject *)System_String__Concat_60337008(v9, v10, v11, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_12;
  v14 = restrictionDialogHistoryList;
  v17 = System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.restrictionDialogHistoryList,
          restrictionDialogHistoryList,
          (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( !v17 && isAddHistory )
  {
    restrictionDialogHistoryList = (Il2CppObject *)this->fields.restrictionDialogHistoryList;
    if ( restrictionDialogHistoryList )
    {
      klass = restrictionDialogHistoryList[1].klass;
      v19 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(restrictionDialogHistoryList[1].monitor);
      if ( klass )
      {
        monitor_low = SLODWORD(restrictionDialogHistoryList[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)restrictionDialogHistoryList,
            v14,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = (__int64)klass + 8 * monitor_low;
          LODWORD(restrictionDialogHistoryList[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v21 + 32) = v14;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)v14, v15, v16);
        }
        return v17;
      }
    }
LABEL_12:
    sub_1B00F28(restrictionDialogHistoryList, v13);
  }
  return v17;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationUtility__IsEnableFriendshipUpItem(
        PartyOrganizationUtility_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_48DEBF5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&itemId);
    sub_1B00CCC(&DataManager_TypeInfo, v4);
    sub_1B00CCC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v5);
    byte_48DEBF5 = 1;
  }
  entity = 0LL;
  if ( itemId < 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          itemId,
          (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_13:
    sub_1B00F28(Master_object, v7);
  if ( LODWORD(entity[3].klass) != 30 )
    return 0;
  return ItemEntity__IsEnable((ItemEntity_o *)entity, 0LL);
}


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
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v26; // x27
  Il2CppObject *v27; // x25
  SkillLvMaster_o *v28; // x26
  int v29; // w8
  void *v30; // x23
  unsigned int v31; // w27
  __int64 v32; // x29
  int32_t v33; // w2
  System_String_o *Name; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Collections_Generic_IEnumerable_int__o *ActRarity; // x0
  SkillLvEntity_o *skillLvEntity; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *v40; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_48DEBE9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventMaster___, skillName);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v15);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillMaster___, v17);
    sub_1B00CCC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18);
    sub_1B00CCC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v19);
    sub_1B00CCC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v20);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B00CCC(&StringLiteral_1/*""*/, v22);
    byte_48DEBE9 = 1;
  }
  v40 = 0LL;
  entity = 0LL;
  skillLvEntity = 0LL;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)skillName,
    (int32_t)StringLiteral_1/*""*/,
    (int32_t)actMaxRarity,
    servantId);
  *actMaxRarity = 0;
  if ( ((servantId | servantRarity | equipServantId) & 0x80000000) == 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           &entity,
           servantId,
           (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      v26 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      v27 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v26 )
        goto LABEL_33;
      v28 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)v26, equipServantId, 0LL);
      if ( !Instance )
        goto LABEL_33;
      v29 = *((_DWORD *)Instance + 6);
      v30 = Instance;
      if ( v29 >= 1 )
      {
        v31 = 0;
        while ( 1 )
        {
          if ( v31 >= v29 )
            sub_1B00F30(Instance, v24);
          v32 = *((_QWORD *)v30 + (int)v31 + 4);
          if ( !v32 )
            goto LABEL_33;
          v33 = *(_DWORD *)(v32 + 48);
          if ( v33 && (eventId < 0 || v33 == eventId) )
          {
            if ( !MasterData_object )
              goto LABEL_33;
            Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                 &v40,
                                 v33,
                                 (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = v40;
              if ( !v40 )
                goto LABEL_33;
              Instance = (void *)EventEntity__IsEventPeriod((EventEntity_o *)v40, 0LL, 0LL);
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
        if ( v27 )
        {
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v27,
                       *(_DWORD *)(v32 + 28),
                       (const MethodInfo_2FE6A4C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( Instance )
          {
            Name = SkillEntity__getName((SkillEntity_o *)Instance, 0LL);
            *skillName = Name;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)skillName, (int32_t)Name, v36, v37);
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
        sub_1B00F28(Instance, v24);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationUtility__IsRarityRestriction_31356632(
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
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x22
  SkillLvEntity_o *v16; // x0

  if ( (byte_48DEBEA & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_1B00CCC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_48DEBEA = 1;
  }
  if ( ((servantId | servantRarity) & 0x80000000) != 0 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   servantId,
                   (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1B00F28(Instance, v14);
  }
  v16 = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0LL);
  return Entity && v16 && RarityRestrictedSkillUtil__IsDisabled(v16, (ServantEntity_o *)Entity, servantRarity, 0LL);
}


void __fastcall PartyOrganizationUtility__SetNormalFollowerInfo(
        PartyOrganizationUtility_o *this,
        FollowerInfo_o *followerInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._normalFollowerInfo = followerInfo;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._normalFollowerInfo,
    (int32_t)followerInfo,
    (int32_t)method,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUtility__SetNpcFollowerInfo(
        PartyOrganizationUtility_o *this,
        int32_t key,
        FollowerInfo_o *followerInfo,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcFollowerInfos; // x0

  if ( (byte_48DEBEC & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__, *(_QWORD *)&key);
    byte_48DEBEC = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_1B00F28(0LL, *(_QWORD *)&key);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
    key,
    (Il2CppObject *)followerInfo,
    (const MethodInfo_3036518 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
}


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
        PartyListViewItem_array *baseDeckItemList,
        const MethodInfo *method)
{
  __int64 v20; // x1
  char *klass; // x0
  ServantStatusBattleListViewItem_o *p_temporaryPartyInfo; // x20
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *temporaryPartyInfo; // t1
  Il2CppObject *v24; // x29
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  ServantStatusBattleListViewItem_o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  ServantStatusBattleListViewItem_c *v37; // x20
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x19
  __int64 v42; // x0
  ServantStatusBattleListViewItem_o *p_parent; // x20
  __int64 v44; // x0
  int32_t v45; // w1
  PartyOrganizationUtility_TemporaryPartyInfo_o *v46; // x0
  const MethodInfo *v47; // x1

  if ( (byte_48DEBE5 & 1) == 0 )
  {
    sub_1B00CCC(&PartyListViewItem___TypeInfo, userServantId);
    sub_1B00CCC(&PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo, v20);
    byte_48DEBE5 = 1;
  }
  temporaryPartyInfo = this->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (ServantStatusBattleListViewItem_o *)&this->fields.temporaryPartyInfo;
  klass = (char *)temporaryPartyInfo;
  if ( !temporaryPartyInfo )
  {
    v24 = (Il2CppObject *)sub_1B00F18(PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo);
    System_Object___ctor(v24, 0LL);
    p_temporaryPartyInfo->klass = (ServantStatusBattleListViewItem_c *)v24;
    sub_1B00C70(p_temporaryPartyInfo, (int32_t)v24, v25, v26);
    klass = (char *)p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_18;
  }
  *((_QWORD *)klass + 5) = bgmName;
  v28 = (ServantStatusBattleListViewItem_o *)(klass + 40);
  *(_QWORD *)&v28[-1].fields.isEnabled = userServantId;
  v28[-1].fields.name = (struct System_String_o *)userEquipId;
  *(_DWORD *)&v28[-1].fields.isMine = deckNumber;
  sub_1B00C70(v28, (int32_t)bgmName, userEquipId, deckNumber);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 6) = battleSetupInfo;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(klass + 48), (int32_t)battleSetupInfo, v29, v30);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 7) = followerInfo;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(klass + 56), (int32_t)followerInfo, v31, v32);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass
    || (*((_QWORD *)klass + 8) = basePartyItem,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(klass + 64), (int32_t)basePartyItem, v33, v34),
        (klass = (char *)p_temporaryPartyInfo->klass) == 0LL)
    || (*((_QWORD *)klass + 9) = partyItem,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(klass + 72), (int32_t)partyItem, v35, v36),
        (v37 = p_temporaryPartyInfo->klass) == 0LL) )
  {
LABEL_18:
    sub_1B00F28(klass, v27);
  }
  LODWORD(v37->_1.declaringType) = selectPartyMemberNum;
  if ( baseDeckItemList )
  {
    v38 = System_Array__Clone((System_Array_o *)baseDeckItemList, 0LL);
    if ( !v38 )
    {
      v45 = 0;
      v37->_1.parent = 0LL;
      p_parent = (ServantStatusBattleListViewItem_o *)&v37->_1.parent;
      goto LABEL_17;
    }
    v41 = v38;
    v42 = sub_1B00E08(v38, PartyListViewItem___TypeInfo);
    if ( v42 )
    {
      v37->_1.parent = (Il2CppClass *)v42;
      p_parent = (ServantStatusBattleListViewItem_o *)&v37->_1.parent;
      v44 = sub_1B00E08(v41, PartyListViewItem___TypeInfo);
      if ( v44 )
      {
        v45 = v44;
LABEL_17:
        sub_1B00C70(p_parent, v45, v39, v40);
        return;
      }
    }
    v46 = (PartyOrganizationUtility_TemporaryPartyInfo_o *)sub_1B011E8(v41);
    PartyOrganizationUtility_TemporaryPartyInfo___ctor(v46, v47);
  }
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


bool __fastcall PartyOrganizationUtility__get_IsQuestStartMenuMode(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._IsQuestStartMenuMode_k__BackingField;
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


int32_t __fastcall PartyOrganizationUtility__get_WaveBattleRestartWave(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._WaveBattleRestartWave_k__BackingField;
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
  int32_t v3; // w3

  this->fields._BasePartyItem_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._BasePartyItem_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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


void __fastcall PartyOrganizationUtility__set_IsQuestStartMenuMode(
        PartyOrganizationUtility_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsQuestStartMenuMode_k__BackingField = value;
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
  int32_t v3; // w3

  this->fields._PartyItem_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._PartyItem_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PartyOrganizationUtility__set_PartyItemSmc(
        PartyOrganizationUtility_o *this,
        PartyListViewItem_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._PartyItemSmc_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._PartyItemSmc_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  int32_t v3; // w3

  this->fields._TransitionDestinationFromDetail_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._TransitionDestinationFromDetail_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PartyOrganizationUtility__set_WaveBattleRestartWave(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._WaveBattleRestartWave_k__BackingField = value;
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