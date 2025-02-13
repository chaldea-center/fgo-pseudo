void __fastcall PartyOrganizationUtility___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BD83A0 & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationUtility_TypeInfo);
    sub_1C21E38(&StringLiteral_11141/*"QuestUseItem"*/);
    byte_4BD83A0 = 1;
  }
  PartyOrganizationUtility_TypeInfo->static_fields->SAVE_KEY_QUEST_USE_ITEM = (struct System_String_o *)StringLiteral_11141/*"QuestUseItem"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)PartyOrganizationUtility_TypeInfo->static_fields,
    StringLiteral_11141/*"QuestUseItem"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void __fastcall PartyOrganizationUtility___ctor(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct FriendshipUpItemInfo_array *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4BD839F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_1C21E38(&FriendshipUpItemInfo___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
    byte_4BD839F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  this->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._npcFollowerInfos, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (struct FriendshipUpItemInfo_array *)sub_1C21EE0(FriendshipUpItemInfo___TypeInfo, 0LL);
  this->fields.CachedFriendshipUpItemInfo = v17;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.CachedFriendshipUpItemInfo,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.questUseItemStateList = (struct System_Collections_Generic_List_int____o *)v24;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.questUseItemStateList,
    (int64_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_388D570 *)Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  Il2CppClass *klass; // x8
  _QWORD *v19; // x9
  __int64 monitor_low; // x10
  __int64 v21; // x8
  int32_t v22; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v23; // [xsp+8h] [xbp-28h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  v23 = phaseId;
  v24 = questId;
  v22 = restrictionId;
  if ( (byte_4BD838A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4BD838A = 1;
  }
  v6 = System_Int32__ToString((int32_t)&v24, 0LL);
  v7 = System_Int32__ToString((int32_t)&v23, 0LL);
  v8 = System_Int32__ToString((int32_t)&v22, 0LL);
  restrictionDialogHistoryList = (Il2CppObject *)System_String__Concat_63126736(v6, v7, v8, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_11;
  v11 = restrictionDialogHistoryList;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)this->fields.restrictionDialogHistoryList,
         restrictionDialogHistoryList,
         (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    return;
  }
  restrictionDialogHistoryList = (Il2CppObject *)this->fields.restrictionDialogHistoryList;
  if ( !restrictionDialogHistoryList
    || (klass = restrictionDialogHistoryList[1].klass,
        v19 = Method_System_Collections_Generic_List_string__Add__,
        ++HIDWORD(restrictionDialogHistoryList[1].monitor),
        !klass) )
  {
LABEL_11:
    sub_1C22094(restrictionDialogHistoryList, v10);
  }
  monitor_low = SLODWORD(restrictionDialogHistoryList[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)restrictionDialogHistoryList,
      v11,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = (__int64)klass + 8 * monitor_low;
    LODWORD(restrictionDialogHistoryList[1].monitor) = monitor_low + 1;
    *(_QWORD *)(v21 + 32) = v11;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)v11, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall PartyOrganizationUtility__ClearFollowerInfo(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x2

  this->fields._normalFollowerInfo = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._normalFollowerInfo, 0LL, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&this->fields._SelectedNormalFollowerClassId_k__BackingField = 0LL;
  PartyOrganizationUtility__ClearNpcFollowerInfo(this, -1, v9);
}


void __fastcall PartyOrganizationUtility__ClearNormalFollowerInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct FollowerInfo_o **p_normalFollowerInfo; // x19

  this->fields._normalFollowerInfo = 0LL;
  p_normalFollowerInfo = &this->fields._normalFollowerInfo;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._normalFollowerInfo, 0LL, v2, v3, v4, v5, v6, v7);
  p_normalFollowerInfo[1] = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUtility__ClearNpcFollowerInfo(
        PartyOrganizationUtility_o *this,
        int32_t key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcFollowerInfos; // x0

  if ( (byte_4BD8390 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
    byte_4BD8390 = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_1C22094(0LL, *(_QWORD *)&key);
  if ( (key & 0x80000000) != 0 )
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
      (const MethodInfo_32B5BD4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
  else
    System_Collections_Generic_Dictionary_int__object___Remove(
      (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
      key,
      (const MethodInfo_32B6ED4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
}


void __fastcall PartyOrganizationUtility__ClearQuestUseItemCache(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  struct FriendshipUpItemInfo_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BD8391 & 1) == 0 )
  {
    sub_1C21E38(&FriendshipUpItemInfo___TypeInfo);
    byte_4BD8391 = 1;
  }
  v3 = (struct FriendshipUpItemInfo_array *)sub_1C21EE0(FriendshipUpItemInfo___TypeInfo, 0LL);
  this->fields.CachedFriendshipUpItemInfo = v3;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.CachedFriendshipUpItemInfo,
    (int64_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void __fastcall PartyOrganizationUtility__ClearTemporaryPartyInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *v9; // x0
  PartyOrganizationUtility_o *p_temporaryPartyInfo; // x19
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *temporaryPartyInfo; // t1
  void *v12; // x1
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  PartyOrganizationUtility_c *klass; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  PartyOrganizationUtility_o *p_parent; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  if ( (byte_4BD8388 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8388 = 1;
  }
  temporaryPartyInfo = this->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (PartyOrganizationUtility_o *)&this->fields.temporaryPartyInfo;
  v9 = temporaryPartyInfo;
  if ( temporaryPartyInfo )
  {
    v9->fields.userServantId = 0LL;
    v9->fields.userEquipId = 0LL;
    v9->fields.deckNumber = -1;
    v12 = StringLiteral_1/*""*/;
    v9->fields.bgmName = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v9->fields.bgmName, (int64_t)v12, v2, v3, v4, v5, v6, v7);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    klass->_1.this_arg.data = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&klass->_1.this_arg, 0LL, v14, v15, v16, v17, v18, v19);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    *(_QWORD *)&klass->_1.this_arg.bits = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&klass->_1.this_arg.bits, 0LL, v21, v22, v23, v24, v25, v26);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass
      || (klass->_1.element_class = 0LL,
          sub_1C21DDC((PartyOrganizationUtility_o *)&klass->_1.element_class, 0LL, v27, v28, v29, v30, v31, v32),
          (klass = p_temporaryPartyInfo->klass) == 0LL)
      || (klass->_1.castClass = 0LL,
          sub_1C21DDC((PartyOrganizationUtility_o *)&klass->_1.castClass, 0LL, v33, v34, v35, v36, v37, v38),
          (klass = p_temporaryPartyInfo->klass) == 0LL) )
    {
LABEL_11:
      sub_1C22094(klass, v13);
    }
    klass->_1.parent = 0LL;
    p_parent = (PartyOrganizationUtility_o *)&klass->_1.parent;
    *(_DWORD *)&p_parent[-1].fields._IsQuestStartMenuMode_k__BackingField = -1;
    sub_1C21DDC(p_parent, 0LL, v39, v40, v41, v42, v43, v44);
    p_temporaryPartyInfo->klass = 0LL;
    sub_1C21DDC(p_temporaryPartyInfo, 0LL, v46, v47, v48, v49, v50, v51);
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


