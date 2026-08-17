void PartyOrganizationUtility___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596C1FD & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationUtility_TypeInfo);
    sub_2213A60(&StringLiteral_11413/*"QuestUseItem"*/);
    byte_596C1FD = 1;
  }
  v7 = StringLiteral_11413/*"QuestUseItem"*/;
  PartyOrganizationUtility_TypeInfo->static_fields->SAVE_KEY_QUEST_USE_ITEM = (struct System_String_o *)StringLiteral_11413/*"QuestUseItem"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)PartyOrganizationUtility_TypeInfo->static_fields,
    v7,
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct QuestUseItemInfo_array *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_object__o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_596C1FC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int____TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&QuestUseItemInfo___TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
    byte_596C1FC = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  this->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._npcFollowerInfos,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (struct QuestUseItemInfo_array *)sub_2213B20(QuestUseItemInfo___TypeInfo, 0);
  this->fields.cachedQuestUseItemInfoList = v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cachedQuestUseItemInfoList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.questUseItemStateList = (struct System_Collections_Generic_List_int____o *)v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questUseItemStateList,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_47A304C *)Method_SingletonTemplate_PartyOrganizationUtility___ctor__);
}


void PartyOrganizationUtility__CacheQuestUseItems(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  struct QuestUseItemInfo_array *QuestUseItems; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  QuestUseItems = PartyOrganizationUtility__GetQuestUseItems(this, method);
  this->fields.cachedQuestUseItemInfoList = QuestUseItems;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cachedQuestUseItemInfoList,
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FollowerInfo_o **p_ConfirmedNormalFollowerInfo_k__BackingField; // x19

  this->fields._ConfirmedNormalFollowerInfo_k__BackingField = 0;
  p_ConfirmedNormalFollowerInfo_k__BackingField = &this->fields._ConfirmedNormalFollowerInfo_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ConfirmedNormalFollowerInfo_k__BackingField,
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  PartyOrganizationUtility_o *v8; // x19
  const MethodInfo *v9; // x2
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  v8 = this;
  this->fields._normalFollowerInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._normalFollowerInfo, 0, v2, v3, v4, v5, v6, v7);
  v8->fields._SelectedNormalFollowerDeckId_k__BackingField = 0;
  *(_QWORD *)&v8->fields._SelectedNormalFollowerClassId_k__BackingField = 0;
  PartyOrganizationUtility__ClearNpcFollowerInfo(v8, -1, v9);
  v8->fields._ConfirmedNormalFollowerInfo_k__BackingField = 0;
  v8 = (PartyOrganizationUtility_o *)((char *)v8 + 48);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v8, 0, v10, v11, v12, v13, v14, v15);
  LODWORD(v8->fields.restrictionDialogHistoryList) = 0;
  v8->monitor = 0;
}


void PartyOrganizationUtility__ClearNormalFollowerInfo(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FollowerInfo_o **p_normalFollowerInfo; // x19

  this->fields._normalFollowerInfo = 0;
  p_normalFollowerInfo = &this->fields._normalFollowerInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._normalFollowerInfo, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_596C1E5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
    byte_596C1E5 = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( (key & 0x80000000) == 0 )
  {
    if ( npcFollowerInfos )
    {
      System_Collections_Generic_Dictionary_int__object___Remove(
        (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
        key,
        (const MethodInfo_3F9D958 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Remove__);
      return;
    }
LABEL_8:
    sub_2213CDC(npcFollowerInfos, *(_QWORD *)&key);
  }
  if ( !npcFollowerInfos )
    goto LABEL_8;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
    (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Clear__);
}


void PartyOrganizationUtility__ClearQuestUseItemCache(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  struct QuestUseItemInfo_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596C1E6 & 1) == 0 )
  {
    sub_2213A60(&QuestUseItemInfo___TypeInfo);
    byte_596C1E6 = 1;
  }
  v3 = (struct QuestUseItemInfo_array *)sub_2213B20(QuestUseItemInfo___TypeInfo, 0);
  this->fields.cachedQuestUseItemInfoList = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cachedQuestUseItemInfoList,
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
  System_String_o *size; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_Generic_List_BattleWaveInfoData__o *v9; // x8
  MissionNaviTransitionBoardItem_o *p_tempInterruptionWaveInfoList; // x19
  struct System_Collections_Generic_List_BattleWaveInfoData__o *tempInterruptionWaveInfoList; // t1
  int v12; // w9

  if ( (byte_596C1F7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleWaveInfoData__Clear__);
    byte_596C1F7 = 1;
  }
  tempInterruptionWaveInfoList = this->fields.tempInterruptionWaveInfoList;
  p_tempInterruptionWaveInfoList = (MissionNaviTransitionBoardItem_o *)&this->fields.tempInterruptionWaveInfoList;
  v9 = tempInterruptionWaveInfoList;
  if ( tempInterruptionWaveInfoList )
  {
    size = (System_String_o *)(unsigned int)v9->fields._size;
    v12 = v9->fields._version + 1;
    v9->fields._size = 0;
    v9->fields._version = v12;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)v9->fields._items, 0, (int32_t)size, 0);
  }
  p_tempInterruptionWaveInfoList->klass = 0;
  sub_2213A04(p_tempInterruptionWaveInfoList, 0, size, v3, v4, v5, v6, v7);
}


void PartyOrganizationUtility__ClearTemporaryPartyInfo(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *v9; // x0
  MissionNaviTransitionBoardItem_o *p_temporaryPartyInfo; // x19
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *temporaryPartyInfo; // t1
  int32_t v12; // w1
  MissionNaviTransitionBoardItem_o *p_bgmName; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  MissionNaviTransitionBoardItem_c *klass; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  MissionNaviTransitionBoardItem_o *p_parent; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7

  if ( (byte_596C1DE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C1DE = 1;
  }
  temporaryPartyInfo = this->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (MissionNaviTransitionBoardItem_o *)&this->fields.temporaryPartyInfo;
  v9 = temporaryPartyInfo;
  if ( temporaryPartyInfo )
  {
    v12 = (int)StringLiteral_1/*""*/;
    v9->fields.bgmName = (struct System_String_o *)StringLiteral_1/*""*/;
    p_bgmName = (MissionNaviTransitionBoardItem_o *)&v9->fields.bgmName;
    p_bgmName[-1].fields._ClosedMessage_k__BackingField = 0;
    p_bgmName[-1].fields._NaviAction_k__BackingField = 0;
    p_bgmName[-1].fields._BoardType_k__BackingField = -1;
    sub_2213A04(p_bgmName, v12, v2, v3, v4, v5, v6, v7);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    klass->_1.this_arg.data = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&klass->_1.this_arg, 0, v15, v16, v17, v18, v19, v20);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_11;
    *(_QWORD *)&klass->_1.this_arg.bits = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&klass->_1.this_arg.bits, 0, v22, v23, v24, v25, v26, v27);
    klass = p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass
      || (klass->_1.element_class = 0,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&klass->_1.element_class, 0, v28, v29, v30, v31, v32, v33),
          (klass = p_temporaryPartyInfo->klass) == 0)
      || (klass->_1.castClass = 0,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&klass->_1.castClass, 0, v34, v35, v36, v37, v38, v39),
          (klass = p_temporaryPartyInfo->klass) == 0) )
    {
LABEL_11:
      sub_2213CDC(klass, v14);
    }
    klass->_1.parent = 0;
    p_parent = (MissionNaviTransitionBoardItem_o *)&klass->_1.parent;
    p_parent[-1].fields._BoardType_k__BackingField = -1;
    sub_2213A04(p_parent, 0, v40, v41, v42, v43, v44, v45);
    p_temporaryPartyInfo->klass = 0;
    sub_2213A04(p_temporaryPartyInfo, 0, v47, v48, v49, v50, v51, v52);
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
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x20
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x20
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x20
  int v33; // w8
  bool v34; // zf
  __int128 v35; // q0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  Il2CppObject *current; // x28
  int v39; // w8
  int v40; // w8
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  __int64 v45; // x20
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v52; // [xsp+20h] [xbp-90h]
  __int64 *v53; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+30h] [xbp-80h] BYREF
  __int64 v55; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_596C1F5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventMargeItemUpValInfo__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_596C1F5 = 1;
  }
  v55 = 0;
  memset(&v54, 0, sizeof(v54));
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !infoList )
    goto LABEL_73;
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
    v10 = sub_224BC3C(infoList, System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__TypeInfo, 0);
  }
  v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *, _QWORD))v10)(
          infoList,
          *(_QWORD *)(v10 + 8));
  v55 = v11;
  v52 = 0;
  v53 = &v55;
  if ( !v11 )
LABEL_67:
    sub_2213CDC(v11, v12);
  v13 = v11;
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
          goto LABEL_16;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_16:
      v17 = sub_224BC3C(v13, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8));
    if ( (v18 & 1) == 0 )
      break;
    v19 = v55;
    if ( !v55 )
      sub_2213CDC(v18, v6);
    v20 = *(_QWORD *)v55;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventMargeItemUpValInfo__c **)v22 - 1) != System_Collections_Generic_IEnumerator_EventMargeItemUpValInfo__TypeInfo )
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
      v23 = sub_224BC3C(v55, System_Collections_Generic_IEnumerator_EventMargeItemUpValInfo__TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8));
    v32 = v24;
    if ( !v24 )
      sub_2213CDC(0, v25);
    v33 = *(_DWORD *)(v24 + 60);
    v34 = v33 == 1 || v33 == 16;
    if ( v34 || v33 == 111 )
    {
      if ( !v4 )
        sub_2213CDC(v24, v25);
      System_Collections_Generic_List_object___GetEnumerator(
        &v51,
        v4,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v35 = *(_OWORD *)&v51.fields._list;
      v51.fields._list = 0;
      *(_QWORD *)&v51.fields._index = &v54;
      *(_OWORD *)&v54.fields._list = v35;
      v54.fields._current = v51.fields._current;
      while ( 1 )
      {
        v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v54,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v36 )
          break;
        current = v54.fields._current;
        if ( !v54.fields._current )
          sub_2213CDC(v36, v37);
        if ( LODWORD(v54.fields._current[1].klass) == *(_DWORD *)(v32 + 16)
          && LODWORD(v54.fields._current[4].klass) == *(_DWORD *)(v32 + 64)
          && LODWORD(v54.fields._current[3].monitor) == *(_DWORD *)(v32 + 56) )
        {
          goto LABEL_41;
        }
      }
      current = 0;
LABEL_41:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v54,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( current )
      {
        v39 = *(_DWORD *)(v32 + 92);
        if ( v39 >= 1 )
          HIDWORD(current[5].monitor) += v39;
        v40 = *(_DWORD *)(v32 + 96);
        if ( v40 >= 1 )
          LODWORD(current[6].klass) += v40;
        goto LABEL_53;
      }
      items = v4->fields._items;
      v42 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v4->fields._version;
      if ( !items )
        sub_2213CDC(v11, v12);
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
LABEL_52:
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          (Il2CppObject *)v32,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        goto LABEL_53;
      }
    }
    else
    {
      if ( !v4
        || (items = v4->fields._items,
            v42 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__,
            ++v4->fields._version,
            !items) )
      {
        sub_2213CDC(v24, v25);
      }
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
        goto LABEL_52;
    }
    v44 = &items->obj.klass + size;
    v4->fields._size = size + 1;
    v44[4] = (Il2CppClass *)v32;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v44 + 4), v32, v26, v27, v28, v29, v30, v31);
LABEL_53:
    v13 = v55;
    if ( !v55 )
      goto LABEL_67;
  }
  v45 = *v53;
  if ( *v53 )
  {
    v46 = *(_QWORD *)v45;
    v47 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_61;
      }
      v49 = v46 + 16LL * *v48 + 312;
    }
    else
    {
LABEL_61:
      v49 = sub_224BC3C(*v53, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8));
  }
  v5 = v52;
  if ( v52 )
    sub_2213CD4(v52);
  if ( !v4 )
