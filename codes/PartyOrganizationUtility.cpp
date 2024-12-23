void __fastcall PartyOrganizationUtility___ctor(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_Dictionary_int__object__o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B62A63 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, method);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1BE4ACC(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonTemplate_PartyOrganizationUtility___ctor__, v6);
    byte_4B62A63 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)v7;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v14,
    (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  this->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v14;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields._npcFollowerInfos, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_38292E0 *)Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
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
  if ( (byte_4B62A56 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Contains__, v6);
    byte_4B62A56 = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v25, 0LL);
  v8 = System_Int32__ToString((int32_t)&v24, 0LL);
  v9 = System_Int32__ToString((int32_t)&v23, 0LL);
  restrictionDialogHistoryList = (Il2CppObject *)System_String__Concat_62710068(v7, v8, v9, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_11;
  v12 = restrictionDialogHistoryList;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)this->fields.restrictionDialogHistoryList,
         restrictionDialogHistoryList,
         (const MethodInfo_35EC5B4 *)Method_System_Collections_Generic_List_string__Contains__) )
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
    sub_1BE4D28(restrictionDialogHistoryList, v11);
  }
  monitor_low = SLODWORD(restrictionDialogHistoryList[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)restrictionDialogHistoryList,
      v12,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = (__int64)klass + 8 * monitor_low;
    LODWORD(restrictionDialogHistoryList[1].monitor) = monitor_low + 1;
    *(_QWORD *)(v22 + 32) = v12;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 32), (int64_t)v12, v13, v14, v15, v16, v17, v18);
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
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields._normalFollowerInfo, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields._normalFollowerInfo, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4B62A5C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__, *(_QWORD *)&key);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__, v5);
    byte_4B62A5C = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_1BE4D28(0LL, *(_QWORD *)&key);
  if ( (key & 0x80000000) != 0 )
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
      (const MethodInfo_32509F0 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
  else
    System_Collections_Generic_Dictionary_int__object___Remove(
      (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
      key,
      (const MethodInfo_3251CF0 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
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

  if ( (byte_4B62A54 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B62A54 = 1;
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
    sub_1BE4A70((PartyOrganizationUtility_o *)&v9->fields.bgmName, (int64_t)v12, v2, v3, v4, v5, v6, v7);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    klass->_1.this_arg.data = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&klass->_1.this_arg, 0LL, v14, v15, v16, v17, v18, v19);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    *(_QWORD *)&klass->_1.this_arg.bits = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&klass->_1.this_arg.bits, 0LL, v21, v22, v23, v24, v25, v26);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass
      || (klass->_1.element_class = 0LL,
          sub_1BE4A70((PartyOrganizationUtility_o *)&klass->_1.element_class, 0LL, v27, v28, v29, v30, v31, v32),
          (klass = p_temporaryPartyInfo->klass) == 0LL)
      || (klass->_1.castClass = 0LL,
          sub_1BE4A70((PartyOrganizationUtility_o *)&klass->_1.castClass, 0LL, v33, v34, v35, v36, v37, v38),
          (klass = p_temporaryPartyInfo->klass) == 0LL) )
    {
LABEL_11:
      sub_1BE4D28(klass, v13);
    }
    klass->_1.parent = 0LL;
    p_parent = (PartyOrganizationUtility_o *)&klass->_1.parent;
    *(_DWORD *)&p_parent[-1].fields._IsQuestStartMenuMode_k__BackingField = -1;
    sub_1BE4A70(p_parent, 0LL, v39, v40, v41, v42, v43, v44);
    p_temporaryPartyInfo->klass = 0LL;
    sub_1BE4A70(p_temporaryPartyInfo, 0LL, v46, v47, v48, v49, v50, v51);
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
  __int64 v14; // x19
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *v23; // x20
  Il2CppObject *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  Il2CppObject *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  Il2CppObject *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableFriendshipUpItemEventCampaigns; // x20
  System_Func_object__bool__o *v46; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0

  if ( (byte_4B62A5D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventCampaignMaster___, method);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventQuestMaster___, v3);
    sub_1BE4ACC(&Method_DataManager_GetMaster_QuestMaster___, v4);
    sub_1BE4ACC(&Method_DataManager_GetMaster_WarGroupIgnoreMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMaster_WarGroupMaster___, v6);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v8);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_EventCampaignEntity___, v9);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___, v10);
    sub_1BE4ACC(&System_Func_EventCampaignEntity__bool__TypeInfo, v11);
    sub_1BE4ACC(&Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__2__, v12);
    sub_1BE4ACC(&PartyOrganizationUtility___c__DisplayClass105_0_TypeInfo, v13);
    byte_4B62A5D = 1;
  }
  v14 = sub_1BE4D18(PartyOrganizationUtility___c__DisplayClass105_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_13;
  *(_QWORD *)(v14 + 24) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v17, v18, v19, v20, v21, v22);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         (Il2CppObject **)(v14 + 40),
         this->fields._CachedQuestId_k__BackingField,
         (const MethodInfo_31FD818 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v23 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventCampaignMaster___);
    v24 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_WarGroupMaster___);
    *(_QWORD *)(v14 + 32) = v24;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 32), (int64_t)v24, v25, v26, v27, v28, v29, v30);
    v31 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_WarGroupIgnoreMaster___);
    *(_QWORD *)(v14 + 48) = v31;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 48), (int64_t)v31, v32, v33, v34, v35, v36, v37);
    v38 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventQuestMaster___);
    *(_QWORD *)(v14 + 16) = v38;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)v38, v39, v40, v41, v42, v43, v44);
    if ( v23 )
    {
      AvailableFriendshipUpItemEventCampaigns = EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                                  (EventCampaignMaster_o *)v23,
                                                  0LL);
      v46 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_EventCampaignEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v46,
        (Il2CppObject *)v14,
        Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__2__,
        0LL);
      v47 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)AvailableFriendshipUpItemEventCampaigns,
              (System_Func_TSource__bool__o *)v46,
              (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
      return (EventCampaignEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                            v47,
                                            (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_EventCampaignEntity___);
    }
LABEL_13:
    sub_1BE4D28(Master_object, v16);
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
  __int64 v33; // x20
  Il2CppObject *Master_object; // x0
  __int64 v35; // x1
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
  const MethodInfo *v49; // x1
  EventCampaignEntity_array *AvailableEventCampaignEntities; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x19
  PartyOrganizationUtility___c_c *v52; // x0
  System_Func_object__object__o *_9__106_0; // x21
  Il2CppObject *v54; // x22
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_Func_T1__T2__TResult__o *v62; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x19
  System_Func_object__object__o *v64; // x21
  System_Collections_Generic_IEnumerable_T__o *v65; // x0
  System_Collections_Generic_IEnumerable_T__o *v66; // x19
  PartyOrganizationUtility___c_c *v67; // x8
  System_Func_object__bool__o *_9__106_3; // x20
  Il2CppObject *v69; // x21
  struct PartyOrganizationUtility___c_StaticFields *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  PartyOrganizationUtility___c_c *v78; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x19
  System_Func_object__object__o *_9__106_4; // x20
  Il2CppObject *v81; // x21
  struct PartyOrganizationUtility___c_StaticFields *v82; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v89; // x0
  PartyOrganizationUtility___c_c *v90; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x19
  System_Func_object__object__o *_9__106_5; // x20
  Il2CppObject *v93; // x21
  struct PartyOrganizationUtility___c_StaticFields *v94; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v101; // x0
  PartyOrganizationUtility___c_c *v102; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v103; // x19
  System_Func_object__int__o *_9__106_6; // x20
  Il2CppObject *v105; // x21
  struct PartyOrganizationUtility___c_StaticFields *v106; // x0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v113; // x0
  PartyOrganizationUtility___c_c *v114; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v115; // x19
  System_Func_T__TResult__o *_9__106_7; // x20
  Il2CppObject *v117; // x21
  struct PartyOrganizationUtility___c_StaticFields *v118; // x0
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v125; // x0
  FriendshipUpItemInfo_array *result; // x0

  if ( (byte_4B62A5E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_ExcludeNull_FriendshipUpItemInfo___, method);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ItemMaster___, v3);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserItemMaster___, v4);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_GroupBy_FriendshipUpItemInfo__string___, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OrderByDescending_FriendshipUpItemInfo__int___, v7);
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_SelectMany_EventCampaignEntity__int____f__AnonymousType2_EventCampaignEntity__ItemEntity____,
      v8);
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_Select_IGrouping_string__FriendshipUpItemInfo___FriendshipUpItemInfo___,
      v9);
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_Select___f__AnonymousType2_EventCampaignEntity__ItemEntity___FriendshipUpItemInfo___,
      v10);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ThenByDescending_FriendshipUpItemInfo__long___, v11);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_FriendshipUpItemInfo___, v12);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___, v13);
    sub_1BE4ACC(&FriendshipUpItemInfo___TypeInfo, v14);
    sub_1BE4ACC(&System_Func___f__AnonymousType2_EventCampaignEntity__ItemEntity___FriendshipUpItemInfo__TypeInfo, v15);
    sub_1BE4ACC(&System_Func_IGrouping_string__FriendshipUpItemInfo___FriendshipUpItemInfo__TypeInfo, v16);
    sub_1BE4ACC(&System_Func_FriendshipUpItemInfo__long__TypeInfo, v17);
    sub_1BE4ACC(&System_Func_FriendshipUpItemInfo__string__TypeInfo, v18);
    sub_1BE4ACC(&System_Func_EventCampaignEntity__IEnumerable_int___TypeInfo, v19);
    sub_1BE4ACC(&System_Func_FriendshipUpItemInfo__int__TypeInfo, v20);
    sub_1BE4ACC(&System_Func_FriendshipUpItemInfo__bool__TypeInfo, v21);
    sub_1BE4ACC(
      &System_Func_EventCampaignEntity__int____f__AnonymousType2_EventCampaignEntity__ItemEntity___TypeInfo,
      v22);
    sub_1BE4ACC(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_0__, v23);
    sub_1BE4ACC(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_3__, v24);
    sub_1BE4ACC(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_4__, v25);
    sub_1BE4ACC(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_5__, v26);
    sub_1BE4ACC(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_6__, v27);
    sub_1BE4ACC(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_7__, v28);
    sub_1BE4ACC(&Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__1__, v29);
    sub_1BE4ACC(&Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__2__, v30);
    sub_1BE4ACC(&PartyOrganizationUtility___c__DisplayClass106_0_TypeInfo, v31);
    sub_1BE4ACC(&PartyOrganizationUtility___c_TypeInfo, v32);
    byte_4B62A5E = 1;
  }
  v33 = sub_1BE4D18(PartyOrganizationUtility___c__DisplayClass106_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !v33 )
    sub_1BE4D28(Master_object, v35);
  *(_QWORD *)(v33 + 16) = Master_object;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v33 + 16), (int64_t)Master_object, v36, v37, v38, v39, v40, v41);
  v42 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserItemMaster___);
  *(_QWORD *)(v33 + 24) = v42;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v33 + 24), (int64_t)v42, v43, v44, v45, v46, v47, v48);
  AvailableEventCampaignEntities = PartyOrganizationUtility__GetAvailableEventCampaignEntities(this, v49);
  if ( !AvailableEventCampaignEntities )
    return (FriendshipUpItemInfo_array *)sub_1BE4B74(FriendshipUpItemInfo___TypeInfo, 0LL);
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)AvailableEventCampaignEntities;
  v52 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v52 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_0 = (System_Func_object__object__o *)v52->static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52);
      v52 = PartyOrganizationUtility___c_TypeInfo;
    }
    v54 = (Il2CppObject *)v52->static_fields->__9;
    _9__106_0 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_EventCampaignEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__106_0,
      v54,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_0__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Func_EventCampaignEntity__IEnumerable_int___o *)_9__106_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__106_0,
      (int64_t)_9__106_0,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  v62 = (System_Func_T1__T2__TResult__o *)sub_1BE4D18(System_Func_EventCampaignEntity__int____f__AnonymousType2_EventCampaignEntity__ItemEntity___TypeInfo);
  System_Func_object__int__object____ctor(
    v62,
    (Il2CppObject *)v33,
    Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__1__,
    0LL);
  v63 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int__object_(
                                                               v51,
                                                               (System_Func_TSource__IEnumerable_TCollection___o *)_9__106_0,
                                                               (System_Func_TSource__TCollection__TResult__o *)v62,
                                                               (const MethodInfo_2F8CF10 *)Method_System_Linq_Enumerable_SelectMany_EventCampaignEntity__int____f__AnonymousType2_EventCampaignEntity__ItemEntity____);
  v64 = (System_Func_object__object__o *)sub_1BE4D18(System_Func___f__AnonymousType2_EventCampaignEntity__ItemEntity___FriendshipUpItemInfo__TypeInfo);
  System_Func_object__object____ctor(
    v64,
    (Il2CppObject *)v33,
    Method_PartyOrganizationUtility___c__DisplayClass106_0__GetAvailableFriendshipUpItemInfo_b__2__,
    0LL);
  v65 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v63,
                                                         (System_Func_TSource__TResult__o *)v64,
                                                         (const MethodInfo_2F8A8A8 *)Method_System_Linq_Enumerable_Select___f__AnonymousType2_EventCampaignEntity__ItemEntity___FriendshipUpItemInfo___);
  v66 = BasicHelper__ExcludeNull_object_(
          v65,
          (const MethodInfo_2F449D0 *)Method_BasicHelper_ExcludeNull_FriendshipUpItemInfo___);
  v67 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v67 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_3 = (System_Func_object__bool__o *)v67->static_fields->__9__106_3;
  if ( !_9__106_3 )
  {
    if ( !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67);
      v67 = PartyOrganizationUtility___c_TypeInfo;
    }
    v69 = (Il2CppObject *)v67->static_fields->__9;
    _9__106_3 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__106_3,
      v69,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_3__,
      0LL);
    v70 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v70->__9__106_3 = (struct System_Func_FriendshipUpItemInfo__bool__o *)_9__106_3;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v70->__9__106_3, (int64_t)_9__106_3, v71, v72, v73, v74, v75, v76);
  }
  v77 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v66,
          (System_Func_TSource__bool__o *)_9__106_3,
          (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___);
  v78 = PartyOrganizationUtility___c_TypeInfo;
  v79 = v77;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v78 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_4 = (System_Func_object__object__o *)v78->static_fields->__9__106_4;
  if ( !_9__106_4 )
  {
    if ( !v78->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v78);
      v78 = PartyOrganizationUtility___c_TypeInfo;
    }
    v81 = (Il2CppObject *)v78->static_fields->__9;
    _9__106_4 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_FriendshipUpItemInfo__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__106_4,
      v81,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_4__,
      0LL);
    v82 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v82->__9__106_4 = (struct System_Func_FriendshipUpItemInfo__string__o *)_9__106_4;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v82->__9__106_4, (int64_t)_9__106_4, v83, v84, v85, v86, v87, v88);
  }
  v89 = System_Linq_Enumerable__GroupBy_object__object_(
          v79,
          (System_Func_TSource__TKey__o *)_9__106_4,
          (const MethodInfo_2F7D3B0 *)Method_System_Linq_Enumerable_GroupBy_FriendshipUpItemInfo__string___);
  v90 = PartyOrganizationUtility___c_TypeInfo;
  v91 = (System_Collections_Generic_IEnumerable_TSource__o *)v89;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v90 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_5 = (System_Func_object__object__o *)v90->static_fields->__9__106_5;
  if ( !_9__106_5 )
  {
    if ( !v90->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v90);
      v90 = PartyOrganizationUtility___c_TypeInfo;
    }
    v93 = (Il2CppObject *)v90->static_fields->__9;
    _9__106_5 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_IGrouping_string__FriendshipUpItemInfo___FriendshipUpItemInfo__TypeInfo);
    System_Func_object__object____ctor(
      _9__106_5,
      v93,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_5__,
      0LL);
    v94 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v94->__9__106_5 = (struct System_Func_IGrouping_string__FriendshipUpItemInfo___FriendshipUpItemInfo__o *)_9__106_5;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v94->__9__106_5, (int64_t)_9__106_5, v95, v96, v97, v98, v99, v100);
  }
  v101 = System_Linq_Enumerable__Select_object__object_(
           v91,
           (System_Func_TSource__TResult__o *)_9__106_5,
           (const MethodInfo_2F8A8A8 *)Method_System_Linq_Enumerable_Select_IGrouping_string__FriendshipUpItemInfo___FriendshipUpItemInfo___);
  v102 = PartyOrganizationUtility___c_TypeInfo;
  v103 = (System_Collections_Generic_IEnumerable_TSource__o *)v101;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v102 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_6 = (System_Func_object__int__o *)v102->static_fields->__9__106_6;
  if ( !_9__106_6 )
  {
    if ( !v102->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v102);
      v102 = PartyOrganizationUtility___c_TypeInfo;
    }
    v105 = (Il2CppObject *)v102->static_fields->__9;
    _9__106_6 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_FriendshipUpItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__106_6,
      v105,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_6__,
      0LL);
    v106 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v106->__9__106_6 = (struct System_Func_FriendshipUpItemInfo__int__o *)_9__106_6;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v106->__9__106_6, (int64_t)_9__106_6, v107, v108, v109, v110, v111, v112);
  }
  v113 = System_Linq_Enumerable__OrderByDescending_object__int_(
           v103,
           (System_Func_TSource__TKey__o *)_9__106_6,
           (const MethodInfo_2F826FC *)Method_System_Linq_Enumerable_OrderByDescending_FriendshipUpItemInfo__int___);
  v114 = PartyOrganizationUtility___c_TypeInfo;
  v115 = v113;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v114 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_7 = (System_Func_T__TResult__o *)v114->static_fields->__9__106_7;
  if ( !_9__106_7 )
  {
    if ( !v114->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v114);
      v114 = PartyOrganizationUtility___c_TypeInfo;
    }
    v117 = (Il2CppObject *)v114->static_fields->__9;
    _9__106_7 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_FriendshipUpItemInfo__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__106_7,
      v117,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_7__,
      0LL);
    v118 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v118->__9__106_7 = (struct System_Func_FriendshipUpItemInfo__long__o *)_9__106_7;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v118->__9__106_7, (int64_t)_9__106_7, v119, v120, v121, v122, v123, v124);
  }
  v125 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__long_(
                                                                v115,
                                                                (System_Func_TSource__TKey__o *)_9__106_7,
                                                                (const MethodInfo_2F92430 *)Method_System_Linq_Enumerable_ThenByDescending_FriendshipUpItemInfo__long___);
  result = (FriendshipUpItemInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                           v125,
                                           (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_FriendshipUpItemInfo___);
  if ( !result )
    return (FriendshipUpItemInfo_array *)sub_1BE4B74(FriendshipUpItemInfo___TypeInfo, 0LL);
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
  __int64 v8; // x1
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v10; // x0
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B62A60 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___, *(_QWORD *)&questId);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v7);
    byte_4B62A60 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v8);
    byte_4B61717 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_17;
  v10 = (NetworkManager_c *)UserInterruptionQuestMaster__TryGetEntity(
                              (UserInterruptionQuestMaster_o *)Master_object,
                              &entity,
                              v10->static_fields->userIdNumber,
                              questId,
                              questPhase,
                              0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    if ( entity )
      return entity->fields.campaignItemId;
LABEL_17:
    sub_1BE4D28(v10, v8);
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
  if ( (byte_4B62A5B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_GetValue_int__FollowerInfo___, *(_QWORD *)&key);
    byte_4B62A5B = 1;
  }
  return (FollowerInfo_o *)BasicHelper__GetValue_int__object_(
                             (System_Collections_Generic_Dictionary_K__V__o *)this->fields._npcFollowerInfos,
                             key,
                             0LL,
                             (const MethodInfo_2F47484 *)Method_BasicHelper_GetValue_int__FollowerInfo___);
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

  if ( (byte_4B62A59 & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, maxLength);
    sub_1BE4ACC(&System_Math_TypeInfo, v13);
    sub_1BE4ACC(&Rarity_TypeInfo, v14);
    sub_1BE4ACC(&System_Text_StringBuilder_TypeInfo, v15);
    sub_1BE4ACC(&StringLiteral_10284/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, v16);
    sub_1BE4ACC(&StringLiteral_10288/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, v17);
    sub_1BE4ACC(&StringLiteral_10287/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, v18);
    sub_1BE4ACC(&StringLiteral_10283/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, v19);
    sub_1BE4ACC(&StringLiteral_10286/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, v20);
    sub_1BE4ACC(&StringLiteral_10285/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, v21);
    byte_4B62A59 = 1;
  }
  v22 = (System_Text_StringBuilder_o *)sub_1BE4D18(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v22, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10283/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, 0LL);
  v24 = System_String__Format(v23, (Il2CppObject *)servantName, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_10284/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = (Il2CppObject *)Rarity__getRarityType(servantRarity, 0LL);
  v27 = System_String__Format(v25, RarityType, 0LL);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_10285/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, 0LL);
  v29 = System_String__Format(v28, (Il2CppObject *)equipName, 0LL);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_10286/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, 0LL);
  v31 = System_String__Format(v30, (Il2CppObject *)skillName, 0LL);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_10287/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, 0LL);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_10288/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, 0LL);
  v34 = (Il2CppObject *)Rarity__getRarityType(actMaxRarity, 0LL);
  v35 = System_String__Format(v33, v34, 0LL);
  if ( !v24 || !v29 )
    goto LABEL_14;
  v37 = v35;
  stringLength = v24->fields._stringLength;
  v39 = v29->fields._stringLength;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v35 = (System_String_o *)System_Math__Max_63517952(stringLength, v39, 0LL);
  *maxLength = (int)v35;
  if ( !v31
    || (v35 = (System_String_o *)System_Math__Max_63517952((int32_t)v35, v31->fields._stringLength, 0LL),
        *maxLength = (int)v35,
        !v22) )
  {
LABEL_14:
    sub_1BE4D28(v35, v36);
  }
  System_Text_StringBuilder__Append_61859960(v22, v24, 0LL);
  System_Text_StringBuilder__Append_61859960(v22, v27, 0LL);
  System_Text_StringBuilder__Append_61859960(v22, v29, 0LL);
  System_Text_StringBuilder__Append_61859960(v22, v31, 0LL);
  System_Text_StringBuilder__Append_61859960(v22, v32, 0LL);
  System_Text_StringBuilder__Append_61859960(v22, v37, 0LL);
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

  if ( (byte_4B62A5F & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, startingNum);
    byte_4B62A5F = 1;
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
          sub_1BE4D28(PartyItemSmc_k__BackingField, startingNum);
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
  return !BasicHelper__IsNullOrEmpty(
            (System_Collections_ICollection_o *)this->fields._CachedFriendshipUpItemInfo_k__BackingField,
            0LL);
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
  if ( (byte_4B62A55 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Contains__, v8);
    byte_4B62A55 = 1;
  }
  v9 = System_Int32__ToString((int32_t)&v29, 0LL);
  v10 = System_Int32__ToString((int32_t)&v28, 0LL);
  v11 = System_Int32__ToString((int32_t)&v27, 0LL);
  restrictionDialogHistoryList = (Il2CppObject *)System_String__Concat_62710068(v9, v10, v11, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_12;
  v14 = restrictionDialogHistoryList;
  v21 = System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.restrictionDialogHistoryList,
          restrictionDialogHistoryList,
          (const MethodInfo_35EC5B4 *)Method_System_Collections_Generic_List_string__Contains__);
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
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = (__int64)klass + 8 * monitor_low;
          LODWORD(restrictionDialogHistoryList[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v25 + 32) = v14;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v25 + 32), (int64_t)v14, v15, v16, v17, v18, v19, v20);
        }
        return v21;
      }
    }
