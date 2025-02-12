void __fastcall PartyOrganizationUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4BC391F & 1) == 0 )
  {
    sub_1C1ABD4(&PartyOrganizationUtility_TypeInfo, v1);
    sub_1C1ABD4(&StringLiteral_11131/*"QuestUseItem"*/, v8);
    byte_4BC391F = 1;
  }
  PartyOrganizationUtility_TypeInfo->static_fields->SAVE_KEY_QUEST_USE_ITEM = (struct System_String_o *)StringLiteral_11131/*"QuestUseItem"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)PartyOrganizationUtility_TypeInfo->static_fields,
    StringLiteral_11131/*"QuestUseItem"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PartyOrganizationUtility___ctor(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_Dictionary_int__object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct FriendshipUpItemInfo_array *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4BC391E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, method);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v3);
    sub_1C1ABD4(&FriendshipUpItemInfo___TypeInfo, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int_____ctor__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_int____TypeInfo, v7);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonTemplate_PartyOrganizationUtility___ctor__, v9);
    byte_4BC391E = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_32A1928 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  this->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v17;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields._npcFollowerInfos, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (struct FriendshipUpItemInfo_array *)sub_1C1AC7C(FriendshipUpItemInfo___TypeInfo, 0LL);
  this->fields.CachedFriendshipUpItemInfo = v24;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.CachedFriendshipUpItemInfo,
    (int64_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.questUseItemStateList = (struct System_Collections_Generic_List_int____o *)v31;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.questUseItemStateList,
    (int64_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_387ADC0 *)Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppClass *klass; // x8
  _QWORD *v20; // x9
  __int64 monitor_low; // x10
  __int64 v22; // x8
  int32_t v23; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v24; // [xsp+8h] [xbp-28h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-24h] BYREF

  v24 = phaseId;
  v25 = questId;
  v23 = restrictionId;
  if ( (byte_4BC3909 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&questId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Contains__, v6);
    byte_4BC3909 = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v25, 0LL);
  v8 = System_Int32__ToString((int32_t)&v24, 0LL);
  v9 = System_Int32__ToString((int32_t)&v23, 0LL);
  restrictionDialogHistoryList = (Il2CppObject *)System_String__Concat_63051628(v7, v8, v9, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_11;
  v12 = restrictionDialogHistoryList;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)this->fields.restrictionDialogHistoryList,
         restrictionDialogHistoryList,
         (const MethodInfo_363CC20 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    return;
  }
  restrictionDialogHistoryList = (Il2CppObject *)this->fields.restrictionDialogHistoryList;
  if ( !restrictionDialogHistoryList
    || (klass = restrictionDialogHistoryList[1].klass,
        v20 = Method_System_Collections_Generic_List_string__Add__,
        ++HIDWORD(restrictionDialogHistoryList[1].monitor),
        !klass) )
  {
LABEL_11:
    sub_1C1AE30(restrictionDialogHistoryList, v11);
  }
  monitor_low = SLODWORD(restrictionDialogHistoryList[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)restrictionDialogHistoryList,
      v12,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = (__int64)klass + 8 * monitor_low;
    LODWORD(restrictionDialogHistoryList[1].monitor) = monitor_low + 1;
    *(_QWORD *)(v22 + 32) = v12;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v22 + 32), (int64_t)v12, v13, v14, v15, v16, v17, v18);
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
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields._normalFollowerInfo, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields._normalFollowerInfo, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4BC390F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__, *(_QWORD *)&key);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__, v5);
    byte_4BC390F = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_1C1AE30(0LL, *(_QWORD *)&key);
  if ( (key & 0x80000000) != 0 )
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
      (const MethodInfo_32A2484 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
  else
    System_Collections_Generic_Dictionary_int__object___Remove(
      (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
      key,
      (const MethodInfo_32A3784 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
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

  if ( (byte_4BC3910 & 1) == 0 )
  {
    sub_1C1ABD4(&FriendshipUpItemInfo___TypeInfo, method);
    byte_4BC3910 = 1;
  }
  v3 = (struct FriendshipUpItemInfo_array *)sub_1C1AC7C(FriendshipUpItemInfo___TypeInfo, 0LL);
  this->fields.CachedFriendshipUpItemInfo = v3;
  sub_1C1AB78(
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

  if ( (byte_4BC3907 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1/*""*/, method);
    byte_4BC3907 = 1;
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
    sub_1C1AB78((PartyOrganizationUtility_o *)&v9->fields.bgmName, (int64_t)v12, v2, v3, v4, v5, v6, v7);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    klass->_1.this_arg.data = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&klass->_1.this_arg, 0LL, v14, v15, v16, v17, v18, v19);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    *(_QWORD *)&klass->_1.this_arg.bits = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&klass->_1.this_arg.bits, 0LL, v21, v22, v23, v24, v25, v26);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass
      || (klass->_1.element_class = 0LL,
          sub_1C1AB78((PartyOrganizationUtility_o *)&klass->_1.element_class, 0LL, v27, v28, v29, v30, v31, v32),
          (klass = p_temporaryPartyInfo->klass) == 0LL)
      || (klass->_1.castClass = 0LL,
          sub_1C1AB78((PartyOrganizationUtility_o *)&klass->_1.castClass, 0LL, v33, v34, v35, v36, v37, v38),
          (klass = p_temporaryPartyInfo->klass) == 0LL) )
    {
LABEL_11:
      sub_1C1AE30(klass, v13);
    }
    klass->_1.parent = 0LL;
    p_parent = (PartyOrganizationUtility_o *)&klass->_1.parent;
    *(_DWORD *)&p_parent[-1].fields._IsQuestStartMenuMode_k__BackingField = -1;
    sub_1C1AB78(p_parent, 0LL, v39, v40, v41, v42, v43, v44);
    p_temporaryPartyInfo->klass = 0LL;
    sub_1C1AB78(p_temporaryPartyInfo, 0LL, v46, v47, v48, v49, v50, v51);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x19
  Il2CppObject *Master_object; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *v27; // x20
  Il2CppObject *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  Il2CppObject *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  Il2CppObject *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  Il2CppObject *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableFriendshipUpItemEventCampaigns; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableRewardAddItemEventCampaigns; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x20
  System_Func_object__bool__o *v59; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x20
  System_Func_object__bool__o *v61; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x20
  System_Func_object__bool__o *v63; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0

  if ( (byte_4BC3911 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventCampaignMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___, v3);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventQuestMaster___, v4);
    sub_1C1ABD4(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMaster_WarGroupIgnoreMaster___, v6);
    sub_1C1ABD4(&Method_DataManager_GetMaster_WarGroupMaster___, v7);
    sub_1C1ABD4(&DataManager_TypeInfo, v8);
    sub_1C1ABD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v9);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Concat_EventCampaignEntity___, v10);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_EventCampaignEntity___, v11);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___, v12);
    sub_1C1ABD4(&System_Func_EventCampaignEntity__bool__TypeInfo, v13);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__2__, v14);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__3__, v15);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__4__, v16);
    sub_1C1ABD4(&PartyOrganizationUtility___c__DisplayClass105_0_TypeInfo, v17);
    byte_4BC3911 = 1;
  }
  v18 = sub_1C1AE20(PartyOrganizationUtility___c__DisplayClass105_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_13;
  *(_QWORD *)(v18 + 24) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)this, v21, v22, v23, v24, v25, v26);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         (Il2CppObject **)(v18 + 40),
         this->fields._CachedQuestId_k__BackingField,
         (const MethodInfo_32486C4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v27 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventCampaignMaster___);
    v28 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_WarGroupMaster___);
    *(_QWORD *)(v18 + 32) = v28;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)v28, v29, v30, v31, v32, v33, v34);
    v35 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_WarGroupIgnoreMaster___);
    *(_QWORD *)(v18 + 56) = v35;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v18 + 56), (int64_t)v35, v36, v37, v38, v39, v40, v41);
    v42 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventQuestMaster___);
    *(_QWORD *)(v18 + 16) = v42;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)v42, v43, v44, v45, v46, v47, v48);
    v49 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
    *(_QWORD *)(v18 + 48) = v49;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v18 + 48), (int64_t)v49, v50, v51, v52, v53, v54, v55);
    if ( v27 )
    {
      AvailableFriendshipUpItemEventCampaigns = EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                                  (EventCampaignMaster_o *)v27,
                                                  0LL);
      AvailableRewardAddItemEventCampaigns = EventCampaignMaster__GetAvailableRewardAddItemEventCampaigns(
                                               (EventCampaignMaster_o *)v27,
                                               0LL);
      v58 = System_Linq_Enumerable__Concat_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)AvailableFriendshipUpItemEventCampaigns,
              (System_Collections_Generic_IEnumerable_TSource__o *)AvailableRewardAddItemEventCampaigns,
              (const MethodInfo_2FB6F6C *)Method_System_Linq_Enumerable_Concat_EventCampaignEntity___);
      v59 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_EventCampaignEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v59,
        (Il2CppObject *)v18,
        Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__2__,
        0LL);
      v60 = System_Linq_Enumerable__Where_object_(
              v58,
              (System_Func_TSource__bool__o *)v59,
              (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
      v61 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_EventCampaignEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v61,
        (Il2CppObject *)v18,
        Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__3__,
        0LL);
      v62 = System_Linq_Enumerable__Where_object_(
              v60,
              (System_Func_TSource__bool__o *)v61,
              (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
      v63 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_EventCampaignEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v63,
        (Il2CppObject *)v18,
        Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__4__,
        0LL);
      v64 = System_Linq_Enumerable__Where_object_(
              v62,
              (System_Func_TSource__bool__o *)v63,
              (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
      return (EventCampaignEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                            v64,
                                            (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_EventCampaignEntity___);
    }
LABEL_13:
    sub_1C1AE30(Master_object, v20);
  }
  return 0LL;
}


FriendshipUpItemInfo_array *__fastcall PartyOrganizationUtility__GetAvailableFriendshipUpItemInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x20
  PartyOrganizationUtility_o *v40; // x0
  const MethodInfo *v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  Il2CppObject *Master_object; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  Il2CppObject *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  const MethodInfo *v62; // x1
  EventCampaignEntity_array *AvailableEventCampaignEntities; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x21
  PartyOrganizationUtility___c_c *v65; // x0
  System_Func_object__object__o *_9__106_0; // x22
  Il2CppObject *v67; // x23
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  System_Func_T1__T2__TResult__o *v75; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x21
  System_Func_object__object__o *v77; // x22
  System_Collections_Generic_IEnumerable_T__o *v78; // x0
  System_Collections_Generic_IEnumerable_T__o *v79; // x21
  PartyOrganizationUtility___c_c *v80; // x8
  System_Func_object__bool__o *_9__106_3; // x22
  Il2CppObject *v82; // x23
  struct PartyOrganizationUtility___c_StaticFields *v83; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x0
  PartyOrganizationUtility___c_c *v91; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v92; // x21
  System_Func_object__int__o *_9__106_4; // x22
  Il2CppObject *v94; // x23
  struct PartyOrganizationUtility___c_StaticFields *v95; // x0
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v102; // x0
  PartyOrganizationUtility___c_c *v103; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v104; // x21
  System_Func_object__object__o *_9__106_5; // x22
  Il2CppObject *v106; // x23
  struct PartyOrganizationUtility___c_StaticFields *v107; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v114; // x0
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  System_Collections_Generic_List_object__o *v121; // x21
  Il2CppObject *v122; // x21
  const MethodInfo *v123; // x4
  UserInterruptionQuestEntity_InterruptionInfo_o *InterruptionInfo; // x0
  UserInterruptionQuestEntity_InterruptionInfo_o *v125; // x21
  System_Collections_Generic_IEnumerable_T__o *useRewardAddItemIds; // x21
  System_Action_int__o *v127; // x22
  System_Collections_Generic_List_object__o *v128; // x19
  System_Action_object__o *v129; // x21
  PartyOrganizationUtility___c_c *v130; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v131; // x19
  System_Func_object__int__o *_9__106_7; // x20
  Il2CppObject *v133; // x21
  struct PartyOrganizationUtility___c_StaticFields *v134; // x0
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v141; // x0
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BC3912 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_FriendshipUpItemInfo__TypeInfo, method);
    sub_1C1ABD4(&System_Action_int__TypeInfo, v3);
    sub_1C1ABD4(&Method_BasicHelper_ExcludeNull_FriendshipUpItemInfo___, v4);
    sub_1C1ABD4(&Method_BasicHelper_ForEach_int___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___, v7);
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserItemMaster___, v8);
    sub_1C1ABD4(&DataManager_TypeInfo, v9);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_GroupBy_FriendshipUpItemInfo__int___, v10);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_OrderByDescending_FriendshipUpItemInfo__int___, v11);
    sub_1C1ABD4(
      &Method_System_Linq_Enumerable_SelectMany_EventCampaignEntity__int____f__AnonymousType2_EventCampaignEntity__ItemEntity____,
      v12);
    sub_1C1ABD4(
      &Method_System_Linq_Enumerable_SelectMany_IGrouping_int__FriendshipUpItemInfo___FriendshipUpItemInfo___,
      v13);
    sub_1C1ABD4(
      &Method_System_Linq_Enumerable_Select___f__AnonymousType2_EventCampaignEntity__ItemEntity___FriendshipUpItemInfo___,
      v14);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_FriendshipUpItemInfo___, v15);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToList_FriendshipUpItemInfo___, v16);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___, v17);
    sub_1C1ABD4(&System_Func___f__AnonymousType2_EventCampaignEntity__ItemEntity___FriendshipUpItemInfo__TypeInfo, v18);
    sub_1C1ABD4(&System_Func_EventCampaignEntity__IEnumerable_int___TypeInfo, v19);
    sub_1C1ABD4(&System_Func_IGrouping_int__FriendshipUpItemInfo___IEnumerable_FriendshipUpItemInfo___TypeInfo, v20);
    sub_1C1ABD4(&System_Func_FriendshipUpItemInfo__int__TypeInfo, v21);
    sub_1C1ABD4(&System_Func_FriendshipUpItemInfo__bool__TypeInfo, v22);
    sub_1C1ABD4(
      &System_Func_EventCampaignEntity__int____f__AnonymousType2_EventCampaignEntity__ItemEntity___TypeInfo,
      v23);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_FriendshipUpItemInfo__ForEach__, v24);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_FriendshipUpItemInfo___ctor__, v25);
    sub_1C1ABD4(&System_Collections_Generic_List_FriendshipUpItemInfo__TypeInfo, v26);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v27);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_0__, v28);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_3__, v29);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_4__, v30);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_5__, v31);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_7__, v32);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__10__, v33);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__1__, v34);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__2__, v35);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__6__, v36);
    sub_1C1ABD4(&PartyOrganizationUtility___c__DisplayClass106_0_TypeInfo, v37);
    sub_1C1ABD4(&PartyOrganizationUtility___c_TypeInfo, v38);
    byte_4BC3912 = 1;
  }
  entity = 0LL;
  v39 = sub_1C1AE20(PartyOrganizationUtility___c__DisplayClass106_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v39, 0LL);
  if ( !v39 )
    goto LABEL_57;
  *(_QWORD *)(v39 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v39 + 32), (int64_t)this, v42, v43, v44, v45, v46, v47);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ItemMaster___);
  *(_QWORD *)(v39 + 16) = Master_object;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v39 + 16), (int64_t)Master_object, v49, v50, v51, v52, v53, v54);
  v55 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserItemMaster___);
  *(_QWORD *)(v39 + 24) = v55;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v39 + 24), (int64_t)v55, v56, v57, v58, v59, v60, v61);
  AvailableEventCampaignEntities = PartyOrganizationUtility__GetAvailableEventCampaignEntities(this, v62);
  if ( !AvailableEventCampaignEntities )
    goto LABEL_32;
  v64 = (System_Collections_Generic_IEnumerable_TSource__o *)AvailableEventCampaignEntities;
  v65 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v65 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_0 = (System_Func_object__object__o *)v65->static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( !v65->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v65);
      v65 = PartyOrganizationUtility___c_TypeInfo;
    }
    v67 = (Il2CppObject *)v65->static_fields->__9;
    _9__106_0 = (System_Func_object__object__o *)sub_1C1AE20(System_Func_EventCampaignEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__106_0,
      v67,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_0__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Func_EventCampaignEntity__IEnumerable_int___o *)_9__106_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__106_0,
      (int64_t)_9__106_0,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
  }
  v75 = (System_Func_T1__T2__TResult__o *)sub_1C1AE20(System_Func_EventCampaignEntity__int____f__AnonymousType2_EventCampaignEntity__ItemEntity___TypeInfo);
  System_Func_object__int__object____ctor(
    v75,
    (Il2CppObject *)v39,
    Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__1__,
    0LL);
  v76 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int__object_(
                                                               v64,
                                                               (System_Func_TSource__IEnumerable_TCollection___o *)_9__106_0,
                                                               (System_Func_TSource__TCollection__TResult__o *)v75,
                                                               (const MethodInfo_2FD32AC *)Method_System_Linq_Enumerable_SelectMany_EventCampaignEntity__int____f__AnonymousType2_EventCampaignEntity__ItemEntity____);
  v77 = (System_Func_object__object__o *)sub_1C1AE20(System_Func___f__AnonymousType2_EventCampaignEntity__ItemEntity___FriendshipUpItemInfo__TypeInfo);
  System_Func_object__object____ctor(
    v77,
    (Il2CppObject *)v39,
    Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__2__,
    0LL);
  v78 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v76,
                                                         (System_Func_TSource__TResult__o *)v77,
                                                         (const MethodInfo_2FD0C44 *)Method_System_Linq_Enumerable_Select___f__AnonymousType2_EventCampaignEntity__ItemEntity___FriendshipUpItemInfo___);
  v79 = BasicHelper__ExcludeNull_object_(
          v78,
          (const MethodInfo_2F8AD50 *)Method_BasicHelper_ExcludeNull_FriendshipUpItemInfo___);
  v80 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v80 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_3 = (System_Func_object__bool__o *)v80->static_fields->__9__106_3;
  if ( !_9__106_3 )
  {
    if ( !v80->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v80);
      v80 = PartyOrganizationUtility___c_TypeInfo;
    }
    v82 = (Il2CppObject *)v80->static_fields->__9;
    _9__106_3 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__106_3,
      v82,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_3__,
      0LL);
    v83 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v83->__9__106_3 = (struct System_Func_FriendshipUpItemInfo__bool__o *)_9__106_3;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v83->__9__106_3, (int64_t)_9__106_3, v84, v85, v86, v87, v88, v89);
  }
  v90 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v79,
          (System_Func_TSource__bool__o *)_9__106_3,
          (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___);
  v91 = PartyOrganizationUtility___c_TypeInfo;
  v92 = v90;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v91 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_4 = (System_Func_object__int__o *)v91->static_fields->__9__106_4;
  if ( !_9__106_4 )
  {
    if ( !v91->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v91);
      v91 = PartyOrganizationUtility___c_TypeInfo;
    }
    v94 = (Il2CppObject *)v91->static_fields->__9;
    _9__106_4 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_FriendshipUpItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__106_4,
      v94,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_4__,
      0LL);
    v95 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v95->__9__106_4 = (struct System_Func_FriendshipUpItemInfo__int__o *)_9__106_4;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v95->__9__106_4, (int64_t)_9__106_4, v96, v97, v98, v99, v100, v101);
  }
  v102 = System_Linq_Enumerable__GroupBy_object__int_(
           v92,
           (System_Func_TSource__TKey__o *)_9__106_4,
           (const MethodInfo_2FC362C *)Method_System_Linq_Enumerable_GroupBy_FriendshipUpItemInfo__int___);
  v103 = PartyOrganizationUtility___c_TypeInfo;
  v104 = (System_Collections_Generic_IEnumerable_TSource__o *)v102;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v103 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_5 = (System_Func_object__object__o *)v103->static_fields->__9__106_5;
  if ( !_9__106_5 )
  {
    if ( !v103->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v103);
      v103 = PartyOrganizationUtility___c_TypeInfo;
    }
    v106 = (Il2CppObject *)v103->static_fields->__9;
    _9__106_5 = (System_Func_object__object__o *)sub_1C1AE20(System_Func_IGrouping_int__FriendshipUpItemInfo___IEnumerable_FriendshipUpItemInfo___TypeInfo);
    System_Func_object__object____ctor(
      _9__106_5,
      v106,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_5__,
      0LL);
    v107 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v107->__9__106_5 = (struct System_Func_IGrouping_int__FriendshipUpItemInfo___IEnumerable_FriendshipUpItemInfo___o *)_9__106_5;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v107->__9__106_5, (int64_t)_9__106_5, v108, v109, v110, v111, v112, v113);
  }
  v114 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                v104,
                                                                (System_Func_TSource__IEnumerable_TResult___o *)_9__106_5,
                                                                (const MethodInfo_2FD31C8 *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__FriendshipUpItemInfo___FriendshipUpItemInfo___);
  v121 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                        v114,
                                                        (const MethodInfo_2FDCC54 *)Method_System_Linq_Enumerable_ToList_FriendshipUpItemInfo___);
  if ( !v121 )
  {
LABEL_32:
    v121 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_FriendshipUpItemInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v121,
      (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_FriendshipUpItemInfo___ctor__);
  }
  *(_QWORD *)(v39 + 40) = v121;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v39 + 40), (int64_t)v121, v115, v116, v117, v118, v119, v120);
  if ( this->fields._IsWaveBattleRestart_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v122 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BC2585 )
    {
      sub_1C1ABD4(&NetworkManager_TypeInfo, v41);
      byte_4BC2585 = 1;
    }
    v40 = (PartyOrganizationUtility_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v40 = (PartyOrganizationUtility_o *)NetworkManager_TypeInfo;
    }
    if ( v122 )
    {
      v40 = (PartyOrganizationUtility_o *)UserInterruptionQuestMaster__TryGetEntity(
                                            (UserInterruptionQuestMaster_o *)v122,
                                            &entity,
                                            *(_QWORD *)&v40[1].fields.restrictionDialogHistoryList[1].fields._size,
                                            this->fields._CachedQuestId_k__BackingField,
                                            this->fields._CachedQuestPhase_k__BackingField,
                                            0LL);
      if ( ((unsigned __int8)v40 & 1) == 0 )
        goto LABEL_49;
      if ( entity )
      {
        PartyOrganizationUtility__UpdateInterruptionUseItem(
          v40,
          *(System_Collections_Generic_List_FriendshipUpItemInfo__o **)(v39 + 40),
          30,
          entity->fields.campaignItemId,
          v123);
        v40 = (PartyOrganizationUtility_o *)entity;
        if ( entity )
        {
          InterruptionInfo = UserInterruptionQuestEntity__GetInterruptionInfo(entity, 0LL);
          if ( InterruptionInfo )
          {
            v125 = InterruptionInfo;
            if ( !BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)InterruptionInfo->fields.useRewardAddItemIds,
                    0LL) )
            {
              useRewardAddItemIds = (System_Collections_Generic_IEnumerable_T__o *)v125->fields.useRewardAddItemIds;
              v127 = (System_Action_int__o *)sub_1C1AE20(System_Action_int__TypeInfo);
              System_Action_int____ctor(
                v127,
                (Il2CppObject *)v39,
                Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__10__,
                0LL);
              BasicHelper__ForEach_int_(
                useRewardAddItemIds,
                (System_Action_T__o *)v127,
                (const MethodInfo_2F8BAD4 *)Method_BasicHelper_ForEach_int___);
            }
          }
          goto LABEL_49;
        }
      }
    }
