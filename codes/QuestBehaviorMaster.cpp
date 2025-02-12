void __fastcall QuestBehaviorMaster___ctor(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BB4B4A & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity_____ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TypeInfo, v4);
    byte_4BB4B4A = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C13F70(System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v5,
    (const MethodInfo_32D0CD4 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity_____ctor__);
  this->fields.dictQuestPhaseCache = (struct System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____o *)v5;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.dictQuestPhaseCache, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    205,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__);
}


int32_t __fastcall QuestBehaviorMaster__GetBattleBg(
        QuestBehaviorMaster_o *this,
        int64_t questPhaseUniqueId,
        int32_t defaultBgNo,
        const MethodInfo *method)
{
  QuestBehaviorEntity_o *PriorityEntity; // x0
  QuestBehaviorEntity_o *v6; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  struct System_Int32_array *behaviorValues; // x8

  PriorityEntity = QuestBehaviorMaster__GetPriorityEntity(this, questPhaseUniqueId, 3, method);
  if ( PriorityEntity )
  {
    v6 = PriorityEntity;
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                      (System_Collections_ICollection_o *)PriorityEntity->fields.behaviorValues,
                      0LL);
    if ( !IsNullOrEmpty )
    {
      behaviorValues = v6->fields.behaviorValues;
      if ( !behaviorValues )
        sub_1C13F80(IsNullOrEmpty, v8);
      if ( !behaviorValues->max_length )
        sub_1C13F88(IsNullOrEmpty, v8);
      return behaviorValues->m_Items[1];
    }
  }
  return defaultBgNo;
}


int32_t __fastcall QuestBehaviorMaster__GetBattleBgType(
        QuestBehaviorMaster_o *this,
        int64_t questPhaseUniqueId,
        int32_t defType,
        const MethodInfo *method)
{
  QuestBehaviorEntity_o *PriorityEntity; // x0
  QuestBehaviorEntity_o *v6; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  struct System_Int32_array *behaviorValues; // x8

  PriorityEntity = QuestBehaviorMaster__GetPriorityEntity(this, questPhaseUniqueId, 8, method);
  if ( PriorityEntity )
  {
    v6 = PriorityEntity;
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                      (System_Collections_ICollection_o *)PriorityEntity->fields.behaviorValues,
                      0LL);
    if ( !IsNullOrEmpty )
    {
      behaviorValues = v6->fields.behaviorValues;
      if ( !behaviorValues )
        sub_1C13F80(IsNullOrEmpty, v8);
      if ( !behaviorValues->max_length )
        sub_1C13F88(IsNullOrEmpty, v8);
      return behaviorValues->m_Items[1];
    }
  }
  return defType;
}


System_Int32_array *__fastcall QuestBehaviorMaster__GetBattleIndividuality(
        QuestBehaviorMaster_o *this,
        int64_t questPhaseUniqueId,
        System_Int32_array *defVals,
        const MethodInfo *method)
{
  QuestBehaviorEntity_o *PriorityEntity; // x0
  long double inited; // q0
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0

  if ( (byte_4BB4B4E & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Empty_int___, questPhaseUniqueId);
    byte_4BB4B4E = 1;
  }
  PriorityEntity = QuestBehaviorMaster__GetPriorityEntity(this, questPhaseUniqueId, 4, method);
  if ( PriorityEntity )
  {
    defVals = PriorityEntity->fields.behaviorValues;
    if ( !defVals )
    {
      v9 = Method_System_Array_Empty_int___;
      v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v10 )
      {
        sub_1C65C5C(Method_System_Array_Empty_int___);
        v10 = v9[7];
      }
      v11 = *(_QWORD *)(v10 + 16);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1C65C00(inited);
      if ( !*(_DWORD *)(v11 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v11);
      v12 = *(_QWORD *)(v9[7] + 16LL);
      if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
        v12 = sub_1C65C00(inited);
      return **(System_Int32_array ***)(v12 + 184);
    }
  }
  return defVals;
}


// local variable allocation has failed, the output may be wrong!
QuestBehaviorEntity_o *__fastcall QuestBehaviorMaster__GetEntity(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BB4B48 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4BB4B48 = 1;
  }
  PK = (Il2CppObject *)QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&priority);
  return (QuestBehaviorEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_323D0DC *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__);
}