LABEL_12:
    sub_1BE4D28(restrictionDialogHistoryList, v13);
  }
  return v21;
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

  if ( (byte_4B62A61 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&itemId);
    sub_1BE4ACC(&DataManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v5);
    byte_4B62A61 = 1;
  }
  entity = 0LL;
  if ( itemId < 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          itemId,
          (const MethodInfo_31FD818 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_13:
    sub_1BE4D28(Master_object, v7);
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

  if ( (byte_4B62A57 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventMaster___, skillName);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v15);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillMaster___, v17);
    sub_1BE4ACC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v19);
    sub_1BE4ACC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v20);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v22);
    byte_4B62A57 = 1;
  }
  v37 = 0LL;
  entity = 0LL;
  skillLvEntity = 0LL;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BE4A70(skillName);
  *actMaxRarity = 0;
  if ( ((servantId | servantRarity | equipServantId) & 0x80000000) == 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_35;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           &entity,
           servantId,
           (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      v26 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      v27 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
            sub_1BE4D30(Instance, v24);
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
                                 (const MethodInfo_31FD818 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
                       (const MethodInfo_31FD7C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( Instance )
          {
            *skillName = SkillEntity__getName((SkillEntity_o *)Instance, 0LL);
            sub_1BE4A70(skillName);
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
        sub_1BE4D28(Instance, v24);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationUtility__IsRarityRestriction_32962568(
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

  if ( (byte_4B62A58 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B62A58 = 1;
  }
  if ( ((servantId | servantRarity) & 0x80000000) != 0 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   servantId,
                   (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v14);
  }
  v16 = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0LL);
  return Entity && v16 && RarityRestrictedSkillUtil__IsDisabled(v16, (ServantEntity_o *)Entity, servantRarity, 0LL);
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
  __int64 v22; // x22
  const MethodInfo *v23; // x1
  System_Collections_Generic_List_object__o *v24; // x24
  ChainableActionBase_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  ChainableActionBase_o **v32; // x23
  System_Collections_Generic_IEnumerable_TSource__o *CachedFriendshipUpItemInfo_k__BackingField; // x24
  PartyOrganizationUtility___c_c *v34; // x0
  System_Func_object__bool__o *_9__111_0; // x25
  Il2CppObject *v36; // x26
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  PartyOrganizationUtility___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x24
  System_Func_object__int__o *_9__111_1; // x25
  Il2CppObject *v48; // x26
  struct PartyOrganizationUtility___c_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_IEnumerable_T__o *v56; // x24
  System_Action_object__o *v57; // x25
  bool v58; // w20
  System_Object_array *v59; // x23
  ActionChain_o *v60; // x22
  __int64 v61; // x23
  System_Action_o *v62; // x24
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct FriendshipUpItemInfo_array *AvailableFriendshipUpItemInfo; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7

  if ( (byte_4B62A62 & 1) == 0 )
  {
    sub_1BE4ACC(&ActionChain_TypeInfo, callback);
    sub_1BE4ACC(&System_Action___TypeInfo, v5);
    sub_1BE4ACC(&System_Action_FriendshipUpItemInfo__TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Action_Invoke__, v7);
    sub_1BE4ACC(&System_Action_TypeInfo, v8);
    sub_1BE4ACC(&Method_BasicHelper_ForEach_FriendshipUpItemInfo___, v9);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OrderBy_FriendshipUpItemInfo__int___, v10);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___, v11);
    sub_1BE4ACC(&System_Func_FriendshipUpItemInfo__int__TypeInfo, v12);
    sub_1BE4ACC(&System_Func_FriendshipUpItemInfo__bool__TypeInfo, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Action_Action___ToArray__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Action_Action____ctor__, v15);
    sub_1BE4ACC(&System_Collections_Generic_List_Action_Action___TypeInfo, v16);
    sub_1BE4ACC(&Method_PartyOrganizationUtility___c__OpenFriendshipUpItemExpiredDialog_b__111_0__, v17);
    sub_1BE4ACC(&Method_PartyOrganizationUtility___c__OpenFriendshipUpItemExpiredDialog_b__111_1__, v18);
    sub_1BE4ACC(&Method_PartyOrganizationUtility___c__DisplayClass111_0__OpenFriendshipUpItemExpiredDialog_b__2__, v19);
    sub_1BE4ACC(&PartyOrganizationUtility___c__DisplayClass111_0_TypeInfo, v20);
    sub_1BE4ACC(&PartyOrganizationUtility___c_TypeInfo, v21);
    byte_4B62A62 = 1;
  }
  v22 = sub_1BE4D18(PartyOrganizationUtility___c__DisplayClass111_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields._CachedFriendshipUpItemInfo_k__BackingField,
         0LL) )
  {
    goto LABEL_18;
  }
  v24 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_Action_Action___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_Action_Action____ctor__);
  if ( !v22 )
LABEL_26:
    sub_1BE4D28(v25, v23);
  *(_QWORD *)(v22 + 16) = v24;
  v32 = (ChainableActionBase_o **)(v22 + 16);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)v24, v26, v27, v28, v29, v30, v31);
  CachedFriendshipUpItemInfo_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._CachedFriendshipUpItemInfo_k__BackingField;
  v34 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v34 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__111_0 = (System_Func_object__bool__o *)v34->static_fields->__9__111_0;
  if ( !_9__111_0 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = PartyOrganizationUtility___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v34->static_fields->__9;
    _9__111_0 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__111_0,
      v36,
      Method_PartyOrganizationUtility___c__OpenFriendshipUpItemExpiredDialog_b__111_0__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__111_0 = (struct System_Func_FriendshipUpItemInfo__bool__o *)_9__111_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__111_0,
      (int64_t)_9__111_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  v44 = System_Linq_Enumerable__Where_object_(
          CachedFriendshipUpItemInfo_k__BackingField,
          (System_Func_TSource__bool__o *)_9__111_0,
          (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_FriendshipUpItemInfo___);
  v45 = PartyOrganizationUtility___c_TypeInfo;
  v46 = v44;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v45 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__111_1 = (System_Func_object__int__o *)v45->static_fields->__9__111_1;
  if ( !_9__111_1 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = PartyOrganizationUtility___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v45->static_fields->__9;
    _9__111_1 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_FriendshipUpItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__111_1,
      v48,
      Method_PartyOrganizationUtility___c__OpenFriendshipUpItemExpiredDialog_b__111_1__,
      0LL);
    v49 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v49->__9__111_1 = (struct System_Func_FriendshipUpItemInfo__int__o *)_9__111_1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v49->__9__111_1, (int64_t)_9__111_1, v50, v51, v52, v53, v54, v55);
  }
  v56 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                         v46,
                                                         (System_Func_TSource__TKey__o *)_9__111_1,
                                                         (const MethodInfo_2F821CC *)Method_System_Linq_Enumerable_OrderBy_FriendshipUpItemInfo__int___);
  v57 = (System_Action_object__o *)sub_1BE4D18(System_Action_FriendshipUpItemInfo__TypeInfo);
  System_Action_object____ctor(
    v57,
    (Il2CppObject *)v22,
    Method_PartyOrganizationUtility___c__DisplayClass111_0__OpenFriendshipUpItemExpiredDialog_b__2__,
    0LL);
  BasicHelper__ForEach_object_(
    v56,
    (System_Action_T__o *)v57,
    (const MethodInfo_2F4606C *)Method_BasicHelper_ForEach_FriendshipUpItemInfo___);
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v22 + 16), 0LL) )
  {
    v25 = *v32;
    if ( *v32 )
    {
      v59 = System_Collections_Generic_List_object___ToArray(
              (System_Collections_Generic_List_object__o *)v25,
              (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
      v60 = (ActionChain_o *)sub_1BE4D18(ActionChain_TypeInfo);
      ActionChain___ctor_47405848(v60, (System_Action_Action__array *)v59, 0LL);
      v61 = sub_1BE4B74(System_Action___TypeInfo, 1LL);
      v62 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v62, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0LL);
      if ( v61 )
      {
        if ( !*(_DWORD *)(v61 + 24) )
          sub_1BE4D30(v25, v23);
        *(_QWORD *)(v61 + 32) = v62;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v61 + 32), (int64_t)v62, v63, v64, v65, v66, v67, v68);
        if ( v60 )
        {
          v25 = ChainableActionBase__Final((ChainableActionBase_o *)v60, (System_Action_array *)v61, 0LL);
          if ( v25 )
          {
            ChainableActionBase__Execute(v25, 0LL);
            v58 = 1;
            goto LABEL_25;
          }
        }
      }
    }
    goto LABEL_26;
  }