LABEL_73:
    sub_2213CDC(v5, v6);
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v4,
                                            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
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
  Il2CppObject *current; // x26
  int32_t klass_high; // w23
  int monitor_high; // w8
  int32_t v15; // w0
  int32_t Item; // w0
  int32_t v17; // w2
  int32_t klass; // w2
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x27
  int32_t v22; // w23
  int v23; // w8
  int32_t v24; // w19
  int32_t v25; // w19
  int32_t v26; // w19
  int v27; // w8
  const MethodInfo_3F92C0C *v28; // x3
  int v29; // w8
  const MethodInfo_3F92C0C *v30; // x3
  int v31; // w8
  const MethodInfo_3F92C0C *v32; // x3
  __int64 v33; // x1
  __int64 v34; // x2
  PartyOrganizationUtility___c_c *v35; // x0
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__145_0; // x20
  Il2CppObject *v38; // x21
  struct PartyOrganizationUtility___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596C1F3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_2213A60(&System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__GetAdjustUpValInfoArray_b__145_0__);
    sub_2213A60(&PartyOrganizationUtility___c_TypeInfo);
    byte_596C1F3 = 1;
  }
  *isDuplicate = 0;
  memset(&v50, 0, sizeof(v50));
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !infoList )
    sub_2213CDC(v8, v9);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)infoList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    (System_Collections_Generic_List_object__o *)infoList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v50 = v49;
  v49.fields._list = 0;
  *(_QWORD *)&v49.fields._index = &v50;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v10 )
      break;
    current = v50.fields._current;
    if ( !v50.fields._current )
      sub_2213CDC(v10, v11);
    klass_high = HIDWORD(v50.fields._current[6].klass);
    if ( klass_high >= 1 )
    {
      monitor_high = HIDWORD(v50.fields._current[3].monitor);
      switch ( monitor_high )
      {
        case 1:
          goto LABEL_11;
        case 111:
          if ( !v7 )
            sub_2213CDC(v10, v11);
          if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
                 v7,
                 klass_high,
                 (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
          {
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     v7,
                     klass_high,
                     (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          }
          else
          {
            System_Collections_Generic_Dictionary_int__int___Add(
              v7,
              klass_high,
              0,
              (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            Item = 0;
          }
          klass = (int32_t)current[6].klass;
          if ( klass > Item || (klass = HIDWORD(current[5].monitor), klass > Item) )
            System_Collections_Generic_Dictionary_int__int___set_Item(
              v7,
              klass_high,
              klass,
              (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          break;
        case 16:
LABEL_11:
          if ( !v6 )
            sub_2213CDC(v10, v11);
          if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
                 v6,
                 klass_high,
                 (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
          {
            v15 = System_Collections_Generic_Dictionary_int__int___get_Item(
                    v6,
                    klass_high,
                    (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          }
          else
          {
            System_Collections_Generic_Dictionary_int__int___Add(
              v6,
              klass_high,
              0,
              (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            v15 = 0;
          }
          v17 = (int32_t)current[6].klass;
          if ( v17 > v15 )
            System_Collections_Generic_Dictionary_int__int___set_Item(
              v6,
              klass_high,
              v17,
              (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    (System_Collections_Generic_List_object__o *)infoList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v50 = v49;
  v49.fields._list = 0;
  *(_QWORD *)&v49.fields._index = &v50;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v19 )
      break;
    v21 = v50.fields._current;
    if ( !v50.fields._current )
      sub_2213CDC(v19, v20);
    v22 = HIDWORD(v50.fields._current[6].klass);
    if ( v22 <= 0 )
    {
LABEL_41:
      LOBYTE(v21[6].monitor) = 0;
    }
    else
    {
      v23 = HIDWORD(v50.fields._current[3].monitor);
      switch ( v23 )
      {
        case 1:
          goto LABEL_32;
        case 111:
          if ( !v7 )
            sub_2213CDC(v19, v20);
          if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                  v7,
                  v22,
                  (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
            goto LABEL_41;
          v25 = (int32_t)v21[6].klass;
          if ( v25 >= System_Collections_Generic_Dictionary_int__int___get_Item(
                        v7,
                        v22,
                        (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
          {
            v31 = (int)v21[6].klass;
            v32 = (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__;
            LOBYTE(v21[6].monitor) = 0;
            System_Collections_Generic_Dictionary_int__int___set_Item(v7, v22, v31 + 1, v32);
          }
          else
          {
            v26 = HIDWORD(v21[5].monitor);
            if ( v26 <= System_Collections_Generic_Dictionary_int__int___get_Item(
                          v7,
                          v22,
                          (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
            {
LABEL_35:
              LOBYTE(v21[6].monitor) = 1;
              *isDuplicate = 1;
            }
            else
            {
              v27 = HIDWORD(v21[5].monitor);
              v28 = (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__;
              LOBYTE(v21[6].monitor) = 0;
              System_Collections_Generic_Dictionary_int__int___set_Item(v7, v22, v27 + 1, v28);
            }
          }
          break;
        case 16:
LABEL_32:
          if ( !v6 )
            sub_2213CDC(v19, v20);
          if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                  v6,
                  v22,
                  (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
            goto LABEL_41;
          v24 = (int32_t)v21[6].klass;
          if ( v24 < System_Collections_Generic_Dictionary_int__int___get_Item(
                       v6,
                       v22,
                       (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
            goto LABEL_35;
          v29 = (int)v21[6].klass;
          v30 = (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__;
          LOBYTE(v21[6].monitor) = 0;
          System_Collections_Generic_Dictionary_int__int___set_Item(v6, v22, v29 + 1, v30);
          break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  v35 = PartyOrganizationUtility___c_TypeInfo;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v33, v34);
    v35 = PartyOrganizationUtility___c_TypeInfo;
  }
  static_fields = v35->static_fields;
  _9__145_0 = (System_Func_object__bool__o *)static_fields->__9__145_0;
  if ( !_9__145_0 )
  {
    if ( !*(&v35->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v35, v33, v34);
      static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__145_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventMargeItemUpValInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__145_0,
      v38,
      Method_PartyOrganizationUtility___c__GetAdjustUpValInfoArray_b__145_0__,
      0);
    v39 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v39->__9__145_0 = (struct System_Func_EventMargeItemUpValInfo__bool__o *)_9__145_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v39->__9__145_0, (int32_t)_9__145_0, v40, v41, v42, v43, v44, v45);
  }
  v46 = System_Linq_Enumerable__Where_object_(
          source,
          (System_Func_TSource__bool__o *)_9__145_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventMargeItemUpValInfo___);
  return (EventMargeItemUpValInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                            v46,
                                            (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_EventMargeItemUpValInfo___);
}


EventCampaignEntity_array *PartyOrganizationUtility__GetAvailableQuestUseItemEventCampaignEntities(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x2
  Il2CppObject *v17; // x21
  __int64 v18; // x2
  bool v19; // cc
  EventCampaignEntity_array *result; // x0
  Il2CppObject *v21; // x20
  Il2CppObject *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  Il2CppObject *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  Il2CppObject *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  Il2CppObject *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableFriendshipUpItemEventCampaigns; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *AvailableRewardAddItemEventCampaigns; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x20
  System_Func_object__bool__o *v53; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x20
  System_Func_object__bool__o *v55; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x20
  System_Func_object__bool__o *v57; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596C1E7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarGroupIgnoreMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarGroupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Concat_EventCampaignEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_EventCampaignEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    sub_2213A60(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__2__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__3__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__4__);
    sub_2213A60(&PartyOrganizationUtility___c__DisplayClass133_0_TypeInfo);
    byte_596C1E7 = 1;
  }
  entity = 0;
  v3 = sub_2213CCC(PartyOrganizationUtility___c__DisplayClass133_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_28;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_28;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          (Il2CppObject **)(v3 + 40),
          this->fields._CachedQuestId_k__BackingField,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
  v17 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v16);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v16);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !v17 )
LABEL_28:
    sub_2213CDC(Master_object, v5);
  if ( !UserQuestMaster__TryGetEntity(
          (UserQuestMaster_o *)v17,
          &entity,
          (int64_t)Master_object[2].fields.list[1].monitor,
          this->fields._CachedQuestId_k__BackingField,
          0) )
    goto LABEL_31;
  Master_object = *(DataMasterBase_TMaster__TEntity__PKType__o **)(v3 + 40);
  if ( !Master_object )
    goto LABEL_28;
  if ( !QuestEntity__HasFlag((QuestEntity_o *)Master_object, 0x20000, 0) )
    goto LABEL_31;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_28;
  v19 = UserQuestEntity__getClearNum(entity, 0) <= 0;
  result = 0;
  if ( v19 )
  {
LABEL_31:
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v18);
    v21 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    v22 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarGroupMaster___);
    *(_QWORD *)(v3 + 32) = v22;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v22, v23, v24, v25, v26, v27, v28);
    v29 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarGroupIgnoreMaster___);
    *(_QWORD *)(v3 + 56) = v29;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 56), (int32_t)v29, v30, v31, v32, v33, v34, v35);
    v36 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventQuestMaster___);
    *(_QWORD *)(v3 + 16) = v36;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v36, v37, v38, v39, v40, v41, v42);
    v43 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
    *(_QWORD *)(v3 + 48) = v43;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 48), (int32_t)v43, v44, v45, v46, v47, v48, v49);
    if ( v21 )
    {
      AvailableFriendshipUpItemEventCampaigns = EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
                                                  (EventCampaignMaster_o *)v21,
                                                  0);
      AvailableRewardAddItemEventCampaigns = EventCampaignMaster__GetAvailableRewardAddItemEventCampaigns(
                                               (EventCampaignMaster_o *)v21,
                                               0);
      v52 = System_Linq_Enumerable__Concat_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)AvailableFriendshipUpItemEventCampaigns,
              (System_Collections_Generic_IEnumerable_TSource__o *)AvailableRewardAddItemEventCampaigns,
              (const MethodInfo_387607C *)Method_System_Linq_Enumerable_Concat_EventCampaignEntity___);
      v53 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventCampaignEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v53,
        (Il2CppObject *)v3,
        Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__2__,
        0);
      v54 = System_Linq_Enumerable__Where_object_(
              v52,
              (System_Func_TSource__bool__o *)v53,
              (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
      v55 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventCampaignEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v55,
        (Il2CppObject *)v3,
        Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__3__,
        0);
      v56 = System_Linq_Enumerable__Where_object_(
              v54,
              (System_Func_TSource__bool__o *)v55,
              (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
      v57 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventCampaignEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v57,
        (Il2CppObject *)v3,
        Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__4__,
        0);
      v58 = System_Linq_Enumerable__Where_object_(
              v56,
              (System_Func_TSource__bool__o *)v57,
              (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
      return (EventCampaignEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                            v58,
                                            (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_EventCampaignEntity___);
    }
    goto LABEL_28;
  }
  return result;
}


QuestUseItemInfo_array *PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *cachedQuestUseItemInfoList; // x19
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__137_0; // x20
  Il2CppObject *v8; // x21
  struct PartyOrganizationUtility___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_596C1EB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
    sub_2213A60(&System_Func_QuestUseItemInfo__bool__TypeInfo);
    sub_2213A60(&Method_PartyOrganizationUtility___c__GetCachedAvailableQuestUseItems_b__137_0__);
    sub_2213A60(&PartyOrganizationUtility___c_TypeInfo);
    byte_596C1EB = 1;
  }
  v4 = PartyOrganizationUtility___c_TypeInfo;
  cachedQuestUseItemInfoList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, method, v2);
    v4 = PartyOrganizationUtility___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__137_0 = (System_Func_object__bool__o *)static_fields->__9__137_0;
  if ( !_9__137_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__137_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__137_0,
      v8,
      Method_PartyOrganizationUtility___c__GetCachedAvailableQuestUseItems_b__137_0__,
      0);
    v9 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v9->__9__137_0 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__137_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__137_0, (int32_t)_9__137_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          cachedQuestUseItemInfoList,
          (System_Func_TSource__bool__o *)_9__137_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  return (QuestUseItemInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                     v16,
                                     (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
}


QuestUseItemInfo_array *PartyOrganizationUtility__GetCachedQuestUseItems(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  if ( (byte_596C1EC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
    byte_596C1EC = 1;
  }
  return (QuestUseItemInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList,
                                     (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
}


System_Int32_array *PartyOrganizationUtility__GetNeedAddAnnotationSkillIds(
        PartyOrganizationUtility_o *this,
        System_Collections_Generic_IEnumerable_int__o *skillIdList,
        System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *campaignInfoList,
        const MethodInfo *method)
{
  int v6; // w8
  System_Collections_Generic_Dictionary_int__object__o *v7; // x20
  System_Collections_Generic_Dictionary_int__object__o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_EventDropUpValInfo__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 FuncType; // x0
  __int64 v16; // x1
  __int64 v17; // x23
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  int32_t v26; // w23
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  System_Collections_Generic_List_int__o *v30; // x24
  __int64 v31; // x0
  __int64 v32; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  System_Collections_Generic_IEnumerable_int__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  EventDropUpValInfo_array *AddStateAndFriendshipUpInfoArray; // x0
  __int64 v45; // x1
  EventDropUpValInfo_array *v46; // x22
  Il2CppClass *v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  EventDropUpValInfo_array *v53; // x22
  Il2CppClass *v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  int32_t v60; // w22
  EventDropUpValInfo_array *v61; // x23
  int max_length; // w8
  unsigned int v63; // w21
  int32_t v64; // w24
  Il2CppArrayBounds *bounds; // x8
  _QWORD *v66; // x11
  il2cpp_array_size_t *p_max_length; // x9
  unsigned int v68; // w10
  System_Collections_Generic_List_int__o *v69; // x25
  __int64 v70; // x0
  __int64 v71; // x1
  struct System_Int32_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  System_Collections_Generic_List_int__o *v75; // x25
  __int64 v76; // x0
  __int64 v77; // x1
  struct System_Int32_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  EventDropUpValInfo_array *v81; // x22
  Il2CppClass *v82; // x8
  __int64 v83; // x9
  int *v84; // x10
  __int64 v85; // x0
  System_Collections_Generic_List_int__o *v86; // x21
  __int64 v87; // x1
  __int64 v88; // x2
  PartyOrganizationUtility___c_c *v89; // x0
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__146_0; // x22
  Il2CppObject *v92; // x23
  MissionNaviTransitionBoardItem_o *v93; // x0
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  __int64 v100; // x8
  __int64 v101; // x20
  __int64 v102; // x9
  int *v103; // x10
  __int64 v104; // x0
  __int64 v105; // x0
  __int64 v106; // x1
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
  __int64 v121; // x1
  __int64 v122; // x2
  PartyOrganizationUtility___c_c *v123; // x0
  struct PartyOrganizationUtility___c_StaticFields *v124; // x8
  System_Func_T__TResult__o *_9__146_1; // x20
  Il2CppObject *v126; // x22
  struct PartyOrganizationUtility___c_StaticFields *v127; // x0
  System_String_o *v128; // x2
  System_String_o *v129; // x3
  int32_t v130; // w4
  int32_t v131; // w5
  bool v132; // w6
  bool v133; // w7
  __int64 v134; // x8
  __int64 v135; // x19
  __int64 v136; // x9
  int *v137; // x10
  __int64 v138; // x0
  __int64 v139; // x0
  __int64 v140; // x1
  __int64 i; // x19
  __int64 v142; // x8
  __int64 v143; // x9
  int *v144; // x10
  __int64 v145; // x0
  __int64 v146; // x8
  __int64 v147; // x9
  int *v148; // x10
  __int64 v149; // x0
  __int64 v150; // x0
  System_Collections_Generic_IEnumerable_T__o *v151; // x1
  __int64 v152; // x8
  __int64 v153; // x9
  int *v154; // x10
  __int64 v155; // x0
  Il2CppObject *Master_object; // [xsp+8h] [xbp-98h]
  __int64 v158; // [xsp+20h] [xbp-80h]
  __int64 v159; // [xsp+20h] [xbp-80h]
  SkillLvEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  EventDropUpValInfo_array *v161; // [xsp+30h] [xbp-70h]
  __int64 v162; // [xsp+38h] [xbp-68h]

  if ( (byte_596C1F4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_KeyValuePair_int__List_int_____);
    sub_2213A60(&System_Func_KeyValuePair_int__List_int____bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_EventDropUpValInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventDropUpValInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_PartyOrganizationUtility___c__GetNeedAddAnnotationSkillIds_b__146_0__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__GetNeedAddAnnotationSkillIds_b__146_1__);
    sub_2213A60(&PartyOrganizationUtility___c_TypeInfo);
    byte_596C1F4 = 1;
  }
  v161 = 0;
  v162 = 0;
  v6 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, skillIdList, campaignInfoList);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v8,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  if ( campaignInfoList )
  {
    klass = campaignInfoList->klass;
    v12 = *(unsigned __int16 *)&campaignInfoList->klass->_2.rank;
    if ( *(_WORD *)&campaignInfoList->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_EventDropUpValInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventDropUpValInfo__TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_224BC3C(campaignInfoList, System_Collections_Generic_IEnumerable_EventDropUpValInfo__TypeInfo, 0);
    }
    FuncType = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *, _QWORD))v14)(
                 campaignInfoList,
                 *(_QWORD *)(v14 + 8));
    v162 = FuncType;
    if ( !FuncType )
LABEL_46:
      sub_2213CDC(FuncType, v16);
    v17 = FuncType;
    while ( 1 )
    {
      v18 = *(_QWORD *)v17;
      v19 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
      {
        v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v19;
          v20 += 4;
          if ( !v19 )
            goto LABEL_18;
        }
        v21 = v18 + 16LL * *v20 + 312;
      }
      else
      {
LABEL_18:
        v21 = sub_224BC3C(v17, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8));
      if ( (v9 & 1) == 0 )
        break;
      if ( !v162 )
        sub_2213CDC(v9, v10);
      v22 = *(_QWORD *)v162;
      v23 = *(unsigned __int16 *)(*(_QWORD *)v162 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v162 + 302LL) )
      {
        v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_EventDropUpValInfo__c **)v24 - 1) != System_Collections_Generic_IEnumerator_EventDropUpValInfo__TypeInfo )
        {
          --v23;
          v24 += 4;
          if ( !v23 )
            goto LABEL_26;
        }
        v25 = v22 + 16LL * *v24 + 312;
      }
      else
      {
LABEL_26:
        v25 = sub_224BC3C(v162, System_Collections_Generic_IEnumerator_EventDropUpValInfo__TypeInfo, 0);
      }
      FuncType = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v162, *(_QWORD *)(v25 + 8));
      if ( !FuncType )
        sub_2213CDC(0, v16);
      v26 = *(_DWORD *)(FuncType + 52);
      if ( v26 > 0 )
      {
        if ( !*(_QWORD *)(FuncType + 24) )
          sub_2213CDC(FuncType, v16);
        FuncType = EventDropUpValInfo__GetFuncType((EventDropUpValInfo_o *)FuncType, 0);
        if ( (_DWORD)FuncType == 111 )
        {
          if ( !v8 )
            sub_2213CDC(FuncType, v16);
          if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
                 v8,
                 v26,
                 (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
          {
            FuncType = (__int64)System_Collections_Generic_Dictionary_int__object___get_Item(
                                  v8,
                                  v26,
                                  (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
            if ( !FuncType
              || (v27 = *(_QWORD *)(FuncType + 16),
                  v28 = Method_System_Collections_Generic_List_int__Add__,
                  ++*(_DWORD *)(FuncType + 28),
                  !v27) )
            {
              sub_2213CDC(FuncType, v16);
            }
            v29 = *(int *)(FuncType + 24);
            if ( (unsigned int)v29 >= *(_DWORD *)(v27 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)FuncType,
                0,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              *(_DWORD *)(FuncType + 24) = v29 + 1;
              *(_DWORD *)(v27 + 4 * v29 + 32) = 0;
            }
          }
          else
          {
            v30 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v30,
              (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v30
              || (items = v30->fields._items,
                  v34 = Method_System_Collections_Generic_List_int__Add__,
                  ++v30->fields._version,
                  !items) )
            {
              sub_2213CDC(v31, v32);
            }
            size = v30->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v30,
                0,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v30->fields._size = size + 1;
              items->m_Items[size] = 0;
            }
            System_Collections_Generic_Dictionary_int__object___Add(
              v8,
              v26,
              (Il2CppObject *)v30,
              (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
          }
        }
      }
      v17 = v162;
      if ( !v162 )
        goto LABEL_46;
    }
    if ( v162 )
    {
      v36 = *(_QWORD *)v162;
      v37 = *(unsigned __int16 *)(*(_QWORD *)v162 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v162 + 302LL) )
      {
        v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
        {
          --v37;
          v38 += 4;
          if ( !v37 )
            goto LABEL_52;
        }
        v39 = v36 + 16LL * *v38 + 312;
      }
      else
      {
LABEL_52:
        v39 = sub_224BC3C(v162, System_IDisposable_TypeInfo, 0);
      }
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v162, *(_QWORD *)(v39 + 8));
    }
  }
  if ( !skillIdList )
    goto LABEL_228;
  v40 = skillIdList->klass;
  v41 = *(unsigned __int16 *)&skillIdList->klass->_2.rank;
  if ( *(_WORD *)&skillIdList->klass->_2.rank )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)v42 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_60;
    }
    v43 = (__int64)&v40->vtable[*v42];
  }
  else
  {
LABEL_60:
    v43 = sub_224BC3C(skillIdList, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  AddStateAndFriendshipUpInfoArray = (EventDropUpValInfo_array *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v43)(
                                                                   skillIdList,
                                                                   *(_QWORD *)(v43 + 8));
  v161 = AddStateAndFriendshipUpInfoArray;
  if ( !AddStateAndFriendshipUpInfoArray )
LABEL_118:
    sub_2213CDC(AddStateAndFriendshipUpInfoArray, v45);
  v46 = AddStateAndFriendshipUpInfoArray;
  while ( 1 )
  {
    v47 = v46->obj.klass;
    v48 = *(unsigned __int16 *)&v46->obj.klass->_2.rank;
    if ( *(_WORD *)&v46->obj.klass->_2.rank )
    {
      v49 = &v47->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_68;
      }
      v50 = (__int64)&v47->vtable[*v49];
    }
    else
    {
LABEL_68:
      v50 = sub_224BC3C(v46, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v51 = (*(__int64 (__fastcall **)(EventDropUpValInfo_array *, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8));
    if ( (v51 & 1) == 0 )
      break;
    v53 = v161;
    if ( !v161 )
      sub_2213CDC(v51, v52);
    v54 = v161->obj.klass;
    v55 = *(unsigned __int16 *)&v161->obj.klass->_2.rank;
    if ( *(_WORD *)&v161->obj.klass->_2.rank )
    {
      v56 = &v54->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v56 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_76;
      }
      v57 = (__int64)&v54->vtable[*v56];
    }
    else
    {
LABEL_76:
      v57 = sub_224BC3C(v161, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v58 = (*(__int64 (__fastcall **)(EventDropUpValInfo_array *, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8));
    if ( !Master_object )
      sub_2213CDC(v58, v59);
    v60 = v58;
    AddStateAndFriendshipUpInfoArray = (EventDropUpValInfo_array *)SkillLvMaster__TryGetEntity(
                                                                     (SkillLvMaster_o *)Master_object,
                                                                     &entity,
                                                                     v58,
                                                                     1,
                                                                     0);
    if ( ((unsigned __int8)AddStateAndFriendshipUpInfoArray & 1) != 0 )
    {
      if ( !entity )
        sub_2213CDC(0, v45);
      AddStateAndFriendshipUpInfoArray = SkillLvEntity__GetAddStateAndFriendshipUpInfoArray(entity, 0);
      v61 = AddStateAndFriendshipUpInfoArray;
      if ( !AddStateAndFriendshipUpInfoArray )
        sub_2213CDC(0, v45);
      max_length = AddStateAndFriendshipUpInfoArray->max_length;
      if ( max_length >= 1 )
      {
        v63 = 0;
        while ( 1 )
        {
          if ( v63 >= max_length )
            sub_2213CE4(AddStateAndFriendshipUpInfoArray);
          AddStateAndFriendshipUpInfoArray = (EventDropUpValInfo_array *)v61->m_Items[v63];
          if ( !AddStateAndFriendshipUpInfoArray )
            sub_2213CDC(0, v45);
          v64 = HIDWORD(AddStateAndFriendshipUpInfoArray->m_Items[2]);
          if ( v64 < 1 )
            goto LABEL_116;
          if ( !AddStateAndFriendshipUpInfoArray->max_length )
            sub_2213CDC(AddStateAndFriendshipUpInfoArray, v45);
          AddStateAndFriendshipUpInfoArray = (EventDropUpValInfo_array *)EventDropUpValInfo__GetFuncType(
                                                                           (EventDropUpValInfo_o *)AddStateAndFriendshipUpInfoArray,
                                                                           0);
          if ( (_DWORD)AddStateAndFriendshipUpInfoArray == 1 || (_DWORD)AddStateAndFriendshipUpInfoArray == 16 )
            break;
          if ( (_DWORD)AddStateAndFriendshipUpInfoArray == 111 )
          {
            if ( !v8 )
              sub_2213CDC(AddStateAndFriendshipUpInfoArray, v45);
            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                    v8,
                    v64,
                    (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
            {
              v75 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v75,
                (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v75
                || (v78 = v75->fields._items,
                    v79 = Method_System_Collections_Generic_List_int__Add__,
                    ++v75->fields._version,
                    !v78) )
              {
                sub_2213CDC(v76, v77);
              }
              v80 = v75->fields._size;
              if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v75,
                  v60,
                  *(const MethodInfo_4467270 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
              }
              else
              {
                v75->fields._size = v80 + 1;
                v78->m_Items[v80] = v60;
              }
              System_Collections_Generic_Dictionary_int__object___Add(
                v8,
                v64,
                (Il2CppObject *)v75,
                (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              goto LABEL_116;
            }
            AddStateAndFriendshipUpInfoArray = (EventDropUpValInfo_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                             v8,
                                                                             v64,
                                                                             (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
            if ( !AddStateAndFriendshipUpInfoArray
              || (bounds = AddStateAndFriendshipUpInfoArray->bounds,
                  v66 = Method_System_Collections_Generic_List_int__Add__,
                  ++HIDWORD(AddStateAndFriendshipUpInfoArray->max_length),
                  !bounds) )
            {
              sub_2213CDC(AddStateAndFriendshipUpInfoArray, v45);
            }
            p_max_length = &AddStateAndFriendshipUpInfoArray->max_length;
            v68 = AddStateAndFriendshipUpInfoArray->max_length;
            if ( v68 < bounds[1].lower_bound )
            {
LABEL_102:
              *(_DWORD *)p_max_length = v68 + 1;
              *((_DWORD *)&bounds[2].length + (int)v68) = v60;
              goto LABEL_116;
            }
            goto LABEL_96;
          }
LABEL_116:
          max_length = v61->max_length;
          if ( (int)++v63 >= max_length )
            goto LABEL_117;
        }
        if ( !v7 )
          sub_2213CDC(AddStateAndFriendshipUpInfoArray, v45);
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v7,
                v64,
                (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
        {
          v69 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v69,
            (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v69
            || (v72 = v69->fields._items,
                v73 = Method_System_Collections_Generic_List_int__Add__,
                ++v69->fields._version,
                !v72) )
          {
            sub_2213CDC(v70, v71);
          }
          v74 = v69->fields._size;
          if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v69,
              v60,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v69->fields._size = v74 + 1;
            v72->m_Items[v74] = v60;
          }
          System_Collections_Generic_Dictionary_int__object___Add(
            v7,
            v64,
            (Il2CppObject *)v69,
            (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
          goto LABEL_116;
        }
        AddStateAndFriendshipUpInfoArray = (EventDropUpValInfo_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         v7,
                                                                         v64,
                                                                         (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
        if ( !AddStateAndFriendshipUpInfoArray
          || (bounds = AddStateAndFriendshipUpInfoArray->bounds,
              v66 = Method_System_Collections_Generic_List_int__Add__,
              ++HIDWORD(AddStateAndFriendshipUpInfoArray->max_length),
              !bounds) )
        {
          sub_2213CDC(AddStateAndFriendshipUpInfoArray, v45);
        }
        p_max_length = &AddStateAndFriendshipUpInfoArray->max_length;
        v68 = AddStateAndFriendshipUpInfoArray->max_length;
        if ( v68 < bounds[1].lower_bound )
          goto LABEL_102;
LABEL_96:
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)AddStateAndFriendshipUpInfoArray,
          v60,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
        goto LABEL_116;
      }
    }
LABEL_117:
    v46 = v161;
    if ( !v161 )
      goto LABEL_118;
  }
  v81 = v161;
  if ( v161 )
  {
    v82 = v161->obj.klass;
    v83 = *(unsigned __int16 *)&v161->obj.klass->_2.rank;
    if ( *(_WORD *)&v161->obj.klass->_2.rank )
    {
      v84 = &v82->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v84 - 1) != System_IDisposable_TypeInfo )
      {
        --v83;
        v84 += 4;
        if ( !v83 )
          goto LABEL_124;
      }
      v85 = (__int64)&v82->vtable[*v84];
    }
    else
    {
LABEL_124:
      v85 = sub_224BC3C(v161, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(EventDropUpValInfo_array *, _QWORD))v85)(v81, *(_QWORD *)(v85 + 8));
  }
  v86 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v86,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v89 = PartyOrganizationUtility___c_TypeInfo;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v87, v88);
    v89 = PartyOrganizationUtility___c_TypeInfo;
  }
  static_fields = v89->static_fields;
  _9__146_0 = (System_Func_T__TResult__o *)static_fields->__9__146_0;
  if ( !_9__146_0 )
  {
    if ( !*(&v89->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v89, v87, v88);
      static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v92 = (Il2CppObject *)static_fields->__9;
    _9__146_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_int__List_int____bool__TypeInfo);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__146_0,
      v92,
      Method_PartyOrganizationUtility___c__GetNeedAddAnnotationSkillIds_b__146_0__,
      0);
    v93 = (MissionNaviTransitionBoardItem_o *)PartyOrganizationUtility___c_TypeInfo->static_fields;
    v93[1].klass = (MissionNaviTransitionBoardItem_c *)_9__146_0;
    sub_2213A04(v93 + 1, (int32_t)_9__146_0, v94, v95, v96, v97, v98, v99);
  }
  v9 = (__int64)System_Linq_Enumerable__Where_KeyValuePair_int__object__(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                  (System_Func_TSource__bool__o *)_9__146_0,
                  (const MethodInfo_38A1954 *)Method_System_Linq_Enumerable_Where_KeyValuePair_int__List_int_____);
  if ( !v9 )
    goto LABEL_228;
  v100 = *(_QWORD *)v9;
  v101 = v9;
  v102 = *(unsigned __int16 *)(*(_QWORD *)v9 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v9 + 302LL) )
  {
    v103 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____c **)v103 - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo )
    {
      --v102;
      v103 += 4;
      if ( !v102 )
        goto LABEL_138;
    }
    v104 = v100 + 16LL * *v103 + 312;
  }
  else
  {
LABEL_138:
    v104 = sub_224BC3C(v9, System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo, 0);
  }
  v105 = (*(__int64 (__fastcall **)(__int64, _QWORD))v104)(v101, *(_QWORD *)(v104 + 8));
  v158 = v105;
  while ( 1 )
  {
    if ( !v158 )
      sub_2213CDC(v105, v106);
    v107 = *(_QWORD *)v158;
    v108 = *(unsigned __int16 *)(*(_QWORD *)v158 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v158 + 302LL) )
    {
      v109 = (int *)(*(_QWORD *)(v107 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v109 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v108;
        v109 += 4;
        if ( !v108 )
          goto LABEL_146;
      }
      v110 = v107 + 16LL * *v109 + 312;
    }
    else
    {
LABEL_146:
      v110 = sub_224BC3C(v158, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v110)(v158, *(_QWORD *)(v110 + 8)) & 1) == 0 )
      break;
    v111 = *(_QWORD *)v158;
    v112 = *(unsigned __int16 *)(*(_QWORD *)v158 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v158 + 302LL) )
    {
      v113 = (int *)(*(_QWORD *)(v111 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____c **)v113 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo )
      {
        --v112;
        v113 += 4;
        if ( !v112 )
          goto LABEL_153;
      }
      v114 = v111 + 16LL * *v113 + 312;
    }
    else
    {
LABEL_153:
      v114 = sub_224BC3C(v158, System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo, 0);
    }
    v115 = (*(__int64 (__fastcall **)(__int64, _QWORD))v114)(v158, *(_QWORD *)(v114 + 8));
    if ( !v86 )
      sub_2213CDC(v115, v116);
    System_Collections_Generic_List_int___AddRange(
      v86,
      v116,
      (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  v117 = *(_QWORD *)v158;
  v118 = *(unsigned __int16 *)(*(_QWORD *)v158 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v158 + 302LL) )
  {
    v119 = (int *)(*(_QWORD *)(v117 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v119 - 1) != System_IDisposable_TypeInfo )
    {
      --v118;
      v119 += 4;
      if ( !v118 )
        goto LABEL_161;
    }
    v120 = v117 + 16LL * *v119 + 312;
  }
  else
  {
LABEL_161:
    v120 = sub_224BC3C(v158, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v120)(v158, *(_QWORD *)(v120 + 8));
  v123 = PartyOrganizationUtility___c_TypeInfo;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v121, v122);
    v123 = PartyOrganizationUtility___c_TypeInfo;
  }
  v124 = v123->static_fields;
  _9__146_1 = (System_Func_T__TResult__o *)v124->__9__146_1;
  if ( !_9__146_1 )
  {
    if ( !*(&v123->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v123, v121, v122);
      v124 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v126 = (Il2CppObject *)v124->__9;
    _9__146_1 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_int__List_int____bool__TypeInfo);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__146_1,
      v126,
      Method_PartyOrganizationUtility___c__GetNeedAddAnnotationSkillIds_b__146_1__,
      0);
    v127 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v127->__9__146_1 = (struct System_Func_KeyValuePair_int__List_int____bool__o *)_9__146_1;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v127->__9__146_1,
      (int32_t)_9__146_1,
      v128,
      v129,
      v130,
      v131,
      v132,
      v133);
  }
  v9 = (__int64)System_Linq_Enumerable__Where_KeyValuePair_int__object__(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                  (System_Func_TSource__bool__o *)_9__146_1,
                  (const MethodInfo_38A1954 *)Method_System_Linq_Enumerable_Where_KeyValuePair_int__List_int_____);
  if ( !v9 )
    goto LABEL_228;
  v134 = *(_QWORD *)v9;
  v135 = v9;
  v136 = *(unsigned __int16 *)(*(_QWORD *)v9 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v9 + 302LL) )
  {
    v137 = (int *)(*(_QWORD *)(v134 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____c **)v137 - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo )
    {
      --v136;
      v137 += 4;
      if ( !v136 )
        goto LABEL_174;
    }
    v138 = v134 + 16LL * *v137 + 312;
  }
  else
  {
LABEL_174:
    v138 = sub_224BC3C(v9, System_Collections_Generic_IEnumerable_KeyValuePair_int__List_int____TypeInfo, 0);
  }
  v139 = (*(__int64 (__fastcall **)(__int64, _QWORD))v138)(v135, *(_QWORD *)(v138 + 8));
  v159 = v139;
  if ( !v139 )
    sub_2213CDC(0, v140);
  for ( i = v139; ; i = v159 )
  {
    v142 = *(_QWORD *)i;
    v143 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v144 = (int *)(*(_QWORD *)(v142 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v144 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v143;
        v144 += 4;
        if ( !v143 )
          goto LABEL_182;
      }
      v145 = v142 + 16LL * *v144 + 312;
    }
    else
    {
LABEL_182:
      v145 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))v145)(i, *(_QWORD *)(v145 + 8));
    if ( (v9 & 1) == 0 )
      break;
    if ( !v159 )
      sub_2213CDC(v9, v10);
    v146 = *(_QWORD *)v159;
    v147 = *(unsigned __int16 *)(*(_QWORD *)v159 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v159 + 302LL) )
    {
      v148 = (int *)(*(_QWORD *)(v146 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____c **)v148 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo )
      {
        --v147;
        v148 += 4;
        if ( !v147 )
          goto LABEL_190;
      }
      v149 = v146 + 16LL * *v148 + 312;
    }
    else
    {
LABEL_190:
      v149 = sub_224BC3C(v159, System_Collections_Generic_IEnumerator_KeyValuePair_int__List_int____TypeInfo, 0);
    }
    v150 = (*(__int64 (__fastcall **)(__int64, _QWORD))v149)(v159, *(_QWORD *)(v149 + 8));
    if ( !v86 )
      sub_2213CDC(v150, v151);
    System_Collections_Generic_List_int___AddRange(
      v86,
      v151,
      (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( v159 )
  {
    v152 = *(_QWORD *)v159;
    v153 = *(unsigned __int16 *)(*(_QWORD *)v159 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v159 + 302LL) )
    {
      v154 = (int *)(*(_QWORD *)(v152 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v154 - 1) != System_IDisposable_TypeInfo )
      {
        --v153;
        v154 += 4;
        if ( !v153 )
          goto LABEL_200;
      }
      v155 = v152 + 16LL * *v154 + 312;
    }
    else
    {
LABEL_200:
      v155 = sub_224BC3C(v159, System_IDisposable_TypeInfo, 0);
    }
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))v155)(v159, *(_QWORD *)(v155 + 8));
  }
  if ( !v86 )
LABEL_228:
    sub_2213CDC(v9, v10);
  return System_Collections_Generic_List_int___ToArray(
           v86,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_596C1E4 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_int__FollowerInfo___);
    byte_596C1E4 = 1;
  }
  return (FollowerInfo_o *)BasicHelper__GetValue_int__object_(
                             (System_Collections_Generic_Dictionary_K__V__o *)this->fields._npcFollowerInfos,
                             key,
                             0,
                             (const MethodInfo_381447C *)Method_BasicHelper_GetValue_int__FollowerInfo___);
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
  __int64 v11; // x1
  __int64 v12; // x2
  PartyOrganizationUtility___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__142_1; // x20
  Il2CppObject *v17; // x21
  struct PartyOrganizationUtility___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  PartyOrganizationUtility___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x19
  struct PartyOrganizationUtility___c_StaticFields *v30; // x9
  System_Func_object__object__o *_9__142_2; // x20
  Il2CppObject *v32; // x21
  struct PartyOrganizationUtility___c_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  PartyOrganizationUtility___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x19
  struct PartyOrganizationUtility___c_StaticFields *v45; // x9
  System_Func_object__int__o *_9__142_3; // x20
  Il2CppObject *v47; // x21
  struct PartyOrganizationUtility___c_StaticFields *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0

  if ( (byte_596C1F0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_GroupBy_QuestUseItemInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_IGrouping_int__QuestUseItemInfo___QuestUseItemInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_QuestUseItemInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
    sub_2213A60(&System_Func_QuestUseItemInfo__bool__TypeInfo);
    sub_2213A60(&System_Func_QuestUseItemInfo__int__TypeInfo);
    sub_2213A60(&System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___TypeInfo);
    sub_2213A60(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_1__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_2__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_3__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__DisplayClass142_0__GetQuestUseItemIds_b__0__);
    sub_2213A60(&PartyOrganizationUtility___c__DisplayClass142_0_TypeInfo);
    sub_2213A60(&PartyOrganizationUtility___c_TypeInfo);
    byte_596C1F0 = 1;
  }
  v5 = sub_2213CCC(PartyOrganizationUtility___c__DisplayClass142_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_DWORD *)(v5 + 16) = campaignType;
  CachedAvailableQuestUseItems = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
                                                                                        this,
                                                                                        v7);
  v9 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestUseItemInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_PartyOrganizationUtility___c__DisplayClass142_0__GetQuestUseItemIds_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          CachedAvailableQuestUseItems,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v13 = PartyOrganizationUtility___c_TypeInfo;
  v14 = v10;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v11, v12);
    v13 = PartyOrganizationUtility___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__142_1 = (System_Func_object__int__o *)static_fields->__9__142_1;
  if ( !_9__142_1 )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v11, v12);
      static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__142_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__142_1,
      v17,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_1__,
      0);
    v18 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v18->__9__142_1 = (struct System_Func_QuestUseItemInfo__int__o *)_9__142_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->__9__142_1, (int32_t)_9__142_1, v19, v20, v21, v22, v23, v24);
  }
  v25 = System_Linq_Enumerable__GroupBy_object__int_(
          v14,
          (System_Func_TSource__TKey__o *)_9__142_1,
          (const MethodInfo_38831D8 *)Method_System_Linq_Enumerable_GroupBy_QuestUseItemInfo__int___);
  v28 = PartyOrganizationUtility___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)v25;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v26, v27);
    v28 = PartyOrganizationUtility___c_TypeInfo;
  }
  v30 = v28->static_fields;
  _9__142_2 = (System_Func_object__object__o *)v30->__9__142_2;
  if ( !_9__142_2 )
  {
    if ( !*(&v28->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v28, v26, v27);
      v30 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)v30->__9;
    _9__142_2 = (System_Func_object__object__o *)sub_2213CCC(System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___TypeInfo);
    System_Func_object__object____ctor(
      _9__142_2,
      v32,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_2__,
      0);
    v33 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v33->__9__142_2 = (struct System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___o *)_9__142_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->__9__142_2, (int32_t)_9__142_2, v34, v35, v36, v37, v38, v39);
  }
  v40 = System_Linq_Enumerable__SelectMany_object__object_(
          v29,
          (System_Func_TSource__IEnumerable_TResult___o *)_9__142_2,
          (const MethodInfo_3893CAC *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__QuestUseItemInfo___QuestUseItemInfo___);
  v43 = PartyOrganizationUtility___c_TypeInfo;
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)v40;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v41, v42);
    v43 = PartyOrganizationUtility___c_TypeInfo;
  }
  v45 = v43->static_fields;
  _9__142_3 = (System_Func_object__int__o *)v45->__9__142_3;
  if ( !_9__142_3 )
  {
    if ( !*(&v43->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v43, v41, v42);
      v45 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)v45->__9;
    _9__142_3 = (System_Func_object__int__o *)sub_2213CCC(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__142_3,
      v47,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_3__,
      0);
    v48 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v48->__9__142_3 = (struct System_Func_QuestUseItemInfo__int__o *)_9__142_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v48->__9__142_3, (int32_t)_9__142_3, v49, v50, v51, v52, v53, v54);
  }
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v44,
                                                               (System_Func_TSource__TResult__o *)_9__142_3,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_QuestUseItemInfo__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v55,
           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
}


