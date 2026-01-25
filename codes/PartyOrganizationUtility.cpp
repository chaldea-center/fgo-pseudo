void PartyOrganizationUtility___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4CEA231 & 1) == 0 )
  {
    sub_1C7BAE8(&PartyOrganizationUtility_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10979/*"QuestUseItem"*/);
    byte_4CEA231 = 1;
  }
  PartyOrganizationUtility_TypeInfo->static_fields->SAVE_KEY_QUEST_USE_ITEM = (struct System_String_o *)StringLiteral_10979/*"QuestUseItem"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)PartyOrganizationUtility_TypeInfo->static_fields,
    StringLiteral_10979/*"QuestUseItem"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void PartyOrganizationUtility___ctor(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct QuestUseItemInfo_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4CEA230 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&QuestUseItemInfo___TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
    byte_4CEA230 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  this->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v10;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._npcFollowerInfos,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (struct QuestUseItemInfo_array *)sub_1C7BB90(QuestUseItemInfo___TypeInfo, 0);
  this->fields.cachedQuestUseItemInfoList = v17;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.cachedQuestUseItemInfoList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.questUseItemStateList = (struct System_Collections_Generic_List_int____o *)v24;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questUseItemStateList,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_3A8CB90 *)Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
}


void PartyOrganizationUtility__CacheQuestUseItems(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  struct QuestUseItemInfo_array *QuestUseItems; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  QuestUseItems = PartyOrganizationUtility__GetQuestUseItems(this, method);
  this->fields.cachedQuestUseItemInfoList = QuestUseItems;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.cachedQuestUseItemInfoList,
    (int32_t)QuestUseItems,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void PartyOrganizationUtility__ClearConfirmedNormalFollowerInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct FollowerInfo_o **p_ConfirmedNormalFollowerInfo_k__BackingField; // x19

  this->fields._ConfirmedNormalFollowerInfo_k__BackingField = 0;
  p_ConfirmedNormalFollowerInfo_k__BackingField = &this->fields._ConfirmedNormalFollowerInfo_k__BackingField;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ConfirmedNormalFollowerInfo_k__BackingField,
    0,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  p_ConfirmedNormalFollowerInfo_k__BackingField[1] = 0;
  *((_DWORD *)p_ConfirmedNormalFollowerInfo_k__BackingField + 4) = 0;
}


void PartyOrganizationUtility__ClearFollowerInfo(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  PartyOrganizationUtility_o *v8; // x19
  const MethodInfo *v9; // x2
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  v8 = this;
  this->fields._normalFollowerInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields._normalFollowerInfo, 0, v2, v3, v4, v5, v6, v7);
  *(_QWORD *)&v8->fields._SelectedNormalFollowerClassId_k__BackingField = 0;
  v8->fields._SelectedNormalFollowerDeckId_k__BackingField = 0;
  PartyOrganizationUtility__ClearNpcFollowerInfo(v8, -1, v9);
  v8->fields._ConfirmedNormalFollowerInfo_k__BackingField = 0;
  v8 = (PartyOrganizationUtility_o *)((char *)v8 + 48);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v8, 0, v10, v11, v12, v13, v14, v15);
  v8->monitor = 0;
  LODWORD(v8->fields.restrictionDialogHistoryList) = 0;
}


void PartyOrganizationUtility__ClearNormalFollowerInfo(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct FollowerInfo_o **p_normalFollowerInfo; // x19

  this->fields._normalFollowerInfo = 0;
  p_normalFollowerInfo = &this->fields._normalFollowerInfo;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields._normalFollowerInfo, 0, v2, v3, v4, v5, v6, v7);
  p_normalFollowerInfo[1] = 0;
  *((_DWORD *)p_normalFollowerInfo + 4) = 0;
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationUtility__ClearNpcFollowerInfo(
        PartyOrganizationUtility_o *this,
        int32_t key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcFollowerInfos; // x0

  if ( (byte_4CEA21A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
    byte_4CEA21A = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_1C7BD40(0, *(_QWORD *)&key);
  if ( key < 0 )
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
      (const MethodInfo_3487898 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
  else
    System_Collections_Generic_Dictionary_int__object___Remove(
      (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
      key,
      (const MethodInfo_3488B98 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
}


void PartyOrganizationUtility__ClearQuestUseItemCache(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  struct QuestUseItemInfo_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CEA21B & 1) == 0 )
  {
    sub_1C7BAE8(&QuestUseItemInfo___TypeInfo);
    byte_4CEA21B = 1;
  }
  v3 = (struct QuestUseItemInfo_array *)sub_1C7BB90(QuestUseItemInfo___TypeInfo, 0);
  this->fields.cachedQuestUseItemInfoList = v3;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.cachedQuestUseItemInfoList,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void PartyOrganizationUtility__ClearTempWaveInfoList(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  int32_t size; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Collections_Generic_List_BattleWaveInfoData__o *v9; // x8
  GrandQuestFolderBoardItem_o *p_tempInterruptionWaveInfoList; // x19
  struct System_Collections_Generic_List_BattleWaveInfoData__o *tempInterruptionWaveInfoList; // t1
  int v12; // w9

  if ( (byte_4CEA22C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleWaveInfoData__Clear__);
    byte_4CEA22C = 1;
  }
  tempInterruptionWaveInfoList = this->fields.tempInterruptionWaveInfoList;
  p_tempInterruptionWaveInfoList = (GrandQuestFolderBoardItem_o *)&this->fields.tempInterruptionWaveInfoList;
  v9 = tempInterruptionWaveInfoList;
  if ( tempInterruptionWaveInfoList )
  {
    size = v9->fields._size;
    v12 = v9->fields._version + 1;
    v9->fields._size = 0;
    v9->fields._version = v12;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0);
  }
  p_tempInterruptionWaveInfoList->klass = 0;
  sub_1C7BA8C(p_tempInterruptionWaveInfoList, 0, size, v3, v4, v5, v6, v7);
}


void PartyOrganizationUtility__ClearTemporaryPartyInfo(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *v9; // x0
  GrandQuestFolderBoardItem_o *p_temporaryPartyInfo; // x19
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *temporaryPartyInfo; // t1
  int32_t v12; // w1
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  GrandQuestFolderBoardItem_c *klass; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  GrandQuestFolderBoardItem_o *p_parent; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7

  if ( (byte_4CEA213 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEA213 = 1;
  }
  temporaryPartyInfo = this->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (GrandQuestFolderBoardItem_o *)&this->fields.temporaryPartyInfo;
  v9 = temporaryPartyInfo;
  if ( temporaryPartyInfo )
  {
    v9->fields.userServantId = 0;
    v9->fields.userEquipId = 0;
    v9->fields.deckNumber = -1;
    v12 = StringLiteral_1/*""*/;
    v9->fields.bgmName = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v9->fields.bgmName, v12, v2, v3, v4, v5, v6, v7);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    klass->_1.this_arg.data = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&klass->_1.this_arg, 0, v14, v15, v16, v17, v18, v19);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    *(_QWORD *)&klass->_1.this_arg.bits = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&klass->_1.this_arg.bits, 0, v21, v22, v23, v24, v25, v26);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass
      || (klass->_1.element_class = 0,
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&klass->_1.element_class, 0, v27, v28, v29, v30, v31, v32),
          (klass = p_temporaryPartyInfo->klass) == 0)
      || (klass->_1.castClass = 0,
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&klass->_1.castClass, 0, v33, v34, v35, v36, v37, v38),
          (klass = p_temporaryPartyInfo->klass) == 0) )
    {
LABEL_11:
      sub_1C7BD40(klass, v13);
    }
    klass->_1.parent = 0;
    p_parent = (GrandQuestFolderBoardItem_o *)&klass->_1.parent;
    LODWORD(p_parent[-1].fields._ClosedMessage_k__BackingField) = -1;
    sub_1C7BA8C(p_parent, 0, v39, v40, v41, v42, v43, v44);
    p_temporaryPartyInfo->klass = 0;
    sub_1C7BA8C(p_temporaryPartyInfo, 0, v46, v47, v48, v49, v50, v51);
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
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  __int64 v29; // x21
  int v30; // w8
  _BOOL8 v31; // x0
  __int64 v32; // x1
  Il2CppObject *current; // x29
  __int64 v34; // x0
  __int64 v35; // x1
  int v36; // w8
  int v37; // w8
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CEA22A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_EventMargeItemUpValInfo__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4CEA22A = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !infoList )
    goto LABEL_65;
  klass = infoList->klass;
  v8 = *(unsigned __int16 *)&infoList->klass->_2.rank;
  if ( *(_WORD *)&infoList->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    v10 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v10 = sub_1C51E70(infoList, System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__TypeInfo, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *, _QWORD))v10)(
          infoList,
          *(_QWORD *)(v10 + 8));
  if ( !v12 )
    sub_1C7BD40(0, v11);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_15;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_15:
      v16 = sub_1C51E70(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    v17 = *(_QWORD *)v12;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventMargeItemUpValInfo__c **)v19 - 1) != System_Collections_Generic_IEnumerator_EventMargeItemUpValInfo__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_22;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_22:
      v20 = sub_1C51E70(v12, System_Collections_Generic_IEnumerator_EventMargeItemUpValInfo__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
    v29 = v21;
    if ( !v21 )
      sub_1C7BD40(0, v22);
    v30 = *(_DWORD *)(v21 + 60);
    if ( v30 == 1 || v30 == 16 || v30 == 111 )
    {
      if ( !v4 )
        sub_1C7BD40(v21, v22);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v47,
        v4,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v48 = v47;
      while ( 1 )
      {
        v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v48,
                (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v31 )
          break;
        current = v48.fields._current;
        if ( !v48.fields._current )
          sub_1C7BD40(v31, v32);
        if ( LODWORD(v48.fields._current[1].klass) == *(_DWORD *)(v29 + 16)
          && LODWORD(v48.fields._current[4].klass) == *(_DWORD *)(v29 + 64)
          && LODWORD(v48.fields._current[3].monitor) == *(_DWORD *)(v29 + 56) )
        {
          goto LABEL_37;
        }
      }
      current = 0;
LABEL_37:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v48,
        (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( current )
      {
        v36 = *(_DWORD *)(v29 + 92);
        if ( v36 >= 1 )
          HIDWORD(current[5].monitor) += v36;
        v37 = *(_DWORD *)(v29 + 96);
        if ( v37 >= 1 )
          LODWORD(current[6].klass) += v37;
      }
      else
      {
        items = v4->fields._items;
        v39 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
        ++v4->fields._version;
        if ( !items )
          sub_1C7BD40(v34, v35);
        size = v4->fields._size;
        if ( (unsigned int)size < LODWORD(items->max_length) )
          goto LABEL_44;
LABEL_49:
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          (Il2CppObject *)v29,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
    }
    else
    {
      if ( !v4 )
        sub_1C7BD40(v21, v22);
      items = v4->fields._items;
      v39 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v4->fields._version;
      if ( !items )
        sub_1C7BD40(v21, v22);
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
        goto LABEL_49;
LABEL_44:
      v41 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v41[4] = (Il2CppClass *)v29;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v41 + 4), v29, v23, v24, v25, v26, v27, v28);
    }
  }
  v42 = *(_QWORD *)v12;
  v43 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_56;
    }
    v45 = v42 + 16LL * *v44 + 312;
  }
  else
  {
LABEL_56:
    v45 = sub_1C51E70(v12, System_IDisposable_TypeInfo, 0);
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v12, *(_QWORD *)(v45 + 8));
  if ( !v4 )
