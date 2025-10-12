void PartyOrganizationUtility___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C336D6 & 1) == 0 )
  {
    sub_1C32C20(&PartyOrganizationUtility_TypeInfo);
    sub_1C32C20(&StringLiteral_10935/*"QuestUseItem"*/);
    byte_4C336D6 = 1;
  }
  PartyOrganizationUtility_TypeInfo->static_fields->SAVE_KEY_QUEST_USE_ITEM = (struct System_String_o *)StringLiteral_10935/*"QuestUseItem"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)PartyOrganizationUtility_TypeInfo->static_fields, StringLiteral_10935/*"QuestUseItem"*/, v1, v2);
}


void PartyOrganizationUtility___ctor(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct QuestUseItemInfo_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C336D5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&QuestUseItemInfo___TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
    byte_4C336D5 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  this->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._npcFollowerInfos, (int32_t)v6, v7, v8);
  v9 = (struct QuestUseItemInfo_array *)sub_1C32CC8(QuestUseItemInfo___TypeInfo, 0);
  this->fields.cachedQuestUseItemInfoList = v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cachedQuestUseItemInfoList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.questUseItemStateList = (struct System_Collections_Generic_List_int____o *)v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questUseItemStateList, (int32_t)v12, v13, v14);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_39E2EEC *)Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
}


void PartyOrganizationUtility__AddRestrictionDialogHistory(
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
  Il2CppObject *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppClass *klass; // x8
  _QWORD *v14; // x9
  __int64 monitor_low; // x10
  __int64 v16; // x8
  int32_t v17; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  v18 = phaseId;
  v19 = questId;
  v17 = restrictionId;
  if ( (byte_4C336BC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4C336BC = 1;
  }
  v6 = System_Int32__ToString((int32_t)&v19, 0);
  v7 = System_Int32__ToString((int32_t)&v18, 0);
  v8 = System_Int32__ToString((int32_t)&v17, 0);
  restrictionDialogHistoryList = (Il2CppObject *)System_String__Concat_63556792(v6, v7, v8, 0);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_11;
  v10 = restrictionDialogHistoryList;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)this->fields.restrictionDialogHistoryList,
         restrictionDialogHistoryList,
         (const MethodInfo_3798B4C *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    return;
  }
  restrictionDialogHistoryList = (Il2CppObject *)this->fields.restrictionDialogHistoryList;
  if ( !restrictionDialogHistoryList
    || (klass = restrictionDialogHistoryList[1].klass,
        v14 = Method_System_Collections_Generic_List_string__Add__,
        ++HIDWORD(restrictionDialogHistoryList[1].monitor),
        !klass) )
  {
LABEL_11:
    sub_1C32E7C(restrictionDialogHistoryList);
  }
  monitor_low = SLODWORD(restrictionDialogHistoryList[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)restrictionDialogHistoryList,
      v10,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = (__int64)klass + 8 * monitor_low;
    LODWORD(restrictionDialogHistoryList[1].monitor) = monitor_low + 1;
    *(_QWORD *)(v16 + 32) = v10;
    sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v10, v11, v12);
  }
}


void PartyOrganizationUtility__CacheQuestUseItems(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  struct QuestUseItemInfo_array *QuestUseItems; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  QuestUseItems = PartyOrganizationUtility__GetQuestUseItems(this, method);
  this->fields.cachedQuestUseItemInfoList = QuestUseItems;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cachedQuestUseItemInfoList, (int32_t)QuestUseItems, v4, v5);
}


void PartyOrganizationUtility__ClearFollowerInfo(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x2

  this->fields._normalFollowerInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._normalFollowerInfo, 0, v2, v3);
  *(_QWORD *)&this->fields._SelectedNormalFollowerClassId_k__BackingField = 0;
  this->fields._SelectedNormalFollowerDeckId_k__BackingField = 0;
  PartyOrganizationUtility__ClearNpcFollowerInfo(this, -1, v5);
}


void PartyOrganizationUtility__ClearNormalFollowerInfo(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct FollowerInfo_o **p_normalFollowerInfo; // x19

  this->fields._normalFollowerInfo = 0;
  p_normalFollowerInfo = &this->fields._normalFollowerInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._normalFollowerInfo, 0, v2, v3);
  p_normalFollowerInfo[1] = 0;
  *((_DWORD *)p_normalFollowerInfo + 4) = 0;
}


void PartyOrganizationUtility__ClearNpcFollowerInfo(
        PartyOrganizationUtility_o *this,
        int32_t key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcFollowerInfos; // x0

  if ( (byte_4C336C2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
    byte_4C336C2 = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_1C32E7C(0);
  if ( key < 0 )
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
      (const MethodInfo_33EFEA4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
  else
    System_Collections_Generic_Dictionary_int__object___Remove(
      (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
      key,
      (const MethodInfo_33F11A4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
}


void PartyOrganizationUtility__ClearQuestUseItemCache(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  struct QuestUseItemInfo_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C336C3 & 1) == 0 )
  {
    sub_1C32C20(&QuestUseItemInfo___TypeInfo);
    byte_4C336C3 = 1;
  }
  v3 = (struct QuestUseItemInfo_array *)sub_1C32CC8(QuestUseItemInfo___TypeInfo, 0);
  this->fields.cachedQuestUseItemInfoList = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cachedQuestUseItemInfoList, (int32_t)v3, v4, v5);
}


void PartyOrganizationUtility__ClearTempWaveInfoList(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  int32_t size; // w2
  const MethodInfo *v3; // x3
  struct System_Collections_Generic_List_BattleWaveInfoData__o *v5; // x8
  CGThumbnailListItem_o *p_tempInterruptionWaveInfoList; // x19
  struct System_Collections_Generic_List_BattleWaveInfoData__o *tempInterruptionWaveInfoList; // t1
  int v8; // w9

  if ( (byte_4C336D4 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleWaveInfoData__Clear__);
    byte_4C336D4 = 1;
  }
  tempInterruptionWaveInfoList = this->fields.tempInterruptionWaveInfoList;
  p_tempInterruptionWaveInfoList = (CGThumbnailListItem_o *)&this->fields.tempInterruptionWaveInfoList;
  v5 = tempInterruptionWaveInfoList;
  if ( tempInterruptionWaveInfoList )
  {
    size = v5->fields._size;
    v8 = v5->fields._version + 1;
    v5->fields._size = 0;
    v5->fields._version = v8;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v5->fields._items, 0, size, 0);
  }
  p_tempInterruptionWaveInfoList->klass = 0;
  sub_1C32BC4(p_tempInterruptionWaveInfoList, 0, size, v3);
}


void PartyOrganizationUtility__ClearTemporaryPartyInfo(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *v5; // x0
  CGThumbnailListItem_o *p_temporaryPartyInfo; // x19
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *temporaryPartyInfo; // t1
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  CGThumbnailListItem_c *klass; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  CGThumbnailListItem_o *p_parent; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4C336BA & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C336BA = 1;
  }
  temporaryPartyInfo = this->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (CGThumbnailListItem_o *)&this->fields.temporaryPartyInfo;
  v5 = temporaryPartyInfo;
  if ( temporaryPartyInfo )
  {
    v5->fields.userServantId = 0;
    v5->fields.userEquipId = 0;
    v5->fields.deckNumber = -1;
    v8 = StringLiteral_1/*""*/;
    v5->fields.bgmName = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.bgmName, v8, v2, v3);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    klass->_1.this_arg.data = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&klass->_1.this_arg, 0, v9, v10);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    *(_QWORD *)&klass->_1.this_arg.bits = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&klass->_1.this_arg.bits, 0, v12, v13);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass
      || (klass->_1.element_class = 0,
          sub_1C32BC4((CGThumbnailListItem_o *)&klass->_1.element_class, 0, v14, v15),
          (klass = p_temporaryPartyInfo->klass) == 0)
      || (klass->_1.castClass = 0,
          sub_1C32BC4((CGThumbnailListItem_o *)&klass->_1.castClass, 0, v16, v17),
          (klass = p_temporaryPartyInfo->klass) == 0) )
    {
LABEL_11:
      sub_1C32E7C(klass);
    }
    klass->_1.parent = 0;
    p_parent = (CGThumbnailListItem_o *)&klass->_1.parent;
    LODWORD(p_parent[-1].fields._ThumbnailSpritePath_k__BackingField) = -1;
    sub_1C32BC4(p_parent, 0, v18, v19);
    p_temporaryPartyInfo->klass = 0;
    sub_1C32BC4(p_temporaryPartyInfo, 0, v21, v22);
  }
}


void PartyOrganizationUtility__DecisionFontSize(
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


bool PartyOrganizationUtility__ExistsTemporaryPartyInfo(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  return this->fields.temporaryPartyInfo != 0;
}


EventMargeItemUpValInfo_array *PartyOrganizationUtility__GetAddUpValInfos(
        PartyOrganizationUtility_o *this,
        System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *infoList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x0
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  __int64 v10; // x20
  __int64 v11; // x8
  __int64 v12; // x9
  int *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x21
  int v23; // w8
  _BOOL8 v24; // x0
  Il2CppObject *current; // x29
  __int64 v26; // x0
  int v27; // w8
  int v28; // w8
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C336D2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_EventMargeItemUpValInfo__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4C336D2 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !infoList )
    goto LABEL_65;
  klass = infoList->klass;
  v7 = *(unsigned __int16 *)&infoList->klass->_2.rank;
  if ( *(_WORD *)&infoList->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    v9 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v9 = sub_1C83438(infoList, System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__TypeInfo, 0);
  }
  v10 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *, _QWORD))v9)(
          infoList,
          *(_QWORD *)(v9 + 8));
  if ( !v10 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v11 = *(_QWORD *)v10;
    v12 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
    {
      v13 = (int *)(*(_QWORD *)(v11 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_15;
      }
      v14 = v11 + 16LL * *v13 + 312;
    }
    else
    {
LABEL_15:
      v14 = sub_1C83438(v10, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v14)(v10, *(_QWORD *)(v14 + 8)) & 1) == 0 )
      break;
    v15 = *(_QWORD *)v10;
    v16 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
    {
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventMargeItemUpValInfo__c **)v17 - 1) != System_Collections_Generic_IEnumerator_EventMargeItemUpValInfo__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_22;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_22:
      v18 = sub_1C83438(v10, System_Collections_Generic_IEnumerator_EventMargeItemUpValInfo__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v10, *(_QWORD *)(v18 + 8));
    v22 = v19;
    if ( !v19 )
      sub_1C32E7C(0);
    v23 = *(_DWORD *)(v19 + 60);
    if ( v23 == 1 || v23 == 16 || v23 == 111 )
    {
      if ( !v4 )
        sub_1C32E7C(v19);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v38,
        v4,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v39 = v38;
      while ( 1 )
      {
        v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v39,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v24 )
          break;
        current = v39.fields._current;
        if ( !v39.fields._current )
          sub_1C32E7C(v24);
        if ( LODWORD(v39.fields._current[1].klass) == *(_DWORD *)(v22 + 16)
          && LODWORD(v39.fields._current[4].klass) == *(_DWORD *)(v22 + 64)
          && LODWORD(v39.fields._current[3].monitor) == *(_DWORD *)(v22 + 56) )
        {
          goto LABEL_37;
        }
      }
      current = 0;
LABEL_37:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v39,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( current )
      {
        v27 = *(_DWORD *)(v22 + 92);
        if ( v27 >= 1 )
          HIDWORD(current[5].monitor) += v27;
        v28 = *(_DWORD *)(v22 + 96);
        if ( v28 >= 1 )
          LODWORD(current[6].klass) += v28;
      }
      else
      {
        items = v4->fields._items;
        v30 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
        ++v4->fields._version;
        if ( !items )
          sub_1C32E7C(v26);
        size = v4->fields._size;
        if ( (unsigned int)size < LODWORD(items->max_length) )
          goto LABEL_44;
LABEL_49:
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          (Il2CppObject *)v22,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
    }
    else
    {
      if ( !v4 )
        sub_1C32E7C(v19);
      items = v4->fields._items;
      v30 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v4->fields._version;
      if ( !items )
        sub_1C32E7C(v19);
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
        goto LABEL_49;
LABEL_44:
      v32 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v32[4] = (Il2CppClass *)v22;
      sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 4), v22, v20, v21);
    }
  }
  v33 = *(_QWORD *)v10;
  v34 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
  {
    v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_56;
    }
    v36 = v33 + 16LL * *v35 + 312;
  }
  else
  {
LABEL_56:
    v36 = sub_1C83438(v10, System_IDisposable_TypeInfo, 0);
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v10, *(_QWORD *)(v36 + 8));
  if ( !v4 )
