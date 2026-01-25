void QuestBehaviorMaster___ctor(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CEEC5D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity_____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TypeInfo);
    byte_4CEEC5D = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v3,
    (const MethodInfo_34CDA18 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity_____ctor__);
  this->fields.dictQuestPhaseCache = (struct System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.dictQuestPhaseCache, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    205,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__);
}


int32_t QuestBehaviorMaster__GetBattleBg(
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
                      0);
    if ( !IsNullOrEmpty )
    {
      behaviorValues = v6->fields.behaviorValues;
      if ( !behaviorValues )
        sub_1C7BD40(IsNullOrEmpty, v8);
      if ( !LODWORD(behaviorValues->max_length) )
        sub_1C7BD48(IsNullOrEmpty);
      return behaviorValues->m_Items[0];
    }
  }
  return defaultBgNo;
}


int32_t QuestBehaviorMaster__GetBattleBgType(
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
                      0);
    if ( !IsNullOrEmpty )
    {
      behaviorValues = v6->fields.behaviorValues;
      if ( !behaviorValues )
        sub_1C7BD40(IsNullOrEmpty, v8);
      if ( !LODWORD(behaviorValues->max_length) )
        sub_1C7BD48(IsNullOrEmpty);
      return behaviorValues->m_Items[0];
    }
  }
  return defType;
}


System_Int32_array *QuestBehaviorMaster__GetBattleIndividuality(
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

  if ( (byte_4CEEC62 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Empty_int___);
    byte_4CEEC62 = 1;
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
        sub_1C51BD8(Method_System_Array_Empty_int___);
        v10 = v9[7];
      }
      v11 = *(_QWORD *)(v10 + 16);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1C51B7C(inited);
      if ( !*(_DWORD *)(v11 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v11);
      v12 = *(_QWORD *)(v9[7] + 16LL);
      if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
        v12 = sub_1C51B7C(inited);
      return **(System_Int32_array ***)(v12 + 184);
    }
  }
  return defVals;
}


// local variable allocation has failed, the output may be wrong!
QuestBehaviorEntity_o *QuestBehaviorMaster__GetEntity(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEEC5B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__);
    byte_4CEEC5B = 1;
  }
  PK = (Il2CppObject *)QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&priority);
  return (QuestBehaviorEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3432DB4 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__);
}