EventCampaignEntity_array *__fastcall PartyOrganizationUtility__GetAvailableEventCampaignEntities(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  Il2CppObject *v12; // x20
  Il2CppObject *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  Il2CppObject *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableFriendshipUpItemEventCampaigns; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableRewardAddItemEventCampaigns; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x20
  System_Func_object__bool__o *v44; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x20
  System_Func_object__bool__o *v46; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x20
  System_Func_object__bool__o *v48; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0

  if ( (byte_4BD8392 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_WarGroupIgnoreMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_WarGroupMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Concat_EventCampaignEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_EventCampaignEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    sub_1C21E38(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__2__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__3__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__4__);
    sub_1C21E38(&PartyOrganizationUtility___c__DisplayClass105_0_TypeInfo);
    byte_4BD8392 = 1;
  }
  v3 = sub_1C22084(PartyOrganizationUtility___c__DisplayClass105_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_13;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)this, v6, v7, v8, v9, v10, v11);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         (Il2CppObject **)(v3 + 40),
         this->fields._CachedQuestId_k__BackingField,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v12 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    v13 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarGroupMaster___);
    *(_QWORD *)(v3 + 32) = v13;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)v13, v14, v15, v16, v17, v18, v19);
    v20 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarGroupIgnoreMaster___);
    *(_QWORD *)(v3 + 56) = v20;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 56), (int64_t)v20, v21, v22, v23, v24, v25, v26);
    v27 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventQuestMaster___);
    *(_QWORD *)(v3 + 16) = v27;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)v27, v28, v29, v30, v31, v32, v33);
    v34 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
    *(_QWORD *)(v3 + 48) = v34;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 48), (int64_t)v34, v35, v36, v37, v38, v39, v40);
    if ( v12 )
    {
      AvailableFriendshipUpItemEventCampaigns = EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                                  (EventCampaignMaster_o *)v12,
                                                  0LL);
      AvailableRewardAddItemEventCampaigns = EventCampaignMaster__GetAvailableRewardAddItemEventCampaigns(
                                               (EventCampaignMaster_o *)v12,
                                               0LL);
      v43 = System_Linq_Enumerable__Concat_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)AvailableFriendshipUpItemEventCampaigns,
              (System_Collections_Generic_IEnumerable_TSource__o *)AvailableRewardAddItemEventCampaigns,
              (const MethodInfo_2FC78E0 *)Method_System_Linq_Enumerable_Concat_EventCampaignEntity___);
      v44 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventCampaignEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v44,
        (Il2CppObject *)v3,
        Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__2__,
        0LL);
      v45 = System_Linq_Enumerable__Where_object_(
              v43,
              (System_Func_TSource__bool__o *)v44,
              (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
      v46 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventCampaignEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v46,
        (Il2CppObject *)v3,
        Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__3__,
        0LL);
      v47 = System_Linq_Enumerable__Where_object_(
              v45,
              (System_Func_TSource__bool__o *)v46,
              (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
      v48 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventCampaignEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v48,
        (Il2CppObject *)v3,
        Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__4__,
        0LL);
      v49 = System_Linq_Enumerable__Where_object_(
              v47,
              (System_Func_TSource__bool__o *)v48,
              (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
      return (EventCampaignEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                            v49,
                                            (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_EventCampaignEntity___);
    }
LABEL_13:
    sub_1C22094(Master_object, v5);
  }
  return 0LL;
}


FriendshipUpItemInfo_array *__fastcall PartyOrganizationUtility__GetAvailableFriendshipUpItemInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  PartyOrganizationUtility_o *v4; // x0
  const MethodInfo *v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  Il2CppObject *Master_object; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x1
  EventCampaignEntity_array *AvailableEventCampaignEntities; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  PartyOrganizationUtility___c_c *v29; // x0
  System_Func_object__object__o *_9__106_0; // x22
  Il2CppObject *v31; // x23
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Func_T1__T2__TResult__o *v39; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x21
  System_Func_object__object__o *v41; // x22
  System_Collections_Generic_IEnumerable_T__o *v42; // x0
  System_Collections_Generic_IEnumerable_T__o *v43; // x21
  PartyOrganizationUtility___c_c *v44; // x8
  System_Func_object__bool__o *_9__106_3; // x22
  Il2CppObject *v46; // x23
  struct PartyOrganizationUtility___c_StaticFields *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  PartyOrganizationUtility___c_c *v55; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x21
  System_Func_object__int__o *_9__106_4; // x22
  Il2CppObject *v58; // x23
  struct PartyOrganizationUtility___c_StaticFields *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v66; // x0
  PartyOrganizationUtility___c_c *v67; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x21
  System_Func_object__object__o *_9__106_5; // x22
  Il2CppObject *v70; // x23
  struct PartyOrganizationUtility___c_StaticFields *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  System_Collections_Generic_List_object__o *v85; // x21
  Il2CppObject *v86; // x21
  const MethodInfo *v87; // x4
  UserInterruptionQuestEntity_InterruptionInfo_o *InterruptionInfo; // x0
  UserInterruptionQuestEntity_InterruptionInfo_o *v89; // x21
  System_Collections_Generic_IEnumerable_T__o *useRewardAddItemIds; // x21
  System_Action_int__o *v91; // x22
  System_Collections_Generic_List_object__o *v92; // x19
  System_Action_object__o *v93; // x21
  PartyOrganizationUtility___c_c *v94; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v95; // x19
  System_Func_object__int__o *_9__106_7; // x20
  Il2CppObject *v97; // x21
  struct PartyOrganizationUtility___c_StaticFields *v98; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v105; // x0
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BD8393 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_FriendshipUpItemInfo__TypeInfo);
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ExcludeNull_FriendshipUpItemInfo___);
    sub_1C21E38(&Method_BasicHelper_ForEach_int___);
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_GroupBy_FriendshipUpItemInfo__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_FriendshipUpItemInfo__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_SelectMany_EventCampaignEntity__int____f__AnonymousType2_EventCampaignEntity__ItemEntity____);
    sub_1C21E38(&Method_System_Linq_Enumerable_SelectMany_IGrouping_int__FriendshipUpItemInfo___FriendshipUpItemInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select___f__AnonymousType2_EventCampaignEntity__ItemEntity___FriendshipUpItemInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_FriendshipUpItemInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_FriendshipUpItemInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___);
    sub_1C21E38(&System_Func___f__AnonymousType2_EventCampaignEntity__ItemEntity___FriendshipUpItemInfo__TypeInfo);
    sub_1C21E38(&System_Func_EventCampaignEntity__IEnumerable_int___TypeInfo);
    sub_1C21E38(&System_Func_IGrouping_int__FriendshipUpItemInfo___IEnumerable_FriendshipUpItemInfo___TypeInfo);
    sub_1C21E38(&System_Func_FriendshipUpItemInfo__int__TypeInfo);
    sub_1C21E38(&System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    sub_1C21E38(&System_Func_EventCampaignEntity__int____f__AnonymousType2_EventCampaignEntity__ItemEntity___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_FriendshipUpItemInfo__ForEach__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FriendshipUpItemInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_FriendshipUpItemInfo__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_0__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_3__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_4__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_5__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_7__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__10__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__1__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__2__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__6__);
    sub_1C21E38(&PartyOrganizationUtility___c__DisplayClass106_0_TypeInfo);
    sub_1C21E38(&PartyOrganizationUtility___c_TypeInfo);
    byte_4BD8393 = 1;
  }
  entity = 0LL;
  v3 = sub_1C22084(PartyOrganizationUtility___c__DisplayClass106_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_57;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
  *(_QWORD *)(v3 + 16) = Master_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)Master_object, v13, v14, v15, v16, v17, v18);
  v19 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
  *(_QWORD *)(v3 + 24) = v19;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)v19, v20, v21, v22, v23, v24, v25);
  AvailableEventCampaignEntities = PartyOrganizationUtility__GetAvailableEventCampaignEntities(this, v26);
  if ( !AvailableEventCampaignEntities )
    goto LABEL_32;
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)AvailableEventCampaignEntities;
  v29 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v29 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_0 = (System_Func_object__object__o *)v29->static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = PartyOrganizationUtility___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v29->static_fields->__9;
    _9__106_0 = (System_Func_object__object__o *)sub_1C22084(System_Func_EventCampaignEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__106_0,
      v31,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_0__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Func_EventCampaignEntity__IEnumerable_int___o *)_9__106_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__106_0,
      (int64_t)_9__106_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v39 = (System_Func_T1__T2__TResult__o *)sub_1C22084(System_Func_EventCampaignEntity__int____f__AnonymousType2_EventCampaignEntity__ItemEntity___TypeInfo);
  System_Func_object__int__object____ctor(
    v39,
    (Il2CppObject *)v3,
    Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__1__,
    0LL);
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int__object_(
                                                               v28,
                                                               (System_Func_TSource__IEnumerable_TCollection___o *)_9__106_0,
                                                               (System_Func_TSource__TCollection__TResult__o *)v39,
                                                               (const MethodInfo_2FE3C20 *)Method_System_Linq_Enumerable_SelectMany_EventCampaignEntity__int____f__AnonymousType2_EventCampaignEntity__ItemEntity____);
  v41 = (System_Func_object__object__o *)sub_1C22084(System_Func___f__AnonymousType2_EventCampaignEntity__ItemEntity___FriendshipUpItemInfo__TypeInfo);
  System_Func_object__object____ctor(
    v41,
    (Il2CppObject *)v3,
    Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__2__,
    0LL);
  v42 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v40,
                                                         (System_Func_TSource__TResult__o *)v41,
                                                         (const MethodInfo_2FE15B8 *)Method_System_Linq_Enumerable_Select___f__AnonymousType2_EventCampaignEntity__ItemEntity___FriendshipUpItemInfo___);
  v43 = BasicHelper__ExcludeNull_object_(
          v42,
          (const MethodInfo_2F9B6C4 *)Method_BasicHelper_ExcludeNull_FriendshipUpItemInfo___);
  v44 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v44 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_3 = (System_Func_object__bool__o *)v44->static_fields->__9__106_3;
  if ( !_9__106_3 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = PartyOrganizationUtility___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v44->static_fields->__9;
    _9__106_3 = (System_Func_object__bool__o *)sub_1C22084(System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__106_3,
      v46,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_3__,
      0LL);
    v47 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v47->__9__106_3 = (struct System_Func_FriendshipUpItemInfo__bool__o *)_9__106_3;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v47->__9__106_3, (int64_t)_9__106_3, v48, v49, v50, v51, v52, v53);
  }
  v54 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v43,
          (System_Func_TSource__bool__o *)_9__106_3,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___);
  v55 = PartyOrganizationUtility___c_TypeInfo;
  v56 = v54;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v55 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_4 = (System_Func_object__int__o *)v55->static_fields->__9__106_4;
  if ( !_9__106_4 )
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v55 = PartyOrganizationUtility___c_TypeInfo;
    }
    v58 = (Il2CppObject *)v55->static_fields->__9;
    _9__106_4 = (System_Func_object__int__o *)sub_1C22084(System_Func_FriendshipUpItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__106_4,
      v58,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_4__,
      0LL);
    v59 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v59->__9__106_4 = (struct System_Func_FriendshipUpItemInfo__int__o *)_9__106_4;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v59->__9__106_4, (int64_t)_9__106_4, v60, v61, v62, v63, v64, v65);
  }
  v66 = System_Linq_Enumerable__GroupBy_object__int_(
          v56,
          (System_Func_TSource__TKey__o *)_9__106_4,
          (const MethodInfo_2FD3FA0 *)Method_System_Linq_Enumerable_GroupBy_FriendshipUpItemInfo__int___);
  v67 = PartyOrganizationUtility___c_TypeInfo;
  v68 = (System_Collections_Generic_IEnumerable_TSource__o *)v66;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v67 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_5 = (System_Func_object__object__o *)v67->static_fields->__9__106_5;
  if ( !_9__106_5 )
  {
    if ( !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67);
      v67 = PartyOrganizationUtility___c_TypeInfo;
    }
    v70 = (Il2CppObject *)v67->static_fields->__9;
    _9__106_5 = (System_Func_object__object__o *)sub_1C22084(System_Func_IGrouping_int__FriendshipUpItemInfo___IEnumerable_FriendshipUpItemInfo___TypeInfo);
    System_Func_object__object____ctor(
      _9__106_5,
      v70,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_5__,
      0LL);
    v71 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v71->__9__106_5 = (struct System_Func_IGrouping_int__FriendshipUpItemInfo___IEnumerable_FriendshipUpItemInfo___o *)_9__106_5;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v71->__9__106_5, (int64_t)_9__106_5, v72, v73, v74, v75, v76, v77);
  }
  v78 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v68,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__106_5,
                                                               (const MethodInfo_2FE3B3C *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__FriendshipUpItemInfo___FriendshipUpItemInfo___);
  v85 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v78,
                                                       (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_FriendshipUpItemInfo___);
  if ( !v85 )
  {
LABEL_32:
    v85 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_FriendshipUpItemInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v85,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_FriendshipUpItemInfo___ctor__);
  }
  *(_QWORD *)(v3 + 40) = v85;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 40), (int64_t)v85, v79, v80, v81, v82, v83, v84);
  if ( this->fields._IsWaveBattleRestart_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v86 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    v4 = (PartyOrganizationUtility_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v4 = (PartyOrganizationUtility_o *)NetworkManager_TypeInfo;
    }
    if ( v86 )
    {
      v4 = (PartyOrganizationUtility_o *)UserInterruptionQuestMaster__TryGetEntity(
                                           (UserInterruptionQuestMaster_o *)v86,
                                           &entity,
                                           *(_QWORD *)&v4[1].fields.restrictionDialogHistoryList[1].fields._size,
                                           this->fields._CachedQuestId_k__BackingField,
                                           this->fields._CachedQuestPhase_k__BackingField,
                                           0LL);
      if ( ((unsigned __int8)v4 & 1) == 0 )
        goto LABEL_49;
      if ( entity )
      {
        PartyOrganizationUtility__UpdateInterruptionUseItem(
          v4,
          *(System_Collections_Generic_List_FriendshipUpItemInfo__o **)(v3 + 40),
          30,
          entity->fields.campaignItemId,
          v87);
        v4 = (PartyOrganizationUtility_o *)entity;
        if ( entity )
        {
          InterruptionInfo = UserInterruptionQuestEntity__GetInterruptionInfo(entity, 0LL);
          if ( InterruptionInfo )
          {
            v89 = InterruptionInfo;
            if ( !BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)InterruptionInfo->fields.useRewardAddItemIds,
                    0LL) )
            {
              useRewardAddItemIds = (System_Collections_Generic_IEnumerable_T__o *)v89->fields.useRewardAddItemIds;
              v91 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
              System_Action_int____ctor(
                v91,
                (Il2CppObject *)v3,
                Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__10__,
                0LL);
              BasicHelper__ForEach_int_(
                useRewardAddItemIds,
                (System_Action_T__o *)v91,
                (const MethodInfo_2F9C448 *)Method_BasicHelper_ForEach_int___);
            }
          }
          goto LABEL_49;
        }
      }
    }
LABEL_57:
    sub_1C22094(v4, v5);
  }
LABEL_49:
  PartyOrganizationUtility__LoadQuestUseItemUseState(this, v5);
  v92 = *(System_Collections_Generic_List_object__o **)(v3 + 40);
  v93 = (System_Action_object__o *)sub_1C22084(System_Action_FriendshipUpItemInfo__TypeInfo);
  System_Action_object____ctor(
    v93,
    (Il2CppObject *)v3,
    Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__6__,
    0LL);
  if ( !v92 )
    goto LABEL_57;
  System_Collections_Generic_List_object___ForEach(
    v92,
    (System_Action_T__o *)v93,
    (const MethodInfo_364FAF4 *)Method_System_Collections_Generic_List_FriendshipUpItemInfo__ForEach__);
  v94 = PartyOrganizationUtility___c_TypeInfo;
  v95 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v3 + 40);
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v94 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_7 = (System_Func_object__int__o *)v94->static_fields->__9__106_7;
  if ( !_9__106_7 )
  {
    if ( !v94->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v94);
      v94 = PartyOrganizationUtility___c_TypeInfo;
    }
    v97 = (Il2CppObject *)v94->static_fields->__9;
    _9__106_7 = (System_Func_object__int__o *)sub_1C22084(System_Func_FriendshipUpItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__106_7,
      v97,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_7__,
      0LL);
    v98 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v98->__9__106_7 = (struct System_Func_FriendshipUpItemInfo__int__o *)_9__106_7;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v98->__9__106_7, (int64_t)_9__106_7, v99, v100, v101, v102, v103, v104);
  }
  v105 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                v95,
                                                                (System_Func_TSource__TKey__o *)_9__106_7,
                                                                (const MethodInfo_2FD940C *)Method_System_Linq_Enumerable_OrderByDescending_FriendshipUpItemInfo__int___);
  return (FriendshipUpItemInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                         v105,
                                         (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_FriendshipUpItemInfo___);
}


FriendshipUpItemInfo_array *__fastcall PartyOrganizationUtility__GetAvailableQuestUseItems(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CachedFriendshipUpItemInfo; // x19
  System_Func_object__bool__o *_9__110_0; // x20
  Il2CppObject *v6; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4BD8397 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_FriendshipUpItemInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___);
    sub_1C21E38(&System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__GetAvailableQuestUseItems_b__110_0__);
    sub_1C21E38(&PartyOrganizationUtility___c_TypeInfo);
    byte_4BD8397 = 1;
  }
  v3 = PartyOrganizationUtility___c_TypeInfo;
  CachedFriendshipUpItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.CachedFriendshipUpItemInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v3 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__110_0 = (System_Func_object__bool__o *)v3->static_fields->__9__110_0;
  if ( !_9__110_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = PartyOrganizationUtility___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__110_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__110_0,
      v6,
      Method_PartyOrganizationUtility___c__GetAvailableQuestUseItems_b__110_0__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__110_0 = (struct System_Func_FriendshipUpItemInfo__bool__o *)_9__110_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__110_0,
      (int64_t)_9__110_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          CachedFriendshipUpItemInfo,
          (System_Func_TSource__bool__o *)_9__110_0,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___);
  return (FriendshipUpItemInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                         v14,
                                         (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_FriendshipUpItemInfo___);
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
  if ( (byte_4BD838F & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_GetValue_int__FollowerInfo___);
    byte_4BD838F = 1;
  }
  return (FollowerInfo_o *)BasicHelper__GetValue_int__object_(
                             (System_Collections_Generic_Dictionary_K__V__o *)this->fields._npcFollowerInfos,
                             key,
                             0LL,
                             (const MethodInfo_2F9E178 *)Method_BasicHelper_GetValue_int__FollowerInfo___);
}


