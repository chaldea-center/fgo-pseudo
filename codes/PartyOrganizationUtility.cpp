void __fastcall PartyOrganizationUtility___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5722D & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationUtility_TypeInfo);
    sub_1B885B0(&StringLiteral_6849/*"FriendshipUpItemUseState"*/);
    byte_4A5722D = 1;
  }
  PartyOrganizationUtility_TypeInfo->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE = (struct System_String_o *)StringLiteral_6849/*"FriendshipUpItemUseState"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)PartyOrganizationUtility_TypeInfo->static_fields,
    StringLiteral_6849/*"FriendshipUpItemUseState"*/,
    v1,
    v2);
}


void __fastcall PartyOrganizationUtility___ctor(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5722C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
    byte_4A5722C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  this->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._npcFollowerInfos, (int32_t)v6, v7, v8);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_3739C30 *)Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
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
  Il2CppObject *restrictionDialogHistoryList; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppClass *klass; // x8
  _QWORD *v15; // x9
  __int64 monitor_low; // x10
  __int64 v17; // x8
  int32_t v18; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v19; // [xsp+8h] [xbp-28h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  v19 = phaseId;
  v20 = questId;
  v18 = restrictionId;
  if ( (byte_4A5721E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4A5721E = 1;
  }
  v6 = System_Int32__ToString((int32_t)&v20, 0LL);
  v7 = System_Int32__ToString((int32_t)&v19, 0LL);
  v8 = System_Int32__ToString((int32_t)&v18, 0LL);
  restrictionDialogHistoryList = (Il2CppObject *)System_String__Concat_61718292(v6, v7, v8, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_11;
  v11 = restrictionDialogHistoryList;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)this->fields.restrictionDialogHistoryList,
         restrictionDialogHistoryList,
         (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    return;
  }
  restrictionDialogHistoryList = (Il2CppObject *)this->fields.restrictionDialogHistoryList;
  if ( !restrictionDialogHistoryList
    || (klass = restrictionDialogHistoryList[1].klass,
        v15 = Method_System_Collections_Generic_List_string__Add__,
        ++HIDWORD(restrictionDialogHistoryList[1].monitor),
        !klass) )
  {
LABEL_11:
    sub_1B8880C(restrictionDialogHistoryList, v10);
  }
  monitor_low = SLODWORD(restrictionDialogHistoryList[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)restrictionDialogHistoryList,
      v11,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = (__int64)klass + 8 * monitor_low;
    LODWORD(restrictionDialogHistoryList[1].monitor) = monitor_low + 1;
    *(_QWORD *)(v17 + 32) = v11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)v11, v12, v13);
  }
}