LABEL_65:
    sub_1C32E7C(v5);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v4,
                                            (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


EventMargeItemUpValInfo_array *PartyOrganizationUtility__GetAdjustUpValInfoArray(
        PartyOrganizationUtility_o *this,
        bool *isDuplicate,
        System_Collections_Generic_List_EventMargeItemUpValInfo__o *infoList,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v6; // x21
  System_Collections_Generic_Dictionary_int__int__o *v7; // x22
  __int64 v8; // x0
  _BOOL8 v9; // x0
  Il2CppObject *current; // x27
  int32_t klass_high; // w23
  int monitor_high; // w8
  int32_t v13; // w0
  int32_t Item; // w8
  int32_t v15; // w2
  int32_t klass; // w2
  _BOOL8 v17; // x0
  Il2CppObject *v18; // x28
  int32_t v19; // w23
  int v20; // w8
  int32_t v21; // w19
  int32_t v22; // w19
  int32_t v23; // w19
  PartyOrganizationUtility___c_c *v24; // x0
  System_Func_object__bool__o *_9__130_0; // x20
  Il2CppObject *v26; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C336D0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_1C32C20(&System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__GetAdjustUpValInfoArray_b__130_0__);
    sub_1C32C20(&PartyOrganizationUtility___c_TypeInfo);
    byte_4C336D0 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  *isDuplicate = 0;
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_33E68A0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_33E68A0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !infoList )
    sub_1C32E7C(v8);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)infoList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    (System_Collections_Generic_List_object__o *)infoList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v34,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v9 )
      break;
    current = v34.fields._current;
    if ( !v34.fields._current )
      sub_1C32E7C(v9);
    klass_high = HIDWORD(v34.fields._current[6].klass);
    if ( klass_high >= 1 )
    {
      monitor_high = HIDWORD(v34.fields._current[3].monitor);
      switch ( monitor_high )
      {
        case 1:
          goto LABEL_11;
        case 111:
          if ( !v7 )
            sub_1C32E7C(v9);
          if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
                 v7,
                 klass_high,
                 (const MethodInfo_33E7450 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
          {
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     v7,
                     klass_high,
                     (const MethodInfo_33E71C8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          }
          else
          {
            System_Collections_Generic_Dictionary_int__int___Add(
              v7,
              klass_high,
              0,
              (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            Item = 0;
          }
          klass = (int32_t)current[6].klass;
          if ( klass > Item || (klass = HIDWORD(current[5].monitor), klass > Item) )
            System_Collections_Generic_Dictionary_int__int___set_Item(
              v7,
              klass_high,
              klass,
              (const MethodInfo_33E7250 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          break;
        case 16:
LABEL_11:
          if ( !v6 )
            sub_1C32E7C(v9);
          if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
                 v6,
                 klass_high,
                 (const MethodInfo_33E7450 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
          {
            v13 = System_Collections_Generic_Dictionary_int__int___get_Item(
                    v6,
                    klass_high,
                    (const MethodInfo_33E71C8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          }
          else
          {
            System_Collections_Generic_Dictionary_int__int___Add(
              v6,
              klass_high,
              0,
              (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            v13 = 0;
          }
          v15 = (int32_t)current[6].klass;
          if ( v15 > v13 )
            System_Collections_Generic_Dictionary_int__int___set_Item(
              v6,
              klass_high,
              v15,
              (const MethodInfo_33E7250 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    (System_Collections_Generic_List_object__o *)infoList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v17 )
      break;
    v18 = v34.fields._current;
    if ( !v34.fields._current )
      sub_1C32E7C(v17);
    v19 = HIDWORD(v34.fields._current[6].klass);
    if ( v19 <= 0 )
    {
LABEL_41:
      LOBYTE(v18[6].monitor) = 0;
    }
    else
    {
      v20 = HIDWORD(v34.fields._current[3].monitor);
      switch ( v20 )
      {
        case 1:
          goto LABEL_32;
        case 111:
          if ( !v7 )
            sub_1C32E7C(v17);
          if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                  v7,
                  v19,
                  (const MethodInfo_33E7450 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
            goto LABEL_41;
          v22 = (int32_t)v18[6].klass;
          if ( v22 >= System_Collections_Generic_Dictionary_int__int___get_Item(
                        v7,
                        v19,
                        (const MethodInfo_33E71C8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
          {
            LOBYTE(v18[6].monitor) = 0;
            System_Collections_Generic_Dictionary_int__int___set_Item(
              v7,
              v19,
              LODWORD(v18[6].klass) + 1,
              (const MethodInfo_33E7250 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          }
          else
          {
            v23 = HIDWORD(v18[5].monitor);
            if ( v23 <= System_Collections_Generic_Dictionary_int__int___get_Item(
                          v7,
                          v19,
                          (const MethodInfo_33E71C8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
            {
LABEL_35:
              LOBYTE(v18[6].monitor) = 1;
              *isDuplicate = 1;
            }
            else
            {
              LOBYTE(v18[6].monitor) = 0;
              System_Collections_Generic_Dictionary_int__int___set_Item(
                v7,
                v19,
                HIDWORD(v18[5].monitor) + 1,
                (const MethodInfo_33E7250 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
            }
          }
          break;
        case 16:
LABEL_32:
          if ( !v6 )
            sub_1C32E7C(v17);
          if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                  v6,
                  v19,
                  (const MethodInfo_33E7450 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
            goto LABEL_41;
          v21 = (int32_t)v18[6].klass;
          if ( v21 < System_Collections_Generic_Dictionary_int__int___get_Item(
                       v6,
                       v19,
                       (const MethodInfo_33E71C8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
            goto LABEL_35;
          LOBYTE(v18[6].monitor) = 0;
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v6,
            v19,
            LODWORD(v18[6].klass) + 1,
            (const MethodInfo_33E7250 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  v24 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v24 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__130_0 = (System_Func_object__bool__o *)v24->static_fields->__9__130_0;
  if ( !_9__130_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = PartyOrganizationUtility___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v24->static_fields->__9;
    _9__130_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__130_0,
      v26,
      Method_PartyOrganizationUtility___c__GetAdjustUpValInfoArray_b__130_0__,
      0);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__130_0 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__130_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__130_0, (int32_t)_9__130_0, v28, v29);
  }
  v30 = System_Linq_Enumerable__Where_object_(
          source,
          (System_Func_TSource__bool__o *)_9__130_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
  return (EventMargeItemUpValInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                            v30,
                                            (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
}


System_Collections_Generic_Dictionary_int__FollowerInfo__o *PartyOrganizationUtility__GetAllNpcFollowerInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._npcFollowerInfos;
}


EventCampaignEntity_array *PartyOrganizationUtility__GetAvailableQuestUseItemEventCampaignEntities(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  QuestEntity_o *Master_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  QuestEntity_o **v7; // x21
  Il2CppObject *v8; // x22
  bool v9; // cc
  EventCampaignEntity_array *result; // x0
  Il2CppObject *v11; // x20
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableFriendshipUpItemEventCampaigns; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableRewardAddItemEventCampaigns; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x20
  System_Func_object__bool__o *v27; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  System_Func_object__bool__o *v29; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  System_Func_object__bool__o *v31; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C336C4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarGroupIgnoreMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarGroupMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Concat_EventCampaignEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_EventCampaignEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    sub_1C32C20(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__DisplayClass118_0__GetAvailableQuestUseItemEventCampaignEntities_b__2__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__DisplayClass118_0__GetAvailableQuestUseItemEventCampaignEntities_b__3__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__DisplayClass118_0__GetAvailableQuestUseItemEventCampaignEntities_b__4__);
    sub_1C32C20(&PartyOrganizationUtility___c__DisplayClass118_0_TypeInfo);
    byte_4C336C4 = 1;
  }
  entity = 0;
  v3 = sub_1C32E6C(PartyOrganizationUtility___c__DisplayClass118_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_29;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v5, v6);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_29;
  v7 = (QuestEntity_o **)(v3 + 40);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         (Il2CppObject **)(v3 + 40),
         this->fields._CachedQuestId_k__BackingField,
         (const MethodInfo_3396884 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v8 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
    }
    Master_object = (QuestEntity_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (QuestEntity_o *)NetworkManager_TypeInfo;
    }
    if ( v8 )
    {
      if ( UserQuestMaster__TryGetEntity(
             (UserQuestMaster_o *)v8,
             &entity,
             (int64_t)Master_object[1].klass->_1.element_class,
             this->fields._CachedQuestId_k__BackingField,
             0) )
      {
        Master_object = *v7;
        if ( !*v7 )
          goto LABEL_29;
        if ( QuestEntity__HasFlag(Master_object, 0x20000, 0) )
        {
          Master_object = (QuestEntity_o *)entity;
          if ( !entity )
            goto LABEL_29;
          v9 = UserQuestEntity__getClearNum(entity, 0) <= 0;
          result = 0;
          if ( !v9 )
            return result;
        }
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v11 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v12 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarGroupMaster___);
      *(_QWORD *)(v3 + 32) = v12;
      sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)v12, v13, v14);
      v15 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarGroupIgnoreMaster___);
      *(_QWORD *)(v3 + 56) = v15;
      sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 56), (int32_t)v15, v16, v17);
      v18 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventQuestMaster___);
      *(_QWORD *)(v3 + 16) = v18;
      sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)v18, v19, v20);
      v21 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
      *(_QWORD *)(v3 + 48) = v21;
      sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 48), (int32_t)v21, v22, v23);
      if ( v11 )
      {
        AvailableFriendshipUpItemEventCampaigns = EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                                    (EventCampaignMaster_o *)v11,
                                                    0);
        AvailableRewardAddItemEventCampaigns = EventCampaignMaster__GetAvailableRewardAddItemEventCampaigns(
                                                 (EventCampaignMaster_o *)v11,
                                                 0);
        v26 = System_Linq_Enumerable__Concat_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)AvailableFriendshipUpItemEventCampaigns,
                (System_Collections_Generic_IEnumerable_TSource__o *)AvailableRewardAddItemEventCampaigns,
                (const MethodInfo_30F9DF8 *)Method_System_Linq_Enumerable_Concat_EventCampaignEntity___);
        v27 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventCampaignEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v27,
          (Il2CppObject *)v3,
          Method_PartyOrganizationUtility___c__DisplayClass118_0__GetAvailableQuestUseItemEventCampaignEntities_b__2__,
          0);
        v28 = System_Linq_Enumerable__Where_object_(
                v26,
                (System_Func_TSource__bool__o *)v27,
                (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
        v29 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventCampaignEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v29,
          (Il2CppObject *)v3,
          Method_PartyOrganizationUtility___c__DisplayClass118_0__GetAvailableQuestUseItemEventCampaignEntities_b__3__,
          0);
        v30 = System_Linq_Enumerable__Where_object_(
                v28,
                (System_Func_TSource__bool__o *)v29,
                (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
        v31 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventCampaignEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v31,
          (Il2CppObject *)v3,
          Method_PartyOrganizationUtility___c__DisplayClass118_0__GetAvailableQuestUseItemEventCampaignEntities_b__4__,
          0);
        v32 = System_Linq_Enumerable__Where_object_(
                v30,
                (System_Func_TSource__bool__o *)v31,
                (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
        return (EventCampaignEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                              v32,
                                              (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_EventCampaignEntity___);
      }
    }
LABEL_29:
    sub_1C32E7C(Master_object);
  }
  return 0;
}


QuestUseItemInfo_array *PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *cachedQuestUseItemInfoList; // x19
  System_Func_object__bool__o *_9__122_0; // x20
  Il2CppObject *v6; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C336C8 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
    sub_1C32C20(&System_Func_QuestUseItemInfo__bool__TypeInfo);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__GetCachedAvailableQuestUseItems_b__122_0__);
    sub_1C32C20(&PartyOrganizationUtility___c_TypeInfo);
    byte_4C336C8 = 1;
  }
  v3 = PartyOrganizationUtility___c_TypeInfo;
  cachedQuestUseItemInfoList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v3 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__122_0 = (System_Func_object__bool__o *)v3->static_fields->__9__122_0;
  if ( !_9__122_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = PartyOrganizationUtility___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__122_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__122_0,
      v6,
      Method_PartyOrganizationUtility___c__GetCachedAvailableQuestUseItems_b__122_0__,
      0);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__122_0 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__122_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__122_0, (int32_t)_9__122_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          cachedQuestUseItemInfoList,
          (System_Func_TSource__bool__o *)_9__122_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  return (QuestUseItemInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                     v10,
                                     (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
}


QuestUseItemInfo_array *PartyOrganizationUtility__GetCachedQuestUseItems(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C336C9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
    byte_4C336C9 = 1;
  }
  return (QuestUseItemInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList,
                                     (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
}


System_Int32_array *PartyOrganizationUtility__GetNeedAddAnnotationSkillIds(
        PartyOrganizationUtility_o *this,
        System_Collections_Generic_IEnumerable_int__o *skillIdList,
        System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *campaignInfoList,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  System_Collections_Generic_Dictionary_int__object__o *v7; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  System_Collections_Generic_IEnumerable_EventDropUpValInfo__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x24
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  EventDropUpValInfo_o *v22; // x0
  int32_t groupId; // w23
  __int64 FuncType; // x0
  System_Collections_Generic_List_int__o *Item; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v29; // x25
  __int64 v30; // x0
  struct System_Int32_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  System_Collections_Generic_IEnumerable_int__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x22
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  SkillLvMaster_o *v47; // x24
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  int32_t v53; // w23
  EventDropUpValInfo_array *AddStateAndFriendshipUpInfoArray; // x0
  EventDropUpValInfo_array *v55; // x24
  int max_length; // w8
  signed int v57; // w28
  EventDropUpValInfo_o *v58; // x8
  int32_t v59; // w25
  Il2CppArrayBounds *bounds; // x8
  _QWORD *v61; // x9
  __int64 max_length_low; // x10
  System_Collections_Generic_List_int__o *v63; // x26
  __int64 v64; // x0
  struct System_Int32_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  System_Collections_Generic_List_int__o *v68; // x26
  __int64 v69; // x0
  struct System_Int32_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  System_Collections_Generic_List_int__o *v77; // x21
  PartyOrganizationUtility___c_c *v78; // x8
  System_Func_T__TResult__o *_9__131_0; // x22
  Il2CppObject *v80; // x23
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  System_Collections_Generic_IEnumerable_TSource__c *v84; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x20
  __int64 v86; // x9
  int32_t *v87; // x10
  __int64 v88; // x0
  __int64 v89; // x20
  __int64 v90; // x8
  __int64 v91; // x9
  int *v92; // x10
  __int64 v93; // x0
  __int64 v94; // x8
  __int64 v95; // x9
  int *v96; // x10
  __int64 v97; // x0
  __int64 v98; // x0
  System_Collections_Generic_IEnumerable_T__o *v99; // x1
  __int64 v100; // x8
  __int64 v101; // x9
  int *v102; // x10
  __int64 v103; // x0
  PartyOrganizationUtility___c_c *v104; // x8
  System_Func_T__TResult__o *_9__131_1; // x20
  Il2CppObject *v106; // x22
  struct PartyOrganizationUtility___c_StaticFields *v107; // x0
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  System_Collections_Generic_IEnumerable_TSource__c *v110; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v111; // x19
  __int64 v112; // x9
  int32_t *v113; // x10
  __int64 v114; // x0
  __int64 v115; // x19
  __int64 v116; // x8
  __int64 v117; // x9
  int *v118; // x10
  __int64 v119; // x0
  __int64 v120; // x8
  __int64 v121; // x9
  int *v122; // x10
  __int64 v123; // x0
  __int64 v124; // x0
  System_Collections_Generic_IEnumerable_T__o *v125; // x1
  __int64 v126; // x8
  __int64 v127; // x9
  int *v128; // x10
  __int64 v129; // x0
  Il2CppObject *Master_object; // [xsp+10h] [xbp-70h]
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C336D1 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_KeyValuePair_int__List_int_____);
    sub_1C32C20(&System_Func_KeyValuePair_int__List_int____bool__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_EventDropUpValInfo__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_EventDropUpValInfo__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__GetNeedAddAnnotationSkillIds_b__131_0__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__GetNeedAddAnnotationSkillIds_b__131_1__);
    sub_1C32C20(&PartyOrganizationUtility___c_TypeInfo);
    byte_4C336D1 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillLvMaster___);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  if ( campaignInfoList )
  {
    klass = campaignInfoList->klass;
    v10 = *(unsigned __int16 *)&campaignInfoList->klass->_2.rank;
    if ( *(_WORD *)&campaignInfoList->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_EventDropUpValInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventDropUpValInfo__TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_1C83438(campaignInfoList, System_Collections_Generic_IEnumerable_EventDropUpValInfo__TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *, _QWORD))v12)(
            campaignInfoList,
            *(_QWORD *)(v12 + 8));
    if ( !v13 )
      sub_1C32E7C(0);
    while ( 1 )
    {
      v14 = *(_QWORD *)v13;
      v15 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
      {
        v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v15;
          v16 += 4;
          if ( !v15 )
            goto LABEL_17;
        }
        v17 = v14 + 16LL * *v16 + 312;
      }
      else
      {
LABEL_17:
        v17 = sub_1C83438(v13, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) & 1) == 0 )
        break;
      v18 = *(_QWORD *)v13;
      v19 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
      {
        v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_EventDropUpValInfo__c **)v20 - 1) != System_Collections_Generic_IEnumerator_EventDropUpValInfo__TypeInfo )
        {
          --v19;
          v20 += 4;
          if ( !v19 )
            goto LABEL_24;
        }
        v21 = v18 + 16LL * *v20 + 312;
      }
      else
      {
LABEL_24:
        v21 = sub_1C83438(v13, System_Collections_Generic_IEnumerator_EventDropUpValInfo__TypeInfo, 0);
      }
      v22 = (EventDropUpValInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v13, *(_QWORD *)(v21 + 8));
      if ( !v22 )
        sub_1C32E7C(0);
      groupId = v22->fields.groupId;
      if ( groupId >= 1 )
      {
        if ( !v22->fields.funcEntity )
          sub_1C32E7C(v22);
        FuncType = EventDropUpValInfo__GetFuncType(v22, 0);
        if ( (_DWORD)FuncType == 111 )
        {
          if ( !v7 )
            sub_1C32E7C(FuncType);
          if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
                 v7,
                 groupId,
                 (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
          {
            Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                               v7,
                                                               groupId,
                                                               (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
            if ( !Item )
              sub_1C32E7C(0);
            items = Item->fields._items;
            v27 = Method_System_Collections_Generic_List_int__Add__;
            ++Item->fields._version;
            if ( !items )
              sub_1C32E7C(Item);
            size = Item->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                Item,
                0,
                *(const MethodInfo_377B798 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              Item->fields._size = size + 1;
              items->m_Items[size] = 0;
            }
          }
          else
          {
            v29 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v29,
              (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v29 )
              sub_1C32E7C(v30);
            v31 = v29->fields._items;
            v32 = Method_System_Collections_Generic_List_int__Add__;
            ++v29->fields._version;
            if ( !v31 )
              sub_1C32E7C(v30);
            v33 = v29->fields._size;
            if ( (unsigned int)v33 >= LODWORD(v31->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v29,
                0,
                *(const MethodInfo_377B798 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v29->fields._size = v33 + 1;
              v31->m_Items[v33] = 0;
            }
            System_Collections_Generic_Dictionary_int__object___Add(
              v7,
              groupId,
              (Il2CppObject *)v29,
              (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
          }
        }
      }
    }
    v34 = *(_QWORD *)v13;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_47;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_47:
      v37 = sub_1C83438(v13, System_IDisposable_TypeInfo, 0);
    }
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v37)(
                                                                v13,
                                                                *(_QWORD *)(v37 + 8));
  }
  if ( !skillIdList )
    goto LABEL_214;
  v38 = skillIdList->klass;
  v39 = *(unsigned __int16 *)&skillIdList->klass->_2.rank;
  if ( *(_WORD *)&skillIdList->klass->_2.rank )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)v40 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_55;
    }
    v41 = (__int64)&v38->vtable[*v40];
  }
  else
  {
LABEL_55:
    v41 = sub_1C83438(skillIdList, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v42 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v41)(
          skillIdList,
          *(_QWORD *)(v41 + 8));
  if ( !v42 )
    sub_1C32E7C(0);
  while ( 1 )
  {
LABEL_58:
    v43 = *(_QWORD *)v42;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_62;
      }
      v47 = (SkillLvMaster_o *)Master_object;
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_62:
      v46 = sub_1C83438(v42, System_Collections_IEnumerator_TypeInfo, 0);
      v47 = (SkillLvMaster_o *)Master_object;
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8)) & 1) == 0 )
      break;
    v48 = *(_QWORD *)v42;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v50 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_69;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_69:
      v51 = sub_1C83438(v42, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v42, *(_QWORD *)(v51 + 8));
    if ( !v47 )
      sub_1C32E7C(v52);
    v53 = v52;
    if ( SkillLvMaster__TryGetEntity(v47, &entity, v52, 1, 0) )
    {
      if ( !entity )
        sub_1C32E7C(0);
      AddStateAndFriendshipUpInfoArray = SkillLvEntity__GetAddStateAndFriendshipUpInfoArray(entity, 0);
      v55 = AddStateAndFriendshipUpInfoArray;
      if ( !AddStateAndFriendshipUpInfoArray )
        sub_1C32E7C(0);
      max_length = AddStateAndFriendshipUpInfoArray->max_length;
      if ( max_length >= 1 )
      {
        v57 = 0;
        while ( 1 )
        {
          if ( v57 >= (unsigned int)max_length )
            sub_1C32E84(AddStateAndFriendshipUpInfoArray);
          v58 = v55->m_Items[v57];
          if ( !v58 )
            sub_1C32E7C(AddStateAndFriendshipUpInfoArray);
          v59 = v58->fields.groupId;
          if ( v59 < 1 )
            goto LABEL_109;
          if ( !v58->fields.funcEntity )
            sub_1C32E7C(AddStateAndFriendshipUpInfoArray);
          AddStateAndFriendshipUpInfoArray = (EventDropUpValInfo_array *)EventDropUpValInfo__GetFuncType(
                                                                           v55->m_Items[v57],
                                                                           0);
          if ( (_DWORD)AddStateAndFriendshipUpInfoArray == 1 || (_DWORD)AddStateAndFriendshipUpInfoArray == 16 )
            break;
          if ( (_DWORD)AddStateAndFriendshipUpInfoArray == 111 )
          {
            if ( !v7 )
              sub_1C32E7C(AddStateAndFriendshipUpInfoArray);
            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                    v7,
                    v59,
                    (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
            {
              v68 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v68,
                (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v68 )
                sub_1C32E7C(v69);
              v70 = v68->fields._items;
              v71 = Method_System_Collections_Generic_List_int__Add__;
              ++v68->fields._version;
              if ( !v70 )
                sub_1C32E7C(v69);
              v72 = v68->fields._size;
              if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v68,
                  v53,
                  *(const MethodInfo_377B798 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
              }
              else
              {
                v68->fields._size = v72 + 1;
                v70->m_Items[v72] = v53;
              }
              System_Collections_Generic_Dictionary_int__object___Add(
                v7,
                v59,
                (Il2CppObject *)v68,
                (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              goto LABEL_109;
            }
            AddStateAndFriendshipUpInfoArray = (EventDropUpValInfo_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                             v7,
                                                                             v59,
                                                                             (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
            if ( !AddStateAndFriendshipUpInfoArray )
              sub_1C32E7C(0);
            bounds = AddStateAndFriendshipUpInfoArray->bounds;
            v61 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(AddStateAndFriendshipUpInfoArray->max_length);
            if ( !bounds )
              sub_1C32E7C(AddStateAndFriendshipUpInfoArray);
            max_length_low = SLODWORD(AddStateAndFriendshipUpInfoArray->max_length);
            if ( (unsigned int)max_length_low < bounds[1].lower_bound )
            {
LABEL_95:
              LODWORD(AddStateAndFriendshipUpInfoArray->max_length) = max_length_low + 1;
              *((_DWORD *)&bounds[2].length + max_length_low) = v53;
              goto LABEL_109;
            }
            goto LABEL_89;
          }
LABEL_109:
          max_length = v55->max_length;
          if ( ++v57 >= max_length )
            goto LABEL_58;
        }
        if ( !v6 )
          sub_1C32E7C(AddStateAndFriendshipUpInfoArray);
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v6,
                v59,
                (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
        {
          v63 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v63,
            (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v63 )
            sub_1C32E7C(v64);
          v65 = v63->fields._items;
          v66 = Method_System_Collections_Generic_List_int__Add__;
          ++v63->fields._version;
          if ( !v65 )
            sub_1C32E7C(v64);
          v67 = v63->fields._size;
          if ( (unsigned int)v67 >= LODWORD(v65->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v63,
              v53,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
          }
          else
          {
            v63->fields._size = v67 + 1;
            v65->m_Items[v67] = v53;
          }
          System_Collections_Generic_Dictionary_int__object___Add(
            v6,
            v59,
            (Il2CppObject *)v63,
            (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
          goto LABEL_109;
        }
        AddStateAndFriendshipUpInfoArray = (EventDropUpValInfo_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         v6,
                                                                         v59,
                                                                         (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
        if ( !AddStateAndFriendshipUpInfoArray )
          sub_1C32E7C(0);
        bounds = AddStateAndFriendshipUpInfoArray->bounds;
        v61 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(AddStateAndFriendshipUpInfoArray->max_length);
        if ( !bounds )
          sub_1C32E7C(AddStateAndFriendshipUpInfoArray);
        max_length_low = SLODWORD(AddStateAndFriendshipUpInfoArray->max_length);
        if ( (unsigned int)max_length_low < bounds[1].lower_bound )
          goto LABEL_95;
LABEL_89:
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)AddStateAndFriendshipUpInfoArray,
          v53,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
        goto LABEL_109;
      }
    }
  }
  v73 = *(_QWORD *)v42;
  v74 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
  {
    v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
    {
      --v74;
      v75 += 4;
      if ( !v74 )
        goto LABEL_115;
    }
    v76 = v73 + 16LL * *v75 + 312;
  }
  else
  {
LABEL_115:
    v76 = sub_1C83438(v42, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v76)(v42, *(_QWORD *)(v76 + 8));
  v77 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v77,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  v78 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v78 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__131_0 = (System_Func_T__TResult__o *)v78->static_fields->__9__131_0;
  if ( !_9__131_0 )
  {
    if ( !v78->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v78);
      v78 = PartyOrganizationUtility___c_TypeInfo;
    }
    v80 = (Il2CppObject *)v78->static_fields->__9;
    _9__131_0 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_KeyValuePair_int__List_int____bool__TypeInfo);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__131_0,
      v80,
      Method_PartyOrganizationUtility___c__GetNeedAddAnnotationSkillIds_b__131_0__,
      0);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__131_0 = (struct System_Func_KeyValuePair_int__List_int____bool__o *)_9__131_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__131_0, (int32_t)_9__131_0, v82, v83);
  }
  v8 = System_Linq_Enumerable__Where_KeyValuePair_int__object__(
         (System_Collections_Generic_IEnumerable_TSource__o *)v6,
         (System_Func_TSource__bool__o *)_9__131_0,
         (const MethodInfo_3122234 *)Method_System_Linq_Enumerable_Where_KeyValuePair_int__List_int_____);
  if ( !v8 )
    goto LABEL_214;
  v84 = v8->klass;
  v85 = v8;
  v86 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    v87 = &v84->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____c **)v87 - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo )
    {
      --v86;
      v87 += 4;
      if ( !v86 )
        goto LABEL_128;
    }
    v88 = (__int64)&v84->vtable[*v87];
  }
  else
  {
LABEL_128:
    v88 = sub_1C83438(v8, System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo, 0);
  }
  v89 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v88)(
          v85,
          *(_QWORD *)(v88 + 8));
  if ( !v89 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v90 = *(_QWORD *)v89;
    v91 = *(unsigned __int16 *)(*(_QWORD *)v89 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v89 + 302LL) )
    {
      v92 = (int *)(*(_QWORD *)(v90 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v92 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v91;
        v92 += 4;
        if ( !v91 )
          goto LABEL_135;
      }
      v93 = v90 + 16LL * *v92 + 312;
    }
    else
    {
LABEL_135:
      v93 = sub_1C83438(v89, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v93)(v89, *(_QWORD *)(v93 + 8)) & 1) == 0 )
      break;
    v94 = *(_QWORD *)v89;
    v95 = *(unsigned __int16 *)(*(_QWORD *)v89 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v89 + 302LL) )
    {
      v96 = (int *)(*(_QWORD *)(v94 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____c **)v96 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo )
      {
        --v95;
        v96 += 4;
        if ( !v95 )
          goto LABEL_142;
      }
      v97 = v94 + 16LL * *v96 + 312;
    }
    else
    {
LABEL_142:
      v97 = sub_1C83438(v89, System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo, 0);
    }
    v98 = (*(__int64 (__fastcall **)(__int64, _QWORD))v97)(v89, *(_QWORD *)(v97 + 8));
    if ( !v77 )
      sub_1C32E7C(v98);
    System_Collections_Generic_List_int___AddRange(
      v77,
      v99,
      (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  v100 = *(_QWORD *)v89;
  v101 = *(unsigned __int16 *)(*(_QWORD *)v89 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v89 + 302LL) )
  {
    v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v102 - 1) != System_IDisposable_TypeInfo )
    {
      --v101;
      v102 += 4;
      if ( !v101 )
        goto LABEL_150;
    }
    v103 = v100 + 16LL * *v102 + 312;
  }
  else
  {
LABEL_150:
    v103 = sub_1C83438(v89, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v103)(v89, *(_QWORD *)(v103 + 8));
  v104 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v104 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__131_1 = (System_Func_T__TResult__o *)v104->static_fields->__9__131_1;
  if ( !_9__131_1 )
  {
    if ( !v104->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v104);
      v104 = PartyOrganizationUtility___c_TypeInfo;
    }
    v106 = (Il2CppObject *)v104->static_fields->__9;
    _9__131_1 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_KeyValuePair_int__List_int____bool__TypeInfo);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__131_1,
      v106,
      Method_PartyOrganizationUtility___c__GetNeedAddAnnotationSkillIds_b__131_1__,
      0);
    v107 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v107->__9__131_1 = (struct System_Func_KeyValuePair_int__List_int____bool__o *)_9__131_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v107->__9__131_1, (int32_t)_9__131_1, v108, v109);
  }
  v8 = System_Linq_Enumerable__Where_KeyValuePair_int__object__(
         (System_Collections_Generic_IEnumerable_TSource__o *)v7,
         (System_Func_TSource__bool__o *)_9__131_1,
         (const MethodInfo_3122234 *)Method_System_Linq_Enumerable_Where_KeyValuePair_int__List_int_____);
  if ( !v8 )
    goto LABEL_214;
  v110 = v8->klass;
  v111 = v8;
  v112 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    v113 = &v110->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____c **)v113 - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo )
    {
      --v112;
      v113 += 4;
      if ( !v112 )
        goto LABEL_163;
    }
    v114 = (__int64)&v110->vtable[*v113];
  }
  else
  {
LABEL_163:
    v114 = sub_1C83438(v8, System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo, 0);
  }
  v115 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v114)(
           v111,
           *(_QWORD *)(v114 + 8));
  if ( !v115 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v116 = *(_QWORD *)v115;
    v117 = *(unsigned __int16 *)(*(_QWORD *)v115 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v115 + 302LL) )
    {
      v118 = (int *)(*(_QWORD *)(v116 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v118 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v117;
        v118 += 4;
        if ( !v117 )
          goto LABEL_170;
      }
      v119 = v116 + 16LL * *v118 + 312;
    }
    else
    {
LABEL_170:
      v119 = sub_1C83438(v115, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v119)(v115, *(_QWORD *)(v119 + 8)) & 1) == 0 )
      break;
    v120 = *(_QWORD *)v115;
    v121 = *(unsigned __int16 *)(*(_QWORD *)v115 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v115 + 302LL) )
    {
      v122 = (int *)(*(_QWORD *)(v120 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____c **)v122 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo )
      {
        --v121;
        v122 += 4;
        if ( !v121 )
          goto LABEL_177;
      }
      v123 = v120 + 16LL * *v122 + 312;
    }
    else
    {
LABEL_177:
      v123 = sub_1C83438(v115, System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo, 0);
    }
    v124 = (*(__int64 (__fastcall **)(__int64, _QWORD))v123)(v115, *(_QWORD *)(v123 + 8));
    if ( !v77 )
      sub_1C32E7C(v124);
    System_Collections_Generic_List_int___AddRange(
      v77,
      v125,
      (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  v126 = *(_QWORD *)v115;
  v127 = *(unsigned __int16 *)(*(_QWORD *)v115 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v115 + 302LL) )
  {
    v128 = (int *)(*(_QWORD *)(v126 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v128 - 1) != System_IDisposable_TypeInfo )
    {
      --v127;
      v128 += 4;
      if ( !v127 )
        goto LABEL_185;
    }
    v129 = v126 + 16LL * *v128 + 312;
  }
  else
  {
LABEL_185:
    v129 = sub_1C83438(v115, System_IDisposable_TypeInfo, 0);
  }
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v129)(
                                                              v115,
                                                              *(_QWORD *)(v129 + 8));
  if ( !v77 )
LABEL_214:
    sub_1C32E7C(v8);
  return System_Collections_Generic_List_int___ToArray(
           v77,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


FollowerInfo_o *PartyOrganizationUtility__GetNormalFollowerInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._normalFollowerInfo;
}


FollowerInfo_o *PartyOrganizationUtility__GetNpcFollowerInfo(
        PartyOrganizationUtility_o *this,
        int32_t key,
        const MethodInfo *method)
{
  if ( (byte_4C336C1 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_int__FollowerInfo___);
    byte_4C336C1 = 1;
  }
  return (FollowerInfo_o *)BasicHelper__GetValue_int__object_(
                             (System_Collections_Generic_Dictionary_K__V__o *)this->fields._npcFollowerInfos,
                             key,
                             0,
                             (const MethodInfo_30CB13C *)Method_BasicHelper_GetValue_int__FollowerInfo___);
}


System_Int32_array *PartyOrganizationUtility__GetQuestUseItemIds(
        PartyOrganizationUtility_o *this,
        int32_t campaignType,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *CachedAvailableQuestUseItems; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  PartyOrganizationUtility___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__int__o *_9__127_1; // x20
  Il2CppObject *v14; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v18; // x0
  PartyOrganizationUtility___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_object__object__o *_9__127_2; // x20
  Il2CppObject *v22; // x21
  struct PartyOrganizationUtility___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v26; // x0
  PartyOrganizationUtility___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x19
  System_Func_object__int__o *_9__127_3; // x20
  Il2CppObject *v30; // x21
  CGThumbnailListItem_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0

  if ( (byte_4C336CD & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_GroupBy_QuestUseItemInfo__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_SelectMany_IGrouping_int__QuestUseItemInfo___QuestUseItemInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_QuestUseItemInfo__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
    sub_1C32C20(&System_Func_QuestUseItemInfo__bool__TypeInfo);
    sub_1C32C20(&System_Func_QuestUseItemInfo__int__TypeInfo);
    sub_1C32C20(&System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___TypeInfo);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__127_1__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__127_2__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__127_3__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__DisplayClass127_0__GetQuestUseItemIds_b__0__);
    sub_1C32C20(&PartyOrganizationUtility___c__DisplayClass127_0_TypeInfo);
    sub_1C32C20(&PartyOrganizationUtility___c_TypeInfo);
    byte_4C336CD = 1;
  }
  v5 = sub_1C32E6C(PartyOrganizationUtility___c__DisplayClass127_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_DWORD *)(v5 + 16) = campaignType;
  CachedAvailableQuestUseItems = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
                                                                                        this,
                                                                                        v7);
  v9 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestUseItemInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_PartyOrganizationUtility___c__DisplayClass127_0__GetQuestUseItemIds_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          CachedAvailableQuestUseItems,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v11 = PartyOrganizationUtility___c_TypeInfo;
  v12 = v10;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v11 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__127_1 = (System_Func_object__int__o *)v11->static_fields->__9__127_1;
  if ( !_9__127_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = PartyOrganizationUtility___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__127_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__127_1,
      v14,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__127_1__,
      0);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__127_1 = (struct System_Func_QuestUseItemInfo__int__o *)_9__127_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__127_1, (int32_t)_9__127_1, v16, v17);
  }
  v18 = System_Linq_Enumerable__GroupBy_object__int_(
          v12,
          (System_Func_TSource__TKey__o *)_9__127_1,
          (const MethodInfo_31077C8 *)Method_System_Linq_Enumerable_GroupBy_QuestUseItemInfo__int___);
  v19 = PartyOrganizationUtility___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v19 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__127_2 = (System_Func_object__object__o *)v19->static_fields->__9__127_2;
  if ( !_9__127_2 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = PartyOrganizationUtility___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__127_2 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___TypeInfo);
    System_Func_object__object____ctor(
      _9__127_2,
      v22,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__127_2__,
      0);
    v23 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v23->__9__127_2 = (struct System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___o *)_9__127_2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v23->__9__127_2, (int32_t)_9__127_2, v24, v25);
  }
  v26 = System_Linq_Enumerable__SelectMany_object__object_(
          v20,
          (System_Func_TSource__IEnumerable_TResult___o *)_9__127_2,
          (const MethodInfo_31168AC *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__QuestUseItemInfo___QuestUseItemInfo___);
  v27 = PartyOrganizationUtility___c_TypeInfo;
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)v26;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v27 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__127_3 = (System_Func_object__int__o *)v27->static_fields->__9__127_3;
  if ( !_9__127_3 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = PartyOrganizationUtility___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__127_3 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__127_3,
      v30,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__127_3__,
      0);
    v31 = (CGThumbnailListItem_o *)PartyOrganizationUtility___c_TypeInfo->static_fields;
    v31[1].klass = (CGThumbnailListItem_c *)_9__127_3;
    sub_1C32BC4(v31 + 1, (int32_t)_9__127_3, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v28,
                                                               (System_Func_TSource__TResult__o *)_9__127_3,
                                                               (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_QuestUseItemInfo__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v34,
           (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
}


QuestUseItemInfo_array *PartyOrganizationUtility__GetQuestUseItems(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  PartyOrganizationUtility_o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *Master_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  EventCampaignEntity_array *AvailableQuestUseItemEventCampaignEntities; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x21
  PartyOrganizationUtility___c_c *v16; // x0
  System_Func_object__object__o *_9__119_0; // x22
  Il2CppObject *v18; // x23
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Func_T1__T2__TResult__o *v22; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x21
  System_Func_object__object__o *v24; // x22
  System_Collections_Generic_IEnumerable_T__o *v25; // x0
  System_Collections_Generic_IEnumerable_T__o *v26; // x21
  PartyOrganizationUtility___c_c *v27; // x8
  System_Func_object__bool__o *_9__119_3; // x22
  Il2CppObject *v29; // x23
  struct PartyOrganizationUtility___c_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  PartyOrganizationUtility___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x21
  System_Func_object__int__o *_9__119_4; // x22
  Il2CppObject *v37; // x23
  struct PartyOrganizationUtility___c_StaticFields *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v41; // x0
  PartyOrganizationUtility___c_c *v42; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x21
  System_Func_object__object__o *_9__119_5; // x22
  Il2CppObject *v45; // x23
  struct PartyOrganizationUtility___c_StaticFields *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Collections_Generic_List_object__o *v52; // x21
  const MethodInfo *v53; // x1
  Il2CppObject *v54; // x21
  const MethodInfo *v55; // x4
  UserInterruptionQuestEntity_InterruptionInfo_o *InterruptionInfo; // x0
  UserInterruptionQuestEntity_InterruptionInfo_o *v57; // x21
  System_Collections_Generic_IEnumerable_T__o *useRewardAddItemIds; // x21
  System_Action_int__o *v59; // x22
  System_Collections_Generic_List_object__o *v60; // x19
  System_Action_object__o *v61; // x21
  PartyOrganizationUtility___c_c *v62; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x19
  System_Func_object__int__o *_9__119_7; // x20
  Il2CppObject *v65; // x21
  struct PartyOrganizationUtility___c_StaticFields *v66; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x0
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C336C5 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_QuestUseItemInfo__TypeInfo);
    sub_1C32C20(&System_Action_int__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ExcludeNull_QuestUseItemInfo___);
    sub_1C32C20(&Method_BasicHelper_ForEach_int___);
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_GroupBy_QuestUseItemInfo__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_QuestUseItemInfo__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_SelectMany_EventCampaignEntity__int____f__AnonymousType4_EventCampaignEntity__ItemEntity____);
    sub_1C32C20(&Method_System_Linq_Enumerable_SelectMany_IGrouping_int__QuestUseItemInfo___QuestUseItemInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select___f__AnonymousType4_EventCampaignEntity__ItemEntity___QuestUseItemInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_QuestUseItemInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
    sub_1C32C20(&System_Func_QuestUseItemInfo__bool__TypeInfo);
    sub_1C32C20(&System_Func___f__AnonymousType4_EventCampaignEntity__ItemEntity___QuestUseItemInfo__TypeInfo);
    sub_1C32C20(&System_Func_EventCampaignEntity__IEnumerable_int___TypeInfo);
    sub_1C32C20(&System_Func_QuestUseItemInfo__int__TypeInfo);
    sub_1C32C20(&System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___TypeInfo);
    sub_1C32C20(&System_Func_EventCampaignEntity__int____f__AnonymousType4_EventCampaignEntity__ItemEntity___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestUseItemInfo__ForEach__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestUseItemInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_QuestUseItemInfo__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__119_0__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__119_3__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__119_4__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__119_5__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__119_7__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__DisplayClass119_0__GetQuestUseItems_b__10__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__DisplayClass119_0__GetQuestUseItems_b__1__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__DisplayClass119_0__GetQuestUseItems_b__2__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__DisplayClass119_0__GetQuestUseItems_b__6__);
    sub_1C32C20(&PartyOrganizationUtility___c__DisplayClass119_0_TypeInfo);
    sub_1C32C20(&PartyOrganizationUtility___c_TypeInfo);
    byte_4C336C5 = 1;
  }
  entity = 0;
  v3 = sub_1C32E6C(PartyOrganizationUtility___c__DisplayClass119_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_57;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
  *(_QWORD *)(v3 + 16) = Master_object;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Master_object, v8, v9);
  v10 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserItemMaster___);
  *(_QWORD *)(v3 + 24) = v10;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v10, v11, v12);
  AvailableQuestUseItemEventCampaignEntities = PartyOrganizationUtility__GetAvailableQuestUseItemEventCampaignEntities(
                                                 this,
                                                 v13);
  if ( !AvailableQuestUseItemEventCampaignEntities )
    goto LABEL_32;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)AvailableQuestUseItemEventCampaignEntities;
  v16 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v16 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__119_0 = (System_Func_object__object__o *)v16->static_fields->__9__119_0;
  if ( !_9__119_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = PartyOrganizationUtility___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__119_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_EventCampaignEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__119_0,
      v18,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__119_0__,
      0);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__119_0 = (struct System_Func_EventCampaignEntity__IEnumerable_int___o *)_9__119_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__119_0, (int32_t)_9__119_0, v20, v21);
  }
  v22 = (System_Func_T1__T2__TResult__o *)sub_1C32E6C(System_Func_EventCampaignEntity__int____f__AnonymousType4_EventCampaignEntity__ItemEntity___TypeInfo);
  System_Func_object__int__object____ctor(
    v22,
    (Il2CppObject *)v3,
    Method_PartyOrganizationUtility___c__DisplayClass119_0__GetQuestUseItems_b__1__,
    0);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int__object_(
                                                               v15,
                                                               (System_Func_TSource__IEnumerable_TCollection___o *)_9__119_0,
                                                               (System_Func_TSource__TCollection__TResult__o *)v22,
                                                               (const MethodInfo_3116A00 *)Method_System_Linq_Enumerable_SelectMany_EventCampaignEntity__int____f__AnonymousType4_EventCampaignEntity__ItemEntity____);
  v24 = (System_Func_object__object__o *)sub_1C32E6C(System_Func___f__AnonymousType4_EventCampaignEntity__ItemEntity___QuestUseItemInfo__TypeInfo);
  System_Func_object__object____ctor(
    v24,
    (Il2CppObject *)v3,
    Method_PartyOrganizationUtility___c__DisplayClass119_0__GetQuestUseItems_b__2__,
    0);
  v25 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v23,
                                                         (System_Func_TSource__TResult__o *)v24,
                                                         (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select___f__AnonymousType4_EventCampaignEntity__ItemEntity___QuestUseItemInfo___);
  v26 = BasicHelper__ExcludeNull_object_(
          v25,
          (const MethodInfo_30C70E4 *)Method_BasicHelper_ExcludeNull_QuestUseItemInfo___);
  v27 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v27 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__119_3 = (System_Func_object__bool__o *)v27->static_fields->__9__119_3;
  if ( !_9__119_3 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = PartyOrganizationUtility___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__119_3 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__119_3,
      v29,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__119_3__,
      0);
    v30 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v30->__9__119_3 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__119_3;
    sub_1C32BC4((CGThumbnailListItem_o *)&v30->__9__119_3, (int32_t)_9__119_3, v31, v32);
  }
  v33 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v26,
          (System_Func_TSource__bool__o *)_9__119_3,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v34 = PartyOrganizationUtility___c_TypeInfo;
  v35 = v33;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v34 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__119_4 = (System_Func_object__int__o *)v34->static_fields->__9__119_4;
  if ( !_9__119_4 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = PartyOrganizationUtility___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v34->static_fields->__9;
    _9__119_4 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__119_4, v37, Method_PartyOrganizationUtility___c__GetQuestUseItems_b__119_4__, 0);
    v38 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v38->__9__119_4 = (struct System_Func_QuestUseItemInfo__int__o *)_9__119_4;
    sub_1C32BC4((CGThumbnailListItem_o *)&v38->__9__119_4, (int32_t)_9__119_4, v39, v40);
  }
  v41 = System_Linq_Enumerable__GroupBy_object__int_(
          v35,
          (System_Func_TSource__TKey__o *)_9__119_4,
          (const MethodInfo_31077C8 *)Method_System_Linq_Enumerable_GroupBy_QuestUseItemInfo__int___);
  v42 = PartyOrganizationUtility___c_TypeInfo;
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)v41;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v42 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__119_5 = (System_Func_object__object__o *)v42->static_fields->__9__119_5;
  if ( !_9__119_5 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = PartyOrganizationUtility___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v42->static_fields->__9;
    _9__119_5 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___TypeInfo);
    System_Func_object__object____ctor(
      _9__119_5,
      v45,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__119_5__,
      0);
    v46 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v46->__9__119_5 = (struct System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___o *)_9__119_5;
    sub_1C32BC4((CGThumbnailListItem_o *)&v46->__9__119_5, (int32_t)_9__119_5, v47, v48);
  }
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v43,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__119_5,
                                                               (const MethodInfo_31168AC *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__QuestUseItemInfo___QuestUseItemInfo___);
  v52 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v49,
                                                       (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_QuestUseItemInfo___);
  if ( !v52 )
  {
LABEL_32:
    v52 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_QuestUseItemInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v52,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_QuestUseItemInfo___ctor__);
  }
  *(_QWORD *)(v3 + 40) = v52;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 40), (int32_t)v52, v50, v51);
  if ( this->fields._IsWaveBattleRestart_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v54 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
    }
    v4 = (PartyOrganizationUtility_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v4 = (PartyOrganizationUtility_o *)NetworkManager_TypeInfo;
    }
    if ( v54 )
    {
      v4 = (PartyOrganizationUtility_o *)UserInterruptionQuestMaster__TryGetEntity(
                                           (UserInterruptionQuestMaster_o *)v54,
                                           &entity,
                                           (int64_t)v4[1].klass->_1.element_class,
                                           this->fields._CachedQuestId_k__BackingField,
                                           this->fields._CachedQuestPhase_k__BackingField,
                                           0);
      if ( ((unsigned __int8)v4 & 1) == 0 )
        goto LABEL_49;
      if ( entity )
      {
        PartyOrganizationUtility__UpdateInterruptionUseItem(
          v4,
          *(System_Collections_Generic_List_QuestUseItemInfo__o **)(v3 + 40),
          30,
          entity->fields.campaignItemId,
          v55);
        v4 = (PartyOrganizationUtility_o *)entity;
        if ( entity )
        {
          InterruptionInfo = UserInterruptionQuestEntity__GetInterruptionInfo(entity, 0);
          if ( InterruptionInfo )
          {
            v57 = InterruptionInfo;
            if ( !BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)InterruptionInfo->fields.useRewardAddItemIds,
                    0) )
            {
              useRewardAddItemIds = (System_Collections_Generic_IEnumerable_T__o *)v57->fields.useRewardAddItemIds;
              v59 = (System_Action_int__o *)sub_1C32E6C(System_Action_int__TypeInfo);
              System_Action_int____ctor(
                v59,
                (Il2CppObject *)v3,
                Method_PartyOrganizationUtility___c__DisplayClass119_0__GetQuestUseItems_b__10__,
                0);
              BasicHelper__ForEach_int_(
                useRewardAddItemIds,
                (System_Action_T__o *)v59,
                (const MethodInfo_30C8780 *)Method_BasicHelper_ForEach_int___);
            }
          }
          goto LABEL_49;
        }
      }
    }