LABEL_18:
  v58 = 0;
LABEL_25:
  AvailableFriendshipUpItemInfo = PartyOrganizationUtility__GetAvailableFriendshipUpItemInfo(this, v23);
  this->fields._CachedFriendshipUpItemInfo_k__BackingField = AvailableFriendshipUpItemInfo;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._CachedFriendshipUpItemInfo_k__BackingField,
    (int64_t)AvailableFriendshipUpItemInfo,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  return v58;
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
  this->fields._CachedFriendshipUpItemInfo_k__BackingField = AvailableFriendshipUpItemInfo;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._CachedFriendshipUpItemInfo_k__BackingField,
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
  sub_1BE4A70(
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

  if ( (byte_4B62A5A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__, *(_QWORD *)&key);
    byte_4B62A5A = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_1BE4D28(0LL, *(_QWORD *)&key);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
    key,
    (Il2CppObject *)followerInfo,
    (const MethodInfo_3250854 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
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

  if ( (byte_4B62A53 & 1) == 0 )
  {
    sub_1BE4ACC(&PartyListViewItem___TypeInfo, userServantId);
    sub_1BE4ACC(&PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo, v20);
    byte_4B62A53 = 1;
  }
  temporaryPartyInfo = this->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (PartyOrganizationUtility_o *)&this->fields.temporaryPartyInfo;
  klass = (char *)temporaryPartyInfo;
  if ( !temporaryPartyInfo )
  {
    v24 = (Il2CppObject *)sub_1BE4D18(PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo);
    System_Object___ctor(v24, 0LL);
    p_temporaryPartyInfo->klass = (PartyOrganizationUtility_c *)v24;
    sub_1BE4A70(p_temporaryPartyInfo, (int64_t)v24, v25, v26, v27, v28, v29, v30);
    klass = (char *)p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_18;
  }
  *((_QWORD *)klass + 5) = bgmName;
  v32 = (PartyOrganizationUtility_o *)(klass + 40);
  v32[-1].fields.temporaryPartyInfo = (struct PartyOrganizationUtility_TemporaryPartyInfo_o *)userServantId;
  v32[-1].fields._TransitionDestinationFromDetail_k__BackingField = (struct System_String_o *)userEquipId;
  *(_DWORD *)&v32[-1].fields._IsQuestStartMenuMode_k__BackingField = deckNumber;
  sub_1BE4A70(v32, (int64_t)bgmName, userEquipId, deckNumber, bgmName, battleSetupInfo, followerInfo, basePartyItem);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 6) = battleSetupInfo;
  sub_1BE4A70((PartyOrganizationUtility_o *)(klass + 48), (int64_t)battleSetupInfo, v33, v34, v35, v36, v37, v38);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 7) = followerInfo;
  sub_1BE4A70((PartyOrganizationUtility_o *)(klass + 56), (int64_t)followerInfo, v39, v40, v41, v42, v43, v44);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass
    || (*((_QWORD *)klass + 8) = basePartyItem,
        sub_1BE4A70((PartyOrganizationUtility_o *)(klass + 64), (int64_t)basePartyItem, v45, v46, v47, v48, v49, v50),
        (klass = (char *)p_temporaryPartyInfo->klass) == 0LL)
    || (*((_QWORD *)klass + 9) = partyItem,
        sub_1BE4A70((PartyOrganizationUtility_o *)(klass + 72), (int64_t)partyItem, v51, v52, v53, v54, v55, v56),
        (v57 = p_temporaryPartyInfo->klass) == 0LL) )
  {
LABEL_18:
    sub_1BE4D28(klass, v31);
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
    v66 = sub_1BE4C08(v58, PartyListViewItem___TypeInfo);
    if ( v66 )
    {
      v57->_1.parent = (Il2CppClass *)v66;
      p_parent = (PartyOrganizationUtility_o *)&v57->_1.parent;
      v68 = sub_1BE4C08(v65, PartyListViewItem___TypeInfo);
      if ( v68 )
      {
        v69 = v68;
LABEL_17:
        sub_1BE4A70(p_parent, v69, v59, v60, v61, v62, v63, v64);
        return;
      }
    }
    v70 = (PartyOrganizationUtility_TemporaryPartyInfo_o *)sub_1BE4FE8(v65);
    PartyOrganizationUtility_TemporaryPartyInfo___ctor(v70, v71);
  }
}