System_Int32_array *__fastcall PartyOrganizationUtility__GetQuestUseItemIds(
        PartyOrganizationUtility_o *this,
        int32_t campaignType,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *AvailableQuestUseItems; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  PartyOrganizationUtility___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__int__o *_9__115_1; // x20
  Il2CppObject *v14; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v22; // x0
  PartyOrganizationUtility___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  System_Func_object__object__o *_9__115_2; // x20
  Il2CppObject *v26; // x21
  struct PartyOrganizationUtility___c_StaticFields *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v34; // x0
  PartyOrganizationUtility___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x19
  System_Func_object__int__o *_9__115_3; // x20
  Il2CppObject *v38; // x21
  struct PartyOrganizationUtility___c_StaticFields *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0

  if ( (byte_4BD839C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_GroupBy_FriendshipUpItemInfo__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_SelectMany_IGrouping_int__FriendshipUpItemInfo___FriendshipUpItemInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_FriendshipUpItemInfo__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___);
    sub_1C21E38(&System_Func_IGrouping_int__FriendshipUpItemInfo___IEnumerable_FriendshipUpItemInfo___TypeInfo);
    sub_1C21E38(&System_Func_FriendshipUpItemInfo__int__TypeInfo);
    sub_1C21E38(&System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_1__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_2__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_3__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__DisplayClass115_0__GetQuestUseItemIds_b__0__);
    sub_1C21E38(&PartyOrganizationUtility___c__DisplayClass115_0_TypeInfo);
    sub_1C21E38(&PartyOrganizationUtility___c_TypeInfo);
    byte_4BD839C = 1;
  }
  v5 = sub_1C22084(PartyOrganizationUtility___c__DisplayClass115_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_DWORD *)(v5 + 16) = campaignType;
  AvailableQuestUseItems = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationUtility__GetAvailableQuestUseItems(
                                                                                  this,
                                                                                  v7);
  v9 = (System_Func_object__bool__o *)sub_1C22084(System_Func_FriendshipUpItemInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_PartyOrganizationUtility___c__DisplayClass115_0__GetQuestUseItemIds_b__0__,
    0LL);
  v10 = System_Linq_Enumerable__Where_object_(
          AvailableQuestUseItems,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___);
  v11 = PartyOrganizationUtility___c_TypeInfo;
  v12 = v10;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v11 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__115_1 = (System_Func_object__int__o *)v11->static_fields->__9__115_1;
  if ( !_9__115_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = PartyOrganizationUtility___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__115_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_FriendshipUpItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__115_1,
      v14,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_1__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__115_1 = (struct System_Func_FriendshipUpItemInfo__int__o *)_9__115_1;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__115_1,
      (int64_t)_9__115_1,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = System_Linq_Enumerable__GroupBy_object__int_(
          v12,
          (System_Func_TSource__TKey__o *)_9__115_1,
          (const MethodInfo_2FD3FA0 *)Method_System_Linq_Enumerable_GroupBy_FriendshipUpItemInfo__int___);
  v23 = PartyOrganizationUtility___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)v22;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v23 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__115_2 = (System_Func_object__object__o *)v23->static_fields->__9__115_2;
  if ( !_9__115_2 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = PartyOrganizationUtility___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__115_2 = (System_Func_object__object__o *)sub_1C22084(System_Func_IGrouping_int__FriendshipUpItemInfo___IEnumerable_FriendshipUpItemInfo___TypeInfo);
    System_Func_object__object____ctor(
      _9__115_2,
      v26,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_2__,
      0LL);
    v27 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v27->__9__115_2 = (struct System_Func_IGrouping_int__FriendshipUpItemInfo___IEnumerable_FriendshipUpItemInfo___o *)_9__115_2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v27->__9__115_2, (int64_t)_9__115_2, v28, v29, v30, v31, v32, v33);
  }
  v34 = System_Linq_Enumerable__SelectMany_object__object_(
          v24,
          (System_Func_TSource__IEnumerable_TResult___o *)_9__115_2,
          (const MethodInfo_2FE3B3C *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__FriendshipUpItemInfo___FriendshipUpItemInfo___);
  v35 = PartyOrganizationUtility___c_TypeInfo;
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)v34;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v35 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__115_3 = (System_Func_object__int__o *)v35->static_fields->__9__115_3;
  if ( !_9__115_3 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = PartyOrganizationUtility___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__115_3 = (System_Func_object__int__o *)sub_1C22084(System_Func_FriendshipUpItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__115_3,
      v38,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_3__,
      0LL);
    v39 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v39->__9__115_3 = (struct System_Func_FriendshipUpItemInfo__int__o *)_9__115_3;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v39->__9__115_3, (int64_t)_9__115_3, v40, v41, v42, v43, v44, v45);
  }
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v36,
                                                               (System_Func_TSource__TResult__o *)_9__115_3,
                                                               (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_FriendshipUpItemInfo__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v46,
           (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
}


FriendshipUpItemInfo_array *__fastcall PartyOrganizationUtility__GetQuestUseItems(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BD8398 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_FriendshipUpItemInfo___);
    byte_4BD8398 = 1;
  }
  return (FriendshipUpItemInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.CachedFriendshipUpItemInfo,
                                         (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_FriendshipUpItemInfo___);
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

  if ( (byte_4BD838D & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&Rarity_TypeInfo);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&StringLiteral_10325/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/);
    sub_1C21E38(&StringLiteral_10329/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/);
    sub_1C21E38(&StringLiteral_10328/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/);
    sub_1C21E38(&StringLiteral_10324/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/);
    sub_1C21E38(&StringLiteral_10327/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/);
    sub_1C21E38(&StringLiteral_10326/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/);
    byte_4BD838D = 1;
  }
  v13 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v13, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10324/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, 0LL);
  v15 = System_String__Format(v14, (Il2CppObject *)servantName, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10325/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = (Il2CppObject *)Rarity__getRarityType(servantRarity, 0LL);
  v18 = System_String__Format(v16, RarityType, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_10326/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, 0LL);
  v20 = System_String__Format(v19, (Il2CppObject *)equipName, 0LL);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10327/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, 0LL);
  v22 = System_String__Format(v21, (Il2CppObject *)skillName, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10328/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10329/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, 0LL);
  v25 = (Il2CppObject *)Rarity__getRarityType(actMaxRarity, 0LL);
  v26 = System_String__Format(v24, v25, 0LL);
  if ( !v15 || !v20 )
    goto LABEL_14;
  v28 = v26;
  stringLength = v15->fields._stringLength;
  v30 = v20->fields._stringLength;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v26 = (System_String_o *)System_Math__Max_63934620(stringLength, v30, 0LL);
  *maxLength = (int)v26;
  if ( !v22
    || (v26 = (System_String_o *)System_Math__Max_63934620((int32_t)v26, v22->fields._stringLength, 0LL),
        *maxLength = (int)v26,
        !v13) )
  {
LABEL_14:
    sub_1C22094(v26, v27);
  }
  System_Text_StringBuilder__Append_62276628(v13, v15, 0LL);
  System_Text_StringBuilder__Append_62276628(v13, v18, 0LL);
  System_Text_StringBuilder__Append_62276628(v13, v20, 0LL);
  System_Text_StringBuilder__Append_62276628(v13, v22, 0LL);
  System_Text_StringBuilder__Append_62276628(v13, v23, 0LL);
  System_Text_StringBuilder__Append_62276628(v13, v28, 0LL);
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

  if ( (byte_4BD8399 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD8399 = 1;
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
          sub_1C22094(PartyItemSmc_k__BackingField, startingNum);
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


bool __fastcall PartyOrganizationUtility__HasQuestUseItem(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  if ( (byte_4BD8396 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_FriendshipUpItemInfo___);
    byte_4BD8396 = 1;
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.CachedFriendshipUpItemInfo,
           (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_FriendshipUpItemInfo___);
}


bool __fastcall PartyOrganizationUtility__IsAvailableFriendshipUpItem(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c_c *v3; // x0
  System_Object_array *CachedFriendshipUpItemInfo; // x19
  System_Func_object__bool__o *_9__108_0; // x20
  Il2CppObject *v6; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BD8395 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_FriendshipUpItemInfo___);
    sub_1C21E38(&System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__IsAvailableFriendshipUpItem_b__108_0__);
    sub_1C21E38(&PartyOrganizationUtility___c_TypeInfo);
    byte_4BD8395 = 1;
  }
  v3 = PartyOrganizationUtility___c_TypeInfo;
  CachedFriendshipUpItemInfo = (System_Object_array *)this->fields.CachedFriendshipUpItemInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v3 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__108_0 = (System_Func_object__bool__o *)v3->static_fields->__9__108_0;
  if ( !_9__108_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = PartyOrganizationUtility___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__108_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__108_0,
      v6,
      Method_PartyOrganizationUtility___c__IsAvailableFriendshipUpItem_b__108_0__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__108_0 = (struct System_Func_FriendshipUpItemInfo__bool__o *)_9__108_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__108_0,
      (int64_t)_9__108_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return BasicHelper__Any_object__49917468(
           CachedFriendshipUpItemInfo,
           (System_Func_T__bool__o *)_9__108_0,
           (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_FriendshipUpItemInfo___);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  bool v20; // w22
  Il2CppClass *klass; // x8
  _QWORD *v22; // x9
  __int64 monitor_low; // x10
  __int64 v24; // x8
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v27; // [xsp+18h] [xbp-28h] BYREF
  int32_t v28; // [xsp+1Ch] [xbp-24h] BYREF

  v27 = phaseId;
  v28 = questId;
  v26 = restrictionId;
  if ( (byte_4BD8389 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4BD8389 = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v28, 0LL);
  v9 = System_Int32__ToString((int32_t)&v27, 0LL);
  v10 = System_Int32__ToString((int32_t)&v26, 0LL);
  restrictionDialogHistoryList = (Il2CppObject *)System_String__Concat_63126736(v8, v9, v10, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_12;
  v13 = restrictionDialogHistoryList;
  v20 = System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.restrictionDialogHistoryList,
          restrictionDialogHistoryList,
          (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( !v20 && isAddHistory )
  {
    restrictionDialogHistoryList = (Il2CppObject *)this->fields.restrictionDialogHistoryList;
    if ( restrictionDialogHistoryList )
    {
      klass = restrictionDialogHistoryList[1].klass;
      v22 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(restrictionDialogHistoryList[1].monitor);
      if ( klass )
      {
        monitor_low = SLODWORD(restrictionDialogHistoryList[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)restrictionDialogHistoryList,
            v13,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = (__int64)klass + 8 * monitor_low;
          LODWORD(restrictionDialogHistoryList[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v24 + 32) = v13;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 32), (int64_t)v13, v14, v15, v16, v17, v18, v19);
        }
        return v20;
      }
    }
LABEL_12:
    sub_1C22094(restrictionDialogHistoryList, v12);
  }
  return v20;
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
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v17; // x27
  Il2CppObject *v18; // x25
  SkillLvMaster_o *v19; // x26
  int v20; // w8
  void *v21; // x24
  unsigned int v22; // w27
  __int64 v23; // x29
  int32_t v24; // w2
  System_String_o *Name; // x0
  System_Collections_Generic_IEnumerable_int__o *ActRarity; // x0
  SkillLvEntity_o *skillLvEntity; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *v29; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4BD838B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD838B = 1;
  }
  v29 = 0LL;
  entity = 0LL;
  skillLvEntity = 0LL;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(skillName, StringLiteral_1/*""*/);
  *actMaxRarity = 0;
  if ( ((servantId | servantRarity | equipServantId) & 0x80000000) == 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_35;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           &entity,
           servantId,
           (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      v17 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      v18 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v17 )
        goto LABEL_35;
      v19 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)v17, equipServantId, 0LL);
      if ( !Instance )
        goto LABEL_35;
      v20 = *((_DWORD *)Instance + 6);
      v21 = Instance;
      if ( v20 >= 1 )
      {
        v22 = 0;
        while ( 1 )
        {
          if ( v22 >= v20 )
            sub_1C2209C(Instance, v15);
          v23 = *((_QWORD *)v21 + (int)v22 + 4);
          if ( !v23 )
            goto LABEL_35;
          v24 = *(_DWORD *)(v23 + 48);
          if ( v24 && (eventId < 0 || v24 == eventId) )
          {
            if ( !MasterData_object )
              goto LABEL_35;
            Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                 &v29,
                                 v24,
                                 (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = v29;
              if ( !v29 )
                goto LABEL_35;
              Instance = (void *)EventEntity__IsEventPeriod((EventEntity_o *)v29, 0LL, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_25;
              Instance = v29;
              if ( !v29 )
                goto LABEL_35;
              Instance = (void *)EventEntity__IsSkillRelease((EventEntity_o *)v29, 0, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
LABEL_25:
                if ( !v19 )
                  goto LABEL_35;
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
                       (const MethodInfo_325BDC8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( Instance )
          {
            Name = SkillEntity__getName((SkillEntity_o *)Instance, 0LL);
            *skillName = Name;
            sub_1C21DDC(skillName, Name);
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
LABEL_35:
        sub_1C22094(Instance, v15);
      }
    }
  }
  return 0;
}


bool __fastcall PartyOrganizationUtility__IsRarityRestriction_33246592(
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

  if ( (byte_4BD838C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD838C = 1;
  }
  if ( ((servantId | servantRarity) & 0x80000000) != 0 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   servantId,
                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v11);
  }
  v13 = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0LL);
  return Entity && v13 && RarityRestrictedSkillUtil__IsDisabled(v13, (ServantEntity_o *)Entity, servantRarity, 0LL);
}


void __fastcall PartyOrganizationUtility__LoadQuestUseItemUseState(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v2; // x19
  struct System_Collections_Generic_List_int____o *questUseItemStateList; // x8
  int32_t size; // w2
  int v5; // w9
  Il2CppObject *Master_object; // x0
  PartyOrganizationUtility_c *v7; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  int normalFollowerInfo; // w8
  PartyOrganizationUtility_o *v10; // x21
  int v11; // w26
  int v12; // w27
  System_Collections_Generic_List_object__o *v13; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  unsigned int v20; // w8
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  FriendshipUpItemInfo_c *v25; // x0
  FriendshipUpItemInfo_c *v26; // x0
  int32_t Int_70827320; // w0
  System_Collections_Generic_List_object__o *v28; // x20
  int32_t v29; // w21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  unsigned int v36; // w8
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  FriendshipUpItemInfo_c *v41; // x0
  FriendshipUpItemInfo_c *v42; // x0
  int32_t v43; // w0
  System_Collections_Generic_List_object__o *v44; // x19
  int32_t v45; // w21
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  PartyOrganizationUtility_o *v52; // x20
  BalanceConfig_c *v53; // x8
  unsigned int v54; // w9
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t v60; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_4BD839D & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C21E38(&FriendshipUpItemInfo_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____Clear__);
    sub_1C21E38(&PartyOrganizationUtility_TypeInfo);
    sub_1C21E38(&StringLiteral_866/*","*/);
    this = (PartyOrganizationUtility_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD839D = 1;
  }
  *(_QWORD *)result = 0LL;
  v60 = 0;
  entity = 0LL;
  questUseItemStateList = v2->fields.questUseItemStateList;
  if ( !questUseItemStateList )
    goto LABEL_66;
  size = questUseItemStateList->fields._size;
  v5 = questUseItemStateList->fields._version + 1;
  questUseItemStateList->fields._size = 0;
  questUseItemStateList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)questUseItemStateList->fields._items, 0, size, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
  v7 = PartyOrganizationUtility_TypeInfo;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v7 = PartyOrganizationUtility_TypeInfo;
  }
  this = (PartyOrganizationUtility_o *)UnityEngine_PlayerPrefs__GetString(
                                         v7->static_fields->SAVE_KEY_QUEST_USE_ITEM,
                                         (System_String_o *)StringLiteral_1/*""*/,
                                         0LL);
  if ( !this )
    goto LABEL_66;
  this = (PartyOrganizationUtility_o *)System_String__Split_63140568(
                                         (System_String_o *)this,
                                         (System_String_o *)StringLiteral_866/*","*/,
                                         0,
                                         0LL);
  if ( !this )
    goto LABEL_66;
  normalFollowerInfo = (int)this->fields._normalFollowerInfo;
  v10 = this;
  if ( normalFollowerInfo >= 1 )
  {
    v11 = 2;
    while ( v11 - 2 < (unsigned int)normalFollowerInfo )
    {
      this = (PartyOrganizationUtility_o *)System_Int32__TryParse(
                                             *((System_String_o **)&v10->fields.restrictionDialogHistoryList + v11),
                                             &result[1],
                                             0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_36;
      if ( (unsigned int)(v11 - 1) >= LODWORD(v10->fields._normalFollowerInfo) )
        break;
      this = (PartyOrganizationUtility_o *)System_Int32__TryParse(
                                             *((System_String_o **)&v10->fields._normalFollowerInfo + v11),
                                             result,
                                             0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_36;
      v12 = v11;
      if ( (unsigned int)v11 >= LODWORD(v10->fields._normalFollowerInfo) )
        break;
      this = (PartyOrganizationUtility_o *)System_Int32__TryParse(
                                             *((System_String_o **)&v10->fields._SelectedNormalFollowerClassId_k__BackingField
                                             + v11),
                                             &v60,
                                             0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_36;
      if ( result[0] )
        goto LABEL_21;
      if ( !v8 )
        goto LABEL_66;
      this = (PartyOrganizationUtility_o *)DataMasterBase_object__object__int___TryGetEntity(
                                             v8,
                                             &entity,
                                             result[1],
                                             (const MethodInfo_325BE14 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (PartyOrganizationUtility_o *)entity;
        if ( !entity )
          goto LABEL_66;
        this = (PartyOrganizationUtility_o *)ItemEntity__IsEnable((ItemEntity_o *)entity, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_21:
          v13 = (System_Collections_Generic_List_object__o *)v2->fields.questUseItemStateList;
          this = (PartyOrganizationUtility_o *)sub_1C21EE0(int___TypeInfo, 3LL);
          if ( !this )
            goto LABEL_66;
          v20 = (unsigned int)this->fields._normalFollowerInfo;
          method = (const MethodInfo *)this;
          if ( !v20 )
            break;
          this->fields._SelectedNormalFollowerClassId_k__BackingField = result[1];
          if ( v20 == 1 )
            break;
          this->fields._SelectedNormalFollowerDeckId_k__BackingField = result[0];
          if ( v20 <= 2 )
            break;
          LODWORD(this->fields._npcFollowerInfos) = v60;
          if ( !v13 )
            goto LABEL_66;
          items = v13->fields._items;
          v22 = Method_System_Collections_Generic_List_int____Add__;
          ++v13->fields._version;
          if ( !items )
            goto LABEL_66;
          v23 = v13->fields._size;
          if ( (unsigned int)v23 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)this,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + v23;
            v13->fields._size = v23 + 1;
            v24[4] = (Il2CppClass *)method;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 4), (int64_t)method, v14, v15, v16, v17, v18, v19);
          }
        }
      }
      normalFollowerInfo = (int)v10->fields._normalFollowerInfo;
      v11 += 3;
      if ( v12 + 1 >= normalFollowerInfo )
        goto LABEL_36;
    }
LABEL_65:
    sub_1C2209C(this, method);
  }
LABEL_36:
  v25 = FriendshipUpItemInfo_TypeInfo;
  if ( !FriendshipUpItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemInfo_TypeInfo);
    v25 = FriendshipUpItemInfo_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v25->static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE, 0LL) )
  {
    v26 = FriendshipUpItemInfo_TypeInfo;
    if ( !FriendshipUpItemInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemInfo_TypeInfo);
      v26 = FriendshipUpItemInfo_TypeInfo;
    }
    Int_70827320 = UnityEngine_PlayerPrefs__GetInt_70827320(
                     v26->static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE,
                     0LL);
    v28 = (System_Collections_Generic_List_object__o *)v2->fields.questUseItemStateList;
    v29 = Int_70827320;
    this = (PartyOrganizationUtility_o *)sub_1C21EE0(int___TypeInfo, 3LL);
    if ( !this )
      goto LABEL_66;
    v36 = (unsigned int)this->fields._normalFollowerInfo;
    method = (const MethodInfo *)this;
    if ( !v36 )
      goto LABEL_65;
    this->fields._SelectedNormalFollowerClassId_k__BackingField = v29;
    if ( v36 <= 2 )
      goto LABEL_65;
    LODWORD(this->fields._npcFollowerInfos) = 1;
    if ( !v28 )
      goto LABEL_66;
    v37 = v28->fields._items;
    v38 = Method_System_Collections_Generic_List_int____Add__;
    ++v28->fields._version;
    if ( !v37 )
      goto LABEL_66;
    v39 = v28->fields._size;
    if ( (unsigned int)v39 >= v37->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v28,
        (Il2CppObject *)this,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = &v37->obj.klass + v39;
      v28->fields._size = v39 + 1;
      v40[4] = (Il2CppClass *)method;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v40 + 4), (int64_t)method, v30, v31, v32, v33, v34, v35);
    }
  }
  v41 = FriendshipUpItemInfo_TypeInfo;
  if ( !FriendshipUpItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemInfo_TypeInfo);
    v41 = FriendshipUpItemInfo_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v41->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0LL) )
  {
    v42 = FriendshipUpItemInfo_TypeInfo;
    if ( !FriendshipUpItemInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemInfo_TypeInfo);
      v42 = FriendshipUpItemInfo_TypeInfo;
    }
    v43 = UnityEngine_PlayerPrefs__GetInt_70827320(v42->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0LL);
    v44 = (System_Collections_Generic_List_object__o *)v2->fields.questUseItemStateList;
    v45 = v43;
    this = (PartyOrganizationUtility_o *)sub_1C21EE0(int___TypeInfo, 3LL);
    v52 = this;
    v53 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v53 = BalanceConfig_TypeInfo;
    }
    if ( v52 )
    {
      v54 = (unsigned int)v52->fields._normalFollowerInfo;
      if ( v54 <= 1 )
        goto LABEL_65;
      v52->fields._SelectedNormalFollowerDeckId_k__BackingField = v53->static_fields->DefaultQuestUseFriendshipUpItemGroupId;
      if ( v54 == 2 )
        goto LABEL_65;
      LODWORD(v52->fields._npcFollowerInfos) = v45;
      if ( v44 )
      {
        v55 = v44->fields._items;
        v56 = Method_System_Collections_Generic_List_int____Add__;
        ++v44->fields._version;
        if ( v55 )
        {
          v57 = v44->fields._size;
          if ( (unsigned int)v57 >= v55->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v44,
              (Il2CppObject *)v52,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
          }
          else
          {
            v58 = &v55->obj.klass + v57;
            v44->fields._size = v57 + 1;
            v58[4] = (Il2CppClass *)v52;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)v52, v46, v47, v48, v49, v50, v51);
          }
          return;
        }
      }
    }