LABEL_57:
    sub_1C32E7C(v4);
  }
LABEL_49:
  PartyOrganizationUtility__LoadQuestUseItemUseState(this, v53);
  v60 = *(System_Collections_Generic_List_object__o **)(v3 + 40);
  v61 = (System_Action_object__o *)sub_1C32E6C(System_Action_QuestUseItemInfo__TypeInfo);
  System_Action_object____ctor(
    v61,
    (Il2CppObject *)v3,
    Method_PartyOrganizationUtility___c__DisplayClass119_0__GetQuestUseItems_b__6__,
    0);
  if ( !v60 )
    goto LABEL_57;
  System_Collections_Generic_List_object___ForEach(
    v60,
    (System_Action_T__o *)v61,
    (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_QuestUseItemInfo__ForEach__);
  v62 = PartyOrganizationUtility___c_TypeInfo;
  v63 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v3 + 40);
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v62 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__119_7 = (System_Func_object__int__o *)v62->static_fields->__9__119_7;
  if ( !_9__119_7 )
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      v62 = PartyOrganizationUtility___c_TypeInfo;
    }
    v65 = (Il2CppObject *)v62->static_fields->__9;
    _9__119_7 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__119_7, v65, Method_PartyOrganizationUtility___c__GetQuestUseItems_b__119_7__, 0);
    v66 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v66->__9__119_7 = (struct System_Func_QuestUseItemInfo__int__o *)_9__119_7;
    sub_1C32BC4((CGThumbnailListItem_o *)&v66->__9__119_7, (int32_t)_9__119_7, v67, v68);
  }
  v69 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v63,
                                                               (System_Func_TSource__TKey__o *)_9__119_7,
                                                               (const MethodInfo_310D0C4 *)Method_System_Linq_Enumerable_OrderByDescending_QuestUseItemInfo__int___);
  return (QuestUseItemInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                     v69,
                                     (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
}


System_String_o *PartyOrganizationUtility__GetRarityInvalidMessage(
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
  System_String_o *v27; // x21
  int32_t stringLength; // w27
  int32_t v29; // w28

  if ( (byte_4C336BF & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&Rarity_TypeInfo);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&StringLiteral_10102/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/);
    sub_1C32C20(&StringLiteral_10106/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/);
    sub_1C32C20(&StringLiteral_10105/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/);
    sub_1C32C20(&StringLiteral_10101/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/);
    sub_1C32C20(&StringLiteral_10104/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/);
    sub_1C32C20(&StringLiteral_10103/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/);
    byte_4C336BF = 1;
  }
  v13 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v13, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10101/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, 0);
  v15 = System_String__Format(v14, (Il2CppObject *)servantName, 0);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10102/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, 0);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = (Il2CppObject *)Rarity__getRarityType(servantRarity, 0);
  v18 = System_String__Format(v16, RarityType, 0);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_10103/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, 0);
  v20 = System_String__Format(v19, (Il2CppObject *)equipName, 0);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10104/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, 0);
  v22 = System_String__Format(v21, (Il2CppObject *)skillName, 0);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10105/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, 0);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10106/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, 0);
  v25 = (Il2CppObject *)Rarity__getRarityType(actMaxRarity, 0);
  v26 = System_String__Format(v24, v25, 0);
  if ( !v15 || !v20 )
    goto LABEL_14;
  v27 = v26;
  stringLength = v15->fields._stringLength;
  v29 = v20->fields._stringLength;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v26 = (System_String_o *)System_Math__Max_65041976(stringLength, v29, 0);
  *maxLength = (int)v26;
  if ( !v22
    || (v26 = (System_String_o *)System_Math__Max_65041976((int32_t)v26, v22->fields._stringLength, 0),
        *maxLength = (int)v26,
        !v13) )
  {
LABEL_14:
    sub_1C32E7C(v26);
  }
  System_Text_StringBuilder__Append_63603608(v13, v15, 0);
  System_Text_StringBuilder__Append_63603608(v13, v18, 0);
  System_Text_StringBuilder__Append_63603608(v13, v20, 0);
  System_Text_StringBuilder__Append_63603608(v13, v22, 0);
  System_Text_StringBuilder__Append_63603608(v13, v23, 0);
  System_Text_StringBuilder__Append_63603608(v13, v27, 0);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v13->klass->vtable._3_ToString.methodPtr)(
                              v13,
                              v13->klass->vtable._3_ToString.method);
}