PartyListViewItem_o *__fastcall PartyOrganizationUtility__get_BasePartyItem(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._BasePartyItem_k__BackingField;
}


FriendshipUpItemInfo_array *__fastcall PartyOrganizationUtility__get_CachedFriendshipUpItemInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._CachedFriendshipUpItemInfo_k__BackingField;
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
  sub_1BE4A70(&this->fields._BasePartyItem_k__BackingField);
}


void __fastcall PartyOrganizationUtility__set_CachedFriendshipUpItemInfo(
        PartyOrganizationUtility_o *this,
        FriendshipUpItemInfo_array *value,
        const MethodInfo *method)
{
  this->fields._CachedFriendshipUpItemInfo_k__BackingField = value;
  sub_1BE4A70(&this->fields._CachedFriendshipUpItemInfo_k__BackingField);
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
  sub_1BE4A70(&this->fields._PartyItem_k__BackingField);
}


void __fastcall PartyOrganizationUtility__set_PartyItemSmc(
        PartyOrganizationUtility_o *this,
        PartyListViewItem_o *value,
        const MethodInfo *method)
{
  this->fields._PartyItemSmc_k__BackingField = value;
  sub_1BE4A70(&this->fields._PartyItemSmc_k__BackingField);
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
  sub_1BE4A70(
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

  if ( (byte_4B62A64 & 1) == 0 )
  {
    sub_1BE4ACC(&PartyOrganizationUtility___c_TypeInfo, v1);
    byte_4B62A64 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(PartyOrganizationUtility___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PartyOrganizationUtility___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationUtility___c_o *)v2;
  sub_1BE4A70(
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
    sub_1BE4D28(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)eventCampaignEntity->fields.targetIds;
}


bool __fastcall PartyOrganizationUtility___c___GetAvailableFriendshipUpItemInfo_b__106_3(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BE4D28(this, 0LL);
  return !info->fields._IsEventItem_k__BackingField || FriendshipUpItemInfo__IsObtained(info, 0LL);
}


System_String_o *__fastcall PartyOrganizationUtility___c___GetAvailableFriendshipUpItemInfo_b__106_4(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1BE4D28(this, 0LL);
  return itemInfo->fields._SpriteName_k__BackingField;
}


FriendshipUpItemInfo_o *__fastcall PartyOrganizationUtility___c___GetAvailableFriendshipUpItemInfo_b__106_5(
        PartyOrganizationUtility___c_o *this,
        System_Linq_IGrouping_string__FriendshipUpItemInfo__o *itemInfoGroup,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  PartyOrganizationUtility___c_c *v10; // x0
  System_Func_T__TResult__o *_9__106_8; // x20
  Il2CppObject *v12; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x0
  PartyOrganizationUtility___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  System_Func_T1__T2__TResult__o *_9__106_9; // x20
  Il2CppObject *v24; // x21
  struct PartyOrganizationUtility___c_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4B62A65 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Aggregate_FriendshipUpItemInfo___, itemInfoGroup);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OrderBy_FriendshipUpItemInfo__long___, v4);
    sub_1BE4ACC(&System_Func_FriendshipUpItemInfo__long__TypeInfo, v5);
    sub_1BE4ACC(&System_Func_FriendshipUpItemInfo__FriendshipUpItemInfo__FriendshipUpItemInfo__TypeInfo, v6);
    sub_1BE4ACC(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_8__, v7);
    sub_1BE4ACC(&Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_9__, v8);
    sub_1BE4ACC(&PartyOrganizationUtility___c_TypeInfo, v9);
    byte_4B62A65 = 1;
  }
  v10 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v10 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_8 = (System_Func_T__TResult__o *)v10->static_fields->__9__106_8;
  if ( !_9__106_8 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = PartyOrganizationUtility___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__106_8 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_FriendshipUpItemInfo__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__106_8,
      v12,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_8__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__106_8 = (struct System_Func_FriendshipUpItemInfo__long__o *)_9__106_8;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__106_8,
      (int64_t)_9__106_8,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = System_Linq_Enumerable__OrderBy_object__long_(
          (System_Collections_Generic_IEnumerable_TSource__o *)itemInfoGroup,
          (System_Func_TSource__TKey__o *)_9__106_8,
          (const MethodInfo_2F82238 *)Method_System_Linq_Enumerable_OrderBy_FriendshipUpItemInfo__long___);
  v21 = PartyOrganizationUtility___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v21 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__106_9 = (System_Func_T1__T2__TResult__o *)v21->static_fields->__9__106_9;
  if ( !_9__106_9 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = PartyOrganizationUtility___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__106_9 = (System_Func_T1__T2__TResult__o *)sub_1BE4D18(System_Func_FriendshipUpItemInfo__FriendshipUpItemInfo__FriendshipUpItemInfo__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__106_9,
      v24,
      Method_PartyOrganizationUtility___c__GetAvailableFriendshipUpItemInfo_b__106_9__,
      0LL);
    v25 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v25->__9__106_9 = (struct System_Func_FriendshipUpItemInfo__FriendshipUpItemInfo__FriendshipUpItemInfo__o *)_9__106_9;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v25->__9__106_9, (int64_t)_9__106_9, v26, v27, v28, v29, v30, v31);
  }
  return (FriendshipUpItemInfo_o *)System_Linq_Enumerable__Aggregate_object_(
                                     v22,
                                     (System_Func_TSource__TSource__TSource__o *)_9__106_9,
                                     (const MethodInfo_2F61054 *)Method_System_Linq_Enumerable_Aggregate_FriendshipUpItemInfo___);
}


