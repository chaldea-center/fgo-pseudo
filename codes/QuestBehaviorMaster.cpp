void __fastcall QuestBehaviorMaster___ctor(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5B594 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity_____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TypeInfo);
    byte_4A5B594 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v3,
    (const MethodInfo_31AB7CC *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity_____ctor__);
  this->fields.dictQuestPhaseCache = (struct System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dictQuestPhaseCache, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    201,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__);
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
        sub_1B8880C(IsNullOrEmpty, v8);
      if ( !behaviorValues->max_length )
        sub_1B88814(IsNullOrEmpty, v8);
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
        sub_1B8880C(IsNullOrEmpty, v8);
      if ( !behaviorValues->max_length )
        sub_1B88814(IsNullOrEmpty, v8);
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
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0

  if ( (byte_4A5B598 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    byte_4A5B598 = 1;
  }
  PriorityEntity = QuestBehaviorMaster__GetPriorityEntity(this, questPhaseUniqueId, 4, method);
  if ( PriorityEntity )
  {
    defVals = PriorityEntity->fields.behaviorValues;
    if ( !defVals )
    {
      v8 = Method_System_Array_Empty_int___;
      v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v9 )
      {
        sub_1BDA4E8(Method_System_Array_Empty_int___);
        v9 = v8[7];
      }
      v10 = *(_QWORD *)(v9 + 16);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1BDA48C(v10);
      if ( !*(_DWORD *)(v10 + 224) )
        j_il2cpp_runtime_class_init_0(v10);
      v11 = *(_QWORD *)(v8[7] + 16LL);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1BDA48C(v11);
      return **(System_Int32_array ***)(v11 + 184);
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

  if ( (byte_4A5B592 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__);
    byte_4A5B592 = 1;
  }
  PK = (Il2CppObject *)QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&priority);
  return (QuestBehaviorEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_311DC8C *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__);
}