System_Collections_Generic_List_QuestBehaviorEntity__o *QuestBehaviorMaster__GetList(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *lookupCache; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o **p_lookupCache; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x23
  int64_t v29; // x24
  __int64 v30; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v31; // x25
  System_Collections_Generic_List_object__o *v32; // x26
  __int64 v33; // x0
  __int64 v34; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x8
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  System_Collections_Generic_List_object__o *v51; // x19
  int32_t v53; // [xsp+8h] [xbp-78h]
  Il2CppObject *value; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4CEEC5F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TryGetValue__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___set_Item__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestBehaviorEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo);
    byte_4CEEC5F = 1;
  }
  value = 0;
  p_lookupCache = (System_Collections_Generic_Dictionary_TKey__TValue__o **)&this->fields.lookupCache;
  lookupCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.lookupCache;
  if ( !lookupCache )
  {
    v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TypeInfo);
    System_Collections_Generic_Dictionary_long__object____ctor(
      v9,
      (const MethodInfo_34CDA18 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity____ctor__);
    this->fields.lookupCache = (struct System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___o *)v9;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.lookupCache, (int32_t)v9, v10, v11, v12, v13, v14, v15);
    lookupCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.list;
    if ( !lookupCache )
      goto LABEL_46;
    v53 = questId;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)lookupCache,
                   (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1C7BD40(0, v17);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v20;
          p_offset += 4;
          if ( !v20 )
            goto LABEL_10;
        }
        v22 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_10:
        v22 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
              Enumerator,
              *(_QWORD *)(v22 + 8))
          & 1) == 0 )
        break;
      v23 = Enumerator->klass;
      v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v25 = &v23->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_QuestBehaviorEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo )
        {
          --v24;
          v25 += 4;
          if ( !v24 )
            goto LABEL_17;
        }
        v26 = (__int64)&v23->vtable[*v25];
      }
      else
      {
LABEL_17:
        v26 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo, 0);
      }
      v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
              Enumerator,
              *(_QWORD *)(v26 + 8));
      if ( v28 )
      {
        if ( !*p_lookupCache )
          sub_1C7BD40(0, v27);
        v29 = *(unsigned int *)(v28 + 20) | ((unsigned __int64)*(unsigned int *)(v28 + 16) << 32);
        if ( !System_Collections_Generic_Dictionary_long__object___ContainsKey(
                *p_lookupCache,
                v29,
                (const MethodInfo_34CE5DC *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___ContainsKey__) )
        {
          v31 = *p_lookupCache;
          v32 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v32,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__);
          if ( !v31 )
            sub_1C7BD40(v33, v34);
          System_Collections_Generic_Dictionary_long__object___set_Item(
            v31,
            v29,
            (Il2CppObject *)v32,
            (const MethodInfo_34CE3D4 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___set_Item__);
        }
        if ( !*p_lookupCache )
          sub_1C7BD40(0, v30);
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                              *p_lookupCache,
                                                              v29,
                                                              (const MethodInfo_34CE348 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___get_Item__);
        if ( !Item )
          sub_1C7BD40(0, v36);
        items = Item->fields._items;
        v44 = Method_System_Collections_Generic_List_QuestBehaviorEntity__Add__;
        ++Item->fields._version;
        if ( !items )
          sub_1C7BD40(Item, v36);
        size = Item->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            Item,
            (Il2CppObject *)v28,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &items->obj.klass + size;
          Item->fields._size = size + 1;
          v46[4] = (Il2CppClass *)v28;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v46 + 4), v28, v37, v38, v39, v40, v41, v42);
        }
      }
    }
    questId = v53;
    v47 = Enumerator->klass;
    v48 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v49 = &v47->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_34;
      }
      v50 = (__int64)&v47->vtable[*v49];
    }
    else
    {
LABEL_34:
      v50 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
      Enumerator,
      *(_QWORD *)(v50 + 8));
    lookupCache = *p_lookupCache;
    if ( !*p_lookupCache )
LABEL_46:
      sub_1C7BD40(lookupCache, v16);
  }
  if ( System_Collections_Generic_Dictionary_long__object___TryGetValue(
         lookupCache,
         (unsigned int)phase | ((unsigned __int64)(unsigned int)questId << 32),
         &value,
         (const MethodInfo_34CFB60 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TryGetValue__) )
  {
    return (System_Collections_Generic_List_QuestBehaviorEntity__o *)value;
  }
  v51 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__);
  return (System_Collections_Generic_List_QuestBehaviorEntity__o *)v51;
}