QuestUseItemInfo_array *PartyOrganizationUtility__GetQuestUseItems(
        PartyOrganizationUtility_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  PartyOrganizationUtility_o *v4; // x0
  const MethodInfo *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Master_object; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  Il2CppObject *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo *v28; // x1
  EventCampaignEntity_array *AvailableQuestUseItemEventCampaignEntities; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x21
  PartyOrganizationUtility___c_c *v33; // x0
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__134_0; // x22
  Il2CppObject *v36; // x23
  struct PartyOrganizationUtility___c_StaticFields *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_Func_T1__T2__TResult__o *v44; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x21
  System_Func_object__object__o *v46; // x22
  System_Collections_Generic_IEnumerable_T__o *v47; // x0
  System_Collections_Generic_IEnumerable_T__o *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  PartyOrganizationUtility___c_c *v51; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x21
  struct PartyOrganizationUtility___c_StaticFields *v53; // x9
  System_Func_object__bool__o *_9__134_3; // x22
  Il2CppObject *v55; // x23
  struct PartyOrganizationUtility___c_StaticFields *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  PartyOrganizationUtility___c_c *v66; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x21
  struct PartyOrganizationUtility___c_StaticFields *v68; // x9
  System_Func_object__int__o *_9__134_4; // x22
  Il2CppObject *v70; // x23
  struct PartyOrganizationUtility___c_StaticFields *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v78; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  PartyOrganizationUtility___c_c *v81; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x21
  struct PartyOrganizationUtility___c_StaticFields *v83; // x9
  System_Func_object__object__o *_9__134_5; // x22
  Il2CppObject *v85; // x23
  struct PartyOrganizationUtility___c_StaticFields *v86; // x0
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x0
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  System_Collections_Generic_List_object__o *v100; // x22
  System_Collections_Generic_List_QuestUseItemInfo__o **v101; // x21
  __int64 v102; // x2
  __int64 v103; // x2
  Il2CppObject *v104; // x22
  const MethodInfo *v105; // x4
  UserInterruptionQuestEntity_InterruptionInfo_o *InterruptionInfo; // x0
  UserInterruptionQuestEntity_InterruptionInfo_o *v107; // x22
  System_Collections_Generic_IEnumerable_T__o *useRewardAddItemIds; // x22
  System_Action_int__o *v109; // x23
  System_Collections_Generic_List_object__o *v110; // x19
  System_Action_object__o *v111; // x22
  __int64 v112; // x1
  __int64 v113; // x2
  PartyOrganizationUtility___c_c *v114; // x0
  System_Collections_Generic_List_QuestUseItemInfo__o *v115; // x19
  struct PartyOrganizationUtility___c_StaticFields *v116; // x8
  System_Func_object__int__o *_9__134_7; // x20
  Il2CppObject *v118; // x21
  struct PartyOrganizationUtility___c_StaticFields *v119; // x0
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v126; // x0
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596C1E8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_QuestUseItemInfo__TypeInfo);
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ExcludeNull_QuestUseItemInfo___);
    sub_2213A60(&Method_BasicHelper_ForEach_int___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_GroupBy_QuestUseItemInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_QuestUseItemInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_EventCampaignEntity__int____f__AnonymousType3_EventCampaignEntity__ItemEntity____);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_IGrouping_int__QuestUseItemInfo___QuestUseItemInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select___f__AnonymousType3_EventCampaignEntity__ItemEntity___QuestUseItemInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_QuestUseItemInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
    sub_2213A60(&System_Func_QuestUseItemInfo__bool__TypeInfo);
    sub_2213A60(&System_Func___f__AnonymousType3_EventCampaignEntity__ItemEntity___QuestUseItemInfo__TypeInfo);
    sub_2213A60(&System_Func_EventCampaignEntity__IEnumerable_int___TypeInfo);
    sub_2213A60(&System_Func_QuestUseItemInfo__int__TypeInfo);
    sub_2213A60(&System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___TypeInfo);
    sub_2213A60(&System_Func_EventCampaignEntity__int____f__AnonymousType3_EventCampaignEntity__ItemEntity___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestUseItemInfo__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestUseItemInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestUseItemInfo__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_0__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_3__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_4__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_5__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_7__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__DisplayClass134_0__GetQuestUseItems_b__10__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__DisplayClass134_0__GetQuestUseItems_b__1__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__DisplayClass134_0__GetQuestUseItems_b__2__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__DisplayClass134_0__GetQuestUseItems_b__6__);
    sub_2213A60(&PartyOrganizationUtility___c__DisplayClass134_0_TypeInfo);
    sub_2213A60(&PartyOrganizationUtility___c_TypeInfo);
    byte_596C1E8 = 1;
  }
  entity = 0;
  v3 = sub_2213CCC(PartyOrganizationUtility___c__DisplayClass134_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_57;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  *(_QWORD *)(v3 + 16) = Master_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)Master_object, v15, v16, v17, v18, v19, v20);
  v21 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  *(_QWORD *)(v3 + 24) = v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v21, v22, v23, v24, v25, v26, v27);
  AvailableQuestUseItemEventCampaignEntities = PartyOrganizationUtility__GetAvailableQuestUseItemEventCampaignEntities(
                                                 this,
                                                 v28);
  if ( !AvailableQuestUseItemEventCampaignEntities )
    goto LABEL_32;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)AvailableQuestUseItemEventCampaignEntities;
  v33 = PartyOrganizationUtility___c_TypeInfo;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v30, v31);
    v33 = PartyOrganizationUtility___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__134_0 = (System_Func_object__object__o *)static_fields->__9__134_0;
  if ( !_9__134_0 )
  {
    if ( !*(&v33->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v33, v30, v31);
      static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__134_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_EventCampaignEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__134_0,
      v36,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_0__,
      0);
    v37 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v37->__9__134_0 = (struct System_Func_EventCampaignEntity__IEnumerable_int___o *)_9__134_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v37->__9__134_0, (int32_t)_9__134_0, v38, v39, v40, v41, v42, v43);
  }
  v44 = (System_Func_T1__T2__TResult__o *)sub_2213CCC(System_Func_EventCampaignEntity__int____f__AnonymousType3_EventCampaignEntity__ItemEntity___TypeInfo);
  System_Func_object__int__object____ctor(
    v44,
    (Il2CppObject *)v3,
    Method_PartyOrganizationUtility___c__DisplayClass134_0__GetQuestUseItems_b__1__,
    0);
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int__object_(
                                                               v32,
                                                               (System_Func_TSource__IEnumerable_TCollection___o *)_9__134_0,
                                                               (System_Func_TSource__TCollection__TResult__o *)v44,
                                                               (const MethodInfo_3893E00 *)Method_System_Linq_Enumerable_SelectMany_EventCampaignEntity__int____f__AnonymousType3_EventCampaignEntity__ItemEntity____);
  v46 = (System_Func_object__object__o *)sub_2213CCC(System_Func___f__AnonymousType3_EventCampaignEntity__ItemEntity___QuestUseItemInfo__TypeInfo);
  System_Func_object__object____ctor(
    v46,
    (Il2CppObject *)v3,
    Method_PartyOrganizationUtility___c__DisplayClass134_0__GetQuestUseItems_b__2__,
    0);
  v47 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v45,
                                                         (System_Func_TSource__TResult__o *)v46,
                                                         (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select___f__AnonymousType3_EventCampaignEntity__ItemEntity___QuestUseItemInfo___);
  v48 = BasicHelper__ExcludeNull_object_(
          v47,
          (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_QuestUseItemInfo___);
  v51 = PartyOrganizationUtility___c_TypeInfo;
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)v48;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v49, v50);
    v51 = PartyOrganizationUtility___c_TypeInfo;
  }
  v53 = v51->static_fields;
  _9__134_3 = (System_Func_object__bool__o *)v53->__9__134_3;
  if ( !_9__134_3 )
  {
    if ( !*(&v51->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v51, v49, v50);
      v53 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v55 = (Il2CppObject *)v53->__9;
    _9__134_3 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__134_3,
      v55,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_3__,
      0);
    v56 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v56->__9__134_3 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__134_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v56->__9__134_3, (int32_t)_9__134_3, v57, v58, v59, v60, v61, v62);
  }
  v63 = System_Linq_Enumerable__Where_object_(
          v52,
          (System_Func_TSource__bool__o *)_9__134_3,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v66 = PartyOrganizationUtility___c_TypeInfo;
  v67 = v63;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v64, v65);
    v66 = PartyOrganizationUtility___c_TypeInfo;
  }
  v68 = v66->static_fields;
  _9__134_4 = (System_Func_object__int__o *)v68->__9__134_4;
  if ( !_9__134_4 )
  {
    if ( !*(&v66->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v66, v64, v65);
      v68 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v70 = (Il2CppObject *)v68->__9;
    _9__134_4 = (System_Func_object__int__o *)sub_2213CCC(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__134_4, v70, Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_4__, 0);
    v71 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v71->__9__134_4 = (struct System_Func_QuestUseItemInfo__int__o *)_9__134_4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v71->__9__134_4, (int32_t)_9__134_4, v72, v73, v74, v75, v76, v77);
  }
  v78 = System_Linq_Enumerable__GroupBy_object__int_(
          v67,
          (System_Func_TSource__TKey__o *)_9__134_4,
          (const MethodInfo_38831D8 *)Method_System_Linq_Enumerable_GroupBy_QuestUseItemInfo__int___);
  v81 = PartyOrganizationUtility___c_TypeInfo;
  v82 = (System_Collections_Generic_IEnumerable_TSource__o *)v78;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v79, v80);
    v81 = PartyOrganizationUtility___c_TypeInfo;
  }
  v83 = v81->static_fields;
  _9__134_5 = (System_Func_object__object__o *)v83->__9__134_5;
  if ( !_9__134_5 )
  {
    if ( !*(&v81->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v81, v79, v80);
      v83 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v85 = (Il2CppObject *)v83->__9;
    _9__134_5 = (System_Func_object__object__o *)sub_2213CCC(System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___TypeInfo);
    System_Func_object__object____ctor(
      _9__134_5,
      v85,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_5__,
      0);
    v86 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v86->__9__134_5 = (struct System_Func_IGrouping_int__QuestUseItemInfo___IEnumerable_QuestUseItemInfo___o *)_9__134_5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v86->__9__134_5, (int32_t)_9__134_5, v87, v88, v89, v90, v91, v92);
  }
  v93 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v82,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__134_5,
                                                               (const MethodInfo_3893CAC *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__QuestUseItemInfo___QuestUseItemInfo___);
  v100 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                        v93,
                                                        (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_QuestUseItemInfo___);
  if ( !v100 )
  {
LABEL_32:
    v100 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestUseItemInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v100,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestUseItemInfo___ctor__);
  }
  *(_QWORD *)(v3 + 40) = v100;
  v101 = (System_Collections_Generic_List_QuestUseItemInfo__o **)(v3 + 40);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)v100, v94, v95, v96, v97, v98, v99);
  if ( this->fields._IsWaveBattleRestart_k__BackingField )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v102);
    v104 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v103);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    v4 = (PartyOrganizationUtility_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v103);
      v4 = (PartyOrganizationUtility_o *)NetworkManager_TypeInfo;
    }
    if ( v104 )
    {
      v4 = (PartyOrganizationUtility_o *)UserInterruptionQuestMaster__TryGetEntity(
                                           (UserInterruptionQuestMaster_o *)v104,
                                           &entity,
                                           (int64_t)v4->fields.temporaryPartyInfo->fields.basePartyItem,
                                           this->fields._CachedQuestId_k__BackingField,
                                           this->fields._CachedQuestPhase_k__BackingField,
                                           0);
      if ( ((unsigned __int8)v4 & 1) == 0 )
        goto LABEL_49;
      if ( entity )
      {
        PartyOrganizationUtility__UpdateInterruptionUseItem(v4, *v101, 30, entity->fields.campaignItemId, v105);
        v4 = (PartyOrganizationUtility_o *)entity;
        if ( entity )
        {
          InterruptionInfo = UserInterruptionQuestEntity__GetInterruptionInfo(entity, 0);
          if ( InterruptionInfo )
          {
            v107 = InterruptionInfo;
            if ( !BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)InterruptionInfo->fields.useRewardAddItemIds,
                    0) )
            {
              useRewardAddItemIds = (System_Collections_Generic_IEnumerable_T__o *)v107->fields.useRewardAddItemIds;
              v109 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
              System_Action_int____ctor(
                v109,
                (Il2CppObject *)v3,
                Method_PartyOrganizationUtility___c__DisplayClass134_0__GetQuestUseItems_b__10__,
                0);
              BasicHelper__ForEach_int_(
                useRewardAddItemIds,
                (System_Action_T__o *)v109,
                (const MethodInfo_3811CEC *)Method_BasicHelper_ForEach_int___);
            }
          }
          goto LABEL_49;
        }
      }
    }
