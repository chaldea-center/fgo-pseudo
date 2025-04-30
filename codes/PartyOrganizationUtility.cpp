void __fastcall PartyOrganizationUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4A4A2AB & 1) == 0 )
  {
    sub_1B863B8(&PartyOrganizationUtility_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_10772/*"QuestUseItem"*/, v4);
    byte_4A4A2AB = 1;
  }
  PartyOrganizationUtility_TypeInfo->static_fields->SAVE_KEY_QUEST_USE_ITEM = (struct System_String_o *)StringLiteral_10772/*"QuestUseItem"*/;
  sub_1B8635C((CGThumbnailListItem_o *)PartyOrganizationUtility_TypeInfo->static_fields, StringLiteral_10772/*"QuestUseItem"*/, v2, v3);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_Dictionary_int__object__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct QuestUseItemInfo_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4A4A2AA & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, method);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_int_____ctor__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1B863B8(&System_Collections_Generic_List_int____TypeInfo, v6);
    sub_1B863B8(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_1B863B8(&QuestUseItemInfo___TypeInfo, v8);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility___ctor__, v9);
    byte_4A4A2AA = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  this->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v13;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._npcFollowerInfos, (int32_t)v13, v14, v15);
  v16 = (struct QuestUseItemInfo_array *)sub_1B86460(QuestUseItemInfo___TypeInfo, 0LL);
  this->fields.cachedQuestUseItemInfoList = v16;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.cachedQuestUseItemInfoList, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.questUseItemStateList = (struct System_Collections_Generic_List_int____o *)v19;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questUseItemStateList, (int32_t)v19, v20, v21);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_3839B98 *)Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
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
  const MethodInfo *v14; // x3
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
  if ( (byte_4A4A293 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&questId);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Contains__, v6);
    byte_4A4A293 = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v21, 0LL);
  v8 = System_Int32__ToString((int32_t)&v20, 0LL);
  v9 = System_Int32__ToString((int32_t)&v19, 0LL);
  restrictionDialogHistoryList = (Il2CppObject *)System_String__Concat_61683424(v7, v8, v9, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_11;
  v12 = restrictionDialogHistoryList;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)this->fields.restrictionDialogHistoryList,
         restrictionDialogHistoryList,
         (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_string__Contains__) )
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
    sub_1B86614(restrictionDialogHistoryList, v11);
  }
  monitor_low = SLODWORD(restrictionDialogHistoryList[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)restrictionDialogHistoryList,
      v12,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = (__int64)klass + 8 * monitor_low;
    LODWORD(restrictionDialogHistoryList[1].monitor) = monitor_low + 1;
    *(_QWORD *)(v18 + 32) = v12;
    sub_1B8635C((CGThumbnailListItem_o *)(v18 + 32), (int32_t)v12, v13, v14);
  }
}


void __fastcall PartyOrganizationUtility__CacheQuestUseItems(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  struct QuestUseItemInfo_array *QuestUseItems; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  QuestUseItems = PartyOrganizationUtility__GetQuestUseItems(this, method);
  this->fields.cachedQuestUseItemInfoList = QuestUseItems;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.cachedQuestUseItemInfoList, (int32_t)QuestUseItems, v4, v5);
}


void __fastcall PartyOrganizationUtility__ClearFollowerInfo(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x2

  this->fields._normalFollowerInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._normalFollowerInfo, 0, v2, v3);
  *(_QWORD *)&this->fields._SelectedNormalFollowerClassId_k__BackingField = 0LL;
  PartyOrganizationUtility__ClearNpcFollowerInfo(this, -1, v5);
}


void __fastcall PartyOrganizationUtility__ClearNormalFollowerInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct FollowerInfo_o **p_normalFollowerInfo; // x19

  this->fields._normalFollowerInfo = 0LL;
  p_normalFollowerInfo = &this->fields._normalFollowerInfo;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._normalFollowerInfo, 0, v2, v3);
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

  if ( (byte_4A4A299 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__, *(_QWORD *)&key);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__, v5);
    byte_4A4A299 = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_1B86614(0LL, *(_QWORD *)&key);
  if ( (key & 0x80000000) != 0 )
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
      (const MethodInfo_326D8EC *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
  else
    System_Collections_Generic_Dictionary_int__object___Remove(
      (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
      key,
      (const MethodInfo_326EBEC *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
}


void __fastcall PartyOrganizationUtility__ClearQuestUseItemCache(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  struct QuestUseItemInfo_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4A4A29A & 1) == 0 )
  {
    sub_1B863B8(&QuestUseItemInfo___TypeInfo, method);
    byte_4A4A29A = 1;
  }
  v3 = (struct QuestUseItemInfo_array *)sub_1B86460(QuestUseItemInfo___TypeInfo, 0LL);
  this->fields.cachedQuestUseItemInfoList = v3;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.cachedQuestUseItemInfoList, (int32_t)v3, v4, v5);
}


void __fastcall PartyOrganizationUtility__ClearTemporaryPartyInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *v5; // x0
  CGThumbnailListItem_o *p_temporaryPartyInfo; // x19
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *temporaryPartyInfo; // t1
  int32_t v8; // w1
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  CGThumbnailListItem_c *klass; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  CGThumbnailListItem_o *p_parent; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4A4A291 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, method);
    byte_4A4A291 = 1;
  }
  temporaryPartyInfo = this->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (CGThumbnailListItem_o *)&this->fields.temporaryPartyInfo;
  v5 = temporaryPartyInfo;
  if ( temporaryPartyInfo )
  {
    v5->fields.userServantId = 0LL;
    v5->fields.userEquipId = 0LL;
    v5->fields.deckNumber = -1;
    v8 = (int)StringLiteral_1/*""*/;
    v5->fields.bgmName = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1B8635C((CGThumbnailListItem_o *)&v5->fields.bgmName, v8, v2, v3);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    klass->_1.this_arg.data = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&klass->_1.this_arg, 0, v10, v11);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    *(_QWORD *)&klass->_1.this_arg.bits = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&klass->_1.this_arg.bits, 0, v13, v14);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass
      || (klass->_1.element_class = 0LL,
          sub_1B8635C((CGThumbnailListItem_o *)&klass->_1.element_class, 0, v15, v16),
          (klass = p_temporaryPartyInfo->klass) == 0LL)
      || (klass->_1.castClass = 0LL,
          sub_1B8635C((CGThumbnailListItem_o *)&klass->_1.castClass, 0, v17, v18),
          (klass = p_temporaryPartyInfo->klass) == 0LL) )
    {
LABEL_11:
      sub_1B86614(klass, v9);
    }
    klass->_1.parent = 0LL;
    p_parent = (CGThumbnailListItem_o *)&klass->_1.parent;
    LODWORD(p_parent[-1].fields._ThumbnailSpritePath_k__BackingField) = -1;
    sub_1B8635C(p_parent, 0, v19, v20);
    p_temporaryPartyInfo->klass = 0LL;
    sub_1B8635C(p_temporaryPartyInfo, 0, v22, v23);
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