LABEL_65:
    sub_1C7BD40(v5, v6);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v4,
                                            (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
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
  __int64 v9; // x1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x27
  int32_t klass_high; // w23
  int monitor_high; // w8
  int32_t v15; // w0
  int32_t Item; // w8
  int32_t v17; // w2
  int32_t klass; // w2
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x28
  int32_t v22; // w23
  int v23; // w8
  int32_t v24; // w19
  int32_t v25; // w19
  int32_t v26; // w19
  PartyOrganizationUtility___c_c *v27; // x0
  System_Func_object__bool__o *_9__145_0; // x20
  Il2CppObject *v29; // x21
  GrandQuestFolderBoardItem_o *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CEA228 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_1C7BAE8(&System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__GetAdjustUpValInfoArray_b__145_0__);
    sub_1C7BAE8(&PartyOrganizationUtility___c_TypeInfo);
    byte_4CEA228 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  *isDuplicate = 0;
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_347E294 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_347E294 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !infoList )
    sub_1C7BD40(v8, v9);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)infoList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)infoList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v41 = v40;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v10 )
      break;
    current = v41.fields._current;
    if ( !v41.fields._current )
      sub_1C7BD40(v10, v11);
    klass_high = HIDWORD(v41.fields._current[6].klass);
    if ( klass_high >= 1 )
    {
      monitor_high = HIDWORD(v41.fields._current[3].monitor);
      switch ( monitor_high )
      {
        case 1:
          goto LABEL_11;
        case 111:
          if ( !v7 )
            sub_1C7BD40(v10, v11);
          if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
                 v7,
                 klass_high,
                 (const MethodInfo_347EE44 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
          {
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     v7,
                     klass_high,
                     (const MethodInfo_347EBBC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          }
          else
          {
            System_Collections_Generic_Dictionary_int__int___Add(
              v7,
              klass_high,
              0,
              (const MethodInfo_347EC58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            Item = 0;
          }
          klass = (int32_t)current[6].klass;
          if ( klass > Item || (klass = HIDWORD(current[5].monitor), klass > Item) )
            System_Collections_Generic_Dictionary_int__int___set_Item(
              v7,
              klass_high,
              klass,
              (const MethodInfo_347EC44 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          break;
        case 16:
LABEL_11:
          if ( !v6 )
            sub_1C7BD40(v10, v11);
          if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
                 v6,
                 klass_high,
                 (const MethodInfo_347EE44 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
          {
            v15 = System_Collections_Generic_Dictionary_int__int___get_Item(
                    v6,
                    klass_high,
                    (const MethodInfo_347EBBC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          }
          else
          {
            System_Collections_Generic_Dictionary_int__int___Add(
              v6,
              klass_high,
              0,
              (const MethodInfo_347EC58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            v15 = 0;
          }
          v17 = (int32_t)current[6].klass;
          if ( v17 > v15 )
            System_Collections_Generic_Dictionary_int__int___set_Item(
              v6,
              klass_high,
              v17,
              (const MethodInfo_347EC44 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)infoList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v41 = v40;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v19 )
      break;
    v21 = v41.fields._current;
    if ( !v41.fields._current )
      sub_1C7BD40(v19, v20);
    v22 = HIDWORD(v41.fields._current[6].klass);
    if ( v22 <= 0 )
    {
LABEL_41:
      LOBYTE(v21[6].monitor) = 0;
    }
    else
    {
      v23 = HIDWORD(v41.fields._current[3].monitor);
      switch ( v23 )
      {
        case 1:
          goto LABEL_32;
        case 111:
          if ( !v7 )
            sub_1C7BD40(v19, v20);
          if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                  v7,
                  v22,
                  (const MethodInfo_347EE44 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
            goto LABEL_41;
          v25 = (int32_t)v21[6].klass;
          if ( v25 >= System_Collections_Generic_Dictionary_int__int___get_Item(
                        v7,
                        v22,
                        (const MethodInfo_347EBBC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
          {
            LOBYTE(v21[6].monitor) = 0;
            System_Collections_Generic_Dictionary_int__int___set_Item(
              v7,
              v22,
              LODWORD(v21[6].klass) + 1,
              (const MethodInfo_347EC44 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          }
          else
          {
            v26 = HIDWORD(v21[5].monitor);
            if ( v26 <= System_Collections_Generic_Dictionary_int__int___get_Item(
                          v7,
                          v22,
                          (const MethodInfo_347EBBC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
            {
LABEL_35:
              LOBYTE(v21[6].monitor) = 1;
              *isDuplicate = 1;
            }
            else
            {
              LOBYTE(v21[6].monitor) = 0;
              System_Collections_Generic_Dictionary_int__int___set_Item(
                v7,
                v22,
                HIDWORD(v21[5].monitor) + 1,
                (const MethodInfo_347EC44 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
            }
          }
          break;
        case 16:
LABEL_32:
          if ( !v6 )
            sub_1C7BD40(v19, v20);
          if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                  v6,
                  v22,
                  (const MethodInfo_347EE44 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
            goto LABEL_41;
          v24 = (int32_t)v21[6].klass;
          if ( v24 < System_Collections_Generic_Dictionary_int__int___get_Item(
                       v6,
                       v22,
                       (const MethodInfo_347EBBC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
            goto LABEL_35;
          LOBYTE(v21[6].monitor) = 0;
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v6,
            v22,
            LODWORD(v21[6].klass) + 1,
            (const MethodInfo_347EC44 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  v27 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v27 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__145_0 = (System_Func_object__bool__o *)v27->static_fields->__9__145_0;
  if ( !_9__145_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = PartyOrganizationUtility___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__145_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__145_0,
      v29,
      Method_PartyOrganizationUtility___c__GetAdjustUpValInfoArray_b__145_0__,
      0);
    static_fields = (GrandQuestFolderBoardItem_o *)PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields[1].klass = (GrandQuestFolderBoardItem_c *)_9__145_0;
    sub_1C7BA8C(static_fields + 1, (int32_t)_9__145_0, v31, v32, v33, v34, v35, v36);
  }
  v37 = System_Linq_Enumerable__Where_object_(
          source,
          (System_Func_TSource__bool__o *)_9__145_0,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
  return (EventMargeItemUpValInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                            v37,
                                            (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
}


EventCampaignEntity_array *PartyOrganizationUtility__GetAvailableQuestUseItemEventCampaignEntities(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  QuestEntity_o *Master_object; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  QuestEntity_o **v12; // x21
  Il2CppObject *v13; // x22
  bool v14; // cc
  EventCampaignEntity_array *result; // x0
  Il2CppObject *v16; // x20
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableFriendshipUpItemEventCampaigns; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableRewardAddItemEventCampaigns; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x20
  System_Func_object__bool__o *v48; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x20
  System_Func_object__bool__o *v50; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x20
  System_Func_object__bool__o *v52; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CEA21C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarGroupIgnoreMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarGroupMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Concat_EventCampaignEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_EventCampaignEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    sub_1C7BAE8(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__2__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__3__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__4__);
    sub_1C7BAE8(&PartyOrganizationUtility___c__DisplayClass133_0_TypeInfo);
    byte_4CEA21C = 1;
  }
  entity = 0;
  v3 = sub_1C7BD34(PartyOrganizationUtility___c__DisplayClass133_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_29;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestEntity_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_29;
  v12 = (QuestEntity_o **)(v3 + 40);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         (Il2CppObject **)(v3 + 40),
         this->fields._CachedQuestId_k__BackingField,
         (const MethodInfo_342E348 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v13 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CE827C )
    {
      sub_1C7BAE8(&NetworkManager_TypeInfo);
      byte_4CE827C = 1;
    }
    Master_object = (QuestEntity_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (QuestEntity_o *)NetworkManager_TypeInfo;
    }
    if ( v13 )
    {
      if ( UserQuestMaster__TryGetEntity(
             (UserQuestMaster_o *)v13,
             &entity,
             (int64_t)Master_object[1].klass->_1.element_class,
             this->fields._CachedQuestId_k__BackingField,
             0) )
      {
        Master_object = *v12;
        if ( !*v12 )
          goto LABEL_29;
        if ( QuestEntity__HasFlag(Master_object, 0x20000, 0) )
        {
          Master_object = (QuestEntity_o *)entity;
          if ( !entity )
            goto LABEL_29;
          v14 = UserQuestEntity__getClearNum(entity, 0) <= 0;
          result = 0;
          if ( !v14 )
            return result;
        }
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v16 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v17 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarGroupMaster___);
      *(_QWORD *)(v3 + 32) = v17;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)v17, v18, v19, v20, v21, v22, v23);
      v24 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarGroupIgnoreMaster___);
      *(_QWORD *)(v3 + 56) = v24;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 56), (int32_t)v24, v25, v26, v27, v28, v29, v30);
      v31 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventQuestMaster___);
      *(_QWORD *)(v3 + 16) = v31;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v31, v32, v33, v34, v35, v36, v37);
      v38 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
      *(_QWORD *)(v3 + 48) = v38;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 48), (int32_t)v38, v39, v40, v41, v42, v43, v44);
      if ( v16 )
      {
        AvailableFriendshipUpItemEventCampaigns = EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                                    (EventCampaignMaster_o *)v16,
                                                    0);
        AvailableRewardAddItemEventCampaigns = EventCampaignMaster__GetAvailableRewardAddItemEventCampaigns(
                                                 (EventCampaignMaster_o *)v16,
                                                 0);
        v47 = System_Linq_Enumerable__Concat_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)AvailableFriendshipUpItemEventCampaigns,
                (System_Collections_Generic_IEnumerable_TSource__o *)AvailableRewardAddItemEventCampaigns,
                (const MethodInfo_318C14C *)Method_System_Linq_Enumerable_Concat_EventCampaignEntity___);
        v48 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_EventCampaignEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v48,
          (Il2CppObject *)v3,
          Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__2__,
          0);
        v49 = System_Linq_Enumerable__Where_object_(
                v47,
                (System_Func_TSource__bool__o *)v48,
                (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
        v50 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_EventCampaignEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v50,
          (Il2CppObject *)v3,
          Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__3__,
          0);
        v51 = System_Linq_Enumerable__Where_object_(
                v49,
                (System_Func_TSource__bool__o *)v50,
                (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
        v52 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_EventCampaignEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v52,
          (Il2CppObject *)v3,
          Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__4__,
          0);
        v53 = System_Linq_Enumerable__Where_object_(
                v51,
                (System_Func_TSource__bool__o *)v52,
                (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
        return (EventCampaignEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                              v53,
                                              (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_EventCampaignEntity___);
      }
    }
LABEL_29:
    sub_1C7BD40(Master_object, v5);
  }
  return 0;
}


QuestUseItemInfo_array *PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *cachedQuestUseItemInfoList; // x19
  System_Func_object__bool__o *_9__137_0; // x20
  Il2CppObject *v6; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4CEA220 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
    sub_1C7BAE8(&System_Func_QuestUseItemInfo__bool__TypeInfo);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__GetCachedAvailableQuestUseItems_b__137_0__);
    sub_1C7BAE8(&PartyOrganizationUtility___c_TypeInfo);
    byte_4CEA220 = 1;
  }
  v3 = PartyOrganizationUtility___c_TypeInfo;
  cachedQuestUseItemInfoList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v3 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__137_0 = (System_Func_object__bool__o *)v3->static_fields->__9__137_0;
  if ( !_9__137_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = PartyOrganizationUtility___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__137_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__137_0,
      v6,
      Method_PartyOrganizationUtility___c__GetCachedAvailableQuestUseItems_b__137_0__,
      0);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__137_0 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__137_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__137_0,
      (int32_t)_9__137_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          cachedQuestUseItemInfoList,
          (System_Func_TSource__bool__o *)_9__137_0,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  return (QuestUseItemInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                     v14,
                                     (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
}


QuestUseItemInfo_array *PartyOrganizationUtility__GetCachedQuestUseItems(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEA221 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
    byte_4CEA221 = 1;
  }
  return (QuestUseItemInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList,
                                     (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
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
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_EventDropUpValInfo__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x24
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  EventDropUpValInfo_o *v24; // x0
  __int64 v25; // x1
  int32_t groupId; // w23
  __int64 FuncType; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_int__o *Item; // x0
  __int64 v30; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v34; // x25
  __int64 v35; // x0
  __int64 v36; // x1
  struct System_Int32_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  System_Collections_Generic_IEnumerable_int__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x22
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  SkillLvMaster_o *v54; // x24
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  int32_t v61; // w23
  __int64 v62; // x1
  EventDropUpValInfo_array *AddStateAndFriendshipUpInfoArray; // x0
  __int64 v64; // x1
  EventDropUpValInfo_array *v65; // x24
  int max_length; // w8
  signed int v67; // w28
  EventDropUpValInfo_o *v68; // x8
  int32_t v69; // w25
  Il2CppArrayBounds *bounds; // x8
  _QWORD *v71; // x9
  __int64 max_length_low; // x10
  System_Collections_Generic_List_int__o *v73; // x26
  __int64 v74; // x0
  __int64 v75; // x1
  struct System_Int32_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  System_Collections_Generic_List_int__o *v79; // x26
  __int64 v80; // x0
  __int64 v81; // x1
  struct System_Int32_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  __int64 v85; // x8
  __int64 v86; // x9
  int *v87; // x10
  __int64 v88; // x0
  System_Collections_Generic_List_int__o *v89; // x21
  PartyOrganizationUtility___c_c *v90; // x8
  System_Func_T__TResult__o *_9__146_0; // x22
  Il2CppObject *v92; // x23
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  System_Collections_Generic_IEnumerable_TSource__c *v100; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v101; // x20
  __int64 v102; // x9
  int32_t *v103; // x10
  __int64 v104; // x0
  __int64 v105; // x1
  __int64 v106; // x20
  __int64 v107; // x8
  __int64 v108; // x9
  int *v109; // x10
  __int64 v110; // x0
  __int64 v111; // x8
  __int64 v112; // x9
  int *v113; // x10
  __int64 v114; // x0
  __int64 v115; // x0
  System_Collections_Generic_IEnumerable_T__o *v116; // x1
  __int64 v117; // x8
  __int64 v118; // x9
  int *v119; // x10
  __int64 v120; // x0
  PartyOrganizationUtility___c_c *v121; // x8
  System_Func_T__TResult__o *_9__146_1; // x20
  Il2CppObject *v123; // x22
  struct PartyOrganizationUtility___c_StaticFields *v124; // x0
  int32_t v125; // w2
  int32_t v126; // w3
  System_String_o *v127; // x4
  int32_t v128; // w5
  int64_t v129; // x6
  System_String_o *v130; // x7
  System_Collections_Generic_IEnumerable_TSource__c *v131; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v132; // x19
  __int64 v133; // x9
  int32_t *v134; // x10
  __int64 v135; // x0
  __int64 v136; // x1
  __int64 v137; // x19
  __int64 v138; // x8
  __int64 v139; // x9
  int *v140; // x10
  __int64 v141; // x0
  __int64 v142; // x8
  __int64 v143; // x9
  int *v144; // x10
  __int64 v145; // x0
  __int64 v146; // x0
  System_Collections_Generic_IEnumerable_T__o *v147; // x1
  __int64 v148; // x8
  __int64 v149; // x9
  int *v150; // x10
  __int64 v151; // x0
  Il2CppObject *Master_object; // [xsp+10h] [xbp-70h]
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4CEA229 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_KeyValuePair_int__List_int_____);
    sub_1C7BAE8(&System_Func_KeyValuePair_int__List_int____bool__TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_EventDropUpValInfo__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_EventDropUpValInfo__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__GetNeedAddAnnotationSkillIds_b__146_0__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__GetNeedAddAnnotationSkillIds_b__146_1__);
    sub_1C7BAE8(&PartyOrganizationUtility___c_TypeInfo);
    byte_4CEA229 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  if ( campaignInfoList )
  {
    klass = campaignInfoList->klass;
    v11 = *(unsigned __int16 *)&campaignInfoList->klass->_2.rank;
    if ( *(_WORD *)&campaignInfoList->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_EventDropUpValInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventDropUpValInfo__TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_10;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v13 = sub_1C51E70(campaignInfoList, System_Collections_Generic_IEnumerable_EventDropUpValInfo__TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *, _QWORD))v13)(
            campaignInfoList,
            *(_QWORD *)(v13 + 8));
    if ( !v15 )
      sub_1C7BD40(0, v14);
    while ( 1 )
    {
      v16 = *(_QWORD *)v15;
      v17 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
      {
        v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v17;
          v18 += 4;
          if ( !v17 )
            goto LABEL_17;
        }
        v19 = v16 + 16LL * *v18 + 312;
      }
      else
      {
LABEL_17:
        v19 = sub_1C51E70(v15, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8)) & 1) == 0 )
        break;
      v20 = *(_QWORD *)v15;
      v21 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
      {
        v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_EventDropUpValInfo__c **)v22 - 1) != System_Collections_Generic_IEnumerator_EventDropUpValInfo__TypeInfo )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_24;
        }
        v23 = v20 + 16LL * *v22 + 312;
      }
      else
      {
LABEL_24:
        v23 = sub_1C51E70(v15, System_Collections_Generic_IEnumerator_EventDropUpValInfo__TypeInfo, 0);
      }
      v24 = (EventDropUpValInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
      if ( !v24 )
        sub_1C7BD40(0, v25);
      groupId = v24->fields.groupId;
      if ( groupId >= 1 )
      {
        if ( !v24->fields.funcEntity )
          sub_1C7BD40(v24, v25);
        FuncType = EventDropUpValInfo__GetFuncType(v24, 0);
        if ( (_DWORD)FuncType == 111 )
        {
          if ( !v7 )
            sub_1C7BD40(FuncType, v28);
          if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
                 v7,
                 groupId,
                 (const MethodInfo_3487904 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
          {
            Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                               v7,
                                                               groupId,
                                                               (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
            if ( !Item )
              sub_1C7BD40(0, v30);
            items = Item->fields._items;
            v32 = Method_System_Collections_Generic_List_int__Add__;
            ++Item->fields._version;
            if ( !items )
              sub_1C7BD40(Item, v30);
            size = Item->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                Item,
                0,
                *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              Item->fields._size = size + 1;
              items->m_Items[size] = 0;
            }
          }
          else
          {
            v34 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v34,
              (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v34 )
              sub_1C7BD40(v35, v36);
            v37 = v34->fields._items;
            v38 = Method_System_Collections_Generic_List_int__Add__;
            ++v34->fields._version;
            if ( !v37 )
              sub_1C7BD40(v35, v36);
            v39 = v34->fields._size;
            if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v34,
                0,
                *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              v34->fields._size = v39 + 1;
              v37->m_Items[v39] = 0;
            }
            System_Collections_Generic_Dictionary_int__object___Add(
              v7,
              groupId,
              (Il2CppObject *)v34,
              (const MethodInfo_3487710 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
          }
        }
      }
    }
    v40 = *(_QWORD *)v15;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_47;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_47:
      v43 = sub_1C51E70(v15, System_IDisposable_TypeInfo, 0);
    }
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v43)(
                                                                v15,
                                                                *(_QWORD *)(v43 + 8));
  }
  if ( !skillIdList )
    goto LABEL_214;
  v44 = skillIdList->klass;
  v45 = *(unsigned __int16 *)&skillIdList->klass->_2.rank;
  if ( *(_WORD *)&skillIdList->klass->_2.rank )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)v46 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_55;
    }
    v47 = (__int64)&v44->vtable[*v46];
  }
  else
  {
LABEL_55:
    v47 = sub_1C51E70(skillIdList, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v49 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v47)(
          skillIdList,
          *(_QWORD *)(v47 + 8));
  if ( !v49 )
    sub_1C7BD40(0, v48);
  while ( 1 )
  {
LABEL_58:
    v50 = *(_QWORD *)v49;
    v51 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v52 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_62;
      }
      v54 = (SkillLvMaster_o *)Master_object;
      v53 = v50 + 16LL * *v52 + 312;
    }
    else
    {
LABEL_62:
      v53 = sub_1C51E70(v49, System_Collections_IEnumerator_TypeInfo, 0);
      v54 = (SkillLvMaster_o *)Master_object;
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v49, *(_QWORD *)(v53 + 8)) & 1) == 0 )
      break;
    v55 = *(_QWORD *)v49;
    v56 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v57 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v56;
        v57 += 4;
        if ( !v56 )
          goto LABEL_69;
      }
      v58 = v55 + 16LL * *v57 + 312;
    }
    else
    {
LABEL_69:
      v58 = sub_1C51E70(v49, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v59 = (*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v49, *(_QWORD *)(v58 + 8));
    if ( !v54 )
      sub_1C7BD40(v59, v60);
    v61 = v59;
    if ( SkillLvMaster__TryGetEntity(v54, &entity, v59, 1, 0) )
    {
      if ( !entity )
        sub_1C7BD40(0, v62);
      AddStateAndFriendshipUpInfoArray = SkillLvEntity__GetAddStateAndFriendshipUpInfoArray(entity, 0);
      v65 = AddStateAndFriendshipUpInfoArray;
      if ( !AddStateAndFriendshipUpInfoArray )
        sub_1C7BD40(0, v64);
      max_length = AddStateAndFriendshipUpInfoArray->max_length;
      if ( max_length >= 1 )
      {
        v67 = 0;
        while ( 1 )
        {
          if ( v67 >= (unsigned int)max_length )
            sub_1C7BD48(AddStateAndFriendshipUpInfoArray);
          v68 = v65->m_Items[v67];
          if ( !v68 )
            sub_1C7BD40(AddStateAndFriendshipUpInfoArray, v64);
          v69 = v68->fields.groupId;
          if ( v69 < 1 )
            goto LABEL_109;
          if ( !v68->fields.funcEntity )
            sub_1C7BD40(AddStateAndFriendshipUpInfoArray, v64);
          AddStateAndFriendshipUpInfoArray = (EventDropUpValInfo_array *)EventDropUpValInfo__GetFuncType(
                                                                           v65->m_Items[v67],
                                                                           0);
          if ( (_DWORD)AddStateAndFriendshipUpInfoArray == 1 || (_DWORD)AddStateAndFriendshipUpInfoArray == 16 )
            break;
          if ( (_DWORD)AddStateAndFriendshipUpInfoArray == 111 )
          {
            if ( !v7 )
              sub_1C7BD40(AddStateAndFriendshipUpInfoArray, v64);
            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                    v7,
                    v69,
                    (const MethodInfo_3487904 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
            {
              v79 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v79,
                (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v79 )
                sub_1C7BD40(v80, v81);
              v82 = v79->fields._items;
              v83 = Method_System_Collections_Generic_List_int__Add__;
              ++v79->fields._version;
              if ( !v82 )
                sub_1C7BD40(v80, v81);
              v84 = v79->fields._size;
              if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v79,
                  v61,
                  *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
              }
              else
              {
                v79->fields._size = v84 + 1;
                v82->m_Items[v84] = v61;
              }
              System_Collections_Generic_Dictionary_int__object___Add(
                v7,
                v69,
                (Il2CppObject *)v79,
                (const MethodInfo_3487710 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              goto LABEL_109;
            }
            AddStateAndFriendshipUpInfoArray = (EventDropUpValInfo_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                             v7,
                                                                             v69,
                                                                             (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
            if ( !AddStateAndFriendshipUpInfoArray )
              sub_1C7BD40(0, v64);
            bounds = AddStateAndFriendshipUpInfoArray->bounds;
            v71 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(AddStateAndFriendshipUpInfoArray->max_length);
            if ( !bounds )
              sub_1C7BD40(AddStateAndFriendshipUpInfoArray, v64);
            max_length_low = SLODWORD(AddStateAndFriendshipUpInfoArray->max_length);
            if ( (unsigned int)max_length_low < bounds[1].lower_bound )
            {
LABEL_95:
              LODWORD(AddStateAndFriendshipUpInfoArray->max_length) = max_length_low + 1;
              *((_DWORD *)&bounds[2].length + max_length_low) = v61;
              goto LABEL_109;
            }
            goto LABEL_89;
          }
LABEL_109:
          max_length = v65->max_length;
          if ( ++v67 >= max_length )
            goto LABEL_58;
        }
        if ( !v6 )
          sub_1C7BD40(AddStateAndFriendshipUpInfoArray, v64);
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v6,
                v69,
                (const MethodInfo_3487904 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
        {
          v73 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v73,
            (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v73 )
            sub_1C7BD40(v74, v75);
          v76 = v73->fields._items;
          v77 = Method_System_Collections_Generic_List_int__Add__;
          ++v73->fields._version;
          if ( !v76 )
            sub_1C7BD40(v74, v75);
          v78 = v73->fields._size;
          if ( (unsigned int)v78 >= LODWORD(v76->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v73,
              v61,
              *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
          }
          else
          {
            v73->fields._size = v78 + 1;
            v76->m_Items[v78] = v61;
          }
          System_Collections_Generic_Dictionary_int__object___Add(
            v6,
            v69,
            (Il2CppObject *)v73,
            (const MethodInfo_3487710 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
          goto LABEL_109;
        }
        AddStateAndFriendshipUpInfoArray = (EventDropUpValInfo_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         v6,
                                                                         v69,
                                                                         (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
        if ( !AddStateAndFriendshipUpInfoArray )
          sub_1C7BD40(0, v64);
        bounds = AddStateAndFriendshipUpInfoArray->bounds;
        v71 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(AddStateAndFriendshipUpInfoArray->max_length);
        if ( !bounds )
          sub_1C7BD40(AddStateAndFriendshipUpInfoArray, v64);
        max_length_low = SLODWORD(AddStateAndFriendshipUpInfoArray->max_length);
        if ( (unsigned int)max_length_low < bounds[1].lower_bound )
          goto LABEL_95;
LABEL_89:
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)AddStateAndFriendshipUpInfoArray,
          v61,
          *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
        goto LABEL_109;
      }
    }
  }
  v85 = *(_QWORD *)v49;
  v86 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
  {
    v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v87 - 1) != System_IDisposable_TypeInfo )
    {
      --v86;
      v87 += 4;
      if ( !v86 )
        goto LABEL_115;
    }
    v88 = v85 + 16LL * *v87 + 312;
  }
  else
  {
LABEL_115:
    v88 = sub_1C51E70(v49, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v88)(v49, *(_QWORD *)(v88 + 8));
  v89 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v89,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  v90 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v90 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__146_0 = (System_Func_T__TResult__o *)v90->static_fields->__9__146_0;
  if ( !_9__146_0 )
  {
    if ( !v90->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v90);
      v90 = PartyOrganizationUtility___c_TypeInfo;
    }
    v92 = (Il2CppObject *)v90->static_fields->__9;
    _9__146_0 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_KeyValuePair_int__List_int____bool__TypeInfo);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__146_0,
      v92,
      Method_PartyOrganizationUtility___c__GetNeedAddAnnotationSkillIds_b__146_0__,
      0);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__146_0 = (struct System_Func_KeyValuePair_int__List_int____bool__o *)_9__146_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__146_0,
      (int32_t)_9__146_0,
      v94,
      v95,
      v96,
      v97,
      v98,
      v99);
  }
  v8 = System_Linq_Enumerable__Where_KeyValuePair_int__object__(
         (System_Collections_Generic_IEnumerable_TSource__o *)v6,
         (System_Func_TSource__bool__o *)_9__146_0,
         (const MethodInfo_31B498C *)Method_System_Linq_Enumerable_Where_KeyValuePair_int__List_int_____);
  if ( !v8 )
    goto LABEL_214;
  v100 = v8->klass;
  v101 = v8;
  v102 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    v103 = &v100->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____c **)v103 - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo )
    {
      --v102;
      v103 += 4;
      if ( !v102 )
        goto LABEL_128;
    }
    v104 = (__int64)&v100->vtable[*v103];
  }
  else
  {
LABEL_128:
    v104 = sub_1C51E70(v8, System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo, 0);
  }
  v106 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v104)(
           v101,
           *(_QWORD *)(v104 + 8));
  if ( !v106 )
    sub_1C7BD40(0, v105);
  while ( 1 )
  {
    v107 = *(_QWORD *)v106;
    v108 = *(unsigned __int16 *)(*(_QWORD *)v106 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v106 + 302LL) )
    {
      v109 = (int *)(*(_QWORD *)(v107 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v109 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v108;
        v109 += 4;
        if ( !v108 )
          goto LABEL_135;
      }
      v110 = v107 + 16LL * *v109 + 312;
    }
    else
    {
LABEL_135:
      v110 = sub_1C51E70(v106, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v110)(v106, *(_QWORD *)(v110 + 8)) & 1) == 0 )
      break;
    v111 = *(_QWORD *)v106;
    v112 = *(unsigned __int16 *)(*(_QWORD *)v106 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v106 + 302LL) )
    {
      v113 = (int *)(*(_QWORD *)(v111 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____c **)v113 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo )
      {
        --v112;
        v113 += 4;
        if ( !v112 )
          goto LABEL_142;
      }
      v114 = v111 + 16LL * *v113 + 312;
    }
    else
    {
LABEL_142:
      v114 = sub_1C51E70(v106, System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo, 0);
    }
    v115 = (*(__int64 (__fastcall **)(__int64, _QWORD))v114)(v106, *(_QWORD *)(v114 + 8));
    if ( !v89 )
      sub_1C7BD40(v115, v116);
    System_Collections_Generic_List_int___AddRange(
      v89,
      v116,
      (const MethodInfo_3821FE4 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  v117 = *(_QWORD *)v106;
  v118 = *(unsigned __int16 *)(*(_QWORD *)v106 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v106 + 302LL) )
  {
    v119 = (int *)(*(_QWORD *)(v117 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v119 - 1) != System_IDisposable_TypeInfo )
    {
      --v118;
      v119 += 4;
      if ( !v118 )
        goto LABEL_150;
    }
    v120 = v117 + 16LL * *v119 + 312;
  }
  else
  {
LABEL_150:
    v120 = sub_1C51E70(v106, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v120)(v106, *(_QWORD *)(v120 + 8));
  v121 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v121 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__146_1 = (System_Func_T__TResult__o *)v121->static_fields->__9__146_1;
  if ( !_9__146_1 )
  {
    if ( !v121->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v121);
      v121 = PartyOrganizationUtility___c_TypeInfo;
    }
    v123 = (Il2CppObject *)v121->static_fields->__9;
    _9__146_1 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_KeyValuePair_int__List_int____bool__TypeInfo);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__146_1,
      v123,
      Method_PartyOrganizationUtility___c__GetNeedAddAnnotationSkillIds_b__146_1__,
      0);
    v124 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v124->__9__146_1 = (struct System_Func_KeyValuePair_int__List_int____bool__o *)_9__146_1;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&v124->__9__146_1,
      (int32_t)_9__146_1,
      v125,
      v126,
      v127,
      v128,
      v129,
      v130);
  }
  v8 = System_Linq_Enumerable__Where_KeyValuePair_int__object__(
         (System_Collections_Generic_IEnumerable_TSource__o *)v7,
         (System_Func_TSource__bool__o *)_9__146_1,
         (const MethodInfo_31B498C *)Method_System_Linq_Enumerable_Where_KeyValuePair_int__List_int_____);
  if ( !v8 )
    goto LABEL_214;
  v131 = v8->klass;
  v132 = v8;
  v133 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    v134 = &v131->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____c **)v134 - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo )
    {
      --v133;
      v134 += 4;
      if ( !v133 )
        goto LABEL_163;
    }
    v135 = (__int64)&v131->vtable[*v134];
  }
  else
  {
LABEL_163:
    v135 = sub_1C51E70(v8, System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo, 0);
  }
  v137 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v135)(
           v132,
           *(_QWORD *)(v135 + 8));
  if ( !v137 )
    sub_1C7BD40(0, v136);
  while ( 1 )
  {
    v138 = *(_QWORD *)v137;
    v139 = *(unsigned __int16 *)(*(_QWORD *)v137 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v137 + 302LL) )
    {
      v140 = (int *)(*(_QWORD *)(v138 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v140 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v139;
        v140 += 4;
        if ( !v139 )
          goto LABEL_170;
      }
      v141 = v138 + 16LL * *v140 + 312;
    }
    else
    {
LABEL_170:
      v141 = sub_1C51E70(v137, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v141)(v137, *(_QWORD *)(v141 + 8)) & 1) == 0 )
      break;
    v142 = *(_QWORD *)v137;
    v143 = *(unsigned __int16 *)(*(_QWORD *)v137 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v137 + 302LL) )
    {
      v144 = (int *)(*(_QWORD *)(v142 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____c **)v144 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo )
      {
        --v143;
        v144 += 4;
        if ( !v143 )
          goto LABEL_177;
      }
      v145 = v142 + 16LL * *v144 + 312;
    }
    else
    {
LABEL_177:
      v145 = sub_1C51E70(v137, System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo, 0);
    }
    v146 = (*(__int64 (__fastcall **)(__int64, _QWORD))v145)(v137, *(_QWORD *)(v145 + 8));
    if ( !v89 )
      sub_1C7BD40(v146, v147);
    System_Collections_Generic_List_int___AddRange(
      v89,
      v147,
      (const MethodInfo_3821FE4 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  v148 = *(_QWORD *)v137;
  v149 = *(unsigned __int16 *)(*(_QWORD *)v137 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v137 + 302LL) )
  {
    v150 = (int *)(*(_QWORD *)(v148 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v150 - 1) != System_IDisposable_TypeInfo )
    {
      --v149;
      v150 += 4;
      if ( !v149 )
        goto LABEL_185;
    }
    v151 = v148 + 16LL * *v150 + 312;
  }
  else
  {
LABEL_185:
    v151 = sub_1C51E70(v137, System_IDisposable_TypeInfo, 0);
  }
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v151)(
                                                              v137,
                                                              *(_QWORD *)(v151 + 8));
  if ( !v89 )
LABEL_214:
    sub_1C7BD40(v8, v9);
  return System_Collections_Generic_List_int___ToArray(
           v89,
           (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4CEA219 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_GetValue_int__FollowerInfo___);
    byte_4CEA219 = 1;
  }
  return (FollowerInfo_o *)BasicHelper__GetValue_int__object_(
                             (System_Collections_Generic_Dictionary_K__V__o *)this->fields._npcFollowerInfos,
                             key,
                             0,
                             (const MethodInfo_315E0D4 *)Method_BasicHelper_GetValue_int__FollowerInfo___);
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
  System_Func_object__int__o *_9__142_1; // x20
  Il2CppObject *v14; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v22; // x0
  PartyOrganizationUtility___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  System_Func_object__object__o *_9__142_2; // x20
  Il2CppObject *v26; // x21
  struct PartyOrganizationUtility___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v34; // x0
  PartyOrganizationUtility___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x19
  System_Func_object__int__o *_9__142_3; // x20
  Il2CppObject *v38; // x21
  struct PartyOrganizationUtility___c_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0

  if ( (byte_4CEA225 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_GroupBy_QuestUseItemInfo__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_SelectMany_IGrouping_int__QuestUseItemInfo___QuestUseItemInfo___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_QuestUseItemInfo__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
    sub_1C7BAE8(&System_Func_QuestUseItemInfo__bool__TypeInfo);
    sub_1C7BAE8(&System_Func_QuestUseItemInfo__int__TypeInfo);
    sub_1C7BAE8(&System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___TypeInfo);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_1__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_2__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_3__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__DisplayClass142_0__GetQuestUseItemIds_b__0__);
    sub_1C7BAE8(&PartyOrganizationUtility___c__DisplayClass142_0_TypeInfo);
    sub_1C7BAE8(&PartyOrganizationUtility___c_TypeInfo);
    byte_4CEA225 = 1;
  }
  v5 = sub_1C7BD34(PartyOrganizationUtility___c__DisplayClass142_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_DWORD *)(v5 + 16) = campaignType;
  CachedAvailableQuestUseItems = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
                                                                                        this,
                                                                                        v7);
  v9 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_QuestUseItemInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_PartyOrganizationUtility___c__DisplayClass142_0__GetQuestUseItemIds_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          CachedAvailableQuestUseItems,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v11 = PartyOrganizationUtility___c_TypeInfo;
  v12 = v10;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v11 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__142_1 = (System_Func_object__int__o *)v11->static_fields->__9__142_1;
  if ( !_9__142_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = PartyOrganizationUtility___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__142_1 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__142_1,
      v14,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_1__,
      0);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__142_1 = (struct System_Func_QuestUseItemInfo__int__o *)_9__142_1;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__142_1,
      (int32_t)_9__142_1,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = System_Linq_Enumerable__GroupBy_object__int_(
          v12,
          (System_Func_TSource__TKey__o *)_9__142_1,
          (const MethodInfo_31996D4 *)Method_System_Linq_Enumerable_GroupBy_QuestUseItemInfo__int___);
  v23 = PartyOrganizationUtility___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)v22;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v23 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__142_2 = (System_Func_object__object__o *)v23->static_fields->__9__142_2;
  if ( !_9__142_2 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = PartyOrganizationUtility___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__142_2 = (System_Func_object__object__o *)sub_1C7BD34(System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___TypeInfo);
    System_Func_object__object____ctor(
      _9__142_2,
      v26,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_2__,
      0);
    v27 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v27->__9__142_2 = (struct System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___o *)_9__142_2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v27->__9__142_2, (int32_t)_9__142_2, v28, v29, v30, v31, v32, v33);
  }
  v34 = System_Linq_Enumerable__SelectMany_object__object_(
          v24,
          (System_Func_TSource__IEnumerable_TResult___o *)_9__142_2,
          (const MethodInfo_31A87D0 *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__QuestUseItemInfo___QuestUseItemInfo___);
  v35 = PartyOrganizationUtility___c_TypeInfo;
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)v34;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v35 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__142_3 = (System_Func_object__int__o *)v35->static_fields->__9__142_3;
  if ( !_9__142_3 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = PartyOrganizationUtility___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__142_3 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__142_3,
      v38,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_3__,
      0);
    v39 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v39->__9__142_3 = (struct System_Func_QuestUseItemInfo__int__o *)_9__142_3;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v39->__9__142_3, (int32_t)_9__142_3, v40, v41, v42, v43, v44, v45);
  }
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v36,
                                                               (System_Func_TSource__TResult__o *)_9__142_3,
                                                               (const MethodInfo_31A5664 *)Method_System_Linq_Enumerable_Select_QuestUseItemInfo__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v46,
           (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
}