LABEL_57:
    sub_2213CDC(v4, v5);
  }
LABEL_49:
  PartyOrganizationUtility__LoadQuestUseItemUseState(this, v5);
  v110 = *(System_Collections_Generic_List_object__o **)(v3 + 40);
  v111 = (System_Action_object__o *)sub_2213CCC(System_Action_QuestUseItemInfo__TypeInfo);
  System_Action_object____ctor(
    v111,
    (Il2CppObject *)v3,
    Method_PartyOrganizationUtility___c__DisplayClass134_0__GetQuestUseItems_b__6__,
    0);
  if ( !v110 )
    goto LABEL_57;
  System_Collections_Generic_List_object___ForEach(
    v110,
    (System_Action_T__o *)v111,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_QuestUseItemInfo__ForEach__);
  v114 = PartyOrganizationUtility___c_TypeInfo;
  v115 = *v101;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v112, v113);
    v114 = PartyOrganizationUtility___c_TypeInfo;
  }
  v116 = v114->static_fields;
  _9__134_7 = (System_Func_object__int__o *)v116->__9__134_7;
  if ( !_9__134_7 )
  {
    if ( !*(&v114->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v114, v112, v113);
      v116 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v118 = (Il2CppObject *)v116->__9;
    _9__134_7 = (System_Func_object__int__o *)sub_2213CCC(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__134_7,
      v118,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_7__,
      0);
    v119 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v119->__9__134_7 = (struct System_Func_QuestUseItemInfo__int__o *)_9__134_7;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v119->__9__134_7,
      (int32_t)_9__134_7,
      v120,
      v121,
      v122,
      v123,
      v124,
      v125);
  }
  v126 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v115,
                                                                (System_Func_TSource__TKey__o *)_9__134_7,
                                                                (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_QuestUseItemInfo__int___);
  return (QuestUseItemInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                     v126,
                                     (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_QuestUseItemInfo___);
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x0
  System_String_o *v17; // x24
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *v20; // x26
  Il2CppObject *RarityType; // x0
  System_String_o *v22; // x25
  System_String_o *v23; // x0
  System_String_o *v24; // x23
  System_String_o *v25; // x0
  System_String_o *v26; // x22
  System_String_o *v27; // x26
  System_String_o *v28; // x27
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  System_String_o *v33; // x21
  int32_t stringLength; // w27
  int32_t v35; // w28

  if ( (byte_596C1E2 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_10513/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/);
    sub_2213A60(&StringLiteral_10517/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/);
    sub_2213A60(&StringLiteral_10516/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/);
    sub_2213A60(&StringLiteral_10512/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/);
    sub_2213A60(&StringLiteral_10515/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/);
    sub_2213A60(&StringLiteral_10514/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/);
    byte_596C1E2 = 1;
  }
  v13 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v13, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10512/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE1"*/, 0);
  v17 = System_String__Format(v16, (Il2CppObject *)servantName, 0);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10513/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE2"*/, 0);
  if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v18, v19);
  RarityType = (Il2CppObject *)Rarity__getRarityType(servantRarity, 0);
  v22 = System_String__Format(v20, RarityType, 0);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10514/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE3"*/, 0);
  v24 = System_String__Format(v23, (Il2CppObject *)equipName, 0);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_10515/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE4"*/, 0);
  v26 = System_String__Format(v25, (Il2CppObject *)skillName, 0);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_10516/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE5"*/, 0);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_10517/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_MESSAGE6"*/, 0);
  v29 = (Il2CppObject *)Rarity__getRarityType(actMaxRarity, 0);
  v30 = System_String__Format(v28, v29, 0);
  if ( !v17 || !v24 )
    goto LABEL_14;
  v33 = v30;
  stringLength = v17->fields._stringLength;
  v35 = v24->fields._stringLength;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v31, v32);
  v30 = (System_String_o *)System_Math__Max_77153260(stringLength, v35, 0);
  *maxLength = (int)v30;
  if ( !v26
    || (v30 = (System_String_o *)System_Math__Max_77153260((int32_t)v30, v26->fields._stringLength, 0),
        *maxLength = (int)v30,
        !v13) )
  {
LABEL_14:
    sub_2213CDC(v30, v31);
  }
  System_Text_StringBuilder__Append_75735064(v13, v17, 0);
  System_Text_StringBuilder__Append_75735064(v13, v22, 0);
  System_Text_StringBuilder__Append_75735064(v13, v24, 0);
  System_Text_StringBuilder__Append_75735064(v13, v26, 0);
  System_Text_StringBuilder__Append_75735064(v13, v27, 0);
  System_Text_StringBuilder__Append_75735064(v13, v33, 0);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v13->klass->vtable._3_ToString.methodPtr)(
                              v13,
                              v13->klass->vtable._3_ToString.method);
}


System_String_o *PartyOrganizationUtility__GetServantShortName(
        PartyOrganizationUtility_o *this,
        int32_t baseSvtId,
        int32_t svtId,
        bool isCommonName,
        const MethodInfo *method)
{
  return CombineUtility__GetServantShortName(baseSvtId, svtId, isCommonName, 0);
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

  if ( (byte_596C1ED & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596C1ED = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  *startingNum = 0;
  *subNum = 0;
  *myCnt = 0;
  if ( !*(&v9->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v9, startingNum, subNum);
    v9 = BalanceConfig_TypeInfo;
  }
  if ( v9->static_fields->StartingMemberFriendshipRate >= 1000 && this->fields._PartyItemSmc_k__BackingField )
  {
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      if ( !*(&v9->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v9, startingNum, subNum);
        v9 = BalanceConfig_TypeInfo;
      }
      static_fields = v9->static_fields;
      if ( v10 >= static_fields->DeckMemberMax )
      {
        if ( *myCnt )
        {
          if ( !*(&v9->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v9, startingNum, subNum);
            static_fields = BalanceConfig_TypeInfo->static_fields;
          }
          v14 = static_fields->StartingMemberFriendshipRate - 1000;
          *startingNum = v14;
          if ( v11 >= 1 )
            *subNum = v14 / 5;
        }
        return;
      }
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
          sub_2213CDC(PartyItemSmc_k__BackingField, startingNum);
        v11 += LOBYTE(PartyItemSmc_k__BackingField->fields.id);
        if ( !LOBYTE(PartyItemSmc_k__BackingField->fields.id) )
        {
LABEL_18:
          if ( !PartyOrganizationListViewItem__get_IsEmpty(
                  (PartyOrganizationListViewItem_o *)PartyItemSmc_k__BackingField,
                  0) )
            ++*myCnt;
        }
      }
      else
      {
        if ( !PartyItemSmc_k__BackingField )
          goto LABEL_27;
        if ( !LOBYTE(PartyItemSmc_k__BackingField->fields.id) )
          goto LABEL_18;
      }
      v9 = BalanceConfig_TypeInfo;
      ++v10;
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
  if ( (byte_596C1EA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_QuestUseItemInfo___);
    byte_596C1EA = 1;
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList,
           (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_QuestUseItemInfo___);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
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
  if ( (byte_596C1DF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    byte_596C1DF = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v28, 0);
  v9 = System_Int32__ToString((int32_t)&v27, 0);
  v10 = System_Int32__ToString((int32_t)&v26, 0);
  restrictionDialogHistoryList = (Il2CppObject *)System_String__Concat_75694928(v8, v9, v10, 0);
  if ( !this->fields.restrictionDialogHistoryList )
    goto LABEL_12;
  v13 = restrictionDialogHistoryList;
  v20 = System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.restrictionDialogHistoryList,
          restrictionDialogHistoryList,
          (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = (__int64)klass + 8 * monitor_low;
          LODWORD(restrictionDialogHistoryList[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v24 + 32) = v13;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 32), (int32_t)v13, v14, v15, v16, v17, v18, v19);
        }
        return v20;
      }
    }
LABEL_12:
    sub_2213CDC(restrictionDialogHistoryList, v12);
  }
  return v20;
}