EventMargeItemUpValInfo_array *__fastcall PartyOrganizationUtility__GetAddUpValInfos(
        PartyOrganizationUtility_o *this,
        System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *infoList,
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
  System_Collections_Generic_List_object__o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v22; // x1
  __int64 v23; // x20
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x21
  int v37; // w8
  _BOOL8 v38; // x0
  __int64 v39; // x1
  Il2CppObject *current; // x29
  __int64 v41; // x0
  __int64 v42; // x1
  int v43; // w8
  int v44; // w8
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A4A2A9 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__, infoList);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v5);
    sub_1B863B8(&System_IDisposable_TypeInfo, v6);
    sub_1B863B8(&System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__TypeInfo, v7);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_EventMargeItemUpValInfo__TypeInfo, v8);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v13);
    sub_1B863B8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v14);
    byte_4A4A2A9 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  v15 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !infoList )
    goto LABEL_65;
  klass = infoList->klass;
  v19 = *(unsigned __int16 *)(&infoList->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&infoList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BD6B4C(infoList, System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *, _QWORD))p_method)(
          infoList,
          *(_QWORD *)(p_method + 8));
  if ( !v23 )
    sub_1B86614(0LL, v22);
  while ( 1 )
  {
    v24 = *(_QWORD *)v23;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_15;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_15:
      v27 = sub_1BD6B4C(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v23;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventMargeItemUpValInfo__c **)v30 - 1) != System_Collections_Generic_IEnumerator_EventMargeItemUpValInfo__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_22;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_22:
      v31 = sub_1BD6B4C(v23, System_Collections_Generic_IEnumerator_EventMargeItemUpValInfo__TypeInfo, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    v36 = v32;
    if ( !v32 )
      sub_1B86614(0LL, v33);
    v37 = *(_DWORD *)(v32 + 60);
    if ( v37 == 1 || v37 == 16 || v37 == 111 )
    {
      if ( !v15 )
        sub_1B86614(v32, v33);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v54,
        v15,
        (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v55 = v54;
      while ( 1 )
      {
        v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v55,
                (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v38 )
          break;
        current = v55.fields._current;
        if ( !v55.fields._current )
          sub_1B86614(v38, v39);
        if ( LODWORD(v55.fields._current[1].klass) == *(_DWORD *)(v36 + 16)
          && LODWORD(v55.fields._current[4].klass) == *(_DWORD *)(v36 + 64)
          && LODWORD(v55.fields._current[3].monitor) == *(_DWORD *)(v36 + 56) )
        {
          goto LABEL_37;
        }
      }
      current = 0LL;
LABEL_37:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v55,
        (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( current )
      {
        v43 = *(_DWORD *)(v36 + 92);
        if ( v43 >= 1 )
          HIDWORD(current[5].monitor) += v43;
        v44 = *(_DWORD *)(v36 + 96);
        if ( v44 >= 1 )
          LODWORD(current[6].klass) += v44;
      }
      else
      {
        items = v15->fields._items;
        v46 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
        ++v15->fields._version;
        if ( !items )
          sub_1B86614(v41, v42);
        size = v15->fields._size;
        if ( (unsigned int)size < items->max_length )
          goto LABEL_44;
LABEL_49:
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v36,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
    }
    else
    {
      if ( !v15 )
        sub_1B86614(v32, v33);
      items = v15->fields._items;
      v46 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1B86614(v32, v33);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
        goto LABEL_49;
LABEL_44:
      v48 = &items->obj.klass + size;
      v15->fields._size = size + 1;
      v48[4] = (Il2CppClass *)v36;
      sub_1B8635C((CGThumbnailListItem_o *)(v48 + 4), v36, v34, v35);
    }
  }
  v49 = *(_QWORD *)v23;
  v50 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_56;
    }
    v52 = v49 + 16LL * *v51 + 312;
  }
  else
  {
LABEL_56:
    v52 = sub_1BD6B4C(v23, System_IDisposable_TypeInfo, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v23, *(_QWORD *)(v52 + 8));
  if ( !v15 )
LABEL_65:
    sub_1B86614(v16, v17);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v15,
                                            (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


EventMargeItemUpValInfo_array *__fastcall PartyOrganizationUtility__GetAdjustUpValInfoArray(
        PartyOrganizationUtility_o *this,
        bool *isDuplicate,
        System_Collections_Generic_List_EventMargeItemUpValInfo__o *infoList,
        const MethodInfo *method)
{
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
  System_Collections_Generic_Dictionary_int__int__o *v20; // x21
  System_Collections_Generic_Dictionary_int__int__o *v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x27
  int32_t klass_high; // w23
  int monitor_high; // w8
  int32_t v29; // w0
  int32_t Item; // w8
  int32_t v31; // w2
  int32_t klass; // w2
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x28
  int32_t v36; // w23
  int v37; // w8
  int32_t v38; // w19
  int32_t v39; // w19
  int32_t v40; // w19
  PartyOrganizationUtility___c_c *v41; // x0
  System_Func_object__bool__o *_9__121_0; // x20
  Il2CppObject *v43; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A4A2A7 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, isDuplicate);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v9);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___, v11);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v15);
    sub_1B863B8(&System_Func_EventMargeItemUpValInfo__bool__TypeInfo, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__, v17);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__GetAdjustUpValInfoArray_b__121_0__, v18);
    sub_1B863B8(&PartyOrganizationUtility___c_TypeInfo, v19);
    byte_4A4A2A7 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  *isDuplicate = 0;
  v20 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v20,
    (const MethodInfo_3264078 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v21 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v21,
    (const MethodInfo_3264078 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !infoList )
    sub_1B86614(v22, v23);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)infoList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)infoList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v51 = v50;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v51,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v24 )
      break;
    current = v51.fields._current;
    if ( !v51.fields._current )
      sub_1B86614(v24, v25);
    klass_high = HIDWORD(v51.fields._current[6].klass);
    if ( klass_high >= 1 )
    {
      monitor_high = HIDWORD(v51.fields._current[3].monitor);
      switch ( monitor_high )
      {
        case 1:
          goto LABEL_11;
        case 111:
          if ( !v21 )
            sub_1B86614(v24, v25);
          if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
                 v21,
                 klass_high,
                 (const MethodInfo_3264C28 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
          {
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     v21,
                     klass_high,
                     (const MethodInfo_32649A0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          }
          else
          {
            System_Collections_Generic_Dictionary_int__int___Add(
              v21,
              klass_high,
              0,
              (const MethodInfo_3264A3C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            Item = 0;
          }
          klass = (int32_t)current[6].klass;
          if ( klass > Item || (klass = HIDWORD(current[5].monitor), klass > Item) )
            System_Collections_Generic_Dictionary_int__int___set_Item(
              v21,
              klass_high,
              klass,
              (const MethodInfo_3264A28 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          break;
        case 16:
LABEL_11:
          if ( !v20 )
            sub_1B86614(v24, v25);
          if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
                 v20,
                 klass_high,
                 (const MethodInfo_3264C28 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
          {
            v29 = System_Collections_Generic_Dictionary_int__int___get_Item(
                    v20,
                    klass_high,
                    (const MethodInfo_32649A0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          }
          else
          {
            System_Collections_Generic_Dictionary_int__int___Add(
              v20,
              klass_high,
              0,
              (const MethodInfo_3264A3C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            v29 = 0;
          }
          v31 = (int32_t)current[6].klass;
          if ( v31 > v29 )
            System_Collections_Generic_Dictionary_int__int___set_Item(
              v20,
              klass_high,
              v31,
              (const MethodInfo_3264A28 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)infoList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v51 = v50;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v51,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v33 )
      break;
    v35 = v51.fields._current;
    if ( !v51.fields._current )
      sub_1B86614(v33, v34);
    v36 = HIDWORD(v51.fields._current[6].klass);
    if ( v36 <= 0 )
    {
LABEL_41:
      LOBYTE(v35[6].monitor) = 0;
    }
    else
    {
      v37 = HIDWORD(v51.fields._current[3].monitor);
      switch ( v37 )
      {
        case 1:
          goto LABEL_32;
        case 111:
          if ( !v21 )
            sub_1B86614(v33, v34);
          if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                  v21,
                  v36,
                  (const MethodInfo_3264C28 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
            goto LABEL_41;
          v39 = (int32_t)v35[6].klass;
          if ( v39 >= System_Collections_Generic_Dictionary_int__int___get_Item(
                        v21,
                        v36,
                        (const MethodInfo_32649A0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
          {
            LOBYTE(v35[6].monitor) = 0;
            System_Collections_Generic_Dictionary_int__int___set_Item(
              v21,
              v36,
              LODWORD(v35[6].klass) + 1,
              (const MethodInfo_3264A28 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          }
          else
          {
            v40 = HIDWORD(v35[5].monitor);
            if ( v40 <= System_Collections_Generic_Dictionary_int__int___get_Item(
                          v21,
                          v36,
                          (const MethodInfo_32649A0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
            {
LABEL_35:
              LOBYTE(v35[6].monitor) = 1;
              *isDuplicate = 1;
            }
            else
            {
              LOBYTE(v35[6].monitor) = 0;
              System_Collections_Generic_Dictionary_int__int___set_Item(
                v21,
                v36,
                HIDWORD(v35[5].monitor) + 1,
                (const MethodInfo_3264A28 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
            }
          }
          break;
        case 16:
LABEL_32:
          if ( !v20 )
            sub_1B86614(v33, v34);
          if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                  v20,
                  v36,
                  (const MethodInfo_3264C28 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
            goto LABEL_41;
          v38 = (int32_t)v35[6].klass;
          if ( v38 < System_Collections_Generic_Dictionary_int__int___get_Item(
                       v20,
                       v36,
                       (const MethodInfo_32649A0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
            goto LABEL_35;
          LOBYTE(v35[6].monitor) = 0;
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v20,
            v36,
            LODWORD(v35[6].klass) + 1,
            (const MethodInfo_3264A28 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  v41 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v41 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__121_0 = (System_Func_object__bool__o *)v41->static_fields->__9__121_0;
  if ( !_9__121_0 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = PartyOrganizationUtility___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v41->static_fields->__9;
    _9__121_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__121_0,
      v43,
      Method_PartyOrganizationUtility___c__GetAdjustUpValInfoArray_b__121_0__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__121_0 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__121_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__121_0, (int32_t)_9__121_0, v45, v46);
  }
  v47 = System_Linq_Enumerable__Where_object_(
          source,
          (System_Func_TSource__bool__o *)_9__121_0,
          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
  return (EventMargeItemUpValInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                            v47,
                                            (const MethodInfo_2FA98D8 *)Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
}


System_Collections_Generic_Dictionary_int__FollowerInfo__o *__fastcall PartyOrganizationUtility__GetAllNpcFollowerInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._npcFollowerInfos;
}


EventCampaignEntity_array *__fastcall PartyOrganizationUtility__GetAvailableQuestUseItemEventCampaignEntities(
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
  __int64 v20; // x19
  QuestEntity_o *Master_object; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  QuestEntity_o **v25; // x21
  Il2CppObject *v26; // x22
  bool v27; // cc
  EventCampaignEntity_array *result; // x0
  Il2CppObject *v29; // x20
  Il2CppObject *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableFriendshipUpItemEventCampaigns; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableRewardAddItemEventCampaigns; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x20
  System_Func_object__bool__o *v45; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x20
  System_Func_object__bool__o *v47; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x20
  System_Func_object__bool__o *v49; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A4A29B & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_EventCampaignMaster___, method);
    sub_1B863B8(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___, v3);
    sub_1B863B8(&Method_DataManager_GetMaster_EventQuestMaster___, v4);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMaster_UserQuestMaster___, v6);
    sub_1B863B8(&Method_DataManager_GetMaster_WarGroupIgnoreMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_WarGroupMaster___, v8);
    sub_1B863B8(&DataManager_TypeInfo, v9);
    sub_1B863B8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v10);
    sub_1B863B8(&Method_System_Linq_Enumerable_Concat_EventCampaignEntity___, v11);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_EventCampaignEntity___, v12);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___, v13);
    sub_1B863B8(&System_Func_EventCampaignEntity__bool__TypeInfo, v14);
    sub_1B863B8(&NetworkManager_TypeInfo, v15);
    sub_1B863B8(
      &Method_PartyOrganizationUtility___c__DisplayClass109_0__GetAvailableQuestUseItemEventCampaignEntities_b__2__,
      v16);
    sub_1B863B8(
      &Method_PartyOrganizationUtility___c__DisplayClass109_0__GetAvailableQuestUseItemEventCampaignEntities_b__3__,
      v17);
    sub_1B863B8(
      &Method_PartyOrganizationUtility___c__DisplayClass109_0__GetAvailableQuestUseItemEventCampaignEntities_b__4__,
      v18);
    sub_1B863B8(&PartyOrganizationUtility___c__DisplayClass109_0_TypeInfo, v19);
    byte_4A4A29B = 1;
  }
  entity = 0LL;
  v20 = sub_1B86604(PartyOrganizationUtility___c__DisplayClass109_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_29;
  *(_QWORD *)(v20 + 24) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v20 + 24), (int32_t)this, v23, v24);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_29;
  v25 = (QuestEntity_o **)(v20 + 40);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         (Il2CppObject **)(v20 + 40),
         this->fields._CachedQuestId_k__BackingField,
         (const MethodInfo_32142CC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v26 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4A48C25 )
    {
      sub_1B863B8(&NetworkManager_TypeInfo, v22);
      byte_4A48C25 = 1;
    }
    Master_object = (QuestEntity_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (QuestEntity_o *)NetworkManager_TypeInfo;
    }
    if ( v26 )
    {
      if ( UserQuestMaster__TryGetEntity(
             (UserQuestMaster_o *)v26,
             &entity,
             (int64_t)Master_object[1].klass->_1.element_class,
             this->fields._CachedQuestId_k__BackingField,
             0LL) )
      {
        Master_object = *v25;
        if ( !*v25 )
          goto LABEL_29;
        if ( QuestEntity__HasFlag(Master_object, 0x20000LL, 0LL) )
        {
          Master_object = (QuestEntity_o *)entity;
          if ( !entity )
            goto LABEL_29;
          v27 = UserQuestEntity__getClearNum(entity, 0LL) <= 0;
          result = 0LL;
          if ( !v27 )
            return result;
        }
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v29 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v30 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_WarGroupMaster___);
      *(_QWORD *)(v20 + 32) = v30;
      sub_1B8635C((CGThumbnailListItem_o *)(v20 + 32), (int32_t)v30, v31, v32);
      v33 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_WarGroupIgnoreMaster___);
      *(_QWORD *)(v20 + 56) = v33;
      sub_1B8635C((CGThumbnailListItem_o *)(v20 + 56), (int32_t)v33, v34, v35);
      v36 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventQuestMaster___);
      *(_QWORD *)(v20 + 16) = v36;
      sub_1B8635C((CGThumbnailListItem_o *)(v20 + 16), (int32_t)v36, v37, v38);
      v39 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
      *(_QWORD *)(v20 + 48) = v39;
      sub_1B8635C((CGThumbnailListItem_o *)(v20 + 48), (int32_t)v39, v40, v41);
      if ( v29 )
      {
        AvailableFriendshipUpItemEventCampaigns = EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                                    (EventCampaignMaster_o *)v29,
                                                    0LL);
        AvailableRewardAddItemEventCampaigns = EventCampaignMaster__GetAvailableRewardAddItemEventCampaigns(
                                                 (EventCampaignMaster_o *)v29,
                                                 0LL);
        v44 = System_Linq_Enumerable__Concat_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)AvailableFriendshipUpItemEventCampaigns,
                (System_Collections_Generic_IEnumerable_TSource__o *)AvailableRewardAddItemEventCampaigns,
                (const MethodInfo_2F87FD0 *)Method_System_Linq_Enumerable_Concat_EventCampaignEntity___);
        v45 = (System_Func_object__bool__o *)sub_1B86604(System_Func_EventCampaignEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v45,
          (Il2CppObject *)v20,
          Method_PartyOrganizationUtility___c__DisplayClass109_0__GetAvailableQuestUseItemEventCampaignEntities_b__2__,
          0LL);
        v46 = System_Linq_Enumerable__Where_object_(
                v44,
                (System_Func_TSource__bool__o *)v45,
                (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
        v47 = (System_Func_object__bool__o *)sub_1B86604(System_Func_EventCampaignEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v47,
          (Il2CppObject *)v20,
          Method_PartyOrganizationUtility___c__DisplayClass109_0__GetAvailableQuestUseItemEventCampaignEntities_b__3__,
          0LL);
        v48 = System_Linq_Enumerable__Where_object_(
                v46,
                (System_Func_TSource__bool__o *)v47,
                (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
        v49 = (System_Func_object__bool__o *)sub_1B86604(System_Func_EventCampaignEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v49,
          (Il2CppObject *)v20,
          Method_PartyOrganizationUtility___c__DisplayClass109_0__GetAvailableQuestUseItemEventCampaignEntities_b__4__,
          0LL);
        v50 = System_Linq_Enumerable__Where_object_(
                v48,
                (System_Func_TSource__bool__o *)v49,
                (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
        return (EventCampaignEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                              v50,
                                              (const MethodInfo_2FA98D8 *)Method_System_Linq_Enumerable_ToArray_EventCampaignEntity___);
      }
    }
LABEL_29:
    sub_1B86614(Master_object, v22);
  }
  return 0LL;
}


QuestUseItemInfo_array *__fastcall PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PartyOrganizationUtility___c_c *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *cachedQuestUseItemInfoList; // x19
  System_Func_object__bool__o *_9__113_0; // x20
  Il2CppObject *v10; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4A4A29F & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___, method);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___, v3);
    sub_1B863B8(&System_Func_QuestUseItemInfo__bool__TypeInfo, v4);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__GetCachedAvailableQuestUseItems_b__113_0__, v5);
    sub_1B863B8(&PartyOrganizationUtility___c_TypeInfo, v6);
    byte_4A4A29F = 1;
  }
  v7 = PartyOrganizationUtility___c_TypeInfo;
  cachedQuestUseItemInfoList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v7 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__113_0 = (System_Func_object__bool__o *)v7->static_fields->__9__113_0;
  if ( !_9__113_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = PartyOrganizationUtility___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__113_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__113_0,
      v10,
      Method_PartyOrganizationUtility___c__GetCachedAvailableQuestUseItems_b__113_0__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__113_0 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__113_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__113_0, (int32_t)_9__113_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          cachedQuestUseItemInfoList,
          (System_Func_TSource__bool__o *)_9__113_0,
          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  return (QuestUseItemInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                     v14,
                                     (const MethodInfo_2FA98D8 *)Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
}


QuestUseItemInfo_array *__fastcall PartyOrganizationUtility__GetCachedQuestUseItems(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A4A2A0 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___, method);
    byte_4A4A2A0 = 1;
  }
  return (QuestUseItemInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList,
                                     (const MethodInfo_2FA98D8 *)Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
}


System_Int32_array *__fastcall PartyOrganizationUtility__GetNeedAddAnnotationSkillIds(
        PartyOrganizationUtility_o *this,
        System_Collections_Generic_IEnumerable_int__o *skillIdList,
        System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *campaignInfoList,
        const MethodInfo *method)
{
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
  System_Collections_Generic_Dictionary_int__object__o *v31; // x20
  System_Collections_Generic_Dictionary_int__object__o *v32; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  __int64 v34; // x1
  System_Collections_Generic_IEnumerable_EventDropUpValInfo__c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v39; // x1
  __int64 v40; // x24
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  EventDropUpValInfo_o *v49; // x0
  __int64 v50; // x1
  int32_t groupId; // w23
  __int64 FuncType; // x0
  __int64 v53; // x1
  System_Collections_Generic_List_int__o *Item; // x0
  __int64 v55; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v59; // x25
  __int64 v60; // x0
  __int64 v61; // x1
  struct System_Int32_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  System_Collections_Generic_IEnumerable_int__c *v69; // x8
  __int64 v70; // x9
  int32_t *v71; // x10
  __int64 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x22
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  SkillLvMaster_o *v79; // x24
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  __int64 v84; // x0
  __int64 v85; // x1
  int32_t v86; // w23
  __int64 v87; // x1
  EventDropUpValInfo_array *AddStateAndFriendshipUpInfoArray; // x0
  __int64 v89; // x1
  EventDropUpValInfo_array *v90; // x24
  int max_length; // w8
  signed int v92; // w28
  EventDropUpValInfo_o *v93; // x8
  int32_t v94; // w25
  Il2CppArrayBounds *bounds; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  System_Collections_Generic_List_int__o *v98; // x26
  __int64 v99; // x0
  __int64 v100; // x1
  struct System_Int32_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  System_Collections_Generic_List_int__o *v104; // x26
  __int64 v105; // x0
  __int64 v106; // x1
  struct System_Int32_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  __int64 v110; // x8
  __int64 v111; // x9
  int *v112; // x10
  __int64 v113; // x0
  System_Collections_Generic_List_int__o *v114; // x21
  PartyOrganizationUtility___c_c *v115; // x8
  System_Func_T__TResult__o *_9__122_0; // x22
  Il2CppObject *v117; // x23
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  System_Collections_Generic_IEnumerable_TSource__c *v121; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v122; // x20
  __int64 v123; // x9
  int32_t *v124; // x10
  __int64 v125; // x0
  __int64 v126; // x1
  __int64 v127; // x20
  __int64 v128; // x8
  __int64 v129; // x9
  int *v130; // x10
  __int64 v131; // x0
  __int64 v132; // x8
  __int64 v133; // x9
  int *v134; // x10
  __int64 v135; // x0
  __int64 v136; // x0
  System_Collections_Generic_IEnumerable_T__o *v137; // x1
  __int64 v138; // x8
  __int64 v139; // x9
  int *v140; // x10
  __int64 v141; // x0
  PartyOrganizationUtility___c_c *v142; // x8
  System_Func_T__TResult__o *_9__122_1; // x20
  Il2CppObject *v144; // x22
  struct PartyOrganizationUtility___c_StaticFields *v145; // x0
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  System_Collections_Generic_IEnumerable_TSource__c *v148; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v149; // x19
  __int64 v150; // x9
  int32_t *v151; // x10
  __int64 v152; // x0
  __int64 v153; // x1
  __int64 v154; // x19
  __int64 v155; // x8
  __int64 v156; // x9
  int *v157; // x10
  __int64 v158; // x0
  __int64 v159; // x8
  __int64 v160; // x9
  int *v161; // x10
  __int64 v162; // x0
  __int64 v163; // x0
  System_Collections_Generic_IEnumerable_T__o *v164; // x1
  __int64 v165; // x8
  __int64 v166; // x9
  int *v167; // x10
  __int64 v168; // x0
  Il2CppObject *Master_object; // [xsp+10h] [xbp-70h]
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A4A2A8 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_SkillLvMaster___, skillIdList);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__, v10);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v11);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_KeyValuePair_int__List_int_____, v12);
    sub_1B863B8(&System_Func_KeyValuePair_int__List_int____bool__TypeInfo, v13);
    sub_1B863B8(&System_IDisposable_TypeInfo, v14);
    sub_1B863B8(&System_Collections_Generic_IEnumerable_EventDropUpValInfo__TypeInfo, v15);
    sub_1B863B8(&System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo, v16);
    sub_1B863B8(&System_Collections_Generic_IEnumerable_int__TypeInfo, v17);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_EventDropUpValInfo__TypeInfo, v18);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo, v19);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_int__TypeInfo, v20);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v21);
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v22);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__AddRange__, v23);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v24);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v25);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v26);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v27);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__GetNeedAddAnnotationSkillIds_b__122_0__, v28);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__GetNeedAddAnnotationSkillIds_b__122_1__, v29);
    sub_1B863B8(&PartyOrganizationUtility___c_TypeInfo, v30);
    byte_4A4A2A8 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v31 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v31,
    (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  v32 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v32,
    (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  if ( campaignInfoList )
  {
    klass = campaignInfoList->klass;
    v36 = *(unsigned __int16 *)(&campaignInfoList->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&campaignInfoList->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_EventDropUpValInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventDropUpValInfo__TypeInfo )
      {
        --v36;
        p_offset += 4;
        if ( !v36 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BD6B4C(campaignInfoList, System_Collections_Generic_IEnumerable_EventDropUpValInfo__TypeInfo, 0LL);
    }
    v40 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *, _QWORD))p_method)(
            campaignInfoList,
            *(_QWORD *)(p_method + 8));
    if ( !v40 )
      sub_1B86614(0LL, v39);
    while ( 1 )
    {
      v41 = *(_QWORD *)v40;
      v42 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
      {
        v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v42;
          v43 += 4;
          if ( !v42 )
            goto LABEL_17;
        }
        v44 = v41 + 16LL * *v43 + 312;
      }
      else
      {
LABEL_17:
        v44 = sub_1BD6B4C(v40, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8)) & 1) == 0 )
        break;
      v45 = *(_QWORD *)v40;
      v46 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
      {
        v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_EventDropUpValInfo__c **)v47 - 1) != System_Collections_Generic_IEnumerator_EventDropUpValInfo__TypeInfo )
        {
          --v46;
          v47 += 4;
          if ( !v46 )
            goto LABEL_24;
        }
        v48 = v45 + 16LL * *v47 + 312;
      }
      else
      {
LABEL_24:
        v48 = sub_1BD6B4C(v40, System_Collections_Generic_IEnumerator_EventDropUpValInfo__TypeInfo, 0LL);
      }
      v49 = (EventDropUpValInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v40, *(_QWORD *)(v48 + 8));
      if ( !v49 )
        sub_1B86614(0LL, v50);
      groupId = v49->fields.groupId;
      if ( groupId >= 1 )
      {
        if ( !v49->fields.funcEntity )
          sub_1B86614(v49, v50);
        FuncType = EventDropUpValInfo__GetFuncType(v49, 0LL);
        if ( (_DWORD)FuncType == 111 )
        {
          if ( !v32 )
            sub_1B86614(FuncType, v53);
          if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
                 v32,
                 groupId,
                 (const MethodInfo_326D958 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
          {
            Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                               v32,
                                                               groupId,
                                                               (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
            if ( !Item )
              sub_1B86614(0LL, v55);
            items = Item->fields._items;
            v57 = Method_System_Collections_Generic_List_int__Add__;
            ++Item->fields._version;
            if ( !items )
              sub_1B86614(Item, v55);
            size = Item->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                Item,
                0,
                *(const MethodInfo_35DF934 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
            }
            else
            {
              Item->fields._size = size + 1;
              items->m_Items[size + 1] = 0;
            }
          }
          else
          {
            v59 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v59,
              (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v59 )
              sub_1B86614(v60, v61);
            v62 = v59->fields._items;
            v63 = Method_System_Collections_Generic_List_int__Add__;
            ++v59->fields._version;
            if ( !v62 )
              sub_1B86614(v60, v61);
            v64 = v59->fields._size;
            if ( (unsigned int)v64 >= v62->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v59,
                0,
                *(const MethodInfo_35DF934 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
            }
            else
            {
              v59->fields._size = v64 + 1;
              v62->m_Items[v64 + 1] = 0;
            }
            System_Collections_Generic_Dictionary_int__object___Add(
              v32,
              groupId,
              (Il2CppObject *)v59,
              (const MethodInfo_326D764 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
          }
        }
      }
    }
    v65 = *(_QWORD *)v40;
    v66 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
    {
      v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
      {
        --v66;
        v67 += 4;
        if ( !v66 )
          goto LABEL_47;
      }
      v68 = v65 + 16LL * *v67 + 312;
    }
    else
    {
LABEL_47:
      v68 = sub_1BD6B4C(v40, System_IDisposable_TypeInfo, 0LL);
    }
    v33 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v68)(
                                                                 v40,
                                                                 *(_QWORD *)(v68 + 8));
  }
  if ( !skillIdList )
    goto LABEL_214;
  v69 = skillIdList->klass;
  v70 = *(unsigned __int16 *)(&skillIdList->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&skillIdList->klass->_2.bitflags2 + 3) )
  {
    v71 = &v69->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)v71 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v70;
      v71 += 4;
      if ( !v70 )
        goto LABEL_55;
    }
    v72 = (__int64)&v69->vtable[*v71].method;
  }
  else
  {
LABEL_55:
    v72 = sub_1BD6B4C(skillIdList, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v74 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v72)(
          skillIdList,
          *(_QWORD *)(v72 + 8));
  if ( !v74 )
    sub_1B86614(0LL, v73);
  while ( 1 )
  {
LABEL_58:
    v75 = *(_QWORD *)v74;
    v76 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
    {
      v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v77 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v76;
        v77 += 4;
        if ( !v76 )
          goto LABEL_62;
      }
      v79 = (SkillLvMaster_o *)Master_object;
      v78 = v75 + 16LL * *v77 + 312;
    }
    else
    {
LABEL_62:
      v78 = sub_1BD6B4C(v74, System_Collections_IEnumerator_TypeInfo, 0LL);
      v79 = (SkillLvMaster_o *)Master_object;
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v78)(v74, *(_QWORD *)(v78 + 8)) & 1) == 0 )
      break;
    v80 = *(_QWORD *)v74;
    v81 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
    {
      v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v82 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v81;
        v82 += 4;
        if ( !v81 )
          goto LABEL_69;
      }
      v83 = v80 + 16LL * *v82 + 312;
    }
    else
    {
LABEL_69:
      v83 = sub_1BD6B4C(v74, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v84 = (*(__int64 (__fastcall **)(__int64, _QWORD))v83)(v74, *(_QWORD *)(v83 + 8));
    if ( !v79 )
      sub_1B86614(v84, v85);
    v86 = v84;
    if ( SkillLvMaster__TryGetEntity(v79, &entity, v84, 1, 0LL) )
    {
      if ( !entity )
        sub_1B86614(0LL, v87);
      AddStateAndFriendshipUpInfoArray = SkillLvEntity__GetAddStateAndFriendshipUpInfoArray(entity, 0LL);
      v90 = AddStateAndFriendshipUpInfoArray;
      if ( !AddStateAndFriendshipUpInfoArray )
        sub_1B86614(0LL, v89);
      max_length = AddStateAndFriendshipUpInfoArray->max_length;
      if ( max_length >= 1 )
      {
        v92 = 0;
        while ( 1 )
        {
          if ( v92 >= (unsigned int)max_length )
            sub_1B8661C(AddStateAndFriendshipUpInfoArray, v89);
          v93 = v90->m_Items[v92];
          if ( !v93 )
            sub_1B86614(AddStateAndFriendshipUpInfoArray, v89);
          v94 = v93->fields.groupId;
          if ( v94 < 1 )
            goto LABEL_109;
          if ( !v93->fields.funcEntity )
            sub_1B86614(AddStateAndFriendshipUpInfoArray, v89);
          AddStateAndFriendshipUpInfoArray = (EventDropUpValInfo_array *)EventDropUpValInfo__GetFuncType(
                                                                           v90->m_Items[v92],
                                                                           0LL);
          if ( (_DWORD)AddStateAndFriendshipUpInfoArray == 1 || (_DWORD)AddStateAndFriendshipUpInfoArray == 16 )
            break;
          if ( (_DWORD)AddStateAndFriendshipUpInfoArray == 111 )
          {
            if ( !v32 )
              sub_1B86614(AddStateAndFriendshipUpInfoArray, v89);
            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                    v32,
                    v94,
                    (const MethodInfo_326D958 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
            {
              v104 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v104,
                (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v104 )
                sub_1B86614(v105, v106);
              v107 = v104->fields._items;
              v108 = Method_System_Collections_Generic_List_int__Add__;
              ++v104->fields._version;
              if ( !v107 )
                sub_1B86614(v105, v106);
              v109 = v104->fields._size;
              if ( (unsigned int)v109 >= v107->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v104,
                  v86,
                  *(const MethodInfo_35DF934 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
              }
              else
              {
                v104->fields._size = v109 + 1;
                v107->m_Items[v109 + 1] = v86;
              }
              System_Collections_Generic_Dictionary_int__object___Add(
                v32,
                v94,
                (Il2CppObject *)v104,
                (const MethodInfo_326D764 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              goto LABEL_109;
            }
            AddStateAndFriendshipUpInfoArray = (EventDropUpValInfo_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                             v32,
                                                                             v94,
                                                                             (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
            if ( !AddStateAndFriendshipUpInfoArray )
              sub_1B86614(0LL, v89);
            bounds = AddStateAndFriendshipUpInfoArray->bounds;
            v96 = Method_System_Collections_Generic_List_int__Add__;
            ++*(&AddStateAndFriendshipUpInfoArray->max_length + 1);
            if ( !bounds )
              sub_1B86614(AddStateAndFriendshipUpInfoArray, v89);
            v97 = (int)AddStateAndFriendshipUpInfoArray->max_length;
            if ( (unsigned int)v97 < bounds[3].length )
            {
LABEL_95:
              AddStateAndFriendshipUpInfoArray->max_length = v97 + 1;
              *(&bounds[4].length + v97) = v86;
              goto LABEL_109;
            }
            goto LABEL_89;
          }
LABEL_109:
          max_length = v90->max_length;
          if ( ++v92 >= max_length )
            goto LABEL_58;
        }
        if ( !v31 )
          sub_1B86614(AddStateAndFriendshipUpInfoArray, v89);
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v31,
                v94,
                (const MethodInfo_326D958 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
        {
          v98 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v98,
            (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v98 )
            sub_1B86614(v99, v100);
          v101 = v98->fields._items;
          v102 = Method_System_Collections_Generic_List_int__Add__;
          ++v98->fields._version;
          if ( !v101 )
            sub_1B86614(v99, v100);
          v103 = v98->fields._size;
          if ( (unsigned int)v103 >= v101->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v98,
              v86,
              *(const MethodInfo_35DF934 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
          }
          else
          {
            v98->fields._size = v103 + 1;
            v101->m_Items[v103 + 1] = v86;
          }
          System_Collections_Generic_Dictionary_int__object___Add(
            v31,
            v94,
            (Il2CppObject *)v98,
            (const MethodInfo_326D764 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
          goto LABEL_109;
        }
        AddStateAndFriendshipUpInfoArray = (EventDropUpValInfo_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         v31,
                                                                         v94,
                                                                         (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
        if ( !AddStateAndFriendshipUpInfoArray )
          sub_1B86614(0LL, v89);
        bounds = AddStateAndFriendshipUpInfoArray->bounds;
        v96 = Method_System_Collections_Generic_List_int__Add__;
        ++*(&AddStateAndFriendshipUpInfoArray->max_length + 1);
        if ( !bounds )
          sub_1B86614(AddStateAndFriendshipUpInfoArray, v89);
        v97 = (int)AddStateAndFriendshipUpInfoArray->max_length;
        if ( (unsigned int)v97 < bounds[3].length )
          goto LABEL_95;
LABEL_89:
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)AddStateAndFriendshipUpInfoArray,
          v86,
          *(const MethodInfo_35DF934 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
        goto LABEL_109;
      }
    }
  }
  v110 = *(_QWORD *)v74;
  v111 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
  {
    v112 = (int *)(*(_QWORD *)(v110 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v112 - 1) != System_IDisposable_TypeInfo )
    {
      --v111;
      v112 += 4;
      if ( !v111 )
        goto LABEL_115;
    }
    v113 = v110 + 16LL * *v112 + 312;
  }
  else
  {
LABEL_115:
    v113 = sub_1BD6B4C(v74, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v113)(v74, *(_QWORD *)(v113 + 8));
  v114 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v114,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v115 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v115 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__122_0 = (System_Func_T__TResult__o *)v115->static_fields->__9__122_0;
  if ( !_9__122_0 )
  {
    if ( !v115->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v115);
      v115 = PartyOrganizationUtility___c_TypeInfo;
    }
    v117 = (Il2CppObject *)v115->static_fields->__9;
    _9__122_0 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_KeyValuePair_int__List_int____bool__TypeInfo);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__122_0,
      v117,
      Method_PartyOrganizationUtility___c__GetNeedAddAnnotationSkillIds_b__122_0__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__122_0 = (struct System_Func_KeyValuePair_int__List_int____bool__o *)_9__122_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__122_0, (int32_t)_9__122_0, v119, v120);
  }
  v33 = System_Linq_Enumerable__Where_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)v31,
          (System_Func_TSource__bool__o *)_9__122_0,
          (const MethodInfo_2FAE670 *)Method_System_Linq_Enumerable_Where_KeyValuePair_int__List_int_____);
  if ( !v33 )
    goto LABEL_214;
  v121 = v33->klass;
  v122 = v33;
  v123 = *(unsigned __int16 *)(&v33->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v33->klass->_2.bitflags2 + 3) )
  {
    v124 = &v121->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____c **)v124 - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo )
    {
      --v123;
      v124 += 4;
      if ( !v123 )
        goto LABEL_128;
    }
    v125 = (__int64)&v121->vtable[*v124].method;
  }
  else
  {
LABEL_128:
    v125 = sub_1BD6B4C(v33, System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo, 0LL);
  }
  v127 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v125)(
           v122,
           *(_QWORD *)(v125 + 8));
  if ( !v127 )
    sub_1B86614(0LL, v126);
  while ( 1 )
  {
    v128 = *(_QWORD *)v127;
    v129 = *(unsigned __int16 *)(*(_QWORD *)v127 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v127 + 302LL) )
    {
      v130 = (int *)(*(_QWORD *)(v128 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v130 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v129;
        v130 += 4;
        if ( !v129 )
          goto LABEL_135;
      }
      v131 = v128 + 16LL * *v130 + 312;
    }
    else
    {
LABEL_135:
      v131 = sub_1BD6B4C(v127, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v131)(v127, *(_QWORD *)(v131 + 8)) & 1) == 0 )
      break;
    v132 = *(_QWORD *)v127;
    v133 = *(unsigned __int16 *)(*(_QWORD *)v127 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v127 + 302LL) )
    {
      v134 = (int *)(*(_QWORD *)(v132 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____c **)v134 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo )
      {
        --v133;
        v134 += 4;
        if ( !v133 )
          goto LABEL_142;
      }
      v135 = v132 + 16LL * *v134 + 312;
    }
    else
    {
LABEL_142:
      v135 = sub_1BD6B4C(v127, System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo, 0LL);
    }
    v136 = (*(__int64 (__fastcall **)(__int64, _QWORD))v135)(v127, *(_QWORD *)(v135 + 8));
    if ( !v114 )
      sub_1B86614(v136, v137);
    System_Collections_Generic_List_int___AddRange(
      v114,
      v137,
      (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  v138 = *(_QWORD *)v127;
  v139 = *(unsigned __int16 *)(*(_QWORD *)v127 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v127 + 302LL) )
  {
    v140 = (int *)(*(_QWORD *)(v138 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v140 - 1) != System_IDisposable_TypeInfo )
    {
      --v139;
      v140 += 4;
      if ( !v139 )
        goto LABEL_150;
    }
    v141 = v138 + 16LL * *v140 + 312;
  }
  else
  {
LABEL_150:
    v141 = sub_1BD6B4C(v127, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v141)(v127, *(_QWORD *)(v141 + 8));
  v142 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v142 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__122_1 = (System_Func_T__TResult__o *)v142->static_fields->__9__122_1;
  if ( !_9__122_1 )
  {
    if ( !v142->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v142);
      v142 = PartyOrganizationUtility___c_TypeInfo;
    }
    v144 = (Il2CppObject *)v142->static_fields->__9;
    _9__122_1 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_KeyValuePair_int__List_int____bool__TypeInfo);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__122_1,
      v144,
      Method_PartyOrganizationUtility___c__GetNeedAddAnnotationSkillIds_b__122_1__,
      0LL);
    v145 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v145->__9__122_1 = (struct System_Func_KeyValuePair_int__List_int____bool__o *)_9__122_1;
    sub_1B8635C((CGThumbnailListItem_o *)&v145->__9__122_1, (int32_t)_9__122_1, v146, v147);
  }
  v33 = System_Linq_Enumerable__Where_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)v32,
          (System_Func_TSource__bool__o *)_9__122_1,
          (const MethodInfo_2FAE670 *)Method_System_Linq_Enumerable_Where_KeyValuePair_int__List_int_____);
  if ( !v33 )
    goto LABEL_214;
  v148 = v33->klass;
  v149 = v33;
  v150 = *(unsigned __int16 *)(&v33->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v33->klass->_2.bitflags2 + 3) )
  {
    v151 = &v148->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____c **)v151 - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo )
    {
      --v150;
      v151 += 4;
      if ( !v150 )
        goto LABEL_163;
    }
    v152 = (__int64)&v148->vtable[*v151].method;
  }
  else
  {
LABEL_163:
    v152 = sub_1BD6B4C(v33, System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo, 0LL);
  }
  v154 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v152)(
           v149,
           *(_QWORD *)(v152 + 8));
  if ( !v154 )
    sub_1B86614(0LL, v153);
  while ( 1 )
  {
    v155 = *(_QWORD *)v154;
    v156 = *(unsigned __int16 *)(*(_QWORD *)v154 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v154 + 302LL) )
    {
      v157 = (int *)(*(_QWORD *)(v155 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v157 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v156;
        v157 += 4;
        if ( !v156 )
          goto LABEL_170;
      }
      v158 = v155 + 16LL * *v157 + 312;
    }
    else
    {
LABEL_170:
      v158 = sub_1BD6B4C(v154, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v158)(v154, *(_QWORD *)(v158 + 8)) & 1) == 0 )
      break;
    v159 = *(_QWORD *)v154;
    v160 = *(unsigned __int16 *)(*(_QWORD *)v154 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v154 + 302LL) )
    {
      v161 = (int *)(*(_QWORD *)(v159 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____c **)v161 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo )
      {
        --v160;
        v161 += 4;
        if ( !v160 )
          goto LABEL_177;
      }
      v162 = v159 + 16LL * *v161 + 312;
    }
    else
    {
LABEL_177:
      v162 = sub_1BD6B4C(v154, System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo, 0LL);
    }
    v163 = (*(__int64 (__fastcall **)(__int64, _QWORD))v162)(v154, *(_QWORD *)(v162 + 8));
    if ( !v114 )
      sub_1B86614(v163, v164);
    System_Collections_Generic_List_int___AddRange(
      v114,
      v164,
      (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  v165 = *(_QWORD *)v154;
  v166 = *(unsigned __int16 *)(*(_QWORD *)v154 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v154 + 302LL) )
  {
    v167 = (int *)(*(_QWORD *)(v165 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v167 - 1) != System_IDisposable_TypeInfo )
    {
      --v166;
      v167 += 4;
      if ( !v166 )
        goto LABEL_185;
    }
    v168 = v165 + 16LL * *v167 + 312;
  }
  else
  {
LABEL_185:
    v168 = sub_1BD6B4C(v154, System_IDisposable_TypeInfo, 0LL);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v168)(
                                                               v154,
                                                               *(_QWORD *)(v168 + 8));
  if ( !v114 )
LABEL_214:
    sub_1B86614(v33, v34);
  return System_Collections_Generic_List_int___ToArray(
           v114,
           (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4A4A298 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_GetValue_int__FollowerInfo___, *(_QWORD *)&key);
    byte_4A4A298 = 1;
  }
  return (FollowerInfo_o *)BasicHelper__GetValue_int__object_(
                             (System_Collections_Generic_Dictionary_K__V__o *)this->fields._npcFollowerInfos,
                             key,
                             0LL,
                             (const MethodInfo_2F5BD3C *)Method_BasicHelper_GetValue_int__FollowerInfo___);
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
  System_Collections_Generic_IEnumerable_TSource__o *CachedAvailableQuestUseItems; // x19
  System_Func_object__bool__o *v22; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  PartyOrganizationUtility___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  System_Func_object__int__o *_9__118_1; // x20
  Il2CppObject *v27; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v31; // x0
  PartyOrganizationUtility___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x19
  System_Func_object__object__o *_9__118_2; // x20
  Il2CppObject *v35; // x21
  CGThumbnailListItem_o *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v39; // x0
  PartyOrganizationUtility___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x19
  System_Func_object__int__o *_9__118_3; // x20
  Il2CppObject *v43; // x21
  struct PartyOrganizationUtility___c_StaticFields *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0

  if ( (byte_4A4A2A4 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_GroupBy_QuestUseItemInfo__int___, *(_QWORD *)&campaignType);
    sub_1B863B8(&Method_System_Linq_Enumerable_SelectMany_IGrouping_int__QuestUseItemInfo___QuestUseItemInfo___, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_QuestUseItemInfo__int___, v6);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___, v8);
    sub_1B863B8(&System_Func_QuestUseItemInfo__bool__TypeInfo, v9);
    sub_1B863B8(&System_Func_QuestUseItemInfo__int__TypeInfo, v10);
    sub_1B863B8(&System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___TypeInfo, v11);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__118_1__, v12);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__118_2__, v13);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__118_3__, v14);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__DisplayClass118_0__GetQuestUseItemIds_b__0__, v15);
    sub_1B863B8(&PartyOrganizationUtility___c__DisplayClass118_0_TypeInfo, v16);
    sub_1B863B8(&PartyOrganizationUtility___c_TypeInfo, v17);
    byte_4A4A2A4 = 1;
  }
  v18 = sub_1B86604(PartyOrganizationUtility___c__DisplayClass118_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    sub_1B86614(v19, v20);
  *(_DWORD *)(v18 + 16) = campaignType;
  CachedAvailableQuestUseItems = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
                                                                                        this,
                                                                                        v20);
  v22 = (System_Func_object__bool__o *)sub_1B86604(System_Func_QuestUseItemInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_PartyOrganizationUtility___c__DisplayClass118_0__GetQuestUseItemIds_b__0__,
    0LL);
  v23 = System_Linq_Enumerable__Where_object_(
          CachedAvailableQuestUseItems,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v24 = PartyOrganizationUtility___c_TypeInfo;
  v25 = v23;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v24 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__118_1 = (System_Func_object__int__o *)v24->static_fields->__9__118_1;
  if ( !_9__118_1 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = PartyOrganizationUtility___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__118_1 = (System_Func_object__int__o *)sub_1B86604(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__118_1,
      v27,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__118_1__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__118_1 = (struct System_Func_QuestUseItemInfo__int__o *)_9__118_1;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__118_1, (int32_t)_9__118_1, v29, v30);
  }
  v31 = System_Linq_Enumerable__GroupBy_object__int_(
          v25,
          (System_Func_TSource__TKey__o *)_9__118_1,
          (const MethodInfo_2F958AC *)Method_System_Linq_Enumerable_GroupBy_QuestUseItemInfo__int___);
  v32 = PartyOrganizationUtility___c_TypeInfo;
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)v31;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v32 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__118_2 = (System_Func_object__object__o *)v32->static_fields->__9__118_2;
  if ( !_9__118_2 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = PartyOrganizationUtility___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__118_2 = (System_Func_object__object__o *)sub_1B86604(System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___TypeInfo);
    System_Func_object__object____ctor(
      _9__118_2,
      v35,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__118_2__,
      0LL);
    v36 = (CGThumbnailListItem_o *)PartyOrganizationUtility___c_TypeInfo->static_fields;
    v36[1].klass = (CGThumbnailListItem_c *)_9__118_2;
    sub_1B8635C(v36 + 1, (int32_t)_9__118_2, v37, v38);
  }
  v39 = System_Linq_Enumerable__SelectMany_object__object_(
          v33,
          (System_Func_TSource__IEnumerable_TResult___o *)_9__118_2,
          (const MethodInfo_2FA37F8 *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__QuestUseItemInfo___QuestUseItemInfo___);
  v40 = PartyOrganizationUtility___c_TypeInfo;
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v40 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__118_3 = (System_Func_object__int__o *)v40->static_fields->__9__118_3;
  if ( !_9__118_3 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = PartyOrganizationUtility___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__118_3 = (System_Func_object__int__o *)sub_1B86604(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__118_3,
      v43,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__118_3__,
      0LL);
    v44 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v44->__9__118_3 = (struct System_Func_QuestUseItemInfo__int__o *)_9__118_3;
    sub_1B8635C((CGThumbnailListItem_o *)&v44->__9__118_3, (int32_t)_9__118_3, v45, v46);
  }
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v41,
                                                               (System_Func_TSource__TResult__o *)_9__118_3,
                                                               (const MethodInfo_2FA0998 *)Method_System_Linq_Enumerable_Select_QuestUseItemInfo__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v47,
           (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
}


QuestUseItemInfo_array *__fastcall PartyOrganizationUtility__GetQuestUseItems(
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
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *Master_object; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  Il2CppObject *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x1
  EventCampaignEntity_array *AvailableQuestUseItemEventCampaignEntities; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x21
  PartyOrganizationUtility___c_c *v53; // x0
  System_Func_object__object__o *_9__110_0; // x22
  Il2CppObject *v55; // x23
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  System_Func_T1__T2__TResult__o *v59; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x21
  System_Func_object__object__o *v61; // x22
  System_Collections_Generic_IEnumerable_T__o *v62; // x0
  System_Collections_Generic_IEnumerable_T__o *v63; // x21
  PartyOrganizationUtility___c_c *v64; // x8
  System_Func_object__bool__o *_9__110_3; // x22
  Il2CppObject *v66; // x23
  struct PartyOrganizationUtility___c_StaticFields *v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  PartyOrganizationUtility___c_c *v71; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x21
  System_Func_object__int__o *_9__110_4; // x22
  Il2CppObject *v74; // x23
  struct PartyOrganizationUtility___c_StaticFields *v75; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v78; // x0
  PartyOrganizationUtility___c_c *v79; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x21
  System_Func_object__object__o *_9__110_5; // x22
  Il2CppObject *v82; // x23
  struct PartyOrganizationUtility___c_StaticFields *v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  System_Collections_Generic_List_object__o *v89; // x21
  Il2CppObject *v90; // x21
  const MethodInfo *v91; // x4
  UserInterruptionQuestEntity_InterruptionInfo_o *InterruptionInfo; // x0
  UserInterruptionQuestEntity_InterruptionInfo_o *v93; // x21
  System_Collections_Generic_IEnumerable_T__o *useRewardAddItemIds; // x21
  System_Action_int__o *v95; // x22
  System_Collections_Generic_List_object__o *v96; // x19
  System_Action_object__o *v97; // x21
  PartyOrganizationUtility___c_c *v98; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v99; // x19
  System_Func_object__int__o *_9__110_7; // x20
  Il2CppObject *v101; // x21
  struct PartyOrganizationUtility___c_StaticFields *v102; // x0
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v105; // x0
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A4A29C & 1) == 0 )
  {
    sub_1B863B8(&System_Action_QuestUseItemInfo__TypeInfo, method);
    sub_1B863B8(&System_Action_int__TypeInfo, v3);
    sub_1B863B8(&Method_BasicHelper_ExcludeNull_QuestUseItemInfo___, v4);
    sub_1B863B8(&Method_BasicHelper_ForEach_int___, v5);
    sub_1B863B8(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_1B863B8(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_UserItemMaster___, v8);
    sub_1B863B8(&DataManager_TypeInfo, v9);
    sub_1B863B8(&Method_System_Linq_Enumerable_GroupBy_QuestUseItemInfo__int___, v10);
    sub_1B863B8(&Method_System_Linq_Enumerable_OrderByDescending_QuestUseItemInfo__int___, v11);
    sub_1B863B8(
      &Method_System_Linq_Enumerable_SelectMany_EventCampaignEntity__int____f__AnonymousType3_EventCampaignEntity__ItemEntity____,
      v12);
    sub_1B863B8(&Method_System_Linq_Enumerable_SelectMany_IGrouping_int__QuestUseItemInfo___QuestUseItemInfo___, v13);
    sub_1B863B8(
      &Method_System_Linq_Enumerable_Select___f__AnonymousType3_EventCampaignEntity__ItemEntity___QuestUseItemInfo___,
      v14);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___, v15);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_QuestUseItemInfo___, v16);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___, v17);
    sub_1B863B8(&System_Func_QuestUseItemInfo__bool__TypeInfo, v18);
    sub_1B863B8(&System_Func___f__AnonymousType3_EventCampaignEntity__ItemEntity___QuestUseItemInfo__TypeInfo, v19);
    sub_1B863B8(&System_Func_EventCampaignEntity__IEnumerable_int___TypeInfo, v20);
    sub_1B863B8(&System_Func_QuestUseItemInfo__int__TypeInfo, v21);
    sub_1B863B8(&System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___TypeInfo, v22);
    sub_1B863B8(
      &System_Func_EventCampaignEntity__int____f__AnonymousType3_EventCampaignEntity__ItemEntity___TypeInfo,
      v23);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestUseItemInfo__ForEach__, v24);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestUseItemInfo___ctor__, v25);
    sub_1B863B8(&System_Collections_Generic_List_QuestUseItemInfo__TypeInfo, v26);
    sub_1B863B8(&NetworkManager_TypeInfo, v27);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__110_0__, v28);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__110_3__, v29);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__110_4__, v30);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__110_5__, v31);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__110_7__, v32);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__DisplayClass110_0__GetQuestUseItems_b__10__, v33);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__DisplayClass110_0__GetQuestUseItems_b__1__, v34);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__DisplayClass110_0__GetQuestUseItems_b__2__, v35);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__DisplayClass110_0__GetQuestUseItems_b__6__, v36);
    sub_1B863B8(&PartyOrganizationUtility___c__DisplayClass110_0_TypeInfo, v37);
    sub_1B863B8(&PartyOrganizationUtility___c_TypeInfo, v38);
    byte_4A4A29C = 1;
  }
  entity = 0LL;
  v39 = sub_1B86604(PartyOrganizationUtility___c__DisplayClass110_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v39, 0LL);
  if ( !v39 )
    goto LABEL_57;
  *(_QWORD *)(v39 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v39 + 32), (int32_t)this, v42, v43);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ItemMaster___);
  *(_QWORD *)(v39 + 16) = Master_object;
  sub_1B8635C((CGThumbnailListItem_o *)(v39 + 16), (int32_t)Master_object, v45, v46);
  v47 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserItemMaster___);
  *(_QWORD *)(v39 + 24) = v47;
  sub_1B8635C((CGThumbnailListItem_o *)(v39 + 24), (int32_t)v47, v48, v49);
  AvailableQuestUseItemEventCampaignEntities = PartyOrganizationUtility__GetAvailableQuestUseItemEventCampaignEntities(
                                                 this,
                                                 v50);
  if ( !AvailableQuestUseItemEventCampaignEntities )
    goto LABEL_32;
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)AvailableQuestUseItemEventCampaignEntities;
  v53 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v53 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__110_0 = (System_Func_object__object__o *)v53->static_fields->__9__110_0;
  if ( !_9__110_0 )
  {
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v53 = PartyOrganizationUtility___c_TypeInfo;
    }
    v55 = (Il2CppObject *)v53->static_fields->__9;
    _9__110_0 = (System_Func_object__object__o *)sub_1B86604(System_Func_EventCampaignEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__110_0,
      v55,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__110_0__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__110_0 = (struct System_Func_EventCampaignEntity__IEnumerable_int___o *)_9__110_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__110_0, (int32_t)_9__110_0, v57, v58);
  }
  v59 = (System_Func_T1__T2__TResult__o *)sub_1B86604(System_Func_EventCampaignEntity__int____f__AnonymousType3_EventCampaignEntity__ItemEntity___TypeInfo);
  System_Func_object__int__object____ctor(
    v59,
    (Il2CppObject *)v39,
    Method_PartyOrganizationUtility___c__DisplayClass110_0__GetQuestUseItems_b__1__,
    0LL);
  v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int__object_(
                                                               v52,
                                                               (System_Func_TSource__IEnumerable_TCollection___o *)_9__110_0,
                                                               (System_Func_TSource__TCollection__TResult__o *)v59,
                                                               (const MethodInfo_2FA394C *)Method_System_Linq_Enumerable_SelectMany_EventCampaignEntity__int____f__AnonymousType3_EventCampaignEntity__ItemEntity____);
  v61 = (System_Func_object__object__o *)sub_1B86604(System_Func___f__AnonymousType3_EventCampaignEntity__ItemEntity___QuestUseItemInfo__TypeInfo);
  System_Func_object__object____ctor(
    v61,
    (Il2CppObject *)v39,
    Method_PartyOrganizationUtility___c__DisplayClass110_0__GetQuestUseItems_b__2__,
    0LL);
  v62 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v60,
                                                         (System_Func_TSource__TResult__o *)v61,
                                                         (const MethodInfo_2FA1274 *)Method_System_Linq_Enumerable_Select___f__AnonymousType3_EventCampaignEntity__ItemEntity___QuestUseItemInfo___);
  v63 = BasicHelper__ExcludeNull_object_(
          v62,
          (const MethodInfo_2F58608 *)Method_BasicHelper_ExcludeNull_QuestUseItemInfo___);
  v64 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v64 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__110_3 = (System_Func_object__bool__o *)v64->static_fields->__9__110_3;
  if ( !_9__110_3 )
  {
    if ( !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64);
      v64 = PartyOrganizationUtility___c_TypeInfo;
    }
    v66 = (Il2CppObject *)v64->static_fields->__9;
    _9__110_3 = (System_Func_object__bool__o *)sub_1B86604(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__110_3,
      v66,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__110_3__,
      0LL);
    v67 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v67->__9__110_3 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__110_3;
    sub_1B8635C((CGThumbnailListItem_o *)&v67->__9__110_3, (int32_t)_9__110_3, v68, v69);
  }
  v70 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v63,
          (System_Func_TSource__bool__o *)_9__110_3,
          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v71 = PartyOrganizationUtility___c_TypeInfo;
  v72 = v70;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v71 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__110_4 = (System_Func_object__int__o *)v71->static_fields->__9__110_4;
  if ( !_9__110_4 )
  {
    if ( !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71);
      v71 = PartyOrganizationUtility___c_TypeInfo;
    }
    v74 = (Il2CppObject *)v71->static_fields->__9;
    _9__110_4 = (System_Func_object__int__o *)sub_1B86604(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__110_4,
      v74,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__110_4__,
      0LL);
    v75 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v75->__9__110_4 = (struct System_Func_QuestUseItemInfo__int__o *)_9__110_4;
    sub_1B8635C((CGThumbnailListItem_o *)&v75->__9__110_4, (int32_t)_9__110_4, v76, v77);
  }
  v78 = System_Linq_Enumerable__GroupBy_object__int_(
          v72,
          (System_Func_TSource__TKey__o *)_9__110_4,
          (const MethodInfo_2F958AC *)Method_System_Linq_Enumerable_GroupBy_QuestUseItemInfo__int___);
  v79 = PartyOrganizationUtility___c_TypeInfo;
  v80 = (System_Collections_Generic_IEnumerable_TSource__o *)v78;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v79 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__110_5 = (System_Func_object__object__o *)v79->static_fields->__9__110_5;
  if ( !_9__110_5 )
  {
    if ( !v79->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v79);
      v79 = PartyOrganizationUtility___c_TypeInfo;
    }
    v82 = (Il2CppObject *)v79->static_fields->__9;
    _9__110_5 = (System_Func_object__object__o *)sub_1B86604(System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___TypeInfo);
    System_Func_object__object____ctor(
      _9__110_5,
      v82,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__110_5__,
      0LL);
    v83 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v83->__9__110_5 = (struct System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___o *)_9__110_5;
    sub_1B8635C((CGThumbnailListItem_o *)&v83->__9__110_5, (int32_t)_9__110_5, v84, v85);
  }
  v86 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v80,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__110_5,
                                                               (const MethodInfo_2FA37F8 *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__QuestUseItemInfo___QuestUseItemInfo___);
  v89 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v86,
                                                       (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_QuestUseItemInfo___);
  if ( !v89 )
  {
LABEL_32:
    v89 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_QuestUseItemInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v89,
      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_QuestUseItemInfo___ctor__);
  }
  *(_QWORD *)(v39 + 40) = v89;
  sub_1B8635C((CGThumbnailListItem_o *)(v39 + 40), (int32_t)v89, v87, v88);
  if ( this->fields._IsWaveBattleRestart_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v90 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4A48C25 )
    {
      sub_1B863B8(&NetworkManager_TypeInfo, v41);
      byte_4A48C25 = 1;
    }
    v40 = (PartyOrganizationUtility_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v40 = (PartyOrganizationUtility_o *)NetworkManager_TypeInfo;
    }
    if ( v90 )
    {
      v40 = (PartyOrganizationUtility_o *)UserInterruptionQuestMaster__TryGetEntity(
                                            (UserInterruptionQuestMaster_o *)v90,
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
          *(System_Collections_Generic_List_QuestUseItemInfo__o **)(v39 + 40),
          30,
          entity->fields.campaignItemId,
          v91);
        v40 = (PartyOrganizationUtility_o *)entity;
        if ( entity )
        {
          InterruptionInfo = UserInterruptionQuestEntity__GetInterruptionInfo(entity, 0LL);
          if ( InterruptionInfo )
          {
            v93 = InterruptionInfo;
            if ( !BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)InterruptionInfo->fields.useRewardAddItemIds,
                    0LL) )
            {
              useRewardAddItemIds = (System_Collections_Generic_IEnumerable_T__o *)v93->fields.useRewardAddItemIds;
              v95 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
              System_Action_int____ctor(
                v95,
                (Il2CppObject *)v39,
                Method_PartyOrganizationUtility___c__DisplayClass110_0__GetQuestUseItems_b__10__,
                0LL);
              BasicHelper__ForEach_int_(
                useRewardAddItemIds,
                (System_Action_T__o *)v95,
                (const MethodInfo_2F59698 *)Method_BasicHelper_ForEach_int___);
            }
          }
          goto LABEL_49;
        }
      }
    }