System_String_o *PartyOrganizationUtility__GetServantShortName(
        PartyOrganizationUtility_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  return CombineUtility__GetServantShortName(svtId, 0);
}


void PartyOrganizationUtility__GetStaringMemberFriendshipUpNum(
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

  if ( (byte_4C336CA & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    byte_4C336CA = 1;
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
                                                              0);
      if ( (unsigned int)v10 <= 2 )
      {
        if ( !PartyItemSmc_k__BackingField )
LABEL_27:
          sub_1C32E7C(PartyItemSmc_k__BackingField);
        v11 += LOBYTE(PartyItemSmc_k__BackingField->fields.id);
      }
      else if ( !PartyItemSmc_k__BackingField )
      {
        goto LABEL_27;
      }
      if ( !LOBYTE(PartyItemSmc_k__BackingField->fields.id)
        && !PartyOrganizationListViewItem__get_IsEmpty(
              (PartyOrganizationListViewItem_o *)PartyItemSmc_k__BackingField,
              0) )
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


System_Collections_Generic_List_BattleWaveInfoData__o *PartyOrganizationUtility__GetTempWaveInfoList(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields.tempInterruptionWaveInfoList;
}


PartyOrganizationUtility_TemporaryPartyInfo_o *PartyOrganizationUtility__GetTemporaryPartyInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields.temporaryPartyInfo;
}


bool PartyOrganizationUtility__HasCachedQuestUseItem(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  if ( (byte_4C336C7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_QuestUseItemInfo___);
    byte_4C336C7 = 1;
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList,
           (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_QuestUseItemInfo___);
}


bool PartyOrganizationUtility__IsDisplayedRestrictionDialog(
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
  Il2CppObject *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  bool v15; // w22
  Il2CppClass *klass; // x8
  _QWORD *v17; // x9
  __int64 monitor_low; // x10
  __int64 v19; // x8
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v22; // [xsp+18h] [xbp-28h] BYREF
  int32_t v23; // [xsp+1Ch] [xbp-24h] BYREF

  v22 = phaseId;
  v23 = questId;
  v21 = restrictionId;
  if ( (byte_4C336BB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4C336BB = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v23, 0);
  v9 = System_Int32__ToString((int32_t)&v22, 0);
  v10 = System_Int32__ToString((int32_t)&v21, 0);
  restrictionDialogHistoryList = (Il2CppObject *)System_String__Concat_63556792(v8, v9, v10, 0);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_12;
  v12 = restrictionDialogHistoryList;
  v15 = System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.restrictionDialogHistoryList,
          restrictionDialogHistoryList,
          (const MethodInfo_3798B4C *)Method_System_Collections_Generic_List_string__Contains__);
  if ( !v15 && isAddHistory )
  {
    restrictionDialogHistoryList = (Il2CppObject *)this->fields.restrictionDialogHistoryList;
    if ( restrictionDialogHistoryList )
    {
      klass = restrictionDialogHistoryList[1].klass;
      v17 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(restrictionDialogHistoryList[1].monitor);
      if ( klass )
      {
        monitor_low = SLODWORD(restrictionDialogHistoryList[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)restrictionDialogHistoryList,
            v12,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = (__int64)klass + 8 * monitor_low;
          LODWORD(restrictionDialogHistoryList[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v19 + 32) = v12;
          sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v12, v13, v14);
        }
        return v15;
      }
    }
LABEL_12:
    sub_1C32E7C(restrictionDialogHistoryList);
  }
  return v15;
}


// local variable allocation has failed, the output may be wrong!
bool PartyOrganizationUtility__IsRarityRestriction(
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
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v16; // x27
  Il2CppObject *v17; // x25
  SkillLvMaster_o *v18; // x26
  int v19; // w8
  void *v20; // x24
  unsigned int v21; // w27
  __int64 v22; // x29
  int32_t v23; // w2
  System_String_o *Name; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerable_int__o *ActRarity; // x0
  SkillLvEntity_o *skillLvEntity; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *v30; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C336BD & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C336BD = 1;
  }
  v30 = 0;
  entity = 0;
  skillLvEntity = 0;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)skillName,
    StringLiteral_1/*""*/,
    (int32_t)actMaxRarity,
    *(const MethodInfo **)&servantId);
  *actMaxRarity = 0;
  if ( ((servantId | servantRarity | equipServantId) & 0x80000000) == 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_35;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           &entity,
           servantId,
           (const MethodInfo_3396884 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      v16 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      v17 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v16 )
        goto LABEL_35;
      v18 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)v16, equipServantId, 0);
      if ( !Instance )
        goto LABEL_35;
      v19 = *((_DWORD *)Instance + 6);
      v20 = Instance;
      if ( v19 >= 1 )
      {
        v21 = 0;
        while ( 1 )
        {
          if ( v21 >= v19 )
            sub_1C32E84(Instance);
          v22 = *((_QWORD *)v20 + (int)v21 + 4);
          if ( !v22 )
            goto LABEL_35;
          v23 = *(_DWORD *)(v22 + 48);
          if ( v23 && (eventId < 0 || v23 == eventId) )
          {
            if ( !MasterData_object )
              goto LABEL_35;
            Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                 &v30,
                                 v23,
                                 (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = v30;
              if ( !v30 )
                goto LABEL_35;
              Instance = (void *)EventEntity__IsEventPeriod((EventEntity_o *)v30, 0, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_25;
              Instance = v30;
              if ( !v30 )
                goto LABEL_35;
              Instance = (void *)EventEntity__IsSkillRelease((EventEntity_o *)v30, 0, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
LABEL_25:
                if ( !v18 )
                  goto LABEL_35;
                Instance = (void *)SkillLvMaster__TryGetEntity(v18, &skillLvEntity, *(_DWORD *)(v22 + 28), 1, 0);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  Instance = (void *)RarityRestrictedSkillUtil__IsDisabled(
                                       skillLvEntity,
                                       (ServantEntity_o *)entity,
                                       servantRarity,
                                       0);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                    break;
                }
              }
            }
          }
          v19 = *((_DWORD *)v20 + 6);
          if ( (int)++v21 >= v19 )
            return 0;
        }
        if ( v17 )
        {
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                       *(_DWORD *)(v22 + 28),
                       (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( Instance )
          {
            Name = SkillEntity__getName((SkillEntity_o *)Instance, 0);
            *skillName = Name;
            sub_1C32BC4((CGThumbnailListItem_o *)skillName, (int32_t)Name, v26, v27);
            Instance = skillLvEntity;
            if ( skillLvEntity )
            {
              ActRarity = (System_Collections_Generic_IEnumerable_int__o *)SkillLvEntity__GetActRarity(skillLvEntity, 0);
              *actMaxRarity = System_Linq_Enumerable__Max(ActRarity, 0);
              return 1;
            }
          }
        }
LABEL_35:
        sub_1C32E7C(Instance);
      }
    }
  }
  return 0;
}