// local variable allocation has failed, the output may be wrong!
bool PartyOrganizationUtility__IsPassiveCampaignApplicable(
        EventCampaignEntity_o *campaign,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int v7; // w8
  Il2CppObject *Master_object; // x24
  Il2CppObject *v9; // x22
  Il2CppObject *v10; // x25
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  EventQuestMaster_o *v13; // x23
  int32_t WarID_ByQuestID; // w24
  int32_t eventId; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596C1F8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarGroupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_596C1F8 = 1;
  }
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarGroupMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !v10 )
    goto LABEL_20;
  v13 = (EventQuestMaster_o *)Instance;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v10,
                               &entity,
                               questId,
                               (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, questId, 0);
  Instance = (Il2CppObject *)BasicHelper__IsNullOrEmpty(
                               (System_Collections_ICollection_o *)campaign->fields.warGroupIds,
                               0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( entity && v9 )
      return WarGroupMaster__HasEntity(
               (WarGroupMaster_o *)v9,
               WarID_ByQuestID,
               HIDWORD(entity[5].klass),
               (int32_t)entity[2].monitor,
               campaign->fields.warGroupIds,
               questId,
               questPhase,
               0);
LABEL_20:
    sub_2213CDC(Instance, v12);
  }
  eventId = campaign->fields.eventId;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !v13 )
    goto LABEL_20;
  return !EventQuestMaster__IsEventNotIncluded(v13, eventId, questId, questPhase, 7, (int64_t)Instance[8].monitor, 0);
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
  int32_t v14; // w1
  void *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v18; // x27
  Il2CppObject *v19; // x25
  SkillLvMaster_o *v20; // x26
  int v21; // w8
  void *v22; // x23
  unsigned int v23; // w28
  __int64 v24; // x29
  int32_t v25; // w2
  bool v26; // zf
  _BOOL4 v27; // w8
  bool result; // w0
  System_String_o *Name; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_IEnumerable_int__o *ActRarity; // x0
  int32_t v37; // w8
  SkillLvEntity_o *skillLvEntity; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *v39; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596C1E0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C1E0 = 1;
  }
  v14 = (int)StringLiteral_1/*""*/;
  v39 = 0;
  entity = 0;
  skillLvEntity = 0;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)skillName,
    v14,
    (System_String_o *)actMaxRarity,
    *(System_String_o **)&servantId,
    servantRarity,
    equipServantId,
    eventId,
    (bool)method);
  *actMaxRarity = 0;
  if ( ((servantId | servantRarity | equipServantId) & 0x80000000) == 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_41;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           &entity,
           servantId,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_41;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_41;
      v18 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_41;
      v19 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_41;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v18 )
        goto LABEL_41;
      v20 = (SkillLvMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)v18, equipServantId, 0);
      if ( !Instance )
        goto LABEL_41;
      v21 = *((_DWORD *)Instance + 6);
      v22 = Instance;
      if ( v21 >= 1 )
      {
        v23 = 0;
        while ( 1 )
        {
          if ( v23 >= v21 )
            sub_2213CE4(Instance);
          v24 = *((_QWORD *)v22 + (int)v23 + 4);
          if ( !v24 )
            goto LABEL_41;
          v25 = *(_DWORD *)(v24 + 48);
          v26 = eventId < 0 || v25 == eventId;
          v27 = v26;
          if ( v25 && v27 )
          {
            if ( !MasterData_object )
              goto LABEL_41;
            Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                 &v39,
                                 v25,
                                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = v39;
              if ( !v39 )
                goto LABEL_41;
              Instance = (void *)EventEntity__IsEventPeriod((EventEntity_o *)v39, 0, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_31;
              Instance = v39;
              if ( !v39 )
                goto LABEL_41;
              Instance = (void *)EventEntity__IsSkillRelease((EventEntity_o *)v39, 0, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
LABEL_31:
                if ( !v20 )
                  goto LABEL_41;
                Instance = (void *)SkillLvMaster__TryGetEntity(v20, &skillLvEntity, *(_DWORD *)(v24 + 28), 1, 0);
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
          v21 = *((_DWORD *)v22 + 6);
          if ( (int)++v23 >= v21 )
            return 0;
        }
        if ( v19 )
        {
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                       *(_DWORD *)(v24 + 28),
                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( Instance )
          {
            Name = SkillEntity__getName((SkillEntity_o *)Instance, 0);
            *skillName = Name;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)skillName, (int32_t)Name, v30, v31, v32, v33, v34, v35);
            Instance = skillLvEntity;
            if ( skillLvEntity )
            {
              ActRarity = (System_Collections_Generic_IEnumerable_int__o *)SkillLvEntity__GetActRarity(skillLvEntity, 0);
              v37 = System_Linq_Enumerable__Max(ActRarity, 0);
              result = 1;
              *actMaxRarity = v37;
              return result;
            }
          }
        }
LABEL_41:
        sub_2213CDC(Instance, v16);
      }
    }
  }
  return 0;
}


bool PartyOrganizationUtility__IsRarityRestriction_41250980(
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

  if ( (byte_596C1E1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C1E1 = 1;
  }
  if ( (servantId | servantRarity) < 0 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   servantId,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v11);
  }
  v13 = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0);
  return Entity && v13 && RarityRestrictedSkillUtil__IsDisabled(v13, (ServantEntity_o *)Entity, servantRarity, 0);
}


// local variable allocation has failed, the output may be wrong!
bool PartyOrganizationUtility__IsShowBondEquipGuideDialog(
        PartyOrganizationUtility_o *this,
        int32_t targetSvtId,
        int32_t targetEquipSvtId,
        int64_t bondEquipUserSvtId,
        const MethodInfo *method)
{
  int v8; // w8
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x22
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x2
  Il2CppClass *klass; // x20
  void *monitor; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_596C1FA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C1FA = 1;
  }
  v8 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&targetSvtId, *(_QWORD *)&targetEquipSvtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_19;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v12 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          targetSvtId,
          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v13 = DataMasterBase_object__object__int___GetEntity(
          v11,
          targetEquipSvtId,
          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v13 )
    return (char)v13;
  if ( !ServantMaster__CheckFriendShipSvtEquip(
          (ServantMaster_o *)v11,
          (ServantEntity_o *)v12,
          (ServantEntity_o *)v13,
          0) )
  {
    LOBYTE(v13) = 0;
    return (char)v13;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    bondEquipUserSvtId,
                                    (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    LOBYTE(v13) = 1;
    return (char)v13;
  }
  if ( !entity )
LABEL_19:
    sub_2213CDC(Master_object, v10);
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v16);
  *(_QWORD *)&v21.fields.currentCryptoKey = klass;
  *(_QWORD *)&v21.fields.fakeValue = monitor;
  LOBYTE(v13) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v21, 0) == targetEquipSvtId;
  return (char)v13;
}


// local variable allocation has failed, the output may be wrong!
bool PartyOrganizationUtility__IsSupportGrandEnableQuest(
        PartyOrganizationUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  int v8; // w8
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v10; // x1
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596C1FB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&QuestRestrictionInfo_TypeInfo);
    byte_596C1FB = 1;
  }
  v8 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_16;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_16;
  if ( !QuestPhaseEntity__IsUseGrandBoard(entity, 0) )
    return 0;
  if ( !questRestrictionInfo )
  {
    questRestrictionInfo = (QuestRestrictionInfo_o *)sub_2213CCC(QuestRestrictionInfo_TypeInfo);
    QuestRestrictionInfo___ctor_50415132(questRestrictionInfo, 0, questId, questPhase, 0);
    if ( !questRestrictionInfo )
LABEL_16:
      sub_2213CDC(Master_object, v10);
  }
  return QuestRestrictionInfo__get_ActiveGrandBoardCount(questRestrictionInfo, 0) < 1
      || QuestRestrictionInfo__IsGrandSelectableSupport(questRestrictionInfo, 0);
}


void PartyOrganizationUtility__LoadQuestUseItemUseState(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *v2; // x19
  struct System_Collections_Generic_List_int____o *questUseItemStateList; // x8
  __int64 size; // x2
  int v5; // w9
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  PartyOrganizationUtility_c *v9; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  __int64 v11; // x2
  int normalFollowerInfo; // w8
  PartyOrganizationUtility_o *v13; // x21
  int v14; // w26
  int v15; // w27
  System_Collections_Generic_List_object__o *v16; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  unsigned int v23; // w8
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0
  QuestUseItemInfo_c *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  QuestUseItemInfo_c *v31; // x0
  int32_t Int_83396820; // w0
  System_Collections_Generic_List_object__o *v33; // x20
  int32_t v34; // w21
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  unsigned int v41; // w8
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  QuestUseItemInfo_c *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  QuestUseItemInfo_c *v49; // x0
  int32_t v50; // w0
  System_Collections_Generic_List_object__o *v51; // x19
  int32_t v52; // w21
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  PartyOrganizationUtility_o *v59; // x20
  BalanceConfig_c *v60; // x8
  unsigned int v61; // w9
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t v67; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_596C1F1 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int____Clear__);
    sub_2213A60(&PartyOrganizationUtility_TypeInfo);
    sub_2213A60(&QuestUseItemInfo_TypeInfo);
    sub_2213A60(&StringLiteral_869/*","*/);
    this = (PartyOrganizationUtility_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C1F1 = 1;
  }
  questUseItemStateList = v2->fields.questUseItemStateList;
  *(_QWORD *)result = 0;
  v67 = 0;
  entity = 0;
  if ( !questUseItemStateList )
    goto LABEL_66;
  size = (unsigned int)questUseItemStateList->fields._size;
  v5 = questUseItemStateList->fields._version + 1;
  questUseItemStateList->fields._size = 0;
  questUseItemStateList->fields._version = v5;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)questUseItemStateList->fields._items, 0, size, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, size);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  v9 = PartyOrganizationUtility_TypeInfo;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !*(&PartyOrganizationUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, v7, v8);
    v9 = PartyOrganizationUtility_TypeInfo;
  }
  this = (PartyOrganizationUtility_o *)UnityEngine_PlayerPrefs__GetString(
                                         v9->static_fields->SAVE_KEY_QUEST_USE_ITEM,
                                         (System_String_o *)StringLiteral_1/*""*/,
                                         0);
  if ( !this )
    goto LABEL_66;
  this = (PartyOrganizationUtility_o *)System_String__Split_75708724(
                                         (System_String_o *)this,
                                         (System_String_o *)StringLiteral_869/*","*/,
                                         0,
                                         0);
  if ( !this )
    goto LABEL_66;
  normalFollowerInfo = (int)this->fields._normalFollowerInfo;
  v13 = this;
  if ( normalFollowerInfo >= 1 )
  {
    v14 = 2;
    while ( v14 - 2 < (unsigned int)normalFollowerInfo )
    {
      this = (PartyOrganizationUtility_o *)System_Int32__TryParse(
                                             *((System_String_o **)&v13->fields.restrictionDialogHistoryList + v14),
                                             &result[1],
                                             0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_36;
      if ( (unsigned int)(v14 - 1) >= LODWORD(v13->fields._normalFollowerInfo) )
        break;
      this = (PartyOrganizationUtility_o *)System_Int32__TryParse(
                                             *((System_String_o **)&v13->fields._normalFollowerInfo + v14),
                                             result,
                                             0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_36;
      v15 = v14;
      if ( (unsigned int)v14 >= LODWORD(v13->fields._normalFollowerInfo) )
        break;
      this = (PartyOrganizationUtility_o *)System_Int32__TryParse(
                                             *((System_String_o **)&v13->fields._SelectedNormalFollowerClassId_k__BackingField
                                             + v14),
                                             &v67,
                                             0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_36;
      if ( result[0] )
        goto LABEL_21;
      if ( !v10 )
        goto LABEL_66;
      this = (PartyOrganizationUtility_o *)DataMasterBase_object__object__int___TryGetEntity(
                                             v10,
                                             &entity,
                                             result[1],
                                             (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (PartyOrganizationUtility_o *)entity;
        if ( !entity )
          goto LABEL_66;
        this = (PartyOrganizationUtility_o *)ItemEntity__IsEnable((ItemEntity_o *)entity, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_21:
          v16 = (System_Collections_Generic_List_object__o *)v2->fields.questUseItemStateList;
          this = (PartyOrganizationUtility_o *)sub_2213B20(int___TypeInfo, 3);
          if ( !this )
            goto LABEL_66;
          v23 = (unsigned int)this->fields._normalFollowerInfo;
          method = (const MethodInfo *)this;
          if ( !v23 )
            break;
          this->fields._SelectedNormalFollowerClassId_k__BackingField = result[1];
          if ( v23 == 1 )
            break;
          this->fields._SelectedNormalFollowerGrandGraphId_k__BackingField = result[0];
          if ( v23 <= 2 )
            break;
          this->fields._SelectedNormalFollowerDeckId_k__BackingField = v67;
          if ( !v16 )
            goto LABEL_66;
          items = v16->fields._items;
          v25 = Method_System_Collections_Generic_List_int____Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_66;
          v26 = v16->fields._size;
          if ( (unsigned int)v26 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)this,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + v26;
            v16->fields._size = v26 + 1;
            v27[4] = (Il2CppClass *)method;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)method, v17, v18, v19, v20, v21, v22);
          }
        }
      }
      normalFollowerInfo = (int)v13->fields._normalFollowerInfo;
      v14 += 3;
      if ( v15 + 1 >= normalFollowerInfo )
        goto LABEL_36;
    }
LABEL_65:
    sub_2213CE4(this);
  }
LABEL_36:
  v28 = QuestUseItemInfo_TypeInfo;
  if ( !*(&QuestUseItemInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo, method, v11);
    v28 = QuestUseItemInfo_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v28->static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE, 0) )
  {
    v31 = QuestUseItemInfo_TypeInfo;
    if ( !*(&QuestUseItemInfo_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo, v29, v30);
      v31 = QuestUseItemInfo_TypeInfo;
    }
    Int_83396820 = UnityEngine_PlayerPrefs__GetInt_83396820(
                     v31->static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE,
                     0);
    v33 = (System_Collections_Generic_List_object__o *)v2->fields.questUseItemStateList;
    v34 = Int_83396820;
    this = (PartyOrganizationUtility_o *)sub_2213B20(int___TypeInfo, 3);
    if ( !this )
      goto LABEL_66;
    v41 = (unsigned int)this->fields._normalFollowerInfo;
    method = (const MethodInfo *)this;
    if ( !v41 )
      goto LABEL_65;
    this->fields._SelectedNormalFollowerClassId_k__BackingField = v34;
    if ( v41 <= 2 )
      goto LABEL_65;
    this->fields._SelectedNormalFollowerDeckId_k__BackingField = 1;
    if ( !v33 )
      goto LABEL_66;
    v42 = v33->fields._items;
    v43 = Method_System_Collections_Generic_List_int____Add__;
    ++v33->fields._version;
    if ( !v42 )
      goto LABEL_66;
    v44 = v33->fields._size;
    if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v33,
        (Il2CppObject *)this,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &v42->obj.klass + v44;
      v33->fields._size = v44 + 1;
      v45[4] = (Il2CppClass *)method;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v45 + 4), (int32_t)method, v35, v36, v37, v38, v39, v40);
    }
  }
  v46 = QuestUseItemInfo_TypeInfo;
  if ( !*(&QuestUseItemInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo, v29, v30);
    v46 = QuestUseItemInfo_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v46->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0) )
  {
    v49 = QuestUseItemInfo_TypeInfo;
    if ( !*(&QuestUseItemInfo_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo, v47, v48);
      v49 = QuestUseItemInfo_TypeInfo;
    }
    v50 = UnityEngine_PlayerPrefs__GetInt_83396820(v49->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0);
    v51 = (System_Collections_Generic_List_object__o *)v2->fields.questUseItemStateList;
    v52 = v50;
    this = (PartyOrganizationUtility_o *)sub_2213B20(int___TypeInfo, 3);
    v59 = this;
    v60 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v53);
      v60 = BalanceConfig_TypeInfo;
    }
    if ( v59 )
    {
      v61 = (unsigned int)v59->fields._normalFollowerInfo;
      if ( v61 <= 1 )
        goto LABEL_65;
      v59->fields._SelectedNormalFollowerGrandGraphId_k__BackingField = v60->static_fields->DefaultQuestUseFriendshipUpItemGroupId;
      if ( v61 == 2 )
        goto LABEL_65;
      v59->fields._SelectedNormalFollowerDeckId_k__BackingField = v52;
      if ( v51 )
      {
        v62 = v51->fields._items;
        v63 = Method_System_Collections_Generic_List_int____Add__;
        ++v51->fields._version;
        if ( v62 )
        {
          v64 = v51->fields._size;
          if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v51,
              (Il2CppObject *)v59,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
          }
          else
          {
            v65 = &v62->obj.klass + v64;
            v51->fields._size = v64 + 1;
            v65[4] = (Il2CppClass *)v59;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v65 + 4), (int32_t)v59, v53, v54, v55, v56, v57, v58);
          }
          return;
        }
      }
    }
LABEL_66:
    sub_2213CDC(this, method);
  }
}


void PartyOrganizationUtility__OpenQuestUseItemDialogTutorial(
        PartyOrganizationUtility_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  PartyOrganizationUtility___c_c *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *cachedQuestUseItemInfoList; // x20
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__141_0; // x21
  Il2CppObject *v9; // x22
  struct PartyOrganizationUtility___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  PartyOrganizationUtility___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  struct PartyOrganizationUtility___c_StaticFields *v22; // x9
  System_Func_object__int__o *_9__141_1; // x21
  Il2CppObject *v24; // x22
  struct PartyOrganizationUtility___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  Il2CppObject *Master_object; // x0
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x2
  bool v38; // w21

  if ( (byte_596C1EF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_QuestUseItemInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
    sub_2213A60(&System_Func_QuestUseItemInfo__bool__TypeInfo);
    sub_2213A60(&System_Func_QuestUseItemInfo__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__141_0__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__141_1__);
    sub_2213A60(&PartyOrganizationUtility___c_TypeInfo);
    byte_596C1EF = 1;
  }
  v5 = PartyOrganizationUtility___c_TypeInfo;
  cachedQuestUseItemInfoList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, callBack, method);
    v5 = PartyOrganizationUtility___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__141_0 = (System_Func_object__bool__o *)static_fields->__9__141_0;
  if ( !_9__141_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, callBack, method);
      static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__141_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__141_0,
      v9,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__141_0__,
      0);
    v10 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v10->__9__141_0 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__141_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__141_0, (int32_t)_9__141_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = System_Linq_Enumerable__Where_object_(
          cachedQuestUseItemInfoList,
          (System_Func_TSource__bool__o *)_9__141_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v20 = PartyOrganizationUtility___c_TypeInfo;
  v21 = v17;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v18, v19);
    v20 = PartyOrganizationUtility___c_TypeInfo;
  }
  v22 = v20->static_fields;
  _9__141_1 = (System_Func_object__int__o *)v22->__9__141_1;
  if ( !_9__141_1 )
  {
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v18, v19);
      v22 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)v22->__9;
    _9__141_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__141_1,
      v24,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemDialogTutorial_b__141_1__,
      0);
    v25 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v25->__9__141_1 = (struct System_Func_QuestUseItemInfo__int__o *)_9__141_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->__9__141_1, (int32_t)_9__141_1, v26, v27, v28, v29, v30, v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v21,
                                                               (System_Func_TSource__TResult__o *)_9__141_1,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_QuestUseItemInfo__int___);
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_int_(
                                                               v32,
                                                               (const MethodInfo_38A0B70 *)Method_System_Linq_Enumerable_ToList_int___);
  Master_object = (Il2CppObject *)System_Linq_Enumerable__Any_int_(
                                    v33,
                                    (const MethodInfo_3865C7C *)Method_System_Linq_Enumerable_Any_int___);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !v33 )
      goto LABEL_22;
    v38 = System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)v33,
            0,
            (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36, v37);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_object )
