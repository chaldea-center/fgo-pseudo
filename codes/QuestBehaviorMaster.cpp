void __fastcall QuestBehaviorMaster___ctor(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A702A0 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__, method);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity_____ctor__, v3);
    sub_1B90010(&System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TypeInfo, v4);
    byte_4A702A0 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B9025C(System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v5,
    (const MethodInfo_31BA440 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity_____ctor__);
  this->fields.dictQuestPhaseCache = (struct System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____o *)v5;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.dictQuestPhaseCache, (int32_t)v5, v6, v7);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    201,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__);
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
        sub_1B9026C(IsNullOrEmpty, v8);
      if ( !behaviorValues->max_length )
        sub_1B90274(IsNullOrEmpty, v8);
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
        sub_1B9026C(IsNullOrEmpty, v8);
      if ( !behaviorValues->max_length )
        sub_1B90274(IsNullOrEmpty, v8);
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

  if ( (byte_4A702A4 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_Empty_int___, questPhaseUniqueId);
    byte_4A702A4 = 1;
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
        sub_1BE1F48(Method_System_Array_Empty_int___);
        v9 = v8[7];
      }
      v10 = *(_QWORD *)(v9 + 16);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1BE1EEC(v10);
      if ( !*(_DWORD *)(v10 + 224) )
        j_il2cpp_runtime_class_init_0(v10);
      v11 = *(_QWORD *)(v8[7] + 16LL);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1BE1EEC(v11);
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

  if ( (byte_4A7029E & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4A7029E = 1;
  }
  PK = (Il2CppObject *)QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&priority);
  return (QuestBehaviorEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_312C900 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__);
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

  if ( (byte_4A702A5 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TryGetValue__,
      questPhaseUniqueId);
    sub_1B90010(&Method_System_Linq_Enumerable_FirstOrDefault_QuestBehaviorEntity___, v7);
    sub_1B90010(&System_Func_QuestBehaviorEntity__bool__TypeInfo, v8);
    sub_1B90010(&Method_QuestBehaviorMaster___c__DisplayClass10_0__GetPriorityEntity_b__0__, v9);
    sub_1B90010(&QuestBehaviorMaster___c__DisplayClass10_0_TypeInfo, v10);
    byte_4A702A5 = 1;
  }
  value = 0LL;
  v11 = sub_1B9025C(QuestBehaviorMaster___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = kind,
        (dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache) == 0LL) )
  {
    sub_1B9026C(dictQuestPhaseCache, v13);
  }
  if ( !System_Collections_Generic_Dictionary_long__object___TryGetValue(
          dictQuestPhaseCache,
          questPhaseUniqueId,
          &value,
          (const MethodInfo_31BC588 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TryGetValue__) )
    return 0LL;
  v14 = value;
  v15 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_QuestBehaviorEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_QuestBehaviorMaster___c__DisplayClass10_0__GetPriorityEntity_b__0__,
    0LL);
  return (QuestBehaviorEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48967524(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                                    (System_Func_TSource__bool__o *)v15,
                                    (const MethodInfo_2EB2F64 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestBehaviorEntity___);
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
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x8
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  System_Action_T__o *v56; // x21
  Il2CppObject *v57; // [xsp+8h] [xbp-68h]

  if ( (byte_4A702A7 & 1) == 0 )
  {
    sub_1B90010(&System_Action_KeyValuePair_long__List_QuestBehaviorEntity____TypeInfo, method);
    sub_1B90010(&Method_BasicHelper_ForEach_KeyValuePair_long__List_QuestBehaviorEntity_____, v3);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____Clear__, v4);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___Clear__, v5);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___ContainsKey__, v6);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity____ctor__, v7);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___get_Item__, v8);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___set_Item__, v9);
    sub_1B90010(&System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TypeInfo, v10);
    sub_1B90010(&Method_System_Linq_Enumerable_OfType_QuestBehaviorEntity___, v11);
    sub_1B90010(&System_IDisposable_TypeInfo, v12);
    sub_1B90010(&System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo, v13);
    sub_1B90010(&System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo, v14);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestBehaviorEntity__Add__, v16);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__, v17);
    sub_1B90010(&System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo, v18);
    sub_1B90010(&Method_QuestBehaviorMaster__InitQuestPhaseCache_b__13_0__, v19);
    byte_4A702A7 = 1;
  }
  dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache;
  if ( !dictQuestPhaseCache )
    goto LABEL_46;
  System_Collections_Generic_Dictionary_long__object___Clear(
    dictQuestPhaseCache,
    (const MethodInfo_31BAF98 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____Clear__);
  v21 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B9025C(System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v21,
    (const MethodInfo_31BA440 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity____ctor__);
  dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__OfType_object_(
                                                                                   (System_Collections_IEnumerable_o *)this->fields.list,
                                                                                   (const MethodInfo_2EB82A0 *)Method_System_Linq_Enumerable_OfType_QuestBehaviorEntity___);
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
    v26 = sub_1BE1FF0(dictQuestPhaseCache, System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo, 0LL);
  }
  v57 = (Il2CppObject *)this;
  v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v26)(
          v23,
          *(_QWORD *)(v26 + 8));
  if ( !v28 )
    sub_1B9026C(0LL, v27);
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
      v32 = sub_1BE1FF0(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v36 = sub_1BE1FF0(v28, System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo, 0LL);
    }
    v37 = (QuestBehaviorEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v28, *(_QWORD *)(v36 + 8));
    v39 = (Il2CppObject *)v37;
    if ( !v37 )
      sub_1B9026C(0LL, v38);
    UniqueId = QuestBehaviorEntity__GetUniqueId(v37, v38);
    if ( !v21 )
      sub_1B9026C(UniqueId, v41);
    v42 = UniqueId;
    if ( !System_Collections_Generic_Dictionary_long__object___ContainsKey(
            v21,
            UniqueId,
            (const MethodInfo_31BB004 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___ContainsKey__) )
    {
      v43 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v43,
        (const MethodInfo_351018C *)Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__);
      System_Collections_Generic_Dictionary_long__object___set_Item(
        v21,
        v42,
        (Il2CppObject *)v43,
        (const MethodInfo_31BADFC *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___set_Item__);
    }
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                          v21,
                                                          v42,
                                                          (const MethodInfo_31BAD70 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___get_Item__);
    if ( !Item )
      sub_1B9026C(0LL, v45);
    items = Item->fields._items;
    v49 = Method_System_Collections_Generic_List_QuestBehaviorEntity__Add__;
    ++Item->fields._version;
    if ( !items )
      sub_1B9026C(Item, v45);
    size = Item->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        Item,
        v39,
        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    }
    else
    {
      v51 = &items->obj.klass + size;
      Item->fields._size = size + 1;
      v51[4] = (Il2CppClass *)v39;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)v39, v46, v47);
    }
  }
  v52 = *(_QWORD *)v28;
  v53 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
  {
    v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      --v53;
      v54 += 4;
      if ( !v53 )
        goto LABEL_38;
    }
    v55 = v52 + 16LL * *v54 + 312;
  }
  else
  {
LABEL_38:
    v55 = sub_1BE1FF0(v28, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v55)(v28, *(_QWORD *)(v55 + 8));
  v56 = (System_Action_T__o *)sub_1B9025C(System_Action_KeyValuePair_long__List_QuestBehaviorEntity____TypeInfo);
  System_Action_KeyValuePair_long__object_____ctor(
    v56,
    v57,
    Method_QuestBehaviorMaster__InitQuestPhaseCache_b__13_0__,
    0LL);
  BasicHelper__ForEach_KeyValuePair_long__object__(
    (System_Collections_Generic_IEnumerable_T__o *)v21,
    v56,
    (const MethodInfo_2E7A6A4 *)Method_BasicHelper_ForEach_KeyValuePair_long__List_QuestBehaviorEntity_____);
  if ( !v21 )
LABEL_46:
    sub_1B9026C(dictQuestPhaseCache, method);
  System_Collections_Generic_Dictionary_long__object___Clear(
    v21,
    (const MethodInfo_31BAF98 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___Clear__);
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
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w23
  __int64 methodPtr_low; // x9
  QuestBehaviorMaster_o *v15; // x0
  const MethodInfo *v16; // x1

  v7 = questId;
  if ( (byte_4A702A6 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B90010(&QuestBehaviorEntity_TypeInfo, v10);
    byte_4A702A6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1B9026C(list, *(_QWORD *)&questId);
  v12 = System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v12 < 0 )
    return 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v12,
                                                               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    if ( --v12 < 0 )
      return 0;
  }
  sub_1B9052C(list);
  return QuestBehaviorMaster__preProcess(v15, v16);
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

  if ( (byte_4A7029F & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__, entity);
    byte_4A7029F = 1;
  }
  PK = (Il2CppObject *)QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__);
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
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Object_array *v21; // x0
  __int64 v22; // x1

  value = (System_Collections_Generic_IEnumerable_TSource__o *)pair.fields.value;
  key = pair.fields.key;
  if ( (byte_4A702A8 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____set_Item__, pair.fields.key);
    sub_1B90010(&Method_System_Linq_Enumerable_OrderByDescending_QuestBehaviorEntity__int___, v6);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___, v7);
    sub_1B90010(&System_Func_QuestBehaviorEntity__int__TypeInfo, v8);
    sub_1B90010(&Method_System_Collections_Generic_KeyValuePair_long__List_QuestBehaviorEntity___get_Key__, v9);
    sub_1B90010(&Method_System_Collections_Generic_KeyValuePair_long__List_QuestBehaviorEntity___get_Value__, v10);
    sub_1B90010(&Method_QuestBehaviorMaster___c__InitQuestPhaseCache_b__13_1__, v11);
    sub_1B90010(&QuestBehaviorMaster___c_TypeInfo, v12);
    byte_4A702A8 = 1;
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
    _9__13_1 = (System_Func_object__int__o *)sub_1B9025C(System_Func_QuestBehaviorEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__13_1, v16, Method_QuestBehaviorMaster___c__InitQuestPhaseCache_b__13_1__, 0LL);
    static_fields = QuestBehaviorMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_1 = (struct System_Func_QuestBehaviorEntity__int__o *)_9__13_1;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_1, (int32_t)_9__13_1, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               value,
                                                               (System_Func_TSource__TKey__o *)_9__13_1,
                                                               (const MethodInfo_2EB8C70 *)Method_System_Linq_Enumerable_OrderByDescending_QuestBehaviorEntity__int___);
  v21 = System_Linq_Enumerable__ToArray_object_(
          v20,
          (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
  if ( !dictQuestPhaseCache )
    sub_1B9026C(v21, v22);
  System_Collections_Generic_Dictionary_long__object___set_Item(
    dictQuestPhaseCache,
    key,
    &v21->obj,
    (const MethodInfo_31BADFC *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____set_Item__);
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
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_int__object__o *v18; // x22
  QuestBehaviorEntity_c *v19; // x1
  void *list; // x0
  int32_t v21; // w23
  QuestBehaviorEntity_o *v22; // x24
  __int64 methodPtr_low; // x9
  int32_t priority; // w29
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  QuestBehaviorMaster_o *v27; // x0
  int32_t v28; // w1
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4A702A2 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__, v8);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__, v9);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__, v10);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__, v11);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__, v12);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__, v13);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__, v14);
    sub_1B90010(&System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo, v15);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___, v16);
    sub_1B90010(&QuestBehaviorEntity_TypeInfo, v17);
    byte_4A702A2 = 1;
  }
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B9025C(System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_317BBF8 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v21 = (_DWORD)list - 1;
  if ( (int)list - 1 < 0 )
  {
LABEL_19:
    if ( v18 )
    {
      if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
              v18,
              (const MethodInfo_317C27C *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__) )
        return 0LL;
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 v18,
                 (const MethodInfo_317C3DC *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__);
      return (QuestBehaviorEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                            (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
    }
LABEL_23:
    sub_1B9026C(list, v19);
  }
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_23;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v21,
             (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_23;
    v19 = QuestBehaviorEntity_TypeInfo;
    v22 = (QuestBehaviorEntity_o *)list;
    methodPtr_low = LOBYTE(QuestBehaviorEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(QuestBehaviorEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( *((_DWORD *)list + 4) == questId && *((_DWORD *)list + 5) == phase && *((_DWORD *)list + 8) == 1 )
    {
      if ( !v18 )
        goto LABEL_23;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v18,
              *((_DWORD *)list + 6),
              (const MethodInfo_317C7C0 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__) )
        goto LABEL_16;
      priority = v22->fields.priority;
      list = System_Collections_Generic_Dictionary_int__object___get_Item(
               v18,
               v22->fields.num,
               (const MethodInfo_317C52C *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__);
      if ( !list )
        goto LABEL_23;
      if ( priority >= *((_DWORD *)list + 7) )
      {
LABEL_16:
        list = (void *)QuestBehaviorEntity__checkConditions(v22, (const MethodInfo *)v19);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          System_Collections_Generic_Dictionary_int__object___Remove(
            v18,
            v22->fields.num,
            (const MethodInfo_317DA54 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__);
          System_Collections_Generic_Dictionary_int__object___Add(
            v18,
            v22->fields.num,
            (Il2CppObject *)v22,
            (const MethodInfo_317C5CC *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__);
        }
      }
    }
    if ( --v21 < 0 )
      goto LABEL_19;
  }
  sub_1B9052C(list);
  return (QuestBehaviorEntity_array *)QuestBehaviorMaster__getEnableContinue(v27, v28, v29, v30);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBehaviorMaster__getEnableContinue(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int32_t v5; // w20
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w22
  __int64 methodPtr_low; // x9
  QuestBehaviorMaster_o *v13; // x0
  int64_t v14; // x1
  System_Int32_array *v15; // x2
  const MethodInfo *v16; // x3

  v5 = questId;
  if ( (byte_4A702A3 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B90010(&QuestBehaviorEntity_TypeInfo, v8);
    byte_4A702A3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1B9026C(list, *(_QWORD *)&questId);
  v10 = System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v10 < 0 )
    return 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    if ( --v10 < 0 )
      return 0;
  }
  sub_1B9052C(list);
  return (unsigned __int8)QuestBehaviorMaster__GetBattleIndividuality(v13, v14, v15, v16);
}


DataEntityBase_array *__fastcall QuestBehaviorMaster__getList(
        QuestBehaviorMaster_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1

  if ( (byte_4A702A1 & 1) == 0 )
  {
    sub_1B90010(&Method_JsonManager_DeserializeArray_QuestBehaviorEntity___, obj);
    sub_1B90010(&JsonManager_TypeInfo, v4);
    byte_4A702A1 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)JsonManager__DeserializeArray_object_(
                                   obj,
                                   (const MethodInfo_2EF48C0 *)Method_JsonManager_DeserializeArray_QuestBehaviorEntity___);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A702A9 & 1) == 0 )
  {
    sub_1B90010(&QuestBehaviorMaster___c_TypeInfo, v1);
    byte_4A702A9 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(QuestBehaviorMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestBehaviorMaster___c_TypeInfo->static_fields->__9 = (struct QuestBehaviorMaster___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)QuestBehaviorMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B9026C(this, 0LL);
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
    sub_1B9026C(this, 0LL);
  return x->fields.behaviorType == this->fields.kind && QuestBehaviorEntity__checkConditions(x, (const MethodInfo *)x);
}