bool PartyOrganizationUtility__IsRarityRestriction_34508940(
        PartyOrganizationUtility_o *this,
        int32_t servantId,
        int32_t servantRarity,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x22
  SkillLvEntity_o *v12; // x0

  if ( (byte_4C336BE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C336BE = 1;
  }
  if ( (servantId | servantRarity) < 0 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   servantId,
                   (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  v12 = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0);
  return Entity && v12 && RarityRestrictedSkillUtil__IsDisabled(v12, (ServantEntity_o *)Entity, servantRarity, 0);
}


void PartyOrganizationUtility__LoadQuestUseItemUseState(PartyOrganizationUtility_o *this, const MethodInfo *method)
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  unsigned int v16; // w8
  PartyOrganizationUtility_o *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x0
  QuestUseItemInfo_c *v22; // x0
  QuestUseItemInfo_c *v23; // x0
  int32_t Int_71181884; // w0
  System_Collections_Generic_List_object__o *v25; // x20
  int32_t v26; // w21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  unsigned int v29; // w8
  PartyOrganizationUtility_o *v30; // x1
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  QuestUseItemInfo_c *v35; // x0
  QuestUseItemInfo_c *v36; // x0
  int32_t v37; // w0
  System_Collections_Generic_List_object__o *v38; // x19
  int32_t v39; // w21
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  PartyOrganizationUtility_o *v42; // x20
  BalanceConfig_c *v43; // x8
  unsigned int v44; // w9
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t v50; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_4C336CE & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int____Clear__);
    sub_1C32C20(&PartyOrganizationUtility_TypeInfo);
    sub_1C32C20(&QuestUseItemInfo_TypeInfo);
    sub_1C32C20(&StringLiteral_811/*","*/);
    this = (PartyOrganizationUtility_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C336CE = 1;
  }
  *(_QWORD *)result = 0;
  v50 = 0;
  entity = 0;
  questUseItemStateList = v2->fields.questUseItemStateList;
  if ( !questUseItemStateList )
    goto LABEL_66;
  size = questUseItemStateList->fields._size;
  v5 = questUseItemStateList->fields._version + 1;
  questUseItemStateList->fields._size = 0;
  questUseItemStateList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)questUseItemStateList->fields._items, 0, size, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
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
                                         0);
  if ( !this )
    goto LABEL_66;
  this = (PartyOrganizationUtility_o *)System_String__Split_63570436(
                                         (System_String_o *)this,
                                         (System_String_o *)StringLiteral_811/*","*/,
                                         0,
                                         0);
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
                                             0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_36;
      if ( (unsigned int)(v11 - 1) >= LODWORD(v10->fields._normalFollowerInfo) )
        break;
      this = (PartyOrganizationUtility_o *)System_Int32__TryParse(
                                             *((System_String_o **)&v10->fields._normalFollowerInfo + v11),
                                             result,
                                             0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_36;
      v12 = v11;
      if ( (unsigned int)v11 >= LODWORD(v10->fields._normalFollowerInfo) )
        break;
      this = (PartyOrganizationUtility_o *)System_Int32__TryParse(
                                             *((System_String_o **)&v10->fields._SelectedNormalFollowerClassId_k__BackingField
                                             + v11),
                                             &v50,
                                             0);
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
                                             (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (PartyOrganizationUtility_o *)entity;
        if ( !entity )
          goto LABEL_66;
        this = (PartyOrganizationUtility_o *)ItemEntity__IsEnable((ItemEntity_o *)entity, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_21:
          v13 = (System_Collections_Generic_List_object__o *)v2->fields.questUseItemStateList;
          this = (PartyOrganizationUtility_o *)sub_1C32CC8(int___TypeInfo, 3);
          if ( !this )
            goto LABEL_66;
          v16 = (unsigned int)this->fields._normalFollowerInfo;
          v17 = this;
          if ( !v16 )
            break;
          this->fields._SelectedNormalFollowerClassId_k__BackingField = result[1];
          if ( v16 == 1 )
            break;
          this->fields._SelectedNormalFollowerGrandGraphId_k__BackingField = result[0];
          if ( v16 <= 2 )
            break;
          this->fields._SelectedNormalFollowerDeckId_k__BackingField = v50;
          if ( !v13 )
            goto LABEL_66;
          items = v13->fields._items;
          v19 = Method_System_Collections_Generic_List_int____Add__;
          ++v13->fields._version;
          if ( !items )
            goto LABEL_66;
          v20 = v13->fields._size;
          if ( (unsigned int)v20 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)this,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + v20;
            v13->fields._size = v20 + 1;
            v21[4] = (Il2CppClass *)v17;
            sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v17, v14, v15);
          }
        }
      }
      normalFollowerInfo = (int)v10->fields._normalFollowerInfo;
      v11 += 3;
      if ( v12 + 1 >= normalFollowerInfo )
        goto LABEL_36;
    }
LABEL_65:
    sub_1C32E84(this);
  }
LABEL_36:
  v22 = QuestUseItemInfo_TypeInfo;
  if ( !QuestUseItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo);
    v22 = QuestUseItemInfo_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v22->static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE, 0) )
  {
    v23 = QuestUseItemInfo_TypeInfo;
    if ( !QuestUseItemInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo);
      v23 = QuestUseItemInfo_TypeInfo;
    }
    Int_71181884 = UnityEngine_PlayerPrefs__GetInt_71181884(
                     v23->static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE,
                     0);
    v25 = (System_Collections_Generic_List_object__o *)v2->fields.questUseItemStateList;
    v26 = Int_71181884;
    this = (PartyOrganizationUtility_o *)sub_1C32CC8(int___TypeInfo, 3);
    if ( !this )
      goto LABEL_66;
    v29 = (unsigned int)this->fields._normalFollowerInfo;
    v30 = this;
    if ( !v29 )
      goto LABEL_65;
    this->fields._SelectedNormalFollowerClassId_k__BackingField = v26;
    if ( v29 <= 2 )
      goto LABEL_65;
    this->fields._SelectedNormalFollowerDeckId_k__BackingField = 1;
    if ( !v25 )
      goto LABEL_66;
    v31 = v25->fields._items;
    v32 = Method_System_Collections_Generic_List_int____Add__;
    ++v25->fields._version;
    if ( !v31 )
      goto LABEL_66;
    v33 = v25->fields._size;
    if ( (unsigned int)v33 >= LODWORD(v31->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)this,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &v31->obj.klass + v33;
      v25->fields._size = v33 + 1;
      v34[4] = (Il2CppClass *)v30;
      sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v30, v27, v28);
    }
  }
  v35 = QuestUseItemInfo_TypeInfo;
  if ( !QuestUseItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo);
    v35 = QuestUseItemInfo_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v35->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0) )
  {
    v36 = QuestUseItemInfo_TypeInfo;
    if ( !QuestUseItemInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo);
      v36 = QuestUseItemInfo_TypeInfo;
    }
    v37 = UnityEngine_PlayerPrefs__GetInt_71181884(v36->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0);
    v38 = (System_Collections_Generic_List_object__o *)v2->fields.questUseItemStateList;
    v39 = v37;
    this = (PartyOrganizationUtility_o *)sub_1C32CC8(int___TypeInfo, 3);
    v42 = this;
    v43 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v43 = BalanceConfig_TypeInfo;
    }
    if ( v42 )
    {
      v44 = (unsigned int)v42->fields._normalFollowerInfo;
      if ( v44 <= 1 )
        goto LABEL_65;
      v42->fields._SelectedNormalFollowerGrandGraphId_k__BackingField = v43->static_fields->DefaultQuestUseFriendshipUpItemGroupId;
      if ( v44 == 2 )
        goto LABEL_65;
      v42->fields._SelectedNormalFollowerDeckId_k__BackingField = v39;
      if ( v38 )
      {
        v45 = v38->fields._items;
        v46 = Method_System_Collections_Generic_List_int____Add__;
        ++v38->fields._version;
        if ( v45 )
        {
          v47 = v38->fields._size;
          if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)v42,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v48 = &v45->obj.klass + v47;
            v38->fields._size = v47 + 1;
            v48[4] = (Il2CppClass *)v42;
            sub_1C32BC4((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v42, v40, v41);
          }
          return;
        }
      }
    }
LABEL_66:
    sub_1C32E7C(this);
  }
}


void PartyOrganizationUtility__OpenQuestUseItemDialogTutorial(
        PartyOrganizationUtility_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c_c *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *cachedQuestUseItemInfoList; // x20
  System_Func_object__bool__o *_9__126_0; // x21
  Il2CppObject *v8; // x22
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  PartyOrganizationUtility___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_object__int__o *_9__126_1; // x21
  Il2CppObject *v16; // x22
  struct PartyOrganizationUtility___c_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  Il2CppObject *Master_object; // x0
  bool v23; // w21

  if ( (byte_4C336CC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_QuestUseItemInfo__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
    sub_1C32C20(&System_Func_QuestUseItemInfo__bool__TypeInfo);
    sub_1C32C20(&System_Func_QuestUseItemInfo__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__126_0__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__126_1__);
    sub_1C32C20(&PartyOrganizationUtility___c_TypeInfo);
    byte_4C336CC = 1;
  }
  v5 = PartyOrganizationUtility___c_TypeInfo;
  cachedQuestUseItemInfoList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v5 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__126_0 = (System_Func_object__bool__o *)v5->static_fields->__9__126_0;
  if ( !_9__126_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = PartyOrganizationUtility___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__126_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__126_0,
      v8,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__126_0__,
      0);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__126_0 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__126_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__126_0, (int32_t)_9__126_0, v10, v11);
  }
  v12 = System_Linq_Enumerable__Where_object_(
          cachedQuestUseItemInfoList,
          (System_Func_TSource__bool__o *)_9__126_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v13 = PartyOrganizationUtility___c_TypeInfo;
  v14 = v12;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v13 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__126_1 = (System_Func_object__int__o *)v13->static_fields->__9__126_1;
  if ( !_9__126_1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = PartyOrganizationUtility___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__126_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__126_1,
      v16,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__126_1__,
      0);
    v17 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v17->__9__126_1 = (struct System_Func_QuestUseItemInfo__int__o *)_9__126_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v17->__9__126_1, (int32_t)_9__126_1, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v14,
                                                               (System_Func_TSource__TResult__o *)_9__126_1,
                                                               (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_QuestUseItemInfo__int___);
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_int_(
                                                               v20,
                                                               (const MethodInfo_31214BC *)Method_System_Linq_Enumerable_ToList_int___);
  Master_object = (Il2CppObject *)System_Linq_Enumerable__Any_int_(
                                    v21,
                                    (const MethodInfo_30E8A38 *)Method_System_Linq_Enumerable_Any_int___);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_22;
    v23 = System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)v21,
            0,
            (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_object )
LABEL_22:
      sub_1C32E7C(Master_object);
    EventTutorialMaster__checkTutorial_42064332(
      (EventTutorialMaster_o *)Master_object,
      (System_Collections_Generic_List_int__o *)v21,
      71,
      callBack,
      0,
      0,
      0,
      0,
      0,
      !v23,
      0);
  }
  else
  {
    ActionExtensions__Call(callBack, 0);
  }
}


bool PartyOrganizationUtility__OpenQuestUseItemExpiredDialog(
        PartyOrganizationUtility_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x22
  System_Collections_Generic_List_object__o *v6; // x24
  ChainableActionBase_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  ChainableActionBase_o **v10; // x23
  System_Collections_Generic_IEnumerable_TSource__o *cachedQuestUseItemInfoList; // x24
  PartyOrganizationUtility___c_c *v12; // x0
  System_Func_object__bool__o *_9__125_0; // x25
  Il2CppObject *v14; // x26
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  PartyOrganizationUtility___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x24
  System_Func_object__bool__o *_9__125_1; // x25
  Il2CppObject *v22; // x26
  struct PartyOrganizationUtility___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  PartyOrganizationUtility___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x24
  System_Func_object__int__o *_9__125_2; // x25
  Il2CppObject *v30; // x26
  struct PartyOrganizationUtility___c_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_IEnumerable_T__o *v34; // x24
  System_Action_object__o *v35; // x25
  System_Object_array *v37; // x23
  ActionChain_o *v38; // x22
  __int64 v39; // x23
  System_Action_o *v40; // x24
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x1
  struct QuestUseItemInfo_array *QuestUseItems; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3

  if ( (byte_4C336CB & 1) == 0 )
  {
    sub_1C32C20(&ActionChain_TypeInfo);
    sub_1C32C20(&System_Action___TypeInfo);
    sub_1C32C20(&System_Action_QuestUseItemInfo__TypeInfo);
    sub_1C32C20(&Method_System_Action_Invoke__);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_QuestUseItemInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_QuestUseItemInfo__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
    sub_1C32C20(&System_Func_QuestUseItemInfo__bool__TypeInfo);
    sub_1C32C20(&System_Func_QuestUseItemInfo__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Action_Action___ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Action_Action____ctor__);
    sub_1C32C20(&System_Collections_Generic_List_Action_Action___TypeInfo);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__125_0__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__125_1__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__125_2__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__DisplayClass125_0__OpenQuestUseItemExpiredDialog_b__3__);
    sub_1C32C20(&PartyOrganizationUtility___c__DisplayClass125_0_TypeInfo);
    sub_1C32C20(&PartyOrganizationUtility___c_TypeInfo);
    byte_4C336CB = 1;
  }
  v5 = sub_1C32E6C(PartyOrganizationUtility___c__DisplayClass125_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.cachedQuestUseItemInfoList, 0) )
    return 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_Action_Action___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_Action_Action____ctor__);
  if ( !v5 )
    goto LABEL_31;
  *(_QWORD *)(v5 + 16) = v6;
  v10 = (ChainableActionBase_o **)(v5 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)v6, v8, v9);
  cachedQuestUseItemInfoList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList;
  v12 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v12 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__125_0 = (System_Func_object__bool__o *)v12->static_fields->__9__125_0;
  if ( !_9__125_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = PartyOrganizationUtility___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__125_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__125_0,
      v14,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__125_0__,
      0);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__125_0 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__125_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__125_0, (int32_t)_9__125_0, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          cachedQuestUseItemInfoList,
          (System_Func_TSource__bool__o *)_9__125_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v19 = PartyOrganizationUtility___c_TypeInfo;
  v20 = v18;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v19 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__125_1 = (System_Func_object__bool__o *)v19->static_fields->__9__125_1;
  if ( !_9__125_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = PartyOrganizationUtility___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__125_1 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__125_1,
      v22,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__125_1__,
      0);
    v23 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v23->__9__125_1 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__125_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v23->__9__125_1, (int32_t)_9__125_1, v24, v25);
  }
  v26 = System_Linq_Enumerable__Where_object_(
          v20,
          (System_Func_TSource__bool__o *)_9__125_1,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v27 = PartyOrganizationUtility___c_TypeInfo;
  v28 = v26;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v27 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__125_2 = (System_Func_object__int__o *)v27->static_fields->__9__125_2;
  if ( !_9__125_2 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = PartyOrganizationUtility___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__125_2 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__125_2,
      v30,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__125_2__,
      0);
    v31 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v31->__9__125_2 = (struct System_Func_QuestUseItemInfo__int__o *)_9__125_2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v31->__9__125_2, (int32_t)_9__125_2, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                         v28,
                                                         (System_Func_TSource__TKey__o *)_9__125_2,
                                                         (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_QuestUseItemInfo__int___);
  v35 = (System_Action_object__o *)sub_1C32E6C(System_Action_QuestUseItemInfo__TypeInfo);
  System_Action_object____ctor(
    v35,
    (Il2CppObject *)v5,
    Method_PartyOrganizationUtility___c__DisplayClass125_0__OpenQuestUseItemExpiredDialog_b__3__,
    0);
  BasicHelper__ForEach_object_(
    v34,
    (System_Action_T__o *)v35,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_QuestUseItemInfo___);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v5 + 16), 0) )
    return 0;
  v7 = *v10;
  if ( !*v10 )
    goto LABEL_31;
  v37 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)v7,
          (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
  v38 = (ActionChain_o *)sub_1C32E6C(ActionChain_TypeInfo);
  ActionChain___ctor_48997860(v38, (System_Action_Action__array *)v37, 0);
  v39 = sub_1C32CC8(System_Action___TypeInfo, 1);
  v40 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0);
  if ( !v39 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v39 + 24) )
    sub_1C32E84(v7);
  *(_QWORD *)(v39 + 32) = v40;
  sub_1C32BC4((CGThumbnailListItem_o *)(v39 + 32), (int32_t)v40, v41, v42);
  if ( !v38 || (v7 = ChainableActionBase__Final((ChainableActionBase_o *)v38, (System_Action_array *)v39, 0)) == 0 )
LABEL_31:
    sub_1C32E7C(v7);
  ChainableActionBase__Execute(v7, 0);
  QuestUseItems = PartyOrganizationUtility__GetQuestUseItems(this, v43);
  this->fields.cachedQuestUseItemInfoList = QuestUseItems;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cachedQuestUseItemInfoList, (int32_t)QuestUseItems, v45, v46);
  return 1;
}


void PartyOrganizationUtility__SaveQuestUseItemUseState(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *CachedAvailableQuestUseItems; // x20
  System_Action_object__o *v4; // x21
  PartyOrganizationUtility___c_c *v5; // x0
  struct System_Collections_Generic_List_int____o *questUseItemStateList; // x19
  System_Func_object__object__o *_9__129_1; // x20
  Il2CppObject *v8; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v12; // x0
  PartyOrganizationUtility_c *v13; // x8
  System_Collections_Generic_IEnumerable_T__o *v14; // x19
  System_String_o *SAVE_KEY_QUEST_USE_ITEM; // x20
  System_String_o *v16; // x0
  QuestUseItemInfo_c *v17; // x0

  if ( (byte_4C336CF & 1) == 0 )
  {
    sub_1C32C20(&System_Action_QuestUseItemInfo__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_QuestUseItemInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_SelectMany_int____int___);
    sub_1C32C20(&System_Func_int____IEnumerable_int___TypeInfo);
    sub_1C32C20(&Method_PartyOrganizationUtility__SaveQuestUseItemUseState_b__129_0__);
    sub_1C32C20(&PartyOrganizationUtility_TypeInfo);
    sub_1C32C20(&QuestUseItemInfo_TypeInfo);
    sub_1C32C20(&Method_System_String_Join_int___);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__SaveQuestUseItemUseState_b__129_1__);
    sub_1C32C20(&PartyOrganizationUtility___c_TypeInfo);
    sub_1C32C20(&StringLiteral_811/*","*/);
    byte_4C336CF = 1;
  }
  CachedAvailableQuestUseItems = (System_Collections_Generic_IEnumerable_T__o *)PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
                                                                                  this,
                                                                                  method);
  v4 = (System_Action_object__o *)sub_1C32E6C(System_Action_QuestUseItemInfo__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_PartyOrganizationUtility__SaveQuestUseItemUseState_b__129_0__,
    0);
  BasicHelper__ForEach_object_(
    CachedAvailableQuestUseItems,
    (System_Action_T__o *)v4,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_QuestUseItemInfo___);
  v5 = PartyOrganizationUtility___c_TypeInfo;
  questUseItemStateList = this->fields.questUseItemStateList;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v5 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__129_1 = (System_Func_object__object__o *)v5->static_fields->__9__129_1;
  if ( !_9__129_1 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = PartyOrganizationUtility___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__129_1 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_int____IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__129_1,
      v8,
      Method_PartyOrganizationUtility___c__SaveQuestUseItemUseState_b__129_1__,
      0);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__129_1 = (struct System_Func_int____IEnumerable_int___o *)_9__129_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__129_1, (int32_t)_9__129_1, v10, v11);
  }
  v12 = System_Linq_Enumerable__SelectMany_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questUseItemStateList,
          (System_Func_TSource__IEnumerable_TResult___o *)_9__129_1,
          (const MethodInfo_311683C *)Method_System_Linq_Enumerable_SelectMany_int____int___);
  v13 = PartyOrganizationUtility_TypeInfo;
  v14 = (System_Collections_Generic_IEnumerable_T__o *)v12;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v13 = PartyOrganizationUtility_TypeInfo;
  }
  SAVE_KEY_QUEST_USE_ITEM = v13->static_fields->SAVE_KEY_QUEST_USE_ITEM;
  v16 = System_String__Join_int_(
          (System_String_o *)StringLiteral_811/*","*/,
          v14,
          (const MethodInfo_3188674 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_QUEST_USE_ITEM, v16, 0);
  v17 = QuestUseItemInfo_TypeInfo;
  if ( !QuestUseItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo);
    v17 = QuestUseItemInfo_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v17->static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE, 0);
  UnityEngine_PlayerPrefs__DeleteKey(QuestUseItemInfo_TypeInfo->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0);
}