LABEL_57:
    sub_1C1AE30(v40, v41);
  }
LABEL_49:
  PartyOrganizationUtility__LoadQuestUseItemUseState(this, v41);
  v128 = *(System_Collections_Generic_List_object__o **)(v39 + 40);
  v129 = (System_Action_object__o *)sub_1C1AE20(System_Action_FriendshipUpItemInfo__TypeInfo);
  System_Action_object____ctor(
    v129,
    (Il2CppObject *)v39,
    Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__6__,
    0LL);
  if ( !v128 )
    goto LABEL_57;
  System_Collections_Generic_List_object___ForEach(
    v128,
    (System_Action_T__o *)v129,
    (const MethodInfo_363D2D0 *)Method_System_Collections_Generic_List_FriendshipUpItemInfo__ForEach__);
  v130 = PartyOrganizationUtility___c_TypeInfo;
  v131 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v39 + 40);
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v130 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_7 = (System_Func_object__int__o *)v130->static_fields->__9__106_7;
  if ( !_9__106_7 )
  {
    if ( !v130->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v130);
      v130 = PartyOrganizationUtility___c_TypeInfo;
    }
    v133 = (Il2CppObject *)v130->static_fields->__9;
    _9__106_7 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_FriendshipUpItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__106_7,
      v133,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_7__,
      0LL);
    v134 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v134->__9__106_7 = (struct System_Func_FriendshipUpItemInfo__int__o *)_9__106_7;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v134->__9__106_7, (int64_t)_9__106_7, v135, v136, v137, v138, v139, v140);
  }
  v141 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                v131,
                                                                (System_Func_TSource__TKey__o *)_9__106_7,
                                                                (const MethodInfo_2FC8A98 *)Method_System_Linq_Enumerable_OrderByDescending_FriendshipUpItemInfo__int___);
  return (FriendshipUpItemInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                         v141,
                                         (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_FriendshipUpItemInfo___);
}