QuestUseItemInfo_array *PartyOrganizationUtility__GetQuestUseItems(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  PartyOrganizationUtility_o *v4; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  Il2CppObject *Master_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x1
  EventCampaignEntity_array *AvailableQuestUseItemEventCampaignEntities; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  PartyOrganizationUtility___c_c *v29; // x0
  System_Func_object__object__o *_9__134_0; // x22
  Il2CppObject *v31; // x23
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Func_T1__T2__TResult__o *v39; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x21
  System_Func_object__object__o *v41; // x22
  System_Collections_Generic_IEnumerable_T__o *v42; // x0
  System_Collections_Generic_IEnumerable_T__o *v43; // x21
  PartyOrganizationUtility___c_c *v44; // x8
  System_Func_object__bool__o *_9__134_3; // x22
  Il2CppObject *v46; // x23
  struct PartyOrganizationUtility___c_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  PartyOrganizationUtility___c_c *v55; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x21
  System_Func_object__int__o *_9__134_4; // x22
  Il2CppObject *v58; // x23
  struct PartyOrganizationUtility___c_StaticFields *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v66; // x0
  PartyOrganizationUtility___c_c *v67; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x21
  System_Func_object__object__o *_9__134_5; // x22
  Il2CppObject *v70; // x23
  struct PartyOrganizationUtility___c_StaticFields *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
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
  System_Func_object__int__o *_9__134_7; // x20
  Il2CppObject *v97; // x21
  struct PartyOrganizationUtility___c_StaticFields *v98; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v105; // x0
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CEA21D & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_QuestUseItemInfo__TypeInfo);
    sub_1C7BAE8(&System_Action_int__TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_ExcludeNull_QuestUseItemInfo___);
    sub_1C7BAE8(&Method_BasicHelper_ForEach_int___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_GroupBy_QuestUseItemInfo__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderByDescending_QuestUseItemInfo__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_SelectMany_EventCampaignEntity__int____f__AnonymousType3_EventCampaignEntity__ItemEntity____);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_SelectMany_IGrouping_int__QuestUseItemInfo___QuestUseItemInfo___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select___f__AnonymousType3_EventCampaignEntity__ItemEntity___QuestUseItemInfo___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_QuestUseItemInfo___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
    sub_1C7BAE8(&System_Func_QuestUseItemInfo__bool__TypeInfo);
    sub_1C7BAE8(&System_Func___f__AnonymousType3_EventCampaignEntity__ItemEntity___QuestUseItemInfo__TypeInfo);
    sub_1C7BAE8(&System_Func_EventCampaignEntity__IEnumerable_int___TypeInfo);
    sub_1C7BAE8(&System_Func_QuestUseItemInfo__int__TypeInfo);
    sub_1C7BAE8(&System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___TypeInfo);
    sub_1C7BAE8(&System_Func_EventCampaignEntity__int____f__AnonymousType3_EventCampaignEntity__ItemEntity___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestUseItemInfo__ForEach__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestUseItemInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_QuestUseItemInfo__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_0__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_3__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_4__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_5__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_7__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__DisplayClass134_0__GetQuestUseItems_b__10__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__DisplayClass134_0__GetQuestUseItems_b__1__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__DisplayClass134_0__GetQuestUseItems_b__2__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__DisplayClass134_0__GetQuestUseItems_b__6__);
    sub_1C7BAE8(&PartyOrganizationUtility___c__DisplayClass134_0_TypeInfo);
    sub_1C7BAE8(&PartyOrganizationUtility___c_TypeInfo);
    byte_4CEA21D = 1;
  }
  entity = 0;
  v3 = sub_1C7BD34(PartyOrganizationUtility___c__DisplayClass134_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_57;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ItemMaster___);
  *(_QWORD *)(v3 + 16) = Master_object;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)Master_object, v13, v14, v15, v16, v17, v18);
  v19 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserItemMaster___);
  *(_QWORD *)(v3 + 24) = v19;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)v19, v20, v21, v22, v23, v24, v25);
  AvailableQuestUseItemEventCampaignEntities = PartyOrganizationUtility__GetAvailableQuestUseItemEventCampaignEntities(
                                                 this,
                                                 v26);
  if ( !AvailableQuestUseItemEventCampaignEntities )
    goto LABEL_32;
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)AvailableQuestUseItemEventCampaignEntities;
  v29 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v29 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__134_0 = (System_Func_object__object__o *)v29->static_fields->__9__134_0;
  if ( !_9__134_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = PartyOrganizationUtility___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v29->static_fields->__9;
    _9__134_0 = (System_Func_object__object__o *)sub_1C7BD34(System_Func_EventCampaignEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__134_0,
      v31,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_0__,
      0);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__134_0 = (struct System_Func_EventCampaignEntity__IEnumerable_int___o *)_9__134_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__134_0,
      (int32_t)_9__134_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v39 = (System_Func_T1__T2__TResult__o *)sub_1C7BD34(System_Func_EventCampaignEntity__int____f__AnonymousType3_EventCampaignEntity__ItemEntity___TypeInfo);
  System_Func_object__int__object____ctor(
    v39,
    (Il2CppObject *)v3,
    Method_PartyOrganizationUtility___c__DisplayClass134_0__GetQuestUseItems_b__1__,
    0);
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int__object_(
                                                               v28,
                                                               (System_Func_TSource__IEnumerable_TCollection___o *)_9__134_0,
                                                               (System_Func_TSource__TCollection__TResult__o *)v39,
                                                               (const MethodInfo_31A8924 *)Method_System_Linq_Enumerable_SelectMany_EventCampaignEntity__int____f__AnonymousType3_EventCampaignEntity__ItemEntity____);
  v41 = (System_Func_object__object__o *)sub_1C7BD34(System_Func___f__AnonymousType3_EventCampaignEntity__ItemEntity___QuestUseItemInfo__TypeInfo);
  System_Func_object__object____ctor(
    v41,
    (Il2CppObject *)v3,
    Method_PartyOrganizationUtility___c__DisplayClass134_0__GetQuestUseItems_b__2__,
    0);
  v42 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v40,
                                                         (System_Func_TSource__TResult__o *)v41,
                                                         (const MethodInfo_31A5F40 *)Method_System_Linq_Enumerable_Select___f__AnonymousType3_EventCampaignEntity__ItemEntity___QuestUseItemInfo___);
  v43 = BasicHelper__ExcludeNull_object_(
          v42,
          (const MethodInfo_315A07C *)Method_BasicHelper_ExcludeNull_QuestUseItemInfo___);
  v44 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v44 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__134_3 = (System_Func_object__bool__o *)v44->static_fields->__9__134_3;
  if ( !_9__134_3 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = PartyOrganizationUtility___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v44->static_fields->__9;
    _9__134_3 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__134_3,
      v46,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_3__,
      0);
    v47 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v47->__9__134_3 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__134_3;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v47->__9__134_3, (int32_t)_9__134_3, v48, v49, v50, v51, v52, v53);
  }
  v54 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v43,
          (System_Func_TSource__bool__o *)_9__134_3,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v55 = PartyOrganizationUtility___c_TypeInfo;
  v56 = v54;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v55 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__134_4 = (System_Func_object__int__o *)v55->static_fields->__9__134_4;
  if ( !_9__134_4 )
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v55 = PartyOrganizationUtility___c_TypeInfo;
    }
    v58 = (Il2CppObject *)v55->static_fields->__9;
    _9__134_4 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__134_4, v58, Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_4__, 0);
    v59 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v59->__9__134_4 = (struct System_Func_QuestUseItemInfo__int__o *)_9__134_4;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v59->__9__134_4, (int32_t)_9__134_4, v60, v61, v62, v63, v64, v65);
  }
  v66 = System_Linq_Enumerable__GroupBy_object__int_(
          v56,
          (System_Func_TSource__TKey__o *)_9__134_4,
          (const MethodInfo_31996D4 *)Method_System_Linq_Enumerable_GroupBy_QuestUseItemInfo__int___);
  v67 = PartyOrganizationUtility___c_TypeInfo;
  v68 = (System_Collections_Generic_IEnumerable_TSource__o *)v66;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v67 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__134_5 = (System_Func_object__object__o *)v67->static_fields->__9__134_5;
  if ( !_9__134_5 )
  {
    if ( !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67);
      v67 = PartyOrganizationUtility___c_TypeInfo;
    }
    v70 = (Il2CppObject *)v67->static_fields->__9;
    _9__134_5 = (System_Func_object__object__o *)sub_1C7BD34(System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___TypeInfo);
    System_Func_object__object____ctor(
      _9__134_5,
      v70,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_5__,
      0);
    v71 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v71->__9__134_5 = (struct System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___o *)_9__134_5;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v71->__9__134_5, (int32_t)_9__134_5, v72, v73, v74, v75, v76, v77);
  }
  v78 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v68,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__134_5,
                                                               (const MethodInfo_31A87D0 *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__QuestUseItemInfo___QuestUseItemInfo___);
  v85 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v78,
                                                       (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_QuestUseItemInfo___);
  if ( !v85 )
  {
LABEL_32:
    v85 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_QuestUseItemInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v85,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_QuestUseItemInfo___ctor__);
  }
  *(_QWORD *)(v3 + 40) = v85;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)v85, v79, v80, v81, v82, v83, v84);
  if ( this->fields._IsWaveBattleRestart_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v86 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CE827C )
    {
      sub_1C7BAE8(&NetworkManager_TypeInfo);
      byte_4CE827C = 1;
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
                                           (int64_t)v4->fields.temporaryPartyInfo->fields.basePartyItem,
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
          v87);
        v4 = (PartyOrganizationUtility_o *)entity;
        if ( entity )
        {
          InterruptionInfo = UserInterruptionQuestEntity__GetInterruptionInfo(entity, 0);
          if ( InterruptionInfo )
          {
            v89 = InterruptionInfo;
            if ( !BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)InterruptionInfo->fields.useRewardAddItemIds,
                    0) )
            {
              useRewardAddItemIds = (System_Collections_Generic_IEnumerable_T__o *)v89->fields.useRewardAddItemIds;
              v91 = (System_Action_int__o *)sub_1C7BD34(System_Action_int__TypeInfo);
              System_Action_int____ctor(
                v91,
                (Il2CppObject *)v3,
                Method_PartyOrganizationUtility___c__DisplayClass134_0__GetQuestUseItems_b__10__,
                0);
              BasicHelper__ForEach_int_(
                useRewardAddItemIds,
                (System_Action_T__o *)v91,
                (const MethodInfo_315B718 *)Method_BasicHelper_ForEach_int___);
            }
          }
          goto LABEL_49;
        }
      }
    }