QuestBehaviorEntity_o *QuestBehaviorMaster__GetPriorityEntity(
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

  if ( (byte_4CEEC63 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TryGetValue__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_QuestBehaviorEntity___);
    sub_1C7BAE8(&System_Func_QuestBehaviorEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_QuestBehaviorMaster___c__DisplayClass12_0__GetPriorityEntity_b__0__);
    sub_1C7BAE8(&QuestBehaviorMaster___c__DisplayClass12_0_TypeInfo);
    byte_4CEEC63 = 1;
  }
  value = 0;
  v7 = sub_1C7BD34(QuestBehaviorMaster___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = kind,
        (dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache) == 0) )
  {
    sub_1C7BD40(dictQuestPhaseCache, v9);
  }
  if ( !System_Collections_Generic_Dictionary_long__object___TryGetValue(
          dictQuestPhaseCache,
          questPhaseUniqueId,
          &value,
          (const MethodInfo_34CFB60 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TryGetValue__) )
    return 0;
  v10 = value;
  v11 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_QuestBehaviorEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_QuestBehaviorMaster___c__DisplayClass12_0__GetPriorityEntity_b__0__,
    0);
  return (QuestBehaviorEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__52006308(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v10,
                                    (System_Func_TSource__bool__o *)v11,
                                    (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestBehaviorEntity___);
}


void QuestBehaviorMaster__InitQuestPhaseCache(QuestBehaviorMaster_o *this, const MethodInfo *method)
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
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x8
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  System_Action_T__o *v43; // x21
  Il2CppObject *v44; // [xsp+8h] [xbp-68h]

  if ( (byte_4CEEC66 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_KeyValuePair_long__List_QuestBehaviorEntity____TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_ForEach_KeyValuePair_long__List_QuestBehaviorEntity_____);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___set_Item__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OfType_QuestBehaviorEntity___);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestBehaviorEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo);
    sub_1C7BAE8(&Method_QuestBehaviorMaster__InitQuestPhaseCache_b__16_0__);
    byte_4CEEC66 = 1;
  }
  dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache;
  if ( !dictQuestPhaseCache )
    goto LABEL_46;
  System_Collections_Generic_Dictionary_long__object___Clear(
    dictQuestPhaseCache,
    (const MethodInfo_34CE570 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v4,
    (const MethodInfo_34CDA18 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity____ctor__);
  dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__OfType_object_(
                                                                                   (System_Collections_IEnumerable_o *)this->fields.list,
                                                                                   (const MethodInfo_319E9E0 *)Method_System_Linq_Enumerable_OfType_QuestBehaviorEntity___);
  if ( !dictQuestPhaseCache )
    goto LABEL_46;
  klass = dictQuestPhaseCache->klass;
  v6 = dictQuestPhaseCache;
  v7 = *(unsigned __int16 *)&dictQuestPhaseCache->klass->_2.rank;
  if ( *(_WORD *)&dictQuestPhaseCache->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestBehaviorEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_9;
    }
    v9 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v9 = sub_1C51E70(dictQuestPhaseCache, System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo, 0);
  }
  v44 = (Il2CppObject *)this;
  v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v9)(
          v6,
          *(_QWORD *)(v9 + 8));
  if ( !v11 )
    sub_1C7BD40(0, v10);
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
      v15 = sub_1C51E70(v11, System_Collections_IEnumerator_TypeInfo, 0);
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
      v19 = sub_1C51E70(v11, System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo, 0);
    }
    v20 = (QuestBehaviorEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v11, *(_QWORD *)(v19 + 8));
    v22 = (Il2CppObject *)v20;
    if ( !v20 )
      sub_1C7BD40(0, v21);
    UniqueId = QuestBehaviorEntity__GetUniqueId(v20, v21);
    if ( !v4 )
      sub_1C7BD40(UniqueId, v24);
    v25 = UniqueId;
    if ( !System_Collections_Generic_Dictionary_long__object___ContainsKey(
            v4,
            UniqueId,
            (const MethodInfo_34CE5DC *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___ContainsKey__) )
    {
      v26 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v26,
        (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__);
      System_Collections_Generic_Dictionary_long__object___set_Item(
        v4,
        v25,
        (Il2CppObject *)v26,
        (const MethodInfo_34CE3D4 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___set_Item__);
    }
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                          v4,
                                                          v25,
                                                          (const MethodInfo_34CE348 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___get_Item__);
    if ( !Item )
      sub_1C7BD40(0, v28);
    items = Item->fields._items;
    v36 = Method_System_Collections_Generic_List_QuestBehaviorEntity__Add__;
    ++Item->fields._version;
    if ( !items )
      sub_1C7BD40(Item, v28);
    size = Item->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        Item,
        v22,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = &items->obj.klass + size;
      Item->fields._size = size + 1;
      v38[4] = (Il2CppClass *)v22;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v38 + 4), (int32_t)v22, v29, v30, v31, v32, v33, v34);
    }
  }
  v39 = *(_QWORD *)v11;
  v40 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
  {
    v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_38;
    }
    v42 = v39 + 16LL * *v41 + 312;
  }
  else
  {
LABEL_38:
    v42 = sub_1C51E70(v11, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v42)(v11, *(_QWORD *)(v42 + 8));
  v43 = (System_Action_T__o *)sub_1C7BD34(System_Action_KeyValuePair_long__List_QuestBehaviorEntity____TypeInfo);
  System_Action_KeyValuePair_long__object_____ctor(
    v43,
    v44,
    Method_QuestBehaviorMaster__InitQuestPhaseCache_b__16_0__,
    0);
  BasicHelper__ForEach_KeyValuePair_long__object__(
    (System_Collections_Generic_IEnumerable_T__o *)v4,
    v43,
    (const MethodInfo_315AAE8 *)Method_BasicHelper_ForEach_KeyValuePair_long__List_QuestBehaviorEntity_____);
  if ( !v4 )
LABEL_46:
    sub_1C7BD40(dictQuestPhaseCache, method);
  System_Collections_Generic_Dictionary_long__object___Clear(
    v4,
    (const MethodInfo_34CE570 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___Clear__);
}


// local variable allocation has failed, the output may be wrong!
bool QuestBehaviorMaster__IsOpenQuestBehaviorCond(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t behaviorType,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w23

  if ( (byte_4CEEC64 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Item__);
    byte_4CEEC64 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1C7BD40(list, *(_QWORD *)&questId);
  v10 = System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Count__)
      - 1;
  if ( v10 < 0 )
    return 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Item__);
    if ( !list )
      goto LABEL_14;
    if ( LODWORD(list->fields.items) == questId
      && HIDWORD(list->fields.items) == phase
      && LODWORD(list[1].monitor) == behaviorType
      && QuestBehaviorEntity__checkConditions((QuestBehaviorEntity_o *)list, *(const MethodInfo **)&questId) )
    {
      return 1;
    }
    if ( --v10 < 0 )
      return 0;
  }
}