LABEL_57:
    sub_1B86614(v40, v41);
  }
LABEL_49:
  PartyOrganizationUtility__LoadQuestUseItemUseState(this, v41);
  v96 = *(System_Collections_Generic_List_object__o **)(v39 + 40);
  v97 = (System_Action_object__o *)sub_1B86604(System_Action_QuestUseItemInfo__TypeInfo);
  System_Action_object____ctor(
    v97,
    (Il2CppObject *)v39,
    Method_PartyOrganizationUtility___c__DisplayClass110_0__GetQuestUseItems_b__6__,
    0LL);
  if ( !v96 )
    goto LABEL_57;
  System_Collections_Generic_List_object___ForEach(
    v96,
    (System_Action_T__o *)v97,
    (const MethodInfo_35FD398 *)Method_System_Collections_Generic_List_QuestUseItemInfo__ForEach__);
  v98 = PartyOrganizationUtility___c_TypeInfo;
  v99 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v39 + 40);
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v98 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__110_7 = (System_Func_object__int__o *)v98->static_fields->__9__110_7;
  if ( !_9__110_7 )
  {
    if ( !v98->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v98);
      v98 = PartyOrganizationUtility___c_TypeInfo;
    }
    v101 = (Il2CppObject *)v98->static_fields->__9;
    _9__110_7 = (System_Func_object__int__o *)sub_1B86604(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__110_7,
      v101,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__110_7__,
      0LL);
    v102 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v102->__9__110_7 = (struct System_Func_QuestUseItemInfo__int__o *)_9__110_7;
    sub_1B8635C((CGThumbnailListItem_o *)&v102->__9__110_7, (int32_t)_9__110_7, v103, v104);
  }
  v105 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                v99,
                                                                (System_Func_TSource__TKey__o *)_9__110_7,
                                                                (const MethodInfo_2F9B158 *)Method_System_Linq_Enumerable_OrderByDescending_QuestUseItemInfo__int___);
  return (QuestUseItemInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                     v105,
                                     (const MethodInfo_2FA98D8 *)Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
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

  if ( (byte_4A4A296 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, maxLength);
    sub_1B863B8(&System_Math_TypeInfo, v13);
    sub_1B863B8(&Rarity_TypeInfo, v14);
    sub_1B863B8(&System_Text_StringBuilder_TypeInfo, v15);
    sub_1B863B8(&StringLiteral_9952/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, v16);
    sub_1B863B8(&StringLiteral_9956/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, v17);
    sub_1B863B8(&StringLiteral_9955/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, v18);
    sub_1B863B8(&StringLiteral_9951/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, v19);
    sub_1B863B8(&StringLiteral_9954/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, v20);
    sub_1B863B8(&StringLiteral_9953/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, v21);
    byte_4A4A296 = 1;
  }
  v22 = (System_Text_StringBuilder_o *)sub_1B86604(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v22, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_9951/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, 0LL);
  v24 = System_String__Format(v23, (Il2CppObject *)servantName, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9952/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = (Il2CppObject *)Rarity__getRarityType(servantRarity, 0LL);
  v27 = System_String__Format(v25, RarityType, 0LL);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_9953/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, 0LL);
  v29 = System_String__Format(v28, (Il2CppObject *)equipName, 0LL);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_9954/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, 0LL);
  v31 = System_String__Format(v30, (Il2CppObject *)skillName, 0LL);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_9955/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, 0LL);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_9956/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, 0LL);
  v34 = (Il2CppObject *)Rarity__getRarityType(actMaxRarity, 0LL);
  v35 = System_String__Format(v33, v34, 0LL);
  if ( !v24 || !v29 )
    goto LABEL_14;
  v37 = v35;
  stringLength = v24->fields._stringLength;
  v39 = v29->fields._stringLength;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v35 = (System_String_o *)System_Math__Max_63172752(stringLength, v39, 0LL);
  *maxLength = (int)v35;
  if ( !v31
    || (v35 = (System_String_o *)System_Math__Max_63172752((int32_t)v35, v31->fields._stringLength, 0LL),
        *maxLength = (int)v35,
        !v22) )
  {
LABEL_14:
    sub_1B86614(v35, v36);
  }
  System_Text_StringBuilder__Append_61730360(v22, v24, 0LL);
  System_Text_StringBuilder__Append_61730360(v22, v27, 0LL);
  System_Text_StringBuilder__Append_61730360(v22, v29, 0LL);
  System_Text_StringBuilder__Append_61730360(v22, v31, 0LL);
  System_Text_StringBuilder__Append_61730360(v22, v32, 0LL);
  System_Text_StringBuilder__Append_61730360(v22, v37, 0LL);
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

  if ( (byte_4A4A2A1 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, startingNum);
    byte_4A4A2A1 = 1;
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
          sub_1B86614(PartyItemSmc_k__BackingField, startingNum);
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


bool __fastcall PartyOrganizationUtility__HasCachedQuestUseItem(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A4A29E & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_QuestUseItemInfo___, method);
    byte_4A4A29E = 1;
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList,
           (const MethodInfo_2F7B8DC *)Method_System_Linq_Enumerable_Any_QuestUseItemInfo___);
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
  const MethodInfo *v16; // x3
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
  if ( (byte_4A4A292 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Add__, *(_QWORD *)&questId);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Contains__, v8);
    byte_4A4A292 = 1;
  }
  v9 = System_Int32__ToString((int32_t)&v25, 0LL);
  v10 = System_Int32__ToString((int32_t)&v24, 0LL);
  v11 = System_Int32__ToString((int32_t)&v23, 0LL);
  restrictionDialogHistoryList = (Il2CppObject *)System_String__Concat_61683424(v9, v10, v11, 0LL);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_12;
  v14 = restrictionDialogHistoryList;
  v17 = System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.restrictionDialogHistoryList,
          restrictionDialogHistoryList,
          (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_string__Contains__);
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
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = (__int64)klass + 8 * monitor_low;
          LODWORD(restrictionDialogHistoryList[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v21 + 32) = v14;
          sub_1B8635C((CGThumbnailListItem_o *)(v21 + 32), (int32_t)v14, v15, v16);
        }
        return v17;
      }
    }