LABEL_57:
    sub_1C7BD40(v4, v5);
  }
LABEL_49:
  PartyOrganizationUtility__LoadQuestUseItemUseState(this, v5);
  v92 = *(System_Collections_Generic_List_object__o **)(v3 + 40);
  v93 = (System_Action_object__o *)sub_1C7BD34(System_Action_QuestUseItemInfo__TypeInfo);
  System_Action_object____ctor(
    v93,
    (Il2CppObject *)v3,
    Method_PartyOrganizationUtility___c__DisplayClass134_0__GetQuestUseItems_b__6__,
    0);
  if ( !v92 )
    goto LABEL_57;
  System_Collections_Generic_List_object___ForEach(
    v92,
    (System_Action_T__o *)v93,
    (const MethodInfo_383F83C *)Method_System_Collections_Generic_List_QuestUseItemInfo__ForEach__);
  v94 = PartyOrganizationUtility___c_TypeInfo;
  v95 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v3 + 40);
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v94 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__134_7 = (System_Func_object__int__o *)v94->static_fields->__9__134_7;
  if ( !_9__134_7 )
  {
    if ( !v94->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v94);
      v94 = PartyOrganizationUtility___c_TypeInfo;
    }
    v97 = (Il2CppObject *)v94->static_fields->__9;
    _9__134_7 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__134_7, v97, Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_7__, 0);
    v98 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v98->__9__134_7 = (struct System_Func_QuestUseItemInfo__int__o *)_9__134_7;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v98->__9__134_7, (int32_t)_9__134_7, v99, v100, v101, v102, v103, v104);
  }
  v105 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                v95,
                                                                (System_Func_TSource__TKey__o *)_9__134_7,
                                                                (const MethodInfo_319F4D8 *)Method_System_Linq_Enumerable_OrderByDescending_QuestUseItemInfo__int___);
  return (QuestUseItemInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                     v105,
                                     (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
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
  __int64 v27; // x1
  System_String_o *v28; // x21
  int32_t stringLength; // w27
  int32_t v30; // w28

  if ( (byte_4CEA217 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&System_Math_TypeInfo);
    sub_1C7BAE8(&Rarity_TypeInfo);
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10134/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/);
    sub_1C7BAE8(&StringLiteral_10138/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/);
    sub_1C7BAE8(&StringLiteral_10137/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/);
    sub_1C7BAE8(&StringLiteral_10133/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/);
    sub_1C7BAE8(&StringLiteral_10136/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/);
    sub_1C7BAE8(&StringLiteral_10135/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/);
    byte_4CEA217 = 1;
  }
  v13 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v13, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10133/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, 0);
  v15 = System_String__Format(v14, (Il2CppObject *)servantName, 0);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10134/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, 0);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = (Il2CppObject *)Rarity__getRarityType(servantRarity, 0);
  v18 = System_String__Format(v16, RarityType, 0);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_10135/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, 0);
  v20 = System_String__Format(v19, (Il2CppObject *)equipName, 0);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10136/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, 0);
  v22 = System_String__Format(v21, (Il2CppObject *)skillName, 0);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10137/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, 0);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10138/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, 0);
  v25 = (Il2CppObject *)Rarity__getRarityType(actMaxRarity, 0);
  v26 = System_String__Format(v24, v25, 0);
  if ( !v15 || !v20 )
    goto LABEL_14;
  v28 = v26;
  stringLength = v15->fields._stringLength;
  v30 = v20->fields._stringLength;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v26 = (System_String_o *)System_Math__Max_65698740(stringLength, v30, 0);
  *maxLength = (int)v26;
  if ( !v22
    || (v26 = (System_String_o *)System_Math__Max_65698740((int32_t)v26, v22->fields._stringLength, 0),
        *maxLength = (int)v26,
        !v13) )
  {
LABEL_14:
    sub_1C7BD40(v26, v27);
  }
  System_Text_StringBuilder__Append_64260872(v13, v15, 0);
  System_Text_StringBuilder__Append_64260872(v13, v18, 0);
  System_Text_StringBuilder__Append_64260872(v13, v20, 0);
  System_Text_StringBuilder__Append_64260872(v13, v22, 0);
  System_Text_StringBuilder__Append_64260872(v13, v23, 0);
  System_Text_StringBuilder__Append_64260872(v13, v28, 0);
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

  if ( (byte_4CEA222 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    byte_4CEA222 = 1;
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
          sub_1C7BD40(PartyItemSmc_k__BackingField, startingNum);
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
  if ( (byte_4CEA21F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Any_QuestUseItemInfo___);
    byte_4CEA21F = 1;
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList,
           (const MethodInfo_317C204 *)Method_System_Linq_Enumerable_Any_QuestUseItemInfo___);
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
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
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
  if ( (byte_4CEA214 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4CEA214 = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v28, 0);
  v9 = System_Int32__ToString((int32_t)&v27, 0);
  v10 = System_Int32__ToString((int32_t)&v26, 0);
  restrictionDialogHistoryList = (Il2CppObject *)System_String__Concat_64215176(v8, v9, v10, 0);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_12;
  v13 = restrictionDialogHistoryList;
  v20 = System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.restrictionDialogHistoryList,
          restrictionDialogHistoryList,
          (const MethodInfo_383F18C *)Method_System_Collections_Generic_List_string__Contains__);
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
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = (__int64)klass + 8 * monitor_low;
          LODWORD(restrictionDialogHistoryList[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v24 + 32) = v13;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v24 + 32), (int32_t)v13, v14, v15, v16, v17, v18, v19);
        }
        return v20;
      }
    }
LABEL_12:
    sub_1C7BD40(restrictionDialogHistoryList, v12);
  }
  return v20;
}


bool PartyOrganizationUtility__IsPassiveCampaignApplicable(
        EventCampaignEntity_o *campaign,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x24
  Il2CppObject *v8; // x22
  Il2CppObject *v9; // x25
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  EventQuestMaster_o *v12; // x23
  int32_t WarID_ByQuestID; // w24
  int32_t eventId; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CEA22D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarGroupMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4CEA22D = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
  v8 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarGroupMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestMaster___);
  Instance = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !v9 )
    goto LABEL_20;
  v12 = (EventQuestMaster_o *)Instance;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v9,
                               &entity,
                               questId,
                               (const MethodInfo_342E348 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !campaign || !Master_object )
    goto LABEL_20;
  if ( !EventCampaignReleaseMaster__isRelease(
          (EventCampaignReleaseMaster_o *)Master_object,
          campaign->fields.eventId,
          campaign->fields.target,
          0) )
    return 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, questId, 0);
  Instance = (Il2CppObject *)BasicHelper__IsNullOrEmpty(
                               (System_Collections_ICollection_o *)campaign->fields.warGroupIds,
                               0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( entity && v8 )
      return WarGroupMaster__HasEntity(
               (WarGroupMaster_o *)v8,
               WarID_ByQuestID,
               HIDWORD(entity[5].klass),
               (int32_t)entity[2].monitor,
               campaign->fields.warGroupIds,
               questId,
               questPhase,
               0);
LABEL_20:
    sub_1C7BD40(Instance, v11);
  }
  eventId = campaign->fields.eventId;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !v12 )
    goto LABEL_20;
  return !EventQuestMaster__IsEventNotIncluded(v12, eventId, questId, questPhase, 7, (int64_t)Instance[8].monitor, 0);
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
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_IEnumerable_int__o *ActRarity; // x0
  SkillLvEntity_o *skillLvEntity; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *v35; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4CEA215 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEA215 = 1;
  }
  v35 = 0;
  entity = 0;
  skillLvEntity = 0;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)skillName,
    StringLiteral_1/*""*/,
    (int32_t)actMaxRarity,
    servantId,
    *(System_String_o **)&servantRarity,
    equipServantId,
    *(int64_t *)&eventId,
    (System_String_o *)method);
  *actMaxRarity = 0;
  if ( ((servantId | servantRarity | equipServantId) & 0x80000000) == 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_35;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           &entity,
           servantId,
           (const MethodInfo_342E348 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      v17 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      v18 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_35;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v17 )
        goto LABEL_35;
      v19 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)v17, equipServantId, 0);
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
            sub_1C7BD48(Instance);
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
                                 &v35,
                                 v24,
                                 (const MethodInfo_342E348 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = v35;
              if ( !v35 )
                goto LABEL_35;
              Instance = (void *)EventEntity__IsEventPeriod((EventEntity_o *)v35, 0, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_25;
              Instance = v35;
              if ( !v35 )
                goto LABEL_35;
              Instance = (void *)EventEntity__IsSkillRelease((EventEntity_o *)v35, 0, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
LABEL_25:
                if ( !v19 )
                  goto LABEL_35;
                Instance = (void *)SkillLvMaster__TryGetEntity(v19, &skillLvEntity, *(_DWORD *)(v23 + 28), 1, 0);
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
          v20 = *((_DWORD *)v21 + 6);
          if ( (int)++v22 >= v20 )
            return 0;
        }
        if ( v18 )
        {
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                       *(_DWORD *)(v23 + 28),
                       (const MethodInfo_342E2FC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( Instance )
          {
            Name = SkillEntity__getName((SkillEntity_o *)Instance, 0);
            *skillName = Name;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)skillName, (int32_t)Name, v27, v28, v29, v30, v31, v32);
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
        sub_1C7BD40(Instance, v15);
      }
    }
  }
  return 0;
}


bool PartyOrganizationUtility__IsRarityRestriction_34996424(
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

  if ( (byte_4CEA216 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEA216 = 1;
  }
  if ( (servantId | servantRarity) < 0 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   servantId,
                   (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v11);
  }
  v13 = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0);
  return Entity && v13 && RarityRestrictedSkillUtil__IsDisabled(v13, (ServantEntity_o *)Entity, servantRarity, 0);
}