LABEL_66:
    sub_1C22094(this, method);
  }
}


bool __fastcall PartyOrganizationUtility__OpenFriendshipUpItemExpiredDialog(
        PartyOrganizationUtility_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x22
  System_Collections_Generic_List_object__o *v6; // x24
  ChainableActionBase_o *v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  ChainableActionBase_o **v15; // x23
  System_Collections_Generic_IEnumerable_TSource__o *CachedFriendshipUpItemInfo; // x24
  PartyOrganizationUtility___c_c *v17; // x0
  System_Func_object__bool__o *_9__113_0; // x25
  Il2CppObject *v19; // x26
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  PartyOrganizationUtility___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x24
  System_Func_object__bool__o *_9__113_1; // x25
  Il2CppObject *v31; // x26
  struct PartyOrganizationUtility___c_StaticFields *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  PartyOrganizationUtility___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x24
  System_Func_object__int__o *_9__113_2; // x25
  Il2CppObject *v43; // x26
  struct PartyOrganizationUtility___c_StaticFields *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Collections_Generic_IEnumerable_T__o *v51; // x24
  System_Action_object__o *v52; // x25
  System_Object_array *v54; // x23
  ActionChain_o *v55; // x22
  __int64 v56; // x23
  System_Action_o *v57; // x24
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  const MethodInfo *v64; // x1
  struct FriendshipUpItemInfo_array *AvailableFriendshipUpItemInfo; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7

  if ( (byte_4BD839A & 1) == 0 )
  {
    sub_1C21E38(&ActionChain_TypeInfo);
    sub_1C21E38(&System_Action___TypeInfo);
    sub_1C21E38(&System_Action_FriendshipUpItemInfo__TypeInfo);
    sub_1C21E38(&Method_System_Action_Invoke__);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_FriendshipUpItemInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderBy_FriendshipUpItemInfo__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___);
    sub_1C21E38(&System_Func_FriendshipUpItemInfo__int__TypeInfo);
    sub_1C21E38(&System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Action_Action___ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Action_Action____ctor__);
    sub_1C21E38(&System_Collections_Generic_List_Action_Action___TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__OpenFriendshipUpItemExpiredDialog_b__113_0__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__OpenFriendshipUpItemExpiredDialog_b__113_1__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__OpenFriendshipUpItemExpiredDialog_b__113_2__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__DisplayClass113_0__OpenFriendshipUpItemExpiredDialog_b__3__);
    sub_1C21E38(&PartyOrganizationUtility___c__DisplayClass113_0_TypeInfo);
    sub_1C21E38(&PartyOrganizationUtility___c_TypeInfo);
    byte_4BD839A = 1;
  }
  v5 = sub_1C22084(PartyOrganizationUtility___c__DisplayClass113_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.CachedFriendshipUpItemInfo, 0LL) )
    return 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_Action_Action___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_Action_Action____ctor__);
  if ( !v5 )
    goto LABEL_31;
  *(_QWORD *)(v5 + 16) = v6;
  v15 = (ChainableActionBase_o **)(v5 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)v6, v9, v10, v11, v12, v13, v14);
  CachedFriendshipUpItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.CachedFriendshipUpItemInfo;
  v17 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v17 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__113_0 = (System_Func_object__bool__o *)v17->static_fields->__9__113_0;
  if ( !_9__113_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = PartyOrganizationUtility___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__113_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__113_0,
      v19,
      Method_PartyOrganizationUtility___c__OpenFriendshipUpItemExpiredDialog_b__113_0__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__113_0 = (struct System_Func_FriendshipUpItemInfo__bool__o *)_9__113_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__113_0,
      (int64_t)_9__113_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = System_Linq_Enumerable__Where_object_(
          CachedFriendshipUpItemInfo,
          (System_Func_TSource__bool__o *)_9__113_0,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___);
  v28 = PartyOrganizationUtility___c_TypeInfo;
  v29 = v27;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v28 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__113_1 = (System_Func_object__bool__o *)v28->static_fields->__9__113_1;
  if ( !_9__113_1 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = PartyOrganizationUtility___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__113_1 = (System_Func_object__bool__o *)sub_1C22084(System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__113_1,
      v31,
      Method_PartyOrganizationUtility___c__OpenFriendshipUpItemExpiredDialog_b__113_1__,
      0LL);
    v32 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v32->__9__113_1 = (struct System_Func_FriendshipUpItemInfo__bool__o *)_9__113_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v32->__9__113_1, (int64_t)_9__113_1, v33, v34, v35, v36, v37, v38);
  }
  v39 = System_Linq_Enumerable__Where_object_(
          v29,
          (System_Func_TSource__bool__o *)_9__113_1,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___);
  v40 = PartyOrganizationUtility___c_TypeInfo;
  v41 = v39;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v40 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__113_2 = (System_Func_object__int__o *)v40->static_fields->__9__113_2;
  if ( !_9__113_2 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = PartyOrganizationUtility___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__113_2 = (System_Func_object__int__o *)sub_1C22084(System_Func_FriendshipUpItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__113_2,
      v43,
      Method_PartyOrganizationUtility___c__OpenFriendshipUpItemExpiredDialog_b__113_2__,
      0LL);
    v44 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v44->__9__113_2 = (struct System_Func_FriendshipUpItemInfo__int__o *)_9__113_2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v44->__9__113_2, (int64_t)_9__113_2, v45, v46, v47, v48, v49, v50);
  }
  v51 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                         v41,
                                                         (System_Func_TSource__TKey__o *)_9__113_2,
                                                         (const MethodInfo_2FD8EDC *)Method_System_Linq_Enumerable_OrderBy_FriendshipUpItemInfo__int___);
  v52 = (System_Action_object__o *)sub_1C22084(System_Action_FriendshipUpItemInfo__TypeInfo);
  System_Action_object____ctor(
    v52,
    (Il2CppObject *)v5,
    Method_PartyOrganizationUtility___c__DisplayClass113_0__OpenFriendshipUpItemExpiredDialog_b__3__,
    0LL);
  BasicHelper__ForEach_object_(
    v51,
    (System_Action_T__o *)v52,
    (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_FriendshipUpItemInfo___);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v5 + 16), 0LL) )
    return 0;
  v7 = *v15;
  if ( !*v15 )
    goto LABEL_31;
  v54 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)v7,
          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
  v55 = (ActionChain_o *)sub_1C22084(ActionChain_TypeInfo);
  ActionChain___ctor_47730872(v55, (System_Action_Action__array *)v54, 0LL);
  v56 = sub_1C21EE0(System_Action___TypeInfo, 1LL);
  v57 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0LL);
  if ( !v56 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v56 + 24) )
    sub_1C2209C(v7, v8);
  *(_QWORD *)(v56 + 32) = v57;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v56 + 32), (int64_t)v57, v58, v59, v60, v61, v62, v63);
  if ( !v55 || (v7 = ChainableActionBase__Final((ChainableActionBase_o *)v55, (System_Action_array *)v56, 0LL)) == 0LL )
LABEL_31:
    sub_1C22094(v7, v8);
  ChainableActionBase__Execute(v7, 0LL);
  AvailableFriendshipUpItemInfo = PartyOrganizationUtility__GetAvailableFriendshipUpItemInfo(this, v64);
  this->fields.CachedFriendshipUpItemInfo = AvailableFriendshipUpItemInfo;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.CachedFriendshipUpItemInfo,
    (int64_t)AvailableFriendshipUpItemInfo,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  return 1;
}