QuestBehaviorEntity_o *__fastcall QuestBehaviorMaster__GetPriorityEntity(
        QuestBehaviorMaster_o *this,
        int64_t questPhaseUniqueId,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictQuestPhaseCache; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x19
  System_Func_object__bool__o *v15; // x20
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB4B4F & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TryGetValue__,
      questPhaseUniqueId);
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_QuestBehaviorEntity___, v7);
    sub_1C13D24(&System_Func_QuestBehaviorEntity__bool__TypeInfo, v8);
    sub_1C13D24(&Method_QuestBehaviorMaster___c__DisplayClass10_0__GetPriorityEntity_b__0__, v9);
    sub_1C13D24(&QuestBehaviorMaster___c__DisplayClass10_0_TypeInfo, v10);
    byte_4BB4B4F = 1;
  }
  value = 0LL;
  v11 = sub_1C13F70(QuestBehaviorMaster___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = kind,
        (dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache) == 0LL) )
  {
    sub_1C13F80(dictQuestPhaseCache, v13);
  }
  if ( !System_Collections_Generic_Dictionary_long__object___TryGetValue(
          dictQuestPhaseCache,
          questPhaseUniqueId,
          &value,
          (const MethodInfo_32D2E1C *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TryGetValue__) )
    return 0LL;
  v14 = value;
  v15 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_QuestBehaviorEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_QuestBehaviorMaster___c__DisplayClass10_0__GetPriorityEntity_b__0__,
    0LL);
  return (QuestBehaviorEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                                    (System_Func_TSource__bool__o *)v15,
                                    (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestBehaviorEntity___);
}