LABEL_12:
    sub_1B86614(restrictionDialogHistoryList, v13);
  }
  return v17;
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
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v26; // x27
  Il2CppObject *v27; // x25
  SkillLvMaster_o *v28; // x26
  int v29; // w8
  void *v30; // x24
  unsigned int v31; // w27
  __int64 v32; // x29
  int32_t v33; // w2
  System_String_o *Name; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerable_int__o *ActRarity; // x0
  SkillLvEntity_o *skillLvEntity; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *v40; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A4A294 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMaster___, skillName);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v15);
    sub_1B863B8(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_1B863B8(&Method_DataManager_GetMasterData_SkillMaster___, v17);
    sub_1B863B8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v19);
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v20);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B863B8(&StringLiteral_1/*""*/, v22);
    byte_4A4A294 = 1;
  }
  v40 = 0LL;
  entity = 0LL;
  skillLvEntity = 0LL;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C(
    (CGThumbnailListItem_o *)skillName,
    (int32_t)StringLiteral_1/*""*/,
    (int32_t)actMaxRarity,
    *(const MethodInfo **)&servantId);
  *actMaxRarity = 0;
  if ( ((servantId | servantRarity | equipServantId) & 0x80000000) == 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_35;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           &entity,
           servantId,
           (const MethodInfo_32142CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      v26 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      v27 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
            sub_1B8661C(Instance, v24);
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
                                 &v40,
                                 v33,
                                 (const MethodInfo_32142CC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = v40;
              if ( !v40 )
                goto LABEL_35;
              Instance = (void *)EventEntity__IsEventPeriod((EventEntity_o *)v40, 0LL, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_25;
              Instance = v40;
              if ( !v40 )
                goto LABEL_35;
              Instance = (void *)EventEntity__IsSkillRelease((EventEntity_o *)v40, 0, 0LL);
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
                       (const MethodInfo_3214280 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( Instance )
          {
            Name = SkillEntity__getName((SkillEntity_o *)Instance, 0LL);
            *skillName = Name;
            sub_1B8635C((CGThumbnailListItem_o *)skillName, (int32_t)Name, v36, v37);
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
        sub_1B86614(Instance, v24);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationUtility__IsRarityRestriction_32909536(
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

  if ( (byte_4A4A295 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1B863B8(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A4A295 = 1;
  }
  if ( ((servantId | servantRarity) & 0x80000000) != 0 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   servantId,
                   (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1B86614(Instance, v14);
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
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  unsigned int v26; // w8
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  QuestUseItemInfo_c *v31; // x0
  QuestUseItemInfo_c *v32; // x0
  int32_t Int_69314012; // w0
  System_Collections_Generic_List_object__o *v34; // x20
  int32_t v35; // w21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  unsigned int v38; // w8
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  QuestUseItemInfo_c *v43; // x0
  QuestUseItemInfo_c *v44; // x0
  int32_t v45; // w0
  System_Collections_Generic_List_object__o *v46; // x19
  int32_t v47; // w21
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  PartyOrganizationUtility_o *v50; // x20
  BalanceConfig_c *v51; // x8
  unsigned int v52; // w9
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t v58; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_4A4A2A5 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMaster_ItemMaster___, v3);
    sub_1B863B8(&DataManager_TypeInfo, v4);
    sub_1B863B8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v5);
    sub_1B863B8(&int___TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____Add__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____Clear__, v8);
    sub_1B863B8(&PartyOrganizationUtility_TypeInfo, v9);
    sub_1B863B8(&QuestUseItemInfo_TypeInfo, v10);
    sub_1B863B8(&StringLiteral_817/*","*/, v11);
    this = (PartyOrganizationUtility_o *)sub_1B863B8(&StringLiteral_1/*""*/, v12);
    byte_4A4A2A5 = 1;
  }
  *(_QWORD *)result = 0LL;
  v58 = 0;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ItemMaster___);
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
  this = (PartyOrganizationUtility_o *)System_String__Split_61697188(
                                         (System_String_o *)this,
                                         (System_String_o *)StringLiteral_817/*","*/,
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
                                             &v58,
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
                                             (const MethodInfo_32142CC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
          this = (PartyOrganizationUtility_o *)sub_1B86460(int___TypeInfo, 3LL);
          if ( !this )
            goto LABEL_66;
          v26 = (unsigned int)this->fields._normalFollowerInfo;
          method = (const MethodInfo *)this;
          if ( !v26 )
            break;
          this->fields._SelectedNormalFollowerClassId_k__BackingField = result[1];
          if ( v26 == 1 )
            break;
          this->fields._SelectedNormalFollowerDeckId_k__BackingField = result[0];
          if ( v26 <= 2 )
            break;
          LODWORD(this->fields._npcFollowerInfos) = v58;
          if ( !v23 )
            goto LABEL_66;
          items = v23->fields._items;
          v28 = Method_System_Collections_Generic_List_int____Add__;
          ++v23->fields._version;
          if ( !items )
            goto LABEL_66;
          v29 = v23->fields._size;
          if ( (unsigned int)v29 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              (Il2CppObject *)this,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + v29;
            v23->fields._size = v29 + 1;
            v30[4] = (Il2CppClass *)method;
            sub_1B8635C((CGThumbnailListItem_o *)(v30 + 4), (int32_t)method, v24, v25);
          }
        }
      }
      normalFollowerInfo = (int)v20->fields._normalFollowerInfo;
      v21 += 3;
      if ( v22 + 1 >= normalFollowerInfo )
        goto LABEL_36;
    }
LABEL_65:
    sub_1B8661C(this, method);
  }
LABEL_36:
  v31 = QuestUseItemInfo_TypeInfo;
  if ( !QuestUseItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo);
    v31 = QuestUseItemInfo_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v31->static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE, 0LL) )
  {
    v32 = QuestUseItemInfo_TypeInfo;
    if ( !QuestUseItemInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo);
      v32 = QuestUseItemInfo_TypeInfo;
    }
    Int_69314012 = UnityEngine_PlayerPrefs__GetInt_69314012(
                     v32->static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE,
                     0LL);
    v34 = (System_Collections_Generic_List_object__o *)v2->fields.questUseItemStateList;
    v35 = Int_69314012;
    this = (PartyOrganizationUtility_o *)sub_1B86460(int___TypeInfo, 3LL);
    if ( !this )
      goto LABEL_66;
    v38 = (unsigned int)this->fields._normalFollowerInfo;
    method = (const MethodInfo *)this;
    if ( !v38 )
      goto LABEL_65;
    this->fields._SelectedNormalFollowerClassId_k__BackingField = v35;
    if ( v38 <= 2 )
      goto LABEL_65;
    LODWORD(this->fields._npcFollowerInfos) = 1;
    if ( !v34 )
      goto LABEL_66;
    v39 = v34->fields._items;
    v40 = Method_System_Collections_Generic_List_int____Add__;
    ++v34->fields._version;
    if ( !v39 )
      goto LABEL_66;
    v41 = v34->fields._size;
    if ( (unsigned int)v41 >= v39->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        (Il2CppObject *)this,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &v39->obj.klass + v41;
      v34->fields._size = v41 + 1;
      v42[4] = (Il2CppClass *)method;
      sub_1B8635C((CGThumbnailListItem_o *)(v42 + 4), (int32_t)method, v36, v37);
    }
  }
  v43 = QuestUseItemInfo_TypeInfo;
  if ( !QuestUseItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo);
    v43 = QuestUseItemInfo_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v43->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0LL) )
  {
    v44 = QuestUseItemInfo_TypeInfo;
    if ( !QuestUseItemInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo);
      v44 = QuestUseItemInfo_TypeInfo;
    }
    v45 = UnityEngine_PlayerPrefs__GetInt_69314012(v44->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0LL);
    v46 = (System_Collections_Generic_List_object__o *)v2->fields.questUseItemStateList;
    v47 = v45;
    this = (PartyOrganizationUtility_o *)sub_1B86460(int___TypeInfo, 3LL);
    v50 = this;
    v51 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v51 = BalanceConfig_TypeInfo;
    }
    if ( v50 )
    {
      v52 = (unsigned int)v50->fields._normalFollowerInfo;
      if ( v52 <= 1 )
        goto LABEL_65;
      v50->fields._SelectedNormalFollowerDeckId_k__BackingField = v51->static_fields->DefaultQuestUseFriendshipUpItemGroupId;
      if ( v52 == 2 )
        goto LABEL_65;
      LODWORD(v50->fields._npcFollowerInfos) = v47;
      if ( v46 )
      {
        v53 = v46->fields._items;
        v54 = Method_System_Collections_Generic_List_int____Add__;
        ++v46->fields._version;
        if ( v53 )
        {
          v55 = v46->fields._size;
          if ( (unsigned int)v55 >= v53->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v46,
              (Il2CppObject *)v50,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v56 = &v53->obj.klass + v55;
            v46->fields._size = v55 + 1;
            v56[4] = (Il2CppClass *)v50;
            sub_1B8635C((CGThumbnailListItem_o *)(v56 + 4), (int32_t)v50, v48, v49);
          }
          return;
        }
      }
    }