void __fastcall PartyOrganizationUtility__OpenQuestUseItemDialogTutorial(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CachedFriendshipUpItemInfo; // x19
  System_Func_object__bool__o *_9__114_0; // x20
  Il2CppObject *v6; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  PartyOrganizationUtility___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_object__int__o *_9__114_1; // x20
  Il2CppObject *v18; // x21
  struct PartyOrganizationUtility___c_StaticFields *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_List_int__o *v27; // x19
  Il2CppObject *Master_object; // x0
  __int64 v29; // x1

  if ( (byte_4BD839B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_FriendshipUpItemInfo__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___);
    sub_1C21E38(&System_Func_FriendshipUpItemInfo__int__TypeInfo);
    sub_1C21E38(&System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__114_0__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__114_1__);
    sub_1C21E38(&PartyOrganizationUtility___c_TypeInfo);
    byte_4BD839B = 1;
  }
  v3 = PartyOrganizationUtility___c_TypeInfo;
  CachedFriendshipUpItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.CachedFriendshipUpItemInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v3 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__114_0 = (System_Func_object__bool__o *)v3->static_fields->__9__114_0;
  if ( !_9__114_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = PartyOrganizationUtility___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__114_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__114_0,
      v6,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__114_0__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__114_0 = (struct System_Func_FriendshipUpItemInfo__bool__o *)_9__114_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__114_0,
      (int64_t)_9__114_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          CachedFriendshipUpItemInfo,
          (System_Func_TSource__bool__o *)_9__114_0,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___);
  v15 = PartyOrganizationUtility___c_TypeInfo;
  v16 = v14;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v15 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__114_1 = (System_Func_object__int__o *)v15->static_fields->__9__114_1;
  if ( !_9__114_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = PartyOrganizationUtility___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__114_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_FriendshipUpItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__114_1,
      v18,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__114_1__,
      0LL);
    v19 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v19->__9__114_1 = (struct System_Func_FriendshipUpItemInfo__int__o *)_9__114_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v19->__9__114_1, (int64_t)_9__114_1, v20, v21, v22, v23, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v16,
                                                               (System_Func_TSource__TResult__o *)_9__114_1,
                                                               (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_FriendshipUpItemInfo__int___);
  v27 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                    v26,
                                                    (const MethodInfo_2FED35C *)Method_System_Linq_Enumerable_ToList_int___);
  if ( System_Linq_Enumerable__Any_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v27,
         (const MethodInfo_2FBAD74 *)Method_System_Linq_Enumerable_Any_int___) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_object )
      sub_1C22094(0LL, v29);
    EventTutorialMaster__checkTutorial_40554936(
      (EventTutorialMaster_o *)Master_object,
      v27,
      71,
      0LL,
      0,
      0,
      0,
      0,
      0,
      0LL);
  }
}


void __fastcall PartyOrganizationUtility__SaveQuestUseItemUseState(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestUseItems; // x20
  System_Action_object__o *v4; // x21
  PartyOrganizationUtility___c_c *v5; // x0
  struct System_Collections_Generic_List_int____o *questUseItemStateList; // x19
  System_Func_object__object__o *_9__117_1; // x20
  Il2CppObject *v8; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  PartyOrganizationUtility_c *v17; // x8
  System_Collections_Generic_IEnumerable_T__o *v18; // x19
  System_String_o *SAVE_KEY_QUEST_USE_ITEM; // x20
  System_String_o *v20; // x0
  FriendshipUpItemInfo_c *v21; // x0

  if ( (byte_4BD839E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_FriendshipUpItemInfo__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_FriendshipUpItemInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_SelectMany_int____int___);
    sub_1C21E38(&FriendshipUpItemInfo_TypeInfo);
    sub_1C21E38(&System_Func_int____IEnumerable_int___TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationUtility__SaveQuestUseItemUseState_b__117_0__);
    sub_1C21E38(&PartyOrganizationUtility_TypeInfo);
    sub_1C21E38(&Method_System_String_Join_int___);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__SaveQuestUseItemUseState_b__117_1__);
    sub_1C21E38(&PartyOrganizationUtility___c_TypeInfo);
    sub_1C21E38(&StringLiteral_866/*","*/);
    byte_4BD839E = 1;
  }
  AvailableQuestUseItems = (System_Collections_Generic_IEnumerable_T__o *)PartyOrganizationUtility__GetAvailableQuestUseItems(
                                                                            this,
                                                                            method);
  v4 = (System_Action_object__o *)sub_1C22084(System_Action_FriendshipUpItemInfo__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_PartyOrganizationUtility__SaveQuestUseItemUseState_b__117_0__,
    0LL);
  BasicHelper__ForEach_object_(
    AvailableQuestUseItems,
    (System_Action_T__o *)v4,
    (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_FriendshipUpItemInfo___);
  v5 = PartyOrganizationUtility___c_TypeInfo;
  questUseItemStateList = this->fields.questUseItemStateList;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v5 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__117_1 = (System_Func_object__object__o *)v5->static_fields->__9__117_1;
  if ( !_9__117_1 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = PartyOrganizationUtility___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__117_1 = (System_Func_object__object__o *)sub_1C22084(System_Func_int____IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__117_1,
      v8,
      Method_PartyOrganizationUtility___c__SaveQuestUseItemUseState_b__117_1__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__117_1 = (struct System_Func_int____IEnumerable_int___o *)_9__117_1;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__117_1,
      (int64_t)_9__117_1,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = System_Linq_Enumerable__SelectMany_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questUseItemStateList,
          (System_Func_TSource__IEnumerable_TResult___o *)_9__117_1,
          (const MethodInfo_2FE3ACC *)Method_System_Linq_Enumerable_SelectMany_int____int___);
  v17 = PartyOrganizationUtility_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_T__o *)v16;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v17 = PartyOrganizationUtility_TypeInfo;
  }
  SAVE_KEY_QUEST_USE_ITEM = v17->static_fields->SAVE_KEY_QUEST_USE_ITEM;
  v20 = System_String__Join_int_(
          (System_String_o *)StringLiteral_866/*","*/,
          v18,
          (const MethodInfo_3054074 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_QUEST_USE_ITEM, v20, 0LL);
  v21 = FriendshipUpItemInfo_TypeInfo;
  if ( !FriendshipUpItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemInfo_TypeInfo);
    v21 = FriendshipUpItemInfo_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v21->static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(
    FriendshipUpItemInfo_TypeInfo->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE,
    0LL);
}


void __fastcall PartyOrganizationUtility__SetFriendshipUpItemInfoCache(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  struct FriendshipUpItemInfo_array *AvailableFriendshipUpItemInfo; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  AvailableFriendshipUpItemInfo = PartyOrganizationUtility__GetAvailableFriendshipUpItemInfo(this, method);
  this->fields.CachedFriendshipUpItemInfo = AvailableFriendshipUpItemInfo;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.CachedFriendshipUpItemInfo,
    (int64_t)AvailableFriendshipUpItemInfo,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void __fastcall PartyOrganizationUtility__SetNormalFollowerInfo(
        PartyOrganizationUtility_o *this,
        FollowerInfo_o *followerInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._normalFollowerInfo = followerInfo;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._normalFollowerInfo,
    (int64_t)followerInfo,
    (int64_t)method,
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

  if ( (byte_4BD838E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
    byte_4BD838E = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_1C22094(0LL, *(_QWORD *)&key);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
    key,
    (Il2CppObject *)followerInfo,
    (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
}


void __fastcall PartyOrganizationUtility__SetQuestCache(
        PartyOrganizationUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t warId,
        const MethodInfo *method)
{
  this->fields._CachedQuestId_k__BackingField = questId;
  this->fields._CachedQuestPhase_k__BackingField = questPhase;
  this->fields._CachedWarId_k__BackingField = warId;
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
  PartyOrganizationUtility_o *p_temporaryPartyInfo; // x20
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *temporaryPartyInfo; // t1
  Il2CppObject *v23; // x29
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  PartyOrganizationUtility_o *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  PartyOrganizationUtility_c *v56; // x20
  Il2CppObject *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  Il2CppObject *v64; // x19
  __int64 v65; // x0
  PartyOrganizationUtility_o *p_parent; // x20
  __int64 v67; // x0
  int64_t v68; // x1
  PartyOrganizationUtility_TemporaryPartyInfo_o *v69; // x0
  const MethodInfo *v70; // x1

  if ( (byte_4BD8387 & 1) == 0 )
  {
    sub_1C21E38(&PartyListViewItem___TypeInfo);
    sub_1C21E38(&PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo);
    byte_4BD8387 = 1;
  }
  temporaryPartyInfo = this->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (PartyOrganizationUtility_o *)&this->fields.temporaryPartyInfo;
  klass = (char *)temporaryPartyInfo;
  if ( !temporaryPartyInfo )
  {
    v23 = (Il2CppObject *)sub_1C22084(PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo);
    System_Object___ctor(v23, 0LL);
    p_temporaryPartyInfo->klass = (PartyOrganizationUtility_c *)v23;
    sub_1C21DDC(p_temporaryPartyInfo, (int64_t)v23, v24, v25, v26, v27, v28, v29);
    klass = (char *)p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_18;
  }
  *((_QWORD *)klass + 5) = bgmName;
  v31 = (PartyOrganizationUtility_o *)(klass + 40);
  v31[-1].fields.temporaryPartyInfo = (struct PartyOrganizationUtility_TemporaryPartyInfo_o *)userServantId;
  v31[-1].fields._TransitionDestinationFromDetail_k__BackingField = (struct System_String_o *)userEquipId;
  *(_DWORD *)&v31[-1].fields._IsQuestStartMenuMode_k__BackingField = deckNumber;
  sub_1C21DDC(v31, (int64_t)bgmName, userEquipId, deckNumber, bgmName, battleSetupInfo, followerInfo, basePartyItem);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 6) = battleSetupInfo;
  sub_1C21DDC((PartyOrganizationUtility_o *)(klass + 48), (int64_t)battleSetupInfo, v32, v33, v34, v35, v36, v37);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 7) = followerInfo;
  sub_1C21DDC((PartyOrganizationUtility_o *)(klass + 56), (int64_t)followerInfo, v38, v39, v40, v41, v42, v43);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass
    || (*((_QWORD *)klass + 8) = basePartyItem,
        sub_1C21DDC((PartyOrganizationUtility_o *)(klass + 64), (int64_t)basePartyItem, v44, v45, v46, v47, v48, v49),
        (klass = (char *)p_temporaryPartyInfo->klass) == 0LL)
    || (*((_QWORD *)klass + 9) = partyItem,
        sub_1C21DDC((PartyOrganizationUtility_o *)(klass + 72), (int64_t)partyItem, v50, v51, v52, v53, v54, v55),
        (v56 = p_temporaryPartyInfo->klass) == 0LL) )
  {
LABEL_18:
    sub_1C22094(klass, v30);
  }
  LODWORD(v56->_1.declaringType) = selectPartyMemberNum;
  if ( baseDeckItemList )
  {
    v57 = System_Array__Clone((System_Array_o *)baseDeckItemList, 0LL);
    if ( !v57 )
    {
      v68 = 0LL;
      v56->_1.parent = 0LL;
      p_parent = (PartyOrganizationUtility_o *)&v56->_1.parent;
      goto LABEL_17;
    }
    v64 = v57;
    v65 = sub_1C21F74(v57, PartyListViewItem___TypeInfo);
    if ( v65 )
    {
      v56->_1.parent = (Il2CppClass *)v65;
      p_parent = (PartyOrganizationUtility_o *)&v56->_1.parent;
      v67 = sub_1C21F74(v64, PartyListViewItem___TypeInfo);
      if ( v67 )
      {
        v68 = v67;
LABEL_17:
        sub_1C21DDC(p_parent, v68, v58, v59, v60, v61, v62, v63);
        return;
      }
    }
    v69 = (PartyOrganizationUtility_TemporaryPartyInfo_o *)sub_1C22354(v64);
    PartyOrganizationUtility_TemporaryPartyInfo___ctor(v69, v70);
  }
}


void __fastcall PartyOrganizationUtility__UpdateInterruptionUseItem(
        PartyOrganizationUtility_o *this,
        System_Collections_Generic_List_FriendshipUpItemInfo__o *list,
        int32_t campaignType,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v8; // x22
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  __int64 v11; // x23
  System_Func_object__bool__o *v12; // x20
  Il2CppObject *v13; // x0
  FriendshipUpItemInfo_o *v14; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *QuestUseItemEventCampaignsByItemId; // x0
  Il2CppObject *v16; // x21
  int32_t v17; // w21
  ItemEntity_o *v18; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int32_t v25; // w21
  ItemEntity_o *v26; // x22
  struct FriendshipUpItemInfo_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  int64_t outStartedAt; // [xsp+8h] [xbp-48h] BYREF
  int64_t outEndedAt; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BD8394 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_FriendshipUpItemInfo___);
    sub_1C21E38(&FriendshipUpItemInfo_TypeInfo);
    sub_1C21E38(&System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_FriendshipUpItemInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FriendshipUpItemInfo__Remove__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__DisplayClass107_0__UpdateInterruptionUseItem_b__0__);
    sub_1C21E38(&PartyOrganizationUtility___c__DisplayClass107_0_TypeInfo);
    byte_4BD8394 = 1;
  }
  outEndedAt = 0LL;
  outStartedAt = 0LL;
  v8 = sub_1C22084(PartyOrganizationUtility___c__DisplayClass107_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_30;
  *(_DWORD *)(v8 + 16) = campaignType;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_30;
  v11 = v8 + 24;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          (Il2CppObject **)(v8 + 24),
          itemId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return;
  v12 = (System_Func_object__bool__o *)sub_1C22084(System_Func_FriendshipUpItemInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_PartyOrganizationUtility___c__DisplayClass107_0__UpdateInterruptionUseItem_b__0__,
    0LL);
  v13 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_FriendshipUpItemInfo___);
  if ( !v13 )
  {
    v17 = *(_DWORD *)(v8 + 16);
    v18 = *(ItemEntity_o **)(v8 + 24);
    v14 = (FriendshipUpItemInfo_o *)sub_1C22084(FriendshipUpItemInfo_TypeInfo);
    FriendshipUpItemInfo___ctor_32817556(v14, v17, v18, 0LL);
    if ( !list )
      goto LABEL_30;
    goto LABEL_23;
  }
  v14 = (FriendshipUpItemInfo_o *)v13;
  if ( LODWORD(v13[1].klass) != itemId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    if ( !Master_object )
      goto LABEL_30;
    QuestUseItemEventCampaignsByItemId = EventCampaignMaster__GetQuestUseItemEventCampaignsByItemId(
                                           (EventCampaignMaster_o *)Master_object,
                                           *(_DWORD *)(v8 + 16),
                                           itemId,
                                           0LL);
    Master_object = System_Linq_Enumerable__FirstOrDefault_object_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)QuestUseItemEventCampaignsByItemId,
                      (const MethodInfo_2FD26B0 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___);
    if ( Master_object )
    {
      v16 = Master_object;
      Master_object = *(Il2CppObject **)v11;
      if ( !*(_QWORD *)v11 )
        goto LABEL_30;
      Master_object = (Il2CppObject *)ItemEntity__IsEnable_40648244(
                                        (ItemEntity_o *)Master_object,
                                        (int32_t)v16[1].klass,
                                        0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = *(Il2CppObject **)v11;
        if ( *(_QWORD *)v11 )
        {
          ItemEntity__GetUseLimitAt(
            (ItemEntity_o *)Master_object,
            (int32_t)v16[1].klass,
            &outStartedAt,
            &outEndedAt,
            0LL);
          if ( *(_QWORD *)v11 )
          {
            v14->fields._Id_k__BackingField = *(_DWORD *)(*(_QWORD *)v11 + 16LL);
            v14->fields._EndedAt_k__BackingField = outEndedAt;
            goto LABEL_28;
          }
        }
LABEL_30:
        sub_1C22094(Master_object, v10);
      }
    }
    if ( !list )
      goto LABEL_30;
    System_Collections_Generic_List_object___Remove(
      (System_Collections_Generic_List_object__o *)list,
      (Il2CppObject *)v14,
      (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_FriendshipUpItemInfo__Remove__);
    v25 = *(_DWORD *)(v8 + 16);
    v26 = *(ItemEntity_o **)(v8 + 24);
    v14 = (FriendshipUpItemInfo_o *)sub_1C22084(FriendshipUpItemInfo_TypeInfo);
    FriendshipUpItemInfo___ctor_32817556(v14, v25, v26, 0LL);
LABEL_23:
    items = list->fields._items;
    v28 = Method_System_Collections_Generic_List_FriendshipUpItemInfo__Add__;
    ++list->fields._version;
    if ( items )
    {
      size = list->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)list,
          (Il2CppObject *)v14,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        list->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v14;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v14, v19, v20, v21, v22, v23, v24);
      }
      if ( v14 )
        goto LABEL_28;
    }
    goto LABEL_30;
  }