void __fastcall QuestBehaviorMaster__InitQuestPhaseCache(QuestBehaviorMaster_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictQuestPhaseCache; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v21; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v23; // x21
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x21
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  QuestBehaviorEntity_o *v37; // x0
  const MethodInfo *v38; // x1
  Il2CppObject *v39; // x22
  int64_t UniqueId; // x0
  __int64 v41; // x1
  int64_t v42; // x23
  System_Collections_Generic_List_object__o *v43; // x24
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x8
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  System_Action_T__o *v60; // x21
  Il2CppObject *v61; // [xsp+8h] [xbp-68h]

  if ( (byte_4BB4B51 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_KeyValuePair_long__List_QuestBehaviorEntity____TypeInfo, method);
    sub_1C13D24(&Method_BasicHelper_ForEach_KeyValuePair_long__List_QuestBehaviorEntity_____, v3);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____Clear__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___Clear__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___ContainsKey__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity____ctor__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___get_Item__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___set_Item__, v9);
    sub_1C13D24(&System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TypeInfo, v10);
    sub_1C13D24(&Method_System_Linq_Enumerable_OfType_QuestBehaviorEntity___, v11);
    sub_1C13D24(&System_IDisposable_TypeInfo, v12);
    sub_1C13D24(&System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo, v13);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo, v14);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestBehaviorEntity__Add__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__, v17);
    sub_1C13D24(&System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo, v18);
    sub_1C13D24(&Method_QuestBehaviorMaster__InitQuestPhaseCache_b__13_0__, v19);
    byte_4BB4B51 = 1;
  }
  dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache;
  if ( !dictQuestPhaseCache )
    goto LABEL_46;
  System_Collections_Generic_Dictionary_long__object___Clear(
    dictQuestPhaseCache,
    (const MethodInfo_32D182C *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____Clear__);
  v21 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C13F70(System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v21,
    (const MethodInfo_32D0CD4 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity____ctor__);
  dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__OfType_object_(
                                                                                   (System_Collections_IEnumerable_o *)this->fields.list,
                                                                                   (const MethodInfo_2FB7F8C *)Method_System_Linq_Enumerable_OfType_QuestBehaviorEntity___);
  if ( !dictQuestPhaseCache )
    goto LABEL_46;
  klass = dictQuestPhaseCache->klass;
  v23 = dictQuestPhaseCache;
  v24 = *(unsigned __int16 *)(&dictQuestPhaseCache->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&dictQuestPhaseCache->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestBehaviorEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo )
    {
      --v24;
      p_offset += 4;
      if ( !v24 )
        goto LABEL_9;
    }
    v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v26 = sub_1C65D04(dictQuestPhaseCache, System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo, 0LL);
  }
  v61 = (Il2CppObject *)this;
  v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v26)(
          v23,
          *(_QWORD *)(v26 + 8));
  if ( !v28 )
    sub_1C13F80(0LL, v27);
  while ( 1 )
  {
    v29 = *(_QWORD *)v28;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_16;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_16:
      v32 = sub_1C65D04(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
      break;
    v33 = *(_QWORD *)v28;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestBehaviorEntity__c **)v35 - 1) != System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_23;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_23:
      v36 = sub_1C65D04(v28, System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo, 0LL);
    }
    v37 = (QuestBehaviorEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v28, *(_QWORD *)(v36 + 8));
    v39 = (Il2CppObject *)v37;
    if ( !v37 )
      sub_1C13F80(0LL, v38);
    UniqueId = QuestBehaviorEntity__GetUniqueId(v37, v38);
    if ( !v21 )
      sub_1C13F80(UniqueId, v41);
    v42 = UniqueId;
    if ( !System_Collections_Generic_Dictionary_long__object___ContainsKey(
            v21,
            UniqueId,
            (const MethodInfo_32D1898 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___ContainsKey__) )
    {
      v43 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v43,
        (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__);
      System_Collections_Generic_Dictionary_long__object___set_Item(
        v21,
        v42,
        (Il2CppObject *)v43,
        (const MethodInfo_32D1690 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___set_Item__);
    }
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                          v21,
                                                          v42,
                                                          (const MethodInfo_32D1604 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___get_Item__);
    if ( !Item )
      sub_1C13F80(0LL, v45);
    items = Item->fields._items;
    v53 = Method_System_Collections_Generic_List_QuestBehaviorEntity__Add__;
    ++Item->fields._version;
    if ( !items )
      sub_1C13F80(Item, v45);
    size = Item->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        Item,
        v39,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = &items->obj.klass + size;
      Item->fields._size = size + 1;
      v55[4] = (Il2CppClass *)v39;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)v39, v46, v47, v48, v49, v50, v51);
    }
  }
  v56 = *(_QWORD *)v28;
  v57 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
  {
    v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      --v57;
      v58 += 4;
      if ( !v57 )
        goto LABEL_38;
    }
    v59 = v56 + 16LL * *v58 + 312;
  }
  else
  {
LABEL_38:
    v59 = sub_1C65D04(v28, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v59)(v28, *(_QWORD *)(v59 + 8));
  v60 = (System_Action_T__o *)sub_1C13F70(System_Action_KeyValuePair_long__List_QuestBehaviorEntity____TypeInfo);
  System_Action_KeyValuePair_long__object_____ctor(
    v60,
    v61,
    Method_QuestBehaviorMaster__InitQuestPhaseCache_b__13_0__,
    0LL);
  BasicHelper__ForEach_KeyValuePair_long__object__(
    (System_Collections_Generic_IEnumerable_T__o *)v21,
    v60,
    (const MethodInfo_2F7B498 *)Method_BasicHelper_ForEach_KeyValuePair_long__List_QuestBehaviorEntity_____);
  if ( !v21 )
LABEL_46:
    sub_1C13F80(dictQuestPhaseCache, method);
  System_Collections_Generic_Dictionary_long__object___Clear(
    v21,
    (const MethodInfo_32D182C *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___Clear__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBehaviorMaster__IsOpenQuestBehaviorCond(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t behaviorType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v11; // w23

  if ( (byte_4BB4B50 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Count__, *(_QWORD *)&questId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Item__, v9);
    byte_4BB4B50 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1C13F80(list, *(_QWORD *)&questId);
  v11 = System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Count__)
      - 1;
  if ( v11 < 0 )
    return 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v11,
                                                               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Item__);
    if ( !list )
      goto LABEL_14;
    if ( LODWORD(list->fields.items) == questId
      && HIDWORD(list->fields.items) == phase
      && LODWORD(list[1].monitor) == behaviorType
      && QuestBehaviorEntity__checkConditions((QuestBehaviorEntity_o *)list, *(const MethodInfo **)&questId) )
    {
      return 1;
    }
    if ( --v11 < 0 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBehaviorMaster__TryGetEntity(
        QuestBehaviorMaster_o *this,
        QuestBehaviorEntity_o **entity,
        int32_t questId,
        int32_t phase,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BB4B49 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__, entity);
    byte_4BB4B49 = 1;
  }
  PK = (Il2CppObject *)QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__);
}


void __fastcall QuestBehaviorMaster___InitQuestPhaseCache_b__13_0(
        QuestBehaviorMaster_o *this,
        System_Collections_Generic_KeyValuePair_long__List_QuestBehaviorEntity___o pair,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *value; // x20
  int64_t key; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  QuestBehaviorMaster___c_c *v13; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictQuestPhaseCache; // x21
  System_Func_object__int__o *_9__13_1; // x22
  Il2CppObject *v16; // x23
  struct QuestBehaviorMaster___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Object_array *v25; // x0
  __int64 v26; // x1

  value = (System_Collections_Generic_IEnumerable_TSource__o *)pair.fields.value;
  key = pair.fields.key;
  if ( (byte_4BB4B52 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____set_Item__, pair.fields.key);
    sub_1C13D24(&Method_System_Linq_Enumerable_OrderByDescending_QuestBehaviorEntity__int___, v6);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___, v7);
    sub_1C13D24(&System_Func_QuestBehaviorEntity__int__TypeInfo, v8);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_long__List_QuestBehaviorEntity___get_Key__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_long__List_QuestBehaviorEntity___get_Value__, v10);
    sub_1C13D24(&Method_QuestBehaviorMaster___c__InitQuestPhaseCache_b__13_1__, v11);
    sub_1C13D24(&QuestBehaviorMaster___c_TypeInfo, v12);
    byte_4BB4B52 = 1;
  }
  v13 = QuestBehaviorMaster___c_TypeInfo;
  dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache;
  if ( !QuestBehaviorMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBehaviorMaster___c_TypeInfo);
    v13 = QuestBehaviorMaster___c_TypeInfo;
  }
  _9__13_1 = (System_Func_object__int__o *)v13->static_fields->__9__13_1;
  if ( !_9__13_1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = QuestBehaviorMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__13_1 = (System_Func_object__int__o *)sub_1C13F70(System_Func_QuestBehaviorEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__13_1, v16, Method_QuestBehaviorMaster___c__InitQuestPhaseCache_b__13_1__, 0LL);
    static_fields = QuestBehaviorMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_1 = (struct System_Func_QuestBehaviorEntity__int__o *)_9__13_1;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__13_1,
      (int64_t)_9__13_1,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               value,
                                                               (System_Func_TSource__TKey__o *)_9__13_1,
                                                               (const MethodInfo_2FB895C *)Method_System_Linq_Enumerable_OrderByDescending_QuestBehaviorEntity__int___);
  v25 = System_Linq_Enumerable__ToArray_object_(
          v24,
          (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
  if ( !dictQuestPhaseCache )
    sub_1C13F80(v25, v26);
  System_Collections_Generic_Dictionary_long__object___set_Item(
    dictQuestPhaseCache,
    key,
    &v25->obj,
    (const MethodInfo_32D1690 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____set_Item__);
}


// local variable allocation has failed, the output may be wrong!
QuestBehaviorEntity_array *__fastcall QuestBehaviorMaster__getBattleSkill(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
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
  System_Collections_Generic_Dictionary_int__object__o *v17; // x22
  const MethodInfo *v18; // x1
  void *list; // x0
  int32_t v20; // w23
  QuestBehaviorEntity_o *v21; // x24
  int32_t priority; // w28
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_4BB4B4C & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Count__, *(_QWORD *)&questId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Item__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__, v14);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo, v15);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___, v16);
    byte_4BB4B4C = 1;
  }
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Count__);
  v20 = (_DWORD)list - 1;
  if ( (int)list - 1 >= 0 )
  {
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v20,
               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Item__);
      if ( !list )
        break;
      v21 = (QuestBehaviorEntity_o *)list;
      if ( *((_DWORD *)list + 4) == questId && *((_DWORD *)list + 5) == phase && *((_DWORD *)list + 8) == 1 )
      {
        if ( !v17 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v17,
                *((_DWORD *)list + 6),
                (const MethodInfo_329249C *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__) )
          goto LABEL_14;
        priority = v21->fields.priority;
        list = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v17,
                 v21->fields.num,
                 (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__);
        if ( !list )
          break;
        if ( priority >= *((_DWORD *)list + 7) )
        {
LABEL_14:
          list = (void *)QuestBehaviorEntity__checkConditions(v21, v18);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            System_Collections_Generic_Dictionary_int__object___Remove(
              v17,
              v21->fields.num,
              (const MethodInfo_3293730 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__);
            System_Collections_Generic_Dictionary_int__object___Add(
              v17,
              v21->fields.num,
              (Il2CppObject *)v21,
              (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__);
          }
        }
      }
      if ( --v20 < 0 )
        goto LABEL_17;
    }