FriendshipUpItemInfo_array *__fastcall PartyOrganizationUtility__GetAvailableQuestUseItems(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PartyOrganizationUtility___c_c *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CachedFriendshipUpItemInfo; // x19
  System_Func_object__bool__o *_9__110_0; // x20
  Il2CppObject *v10; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4BC3916 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_FriendshipUpItemInfo___, method);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___, v3);
    sub_1C1ABD4(&System_Func_FriendshipUpItemInfo__bool__TypeInfo, v4);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__GetAvailableQuestUseItems_b__110_0__, v5);
    sub_1C1ABD4(&PartyOrganizationUtility___c_TypeInfo, v6);
    byte_4BC3916 = 1;
  }
  v7 = PartyOrganizationUtility___c_TypeInfo;
  CachedFriendshipUpItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.CachedFriendshipUpItemInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v7 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__110_0 = (System_Func_object__bool__o *)v7->static_fields->__9__110_0;
  if ( !_9__110_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = PartyOrganizationUtility___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__110_0 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__110_0,
      v10,
      Method_PartyOrganizationUtility___c__GetAvailableQuestUseItems_b__110_0__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__110_0 = (struct System_Func_FriendshipUpItemInfo__bool__o *)_9__110_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__110_0,
      (int64_t)_9__110_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          CachedFriendshipUpItemInfo,
          (System_Func_TSource__bool__o *)_9__110_0,
          (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___);
  return (FriendshipUpItemInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                         v18,
                                         (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_FriendshipUpItemInfo___);
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
  if ( (byte_4BC390E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_GetValue_int__FollowerInfo___, *(_QWORD *)&key);
    byte_4BC390E = 1;
  }
  return (FollowerInfo_o *)BasicHelper__GetValue_int__object_(
                             (System_Collections_Generic_Dictionary_K__V__o *)this->fields._npcFollowerInfos,
                             key,
                             0LL,
                             (const MethodInfo_2F8D804 *)Method_BasicHelper_GetValue_int__FollowerInfo___);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall PartyOrganizationUtility__GetQuestUseItemIds(
        PartyOrganizationUtility_o *this,
        int32_t campaignType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x21
  __int64 v19; // x0
  const MethodInfo *v20; // x1
  System_Collections_Generic_IEnumerable_TSource__o *AvailableQuestUseItems; // x19
  System_Func_object__bool__o *v22; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  PartyOrganizationUtility___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  System_Func_object__int__o *_9__115_1; // x20
  Il2CppObject *v27; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v35; // x0
  PartyOrganizationUtility___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x19
  System_Func_object__object__o *_9__115_2; // x20
  Il2CppObject *v39; // x21
  struct PartyOrganizationUtility___c_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v47; // x0
  PartyOrganizationUtility___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x19
  System_Func_object__int__o *_9__115_3; // x20
  Il2CppObject *v51; // x21
  struct PartyOrganizationUtility___c_StaticFields *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0

  if ( (byte_4BC391B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_GroupBy_FriendshipUpItemInfo__int___, *(_QWORD *)&campaignType);
    sub_1C1ABD4(
      &Method_System_Linq_Enumerable_SelectMany_IGrouping_int__FriendshipUpItemInfo___FriendshipUpItemInfo___,
      v5);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Select_FriendshipUpItemInfo__int___, v6);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___, v8);
    sub_1C1ABD4(&System_Func_IGrouping_int__FriendshipUpItemInfo___IEnumerable_FriendshipUpItemInfo___TypeInfo, v9);
    sub_1C1ABD4(&System_Func_FriendshipUpItemInfo__int__TypeInfo, v10);
    sub_1C1ABD4(&System_Func_FriendshipUpItemInfo__bool__TypeInfo, v11);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_1__, v12);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_2__, v13);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_3__, v14);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__DisplayClass115_0__GetQuestUseItemIds_b__0__, v15);
    sub_1C1ABD4(&PartyOrganizationUtility___c__DisplayClass115_0_TypeInfo, v16);
    sub_1C1ABD4(&PartyOrganizationUtility___c_TypeInfo, v17);
    byte_4BC391B = 1;
  }
  v18 = sub_1C1AE20(PartyOrganizationUtility___c__DisplayClass115_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    sub_1C1AE30(v19, v20);
  *(_DWORD *)(v18 + 16) = campaignType;
  AvailableQuestUseItems = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationUtility__GetAvailableQuestUseItems(
                                                                                  this,
                                                                                  v20);
  v22 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_FriendshipUpItemInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_PartyOrganizationUtility___c__DisplayClass115_0__GetQuestUseItemIds_b__0__,
    0LL);
  v23 = System_Linq_Enumerable__Where_object_(
          AvailableQuestUseItems,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___);
  v24 = PartyOrganizationUtility___c_TypeInfo;
  v25 = v23;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v24 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__115_1 = (System_Func_object__int__o *)v24->static_fields->__9__115_1;
  if ( !_9__115_1 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = PartyOrganizationUtility___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__115_1 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_FriendshipUpItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__115_1,
      v27,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_1__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__115_1 = (struct System_Func_FriendshipUpItemInfo__int__o *)_9__115_1;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__115_1,
      (int64_t)_9__115_1,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = System_Linq_Enumerable__GroupBy_object__int_(
          v25,
          (System_Func_TSource__TKey__o *)_9__115_1,
          (const MethodInfo_2FC362C *)Method_System_Linq_Enumerable_GroupBy_FriendshipUpItemInfo__int___);
  v36 = PartyOrganizationUtility___c_TypeInfo;
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)v35;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v36 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__115_2 = (System_Func_object__object__o *)v36->static_fields->__9__115_2;
  if ( !_9__115_2 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = PartyOrganizationUtility___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__115_2 = (System_Func_object__object__o *)sub_1C1AE20(System_Func_IGrouping_int__FriendshipUpItemInfo___IEnumerable_FriendshipUpItemInfo___TypeInfo);
    System_Func_object__object____ctor(
      _9__115_2,
      v39,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_2__,
      0LL);
    v40 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v40->__9__115_2 = (struct System_Func_IGrouping_int__FriendshipUpItemInfo___IEnumerable_FriendshipUpItemInfo___o *)_9__115_2;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v40->__9__115_2, (int64_t)_9__115_2, v41, v42, v43, v44, v45, v46);
  }
  v47 = System_Linq_Enumerable__SelectMany_object__object_(
          v37,
          (System_Func_TSource__IEnumerable_TResult___o *)_9__115_2,
          (const MethodInfo_2FD31C8 *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__FriendshipUpItemInfo___FriendshipUpItemInfo___);
  v48 = PartyOrganizationUtility___c_TypeInfo;
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)v47;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v48 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__115_3 = (System_Func_object__int__o *)v48->static_fields->__9__115_3;
  if ( !_9__115_3 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = PartyOrganizationUtility___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v48->static_fields->__9;
    _9__115_3 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_FriendshipUpItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__115_3,
      v51,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_3__,
      0LL);
    v52 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v52->__9__115_3 = (struct System_Func_FriendshipUpItemInfo__int__o *)_9__115_3;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v52->__9__115_3, (int64_t)_9__115_3, v53, v54, v55, v56, v57, v58);
  }
  v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v49,
                                                               (System_Func_TSource__TResult__o *)_9__115_3,
                                                               (const MethodInfo_2FD0368 *)Method_System_Linq_Enumerable_Select_FriendshipUpItemInfo__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v59,
           (const MethodInfo_2FD8CD8 *)Method_System_Linq_Enumerable_ToArray_int___);
}


FriendshipUpItemInfo_array *__fastcall PartyOrganizationUtility__GetQuestUseItems(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC3917 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_FriendshipUpItemInfo___, method);
    byte_4BC3917 = 1;
  }
  return (FriendshipUpItemInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.CachedFriendshipUpItemInfo,
                                         (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_FriendshipUpItemInfo___);
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

  if ( (byte_4BC390C & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, maxLength);
    sub_1C1ABD4(&System_Math_TypeInfo, v13);
    sub_1C1ABD4(&Rarity_TypeInfo, v14);
    sub_1C1ABD4(&System_Text_StringBuilder_TypeInfo, v15);
    sub_1C1ABD4(&StringLiteral_10315/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, v16);
    sub_1C1ABD4(&StringLiteral_10319/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, v17);
    sub_1C1ABD4(&StringLiteral_10318/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, v18);
    sub_1C1ABD4(&StringLiteral_10314/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, v19);
    sub_1C1ABD4(&StringLiteral_10317/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, v20);
    sub_1C1ABD4(&StringLiteral_10316/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, v21);
    byte_4BC390C = 1;
  }
  v22 = (System_Text_StringBuilder_o *)sub_1C1AE20(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v22, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10314/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, 0LL);
  v24 = System_String__Format(v23, (Il2CppObject *)servantName, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_10315/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = (Il2CppObject *)Rarity__getRarityType(servantRarity, 0LL);
  v27 = System_String__Format(v25, RarityType, 0LL);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_10316/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, 0LL);
  v29 = System_String__Format(v28, (Il2CppObject *)equipName, 0LL);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_10317/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, 0LL);
  v31 = System_String__Format(v30, (Il2CppObject *)skillName, 0LL);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_10318/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, 0LL);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_10319/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, 0LL);
  v34 = (Il2CppObject *)Rarity__getRarityType(actMaxRarity, 0LL);
  v35 = System_String__Format(v33, v34, 0LL);
  if ( !v24 || !v29 )
    goto LABEL_14;
  v37 = v35;
  stringLength = v24->fields._stringLength;
  v39 = v29->fields._stringLength;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v35 = (System_String_o *)System_Math__Max_63859512(stringLength, v39, 0LL);
  *maxLength = (int)v35;
  if ( !v31
    || (v35 = (System_String_o *)System_Math__Max_63859512((int32_t)v35, v31->fields._stringLength, 0LL),
        *maxLength = (int)v35,
        !v22) )
  {
LABEL_14:
    sub_1C1AE30(v35, v36);
  }
  System_Text_StringBuilder__Append_62201520(v22, v24, 0LL);
  System_Text_StringBuilder__Append_62201520(v22, v27, 0LL);
  System_Text_StringBuilder__Append_62201520(v22, v29, 0LL);
  System_Text_StringBuilder__Append_62201520(v22, v31, 0LL);
  System_Text_StringBuilder__Append_62201520(v22, v32, 0LL);
  System_Text_StringBuilder__Append_62201520(v22, v37, 0LL);
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

  if ( (byte_4BC3918 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, startingNum);
    byte_4BC3918 = 1;
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
          sub_1C1AE30(PartyItemSmc_k__BackingField, startingNum);
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
  if ( (byte_4BC3915 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Any_FriendshipUpItemInfo___, method);
    byte_4BC3915 = 1;
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.CachedFriendshipUpItemInfo,
           (const MethodInfo_2FAA930 *)Method_System_Linq_Enumerable_Any_FriendshipUpItemInfo___);
}