bool PartyOrganizationUtility__IsShowBondEquipGuideDialog(
        PartyOrganizationUtility_o *this,
        int32_t targetSvtId,
        int32_t targetEquipSvtId,
        int64_t bondEquipUserSvtId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  void *monitor; // x20
  Il2CppClass *klass; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4CEA22F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEA22F = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_19;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v11 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          targetSvtId,
          (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v12 = DataMasterBase_object__object__int___GetEntity(
          v10,
          targetEquipSvtId,
          (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v12 )
    return (char)v12;
  if ( !ServantMaster__CheckFriendShipSvtEquip(
          (ServantMaster_o *)v10,
          (ServantEntity_o *)v11,
          (ServantEntity_o *)v12,
          0) )
  {
    LOBYTE(v12) = 0;
    return (char)v12;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    bondEquipUserSvtId,
                                    (const MethodInfo_34308A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    LOBYTE(v12) = 1;
    return (char)v12;
  }
  if ( !entity )
LABEL_19:
    sub_1C7BD40(Master_object, v9);
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = klass;
  *(_QWORD *)&v17.fields.fakeValue = monitor;
  LOBYTE(v12) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v17, 0) == targetEquipSvtId;
  return (char)v12;
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  unsigned int v20; // w8
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  QuestUseItemInfo_c *v25; // x0
  QuestUseItemInfo_c *v26; // x0
  int32_t Int_71827884; // w0
  System_Collections_Generic_List_object__o *v28; // x20
  int32_t v29; // w21
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  unsigned int v36; // w8
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  QuestUseItemInfo_c *v41; // x0
  QuestUseItemInfo_c *v42; // x0
  int32_t v43; // w0
  System_Collections_Generic_List_object__o *v44; // x19
  int32_t v45; // w21
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
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
  if ( (byte_4CEA226 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____Clear__);
    sub_1C7BAE8(&PartyOrganizationUtility_TypeInfo);
    sub_1C7BAE8(&QuestUseItemInfo_TypeInfo);
    sub_1C7BAE8(&StringLiteral_809/*","*/);
    this = (PartyOrganizationUtility_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEA226 = 1;
  }
  *(_QWORD *)result = 0;
  v60 = 0;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ItemMaster___);
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
  this = (PartyOrganizationUtility_o *)System_String__Split_64228820(
                                         (System_String_o *)this,
                                         (System_String_o *)StringLiteral_809/*","*/,
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
                                             &v60,
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
                                             (const MethodInfo_342E348 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
          this = (PartyOrganizationUtility_o *)sub_1C7BB90(int___TypeInfo, 3);
          if ( !this )
            goto LABEL_66;
          v20 = (unsigned int)this->fields._normalFollowerInfo;
          method = (const MethodInfo *)this;
          if ( !v20 )
            break;
          this->fields._SelectedNormalFollowerClassId_k__BackingField = result[1];
          if ( v20 == 1 )
            break;
          this->fields._SelectedNormalFollowerGrandGraphId_k__BackingField = result[0];
          if ( v20 <= 2 )
            break;
          this->fields._SelectedNormalFollowerDeckId_k__BackingField = v60;
          if ( !v13 )
            goto LABEL_66;
          items = v13->fields._items;
          v22 = Method_System_Collections_Generic_List_int____Add__;
          ++v13->fields._version;
          if ( !items )
            goto LABEL_66;
          v23 = v13->fields._size;
          if ( (unsigned int)v23 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)this,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + v23;
            v13->fields._size = v23 + 1;
            v24[4] = (Il2CppClass *)method;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)method, v14, v15, v16, v17, v18, v19);
          }
        }
      }
      normalFollowerInfo = (int)v10->fields._normalFollowerInfo;
      v11 += 3;
      if ( v12 + 1 >= normalFollowerInfo )
        goto LABEL_36;
    }
LABEL_65:
    sub_1C7BD48(this);
  }
LABEL_36:
  v25 = QuestUseItemInfo_TypeInfo;
  if ( !QuestUseItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo);
    v25 = QuestUseItemInfo_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v25->static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE, 0) )
  {
    v26 = QuestUseItemInfo_TypeInfo;
    if ( !QuestUseItemInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo);
      v26 = QuestUseItemInfo_TypeInfo;
    }
    Int_71827884 = UnityEngine_PlayerPrefs__GetInt_71827884(
                     v26->static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE,
                     0);
    v28 = (System_Collections_Generic_List_object__o *)v2->fields.questUseItemStateList;
    v29 = Int_71827884;
    this = (PartyOrganizationUtility_o *)sub_1C7BB90(int___TypeInfo, 3);
    if ( !this )
      goto LABEL_66;
    v36 = (unsigned int)this->fields._normalFollowerInfo;
    method = (const MethodInfo *)this;
    if ( !v36 )
      goto LABEL_65;
    this->fields._SelectedNormalFollowerClassId_k__BackingField = v29;
    if ( v36 <= 2 )
      goto LABEL_65;
    this->fields._SelectedNormalFollowerDeckId_k__BackingField = 1;
    if ( !v28 )
      goto LABEL_66;
    v37 = v28->fields._items;
    v38 = Method_System_Collections_Generic_List_int____Add__;
    ++v28->fields._version;
    if ( !v37 )
      goto LABEL_66;
    v39 = v28->fields._size;
    if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v28,
        (Il2CppObject *)this,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = &v37->obj.klass + v39;
      v28->fields._size = v39 + 1;
      v40[4] = (Il2CppClass *)method;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v40 + 4), (int32_t)method, v30, v31, v32, v33, v34, v35);
    }
  }
  v41 = QuestUseItemInfo_TypeInfo;
  if ( !QuestUseItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo);
    v41 = QuestUseItemInfo_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v41->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0) )
  {
    v42 = QuestUseItemInfo_TypeInfo;
    if ( !QuestUseItemInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo);
      v42 = QuestUseItemInfo_TypeInfo;
    }
    v43 = UnityEngine_PlayerPrefs__GetInt_71827884(v42->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0);
    v44 = (System_Collections_Generic_List_object__o *)v2->fields.questUseItemStateList;
    v45 = v43;
    this = (PartyOrganizationUtility_o *)sub_1C7BB90(int___TypeInfo, 3);
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
      v52->fields._SelectedNormalFollowerGrandGraphId_k__BackingField = v53->static_fields->DefaultQuestUseFriendshipUpItemGroupId;
      if ( v54 == 2 )
        goto LABEL_65;
      v52->fields._SelectedNormalFollowerDeckId_k__BackingField = v45;
      if ( v44 )
      {
        v55 = v44->fields._items;
        v56 = Method_System_Collections_Generic_List_int____Add__;
        ++v44->fields._version;
        if ( v55 )
        {
          v57 = v44->fields._size;
          if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v44,
              (Il2CppObject *)v52,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
          }
          else
          {
            v58 = &v55->obj.klass + v57;
            v44->fields._size = v57 + 1;
            v58[4] = (Il2CppClass *)v52;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v58 + 4), (int32_t)v52, v46, v47, v48, v49, v50, v51);
          }
          return;
        }
      }
    }
LABEL_66:
    sub_1C7BD40(this, method);
  }
}


void PartyOrganizationUtility__OpenQuestUseItemDialogTutorial(
        PartyOrganizationUtility_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c_c *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *cachedQuestUseItemInfoList; // x20
  System_Func_object__bool__o *_9__141_0; // x21
  Il2CppObject *v8; // x22
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  PartyOrganizationUtility___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  System_Func_object__int__o *_9__141_1; // x21
  Il2CppObject *v20; // x22
  struct PartyOrganizationUtility___c_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  Il2CppObject *Master_object; // x0
  __int64 v31; // x1
  bool v32; // w21

  if ( (byte_4CEA224 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_QuestUseItemInfo__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
    sub_1C7BAE8(&System_Func_QuestUseItemInfo__bool__TypeInfo);
    sub_1C7BAE8(&System_Func_QuestUseItemInfo__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__141_0__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__141_1__);
    sub_1C7BAE8(&PartyOrganizationUtility___c_TypeInfo);
    byte_4CEA224 = 1;
  }
  v5 = PartyOrganizationUtility___c_TypeInfo;
  cachedQuestUseItemInfoList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v5 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__141_0 = (System_Func_object__bool__o *)v5->static_fields->__9__141_0;
  if ( !_9__141_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = PartyOrganizationUtility___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__141_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__141_0,
      v8,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__141_0__,
      0);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__141_0 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__141_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__141_0,
      (int32_t)_9__141_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          cachedQuestUseItemInfoList,
          (System_Func_TSource__bool__o *)_9__141_0,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v17 = PartyOrganizationUtility___c_TypeInfo;
  v18 = v16;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v17 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__141_1 = (System_Func_object__int__o *)v17->static_fields->__9__141_1;
  if ( !_9__141_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = PartyOrganizationUtility___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__141_1 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__141_1,
      v20,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__141_1__,
      0);
    v21 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v21->__9__141_1 = (struct System_Func_QuestUseItemInfo__int__o *)_9__141_1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v21->__9__141_1, (int32_t)_9__141_1, v22, v23, v24, v25, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TResult__o *)_9__141_1,
                                                               (const MethodInfo_31A5664 *)Method_System_Linq_Enumerable_Select_QuestUseItemInfo__int___);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_int_(
                                                               v28,
                                                               (const MethodInfo_31B3C14 *)Method_System_Linq_Enumerable_ToList_int___);
  Master_object = (Il2CppObject *)System_Linq_Enumerable__Any_int_(
                                    v29,
                                    (const MethodInfo_317BCD4 *)Method_System_Linq_Enumerable_Any_int___);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !v29 )
      goto LABEL_22;
    v32 = System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)v29,
            0,
            (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_object )
LABEL_22:
      sub_1C7BD40(Master_object, v31);
    EventTutorialMaster__checkTutorial_42815384(
      (EventTutorialMaster_o *)Master_object,
      (System_Collections_Generic_List_int__o *)v29,
      71,
      callBack,
      0,
      0,
      0,
      0,
      0,
      !v32,
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
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  ChainableActionBase_o **v15; // x23
  System_Collections_Generic_IEnumerable_TSource__o *cachedQuestUseItemInfoList; // x24
  PartyOrganizationUtility___c_c *v17; // x0
  System_Func_object__bool__o *_9__140_0; // x25
  Il2CppObject *v19; // x26
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  PartyOrganizationUtility___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x24
  System_Func_object__bool__o *_9__140_1; // x25
  Il2CppObject *v31; // x26
  struct PartyOrganizationUtility___c_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  PartyOrganizationUtility___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x24
  System_Func_object__int__o *_9__140_2; // x25
  Il2CppObject *v43; // x26
  struct PartyOrganizationUtility___c_StaticFields *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_Collections_Generic_IEnumerable_T__o *v51; // x24
  System_Action_object__o *v52; // x25
  System_Object_array *v54; // x23
  ActionChain_o *v55; // x22
  __int64 v56; // x23
  System_Action_o *v57; // x24
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  const MethodInfo *v64; // x1
  struct QuestUseItemInfo_array *QuestUseItems; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7

  if ( (byte_4CEA223 & 1) == 0 )
  {
    sub_1C7BAE8(&ActionChain_TypeInfo);
    sub_1C7BAE8(&System_Action___TypeInfo);
    sub_1C7BAE8(&System_Action_QuestUseItemInfo__TypeInfo);
    sub_1C7BAE8(&Method_System_Action_Invoke__);
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_ForEach_QuestUseItemInfo___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderBy_QuestUseItemInfo__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
    sub_1C7BAE8(&System_Func_QuestUseItemInfo__bool__TypeInfo);
    sub_1C7BAE8(&System_Func_QuestUseItemInfo__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Action_Action___ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Action_Action____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_Action_Action___TypeInfo);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__140_0__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__140_1__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__140_2__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__DisplayClass140_0__OpenQuestUseItemExpiredDialog_b__3__);
    sub_1C7BAE8(&PartyOrganizationUtility___c__DisplayClass140_0_TypeInfo);
    sub_1C7BAE8(&PartyOrganizationUtility___c_TypeInfo);
    byte_4CEA223 = 1;
  }
  v5 = sub_1C7BD34(PartyOrganizationUtility___c__DisplayClass140_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.cachedQuestUseItemInfoList, 0) )
    return 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_Action_Action___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_Action_Action____ctor__);
  if ( !v5 )
    goto LABEL_31;
  *(_QWORD *)(v5 + 16) = v6;
  v15 = (ChainableActionBase_o **)(v5 + 16);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)v6, v9, v10, v11, v12, v13, v14);
  cachedQuestUseItemInfoList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList;
  v17 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v17 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__140_0 = (System_Func_object__bool__o *)v17->static_fields->__9__140_0;
  if ( !_9__140_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = PartyOrganizationUtility___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__140_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__140_0,
      v19,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__140_0__,
      0);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__140_0 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__140_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__140_0,
      (int32_t)_9__140_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = System_Linq_Enumerable__Where_object_(
          cachedQuestUseItemInfoList,
          (System_Func_TSource__bool__o *)_9__140_0,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v28 = PartyOrganizationUtility___c_TypeInfo;
  v29 = v27;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v28 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__140_1 = (System_Func_object__bool__o *)v28->static_fields->__9__140_1;
  if ( !_9__140_1 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = PartyOrganizationUtility___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__140_1 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__140_1,
      v31,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__140_1__,
      0);
    v32 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v32->__9__140_1 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__140_1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v32->__9__140_1, (int32_t)_9__140_1, v33, v34, v35, v36, v37, v38);
  }
  v39 = System_Linq_Enumerable__Where_object_(
          v29,
          (System_Func_TSource__bool__o *)_9__140_1,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v40 = PartyOrganizationUtility___c_TypeInfo;
  v41 = v39;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v40 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__140_2 = (System_Func_object__int__o *)v40->static_fields->__9__140_2;
  if ( !_9__140_2 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = PartyOrganizationUtility___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__140_2 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__140_2,
      v43,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__140_2__,
      0);
    v44 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v44->__9__140_2 = (struct System_Func_QuestUseItemInfo__int__o *)_9__140_2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v44->__9__140_2, (int32_t)_9__140_2, v45, v46, v47, v48, v49, v50);
  }
  v51 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                         v41,
                                                         (System_Func_TSource__TKey__o *)_9__140_2,
                                                         (const MethodInfo_319EF58 *)Method_System_Linq_Enumerable_OrderBy_QuestUseItemInfo__int___);
  v52 = (System_Action_object__o *)sub_1C7BD34(System_Action_QuestUseItemInfo__TypeInfo);
  System_Action_object____ctor(
    v52,
    (Il2CppObject *)v5,
    Method_PartyOrganizationUtility___c__DisplayClass140_0__OpenQuestUseItemExpiredDialog_b__3__,
    0);
  BasicHelper__ForEach_object_(
    v51,
    (System_Action_T__o *)v52,
    (const MethodInfo_315C348 *)Method_BasicHelper_ForEach_QuestUseItemInfo___);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v5 + 16), 0) )
    return 0;
  v7 = *v15;
  if ( !*v15 )
    goto LABEL_31;
  v54 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)v7,
          (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
  v55 = (ActionChain_o *)sub_1C7BD34(ActionChain_TypeInfo);
  ActionChain___ctor_49559852(v55, (System_Action_Action__array *)v54, 0);
  v56 = sub_1C7BB90(System_Action___TypeInfo, 1);
  v57 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0);
  if ( !v56 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v56 + 24) )
    sub_1C7BD48(v7);
  *(_QWORD *)(v56 + 32) = v57;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v56 + 32), (int32_t)v57, v58, v59, v60, v61, v62, v63);
  if ( !v55 || (v7 = ChainableActionBase__Final((ChainableActionBase_o *)v55, (System_Action_array *)v56, 0)) == 0 )
LABEL_31:
    sub_1C7BD40(v7, v8);
  ChainableActionBase__Execute(v7, 0);
  QuestUseItems = PartyOrganizationUtility__GetQuestUseItems(this, v64);
  this->fields.cachedQuestUseItemInfoList = QuestUseItems;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.cachedQuestUseItemInfoList,
    (int32_t)QuestUseItems,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  return 1;
}


void PartyOrganizationUtility__SaveQuestUseItemUseState(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *CachedAvailableQuestUseItems; // x20
  System_Action_object__o *v4; // x21
  PartyOrganizationUtility___c_c *v5; // x0
  struct System_Collections_Generic_List_int____o *questUseItemStateList; // x19
  System_Func_object__object__o *_9__144_1; // x20
  Il2CppObject *v8; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  PartyOrganizationUtility_c *v17; // x8
  System_Collections_Generic_IEnumerable_T__o *v18; // x19
  System_String_o *SAVE_KEY_QUEST_USE_ITEM; // x20
  System_String_o *v20; // x0
  QuestUseItemInfo_c *v21; // x0

  if ( (byte_4CEA227 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_QuestUseItemInfo__TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_ForEach_QuestUseItemInfo___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_SelectMany_int____int___);
    sub_1C7BAE8(&System_Func_int____IEnumerable_int___TypeInfo);
    sub_1C7BAE8(&Method_PartyOrganizationUtility__SaveQuestUseItemUseState_b__144_0__);
    sub_1C7BAE8(&PartyOrganizationUtility_TypeInfo);
    sub_1C7BAE8(&QuestUseItemInfo_TypeInfo);
    sub_1C7BAE8(&Method_System_String_Join_int___);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__SaveQuestUseItemUseState_b__144_1__);
    sub_1C7BAE8(&PartyOrganizationUtility___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_809/*","*/);
    byte_4CEA227 = 1;
  }
  CachedAvailableQuestUseItems = (System_Collections_Generic_IEnumerable_T__o *)PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
                                                                                  this,
                                                                                  method);
  v4 = (System_Action_object__o *)sub_1C7BD34(System_Action_QuestUseItemInfo__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_PartyOrganizationUtility__SaveQuestUseItemUseState_b__144_0__,
    0);
  BasicHelper__ForEach_object_(
    CachedAvailableQuestUseItems,
    (System_Action_T__o *)v4,
    (const MethodInfo_315C348 *)Method_BasicHelper_ForEach_QuestUseItemInfo___);
  v5 = PartyOrganizationUtility___c_TypeInfo;
  questUseItemStateList = this->fields.questUseItemStateList;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v5 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__144_1 = (System_Func_object__object__o *)v5->static_fields->__9__144_1;
  if ( !_9__144_1 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = PartyOrganizationUtility___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__144_1 = (System_Func_object__object__o *)sub_1C7BD34(System_Func_int____IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__144_1,
      v8,
      Method_PartyOrganizationUtility___c__SaveQuestUseItemUseState_b__144_1__,
      0);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__144_1 = (struct System_Func_int____IEnumerable_int___o *)_9__144_1;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__144_1,
      (int32_t)_9__144_1,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = System_Linq_Enumerable__SelectMany_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questUseItemStateList,
          (System_Func_TSource__IEnumerable_TResult___o *)_9__144_1,
          (const MethodInfo_31A8760 *)Method_System_Linq_Enumerable_SelectMany_int____int___);
  v17 = PartyOrganizationUtility_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_T__o *)v16;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v17 = PartyOrganizationUtility_TypeInfo;
  }
  SAVE_KEY_QUEST_USE_ITEM = v17->static_fields->SAVE_KEY_QUEST_USE_ITEM;
  v20 = System_String__Join_int_(
          (System_String_o *)StringLiteral_809/*","*/,
          v18,
          (const MethodInfo_321B12C *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_QUEST_USE_ITEM, v20, 0);
  v21 = QuestUseItemInfo_TypeInfo;
  if ( !QuestUseItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo);
    v21 = QuestUseItemInfo_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v21->static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE, 0);
  UnityEngine_PlayerPrefs__DeleteKey(QuestUseItemInfo_TypeInfo->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0);
}