LABEL_28:
  v14->fields._InterruptionUseFlag_k__BackingField = 1;
}


void __fastcall PartyOrganizationUtility___SaveQuestUseItemUseState_b__117_0(
        PartyOrganizationUtility_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x22
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  FriendshipUpItemInfo_o **v14; // x20
  int v15; // w25
  bool IsGroupItem; // w0
  struct System_Collections_Generic_List_int____o *questUseItemStateList; // x21
  bool v18; // w24
  System_Func_object__bool__o *v19; // x0
  System_Func_TSource__bool__o *v20; // x23
  __int64 *v21; // x8
  System_Collections_Generic_List_object__o *v22; // x19
  int64_t v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int32_t Id_k__BackingField; // w9
  unsigned int v31; // w8
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_4BD83A1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_int_____);
    sub_1C21E38(&System_Func_int____bool__TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__DisplayClass117_0__SaveQuestUseItemUseState_b__2__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__DisplayClass117_0__SaveQuestUseItemUseState_b__3__);
    sub_1C21E38(&PartyOrganizationUtility___c__DisplayClass117_0_TypeInfo);
    byte_4BD83A1 = 1;
  }
  v5 = sub_1C22084(PartyOrganizationUtility___c__DisplayClass117_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 16) = info;
  v14 = (FriendshipUpItemInfo_o **)(v5 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)info, v8, v9, v10, v11, v12, v13);
  v6 = *(Il2CppObject **)(v5 + 16);
  if ( !v6 )
    goto LABEL_26;
  v15 = BYTE4(v6[5].monitor);
  IsGroupItem = FriendshipUpItemInfo__get_IsGroupItem((FriendshipUpItemInfo_o *)v6, 0LL);
  questUseItemStateList = this->fields.questUseItemStateList;
  v18 = IsGroupItem;
  v19 = (System_Func_object__bool__o *)sub_1C22084(System_Func_int____bool__TypeInfo);
  v20 = (System_Func_TSource__bool__o *)v19;
  if ( v18 )
    v21 = &Method_PartyOrganizationUtility___c__DisplayClass117_0__SaveQuestUseItemUseState_b__2__;
  else
    v21 = &Method_PartyOrganizationUtility___c__DisplayClass117_0__SaveQuestUseItemUseState_b__3__;
  System_Func_object__bool____ctor(v19, (Il2CppObject *)v5, *v21, 0LL);
  v6 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
         (System_Collections_Generic_IEnumerable_TSource__o *)questUseItemStateList,
         v20,
         (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_int_____);
  if ( v6 )
  {
    if ( LODWORD(v6[1].monitor) > 2 )
    {
      LODWORD(v6[2].monitor) = v15;
      return;
    }
LABEL_27:
    sub_1C2209C(v6, v7);
  }
  v22 = (System_Collections_Generic_List_object__o *)this->fields.questUseItemStateList;
  v6 = (Il2CppObject *)sub_1C21EE0(int___TypeInfo, 3LL);
  if ( !*v14 )
    goto LABEL_26;
  v23 = (int64_t)v6;
  v6 = (Il2CppObject *)FriendshipUpItemInfo__get_IsGroupItem(*v14, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    Id_k__BackingField = 0;
  }
  else
  {
    if ( !*v14 )
      goto LABEL_26;
    Id_k__BackingField = (*v14)->fields._Id_k__BackingField;
  }
  if ( !v23 )
    goto LABEL_26;
  v31 = *(_DWORD *)(v23 + 24);
  if ( !v31 )
    goto LABEL_27;
  *(_DWORD *)(v23 + 32) = Id_k__BackingField;
  if ( !*v14 )
    goto LABEL_26;
  if ( v31 <= 1 )
    goto LABEL_27;
  *(_DWORD *)(v23 + 36) = (*v14)->fields._GroupId_k__BackingField;
  if ( v31 == 2 )
    goto LABEL_27;
  *(_DWORD *)(v23 + 40) = v15;
  if ( !v22
    || (items = v22->fields._items,
        v33 = Method_System_Collections_Generic_List_int____Add__,
        ++v22->fields._version,
        !items) )
  {
LABEL_26:
    sub_1C22094(v6, v7);
  }
  size = v22->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)v23,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &items->obj.klass + size;
    v22->fields._size = size + 1;
    v35[4] = (Il2CppClass *)v23;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v35 + 4), v23, v24, v25, v26, v27, v28, v29);
  }
}


PartyListViewItem_o *__fastcall PartyOrganizationUtility__get_BasePartyItem(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._BasePartyItem_k__BackingField;
}


int32_t __fastcall PartyOrganizationUtility__get_CachedQuestId(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._CachedQuestId_k__BackingField;
}


int32_t __fastcall PartyOrganizationUtility__get_CachedQuestPhase(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._CachedQuestPhase_k__BackingField;
}


int32_t __fastcall PartyOrganizationUtility__get_CachedWarId(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._CachedWarId_k__BackingField;
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
  this->fields._BasePartyItem_k__BackingField = value;
  sub_1C21DDC(&this->fields._BasePartyItem_k__BackingField, value);
}


void __fastcall PartyOrganizationUtility__set_CachedQuestId(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CachedQuestId_k__BackingField = value;
}


void __fastcall PartyOrganizationUtility__set_CachedQuestPhase(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CachedQuestPhase_k__BackingField = value;
}


void __fastcall PartyOrganizationUtility__set_CachedWarId(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CachedWarId_k__BackingField = value;
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
  this->fields._PartyItem_k__BackingField = value;
  sub_1C21DDC(&this->fields._PartyItem_k__BackingField, value);
}


void __fastcall PartyOrganizationUtility__set_PartyItemSmc(
        PartyOrganizationUtility_o *this,
        PartyListViewItem_o *value,
        const MethodInfo *method)
{
  this->fields._PartyItemSmc_k__BackingField = value;
  sub_1C21DDC(&this->fields._PartyItemSmc_k__BackingField, value);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._TransitionDestinationFromDetail_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._TransitionDestinationFromDetail_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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


void __fastcall PartyOrganizationUtility___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD83A2 & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationUtility___c_TypeInfo);
    byte_4BD83A2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(PartyOrganizationUtility___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  PartyOrganizationUtility___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationUtility___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)PartyOrganizationUtility___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PartyOrganizationUtility___c___ctor(PartyOrganizationUtility___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall PartyOrganizationUtility___c___GetAvailableFriendshipUpItemInfo_b__106_0(
        PartyOrganizationUtility___c_o *this,
        EventCampaignEntity_o *eventCampaignEntity,
        const MethodInfo *method)
{
  if ( !eventCampaignEntity )
    sub_1C22094(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)eventCampaignEntity->fields.targetIds;
}


bool __fastcall PartyOrganizationUtility___c___GetAvailableFriendshipUpItemInfo_b__106_3(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C22094(this, 0LL);
  return !info->fields._IsFriendshipUpEventItem_k__BackingField || FriendshipUpItemInfo__IsObtained(info, 0LL);
}


int32_t __fastcall PartyOrganizationUtility___c___GetAvailableFriendshipUpItemInfo_b__106_4(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C22094(this, 0LL);
  return info->fields._GroupId_k__BackingField;
}


System_Collections_Generic_IEnumerable_FriendshipUpItemInfo__o *__fastcall PartyOrganizationUtility___c___GetAvailableFriendshipUpItemInfo_b__106_5(
        PartyOrganizationUtility___c_o *this,
        System_Linq_IGrouping_int__FriendshipUpItemInfo__o *itemInfoGroup,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__FriendshipUpItemInfo__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  PartyOrganizationUtility___c_c *v8; // x0
  System_Func_T__TResult__o *_9__106_8; // x20
  Il2CppObject *v10; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v18; // x0
  PartyOrganizationUtility___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_T1__T2__TResult__o *_9__106_9; // x20
  Il2CppObject *v22; // x21
  struct PartyOrganizationUtility___c_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  Il2CppObject *v30; // x20
  System_Collections_Generic_List_object__o *v31; // x19
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0

  if ( (byte_4BD83A3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Aggregate_FriendshipUpItemInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_AsEnumerable_FriendshipUpItemInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderBy_FriendshipUpItemInfo__long___);
    sub_1C21E38(&System_Func_FriendshipUpItemInfo__long__TypeInfo);
    sub_1C21E38(&System_Func_FriendshipUpItemInfo__FriendshipUpItemInfo__FriendshipUpItemInfo__TypeInfo);
    sub_1C21E38(&System_Linq_IGrouping_int__FriendshipUpItemInfo__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_FriendshipUpItemInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FriendshipUpItemInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_FriendshipUpItemInfo__TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_8__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_9__);
    this = (PartyOrganizationUtility___c_o *)sub_1C21E38(&PartyOrganizationUtility___c_TypeInfo);
    byte_4BD83A3 = 1;
  }
  if ( !itemInfoGroup )
    goto LABEL_30;
  klass = itemInfoGroup->klass;
  v5 = *(unsigned __int16 *)(&itemInfoGroup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&itemInfoGroup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__FriendshipUpItemInfo__c **)p_offset - 1) != System_Linq_IGrouping_int__FriendshipUpItemInfo__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C73E18(itemInfoGroup, System_Linq_IGrouping_int__FriendshipUpItemInfo__TypeInfo, 0LL);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__FriendshipUpItemInfo__o *, _QWORD))p_method)(
          itemInfoGroup,
          *(_QWORD *)(p_method + 8)) )
    return (System_Collections_Generic_IEnumerable_FriendshipUpItemInfo__o *)System_Linq_Enumerable__AsEnumerable_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemInfoGroup,
                                                                               (const MethodInfo_2FBDCDC *)Method_System_Linq_Enumerable_AsEnumerable_FriendshipUpItemInfo___);
  v8 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v8 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_8 = (System_Func_T__TResult__o *)v8->static_fields->__9__106_8;
  if ( !_9__106_8 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = PartyOrganizationUtility___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__106_8 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_FriendshipUpItemInfo__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__106_8,
      v10,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_8__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__106_8 = (struct System_Func_FriendshipUpItemInfo__long__o *)_9__106_8;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__106_8,
      (int64_t)_9__106_8,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = System_Linq_Enumerable__OrderBy_object__long_(
          (System_Collections_Generic_IEnumerable_TSource__o *)itemInfoGroup,
          (System_Func_TSource__TKey__o *)_9__106_8,
          (const MethodInfo_2FD8F48 *)Method_System_Linq_Enumerable_OrderBy_FriendshipUpItemInfo__long___);
  v19 = PartyOrganizationUtility___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v19 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_9 = (System_Func_T1__T2__TResult__o *)v19->static_fields->__9__106_9;
  if ( !_9__106_9 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = PartyOrganizationUtility___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__106_9 = (System_Func_T1__T2__TResult__o *)sub_1C22084(System_Func_FriendshipUpItemInfo__FriendshipUpItemInfo__FriendshipUpItemInfo__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__106_9,
      v22,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_9__,
      0LL);
    v23 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v23->__9__106_9 = (struct System_Func_FriendshipUpItemInfo__FriendshipUpItemInfo__FriendshipUpItemInfo__o *)_9__106_9;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v23->__9__106_9, (int64_t)_9__106_9, v24, v25, v26, v27, v28, v29);
  }
  v30 = System_Linq_Enumerable__Aggregate_object_(
          v20,
          (System_Func_TSource__TSource__TSource__o *)_9__106_9,
          (const MethodInfo_2FB7634 *)Method_System_Linq_Enumerable_Aggregate_FriendshipUpItemInfo___);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_FriendshipUpItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_FriendshipUpItemInfo___ctor__);
  if ( !v31
    || (items = v31->fields._items,
        v39 = Method_System_Collections_Generic_List_FriendshipUpItemInfo__Add__,
        ++v31->fields._version,
        !items) )
  {
LABEL_30:
    sub_1C22094(this, itemInfoGroup);
  }
  size = v31->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v31,
      v30,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &items->obj.klass + size;
    v31->fields._size = size + 1;
    v41[4] = (Il2CppClass *)v30;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)v30, v32, v33, v34, v35, v36, v37);
  }
  return (System_Collections_Generic_IEnumerable_FriendshipUpItemInfo__o *)v31;
}