bool __fastcall PartyOrganizationUtility__IsAvailableFriendshipUpItem(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  PartyOrganizationUtility___c_c *v6; // x0
  System_Object_array *CachedFriendshipUpItemInfo; // x19
  System_Func_object__bool__o *_9__108_0; // x20
  Il2CppObject *v9; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BC3914 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_FriendshipUpItemInfo___, method);
    sub_1C1ABD4(&System_Func_FriendshipUpItemInfo__bool__TypeInfo, v3);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__IsAvailableFriendshipUpItem_b__108_0__, v4);
    sub_1C1ABD4(&PartyOrganizationUtility___c_TypeInfo, v5);
    byte_4BC3914 = 1;
  }
  v6 = PartyOrganizationUtility___c_TypeInfo;
  CachedFriendshipUpItemInfo = (System_Object_array *)this->fields.CachedFriendshipUpItemInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v6 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__108_0 = (System_Func_object__bool__o *)v6->static_fields->__9__108_0;
  if ( !_9__108_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = PartyOrganizationUtility___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__108_0 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__108_0,
      v9,
      Method_PartyOrganizationUtility___c__IsAvailableFriendshipUpItem_b__108_0__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__108_0 = (struct System_Func_FriendshipUpItemInfo__bool__o *)_9__108_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__108_0,
      (int64_t)_9__108_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return BasicHelper__Any_object__49849512(
           CachedFriendshipUpItemInfo,
           (System_Func_T__bool__o *)_9__108_0,
           (const MethodInfo_2F8A4A8 *)Method_BasicHelper_Any_FriendshipUpItemInfo___);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  bool v21; // w22
  Il2CppClass *klass; // x8
  _QWORD *v23; // x9
  __int64 monitor_low; // x10
  __int64 v25; // x8
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v28; // [xsp+18h] [xbp-28h] BYREF
  int32_t v29; // [xsp+1Ch] [xbp-24h] BYREF

  v28 = phaseId;
  v29 = questId;
  v27 = restrictionId;
  if ( (byte_4BC3908 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&questId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Contains__, v8);
    byte_4BC3908 = 1;
  }
  v9 = System_Int32__ToString((int32_t)&v29, 0LL);
  v10 = System_Int32__ToString((int32_t)&v28, 0LL);
  v11 = System_Int32__ToString((int32_t)&v27, 0LL);
  restrictionDialogHistoryList = (Il2CppObject *)System_String__Concat_63051628(v9, v10, v11, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_12;
  v14 = restrictionDialogHistoryList;
  v21 = System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.restrictionDialogHistoryList,
          restrictionDialogHistoryList,
          (const MethodInfo_363CC20 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( !v21 && isAddHistory )
  {
    restrictionDialogHistoryList = (Il2CppObject *)this->fields.restrictionDialogHistoryList;
    if ( restrictionDialogHistoryList )
    {
      klass = restrictionDialogHistoryList[1].klass;
      v23 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(restrictionDialogHistoryList[1].monitor);
      if ( klass )
      {
        monitor_low = SLODWORD(restrictionDialogHistoryList[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)restrictionDialogHistoryList,
            v14,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = (__int64)klass + 8 * monitor_low;
          LODWORD(restrictionDialogHistoryList[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v25 + 32) = v14;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v25 + 32), (int64_t)v14, v15, v16, v17, v18, v19, v20);
        }
        return v21;
      }
    }
LABEL_12:
    sub_1C1AE30(restrictionDialogHistoryList, v13);
  }
  return v21;
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
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v26; // x27
  Il2CppObject *v27; // x25
  SkillLvMaster_o *v28; // x26
  int v29; // w8
  void *v30; // x24
  unsigned int v31; // w27
  __int64 v32; // x29
  int32_t v33; // w2
  System_Collections_Generic_IEnumerable_int__o *ActRarity; // x0
  SkillLvEntity_o *skillLvEntity; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *v37; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4BC390A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMaster___, skillName);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v15);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillMaster___, v17);
    sub_1C1ABD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v19);
    sub_1C1ABD4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v20);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v22);
    byte_4BC390A = 1;
  }
  v37 = 0LL;
  entity = 0LL;
  skillLvEntity = 0LL;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C1AB78(skillName);
  *actMaxRarity = 0;
  if ( ((servantId | servantRarity | equipServantId) & 0x80000000) == 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_35;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           &entity,
           servantId,
           (const MethodInfo_32486C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      v26 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      v27 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v26 )
        goto LABEL_35;
      v28 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)v26, equipServantId, 0LL);
      if ( !Instance )
        goto LABEL_35;
      v29 = *((_DWORD *)Instance + 6);
      v30 = Instance;
      if ( v29 >= 1 )
      {
        v31 = 0;
        while ( 1 )
        {
          if ( v31 >= v29 )
            sub_1C1AE38(Instance, v24);
          v32 = *((_QWORD *)v30 + (int)v31 + 4);
          if ( !v32 )
            goto LABEL_35;
          v33 = *(_DWORD *)(v32 + 48);
          if ( v33 && (eventId < 0 || v33 == eventId) )
          {
            if ( !MasterData_object )
              goto LABEL_35;
            Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                 &v37,
                                 v33,
                                 (const MethodInfo_32486C4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = v37;
              if ( !v37 )
                goto LABEL_35;
              Instance = (void *)EventEntity__IsEventPeriod((EventEntity_o *)v37, 0LL, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_25;
              Instance = v37;
              if ( !v37 )
                goto LABEL_35;
              Instance = (void *)EventEntity__IsSkillRelease((EventEntity_o *)v37, 0, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
LABEL_25:
                if ( !v28 )
                  goto LABEL_35;
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
                       (const MethodInfo_3248678 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( Instance )
          {
            *skillName = SkillEntity__getName((SkillEntity_o *)Instance, 0LL);
            sub_1C1AB78(skillName);
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
        sub_1C1AE30(Instance, v24);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationUtility__IsRarityRestriction_33211232(
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

  if ( (byte_4BC390B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4BC390B = 1;
  }
  if ( ((servantId | servantRarity) & 0x80000000) != 0 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   servantId,
                   (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v14);
  }
  v16 = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0LL);
  return Entity && v16 && RarityRestrictedSkillUtil__IsDisabled(v16, (ServantEntity_o *)Entity, servantRarity, 0LL);
}


void __fastcall PartyOrganizationUtility__LoadQuestUseItemUseState(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_int____o *questUseItemStateList; // x8
  int32_t size; // w2
  int v15; // w9
  Il2CppObject *Master_object; // x0
  PartyOrganizationUtility_c *v17; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x20
  int normalFollowerInfo; // w8
  PartyOrganizationUtility_o *v20; // x21
  int v21; // w26
  int v22; // w27
  System_Collections_Generic_List_object__o *v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  unsigned int v30; // w8
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  FriendshipUpItemInfo_c *v35; // x0
  FriendshipUpItemInfo_c *v36; // x0
  int32_t Int_70752120; // w0
  System_Collections_Generic_List_object__o *v38; // x20
  int32_t v39; // w21
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  unsigned int v46; // w8
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  FriendshipUpItemInfo_c *v51; // x0
  FriendshipUpItemInfo_c *v52; // x0
  int32_t v53; // w0
  System_Collections_Generic_List_object__o *v54; // x19
  int32_t v55; // w21
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  PartyOrganizationUtility_o *v62; // x20
  BalanceConfig_c *v63; // x8
  unsigned int v64; // w9
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t v70; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_4BC391C & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ItemMaster___, v3);
    sub_1C1ABD4(&DataManager_TypeInfo, v4);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v5);
    sub_1C1ABD4(&FriendshipUpItemInfo_TypeInfo, v6);
    sub_1C1ABD4(&int___TypeInfo, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int____Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int____Clear__, v9);
    sub_1C1ABD4(&PartyOrganizationUtility_TypeInfo, v10);
    sub_1C1ABD4(&StringLiteral_866/*","*/, v11);
    this = (PartyOrganizationUtility_o *)sub_1C1ABD4(&StringLiteral_1/*""*/, v12);
    byte_4BC391C = 1;
  }
  *(_QWORD *)result = 0LL;
  v70 = 0;
  entity = 0LL;
  questUseItemStateList = v2->fields.questUseItemStateList;
  if ( !questUseItemStateList )
    goto LABEL_66;
  size = questUseItemStateList->fields._size;
  v15 = questUseItemStateList->fields._version + 1;
  questUseItemStateList->fields._size = 0;
  questUseItemStateList->fields._version = v15;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)questUseItemStateList->fields._items, 0, size, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ItemMaster___);
  v17 = PartyOrganizationUtility_TypeInfo;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v17 = PartyOrganizationUtility_TypeInfo;
  }
  this = (PartyOrganizationUtility_o *)UnityEngine_PlayerPrefs__GetString(
                                         v17->static_fields->SAVE_KEY_QUEST_USE_ITEM,
                                         (System_String_o *)StringLiteral_1/*""*/,
                                         0LL);
  if ( !this )
    goto LABEL_66;
  this = (PartyOrganizationUtility_o *)System_String__Split_63065460(
                                         (System_String_o *)this,
                                         (System_String_o *)StringLiteral_866/*","*/,
                                         0,
                                         0LL);
  if ( !this )
    goto LABEL_66;
  normalFollowerInfo = (int)this->fields._normalFollowerInfo;
  v20 = this;
  if ( normalFollowerInfo >= 1 )
  {
    v21 = 2;
    while ( v21 - 2 < (unsigned int)normalFollowerInfo )
    {
      this = (PartyOrganizationUtility_o *)System_Int32__TryParse(
                                             *((System_String_o **)&v20->fields.restrictionDialogHistoryList + v21),
                                             &result[1],
                                             0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_36;
      if ( (unsigned int)(v21 - 1) >= LODWORD(v20->fields._normalFollowerInfo) )
        break;
      this = (PartyOrganizationUtility_o *)System_Int32__TryParse(
                                             *((System_String_o **)&v20->fields._normalFollowerInfo + v21),
                                             result,
                                             0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_36;
      v22 = v21;
      if ( (unsigned int)v21 >= LODWORD(v20->fields._normalFollowerInfo) )
        break;
      this = (PartyOrganizationUtility_o *)System_Int32__TryParse(
                                             *((System_String_o **)&v20->fields._SelectedNormalFollowerClassId_k__BackingField
                                             + v21),
                                             &v70,
                                             0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_36;
      if ( result[0] )
        goto LABEL_21;
      if ( !v18 )
        goto LABEL_66;
      this = (PartyOrganizationUtility_o *)DataMasterBase_object__object__int___TryGetEntity(
                                             v18,
                                             &entity,
                                             result[1],
                                             (const MethodInfo_32486C4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (PartyOrganizationUtility_o *)entity;
        if ( !entity )
          goto LABEL_66;
        this = (PartyOrganizationUtility_o *)ItemEntity__IsEnable((ItemEntity_o *)entity, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_21:
          v23 = (System_Collections_Generic_List_object__o *)v2->fields.questUseItemStateList;
          this = (PartyOrganizationUtility_o *)sub_1C1AC7C(int___TypeInfo, 3LL);
          if ( !this )
            goto LABEL_66;
          v30 = (unsigned int)this->fields._normalFollowerInfo;
          method = (const MethodInfo *)this;
          if ( !v30 )
            break;
          this->fields._SelectedNormalFollowerClassId_k__BackingField = result[1];
          if ( v30 == 1 )
            break;
          this->fields._SelectedNormalFollowerDeckId_k__BackingField = result[0];
          if ( v30 <= 2 )
            break;
          LODWORD(this->fields._npcFollowerInfos) = v70;
          if ( !v23 )
            goto LABEL_66;
          items = v23->fields._items;
          v32 = Method_System_Collections_Generic_List_int____Add__;
          ++v23->fields._version;
          if ( !items )
            goto LABEL_66;
          v33 = v23->fields._size;
          if ( (unsigned int)v33 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              (Il2CppObject *)this,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + v33;
            v23->fields._size = v33 + 1;
            v34[4] = (Il2CppClass *)method;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)method, v24, v25, v26, v27, v28, v29);
          }
        }
      }
      normalFollowerInfo = (int)v20->fields._normalFollowerInfo;
      v21 += 3;
      if ( v22 + 1 >= normalFollowerInfo )
        goto LABEL_36;
    }
LABEL_65:
    sub_1C1AE38(this, method);
  }
LABEL_36:
  v35 = FriendshipUpItemInfo_TypeInfo;
  if ( !FriendshipUpItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemInfo_TypeInfo);
    v35 = FriendshipUpItemInfo_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v35->static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE, 0LL) )
  {
    v36 = FriendshipUpItemInfo_TypeInfo;
    if ( !FriendshipUpItemInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemInfo_TypeInfo);
      v36 = FriendshipUpItemInfo_TypeInfo;
    }
    Int_70752120 = UnityEngine_PlayerPrefs__GetInt_70752120(
                     v36->static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE,
                     0LL);
    v38 = (System_Collections_Generic_List_object__o *)v2->fields.questUseItemStateList;
    v39 = Int_70752120;
    this = (PartyOrganizationUtility_o *)sub_1C1AC7C(int___TypeInfo, 3LL);
    if ( !this )
      goto LABEL_66;
    v46 = (unsigned int)this->fields._normalFollowerInfo;
    method = (const MethodInfo *)this;
    if ( !v46 )
      goto LABEL_65;
    this->fields._SelectedNormalFollowerClassId_k__BackingField = v39;
    if ( v46 <= 2 )
      goto LABEL_65;
    LODWORD(this->fields._npcFollowerInfos) = 1;
    if ( !v38 )
      goto LABEL_66;
    v47 = v38->fields._items;
    v48 = Method_System_Collections_Generic_List_int____Add__;
    ++v38->fields._version;
    if ( !v47 )
      goto LABEL_66;
    v49 = v38->fields._size;
    if ( (unsigned int)v49 >= v47->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v38,
        (Il2CppObject *)this,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      v50 = &v47->obj.klass + v49;
      v38->fields._size = v49 + 1;
      v50[4] = (Il2CppClass *)method;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v50 + 4), (int64_t)method, v40, v41, v42, v43, v44, v45);
    }
  }
  v51 = FriendshipUpItemInfo_TypeInfo;
  if ( !FriendshipUpItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemInfo_TypeInfo);
    v51 = FriendshipUpItemInfo_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v51->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0LL) )
  {
    v52 = FriendshipUpItemInfo_TypeInfo;
    if ( !FriendshipUpItemInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemInfo_TypeInfo);
      v52 = FriendshipUpItemInfo_TypeInfo;
    }
    v53 = UnityEngine_PlayerPrefs__GetInt_70752120(v52->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0LL);
    v54 = (System_Collections_Generic_List_object__o *)v2->fields.questUseItemStateList;
    v55 = v53;
    this = (PartyOrganizationUtility_o *)sub_1C1AC7C(int___TypeInfo, 3LL);
    v62 = this;
    v63 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v63 = BalanceConfig_TypeInfo;
    }
    if ( v62 )
    {
      v64 = (unsigned int)v62->fields._normalFollowerInfo;
      if ( v64 <= 1 )
        goto LABEL_65;
      v62->fields._SelectedNormalFollowerDeckId_k__BackingField = v63->static_fields->DefaultQuestUseFriendshipUpItemGroupId;
      if ( v64 == 2 )
        goto LABEL_65;
      LODWORD(v62->fields._npcFollowerInfos) = v55;
      if ( v54 )
      {
        v65 = v54->fields._items;
        v66 = Method_System_Collections_Generic_List_int____Add__;
        ++v54->fields._version;
        if ( v65 )
        {
          v67 = v54->fields._size;
          if ( (unsigned int)v67 >= v65->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v54,
              (Il2CppObject *)v62,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
          }
          else
          {
            v68 = &v65->obj.klass + v67;
            v54->fields._size = v67 + 1;
            v68[4] = (Il2CppClass *)v62;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v68 + 4), (int64_t)v62, v56, v57, v58, v59, v60, v61);
          }
          return;
        }
      }
    }
LABEL_66:
    sub_1C1AE30(this, method);
  }
}