bool QuestBehaviorMaster__IsSharedReward(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int64_t QuestPhaseUniqueId; // x0
  __int64 v8; // x1
  System_Object_array *v10; // x19
  QuestBehaviorMaster___c_c *v11; // x0
  System_Func_object__bool__o *_9__14_0; // x20
  Il2CppObject *v13; // x21
  struct QuestBehaviorMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEEC65 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_QuestBehaviorEntity___);
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TryGetValue__);
    sub_1C7BAE8(&System_Func_QuestBehaviorEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_QuestBehaviorMaster___c__IsSharedReward_b__14_0__);
    sub_1C7BAE8(&QuestBehaviorMaster___c_TypeInfo);
    byte_4CEEC65 = 1;
  }
  value = 0;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  QuestPhaseUniqueId = BattleDataDefine__MakeQuestPhaseUniqueId(questId, phase, 0);
  if ( !this->fields.dictQuestPhaseCache )
    sub_1C7BD40(QuestPhaseUniqueId, v8);
  System_Collections_Generic_Dictionary_long__object___TryGetValue(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache,
    QuestPhaseUniqueId,
    &value,
    (const MethodInfo_34CFB60 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TryGetValue__);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)value, 0) )
  {
    return 0;
  }
  else
  {
    v10 = (System_Object_array *)value;
    v11 = QuestBehaviorMaster___c_TypeInfo;
    if ( !QuestBehaviorMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBehaviorMaster___c_TypeInfo);
      v11 = QuestBehaviorMaster___c_TypeInfo;
    }
    _9__14_0 = (System_Func_object__bool__o *)v11->static_fields->__9__14_0;
    if ( !_9__14_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = QuestBehaviorMaster___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__14_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_QuestBehaviorEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__14_0, v13, Method_QuestBehaviorMaster___c__IsSharedReward_b__14_0__, 0);
      static_fields = QuestBehaviorMaster___c_TypeInfo->static_fields;
      static_fields->__9__14_0 = (struct System_Func_QuestBehaviorEntity__bool__o *)_9__14_0;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__14_0,
        (int32_t)_9__14_0,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    return BasicHelper__Any_object__51746772(
             v10,
             (System_Func_T__bool__o *)_9__14_0,
             (const MethodInfo_31597D4 *)Method_BasicHelper_Any_QuestBehaviorEntity___);
  }
}