int32_t __fastcall PartyOrganizationUtility___c___GetAvailableFriendshipUpItemInfo_b__106_7(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C22094(this, 0LL);
  return info->fields._Priority_k__BackingField;
}


int64_t __fastcall PartyOrganizationUtility___c___GetAvailableFriendshipUpItemInfo_b__106_8(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *itemEntity,
        const MethodInfo *method)
{
  if ( !itemEntity )
    sub_1C22094(this, 0LL);
  return itemEntity->fields._EndedAt_k__BackingField;
}


FriendshipUpItemInfo_o *__fastcall PartyOrganizationUtility___c___GetAvailableFriendshipUpItemInfo_b__106_9(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *result,
        FriendshipUpItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  int32_t Num_k__BackingField; // w8
  FriendshipUpItemInfo_o *v5; // x0

  if ( !result )
LABEL_9:
    sub_1C22094(this, result);
  Num_k__BackingField = result->fields._Num_k__BackingField;
  if ( Num_k__BackingField <= 0 )
  {
    if ( !itemInfo )
      goto LABEL_9;
    if ( itemInfo->fields._Num_k__BackingField >= 1 )
    {
      result->fields._Id_k__BackingField = itemInfo->fields._Id_k__BackingField;
      result->fields._EndedAt_k__BackingField = itemInfo->fields._EndedAt_k__BackingField;
    }
  }
  else if ( !itemInfo )
  {
    goto LABEL_9;
  }
  v5 = result;
  result->fields._Num_k__BackingField = itemInfo->fields._Num_k__BackingField + Num_k__BackingField;
  return v5;
}


bool __fastcall PartyOrganizationUtility___c___GetAvailableQuestUseItems_b__110_0(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C22094(this, 0LL);
  return info->fields._IsValid_k__BackingField;
}


int32_t __fastcall PartyOrganizationUtility___c___GetQuestUseItemIds_b__115_1(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C22094(this, 0LL);
  return info->fields._NotDuplicationGroupId_k__BackingField;
}


System_Collections_Generic_IEnumerable_FriendshipUpItemInfo__o *__fastcall PartyOrganizationUtility___c___GetQuestUseItemIds_b__115_2(
        PartyOrganizationUtility___c_o *this,
        System_Linq_IGrouping_int__FriendshipUpItemInfo__o *group,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__FriendshipUpItemInfo__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  PartyOrganizationUtility___c_c *v8; // x0
  System_Func_object__int__o *_9__115_4; // x20
  Il2CppObject *v10; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v18; // x0
  PartyOrganizationUtility___c_c *v19; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x19
  System_Func_T__TResult__o *_9__115_5; // x20
  Il2CppObject *v22; // x21
  struct PartyOrganizationUtility___c_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0

  if ( (byte_4BD83A4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_AsEnumerable_FriendshipUpItemInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_FriendshipUpItemInfo__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Take_FriendshipUpItemInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ThenBy_FriendshipUpItemInfo__long___);
    sub_1C21E38(&System_Func_FriendshipUpItemInfo__long__TypeInfo);
    sub_1C21E38(&System_Func_FriendshipUpItemInfo__int__TypeInfo);
    sub_1C21E38(&System_Linq_IGrouping_int__FriendshipUpItemInfo__TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_4__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_5__);
    this = (PartyOrganizationUtility___c_o *)sub_1C21E38(&PartyOrganizationUtility___c_TypeInfo);
    byte_4BD83A4 = 1;
  }
  if ( !group )
    sub_1C22094(this, group);
  klass = group->klass;
  v5 = *(unsigned __int16 *)(&group->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&group->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__FriendshipUpItemInfo__c **)p_offset - 1) != System_Linq_IGrouping_int__FriendshipUpItemInfo__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C73E18(group, System_Linq_IGrouping_int__FriendshipUpItemInfo__TypeInfo, 0LL);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__FriendshipUpItemInfo__o *, _QWORD))p_method)(
          group,
          *(_QWORD *)(p_method + 8)) )
    return (System_Collections_Generic_IEnumerable_FriendshipUpItemInfo__o *)System_Linq_Enumerable__AsEnumerable_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)group,
                                                                               (const MethodInfo_2FBDCDC *)Method_System_Linq_Enumerable_AsEnumerable_FriendshipUpItemInfo___);
  v8 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v8 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__115_4 = (System_Func_object__int__o *)v8->static_fields->__9__115_4;
  if ( !_9__115_4 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = PartyOrganizationUtility___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__115_4 = (System_Func_object__int__o *)sub_1C22084(System_Func_FriendshipUpItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__115_4,
      v10,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_4__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__115_4 = (struct System_Func_FriendshipUpItemInfo__int__o *)_9__115_4;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__115_4,
      (int64_t)_9__115_4,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)group,
          (System_Func_TSource__TKey__o *)_9__115_4,
          (const MethodInfo_2FD940C *)Method_System_Linq_Enumerable_OrderByDescending_FriendshipUpItemInfo__int___);
  v19 = PartyOrganizationUtility___c_TypeInfo;
  v20 = v18;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v19 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__115_5 = (System_Func_T__TResult__o *)v19->static_fields->__9__115_5;
  if ( !_9__115_5 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = PartyOrganizationUtility___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__115_5 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_FriendshipUpItemInfo__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__115_5,
      v22,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_5__,
      0LL);
    v23 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v23->__9__115_5 = (struct System_Func_FriendshipUpItemInfo__long__o *)_9__115_5;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v23->__9__115_5, (int64_t)_9__115_5, v24, v25, v26, v27, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__long_(
                                                               v20,
                                                               (System_Func_TSource__TKey__o *)_9__115_5,
                                                               (const MethodInfo_2FE8D44 *)Method_System_Linq_Enumerable_ThenBy_FriendshipUpItemInfo__long___);
  return (System_Collections_Generic_IEnumerable_FriendshipUpItemInfo__o *)System_Linq_Enumerable__Take_object_(
                                                                             v30,
                                                                             1,
                                                                             (const MethodInfo_2FE8598 *)Method_System_Linq_Enumerable_Take_FriendshipUpItemInfo___);
}


int32_t __fastcall PartyOrganizationUtility___c___GetQuestUseItemIds_b__115_3(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C22094(this, 0LL);
  return info->fields._Id_k__BackingField;
}


int32_t __fastcall PartyOrganizationUtility___c___GetQuestUseItemIds_b__115_4(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C22094(this, 0LL);
  return info->fields._Value_k__BackingField;
}


int64_t __fastcall PartyOrganizationUtility___c___GetQuestUseItemIds_b__115_5(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C22094(this, 0LL);
  return info->fields._EndedAt_k__BackingField;
}


bool __fastcall PartyOrganizationUtility___c___IsAvailableFriendshipUpItem_b__108_0(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C22094(this, 0LL);
  return info->fields._IsValid_k__BackingField;
}


bool __fastcall PartyOrganizationUtility___c___OpenFriendshipUpItemExpiredDialog_b__113_0(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1C22094(this, 0LL);
  return itemInfo->fields._IsValid_k__BackingField;
}


bool __fastcall PartyOrganizationUtility___c___OpenFriendshipUpItemExpiredDialog_b__113_1(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1C22094(this, 0LL);
  return FriendshipUpItemInfo__GetUseFlag(itemInfo, 0LL) && !FriendshipUpItemInfo__IsEventPeriod(itemInfo, 0LL);
}


int32_t __fastcall PartyOrganizationUtility___c___OpenFriendshipUpItemExpiredDialog_b__113_2(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1C22094(this, 0LL);
  return itemInfo->fields._BasePriority_k__BackingField;
}


bool __fastcall PartyOrganizationUtility___c___OpenQuestUseItemDialogTutorial_b__114_0(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1C22094(this, 0LL);
  return itemInfo->fields._IsValid_k__BackingField;
}


int32_t __fastcall PartyOrganizationUtility___c___OpenQuestUseItemDialogTutorial_b__114_1(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C22094(this, 0LL);
  return info->fields._TutorialEventId_k__BackingField;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall PartyOrganizationUtility___c___SaveQuestUseItemUseState_b__117_1(
        PartyOrganizationUtility___c_o *this,
        System_Int32_array *i,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IEnumerable_int__o *)i;
}