bool __fastcall PartyOrganizationUtility__OpenFriendshipUpItemExpiredDialog(
        PartyOrganizationUtility_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x22
  System_Collections_Generic_List_object__o *v24; // x24
  ChainableActionBase_o *v25; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  ChainableActionBase_o **v33; // x23
  System_Collections_Generic_IEnumerable_TSource__o *CachedFriendshipUpItemInfo; // x24
  PartyOrganizationUtility___c_c *v35; // x0
  System_Func_object__bool__o *_9__113_0; // x25
  Il2CppObject *v37; // x26
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  PartyOrganizationUtility___c_c *v46; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x24
  System_Func_object__bool__o *_9__113_1; // x25
  Il2CppObject *v49; // x26
  struct PartyOrganizationUtility___c_StaticFields *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  PartyOrganizationUtility___c_c *v58; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x24
  System_Func_object__int__o *_9__113_2; // x25
  Il2CppObject *v61; // x26
  struct PartyOrganizationUtility___c_StaticFields *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_Collections_Generic_IEnumerable_T__o *v69; // x24
  System_Action_object__o *v70; // x25
  System_Object_array *v72; // x23
  ActionChain_o *v73; // x22
  __int64 v74; // x23
  System_Action_o *v75; // x24
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  const MethodInfo *v82; // x1
  struct FriendshipUpItemInfo_array *AvailableFriendshipUpItemInfo; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7

  if ( (byte_4BC3919 & 1) == 0 )
  {
    sub_1C1ABD4(&ActionChain_TypeInfo, callback);
    sub_1C1ABD4(&System_Action___TypeInfo, v5);
    sub_1C1ABD4(&System_Action_FriendshipUpItemInfo__TypeInfo, v6);
    sub_1C1ABD4(&Method_System_Action_Invoke__, v7);
    sub_1C1ABD4(&System_Action_TypeInfo, v8);
    sub_1C1ABD4(&Method_BasicHelper_ForEach_FriendshipUpItemInfo___, v9);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_OrderBy_FriendshipUpItemInfo__int___, v10);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___, v11);
    sub_1C1ABD4(&System_Func_FriendshipUpItemInfo__int__TypeInfo, v12);
    sub_1C1ABD4(&System_Func_FriendshipUpItemInfo__bool__TypeInfo, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Action_Action___ToArray__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Action_Action____ctor__, v15);
    sub_1C1ABD4(&System_Collections_Generic_List_Action_Action___TypeInfo, v16);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__OpenFriendshipUpItemExpiredDialog_b__113_0__, v17);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__OpenFriendshipUpItemExpiredDialog_b__113_1__, v18);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__OpenFriendshipUpItemExpiredDialog_b__113_2__, v19);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__DisplayClass113_0__OpenFriendshipUpItemExpiredDialog_b__3__, v20);
    sub_1C1ABD4(&PartyOrganizationUtility___c__DisplayClass113_0_TypeInfo, v21);
    sub_1C1ABD4(&PartyOrganizationUtility___c_TypeInfo, v22);
    byte_4BC3919 = 1;
  }
  v23 = sub_1C1AE20(PartyOrganizationUtility___c__DisplayClass113_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.CachedFriendshipUpItemInfo, 0LL) )
    return 0;
  v24 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_Action_Action___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_Action_Action____ctor__);
  if ( !v23 )
    goto LABEL_31;
  *(_QWORD *)(v23 + 16) = v24;
  v33 = (ChainableActionBase_o **)(v23 + 16);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)v24, v27, v28, v29, v30, v31, v32);
  CachedFriendshipUpItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.CachedFriendshipUpItemInfo;
  v35 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v35 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__113_0 = (System_Func_object__bool__o *)v35->static_fields->__9__113_0;
  if ( !_9__113_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = PartyOrganizationUtility___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__113_0 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__113_0,
      v37,
      Method_PartyOrganizationUtility___c__OpenFriendshipUpItemExpiredDialog_b__113_0__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__113_0 = (struct System_Func_FriendshipUpItemInfo__bool__o *)_9__113_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__113_0,
      (int64_t)_9__113_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  v45 = System_Linq_Enumerable__Where_object_(
          CachedFriendshipUpItemInfo,
          (System_Func_TSource__bool__o *)_9__113_0,
          (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___);
  v46 = PartyOrganizationUtility___c_TypeInfo;
  v47 = v45;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v46 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__113_1 = (System_Func_object__bool__o *)v46->static_fields->__9__113_1;
  if ( !_9__113_1 )
  {
    if ( !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v46 = PartyOrganizationUtility___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v46->static_fields->__9;
    _9__113_1 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__113_1,
      v49,
      Method_PartyOrganizationUtility___c__OpenFriendshipUpItemExpiredDialog_b__113_1__,
      0LL);
    v50 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v50->__9__113_1 = (struct System_Func_FriendshipUpItemInfo__bool__o *)_9__113_1;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v50->__9__113_1, (int64_t)_9__113_1, v51, v52, v53, v54, v55, v56);
  }
  v57 = System_Linq_Enumerable__Where_object_(
          v47,
          (System_Func_TSource__bool__o *)_9__113_1,
          (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___);
  v58 = PartyOrganizationUtility___c_TypeInfo;
  v59 = v57;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v58 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__113_2 = (System_Func_object__int__o *)v58->static_fields->__9__113_2;
  if ( !_9__113_2 )
  {
    if ( !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      v58 = PartyOrganizationUtility___c_TypeInfo;
    }
    v61 = (Il2CppObject *)v58->static_fields->__9;
    _9__113_2 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_FriendshipUpItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__113_2,
      v61,
      Method_PartyOrganizationUtility___c__OpenFriendshipUpItemExpiredDialog_b__113_2__,
      0LL);
    v62 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v62->__9__113_2 = (struct System_Func_FriendshipUpItemInfo__int__o *)_9__113_2;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v62->__9__113_2, (int64_t)_9__113_2, v63, v64, v65, v66, v67, v68);
  }
  v69 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                         v59,
                                                         (System_Func_TSource__TKey__o *)_9__113_2,
                                                         (const MethodInfo_2FC8568 *)Method_System_Linq_Enumerable_OrderBy_FriendshipUpItemInfo__int___);
  v70 = (System_Action_object__o *)sub_1C1AE20(System_Action_FriendshipUpItemInfo__TypeInfo);
  System_Action_object____ctor(
    v70,
    (Il2CppObject *)v23,
    Method_PartyOrganizationUtility___c__DisplayClass113_0__OpenFriendshipUpItemExpiredDialog_b__3__,
    0LL);
  BasicHelper__ForEach_object_(
    v69,
    (System_Action_T__o *)v70,
    (const MethodInfo_2F8C3EC *)Method_BasicHelper_ForEach_FriendshipUpItemInfo___);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v23 + 16), 0LL) )
    return 0;
  v25 = *v33;
  if ( !*v33 )
    goto LABEL_31;
  v72 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)v25,
          (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
  v73 = (ActionChain_o *)sub_1C1AE20(ActionChain_TypeInfo);
  ActionChain___ctor_47662916(v73, (System_Action_Action__array *)v72, 0LL);
  v74 = sub_1C1AC7C(System_Action___TypeInfo, 1LL);
  v75 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v75, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0LL);
  if ( !v74 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v74 + 24) )
    sub_1C1AE38(v25, v26);
  *(_QWORD *)(v74 + 32) = v75;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v74 + 32), (int64_t)v75, v76, v77, v78, v79, v80, v81);
  if ( !v73 || (v25 = ChainableActionBase__Final((ChainableActionBase_o *)v73, (System_Action_array *)v74, 0LL)) == 0LL )
LABEL_31:
    sub_1C1AE30(v25, v26);
  ChainableActionBase__Execute(v25, 0LL);
  AvailableFriendshipUpItemInfo = PartyOrganizationUtility__GetAvailableFriendshipUpItemInfo(this, v82);
  this->fields.CachedFriendshipUpItemInfo = AvailableFriendshipUpItemInfo;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.CachedFriendshipUpItemInfo,
    (int64_t)AvailableFriendshipUpItemInfo,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  return 1;
}


void __fastcall PartyOrganizationUtility__OpenQuestUseItemDialogTutorial(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  PartyOrganizationUtility___c_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CachedFriendshipUpItemInfo; // x19
  System_Func_object__bool__o *_9__114_0; // x20
  Il2CppObject *v16; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  PartyOrganizationUtility___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  System_Func_object__int__o *_9__114_1; // x20
  Il2CppObject *v28; // x21
  struct PartyOrganizationUtility___c_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_List_int__o *v37; // x19
  Il2CppObject *Master_object; // x0
  __int64 v39; // x1

  if ( (byte_4BC391A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventTutorialMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Any_int___, v4);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Select_FriendshipUpItemInfo__int___, v5);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToList_int___, v6);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___, v7);
    sub_1C1ABD4(&System_Func_FriendshipUpItemInfo__int__TypeInfo, v8);
    sub_1C1ABD4(&System_Func_FriendshipUpItemInfo__bool__TypeInfo, v9);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__114_0__, v10);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__114_1__, v11);
    sub_1C1ABD4(&PartyOrganizationUtility___c_TypeInfo, v12);
    byte_4BC391A = 1;
  }
  v13 = PartyOrganizationUtility___c_TypeInfo;
  CachedFriendshipUpItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.CachedFriendshipUpItemInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v13 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__114_0 = (System_Func_object__bool__o *)v13->static_fields->__9__114_0;
  if ( !_9__114_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = PartyOrganizationUtility___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__114_0 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__114_0,
      v16,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__114_0__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__114_0 = (struct System_Func_FriendshipUpItemInfo__bool__o *)_9__114_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__114_0,
      (int64_t)_9__114_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = System_Linq_Enumerable__Where_object_(
          CachedFriendshipUpItemInfo,
          (System_Func_TSource__bool__o *)_9__114_0,
          (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___);
  v25 = PartyOrganizationUtility___c_TypeInfo;
  v26 = v24;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v25 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__114_1 = (System_Func_object__int__o *)v25->static_fields->__9__114_1;
  if ( !_9__114_1 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = PartyOrganizationUtility___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__114_1 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_FriendshipUpItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__114_1,
      v28,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__114_1__,
      0LL);
    v29 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v29->__9__114_1 = (struct System_Func_FriendshipUpItemInfo__int__o *)_9__114_1;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v29->__9__114_1, (int64_t)_9__114_1, v30, v31, v32, v33, v34, v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v26,
                                                               (System_Func_TSource__TResult__o *)_9__114_1,
                                                               (const MethodInfo_2FD0368 *)Method_System_Linq_Enumerable_Select_FriendshipUpItemInfo__int___);
  v37 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                    v36,
                                                    (const MethodInfo_2FDC9E8 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( System_Linq_Enumerable__Any_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v37,
         (const MethodInfo_2FAA400 *)Method_System_Linq_Enumerable_Any_int___) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_object )
      sub_1C1AE30(0LL, v39);
    EventTutorialMaster__checkTutorial_40507952(
      (EventTutorialMaster_o *)Master_object,
      v37,
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestUseItems; // x20
  System_Action_object__o *v14; // x21
  PartyOrganizationUtility___c_c *v15; // x0
  struct System_Collections_Generic_List_int____o *questUseItemStateList; // x19
  System_Func_object__object__o *_9__117_1; // x20
  Il2CppObject *v18; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v26; // x0
  PartyOrganizationUtility_c *v27; // x8
  System_Collections_Generic_IEnumerable_T__o *v28; // x19
  System_String_o *SAVE_KEY_QUEST_USE_ITEM; // x20
  System_String_o *v30; // x0
  FriendshipUpItemInfo_c *v31; // x0

  if ( (byte_4BC391D & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_FriendshipUpItemInfo__TypeInfo, method);
    sub_1C1ABD4(&Method_BasicHelper_ForEach_FriendshipUpItemInfo___, v3);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_SelectMany_int____int___, v4);
    sub_1C1ABD4(&FriendshipUpItemInfo_TypeInfo, v5);
    sub_1C1ABD4(&System_Func_int____IEnumerable_int___TypeInfo, v6);
    sub_1C1ABD4(&Method_PartyOrganizationUtility__SaveQuestUseItemUseState_b__117_0__, v7);
    sub_1C1ABD4(&PartyOrganizationUtility_TypeInfo, v8);
    sub_1C1ABD4(&Method_System_String_Join_int___, v9);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__SaveQuestUseItemUseState_b__117_1__, v10);
    sub_1C1ABD4(&PartyOrganizationUtility___c_TypeInfo, v11);
    sub_1C1ABD4(&StringLiteral_866/*","*/, v12);
    byte_4BC391D = 1;
  }
  AvailableQuestUseItems = (System_Collections_Generic_IEnumerable_T__o *)PartyOrganizationUtility__GetAvailableQuestUseItems(
                                                                            this,
                                                                            method);
  v14 = (System_Action_object__o *)sub_1C1AE20(System_Action_FriendshipUpItemInfo__TypeInfo);
  System_Action_object____ctor(
    v14,
    (Il2CppObject *)this,
    Method_PartyOrganizationUtility__SaveQuestUseItemUseState_b__117_0__,
    0LL);
  BasicHelper__ForEach_object_(
    AvailableQuestUseItems,
    (System_Action_T__o *)v14,
    (const MethodInfo_2F8C3EC *)Method_BasicHelper_ForEach_FriendshipUpItemInfo___);
  v15 = PartyOrganizationUtility___c_TypeInfo;
  questUseItemStateList = this->fields.questUseItemStateList;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v15 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__117_1 = (System_Func_object__object__o *)v15->static_fields->__9__117_1;
  if ( !_9__117_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = PartyOrganizationUtility___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__117_1 = (System_Func_object__object__o *)sub_1C1AE20(System_Func_int____IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__117_1,
      v18,
      Method_PartyOrganizationUtility___c__SaveQuestUseItemUseState_b__117_1__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__117_1 = (struct System_Func_int____IEnumerable_int___o *)_9__117_1;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__117_1,
      (int64_t)_9__117_1,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = System_Linq_Enumerable__SelectMany_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questUseItemStateList,
          (System_Func_TSource__IEnumerable_TResult___o *)_9__117_1,
          (const MethodInfo_2FD3158 *)Method_System_Linq_Enumerable_SelectMany_int____int___);
  v27 = PartyOrganizationUtility_TypeInfo;
  v28 = (System_Collections_Generic_IEnumerable_T__o *)v26;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v27 = PartyOrganizationUtility_TypeInfo;
  }
  SAVE_KEY_QUEST_USE_ITEM = v27->static_fields->SAVE_KEY_QUEST_USE_ITEM;
  v30 = System_String__Join_int_(
          (System_String_o *)StringLiteral_866/*","*/,
          v28,
          (const MethodInfo_3043700 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_QUEST_USE_ITEM, v30, 0LL);
  v31 = FriendshipUpItemInfo_TypeInfo;
  if ( !FriendshipUpItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemInfo_TypeInfo);
    v31 = FriendshipUpItemInfo_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v31->static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE, 0LL);
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
  sub_1C1AB78(
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
  sub_1C1AB78(
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

  if ( (byte_4BC390D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__, *(_QWORD *)&key);
    byte_4BC390D = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_1C1AE30(0LL, *(_QWORD *)&key);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
    key,
    (Il2CppObject *)followerInfo,
    (const MethodInfo_32A22E8 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
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
  __int64 v20; // x1
  char *klass; // x0
  PartyOrganizationUtility_o *p_temporaryPartyInfo; // x20
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *temporaryPartyInfo; // t1
  Il2CppObject *v24; // x29
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  PartyOrganizationUtility_o *v32; // x0
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
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  PartyOrganizationUtility_c *v57; // x20
  Il2CppObject *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  Il2CppObject *v65; // x19
  __int64 v66; // x0
  PartyOrganizationUtility_o *p_parent; // x20
  __int64 v68; // x0
  int64_t v69; // x1
  PartyOrganizationUtility_TemporaryPartyInfo_o *v70; // x0
  const MethodInfo *v71; // x1

  if ( (byte_4BC3906 & 1) == 0 )
  {
    sub_1C1ABD4(&PartyListViewItem___TypeInfo, userServantId);
    sub_1C1ABD4(&PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo, v20);
    byte_4BC3906 = 1;
  }
  temporaryPartyInfo = this->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (PartyOrganizationUtility_o *)&this->fields.temporaryPartyInfo;
  klass = (char *)temporaryPartyInfo;
  if ( !temporaryPartyInfo )
  {
    v24 = (Il2CppObject *)sub_1C1AE20(PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo);
    System_Object___ctor(v24, 0LL);
    p_temporaryPartyInfo->klass = (PartyOrganizationUtility_c *)v24;
    sub_1C1AB78(p_temporaryPartyInfo, (int64_t)v24, v25, v26, v27, v28, v29, v30);
    klass = (char *)p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_18;
  }
  *((_QWORD *)klass + 5) = bgmName;
  v32 = (PartyOrganizationUtility_o *)(klass + 40);
  v32[-1].fields.temporaryPartyInfo = (struct PartyOrganizationUtility_TemporaryPartyInfo_o *)userServantId;
  v32[-1].fields._TransitionDestinationFromDetail_k__BackingField = (struct System_String_o *)userEquipId;
  *(_DWORD *)&v32[-1].fields._IsQuestStartMenuMode_k__BackingField = deckNumber;
  sub_1C1AB78(v32, (int64_t)bgmName, userEquipId, deckNumber, bgmName, battleSetupInfo, followerInfo, basePartyItem);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 6) = battleSetupInfo;
  sub_1C1AB78((PartyOrganizationUtility_o *)(klass + 48), (int64_t)battleSetupInfo, v33, v34, v35, v36, v37, v38);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 7) = followerInfo;
  sub_1C1AB78((PartyOrganizationUtility_o *)(klass + 56), (int64_t)followerInfo, v39, v40, v41, v42, v43, v44);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass
    || (*((_QWORD *)klass + 8) = basePartyItem,
        sub_1C1AB78((PartyOrganizationUtility_o *)(klass + 64), (int64_t)basePartyItem, v45, v46, v47, v48, v49, v50),
        (klass = (char *)p_temporaryPartyInfo->klass) == 0LL)
    || (*((_QWORD *)klass + 9) = partyItem,
        sub_1C1AB78((PartyOrganizationUtility_o *)(klass + 72), (int64_t)partyItem, v51, v52, v53, v54, v55, v56),
        (v57 = p_temporaryPartyInfo->klass) == 0LL) )
  {
LABEL_18:
    sub_1C1AE30(klass, v31);
  }
  LODWORD(v57->_1.declaringType) = selectPartyMemberNum;
  if ( baseDeckItemList )
  {
    v58 = System_Array__Clone((System_Array_o *)baseDeckItemList, 0LL);
    if ( !v58 )
    {
      v69 = 0LL;
      v57->_1.parent = 0LL;
      p_parent = (PartyOrganizationUtility_o *)&v57->_1.parent;
      goto LABEL_17;
    }
    v65 = v58;
    v66 = sub_1C1AD10(v58, PartyListViewItem___TypeInfo);
    if ( v66 )
    {
      v57->_1.parent = (Il2CppClass *)v66;
      p_parent = (PartyOrganizationUtility_o *)&v57->_1.parent;
      v68 = sub_1C1AD10(v65, PartyListViewItem___TypeInfo);
      if ( v68 )
      {
        v69 = v68;
LABEL_17:
        sub_1C1AB78(p_parent, v69, v59, v60, v61, v62, v63, v64);
        return;
      }
    }
    v70 = (PartyOrganizationUtility_TemporaryPartyInfo_o *)sub_1C1B0F0(v65);
    PartyOrganizationUtility_TemporaryPartyInfo___ctor(v70, v71);
  }
}