void PartyOrganizationUtility__SetNormalFollowerInfo(
        PartyOrganizationUtility_o *this,
        FollowerInfo_o *followerInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._normalFollowerInfo = followerInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._normalFollowerInfo, (int32_t)followerInfo, (int32_t)method, v3);
}


void PartyOrganizationUtility__SetNpcFollowerInfo(
        PartyOrganizationUtility_o *this,
        int32_t key,
        FollowerInfo_o *followerInfo,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcFollowerInfos; // x0

  if ( (byte_4C336C0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
    byte_4C336C0 = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_1C32E7C(0);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
    key,
    (Il2CppObject *)followerInfo,
    (const MethodInfo_33EFD08 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
}


void PartyOrganizationUtility__SetQuestCache(
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


void PartyOrganizationUtility__SetTempWaveInfoList(
        PartyOrganizationUtility_o *this,
        System_Collections_Generic_List_BattleWaveInfoData__o *waveInfoList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x0
  struct System_Collections_Generic_List_BattleWaveInfoData__o *v6; // x21
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C336D3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleWaveInfoData___ctor___77998104);
    sub_1C32C20(&System_Collections_Generic_List_BattleWaveInfoData__TypeInfo);
    byte_4C336D3 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleWaveInfoData__TypeInfo);
  v6 = (struct System_Collections_Generic_List_BattleWaveInfoData__o *)v5;
  if ( !waveInfoList )
  {
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
    if ( this )
      goto LABEL_5;
LABEL_7:
    sub_1C32E7C(v7);
  }
  System_Collections_Generic_List_object____ctor_58294448(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)waveInfoList,
    (const MethodInfo_37980B0 *)Method_System_Collections_Generic_List_BattleWaveInfoData___ctor___77998104);
  if ( !this )
    goto LABEL_7;
LABEL_5:
  this->fields.tempInterruptionWaveInfoList = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.tempInterruptionWaveInfoList, (int32_t)v6, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationUtility__SetTemporaryPartyInfo(
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
  CGThumbnailListItem_o *p_temporaryPartyInfo; // x20
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *temporaryPartyInfo; // t1
  Il2CppObject *v23; // x29
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  CGThumbnailListItem_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  CGThumbnailListItem_c *v35; // x20
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x19
  __int64 v40; // x0
  CGThumbnailListItem_o *p_parent; // x20
  __int64 v42; // x0
  int32_t v43; // w1
  PartyOrganizationUtility_TemporaryPartyInfo_o *v44; // x0
  const MethodInfo *v45; // x1

  if ( (byte_4C336B9 & 1) == 0 )
  {
    sub_1C32C20(&PartyListViewItem___TypeInfo);
    sub_1C32C20(&PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo);
    byte_4C336B9 = 1;
  }
  temporaryPartyInfo = this->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (CGThumbnailListItem_o *)&this->fields.temporaryPartyInfo;
  klass = (char *)temporaryPartyInfo;
  if ( !temporaryPartyInfo )
  {
    v23 = (Il2CppObject *)sub_1C32E6C(PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo);
    System_Object___ctor(v23, 0);
    p_temporaryPartyInfo->klass = (CGThumbnailListItem_c *)v23;
    sub_1C32BC4(p_temporaryPartyInfo, (int32_t)v23, v24, v25);
    klass = (char *)p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_18;
  }
  *((_QWORD *)klass + 5) = bgmName;
  v26 = (CGThumbnailListItem_o *)(klass + 40);
  *(_QWORD *)&v26[-1].fields._Id_k__BackingField = userServantId;
  *(_QWORD *)&v26[-1].fields._Type_k__BackingField = userEquipId;
  LODWORD(v26[-1].fields._ThumbnailSpritePath_k__BackingField) = deckNumber;
  sub_1C32BC4(v26, (int32_t)bgmName, userEquipId, *(const MethodInfo **)&deckNumber);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 6) = battleSetupInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)(klass + 48), (int32_t)battleSetupInfo, v27, v28);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 7) = followerInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)(klass + 56), (int32_t)followerInfo, v29, v30);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass
    || (*((_QWORD *)klass + 8) = basePartyItem,
        sub_1C32BC4((CGThumbnailListItem_o *)(klass + 64), (int32_t)basePartyItem, v31, v32),
        (klass = (char *)p_temporaryPartyInfo->klass) == 0)
    || (*((_QWORD *)klass + 9) = partyItem,
        sub_1C32BC4((CGThumbnailListItem_o *)(klass + 72), (int32_t)partyItem, v33, v34),
        (v35 = p_temporaryPartyInfo->klass) == 0) )
  {
LABEL_18:
    sub_1C32E7C(klass);
  }
  LODWORD(v35->_1.declaringType) = selectPartyMemberNum;
  if ( baseDeckItemList )
  {
    v36 = System_Array__Clone((System_Array_o *)baseDeckItemList, 0);
    if ( !v36 )
    {
      v43 = 0;
      v35->_1.parent = 0;
      p_parent = (CGThumbnailListItem_o *)&v35->_1.parent;
      goto LABEL_17;
    }
    v39 = v36;
    v40 = sub_1C32D5C(v36, PartyListViewItem___TypeInfo);
    if ( v40 )
    {
      v35->_1.parent = (Il2CppClass *)v40;
      p_parent = (CGThumbnailListItem_o *)&v35->_1.parent;
      v42 = sub_1C32D5C(v39, PartyListViewItem___TypeInfo);
      if ( v42 )
      {
        v43 = v42;
LABEL_17:
        sub_1C32BC4(p_parent, v43, v37, v38);
        return;
      }
    }
    v44 = (PartyOrganizationUtility_TemporaryPartyInfo_o *)sub_1C3313C(v39);
    PartyOrganizationUtility_TemporaryPartyInfo___ctor(v44, v45);
  }
}


void PartyOrganizationUtility__UpdateInterruptionUseItem(
        PartyOrganizationUtility_o *this,
        System_Collections_Generic_List_QuestUseItemInfo__o *list,
        int32_t campaignType,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v8; // x22
  Il2CppObject *Master_object; // x0
  __int64 v10; // x23
  System_Func_object__bool__o *v11; // x20
  Il2CppObject *v12; // x0
  QuestUseItemInfo_o *v13; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *QuestUseItemEventCampaignsByItemId; // x0
  Il2CppObject *v15; // x21
  int32_t v16; // w21
  ItemEntity_o *v17; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w21
  ItemEntity_o *v21; // x22
  struct QuestUseItemInfo_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  int64_t outStartedAt; // [xsp+8h] [xbp-48h] BYREF
  int64_t outEndedAt; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C336C6 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_QuestUseItemInfo___);
    sub_1C32C20(&System_Func_QuestUseItemInfo__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestUseItemInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestUseItemInfo__Remove__);
    sub_1C32C20(&QuestUseItemInfo_TypeInfo);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__DisplayClass120_0__UpdateInterruptionUseItem_b__0__);
    sub_1C32C20(&PartyOrganizationUtility___c__DisplayClass120_0_TypeInfo);
    byte_4C336C6 = 1;
  }
  outEndedAt = 0;
  outStartedAt = 0;
  v8 = sub_1C32E6C(PartyOrganizationUtility___c__DisplayClass120_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_30;
  *(_DWORD *)(v8 + 16) = campaignType;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_30;
  v10 = v8 + 24;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          (Il2CppObject **)(v8 + 24),
          itemId,
          (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return;
  v11 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestUseItemInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v8,
    Method_PartyOrganizationUtility___c__DisplayClass120_0__UpdateInterruptionUseItem_b__0__,
    0);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestUseItemInfo___);
  if ( !v12 )
  {
    v16 = *(_DWORD *)(v8 + 16);
    v17 = *(ItemEntity_o **)(v8 + 24);
    v13 = (QuestUseItemInfo_o *)sub_1C32E6C(QuestUseItemInfo_TypeInfo);
    QuestUseItemInfo___ctor_34603756(v13, v16, v17, 0);
    if ( !list )
      goto LABEL_30;
    goto LABEL_23;
  }
  v13 = (QuestUseItemInfo_o *)v12;
  if ( LODWORD(v12[1].klass) != itemId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCampaignMaster___);
    if ( !Master_object )
      goto LABEL_30;
    QuestUseItemEventCampaignsByItemId = EventCampaignMaster__GetQuestUseItemEventCampaignsByItemId(
                                           (EventCampaignMaster_o *)Master_object,
                                           *(_DWORD *)(v8 + 16),
                                           itemId,
                                           0);
    Master_object = System_Linq_Enumerable__FirstOrDefault_object_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)QuestUseItemEventCampaignsByItemId,
                      (const MethodInfo_3105AF4 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___);
    if ( Master_object )
    {
      v15 = Master_object;
      Master_object = *(Il2CppObject **)v10;
      if ( !*(_QWORD *)v10 )
        goto LABEL_30;
      Master_object = (Il2CppObject *)ItemEntity__IsEnable_42261892(
                                        (ItemEntity_o *)Master_object,
                                        (int32_t)v15[1].klass,
                                        0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = *(Il2CppObject **)v10;
        if ( *(_QWORD *)v10 )
        {
          ItemEntity__GetUseLimitAt((ItemEntity_o *)Master_object, (int32_t)v15[1].klass, &outStartedAt, &outEndedAt, 0);
          if ( *(_QWORD *)v10 )
          {
            v13->fields._Id_k__BackingField = *(_DWORD *)(*(_QWORD *)v10 + 16LL);
            v13->fields._EndedAt_k__BackingField = outEndedAt;
            goto LABEL_28;
          }
        }
LABEL_30:
        sub_1C32E7C(Master_object);
      }
    }
    if ( !list )
      goto LABEL_30;
    System_Collections_Generic_List_object___Remove(
      (System_Collections_Generic_List_object__o *)list,
      (Il2CppObject *)v13,
      (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_QuestUseItemInfo__Remove__);
    v20 = *(_DWORD *)(v8 + 16);
    v21 = *(ItemEntity_o **)(v8 + 24);
    v13 = (QuestUseItemInfo_o *)sub_1C32E6C(QuestUseItemInfo_TypeInfo);
    QuestUseItemInfo___ctor_34603756(v13, v20, v21, 0);
LABEL_23:
    items = list->fields._items;
    v23 = Method_System_Collections_Generic_List_QuestUseItemInfo__Add__;
    ++list->fields._version;
    if ( items )
    {
      size = list->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)list,
          (Il2CppObject *)v13,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        list->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v13;
        sub_1C32BC4((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v13, v18, v19);
      }
      if ( v13 )
        goto LABEL_28;
    }
    goto LABEL_30;
  }
LABEL_28:
  v13->fields._InterruptionUseFlag_k__BackingField = 1;
}


void PartyOrganizationUtility___SaveQuestUseItemUseState_b__129_0(
        PartyOrganizationUtility_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x22
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  QuestUseItemInfo_o **v9; // x20
  int v10; // w25
  bool IsGroupItem; // w0
  struct System_Collections_Generic_List_int____o *questUseItemStateList; // x21
  bool v13; // w24
  System_Func_object__bool__o *v14; // x0
  System_Func_TSource__bool__o *v15; // x23
  intptr_t *v16; // x8
  System_Collections_Generic_List_object__o *v17; // x19
  Il2CppObject *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t Id_k__BackingField; // w9
  unsigned int monitor; // w8
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4C336D7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_int_____);
    sub_1C32C20(&System_Func_int____bool__TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__DisplayClass129_0__SaveQuestUseItemUseState_b__2__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__DisplayClass129_0__SaveQuestUseItemUseState_b__3__);
    sub_1C32C20(&PartyOrganizationUtility___c__DisplayClass129_0_TypeInfo);
    byte_4C336D7 = 1;
  }
  v5 = sub_1C32E6C(PartyOrganizationUtility___c__DisplayClass129_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 16) = info;
  v9 = (QuestUseItemInfo_o **)(v5 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)info, v7, v8);
  v6 = *(Il2CppObject **)(v5 + 16);
  if ( !v6 )
    goto LABEL_26;
  v10 = BYTE4(v6[5].monitor);
  IsGroupItem = QuestUseItemInfo__get_IsGroupItem((QuestUseItemInfo_o *)v6, 0);
  questUseItemStateList = this->fields.questUseItemStateList;
  v13 = IsGroupItem;
  v14 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_int____bool__TypeInfo);
  v15 = (System_Func_TSource__bool__o *)v14;
  if ( v13 )
    v16 = &Method_PartyOrganizationUtility___c__DisplayClass129_0__SaveQuestUseItemUseState_b__2__;
  else
    v16 = &Method_PartyOrganizationUtility___c__DisplayClass129_0__SaveQuestUseItemUseState_b__3__;
  System_Func_object__bool____ctor(v14, (Il2CppObject *)v5, *v16, 0);
  v6 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
         (System_Collections_Generic_IEnumerable_TSource__o *)questUseItemStateList,
         v15,
         (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_int_____);
  if ( v6 )
  {
    if ( LODWORD(v6[1].monitor) > 2 )
    {
      LODWORD(v6[2].monitor) = v10;
      return;
    }
LABEL_27:
    sub_1C32E84(v6);
  }
  v17 = (System_Collections_Generic_List_object__o *)this->fields.questUseItemStateList;
  v6 = (Il2CppObject *)sub_1C32CC8(int___TypeInfo, 3);
  if ( !*v9 )
    goto LABEL_26;
  v18 = v6;
  v6 = (Il2CppObject *)QuestUseItemInfo__get_IsGroupItem(*v9, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    Id_k__BackingField = 0;
  }
  else
  {
    if ( !*v9 )
      goto LABEL_26;
    Id_k__BackingField = (*v9)->fields._Id_k__BackingField;
  }
  if ( !v18 )
    goto LABEL_26;
  monitor = (unsigned int)v18[1].monitor;
  if ( !monitor )
    goto LABEL_27;
  LODWORD(v18[2].klass) = Id_k__BackingField;
  if ( !*v9 )
    goto LABEL_26;
  if ( monitor <= 1 )
    goto LABEL_27;
  HIDWORD(v18[2].klass) = (*v9)->fields._GroupId_k__BackingField;
  if ( monitor == 2 )
    goto LABEL_27;
  LODWORD(v18[2].monitor) = v10;
  if ( !v17
    || (items = v17->fields._items,
        v24 = Method_System_Collections_Generic_List_int____Add__,
        ++v17->fields._version,
        !items) )
  {
LABEL_26:
    sub_1C32E7C(v6);
  }
  size = v17->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      v18,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v18;
    sub_1C32BC4((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v18, v19, v20);
  }
}


PartyListViewItem_o *PartyOrganizationUtility__get_BasePartyItem(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._BasePartyItem_k__BackingField;
}


int32_t PartyOrganizationUtility__get_CachedQuestId(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  return this->fields._CachedQuestId_k__BackingField;
}


int32_t PartyOrganizationUtility__get_CachedQuestPhase(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  return this->fields._CachedQuestPhase_k__BackingField;
}


int32_t PartyOrganizationUtility__get_CachedWarId(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  return this->fields._CachedWarId_k__BackingField;
}


bool PartyOrganizationUtility__get_IsExitPartyOrganization(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  return this->fields._IsExitPartyOrganization_k__BackingField;
}


bool PartyOrganizationUtility__get_IsForceDisableSupportSelectBackBtn(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._IsForceDisableSupportSelectBackBtn_k__BackingField;
}


bool PartyOrganizationUtility__get_IsNormalFlowQuest(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  return this->fields._IsNormalFlowQuest_k__BackingField;
}


bool PartyOrganizationUtility__get_IsQuestStartMenuMode(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  return this->fields._IsQuestStartMenuMode_k__BackingField;
}


bool PartyOrganizationUtility__get_IsQuestStartedMenuMode(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  return this->fields._IsQuestStartedMenuMode_k__BackingField;
}


bool PartyOrganizationUtility__get_IsWaveBattleRestart(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  return this->fields._IsWaveBattleRestart_k__BackingField;
}


PartyListViewItem_o *PartyOrganizationUtility__get_PartyItem(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._PartyItem_k__BackingField;
}


PartyListViewItem_o *PartyOrganizationUtility__get_PartyItemSmc(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._PartyItemSmc_k__BackingField;
}


int32_t PartyOrganizationUtility__get_SelectEquipNumber(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  return this->fields._SelectEquipNumber_k__BackingField;
}


int32_t PartyOrganizationUtility__get_SelectedInitPosition(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  return this->fields._SelectedInitPosition_k__BackingField;
}


int32_t PartyOrganizationUtility__get_SelectedNormalFollowerClassId(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectedNormalFollowerClassId_k__BackingField;
}


int32_t PartyOrganizationUtility__get_SelectedNormalFollowerDeckId(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectedNormalFollowerDeckId_k__BackingField;
}


int32_t PartyOrganizationUtility__get_SelectedNormalFollowerGrandGraphId(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectedNormalFollowerGrandGraphId_k__BackingField;
}


int32_t PartyOrganizationUtility__get_SelectedPartyMemberPosition(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectedPartyMemberPosition_k__BackingField;
}


int32_t PartyOrganizationUtility__get_SelectedPartyPosition(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  return this->fields._SelectedPartyPosition_k__BackingField;
}