QuestBehaviorEntity_o *__fastcall QuestBehaviorMaster__GetPriorityEntity(
        QuestBehaviorMaster_o *this,
        int64_t questPhaseUniqueId,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictQuestPhaseCache; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x19
  System_Func_object__bool__o *v11; // x20
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5B599 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TryGetValue__);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_QuestBehaviorEntity___);
    sub_1B885B0(&System_Func_QuestBehaviorEntity__bool__TypeInfo);
    sub_1B885B0(&Method_QuestBehaviorMaster___c__DisplayClass10_0__GetPriorityEntity_b__0__);
    sub_1B885B0(&QuestBehaviorMaster___c__DisplayClass10_0_TypeInfo);
    byte_4A5B599 = 1;
  }
  value = 0LL;
  v7 = sub_1B887FC(QuestBehaviorMaster___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = kind,
        (dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache) == 0LL) )
  {
    sub_1B8880C(dictQuestPhaseCache, v9);
  }
  if ( !System_Collections_Generic_Dictionary_long__object___TryGetValue(
          dictQuestPhaseCache,
          questPhaseUniqueId,
          &value,
          (const MethodInfo_31AD914 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TryGetValue__) )
    return 0LL;
  v10 = value;
  v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_QuestBehaviorEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_QuestBehaviorMaster___c__DisplayClass10_0__GetPriorityEntity_b__0__,
    0LL);
  return (QuestBehaviorEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48907856(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v10,
                                    (System_Func_TSource__bool__o *)v11,
                                    (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestBehaviorEntity___);
}


void __fastcall QuestBehaviorMaster__InitQuestPhaseCache(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictQuestPhaseCache; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x21
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x21
  __int64 v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  QuestBehaviorEntity_o *v20; // x0
  const MethodInfo *v21; // x1
  Il2CppObject *v22; // x22
  int64_t UniqueId; // x0
  __int64 v24; // x1
  int64_t v25; // x23
  System_Collections_Generic_List_object__o *v26; // x24
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x8
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  System_Action_T__o *v39; // x21
  Il2CppObject *v40; // [xsp+8h] [xbp-68h]

  if ( (byte_4A5B59B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_KeyValuePair_long__List_QuestBehaviorEntity____TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_KeyValuePair_long__List_QuestBehaviorEntity_____);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_QuestBehaviorEntity___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBehaviorEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo);
    sub_1B885B0(&Method_QuestBehaviorMaster__InitQuestPhaseCache_b__13_0__);
    byte_4A5B59B = 1;
  }
  dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache;
  if ( !dictQuestPhaseCache )
    goto LABEL_46;
  System_Collections_Generic_Dictionary_long__object___Clear(
    dictQuestPhaseCache,
    (const MethodInfo_31AC324 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v4,
    (const MethodInfo_31AB7CC *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity____ctor__);
  dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__OfType_object_(
                                                                                   (System_Collections_IEnumerable_o *)this->fields.list,
                                                                                   (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_QuestBehaviorEntity___);
  if ( !dictQuestPhaseCache )
    goto LABEL_46;
  klass = dictQuestPhaseCache->klass;
  v6 = dictQuestPhaseCache;
  v7 = *(unsigned __int16 *)(&dictQuestPhaseCache->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&dictQuestPhaseCache->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestBehaviorEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_9;
    }
    v9 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v9 = sub_1BDA590(dictQuestPhaseCache, System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo, 0LL);
  }
  v40 = (Il2CppObject *)this;
  v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v9)(
          v6,
          *(_QWORD *)(v9 + 8));
  if ( !v11 )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    v12 = *(_QWORD *)v11;
    v13 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
    {
      v14 = (int *)(*(_QWORD *)(v12 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = v12 + 16LL * *v14 + 312;
    }
    else
    {
LABEL_16:
      v15 = sub_1BDA590(v11, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v15)(v11, *(_QWORD *)(v15 + 8)) & 1) == 0 )
      break;
    v16 = *(_QWORD *)v11;
    v17 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestBehaviorEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_23;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_23:
      v19 = sub_1BDA590(v11, System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo, 0LL);
    }
    v20 = (QuestBehaviorEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v11, *(_QWORD *)(v19 + 8));
    v22 = (Il2CppObject *)v20;
    if ( !v20 )
      sub_1B8880C(0LL, v21);
    UniqueId = QuestBehaviorEntity__GetUniqueId(v20, v21);
    if ( !v4 )
      sub_1B8880C(UniqueId, v24);
    v25 = UniqueId;
    if ( !System_Collections_Generic_Dictionary_long__object___ContainsKey(
            v4,
            UniqueId,
            (const MethodInfo_31AC390 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___ContainsKey__) )
    {
      v26 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v26,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__);
      System_Collections_Generic_Dictionary_long__object___set_Item(
        v4,
        v25,
        (Il2CppObject *)v26,
        (const MethodInfo_31AC188 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___set_Item__);
    }
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                          v4,
                                                          v25,
                                                          (const MethodInfo_31AC0FC *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___get_Item__);
    if ( !Item )
      sub_1B8880C(0LL, v28);
    items = Item->fields._items;
    v32 = Method_System_Collections_Generic_List_QuestBehaviorEntity__Add__;
    ++Item->fields._version;
    if ( !items )
      sub_1B8880C(Item, v28);
    size = Item->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        Item,
        v22,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      Item->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v22;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v22, v29, v30);
    }
  }
  v35 = *(_QWORD *)v11;
  v36 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
  {
    v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_38;
    }
    v38 = v35 + 16LL * *v37 + 312;
  }
  else
  {
LABEL_38:
    v38 = sub_1BDA590(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v38)(v11, *(_QWORD *)(v38 + 8));
  v39 = (System_Action_T__o *)sub_1B887FC(System_Action_KeyValuePair_long__List_QuestBehaviorEntity____TypeInfo);
  System_Action_KeyValuePair_long__object_____ctor(
    v39,
    v40,
    Method_QuestBehaviorMaster__InitQuestPhaseCache_b__13_0__,
    0LL);
  BasicHelper__ForEach_KeyValuePair_long__object__(
    (System_Collections_Generic_IEnumerable_T__o *)v4,
    v39,
    (const MethodInfo_2E6BD90 *)Method_BasicHelper_ForEach_KeyValuePair_long__List_QuestBehaviorEntity_____);
  if ( !v4 )
LABEL_46:
    sub_1B8880C(dictQuestPhaseCache, method);
  System_Collections_Generic_Dictionary_long__object___Clear(
    v4,
    (const MethodInfo_31AC324 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___Clear__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBehaviorMaster__IsOpenQuestBehaviorCond(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t behaviorType,
        const MethodInfo *method)
{
  int32_t v7; // w21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w23
  __int64 methodPtr_low; // x9
  QuestBehaviorMaster_o *v13; // x0
  const MethodInfo *v14; // x1

  v7 = questId;
  if ( (byte_4A5B59A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&QuestBehaviorEntity_TypeInfo);
    byte_4A5B59A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1B8880C(list, *(_QWORD *)&questId);
  v10 = System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v10 < 0 )
    return 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_16;
    *(_QWORD *)&questId = QuestBehaviorEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestBehaviorEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == v7
      && HIDWORD(list->fields.items) == phase
      && LODWORD(list[1].monitor) == behaviorType
      && QuestBehaviorEntity__checkConditions(
           (QuestBehaviorEntity_o *)list,
           (const MethodInfo *)QuestBehaviorEntity_TypeInfo) )
    {
      return 1;
    }
    if ( --v10 < 0 )
      return 0;
  }
  sub_1B88ACC(list);
  return QuestBehaviorMaster__preProcess(v13, v14);
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

  if ( (byte_4A5B593 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__);
    byte_4A5B593 = 1;
  }
  PK = (Il2CppObject *)QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__);
}


