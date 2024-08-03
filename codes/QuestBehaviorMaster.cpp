void __fastcall QuestBehaviorMaster___ctor(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FC835 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity_____ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TypeInfo, v5);
    byte_49FC835 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TypeInfo,
                                                                  method,
                                                                  v2);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v6,
    (const MethodInfo_3160DCC *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity_____ctor__);
  this->fields.dictQuestPhaseCache = (struct System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dictQuestPhaseCache, (int32_t)v6, v7, v8);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    201,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__);
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
        sub_1B64324(IsNullOrEmpty);
      if ( !behaviorValues->max_length )
        sub_1B6432C(IsNullOrEmpty, v8);
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
        sub_1B64324(IsNullOrEmpty);
      if ( !behaviorValues->max_length )
        sub_1B6432C(IsNullOrEmpty, v8);
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

  if ( (byte_49FC839 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, questPhaseUniqueId);
    byte_49FC839 = 1;
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
        sub_1BB6000(Method_System_Array_Empty_int___);
        v9 = v8[7];
      }
      v10 = *(_QWORD *)(v9 + 16);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1BB5FA4(v10);
      if ( !*(_DWORD *)(v10 + 224) )
        j_il2cpp_runtime_class_init_0(v10);
      v11 = *(_QWORD *)(v8[7] + 16LL);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1BB5FA4(v11);
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

  if ( (byte_49FC833 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_49FC833 = 1;
  }
  PK = (Il2CppObject *)QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&priority);
  return (QuestBehaviorEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_30D41FC *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v14; // x2
  Il2CppObject *v15; // x19
  System_Func_object__bool__o *v16; // x20
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FC83A & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TryGetValue__,
      questPhaseUniqueId);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_QuestBehaviorEntity___, v7);
    sub_1B640C8(&System_Func_QuestBehaviorEntity__bool__TypeInfo, v8);
    sub_1B640C8(&Method_QuestBehaviorMaster___c__DisplayClass10_0__GetPriorityEntity_b__0__, v9);
    sub_1B640C8(&QuestBehaviorMaster___c__DisplayClass10_0_TypeInfo, v10);
    byte_49FC83A = 1;
  }
  value = 0LL;
  v11 = sub_1B64314(QuestBehaviorMaster___c__DisplayClass10_0_TypeInfo, questPhaseUniqueId, *(_QWORD *)&kind);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = kind,
        (dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache) == 0LL) )
  {
    sub_1B64324(dictQuestPhaseCache);
  }
  if ( !System_Collections_Generic_Dictionary_long__object___TryGetValue(
          dictQuestPhaseCache,
          questPhaseUniqueId,
          &value,
          (const MethodInfo_3162F14 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TryGetValue__) )
    return 0LL;
  v15 = value;
  v16 = (System_Func_object__bool__o *)sub_1B64314(System_Func_QuestBehaviorEntity__bool__TypeInfo, v13, v14);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_QuestBehaviorMaster___c__DisplayClass10_0__GetPriorityEntity_b__0__,
    0LL);
  return (QuestBehaviorEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                    (System_Func_TSource__bool__o *)v16,
                                    (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestBehaviorEntity___);
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
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v23; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v25; // x21
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  __int64 v29; // x21
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  QuestBehaviorEntity_o *v38; // x0
  const MethodInfo *v39; // x1
  Il2CppObject *v40; // x22
  int64_t UniqueId; // x0
  int64_t v42; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_object__o *v45; // x24
  System_Collections_Generic_List_object__o *Item; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x8
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  System_Action_T__o *v59; // x21
  Il2CppObject *v60; // [xsp+8h] [xbp-68h]

  if ( (byte_49FC83C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_KeyValuePair_long__List_QuestBehaviorEntity____TypeInfo, method);
    sub_1B640C8(&Method_BasicHelper_ForEach_KeyValuePair_long__List_QuestBehaviorEntity_____, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____Clear__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___ContainsKey__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity____ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___get_Item__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___set_Item__, v9);
    sub_1B640C8(&System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TypeInfo, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_QuestBehaviorEntity___, v11);
    sub_1B640C8(&System_IDisposable_TypeInfo, v12);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo, v14);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBehaviorEntity__Add__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__, v17);
    sub_1B640C8(&System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo, v18);
    sub_1B640C8(&Method_QuestBehaviorMaster__InitQuestPhaseCache_b__13_0__, v19);
    byte_49FC83C = 1;
  }
  dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache;
  if ( !dictQuestPhaseCache )
    goto LABEL_46;
  System_Collections_Generic_Dictionary_long__object___Clear(
    dictQuestPhaseCache,
    (const MethodInfo_3161924 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____Clear__);
  v23 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TypeInfo,
                                                                   v21,
                                                                   v22);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v23,
    (const MethodInfo_3160DCC *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity____ctor__);
  dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__OfType_object_(
                                                                                   (System_Collections_IEnumerable_o *)this->fields.list,
                                                                                   (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_QuestBehaviorEntity___);
  if ( !dictQuestPhaseCache )
    goto LABEL_46;
  klass = dictQuestPhaseCache->klass;
  v25 = dictQuestPhaseCache;
  v26 = *(unsigned __int16 *)(&dictQuestPhaseCache->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&dictQuestPhaseCache->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestBehaviorEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo )
    {
      --v26;
      p_offset += 4;
      if ( !v26 )
        goto LABEL_9;
    }
    v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v28 = sub_1BB60A8(dictQuestPhaseCache, System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo, 0LL);
  }
  v60 = (Il2CppObject *)this;
  v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v28)(
          v25,
          *(_QWORD *)(v28 + 8));
  if ( !v29 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v30 = *(_QWORD *)v29;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_16;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_16:
      v33 = sub_1BB60A8(v29, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8)) & 1) == 0 )
      break;
    v34 = *(_QWORD *)v29;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestBehaviorEntity__c **)v36 - 1) != System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_23;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_23:
      v37 = sub_1BB60A8(v29, System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo, 0LL);
    }
    v38 = (QuestBehaviorEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v29, *(_QWORD *)(v37 + 8));
    v40 = (Il2CppObject *)v38;
    if ( !v38 )
      sub_1B64324(0LL);
    UniqueId = QuestBehaviorEntity__GetUniqueId(v38, v39);
    if ( !v23 )
      sub_1B64324(UniqueId);
    v42 = UniqueId;
    if ( !System_Collections_Generic_Dictionary_long__object___ContainsKey(
            v23,
            UniqueId,
            (const MethodInfo_3161990 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___ContainsKey__) )
    {
      v45 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo,
                                                           v43,
                                                           v44);
      System_Collections_Generic_List_object____ctor(
        v45,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__);
      System_Collections_Generic_Dictionary_long__object___set_Item(
        v23,
        v42,
        (Il2CppObject *)v45,
        (const MethodInfo_3161788 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___set_Item__);
    }
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                          v23,
                                                          v42,
                                                          (const MethodInfo_31616FC *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___get_Item__);
    if ( !Item )
      sub_1B64324(0LL);
    items = Item->fields._items;
    v50 = Method_System_Collections_Generic_List_QuestBehaviorEntity__Add__;
    ++Item->fields._version;
    if ( !items )
      sub_1B64324(Item);
    size = Item->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        Item,
        v40,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    }
    else
    {
      v52 = &items->obj.klass + size;
      Item->fields._size = size + 1;
      v52[4] = (Il2CppClass *)v40;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v52 + 4), (int32_t)v40, v47, v48);
    }
  }
  v53 = *(_QWORD *)v29;
  v54 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
  {
    v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      --v54;
      v55 += 4;
      if ( !v54 )
        goto LABEL_38;
    }
    v56 = v53 + 16LL * *v55 + 312;
  }
  else
  {
LABEL_38:
    v56 = sub_1BB60A8(v29, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v56)(v29, *(_QWORD *)(v56 + 8));
  v59 = (System_Action_T__o *)sub_1B64314(
                                System_Action_KeyValuePair_long__List_QuestBehaviorEntity____TypeInfo,
                                v57,
                                v58);
  System_Action_KeyValuePair_long__object_____ctor(
    v59,
    v60,
    Method_QuestBehaviorMaster__InitQuestPhaseCache_b__13_0__,
    0LL);
  BasicHelper__ForEach_KeyValuePair_long__object__(
    (System_Collections_Generic_IEnumerable_T__o *)v23,
    v59,
    (const MethodInfo_2E25930 *)Method_BasicHelper_ForEach_KeyValuePair_long__List_QuestBehaviorEntity_____);
  if ( !v23 )
LABEL_46:
    sub_1B64324(dictQuestPhaseCache);
  System_Collections_Generic_Dictionary_long__object___Clear(
    v23,
    (const MethodInfo_3161924 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___Clear__);
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
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w23
  __int64 methodPtr_low; // x9
  QuestBehaviorMaster_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_49FC83B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B640C8(&QuestBehaviorEntity_TypeInfo, v10);
    byte_49FC83B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1B64324(list);
  v12 = System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
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
                                                               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_16;
    methodPtr_low = LOBYTE(QuestBehaviorEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == questId
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
  sub_1B645E4(list);
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

  if ( (byte_49FC834 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__, entity);
    byte_49FC834 = 1;
  }
  PK = (Il2CppObject *)QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__);
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

  value = (System_Collections_Generic_IEnumerable_TSource__o *)pair.fields.value;
  key = pair.fields.key;
  if ( (byte_49FC83D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____set_Item__, pair.fields.key);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_QuestBehaviorEntity__int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___, v7);
    sub_1B640C8(&System_Func_QuestBehaviorEntity__int__TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_long__List_QuestBehaviorEntity___get_Key__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_long__List_QuestBehaviorEntity___get_Value__, v10);
    sub_1B640C8(&Method_QuestBehaviorMaster___c__InitQuestPhaseCache_b__13_1__, v11);
    sub_1B640C8(&QuestBehaviorMaster___c_TypeInfo, v12);
    byte_49FC83D = 1;
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
    _9__13_1 = (System_Func_object__int__o *)sub_1B64314(
                                               System_Func_QuestBehaviorEntity__int__TypeInfo,
                                               pair.fields.key,
                                               pair.fields.value);
    System_Func_object__int____ctor(_9__13_1, v16, Method_QuestBehaviorMaster___c__InitQuestPhaseCache_b__13_1__, 0LL);
    static_fields = QuestBehaviorMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_1 = (struct System_Func_QuestBehaviorEntity__int__o *)_9__13_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_1, (int32_t)_9__13_1, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               value,
                                                               (System_Func_TSource__TKey__o *)_9__13_1,
                                                               (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_QuestBehaviorEntity__int___);
  v21 = System_Linq_Enumerable__ToArray_object_(
          v20,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
  if ( !dictQuestPhaseCache )
    sub_1B64324(v21);
  System_Collections_Generic_Dictionary_long__object___set_Item(
    dictQuestPhaseCache,
    key,
    &v21->obj,
    (const MethodInfo_3161788 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____set_Item__);
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
  void *list; // x0
  int32_t v20; // w23
  QuestBehaviorEntity_o *v21; // x24
  __int64 methodPtr_low; // x9
  const MethodInfo *v23; // x1
  int32_t priority; // w29
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  QuestBehaviorMaster_o *v27; // x0
  int32_t v28; // w1
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_49FC837 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__, v14);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo, v15);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___, v16);
    sub_1B640C8(&QuestBehaviorEntity_TypeInfo, v17);
    byte_49FC837 = 1;
  }
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo,
                                                                  *(_QWORD *)&questId,
                                                                  *(_QWORD *)&phase);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (_DWORD)list - 1;
  if ( (int)list - 1 < 0 )
  {
LABEL_19:
    if ( v18 )
    {
      if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
              v18,
              (const MethodInfo_3123634 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__) )
        return 0LL;
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 v18,
                 (const MethodInfo_3123794 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__);
      return (QuestBehaviorEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                            (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
    }
LABEL_23:
    sub_1B64324(list);
  }
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_23;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v20,
             (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_23;
    v21 = (QuestBehaviorEntity_o *)list;
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
              (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__) )
        goto LABEL_16;
      priority = v21->fields.priority;
      list = System_Collections_Generic_Dictionary_int__object___get_Item(
               v18,
               v21->fields.num,
               (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__);
      if ( !list )
        goto LABEL_23;
      if ( priority >= *((_DWORD *)list + 7) )
      {
LABEL_16:
        list = (void *)QuestBehaviorEntity__checkConditions(v21, v23);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          System_Collections_Generic_Dictionary_int__object___Remove(
            v18,
            v21->fields.num,
            (const MethodInfo_3124E0C *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__);
          System_Collections_Generic_Dictionary_int__object___Add(
            v18,
            v21->fields.num,
            (Il2CppObject *)v21,
            (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__);
        }
      }
    }
    if ( --v20 < 0 )
      goto LABEL_19;
  }
  sub_1B645E4(list);
  return (QuestBehaviorEntity_array *)QuestBehaviorMaster__getEnableContinue(v27, v28, v29, v30);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBehaviorMaster__getEnableContinue(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w22
  __int64 methodPtr_low; // x9
  QuestBehaviorMaster_o *v13; // x0
  int64_t v14; // x1
  System_Int32_array *v15; // x2
  const MethodInfo *v16; // x3

  if ( (byte_49FC838 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&QuestBehaviorEntity_TypeInfo, v8);
    byte_49FC838 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1B64324(list);
  v10 = System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
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
                                                               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_17;
    methodPtr_low = LOBYTE(QuestBehaviorEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == questId
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
  sub_1B645E4(list);
  return (unsigned __int8)QuestBehaviorMaster__GetBattleIndividuality(v13, v14, v15, v16);
}


DataEntityBase_array *__fastcall QuestBehaviorMaster__getList(
        QuestBehaviorMaster_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1

  if ( (byte_49FC836 & 1) == 0 )
  {
    sub_1B640C8(&Method_JsonManager_DeserializeArray_QuestBehaviorEntity___, obj);
    sub_1B640C8(&JsonManager_TypeInfo, v4);
    byte_49FC836 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)JsonManager__DeserializeArray_object_(
                                   obj,
                                   (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_QuestBehaviorEntity___);
}


bool __fastcall QuestBehaviorMaster__preProcess(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  QuestBehaviorMaster__InitQuestPhaseCache(this, method);
  return 1;
}


void __fastcall QuestBehaviorMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC83E & 1) == 0 )
  {
    sub_1B640C8(&QuestBehaviorMaster___c_TypeInfo, v1);
    byte_49FC83E = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(QuestBehaviorMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  QuestBehaviorMaster___c_TypeInfo->static_fields->__9 = (struct QuestBehaviorMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)QuestBehaviorMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields.behaviorType == this->fields.kind && QuestBehaviorEntity__checkConditions(x, (const MethodInfo *)x);
}