LABEL_66:
    sub_1B86614(this, method);
  }
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
  __int64 v13; // x1
  PartyOrganizationUtility___c_c *v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *cachedQuestUseItemInfoList; // x19
  System_Func_object__bool__o *_9__117_0; // x20
  Il2CppObject *v17; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  PartyOrganizationUtility___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  System_Func_object__int__o *_9__117_1; // x20
  Il2CppObject *v25; // x21
  struct PartyOrganizationUtility___c_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x19
  Il2CppObject *Master_object; // x0
  __int64 v32; // x1
  bool v33; // w20

  if ( (byte_4A4A2A3 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_EventTutorialMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_int___, v4);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_QuestUseItemInfo__int___, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_int___, v6);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___, v7);
    sub_1B863B8(&System_Func_QuestUseItemInfo__bool__TypeInfo, v8);
    sub_1B863B8(&System_Func_QuestUseItemInfo__int__TypeInfo, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__117_0__, v11);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__117_1__, v12);
    sub_1B863B8(&PartyOrganizationUtility___c_TypeInfo, v13);
    byte_4A4A2A3 = 1;
  }
  v14 = PartyOrganizationUtility___c_TypeInfo;
  cachedQuestUseItemInfoList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v14 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__117_0 = (System_Func_object__bool__o *)v14->static_fields->__9__117_0;
  if ( !_9__117_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = PartyOrganizationUtility___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__117_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__117_0,
      v17,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__117_0__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__117_0 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__117_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__117_0, (int32_t)_9__117_0, v19, v20);
  }
  v21 = System_Linq_Enumerable__Where_object_(
          cachedQuestUseItemInfoList,
          (System_Func_TSource__bool__o *)_9__117_0,
          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v22 = PartyOrganizationUtility___c_TypeInfo;
  v23 = v21;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v22 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__117_1 = (System_Func_object__int__o *)v22->static_fields->__9__117_1;
  if ( !_9__117_1 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = PartyOrganizationUtility___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__117_1 = (System_Func_object__int__o *)sub_1B86604(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__117_1,
      v25,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__117_1__,
      0LL);
    v26 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v26->__9__117_1 = (struct System_Func_QuestUseItemInfo__int__o *)_9__117_1;
    sub_1B8635C((CGThumbnailListItem_o *)&v26->__9__117_1, (int32_t)_9__117_1, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v23,
                                                               (System_Func_TSource__TResult__o *)_9__117_1,
                                                               (const MethodInfo_2FA0998 *)Method_System_Linq_Enumerable_Select_QuestUseItemInfo__int___);
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_int_(
                                                               v29,
                                                               (const MethodInfo_2FAD974 *)Method_System_Linq_Enumerable_ToList_int___);
  Master_object = (Il2CppObject *)System_Linq_Enumerable__Any_int_(
                                    v30,
                                    (const MethodInfo_2F7B3AC *)Method_System_Linq_Enumerable_Any_int___);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !v30 )
      goto LABEL_22;
    v33 = System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)v30,
            0,
            (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_object )
LABEL_22:
      sub_1B86614(Master_object, v32);
    EventTutorialMaster__checkTutorial_40277792(
      (EventTutorialMaster_o *)Master_object,
      (System_Collections_Generic_List_int__o *)v30,
      71,
      0LL,
      0,
      0,
      0,
      0,
      0,
      !v33,
      0LL);
  }
}


bool __fastcall PartyOrganizationUtility__OpenQuestUseItemExpiredDialog(
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
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  ChainableActionBase_o **v29; // x23
  System_Collections_Generic_IEnumerable_TSource__o *cachedQuestUseItemInfoList; // x24
  PartyOrganizationUtility___c_c *v31; // x0
  System_Func_object__bool__o *_9__116_0; // x25
  Il2CppObject *v33; // x26
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  PartyOrganizationUtility___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x24
  System_Func_object__bool__o *_9__116_1; // x25
  Il2CppObject *v41; // x26
  struct PartyOrganizationUtility___c_StaticFields *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  PartyOrganizationUtility___c_c *v46; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x24
  System_Func_object__int__o *_9__116_2; // x25
  Il2CppObject *v49; // x26
  struct PartyOrganizationUtility___c_StaticFields *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_Collections_Generic_IEnumerable_T__o *v53; // x24
  System_Action_object__o *v54; // x25
  System_Object_array *v56; // x23
  ActionChain_o *v57; // x22
  __int64 v58; // x23
  System_Action_o *v59; // x24
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x1
  struct QuestUseItemInfo_array *QuestUseItems; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3

  if ( (byte_4A4A2A2 & 1) == 0 )
  {
    sub_1B863B8(&ActionChain_TypeInfo, callback);
    sub_1B863B8(&System_Action___TypeInfo, v5);
    sub_1B863B8(&System_Action_QuestUseItemInfo__TypeInfo, v6);
    sub_1B863B8(&Method_System_Action_Invoke__, v7);
    sub_1B863B8(&System_Action_TypeInfo, v8);
    sub_1B863B8(&Method_BasicHelper_ForEach_QuestUseItemInfo___, v9);
    sub_1B863B8(&Method_System_Linq_Enumerable_OrderBy_QuestUseItemInfo__int___, v10);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___, v11);
    sub_1B863B8(&System_Func_QuestUseItemInfo__bool__TypeInfo, v12);
    sub_1B863B8(&System_Func_QuestUseItemInfo__int__TypeInfo, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_Action_Action___ToArray__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_Action_Action____ctor__, v15);
    sub_1B863B8(&System_Collections_Generic_List_Action_Action___TypeInfo, v16);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__116_0__, v17);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__116_1__, v18);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__116_2__, v19);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__DisplayClass116_0__OpenQuestUseItemExpiredDialog_b__3__, v20);
    sub_1B863B8(&PartyOrganizationUtility___c__DisplayClass116_0_TypeInfo, v21);
    sub_1B863B8(&PartyOrganizationUtility___c_TypeInfo, v22);
    byte_4A4A2A2 = 1;
  }
  v23 = sub_1B86604(PartyOrganizationUtility___c__DisplayClass116_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.cachedQuestUseItemInfoList, 0LL) )
    return 0;
  v24 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_Action_Action___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_Action_Action____ctor__);
  if ( !v23 )
    goto LABEL_31;
  *(_QWORD *)(v23 + 16) = v24;
  v29 = (ChainableActionBase_o **)(v23 + 16);
  sub_1B8635C((CGThumbnailListItem_o *)(v23 + 16), (int32_t)v24, v27, v28);
  cachedQuestUseItemInfoList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList;
  v31 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v31 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__116_0 = (System_Func_object__bool__o *)v31->static_fields->__9__116_0;
  if ( !_9__116_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = PartyOrganizationUtility___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v31->static_fields->__9;
    _9__116_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__116_0,
      v33,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__116_0__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__116_0 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__116_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__116_0, (int32_t)_9__116_0, v35, v36);
  }
  v37 = System_Linq_Enumerable__Where_object_(
          cachedQuestUseItemInfoList,
          (System_Func_TSource__bool__o *)_9__116_0,
          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v38 = PartyOrganizationUtility___c_TypeInfo;
  v39 = v37;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v38 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__116_1 = (System_Func_object__bool__o *)v38->static_fields->__9__116_1;
  if ( !_9__116_1 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = PartyOrganizationUtility___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v38->static_fields->__9;
    _9__116_1 = (System_Func_object__bool__o *)sub_1B86604(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__116_1,
      v41,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__116_1__,
      0LL);
    v42 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v42->__9__116_1 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__116_1;
    sub_1B8635C((CGThumbnailListItem_o *)&v42->__9__116_1, (int32_t)_9__116_1, v43, v44);
  }
  v45 = System_Linq_Enumerable__Where_object_(
          v39,
          (System_Func_TSource__bool__o *)_9__116_1,
          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v46 = PartyOrganizationUtility___c_TypeInfo;
  v47 = v45;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v46 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__116_2 = (System_Func_object__int__o *)v46->static_fields->__9__116_2;
  if ( !_9__116_2 )
  {
    if ( !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v46 = PartyOrganizationUtility___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v46->static_fields->__9;
    _9__116_2 = (System_Func_object__int__o *)sub_1B86604(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__116_2,
      v49,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__116_2__,
      0LL);
    v50 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v50->__9__116_2 = (struct System_Func_QuestUseItemInfo__int__o *)_9__116_2;
    sub_1B8635C((CGThumbnailListItem_o *)&v50->__9__116_2, (int32_t)_9__116_2, v51, v52);
  }
  v53 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                         v47,
                                                         (System_Func_TSource__TKey__o *)_9__116_2,
                                                         (const MethodInfo_2F9AB50 *)Method_System_Linq_Enumerable_OrderBy_QuestUseItemInfo__int___);
  v54 = (System_Action_object__o *)sub_1B86604(System_Action_QuestUseItemInfo__TypeInfo);
  System_Action_object____ctor(
    v54,
    (Il2CppObject *)v23,
    Method_PartyOrganizationUtility___c__DisplayClass116_0__OpenQuestUseItemExpiredDialog_b__3__,
    0LL);
  BasicHelper__ForEach_object_(
    v53,
    (System_Action_T__o *)v54,
    (const MethodInfo_2F59FB0 *)Method_BasicHelper_ForEach_QuestUseItemInfo___);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v23 + 16), 0LL) )
    return 0;
  v25 = *v29;
  if ( !*v29 )
    goto LABEL_31;
  v56 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)v25,
          (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
  v57 = (ActionChain_o *)sub_1B86604(ActionChain_TypeInfo);
  ActionChain___ctor_47543752(v57, (System_Action_Action__array *)v56, 0LL);
  v58 = sub_1B86460(System_Action___TypeInfo, 1LL);
  v59 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v59, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0LL);
  if ( !v58 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v58 + 24) )
    sub_1B8661C(v25, v26);
  *(_QWORD *)(v58 + 32) = v59;
  sub_1B8635C((CGThumbnailListItem_o *)(v58 + 32), (int32_t)v59, v60, v61);
  if ( !v57 || (v25 = ChainableActionBase__Final((ChainableActionBase_o *)v57, (System_Action_array *)v58, 0LL)) == 0LL )