void __fastcall QuestBehaviorMaster___InitQuestPhaseCache_b__13_0(
        QuestBehaviorMaster_o *this,
        System_Collections_Generic_KeyValuePair_long__List_QuestBehaviorEntity___o pair,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *value; // x20
  int64_t key; // x19
  QuestBehaviorMaster___c_c *v6; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictQuestPhaseCache; // x21
  System_Func_object__int__o *_9__13_1; // x22
  Il2CppObject *v9; // x23
  struct QuestBehaviorMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Object_array *v14; // x0
  __int64 v15; // x1

  value = (System_Collections_Generic_IEnumerable_TSource__o *)pair.fields.value;
  key = pair.fields.key;
  if ( (byte_4A5B59C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____set_Item__);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_QuestBehaviorEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
    sub_1B885B0(&System_Func_QuestBehaviorEntity__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_long__List_QuestBehaviorEntity___get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_long__List_QuestBehaviorEntity___get_Value__);
    sub_1B885B0(&Method_QuestBehaviorMaster___c__InitQuestPhaseCache_b__13_1__);
    sub_1B885B0(&QuestBehaviorMaster___c_TypeInfo);
    byte_4A5B59C = 1;
  }
  v6 = QuestBehaviorMaster___c_TypeInfo;
  dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache;
  if ( !QuestBehaviorMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBehaviorMaster___c_TypeInfo);
    v6 = QuestBehaviorMaster___c_TypeInfo;
  }
  _9__13_1 = (System_Func_object__int__o *)v6->static_fields->__9__13_1;
  if ( !_9__13_1 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = QuestBehaviorMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__13_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_QuestBehaviorEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__13_1, v9, Method_QuestBehaviorMaster___c__InitQuestPhaseCache_b__13_1__, 0LL);
    static_fields = QuestBehaviorMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_1 = (struct System_Func_QuestBehaviorEntity__int__o *)_9__13_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_1, (int32_t)_9__13_1, v11, v12);
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               value,
                                                               (System_Func_TSource__TKey__o *)_9__13_1,
                                                               (const MethodInfo_2EAA2F0 *)Method_System_Linq_Enumerable_OrderByDescending_QuestBehaviorEntity__int___);
  v14 = System_Linq_Enumerable__ToArray_object_(
          v13,
          (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
  if ( !dictQuestPhaseCache )
    sub_1B8880C(v14, v15);
  System_Collections_Generic_Dictionary_long__object___set_Item(
    dictQuestPhaseCache,
    key,
    &v14->obj,
    (const MethodInfo_31AC188 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____set_Item__);
}


QuestBehaviorEntity_array *__fastcall QuestBehaviorMaster__getBattleSkill(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v7; // x22
  QuestBehaviorEntity_c *v8; // x1
  void *list; // x0
  int32_t v10; // w23
  QuestBehaviorEntity_o *v11; // x24
  __int64 methodPtr_low; // x9
  int32_t priority; // w29
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  QuestBehaviorMaster_o *v16; // x0
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4A5B596 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
    sub_1B885B0(&QuestBehaviorEntity_TypeInfo);
    byte_4A5B596 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v10 = (_DWORD)list - 1;
  if ( (int)list - 1 < 0 )
  {
LABEL_19:
    if ( v7 )
    {
      if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
              v7,
              (const MethodInfo_316D608 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__) )
        return 0LL;
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 v7,
                 (const MethodInfo_316D768 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__);
      return (QuestBehaviorEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                            (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
    }
LABEL_23:
    sub_1B8880C(list, v8);
  }
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_23;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v10,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_23;
    v8 = QuestBehaviorEntity_TypeInfo;
    v11 = (QuestBehaviorEntity_o *)list;
    methodPtr_low = LOBYTE(QuestBehaviorEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(QuestBehaviorEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( *((_DWORD *)list + 4) == questId && *((_DWORD *)list + 5) == phase && *((_DWORD *)list + 8) == 1 )
    {
      if ( !v7 )
        goto LABEL_23;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v7,
              *((_DWORD *)list + 6),
              (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__) )
        goto LABEL_16;
      priority = v11->fields.priority;
      list = System_Collections_Generic_Dictionary_int__object___get_Item(
               v7,
               v11->fields.num,
               (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__);
      if ( !list )
        goto LABEL_23;
      if ( priority >= *((_DWORD *)list + 7) )
      {
LABEL_16:
        list = (void *)QuestBehaviorEntity__checkConditions(v11, (const MethodInfo *)v8);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          System_Collections_Generic_Dictionary_int__object___Remove(
            v7,
            v11->fields.num,
            (const MethodInfo_316EDE0 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__);
          System_Collections_Generic_Dictionary_int__object___Add(
            v7,
            v11->fields.num,
            (Il2CppObject *)v11,
            (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__);
        }
      }
    }
    if ( --v10 < 0 )
      goto LABEL_19;
  }
  sub_1B88ACC(list);
  return (QuestBehaviorEntity_array *)QuestBehaviorMaster__getEnableContinue(v16, v17, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBehaviorMaster__getEnableContinue(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int32_t v5; // w20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  __int64 methodPtr_low; // x9
  QuestBehaviorMaster_o *v11; // x0
  int64_t v12; // x1
  System_Int32_array *v13; // x2
  const MethodInfo *v14; // x3

  v5 = questId;
  if ( (byte_4A5B597 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&QuestBehaviorEntity_TypeInfo);
    byte_4A5B597 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1B8880C(list, *(_QWORD *)&questId);
  v8 = System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
     - 1;
  if ( v8 < 0 )
    return 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_17;
    *(_QWORD *)&questId = QuestBehaviorEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestBehaviorEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == v5
      && HIDWORD(list->fields.items) == phase
      && LODWORD(list[1].monitor) == 2
      && SHIDWORD(list[1].klass) >= 1
      && QuestBehaviorEntity__checkConditions(
           (QuestBehaviorEntity_o *)list,
           (const MethodInfo *)QuestBehaviorEntity_TypeInfo) )
    {
      return 1;
    }
    if ( --v8 < 0 )
      return 0;
  }
  sub_1B88ACC(list);
  return (unsigned __int8)QuestBehaviorMaster__GetBattleIndividuality(v11, v12, v13, v14);
}


DataEntityBase_array *__fastcall QuestBehaviorMaster__getList(
        QuestBehaviorMaster_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  if ( (byte_4A5B595 & 1) == 0 )
  {
    sub_1B885B0(&Method_JsonManager_DeserializeArray_QuestBehaviorEntity___);
    sub_1B885B0(&JsonManager_TypeInfo);
    byte_4A5B595 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)JsonManager__DeserializeArray_object_(
                                   obj,
                                   (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_QuestBehaviorEntity___);
}


bool __fastcall QuestBehaviorMaster__preProcess(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  QuestBehaviorMaster__InitQuestPhaseCache(this, method);
  return 1;
}


void __fastcall QuestBehaviorMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B59D & 1) == 0 )
  {
    sub_1B885B0(&QuestBehaviorMaster___c_TypeInfo);
    byte_4A5B59D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(QuestBehaviorMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestBehaviorMaster___c_TypeInfo->static_fields->__9 = (struct QuestBehaviorMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)QuestBehaviorMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return x->fields.behaviorType == this->fields.kind && QuestBehaviorEntity__checkConditions(x, (const MethodInfo *)x);
}