System_String_o *PartyOrganizationUtility__get_TransitionDestinationFromDetail(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._TransitionDestinationFromDetail_k__BackingField;
}


int32_t PartyOrganizationUtility__get_WaveBattleRestartWave(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  return this->fields._WaveBattleRestartWave_k__BackingField;
}


int64_t PartyOrganizationUtility__get_WaveBattleStartTime(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  return this->fields._WaveBattleStartTime_k__BackingField;
}


void PartyOrganizationUtility__set_BasePartyItem(
        PartyOrganizationUtility_o *this,
        PartyListViewItem_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BasePartyItem_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._BasePartyItem_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void PartyOrganizationUtility__set_CachedQuestId(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CachedQuestId_k__BackingField = value;
}


void PartyOrganizationUtility__set_CachedQuestPhase(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CachedQuestPhase_k__BackingField = value;
}


void PartyOrganizationUtility__set_CachedWarId(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CachedWarId_k__BackingField = value;
}


void PartyOrganizationUtility__set_IsExitPartyOrganization(
        PartyOrganizationUtility_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsExitPartyOrganization_k__BackingField = value;
}


void PartyOrganizationUtility__set_IsForceDisableSupportSelectBackBtn(
        PartyOrganizationUtility_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsForceDisableSupportSelectBackBtn_k__BackingField = value;
}


void PartyOrganizationUtility__set_IsNormalFlowQuest(
        PartyOrganizationUtility_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNormalFlowQuest_k__BackingField = value;
}


void PartyOrganizationUtility__set_IsQuestStartMenuMode(
        PartyOrganizationUtility_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsQuestStartMenuMode_k__BackingField = value;
}


void PartyOrganizationUtility__set_IsQuestStartedMenuMode(
        PartyOrganizationUtility_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsQuestStartedMenuMode_k__BackingField = value;
}


void PartyOrganizationUtility__set_IsWaveBattleRestart(
        PartyOrganizationUtility_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsWaveBattleRestart_k__BackingField = value;
}


void PartyOrganizationUtility__set_PartyItem(
        PartyOrganizationUtility_o *this,
        PartyListViewItem_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._PartyItem_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._PartyItem_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void PartyOrganizationUtility__set_PartyItemSmc(
        PartyOrganizationUtility_o *this,
        PartyListViewItem_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._PartyItemSmc_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._PartyItemSmc_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void PartyOrganizationUtility__set_SelectEquipNumber(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectEquipNumber_k__BackingField = value;
}


void PartyOrganizationUtility__set_SelectedInitPosition(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectedInitPosition_k__BackingField = value;
}


void PartyOrganizationUtility__set_SelectedNormalFollowerClassId(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectedNormalFollowerClassId_k__BackingField = value;
}


void PartyOrganizationUtility__set_SelectedNormalFollowerDeckId(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectedNormalFollowerDeckId_k__BackingField = value;
}


void PartyOrganizationUtility__set_SelectedNormalFollowerGrandGraphId(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectedNormalFollowerGrandGraphId_k__BackingField = value;
}


void PartyOrganizationUtility__set_SelectedPartyMemberPosition(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectedPartyMemberPosition_k__BackingField = value;
}


void PartyOrganizationUtility__set_SelectedPartyPosition(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectedPartyPosition_k__BackingField = value;
}


void PartyOrganizationUtility__set_TransitionDestinationFromDetail(
        PartyOrganizationUtility_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._TransitionDestinationFromDetail_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._TransitionDestinationFromDetail_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void PartyOrganizationUtility__set_WaveBattleRestartWave(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._WaveBattleRestartWave_k__BackingField = value;
}


void PartyOrganizationUtility__set_WaveBattleStartTime(
        PartyOrganizationUtility_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._WaveBattleStartTime_k__BackingField = value;
}


void PartyOrganizationUtility_TemporaryPartyInfo___ctor(
        PartyOrganizationUtility_TemporaryPartyInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PartyOrganizationUtility___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C336D8 & 1) == 0 )
  {
    sub_1C32C20(&PartyOrganizationUtility___c_TypeInfo);
    byte_4C336D8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(PartyOrganizationUtility___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyOrganizationUtility___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationUtility___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)PartyOrganizationUtility___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void PartyOrganizationUtility___c___ctor(PartyOrganizationUtility___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationUtility___c___GetAdjustUpValInfoArray_b__130_0(
        PartyOrganizationUtility___c_o *this,
        EventMargeItemUpValInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return !x->fields.isInvalid;
}


bool PartyOrganizationUtility___c___GetCachedAvailableQuestUseItems_b__122_0(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C32E7C(this);
  return info->fields._IsValid_k__BackingField;
}


bool PartyOrganizationUtility___c___GetNeedAddAnnotationSkillIds_b__131_0(
        PartyOrganizationUtility___c_o *this,
        System_Collections_Generic_KeyValuePair_int__List_int___o keyValuePair,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *value; // x19

  value = keyValuePair.fields.value;
  if ( (byte_4C336DB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    this = (PartyOrganizationUtility___c_o *)sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_4C336DB = 1;
  }
  if ( !value )
    sub_1C32E7C(this);
  return value->fields._size > 1;
}


bool PartyOrganizationUtility___c___GetNeedAddAnnotationSkillIds_b__131_1(
        PartyOrganizationUtility___c_o *this,
        System_Collections_Generic_KeyValuePair_int__List_int___o keyValuePair,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *value; // x19

  value = keyValuePair.fields.value;
  if ( (byte_4C336DC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    this = (PartyOrganizationUtility___c_o *)sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_4C336DC = 1;
  }
  if ( !value )
    sub_1C32E7C(this);
  return value->fields._size > 1;
}


int32_t PartyOrganizationUtility___c___GetQuestUseItemIds_b__127_1(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C32E7C(this);
  return info->fields._NotDuplicationGroupId_k__BackingField;
}


System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *PartyOrganizationUtility___c___GetQuestUseItemIds_b__127_2(
        PartyOrganizationUtility___c_o *this,
        System_Linq_IGrouping_int__QuestUseItemInfo__o *group,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__QuestUseItemInfo__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0
  PartyOrganizationUtility___c_c *v8; // x0
  System_Func_object__int__o *_9__127_4; // x20
  Il2CppObject *v10; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v14; // x0
  PartyOrganizationUtility___c_c *v15; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v16; // x19
  System_Func_object__long__o *_9__127_5; // x20
  Il2CppObject *v18; // x21
  struct PartyOrganizationUtility___c_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_4C336DA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_AsEnumerable_QuestUseItemInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_QuestUseItemInfo__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Take_QuestUseItemInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ThenBy_QuestUseItemInfo__long___);
    sub_1C32C20(&System_Func_QuestUseItemInfo__long__TypeInfo);
    sub_1C32C20(&System_Func_QuestUseItemInfo__int__TypeInfo);
    sub_1C32C20(&System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__127_4__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__127_5__);
    this = (PartyOrganizationUtility___c_o *)sub_1C32C20(&PartyOrganizationUtility___c_TypeInfo);
    byte_4C336DA = 1;
  }
  if ( !group )
    sub_1C32E7C(this);
  klass = group->klass;
  v5 = *(unsigned __int16 *)&group->klass->_2.rank;
  if ( *(_WORD *)&group->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__QuestUseItemInfo__c **)p_offset - 1) != System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C83438(group, System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo, 0);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__QuestUseItemInfo__o *, _QWORD))v7)(
          group,
          *(_QWORD *)(v7 + 8)) )
    return (System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *)System_Linq_Enumerable__AsEnumerable_object_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)group,
                                                                           (const MethodInfo_30EB9A0 *)Method_System_Linq_Enumerable_AsEnumerable_QuestUseItemInfo___);
  v8 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v8 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__127_4 = (System_Func_object__int__o *)v8->static_fields->__9__127_4;
  if ( !_9__127_4 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = PartyOrganizationUtility___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__127_4 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__127_4,
      v10,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__127_4__,
      0);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__127_4 = (struct System_Func_QuestUseItemInfo__int__o *)_9__127_4;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__127_4, (int32_t)_9__127_4, v12, v13);
  }
  v14 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)group,
          (System_Func_TSource__TKey__o *)_9__127_4,
          (const MethodInfo_310D0C4 *)Method_System_Linq_Enumerable_OrderByDescending_QuestUseItemInfo__int___);
  v15 = PartyOrganizationUtility___c_TypeInfo;
  v16 = v14;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v15 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__127_5 = (System_Func_object__long__o *)v15->static_fields->__9__127_5;
  if ( !_9__127_5 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = PartyOrganizationUtility___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__127_5 = (System_Func_object__long__o *)sub_1C32E6C(System_Func_QuestUseItemInfo__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__127_5,
      v18,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__127_5__,
      0);
    v19 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v19->__9__127_5 = (struct System_Func_QuestUseItemInfo__long__o *)_9__127_5;
    sub_1C32BC4((CGThumbnailListItem_o *)&v19->__9__127_5, (int32_t)_9__127_5, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__long_(
                                                               v16,
                                                               (System_Func_TSource__TKey__o *)_9__127_5,
                                                               (const MethodInfo_311BCBC *)Method_System_Linq_Enumerable_ThenBy_QuestUseItemInfo__long___);
  return (System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *)System_Linq_Enumerable__Take_object_(
                                                                         v22,
                                                                         1,
                                                                         (const MethodInfo_311B378 *)Method_System_Linq_Enumerable_Take_QuestUseItemInfo___);
}


int32_t PartyOrganizationUtility___c___GetQuestUseItemIds_b__127_3(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C32E7C(this);
  return info->fields._Id_k__BackingField;
}


int32_t PartyOrganizationUtility___c___GetQuestUseItemIds_b__127_4(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C32E7C(this);
  return info->fields._Value_k__BackingField;
}


int64_t PartyOrganizationUtility___c___GetQuestUseItemIds_b__127_5(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C32E7C(this);
  return info->fields._EndedAt_k__BackingField;
}


System_Collections_Generic_IEnumerable_int__o *PartyOrganizationUtility___c___GetQuestUseItems_b__119_0(
        PartyOrganizationUtility___c_o *this,
        EventCampaignEntity_o *eventCampaignEntity,
        const MethodInfo *method)
{
  if ( !eventCampaignEntity )
    sub_1C32E7C(this);
  return (System_Collections_Generic_IEnumerable_int__o *)eventCampaignEntity->fields.targetIds;
}


bool PartyOrganizationUtility___c___GetQuestUseItems_b__119_3(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C32E7C(this);
  return !info->fields._IsFriendshipUpEventItem_k__BackingField || QuestUseItemInfo__IsObtained(info, 0);
}


int32_t PartyOrganizationUtility___c___GetQuestUseItems_b__119_4(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C32E7C(this);
  return info->fields._GroupId_k__BackingField;
}


System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *PartyOrganizationUtility___c___GetQuestUseItems_b__119_5(
        PartyOrganizationUtility___c_o *this,
        System_Linq_IGrouping_int__QuestUseItemInfo__o *itemInfoGroup,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__QuestUseItemInfo__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0
  PartyOrganizationUtility___c_c *v8; // x0
  System_Func_object__long__o *_9__119_8; // x20
  Il2CppObject *v10; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v14; // x0
  PartyOrganizationUtility___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_T1__T2__TResult__o *_9__119_9; // x20
  Il2CppObject *v18; // x21
  struct PartyOrganizationUtility___c_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x20
  System_Collections_Generic_List_object__o *v23; // x19
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4C336D9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Aggregate_QuestUseItemInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_AsEnumerable_QuestUseItemInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_QuestUseItemInfo__long___);
    sub_1C32C20(&System_Func_QuestUseItemInfo__long__TypeInfo);
    sub_1C32C20(&System_Func_QuestUseItemInfo__QuestUseItemInfo__QuestUseItemInfo__TypeInfo);
    sub_1C32C20(&System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestUseItemInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestUseItemInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_QuestUseItemInfo__TypeInfo);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__119_8__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__119_9__);
    this = (PartyOrganizationUtility___c_o *)sub_1C32C20(&PartyOrganizationUtility___c_TypeInfo);
    byte_4C336D9 = 1;
  }
  if ( !itemInfoGroup )
    goto LABEL_30;
  klass = itemInfoGroup->klass;
  v5 = *(unsigned __int16 *)&itemInfoGroup->klass->_2.rank;
  if ( *(_WORD *)&itemInfoGroup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__QuestUseItemInfo__c **)p_offset - 1) != System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C83438(itemInfoGroup, System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo, 0);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__QuestUseItemInfo__o *, _QWORD))v7)(
          itemInfoGroup,
          *(_QWORD *)(v7 + 8)) )
    return (System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *)System_Linq_Enumerable__AsEnumerable_object_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)itemInfoGroup,
                                                                           (const MethodInfo_30EB9A0 *)Method_System_Linq_Enumerable_AsEnumerable_QuestUseItemInfo___);
  v8 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v8 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__119_8 = (System_Func_object__long__o *)v8->static_fields->__9__119_8;
  if ( !_9__119_8 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = PartyOrganizationUtility___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__119_8 = (System_Func_object__long__o *)sub_1C32E6C(System_Func_QuestUseItemInfo__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__119_8,
      v10,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__119_8__,
      0);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__119_8 = (struct System_Func_QuestUseItemInfo__long__o *)_9__119_8;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__119_8, (int32_t)_9__119_8, v12, v13);
  }
  v14 = System_Linq_Enumerable__OrderBy_object__long_(
          (System_Collections_Generic_IEnumerable_TSource__o *)itemInfoGroup,
          (System_Func_TSource__TKey__o *)_9__119_8,
          (const MethodInfo_310CBB0 *)Method_System_Linq_Enumerable_OrderBy_QuestUseItemInfo__long___);
  v15 = PartyOrganizationUtility___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v15 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__119_9 = (System_Func_T1__T2__TResult__o *)v15->static_fields->__9__119_9;
  if ( !_9__119_9 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = PartyOrganizationUtility___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__119_9 = (System_Func_T1__T2__TResult__o *)sub_1C32E6C(System_Func_QuestUseItemInfo__QuestUseItemInfo__QuestUseItemInfo__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__119_9,
      v18,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__119_9__,
      0);
    v19 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v19->__9__119_9 = (struct System_Func_QuestUseItemInfo__QuestUseItemInfo__QuestUseItemInfo__o *)_9__119_9;
    sub_1C32BC4((CGThumbnailListItem_o *)&v19->__9__119_9, (int32_t)_9__119_9, v20, v21);
  }
  v22 = System_Linq_Enumerable__Aggregate_object_(
          v16,
          (System_Func_TSource__TSource__TSource__o *)_9__119_9,
          (const MethodInfo_30E4D28 *)Method_System_Linq_Enumerable_Aggregate_QuestUseItemInfo___);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_QuestUseItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_QuestUseItemInfo___ctor__);
  if ( !v23
    || (items = v23->fields._items,
        v27 = Method_System_Collections_Generic_List_QuestUseItemInfo__Add__,
        ++v23->fields._version,
        !items) )
  {
LABEL_30:
    sub_1C32E7C(this);
  }
  size = v23->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v23,
      v22,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v23->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v22;
    sub_1C32BC4((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v22, v24, v25);
  }
  return (System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *)v23;
}


int32_t PartyOrganizationUtility___c___GetQuestUseItems_b__119_7(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C32E7C(this);
  return info->fields._Priority_k__BackingField;
}


int64_t PartyOrganizationUtility___c___GetQuestUseItems_b__119_8(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemEntity,
        const MethodInfo *method)
{
  if ( !itemEntity )
    sub_1C32E7C(this);
  return itemEntity->fields._EndedAt_k__BackingField;
}


QuestUseItemInfo_o *PartyOrganizationUtility___c___GetQuestUseItems_b__119_9(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *result,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  int32_t Num_k__BackingField; // w8
  QuestUseItemInfo_o *v5; // x0

  if ( !result )
LABEL_9:
    sub_1C32E7C(this);
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


bool PartyOrganizationUtility___c___OpenQuestUseItemDialogTutorial_b__126_0(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1C32E7C(this);
  return itemInfo->fields._IsValid_k__BackingField;
}


int32_t PartyOrganizationUtility___c___OpenQuestUseItemDialogTutorial_b__126_1(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C32E7C(this);
  return info->fields._TutorialEventId_k__BackingField;
}


bool PartyOrganizationUtility___c___OpenQuestUseItemExpiredDialog_b__125_0(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1C32E7C(this);
  return itemInfo->fields._IsValid_k__BackingField;
}


bool PartyOrganizationUtility___c___OpenQuestUseItemExpiredDialog_b__125_1(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1C32E7C(this);
  return QuestUseItemInfo__GetUseFlag(itemInfo, 0) && !QuestUseItemInfo__IsEventPeriod(itemInfo, 0);
}


int32_t PartyOrganizationUtility___c___OpenQuestUseItemExpiredDialog_b__125_2(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1C32E7C(this);
  return itemInfo->fields._BasePriority_k__BackingField;
}


System_Collections_Generic_IEnumerable_int__o *PartyOrganizationUtility___c___SaveQuestUseItemUseState_b__129_1(
        PartyOrganizationUtility___c_o *this,
        System_Int32_array *i,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IEnumerable_int__o *)i;
}