LABEL_31:
    sub_1B86614(v25, v26);
  ChainableActionBase__Execute(v25, 0LL);
  QuestUseItems = PartyOrganizationUtility__GetQuestUseItems(this, v62);
  this->fields.cachedQuestUseItemInfoList = QuestUseItems;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.cachedQuestUseItemInfoList, (int32_t)QuestUseItems, v64, v65);
  return 1;
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
  System_Collections_Generic_IEnumerable_T__o *CachedAvailableQuestUseItems; // x20
  System_Action_object__o *v14; // x21
  PartyOrganizationUtility___c_c *v15; // x0
  struct System_Collections_Generic_List_int____o *questUseItemStateList; // x19
  System_Func_object__object__o *_9__120_1; // x20
  Il2CppObject *v18; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v22; // x0
  PartyOrganizationUtility_c *v23; // x8
  System_Collections_Generic_IEnumerable_T__o *v24; // x19
  System_String_o *SAVE_KEY_QUEST_USE_ITEM; // x20
  System_String_o *v26; // x0
  QuestUseItemInfo_c *v27; // x0

  if ( (byte_4A4A2A6 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_QuestUseItemInfo__TypeInfo, method);
    sub_1B863B8(&Method_BasicHelper_ForEach_QuestUseItemInfo___, v3);
    sub_1B863B8(&Method_System_Linq_Enumerable_SelectMany_int____int___, v4);
    sub_1B863B8(&System_Func_int____IEnumerable_int___TypeInfo, v5);
    sub_1B863B8(&Method_PartyOrganizationUtility__SaveQuestUseItemUseState_b__120_0__, v6);
    sub_1B863B8(&PartyOrganizationUtility_TypeInfo, v7);
    sub_1B863B8(&QuestUseItemInfo_TypeInfo, v8);
    sub_1B863B8(&Method_System_String_Join_int___, v9);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__SaveQuestUseItemUseState_b__120_1__, v10);
    sub_1B863B8(&PartyOrganizationUtility___c_TypeInfo, v11);
    sub_1B863B8(&StringLiteral_817/*","*/, v12);
    byte_4A4A2A6 = 1;
  }
  CachedAvailableQuestUseItems = (System_Collections_Generic_IEnumerable_T__o *)PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
                                                                                  this,
                                                                                  method);
  v14 = (System_Action_object__o *)sub_1B86604(System_Action_QuestUseItemInfo__TypeInfo);
  System_Action_object____ctor(
    v14,
    (Il2CppObject *)this,
    Method_PartyOrganizationUtility__SaveQuestUseItemUseState_b__120_0__,
    0LL);
  BasicHelper__ForEach_object_(
    CachedAvailableQuestUseItems,
    (System_Action_T__o *)v14,
    (const MethodInfo_2F59FB0 *)Method_BasicHelper_ForEach_QuestUseItemInfo___);
  v15 = PartyOrganizationUtility___c_TypeInfo;
  questUseItemStateList = this->fields.questUseItemStateList;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v15 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__120_1 = (System_Func_object__object__o *)v15->static_fields->__9__120_1;
  if ( !_9__120_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = PartyOrganizationUtility___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__120_1 = (System_Func_object__object__o *)sub_1B86604(System_Func_int____IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__120_1,
      v18,
      Method_PartyOrganizationUtility___c__SaveQuestUseItemUseState_b__120_1__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__120_1 = (struct System_Func_int____IEnumerable_int___o *)_9__120_1;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__120_1, (int32_t)_9__120_1, v20, v21);
  }
  v22 = System_Linq_Enumerable__SelectMany_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questUseItemStateList,
          (System_Func_TSource__IEnumerable_TResult___o *)_9__120_1,
          (const MethodInfo_2FA3788 *)Method_System_Linq_Enumerable_SelectMany_int____int___);
  v23 = PartyOrganizationUtility_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_T__o *)v22;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v23 = PartyOrganizationUtility_TypeInfo;
  }
  SAVE_KEY_QUEST_USE_ITEM = v23->static_fields->SAVE_KEY_QUEST_USE_ITEM;
  v26 = System_String__Join_int_(
          (System_String_o *)StringLiteral_817/*","*/,
          v24,
          (const MethodInfo_3013FB8 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_QUEST_USE_ITEM, v26, 0LL);
  v27 = QuestUseItemInfo_TypeInfo;
  if ( !QuestUseItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo);
    v27 = QuestUseItemInfo_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v27->static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(QuestUseItemInfo_TypeInfo->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0LL);
}


void __fastcall PartyOrganizationUtility__SetNormalFollowerInfo(
        PartyOrganizationUtility_o *this,
        FollowerInfo_o *followerInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._normalFollowerInfo = followerInfo;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._normalFollowerInfo, (int32_t)followerInfo, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationUtility__SetNpcFollowerInfo(
        PartyOrganizationUtility_o *this,
        int32_t key,
        FollowerInfo_o *followerInfo,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcFollowerInfos; // x0

  if ( (byte_4A4A297 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__, *(_QWORD *)&key);
    byte_4A4A297 = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_1B86614(0LL, *(_QWORD *)&key);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
    key,
    (Il2CppObject *)followerInfo,
    (const MethodInfo_326D750 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
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
  char *klass; // x0
  CGThumbnailListItem_o *p_temporaryPartyInfo; // x20
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *temporaryPartyInfo; // t1
  Il2CppObject *v24; // x29
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  CGThumbnailListItem_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  CGThumbnailListItem_c *v37; // x20
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  Il2CppObject *v41; // x19
  __int64 v42; // x0
  CGThumbnailListItem_o *p_parent; // x20
  __int64 v44; // x0
  int32_t v45; // w1
  PartyOrganizationUtility_TemporaryPartyInfo_o *v46; // x0
  const MethodInfo *v47; // x1

  if ( (byte_4A4A290 & 1) == 0 )
  {
    sub_1B863B8(&PartyListViewItem___TypeInfo, userServantId);
    sub_1B863B8(&PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo, v20);
    byte_4A4A290 = 1;
  }
  temporaryPartyInfo = this->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (CGThumbnailListItem_o *)&this->fields.temporaryPartyInfo;
  klass = (char *)temporaryPartyInfo;
  if ( !temporaryPartyInfo )
  {
    v24 = (Il2CppObject *)sub_1B86604(PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo);
    System_Object___ctor(v24, 0LL);
    p_temporaryPartyInfo->klass = (CGThumbnailListItem_c *)v24;
    sub_1B8635C(p_temporaryPartyInfo, (int32_t)v24, v25, v26);
    klass = (char *)p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_18;
  }
  *((_QWORD *)klass + 5) = bgmName;
  v28 = (CGThumbnailListItem_o *)(klass + 40);
  *(_QWORD *)&v28[-1].fields._Id_k__BackingField = userServantId;
  *(_QWORD *)&v28[-1].fields._Type_k__BackingField = userEquipId;
  LODWORD(v28[-1].fields._ThumbnailSpritePath_k__BackingField) = deckNumber;
  sub_1B8635C(v28, (int32_t)bgmName, userEquipId, *(const MethodInfo **)&deckNumber);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 6) = battleSetupInfo;
  sub_1B8635C((CGThumbnailListItem_o *)(klass + 48), (int32_t)battleSetupInfo, v29, v30);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 7) = followerInfo;
  sub_1B8635C((CGThumbnailListItem_o *)(klass + 56), (int32_t)followerInfo, v31, v32);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass
    || (*((_QWORD *)klass + 8) = basePartyItem,
        sub_1B8635C((CGThumbnailListItem_o *)(klass + 64), (int32_t)basePartyItem, v33, v34),
        (klass = (char *)p_temporaryPartyInfo->klass) == 0LL)
    || (*((_QWORD *)klass + 9) = partyItem,
        sub_1B8635C((CGThumbnailListItem_o *)(klass + 72), (int32_t)partyItem, v35, v36),
        (v37 = p_temporaryPartyInfo->klass) == 0LL) )
  {
LABEL_18:
    sub_1B86614(klass, v27);
  }
  LODWORD(v37->_1.declaringType) = selectPartyMemberNum;
  if ( baseDeckItemList )
  {
    v38 = System_Array__Clone((System_Array_o *)baseDeckItemList, 0LL);
    if ( !v38 )
    {
      v45 = 0;
      v37->_1.parent = 0LL;
      p_parent = (CGThumbnailListItem_o *)&v37->_1.parent;
      goto LABEL_17;
    }
    v41 = v38;
    v42 = sub_1B864F4(v38, PartyListViewItem___TypeInfo);
    if ( v42 )
    {
      v37->_1.parent = (Il2CppClass *)v42;
      p_parent = (CGThumbnailListItem_o *)&v37->_1.parent;
      v44 = sub_1B864F4(v41, PartyListViewItem___TypeInfo);
      if ( v44 )
      {
        v45 = v44;
LABEL_17:
        sub_1B8635C(p_parent, v45, v39, v40);
        return;
      }
    }
    v46 = (PartyOrganizationUtility_TemporaryPartyInfo_o *)sub_1B868D4(v41);
    PartyOrganizationUtility_TemporaryPartyInfo___ctor(v46, v47);
  }
}


void __fastcall PartyOrganizationUtility__UpdateInterruptionUseItem(
        PartyOrganizationUtility_o *this,
        System_Collections_Generic_List_QuestUseItemInfo__o *list,
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
  QuestUseItemInfo_o *v25; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *QuestUseItemEventCampaignsByItemId; // x0
  Il2CppObject *v27; // x21
  int32_t v28; // w21
  ItemEntity_o *v29; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w21
  ItemEntity_o *v33; // x22
  struct QuestUseItemInfo_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  int64_t outStartedAt; // [xsp+8h] [xbp-48h] BYREF
  int64_t outEndedAt; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A4A29D & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_EventCampaignMaster___, list);
    sub_1B863B8(&Method_DataManager_GetMaster_ItemMaster___, v8);
    sub_1B863B8(&DataManager_TypeInfo, v9);
    sub_1B863B8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v10);
    sub_1B863B8(&Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___, v11);
    sub_1B863B8(&Method_System_Linq_Enumerable_FirstOrDefault_QuestUseItemInfo___, v12);
    sub_1B863B8(&System_Func_QuestUseItemInfo__bool__TypeInfo, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestUseItemInfo__Add__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestUseItemInfo__Remove__, v15);
    sub_1B863B8(&QuestUseItemInfo_TypeInfo, v16);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__DisplayClass111_0__UpdateInterruptionUseItem_b__0__, v17);
    sub_1B863B8(&PartyOrganizationUtility___c__DisplayClass111_0_TypeInfo, v18);
    byte_4A4A29D = 1;
  }
  outEndedAt = 0LL;
  outStartedAt = 0LL;
  v19 = sub_1B86604(PartyOrganizationUtility___c__DisplayClass111_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_30;
  *(_DWORD *)(v19 + 16) = campaignType;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_30;
  v22 = v19 + 24;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          (Il2CppObject **)(v19 + 24),
          itemId,
          (const MethodInfo_32142CC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return;
  v23 = (System_Func_object__bool__o *)sub_1B86604(System_Func_QuestUseItemInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v19,
    Method_PartyOrganizationUtility___c__DisplayClass111_0__UpdateInterruptionUseItem_b__0__,
    0LL);
  v24 = System_Linq_Enumerable__FirstOrDefault_object__49893388(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_2F9500C *)Method_System_Linq_Enumerable_FirstOrDefault_QuestUseItemInfo___);
  if ( !v24 )
  {
    v28 = *(_DWORD *)(v19 + 16);
    v29 = *(ItemEntity_o **)(v19 + 24);
    v25 = (QuestUseItemInfo_o *)sub_1B86604(QuestUseItemInfo_TypeInfo);
    QuestUseItemInfo___ctor_32995556(v25, v28, v29, 0LL);
    if ( !list )
      goto LABEL_30;
    goto LABEL_23;
  }
  v25 = (QuestUseItemInfo_o *)v24;
  if ( LODWORD(v24[1].klass) != itemId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    if ( !Master_object )
      goto LABEL_30;
    QuestUseItemEventCampaignsByItemId = EventCampaignMaster__GetQuestUseItemEventCampaignsByItemId(
                                           (EventCampaignMaster_o *)Master_object,
                                           *(_DWORD *)(v19 + 16),
                                           itemId,
                                           0LL);
    Master_object = System_Linq_Enumerable__FirstOrDefault_object_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)QuestUseItemEventCampaignsByItemId,
                      (const MethodInfo_2F93C68 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___);
    if ( Master_object )
    {
      v27 = Master_object;
      Master_object = *(Il2CppObject **)v22;
      if ( !*(_QWORD *)v22 )
        goto LABEL_30;
      Master_object = (Il2CppObject *)ItemEntity__IsEnable_40376620(
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
        sub_1B86614(Master_object, v21);
      }
    }
    if ( !list )
      goto LABEL_30;
    System_Collections_Generic_List_object___Remove(
      (System_Collections_Generic_List_object__o *)list,
      (Il2CppObject *)v25,
      (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_QuestUseItemInfo__Remove__);
    v32 = *(_DWORD *)(v19 + 16);
    v33 = *(ItemEntity_o **)(v19 + 24);
    v25 = (QuestUseItemInfo_o *)sub_1B86604(QuestUseItemInfo_TypeInfo);
    QuestUseItemInfo___ctor_32995556(v25, v32, v33, 0LL);
LABEL_23:
    items = list->fields._items;
    v35 = Method_System_Collections_Generic_List_QuestUseItemInfo__Add__;
    ++list->fields._version;
    if ( items )
    {
      size = list->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)list,
          (Il2CppObject *)v25,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        list->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v25;
        sub_1B8635C((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v25, v30, v31);
      }
      if ( v25 )
        goto LABEL_28;
    }
    goto LABEL_30;
  }
LABEL_28:
  v25->fields._InterruptionUseFlag_k__BackingField = 1;
}