void __fastcall PartyOrganizationUtility__ClearFollowerInfo(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  const MethodInfo *v5; // x2

  this->fields._normalFollowerInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._normalFollowerInfo, 0, v2, v3);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._normalFollowerInfo, 0, v2, v3);
  p_normalFollowerInfo[1] = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUtility__ClearNpcFollowerInfo(
        PartyOrganizationUtility_o *this,
        int32_t key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcFollowerInfos; // x0

  if ( (byte_4A57224 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
    byte_4A57224 = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_1B8880C(0LL, *(_QWORD *)&key);
  if ( (key & 0x80000000) != 0 )
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
      (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
  else
    System_Collections_Generic_Dictionary_int__object___Remove(
      (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
      key,
      (const MethodInfo_316EDE0 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
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

  if ( (byte_4A5721C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5721C = 1;
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.bgmName, v8, v2, v3);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    klass->_1.this_arg.data = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&klass->_1.this_arg, 0, v10, v11);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    *(_QWORD *)&klass->_1.this_arg.bits = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&klass->_1.this_arg.bits, 0, v13, v14);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass
      || (klass->_1.element_class = 0LL,
          sub_1B88554((ServantStatusBattleListViewItem_o *)&klass->_1.element_class, 0, v15, v16),
          (klass = p_temporaryPartyInfo->klass) == 0LL)
      || (klass->_1.castClass = 0LL,
          sub_1B88554((ServantStatusBattleListViewItem_o *)&klass->_1.castClass, 0, v17, v18),
          (klass = p_temporaryPartyInfo->klass) == 0LL) )
    {
LABEL_11:
      sub_1B8880C(klass, v9);
    }
    klass->_1.parent = 0LL;
    p_parent = (ServantStatusBattleListViewItem_o *)&klass->_1.parent;
    *(_DWORD *)&p_parent[-1].fields.isMine = -1;
    sub_1B88554(p_parent, 0, v19, v20);
    p_temporaryPartyInfo->klass = 0LL;
    sub_1B88554(p_temporaryPartyInfo, 0, v22, v23);
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
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  ItemEntity_o *AvailableFriendshipUpItemEventCampaigns; // x19
  Il2CppObject *MasterData_object; // x20
  ItemEntity_o *v6; // x23
  ItemEntity_o *ItemData; // x0
  __int64 v8; // x1
  _QWORD *monitor; // x24
  __int64 v10; // x8
  unsigned __int64 v11; // x25
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A57226 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57226 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_28;
  AvailableFriendshipUpItemEventCampaigns = (ItemEntity_o *)EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                                              (EventCampaignMaster_o *)Instance,
                                                              0LL);
  if ( !AvailableFriendshipUpItemEventCampaigns )
    return AvailableFriendshipUpItemEventCampaigns;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1B8880C(Instance, v3);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)AvailableFriendshipUpItemEventCampaigns,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v6 = 0LL;
  v14 = v13;
LABEL_8:
  AvailableFriendshipUpItemEventCampaigns = v6;
  while ( 1 )
  {
    ItemData = (ItemEntity_o *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                 &v14,
                                 (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( ((unsigned __int8)ItemData & 1) == 0 )
      break;
    if ( !v14.fields._current )
      sub_1B8880C(ItemData, v8);
    monitor = v14.fields._current[2].monitor;
    if ( monitor )
    {
      v10 = monitor[3];
      if ( v10 )
      {
        if ( (int)v10 >= 1 )
        {
          v11 = 0LL;
          do
          {
            if ( v11 >= (unsigned int)v10 )
              sub_1B88814(ItemData, v8);
            if ( !MasterData_object )
              sub_1B8880C(ItemData, v8);
            ItemData = ItemMaster__GetItemData((ItemMaster_o *)MasterData_object, *((_DWORD *)monitor + v11 + 8), 0LL);
            if ( ItemData && (!v6 || ItemData->fields.endedAt <= v6->fields.endedAt) )
              v6 = ItemData;
            LODWORD(v10) = *((_DWORD *)monitor + 6);
            ++v11;
          }
          while ( (__int64)v11 < (int)v10 );
          goto LABEL_8;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return AvailableFriendshipUpItemEventCampaigns;
}


int32_t __fastcall PartyOrganizationUtility__GetAvailableFriendshipUpItemNum(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *AvailableFriendshipUpItemEventCampaigns; // x19
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v6; // x21
  int v7; // w25
  ItemEntity_o *ItemData; // x0
  __int64 v9; // x1
  _QWORD *monitor; // x28
  __int64 v11; // x8
  unsigned __int64 v12; // x29
  int32_t v13; // w22
  int64_t UserId; // x0
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v16; // x1
  UserItemEntity_o *v17; // x23
  int num; // w9
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A57227 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57227 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_36;
  AvailableFriendshipUpItemEventCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                                                                           (EventCampaignMaster_o *)Instance,
                                                                                           0LL);
  if ( !AvailableFriendshipUpItemEventCampaigns )
    return (int)AvailableFriendshipUpItemEventCampaigns;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_36:
    sub_1B8880C(Instance, v3);
  }
  v6 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    AvailableFriendshipUpItemEventCampaigns,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v7 = 0;
  v22 = v21;
LABEL_9:
  LODWORD(AvailableFriendshipUpItemEventCampaigns) = v7;
  while ( 1 )
  {
    ItemData = (ItemEntity_o *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                 &v22,
                                 (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( ((unsigned __int8)ItemData & 1) == 0 )
      break;
    if ( !v22.fields._current )
      sub_1B8880C(ItemData, v9);
    monitor = v22.fields._current[2].monitor;
    if ( monitor )
    {
      v11 = monitor[3];
      if ( v11 )
      {
        if ( (int)v11 >= 1 )
        {
          v12 = 0LL;
          do
          {
            if ( v12 >= (unsigned int)v11 )
              sub_1B88814(ItemData, v9);
            v13 = *((_DWORD *)monitor + v12 + 8);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            UserId = NetworkManager__get_UserId(0LL);
            if ( !v6 )
              sub_1B8880C(UserId, UserId);
            EntityDefinitely = UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)v6, UserId, v13, 0LL);
            if ( !MasterData_object )
              sub_1B8880C(EntityDefinitely, v16);
            v17 = EntityDefinitely;
            ItemData = ItemMaster__GetItemData((ItemMaster_o *)MasterData_object, v13, 0LL);
            if ( !v17 )
              sub_1B8880C(ItemData, v9);
            num = v17->fields.num;
            LODWORD(v11) = *((_DWORD *)monitor + 6);
            ++v12;
            if ( num < 1 || ItemData == 0LL )
              num = 0;
            v7 += num;
          }
          while ( (__int64)v12 < (int)v11 );
          goto LABEL_9;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return (int)AvailableFriendshipUpItemEventCampaigns;
}


int64_t __fastcall PartyOrganizationUtility__GetFriendshipUpItemEndedTime(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x1
  int64_t result; // x0

  if ( (byte_4A57228 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A57228 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  result = (int64_t)PartyOrganizationUtility__GetAvailableFriendshipUpItemEntity(
                      (PartyOrganizationUtility_o *)Instance,
                      v3);
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
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  __int64 v8; // x1
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5722A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5722A = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
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
    sub_1B8880C(UserId, v8);
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
  if ( (byte_4A57223 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_int__FollowerInfo___);
    byte_4A57223 = 1;
  }
  return (FollowerInfo_o *)BasicHelper__GetValue_int__object_(
                             (System_Collections_Generic_Dictionary_K__V__o *)this->fields._npcFollowerInfos,
                             key,
                             0LL,
                             (const MethodInfo_2E6E040 *)Method_BasicHelper_GetValue_int__FollowerInfo___);
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
  System_Text_StringBuilder_o *v13; // x20
  System_String_o *v14; // x0
  System_String_o *v15; // x24
  System_String_o *v16; // x26
  Il2CppObject *RarityType; // x0
  System_String_o *v18; // x25
  System_String_o *v19; // x0
  System_String_o *v20; // x23
  System_String_o *v21; // x0
  System_String_o *v22; // x22
  System_String_o *v23; // x26
  System_String_o *v24; // x27
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x21
  int32_t stringLength; // w27
  int32_t v30; // w28

  if ( (byte_4A57221 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&StringLiteral_10127/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/);
    sub_1B885B0(&StringLiteral_10131/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/);
    sub_1B885B0(&StringLiteral_10130/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/);
    sub_1B885B0(&StringLiteral_10126/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/);
    sub_1B885B0(&StringLiteral_10129/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/);
    sub_1B885B0(&StringLiteral_10128/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/);
    byte_4A57221 = 1;
  }
  v13 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v13, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10126/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, 0LL);
  v15 = System_String__Format(v14, (Il2CppObject *)servantName, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10127/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = (Il2CppObject *)Rarity__getRarityType(servantRarity, 0LL);
  v18 = System_String__Format(v16, RarityType, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_10128/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, 0LL);
  v20 = System_String__Format(v19, (Il2CppObject *)equipName, 0LL);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10129/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, 0LL);
  v22 = System_String__Format(v21, (Il2CppObject *)skillName, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10130/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10131/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, 0LL);
  v25 = (Il2CppObject *)Rarity__getRarityType(actMaxRarity, 0LL);
  v26 = System_String__Format(v24, v25, 0LL);
  if ( !v15 || !v20 )
    goto LABEL_14;
  v28 = v26;
  stringLength = v15->fields._stringLength;
  v30 = v20->fields._stringLength;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v26 = (System_String_o *)System_Math__Max_62525680(stringLength, v30, 0LL);
  *maxLength = (int)v26;
  if ( !v22
    || (v26 = (System_String_o *)System_Math__Max_62525680((int32_t)v26, v22->fields._stringLength, 0LL),
        *maxLength = (int)v26,
        !v13) )
  {
LABEL_14:
    sub_1B8880C(v26, v27);
  }
  System_Text_StringBuilder__Append_60868928(v13, v15, 0LL);
  System_Text_StringBuilder__Append_60868928(v13, v18, 0LL);
  System_Text_StringBuilder__Append_60868928(v13, v20, 0LL);
  System_Text_StringBuilder__Append_60868928(v13, v22, 0LL);
  System_Text_StringBuilder__Append_60868928(v13, v23, 0LL);
  System_Text_StringBuilder__Append_60868928(v13, v28, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v13->klass->vtable._3_ToString.method)(
                              v13,
                              v13->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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

  if ( (byte_4A57229 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A57229 = 1;
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
          sub_1B8880C(PartyItemSmc_k__BackingField, startingNum);
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
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableFriendshipUpItemEventCampaigns; // x0

  if ( (byte_4A57225 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57225 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v3);
  }
  AvailableFriendshipUpItemEventCampaigns = EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                              (EventCampaignMaster_o *)Instance,
                                              0LL);
  if ( AvailableFriendshipUpItemEventCampaigns )
    LOBYTE(AvailableFriendshipUpItemEventCampaigns) = AvailableFriendshipUpItemEventCampaigns->fields._size != 0;
  return (char)AvailableFriendshipUpItemEventCampaigns;
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
  Il2CppObject *restrictionDialogHistoryList; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  bool v16; // w22
  Il2CppClass *klass; // x8
  _QWORD *v18; // x9
  __int64 monitor_low; // x10
  __int64 v20; // x8
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v23; // [xsp+18h] [xbp-28h] BYREF
  int32_t v24; // [xsp+1Ch] [xbp-24h] BYREF

  v23 = phaseId;
  v24 = questId;
  v22 = restrictionId;
  if ( (byte_4A5721D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4A5721D = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v24, 0LL);
  v9 = System_Int32__ToString((int32_t)&v23, 0LL);
  v10 = System_Int32__ToString((int32_t)&v22, 0LL);
  restrictionDialogHistoryList = (Il2CppObject *)System_String__Concat_61718292(v8, v9, v10, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_12;
  v13 = restrictionDialogHistoryList;
  v16 = System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.restrictionDialogHistoryList,
          restrictionDialogHistoryList,
          (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( !v16 && isAddHistory )
  {
    restrictionDialogHistoryList = (Il2CppObject *)this->fields.restrictionDialogHistoryList;
    if ( restrictionDialogHistoryList )
    {
      klass = restrictionDialogHistoryList[1].klass;
      v18 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(restrictionDialogHistoryList[1].monitor);
      if ( klass )
      {
        monitor_low = SLODWORD(restrictionDialogHistoryList[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)restrictionDialogHistoryList,
            v13,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = (__int64)klass + 8 * monitor_low;
          LODWORD(restrictionDialogHistoryList[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v20 + 32) = v13;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)v13, v14, v15);
        }
        return v16;
      }
    }
LABEL_12:
    sub_1B8880C(restrictionDialogHistoryList, v12);
  }
  return v16;
}


bool __fastcall PartyOrganizationUtility__IsEnableFriendshipUpItem(
        PartyOrganizationUtility_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5722B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_4A5722B = 1;
  }
  entity = 0LL;
  if ( itemId < 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          itemId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_13:
    sub_1B8880C(Master_object, v5);
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
  void *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v17; // x27
  Il2CppObject *v18; // x25
  SkillLvMaster_o *v19; // x26
  int v20; // w8
  void *v21; // x23
  unsigned int v22; // w27
  __int64 v23; // x29
  int32_t v24; // w2
  System_String_o *Name; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_IEnumerable_int__o *ActRarity; // x0
  SkillLvEntity_o *skillLvEntity; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *v31; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A5721F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5721F = 1;
  }
  v31 = 0LL;
  entity = 0LL;
  skillLvEntity = 0LL;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)skillName,
    (int32_t)StringLiteral_1/*""*/,
    (int32_t)actMaxRarity,
    servantId);
  *actMaxRarity = 0;
  if ( ((servantId | servantRarity | equipServantId) & 0x80000000) == 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           &entity,
           servantId,
           (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      v17 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      v18 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v17 )
        goto LABEL_33;
      v19 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)v17, equipServantId, 0LL);
      if ( !Instance )
        goto LABEL_33;
      v20 = *((_DWORD *)Instance + 6);
      v21 = Instance;
      if ( v20 >= 1 )
      {
        v22 = 0;
        while ( 1 )
        {
          if ( v22 >= v20 )
            sub_1B88814(Instance, v15);
          v23 = *((_QWORD *)v21 + (int)v22 + 4);
          if ( !v23 )
            goto LABEL_33;
          v24 = *(_DWORD *)(v23 + 48);
          if ( v24 && (eventId < 0 || v24 == eventId) )
          {
            if ( !MasterData_object )
              goto LABEL_33;
            Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                 &v31,
                                 v24,
                                 (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = v31;
              if ( !v31 )
                goto LABEL_33;
              Instance = (void *)EventEntity__IsEventPeriod((EventEntity_o *)v31, 0LL, 0LL);
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
        if ( v18 )
        {
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                       *(_DWORD *)(v23 + 28),
                       (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( Instance )
          {
            Name = SkillEntity__getName((SkillEntity_o *)Instance, 0LL);
            *skillName = Name;
            sub_1B88554((ServantStatusBattleListViewItem_o *)skillName, (int32_t)Name, v27, v28);
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
        sub_1B8880C(Instance, v15);
      }
    }
  }
  return 0;
}


bool __fastcall PartyOrganizationUtility__IsRarityRestriction_32281088(
        PartyOrganizationUtility_o *this,
        int32_t servantId,
        int32_t servantRarity,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *Entity; // x22
  SkillLvEntity_o *v13; // x0

  if ( (byte_4A57220 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57220 = 1;
  }
  if ( ((servantId | servantRarity) & 0x80000000) != 0 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   servantId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v11);
  }
  v13 = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0LL);
  return Entity && v13 && RarityRestrictedSkillUtil__IsDisabled(v13, (ServantEntity_o *)Entity, servantRarity, 0LL);
}


void __fastcall PartyOrganizationUtility__SetNormalFollowerInfo(
        PartyOrganizationUtility_o *this,
        FollowerInfo_o *followerInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._normalFollowerInfo = followerInfo;
  sub_1B88554(
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

  if ( (byte_4A57222 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
    byte_4A57222 = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_1B8880C(0LL, *(_QWORD *)&key);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
    key,
    (Il2CppObject *)followerInfo,
    (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
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
  char *klass; // x0
  ServantStatusBattleListViewItem_o *p_temporaryPartyInfo; // x20
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *temporaryPartyInfo; // t1
  Il2CppObject *v23; // x29
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x1
  ServantStatusBattleListViewItem_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  ServantStatusBattleListViewItem_c *v36; // x20
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x19
  __int64 v41; // x0
  ServantStatusBattleListViewItem_o *p_parent; // x20
  __int64 v43; // x0
  int32_t v44; // w1
  PartyOrganizationUtility_TemporaryPartyInfo_o *v45; // x0
  const MethodInfo *v46; // x1

  if ( (byte_4A5721B & 1) == 0 )
  {
    sub_1B885B0(&PartyListViewItem___TypeInfo);
    sub_1B885B0(&PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo);
    byte_4A5721B = 1;
  }
  temporaryPartyInfo = this->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (ServantStatusBattleListViewItem_o *)&this->fields.temporaryPartyInfo;
  klass = (char *)temporaryPartyInfo;
  if ( !temporaryPartyInfo )
  {
    v23 = (Il2CppObject *)sub_1B887FC(PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo);
    System_Object___ctor(v23, 0LL);
    p_temporaryPartyInfo->klass = (ServantStatusBattleListViewItem_c *)v23;
    sub_1B88554(p_temporaryPartyInfo, (int32_t)v23, v24, v25);
    klass = (char *)p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_18;
  }
  *((_QWORD *)klass + 5) = bgmName;
  v27 = (ServantStatusBattleListViewItem_o *)(klass + 40);
  *(_QWORD *)&v27[-1].fields.isEnabled = userServantId;
  v27[-1].fields.name = (struct System_String_o *)userEquipId;
  *(_DWORD *)&v27[-1].fields.isMine = deckNumber;
  sub_1B88554(v27, (int32_t)bgmName, userEquipId, deckNumber);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 6) = battleSetupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(klass + 48), (int32_t)battleSetupInfo, v28, v29);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 7) = followerInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(klass + 56), (int32_t)followerInfo, v30, v31);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass
    || (*((_QWORD *)klass + 8) = basePartyItem,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(klass + 64), (int32_t)basePartyItem, v32, v33),
        (klass = (char *)p_temporaryPartyInfo->klass) == 0LL)
    || (*((_QWORD *)klass + 9) = partyItem,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(klass + 72), (int32_t)partyItem, v34, v35),
        (v36 = p_temporaryPartyInfo->klass) == 0LL) )
  {
LABEL_18:
    sub_1B8880C(klass, v26);
  }
  LODWORD(v36->_1.declaringType) = selectPartyMemberNum;
  if ( baseDeckItemList )
  {
    v37 = System_Array__Clone((System_Array_o *)baseDeckItemList, 0LL);
    if ( !v37 )
    {
      v44 = 0;
      v36->_1.parent = 0LL;
      p_parent = (ServantStatusBattleListViewItem_o *)&v36->_1.parent;
      goto LABEL_17;
    }
    v40 = v37;
    v41 = sub_1B886EC(v37, PartyListViewItem___TypeInfo);
    if ( v41 )
    {
      v36->_1.parent = (Il2CppClass *)v41;
      p_parent = (ServantStatusBattleListViewItem_o *)&v36->_1.parent;
      v43 = sub_1B886EC(v40, PartyListViewItem___TypeInfo);
      if ( v43 )
      {
        v44 = v43;
LABEL_17:
        sub_1B88554(p_parent, v44, v38, v39);
        return;
      }
    }
    v45 = (PartyOrganizationUtility_TemporaryPartyInfo_o *)sub_1B88ACC(v40);
    PartyOrganizationUtility_TemporaryPartyInfo___ctor(v45, v46);
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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