void PartyOrganizationUtility___c__DisplayClass118_0___ctor(
        PartyOrganizationUtility___c__DisplayClass118_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationUtility___c__DisplayClass118_0___GetAvailableQuestUseItemEventCampaignEntities_b__2(
        PartyOrganizationUtility___c__DisplayClass118_0_o *this,
        EventCampaignEntity_o *e,
        const MethodInfo *method)
{
  if ( !e || (this = (PartyOrganizationUtility___c__DisplayClass118_0_o *)this->fields.releaseMaster) == 0 )
    sub_1C32E7C(this);
  return EventCampaignReleaseMaster__isRelease(
           (EventCampaignReleaseMaster_o *)this,
           e->fields.eventId,
           e->fields.target,
           0);
}


bool PartyOrganizationUtility___c__DisplayClass118_0___GetAvailableQuestUseItemEventCampaignEntities_b__3(
        PartyOrganizationUtility___c__DisplayClass118_0_o *this,
        EventCampaignEntity_o *eventCampaignEntity,
        const MethodInfo *method)
{
  if ( !eventCampaignEntity )
    sub_1C32E7C(this);
  return !PartyOrganizationUtility___c__DisplayClass118_0___GetAvailableQuestUseItemEventCampaignEntities_g__IsExceptedByEventQuestMaster_0(
            this,
            eventCampaignEntity->fields.eventId,
            method);
}


bool PartyOrganizationUtility___c__DisplayClass118_0___GetAvailableQuestUseItemEventCampaignEntities_b__4(
        PartyOrganizationUtility___c__DisplayClass118_0_o *this,
        EventCampaignEntity_o *eventCampaignEntity,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c__DisplayClass118_0_o *v4; // x19
  System_Int32_array *warGroupIds; // x21
  System_Func_int__bool__o *v7; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  System_Func_int__bool__o *_9__6; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  v4 = this;
  if ( (byte_4C336DE & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int____78062168);
    sub_1C32C20(&Method_System_Linq_Enumerable_All_int___);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__DisplayClass118_0__GetAvailableQuestUseItemEventCampaignEntities_b__6__);
    this = (PartyOrganizationUtility___c__DisplayClass118_0_o *)sub_1C32C20(&Method_PartyOrganizationUtility___c__DisplayClass118_0__GetAvailableQuestUseItemEventCampaignEntities_g__IsMatchWarId_1__);
    byte_4C336DE = 1;
  }
  if ( !eventCampaignEntity )
    sub_1C32E7C(this);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventCampaignEntity->fields.warGroupIds, 0) )
    return 1;
  warGroupIds = eventCampaignEntity->fields.warGroupIds;
  v7 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v7,
    (Il2CppObject *)v4,
    Method_PartyOrganizationUtility___c__DisplayClass118_0__GetAvailableQuestUseItemEventCampaignEntities_g__IsMatchWarId_1__,
    0);
  if ( !BasicHelper__Any_int__51143952(
          warGroupIds,
          (System_Func_T__bool__o *)v7,
          (const MethodInfo_30C6510 *)Method_BasicHelper_Any_int____78062168) )
    return 0;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)eventCampaignEntity->fields.warGroupIds;
  _9__6 = v4->fields.__9__6;
  if ( !_9__6 )
  {
    _9__6 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__6,
      (Il2CppObject *)v4,
      Method_PartyOrganizationUtility___c__DisplayClass118_0__GetAvailableQuestUseItemEventCampaignEntities_b__6__,
      0);
    v4->fields.__9__6 = _9__6;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__9__6, (int32_t)_9__6, v10, v11);
  }
  return System_Linq_Enumerable__All_int_(
           v8,
           (System_Func_TSource__bool__o *)_9__6,
           (const MethodInfo_30E7248 *)Method_System_Linq_Enumerable_All_int___);
}


bool PartyOrganizationUtility___c__DisplayClass118_0___GetAvailableQuestUseItemEventCampaignEntities_b__5(
        PartyOrganizationUtility___c__DisplayClass118_0_o *this,
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
    sub_1C32E7C(this);
  if ( warGroupEntity->fields.questAfterClear == questEntity->fields.afterClear )
    return warGroupEntity->fields.questType == questEntity->fields.type;
  return 0;
}


bool PartyOrganizationUtility___c__DisplayClass118_0___GetAvailableQuestUseItemEventCampaignEntities_b__6(
        PartyOrganizationUtility___c__DisplayClass118_0_o *this,
        int32_t warGroupId,
        const MethodInfo *method)
{
  struct PartyOrganizationUtility_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (PartyOrganizationUtility___c__DisplayClass118_0_o *)this->fields.warGroupIgnoreMaster) == 0 )
    sub_1C32E7C(this);
  return !WarGroupIgnoreMaster__IsIgnoreQuest(
            (WarGroupIgnoreMaster_o *)this,
            warGroupId,
            _4__this->fields._CachedQuestId_k__BackingField,
            _4__this->fields._CachedQuestPhase_k__BackingField,
            0);
}


bool PartyOrganizationUtility___c__DisplayClass118_0___GetAvailableQuestUseItemEventCampaignEntities_g__IsExceptedByEventQuestMaster_0(
        PartyOrganizationUtility___c__DisplayClass118_0_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventQuestMaster_o *eventQuestMaster; // x0
  struct PartyOrganizationUtility_o *_4__this; // x8
  struct PartyOrganizationUtility_o *v7; // x8
  EventQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0;
  eventQuestMaster = this->fields.eventQuestMaster;
  if ( !eventQuestMaster )
    goto LABEL_15;
  eventQuestMaster = (EventQuestMaster_o *)EventQuestMaster__IsExistEvent(eventQuestMaster, eventId, 0);
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
                                             0);
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
                                             0);
  if ( ((unsigned __int8)eventQuestMaster & 1) != 0 )
    goto LABEL_11;
  eventQuestMaster = this->fields.eventQuestMaster;
  if ( !eventQuestMaster )
    goto LABEL_15;
  eventQuestMaster = (EventQuestMaster_o *)EventQuestMaster__TryGetEntity(eventQuestMaster, &entity, eventId, 0, 0, 0);
  if ( ((unsigned __int8)eventQuestMaster & 1) != 0 )
  {
LABEL_11:
    if ( entity )
      return entity->fields.isExcepted != 0;
LABEL_15:
    sub_1C32E7C(eventQuestMaster);
  }
  return 1;
}


bool PartyOrganizationUtility___c__DisplayClass118_0___GetAvailableQuestUseItemEventCampaignEntities_g__IsMatchWarId_1(
        PartyOrganizationUtility___c__DisplayClass118_0_o *this,
        int32_t warGroupId,
        const MethodInfo *method)
{
  WarGroupMaster_o *warGroupMaster; // x0
  System_Object_array *v6; // x20
  System_Func_object__bool__o *v7; // x21
  WarGroupEntity_array *entities; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C336DD & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_WarGroupEntity___);
    sub_1C32C20(&System_Func_WarGroupEntity__bool__TypeInfo);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__DisplayClass118_0__GetAvailableQuestUseItemEventCampaignEntities_b__5__);
    byte_4C336DD = 1;
  }
  entities = 0;
  warGroupMaster = this->fields.warGroupMaster;
  if ( !warGroupMaster )
    sub_1C32E7C(0);
  if ( WarGroupMaster__TryGetWarList(warGroupMaster, &entities, warGroupId, 0) )
  {
    v6 = (System_Object_array *)entities;
    v7 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v7,
      (Il2CppObject *)this,
      Method_PartyOrganizationUtility___c__DisplayClass118_0__GetAvailableQuestUseItemEventCampaignEntities_b__5__,
      0);
    return BasicHelper__Any_object__51144764(
             v6,
             (System_Func_T__bool__o *)v7,
             (const MethodInfo_30C683C *)Method_BasicHelper_Any_WarGroupEntity___);
  }
  else
  {
    return 0;
  }
}


void PartyOrganizationUtility___c__DisplayClass119_0___ctor(
        PartyOrganizationUtility___c__DisplayClass119_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


__f__AnonymousType4_EventCampaignEntity__ItemEntity__o *PartyOrganizationUtility___c__DisplayClass119_0___GetQuestUseItems_b__1(
        PartyOrganizationUtility___c__DisplayClass119_0_o *this,
        EventCampaignEntity_o *eventCampaignEntity,
        int32_t itemId,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c__DisplayClass119_0_o *v6; // x21
  Il2CppObject *ItemData; // x20
  __f__AnonymousType4__eventCampaignEntity_j__TPar___itemEntity_j__TPar__o *v8; // x21

  v6 = this;
  if ( (byte_4C336DF & 1) == 0 )
  {
    sub_1C32C20(&Method___f__AnonymousType4_EventCampaignEntity__ItemEntity___ctor__);
    this = (PartyOrganizationUtility___c__DisplayClass119_0_o *)sub_1C32C20(&_f__AnonymousType4_EventCampaignEntity__ItemEntity__TypeInfo);
    byte_4C336DF = 1;
  }
  if ( !eventCampaignEntity || (this = (PartyOrganizationUtility___c__DisplayClass119_0_o *)v6->fields.itemMaster) == 0 )
    sub_1C32E7C(this);
  ItemData = (Il2CppObject *)ItemMaster__GetItemData(
                               (ItemMaster_o *)this,
                               itemId,
                               eventCampaignEntity->fields.eventId,
                               0);
  v8 = (__f__AnonymousType4__eventCampaignEntity_j__TPar___itemEntity_j__TPar__o *)sub_1C32E6C(_f__AnonymousType4_EventCampaignEntity__ItemEntity__TypeInfo);
  _f__AnonymousType4_object__object____ctor(
    v8,
    (Il2CppObject *)eventCampaignEntity,
    ItemData,
    (const MethodInfo_32BCDCC *)Method___f__AnonymousType4_EventCampaignEntity__ItemEntity___ctor__);
  return (__f__AnonymousType4_EventCampaignEntity__ItemEntity__o *)v8;
}


void PartyOrganizationUtility___c__DisplayClass119_0___GetQuestUseItems_b__10(
        PartyOrganizationUtility___c__DisplayClass119_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !this->fields.__4__this )
    sub_1C32E7C(this);
  PartyOrganizationUtility__UpdateInterruptionUseItem((PartyOrganizationUtility_o *)this, this->fields.list, 36, id, v3);
}


QuestUseItemInfo_o *PartyOrganizationUtility___c__DisplayClass119_0___GetQuestUseItems_b__2(
        PartyOrganizationUtility___c__DisplayClass119_0_o *this,
        __f__AnonymousType4_EventCampaignEntity__ItemEntity__o *info,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c__DisplayClass119_0_o *v4; // x20
  UserItemMaster_o *userItemMaster; // x20
  struct ItemEntity_o *itemEntity_i__Field; // x8
  UserItemEntity_o *EntityDefinitely; // x0
  int32_t num; // w20
  EventCampaignEntity_o *eventCampaignEntity_i__Field; // x19
  ItemEntity_o *v11; // x21
  __f__AnonymousType4_EventCampaignEntity__ItemEntity__Fields *p_fields; // t2
  QuestUseItemInfo_o *v13; // x22

  v4 = this;
  if ( (byte_4C336E0 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&QuestUseItemInfo_TypeInfo);
    sub_1C32C20(&Method___f__AnonymousType4_EventCampaignEntity__ItemEntity__get_eventCampaignEntity__);
    this = (PartyOrganizationUtility___c__DisplayClass119_0_o *)sub_1C32C20(&Method___f__AnonymousType4_EventCampaignEntity__ItemEntity__get_itemEntity__);
    byte_4C336E0 = 1;
  }
  if ( !info )
    goto LABEL_19;
  if ( !info->fields._itemEntity_i__Field || !info->fields._eventCampaignEntity_i__Field )
    return 0;
  userItemMaster = v4->fields.userItemMaster;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  this = (PartyOrganizationUtility___c__DisplayClass119_0_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (PartyOrganizationUtility___c__DisplayClass119_0_o *)NetworkManager_TypeInfo;
  }
  itemEntity_i__Field = info->fields._itemEntity_i__Field;
  if ( !itemEntity_i__Field || !userItemMaster )
LABEL_19:
    sub_1C32E7C(this);
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       userItemMaster,
                       *(_QWORD *)&this[3].fields.list[1].fields._size,
                       itemEntity_i__Field->fields.id,
                       0);
  if ( EntityDefinitely )
    num = EntityDefinitely->fields.num;
  else
    num = 0;
  p_fields = &info->fields;
  eventCampaignEntity_i__Field = info->fields._eventCampaignEntity_i__Field;
  v11 = p_fields->_itemEntity_i__Field;
  v13 = (QuestUseItemInfo_o *)sub_1C32E6C(QuestUseItemInfo_TypeInfo);
  QuestUseItemInfo___ctor(v13, v11, num, eventCampaignEntity_i__Field, 0);
  return v13;
}


void PartyOrganizationUtility___c__DisplayClass119_0___GetQuestUseItems_b__6(
        PartyOrganizationUtility___c__DisplayClass119_0_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *IsGroupItem; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x19
  struct PartyOrganizationUtility_o *_4__this; // x8
  char v11; // w23
  System_Collections_Generic_IEnumerable_TSource__o *questUseItemStateList; // x20
  System_Func_object__bool__o *v13; // x0
  System_Func_TSource__bool__o *v14; // x22
  intptr_t *v15; // x8

  if ( (byte_4C336E1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_int_____);
    sub_1C32C20(&System_Func_int____bool__TypeInfo);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__DisplayClass119_1__GetQuestUseItems_b__11__);
    sub_1C32C20(&Method_PartyOrganizationUtility___c__DisplayClass119_1__GetQuestUseItems_b__12__);
    sub_1C32C20(&PartyOrganizationUtility___c__DisplayClass119_1_TypeInfo);
    byte_4C336E1 = 1;
  }
  v5 = sub_1C32E6C(PartyOrganizationUtility___c__DisplayClass119_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = info;
  v9 = v5 + 16;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)info, v7, v8);
  IsGroupItem = *(Il2CppObject **)(v5 + 16);
  if ( !IsGroupItem )
    goto LABEL_14;
  IsGroupItem = (Il2CppObject *)QuestUseItemInfo__get_IsGroupItem((QuestUseItemInfo_o *)IsGroupItem, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v11 = (char)IsGroupItem;
  questUseItemStateList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.questUseItemStateList;
  v13 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_int____bool__TypeInfo);
  v14 = (System_Func_TSource__bool__o *)v13;
  if ( (v11 & 1) != 0 )
    v15 = &Method_PartyOrganizationUtility___c__DisplayClass119_1__GetQuestUseItems_b__11__;
  else
    v15 = &Method_PartyOrganizationUtility___c__DisplayClass119_1__GetQuestUseItems_b__12__;
  System_Func_object__bool____ctor(v13, (Il2CppObject *)v5, *v15, 0);
  IsGroupItem = System_Linq_Enumerable__FirstOrDefault_object__51408536(
                  questUseItemStateList,
                  v14,
                  (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_int_____);
  if ( IsGroupItem )
  {
    if ( LODWORD(IsGroupItem[1].monitor) <= 2 )
      sub_1C32E84(IsGroupItem);
    if ( *(_QWORD *)v9 )
    {
      *(_BYTE *)(*(_QWORD *)v9 + 92LL) = LODWORD(IsGroupItem[2].monitor) == 1;
      return;
    }
LABEL_14:
    sub_1C32E7C(IsGroupItem);
  }
}


void PartyOrganizationUtility___c__DisplayClass119_1___ctor(
        PartyOrganizationUtility___c__DisplayClass119_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationUtility___c__DisplayClass119_1___GetQuestUseItems_b__11(
        PartyOrganizationUtility___c__DisplayClass119_1_o *this,
        System_Int32_array *list,
        const MethodInfo *method)
{
  struct QuestUseItemInfo_o *info; // x8

  if ( !list )
    goto LABEL_5;
  if ( LODWORD(list->max_length) <= 1 )
    sub_1C32E84(this);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1C32E7C(this);
  return list->m_Items[1] == info->fields._GroupId_k__BackingField;
}


bool PartyOrganizationUtility___c__DisplayClass119_1___GetQuestUseItems_b__12(
        PartyOrganizationUtility___c__DisplayClass119_1_o *this,
        System_Int32_array *list,
        const MethodInfo *method)
{
  struct QuestUseItemInfo_o *info; // x8

  if ( !list )
    goto LABEL_5;
  if ( !LODWORD(list->max_length) )
    sub_1C32E84(this);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1C32E7C(this);
  return list->m_Items[0] == info->fields._Id_k__BackingField;
}


void PartyOrganizationUtility___c__DisplayClass120_0___ctor(
        PartyOrganizationUtility___c__DisplayClass120_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationUtility___c__DisplayClass120_0___UpdateInterruptionUseItem_b__0(
        PartyOrganizationUtility___c__DisplayClass120_0_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C32E7C(this);
  return QuestUseItemInfo__CheckSameItem(info, this->fields.campaignType, this->fields.itemEntity, 0);
}


void PartyOrganizationUtility___c__DisplayClass125_0___ctor(
        PartyOrganizationUtility___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PartyOrganizationUtility___c__DisplayClass125_0___OpenQuestUseItemExpiredDialog_b__3(
        PartyOrganizationUtility___c__DisplayClass125_0_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *actionList; // x19
  System_Action_object__o *v6; // x20
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0

  if ( (byte_4C336E2 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_Action__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Action_Action___Add__);
    sub_1C32C20(&Method_QuestUseItemInfo_OpenExpiredDialog__);
    byte_4C336E2 = 1;
  }
  actionList = (System_Collections_Generic_List_object__o *)this->fields.actionList;
  v6 = (System_Action_object__o *)sub_1C32E6C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v6, (Il2CppObject *)itemInfo, Method_QuestUseItemInfo_OpenExpiredDialog__, 0);
  if ( !actionList
    || (items = actionList->fields._items,
        v11 = Method_System_Collections_Generic_List_Action_Action___Add__,
        ++actionList->fields._version,
        !items) )
  {
    sub_1C32E7C(v7);
  }
  size = actionList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      actionList,
      (Il2CppObject *)v6,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    actionList->fields._size = size + 1;
    v13[4] = (Il2CppClass *)v6;
    sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 4), (int32_t)v6, v8, v9);
  }
}


void PartyOrganizationUtility___c__DisplayClass127_0___ctor(
        PartyOrganizationUtility___c__DisplayClass127_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationUtility___c__DisplayClass127_0___GetQuestUseItemIds_b__0(
        PartyOrganizationUtility___c__DisplayClass127_0_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C32E7C(this);
  return info->fields._CampaignType_k__BackingField == this->fields.campaignType
      && info->fields._UseFlag_k__BackingField
      && info->fields._Num_k__BackingField > 0;
}


void PartyOrganizationUtility___c__DisplayClass129_0___ctor(
        PartyOrganizationUtility___c__DisplayClass129_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationUtility___c__DisplayClass129_0___SaveQuestUseItemUseState_b__2(
        PartyOrganizationUtility___c__DisplayClass129_0_o *this,
        System_Int32_array *list,
        const MethodInfo *method)
{
  struct QuestUseItemInfo_o *info; // x8

  if ( !list )
    goto LABEL_5;
  if ( LODWORD(list->max_length) <= 1 )
    sub_1C32E84(this);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1C32E7C(this);
  return list->m_Items[1] == info->fields._GroupId_k__BackingField;
}


bool PartyOrganizationUtility___c__DisplayClass129_0___SaveQuestUseItemUseState_b__3(
        PartyOrganizationUtility___c__DisplayClass129_0_o *this,
        System_Int32_array *list,
        const MethodInfo *method)
{
  struct QuestUseItemInfo_o *info; // x8

  if ( !list )
    goto LABEL_5;
  if ( !LODWORD(list->max_length) )
    sub_1C32E84(this);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1C32E7C(this);
  return list->m_Items[0] == info->fields._Id_k__BackingField;
}