int32_t __fastcall PartyOrganizationUtility___c___GetAvailableFriendshipUpItemInfo_b__106_6(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1BE4D28(this, 0LL);
  return itemInfo->fields._Value_k__BackingField;
}


int64_t __fastcall PartyOrganizationUtility___c___GetAvailableFriendshipUpItemInfo_b__106_7(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1BE4D28(this, 0LL);
  return itemInfo->fields._StartedAt_k__BackingField;
}


int64_t __fastcall PartyOrganizationUtility___c___GetAvailableFriendshipUpItemInfo_b__106_8(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *itemEntity,
        const MethodInfo *method)
{
  if ( !itemEntity )
    sub_1BE4D28(this, 0LL);
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
    sub_1BE4D28(this, result);
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


bool __fastcall PartyOrganizationUtility___c___OpenFriendshipUpItemExpiredDialog_b__111_0(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1BE4D28(this, 0LL);
  return FriendshipUpItemInfo__GetUseFlag(itemInfo, 0LL) && !FriendshipUpItemInfo__IsEventPeriod(itemInfo, 0LL);
}


int32_t __fastcall PartyOrganizationUtility___c___OpenFriendshipUpItemExpiredDialog_b__111_1(
        PartyOrganizationUtility___c_o *this,
        FriendshipUpItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1BE4D28(this, 0LL);
  return itemInfo->fields._Id_k__BackingField;
}


void __fastcall PartyOrganizationUtility___c__DisplayClass105_0___ctor(
        PartyOrganizationUtility___c__DisplayClass105_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass105_0___GetAvailableEventCampaignEntities_b__2(
        PartyOrganizationUtility___c__DisplayClass105_0_o *this,
        EventCampaignEntity_o *eventCampaignEntity,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c__DisplayClass105_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_Int32_array *warGroupIds; // x21
  System_Func_int__bool__o *v12; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  System_Func_int__bool__o *_9__4; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  v4 = this;
  if ( (byte_4B62A67 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_int____77161864, eventCampaignEntity);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_All_int___, v5);
    sub_1BE4ACC(&System_Func_int__bool__TypeInfo, v6);
    sub_1BE4ACC(&Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__4__, v7);
    this = (PartyOrganizationUtility___c__DisplayClass105_0_o *)sub_1BE4ACC(
                                                                  &Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_g__IsMatchWarId_1__,
                                                                  v8);
    byte_4B62A67 = 1;
  }
  if ( !eventCampaignEntity )
    sub_1BE4D28(this, eventCampaignEntity);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventCampaignEntity->fields.warGroupIds, 0LL) )
    return 1;
  if ( PartyOrganizationUtility___c__DisplayClass105_0___GetAvailableEventCampaignEntities_g__IsExceptedByEventQuestMaster_0(
         v4,
         eventCampaignEntity->fields.eventId,
         v9) )
  {
    return 0;
  }
  warGroupIds = eventCampaignEntity->fields.warGroupIds;
  v12 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v12,
    (Il2CppObject *)v4,
    Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_g__IsMatchWarId_1__,
    0LL);
  if ( !BasicHelper__Any_int__49561084(
          warGroupIds,
          (System_Func_T__bool__o *)v12,
          (const MethodInfo_2F43DFC *)Method_BasicHelper_Any_int____77161864) )
    return 0;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)eventCampaignEntity->fields.warGroupIds;
  _9__4 = v4->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__4,
      (Il2CppObject *)v4,
      Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__4__,
      0LL);
    v4->fields.__9__4 = _9__4;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v4->fields.__9__4, (int64_t)_9__4, v15, v16, v17, v18, v19, v20);
  }
  return System_Linq_Enumerable__All_int_(
           v13,
           (System_Func_TSource__bool__o *)_9__4,
           (const MethodInfo_2F6323C *)Method_System_Linq_Enumerable_All_int___);
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass105_0___GetAvailableEventCampaignEntities_b__3(
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
    sub_1BE4D28(this, warGroupEntity);
  if ( warGroupEntity->fields.questAfterClear == questEntity->fields.afterClear )
    return warGroupEntity->fields.questType == questEntity->fields.type;
  return 0;
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass105_0___GetAvailableEventCampaignEntities_b__4(
        PartyOrganizationUtility___c__DisplayClass105_0_o *this,
        int32_t warGroupId,
        const MethodInfo *method)
{
  struct PartyOrganizationUtility_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (PartyOrganizationUtility___c__DisplayClass105_0_o *)this->fields.warGroupIgnoreMaster) == 0LL )
  {
    sub_1BE4D28(this, warGroupId);
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
    sub_1BE4D28(this, *(_QWORD *)&eventId);
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

  if ( (byte_4B62A66 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_WarGroupEntity___, *(_QWORD *)&warGroupId);
    sub_1BE4ACC(&System_Func_WarGroupEntity__bool__TypeInfo, v5);
    sub_1BE4ACC(&Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__3__, v6);
    byte_4B62A66 = 1;
  }
  entities = 0LL;
  warGroupMaster = this->fields.warGroupMaster;
  if ( !warGroupMaster )
    sub_1BE4D28(0LL, *(_QWORD *)&warGroupId);
  if ( WarGroupMaster__TryGetWarList(warGroupMaster, &entities, warGroupId, 0LL) )
  {
    v8 = (System_Object_array *)entities;
    v9 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_WarGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v9,
      (Il2CppObject *)this,
      Method_PartyOrganizationUtility___c__DisplayClass105_0__GetAvailableEventCampaignEntities_b__3__,
      0LL);
    return BasicHelper__Any_object__49561896(
             v8,
             (System_Func_T__bool__o *)v9,
             (const MethodInfo_2F44128 *)Method_BasicHelper_Any_WarGroupEntity___);
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
  __int64 v7; // x1
  ItemMaster_o *itemMaster; // x0
  Il2CppObject *ItemData; // x20
  __f__AnonymousType2__eventCampaignEntity_j__TPar___itemEntity_j__TPar__o *v10; // x21

  if ( (byte_4B62A68 & 1) == 0 )
  {
    sub_1BE4ACC(&Method___f__AnonymousType2_EventCampaignEntity__ItemEntity___ctor__, eventCampaignEntity);
    sub_1BE4ACC(&_f__AnonymousType2_EventCampaignEntity__ItemEntity__TypeInfo, v7);
    byte_4B62A68 = 1;
  }
  itemMaster = this->fields.itemMaster;
  if ( !itemMaster )
    sub_1BE4D28(0LL, eventCampaignEntity);
  ItemData = (Il2CppObject *)ItemMaster__GetItemData(itemMaster, itemId, 0LL);
  v10 = (__f__AnonymousType2__eventCampaignEntity_j__TPar___itemEntity_j__TPar__o *)sub_1BE4D18(_f__AnonymousType2_EventCampaignEntity__ItemEntity__TypeInfo);
  _f__AnonymousType2_object__object____ctor(
    v10,
    (Il2CppObject *)eventCampaignEntity,
    ItemData,
    (const MethodInfo_312C444 *)Method___f__AnonymousType2_EventCampaignEntity__ItemEntity___ctor__);
  return (__f__AnonymousType2_EventCampaignEntity__ItemEntity__o *)v10;
}