LABEL_22:
      sub_2213CDC(Master_object, v35);
    EventTutorialMaster__checkTutorial_49263488(
      (EventTutorialMaster_o *)Master_object,
      (System_Collections_Generic_List_int__o *)v33,
      71,
      callBack,
      0,
      0,
      0,
      0,
      0,
      !v38,
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  ChainableActionBase_o **v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_IEnumerable_TSource__o *cachedQuestUseItemInfoList; // x24
  PartyOrganizationUtility___c_c *v19; // x0
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__140_0; // x25
  Il2CppObject *v22; // x26
  struct PartyOrganizationUtility___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  PartyOrganizationUtility___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x24
  struct PartyOrganizationUtility___c_StaticFields *v35; // x9
  System_Func_object__bool__o *_9__140_1; // x25
  Il2CppObject *v37; // x26
  struct PartyOrganizationUtility___c_StaticFields *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  PartyOrganizationUtility___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x24
  struct PartyOrganizationUtility___c_StaticFields *v50; // x9
  System_Func_object__int__o *_9__140_2; // x25
  Il2CppObject *v52; // x26
  struct PartyOrganizationUtility___c_StaticFields *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_Collections_Generic_IEnumerable_T__o *v60; // x24
  System_Action_object__o *v61; // x25
  System_Object_array *v63; // x23
  ActionChain_o *v64; // x22
  __int64 v65; // x23
  System_Action_o *v66; // x24
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  const MethodInfo *v73; // x1
  struct QuestUseItemInfo_array *QuestUseItems; // x0
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7

  if ( (byte_596C1EE & 1) == 0 )
  {
    sub_2213A60(&ActionChain_TypeInfo);
    sub_2213A60(&System_Action___TypeInfo);
    sub_2213A60(&System_Action_QuestUseItemInfo__TypeInfo);
    sub_2213A60(&Method_System_Action_Invoke__);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_QuestUseItemInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_QuestUseItemInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
    sub_2213A60(&System_Func_QuestUseItemInfo__bool__TypeInfo);
    sub_2213A60(&System_Func_QuestUseItemInfo__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Action_Action___ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_Action_Action____ctor__);
    sub_2213A60(&System_Collections_Generic_List_Action_Action___TypeInfo);
    sub_2213A60(&Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__140_0__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__140_1__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__140_2__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__DisplayClass140_0__OpenQuestUseItemExpiredDialog_b__3__);
    sub_2213A60(&PartyOrganizationUtility___c__DisplayClass140_0_TypeInfo);
    sub_2213A60(&PartyOrganizationUtility___c_TypeInfo);
    byte_596C1EE = 1;
  }
  v5 = sub_2213CCC(PartyOrganizationUtility___c__DisplayClass140_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.cachedQuestUseItemInfoList, 0) )
    return 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Action_Action___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Action_Action____ctor__);
  if ( !v5 )
    goto LABEL_31;
  *(_QWORD *)(v5 + 16) = v6;
  v15 = (ChainableActionBase_o **)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v6, v9, v10, v11, v12, v13, v14);
  cachedQuestUseItemInfoList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cachedQuestUseItemInfoList;
  v19 = PartyOrganizationUtility___c_TypeInfo;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v16, v17);
    v19 = PartyOrganizationUtility___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__140_0 = (System_Func_object__bool__o *)static_fields->__9__140_0;
  if ( !_9__140_0 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v16, v17);
      static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__140_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__140_0,
      v22,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__140_0__,
      0);
    v23 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v23->__9__140_0 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__140_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->__9__140_0, (int32_t)_9__140_0, v24, v25, v26, v27, v28, v29);
  }
  v30 = System_Linq_Enumerable__Where_object_(
          cachedQuestUseItemInfoList,
          (System_Func_TSource__bool__o *)_9__140_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v33 = PartyOrganizationUtility___c_TypeInfo;
  v34 = v30;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v31, v32);
    v33 = PartyOrganizationUtility___c_TypeInfo;
  }
  v35 = v33->static_fields;
  _9__140_1 = (System_Func_object__bool__o *)v35->__9__140_1;
  if ( !_9__140_1 )
  {
    if ( !*(&v33->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v33, v31, v32);
      v35 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)v35->__9;
    _9__140_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestUseItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__140_1,
      v37,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__140_1__,
      0);
    v38 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v38->__9__140_1 = (struct System_Func_QuestUseItemInfo__bool__o *)_9__140_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v38->__9__140_1, (int32_t)_9__140_1, v39, v40, v41, v42, v43, v44);
  }
  v45 = System_Linq_Enumerable__Where_object_(
          v34,
          (System_Func_TSource__bool__o *)_9__140_1,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_QuestUseItemInfo___);
  v48 = PartyOrganizationUtility___c_TypeInfo;
  v49 = v45;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v46, v47);
    v48 = PartyOrganizationUtility___c_TypeInfo;
  }
  v50 = v48->static_fields;
  _9__140_2 = (System_Func_object__int__o *)v50->__9__140_2;
  if ( !_9__140_2 )
  {
    if ( !*(&v48->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v48, v46, v47);
      v50 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)v50->__9;
    _9__140_2 = (System_Func_object__int__o *)sub_2213CCC(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__140_2,
      v52,
      Method_PartyOrganizationUtility___c__OpenQuestUseItemExpiredDialog_b__140_2__,
      0);
    v53 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v53->__9__140_2 = (struct System_Func_QuestUseItemInfo__int__o *)_9__140_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v53->__9__140_2, (int32_t)_9__140_2, v54, v55, v56, v57, v58, v59);
  }
  v60 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                         v49,
                                                         (System_Func_TSource__TKey__o *)_9__140_2,
                                                         (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_QuestUseItemInfo__int___);
  v61 = (System_Action_object__o *)sub_2213CCC(System_Action_QuestUseItemInfo__TypeInfo);
  System_Action_object____ctor(
    v61,
    (Il2CppObject *)v5,
    Method_PartyOrganizationUtility___c__DisplayClass140_0__OpenQuestUseItemExpiredDialog_b__3__,
    0);
  BasicHelper__ForEach_object_(
    v60,
    (System_Action_T__o *)v61,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_QuestUseItemInfo___);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v5 + 16), 0) )
    return 0;
  v7 = *v15;
  if ( !*v15 )
    goto LABEL_31;
  v63 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)v7,
          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_Action_Action___ToArray__);
  v64 = (ActionChain_o *)sub_2213CCC(ActionChain_TypeInfo);
  ActionChain___ctor_56107140(v64, (System_Action_Action__array *)v63, 0);
  v65 = sub_2213B20(System_Action___TypeInfo, 1);
  v66 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v66, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0);
  if ( !v65 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v65 + 24) )
    sub_2213CE4(v7);
  *(_QWORD *)(v65 + 32) = v66;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v65 + 32), (int32_t)v66, v67, v68, v69, v70, v71, v72);
  if ( !v64 || (v7 = ChainableActionBase__Final((ChainableActionBase_o *)v64, (System_Action_array *)v65, 0)) == 0 )
LABEL_31:
    sub_2213CDC(v7, v8);
  ChainableActionBase__Execute(v7, 0);
  QuestUseItems = PartyOrganizationUtility__GetQuestUseItems(this, v73);
  this->fields.cachedQuestUseItemInfoList = QuestUseItems;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cachedQuestUseItemInfoList,
    (int32_t)QuestUseItems,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  return 1;
}


void PartyOrganizationUtility__SaveQuestUseItemUseState(PartyOrganizationUtility_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *CachedAvailableQuestUseItems; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  PartyOrganizationUtility___c_c *v7; // x0
  struct System_Collections_Generic_List_int____o *questUseItemStateList; // x19
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__144_1; // x20
  Il2CppObject *v11; // x21
  struct PartyOrganizationUtility___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  PartyOrganizationUtility_c *v22; // x8
  System_Collections_Generic_IEnumerable_T__o *v23; // x19
  System_String_o *SAVE_KEY_QUEST_USE_ITEM; // x20
  System_String_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  QuestUseItemInfo_c *v28; // x0

  if ( (byte_596C1F2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_QuestUseItemInfo__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_QuestUseItemInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_int____int___);
    sub_2213A60(&System_Func_int____IEnumerable_int___TypeInfo);
    sub_2213A60(&Method_PartyOrganizationUtility__SaveQuestUseItemUseState_b__144_0__);
    sub_2213A60(&PartyOrganizationUtility_TypeInfo);
    sub_2213A60(&QuestUseItemInfo_TypeInfo);
    sub_2213A60(&Method_System_String_Join_int___);
    sub_2213A60(&Method_PartyOrganizationUtility___c__SaveQuestUseItemUseState_b__144_1__);
    sub_2213A60(&PartyOrganizationUtility___c_TypeInfo);
    sub_2213A60(&StringLiteral_869/*","*/);
    byte_596C1F2 = 1;
  }
  CachedAvailableQuestUseItems = (System_Collections_Generic_IEnumerable_T__o *)PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
                                                                                  this,
                                                                                  method);
  v4 = (System_Action_object__o *)sub_2213CCC(System_Action_QuestUseItemInfo__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_PartyOrganizationUtility__SaveQuestUseItemUseState_b__144_0__,
    0);
  BasicHelper__ForEach_object_(
    CachedAvailableQuestUseItems,
    (System_Action_T__o *)v4,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_QuestUseItemInfo___);
  v7 = PartyOrganizationUtility___c_TypeInfo;
  questUseItemStateList = this->fields.questUseItemStateList;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v5, v6);
    v7 = PartyOrganizationUtility___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__144_1 = (System_Func_object__object__o *)static_fields->__9__144_1;
  if ( !_9__144_1 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v5, v6);
      static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__144_1 = (System_Func_object__object__o *)sub_2213CCC(System_Func_int____IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__144_1,
      v11,
      Method_PartyOrganizationUtility___c__SaveQuestUseItemUseState_b__144_1__,
      0);
    v12 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v12->__9__144_1 = (struct System_Func_int____IEnumerable_int___o *)_9__144_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__144_1, (int32_t)_9__144_1, v13, v14, v15, v16, v17, v18);
  }
  v19 = System_Linq_Enumerable__SelectMany_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questUseItemStateList,
          (System_Func_TSource__IEnumerable_TResult___o *)_9__144_1,
          (const MethodInfo_3893C3C *)Method_System_Linq_Enumerable_SelectMany_int____int___);
  v22 = PartyOrganizationUtility_TypeInfo;
  v23 = (System_Collections_Generic_IEnumerable_T__o *)v19;
  if ( !*(&PartyOrganizationUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, v20, v21);
    v22 = PartyOrganizationUtility_TypeInfo;
  }
  SAVE_KEY_QUEST_USE_ITEM = v22->static_fields->SAVE_KEY_QUEST_USE_ITEM;
  v25 = System_String__Join_int_(
          (System_String_o *)StringLiteral_869/*","*/,
          v23,
          (const MethodInfo_398AAF8 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_QUEST_USE_ITEM, v25, 0);
  v28 = QuestUseItemInfo_TypeInfo;
  if ( !*(&QuestUseItemInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo, v26, v27);
    v28 = QuestUseItemInfo_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v28->static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE, 0);
  UnityEngine_PlayerPrefs__DeleteKey(QuestUseItemInfo_TypeInfo->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationUtility__SetAddPassiveCampaignInfo(
        System_Collections_Generic_List_EventMargeItemUpValInfo__o **infoList,
        int32_t questId,
        int32_t questPhase,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v6; // w20
  int32_t v7; // w21
  Il2CppObject *Master_object; // x23
  Il2CppObject *v9; // x22
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *AddPassiveCampaigns; // x0
  const MethodInfo_3F10B80 **v13; // x27
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  EventCampaignEntity_o *current; // x26
  _BOOL8 IsPassiveCampaignApplicable; // x0
  __int64 v19; // x1
  _BOOL8 IsEnableServant; // x0
  __int64 v21; // x1
  int32_t eventId; // w19
  const MethodInfo_3F10B80 **v23; // x24
  Il2CppObject *v24; // x20
  int32_t v25; // w21
  EventMargeItemUpValInfo_o *v26; // x25
  int32_t v27; // w27
  System_String_o *AddPassiveContentOrganization; // x28
  Il2CppObject *v29; // x23
  System_String_o *AddPassiveContentDetail; // x0
  int32_t groupId; // w22
  System_String_o *v32; // x29
  System_String_o *AddPassiveDescriptionDetail; // x19
  System_String_o *AddPassiveIconOrganization; // x0
  __int64 v35; // x1
  __int64 v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Collections_Generic_List_object__o *v43; // x0
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x8
  int32_t v48; // [xsp+10h] [xbp-B0h]
  int32_t v49; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+40h] [xbp-80h] BYREF

  v6 = questPhase;
  v7 = questId;
  if ( (byte_596C1F9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_2213A60(&EventMargeItemUpValInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_2213A60(&PartyOrganizationUtility_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_596C1F9 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  entity = 0;
  if ( v7 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    v9 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionMaster___);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance || !Master_object )
      sub_2213CDC(Instance, v11);
    AddPassiveCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetAddPassiveCampaigns(
                                                                         (EventCampaignMaster_o *)Master_object,
                                                                         (int64_t)Instance[8].monitor,
                                                                         0);
    if ( AddPassiveCampaigns )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v51,
        AddPassiveCampaigns,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
      v53 = v51;
      v13 = (const MethodInfo_3F10B80 **)&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__;
      v51.fields._list = 0;
      *(_QWORD *)&v51.fields._index = &v53;
      v48 = v6;
      v49 = v7;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v53,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
      {
        current = (EventCampaignEntity_o *)v53.fields._current;
        if ( !*(&PartyOrganizationUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, v14, v15);
        IsPassiveCampaignApplicable = PartyOrganizationUtility__IsPassiveCampaignApplicable(current, v7, v6, v16);
        if ( IsPassiveCampaignApplicable )
        {
          if ( !current )
            sub_2213CDC(IsPassiveCampaignApplicable, v19);
          IsEnableServant = EventCampaignMaster__IsEnableServant(
                              (EventCampaignMaster_o *)Master_object,
                              svtId,
                              current->fields.eventId,
                              0);
          if ( IsEnableServant )
          {
            if ( !v9 )
              sub_2213CDC(IsEnableServant, v21);
            if ( DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v9,
                   &entity,
                   current->fields.groupId,
                   *v13) )
            {
              eventId = current->fields.eventId;
              v23 = v13;
              v24 = Master_object;
              v25 = svtId;
              v26 = (EventMargeItemUpValInfo_o *)sub_2213CCC(EventMargeItemUpValInfo_TypeInfo);
              EventMargeItemUpValInfo___ctor_48723060(v26, eventId, 0);
              v27 = current->fields.eventId;
              AddPassiveContentOrganization = EventCampaignEntity__GetAddPassiveContentOrganization(current, 0);
              v29 = v9;
              AddPassiveContentDetail = EventCampaignEntity__GetAddPassiveContentDetail(current, 0);
              groupId = current->fields.groupId;
              v32 = AddPassiveContentDetail;
              AddPassiveDescriptionDetail = EventCampaignEntity__GetAddPassiveDescriptionDetail(current, 0);
              AddPassiveIconOrganization = EventCampaignEntity__GetAddPassiveIconOrganization(current, 0);
              if ( !entity )
                sub_2213CDC(AddPassiveIconOrganization, v35);
              if ( !v26 )
                sub_2213CDC(AddPassiveIconOrganization, v35);
              EventMargeItemUpValInfo__SetAddPassiveCampaign(
                v26,
                v27,
                AddPassiveContentOrganization,
                v32,
                groupId,
                AddPassiveDescriptionDetail,
                AddPassiveIconOrganization,
                (int32_t)entity[1].monitor,
                0);
              v43 = (System_Collections_Generic_List_object__o *)*infoList;
              if ( !*infoList
                || (items = v43->fields._items,
                    v45 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__,
                    ++v43->fields._version,
                    !items) )
              {
                sub_2213CDC(v43, v36);
              }
              size = v43->fields._size;
              v9 = v29;
              v13 = v23;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v43,
                  (Il2CppObject *)v26,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
              }
              else
              {
                v47 = &items->obj.klass + size;
                v43->fields._size = size + 1;
                v47[4] = (Il2CppClass *)v26;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v47 + 4), (int32_t)v26, v37, v38, v39, v40, v41, v42);
              }
              svtId = v25;
              Master_object = v24;
              v6 = v48;
              v7 = v49;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v53,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    }
  }
}


void PartyOrganizationUtility__SetNormalFollowerInfo(
        PartyOrganizationUtility_o *this,
        FollowerInfo_o *followerInfo,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._normalFollowerInfo = followerInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._normalFollowerInfo,
    (int32_t)followerInfo,
    (System_String_o *)method,
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

  if ( (byte_596C1E3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
    byte_596C1E3 = 1;
  }
  npcFollowerInfos = this->fields._npcFollowerInfos;
  if ( !npcFollowerInfos )
    sub_2213CDC(0, *(_QWORD *)&key);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)npcFollowerInfos,
    key,
    (Il2CppObject *)followerInfo,
    (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__set_Item__);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596C1F6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleWaveInfoData___ctor___91640568);
    sub_2213A60(&System_Collections_Generic_List_BattleWaveInfoData__TypeInfo);
    byte_596C1F6 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleWaveInfoData__TypeInfo);
  v6 = (struct System_Collections_Generic_List_BattleWaveInfoData__o *)v5;
  if ( !waveInfoList )
  {
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
    if ( this )
      goto LABEL_5;
LABEL_7:
    sub_2213CDC(v7, v8);
  }
  System_Collections_Generic_List_object____ctor_71841080(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)waveInfoList,
    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_BattleWaveInfoData___ctor___91640568);
  if ( !this )
    goto LABEL_7;
LABEL_5:
  this->fields.tempInterruptionWaveInfoList = v6;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tempInterruptionWaveInfoList,
    (int32_t)v6,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
  MissionNaviTransitionBoardItem_o *p_temporaryPartyInfo; // x21
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *temporaryPartyInfo; // t1
  Il2CppObject *v23; // x29
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  MissionNaviTransitionBoardItem_o *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  MissionNaviTransitionBoardItem_c *v56; // x20
  Il2CppObject *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  Il2CppObject *v64; // x19
  Il2CppClass *v65; // x21
  __int64 v66; // x0
  MissionNaviTransitionBoardItem_o *p_parent; // x20
  __int64 v68; // x0
  int32_t v69; // w1
  PartyOrganizationUtility_TemporaryPartyInfo_o *v70; // x0
  const MethodInfo *v71; // x1

  if ( (byte_596C1DD & 1) == 0 )
  {
    sub_2213A60(&PartyListViewItem___TypeInfo);
    sub_2213A60(&PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo);
    byte_596C1DD = 1;
  }
  temporaryPartyInfo = this->fields.temporaryPartyInfo;
  p_temporaryPartyInfo = (MissionNaviTransitionBoardItem_o *)&this->fields.temporaryPartyInfo;
  klass = (char *)temporaryPartyInfo;
  if ( !temporaryPartyInfo )
  {
    v23 = (Il2CppObject *)sub_2213CCC(PartyOrganizationUtility_TemporaryPartyInfo_TypeInfo);
    System_Object___ctor(v23, 0);
    p_temporaryPartyInfo->klass = (MissionNaviTransitionBoardItem_c *)v23;
    sub_2213A04(p_temporaryPartyInfo, (int32_t)v23, v24, v25, v26, v27, v28, v29);
    klass = (char *)p_temporaryPartyInfo->klass;
    if ( !p_temporaryPartyInfo->klass )
      goto LABEL_18;
  }
  *((_QWORD *)klass + 5) = bgmName;
  v31 = (MissionNaviTransitionBoardItem_o *)(klass + 40);
  v31[-1].fields._ClosedMessage_k__BackingField = (struct System_String_o *)userServantId;
  v31[-1].fields._NaviAction_k__BackingField = (struct System_Action_o *)userEquipId;
  v31[-1].fields._BoardType_k__BackingField = deckNumber;
  sub_2213A04(
    v31,
    (int32_t)bgmName,
    (System_String_o *)userEquipId,
    *(System_String_o **)&deckNumber,
    (int32_t)bgmName,
    (int32_t)battleSetupInfo,
    (bool)followerInfo,
    (bool)basePartyItem);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 6) = battleSetupInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(klass + 48), (int32_t)battleSetupInfo, v32, v33, v34, v35, v36, v37);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass )
    goto LABEL_18;
  *((_QWORD *)klass + 7) = followerInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(klass + 56), (int32_t)followerInfo, v38, v39, v40, v41, v42, v43);
  klass = (char *)p_temporaryPartyInfo->klass;
  if ( !p_temporaryPartyInfo->klass
    || (*((_QWORD *)klass + 8) = basePartyItem,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(klass + 64),
          (int32_t)basePartyItem,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49),
        (klass = (char *)p_temporaryPartyInfo->klass) == 0)
    || (*((_QWORD *)klass + 9) = partyItem,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(klass + 72), (int32_t)partyItem, v50, v51, v52, v53, v54, v55),
        (v56 = p_temporaryPartyInfo->klass) == 0) )
  {
LABEL_18:
    sub_2213CDC(klass, v30);
  }
  LODWORD(v56->_1.declaringType) = selectPartyMemberNum;
  if ( baseDeckItemList )
  {
    v57 = System_Array__Clone((System_Array_o *)baseDeckItemList, 0);
    if ( !v57 )
    {
      v69 = 0;
      v56->_1.parent = 0;
      p_parent = (MissionNaviTransitionBoardItem_o *)&v56->_1.parent;
      goto LABEL_17;
    }
    v64 = v57;
    v65 = PartyListViewItem___TypeInfo;
    v66 = sub_2213BB4(v57, PartyListViewItem___TypeInfo);
    if ( v66 )
    {
      v65 = PartyListViewItem___TypeInfo;
      v56->_1.parent = (Il2CppClass *)v66;
      p_parent = (MissionNaviTransitionBoardItem_o *)&v56->_1.parent;
      v68 = sub_2213BB4(v64, v65);
      if ( v68 )
      {
        v69 = v68;
LABEL_17:
        sub_2213A04(p_parent, v69, v58, v59, v60, v61, v62, v63);
        return;
      }
    }
    v70 = (PartyOrganizationUtility_TemporaryPartyInfo_o *)sub_221405C(v64, v65, v58, v59);
    PartyOrganizationUtility_TemporaryPartyInfo___ctor(v70, v71);
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
  __int64 v11; // x2
  DataManager_c *v12; // x0
  int v13; // w8
  System_Func_object__bool__o *v14; // x20
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  QuestUseItemInfo_o *v18; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *QuestUseItemEventCampaignsByItemId; // x0
  Il2CppObject *v20; // x21
  __int64 v21; // x8
  int64_t v22; // x9
  int32_t v23; // w21
  ItemEntity_o *v24; // x22
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w21
  ItemEntity_o *v32; // x22
  struct QuestUseItemInfo_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  int64_t outStartedAt; // [xsp+8h] [xbp-48h] BYREF
  int64_t outEndedAt; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596C1E9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_QuestUseItemInfo___);
    sub_2213A60(&System_Func_QuestUseItemInfo__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestUseItemInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestUseItemInfo__Remove__);
    sub_2213A60(&QuestUseItemInfo_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationUtility___c__DisplayClass135_0__UpdateInterruptionUseItem_b__0__);
    sub_2213A60(&PartyOrganizationUtility___c__DisplayClass135_0_TypeInfo);
    byte_596C1E9 = 1;
  }
  outEndedAt = 0;
  outStartedAt = 0;
  v8 = sub_2213CCC(PartyOrganizationUtility___c__DisplayClass135_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_30;
  v12 = DataManager_TypeInfo;
  v13 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v8 + 16) = campaignType;
  if ( !v13 )
    j_il2cpp_runtime_class_init_0(v12, v10, v11);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_30;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          (Il2CppObject **)(v8 + 24),
          itemId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return;
  v14 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestUseItemInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v8,
    Method_PartyOrganizationUtility___c__DisplayClass135_0__UpdateInterruptionUseItem_b__0__,
    0);
  v15 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestUseItemInfo___);
  if ( !v15 )
  {
    v23 = *(_DWORD *)(v8 + 16);
    v24 = *(ItemEntity_o **)(v8 + 24);
    v18 = (QuestUseItemInfo_o *)sub_2213CCC(QuestUseItemInfo_TypeInfo);
    QuestUseItemInfo___ctor_41347232(v18, v23, v24, 0);
    if ( !list )
      goto LABEL_30;
    goto LABEL_23;
  }
  v18 = (QuestUseItemInfo_o *)v15;
  if ( LODWORD(v15[1].klass) != itemId )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16, v17);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    if ( !Master_object )
      goto LABEL_30;
    QuestUseItemEventCampaignsByItemId = EventCampaignMaster__GetQuestUseItemEventCampaignsByItemId(
                                           (EventCampaignMaster_o *)Master_object,
                                           *(_DWORD *)(v8 + 16),
                                           itemId,
                                           0);
    Master_object = System_Linq_Enumerable__FirstOrDefault_object_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)QuestUseItemEventCampaignsByItemId,
                      (const MethodInfo_3881578 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___);
    if ( Master_object )
    {
      v20 = Master_object;
      Master_object = *(Il2CppObject **)(v8 + 24);
      if ( !Master_object )
        goto LABEL_30;
      Master_object = (Il2CppObject *)ItemEntity__IsEnable_49378212(
                                        (ItemEntity_o *)Master_object,
                                        (int32_t)v20[1].klass,
                                        0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = *(Il2CppObject **)(v8 + 24);
        if ( Master_object )
        {
          ItemEntity__GetUseLimitAt((ItemEntity_o *)Master_object, (int32_t)v20[1].klass, &outStartedAt, &outEndedAt, 0);
          v21 = *(_QWORD *)(v8 + 24);
          if ( v21 )
          {
            v22 = outEndedAt;
            v18->fields._Id_k__BackingField = *(_DWORD *)(v21 + 16);
            v18->fields._EndedAt_k__BackingField = v22;
            goto LABEL_28;
          }
        }
LABEL_30:
        sub_2213CDC(Master_object, v10);
      }
    }
    if ( !list )
      goto LABEL_30;
    System_Collections_Generic_List_object___Remove(
      (System_Collections_Generic_List_object__o *)list,
      (Il2CppObject *)v18,
      (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_QuestUseItemInfo__Remove__);
    v31 = *(_DWORD *)(v8 + 16);
    v32 = *(ItemEntity_o **)(v8 + 24);
    v18 = (QuestUseItemInfo_o *)sub_2213CCC(QuestUseItemInfo_TypeInfo);
    QuestUseItemInfo___ctor_41347232(v18, v31, v32, 0);
LABEL_23:
    items = list->fields._items;
    v34 = Method_System_Collections_Generic_List_QuestUseItemInfo__Add__;
    ++list->fields._version;
    if ( items )
    {
      size = list->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)list,
          (Il2CppObject *)v18,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        list->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)v18, v25, v26, v27, v28, v29, v30);
      }
      if ( v18 )
        goto LABEL_28;
    }
    goto LABEL_30;
  }