void PartyOrganizationUtility__SetAddPassiveCampaignInfo(
        System_Collections_Generic_List_EventMargeItemUpValInfo__o **infoList,
        int32_t questId,
        int32_t questPhase,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x23
  Il2CppObject *v9; // x22
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *AddPassiveCampaigns; // x0
  const MethodInfo_342E348 **v13; // x27
  const MethodInfo *v14; // x3
  EventCampaignEntity_o *current; // x26
  _BOOL8 IsPassiveCampaignApplicable; // x0
  __int64 v17; // x1
  _BOOL8 IsEnableServant; // x0
  __int64 v19; // x1
  int32_t eventId; // w19
  const MethodInfo_342E348 **v21; // x24
  Il2CppObject *v22; // x20
  int32_t v23; // w21
  EventMargeItemUpValInfo_o *v24; // x25
  int32_t v25; // w27
  System_String_o *AddPassiveContentOrganization; // x28
  Il2CppObject *v27; // x23
  System_String_o *AddPassiveContentDetail; // x0
  int32_t groupId; // w22
  System_String_o *v30; // x29
  System_String_o *AddPassiveDescriptionDetail; // x19
  System_String_o *AddPassiveIconOrganization; // x0
  __int64 v33; // x1
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_Collections_Generic_List_object__o *v41; // x0
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x8
  int32_t v46; // [xsp+10h] [xbp-B0h]
  int32_t v47; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4CEA22E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C7BAE8(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C7BAE8(&PartyOrganizationUtility_TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CEA22E = 1;
  }
  memset(&v51, 0, sizeof(v51));
  entity = 0;
  if ( questId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    v9 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_FunctionMaster___);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance || !Master_object )
      sub_1C7BD40(Instance, v11);
    AddPassiveCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetAddPassiveCampaigns(
                                                                         (EventCampaignMaster_o *)Master_object,
                                                                         (int64_t)Instance[8].monitor,
                                                                         0);
    if ( AddPassiveCampaigns )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v49,
        AddPassiveCampaigns,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
      v13 = (const MethodInfo_342E348 **)&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__;
      v51 = v49;
      v46 = questPhase;
      v47 = questId;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v51,
                (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
      {
        current = (EventCampaignEntity_o *)v51.fields._current;
        if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
        IsPassiveCampaignApplicable = PartyOrganizationUtility__IsPassiveCampaignApplicable(
                                        current,
                                        questId,
                                        questPhase,
                                        v14);
        if ( IsPassiveCampaignApplicable )
        {
          if ( !current )
            sub_1C7BD40(IsPassiveCampaignApplicable, v17);
          IsEnableServant = EventCampaignMaster__IsEnableServant(
                              (EventCampaignMaster_o *)Master_object,
                              svtId,
                              current->fields.eventId,
                              0);
          if ( IsEnableServant )
          {
            if ( !v9 )
              sub_1C7BD40(IsEnableServant, v19);
            if ( DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v9,
                   &entity,
                   current->fields.groupId,
                   *v13) )
            {
              eventId = current->fields.eventId;
              v21 = v13;
              v22 = Master_object;
              v23 = svtId;
              v24 = (EventMargeItemUpValInfo_o *)sub_1C7BD34(EventMargeItemUpValInfo_TypeInfo);
              EventMargeItemUpValInfo___ctor_42292896(v24, eventId, 0);
              v25 = current->fields.eventId;
              AddPassiveContentOrganization = EventCampaignEntity__GetAddPassiveContentOrganization(current, 0);
              v27 = v9;
              AddPassiveContentDetail = EventCampaignEntity__GetAddPassiveContentDetail(current, 0);
              groupId = current->fields.groupId;
              v30 = AddPassiveContentDetail;
              AddPassiveDescriptionDetail = EventCampaignEntity__GetAddPassiveDescriptionDetail(current, 0);
              AddPassiveIconOrganization = EventCampaignEntity__GetAddPassiveIconOrganization(current, 0);
              if ( !entity )
                sub_1C7BD40(AddPassiveIconOrganization, v33);
              if ( !v24 )
                sub_1C7BD40(AddPassiveIconOrganization, v33);
              EventMargeItemUpValInfo__SetAddPassiveCampaign(
                v24,
                v25,
                AddPassiveContentOrganization,
                v30,
                groupId,
                AddPassiveDescriptionDetail,
                AddPassiveIconOrganization,
                (int32_t)entity[1].monitor,
                0);
              v41 = (System_Collections_Generic_List_object__o *)*infoList;
              if ( !*infoList )
                sub_1C7BD40(0, v34);
              items = v41->fields._items;
              v43 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v41->fields._version;
              if ( !items )
                sub_1C7BD40(v41, v34);
              size = v41->fields._size;
              v9 = v27;
              v13 = v21;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v41,
                  (Il2CppObject *)v24,
                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
              }
              else
              {
                v45 = &items->obj.klass + size;
                v41->fields._size = size + 1;
                v45[4] = (Il2CppClass *)v24;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v45 + 4), (int32_t)v24, v35, v36, v37, v38, v39, v40);
              }
              svtId = v23;
              Master_object = v22;
              questPhase = v46;
              questId = v47;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v51,
        (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    }
  }
}


void PartyOrganizationUtility__SetNormalFollowerInfo(
        PartyOrganizationUtility_o *this,
        FollowerInfo_o *followerInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._normalFollowerInfo = followerInfo;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._normalFollowerInfo,
    (int32_t)followerInfo,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationUtility__SetNpcFollowerInfo(
        PartyOrganizationUtility_o *this,
        int32_t key,
        FollowerInfo_o *followerInfo,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *npcFollowerInfos; // x0

  if ( (byte_4CEA218 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
    byte_4CEA218 = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_1C7BD40(0, *(_QWORD *)&key);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
    key,
    (Il2CppObject *)followerInfo,
    (const MethodInfo_34876FC *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
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
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CEA22B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleWaveInfoData___ctor___78730160);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleWaveInfoData__TypeInfo);
    byte_4CEA22B = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleWaveInfoData__TypeInfo);
  v6 = (struct System_Collections_Generic_List_BattleWaveInfoData__o *)v5;
  if ( !waveInfoList )
  {
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
    if ( this )
      goto LABEL_5;
LABEL_7:
    sub_1C7BD40(v7, v8);
  }
  System_Collections_Generic_List_object____ctor_58975984(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)waveInfoList,
    (const MethodInfo_383E6F0 *)Method_System_Collections_Generic_List_BattleWaveInfoData___ctor___78730160);
  if ( !this )
    goto LABEL_7;
LABEL_5:
  this->fields.tempInterruptionWaveInfoList = v6;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.tempInterruptionWaveInfoList,
    (int32_t)v6,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


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
  GrandQuestFolderBoardItem_o *p_temporaryPartyInfo; // x20
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *temporaryPartyInfo; // t1
  Il2CppObject *v23; // x29
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v30; // x1
  GrandQuestFolderBoardItem_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  GrandQuestFolderBoardItem_c *v56; // x20
  Il2CppObject *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  Il2CppObject *v64; // x19
  __int64 v65; // x0
  GrandQuestFolderBoardItem_o *p_parent; // x20
  __int64 v67; // x0
  int32_t v68; // w1
  PartyOrganizationUtility_TemporaryPartyInfo_o *v69; // x0
  const MethodInfo *v70; // x1

  if ( (byte_4CEA212 & 1) == 0 )
  {
    sub_1C7BAE8(&PartyListViewItem___TypeInfo);
    sub_1C7BAE8(&PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo);
    byte_4CEA212 = 1;
  }
  temporaryPartyInfo = this->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (GrandQuestFolderBoardItem_o *)&this->fields.temporaryPartyInfo;
  klass = (char *)temporaryPartyInfo;
  if ( !temporaryPartyInfo )
  {
    v23 = (Il2CppObject *)sub_1C7BD34(PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo);
    System_Object___ctor(v23, 0);
    p_temporaryPartyInfo->klass = (GrandQuestFolderBoardItem_c *)v23;
    sub_1C7BA8C(p_temporaryPartyInfo, (int32_t)v23, v24, v25, v26, v27, v28, v29);
    klass = (char *)p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_18;
  }
  *((_QWORD *)klass + 5) = bgmName;
  v31 = (GrandQuestFolderBoardItem_o *)(klass + 40);
  *(_QWORD *)&v31[-1].fields._IconId_k__BackingField = userServantId;
  v31[-1].fields._ListCreatedTime_k__BackingField = userEquipId;
  LODWORD(v31[-1].fields._ClosedMessage_k__BackingField) = deckNumber;
  sub_1C7BA8C(
    v31,
    (int32_t)bgmName,
    userEquipId,
    deckNumber,
    bgmName,
    (int32_t)battleSetupInfo,
    (int64_t)followerInfo,
    (System_String_o *)basePartyItem);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 6) = battleSetupInfo;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(klass + 48), (int32_t)battleSetupInfo, v32, v33, v34, v35, v36, v37);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 7) = followerInfo;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(klass + 56), (int32_t)followerInfo, v38, v39, v40, v41, v42, v43);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass
    || (*((_QWORD *)klass + 8) = basePartyItem,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(klass + 64), (int32_t)basePartyItem, v44, v45, v46, v47, v48, v49),
        (klass = (char *)p_temporaryPartyInfo->klass) == 0)
    || (*((_QWORD *)klass + 9) = partyItem,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(klass + 72), (int32_t)partyItem, v50, v51, v52, v53, v54, v55),
        (v56 = p_temporaryPartyInfo->klass) == 0) )
  {
LABEL_18:
    sub_1C7BD40(klass, v30);
  }
  LODWORD(v56->_1.declaringType) = selectPartyMemberNum;
  if ( baseDeckItemList )
  {
    v57 = System_Array__Clone((System_Array_o *)baseDeckItemList, 0);
    if ( !v57 )
    {
      v68 = 0;
      v56->_1.parent = 0;
      p_parent = (GrandQuestFolderBoardItem_o *)&v56->_1.parent;
      goto LABEL_17;
    }
    v64 = v57;
    v65 = sub_1C7BC24(v57, PartyListViewItem___TypeInfo);
    if ( v65 )
    {
      v56->_1.parent = (Il2CppClass *)v65;
      p_parent = (GrandQuestFolderBoardItem_o *)&v56->_1.parent;
      v67 = sub_1C7BC24(v64, PartyListViewItem___TypeInfo);
      if ( v67 )
      {
        v68 = v67;
LABEL_17:
        sub_1C7BA8C(p_parent, v68, v58, v59, v60, v61, v62, v63);
        return;
      }
    }
    v69 = (PartyOrganizationUtility_TemporaryPartyInfo_o *)sub_1C7C0DC(v64);
    PartyOrganizationUtility_TemporaryPartyInfo___ctor(v69, v70);
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
  __int64 v10; // x1
  __int64 v11; // x23
  System_Func_object__bool__o *v12; // x20
  Il2CppObject *v13; // x0
  QuestUseItemInfo_o *v14; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *QuestUseItemEventCampaignsByItemId; // x0
  Il2CppObject *v16; // x21
  int32_t v17; // w21
  ItemEntity_o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w21
  ItemEntity_o *v26; // x22
  struct QuestUseItemInfo_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  int64_t outStartedAt; // [xsp+8h] [xbp-48h] BYREF
  int64_t outEndedAt; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CEA21E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_QuestUseItemInfo___);
    sub_1C7BAE8(&System_Func_QuestUseItemInfo__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestUseItemInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestUseItemInfo__Remove__);
    sub_1C7BAE8(&QuestUseItemInfo_TypeInfo);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__DisplayClass135_0__UpdateInterruptionUseItem_b__0__);
    sub_1C7BAE8(&PartyOrganizationUtility___c__DisplayClass135_0_TypeInfo);
    byte_4CEA21E = 1;
  }
  outEndedAt = 0;
  outStartedAt = 0;
  v8 = sub_1C7BD34(PartyOrganizationUtility___c__DisplayClass135_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_30;
  *(_DWORD *)(v8 + 16) = campaignType;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_30;
  v11 = v8 + 24;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          (Il2CppObject **)(v8 + 24),
          itemId,
          (const MethodInfo_342E348 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return;
  v12 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_QuestUseItemInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_PartyOrganizationUtility___c__DisplayClass135_0__UpdateInterruptionUseItem_b__0__,
    0);
  v13 = System_Linq_Enumerable__FirstOrDefault_object__52006308(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestUseItemInfo___);
  if ( !v13 )
  {
    v17 = *(_DWORD *)(v8 + 16);
    v18 = *(ItemEntity_o **)(v8 + 24);
    v14 = (QuestUseItemInfo_o *)sub_1C7BD34(QuestUseItemInfo_TypeInfo);
    QuestUseItemInfo___ctor_35094424(v14, v17, v18, 0);
    if ( !list )
      goto LABEL_30;
    goto LABEL_23;
  }
  v14 = (QuestUseItemInfo_o *)v13;
  if ( LODWORD(v13[1].klass) != itemId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    if ( !Master_object )
      goto LABEL_30;
    QuestUseItemEventCampaignsByItemId = EventCampaignMaster__GetQuestUseItemEventCampaignsByItemId(
                                           (EventCampaignMaster_o *)Master_object,
                                           *(_DWORD *)(v8 + 16),
                                           itemId,
                                           0);
    Master_object = System_Linq_Enumerable__FirstOrDefault_object_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)QuestUseItemEventCampaignsByItemId,
                      (const MethodInfo_3197A00 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___);
    if ( Master_object )
    {
      v16 = Master_object;
      Master_object = *(Il2CppObject **)v11;
      if ( !*(_QWORD *)v11 )
        goto LABEL_30;
      Master_object = (Il2CppObject *)ItemEntity__IsEnable_42926768(
                                        (ItemEntity_o *)Master_object,
                                        (int32_t)v16[1].klass,
                                        0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = *(Il2CppObject **)v11;
        if ( *(_QWORD *)v11 )
        {
          ItemEntity__GetUseLimitAt((ItemEntity_o *)Master_object, (int32_t)v16[1].klass, &outStartedAt, &outEndedAt, 0);
          if ( *(_QWORD *)v11 )
          {
            v14->fields._Id_k__BackingField = *(_DWORD *)(*(_QWORD *)v11 + 16LL);
            v14->fields._EndedAt_k__BackingField = outEndedAt;
            goto LABEL_28;
          }
        }
LABEL_30:
        sub_1C7BD40(Master_object, v10);
      }
    }
    if ( !list )
      goto LABEL_30;
    System_Collections_Generic_List_object___Remove(
      (System_Collections_Generic_List_object__o *)list,
      (Il2CppObject *)v14,
      (const MethodInfo_3840324 *)Method_System_Collections_Generic_List_QuestUseItemInfo__Remove__);
    v25 = *(_DWORD *)(v8 + 16);
    v26 = *(ItemEntity_o **)(v8 + 24);
    v14 = (QuestUseItemInfo_o *)sub_1C7BD34(QuestUseItemInfo_TypeInfo);
    QuestUseItemInfo___ctor_35094424(v14, v25, v26, 0);
LABEL_23:
    items = list->fields._items;
    v28 = Method_System_Collections_Generic_List_QuestUseItemInfo__Add__;
    ++list->fields._version;
    if ( items )
    {
      size = list->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)list,
          (Il2CppObject *)v14,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        list->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v14;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v30 + 4), (int32_t)v14, v19, v20, v21, v22, v23, v24);
      }
      if ( v14 )
        goto LABEL_28;
    }
    goto LABEL_30;
  }
LABEL_28:
  v14->fields._InterruptionUseFlag_k__BackingField = 1;
}