FriendshipUpItemInfo_o *__fastcall PartyOrganizationUtility___c__DisplayClass106_0___GetAvailableFriendshipUpItemInfo_b__2(
        PartyOrganizationUtility___c__DisplayClass106_0_o *this,
        __f__AnonymousType2_EventCampaignEntity__ItemEntity__o *info,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  PartyOrganizationUtility___c__DisplayClass106_0_o *v6; // x22
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct ItemEntity_o *itemEntity_i__Field; // x8
  int32_t id; // w20
  System_String_o *name; // x21
  System_String_o *FRIENDSHIP_UP_ITEM_ICON_SUFFIX; // x23
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  UserItemMaster_o *userItemMaster; // x23
  System_String_o *v18; // x22
  int32_t v19; // w23
  FriendshipUpItemInfo_o *v20; // x19
  struct EventCampaignEntity_o *eventCampaignEntity_i__Field; // x8
  struct ItemEntity_o *v22; // x9
  int32_t value; // w24
  int32_t eventId; // w25
  int64_t startedAt; // x26
  int64_t endedAt; // x28
  int32_t imageId; // [xsp+1Ch] [xbp-54h] BYREF

  v6 = this;
  if ( (byte_4B62A69 & 1) == 0 )
  {
    sub_1BE4ACC(&FriendshipUpItemInfo_TypeInfo, info);
    sub_1BE4ACC(&int_TypeInfo, v7);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v8);
    sub_1BE4ACC(&Method___f__AnonymousType2_EventCampaignEntity__ItemEntity__get_eventCampaignEntity__, v9);
    this = (PartyOrganizationUtility___c__DisplayClass106_0_o *)sub_1BE4ACC(
                                                                  &Method___f__AnonymousType2_EventCampaignEntity__ItemEntity__get_itemEntity__,
                                                                  v10);
    byte_4B62A69 = 1;
  }
  if ( !info )
    goto LABEL_23;
  itemEntity_i__Field = info->fields._itemEntity_i__Field;
  if ( itemEntity_i__Field && info->fields._eventCampaignEntity_i__Field )
  {
    id = itemEntity_i__Field->fields.id;
    name = itemEntity_i__Field->fields.name;
    if ( FriendshipUpItemInfo_TypeInfo->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(FriendshipUpItemInfo_TypeInfo),
          (itemEntity_i__Field = info->fields._itemEntity_i__Field) != 0LL) )
    {
      FRIENDSHIP_UP_ITEM_ICON_SUFFIX = FriendshipUpItemInfo_TypeInfo->static_fields->FRIENDSHIP_UP_ITEM_ICON_SUFFIX;
      imageId = itemEntity_i__Field->fields.imageId;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId, method, v3, v4);
      v16 = System_String__Format(FRIENDSHIP_UP_ITEM_ICON_SUFFIX, v15, 0LL);
      userItemMaster = v6->fields.userItemMaster;
      v18 = v16;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B61717 )
      {
        sub_1BE4ACC(&NetworkManager_TypeInfo, info);
        byte_4B61717 = 1;
      }
      this = (PartyOrganizationUtility___c__DisplayClass106_0_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (PartyOrganizationUtility___c__DisplayClass106_0_o *)NetworkManager_TypeInfo;
      }
      if ( userItemMaster )
      {
        this = (PartyOrganizationUtility___c__DisplayClass106_0_o *)UserItemMaster__GetEntityDefinitely(
                                                                      userItemMaster,
                                                                      *(_QWORD *)&this[5].fields.userItemMaster->fields.revision,
                                                                      id,
                                                                      0LL);
        v19 = this ? HIDWORD(this->fields.userItemMaster) : 0;
        eventCampaignEntity_i__Field = info->fields._eventCampaignEntity_i__Field;
        if ( eventCampaignEntity_i__Field )
        {
          v22 = info->fields._itemEntity_i__Field;
          if ( v22 )
          {
            value = eventCampaignEntity_i__Field->fields.value;
            eventId = eventCampaignEntity_i__Field->fields.eventId;
            startedAt = v22->fields.startedAt;
            endedAt = v22->fields.endedAt;
            v20 = (FriendshipUpItemInfo_o *)sub_1BE4D18(FriendshipUpItemInfo_TypeInfo);
            FriendshipUpItemInfo___ctor_32533540(v20, id, name, v18, v19, eventId, value, startedAt, endedAt, 0LL);
            return v20;
          }
        }
      }
    }