void __fastcall PartyOrganizationUtility___c__DisplayClass105_0___ctor(
        PartyOrganizationUtility___c__DisplayClass105_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass105_0___GetAvailableEventCampaignEntities_b__2(
        PartyOrganizationUtility___c__DisplayClass105_0_o *this,
        EventCampaignEntity_o *e,
        const MethodInfo *method)
{
  if ( !e || (this = (PartyOrganizationUtility___c__DisplayClass105_0_o *)this->fields.releaseMaster) == 0LL )
    sub_1C22094(this, e);
  return EventCampaignReleaseMaster__isRelease(
           (EventCampaignReleaseMaster_o *)this,
           e->fields.eventId,
           e->fields.target,
           0LL);
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass105_0___GetAvailableEventCampaignEntities_b__3(
        PartyOrganizationUtility___c__DisplayClass105_0_o *this,
        EventCampaignEntity_o *eventCampaignEntity,
        const MethodInfo *method)
{
  if ( !eventCampaignEntity )
    sub_1C22094(this, 0LL);
  return !PartyOrganizationUtility___c__DisplayClass105_0___GetAvailableEventCampaignEntities_g__IsExceptedByEventQuestMaster_0(
            this,
            eventCampaignEntity->fields.eventId,
            method);
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass105_0___GetAvailableEventCampaignEntities_b__4(
        PartyOrganizationUtility___c__DisplayClass105_0_o *this,
        EventCampaignEntity_o *eventCampaignEntity,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c__DisplayClass105_0_o *v4; // x19
  System_Int32_array *warGroupIds; // x21
  System_Func_int__bool__o *v7; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  System_Func_int__bool__o *_9__6; // x22
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v4 = this;
  if ( (byte_4BD83A6 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_int____77629760);
    sub_1C21E38(&Method_System_Linq_Enumerable_All_int___);
    sub_1C21E38(&System_Func_int__bool__TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__6__);
    this = (PartyOrganizationUtility___c__DisplayClass105_0_o *)sub_1C21E38(&Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_g__IsMatchWarId_1__);
    byte_4BD83A6 = 1;
  }
  if ( !eventCampaignEntity )
    sub_1C22094(this, eventCampaignEntity);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventCampaignEntity->fields.warGroupIds, 0LL) )
    return 1;
  warGroupIds = eventCampaignEntity->fields.warGroupIds;
  v7 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v7,
    (Il2CppObject *)v4,
    Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_g__IsMatchWarId_1__,
    0LL);
  if ( !BasicHelper__Any_int__49916656(
          warGroupIds,
          (System_Func_T__bool__o *)v7,
          (const MethodInfo_2F9AAF0 *)Method_BasicHelper_Any_int____77629760) )
    return 0;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)eventCampaignEntity->fields.warGroupIds;
  _9__6 = v4->fields.__9__6;
  if ( !_9__6 )
  {
    _9__6 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__6,
      (Il2CppObject *)v4,
      Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__6__,
      0LL);
    v4->fields.__9__6 = _9__6;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.__9__6, (int64_t)_9__6, v10, v11, v12, v13, v14, v15);
  }
  return System_Linq_Enumerable__All_int_(
           v8,
           (System_Func_TSource__bool__o *)_9__6,
           (const MethodInfo_2FB981C *)Method_System_Linq_Enumerable_All_int___);
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass105_0___GetAvailableEventCampaignEntities_b__5(
        PartyOrganizationUtility___c__DisplayClass105_0_o *this,
        WarGroupEntity_o *warGroupEntity,
        const MethodInfo *method)
{
  struct PartyOrganizationUtility_o *_4__this; // x8
  struct QuestEntity_o *questEntity; // x8

  if ( !warGroupEntity )
    goto LABEL_8;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  if ( warGroupEntity->fields.warId != _4__this->fields._CachedWarId_k__BackingField )
    return 0;
  questEntity = this->fields.questEntity;
  if ( !questEntity )
LABEL_8:
    sub_1C22094(this, warGroupEntity);
  if ( warGroupEntity->fields.questAfterClear == questEntity->fields.afterClear )
    return warGroupEntity->fields.questType == questEntity->fields.type;
  return 0;
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass105_0___GetAvailableEventCampaignEntities_b__6(
        PartyOrganizationUtility___c__DisplayClass105_0_o *this,
        int32_t warGroupId,
        const MethodInfo *method)
{
  struct PartyOrganizationUtility_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (PartyOrganizationUtility___c__DisplayClass105_0_o *)this->fields.warGroupIgnoreMaster) == 0LL )
  {
    sub_1C22094(this, warGroupId);
  }
  return !WarGroupIgnoreMaster__IsIgnoreQuest(
            (WarGroupIgnoreMaster_o *)this,
            warGroupId,
            _4__this->fields._CachedQuestId_k__BackingField,
            _4__this->fields._CachedQuestPhase_k__BackingField,
            0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationUtility___c__DisplayClass105_0___GetAvailableEventCampaignEntities_g__IsExceptedByEventQuestMaster_0(
        PartyOrganizationUtility___c__DisplayClass105_0_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  struct PartyOrganizationUtility_o *_4__this; // x8
  PartyOrganizationUtility___c__DisplayClass105_0_o *v4; // x20
  struct PartyOrganizationUtility_o *v6; // x8
  bool v7; // w8
  EventQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  v4 = this;
  this = (PartyOrganizationUtility___c__DisplayClass105_0_o *)this->fields.eventQuestMaster;
  if ( !this )
    goto LABEL_10;
  this = (PartyOrganizationUtility___c__DisplayClass105_0_o *)EventQuestMaster__TryGetEntity(
                                                                (EventQuestMaster_o *)this,
                                                                &entity,
                                                                eventId,
                                                                _4__this->fields._CachedQuestId_k__BackingField,
                                                                _4__this->fields._CachedQuestPhase_k__BackingField,
                                                                0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_7;
  v6 = v4->fields.__4__this;
  if ( !v6 )
    goto LABEL_10;
  this = (PartyOrganizationUtility___c__DisplayClass105_0_o *)v4->fields.eventQuestMaster;
  if ( !this )
    goto LABEL_10;
  v7 = EventQuestMaster__TryGetEntity(
         (EventQuestMaster_o *)this,
         &entity,
         eventId,
         v6->fields._CachedQuestId_k__BackingField,
         0,
         0LL);
  this = 0LL;
  if ( v7 )
  {
LABEL_7:
    if ( entity )
    {
      LOBYTE(this) = entity->fields.isExcepted != 0;
      return (char)this;
    }
LABEL_10:
    sub_1C22094(this, *(_QWORD *)&eventId);
  }
  return (char)this;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationUtility___c__DisplayClass105_0___GetAvailableEventCampaignEntities_g__IsMatchWarId_1(
        PartyOrganizationUtility___c__DisplayClass105_0_o *this,
        int32_t warGroupId,
        const MethodInfo *method)
{
  WarGroupMaster_o *warGroupMaster; // x0
  System_Object_array *v6; // x20
  System_Func_object__bool__o *v7; // x21
  WarGroupEntity_array *entities; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD83A5 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_WarGroupEntity___);
    sub_1C21E38(&System_Func_WarGroupEntity__bool__TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__5__);
    byte_4BD83A5 = 1;
  }
  entities = 0LL;
  warGroupMaster = this->fields.warGroupMaster;
  if ( !warGroupMaster )
    sub_1C22094(0LL, *(_QWORD *)&warGroupId);
  if ( WarGroupMaster__TryGetWarList(warGroupMaster, &entities, warGroupId, 0LL) )
  {
    v6 = (System_Object_array *)entities;
    v7 = (System_Func_object__bool__o *)sub_1C22084(System_Func_WarGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v7,
      (Il2CppObject *)this,
      Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__5__,
      0LL);
    return BasicHelper__Any_object__49917468(
             v6,
             (System_Func_T__bool__o *)v7,
             (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_WarGroupEntity___);
  }
  else
  {
    return 0;
  }
}


void __fastcall PartyOrganizationUtility___c__DisplayClass106_0___ctor(
        PartyOrganizationUtility___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


__f__AnonymousType2_EventCampaignEntity__ItemEntity__o *__fastcall PartyOrganizationUtility___c__DisplayClass106_0___GetAvailableFriendshipUpItemInfo_b__1(
        PartyOrganizationUtility___c__DisplayClass106_0_o *this,
        EventCampaignEntity_o *eventCampaignEntity,
        int32_t itemId,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c__DisplayClass106_0_o *v6; // x21
  Il2CppObject *ItemData; // x20
  __f__AnonymousType2__eventCampaignEntity_j__TPar___itemEntity_j__TPar__o *v8; // x21

  v6 = this;
  if ( (byte_4BD83A7 & 1) == 0 )
  {
    sub_1C21E38(&Method___f__AnonymousType2_EventCampaignEntity__ItemEntity___ctor__);
    this = (PartyOrganizationUtility___c__DisplayClass106_0_o *)sub_1C21E38(&_f__AnonymousType2_EventCampaignEntity__ItemEntity__TypeInfo);
    byte_4BD83A7 = 1;
  }
  if ( !eventCampaignEntity
    || (this = (PartyOrganizationUtility___c__DisplayClass106_0_o *)v6->fields.itemMaster) == 0LL )
  {
    sub_1C22094(this, eventCampaignEntity);
  }
  ItemData = (Il2CppObject *)ItemMaster__GetItemData(
                               (ItemMaster_o *)this,
                               itemId,
                               eventCampaignEntity->fields.eventId,
                               0LL);
  v8 = (__f__AnonymousType2__eventCampaignEntity_j__TPar___itemEntity_j__TPar__o *)sub_1C22084(_f__AnonymousType2_EventCampaignEntity__ItemEntity__TypeInfo);
  _f__AnonymousType2_object__object____ctor(
    v8,
    (Il2CppObject *)eventCampaignEntity,
    ItemData,
    (const MethodInfo_318459C *)Method___f__AnonymousType2_EventCampaignEntity__ItemEntity___ctor__);
  return (__f__AnonymousType2_EventCampaignEntity__ItemEntity__o *)v8;
}


void __fastcall PartyOrganizationUtility___c__DisplayClass106_0___GetAvailableFriendshipUpItemInfo_b__10(
        PartyOrganizationUtility___c__DisplayClass106_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !this->fields.__4__this )
    sub_1C22094(this, id);
  PartyOrganizationUtility__UpdateInterruptionUseItem((PartyOrganizationUtility_o *)this, this->fields.list, 36, id, v3);
}


FriendshipUpItemInfo_o *__fastcall PartyOrganizationUtility___c__DisplayClass106_0___GetAvailableFriendshipUpItemInfo_b__2(
        PartyOrganizationUtility___c__DisplayClass106_0_o *this,
        __f__AnonymousType2_EventCampaignEntity__ItemEntity__o *info,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c__DisplayClass106_0_o *v4; // x20
  UserItemMaster_o *userItemMaster; // x20
  struct ItemEntity_o *itemEntity_i__Field; // x8
  UserItemEntity_o *EntityDefinitely; // x0
  int32_t num; // w20
  EventCampaignEntity_o *eventCampaignEntity_i__Field; // x19
  ItemEntity_o *v11; // x21
  __f__AnonymousType2_EventCampaignEntity__ItemEntity__Fields *p_fields; // t2
  FriendshipUpItemInfo_o *v13; // x22

  v4 = this;
  if ( (byte_4BD83A8 & 1) == 0 )
  {
    sub_1C21E38(&FriendshipUpItemInfo_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method___f__AnonymousType2_EventCampaignEntity__ItemEntity__get_eventCampaignEntity__);
    this = (PartyOrganizationUtility___c__DisplayClass106_0_o *)sub_1C21E38(&Method___f__AnonymousType2_EventCampaignEntity__ItemEntity__get_itemEntity__);
    byte_4BD83A8 = 1;
  }
  if ( !info )
    goto LABEL_19;
  if ( !info->fields._itemEntity_i__Field || !info->fields._eventCampaignEntity_i__Field )
    return 0LL;
  userItemMaster = v4->fields.userItemMaster;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  this = (PartyOrganizationUtility___c__DisplayClass106_0_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (PartyOrganizationUtility___c__DisplayClass106_0_o *)NetworkManager_TypeInfo;
  }
  itemEntity_i__Field = info->fields._itemEntity_i__Field;
  if ( !itemEntity_i__Field || !userItemMaster )
LABEL_19:
    sub_1C22094(this, info);
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       userItemMaster,
                       *(_QWORD *)&this[3].fields.list[1].fields._size,
                       itemEntity_i__Field->fields.id,
                       0LL);
  if ( EntityDefinitely )
    num = EntityDefinitely->fields.num;
  else
    num = 0;
  p_fields = &info->fields;
  eventCampaignEntity_i__Field = info->fields._eventCampaignEntity_i__Field;
  v11 = p_fields->_itemEntity_i__Field;
  v13 = (FriendshipUpItemInfo_o *)sub_1C22084(FriendshipUpItemInfo_TypeInfo);
  FriendshipUpItemInfo___ctor(v13, v11, num, eventCampaignEntity_i__Field, 0LL);
  return v13;
}


void __fastcall PartyOrganizationUtility___c__DisplayClass106_0___GetAvailableFriendshipUpItemInfo_b__6(
        PartyOrganizationUtility___c__DisplayClass106_0_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *IsGroupItem; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x19
  struct PartyOrganizationUtility_o *_4__this; // x8
  char v16; // w23
  System_Collections_Generic_IEnumerable_TSource__o *questUseItemStateList; // x20
  System_Func_object__bool__o *v18; // x0
  System_Func_TSource__bool__o *v19; // x22
  __int64 *v20; // x8

  if ( (byte_4BD83A9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_int_____);
    sub_1C21E38(&System_Func_int____bool__TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__DisplayClass106_1__GetAvailableFriendshipUpItemInfo_b__11__);
    sub_1C21E38(&Method_PartyOrganizationUtility___c__DisplayClass106_1__GetAvailableFriendshipUpItemInfo_b__12__);
    sub_1C21E38(&PartyOrganizationUtility___c__DisplayClass106_1_TypeInfo);
    byte_4BD83A9 = 1;
  }
  v5 = sub_1C22084(PartyOrganizationUtility___c__DisplayClass106_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = info;
  v14 = v5 + 16;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)info, v8, v9, v10, v11, v12, v13);
  IsGroupItem = *(Il2CppObject **)(v5 + 16);
  if ( !IsGroupItem )
    goto LABEL_14;
  IsGroupItem = (Il2CppObject *)FriendshipUpItemInfo__get_IsGroupItem((FriendshipUpItemInfo_o *)IsGroupItem, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v16 = (char)IsGroupItem;
  questUseItemStateList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.questUseItemStateList;
  v18 = (System_Func_object__bool__o *)sub_1C22084(System_Func_int____bool__TypeInfo);
  v19 = (System_Func_TSource__bool__o *)v18;
  if ( (v16 & 1) != 0 )
    v20 = &Method_PartyOrganizationUtility___c__DisplayClass106_1__GetAvailableFriendshipUpItemInfo_b__11__;
  else
    v20 = &Method_PartyOrganizationUtility___c__DisplayClass106_1__GetAvailableFriendshipUpItemInfo_b__12__;
  System_Func_object__bool____ctor(v18, (Il2CppObject *)v5, *v20, 0LL);
  IsGroupItem = System_Linq_Enumerable__FirstOrDefault_object__50149120(
                  questUseItemStateList,
                  v19,
                  (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_int_____);
  if ( IsGroupItem )
  {
    if ( LODWORD(IsGroupItem[1].monitor) <= 2 )
      sub_1C2209C(IsGroupItem, v7);
    if ( *(_QWORD *)v14 )
    {
      *(_BYTE *)(*(_QWORD *)v14 + 92LL) = LODWORD(IsGroupItem[2].monitor) == 1;
      return;
    }
LABEL_14:
    sub_1C22094(IsGroupItem, v7);
  }
}


void __fastcall PartyOrganizationUtility___c__DisplayClass106_1___ctor(
        PartyOrganizationUtility___c__DisplayClass106_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass106_1___GetAvailableFriendshipUpItemInfo_b__11(
        PartyOrganizationUtility___c__DisplayClass106_1_o *this,
        System_Int32_array *list,
        const MethodInfo *method)
{
  struct FriendshipUpItemInfo_o *info; // x8

  if ( !list )
    goto LABEL_5;
  if ( list->max_length <= 1 )
    sub_1C2209C(this, list);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1C22094(this, list);
  return list->m_Items[2] == info->fields._GroupId_k__BackingField;
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass106_1___GetAvailableFriendshipUpItemInfo_b__12(
        PartyOrganizationUtility___c__DisplayClass106_1_o *this,
        System_Int32_array *list,
        const MethodInfo *method)
{
  struct FriendshipUpItemInfo_o *info; // x8

  if ( !list )
    goto LABEL_5;
  if ( !list->max_length )
    sub_1C2209C(this, list);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1C22094(this, list);
  return list->m_Items[1] == info->fields._Id_k__BackingField;
}


void __fastcall PartyOrganizationUtility___c__DisplayClass107_0___ctor(
        PartyOrganizationUtility___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass107_0___UpdateInterruptionUseItem_b__0(
        PartyOrganizationUtility___c__DisplayClass107_0_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C22094(this, 0LL);
  return FriendshipUpItemInfo__CheckSameItem(info, this->fields.campaignType, this->fields.itemEntity, 0LL);
}


void __fastcall PartyOrganizationUtility___c__DisplayClass113_0___ctor(
        PartyOrganizationUtility___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PartyOrganizationUtility___c__DisplayClass113_0___OpenFriendshipUpItemExpiredDialog_b__3(
        PartyOrganizationUtility___c__DisplayClass113_0_o *this,
        FriendshipUpItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *actionList; // x19
  System_Action_object__o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4BD83AA & 1) == 0 )
  {
    sub_1C21E38(&System_Action_Action__TypeInfo);
    sub_1C21E38(&Method_FriendshipUpItemInfo_OpenExpiredDialog__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Action_Action___Add__);
    byte_4BD83AA = 1;
  }
  actionList = (System_Collections_Generic_List_object__o *)this->fields.actionList;
  v6 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v6, (Il2CppObject *)itemInfo, Method_FriendshipUpItemInfo_OpenExpiredDialog__, 0LL);
  if ( !actionList
    || (items = actionList->fields._items,
        v16 = Method_System_Collections_Generic_List_Action_Action___Add__,
        ++actionList->fields._version,
        !items) )
  {
    sub_1C22094(v7, v8);
  }
  size = actionList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      actionList,
      (Il2CppObject *)v6,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    actionList->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v6;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)v6, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall PartyOrganizationUtility___c__DisplayClass115_0___ctor(
        PartyOrganizationUtility___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass115_0___GetQuestUseItemIds_b__0(
        PartyOrganizationUtility___c__DisplayClass115_0_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C22094(this, 0LL);
  return info->fields._CampaignType_k__BackingField == this->fields.campaignType
      && info->fields._UseFlag_k__BackingField
      && info->fields._Num_k__BackingField > 0;
}


void __fastcall PartyOrganizationUtility___c__DisplayClass117_0___ctor(
        PartyOrganizationUtility___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass117_0___SaveQuestUseItemUseState_b__2(
        PartyOrganizationUtility___c__DisplayClass117_0_o *this,
        System_Int32_array *list,
        const MethodInfo *method)
{
  struct FriendshipUpItemInfo_o *info; // x8

  if ( !list )
    goto LABEL_5;
  if ( list->max_length <= 1 )
    sub_1C2209C(this, list);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1C22094(this, list);
  return list->m_Items[2] == info->fields._GroupId_k__BackingField;
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass117_0___SaveQuestUseItemUseState_b__3(
        PartyOrganizationUtility___c__DisplayClass117_0_o *this,
        System_Int32_array *list,
        const MethodInfo *method)
{
  struct FriendshipUpItemInfo_o *info; // x8

  if ( !list )
    goto LABEL_5;
  if ( !list->max_length )
    sub_1C2209C(this, list);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1C22094(this, list);
  return list->m_Items[1] == info->fields._Id_k__BackingField;
}