void __fastcall PartyOrganizationUtility___SaveQuestUseItemUseState_b__120_0(
        PartyOrganizationUtility_o *this,
        QuestUseItemInfo_o *info,
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  QuestUseItemInfo_o **v16; // x20
  int v17; // w25
  bool IsGroupItem; // w0
  struct System_Collections_Generic_List_int____o *questUseItemStateList; // x21
  bool v20; // w24
  System_Func_object__bool__o *v21; // x0
  System_Func_TSource__bool__o *v22; // x23
  __int64 *v23; // x8
  System_Collections_Generic_List_object__o *v24; // x19
  Il2CppObject *v25; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t Id_k__BackingField; // w9
  unsigned int monitor; // w8
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4A4A2AC & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_FirstOrDefault_int_____, info);
    sub_1B863B8(&System_Func_int____bool__TypeInfo, v5);
    sub_1B863B8(&int___TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____Add__, v7);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__DisplayClass120_0__SaveQuestUseItemUseState_b__2__, v8);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__DisplayClass120_0__SaveQuestUseItemUseState_b__3__, v9);
    sub_1B863B8(&PartyOrganizationUtility___c__DisplayClass120_0_TypeInfo, v10);
    byte_4A4A2AC = 1;
  }
  v11 = sub_1B86604(PartyOrganizationUtility___c__DisplayClass120_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_26;
  *(_QWORD *)(v11 + 16) = info;
  v16 = (QuestUseItemInfo_o **)(v11 + 16);
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)info, v14, v15);
  v12 = *(Il2CppObject **)(v11 + 16);
  if ( !v12 )
    goto LABEL_26;
  v17 = BYTE4(v12[5].monitor);
  IsGroupItem = QuestUseItemInfo__get_IsGroupItem((QuestUseItemInfo_o *)v12, 0LL);
  questUseItemStateList = this->fields.questUseItemStateList;
  v20 = IsGroupItem;
  v21 = (System_Func_object__bool__o *)sub_1B86604(System_Func_int____bool__TypeInfo);
  v22 = (System_Func_TSource__bool__o *)v21;
  if ( v20 )
    v23 = &Method_PartyOrganizationUtility___c__DisplayClass120_0__SaveQuestUseItemUseState_b__2__;
  else
    v23 = &Method_PartyOrganizationUtility___c__DisplayClass120_0__SaveQuestUseItemUseState_b__3__;
  System_Func_object__bool____ctor(v21, (Il2CppObject *)v11, *v23, 0LL);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__49893388(
          (System_Collections_Generic_IEnumerable_TSource__o *)questUseItemStateList,
          v22,
          (const MethodInfo_2F9500C *)Method_System_Linq_Enumerable_FirstOrDefault_int_____);
  if ( v12 )
  {
    if ( LODWORD(v12[1].monitor) > 2 )
    {
      LODWORD(v12[2].monitor) = v17;
      return;
    }
LABEL_27:
    sub_1B8661C(v12, v13);
  }
  v24 = (System_Collections_Generic_List_object__o *)this->fields.questUseItemStateList;
  v12 = (Il2CppObject *)sub_1B86460(int___TypeInfo, 3LL);
  if ( !*v16 )
    goto LABEL_26;
  v25 = v12;
  v12 = (Il2CppObject *)QuestUseItemInfo__get_IsGroupItem(*v16, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    Id_k__BackingField = 0;
  }
  else
  {
    if ( !*v16 )
      goto LABEL_26;
    Id_k__BackingField = (*v16)->fields._Id_k__BackingField;
  }
  if ( !v25 )
    goto LABEL_26;
  monitor = (unsigned int)v25[1].monitor;
  if ( !monitor )
    goto LABEL_27;
  LODWORD(v25[2].klass) = Id_k__BackingField;
  if ( !*v16 )
    goto LABEL_26;
  if ( monitor <= 1 )
    goto LABEL_27;
  HIDWORD(v25[2].klass) = (*v16)->fields._GroupId_k__BackingField;
  if ( monitor == 2 )
    goto LABEL_27;
  LODWORD(v25[2].monitor) = v17;
  if ( !v24
    || (items = v24->fields._items,
        v31 = Method_System_Collections_Generic_List_int____Add__,
        ++v24->fields._version,
        !items) )
  {
LABEL_26:
    sub_1B86614(v12, v13);
  }
  size = v24->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      v25,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    v24->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v25;
    sub_1B8635C((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v25, v26, v27);
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


bool __fastcall PartyOrganizationUtility__get_IsQuestStartedMenuMode(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._IsQuestStartedMenuMode_k__BackingField;
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
  const MethodInfo *v3; // x3

  this->fields._BasePartyItem_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._BasePartyItem_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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


void __fastcall PartyOrganizationUtility__set_IsQuestStartedMenuMode(
        PartyOrganizationUtility_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsQuestStartedMenuMode_k__BackingField = value;
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
  const MethodInfo *v3; // x3

  this->fields._PartyItem_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._PartyItem_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall PartyOrganizationUtility__set_PartyItemSmc(
        PartyOrganizationUtility_o *this,
        PartyListViewItem_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._PartyItemSmc_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._PartyItemSmc_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  const MethodInfo *v3; // x3

  this->fields._TransitionDestinationFromDetail_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._TransitionDestinationFromDetail_k__BackingField,
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


void __fastcall PartyOrganizationUtility___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4A2AD & 1) == 0 )
  {
    sub_1B863B8(&PartyOrganizationUtility___c_TypeInfo, v1);
    byte_4A4A2AD = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(PartyOrganizationUtility___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PartyOrganizationUtility___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationUtility___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)PartyOrganizationUtility___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall PartyOrganizationUtility___c___ctor(PartyOrganizationUtility___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyOrganizationUtility___c___GetAdjustUpValInfoArray_b__121_0(
        PartyOrganizationUtility___c_o *this,
        EventMargeItemUpValInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return !x->fields.isInvalid;
}


bool __fastcall PartyOrganizationUtility___c___GetCachedAvailableQuestUseItems_b__113_0(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1B86614(this, 0LL);
  return info->fields._IsValid_k__BackingField;
}


bool __fastcall PartyOrganizationUtility___c___GetNeedAddAnnotationSkillIds_b__122_0(
        PartyOrganizationUtility___c_o *this,
        System_Collections_Generic_KeyValuePair_int__List_int___o keyValuePair,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *value; // x19
  __int64 v4; // x1

  value = keyValuePair.fields.value;
  if ( (byte_4A4A2B0 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__,
      *(_QWORD *)&keyValuePair.fields.key);
    this = (PartyOrganizationUtility___c_o *)sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    byte_4A4A2B0 = 1;
  }
  if ( !value )
    sub_1B86614(this, *(_QWORD *)&keyValuePair.fields.key);
  return value->fields._size > 1;
}


bool __fastcall PartyOrganizationUtility___c___GetNeedAddAnnotationSkillIds_b__122_1(
        PartyOrganizationUtility___c_o *this,
        System_Collections_Generic_KeyValuePair_int__List_int___o keyValuePair,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *value; // x19
  __int64 v4; // x1

  value = keyValuePair.fields.value;
  if ( (byte_4A4A2B1 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__,
      *(_QWORD *)&keyValuePair.fields.key);
    this = (PartyOrganizationUtility___c_o *)sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    byte_4A4A2B1 = 1;
  }
  if ( !value )
    sub_1B86614(this, *(_QWORD *)&keyValuePair.fields.key);
  return value->fields._size > 1;
}


int32_t __fastcall PartyOrganizationUtility___c___GetQuestUseItemIds_b__118_1(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1B86614(this, 0LL);
  return info->fields._NotDuplicationGroupId_k__BackingField;
}


System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *__fastcall PartyOrganizationUtility___c___GetQuestUseItemIds_b__118_2(
        PartyOrganizationUtility___c_o *this,
        System_Linq_IGrouping_int__QuestUseItemInfo__o *group,
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
  System_Linq_IGrouping_int__QuestUseItemInfo__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  PartyOrganizationUtility___c_c *v17; // x0
  System_Func_object__int__o *_9__118_4; // x20
  Il2CppObject *v19; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v23; // x0
  PartyOrganizationUtility___c_c *v24; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v25; // x19
  System_Func_T__TResult__o *_9__118_5; // x20
  Il2CppObject *v27; // x21
  struct PartyOrganizationUtility___c_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  if ( (byte_4A4A2AF & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_AsEnumerable_QuestUseItemInfo___, group);
    sub_1B863B8(&Method_System_Linq_Enumerable_OrderByDescending_QuestUseItemInfo__int___, v4);
    sub_1B863B8(&Method_System_Linq_Enumerable_Take_QuestUseItemInfo___, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_ThenBy_QuestUseItemInfo__long___, v6);
    sub_1B863B8(&System_Func_QuestUseItemInfo__long__TypeInfo, v7);
    sub_1B863B8(&System_Func_QuestUseItemInfo__int__TypeInfo, v8);
    sub_1B863B8(&System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo, v9);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__118_4__, v10);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__118_5__, v11);
    this = (PartyOrganizationUtility___c_o *)sub_1B863B8(&PartyOrganizationUtility___c_TypeInfo, v12);
    byte_4A4A2AF = 1;
  }
  if ( !group )
    sub_1B86614(this, group);
  klass = group->klass;
  v14 = *(unsigned __int16 *)(&group->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&group->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__QuestUseItemInfo__c **)p_offset - 1) != System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo )
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
    p_method = sub_1BD6B4C(group, System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo, 0LL);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__QuestUseItemInfo__o *, _QWORD))p_method)(
          group,
          *(_QWORD *)(p_method + 8)) )
    return (System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *)System_Linq_Enumerable__AsEnumerable_object_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)group,
                                                                           (const MethodInfo_2F7E314 *)Method_System_Linq_Enumerable_AsEnumerable_QuestUseItemInfo___);
  v17 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v17 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__118_4 = (System_Func_object__int__o *)v17->static_fields->__9__118_4;
  if ( !_9__118_4 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = PartyOrganizationUtility___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__118_4 = (System_Func_object__int__o *)sub_1B86604(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__118_4,
      v19,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__118_4__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__118_4 = (struct System_Func_QuestUseItemInfo__int__o *)_9__118_4;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__118_4, (int32_t)_9__118_4, v21, v22);
  }
  v23 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)group,
          (System_Func_TSource__TKey__o *)_9__118_4,
          (const MethodInfo_2F9B158 *)Method_System_Linq_Enumerable_OrderByDescending_QuestUseItemInfo__int___);
  v24 = PartyOrganizationUtility___c_TypeInfo;
  v25 = v23;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v24 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__118_5 = (System_Func_T__TResult__o *)v24->static_fields->__9__118_5;
  if ( !_9__118_5 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = PartyOrganizationUtility___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__118_5 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_QuestUseItemInfo__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__118_5,
      v27,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__118_5__,
      0LL);
    v28 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v28->__9__118_5 = (struct System_Func_QuestUseItemInfo__long__o *)_9__118_5;
    sub_1B8635C((CGThumbnailListItem_o *)&v28->__9__118_5, (int32_t)_9__118_5, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__long_(
                                                               v25,
                                                               (System_Func_TSource__TKey__o *)_9__118_5,
                                                               (const MethodInfo_2FA8E38 *)Method_System_Linq_Enumerable_ThenBy_QuestUseItemInfo__long___);
  return (System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *)System_Linq_Enumerable__Take_object_(
                                                                         v31,
                                                                         1,
                                                                         (const MethodInfo_2FA868C *)Method_System_Linq_Enumerable_Take_QuestUseItemInfo___);
}


int32_t __fastcall PartyOrganizationUtility___c___GetQuestUseItemIds_b__118_3(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1B86614(this, 0LL);
  return info->fields._Id_k__BackingField;
}


int32_t __fastcall PartyOrganizationUtility___c___GetQuestUseItemIds_b__118_4(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1B86614(this, 0LL);
  return info->fields._Value_k__BackingField;
}


int64_t __fastcall PartyOrganizationUtility___c___GetQuestUseItemIds_b__118_5(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1B86614(this, 0LL);
  return info->fields._EndedAt_k__BackingField;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall PartyOrganizationUtility___c___GetQuestUseItems_b__110_0(
        PartyOrganizationUtility___c_o *this,
        EventCampaignEntity_o *eventCampaignEntity,
        const MethodInfo *method)
{
  if ( !eventCampaignEntity )
    sub_1B86614(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)eventCampaignEntity->fields.targetIds;
}


bool __fastcall PartyOrganizationUtility___c___GetQuestUseItems_b__110_3(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1B86614(this, 0LL);
  return !info->fields._IsFriendshipUpEventItem_k__BackingField || QuestUseItemInfo__IsObtained(info, 0LL);
}


int32_t __fastcall PartyOrganizationUtility___c___GetQuestUseItems_b__110_4(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1B86614(this, 0LL);
  return info->fields._GroupId_k__BackingField;
}


System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *__fastcall PartyOrganizationUtility___c___GetQuestUseItems_b__110_5(
        PartyOrganizationUtility___c_o *this,
        System_Linq_IGrouping_int__QuestUseItemInfo__o *itemInfoGroup,
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
  System_Linq_IGrouping_int__QuestUseItemInfo__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  PartyOrganizationUtility___c_c *v19; // x0
  System_Func_T__TResult__o *_9__110_8; // x20
  Il2CppObject *v21; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v25; // x0
  PartyOrganizationUtility___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x19
  System_Func_T1__T2__TResult__o *_9__110_9; // x20
  Il2CppObject *v29; // x21
  struct PartyOrganizationUtility___c_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x20
  System_Collections_Generic_List_object__o *v34; // x19
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0

  if ( (byte_4A4A2AE & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Aggregate_QuestUseItemInfo___, itemInfoGroup);
    sub_1B863B8(&Method_System_Linq_Enumerable_AsEnumerable_QuestUseItemInfo___, v4);
    sub_1B863B8(&Method_System_Linq_Enumerable_OrderBy_QuestUseItemInfo__long___, v5);
    sub_1B863B8(&System_Func_QuestUseItemInfo__long__TypeInfo, v6);
    sub_1B863B8(&System_Func_QuestUseItemInfo__QuestUseItemInfo__QuestUseItemInfo__TypeInfo, v7);
    sub_1B863B8(&System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestUseItemInfo__Add__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestUseItemInfo___ctor__, v10);
    sub_1B863B8(&System_Collections_Generic_List_QuestUseItemInfo__TypeInfo, v11);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__110_8__, v12);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__110_9__, v13);
    this = (PartyOrganizationUtility___c_o *)sub_1B863B8(&PartyOrganizationUtility___c_TypeInfo, v14);
    byte_4A4A2AE = 1;
  }
  if ( !itemInfoGroup )
    goto LABEL_30;
  klass = itemInfoGroup->klass;
  v16 = *(unsigned __int16 *)(&itemInfoGroup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&itemInfoGroup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__QuestUseItemInfo__c **)p_offset - 1) != System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo )
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
    p_method = sub_1BD6B4C(itemInfoGroup, System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo, 0LL);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__QuestUseItemInfo__o *, _QWORD))p_method)(
          itemInfoGroup,
          *(_QWORD *)(p_method + 8)) )
    return (System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *)System_Linq_Enumerable__AsEnumerable_object_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)itemInfoGroup,
                                                                           (const MethodInfo_2F7E314 *)Method_System_Linq_Enumerable_AsEnumerable_QuestUseItemInfo___);
  v19 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v19 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__110_8 = (System_Func_T__TResult__o *)v19->static_fields->__9__110_8;
  if ( !_9__110_8 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = PartyOrganizationUtility___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__110_8 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_QuestUseItemInfo__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__110_8,
      v21,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__110_8__,
      0LL);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__110_8 = (struct System_Func_QuestUseItemInfo__long__o *)_9__110_8;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__110_8, (int32_t)_9__110_8, v23, v24);
  }
  v25 = System_Linq_Enumerable__OrderBy_object__long_(
          (System_Collections_Generic_IEnumerable_TSource__o *)itemInfoGroup,
          (System_Func_TSource__TKey__o *)_9__110_8,
          (const MethodInfo_2F9ABBC *)Method_System_Linq_Enumerable_OrderBy_QuestUseItemInfo__long___);
  v26 = PartyOrganizationUtility___c_TypeInfo;
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)v25;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v26 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__110_9 = (System_Func_T1__T2__TResult__o *)v26->static_fields->__9__110_9;
  if ( !_9__110_9 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = PartyOrganizationUtility___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v26->static_fields->__9;
    _9__110_9 = (System_Func_T1__T2__TResult__o *)sub_1B86604(System_Func_QuestUseItemInfo__QuestUseItemInfo__QuestUseItemInfo__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__110_9,
      v29,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__110_9__,
      0LL);
    v30 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v30->__9__110_9 = (struct System_Func_QuestUseItemInfo__QuestUseItemInfo__QuestUseItemInfo__o *)_9__110_9;
    sub_1B8635C((CGThumbnailListItem_o *)&v30->__9__110_9, (int32_t)_9__110_9, v31, v32);
  }
  v33 = System_Linq_Enumerable__Aggregate_object_(
          v27,
          (System_Func_TSource__TSource__TSource__o *)_9__110_9,
          (const MethodInfo_2F779D4 *)Method_System_Linq_Enumerable_Aggregate_QuestUseItemInfo___);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_QuestUseItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_QuestUseItemInfo___ctor__);
  if ( !v34
    || (items = v34->fields._items,
        v38 = Method_System_Collections_Generic_List_QuestUseItemInfo__Add__,
        ++v34->fields._version,
        !items) )
  {
LABEL_30:
    sub_1B86614(this, itemInfoGroup);
  }
  size = v34->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v34,
      v33,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &items->obj.klass + size;
    v34->fields._size = size + 1;
    v40[4] = (Il2CppClass *)v33;
    sub_1B8635C((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v33, v35, v36);
  }
  return (System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *)v34;
}


int32_t __fastcall PartyOrganizationUtility___c___GetQuestUseItems_b__110_7(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1B86614(this, 0LL);
  return info->fields._Priority_k__BackingField;
}


int64_t __fastcall PartyOrganizationUtility___c___GetQuestUseItems_b__110_8(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemEntity,
        const MethodInfo *method)
{
  if ( !itemEntity )
    sub_1B86614(this, 0LL);
  return itemEntity->fields._EndedAt_k__BackingField;
}