void PartyOrganizationUtility___SaveQuestUseItemUseState_b__144_0(
        PartyOrganizationUtility_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x22
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  QuestUseItemInfo_o **v14; // x20
  int v15; // w25
  bool IsGroupItem; // w0
  struct System_Collections_Generic_List_int____o *questUseItemStateList; // x21
  bool v18; // w24
  System_Func_object__bool__o *v19; // x0
  System_Func_TSource__bool__o *v20; // x23
  intptr_t *v21; // x8
  System_Collections_Generic_List_object__o *v22; // x19
  Il2CppObject *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t Id_k__BackingField; // w9
  unsigned int monitor; // w8
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_4CEA232 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_int_____);
    sub_1C7BAE8(&System_Func_int____bool__TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__DisplayClass144_0__SaveQuestUseItemUseState_b__2__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__DisplayClass144_0__SaveQuestUseItemUseState_b__3__);
    sub_1C7BAE8(&PartyOrganizationUtility___c__DisplayClass144_0_TypeInfo);
    byte_4CEA232 = 1;
  }
  v5 = sub_1C7BD34(PartyOrganizationUtility___c__DisplayClass144_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 16) = info;
  v14 = (QuestUseItemInfo_o **)(v5 + 16);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)info, v8, v9, v10, v11, v12, v13);
  v6 = *(Il2CppObject **)(v5 + 16);
  if ( !v6 )
    goto LABEL_26;
  v15 = BYTE4(v6[5].monitor);
  IsGroupItem = QuestUseItemInfo__get_IsGroupItem((QuestUseItemInfo_o *)v6, 0);
  questUseItemStateList = this->fields.questUseItemStateList;
  v18 = IsGroupItem;
  v19 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_int____bool__TypeInfo);
  v20 = (System_Func_TSource__bool__o *)v19;
  if ( v18 )
    v21 = &Method_PartyOrganizationUtility___c__DisplayClass144_0__SaveQuestUseItemUseState_b__2__;
  else
    v21 = &Method_PartyOrganizationUtility___c__DisplayClass144_0__SaveQuestUseItemUseState_b__3__;
  System_Func_object__bool____ctor(v19, (Il2CppObject *)v5, *v21, 0);
  v6 = System_Linq_Enumerable__FirstOrDefault_object__52006308(
         (System_Collections_Generic_IEnumerable_TSource__o *)questUseItemStateList,
         v20,
         (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_int_____);
  if ( v6 )
  {
    if ( LODWORD(v6[1].monitor) > 2 )
    {
      LODWORD(v6[2].monitor) = v15;
      return;
    }
LABEL_27:
    sub_1C7BD48(v6);
  }
  v22 = (System_Collections_Generic_List_object__o *)this->fields.questUseItemStateList;
  v6 = (Il2CppObject *)sub_1C7BB90(int___TypeInfo, 3);
  if ( !*v14 )
    goto LABEL_26;
  v23 = v6;
  v6 = (Il2CppObject *)QuestUseItemInfo__get_IsGroupItem(*v14, 0);
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
  monitor = (unsigned int)v23[1].monitor;
  if ( !monitor )
    goto LABEL_27;
  LODWORD(v23[2].klass) = Id_k__BackingField;
  if ( !*v14 )
    goto LABEL_26;
  if ( monitor <= 1 )
    goto LABEL_27;
  HIDWORD(v23[2].klass) = (*v14)->fields._GroupId_k__BackingField;
  if ( monitor == 2 )
    goto LABEL_27;
  LODWORD(v23[2].monitor) = v15;
  if ( !v22
    || (items = v22->fields._items,
        v33 = Method_System_Collections_Generic_List_int____Add__,
        ++v22->fields._version,
        !items) )
  {
LABEL_26:
    sub_1C7BD40(v6, v7);
  }
  size = v22->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      v23,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &items->obj.klass + size;
    v22->fields._size = size + 1;
    v35[4] = (Il2CppClass *)v23;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v23, v24, v25, v26, v27, v28, v29);
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


FollowerInfo_o *PartyOrganizationUtility__get_ConfirmedNormalFollowerInfo(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._ConfirmedNormalFollowerInfo_k__BackingField;
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


int32_t PartyOrganizationUtility__get_SelectedConfirmedNormalFollowerClassId(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectedConfirmedNormalFollowerClassId_k__BackingField;
}


int32_t PartyOrganizationUtility__get_SelectedConfirmedNormalFollowerDeckId(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectedConfirmedNormalFollowerDeckId_k__BackingField;
}


int32_t PartyOrganizationUtility__get_SelectedConfirmedNormalFollowerGrandGraphId(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectedConfirmedNormalFollowerGrandGraphId_k__BackingField;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._BasePartyItem_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._BasePartyItem_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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


void PartyOrganizationUtility__set_ConfirmedNormalFollowerInfo(
        PartyOrganizationUtility_o *this,
        FollowerInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ConfirmedNormalFollowerInfo_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ConfirmedNormalFollowerInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._PartyItem_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._PartyItem_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PartyOrganizationUtility__set_PartyItemSmc(
        PartyOrganizationUtility_o *this,
        PartyListViewItem_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._PartyItemSmc_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._PartyItemSmc_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PartyOrganizationUtility__set_SelectEquipNumber(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectEquipNumber_k__BackingField = value;
}


void PartyOrganizationUtility__set_SelectedConfirmedNormalFollowerClassId(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectedConfirmedNormalFollowerClassId_k__BackingField = value;
}


void PartyOrganizationUtility__set_SelectedConfirmedNormalFollowerDeckId(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectedConfirmedNormalFollowerDeckId_k__BackingField = value;
}


void PartyOrganizationUtility__set_SelectedConfirmedNormalFollowerGrandGraphId(
        PartyOrganizationUtility_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectedConfirmedNormalFollowerGrandGraphId_k__BackingField = value;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._TransitionDestinationFromDetail_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._TransitionDestinationFromDetail_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEA233 & 1) == 0 )
  {
    sub_1C7BAE8(&PartyOrganizationUtility___c_TypeInfo);
    byte_4CEA233 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(PartyOrganizationUtility___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyOrganizationUtility___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationUtility___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)PartyOrganizationUtility___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PartyOrganizationUtility___c___ctor(PartyOrganizationUtility___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationUtility___c___GetAdjustUpValInfoArray_b__145_0(
        PartyOrganizationUtility___c_o *this,
        EventMargeItemUpValInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return !x->fields.isInvalid;
}


bool PartyOrganizationUtility___c___GetCachedAvailableQuestUseItems_b__137_0(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C7BD40(this, 0);
  return info->fields._IsValid_k__BackingField;
}


bool PartyOrganizationUtility___c___GetNeedAddAnnotationSkillIds_b__146_0(
        PartyOrganizationUtility___c_o *this,
        System_Collections_Generic_KeyValuePair_int__List_int___o keyValuePair,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *value; // x19

  value = keyValuePair.fields.value;
  if ( (byte_4CEA236 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    this = (PartyOrganizationUtility___c_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_4CEA236 = 1;
  }
  if ( !value )
    sub_1C7BD40(this, *(_QWORD *)&keyValuePair.fields.key);
  return value->fields._size > 1;
}


bool PartyOrganizationUtility___c___GetNeedAddAnnotationSkillIds_b__146_1(
        PartyOrganizationUtility___c_o *this,
        System_Collections_Generic_KeyValuePair_int__List_int___o keyValuePair,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *value; // x19

  value = keyValuePair.fields.value;
  if ( (byte_4CEA237 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    this = (PartyOrganizationUtility___c_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_4CEA237 = 1;
  }
  if ( !value )
    sub_1C7BD40(this, *(_QWORD *)&keyValuePair.fields.key);
  return value->fields._size > 1;
}


int32_t PartyOrganizationUtility___c___GetQuestUseItemIds_b__142_1(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C7BD40(this, 0);
  return info->fields._NotDuplicationGroupId_k__BackingField;
}


System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *PartyOrganizationUtility___c___GetQuestUseItemIds_b__142_2(
        PartyOrganizationUtility___c_o *this,
        System_Linq_IGrouping_int__QuestUseItemInfo__o *group,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__QuestUseItemInfo__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0
  PartyOrganizationUtility___c_c *v8; // x0
  System_Func_object__int__o *_9__142_4; // x20
  Il2CppObject *v10; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v18; // x0
  PartyOrganizationUtility___c_c *v19; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x19
  System_Func_object__long__o *_9__142_5; // x20
  Il2CppObject *v22; // x21
  struct PartyOrganizationUtility___c_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0

  if ( (byte_4CEA235 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_AsEnumerable_QuestUseItemInfo___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderByDescending_QuestUseItemInfo__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Take_QuestUseItemInfo___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ThenBy_QuestUseItemInfo__long___);
    sub_1C7BAE8(&System_Func_QuestUseItemInfo__long__TypeInfo);
    sub_1C7BAE8(&System_Func_QuestUseItemInfo__int__TypeInfo);
    sub_1C7BAE8(&System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_4__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_5__);
    this = (PartyOrganizationUtility___c_o *)sub_1C7BAE8(&PartyOrganizationUtility___c_TypeInfo);
    byte_4CEA235 = 1;
  }
  if ( !group )
    sub_1C7BD40(this, group);
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
    v7 = sub_1C51E70(group, System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo, 0);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__QuestUseItemInfo__o *, _QWORD))v7)(
          group,
          *(_QWORD *)(v7 + 8)) )
    return (System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *)System_Linq_Enumerable__AsEnumerable_object_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)group,
                                                                           (const MethodInfo_317ED18 *)Method_System_Linq_Enumerable_AsEnumerable_QuestUseItemInfo___);
  v8 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v8 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__142_4 = (System_Func_object__int__o *)v8->static_fields->__9__142_4;
  if ( !_9__142_4 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = PartyOrganizationUtility___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__142_4 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__142_4,
      v10,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_4__,
      0);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__142_4 = (struct System_Func_QuestUseItemInfo__int__o *)_9__142_4;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__142_4,
      (int32_t)_9__142_4,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)group,
          (System_Func_TSource__TKey__o *)_9__142_4,
          (const MethodInfo_319F4D8 *)Method_System_Linq_Enumerable_OrderByDescending_QuestUseItemInfo__int___);
  v19 = PartyOrganizationUtility___c_TypeInfo;
  v20 = v18;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v19 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__142_5 = (System_Func_object__long__o *)v19->static_fields->__9__142_5;
  if ( !_9__142_5 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = PartyOrganizationUtility___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__142_5 = (System_Func_object__long__o *)sub_1C7BD34(System_Func_QuestUseItemInfo__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__142_5,
      v22,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_5__,
      0);
    v23 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v23->__9__142_5 = (struct System_Func_QuestUseItemInfo__long__o *)_9__142_5;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v23->__9__142_5, (int32_t)_9__142_5, v24, v25, v26, v27, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__long_(
                                                               v20,
                                                               (System_Func_TSource__TKey__o *)_9__142_5,
                                                               (const MethodInfo_31AE348 *)Method_System_Linq_Enumerable_ThenBy_QuestUseItemInfo__long___);
  return (System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *)System_Linq_Enumerable__Take_object_(
                                                                         v30,
                                                                         1,
                                                                         (const MethodInfo_31ADA04 *)Method_System_Linq_Enumerable_Take_QuestUseItemInfo___);
}


int32_t PartyOrganizationUtility___c___GetQuestUseItemIds_b__142_3(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C7BD40(this, 0);
  return info->fields._Id_k__BackingField;
}


int32_t PartyOrganizationUtility___c___GetQuestUseItemIds_b__142_4(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C7BD40(this, 0);
  return info->fields._Value_k__BackingField;
}


int64_t PartyOrganizationUtility___c___GetQuestUseItemIds_b__142_5(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C7BD40(this, 0);
  return info->fields._EndedAt_k__BackingField;
}


System_Collections_Generic_IEnumerable_int__o *PartyOrganizationUtility___c___GetQuestUseItems_b__134_0(
        PartyOrganizationUtility___c_o *this,
        EventCampaignEntity_o *eventCampaignEntity,
        const MethodInfo *method)
{
  if ( !eventCampaignEntity )
    sub_1C7BD40(this, 0);
  return (System_Collections_Generic_IEnumerable_int__o *)eventCampaignEntity->fields.targetIds;
}


bool PartyOrganizationUtility___c___GetQuestUseItems_b__134_3(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C7BD40(this, 0);
  return !info->fields._IsFriendshipUpEventItem_k__BackingField || QuestUseItemInfo__IsObtained(info, 0);
}


int32_t PartyOrganizationUtility___c___GetQuestUseItems_b__134_4(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C7BD40(this, 0);
  return info->fields._GroupId_k__BackingField;
}


System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *PartyOrganizationUtility___c___GetQuestUseItems_b__134_5(
        PartyOrganizationUtility___c_o *this,
        System_Linq_IGrouping_int__QuestUseItemInfo__o *itemInfoGroup,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__QuestUseItemInfo__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0
  PartyOrganizationUtility___c_c *v8; // x0
  System_Func_object__long__o *_9__134_8; // x20
  Il2CppObject *v10; // x21
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v18; // x0
  PartyOrganizationUtility___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_T1__T2__TResult__o *_9__134_9; // x20
  Il2CppObject *v22; // x21
  struct PartyOrganizationUtility___c_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  Il2CppObject *v30; // x20
  System_Collections_Generic_List_object__o *v31; // x19
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0

  if ( (byte_4CEA234 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Aggregate_QuestUseItemInfo___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_AsEnumerable_QuestUseItemInfo___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderBy_QuestUseItemInfo__long___);
    sub_1C7BAE8(&System_Func_QuestUseItemInfo__long__TypeInfo);
    sub_1C7BAE8(&System_Func_QuestUseItemInfo__QuestUseItemInfo__QuestUseItemInfo__TypeInfo);
    sub_1C7BAE8(&System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestUseItemInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestUseItemInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_QuestUseItemInfo__TypeInfo);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_8__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_9__);
    this = (PartyOrganizationUtility___c_o *)sub_1C7BAE8(&PartyOrganizationUtility___c_TypeInfo);
    byte_4CEA234 = 1;
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
    v7 = sub_1C51E70(itemInfoGroup, System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo, 0);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__QuestUseItemInfo__o *, _QWORD))v7)(
          itemInfoGroup,
          *(_QWORD *)(v7 + 8)) )
    return (System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *)System_Linq_Enumerable__AsEnumerable_object_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)itemInfoGroup,
                                                                           (const MethodInfo_317ED18 *)Method_System_Linq_Enumerable_AsEnumerable_QuestUseItemInfo___);
  v8 = PartyOrganizationUtility___c_TypeInfo;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v8 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__134_8 = (System_Func_object__long__o *)v8->static_fields->__9__134_8;
  if ( !_9__134_8 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = PartyOrganizationUtility___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__134_8 = (System_Func_object__long__o *)sub_1C7BD34(System_Func_QuestUseItemInfo__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__134_8,
      v10,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_8__,
      0);
    static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    static_fields->__9__134_8 = (struct System_Func_QuestUseItemInfo__long__o *)_9__134_8;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__134_8,
      (int32_t)_9__134_8,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = System_Linq_Enumerable__OrderBy_object__long_(
          (System_Collections_Generic_IEnumerable_TSource__o *)itemInfoGroup,
          (System_Func_TSource__TKey__o *)_9__134_8,
          (const MethodInfo_319EFC4 *)Method_System_Linq_Enumerable_OrderBy_QuestUseItemInfo__long___);
  v19 = PartyOrganizationUtility___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
  if ( !PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo);
    v19 = PartyOrganizationUtility___c_TypeInfo;
  }
  _9__134_9 = (System_Func_T1__T2__TResult__o *)v19->static_fields->__9__134_9;
  if ( !_9__134_9 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = PartyOrganizationUtility___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__134_9 = (System_Func_T1__T2__TResult__o *)sub_1C7BD34(System_Func_QuestUseItemInfo__QuestUseItemInfo__QuestUseItemInfo__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__134_9,
      v22,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_9__,
      0);
    v23 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v23->__9__134_9 = (struct System_Func_QuestUseItemInfo__QuestUseItemInfo__QuestUseItemInfo__o *)_9__134_9;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v23->__9__134_9, (int32_t)_9__134_9, v24, v25, v26, v27, v28, v29);
  }
  v30 = System_Linq_Enumerable__Aggregate_object_(
          v20,
          (System_Func_TSource__TSource__TSource__o *)_9__134_9,
          (const MethodInfo_3177D2C *)Method_System_Linq_Enumerable_Aggregate_QuestUseItemInfo___);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_QuestUseItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_QuestUseItemInfo___ctor__);
  if ( !v31
    || (items = v31->fields._items,
        v39 = Method_System_Collections_Generic_List_QuestUseItemInfo__Add__,
        ++v31->fields._version,
        !items) )
  {
LABEL_30:
    sub_1C7BD40(this, itemInfoGroup);
  }
  size = v31->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v31,
      v30,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &items->obj.klass + size;
    v31->fields._size = size + 1;
    v41[4] = (Il2CppClass *)v30;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)v30, v32, v33, v34, v35, v36, v37);
  }
  return (System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *)v31;
}


int32_t PartyOrganizationUtility___c___GetQuestUseItems_b__134_7(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C7BD40(this, 0);
  return info->fields._Priority_k__BackingField;
}


int64_t PartyOrganizationUtility___c___GetQuestUseItems_b__134_8(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemEntity,
        const MethodInfo *method)
{
  if ( !itemEntity )
    sub_1C7BD40(this, 0);
  return itemEntity->fields._EndedAt_k__BackingField;
}


QuestUseItemInfo_o *PartyOrganizationUtility___c___GetQuestUseItems_b__134_9(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *result,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  int32_t Num_k__BackingField; // w8
  QuestUseItemInfo_o *v5; // x0

  if ( !result )
LABEL_9:
    sub_1C7BD40(this, result);
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


bool PartyOrganizationUtility___c___OpenQuestUseItemDialogTutorial_b__141_0(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1C7BD40(this, 0);
  return itemInfo->fields._IsValid_k__BackingField;
}


int32_t PartyOrganizationUtility___c___OpenQuestUseItemDialogTutorial_b__141_1(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C7BD40(this, 0);
  return info->fields._TutorialEventId_k__BackingField;
}


bool PartyOrganizationUtility___c___OpenQuestUseItemExpiredDialog_b__140_0(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1C7BD40(this, 0);
  return itemInfo->fields._IsValid_k__BackingField;
}


bool PartyOrganizationUtility___c___OpenQuestUseItemExpiredDialog_b__140_1(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1C7BD40(this, 0);
  return QuestUseItemInfo__GetUseFlag(itemInfo, 0) && !QuestUseItemInfo__IsEventPeriod(itemInfo, 0);
}


int32_t PartyOrganizationUtility___c___OpenQuestUseItemExpiredDialog_b__140_2(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_1C7BD40(this, 0);
  return itemInfo->fields._BasePriority_k__BackingField;
}


System_Collections_Generic_IEnumerable_int__o *PartyOrganizationUtility___c___SaveQuestUseItemUseState_b__144_1(
        PartyOrganizationUtility___c_o *this,
        System_Int32_array *i,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IEnumerable_int__o *)i;
}