LABEL_28:
  v18->fields._InterruptionUseFlag_k__BackingField = 1;
}


void PartyOrganizationUtility___SaveQuestUseItemUseState_b__144_0(
        PartyOrganizationUtility_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x22
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  QuestUseItemInfo_o **v14; // x20
  int v15; // w24
  bool IsGroupItem; // w0
  struct System_Collections_Generic_List_int____o *questUseItemStateList; // x21
  bool v18; // w23
  System_Func_object__bool__o *v19; // x0
  intptr_t *v20; // x8
  System_Func_TSource__bool__o *v21; // x23
  System_Collections_Generic_List_object__o *v22; // x19
  Il2CppObject *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int32_t Id_k__BackingField; // w9
  unsigned int monitor; // w8
  QuestUseItemInfo_o *v32; // x10
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_596C1FE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_int_____);
    sub_2213A60(&System_Func_int____bool__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int____Add__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__DisplayClass144_0__SaveQuestUseItemUseState_b__2__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__DisplayClass144_0__SaveQuestUseItemUseState_b__3__);
    sub_2213A60(&PartyOrganizationUtility___c__DisplayClass144_0_TypeInfo);
    byte_596C1FE = 1;
  }
  v5 = sub_2213CCC(PartyOrganizationUtility___c__DisplayClass144_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 16) = info;
  v14 = (QuestUseItemInfo_o **)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)info, v8, v9, v10, v11, v12, v13);
  v6 = *(Il2CppObject **)(v5 + 16);
  if ( !v6 )
    goto LABEL_26;
  v15 = BYTE4(v6[5].monitor);
  IsGroupItem = QuestUseItemInfo__get_IsGroupItem((QuestUseItemInfo_o *)v6, 0);
  questUseItemStateList = this->fields.questUseItemStateList;
  v18 = IsGroupItem;
  v19 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_int____bool__TypeInfo);
  if ( v18 )
    v20 = (intptr_t *)&Method_PartyOrganizationUtility___c__DisplayClass144_0__SaveQuestUseItemUseState_b__2__;
  else
    v20 = (intptr_t *)&Method_PartyOrganizationUtility___c__DisplayClass144_0__SaveQuestUseItemUseState_b__3__;
  v21 = (System_Func_TSource__bool__o *)v19;
  System_Func_object__bool____ctor(v19, (Il2CppObject *)v5, *v20, 0);
  v6 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
         (System_Collections_Generic_IEnumerable_TSource__o *)questUseItemStateList,
         v21,
         (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_int_____);
  if ( v6 )
  {
    if ( LODWORD(v6[1].monitor) > 2 )
    {
      LODWORD(v6[2].monitor) = v15;
      return;
    }
LABEL_27:
    sub_2213CE4(v6);
  }
  v22 = (System_Collections_Generic_List_object__o *)this->fields.questUseItemStateList;
  v6 = (Il2CppObject *)sub_2213B20(int___TypeInfo, 3);
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
  v32 = *v14;
  LODWORD(v23[2].klass) = Id_k__BackingField;
  if ( !v32 )
    goto LABEL_26;
  if ( monitor == 1 )
    goto LABEL_27;
  HIDWORD(v23[2].klass) = v32->fields._GroupId_k__BackingField;
  if ( monitor <= 2 )
    goto LABEL_27;
  LODWORD(v23[2].monitor) = v15;
  if ( !v22
    || (items = v22->fields._items,
        v34 = Method_System_Collections_Generic_List_int____Add__,
        ++v22->fields._version,
        !items) )
  {
LABEL_26:
    sub_2213CDC(v6, v7);
  }
  size = v22->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      v23,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    v22->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v23;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)v23, v24, v25, v26, v27, v28, v29);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BasePartyItem_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BasePartyItem_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ConfirmedNormalFollowerInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ConfirmedNormalFollowerInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._PartyItem_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PartyItem_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._PartyItemSmc_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PartyItemSmc_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TransitionDestinationFromDetail_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TransitionDestinationFromDetail_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C1FF & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationUtility___c_TypeInfo);
    byte_596C1FF = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(PartyOrganizationUtility___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyOrganizationUtility___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationUtility___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)PartyOrganizationUtility___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return !x->fields.isInvalid;
}


bool PartyOrganizationUtility___c___GetCachedAvailableQuestUseItems_b__137_0(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_2213CDC(this, 0);
  return info->fields._IsValid_k__BackingField;
}


bool PartyOrganizationUtility___c___GetNeedAddAnnotationSkillIds_b__146_0(
        PartyOrganizationUtility___c_o *this,
        System_Collections_Generic_KeyValuePair_int__List_int___o keyValuePair,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *value; // x19

  value = keyValuePair.fields.value;
  if ( (byte_596C202 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    this = (PartyOrganizationUtility___c_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_596C202 = 1;
  }
  if ( !value )
    sub_2213CDC(this, *(_QWORD *)&keyValuePair.fields.key);
  return value->fields._size > 1;
}


bool PartyOrganizationUtility___c___GetNeedAddAnnotationSkillIds_b__146_1(
        PartyOrganizationUtility___c_o *this,
        System_Collections_Generic_KeyValuePair_int__List_int___o keyValuePair,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *value; // x19

  value = keyValuePair.fields.value;
  if ( (byte_596C203 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    this = (PartyOrganizationUtility___c_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_596C203 = 1;
  }
  if ( !value )
    sub_2213CDC(this, *(_QWORD *)&keyValuePair.fields.key);
  return value->fields._size > 1;
}


int32_t PartyOrganizationUtility___c___GetQuestUseItemIds_b__142_1(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_2213CDC(this, 0);
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
  __int64 v8; // x1
  __int64 v9; // x2
  PartyOrganizationUtility___c_c *v10; // x0
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__142_4; // x20
  Il2CppObject *v13; // x21
  struct PartyOrganizationUtility___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  PartyOrganizationUtility___c_c *v24; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v25; // x19
  struct PartyOrganizationUtility___c_StaticFields *v26; // x9
  System_Func_object__long__o *_9__142_5; // x20
  Il2CppObject *v28; // x21
  struct PartyOrganizationUtility___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0

  if ( (byte_596C201 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_AsEnumerable_QuestUseItemInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_QuestUseItemInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Take_QuestUseItemInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_QuestUseItemInfo__long___);
    sub_2213A60(&System_Func_QuestUseItemInfo__long__TypeInfo);
    sub_2213A60(&System_Func_QuestUseItemInfo__int__TypeInfo);
    sub_2213A60(&System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo);
    sub_2213A60(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_4__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_5__);
    this = (PartyOrganizationUtility___c_o *)sub_2213A60(&PartyOrganizationUtility___c_TypeInfo);
    byte_596C201 = 1;
  }
  if ( !group )
    sub_2213CDC(this, group);
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
    v7 = sub_224BC3C(group, System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo, 0);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__QuestUseItemInfo__o *, _QWORD))v7)(
          group,
          *(_QWORD *)(v7 + 8)) )
    return (System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *)System_Linq_Enumerable__AsEnumerable_object_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)group,
                                                                           (const MethodInfo_3868980 *)Method_System_Linq_Enumerable_AsEnumerable_QuestUseItemInfo___);
  v10 = PartyOrganizationUtility___c_TypeInfo;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v8, v9);
    v10 = PartyOrganizationUtility___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__142_4 = (System_Func_object__int__o *)static_fields->__9__142_4;
  if ( !_9__142_4 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v8, v9);
      static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__142_4 = (System_Func_object__int__o *)sub_2213CCC(System_Func_QuestUseItemInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__142_4,
      v13,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_4__,
      0);
    v14 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v14->__9__142_4 = (struct System_Func_QuestUseItemInfo__int__o *)_9__142_4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__142_4, (int32_t)_9__142_4, v15, v16, v17, v18, v19, v20);
  }
  v21 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)group,
          (System_Func_TSource__TKey__o *)_9__142_4,
          (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_QuestUseItemInfo__int___);
  v24 = PartyOrganizationUtility___c_TypeInfo;
  v25 = v21;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v22, v23);
    v24 = PartyOrganizationUtility___c_TypeInfo;
  }
  v26 = v24->static_fields;
  _9__142_5 = (System_Func_object__long__o *)v26->__9__142_5;
  if ( !_9__142_5 )
  {
    if ( !*(&v24->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v24, v22, v23);
      v26 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)v26->__9;
    _9__142_5 = (System_Func_object__long__o *)sub_2213CCC(System_Func_QuestUseItemInfo__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__142_5,
      v28,
      Method_PartyOrganizationUtility___c__GetQuestUseItemIds_b__142_5__,
      0);
    v29 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v29->__9__142_5 = (struct System_Func_QuestUseItemInfo__long__o *)_9__142_5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->__9__142_5, (int32_t)_9__142_5, v30, v31, v32, v33, v34, v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__long_(
                                                               v25,
                                                               (System_Func_TSource__TKey__o *)_9__142_5,
                                                               (const MethodInfo_389ABC4 *)Method_System_Linq_Enumerable_ThenBy_QuestUseItemInfo__long___);
  return (System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *)System_Linq_Enumerable__Take_object_(
                                                                         v36,
                                                                         1,
                                                                         (const MethodInfo_389A270 *)Method_System_Linq_Enumerable_Take_QuestUseItemInfo___);
}


int32_t PartyOrganizationUtility___c___GetQuestUseItemIds_b__142_3(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_2213CDC(this, 0);
  return info->fields._Id_k__BackingField;
}


int32_t PartyOrganizationUtility___c___GetQuestUseItemIds_b__142_4(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_2213CDC(this, 0);
  return info->fields._Value_k__BackingField;
}


int64_t PartyOrganizationUtility___c___GetQuestUseItemIds_b__142_5(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_2213CDC(this, 0);
  return info->fields._EndedAt_k__BackingField;
}


System_Collections_Generic_IEnumerable_int__o *PartyOrganizationUtility___c___GetQuestUseItems_b__134_0(
        PartyOrganizationUtility___c_o *this,
        EventCampaignEntity_o *eventCampaignEntity,
        const MethodInfo *method)
{
  if ( !eventCampaignEntity )
    sub_2213CDC(this, 0);
  return (System_Collections_Generic_IEnumerable_int__o *)eventCampaignEntity->fields.targetIds;
}


bool PartyOrganizationUtility___c___GetQuestUseItems_b__134_3(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_2213CDC(this, 0);
  return !info->fields._IsFriendshipUpEventItem_k__BackingField || QuestUseItemInfo__IsObtained(info, 0);
}