// local variable allocation has failed, the output may be wrong!
bool QuestBehaviorMaster__TryGetEntity(
        QuestBehaviorMaster_o *this,
        QuestBehaviorEntity_o **entity,
        int32_t questId,
        int32_t phase,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEEC5C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__);
    byte_4CEEC5C = 1;
  }
  PK = (Il2CppObject *)QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__);
}


void QuestBehaviorMaster___InitQuestPhaseCache_b__16_0(
        QuestBehaviorMaster_o *this,
        System_Collections_Generic_KeyValuePair_long__List_QuestBehaviorEntity___o pair,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBehaviorEntity__o *value; // x20
  int64_t key; // x19
  QuestBehaviorMaster___c_c *v6; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictQuestPhaseCache; // x21
  System_Func_object__int__o *_9__16_1; // x22
  Il2CppObject *v9; // x23
  struct QuestBehaviorMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Object_array *v18; // x0
  __int64 v19; // x1

  value = pair.fields.value;
  key = pair.fields.key;
  if ( (byte_4CEEC67 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____set_Item__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderByDescending_QuestBehaviorEntity__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
    sub_1C7BAE8(&System_Func_QuestBehaviorEntity__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_long__List_QuestBehaviorEntity___get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_long__List_QuestBehaviorEntity___get_Value__);
    sub_1C7BAE8(&Method_QuestBehaviorMaster___c__InitQuestPhaseCache_b__16_1__);
    sub_1C7BAE8(&QuestBehaviorMaster___c_TypeInfo);
    byte_4CEEC67 = 1;
  }
  v6 = QuestBehaviorMaster___c_TypeInfo;
  dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache;
  if ( !QuestBehaviorMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBehaviorMaster___c_TypeInfo);
    v6 = QuestBehaviorMaster___c_TypeInfo;
  }
  _9__16_1 = (System_Func_object__int__o *)v6->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = QuestBehaviorMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__16_1 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_QuestBehaviorEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__16_1, v9, Method_QuestBehaviorMaster___c__InitQuestPhaseCache_b__16_1__, 0);
    static_fields = QuestBehaviorMaster___c_TypeInfo->static_fields;
    static_fields->__9__16_1 = (struct System_Func_QuestBehaviorEntity__int__o *)_9__16_1;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_1,
      (int32_t)_9__16_1,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)value,
                                                               (System_Func_TSource__TKey__o *)_9__16_1,
                                                               (const MethodInfo_319F4D8 *)Method_System_Linq_Enumerable_OrderByDescending_QuestBehaviorEntity__int___);
  v18 = System_Linq_Enumerable__ToArray_object_(
          v17,
          (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
  if ( !dictQuestPhaseCache )
    sub_1C7BD40(v18, v19);
  System_Collections_Generic_Dictionary_long__object___set_Item(
    dictQuestPhaseCache,
    key,
    &v18->obj,
    (const MethodInfo_34CE3D4 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____set_Item__);
}


QuestBehaviorEntity_array *QuestBehaviorMaster__getBattleSkill(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v7; // x22
  const MethodInfo *v8; // x1
  void *list; // x0
  int32_t v10; // w23
  QuestBehaviorEntity_o *v11; // x24
  int32_t priority; // w28
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_4CEEC60 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
    byte_4CEEC60 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Count__);
  v10 = (_DWORD)list - 1;
  if ( (int)list - 1 >= 0 )
  {
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Item__);
      if ( !list )
        break;
      v11 = (QuestBehaviorEntity_o *)list;
      if ( *((_DWORD *)list + 4) == questId && *((_DWORD *)list + 5) == phase && *((_DWORD *)list + 8) == 1 )
      {
        if ( !v7 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v7,
                *((_DWORD *)list + 6),
                (const MethodInfo_3487904 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__) )
          goto LABEL_14;
        priority = v11->fields.priority;
        list = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v7,
                 v11->fields.num,
                 (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__);
        if ( !list )
          break;
        if ( priority >= *((_DWORD *)list + 7) )
        {
LABEL_14:
          list = (void *)QuestBehaviorEntity__checkConditions(v11, v8);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            System_Collections_Generic_Dictionary_int__object___Remove(
              v7,
              v11->fields.num,
              (const MethodInfo_3488B98 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__);
            System_Collections_Generic_Dictionary_int__object___Add(
              v7,
              v11->fields.num,
              (Il2CppObject *)v11,
              (const MethodInfo_3487710 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__);
          }
        }
      }
      if ( --v10 < 0 )
        goto LABEL_17;
    }
LABEL_21:
    sub_1C7BD40(list, v8);
  }
LABEL_17:
  if ( !v7 )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          v7,
          (const MethodInfo_34873C0 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__) )
    return 0;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             v7,
             (const MethodInfo_3487520 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__);
  return (QuestBehaviorEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                        (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool QuestBehaviorMaster__getEnableContinue(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22

  if ( (byte_4CEEC61 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Item__);
    byte_4CEEC61 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1C7BD40(list, *(_QWORD *)&questId);
  v8 = System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Count__)
     - 1;
  if ( v8 < 0 )
    return 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Item__);
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
    if ( --v8 < 0 )
      return 0;
  }
}