LABEL_21:
    sub_1C13F80(list, v18);
  }
LABEL_17:
  if ( !v17 )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          v17,
          (const MethodInfo_3291F58 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__) )
    return 0LL;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             v17,
             (const MethodInfo_32920B8 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__);
  return (QuestBehaviorEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                        (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBehaviorMaster__getEnableContinue(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v9; // w22

  if ( (byte_4BB4B4D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Count__, *(_QWORD *)&questId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Item__, v7);
    byte_4BB4B4D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1C13F80(list, *(_QWORD *)&questId);
  v9 = System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Count__)
     - 1;
  if ( v9 < 0 )
    return 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v9,
                                                               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Item__);
    if ( !list )
      goto LABEL_15;
    if ( LODWORD(list->fields.items) == questId
      && HIDWORD(list->fields.items) == phase
      && LODWORD(list[1].monitor) == 2
      && SHIDWORD(list[1].klass) >= 1
      && QuestBehaviorEntity__checkConditions((QuestBehaviorEntity_o *)list, *(const MethodInfo **)&questId) )
    {
      return 1;
    }
    if ( --v9 < 0 )
      return 0;
  }
}


QuestBehaviorEntity_array *__fastcall QuestBehaviorMaster__getList(
        QuestBehaviorMaster_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1

  if ( (byte_4BB4B4B & 1) == 0 )
  {
    sub_1C13D24(&Method_JsonManager_DeserializeArray_QuestBehaviorEntity___, obj);
    sub_1C13D24(&JsonManager_TypeInfo, v4);
    byte_4BB4B4B = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (QuestBehaviorEntity_array *)JsonManager__DeserializeArray_object_(
                                        obj,
                                        (const MethodInfo_2FF6CCC *)Method_JsonManager_DeserializeArray_QuestBehaviorEntity___);
}


bool __fastcall QuestBehaviorMaster__preProcess(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  QuestBehaviorMaster__InitQuestPhaseCache(this, method);
  return 1;
}


void __fastcall QuestBehaviorMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB4B53 & 1) == 0 )
  {
    sub_1C13D24(&QuestBehaviorMaster___c_TypeInfo, v1);
    byte_4BB4B53 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(QuestBehaviorMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestBehaviorMaster___c_TypeInfo->static_fields->__9 = (struct QuestBehaviorMaster___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)QuestBehaviorMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall QuestBehaviorMaster___c___ctor(QuestBehaviorMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestBehaviorMaster___c___InitQuestPhaseCache_b__13_1(
        QuestBehaviorMaster___c_o *this,
        QuestBehaviorEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C13F80(this, 0LL);
  return ent->fields.priority;
}


void __fastcall QuestBehaviorMaster___c__DisplayClass10_0___ctor(
        QuestBehaviorMaster___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBehaviorMaster___c__DisplayClass10_0___GetPriorityEntity_b__0(
        QuestBehaviorMaster___c__DisplayClass10_0_o *this,
        QuestBehaviorEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.behaviorType == this->fields.kind && QuestBehaviorEntity__checkConditions(x, (const MethodInfo *)x);
}