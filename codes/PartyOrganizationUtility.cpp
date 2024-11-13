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
  __int64 v9; // x2

  if ( (byte_4B12110 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationUtility_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_6972/*"FriendshipUpItemUseState"*/, v8, v9);
    byte_4B12110 = 1;
  }
  PartyOrganizationUtility_TypeInfo->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE = (struct System_String_o *)StringLiteral_6972/*"FriendshipUpItemUseState"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)PartyOrganizationUtility_TypeInfo->static_fields,
    StringLiteral_6972/*"FriendshipUpItemUseState"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PartyOrganizationUtility___ctor(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_Dictionary_int__object__o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B1210F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility___ctor__, v11, v12);
    byte_4B1210F = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)v13;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  v23 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo,
                                                                  v20,
                                                                  v21,
                                                                  v22);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v23,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  this->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._npcFollowerInfos, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_37DF02C *)Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
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
  __int64 v7; // x2
  System_String_o *v8; // x20
  System_String_o *v9; // x21
  System_String_o *v10; // x0
  Il2CppObject *restrictionDialogHistoryList; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppClass *klass; // x8
  _QWORD *v21; // x9
  __int64 monitor_low; // x10
  __int64 v23; // x8
  int32_t v24; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v25; // [xsp+8h] [xbp-28h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-24h] BYREF

  v25 = phaseId;
  v26 = questId;
  v24 = restrictionId;
  if ( (byte_4B12101 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&questId, *(_QWORD *)&phaseId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v6, v7);
    byte_4B12101 = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v26, 0LL);
  v9 = System_Int32__ToString((int32_t)&v25, 0LL);
  v10 = System_Int32__ToString((int32_t)&v24, 0LL);
  restrictionDialogHistoryList = (Il2CppObject *)System_String__Concat_62412480(v8, v9, v10, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_11;
  v13 = restrictionDialogHistoryList;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)this->fields.restrictionDialogHistoryList,
         restrictionDialogHistoryList,
         (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    return;
  }
  restrictionDialogHistoryList = (Il2CppObject *)this->fields.restrictionDialogHistoryList;
  if ( !restrictionDialogHistoryList
    || (klass = restrictionDialogHistoryList[1].klass,
        v21 = Method_System_Collections_Generic_List_string__Add__,
        ++HIDWORD(restrictionDialogHistoryList[1].monitor),
        !klass) )
  {
LABEL_11:
    sub_1BCAA3C(restrictionDialogHistoryList, v12);
  }
  monitor_low = SLODWORD(restrictionDialogHistoryList[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)restrictionDialogHistoryList,
      v13,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = (__int64)klass + 8 * monitor_low;
    LODWORD(restrictionDialogHistoryList[1].monitor) = monitor_low + 1;
    *(_QWORD *)(v23 + 32) = v13;
    sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 32), (int64_t)v13, v14, v15, v16, v17, v18, v19);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._normalFollowerInfo, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._normalFollowerInfo, 0LL, v2, v3, v4, v5, v6, v7);
  p_normalFollowerInfo[1] = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUtility__ClearNpcFollowerInfo(
        PartyOrganizationUtility_o *this,
        int32_t key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcFollowerInfos; // x0

  if ( (byte_4B12107 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__, *(_QWORD *)&key, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__, v5, v6);
    byte_4B12107 = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_1BCAA3C(0LL, *(_QWORD *)&key);
  if ( (key & 0x80000000) != 0 )
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
      (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
  else
    System_Collections_Generic_Dictionary_int__object___Remove(
      (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
      key,
      (const MethodInfo_320736C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
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

  if ( (byte_4B120FF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B120FF = 1;
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
    sub_1BCA784((PartyOrganizationUtility_o *)&v9->fields.bgmName, (int64_t)v12, v2, v3, v4, v5, v6, v7);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    klass->_1.this_arg.data = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&klass->_1.this_arg, 0LL, v14, v15, v16, v17, v18, v19);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    *(_QWORD *)&klass->_1.this_arg.bits = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&klass->_1.this_arg.bits, 0LL, v21, v22, v23, v24, v25, v26);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass
      || (klass->_1.element_class = 0LL,
          sub_1BCA784((PartyOrganizationUtility_o *)&klass->_1.element_class, 0LL, v27, v28, v29, v30, v31, v32),
          (klass = p_temporaryPartyInfo->klass) == 0LL)
      || (klass->_1.castClass = 0LL,
          sub_1BCA784((PartyOrganizationUtility_o *)&klass->_1.castClass, 0LL, v33, v34, v35, v36, v37, v38),
          (klass = p_temporaryPartyInfo->klass) == 0LL) )
    {
LABEL_11:
      sub_1BCAA3C(klass, v13);
    }
    klass->_1.parent = 0LL;
    p_parent = (PartyOrganizationUtility_o *)&klass->_1.parent;
    *(_DWORD *)&p_parent[-1].fields._IsQuestStartMenuMode_k__BackingField = -1;
    sub_1BCA784(p_parent, 0LL, v39, v40, v41, v42, v43, v44);
    p_temporaryPartyInfo->klass = 0LL;
    sub_1BCA784(p_temporaryPartyInfo, 0LL, v46, v47, v48, v49, v50, v51);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  Il2CppObject *Instance; // x0
  __int64 v52; // x1
  ItemEntity_o *AvailableFriendshipUpItemEventCampaigns; // x21
  Il2CppObject *MasterData_object; // x20
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Collections_Generic_List_object__o *v58; // x19
  ItemEntity_o *ItemData; // x0
  int64_t v60; // x1
  _QWORD *monitor; // x21
  __int64 v62; // x8
  unsigned __int64 v63; // x25
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x19
  PartyOrganizationUtility___c_c *v78; // x8
  System_Func_T__TResult__o *_9__89_0; // x20
  Il2CppObject *v80; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  __int64 v89; // x1
  System_Collections_Generic_List_object__o *v90; // x19
  UserItemMaster_o *v91; // x20
  __int64 v92; // x1
  int64_t UserId; // x0
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v95; // x1
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v99; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4B12109 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v3, v4);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_ItemEntity___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_ItemEntity__long___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_ItemEntity___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v25, v26);
    sub_1BCA7E0(&System_Func_ItemEntity__long__TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__Add__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v39, v40);
    sub_1BCA7E0(&System_Collections_Generic_List_ItemEntity__TypeInfo, v41, v42);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v43, v44);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45, v46);
    sub_1BCA7E0(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemEntity_b__89_0__, v47, v48);
    sub_1BCA7E0(&PartyOrganizationUtility___c_TypeInfo, v49, v50);
    byte_4B12109 = 1;
  }
  memset(&v99, 0, sizeof(v99));
  memset(&v98, 0, sizeof(v98));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_55;
  AvailableFriendshipUpItemEventCampaigns = (ItemEntity_o *)EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                                              (EventCampaignMaster_o *)Instance,
                                                              0LL);
  if ( !AvailableFriendshipUpItemEventCampaigns )
    return AvailableFriendshipUpItemEventCampaigns;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  v58 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                       v55,
                                                       v56,
                                                       v57);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v97,
    (System_Collections_Generic_List_object__o *)AvailableFriendshipUpItemEventCampaigns,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v99 = v97;
  while ( 1 )
  {
    ItemData = (ItemEntity_o *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                 &v99,
                                 (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( ((unsigned __int8)ItemData & 1) == 0 )
      break;
    if ( !v99.fields._current )
      sub_1BCAA3C(ItemData, v60);
    monitor = v99.fields._current[2].monitor;
    if ( monitor )
    {
      v62 = monitor[3];
      if ( v62 )
      {
        if ( (int)v62 >= 1 )
        {
          v63 = 0LL;
          do
          {
            if ( v63 >= (unsigned int)v62 )
              sub_1BCAA44(ItemData, v60);
            if ( !MasterData_object )
              sub_1BCAA3C(ItemData, v60);
            ItemData = ItemMaster__GetItemData((ItemMaster_o *)MasterData_object, *((_DWORD *)monitor + v63 + 8), 0LL);
            v60 = (int64_t)ItemData;
            if ( ItemData )
            {
              if ( !v58 )
                sub_1BCAA3C(ItemData, ItemData);
              items = v58->fields._items;
              v71 = Method_System_Collections_Generic_List_ItemEntity__Add__;
              ++v58->fields._version;
              if ( !items )
                sub_1BCAA3C(ItemData, ItemData);
              size = v58->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v58,
                  (Il2CppObject *)ItemData,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
              }
              else
              {
                v73 = &items->obj.klass + size;
                v58->fields._size = size + 1;
                v73[4] = (Il2CppClass *)v60;
                sub_1BCA784((PartyOrganizationUtility_o *)(v73 + 4), v60, v64, v65, v66, v67, v68, v69);
              }
            }
            LODWORD(v62) = *((_DWORD *)monitor + 6);
            ++v63;
          }
          while ( (__int64)v63 < (int)v62 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v99,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( !v58 )
    goto LABEL_55;
  if ( v58->fields._size <= 0 )
    return 0LL;
  v77 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v58,
          (const MethodInfo_2F3012C *)Method_System_Linq_Enumerable_Distinct_ItemEntity___);
  v78 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v74);
    v78 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__89_0 = (System_Func_T__TResult__o *)v78->static_fields->__9__89_0;
  if ( !_9__89_0 )
  {
    if ( !v78->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v78, v74);
      v78 = PartyOrganizationUtility___c_TypeInfo;
    }
    v80 = (Il2CppObject *)v78->static_fields->__9;
    _9__89_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_ItemEntity__long__TypeInfo, v74, v75, v76);
    System_Func_object__long____ctor(
      _9__89_0,
      v80,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemEntity_b__89_0__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__89_0 = (struct System_Func_ItemEntity__long__o *)_9__89_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__89_0,
      (int64_t)_9__89_0,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87);
  }
  v88 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__long_(
                                                               v77,
                                                               (System_Func_TSource__TKey__o *)_9__89_0,
                                                               (const MethodInfo_2F3B400 *)Method_System_Linq_Enumerable_OrderBy_ItemEntity__long___);
  v90 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v88,
                                                       (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_ItemEntity___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v89);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !v90 )
LABEL_55:
    sub_1BCAA3C(Instance, v52);
  v91 = (UserItemMaster_o *)Instance;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v97,
    v90,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v98 = v97;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v98,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__) )
  {
    AvailableFriendshipUpItemEventCampaigns = (ItemEntity_o *)v98.fields._current;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v92);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !AvailableFriendshipUpItemEventCampaigns )
      sub_1BCAA3C(UserId, UserId);
    if ( !v91 )
      sub_1BCAA3C(UserId, UserId);
    EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                         v91,
                         UserId,
                         AvailableFriendshipUpItemEventCampaigns->fields.id,
                         0LL);
    if ( !EntityDefinitely )
      sub_1BCAA3C(0LL, v95);
    if ( EntityDefinitely->fields.num >= 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v98,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
      return AvailableFriendshipUpItemEventCampaigns;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v98,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  return (ItemEntity_o *)System_Collections_Generic_List_object___get_Item(
                           v90,
                           0,
                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
}


int32_t __fastcall PartyOrganizationUtility__GetAvailableFriendshipUpItemNum(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_object__o *AvailableFriendshipUpItemEventCampaigns; // x19
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v23; // x21
  int v24; // w25
  ItemEntity_o *ItemData; // x0
  __int64 v26; // x1
  _QWORD *monitor; // x28
  __int64 v28; // x8
  unsigned __int64 v29; // x29
  int32_t v30; // w22
  int64_t UserId; // x0
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v33; // x1
  UserItemEntity_o *v34; // x23
  int num; // w9
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1210A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v3, v4);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B1210A = 1;
  }
  memset(&v39, 0, sizeof(v39));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_36;
  AvailableFriendshipUpItemEventCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                                                                           (EventCampaignMaster_o *)Instance,
                                                                                           0LL);
  if ( !AvailableFriendshipUpItemEventCampaigns )
    return (int)AvailableFriendshipUpItemEventCampaigns;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_36:
    sub_1BCAA3C(Instance, v20);
  }
  v23 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    AvailableFriendshipUpItemEventCampaigns,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v24 = 0;
  v39 = v38;
LABEL_9:
  LODWORD(AvailableFriendshipUpItemEventCampaigns) = v24;
  while ( 1 )
  {
    ItemData = (ItemEntity_o *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                 &v39,
                                 (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( ((unsigned __int8)ItemData & 1) == 0 )
      break;
    if ( !v39.fields._current )
      sub_1BCAA3C(ItemData, v26);
    monitor = v39.fields._current[2].monitor;
    if ( monitor )
    {
      v28 = monitor[3];
      if ( v28 )
      {
        if ( (int)v28 >= 1 )
        {
          v29 = 0LL;
          do
          {
            if ( v29 >= (unsigned int)v28 )
              sub_1BCAA44(ItemData, v26);
            v30 = *((_DWORD *)monitor + v29 + 8);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26);
            UserId = NetworkManager__get_UserId(0LL);
            if ( !v23 )
              sub_1BCAA3C(UserId, UserId);
            EntityDefinitely = UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)v23, UserId, v30, 0LL);
            if ( !MasterData_object )
              sub_1BCAA3C(EntityDefinitely, v33);
            v34 = EntityDefinitely;
            ItemData = ItemMaster__GetItemData((ItemMaster_o *)MasterData_object, v30, 0LL);
            if ( !v34 )
              sub_1BCAA3C(ItemData, v26);
            num = v34->fields.num;
            LODWORD(v28) = *((_DWORD *)monitor + 6);
            ++v29;
            if ( num < 1 || ItemData == 0LL )
              num = 0;
            v24 += num;
          }
          while ( (__int64)v29 < (int)v28 );
          goto LABEL_9;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return (int)AvailableFriendshipUpItemEventCampaigns;
}


int64_t __fastcall PartyOrganizationUtility__GetFriendshipUpItemEndedTime(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  int64_t result; // x0

  if ( (byte_4B1210B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method, v2);
    byte_4B1210B = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  result = (int64_t)PartyOrganizationUtility__GetAvailableFriendshipUpItemEntity(
                      (PartyOrganizationUtility_o *)Instance,
                      v4);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  __int64 v13; // x1
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1210D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMaster_UserInterruptionQuestMaster___,
      *(_QWORD *)&questId,
      *(_QWORD *)&questPhase);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    byte_4B1210D = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
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
    sub_1BCAA3C(UserId, v13);
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
  if ( (byte_4B12106 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_int__FollowerInfo___, *(_QWORD *)&key, method);
    byte_4B12106 = 1;
  }
  return (FollowerInfo_o *)BasicHelper__GetValue_int__object_(
                             (System_Collections_Generic_Dictionary_K__V__o *)this->fields._npcFollowerInfos,
                             key,
                             0LL,
                             (const MethodInfo_2F01004 *)Method_BasicHelper_GetValue_int__FollowerInfo___);
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Text_StringBuilder_o *v31; // x20
  __int64 v32; // x1
  System_String_o *v33; // x0
  System_String_o *v34; // x24
  __int64 v35; // x1
  System_String_o *v36; // x26
  Il2CppObject *RarityType; // x0
  System_String_o *v38; // x25
  System_String_o *v39; // x0
  System_String_o *v40; // x23
  System_String_o *v41; // x0
  System_String_o *v42; // x22
  System_String_o *v43; // x26
  System_String_o *v44; // x27
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0
  __int64 v47; // x1
  System_String_o *v48; // x21
  int32_t stringLength; // w27
  int32_t v50; // w28

  if ( (byte_4B12104 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, maxLength, servantName);
    sub_1BCA7E0(&System_Math_TypeInfo, v13, v14);
    sub_1BCA7E0(&Rarity_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_10260/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_10264/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_10263/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_10259/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_10262/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_10261/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, v29, v30);
    byte_4B12104 = 1;
  }
  v31 = (System_Text_StringBuilder_o *)sub_1BCAA2C(
                                         System_Text_StringBuilder_TypeInfo,
                                         maxLength,
                                         servantName,
                                         *(_QWORD *)&servantRarity);
  System_Text_StringBuilder___ctor(v31, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_10259/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, 0LL);
  v34 = System_String__Format(v33, (Il2CppObject *)servantName, 0LL);
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_10260/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v35);
  RarityType = (Il2CppObject *)Rarity__getRarityType(servantRarity, 0LL);
  v38 = System_String__Format(v36, RarityType, 0LL);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_10261/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, 0LL);
  v40 = System_String__Format(v39, (Il2CppObject *)equipName, 0LL);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_10262/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, 0LL);
  v42 = System_String__Format(v41, (Il2CppObject *)skillName, 0LL);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_10263/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, 0LL);
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_10264/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, 0LL);
  v45 = (Il2CppObject *)Rarity__getRarityType(actMaxRarity, 0LL);
  v46 = System_String__Format(v44, v45, 0LL);
  if ( !v34 || !v40 )
    goto LABEL_14;
  v48 = v46;
  stringLength = v34->fields._stringLength;
  v50 = v40->fields._stringLength;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v47);
  v46 = (System_String_o *)System_Math__Max_63220196(stringLength, v50, 0LL);
  *maxLength = (int)v46;
  if ( !v42
    || (v46 = (System_String_o *)System_Math__Max_63220196((int32_t)v46, v42->fields._stringLength, 0LL),
        *maxLength = (int)v46,
        !v31) )
  {
LABEL_14:
    sub_1BCAA3C(v46, v47);
  }
  System_Text_StringBuilder__Append_61563116(v31, v34, 0LL);
  System_Text_StringBuilder__Append_61563116(v31, v38, 0LL);
  System_Text_StringBuilder__Append_61563116(v31, v40, 0LL);
  System_Text_StringBuilder__Append_61563116(v31, v42, 0LL);
  System_Text_StringBuilder__Append_61563116(v31, v43, 0LL);
  System_Text_StringBuilder__Append_61563116(v31, v48, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v31->klass->vtable._3_ToString.method)(
                              v31,
                              v31->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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

  if ( (byte_4B1210C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, startingNum, subNum);
    byte_4B1210C = 1;
  }
  *startingNum = 0;
  *subNum = 0;
  *myCnt = 0;
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, startingNum);
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
        j_il2cpp_runtime_class_init_0(v9, startingNum);
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
          sub_1BCAA3C(PartyItemSmc_k__BackingField, startingNum);
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
        j_il2cpp_runtime_class_init_0(v9, startingNum);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableFriendshipUpItemEventCampaigns; // x0

  if ( (byte_4B12108 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B12108 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v8);
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
  __int64 v9; // x2
  System_String_o *v10; // x21
  System_String_o *v11; // x22
  System_String_o *v12; // x0
  Il2CppObject *restrictionDialogHistoryList; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  bool v22; // w22
  Il2CppClass *klass; // x8
  _QWORD *v24; // x9
  __int64 monitor_low; // x10
  __int64 v26; // x8
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v29; // [xsp+18h] [xbp-28h] BYREF
  int32_t v30; // [xsp+1Ch] [xbp-24h] BYREF

  v29 = phaseId;
  v30 = questId;
  v28 = restrictionId;
  if ( (byte_4B12100 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&questId, *(_QWORD *)&phaseId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v8, v9);
    byte_4B12100 = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v30, 0LL);
  v11 = System_Int32__ToString((int32_t)&v29, 0LL);
  v12 = System_Int32__ToString((int32_t)&v28, 0LL);
  restrictionDialogHistoryList = (Il2CppObject *)System_String__Concat_62412480(v10, v11, v12, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_12;
  v15 = restrictionDialogHistoryList;
  v22 = System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.restrictionDialogHistoryList,
          restrictionDialogHistoryList,
          (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__);
  if ( !v22 && isAddHistory )
  {
    restrictionDialogHistoryList = (Il2CppObject *)this->fields.restrictionDialogHistoryList;
    if ( restrictionDialogHistoryList )
    {
      klass = restrictionDialogHistoryList[1].klass;
      v24 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(restrictionDialogHistoryList[1].monitor);
      if ( klass )
      {
        monitor_low = SLODWORD(restrictionDialogHistoryList[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)restrictionDialogHistoryList,
            v15,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = (__int64)klass + 8 * monitor_low;
          LODWORD(restrictionDialogHistoryList[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v26 + 32) = v15;
          sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)v15, v16, v17, v18, v19, v20, v21);
        }
        return v22;
      }
    }
LABEL_12:
    sub_1BCAA3C(restrictionDialogHistoryList, v14);
  }
  return v22;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationUtility__IsEnableFriendshipUpItem(
        PartyOrganizationUtility_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B1210E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&itemId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6, v7);
    byte_4B1210E = 1;
  }
  entity = 0LL;
  if ( itemId < 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&itemId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          itemId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_13:
    sub_1BCAA3C(Master_object, v9);
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  void *Instance; // x0
  __int64 v33; // x1
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v35; // x27
  Il2CppObject *v36; // x25
  SkillLvMaster_o *v37; // x26
  int v38; // w8
  void *v39; // x23
  unsigned int v40; // w27
  __int64 v41; // x29
  int32_t v42; // w2
  System_String_o *Name; // x0
  System_Collections_Generic_IEnumerable_int__o *ActRarity; // x0
  SkillLvEntity_o *skillLvEntity; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *v47; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B12102 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, skillName, actMaxRarity);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v22, v23);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v24, v25);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v30, v31);
    byte_4B12102 = 1;
  }
  v47 = 0LL;
  entity = 0LL;
  skillLvEntity = 0LL;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(skillName, StringLiteral_1/*""*/);
  *actMaxRarity = 0;
  if ( ((servantId | servantRarity | equipServantId) & 0x80000000) == 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           &entity,
           servantId,
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      v35 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      v36 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_33;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v35 )
        goto LABEL_33;
      v37 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)v35, equipServantId, 0LL);
      if ( !Instance )
        goto LABEL_33;
      v38 = *((_DWORD *)Instance + 6);
      v39 = Instance;
      if ( v38 >= 1 )
      {
        v40 = 0;
        while ( 1 )
        {
          if ( v40 >= v38 )
            sub_1BCAA44(Instance, v33);
          v41 = *((_QWORD *)v39 + (int)v40 + 4);
          if ( !v41 )
            goto LABEL_33;
          v42 = *(_DWORD *)(v41 + 48);
          if ( v42 && (eventId < 0 || v42 == eventId) )
          {
            if ( !MasterData_object )
              goto LABEL_33;
            Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                 &v47,
                                 v42,
                                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = v47;
              if ( !v47 )
                goto LABEL_33;
              Instance = (void *)EventEntity__IsEventPeriod((EventEntity_o *)v47, 0LL, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v37 )
                  goto LABEL_33;
                Instance = (void *)SkillLvMaster__TryGetEntity(v37, &skillLvEntity, *(_DWORD *)(v41 + 28), 1, 0LL);
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
          v38 = *((_DWORD *)v39 + 6);
          if ( (int)++v40 >= v38 )
            return 0;
        }
        if ( v36 )
        {
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v36,
                       *(_DWORD *)(v41 + 28),
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( Instance )
          {
            Name = SkillEntity__getName((SkillEntity_o *)Instance, 0LL);
            *skillName = Name;
            sub_1BCA784(skillName, Name);
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
        sub_1BCAA3C(Instance, v33);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationUtility__IsRarityRestriction_32832564(
        PartyOrganizationUtility_o *this,
        int32_t servantId,
        int32_t servantRarity,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *Entity; // x22
  SkillLvEntity_o *v19; // x0

  if ( (byte_4B12103 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId, *(_QWORD *)&servantRarity);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B12103 = 1;
  }
  if ( ((servantId | servantRarity) & 0x80000000) != 0 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   servantId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v17);
  }
  v19 = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0LL);
  return Entity && v19 && RarityRestrictedSkillUtil__IsDisabled(v19, (ServantEntity_o *)Entity, servantRarity, 0LL);
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
  sub_1BCA784(
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

  if ( (byte_4B12105 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__,
      *(_QWORD *)&key,
      followerInfo);
    byte_4B12105 = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_1BCAA3C(0LL, *(_QWORD *)&key);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
    key,
    (Il2CppObject *)followerInfo,
    (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
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
        PartyListViewItem_array *baseDeckItemList,
        const MethodInfo *method)
{
  __int64 v20; // x1
  __int64 v21; // x2
  char *klass; // x0
  PartyOrganizationUtility_o *p_temporaryPartyInfo; // x20
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *temporaryPartyInfo; // t1
  Il2CppObject *v25; // x29
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  PartyOrganizationUtility_o *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  PartyOrganizationUtility_c *v58; // x20
  Il2CppObject *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  Il2CppObject *v66; // x19
  __int64 v67; // x0
  PartyOrganizationUtility_o *p_parent; // x20
  __int64 v69; // x0
  int64_t v70; // x1
  PartyOrganizationUtility_TemporaryPartyInfo_o *v71; // x0
  const MethodInfo *v72; // x1

  if ( (byte_4B120FE & 1) == 0 )
  {
    sub_1BCA7E0(&PartyListViewItem___TypeInfo, userServantId, userEquipId);
    sub_1BCA7E0(&PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo, v20, v21);
    byte_4B120FE = 1;
  }
  temporaryPartyInfo = this->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (PartyOrganizationUtility_o *)&this->fields.temporaryPartyInfo;
  klass = (char *)temporaryPartyInfo;
  if ( !temporaryPartyInfo )
  {
    v25 = (Il2CppObject *)sub_1BCAA2C(
                            PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo,
                            userServantId,
                            userEquipId,
                            *(_QWORD *)&deckNumber);
    System_Object___ctor(v25, 0LL);
    p_temporaryPartyInfo->klass = (PartyOrganizationUtility_c *)v25;
    sub_1BCA784(p_temporaryPartyInfo, (int64_t)v25, v26, v27, v28, v29, v30, v31);
    klass = (char *)p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_18;
  }
  *((_QWORD *)klass + 5) = bgmName;
  v33 = (PartyOrganizationUtility_o *)(klass + 40);
  v33[-1].fields.temporaryPartyInfo = (struct PartyOrganizationUtility_TemporaryPartyInfo_o *)userServantId;
  v33[-1].fields._TransitionDestinationFromDetail_k__BackingField = (struct System_String_o *)userEquipId;
  *(_DWORD *)&v33[-1].fields._IsQuestStartMenuMode_k__BackingField = deckNumber;
  sub_1BCA784(v33, (int64_t)bgmName, userEquipId, deckNumber, bgmName, battleSetupInfo, followerInfo, basePartyItem);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 6) = battleSetupInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)(klass + 48), (int64_t)battleSetupInfo, v34, v35, v36, v37, v38, v39);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 7) = followerInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)(klass + 56), (int64_t)followerInfo, v40, v41, v42, v43, v44, v45);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass
    || (*((_QWORD *)klass + 8) = basePartyItem,
        sub_1BCA784((PartyOrganizationUtility_o *)(klass + 64), (int64_t)basePartyItem, v46, v47, v48, v49, v50, v51),
        (klass = (char *)p_temporaryPartyInfo->klass) == 0LL)
    || (*((_QWORD *)klass + 9) = partyItem,
        sub_1BCA784((PartyOrganizationUtility_o *)(klass + 72), (int64_t)partyItem, v52, v53, v54, v55, v56, v57),
        (v58 = p_temporaryPartyInfo->klass) == 0LL) )
  {
LABEL_18:
    sub_1BCAA3C(klass, v32);
  }
  LODWORD(v58->_1.declaringType) = selectPartyMemberNum;
  if ( baseDeckItemList )
  {
    v59 = System_Array__Clone((System_Array_o *)baseDeckItemList, 0LL);
    if ( !v59 )
    {
      v70 = 0LL;
      v58->_1.parent = 0LL;
      p_parent = (PartyOrganizationUtility_o *)&v58->_1.parent;
      goto LABEL_17;
    }
    v66 = v59;
    v67 = sub_1BCA91C(v59, PartyListViewItem___TypeInfo);
    if ( v67 )
    {
      v58->_1.parent = (Il2CppClass *)v67;
      p_parent = (PartyOrganizationUtility_o *)&v58->_1.parent;
      v69 = sub_1BCA91C(v66, PartyListViewItem___TypeInfo);
      if ( v69 )
      {
        v70 = v69;
LABEL_17:
        sub_1BCA784(p_parent, v70, v60, v61, v62, v63, v64, v65);
        return;
      }
    }
    v71 = (PartyOrganizationUtility_TemporaryPartyInfo_o *)sub_1BCACFC(v66);
    PartyOrganizationUtility_TemporaryPartyInfo___ctor(v71, v72);
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
  this->fields._BasePartyItem_k__BackingField = value;
  sub_1BCA784(&this->fields._BasePartyItem_k__BackingField, value);
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
  sub_1BCA784(&this->fields._PartyItem_k__BackingField, value);
}


void __fastcall PartyOrganizationUtility__set_PartyItemSmc(
        PartyOrganizationUtility_o *this,
        PartyListViewItem_o *value,
        const MethodInfo *method)
{
  this->fields._PartyItemSmc_k__BackingField = value;
  sub_1BCA784(&this->fields._PartyItemSmc_k__BackingField, value);
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
  sub_1BCA784(
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12111 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationUtility___c_TypeInfo, v1, v2);
    byte_4B12111 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(PartyOrganizationUtility___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  PartyOrganizationUtility___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationUtility___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)PartyOrganizationUtility___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall PartyOrganizationUtility___c___ctor(PartyOrganizationUtility___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall PartyOrganizationUtility___c___GetAvailableFriendshipUpItemEntity_b__89_0(
        PartyOrganizationUtility___c_o *this,
        ItemEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCAA3C(this, 0LL);
  return e->fields.endedAt;
}