void PartyOrganizationUtility___c__DisplayClass133_0___ctor(
        PartyOrganizationUtility___c__DisplayClass133_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationUtility___c__DisplayClass133_0___GetAvailableQuestUseItemEventCampaignEntities_b__2(
        PartyOrganizationUtility___c__DisplayClass133_0_o *this,
        EventCampaignEntity_o *e,
        const MethodInfo *method)
{
  if ( !e || (this = (PartyOrganizationUtility___c__DisplayClass133_0_o *)this->fields.releaseMaster) == 0 )
    sub_1C7BD40(this, e);
  return EventCampaignReleaseMaster__isRelease(
           (EventCampaignReleaseMaster_o *)this,
           e->fields.eventId,
           e->fields.target,
           0);
}


bool PartyOrganizationUtility___c__DisplayClass133_0___GetAvailableQuestUseItemEventCampaignEntities_b__3(
        PartyOrganizationUtility___c__DisplayClass133_0_o *this,
        EventCampaignEntity_o *eventCampaignEntity,
        const MethodInfo *method)
{
  if ( !eventCampaignEntity )
    sub_1C7BD40(this, 0);
  return !PartyOrganizationUtility___c__DisplayClass133_0___GetAvailableQuestUseItemEventCampaignEntities_g__IsExceptedByEventQuestMaster_0(
            this,
            eventCampaignEntity->fields.eventId,
            method);
}


bool PartyOrganizationUtility___c__DisplayClass133_0___GetAvailableQuestUseItemEventCampaignEntities_b__4(
        PartyOrganizationUtility___c__DisplayClass133_0_o *this,
        EventCampaignEntity_o *eventCampaignEntity,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c__DisplayClass133_0_o *v4; // x19
  System_Int32_array *warGroupIds; // x21
  System_Func_int__bool__o *v7; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  System_Func_int__bool__o *_9__6; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  v4 = this;
  if ( (byte_4CEA239 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_int____78794392);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_All_int___);
    sub_1C7BAE8(&System_Func_int__bool__TypeInfo);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__6__);
    this = (PartyOrganizationUtility___c__DisplayClass133_0_o *)sub_1C7BAE8(&Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_g__IsMatchWarId_1__);
    byte_4CEA239 = 1;
  }
  if ( !eventCampaignEntity )
    sub_1C7BD40(this, eventCampaignEntity);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventCampaignEntity->fields.warGroupIds, 0) )
    return 1;
  warGroupIds = eventCampaignEntity->fields.warGroupIds;
  v7 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v7,
    (Il2CppObject *)v4,
    Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_g__IsMatchWarId_1__,
    0);
  if ( !BasicHelper__Any_int__51745960(
          warGroupIds,
          (System_Func_T__bool__o *)v7,
          (const MethodInfo_31594A8 *)Method_BasicHelper_Any_int____78794392) )
    return 0;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)eventCampaignEntity->fields.warGroupIds;
  _9__6 = v4->fields.__9__6;
  if ( !_9__6 )
  {
    _9__6 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__6,
      (Il2CppObject *)v4,
      Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__6__,
      0);
    v4->fields.__9__6 = _9__6;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.__9__6, (int32_t)_9__6, v10, v11, v12, v13, v14, v15);
  }
  return System_Linq_Enumerable__All_int_(
           v8,
           (System_Func_TSource__bool__o *)_9__6,
           (const MethodInfo_317A24C *)Method_System_Linq_Enumerable_All_int___);
}


bool PartyOrganizationUtility___c__DisplayClass133_0___GetAvailableQuestUseItemEventCampaignEntities_b__5(
        PartyOrganizationUtility___c__DisplayClass133_0_o *this,
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
    sub_1C7BD40(this, warGroupEntity);
  if ( warGroupEntity->fields.questAfterClear == questEntity->fields.afterClear )
    return warGroupEntity->fields.questType == questEntity->fields.type;
  return 0;
}


bool PartyOrganizationUtility___c__DisplayClass133_0___GetAvailableQuestUseItemEventCampaignEntities_b__6(
        PartyOrganizationUtility___c__DisplayClass133_0_o *this,
        int32_t warGroupId,
        const MethodInfo *method)
{
  struct PartyOrganizationUtility_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (PartyOrganizationUtility___c__DisplayClass133_0_o *)this->fields.warGroupIgnoreMaster) == 0 )
    sub_1C7BD40(this, warGroupId);
  return !WarGroupIgnoreMaster__IsIgnoreQuest(
            (WarGroupIgnoreMaster_o *)this,
            warGroupId,
            _4__this->fields._CachedQuestId_k__BackingField,
            _4__this->fields._CachedQuestPhase_k__BackingField,
            0);
}


// local variable allocation has failed, the output may be wrong!
bool PartyOrganizationUtility___c__DisplayClass133_0___GetAvailableQuestUseItemEventCampaignEntities_g__IsExceptedByEventQuestMaster_0(
        PartyOrganizationUtility___c__DisplayClass133_0_o *this,
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
    sub_1C7BD40(eventQuestMaster, *(_QWORD *)&eventId);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool PartyOrganizationUtility___c__DisplayClass133_0___GetAvailableQuestUseItemEventCampaignEntities_g__IsMatchWarId_1(
        PartyOrganizationUtility___c__DisplayClass133_0_o *this,
        int32_t warGroupId,
        const MethodInfo *method)
{
  WarGroupMaster_o *warGroupMaster; // x0
  System_Object_array *v6; // x20
  System_Func_object__bool__o *v7; // x21
  WarGroupEntity_array *entities; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEA238 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_WarGroupEntity___);
    sub_1C7BAE8(&System_Func_WarGroupEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__5__);
    byte_4CEA238 = 1;
  }
  entities = 0;
  warGroupMaster = this->fields.warGroupMaster;
  if ( !warGroupMaster )
    sub_1C7BD40(0, *(_QWORD *)&warGroupId);
  if ( WarGroupMaster__TryGetWarList(warGroupMaster, &entities, warGroupId, 0) )
  {
    v6 = (System_Object_array *)entities;
    v7 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_WarGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v7,
      (Il2CppObject *)this,
      Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__5__,
      0);
    return BasicHelper__Any_object__51746772(
             v6,
             (System_Func_T__bool__o *)v7,
             (const MethodInfo_31597D4 *)Method_BasicHelper_Any_WarGroupEntity___);
  }
  else
  {
    return 0;
  }
}


void PartyOrganizationUtility___c__DisplayClass134_0___ctor(
        PartyOrganizationUtility___c__DisplayClass134_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


__f__AnonymousType3_EventCampaignEntity__ItemEntity__o *PartyOrganizationUtility___c__DisplayClass134_0___GetQuestUseItems_b__1(
        PartyOrganizationUtility___c__DisplayClass134_0_o *this,
        EventCampaignEntity_o *eventCampaignEntity,
        int32_t itemId,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c__DisplayClass134_0_o *v6; // x21
  Il2CppObject *ItemData; // x20
  __f__AnonymousType3__eventCampaignEntity_j__TPar___itemEntity_j__TPar__o *v8; // x21

  v6 = this;
  if ( (byte_4CEA23A & 1) == 0 )
  {
    sub_1C7BAE8(&Method___f__AnonymousType3_EventCampaignEntity__ItemEntity___ctor__);
    this = (PartyOrganizationUtility___c__DisplayClass134_0_o *)sub_1C7BAE8(&_f__AnonymousType3_EventCampaignEntity__ItemEntity__TypeInfo);
    byte_4CEA23A = 1;
  }
  if ( !eventCampaignEntity || (this = (PartyOrganizationUtility___c__DisplayClass134_0_o *)v6->fields.itemMaster) == 0 )
    sub_1C7BD40(this, eventCampaignEntity);
  ItemData = (Il2CppObject *)ItemMaster__GetItemData(
                               (ItemMaster_o *)this,
                               itemId,
                               eventCampaignEntity->fields.eventId,
                               0);
  v8 = (__f__AnonymousType3__eventCampaignEntity_j__TPar___itemEntity_j__TPar__o *)sub_1C7BD34(_f__AnonymousType3_EventCampaignEntity__ItemEntity__TypeInfo);
  _f__AnonymousType3_object__object____ctor(
    v8,
    (Il2CppObject *)eventCampaignEntity,
    ItemData,
    (const MethodInfo_334E74C *)Method___f__AnonymousType3_EventCampaignEntity__ItemEntity___ctor__);
  return (__f__AnonymousType3_EventCampaignEntity__ItemEntity__o *)v8;
}


void PartyOrganizationUtility___c__DisplayClass134_0___GetQuestUseItems_b__10(
        PartyOrganizationUtility___c__DisplayClass134_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !this->fields.__4__this )
    sub_1C7BD40(this, id);
  PartyOrganizationUtility__UpdateInterruptionUseItem((PartyOrganizationUtility_o *)this, this->fields.list, 36, id, v3);
}


QuestUseItemInfo_o *PartyOrganizationUtility___c__DisplayClass134_0___GetQuestUseItems_b__2(
        PartyOrganizationUtility___c__DisplayClass134_0_o *this,
        __f__AnonymousType3_EventCampaignEntity__ItemEntity__o *info,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c__DisplayClass134_0_o *v4; // x20
  UserItemMaster_o *userItemMaster; // x20
  struct ItemEntity_o *itemEntity_i__Field; // x8
  UserItemEntity_o *EntityDefinitely; // x0
  int32_t num; // w20
  EventCampaignEntity_o *eventCampaignEntity_i__Field; // x19
  ItemEntity_o *v11; // x21
  __f__AnonymousType3_EventCampaignEntity__ItemEntity__Fields *p_fields; // t2
  QuestUseItemInfo_o *v13; // x22

  v4 = this;
  if ( (byte_4CEA23B & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&QuestUseItemInfo_TypeInfo);
    sub_1C7BAE8(&Method___f__AnonymousType3_EventCampaignEntity__ItemEntity__get_eventCampaignEntity__);
    this = (PartyOrganizationUtility___c__DisplayClass134_0_o *)sub_1C7BAE8(&Method___f__AnonymousType3_EventCampaignEntity__ItemEntity__get_itemEntity__);
    byte_4CEA23B = 1;
  }
  if ( !info )
    goto LABEL_19;
  if ( !info->fields._itemEntity_i__Field || !info->fields._eventCampaignEntity_i__Field )
    return 0;
  userItemMaster = v4->fields.userItemMaster;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  this = (PartyOrganizationUtility___c__DisplayClass134_0_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (PartyOrganizationUtility___c__DisplayClass134_0_o *)NetworkManager_TypeInfo;
  }
  itemEntity_i__Field = info->fields._itemEntity_i__Field;
  if ( !itemEntity_i__Field || !userItemMaster )
LABEL_19:
    sub_1C7BD40(this, info);
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
  v13 = (QuestUseItemInfo_o *)sub_1C7BD34(QuestUseItemInfo_TypeInfo);
  QuestUseItemInfo___ctor(v13, v11, num, eventCampaignEntity_i__Field, 0);
  return v13;
}


void PartyOrganizationUtility___c__DisplayClass134_0___GetQuestUseItems_b__6(
        PartyOrganizationUtility___c__DisplayClass134_0_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *IsGroupItem; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x19
  struct PartyOrganizationUtility_o *_4__this; // x8
  char v16; // w23
  System_Collections_Generic_IEnumerable_TSource__o *questUseItemStateList; // x20
  System_Func_object__bool__o *v18; // x0
  System_Func_TSource__bool__o *v19; // x22
  intptr_t *v20; // x8

  if ( (byte_4CEA23C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_int_____);
    sub_1C7BAE8(&System_Func_int____bool__TypeInfo);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__DisplayClass134_1__GetQuestUseItems_b__11__);
    sub_1C7BAE8(&Method_PartyOrganizationUtility___c__DisplayClass134_1__GetQuestUseItems_b__12__);
    sub_1C7BAE8(&PartyOrganizationUtility___c__DisplayClass134_1_TypeInfo);
    byte_4CEA23C = 1;
  }
  v5 = sub_1C7BD34(PartyOrganizationUtility___c__DisplayClass134_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = info;
  v14 = v5 + 16;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)info, v8, v9, v10, v11, v12, v13);
  IsGroupItem = *(Il2CppObject **)(v5 + 16);
  if ( !IsGroupItem )
    goto LABEL_14;
  IsGroupItem = (Il2CppObject *)QuestUseItemInfo__get_IsGroupItem((QuestUseItemInfo_o *)IsGroupItem, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v16 = (char)IsGroupItem;
  questUseItemStateList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.questUseItemStateList;
  v18 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_int____bool__TypeInfo);
  v19 = (System_Func_TSource__bool__o *)v18;
  if ( (v16 & 1) != 0 )
    v20 = &Method_PartyOrganizationUtility___c__DisplayClass134_1__GetQuestUseItems_b__11__;
  else
    v20 = &Method_PartyOrganizationUtility___c__DisplayClass134_1__GetQuestUseItems_b__12__;
  System_Func_object__bool____ctor(v18, (Il2CppObject *)v5, *v20, 0);
  IsGroupItem = System_Linq_Enumerable__FirstOrDefault_object__52006308(
                  questUseItemStateList,
                  v19,
                  (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_int_____);
  if ( IsGroupItem )
  {
    if ( LODWORD(IsGroupItem[1].monitor) <= 2 )
      sub_1C7BD48(IsGroupItem);
    if ( *(_QWORD *)v14 )
    {
      *(_BYTE *)(*(_QWORD *)v14 + 92LL) = LODWORD(IsGroupItem[2].monitor) == 1;
      return;
    }
LABEL_14:
    sub_1C7BD40(IsGroupItem, v7);
  }
}


void PartyOrganizationUtility___c__DisplayClass134_1___ctor(
        PartyOrganizationUtility___c__DisplayClass134_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationUtility___c__DisplayClass134_1___GetQuestUseItems_b__11(
        PartyOrganizationUtility___c__DisplayClass134_1_o *this,
        System_Int32_array *list,
        const MethodInfo *method)
{
  struct QuestUseItemInfo_o *info; // x8

  if ( !list )
    goto LABEL_5;
  if ( LODWORD(list->max_length) <= 1 )
    sub_1C7BD48(this);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1C7BD40(this, list);
  return list->m_Items[1] == info->fields._GroupId_k__BackingField;
}


bool PartyOrganizationUtility___c__DisplayClass134_1___GetQuestUseItems_b__12(
        PartyOrganizationUtility___c__DisplayClass134_1_o *this,
        System_Int32_array *list,
        const MethodInfo *method)
{
  struct QuestUseItemInfo_o *info; // x8

  if ( !list )
    goto LABEL_5;
  if ( !LODWORD(list->max_length) )
    sub_1C7BD48(this);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1C7BD40(this, list);
  return list->m_Items[0] == info->fields._Id_k__BackingField;
}


void PartyOrganizationUtility___c__DisplayClass135_0___ctor(
        PartyOrganizationUtility___c__DisplayClass135_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationUtility___c__DisplayClass135_0___UpdateInterruptionUseItem_b__0(
        PartyOrganizationUtility___c__DisplayClass135_0_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C7BD40(this, 0);
  return QuestUseItemInfo__CheckSameItem(info, this->fields.campaignType, this->fields.itemEntity, 0);
}


void PartyOrganizationUtility___c__DisplayClass140_0___ctor(
        PartyOrganizationUtility___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PartyOrganizationUtility___c__DisplayClass140_0___OpenQuestUseItemExpiredDialog_b__3(
        PartyOrganizationUtility___c__DisplayClass140_0_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *actionList; // x19
  System_Action_object__o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4CEA23D & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_Action__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Action_Action___Add__);
    sub_1C7BAE8(&Method_QuestUseItemInfo_OpenExpiredDialog__);
    byte_4CEA23D = 1;
  }
  actionList = (System_Collections_Generic_List_object__o *)this->fields.actionList;
  v6 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v6, (Il2CppObject *)itemInfo, Method_QuestUseItemInfo_OpenExpiredDialog__, 0);
  if ( !actionList
    || (items = actionList->fields._items,
        v16 = Method_System_Collections_Generic_List_Action_Action___Add__,
        ++actionList->fields._version,
        !items) )
  {
    sub_1C7BD40(v7, v8);
  }
  size = actionList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      actionList,
      (Il2CppObject *)v6,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    actionList->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v6;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
  }
}


void PartyOrganizationUtility___c__DisplayClass142_0___ctor(
        PartyOrganizationUtility___c__DisplayClass142_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationUtility___c__DisplayClass142_0___GetQuestUseItemIds_b__0(
        PartyOrganizationUtility___c__DisplayClass142_0_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C7BD40(this, 0);
  return info->fields._CampaignType_k__BackingField == this->fields.campaignType
      && info->fields._UseFlag_k__BackingField
      && info->fields._Num_k__BackingField > 0;
}


void PartyOrganizationUtility___c__DisplayClass144_0___ctor(
        PartyOrganizationUtility___c__DisplayClass144_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationUtility___c__DisplayClass144_0___SaveQuestUseItemUseState_b__2(
        PartyOrganizationUtility___c__DisplayClass144_0_o *this,
        System_Int32_array *list,
        const MethodInfo *method)
{
  struct QuestUseItemInfo_o *info; // x8

  if ( !list )
    goto LABEL_5;
  if ( LODWORD(list->max_length) <= 1 )
    sub_1C7BD48(this);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1C7BD40(this, list);
  return list->m_Items[1] == info->fields._GroupId_k__BackingField;
}


bool PartyOrganizationUtility___c__DisplayClass144_0___SaveQuestUseItemUseState_b__3(
        PartyOrganizationUtility___c__DisplayClass144_0_o *this,
        System_Int32_array *list,
        const MethodInfo *method)
{
  struct QuestUseItemInfo_o *info; // x8

  if ( !list )
    goto LABEL_5;
  if ( !LODWORD(list->max_length) )
    sub_1C7BD48(this);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_1C7BD40(this, list);
  return list->m_Items[0] == info->fields._Id_k__BackingField;
}