QuestUseItemInfo_o *__fastcall PartyOrganizationUtility___c___GetQuestUseItems_b__110_9(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *result,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  int32_t Num_k__BackingField; // w8
  QuestUseItemInfo_o *v5; // x0

  if ( !result )
LABEL_9:
    sub_1B86614(this, result);
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


bool __fastcall PartyOrganizationUtility___c___OpenQuestUseItemDialogTutorial_b__117_0(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1B86614(this, 0LL);
  return itemInfo->fields._IsValid_k__BackingField;
}


int32_t __fastcall PartyOrganizationUtility___c___OpenQuestUseItemDialogTutorial_b__117_1(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1B86614(this, 0LL);
  return info->fields._TutorialEventId_k__BackingField;
}


bool __fastcall PartyOrganizationUtility___c___OpenQuestUseItemExpiredDialog_b__116_0(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1B86614(this, 0LL);
  return itemInfo->fields._IsValid_k__BackingField;
}


bool __fastcall PartyOrganizationUtility___c___OpenQuestUseItemExpiredDialog_b__116_1(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1B86614(this, 0LL);
  return QuestUseItemInfo__GetUseFlag(itemInfo, 0LL) && !QuestUseItemInfo__IsEventPeriod(itemInfo, 0LL);
}


int32_t __fastcall PartyOrganizationUtility___c___OpenQuestUseItemExpiredDialog_b__116_2(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1B86614(this, 0LL);
  return itemInfo->fields._BasePriority_k__BackingField;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall PartyOrganizationUtility___c___SaveQuestUseItemUseState_b__120_1(
        PartyOrganizationUtility___c_o *this,
        System_Int32_array *i,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IEnumerable_int__o *)i;
}


void __fastcall PartyOrganizationUtility___c__DisplayClass109_0___ctor(
        PartyOrganizationUtility___c__DisplayClass109_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass109_0___GetAvailableQuestUseItemEventCampaignEntities_b__2(
        PartyOrganizationUtility___c__DisplayClass109_0_o *this,
        EventCampaignEntity_o *e,
        const MethodInfo *method)
{
  if ( !e || (this = (PartyOrganizationUtility___c__DisplayClass109_0_o *)this->fields.releaseMaster) == 0LL )
    sub_1B86614(this, e);
  return EventCampaignReleaseMaster__isRelease(
           (EventCampaignReleaseMaster_o *)this,
           e->fields.eventId,
           e->fields.target,
           0LL);
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass109_0___GetAvailableQuestUseItemEventCampaignEntities_b__3(
        PartyOrganizationUtility___c__DisplayClass109_0_o *this,
        EventCampaignEntity_o *eventCampaignEntity,
        const MethodInfo *method)
{
  if ( !eventCampaignEntity )
    sub_1B86614(this, 0LL);
  return !PartyOrganizationUtility___c__DisplayClass109_0___GetAvailableQuestUseItemEventCampaignEntities_g__IsExceptedByEventQuestMaster_0(
            this,
            eventCampaignEntity->fields.eventId,
            method);
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass109_0___GetAvailableQuestUseItemEventCampaignEntities_b__4(
        PartyOrganizationUtility___c__DisplayClass109_0_o *this,
        EventCampaignEntity_o *eventCampaignEntity,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c__DisplayClass109_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Int32_array *warGroupIds; // x21
  System_Func_int__bool__o *v11; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x20
  System_Func_int__bool__o *_9__6; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  v4 = this;
  if ( (byte_4A4A2B3 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_int____76088168, eventCampaignEntity);
    sub_1B863B8(&Method_System_Linq_Enumerable_All_int___, v5);
    sub_1B863B8(&System_Func_int__bool__TypeInfo, v6);
    sub_1B863B8(
      &Method_PartyOrganizationUtility___c__DisplayClass109_0__GetAvailableQuestUseItemEventCampaignEntities_b__6__,
      v7);
    this = (PartyOrganizationUtility___c__DisplayClass109_0_o *)sub_1B863B8(
                                                                  &Method_PartyOrganizationUtility___c__DisplayClass109_0__GetAvailableQuestUseItemEventCampaignEntities_g__IsMatchWarId_1__,
                                                                  v8);
    byte_4A4A2B3 = 1;
  }
  if ( !eventCampaignEntity )
    sub_1B86614(this, eventCampaignEntity);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventCampaignEntity->fields.warGroupIds, 0LL) )
    return 1;
  warGroupIds = eventCampaignEntity->fields.warGroupIds;
  v11 = (System_Func_int__bool__o *)sub_1B86604(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v11,
    (Il2CppObject *)v4,
    Method_PartyOrganizationUtility___c__DisplayClass109_0__GetAvailableQuestUseItemEventCampaignEntities_g__IsMatchWarId_1__,
    0LL);
  if ( !BasicHelper__Any_int__49642036(
          warGroupIds,
          (System_Func_T__bool__o *)v11,
          (const MethodInfo_2F57A34 *)Method_BasicHelper_Any_int____76088168) )
    return 0;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)eventCampaignEntity->fields.warGroupIds;
  _9__6 = v4->fields.__9__6;
  if ( !_9__6 )
  {
    _9__6 = (System_Func_int__bool__o *)sub_1B86604(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__6,
      (Il2CppObject *)v4,
      Method_PartyOrganizationUtility___c__DisplayClass109_0__GetAvailableQuestUseItemEventCampaignEntities_b__6__,
      0LL);
    v4->fields.__9__6 = _9__6;
    sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.__9__6, (int32_t)_9__6, v14, v15);
  }
  return System_Linq_Enumerable__All_int_(
           v12,
           (System_Func_TSource__bool__o *)_9__6,
           (const MethodInfo_2F79BBC *)Method_System_Linq_Enumerable_All_int___);
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass109_0___GetAvailableQuestUseItemEventCampaignEntities_b__5(
        PartyOrganizationUtility___c__DisplayClass109_0_o *this,
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
    sub_1B86614(this, warGroupEntity);
  if ( warGroupEntity->fields.questAfterClear == questEntity->fields.afterClear )
    return warGroupEntity->fields.questType == questEntity->fields.type;
  return 0;
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass109_0___GetAvailableQuestUseItemEventCampaignEntities_b__6(
        PartyOrganizationUtility___c__DisplayClass109_0_o *this,
        int32_t warGroupId,
        const MethodInfo *method)
{
  struct PartyOrganizationUtility_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (PartyOrganizationUtility___c__DisplayClass109_0_o *)this->fields.warGroupIgnoreMaster) == 0LL )
  {
    sub_1B86614(this, warGroupId);
  }
  return !WarGroupIgnoreMaster__IsIgnoreQuest(
            (WarGroupIgnoreMaster_o *)this,
            warGroupId,
            _4__this->fields._CachedQuestId_k__BackingField,
            _4__this->fields._CachedQuestPhase_k__BackingField,
            0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationUtility___c__DisplayClass109_0___GetAvailableQuestUseItemEventCampaignEntities_g__IsExceptedByEventQuestMaster_0(
        PartyOrganizationUtility___c__DisplayClass109_0_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventQuestMaster_o *eventQuestMaster; // x0
  struct PartyOrganizationUtility_o *_4__this; // x8
  struct PartyOrganizationUtility_o *v7; // x8
  EventQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  eventQuestMaster = this->fields.eventQuestMaster;
  if ( !eventQuestMaster )
    goto LABEL_15;
  eventQuestMaster = (EventQuestMaster_o *)EventQuestMaster__IsExistEvent(eventQuestMaster, eventId, 0LL);
  if ( ((unsigned __int8)eventQuestMaster & 1) == 0 )
    return 0;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  eventQuestMaster = this->fields.eventQuestMaster;
  if ( !eventQuestMaster )
    goto LABEL_15;
  eventQuestMaster = (EventQuestMaster_o *)EventQuestMaster__TryGetEntity(
                                             eventQuestMaster,
                                             &entity,
                                             eventId,
                                             _4__this->fields._CachedQuestId_k__BackingField,
                                             _4__this->fields._CachedQuestPhase_k__BackingField,
                                             0LL);
  if ( ((unsigned __int8)eventQuestMaster & 1) != 0 )
    goto LABEL_11;
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_15;
  eventQuestMaster = this->fields.eventQuestMaster;
  if ( !eventQuestMaster )
    goto LABEL_15;
  eventQuestMaster = (EventQuestMaster_o *)EventQuestMaster__TryGetEntity(
                                             eventQuestMaster,
                                             &entity,
                                             eventId,
                                             v7->fields._CachedQuestId_k__BackingField,
                                             0,
                                             0LL);
  if ( ((unsigned __int8)eventQuestMaster & 1) != 0 )
    goto LABEL_11;
  eventQuestMaster = this->fields.eventQuestMaster;
  if ( !eventQuestMaster )
    goto LABEL_15;
  eventQuestMaster = (EventQuestMaster_o *)EventQuestMaster__TryGetEntity(eventQuestMaster, &entity, eventId, 0, 0, 0LL);
  if ( ((unsigned __int8)eventQuestMaster & 1) != 0 )
  {
LABEL_11:
    if ( entity )
      return entity->fields.isExcepted != 0;
LABEL_15:
    sub_1B86614(eventQuestMaster, *(_QWORD *)&eventId);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationUtility___c__DisplayClass109_0___GetAvailableQuestUseItemEventCampaignEntities_g__IsMatchWarId_1(
        PartyOrganizationUtility___c__DisplayClass109_0_o *this,
        int32_t warGroupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WarGroupMaster_o *warGroupMaster; // x0
  System_Object_array *v8; // x20
  System_Func_object__bool__o *v9; // x21
  WarGroupEntity_array *entities; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A4A2B2 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_WarGroupEntity___, *(_QWORD *)&warGroupId);
    sub_1B863B8(&System_Func_WarGroupEntity__bool__TypeInfo, v5);
    sub_1B863B8(
      &Method_PartyOrganizationUtility___c__DisplayClass109_0__GetAvailableQuestUseItemEventCampaignEntities_b__5__,
      v6);
    byte_4A4A2B2 = 1;
  }
  entities = 0LL;
  warGroupMaster = this->fields.warGroupMaster;
  if ( !warGroupMaster )
    sub_1B86614(0LL, *(_QWORD *)&warGroupId);
  if ( WarGroupMaster__TryGetWarList(warGroupMaster, &entities, warGroupId, 0LL) )
  {
    v8 = (System_Object_array *)entities;
    v9 = (System_Func_object__bool__o *)sub_1B86604(System_Func_WarGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v9,
      (Il2CppObject *)this,
      Method_PartyOrganizationUtility___c__DisplayClass109_0__GetAvailableQuestUseItemEventCampaignEntities_b__5__,
      0LL);
    return BasicHelper__Any_object__49642848(
             v8,
             (System_Func_T__bool__o *)v9,
             (const MethodInfo_2F57D60 *)Method_BasicHelper_Any_WarGroupEntity___);
  }
  else
  {
    return 0;
  }
}


void __fastcall PartyOrganizationUtility___c__DisplayClass110_0___ctor(
        PartyOrganizationUtility___c__DisplayClass110_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


__f__AnonymousType3_EventCampaignEntity__ItemEntity__o *__fastcall PartyOrganizationUtility___c__DisplayClass110_0___GetQuestUseItems_b__1(
        PartyOrganizationUtility___c__DisplayClass110_0_o *this,
        EventCampaignEntity_o *eventCampaignEntity,
        int32_t itemId,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c__DisplayClass110_0_o *v6; // x21
  __int64 v7; // x1
  Il2CppObject *ItemData; // x20
  __f__AnonymousType3__eventCampaignEntity_j__TPar___itemEntity_j__TPar__o *v9; // x21

  v6 = this;
  if ( (byte_4A4A2B4 & 1) == 0 )
  {
    sub_1B863B8(&Method___f__AnonymousType3_EventCampaignEntity__ItemEntity___ctor__, eventCampaignEntity);
    this = (PartyOrganizationUtility___c__DisplayClass110_0_o *)sub_1B863B8(
                                                                  &_f__AnonymousType3_EventCampaignEntity__ItemEntity__TypeInfo,
                                                                  v7);
    byte_4A4A2B4 = 1;
  }
  if ( !eventCampaignEntity
    || (this = (PartyOrganizationUtility___c__DisplayClass110_0_o *)v6->fields.itemMaster) == 0LL )
  {
    sub_1B86614(this, eventCampaignEntity);
  }
  ItemData = (Il2CppObject *)ItemMaster__GetItemData(
                               (ItemMaster_o *)this,
                               itemId,
                               eventCampaignEntity->fields.eventId,
                               0LL);
  v9 = (__f__AnonymousType3__eventCampaignEntity_j__TPar___itemEntity_j__TPar__o *)sub_1B86604(_f__AnonymousType3_EventCampaignEntity__ItemEntity__TypeInfo);
  _f__AnonymousType3_object__object____ctor(
    v9,
    (Il2CppObject *)eventCampaignEntity,
    ItemData,
    (const MethodInfo_31443D0 *)Method___f__AnonymousType3_EventCampaignEntity__ItemEntity___ctor__);
  return (__f__AnonymousType3_EventCampaignEntity__ItemEntity__o *)v9;
}


void __fastcall PartyOrganizationUtility___c__DisplayClass110_0___GetQuestUseItems_b__10(
        PartyOrganizationUtility___c__DisplayClass110_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !this->fields.__4__this )
    sub_1B86614(this, id);
  PartyOrganizationUtility__UpdateInterruptionUseItem((PartyOrganizationUtility_o *)this, this->fields.list, 36, id, v3);
}


QuestUseItemInfo_o *__fastcall PartyOrganizationUtility___c__DisplayClass110_0___GetQuestUseItems_b__2(
        PartyOrganizationUtility___c__DisplayClass110_0_o *this,
        __f__AnonymousType3_EventCampaignEntity__ItemEntity__o *info,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c__DisplayClass110_0_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserItemMaster_o *userItemMaster; // x20
  struct ItemEntity_o *itemEntity_i__Field; // x8
  UserItemEntity_o *EntityDefinitely; // x0
  int32_t num; // w20
  EventCampaignEntity_o *eventCampaignEntity_i__Field; // x19
  ItemEntity_o *v14; // x21
  __f__AnonymousType3_EventCampaignEntity__ItemEntity__Fields *p_fields; // t2
  QuestUseItemInfo_o *v16; // x22

  v4 = this;
  if ( (byte_4A4A2B5 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, info);
    sub_1B863B8(&QuestUseItemInfo_TypeInfo, v5);
    sub_1B863B8(&Method___f__AnonymousType3_EventCampaignEntity__ItemEntity__get_eventCampaignEntity__, v6);
    this = (PartyOrganizationUtility___c__DisplayClass110_0_o *)sub_1B863B8(
                                                                  &Method___f__AnonymousType3_EventCampaignEntity__ItemEntity__get_itemEntity__,
                                                                  v7);
    byte_4A4A2B5 = 1;
  }
  if ( !info )
    goto LABEL_19;
  if ( !info->fields._itemEntity_i__Field || !info->fields._eventCampaignEntity_i__Field )
    return 0LL;
  userItemMaster = v4->fields.userItemMaster;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, info);
    byte_4A48C25 = 1;
  }
  this = (PartyOrganizationUtility___c__DisplayClass110_0_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (PartyOrganizationUtility___c__DisplayClass110_0_o *)NetworkManager_TypeInfo;
  }
  itemEntity_i__Field = info->fields._itemEntity_i__Field;
  if ( !itemEntity_i__Field || !userItemMaster )
LABEL_19:
    sub_1B86614(this, info);
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
  v16 = (QuestUseItemInfo_o *)sub_1B86604(QuestUseItemInfo_TypeInfo);
  QuestUseItemInfo___ctor(v16, v14, num, eventCampaignEntity_i__Field, 0LL);
  return v16;
}


void __fastcall PartyOrganizationUtility___c__DisplayClass110_0___GetQuestUseItems_b__6(
        PartyOrganizationUtility___c__DisplayClass110_0_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  Il2CppObject *IsGroupItem; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x19
  struct PartyOrganizationUtility_o *_4__this; // x8
  char v16; // w23
  System_Collections_Generic_IEnumerable_TSource__o *questUseItemStateList; // x20
  System_Func_object__bool__o *v18; // x0
  System_Func_TSource__bool__o *v19; // x22
  __int64 *v20; // x8

  if ( (byte_4A4A2B6 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_FirstOrDefault_int_____, info);
    sub_1B863B8(&System_Func_int____bool__TypeInfo, v5);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__DisplayClass110_1__GetQuestUseItems_b__11__, v6);
    sub_1B863B8(&Method_PartyOrganizationUtility___c__DisplayClass110_1__GetQuestUseItems_b__12__, v7);
    sub_1B863B8(&PartyOrganizationUtility___c__DisplayClass110_1_TypeInfo, v8);
    byte_4A4A2B6 = 1;
  }
  v9 = sub_1B86604(PartyOrganizationUtility___c__DisplayClass110_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 16) = info;
  v14 = v9 + 16;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)info, v12, v13);
  IsGroupItem = *(Il2CppObject **)(v9 + 16);
  if ( !IsGroupItem )
    goto LABEL_14;
  IsGroupItem = (Il2CppObject *)QuestUseItemInfo__get_IsGroupItem((QuestUseItemInfo_o *)IsGroupItem, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v16 = (char)IsGroupItem;
  questUseItemStateList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.questUseItemStateList;
  v18 = (System_Func_object__bool__o *)sub_1B86604(System_Func_int____bool__TypeInfo);
  v19 = (System_Func_TSource__bool__o *)v18;
  if ( (v16 & 1) != 0 )
    v20 = &Method_PartyOrganizationUtility___c__DisplayClass110_1__GetQuestUseItems_b__11__;
  else
    v20 = &Method_PartyOrganizationUtility___c__DisplayClass110_1__GetQuestUseItems_b__12__;
  System_Func_object__bool____ctor(v18, (Il2CppObject *)v9, *v20, 0LL);
  IsGroupItem = System_Linq_Enumerable__FirstOrDefault_object__49893388(
                  questUseItemStateList,
                  v19,
                  (const MethodInfo_2F9500C *)Method_System_Linq_Enumerable_FirstOrDefault_int_____);
  if ( IsGroupItem )
  {
    if ( LODWORD(IsGroupItem[1].monitor) <= 2 )
      sub_1B8661C(IsGroupItem, v11);
    if ( *(_QWORD *)v14 )
    {
      *(_BYTE *)(*(_QWORD *)v14 + 92LL) = LODWORD(IsGroupItem[2].monitor) == 1;
      return;
    }
LABEL_14:
    sub_1B86614(IsGroupItem, v11);
  }
}


void __fastcall PartyOrganizationUtility___c__DisplayClass110_1___ctor(
        PartyOrganizationUtility___c__DisplayClass110_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass110_1___GetQuestUseItems_b__11(
        PartyOrganizationUtility___c__DisplayClass110_1_o *this,
        System_Int32_array *list,
        const MethodInfo *method)
{
  struct QuestUseItemInfo_o *info; // x8

  if ( !list )
    goto LABEL_5;
  if ( list->max_length <= 1 )
    sub_1B8661C(this, list);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1B86614(this, list);
  return list->m_Items[2] == info->fields._GroupId_k__BackingField;
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass110_1___GetQuestUseItems_b__12(
        PartyOrganizationUtility___c__DisplayClass110_1_o *this,
        System_Int32_array *list,
        const MethodInfo *method)
{
  struct QuestUseItemInfo_o *info; // x8

  if ( !list )
    goto LABEL_5;
  if ( !list->max_length )
    sub_1B8661C(this, list);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1B86614(this, list);
  return list->m_Items[1] == info->fields._Id_k__BackingField;
}


void __fastcall PartyOrganizationUtility___c__DisplayClass111_0___ctor(
        PartyOrganizationUtility___c__DisplayClass111_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass111_0___UpdateInterruptionUseItem_b__0(
        PartyOrganizationUtility___c__DisplayClass111_0_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1B86614(this, 0LL);
  return QuestUseItemInfo__CheckSameItem(info, this->fields.campaignType, this->fields.itemEntity, 0LL);
}


void __fastcall PartyOrganizationUtility___c__DisplayClass116_0___ctor(
        PartyOrganizationUtility___c__DisplayClass116_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PartyOrganizationUtility___c__DisplayClass116_0___OpenQuestUseItemExpiredDialog_b__3(
        PartyOrganizationUtility___c__DisplayClass116_0_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *actionList; // x19
  System_Action_object__o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4A4A2B7 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_Action__TypeInfo, itemInfo);
    sub_1B863B8(&Method_System_Collections_Generic_List_Action_Action___Add__, v5);
    sub_1B863B8(&Method_QuestUseItemInfo_OpenExpiredDialog__, v6);
    byte_4A4A2B7 = 1;
  }
  actionList = (System_Collections_Generic_List_object__o *)this->fields.actionList;
  v8 = (System_Action_object__o *)sub_1B86604(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v8, (Il2CppObject *)itemInfo, Method_QuestUseItemInfo_OpenExpiredDialog__, 0LL);
  if ( !actionList
    || (items = actionList->fields._items,
        v14 = Method_System_Collections_Generic_List_Action_Action___Add__,
        ++actionList->fields._version,
        !items) )
  {
    sub_1B86614(v9, v10);
  }
  size = actionList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      actionList,
      (Il2CppObject *)v8,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    actionList->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v8;
    sub_1B8635C((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v8, v11, v12);
  }
}


void __fastcall PartyOrganizationUtility___c__DisplayClass118_0___ctor(
        PartyOrganizationUtility___c__DisplayClass118_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass118_0___GetQuestUseItemIds_b__0(
        PartyOrganizationUtility___c__DisplayClass118_0_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1B86614(this, 0LL);
  return info->fields._CampaignType_k__BackingField == this->fields.campaignType
      && info->fields._UseFlag_k__BackingField
      && info->fields._Num_k__BackingField > 0;
}


void __fastcall PartyOrganizationUtility___c__DisplayClass120_0___ctor(
        PartyOrganizationUtility___c__DisplayClass120_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass120_0___SaveQuestUseItemUseState_b__2(
        PartyOrganizationUtility___c__DisplayClass120_0_o *this,
        System_Int32_array *list,
        const MethodInfo *method)
{
  struct QuestUseItemInfo_o *info; // x8

  if ( !list )
    goto LABEL_5;
  if ( list->max_length <= 1 )
    sub_1B8661C(this, list);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1B86614(this, list);
  return list->m_Items[2] == info->fields._GroupId_k__BackingField;
}


bool __fastcall PartyOrganizationUtility___c__DisplayClass120_0___SaveQuestUseItemUseState_b__3(
        PartyOrganizationUtility___c__DisplayClass120_0_o *this,
        System_Int32_array *list,
        const MethodInfo *method)
{
  struct QuestUseItemInfo_o *info; // x8

  if ( !list )
    goto LABEL_5;
  if ( !list->max_length )
    sub_1B8661C(this, list);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1B86614(this, list);
  return list->m_Items[1] == info->fields._Id_k__BackingField;
}