int32_t PartyOrganizationUtility___c___GetQuestUseItems_b__134_4(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_2213CDC(this, 0);
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
  __int64 v8; // x1
  __int64 v9; // x2
  PartyOrganizationUtility___c_c *v10; // x0
  struct PartyOrganizationUtility___c_StaticFields *static_fields; // x8
  System_Func_object__long__o *_9__134_8; // x20
  Il2CppObject *v13; // x21
  struct PartyOrganizationUtility___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  PartyOrganizationUtility___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  struct PartyOrganizationUtility___c_StaticFields *v26; // x9
  System_Func_T1__T2__TResult__o *_9__134_9; // x20
  Il2CppObject *v28; // x21
  struct PartyOrganizationUtility___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  Il2CppObject *v36; // x20
  System_Collections_Generic_List_object__o *v37; // x19
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0

  if ( (byte_596C200 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Aggregate_QuestUseItemInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_AsEnumerable_QuestUseItemInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_QuestUseItemInfo__long___);
    sub_2213A60(&System_Func_QuestUseItemInfo__long__TypeInfo);
    sub_2213A60(&System_Func_QuestUseItemInfo__QuestUseItemInfo__QuestUseItemInfo__TypeInfo);
    sub_2213A60(&System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestUseItemInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestUseItemInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestUseItemInfo__TypeInfo);
    sub_2213A60(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_8__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_9__);
    this = (PartyOrganizationUtility___c_o *)sub_2213A60(&PartyOrganizationUtility___c_TypeInfo);
    byte_596C200 = 1;
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
    v7 = sub_224BC3C(itemInfoGroup, System_Linq_IGrouping_int__QuestUseItemInfo__TypeInfo, 0);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__QuestUseItemInfo__o *, _QWORD))v7)(
          itemInfoGroup,
          *(_QWORD *)(v7 + 8)) )
    return (System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *)System_Linq_Enumerable__AsEnumerable_object_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)itemInfoGroup,
                                                                           (const MethodInfo_3868980 *)Method_System_Linq_Enumerable_AsEnumerable_QuestUseItemInfo___);
  v10 = PartyOrganizationUtility___c_TypeInfo;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v8, v9);
    v10 = PartyOrganizationUtility___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__134_8 = (System_Func_object__long__o *)static_fields->__9__134_8;
  if ( !_9__134_8 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v8, v9);
      static_fields = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__134_8 = (System_Func_object__long__o *)sub_2213CCC(System_Func_QuestUseItemInfo__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__134_8,
      v13,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_8__,
      0);
    v14 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v14->__9__134_8 = (struct System_Func_QuestUseItemInfo__long__o *)_9__134_8;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__134_8, (int32_t)_9__134_8, v15, v16, v17, v18, v19, v20);
  }
  v21 = System_Linq_Enumerable__OrderBy_object__long_(
          (System_Collections_Generic_IEnumerable_TSource__o *)itemInfoGroup,
          (System_Func_TSource__TKey__o *)_9__134_8,
          (const MethodInfo_3888C10 *)Method_System_Linq_Enumerable_OrderBy_QuestUseItemInfo__long___);
  v24 = PartyOrganizationUtility___c_TypeInfo;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)v21;
  if ( !*(&PartyOrganizationUtility___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility___c_TypeInfo, v22, v23);
    v24 = PartyOrganizationUtility___c_TypeInfo;
  }
  v26 = v24->static_fields;
  _9__134_9 = (System_Func_T1__T2__TResult__o *)v26->__9__134_9;
  if ( !_9__134_9 )
  {
    if ( !*(&v24->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v24, v22, v23);
      v26 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)v26->__9;
    _9__134_9 = (System_Func_T1__T2__TResult__o *)sub_2213CCC(System_Func_QuestUseItemInfo__QuestUseItemInfo__QuestUseItemInfo__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__134_9,
      v28,
      Method_PartyOrganizationUtility___c__GetQuestUseItems_b__134_9__,
      0);
    v29 = PartyOrganizationUtility___c_TypeInfo->static_fields;
    v29->__9__134_9 = (struct System_Func_QuestUseItemInfo__QuestUseItemInfo__QuestUseItemInfo__o *)_9__134_9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->__9__134_9, (int32_t)_9__134_9, v30, v31, v32, v33, v34, v35);
  }
  v36 = System_Linq_Enumerable__Aggregate_object_(
          v25,
          (System_Func_TSource__TSource__TSource__o *)_9__134_9,
          (const MethodInfo_38622C4 *)Method_System_Linq_Enumerable_Aggregate_QuestUseItemInfo___);
  v37 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestUseItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestUseItemInfo___ctor__);
  if ( !v37
    || (items = v37->fields._items,
        v45 = Method_System_Collections_Generic_List_QuestUseItemInfo__Add__,
        ++v37->fields._version,
        !items) )
  {
LABEL_30:
    sub_2213CDC(this, itemInfoGroup);
  }
  size = v37->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v37,
      v36,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = &items->obj.klass + size;
    v37->fields._size = size + 1;
    v47[4] = (Il2CppClass *)v36;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v47 + 4), (int32_t)v36, v38, v39, v40, v41, v42, v43);
  }
  return (System_Collections_Generic_IEnumerable_QuestUseItemInfo__o *)v37;
}


int32_t PartyOrganizationUtility___c___GetQuestUseItems_b__134_7(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_2213CDC(this, 0);
  return info->fields._Priority_k__BackingField;
}


int64_t PartyOrganizationUtility___c___GetQuestUseItems_b__134_8(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemEntity,
        const MethodInfo *method)
{
  if ( !itemEntity )
    sub_2213CDC(this, 0);
  return itemEntity->fields._EndedAt_k__BackingField;
}


QuestUseItemInfo_o *PartyOrganizationUtility___c___GetQuestUseItems_b__134_9(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *result,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  int32_t Num_k__BackingField; // w8
  int32_t v5; // w9
  int64_t EndedAt_k__BackingField; // x11
  QuestUseItemInfo_o *v7; // x0

  if ( !result )
    goto LABEL_9;
  Num_k__BackingField = result->fields._Num_k__BackingField;
  if ( Num_k__BackingField > 0 )
  {
    if ( itemInfo )
    {
      v5 = itemInfo->fields._Num_k__BackingField;
      goto LABEL_8;
    }
LABEL_9:
    sub_2213CDC(this, result);
  }
  if ( !itemInfo )
    goto LABEL_9;
  v5 = itemInfo->fields._Num_k__BackingField;
  if ( v5 >= 1 )
  {
    EndedAt_k__BackingField = itemInfo->fields._EndedAt_k__BackingField;
    result->fields._Id_k__BackingField = itemInfo->fields._Id_k__BackingField;
    result->fields._EndedAt_k__BackingField = EndedAt_k__BackingField;
  }
LABEL_8:
  v7 = result;
  result->fields._Num_k__BackingField = v5 + Num_k__BackingField;
  return v7;
}


bool PartyOrganizationUtility___c___OpenQuestUseItemDialogTutorial_b__141_0(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_2213CDC(this, 0);
  return itemInfo->fields._IsValid_k__BackingField;
}


int32_t PartyOrganizationUtility___c___OpenQuestUseItemDialogTutorial_b__141_1(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_2213CDC(this, 0);
  return info->fields._TutorialEventId_k__BackingField;
}


bool PartyOrganizationUtility___c___OpenQuestUseItemExpiredDialog_b__140_0(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_2213CDC(this, 0);
  return itemInfo->fields._IsValid_k__BackingField;
}


bool PartyOrganizationUtility___c___OpenQuestUseItemExpiredDialog_b__140_1(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_2213CDC(this, 0);
  return QuestUseItemInfo__GetUseFlag(itemInfo, 0) && !QuestUseItemInfo__IsEventPeriod(itemInfo, 0);
}


int32_t PartyOrganizationUtility___c___OpenQuestUseItemExpiredDialog_b__140_2(
        PartyOrganizationUtility___c_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  if ( !itemInfo )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, e);
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
    sub_2213CDC(this, 0);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  v4 = this;
  if ( (byte_596C205 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&Method_System_Linq_Enumerable_All_int___);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__6__);
    this = (PartyOrganizationUtility___c__DisplayClass133_0_o *)sub_2213A60(&Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_g__IsMatchWarId_1__);
    byte_596C205 = 1;
  }
  if ( !eventCampaignEntity )
    sub_2213CDC(this, eventCampaignEntity);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventCampaignEntity->fields.warGroupIds, 0) )
    return 1;
  warGroupIds = eventCampaignEntity->fields.warGroupIds;
  v7 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v7,
    (Il2CppObject *)v4,
    Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_g__IsMatchWarId_1__,
    0);
  if ( !BasicHelper__Any_int__58784608(
          warGroupIds,
          (System_Func_T__bool__o *)v7,
          (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248) )
    return 0;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)eventCampaignEntity->fields.warGroupIds;
  _9__6 = v4->fields.__9__6;
  if ( !_9__6 )
  {
    _9__6 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__6,
      (Il2CppObject *)v4,
      Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__6__,
      0);
    v4->fields.__9__6 = _9__6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__6, (int32_t)_9__6, v10, v11, v12, v13, v14, v15);
  }
  return System_Linq_Enumerable__All_int_(
           v8,
           (System_Func_TSource__bool__o *)_9__6,
           (const MethodInfo_38646E0 *)Method_System_Linq_Enumerable_All_int___);
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
    sub_2213CDC(this, warGroupEntity);
  if ( warGroupEntity->fields.questAfterClear == questEntity->fields.afterClear )
    return warGroupEntity->fields.questType == questEntity->fields.type;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool PartyOrganizationUtility___c__DisplayClass133_0___GetAvailableQuestUseItemEventCampaignEntities_b__6(
        PartyOrganizationUtility___c__DisplayClass133_0_o *this,
        int32_t warGroupId,
        const MethodInfo *method)
{
  struct PartyOrganizationUtility_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (PartyOrganizationUtility___c__DisplayClass133_0_o *)this->fields.warGroupIgnoreMaster) == 0 )
    sub_2213CDC(this, *(_QWORD *)&warGroupId);
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

  eventQuestMaster = this->fields.eventQuestMaster;
  entity = 0;
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
    sub_2213CDC(eventQuestMaster, *(_QWORD *)&eventId);
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

  if ( (byte_596C204 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_WarGroupEntity___);
    sub_2213A60(&System_Func_WarGroupEntity__bool__TypeInfo);
    sub_2213A60(&Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__5__);
    byte_596C204 = 1;
  }
  warGroupMaster = this->fields.warGroupMaster;
  entities = 0;
  if ( !warGroupMaster )
    sub_2213CDC(0, *(_QWORD *)&warGroupId);
  if ( WarGroupMaster__TryGetWarList(warGroupMaster, &entities, warGroupId, 0) )
  {
    v6 = (System_Object_array *)entities;
    v7 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v7,
      (Il2CppObject *)this,
      Method_PartyOrganizationUtility___c__DisplayClass133_0__GetAvailableQuestUseItemEventCampaignEntities_b__5__,
      0);
    return BasicHelper__Any_object__58785420(
             v6,
             (System_Func_T__bool__o *)v7,
             (const MethodInfo_380FE8C *)Method_BasicHelper_Any_WarGroupEntity___);
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
  if ( (byte_596C206 & 1) == 0 )
  {
    sub_2213A60(&Method___f__AnonymousType3_EventCampaignEntity__ItemEntity___ctor__);
    this = (PartyOrganizationUtility___c__DisplayClass134_0_o *)sub_2213A60(&_f__AnonymousType3_EventCampaignEntity__ItemEntity__TypeInfo);
    byte_596C206 = 1;
  }
  if ( !eventCampaignEntity || (this = (PartyOrganizationUtility___c__DisplayClass134_0_o *)v6->fields.itemMaster) == 0 )
    sub_2213CDC(this, eventCampaignEntity);
  ItemData = (Il2CppObject *)ItemMaster__GetItemData(
                               (ItemMaster_o *)this,
                               itemId,
                               eventCampaignEntity->fields.eventId,
                               0);
  v8 = (__f__AnonymousType3__eventCampaignEntity_j__TPar___itemEntity_j__TPar__o *)sub_2213CCC(_f__AnonymousType3_EventCampaignEntity__ItemEntity__TypeInfo);
  _f__AnonymousType3_object__object____ctor(
    v8,
    (Il2CppObject *)eventCampaignEntity,
    ItemData,
    (const MethodInfo_3B10E30 *)Method___f__AnonymousType3_EventCampaignEntity__ItemEntity___ctor__);
  return (__f__AnonymousType3_EventCampaignEntity__ItemEntity__o *)v8;
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationUtility___c__DisplayClass134_0___GetQuestUseItems_b__10(
        PartyOrganizationUtility___c__DisplayClass134_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !this->fields.__4__this )
    sub_2213CDC(this, *(_QWORD *)&id);
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
  QuestUseItemInfo_o *v9; // x19
  ItemEntity_o *v10; // x21
  EventCampaignEntity_o *eventCampaignEntity_i__Field; // x22

  v4 = this;
  if ( (byte_596C207 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&QuestUseItemInfo_TypeInfo);
    sub_2213A60(&Method___f__AnonymousType3_EventCampaignEntity__ItemEntity__get_eventCampaignEntity__);
    this = (PartyOrganizationUtility___c__DisplayClass134_0_o *)sub_2213A60(&Method___f__AnonymousType3_EventCampaignEntity__ItemEntity__get_itemEntity__);
    byte_596C207 = 1;
  }
  if ( !info )
    goto LABEL_20;
  if ( !info->fields._itemEntity_i__Field || !info->fields._eventCampaignEntity_i__Field )
    return 0;
  userItemMaster = v4->fields.userItemMaster;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, info, method);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  this = (PartyOrganizationUtility___c__DisplayClass134_0_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, info, method);
    this = (PartyOrganizationUtility___c__DisplayClass134_0_o *)NetworkManager_TypeInfo;
  }
  itemEntity_i__Field = info->fields._itemEntity_i__Field;
  if ( !itemEntity_i__Field || !userItemMaster )
LABEL_20:
    sub_2213CDC(this, info);
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       userItemMaster,
                       *(_QWORD *)&this[3].fields.list[1].fields._size,
                       itemEntity_i__Field->fields.id,
                       0);
  if ( EntityDefinitely )
    num = EntityDefinitely->fields.num;
  else
    num = 0;
  eventCampaignEntity_i__Field = info->fields._eventCampaignEntity_i__Field;
  v10 = info->fields._itemEntity_i__Field;
  v9 = (QuestUseItemInfo_o *)sub_2213CCC(QuestUseItemInfo_TypeInfo);
  QuestUseItemInfo___ctor(v9, v10, num, eventCampaignEntity_i__Field, 0);
  return v9;
}


void PartyOrganizationUtility___c__DisplayClass134_0___GetQuestUseItems_b__6(
        PartyOrganizationUtility___c__DisplayClass134_0_o *this,
        QuestUseItemInfo_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *IsGroupItem; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x19
  struct PartyOrganizationUtility_o *_4__this; // x8
  System_Collections_Generic_IEnumerable_TSource__o *questUseItemStateList; // x21
  System_Func_object__bool__o *v17; // x0
  intptr_t *v18; // x8
  System_Func_TSource__bool__o *v19; // x22

  if ( (byte_596C208 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_int_____);
    sub_2213A60(&System_Func_int____bool__TypeInfo);
    sub_2213A60(&Method_PartyOrganizationUtility___c__DisplayClass134_1__GetQuestUseItems_b__11__);
    sub_2213A60(&Method_PartyOrganizationUtility___c__DisplayClass134_1__GetQuestUseItems_b__12__);
    sub_2213A60(&PartyOrganizationUtility___c__DisplayClass134_1_TypeInfo);
    byte_596C208 = 1;
  }
  v5 = sub_2213CCC(PartyOrganizationUtility___c__DisplayClass134_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = info;
  v14 = v5 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)info, v8, v9, v10, v11, v12, v13);
  IsGroupItem = *(Il2CppObject **)(v5 + 16);
  if ( !IsGroupItem )
    goto LABEL_15;
  IsGroupItem = (Il2CppObject *)QuestUseItemInfo__get_IsGroupItem((QuestUseItemInfo_o *)IsGroupItem, 0);
  _4__this = this->fields.__4__this;
  if ( ((unsigned __int8)IsGroupItem & 1) != 0 )
  {
    if ( !_4__this )
      goto LABEL_15;
    questUseItemStateList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.questUseItemStateList;
    v17 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_int____bool__TypeInfo);
    v18 = &Method_PartyOrganizationUtility___c__DisplayClass134_1__GetQuestUseItems_b__11__;
  }
  else
  {
    if ( !_4__this )
      goto LABEL_15;
    questUseItemStateList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.questUseItemStateList;
    v17 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_int____bool__TypeInfo);
    v18 = &Method_PartyOrganizationUtility___c__DisplayClass134_1__GetQuestUseItems_b__12__;
  }
  v19 = (System_Func_TSource__bool__o *)v17;
  System_Func_object__bool____ctor(v17, (Il2CppObject *)v5, *v18, 0);
  IsGroupItem = System_Linq_Enumerable__FirstOrDefault_object__59254852(
                  questUseItemStateList,
                  v19,
                  (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_int_____);
  if ( !IsGroupItem )
    return;
  if ( LODWORD(IsGroupItem[1].monitor) <= 2 )
    sub_2213CE4(IsGroupItem);
  if ( !*(_QWORD *)v14 )
LABEL_15:
    sub_2213CDC(IsGroupItem, v7);
  *(_BYTE *)(*(_QWORD *)v14 + 92LL) = LODWORD(IsGroupItem[2].monitor) == 1;
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
  if ( (list->max_length & 0xFFFFFFFE) == 0 )
    sub_2213CE4(this);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_2213CDC(this, list);
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
    sub_2213CE4(this);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_2213CDC(this, list);
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
    sub_2213CDC(this, 0);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_596C209 & 1) == 0 )
  {
    sub_2213A60(&System_Action_Action__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Action_Action___Add__);
    sub_2213A60(&Method_QuestUseItemInfo_OpenExpiredDialog__);
    byte_596C209 = 1;
  }
  actionList = (System_Collections_Generic_List_object__o *)this->fields.actionList;
  v6 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v6, (Il2CppObject *)itemInfo, Method_QuestUseItemInfo_OpenExpiredDialog__, 0);
  if ( !actionList
    || (items = actionList->fields._items,
        v16 = Method_System_Collections_Generic_List_Action_Action___Add__,
        ++actionList->fields._version,
        !items) )
  {
    sub_2213CDC(v7, v8);
  }
  size = actionList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      actionList,
      (Il2CppObject *)v6,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    actionList->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
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
    sub_2213CDC(this, 0);
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
  if ( (list->max_length & 0xFFFFFFFE) == 0 )
    sub_2213CE4(this);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_2213CDC(this, list);
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
    sub_2213CE4(this);
  info = this->fields.info;
  if ( !info )
LABEL_5:
    sub_2213CDC(this, list);
  return list->m_Items[0] == info->fields._Id_k__BackingField;
}