QuestBehaviorEntity_array *QuestBehaviorMaster__getList(
        QuestBehaviorMaster_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  if ( (byte_4CEEC5E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_JsonManager_DeserializeArray_QuestBehaviorEntity___);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    byte_4CEEC5E = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (QuestBehaviorEntity_array *)JsonManager__DeserializeArray_object_(
                                        obj,
                                        (const MethodInfo_31DEFB4 *)Method_JsonManager_DeserializeArray_QuestBehaviorEntity___);
}


bool QuestBehaviorMaster__preProcess(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  QuestBehaviorMaster__InitQuestPhaseCache(this, method);
  return 1;
}


void QuestBehaviorMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEEC68 & 1) == 0 )
  {
    sub_1C7BAE8(&QuestBehaviorMaster___c_TypeInfo);
    byte_4CEEC68 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(QuestBehaviorMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestBehaviorMaster___c_TypeInfo->static_fields->__9 = (struct QuestBehaviorMaster___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)QuestBehaviorMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestBehaviorMaster___c___ctor(QuestBehaviorMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestBehaviorMaster___c___InitQuestPhaseCache_b__16_1(
        QuestBehaviorMaster___c_o *this,
        QuestBehaviorEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C7BD40(this, 0);
  return ent->fields.priority;
}


bool QuestBehaviorMaster___c___IsSharedReward_b__14_0(
        QuestBehaviorMaster___c_o *this,
        QuestBehaviorEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C7BD40(this, 0);
  return n->fields.behaviorType == 11;
}


void QuestBehaviorMaster___c__DisplayClass12_0___ctor(
        QuestBehaviorMaster___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBehaviorMaster___c__DisplayClass12_0___GetPriorityEntity_b__0(
        QuestBehaviorMaster___c__DisplayClass12_0_o *this,
        QuestBehaviorEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.behaviorType == this->fields.kind && QuestBehaviorEntity__checkConditions(x, (const MethodInfo *)x);
}