void __fastcall PartyOrganizationUtility__UpdateInterruptionUseItem(
        PartyOrganizationUtility_o *this,
        System_Collections_Generic_List_FriendshipUpItemInfo__o *list,
        int32_t campaignType,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x22
  Il2CppObject *Master_object; // x0
  __int64 v21; // x1
  __int64 v22; // x23
  System_Func_object__bool__o *v23; // x20
  Il2CppObject *v24; // x0
  FriendshipUpItemInfo_o *v25; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *QuestUseItemEventCampaignsByItemId; // x0
  Il2CppObject *v27; // x21
  int32_t v28; // w21
  ItemEntity_o *v29; // x22
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int32_t v36; // w21
  ItemEntity_o *v37; // x22
  struct FriendshipUpItemInfo_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  int64_t outStartedAt; // [xsp+8h] [xbp-48h] BYREF
  int64_t outEndedAt; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BC3913 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventCampaignMaster___, list);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ItemMaster___, v8);
    sub_1C1ABD4(&DataManager_TypeInfo, v9);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v10);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___, v11);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_FirstOrDefault_FriendshipUpItemInfo___, v12);
    sub_1C1ABD4(&FriendshipUpItemInfo_TypeInfo, v13);
    sub_1C1ABD4(&System_Func_FriendshipUpItemInfo__bool__TypeInfo, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_FriendshipUpItemInfo__Add__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_FriendshipUpItemInfo__Remove__, v16);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__DisplayClass107_0__UpdateInterruptionUseItem_b__0__, v17);
    sub_1C1ABD4(&PartyOrganizationUtility___c__DisplayClass107_0_TypeInfo, v18);
    byte_4BC3913 = 1;
  }
  outEndedAt = 0LL;
  outStartedAt = 0LL;
  v19 = sub_1C1AE20(PartyOrganizationUtility___c__DisplayClass107_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_30;
  *(_DWORD *)(v19 + 16) = campaignType;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_30;
  v22 = v19 + 24;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          (Il2CppObject **)(v19 + 24),
          itemId,
          (const MethodInfo_32486C4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return;
  v23 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_FriendshipUpItemInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v19,
    Method_PartyOrganizationUtility___c__DisplayClass107_0__UpdateInterruptionUseItem_b__0__,
    0LL);
  v24 = System_Linq_Enumerable__FirstOrDefault_object__50081164(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_2FC2D8C *)Method_System_Linq_Enumerable_FirstOrDefault_FriendshipUpItemInfo___);
  if ( !v24 )
  {
    v28 = *(_DWORD *)(v19 + 16);
    v29 = *(ItemEntity_o **)(v19 + 24);
    v25 = (FriendshipUpItemInfo_o *)sub_1C1AE20(FriendshipUpItemInfo_TypeInfo);
    FriendshipUpItemInfo___ctor_32782196(v25, v28, v29, 0LL);
    if ( !list )
      goto LABEL_30;
    goto LABEL_23;
  }
  v25 = (FriendshipUpItemInfo_o *)v24;
  if ( LODWORD(v24[1].klass) != itemId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventCampaignMaster___);
    if ( !Master_object )
      goto LABEL_30;
    QuestUseItemEventCampaignsByItemId = EventCampaignMaster__GetQuestUseItemEventCampaignsByItemId(
                                           (EventCampaignMaster_o *)Master_object,
                                           *(_DWORD *)(v19 + 16),
                                           itemId,
                                           0LL);
    Master_object = System_Linq_Enumerable__FirstOrDefault_object_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)QuestUseItemEventCampaignsByItemId,
                      (const MethodInfo_2FC1D3C *)Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___);
    if ( Master_object )
    {
      v27 = Master_object;
      Master_object = *(Il2CppObject **)v22;
      if ( !*(_QWORD *)v22 )
        goto LABEL_30;
      Master_object = (Il2CppObject *)ItemEntity__IsEnable_40601260(
                                        (ItemEntity_o *)Master_object,
                                        (int32_t)v27[1].klass,
                                        0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = *(Il2CppObject **)v22;
        if ( *(_QWORD *)v22 )
        {
          ItemEntity__GetUseLimitAt(
            (ItemEntity_o *)Master_object,
            (int32_t)v27[1].klass,
            &outStartedAt,
            &outEndedAt,
            0LL);
          if ( *(_QWORD *)v22 )
          {
            v25->fields._Id_k__BackingField = *(_DWORD *)(*(_QWORD *)v22 + 16LL);
            v25->fields._EndedAt_k__BackingField = outEndedAt;
            goto LABEL_28;
          }
        }
LABEL_30:
        sub_1C1AE30(Master_object, v21);
      }
    }
    if ( !list )
      goto LABEL_30;
    System_Collections_Generic_List_object___Remove(
      (System_Collections_Generic_List_object__o *)list,
      (Il2CppObject *)v25,
      (const MethodInfo_363DDB8 *)Method_System_Collections_Generic_List_FriendshipUpItemInfo__Remove__);
    v36 = *(_DWORD *)(v19 + 16);
    v37 = *(ItemEntity_o **)(v19 + 24);
    v25 = (FriendshipUpItemInfo_o *)sub_1C1AE20(FriendshipUpItemInfo_TypeInfo);
    FriendshipUpItemInfo___ctor_32782196(v25, v36, v37, 0LL);
LABEL_23:
    items = list->fields._items;
    v39 = Method_System_Collections_Generic_List_FriendshipUpItemInfo__Add__;
    ++list->fields._version;
    if ( items )
    {
      size = list->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)list,
          (Il2CppObject *)v25,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        list->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v25;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)v25, v30, v31, v32, v33, v34, v35);
      }
      if ( v25 )
        goto LABEL_28;
    }
    goto LABEL_30;
  }
LABEL_28:
  v25->fields._InterruptionUseFlag_k__BackingField = 1;
}


void __fastcall PartyOrganizationUtility___SaveQuestUseItemUseState_b__117_0(
        PartyOrganizationUtility_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  FriendshipUpItemInfo_o **v20; // x20
  int v21; // w25
  bool IsGroupItem; // w0
  struct System_Collections_Generic_List_int____o *questUseItemStateList; // x21
  bool v24; // w24
  System_Func_object__bool__o *v25; // x0
  System_Func_TSource__bool__o *v26; // x23
  __int64 *v27; // x8
  System_Collections_Generic_List_object__o *v28; // x19
  int64_t v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int32_t Id_k__BackingField; // w9
  unsigned int v37; // w8
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0

  if ( (byte_4BC3920 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_FirstOrDefault_int_____, info);
    sub_1C1ABD4(&System_Func_int____bool__TypeInfo, v5);
    sub_1C1ABD4(&int___TypeInfo, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int____Add__, v7);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__DisplayClass117_0__SaveQuestUseItemUseState_b__2__, v8);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__DisplayClass117_0__SaveQuestUseItemUseState_b__3__, v9);
    sub_1C1ABD4(&PartyOrganizationUtility___c__DisplayClass117_0_TypeInfo, v10);
    byte_4BC3920 = 1;
  }
  v11 = sub_1C1AE20(PartyOrganizationUtility___c__DisplayClass117_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_26;
  *(_QWORD *)(v11 + 16) = info;
  v20 = (FriendshipUpItemInfo_o **)(v11 + 16);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)info, v14, v15, v16, v17, v18, v19);
  v12 = *(Il2CppObject **)(v11 + 16);
  if ( !v12 )
    goto LABEL_26;
  v21 = BYTE4(v12[5].monitor);
  IsGroupItem = FriendshipUpItemInfo__get_IsGroupItem((FriendshipUpItemInfo_o *)v12, 0LL);
  questUseItemStateList = this->fields.questUseItemStateList;
  v24 = IsGroupItem;
  v25 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_int____bool__TypeInfo);
  v26 = (System_Func_TSource__bool__o *)v25;
  if ( v24 )
    v27 = &Method_PartyOrganizationUtility___c__DisplayClass117_0__SaveQuestUseItemUseState_b__2__;
  else
    v27 = &Method_PartyOrganizationUtility___c__DisplayClass117_0__SaveQuestUseItemUseState_b__3__;
  System_Func_object__bool____ctor(v25, (Il2CppObject *)v11, *v27, 0LL);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__50081164(
          (System_Collections_Generic_IEnumerable_TSource__o *)questUseItemStateList,
          v26,
          (const MethodInfo_2FC2D8C *)Method_System_Linq_Enumerable_FirstOrDefault_int_____);
  if ( v12 )
  {
    if ( LODWORD(v12[1].monitor) > 2 )
    {
      LODWORD(v12[2].monitor) = v21;
      return;
    }
LABEL_27:
    sub_1C1AE38(v12, v13);
  }
  v28 = (System_Collections_Generic_List_object__o *)this->fields.questUseItemStateList;
  v12 = (Il2CppObject *)sub_1C1AC7C(int___TypeInfo, 3LL);
  if ( !*v20 )
    goto LABEL_26;
  v29 = (int64_t)v12;
  v12 = (Il2CppObject *)FriendshipUpItemInfo__get_IsGroupItem(*v20, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    Id_k__BackingField = 0;
  }
  else
  {
    if ( !*v20 )
      goto LABEL_26;
    Id_k__BackingField = (*v20)->fields._Id_k__BackingField;
  }
  if ( !v29 )
    goto LABEL_26;
  v37 = *(_DWORD *)(v29 + 24);
  if ( !v37 )
    goto LABEL_27;
  *(_DWORD *)(v29 + 32) = Id_k__BackingField;
  if ( !*v20 )
    goto LABEL_26;
  if ( v37 <= 1 )
    goto LABEL_27;
  *(_DWORD *)(v29 + 36) = (*v20)->fields._GroupId_k__BackingField;
  if ( v37 == 2 )
    goto LABEL_27;
  *(_DWORD *)(v29 + 40) = v21;
  if ( !v28
    || (items = v28->fields._items,
        v39 = Method_System_Collections_Generic_List_int____Add__,
        ++v28->fields._version,
        !items) )
  {
LABEL_26:
    sub_1C1AE30(v12, v13);
  }
  size = v28->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      (Il2CppObject *)v29,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &items->obj.klass + size;
    v28->fields._size = size + 1;
    v41[4] = (Il2CppClass *)v29;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v41 + 4), v29, v30, v31, v32, v33, v34, v35);
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
  sub_1C1AB78(&this->fields._BasePartyItem_k__BackingField);
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
  sub_1C1AB78(&this->fields._PartyItem_k__BackingField);
}