LABEL_23:
    sub_1BE4D28(this, info);
  }
  return 0LL;
}


void __fastcall PartyOrganizationUtility___c__DisplayClass111_0___ctor(
        PartyOrganizationUtility___c__DisplayClass111_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PartyOrganizationUtility___c__DisplayClass111_0___OpenFriendshipUpItemExpiredDialog_b__2(
        PartyOrganizationUtility___c__DisplayClass111_0_o *this,
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

  if ( (byte_4B62A6A & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_Action__TypeInfo, itemInfo);
    sub_1BE4ACC(&Method_FriendshipUpItemInfo_OpenExpiredDialog__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Action_Action___Add__, v6);
    byte_4B62A6A = 1;
  }
  actionList = (System_Collections_Generic_List_object__o *)this->fields.actionList;
  v8 = (System_Action_object__o *)sub_1BE4D18(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v8, (Il2CppObject *)itemInfo, Method_FriendshipUpItemInfo_OpenExpiredDialog__, 0LL);
  if ( !actionList
    || (items = actionList->fields._items,
        v18 = Method_System_Collections_Generic_List_Action_Action___Add__,
        ++actionList->fields._version,
        !items) )
  {
    sub_1BE4D28(v9, v10);
  }
  size = actionList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      actionList,
      (Il2CppObject *)v8,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    actionList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v8;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 4), (int64_t)v8, v11, v12, v13, v14, v15, v16);
  }
}