void __fastcall PartyOrganizationUtility__set_PartyItemSmc(
        PartyOrganizationUtility_o *this,
        PartyListViewItem_o *value,
        const MethodInfo *method)
{
  this->fields._PartyItemSmc_k__BackingField = value;
  sub_1C1AB78(&this->fields._PartyItemSmc_k__BackingField);
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
  sub_1C1AB78(
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC3921 & 1) == 0 )
  {
    sub_1C1ABD4(&PartyOrganizationUtility___c_TypeInfo, v1);
    byte_4BC3921 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(PartyOrganizationUtility___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PartyOrganizationUtility___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationUtility___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)PartyOrganizationUtility___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)eventCampaignEntity->fields.targetIds;
}


bool __fastcall PartyOrganizationUtility___c___GetAvailableFriendshipUpItemInfo_b__106_3(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C1AE30(this, 0LL);
  return !info->fields._IsFriendshipUpEventItem_k__BackingField || FriendshipUpItemInfo__IsObtained(info, 0LL);
}


int32_t __fastcall PartyOrganizationUtility___c___GetAvailableFriendshipUpItemInfo_b__106_4(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C1AE30(this, 0LL);
  return info->fields._GroupId_k__BackingField;
}


System_Collections_Generic_IEnumerable_FriendshipUpItemInfo__o *__fastcall PartyOrganizationUtility___c___GetAvailableFriendshipUpItemInfo_b__106_5(
        PartyOrganizationUtility___c_o *this,
        System_Linq_IGrouping_int__FriendshipUpItemInfo__o *itemInfoGroup,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Linq_IGrouping_int__FriendshipUpItemInfo__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  PartyOrganizationUtility___c_c *v19; // x0
  System_Func_T__TResult__o *_9__106_8; // x20
  Il2CppObject *v21; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x0
  PartyOrganizationUtility___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  System_Func_T1__T2__TResult__o *_9__106_9; // x20
  Il2CppObject *v33; // x21
  struct PartyOrganizationUtility___c_StaticFields *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  Il2CppObject *v41; // x20
  System_Collections_Generic_List_object__o *v42; // x19
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0

  if ( (byte_4BC3922 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Aggregate_FriendshipUpItemInfo___, itemInfoGroup);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_AsEnumerable_FriendshipUpItemInfo___, v4);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_OrderBy_FriendshipUpItemInfo__long___, v5);
    sub_1C1ABD4(&System_Func_FriendshipUpItemInfo__long__TypeInfo, v6);
    sub_1C1ABD4(&System_Func_FriendshipUpItemInfo__FriendshipUpItemInfo__FriendshipUpItemInfo__TypeInfo, v7);
    sub_1C1ABD4(&System_Linq_IGrouping_int__FriendshipUpItemInfo__TypeInfo, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_FriendshipUpItemInfo__Add__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_FriendshipUpItemInfo___ctor__, v10);
    sub_1C1ABD4(&System_Collections_Generic_List_FriendshipUpItemInfo__TypeInfo, v11);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_8__, v12);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_9__, v13);
    this = (PartyOrganizationUtility___c_o *)sub_1C1ABD4(&PartyOrganizationUtility___c_TypeInfo, v14);
    byte_4BC3922 = 1;
  }
  if ( !itemInfoGroup )
    goto LABEL_30;
  klass = itemInfoGroup->klass;
  v16 = *(unsigned __int16 *)(&itemInfoGroup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&itemInfoGroup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__FriendshipUpItemInfo__c **)p_offset - 1) != System_Linq_IGrouping_int__FriendshipUpItemInfo__TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C6CBB4(itemInfoGroup, System_Linq_IGrouping_int__FriendshipUpItemInfo__TypeInfo, 0LL);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__FriendshipUpItemInfo__o *, _QWORD))p_method)(
          itemInfoGroup,
          *(_QWORD *)(p_method + 8)) )
    return (System_Collections_Generic_IEnumerable_FriendshipUpItemInfo__o *)System_Linq_Enumerable__AsEnumerable_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemInfoGroup,
                                                                               (const MethodInfo_2FAD368 *)Method_System_Linq_Enumerable_AsEnumerable_FriendshipUpItemInfo___);
  v19 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v19 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_8 = (System_Func_T__TResult__o *)v19->static_fields->__9__106_8;
  if ( !_9__106_8 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = PartyOrganizationUtility___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__106_8 = (System_Func_T__TResult__o *)sub_1C1AE20(System_Func_FriendshipUpItemInfo__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__106_8,
      v21,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_8__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__106_8 = (struct System_Func_FriendshipUpItemInfo__long__o *)_9__106_8;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__106_8,
      (int64_t)_9__106_8,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = System_Linq_Enumerable__OrderBy_object__long_(
          (System_Collections_Generic_IEnumerable_TSource__o *)itemInfoGroup,
          (System_Func_TSource__TKey__o *)_9__106_8,
          (const MethodInfo_2FC85D4 *)Method_System_Linq_Enumerable_OrderBy_FriendshipUpItemInfo__long___);
  v30 = PartyOrganizationUtility___c_TypeInfo;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v30 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_9 = (System_Func_T1__T2__TResult__o *)v30->static_fields->__9__106_9;
  if ( !_9__106_9 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = PartyOrganizationUtility___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__106_9 = (System_Func_T1__T2__TResult__o *)sub_1C1AE20(System_Func_FriendshipUpItemInfo__FriendshipUpItemInfo__FriendshipUpItemInfo__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__106_9,
      v33,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_9__,
      0LL);
    v34 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v34->__9__106_9 = (struct System_Func_FriendshipUpItemInfo__FriendshipUpItemInfo__FriendshipUpItemInfo__o *)_9__106_9;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v34->__9__106_9, (int64_t)_9__106_9, v35, v36, v37, v38, v39, v40);
  }
  v41 = System_Linq_Enumerable__Aggregate_object_(
          v31,
          (System_Func_TSource__TSource__TSource__o *)_9__106_9,
          (const MethodInfo_2FA6CC0 *)Method_System_Linq_Enumerable_Aggregate_FriendshipUpItemInfo___);
  v42 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_FriendshipUpItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_FriendshipUpItemInfo___ctor__);
  if ( !v42
    || (items = v42->fields._items,
        v50 = Method_System_Collections_Generic_List_FriendshipUpItemInfo__Add__,
        ++v42->fields._version,
        !items) )
  {
LABEL_30:
    sub_1C1AE30(this, itemInfoGroup);
  }
  size = v42->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v42,
      v41,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
  }
  else
  {
    v52 = &items->obj.klass + size;
    v42->fields._size = size + 1;
    v52[4] = (Il2CppClass *)v41;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v52 + 4), (int64_t)v41, v43, v44, v45, v46, v47, v48);
  }
  return (System_Collections_Generic_IEnumerable_FriendshipUpItemInfo__o *)v42;
}


int32_t __fastcall PartyOrganizationUtility___c___GetAvailableFriendshipUpItemInfo_b__106_7(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C1AE30(this, 0LL);
  return info->fields._Priority_k__BackingField;
}


int64_t __fastcall PartyOrganizationUtility___c___GetAvailableFriendshipUpItemInfo_b__106_8(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *itemEntity,
        const MethodInfo *method)
{
  if ( !itemEntity )
    sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(this, result);
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
    sub_1C1AE30(this, 0LL);
  return info->fields._IsValid_k__BackingField;
}


int32_t __fastcall PartyOrganizationUtility___c___GetQuestUseItemIds_b__115_1(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C1AE30(this, 0LL);
  return info->fields._NotDuplicationGroupId_k__BackingField;
}


System_Collections_Generic_IEnumerable_FriendshipUpItemInfo__o *__fastcall PartyOrganizationUtility___c___GetQuestUseItemIds_b__115_2(
        PartyOrganizationUtility___c_o *this,
        System_Linq_IGrouping_int__FriendshipUpItemInfo__o *group,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Linq_IGrouping_int__FriendshipUpItemInfo__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  PartyOrganizationUtility___c_c *v17; // x0
  System_Func_object__int__o *_9__115_4; // x20
  Il2CppObject *v19; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x0
  PartyOrganizationUtility___c_c *v28; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x19
  System_Func_T__TResult__o *_9__115_5; // x20
  Il2CppObject *v31; // x21
  struct PartyOrganizationUtility___c_StaticFields *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0

  if ( (byte_4BC3923 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_AsEnumerable_FriendshipUpItemInfo___, group);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_OrderByDescending_FriendshipUpItemInfo__int___, v4);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Take_FriendshipUpItemInfo___, v5);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ThenBy_FriendshipUpItemInfo__long___, v6);
    sub_1C1ABD4(&System_Func_FriendshipUpItemInfo__long__TypeInfo, v7);
    sub_1C1ABD4(&System_Func_FriendshipUpItemInfo__int__TypeInfo, v8);
    sub_1C1ABD4(&System_Linq_IGrouping_int__FriendshipUpItemInfo__TypeInfo, v9);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_4__, v10);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_5__, v11);
    this = (PartyOrganizationUtility___c_o *)sub_1C1ABD4(&PartyOrganizationUtility___c_TypeInfo, v12);
    byte_4BC3923 = 1;
  }
  if ( !group )
    sub_1C1AE30(this, group);
  klass = group->klass;
  v14 = *(unsigned __int16 *)(&group->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&group->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__FriendshipUpItemInfo__c **)p_offset - 1) != System_Linq_IGrouping_int__FriendshipUpItemInfo__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C6CBB4(group, System_Linq_IGrouping_int__FriendshipUpItemInfo__TypeInfo, 0LL);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__FriendshipUpItemInfo__o *, _QWORD))p_method)(
          group,
          *(_QWORD *)(p_method + 8)) )
    return (System_Collections_Generic_IEnumerable_FriendshipUpItemInfo__o *)System_Linq_Enumerable__AsEnumerable_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)group,
                                                                               (const MethodInfo_2FAD368 *)Method_System_Linq_Enumerable_AsEnumerable_FriendshipUpItemInfo___);
  v17 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v17 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__115_4 = (System_Func_object__int__o *)v17->static_fields->__9__115_4;
  if ( !_9__115_4 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = PartyOrganizationUtility___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__115_4 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_FriendshipUpItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__115_4,
      v19,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_4__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__115_4 = (struct System_Func_FriendshipUpItemInfo__int__o *)_9__115_4;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__115_4,
      (int64_t)_9__115_4,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)group,
          (System_Func_TSource__TKey__o *)_9__115_4,
          (const MethodInfo_2FC8A98 *)Method_System_Linq_Enumerable_OrderByDescending_FriendshipUpItemInfo__int___);
  v28 = PartyOrganizationUtility___c_TypeInfo;
  v29 = v27;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v28 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__115_5 = (System_Func_T__TResult__o *)v28->static_fields->__9__115_5;
  if ( !_9__115_5 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = PartyOrganizationUtility___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__115_5 = (System_Func_T__TResult__o *)sub_1C1AE20(System_Func_FriendshipUpItemInfo__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__115_5,
      v31,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__115_5__,
      0LL);
    v32 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v32->__9__115_5 = (struct System_Func_FriendshipUpItemInfo__long__o *)_9__115_5;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v32->__9__115_5, (int64_t)_9__115_5, v33, v34, v35, v36, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__long_(
                                                               v29,
                                                               (System_Func_TSource__TKey__o *)_9__115_5,
                                                               (const MethodInfo_2FD83D0 *)Method_System_Linq_Enumerable_ThenBy_FriendshipUpItemInfo__long___);
  return (System_Collections_Generic_IEnumerable_FriendshipUpItemInfo__o *)System_Linq_Enumerable__Take_object_(
                                                                             v39,
                                                                             1,
                                                                             (const MethodInfo_2FD7C24 *)Method_System_Linq_Enumerable_Take_FriendshipUpItemInfo___);
}


int32_t __fastcall PartyOrganizationUtility___c___GetQuestUseItemIds_b__115_3(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C1AE30(this, 0LL);
  return info->fields._Id_k__BackingField;
}


int32_t __fastcall PartyOrganizationUtility___c___GetQuestUseItemIds_b__115_4(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C1AE30(this, 0LL);
  return info->fields._Value_k__BackingField;
}


int64_t __fastcall PartyOrganizationUtility___c___GetQuestUseItemIds_b__115_5(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C1AE30(this, 0LL);
  return info->fields._EndedAt_k__BackingField;
}


bool __fastcall PartyOrganizationUtility___c___IsAvailableFriendshipUpItem_b__108_0(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C1AE30(this, 0LL);
  return info->fields._IsValid_k__BackingField;
}


bool __fastcall PartyOrganizationUtility___c___OpenFriendshipUpItemExpiredDialog_b__113_0(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1C1AE30(this, 0LL);
  return itemInfo->fields._IsValid_k__BackingField;
}


bool __fastcall PartyOrganizationUtility___c___OpenFriendshipUpItemExpiredDialog_b__113_1(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1C1AE30(this, 0LL);
  return FriendshipUpItemInfo__GetUseFlag(itemInfo, 0LL) && !FriendshipUpItemInfo__IsEventPeriod(itemInfo, 0LL);
}


int32_t __fastcall PartyOrganizationUtility___c___OpenFriendshipUpItemExpiredDialog_b__113_2(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1C1AE30(this, 0LL);
  return itemInfo->fields._BasePriority_k__BackingField;
}


bool __fastcall PartyOrganizationUtility___c___OpenQuestUseItemDialogTutorial_b__114_0(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1C1AE30(this, 0LL);
  return itemInfo->fields._IsValid_k__BackingField;
}


int32_t __fastcall PartyOrganizationUtility___c___OpenQuestUseItemDialogTutorial_b__114_1(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(this, e);
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
    sub_1C1AE30(this, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Int32_array *warGroupIds; // x21
  System_Func_int__bool__o *v11; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x20
  System_Func_int__bool__o *_9__6; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  v4 = this;
  if ( (byte_4BC3925 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_int____77547112, eventCampaignEntity);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_All_int___, v5);
    sub_1C1ABD4(&System_Func_int__bool__TypeInfo, v6);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__6__, v7);
    this = (PartyOrganizationUtility___c__DisplayClass105_0_o *)sub_1C1ABD4(
                                                                  &Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_g__IsMatchWarId_1__,
                                                                  v8);
    byte_4BC3925 = 1;
  }
  if ( !eventCampaignEntity )
    sub_1C1AE30(this, eventCampaignEntity);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventCampaignEntity->fields.warGroupIds, 0LL) )
    return 1;
  warGroupIds = eventCampaignEntity->fields.warGroupIds;
  v11 = (System_Func_int__bool__o *)sub_1C1AE20(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v11,
    (Il2CppObject *)v4,
    Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_g__IsMatchWarId_1__,
    0LL);
  if ( !BasicHelper__Any_int__49848700(
          warGroupIds,
          (System_Func_T__bool__o *)v11,
          (const MethodInfo_2F8A17C *)Method_BasicHelper_Any_int____77547112) )
    return 0;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)eventCampaignEntity->fields.warGroupIds;
  _9__6 = v4->fields.__9__6;
  if ( !_9__6 )
  {
    _9__6 = (System_Func_int__bool__o *)sub_1C1AE20(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__6,
      (Il2CppObject *)v4,
      Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__6__,
      0LL);
    v4->fields.__9__6 = _9__6;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v4->fields.__9__6, (int64_t)_9__6, v14, v15, v16, v17, v18, v19);
  }
  return System_Linq_Enumerable__All_int_(
           v12,
           (System_Func_TSource__bool__o *)_9__6,
           (const MethodInfo_2FA8EA8 *)Method_System_Linq_Enumerable_All_int___);
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
    sub_1C1AE30(this, warGroupEntity);
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
    sub_1C1AE30(this, warGroupId);
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
    sub_1C1AE30(this, *(_QWORD *)&eventId);
  }
  return (char)this;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationUtility___c__DisplayClass105_0___GetAvailableEventCampaignEntities_g__IsMatchWarId_1(
        PartyOrganizationUtility___c__DisplayClass105_0_o *this,
        int32_t warGroupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WarGroupMaster_o *warGroupMaster; // x0
  System_Object_array *v8; // x20
  System_Func_object__bool__o *v9; // x21
  WarGroupEntity_array *entities; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC3924 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_WarGroupEntity___, *(_QWORD *)&warGroupId);
    sub_1C1ABD4(&System_Func_WarGroupEntity__bool__TypeInfo, v5);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__5__, v6);
    byte_4BC3924 = 1;
  }
  entities = 0LL;
  warGroupMaster = this->fields.warGroupMaster;
  if ( !warGroupMaster )
    sub_1C1AE30(0LL, *(_QWORD *)&warGroupId);
  if ( WarGroupMaster__TryGetWarList(warGroupMaster, &entities, warGroupId, 0LL) )
  {
    v8 = (System_Object_array *)entities;
    v9 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_WarGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v9,
      (Il2CppObject *)this,
      Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__5__,
      0LL);
    return BasicHelper__Any_object__49849512(
             v8,
             (System_Func_T__bool__o *)v9,
             (const MethodInfo_2F8A4A8 *)Method_BasicHelper_Any_WarGroupEntity___);
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
  __int64 v7; // x1
  Il2CppObject *ItemData; // x20
  __f__AnonymousType2__eventCampaignEntity_j__TPar___itemEntity_j__TPar__o *v9; // x21

  v6 = this;
  if ( (byte_4BC3926 & 1) == 0 )
  {
    sub_1C1ABD4(&Method___f__AnonymousType2_EventCampaignEntity__ItemEntity___ctor__, eventCampaignEntity);
    this = (PartyOrganizationUtility___c__DisplayClass106_0_o *)sub_1C1ABD4(
                                                                  &_f__AnonymousType2_EventCampaignEntity__ItemEntity__TypeInfo,
                                                                  v7);
    byte_4BC3926 = 1;
  }
  if ( !eventCampaignEntity
    || (this = (PartyOrganizationUtility___c__DisplayClass106_0_o *)v6->fields.itemMaster) == 0LL )
  {
    sub_1C1AE30(this, eventCampaignEntity);
  }
  ItemData = (Il2CppObject *)ItemMaster__GetItemData(
                               (ItemMaster_o *)this,
                               itemId,
                               eventCampaignEntity->fields.eventId,
                               0LL);
  v9 = (__f__AnonymousType2__eventCampaignEntity_j__TPar___itemEntity_j__TPar__o *)sub_1C1AE20(_f__AnonymousType2_EventCampaignEntity__ItemEntity__TypeInfo);
  _f__AnonymousType2_object__object____ctor(
    v9,
    (Il2CppObject *)eventCampaignEntity,
    ItemData,
    (const MethodInfo_3172E5C *)Method___f__AnonymousType2_EventCampaignEntity__ItemEntity___ctor__);
  return (__f__AnonymousType2_EventCampaignEntity__ItemEntity__o *)v9;
}


void __fastcall PartyOrganizationUtility___c__DisplayClass106_0___GetAvailableFriendshipUpItemInfo_b__10(
        PartyOrganizationUtility___c__DisplayClass106_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !this->fields.__4__this )
    sub_1C1AE30(this, id);
  PartyOrganizationUtility__UpdateInterruptionUseItem((PartyOrganizationUtility_o *)this, this->fields.list, 36, id, v3);
}


FriendshipUpItemInfo_o *__fastcall PartyOrganizationUtility___c__DisplayClass106_0___GetAvailableFriendshipUpItemInfo_b__2(
        PartyOrganizationUtility___c__DisplayClass106_0_o *this,
        __f__AnonymousType2_EventCampaignEntity__ItemEntity__o *info,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c__DisplayClass106_0_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserItemMaster_o *userItemMaster; // x20
  struct ItemEntity_o *itemEntity_i__Field; // x8
  UserItemEntity_o *EntityDefinitely; // x0
  int32_t num; // w20
  EventCampaignEntity_o *eventCampaignEntity_i__Field; // x19
  ItemEntity_o *v14; // x21
  __f__AnonymousType2_EventCampaignEntity__ItemEntity__Fields *p_fields; // t2
  FriendshipUpItemInfo_o *v16; // x22

  v4 = this;
  if ( (byte_4BC3927 & 1) == 0 )
  {
    sub_1C1ABD4(&FriendshipUpItemInfo_TypeInfo, info);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v5);
    sub_1C1ABD4(&Method___f__AnonymousType2_EventCampaignEntity__ItemEntity__get_eventCampaignEntity__, v6);
    this = (PartyOrganizationUtility___c__DisplayClass106_0_o *)sub_1C1ABD4(
                                                                  &Method___f__AnonymousType2_EventCampaignEntity__ItemEntity__get_itemEntity__,
                                                                  v7);
    byte_4BC3927 = 1;
  }
  if ( !info )
    goto LABEL_19;
  if ( !info->fields._itemEntity_i__Field || !info->fields._eventCampaignEntity_i__Field )
    return 0LL;
  userItemMaster = v4->fields.userItemMaster;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, info);
    byte_4BC2585 = 1;
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
    sub_1C1AE30(this, info);
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
  v14 = p_fields->_itemEntity_i__Field;
  v16 = (FriendshipUpItemInfo_o *)sub_1C1AE20(FriendshipUpItemInfo_TypeInfo);
  FriendshipUpItemInfo___ctor(v16, v14, num, eventCampaignEntity_i__Field, 0LL);
  return v16;
}


void __fastcall PartyOrganizationUtility___c__DisplayClass106_0___GetAvailableFriendshipUpItemInfo_b__6(
        PartyOrganizationUtility___c__DisplayClass106_0_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  Il2CppObject *IsGroupItem; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x19
  struct PartyOrganizationUtility_o *_4__this; // x8
  char v20; // w23
  System_Collections_Generic_IEnumerable_TSource__o *questUseItemStateList; // x20
  System_Func_object__bool__o *v22; // x0
  System_Func_TSource__bool__o *v23; // x22
  __int64 *v24; // x8

  if ( (byte_4BC3928 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_FirstOrDefault_int_____, info);
    sub_1C1ABD4(&System_Func_int____bool__TypeInfo, v5);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__DisplayClass106_1__GetAvailableFriendshipUpItemInfo_b__11__, v6);
    sub_1C1ABD4(&Method_PartyOrganizationUtility___c__DisplayClass106_1__GetAvailableFriendshipUpItemInfo_b__12__, v7);
    sub_1C1ABD4(&PartyOrganizationUtility___c__DisplayClass106_1_TypeInfo, v8);
    byte_4BC3928 = 1;
  }
  v9 = sub_1C1AE20(PartyOrganizationUtility___c__DisplayClass106_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 16) = info;
  v18 = v9 + 16;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)info, v12, v13, v14, v15, v16, v17);
  IsGroupItem = *(Il2CppObject **)(v9 + 16);
  if ( !IsGroupItem )
    goto LABEL_14;
  IsGroupItem = (Il2CppObject *)FriendshipUpItemInfo__get_IsGroupItem((FriendshipUpItemInfo_o *)IsGroupItem, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v20 = (char)IsGroupItem;
  questUseItemStateList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.questUseItemStateList;
  v22 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_int____bool__TypeInfo);
  v23 = (System_Func_TSource__bool__o *)v22;
  if ( (v20 & 1) != 0 )
    v24 = &Method_PartyOrganizationUtility___c__DisplayClass106_1__GetAvailableFriendshipUpItemInfo_b__11__;
  else
    v24 = &Method_PartyOrganizationUtility___c__DisplayClass106_1__GetAvailableFriendshipUpItemInfo_b__12__;
  System_Func_object__bool____ctor(v22, (Il2CppObject *)v9, *v24, 0LL);
  IsGroupItem = System_Linq_Enumerable__FirstOrDefault_object__50081164(
                  questUseItemStateList,
                  v23,
                  (const MethodInfo_2FC2D8C *)Method_System_Linq_Enumerable_FirstOrDefault_int_____);
  if ( IsGroupItem )
  {
    if ( LODWORD(IsGroupItem[1].monitor) <= 2 )
      sub_1C1AE38(IsGroupItem, v11);
    if ( *(_QWORD *)v18 )
    {
      *(_BYTE *)(*(_QWORD *)v18 + 92LL) = LODWORD(IsGroupItem[2].monitor) == 1;
      return;
    }
LABEL_14:
    sub_1C1AE30(IsGroupItem, v11);
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
    sub_1C1AE38(this, list);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1C1AE30(this, list);
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
    sub_1C1AE38(this, list);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1C1AE30(this, list);
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
    sub_1C1AE30(this, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *actionList; // x19
  System_Action_object__o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4BC3929 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_Action__TypeInfo, itemInfo);
    sub_1C1ABD4(&Method_FriendshipUpItemInfo_OpenExpiredDialog__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Action_Action___Add__, v6);
    byte_4BC3929 = 1;
  }
  actionList = (System_Collections_Generic_List_object__o *)this->fields.actionList;
  v8 = (System_Action_object__o *)sub_1C1AE20(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v8, (Il2CppObject *)itemInfo, Method_FriendshipUpItemInfo_OpenExpiredDialog__, 0LL);
  if ( !actionList
    || (items = actionList->fields._items,
        v18 = Method_System_Collections_Generic_List_Action_Action___Add__,
        ++actionList->fields._version,
        !items) )
  {
    sub_1C1AE30(v9, v10);
  }
  size = actionList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      actionList,
      (Il2CppObject *)v8,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    actionList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v8;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v20 + 4), (int64_t)v8, v11, v12, v13, v14, v15, v16);
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
    sub_1C1AE30(this, 0LL);
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
    sub_1C1AE38(this, list);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1C1AE30(this, list);
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
    sub_1C1AE38(this, list);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1C1AE30(this, list);
  return list->m_Items[1] == info->fields._Id_k__BackingField;
}